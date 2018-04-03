	struct ref_lock *lock;
	struct stat loginfo;
	int log = !lstat(git_path("logs/%s", oldrefname), &loginfo);
	struct strbuf err = STRBUF_INIT;

	if (log && S_ISLNK(loginfo.st_mode))
		return error("reflog for %s is a symlink", oldrefname);

	if (!resolve_ref_unsafe(oldrefname, RESOLVE_REF_READING, orig_sha1, &flag))
		return error("refname %s not found", oldrefname);

	if (flag & REF_ISSYMREF)
		return error("refname %s is a symbolic ref, renaming it is not supported",
			oldrefname);
	if (!rename_ref_available(oldrefname, newrefname))
		return 1;