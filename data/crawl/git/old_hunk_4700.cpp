		new->name = "HEAD";
		new->commit = old.commit;
		if (!new->commit)
			die("You are on a branch yet to be born");
		parse_commit(new->commit);
	}

