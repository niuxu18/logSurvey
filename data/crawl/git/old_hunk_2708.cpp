	fill_origin_blob(&sb->revs->diffopt, target, &file_o);
	num_get_patch++;

	diff_hunks(&file_p, &file_o, 0, blame_chunk_cb, &d);
	/* The rest are the same as the parent */
	blame_chunk(&d.dstq, &d.srcq, INT_MAX, d.offset, INT_MAX, parent);
	*d.dstq = NULL;
