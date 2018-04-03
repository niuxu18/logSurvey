	return parse_ls_response(get_response_line(), mode, dataref);
}

const char *fast_export_read_path(const char *path, uint32_t *mode_out)
{
	int err;
	static struct strbuf buf = STRBUF_INIT;

	strbuf_reset(&buf);
	err = fast_export_ls(path, mode_out, &buf);
	if (err) {
		if (errno != ENOENT)
			die_errno("BUG: unexpected fast_export_ls error");
		/* Treat missing paths as directories. */
		*mode_out = S_IFDIR;
		return NULL;
	}
	return buf.buf;
}

void fast_export_copy(uint32_t revision, const char *src, const char *dst)
{
	int err;
	uint32_t mode;
	static struct strbuf data = STRBUF_INIT;

	strbuf_reset(&data);
	err = fast_export_ls_rev(revision, src, &mode, &data);
	if (err) {
		if (errno != ENOENT)
			die_errno("BUG: unexpected fast_export_ls_rev error");
		fast_export_delete(dst);
		return;
	}
	fast_export_modify(dst, mode, data.buf);
}

void fast_export_blob_delta(uint32_t mode,
				uint32_t old_mode, const char *old_data,
				off_t len, struct line_buffer *input)
