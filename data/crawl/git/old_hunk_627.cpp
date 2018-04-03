static void parse_approxidate(const char **argv, struct timeval *now)
{
	for (; *argv; argv++) {
		time_t t;
		t = approxidate_relative(*argv, now);
		printf("%s -> %s\n", *argv, show_date(t, 0, DATE_MODE(ISO8601)));
	}