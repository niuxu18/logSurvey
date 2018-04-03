   return (ret);
 } /* }}} char *cn_strdup */
 
-static int ignore_ds (const char *name)
+static int filter_ds (size_t *values_num,
+		double **values, char ***values_names)
 {
-	int i;
+	gauge_t *new_values;
+	char   **new_names;
+
+	size_t i;
 
 	if (match_ds_g == NULL)
-		return (0);
+		return (RET_OKAY);
+
+	new_values = (gauge_t *)calloc (match_ds_num_g, sizeof (*new_values));
+	if (new_values == NULL)
+	{
+		fprintf (stderr, "malloc failed: %s\n", strerror (errno));
+		return (RET_UNKNOWN);
+	}
+
+	new_names = (char **)calloc (match_ds_num_g, sizeof (*new_names));
+	if (new_names == NULL)
+	{
+		fprintf (stderr, "malloc failed: %s\n", strerror (errno));
+		free (new_values);
+		return (RET_UNKNOWN);
+	}
 
 	for (i = 0; i < match_ds_num_g; i++)
-		if (strcasecmp (match_ds_g[i], name) == 0)
-			return (0);
+	{
+		size_t j;
+
+		/* match_ds_g keeps pointers into argv but the names will be freed */
+		new_names[i] = cn_strdup (match_ds_g[i]);
+		if (new_names[i] == NULL)
+		{
+			fprintf (stderr, "cn_strdup failed: %s\n", strerror (errno));
+			free (new_values);
+			for (j = 0; j < i; j++)
+				free (new_names[j]);
+			free (new_names);
+			return (RET_UNKNOWN);
+		}
 
-	return (1);
-} /* int ignore_ds */
+		for (j = 0; j < *values_num; j++)
+			if (strcasecmp (new_names[i], (*values_names)[j]) == 0)
+				break;
+
+		if (j == *values_num)
+		{
+			printf ("ERROR: DS `%s' is not available.\n", new_names[i]);
+			free (new_values);
+			for (j = 0; j <= i; j++)
+				free (new_names[j]);
+			free (new_names);
+			return (RET_CRITICAL);
+		}
+
+		new_values[i] = (*values)[j];
+	}
+
+	free (*values);
+	for (i = 0; i < *values_num; i++)
+		free ((*values_names)[i]);
+	free (*values_names);
+
+	*values       = new_values;
+	*values_names = new_names;
+	*values_num   = match_ds_num_g;
+	return (RET_OKAY);
+} /* int filter_ds */
 
 static void parse_range (char *string, range_t *range)
 {