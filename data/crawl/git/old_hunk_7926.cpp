			fprintf(stderr, "\n  from %s\n  to   %s\n",
				old_hex, new_hex);
		}
		if (remote && !dry_run) {
			struct refspec rs;
			rs.src = ref->name;
			rs.dst = NULL;
			if (!remote_find_tracking(remote, &rs)) {
				fprintf(stderr, " Also local %s\n", rs.dst);
				if (will_delete_ref) {
					if (delete_ref(rs.dst, NULL)) {
						error("Failed to delete");
					}
				} else
					update_ref("update by push", rs.dst,
						ref->new_sha1, NULL, 0, 0);
				free(rs.dst);
			}
		}
	}

	packet_flush(out);