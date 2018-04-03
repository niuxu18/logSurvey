#     ... Kontroll-Verbindung wird geschlossen
# oder
#     ... Schließen der Kontroll-Verbindung
#: src/ftp.c:319 src/ftp.c:365 src/ftp.c:394 src/ftp.c:446 src/ftp.c:559
#: src/ftp.c:606 src/ftp.c:635 src/ftp.c:692 src/ftp.c:753 src/ftp.c:839
#: src/ftp.c:886
msgid "Error in server response, closing control connection.\n"
msgstr "Fehler in der Antwort des Servers; schließe Kontroll-Verbindung.\n"

#: src/ftp.c:326
msgid "Error in server greeting.\n"
msgstr "Fehler bei der Begrüßung des Servers.\n"

#: src/ftp.c:333 src/ftp.c:454 src/ftp.c:567 src/ftp.c:643 src/ftp.c:702
#: src/ftp.c:763 src/ftp.c:849 src/ftp.c:896
msgid "Write failed, closing control connection.\n"
msgstr "Schreiben schlug fehl; Kontroll-Verbindung schließen.\n"

#: src/ftp.c:339
msgid "The server refuses login.\n"
msgstr "Der Server verweigert die Anmeldung.\n"

#: src/ftp.c:345
msgid "Login incorrect.\n"
msgstr "Fehler bei der Anmeldung.\n"

#: src/ftp.c:351
msgid "Logged in!\n"
msgstr "Angemeldet!\n"

#: src/ftp.c:373
msgid "Server error, can't determine system type.\n"
msgstr ""
"Fehler beim Server; es ist nicht möglich, die Art des Systems "
"festzustellen.\n"

#: src/ftp.c:382 src/ftp.c:679 src/ftp.c:736 src/ftp.c:779
msgid "done.    "
msgstr "fertig.    "

#: src/ftp.c:434 src/ftp.c:584 src/ftp.c:618 src/ftp.c:869 src/ftp.c:915
msgid "done.\n"
msgstr "fertig.\n"

#: src/ftp.c:461
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Unbekannte Art »%c«, schließe Kontroll-Verbindung.\n"

#: src/ftp.c:473
msgid "done.  "
msgstr "fertig.  "

#: src/ftp.c:479
msgid "==> CWD not needed.\n"
msgstr "==> CWD nicht notwendig.\n"

#: src/ftp.c:573
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Das Verzeichnis »%s« gibt es nicht.\n"
"\n"

#: src/ftp.c:588
msgid "==> CWD not required.\n"
msgstr "==> CWD nicht erforderlich.\n"

#: src/ftp.c:649
msgid "Cannot initiate PASV transfer.\n"
msgstr "Kann PASV-Übertragung nicht beginnen.\n"

#: src/ftp.c:653
msgid "Cannot parse PASV response.\n"
msgstr "Kann PASV-Antwort nicht auswerten.\n"

#: src/ftp.c:670
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "Konnte keine Verbindung zu »%s«, Port »%d« herstellen: %s\n"

#: src/ftp.c:718
#, c-format
msgid "Bind error (%s).\n"
msgstr "Verbindungsfehler (%s).\n"

#: src/ftp.c:724
msgid "Invalid PORT.\n"
msgstr "Ungültiger PORT.\n"

# Wieder das mit der 1. Person :)
#: src/ftp.c:770
msgid ""
"\n"
"REST failed, starting from scratch.\n"