				if (stream_blob_to_fd(fileno(f), get_object_hash(*obj), NULL, 1))
					die_errno("Could not write '%s'", filename);
			} else
				fprintf(f, "%s\n", oid_to_hex(&obj->oid));
			if (fclose(f))
				die_errno("Could not finish '%s'",
					  filename);
