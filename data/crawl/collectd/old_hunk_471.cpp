	return (0);
} /* int us_handle_getval */

static int us_handle_putval (FILE *fh, char **fields, int fields_num)
{
	char *hostname;
	char *plugin;
	char *plugin_instance;
	char *type;
	char *type_instance;
	int   status;
	int   i;

	const data_set_t *ds;
	value_list_t vl = VALUE_LIST_INIT;

	char **value_ptr;

	if (fields_num != 3)
	{
		DEBUG ("unixsock plugin: Wrong number of fields: %i", fields_num);
		fprintf (fh, "-1 Wrong number of fields: Got %i, expected 3.\n",
				fields_num);
		fflush (fh);
		return (-1);
	}

	status = parse_identifier (fields[1], &hostname,
			&plugin, &plugin_instance,
			&type, &type_instance);
	if (status != 0)
	{
		DEBUG ("unixsock plugin: Cannot parse `%s'", fields[1]);
		fprintf (fh, "-1 Cannot parse identifier.\n");
		fflush (fh);
		return (-1);
	}

	if ((strlen (hostname) >= sizeof (vl.host))
			|| (strlen (plugin) >= sizeof (vl.plugin))
			|| ((plugin_instance != NULL)
				&& (strlen (plugin_instance) >= sizeof (vl.plugin_instance)))
			|| ((type_instance != NULL)
				&& (strlen (type_instance) >= sizeof (vl.type_instance))))
	{
		fprintf (fh, "-1 Identifier too long.");
		return (-1);
	}

	strcpy (vl.host, hostname);
	strcpy (vl.plugin, plugin);
	if (plugin_instance != NULL)
		strcpy (vl.plugin_instance, plugin_instance);
	if (type_instance != NULL)
		strcpy (vl.type_instance, type_instance);

	{ /* parse the time */
		char *t = fields[2];
		char *v = strchr (t, ':');
		if (v == NULL)
		{
			fprintf (fh, "-1 No time found.");
			return (-1);
		}
		*v = '\0'; v++;

		vl.time = (time_t) atoi (t);
		if (vl.time == 0)
			vl.time = time (NULL);

		fields[2] = v;
	}

	ds = plugin_get_ds (type);
	if (ds == NULL)
		return (-1);

	value_ptr = (char **) calloc (ds->ds_num, sizeof (char *));
	if (value_ptr == NULL)
	{
		fprintf (fh, "-1 calloc failed.");
		return (-1);
	}

	{ /* parse the value-list. It's colon-separated. */
		char *dummy;
		char *ptr;
		char *saveptr;

		i = 0;
		dummy = fields[2];
		saveptr = NULL;
		while ((ptr = strtok_r (dummy, ":", &saveptr)) != NULL)
		{
			dummy = NULL;
			if (i >= ds->ds_num)
			{
				i = ds->ds_num + 1;
				break;
			}
			value_ptr[i] = ptr;
			i++;
		}

		if (i != ds->ds_num)
		{
			sfree (value_ptr);
			fprintf (fh, "-1 Number of values incorrect: Got %i, "
					"expected %i.", i, ds->ds_num);
			return (-1);
		}
	} /* done parsing the value-list */

	vl.values_len = ds->ds_num;
	vl.values = (value_t *) malloc (vl.values_len * sizeof (value_t));
	if (vl.values == NULL)
	{
		sfree (value_ptr);
		fprintf (fh, "-1 malloc failed.");
		return (-1);
	}
	DEBUG ("value_ptr = 0x%p; vl.values = 0x%p;", (void *) value_ptr, (void *) vl.values);

	for (i = 0; i < ds->ds_num; i++)
	{
		if (strcmp (value_ptr[i], "U") == 0)
			vl.values[i].gauge = NAN;
		else if (ds->ds[i].type == DS_TYPE_COUNTER)
			vl.values[i].counter = atoll (value_ptr[i]);
		else if (ds->ds[i].type == DS_TYPE_GAUGE)
			vl.values[i].gauge = atof (value_ptr[i]);
	} /* for (i = 2 .. fields_num) */

	plugin_dispatch_values (type, &vl);

	DEBUG ("value_ptr = 0x%p; vl.values = 0x%p;", (void *) value_ptr, (void *) vl.values);

	sfree (value_ptr);
	sfree (vl.values); 

	fprintf (fh, "0 Success\n");
	fflush (fh);

	return (0);
} /* int us_handle_putval */

static int us_handle_listval (FILE *fh, char **fields, int fields_num)
{
	char buffer[1024];
