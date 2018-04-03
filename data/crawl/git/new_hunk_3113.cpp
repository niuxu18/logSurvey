	}
}

static void batch_object_write(const char *obj_name, struct batch_options *opt,
			       struct expand_data *data)
{
	struct strbuf buf = STRBUF_INIT;

	if (sha1_object_info_extended(data->sha1, &data->info, LOOKUP_REPLACE_OBJECT) < 0) {
		printf("%s missing\n", obj_name);
		fflush(stdout);
		return;
	}

	strbuf_expand(&buf, opt->format, expand_format, data);
	strbuf_addch(&buf, '\n');
	batch_write(opt, buf.buf, buf.len);
	strbuf_release(&buf);

	if (opt->print_contents) {
		print_object_or_die(opt, data);
		batch_write(opt, "\n", 1);
	}
}

static void batch_one_object(const char *obj_name, struct batch_options *opt,
			     struct expand_data *data)
{
	struct object_context ctx;
	int flags = opt->follow_symlinks ? GET_SHA1_FOLLOW_SYMLINKS : 0;
	enum follow_symlinks_result result;
