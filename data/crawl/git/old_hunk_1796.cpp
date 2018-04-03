
		if (!opt->graph)
			put_revision_mark(opt, commit);
		fputs(find_unique_abbrev(commit->object.oid.hash, abbrev_commit), stdout);
		if (opt->print_parents)
			show_parents(commit, abbrev_commit);
		if (opt->children.name)
			show_children(opt, commit, abbrev_commit);
		show_decorations(opt, commit);
		if (opt->graph && !graph_is_commit_finished(opt->graph)) {
			putchar('\n');
			graph_show_remainder(opt->graph);
		}
		putchar(opt->diffopt.line_termination);
		return;
	}
