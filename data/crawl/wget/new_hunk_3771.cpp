msgid "Unknown error"
msgstr "Ukjent feil"

#: src/http.c:625 src/http.c:1437
msgid "Unable to establish SSL connection.\n"
msgstr ""

#: src/http.c:633
#, fuzzy, c-format
msgid "Reusing connection to %s:%hu.\n"
msgstr "Vil pr�ve � kontakte %s:%hu.\n"

#: src/http.c:809
#, fuzzy, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Feil ved sending av HTTP-foresp�rsel.\n"

#: src/http.c:814
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s foresp�rsel sendt, mottar topptekster... "

#: src/http.c:858
msgid "End of file while parsing headers.\n"
msgstr "Filslutt funnet ved lesing av topptekster.\n"

#: src/http.c:869
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Lesefeil (%s) i topptekster.\n"

#: src/http.c:909
msgid "No data received"
msgstr "Ingen data mottatt"

#: src/http.c:911
msgid "Malformed status line"
msgstr "Feil i statuslinje"

#: src/http.c:916
msgid "(no description)"
msgstr "(ingen beskrivelse)"

#: src/http.c:1034
msgid "Authorization failed.\n"
msgstr "Autorisasjon mislyktes\n"

#: src/http.c:1041
msgid "Unknown authentication scheme.\n"
msgstr "Ukjent autorisasjons-protokoll.\n"

#: src/http.c:1131
#, c-format
msgid "Location: %s%s\n"
msgstr "Sted: %s%s\n"

#: src/http.c:1132 src/http.c:1157
msgid "unspecified"
msgstr "uspesifisert"

#: src/http.c:1133
msgid " [following]"
msgstr " [omdirigert]"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:1147
msgid "Length: "
msgstr "Lengde: "

#: src/http.c:1152
#, c-format
msgid " (%s to go)"
msgstr " (%s igjen)"

#: src/http.c:1157
msgid "ignored"
msgstr "ignoreres"

#: src/http.c:1258
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Advarsel: jokertegn ikke st�ttet i HTTP.\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:1279
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "Filen �%s� hentes ikke, fordi den allerede eksisterer.\n"

#: src/http.c:1429
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "Kan ikke skrive til �%s� (%s).\n"

#: src/http.c:1447
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "FEIL: Omdirigering (%d) uten nytt sted.\n"

#: src/http.c:1472
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s FEIL %d: %s.\n"

#: src/http.c:1485
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Last-modified topptekst mangler -- tidsstempling sl�s av.\n"

#: src/http.c:1493
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Last-modified topptekst ugyldig -- tidsstempel ignoreres.\n"

#: src/http.c:1528
msgid "Remote file is newer, retrieving.\n"
msgstr "Fil p� tjener er nyere - hentes.\n"

#: src/http.c:1573
#, c-format
msgid ""
"%s (%s) - `%s' saved [%ld/%ld]\n"