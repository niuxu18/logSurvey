msgid "Reusing existing connection to %s:%d.\n"
msgstr "Znova uporabljam povezavo z %s:%hu.\n"

#: src/http.c:1684
#, fuzzy, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Napaka pri pisanju zahteve HTTP: %s.\n"

#: src/http.c:1704
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr ""

#: src/http.c:1749
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s zahteva poslana, �akam odgovor... "

#: src/http.c:1760
#, fuzzy
msgid "No data received.\n"
msgstr "Brez sprejetih podatkov"

#: src/http.c:1767
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Napaka pri branju glave (%s).\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:1813
#, fuzzy, c-format
msgid ""
"File `%s' already there; not retrieving.\n"
"\n"
msgstr "Datoteka `%s' �e obstaja, ne jemljem.\n"

#. If the authentication header is missing or
#. unrecognized, there's no sense in retrying.
#: src/http.c:1966
msgid "Unknown authentication scheme.\n"
msgstr "Neznata metoda avtentifikacije.\n"

#: src/http.c:1997
msgid "Authorization failed.\n"
msgstr "Avtorizacija neuspe�na.\n"

#: src/http.c:2011
msgid "Malformed status line"
msgstr "Zmali�ena statusna linija"

#: src/http.c:2013
msgid "(no description)"
msgstr "(brez opisa)"

#: src/http.c:2076
#, c-format
msgid "Location: %s%s\n"
msgstr "Polo�aj: %s%s\n"

#: src/http.c:2077 src/http.c:2184
msgid "unspecified"
msgstr "nedolo�en"

#: src/http.c:2078
msgid " [following]"
msgstr " [spremljam]"

#. If `-c' is in use and the file has been fully downloaded (or
#. the remote file has shrunk), Wget effectively requests bytes
#. after the end of file and the server response with 416.
#: src/http.c:2134
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
