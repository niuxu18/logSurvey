			line = xmemdupz(p, eol - p);
			email = strchr(line, '<');
			if (!email)
				die (_("Could not extract author email from %s"),
					sha1_to_hex(commit->object.sha1));
			if (email == line)
				pend = line;
