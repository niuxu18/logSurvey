	return !stat(rr_path(name, "postimage"), &st);
}

static void read_rr(struct path_list *rr)
{
	unsigned char sha1[20];
	char buf[PATH_MAX];
	FILE *in = fopen(merge_rr_path, "r");
	if (!in)
		return;
	while (fread(buf, 40, 1, in) == 1) {
		int i;
		char *name;
		if (get_sha1_hex(buf, sha1))
			die("corrupt MERGE_RR");
		buf[40] = '\0';
		name = xstrdup(buf);
		if (fgetc(in) != '\t')
			die("corrupt MERGE_RR");
		for (i = 0; i < sizeof(buf) && (buf[i] = fgetc(in)); i++)
			; /* do nothing */
		if (i == sizeof(buf))
			die("filename too long");
		path_list_insert(buf, rr)->util = name;
	}
	fclose(in);
}

static struct lock_file write_lock;

static int write_rr(struct path_list *rr, int out_fd)
{
	int i;
	for (i = 0; i < rr->nr; i++) {
		const char *path;
		int length;
		if (!rr->items[i].util)
			continue;
		path = rr->items[i].path;
		length = strlen(path) + 1;
		if (write_in_full(out_fd, rr->items[i].util, 40) != 40 ||
		    write_in_full(out_fd, "\t", 1) != 1 ||
		    write_in_full(out_fd, path, length) != length)
			die("unable to write rerere record");
	}
	if (commit_lock_file(&write_lock) != 0)
		die("unable to write rerere record");
	return 0;
}

static int handle_file(const char *path,
	 unsigned char *sha1, const char *output)
{
	SHA_CTX ctx;
	char buf[1024];
	int hunk = 0, hunk_no = 0;
	struct strbuf one, two;
	FILE *f = fopen(path, "r");
	FILE *out = NULL;

	if (!f)
		return error("Could not open %s", path);

	if (output) {
		out = fopen(output, "w");
		if (!out) {
			fclose(f);
			return error("Could not write %s", output);
		}
	}

	if (sha1)
		SHA1_Init(&ctx);

	strbuf_init(&one, 0);
	strbuf_init(&two,  0);
	while (fgets(buf, sizeof(buf), f)) {
		if (!prefixcmp(buf, "<<<<<<< ")) {
			if (hunk)
				goto bad;
			hunk = 1;
		} else if (!prefixcmp(buf, "=======") && isspace(buf[7])) {
			if (hunk != 1)
				goto bad;
			hunk = 2;
		} else if (!prefixcmp(buf, ">>>>>>> ")) {
			if (hunk != 2)
				goto bad;
			if (strbuf_cmp(&one, &two) > 0)
				strbuf_swap(&one, &two);
			hunk_no++;
			hunk = 0;
			if (out) {
				fputs("<<<<<<<\n", out);
				fwrite(one.buf, one.len, 1, out);
				fputs("=======\n", out);
				fwrite(two.buf, two.len, 1, out);
				fputs(">>>>>>>\n", out);
			}
			if (sha1) {
				SHA1_Update(&ctx, one.buf ? one.buf : "",
					    one.len + 1);
				SHA1_Update(&ctx, two.buf ? two.buf : "",
					    two.len + 1);
			}
			strbuf_reset(&one);
			strbuf_reset(&two);
		} else if (hunk == 1)
			strbuf_addstr(&one, buf);
		else if (hunk == 2)
			strbuf_addstr(&two, buf);
		else if (out)
			fputs(buf, out);
		continue;
	bad:
		hunk = 99; /* force error exit */
		break;
	}
	strbuf_release(&one);
	strbuf_release(&two);

	fclose(f);
	if (out)
		fclose(out);
	if (sha1)
		SHA1_Final(sha1, &ctx);
	if (hunk) {
		if (output)
			unlink(output);
		return error("Could not parse conflict hunks in %s", path);
	}
	return hunk_no;
}

static int find_conflict(struct path_list *conflict)
{
	int i;
	if (read_cache() < 0)
		return error("Could not read index");
	for (i = 0; i+1 < active_nr; i++) {
		struct cache_entry *e2 = active_cache[i];
		struct cache_entry *e3 = active_cache[i+1];
		if (ce_stage(e2) == 2 &&
		    ce_stage(e3) == 3 &&
		    ce_same_name(e2, e3) &&
		    S_ISREG(e2->ce_mode) &&
		    S_ISREG(e3->ce_mode)) {
			path_list_insert((const char *)e2->name, conflict);
			i++; /* skip over both #2 and #3 */
		}
	}
	return 0;
}

static int merge(const char *name, const char *path)
{
	int ret;
	mmfile_t cur, base, other;
	mmbuffer_t result = {NULL, 0};
	xpparam_t xpp = {XDF_NEED_MINIMAL};

	if (handle_file(path, NULL, rr_path(name, "thisimage")) < 0)
		return 1;

	if (read_mmfile(&cur, rr_path(name, "thisimage")) ||
			read_mmfile(&base, rr_path(name, "preimage")) ||
			read_mmfile(&other, rr_path(name, "postimage")))
		return 1;
	ret = xdl_merge(&base, &cur, "", &other, "",
			&xpp, XDL_MERGE_ZEALOUS, &result);
	if (!ret) {
		FILE *f = fopen(path, "w");
		if (!f)
			return error("Could not write to %s", path);
		fwrite(result.ptr, result.size, 1, f);
		fclose(f);
	}

	free(cur.ptr);
	free(base.ptr);
	free(other.ptr);
	free(result.ptr);

	return ret;
}

static void unlink_rr_item(const char *name)
{
	unlink(rr_path(name, "thisimage"));
