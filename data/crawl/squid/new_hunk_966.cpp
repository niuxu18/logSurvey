    if (Config.errorStylesheet) {
        ErrorPageFile tmpl("StylesSheet", ERR_MAX);
        tmpl.loadFromFile(Config.errorStylesheet);
        error_stylesheet.appendf("%s",tmpl.text());
    }

#if USE_OPENSSL
