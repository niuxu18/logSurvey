		sb.commits.compare = compare_commits_by_commit_date;
	}
	else if (contents_from)
		die("--contents and --reverse do not blend well.");
	else {
		final_commit_name = prepare_initial(&sb);
		sb.commits.compare = compare_commits_by_reverse_commit_date;
