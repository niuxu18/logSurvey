}

void
Auth::UserRequest::setDenyMessage(char const *aString)
{
    safe_free(message);
    message = xstrdup(aString);
}

char const *
Auth::UserRequest::getDenyMessage()
{
    return message;
}

char const *
Auth::UserRequest::denyMessage(char const * const default_message)
{
    if (this == NULL || getDenyMessage() == NULL) {
        return default_message;
