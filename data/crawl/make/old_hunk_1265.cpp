			    0,
			    TRUE,
			    DUPLICATE_SAME_ACCESS) == FALSE) {
	  fatal("create_child_process: DuplicateHandle(In) failed (e=%d)\n",
		GetLastError());
	}
	if (DuplicateHandle(GetCurrentProcess(),
