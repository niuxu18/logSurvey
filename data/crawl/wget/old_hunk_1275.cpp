msgid "Length: %s"
msgstr "Lengte: %s"

#: src/ftp.c:220 src/http.c:2183
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) resterend"

#: src/ftp.c:224 src/http.c:2187
#, c-format
msgid ", %s remaining"
msgstr ", %s resterend"

# Geen idee hoe dit correct te vertalen.
#: src/ftp.c:227
msgid " (unauthoritative)\n"
msgstr " (onzeker)\n"

#: src/ftp.c:303
#, c-format
msgid "Logging in as %s ... "
msgstr "Inloggen als %s... "

# Ist das gemeint?
#: src/ftp.c:316 src/ftp.c:362 src/ftp.c:391 src/ftp.c:443 src/ftp.c:555
#: src/ftp.c:601 src/ftp.c:630 src/ftp.c:687 src/ftp.c:748 src/ftp.c:808
#: src/ftp.c:855
msgid "Error in server response, closing control connection.\n"
msgstr "Fout in server-antwoord -- de besturingsverbinding wordt gesloten.\n"

#: src/ftp.c:323
msgid "Error in server greeting.\n"
msgstr "Fout in server-groet.\n"

#: src/ftp.c:330 src/ftp.c:451 src/ftp.c:563 src/ftp.c:638 src/ftp.c:697
#: src/ftp.c:758 src/ftp.c:818 src/ftp.c:865
msgid "Write failed, closing control connection.\n"
msgstr "Schrijffout -- de besturingsverbinding wordt gesloten.\n"

#: src/ftp.c:336
msgid "The server refuses login.\n"
msgstr "De server weigert de login.\n"

#: src/ftp.c:342
msgid "Login incorrect.\n"
msgstr "Login onjuist.\n"

#: src/ftp.c:348
msgid "Logged in!\n"
msgstr "Ingelogd!\n"

#: src/ftp.c:370
msgid "Server error, can't determine system type.\n"
msgstr "Serverfout -- kan systeemsoort niet bepalen.\n"

#: src/ftp.c:379 src/ftp.c:674 src/ftp.c:731 src/ftp.c:774
msgid "done.    "
msgstr "gereed.  "

#: src/ftp.c:431 src/ftp.c:580 src/ftp.c:613 src/ftp.c:838 src/ftp.c:884
msgid "done.\n"
msgstr "gereed.\n"

#: src/ftp.c:458
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Onbekend soort '%c' -- de besturingsverbinding wordt gesloten.\n"

#: src/ftp.c:470
msgid "done.  "
msgstr "gereed.  "

#: src/ftp.c:476
msgid "==> CWD not needed.\n"
msgstr "==> CWD is niet nodig.\n"

#: src/ftp.c:569
#, c-format
msgid ""
"No such directory `%s'.\n"
"\n"
msgstr ""
"Map '%s' bestaat niet.\n"
"\n"

#: src/ftp.c:584
msgid "==> CWD not required.\n"
msgstr "==> CWD is niet vereist.\n"

#: src/ftp.c:644
msgid "Cannot initiate PASV transfer.\n"
msgstr "Kan geen PASV-transport starten.\n"

#: src/ftp.c:648
msgid "Cannot parse PASV response.\n"
msgstr "Kan PASV-antwoord niet verwerken.\n"

#: src/ftp.c:665
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "Kan geen verbinding maken met %s op poort %d: %s\n"

#: src/ftp.c:713
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bindingsfout (%s).\n"

#: src/ftp.c:719
msgid "Invalid PORT.\n"
msgstr "Ongeldige PORT-opdracht.\n"

#: src/ftp.c:765
msgid ""
"\n"
"REST failed, starting from scratch.\n"
