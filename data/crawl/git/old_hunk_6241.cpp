		fprintf(stderr, "%4u%% (%d/%d) done\r", percent, n, total);
		if (!split_msg(&all_msgs, &msg, &ofs))
			break;
		r = imap_store_msg(ctx, &msg, &uid);
		if (r != DRV_OK)
			break;
