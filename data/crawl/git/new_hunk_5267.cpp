		if (data->files[i]->is_binary) {
			show_name(options->file, prefix, name, len);
			fprintf(options->file, "  Bin ");
			fprintf(options->file, "%s%"PRIuMAX"%s",
				del_c, deleted, reset);
			fprintf(options->file, " -> ");
			fprintf(options->file, "%s%"PRIuMAX"%s",
				add_c, added, reset);
			fprintf(options->file, " bytes");
			fprintf(options->file, "\n");
			continue;
