/*
 * "diff --no-index" support
 * Copyright (c) 2007 by Johannes Schindelin
 * Copyright (c) 2008 by Junio C Hamano
 */

#include "cache.h"
#include "color.h"
#include "commit.h"
#include "blob.h"
#include "tag.h"
#include "diff.h"
#include "diffcore.h"
#include "revision.h"
#include "log-tree.h"
#include "builtin.h"
#include "path-list.h"

static int read_directory(const char *path, struct path_list *list)
{
	DIR *dir;
	struct dirent *e;

	if (!(dir = opendir(path)))
		return error("Could not open directory %s", path);

	while ((e = readdir(dir)))
		if (strcmp(".", e->d_name) && strcmp("..", e->d_name))
			path_list_insert(e->d_name, list);

	closedir(dir);
	return 0;
}

static int get_mode(const char *path, int *mode)
{
	struct stat st;

	if (!path || !strcmp(path, "/dev/null"))
		*mode = 0;
	else if (!strcmp(path, "-"))
		*mode = create_ce_mode(0666);
	else if (stat(path, &st))
		return error("Could not access '%s'", path);
	else
		*mode = st.st_mode;
	return 0;
}

static int queue_diff(struct diff_options *o,
		const char *name1, const char *name2)
{
	int mode1 = 0, mode2 = 0;

	if (get_mode(name1, &mode1) || get_mode(name2, &mode2))
		return -1;

	if (mode1 && mode2 && S_ISDIR(mode1) != S_ISDIR(mode2))
		return error("file/directory conflict: %s, %s", name1, name2);

	if (S_ISDIR(mode1) || S_ISDIR(mode2)) {
		char buffer1[PATH_MAX], buffer2[PATH_MAX];
		struct path_list p1 = {NULL, 0, 0, 1}, p2 = {NULL, 0, 0, 1};
		int len1 = 0, len2 = 0, i1, i2, ret = 0;

		if (name1 && read_directory(name1, &p1))
			return -1;
		if (name2 && read_directory(name2, &p2)) {
			path_list_clear(&p1, 0);
			return -1;
		}

		if (name1) {
			len1 = strlen(name1);
			if (len1 > 0 && name1[len1 - 1] == '/')
				len1--;
			memcpy(buffer1, name1, len1);
			buffer1[len1++] = '/';
		}

		if (name2) {
			len2 = strlen(name2);
			if (len2 > 0 && name2[len2 - 1] == '/')
				len2--;
			memcpy(buffer2, name2, len2);
			buffer2[len2++] = '/';
		}

		for (i1 = i2 = 0; !ret && (i1 < p1.nr || i2 < p2.nr); ) {
			const char *n1, *n2;
			int comp;

			if (i1 == p1.nr)
				comp = 1;
			else if (i2 == p2.nr)
				comp = -1;
			else
				comp = strcmp(p1.items[i1].path,
					p2.items[i2].path);

			if (comp > 0)
				n1 = NULL;
			else {
				n1 = buffer1;
				strncpy(buffer1 + len1, p1.items[i1++].path,
						PATH_MAX - len1);
			}

			if (comp < 0)
				n2 = NULL;
			else {
				n2 = buffer2;
				strncpy(buffer2 + len2, p2.items[i2++].path,
						PATH_MAX - len2);
			}

			ret = queue_diff(o, n1, n2);
		}
		path_list_clear(&p1, 0);
		path_list_clear(&p2, 0);

		return ret;
	} else {
		struct diff_filespec *d1, *d2;

		if (DIFF_OPT_TST(o, REVERSE_DIFF)) {
			unsigned tmp;
			const char *tmp_c;
			tmp = mode1; mode1 = mode2; mode2 = tmp;
			tmp_c = name1; name1 = name2; name2 = tmp_c;
		}

		if (!name1)
			name1 = "/dev/null";
		if (!name2)
			name2 = "/dev/null";
		d1 = alloc_filespec(name1);
		d2 = alloc_filespec(name2);
		fill_filespec(d1, null_sha1, mode1);
		fill_filespec(d2, null_sha1, mode2);

		diff_queue(&diff_queued_diff, d1, d2);
		return 0;
	}
}

void diff_no_index(struct rev_info *revs,
		   int argc, const char **argv,
		   int nongit, const char *prefix)
{
	int i;
	int no_index = 0;
	unsigned options = 0;

	/* Were we asked to do --no-index explicitly? */
	for (i = 1; i < argc; i++) {
		if (!strcmp(argv[i], "--"))
			return;
		if (!strcmp(argv[i], "--no-index"))
			no_index = 1;
		if (argv[i][0] != '-')
			break;
	}

	/*
	 * No explicit --no-index, but "git diff --opts A B" outside
	 * a git repository is a cute hack to support.
	 */
	if (!no_index && !nongit)
		return;

	if (argc != i + 2)
		die("git diff %s takes two paths",
		    no_index ? "--no-index" : "[--no-index]");

	diff_setup(&revs->diffopt);
	if (!revs->diffopt.output_format)
		revs->diffopt.output_format = DIFF_FORMAT_PATCH;
	for (i = 1; i < argc - 2; ) {
		int j;
		if (!strcmp(argv[i], "--no-index"))
			i++;
		else if (!strcmp(argv[1], "-q"))
			options |= DIFF_SILENT_ON_REMOVED;
		else {
			j = diff_opt_parse(&revs->diffopt, argv + i, argc - i);
			if (!j)
				die("invalid diff option/value: %s", argv[i]);
			i += j;
		}
	}

	if (prefix) {
		int len = strlen(prefix);

		revs->diffopt.paths = xcalloc(2, sizeof(char*));
		for (i = 0; i < 2; i++) {
			const char *p = argv[argc - 2 + i];
			/*
			 * stdin should be spelled as '-'; if you have
			 * path that is '-', spell it as ./-.
			 */
			p = (strcmp(p, "-")
			     ? xstrdup(prefix_filename(prefix, len, p))
			     : p);
			revs->diffopt.paths[i] = p;
		}
	}
	else
		revs->diffopt.paths = argv + argc - 2;
	revs->diffopt.nr_paths = 2;

	DIFF_OPT_SET(&revs->diffopt, EXIT_WITH_STATUS);
	DIFF_OPT_SET(&revs->diffopt, NO_INDEX);

	revs->max_count = -2;
	if (diff_setup_done(&revs->diffopt) < 0)
		die("diff_setup_done failed");

	if (queue_diff(&revs->diffopt, revs->diffopt.paths[0],
		       revs->diffopt.paths[1]))
		exit(1);
	diffcore_std(&revs->diffopt);
	diff_flush(&revs->diffopt);

	/*
	 * The return code for --no-index imitates diff(1):
	 * 0 = no changes, 1 = changes, else error
	 */
	exit(revs->diffopt.found_changes);
}
