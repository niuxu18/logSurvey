				break;

			opt->output(opt, bol, match.rm_so);
			opt->output(opt, opt->color_match,
				    strlen(opt->color_match));
			opt->output(opt, bol + match.rm_so,
				    (int)(match.rm_eo - match.rm_so));
			opt->output(opt, GIT_COLOR_RESET,
				    strlen(GIT_COLOR_RESET));
			bol += match.rm_eo;
			rest -= match.rm_eo;
			eflags = REG_NOTBOL;
