		printf("%s %d %d %d\n",
		       sha1_to_hex(suspect->commit->object.sha1),
		       ent->s_lno + 1, ent->lno + 1, ent->num_lines);
		if (!(suspect->commit->object.flags & METAINFO_SHOWN)) {
			struct commit_info ci;
			suspect->commit->object.flags |= METAINFO_SHOWN;
			get_commit_info(suspect->commit, &ci, 1);
			printf("author %s\n", ci.author);
			printf("author-mail %s\n", ci.author_mail);
			printf("author-time %lu\n", ci.author_time);
			printf("author-tz %s\n", ci.author_tz);
			printf("committer %s\n", ci.committer);
			printf("committer-mail %s\n", ci.committer_mail);
			printf("committer-time %lu\n", ci.committer_time);
			printf("committer-tz %s\n", ci.committer_tz);
			printf("summary %s\n", ci.summary);
			if (suspect->commit->object.flags & UNINTERESTING)
				printf("boundary\n");
		}
		write_filename_info(suspect->path);
		maybe_flush_or_die(stdout, "stdout");
	}