    wordlist *w;
    char *dirup;
    int i, j, k;
    char *title;
    storeBuffer(e);
    storeAppendPrintf(e, "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n");
    storeAppendPrintf(e, "<!-- HTML listing generated by Squid %s -->\n",
                      version_string);
    storeAppendPrintf(e, "<!-- %s -->\n", mkrfc1123(squid_curtime));
    storeAppendPrintf(e, "<HTML><HEAD><TITLE>\n");
    storeAppendPrintf(e, "FTP Directory: %s\n",
                      html_quote(ftpState->title_url.buf()));
    storeAppendPrintf(e, "</TITLE>\n");
    storeAppendPrintf(e, "<STYLE type=\"text/css\"><!--BODY{background-color:#ffffff;font-family:verdana,sans-serif}--></STYLE>\n");

