				advice_status_hints
				? _(" (use \"git add\" to track)") : "");
		else if (s->is_initial)
			printf("nothing to commit%s\n", advice_status_hints
				? " (create/copy files and use \"git add\" to track)" : "");
		else if (!s->show_untracked_files)
			printf("nothing to commit%s\n", advice_status_hints
				? " (use -u to show untracked files)" : "");
		else
			printf("nothing to commit%s\n", advice_status_hints
				? " (working directory clean)" : "");
	}
}
