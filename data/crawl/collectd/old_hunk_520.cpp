
static int irq_config (char *key, char *value)
{
	unsigned int *temp;
	unsigned int irq;
        char *endptr;

	if (strcasecmp (key, "Irq") == 0)
	{
		temp = (unsigned int *) realloc (irq_list, (irq_list_num + 1) * sizeof (unsigned int *));
		if (temp == NULL)
		{
			syslog (LOG_EMERG, "Cannot allocate more memory.");
			return (1);
		}
		irq_list = temp;

		irq = strtol(value, &endptr, base);

		if (endptr == value ||
		    (errno == ERANGE && (irq == LONG_MAX || irq == LONG_MIN)) ||
		    (errno != 0 && irq == 0))
		{
			syslog (LOG_EMERG, "Irq value is not a number.");
			return (1);
		}
		irq_list[irq_list_num] = irq;
