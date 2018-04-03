	return NULL;
}

static const char *setup_nongit(const char *cwd, int *nongit_ok)
{
	if (!nongit_ok)
		die("Not a git repository (or any of the parent directories): %s", DEFAULT_GIT_DIR_ENVIRONMENT);
	if (chdir(cwd))
		die_errno("Cannot come back to cwd");
	*nongit_ok = 1;
	return NULL;
}

/*
 * We cannot decide in this function whether we are in the work tree or
 * not, since the config can only be read _after_ this function was called.
