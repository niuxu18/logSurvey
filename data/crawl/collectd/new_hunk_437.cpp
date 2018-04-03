
		if (strcasecmp (fields[0], "getval") == 0)
		{
			us_handle_getval (fhout, fields, fields_num);
		}
		else if (strcasecmp (fields[0], "putval") == 0)
		{
			handle_putval (fhout, fields, fields_num);
		}
		else if (strcasecmp (fields[0], "listval") == 0)
		{
			us_handle_listval (fhout, fields, fields_num);
		}
		else
		{
			fprintf (fhout, "-1 Unknown command: %s\n", fields[0]);
			fflush (fhout);
		}
	} /* while (fgets) */

	DEBUG ("Exiting..");
	fclose (fhin);
	fclose (fhout);

	pthread_exit ((void *) 0);
} /* void *us_handle_client */