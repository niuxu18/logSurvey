		{
			if (parse_option (&vl, fields[i]) != 0)
			{
				fprintf (fh, "-1 Error parsing option `%s'",
						fields[i]);
				break;
			}