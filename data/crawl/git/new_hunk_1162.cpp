	diff_flush(&opts);

	fprintf(rev->diffopt.file, "\n");
}

static const char *clean_message_id(const char *msg_id)
