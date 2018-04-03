	mm->size = size;
}

/*
 * Customizable low-level merge drivers support.
 */

struct ll_merge_driver;
typedef int (*ll_merge_fn)(const struct ll_merge_driver *,
			   const char *path,
			   mmfile_t *orig,
			   mmfile_t *src1, const char *name1,
			   mmfile_t *src2, const char *name2,
			   mmbuffer_t *result);

struct ll_merge_driver {
	const char *name;
	const char *description;
	ll_merge_fn fn;
	const char *recursive;
	struct ll_merge_driver *next;
	char *cmdline;
};

/*
 * Built-in low-levels
 */
static int ll_binary_merge(const struct ll_merge_driver *drv_unused,
			   const char *path_unused,
			   mmfile_t *orig,
			   mmfile_t *src1, const char *name1,
			   mmfile_t *src2, const char *name2,
			   mmbuffer_t *result)
{
	/*
	 * The tentative merge result is "ours" for the final round,
	 * or common ancestor for an internal merge.  Still return
	 * "conflicted merge" status.
	 */
	mmfile_t *stolen = index_only ? orig : src1;

	result->ptr = stolen->ptr;
	result->size = stolen->size;
	stolen->ptr = NULL;
	return 1;
}

static int ll_xdl_merge(const struct ll_merge_driver *drv_unused,
			const char *path_unused,
			mmfile_t *orig,
			mmfile_t *src1, const char *name1,
			mmfile_t *src2, const char *name2,
			mmbuffer_t *result)
{
	xpparam_t xpp;

	if (buffer_is_binary(orig->ptr, orig->size) ||
	    buffer_is_binary(src1->ptr, src1->size) ||
	    buffer_is_binary(src2->ptr, src2->size)) {
		warning("Cannot merge binary files: %s vs. %s\n",
			name1, name2);
		return ll_binary_merge(drv_unused, path_unused,
				       orig, src1, name1,
				       src2, name2,
				       result);
	}

	memset(&xpp, 0, sizeof(xpp));
	return xdl_merge(orig,
			 src1, name1,
			 src2, name2,
			 &xpp, XDL_MERGE_ZEALOUS,
			 result);
}

static int ll_union_merge(const struct ll_merge_driver *drv_unused,
			  const char *path_unused,
			  mmfile_t *orig,
			  mmfile_t *src1, const char *name1,
			  mmfile_t *src2, const char *name2,
			  mmbuffer_t *result)
{
	char *src, *dst;
	long size;
	const int marker_size = 7;

	int status = ll_xdl_merge(drv_unused, path_unused,
				  orig, src1, NULL, src2, NULL, result);
	if (status <= 0)
		return status;
	size = result->size;
	src = dst = result->ptr;
	while (size) {
		char ch;
		if ((marker_size < size) &&
		    (*src == '<' || *src == '=' || *src == '>')) {
			int i;
			ch = *src;
			for (i = 0; i < marker_size; i++)
				if (src[i] != ch)
					goto not_a_marker;
			if (src[marker_size] != '\n')
				goto not_a_marker;
			src += marker_size + 1;
			size -= marker_size + 1;
			continue;
		}
	not_a_marker:
		do {
			ch = *src++;
			*dst++ = ch;
			size--;
		} while (ch != '\n' && size);
	}
	result->size = dst - result->ptr;
	return 0;
}

#define LL_BINARY_MERGE 0
#define LL_TEXT_MERGE 1
#define LL_UNION_MERGE 2
static struct ll_merge_driver ll_merge_drv[] = {
	{ "binary", "built-in binary merge", ll_binary_merge },
	{ "text", "built-in 3-way text merge", ll_xdl_merge },
	{ "union", "built-in union merge", ll_union_merge },
};

static void create_temp(mmfile_t *src, char *path)
{
	int fd;

	strcpy(path, ".merge_file_XXXXXX");
	fd = xmkstemp(path);
	if (write_in_full(fd, src->ptr, src->size) != src->size)
		die("unable to write temp-file");
	close(fd);
}

/*
 * User defined low-level merge driver support.
 */
static int ll_ext_merge(const struct ll_merge_driver *fn,
			const char *path,
			mmfile_t *orig,
			mmfile_t *src1, const char *name1,
			mmfile_t *src2, const char *name2,
			mmbuffer_t *result)
{
	char temp[3][50];
	char cmdbuf[2048];
	struct interp table[] = {
		{ "%O" },
		{ "%A" },
		{ "%B" },
	};
	struct child_process child;
	const char *args[20];
	int status, fd, i;
	struct stat st;

	if (fn->cmdline == NULL)
		die("custom merge driver %s lacks command line.", fn->name);

	result->ptr = NULL;
	result->size = 0;
	create_temp(orig, temp[0]);
	create_temp(src1, temp[1]);
	create_temp(src2, temp[2]);

	interp_set_entry(table, 0, temp[0]);
	interp_set_entry(table, 1, temp[1]);
	interp_set_entry(table, 2, temp[2]);

	output(1, "merging %s using %s", path,
	       fn->description ? fn->description : fn->name);

	interpolate(cmdbuf, sizeof(cmdbuf), fn->cmdline, table, 3);

	memset(&child, 0, sizeof(child));
	child.argv = args;
	args[0] = "sh";
	args[1] = "-c";
	args[2] = cmdbuf;
	args[3] = NULL;

	status = run_command(&child);
	if (status < -ERR_RUN_COMMAND_FORK)
		; /* failure in run-command */
	else
		status = -status;
	fd = open(temp[1], O_RDONLY);
	if (fd < 0)
		goto bad;
	if (fstat(fd, &st))
		goto close_bad;
	result->size = st.st_size;
	result->ptr = xmalloc(result->size + 1);
	if (read_in_full(fd, result->ptr, result->size) != result->size) {
		free(result->ptr);
		result->ptr = NULL;
		result->size = 0;
	}
 close_bad:
	close(fd);
 bad:
	for (i = 0; i < 3; i++)
		unlink(temp[i]);
	return status;
}

