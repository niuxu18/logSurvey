		}

		if (data->files[i]->is_binary) {
			show_name(options->file, prefix, name, len);
			fprintf(options->file, "  Bin ");
			fprintf(options->file, "%s%"PRIuMAX"%s",
