	}
	else
		printf("\n");
	logmsg_free(msg, commit);
}

static void update_index_from_diff(struct diff_queue_struct *q,
