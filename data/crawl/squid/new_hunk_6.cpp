    if (Parser == NULL) {
        Parser = Parsers;

        // if type name matters, use it
        if (strcasecmp(Type, "auto") != 0) {
            while (Parser && strcasecmp(Parser->name, Type) != 0)
                Parser = Parser->next;
        }

        if (Parser == NULL)
            fatal ("Unknown ESI Parser type");
