			else
				mode = 0666;
			fd = open(path, O_WRONLY | O_TRUNC | O_CREAT, mode);
			if (fd < 0) {
				ret = err(o, _("failed to open '%s': %s"),
					  path, strerror(errno));
				goto free_buf;
			}
			write_in_full(fd, buf, size);
			close(fd);
		} else if (S_ISLNK(mode)) {
			char *lnk = xmemdupz(buf, size);
			safe_create_leading_directories_const(path);
			unlink(path);
			if (symlink(lnk, path))
				ret = err(o, _("failed to symlink '%s': %s"),
					path, strerror(errno));
			free(lnk);
		} else
			ret = err(o,
				  _("do not know what to do with %06o %s '%s'"),
				  mode, oid_to_hex(oid), path);
 free_buf:
		free(buf);
	}
 update_index:
	if (!ret && update_cache)
		add_cacheinfo(o, mode, oid, path, 0, update_wd, ADD_CACHE_OK_TO_ADD);
	return ret;
}

static int update_file(struct merge_options *o,
		       int clean,
		       const struct object_id *oid,
		       unsigned mode,
		       const char *path)
{
	return update_file_flags(o, oid, mode, path, o->call_depth || clean, !o->call_depth);
}

/* Low level file merging, update and removal */

struct merge_file_info {
	struct object_id oid;
	unsigned mode;
	unsigned clean:1,
		 merge:1;
