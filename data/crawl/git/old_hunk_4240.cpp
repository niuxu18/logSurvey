	strbuf_addch(&merge_msg, '\n');
	prepare_to_commit();
	free_commit_list(remoteheads);
	commit_tree(merge_msg.buf, result_tree, parents, result_commit, NULL);
	strbuf_addf(&buf, "Merge made by the '%s' strategy.", wt_strategy);
	finish(head, result_commit, buf.buf);
	strbuf_release(&buf);