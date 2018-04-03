		 * and compatibility values for PERM_GROUP and
		 * PERM_EVERYBODY.
		 */
		if (shared_repository == PERM_GROUP)
			sprintf(buf, "%d", OLD_PERM_GROUP);
		else if (shared_repository == PERM_EVERYBODY)
			sprintf(buf, "%d", OLD_PERM_EVERYBODY);
		else
			sprintf(buf, "0%o", shared_repository);
		git_config_set("core.sharedrepository", buf);
		git_config_set("receive.denyNonFastforwards", "true");
	}
