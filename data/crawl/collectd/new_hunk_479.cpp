		return (-1);
	}

	if ((strlen (hostname) > sizeof (vl.host))
			|| (strlen (plugin) > sizeof (vl.plugin))
			|| ((plugin_instance != NULL)
				&& (strlen (plugin_instance) > sizeof (vl.plugin_instance)))
			|| ((type_instance != NULL)
				&& (strlen (type_instance) > sizeof (vl.type_instance))))
	{
		fprintf (fh, "-1 Identifier too long.");
		return (-1);
	}

	strcpy (vl.host, hostname);
	strcpy (vl.plugin, plugin);
