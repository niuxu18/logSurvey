		}

		if (data->files[i]->is_binary) {
			show_name(options->file, prefix, name, len, reset, set);
			fprintf(options->file, "  Bin ");
			fprintf(options->file, "%s%d%s", del_c, deleted, reset);
			fprintf(options->file, " -> ");
			fprintf(options->file, "%s%d%s", add_c, added, reset);
			fprintf(options->file, " bytes");
			fprintf(options->file, "\n");
			continue;
		}
		else if (data->files[i]->is_unmerged) {
			show_name(options->file, prefix, name, len, reset, set);
			fprintf(options->file, "  Unmerged\n");
			continue;
		}
		else if (!data->files[i]->is_renamed &&
