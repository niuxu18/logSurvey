
	for (i = 0; i < want_obj.nr; i++)
		fprintf(pipe_fd, "%s\n",
			oid_to_hex(&want_obj.objects[i].item->oid));
	fprintf(pipe_fd, "--not\n");
	for (i = 0; i < have_obj.nr; i++)
		fprintf(pipe_fd, "%s\n",
			oid_to_hex(&have_obj.objects[i].item->oid));
	for (i = 0; i < extra_edge_obj.nr; i++)
		fprintf(pipe_fd, "%s\n",
			oid_to_hex(&extra_edge_obj.objects[i].item->oid));
	fprintf(pipe_fd, "\n");
	fflush(pipe_fd);
	fclose(pipe_fd);
