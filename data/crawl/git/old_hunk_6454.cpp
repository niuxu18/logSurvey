		printf("Message-Id: <%s>\n", opt->message_id);
		graph_show_oneline(opt->graph);
	}
	if (opt->ref_message_id) {
		printf("In-Reply-To: <%s>\nReferences: <%s>\n",
		       opt->ref_message_id, opt->ref_message_id);
		graph_show_oneline(opt->graph);
	}
	if (opt->mime_boundary) {