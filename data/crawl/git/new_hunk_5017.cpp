				handle_node();
				active_ctx = REV_CTX;
			} else {
				fprintf(stderr, "Unexpected content length header: %"PRIu32"\n", len);
				buffer_skip_bytes(len);
			}
		}