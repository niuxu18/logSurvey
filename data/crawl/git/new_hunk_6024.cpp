	return parse_options_end(&ctx);
}

static int usage_argh(const struct option *opts)
{
	const char *s;
	int literal = opts->flags & PARSE_OPT_LITERAL_ARGHELP;
	if (opts->flags & PARSE_OPT_OPTARG)
		if (opts->long_name)
			s = literal ? "[=%s]" : "[=<%s>]";
		else
			s = literal ? "[%s]" : "[<%s>]";
	else
		s = literal ? " %s" : " <%s>";
	return fprintf(stderr, s, opts->argh);
}

#define USAGE_OPTS_WIDTH 24
#define USAGE_GAP         2
