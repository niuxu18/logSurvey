    return SSL_ERROR_NONE;
}

Ssl::Errors *
Ssl::ParseErrorString(const char *name)
{
    assert(name);

    const Security::ErrorCode ssl_error = GetErrorCode(name);
    if (ssl_error != SSL_ERROR_NONE)
        return new Ssl::Errors(ssl_error);

    if (xisdigit(*name)) {
        const long int value = strtol(name, NULL, 0);
        if (SQUID_SSL_ERROR_MIN <= value && value <= SQUID_SSL_ERROR_MAX)
            return new Ssl::Errors(value);
        fatalf("Too small or too bug SSL error code '%s'", name);
    }

    if (TheSslErrorShortcuts.empty())
