{
	int line_termination = opt->line_termination;
	int inter_name_termination = line_termination ? '\t' : '\0';

	if (!(opt->output_format & DIFF_FORMAT_NAME_STATUS)) {
		fprintf(opt->file, ":%06o %06o %s ", p->one->mode, p->two->mode,
