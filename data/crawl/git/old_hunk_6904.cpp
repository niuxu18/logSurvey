			if (!name)
				continue;

			fwrite(p_start, p - p_start + 1, 1, stdout);
			printf(" (%s)", name);
			p_start = p + 1;
		}
	}