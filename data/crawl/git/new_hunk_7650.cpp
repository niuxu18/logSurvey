			return 0;
		}
	} else {
		strbuf_release(&out_buffer.buf);
		free(if_header);
		fprintf(stderr, "Unable to start PUT request\n");
		return 0;
