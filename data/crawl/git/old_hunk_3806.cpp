	int add_errors;
};

static int fix_unmerged_status(struct diff_filepair *p,
			       struct update_callback_data *data)
{
