		free (values);
		return (-1);
	}

	i = 0;
	while (fgets (buffer, sizeof (buffer), fh_in) != NULL)
	{
		char *key;
		char *value;

		key = buffer;

		value = strchr (key, '=');
		if (value == NULL)
			continue;
		*value = '\0'; value++;

		if (ignore_ds (key) != 0)
			continue;

		values_names[i] = strdup (key);
		values[i] = atof (value);

		i++;
		if (i >= values_num)
			break;
	}
	values_num = i;

	fclose (fh_in); fh_in = NULL; fd = -1;
	fclose (fh_out); fh_out = NULL;