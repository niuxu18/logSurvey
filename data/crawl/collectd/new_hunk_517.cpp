			}
		}
	}
	else if (strcasecmp ("StepSize", key) == 0)
	{
		int tmp = atoi (value);
		if (tmp <= 0)
		{
			fprintf (stderr, "rrdtool: `StepSize' must "
					"be greater than 0.\n");
			return (1);
		}
		stepsize = tmp;
	}
	else if (strcasecmp ("HeartBeat", key) == 0)
	{
		int tmp = atoi (value);
		if (tmp <= 0)
		{
			fprintf (stderr, "rrdtool: `HeartBeat' must "
					"be greater than 0.\n");
			return (1);
		}
		heartbeat = tmp;
	}
	else if (strcasecmp ("RRARows", key) == 0)
	{
		int tmp = atoi (value);
		if (tmp <= 0)
		{
			fprintf (stderr, "rrdtool: `RRARows' must "
					"be greater than 0.\n");
			return (1);
		}
		rrarows = tmp;
	}
	else if (strcasecmp ("XFF", key) == 0)
	{
		double tmp = atof (value);
		if ((tmp < 0.0) || (tmp >= 1.0))
		{
			fprintf (stderr, "rrdtool: `XFF' must "
					"be in the range 0 to 1 (exclusive).");
			return (1);
		}
		xff = tmp;
	}
	else
	{
		return (-1);