/*
 * merge.default and merge.driver configuration items
 */
static struct ll_merge_driver *ll_user_merge, **ll_user_merge_tail;
static const char *default_ll_merge;

static int read_merge_config(const char *var, const char *value)
{
	struct ll_merge_driver *fn;
	const char *ep, *name;
	int namelen;

	if (!strcmp(var, "merge.default")) {
		if (!value)
			return config_error_nonbool(var);
		default_ll_merge = strdup(value);
		return 0;
	}

	/*
	 * We are not interested in anything but "merge.<name>.variable";
	 * especially, we do not want to look at variables such as
	 * "merge.summary", "merge.tool", and "merge.verbosity".
	 */
	if (prefixcmp(var, "merge.") || (ep = strrchr(var, '.')) == var + 5)
		return 0;

	/*
	 * Find existing one as we might be processing merge.<name>.var2
	 * after seeing merge.<name>.var1.
	 */
	name = var + 6;
	namelen = ep - name;
	for (fn = ll_user_merge; fn; fn = fn->next)
		if (!strncmp(fn->name, name, namelen) && !fn->name[namelen])
			break;
	if (!fn) {
		fn = xcalloc(1, sizeof(struct ll_merge_driver));
		fn->name = xmemdupz(name, namelen);
		fn->fn = ll_ext_merge;
		*ll_user_merge_tail = fn;
		ll_user_merge_tail = &(fn->next);
	}

	ep++;

	if (!strcmp("name", ep)) {
		if (!value)
			return config_error_nonbool(var);
		fn->description = strdup(value);
		return 0;
	}

	if (!strcmp("driver", ep)) {
		if (!value)
			return config_error_nonbool(var);
		/*
		 * merge.<name>.driver specifies the command line:
		 *
		 *	command-line
		 *
		 * The command-line will be interpolated with the following
		 * tokens and is given to the shell:
		 *
		 *    %O - temporary file name for the merge base.
		 *    %A - temporary file name for our version.
		 *    %B - temporary file name for the other branches' version.
		 *
		 * The external merge driver should write the results in the
		 * file named by %A, and signal that it has done with zero exit
		 * status.
		 */
		fn->cmdline = strdup(value);
		return 0;
	}

	if (!strcmp("recursive", ep)) {
		if (!value)
			return config_error_nonbool(var);
		fn->recursive = strdup(value);
		return 0;
	}

	return 0;
}

static void initialize_ll_merge(void)
{
	if (ll_user_merge_tail)
		return;
	ll_user_merge_tail = &ll_user_merge;
	git_config(read_merge_config);
}

static const struct ll_merge_driver *find_ll_merge_driver(const char *merge_attr)
{
	struct ll_merge_driver *fn;
	const char *name;
	int i;

	initialize_ll_merge();

	if (ATTR_TRUE(merge_attr))
		return &ll_merge_drv[LL_TEXT_MERGE];
	else if (ATTR_FALSE(merge_attr))
		return &ll_merge_drv[LL_BINARY_MERGE];
	else if (ATTR_UNSET(merge_attr)) {
		if (!default_ll_merge)
			return &ll_merge_drv[LL_TEXT_MERGE];
		else
			name = default_ll_merge;
	}
	else
		name = merge_attr;

	for (fn = ll_user_merge; fn; fn = fn->next)
		if (!strcmp(fn->name, name))
			return fn;

	for (i = 0; i < ARRAY_SIZE(ll_merge_drv); i++)
		if (!strcmp(ll_merge_drv[i].name, name))
			return &ll_merge_drv[i];

	/* default to the 3-way */
	return &ll_merge_drv[LL_TEXT_MERGE];
}

static const char *git_path_check_merge(const char *path)
{
	static struct git_attr_check attr_merge_check;

	if (!attr_merge_check.attr)
		attr_merge_check.attr = git_attr("merge", 5);

	if (git_checkattr(path, 1, &attr_merge_check))
		return NULL;
	return attr_merge_check.value;
}

static int ll_merge(mmbuffer_t *result_buf,
		    struct diff_filespec *o,
		    struct diff_filespec *a,
		    struct diff_filespec *b,
		    const char *branch1,
		    const char *branch2)
{
	mmfile_t orig, src1, src2;
	char *name1, *name2;
	int merge_status;
	const char *ll_driver_name;
	const struct ll_merge_driver *driver;

	name1 = xstrdup(mkpath("%s:%s", branch1, a->path));
	name2 = xstrdup(mkpath("%s:%s", branch2, b->path));
