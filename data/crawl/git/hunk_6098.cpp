 		}
 
 		if (data->files[i]->is_binary) {
-			show_name(options->file, prefix, name, len, reset, set);
+			show_name(options->file, prefix, name, len);
 			fprintf(options->file, "  Bin ");
 			fprintf(options->file, "%s%d%s", del_c, deleted, reset);
 			fprintf(options->file, " -> ");
