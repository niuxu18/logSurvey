		(int) sc->seen_offset);
	    storeAppendPrintf(s, "\t\tcopy_size: %d\n",
		(int) sc->copy_size);
	    storeAppendPrintf(s, "\t\tflags:");
	    if (sc->flags.disk_io_pending)
		storeAppendPrintf(s, " disk_io_pending");