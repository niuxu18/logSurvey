		}
	}

	if (finish_command(&child)) {
		ret = error("error occurred running diff --raw");
		goto finish;
	}

	if (!i)
		return 0;

	/*
	 * Changes to submodules require special treatment.This loop writes a
