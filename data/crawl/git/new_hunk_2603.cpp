				/* fall-through */
			case FETCH_HEAD_MERGE:
				fprintf(fp, "%s\t%s\t%s",
					oid_to_hex(&rm->old_oid),
					merge_status_marker,
					note.buf);
				for (i = 0; i < url_len; ++i)
