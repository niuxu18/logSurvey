	}
	else if (strcasecmp ("StepSize", key) == 0)
	{
		stepsize = atoi (value);
		if (stepsize < 0)
			stepsize = 0;
	}
	else if (strcasecmp ("HeartBeat", key) == 0)
	{
		heartbeat = atoi (value);
		if (heartbeat < 0)
			heartbeat = 0;
	}
	else if (strcasecmp ("RRARows", key) == 0)
	{
