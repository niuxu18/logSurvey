	return '\0';
}

static void print_tok_val(FILE *outfile, const char *tok, const char *val)
{
	char c = last_non_space_char(tok);
	if (!c)
		return;
	if (strchr(separators, c))
		fprintf(outfile, "%s%s\n", tok, val);
	else
		fprintf(outfile, "%s%c %s\n", tok, separators[0], val);
}

static void print_all(FILE *outfile, struct trailer_item *first, int trim_empty)
{
	struct trailer_item *item;
	for (item = first; item; item = item->next) {
		if (!trim_empty || strlen(item->value) > 0)
			print_tok_val(outfile, item->token, item->value);
	}
}

