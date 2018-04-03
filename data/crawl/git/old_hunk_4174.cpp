			xecfg.ctxlen = strtoul(diffopts + 10, NULL, 10);
		else if (!prefixcmp(diffopts, "-u"))
			xecfg.ctxlen = strtoul(diffopts + 2, NULL, 10);
		if (o->word_diff) {
			int i;

			ecbdata.diff_words =
				xcalloc(1, sizeof(struct diff_words_data));
			ecbdata.diff_words->type = o->word_diff;
			ecbdata.diff_words->opt = o;
			if (!o->word_regex)
				o->word_regex = userdiff_word_regex(one);
			if (!o->word_regex)
				o->word_regex = userdiff_word_regex(two);
			if (!o->word_regex)
				o->word_regex = diff_word_regex_cfg;
			if (o->word_regex) {
				ecbdata.diff_words->word_regex = (regex_t *)
					xmalloc(sizeof(regex_t));
				if (regcomp(ecbdata.diff_words->word_regex,
						o->word_regex,
						REG_EXTENDED | REG_NEWLINE))
					die ("Invalid regular expression: %s",
							o->word_regex);
			}
			for (i = 0; i < ARRAY_SIZE(diff_words_styles); i++) {
				if (o->word_diff == diff_words_styles[i].type) {
					ecbdata.diff_words->style =
						&diff_words_styles[i];
					break;
				}
			}
			if (want_color(o->use_color)) {
				struct diff_words_style *st = ecbdata.diff_words->style;
				st->old.color = diff_get_color_opt(o, DIFF_FILE_OLD);
				st->new.color = diff_get_color_opt(o, DIFF_FILE_NEW);
				st->ctx.color = diff_get_color_opt(o, DIFF_PLAIN);
			}
		}
		xdi_diff_outf(&mf1, &mf2, fn_out_consume, &ecbdata,
			      &xpp, &xecfg);
		if (o->word_diff)