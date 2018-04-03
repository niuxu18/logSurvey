	fprintf(opt->file, "%s", diff_line_prefix(opt));
	if (!(opt->output_format & DIFF_FORMAT_NAME_STATUS)) {
		fprintf(opt->file, ":%06o %06o %s ", p->one->mode, p->two->mode,
			diff_aligned_abbrev(p->one->oid.hash, opt->abbrev));
		fprintf(opt->file, "%s ",
			diff_aligned_abbrev(p->two->oid.hash, opt->abbrev));
	}
	if (p->score) {
		fprintf(opt->file, "%c%03d%c", p->status, similarity_index(p),