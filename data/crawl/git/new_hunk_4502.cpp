			char *tag;
			int len;
			if (nr <= ++i)
				die(_("tag shorthand without <tag>"));
			len = strlen(refs[i]) + 11;
			if (deleterefs) {
				tag = xmalloc(len+1);
