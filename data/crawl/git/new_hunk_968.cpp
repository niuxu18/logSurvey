		strbuf_add_unique_abbrev(&quickref, ref->new_oid.hash,
					 DEFAULT_ABBREV);

		print_ref_status(type, quickref.buf, ref, ref->peer_ref, msg,
				 porcelain, summary_width);
		strbuf_release(&quickref);
	}
}

static int print_one_push_status(struct ref *ref, const char *dest, int count,
				 int porcelain, int summary_width)
{
	if (!count) {
		char *url = transport_anonymize_url(dest);
