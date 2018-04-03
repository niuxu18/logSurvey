	return compile_pattern_or(list);
}

static struct grep_expr *grep_true_expr(void)
{
	struct grep_expr *z = xcalloc(1, sizeof(*z));
	z->node = GREP_NODE_TRUE;
	return z;
}

static struct grep_expr *grep_or_expr(struct grep_expr *left, struct grep_expr *right)
{
	struct grep_expr *z = xcalloc(1, sizeof(*z));
	z->node = GREP_NODE_OR;
	z->u.binary.left = left;
	z->u.binary.right = right;
	return z;
}

static struct grep_expr *prep_header_patterns(struct grep_opt *opt)
{
	struct grep_pat *p;
	struct grep_expr *header_expr;
	struct grep_expr *(header_group[GREP_HEADER_FIELD_MAX]);
	enum grep_header_field fld;

	if (!opt->header_list)
		return NULL;
	p = opt->header_list;
	for (p = opt->header_list; p; p = p->next) {
		if (p->token != GREP_PATTERN_HEAD)
			die("bug: a non-header pattern in grep header list.");
		if (p->field < 0 || GREP_HEADER_FIELD_MAX <= p->field)
			die("bug: unknown header field %d", p->field);
		compile_regexp(p, opt);
	}

	for (fld = 0; fld < GREP_HEADER_FIELD_MAX; fld++)
		header_group[fld] = NULL;

	for (p = opt->header_list; p; p = p->next) {
		struct grep_expr *h;
		struct grep_pat *pp = p;

		h = compile_pattern_atom(&pp);
		if (!h || pp != p->next)
			die("bug: malformed header expr");
		if (!header_group[p->field]) {
			header_group[p->field] = h;
			continue;
		}
		header_group[p->field] = grep_or_expr(h, header_group[p->field]);
	}

	header_expr = NULL;

	for (fld = 0; fld < GREP_HEADER_FIELD_MAX; fld++) {
		if (!header_group[fld])
			continue;
		if (!header_expr)
			header_expr = grep_true_expr();
		header_expr = grep_or_expr(header_group[fld], header_expr);
	}
	return header_expr;
}

