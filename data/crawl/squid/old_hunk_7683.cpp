	if (e->object_len <= 0)
	    continue;
	storeSwapFullPath(e->swap_file_number, swapfilename);
	x = fprintf(fp, "%s %s %d %d %d\n",
	    swapfilename, e->url, (int) e->expires, (int) e->timestamp,
	    e->object_len);
	if (x < 0) {
	    debug(20, 0, "storeWriteCleanLog: %s: %s", tmp_filename, xstrerror());
	    debug(20, 0, "storeWriteCleanLog: Current swap logfile not replaced.\n");