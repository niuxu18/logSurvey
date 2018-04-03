	return enabled ? &allowed : NULL;
}

int is_transport_allowed(const char *type)
{
	const struct string_list *allowed = protocol_whitelist();
	return !allowed || string_list_has_string(allowed, type);
}

void transport_check_allowed(const char *type)