# German messages for GNU Wget.
# Copyright (C) 1997, 1998, 2000 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Karl Eichwalder <ke@suse.de>, 1998-1999, 2000.
# Karl Eichwalder <ke@ke.Central.DE>, 1997-1998.
# Jochen Hein <jochen@jochen.org>, 2001-2009.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-09 21:59+0200\n"
"Last-Translator: Jochen Hein <jochen@jochen.org>\n"
"Language-Team: German <translation-team-de@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8-bit\n"
"Plural-Forms: nplurals=2; plural=(n != 1);\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Unbekannter Fehler"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: Option »%s« ist zweideutig\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: Option »--%s« erlaubt kein Argument\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: Option »%c%s« erlaubt kein Argument\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: Option »%s« benötigt ein Argument\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: nicht erkannte Option »--%s«\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: nicht erkannte Option »%c%s«\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: ungültige Option -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: ungültige Option -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: Option verlangt ein Argument -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: Option »-W %s« ist zweideutig\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: Option »-W %s« erlaubt kein Argument\n"

#. TRANSLATORS:
#. Get translations for open and closing quotation marks.
#.
#. The message catalog should translate "`" to a left
#. quotation mark suitable for the locale, and similarly for
#. "'".  If the catalog has no translation,
#. locale_quoting_style quotes `like this', and
#. clocale_quoting_style quotes "like this".
#.
#. For example, an American English Unicode locale should
#. translate "`" to U+201C (LEFT DOUBLE QUOTATION MARK), and
#. should translate "'" to U+201D (RIGHT DOUBLE QUOTATION
#. MARK).  A British English Unicode locale should instead
#. translate these to U+2018 (LEFT SINGLE QUOTATION MARK)
#. and U+2019 (RIGHT SINGLE QUOTATION MARK), respectively.
#.
#. If you don't know what to put here, please see
#. <http://en.wikipedia.org/wiki/Quotation_mark#Glyphs>
#. and use glyphs suitable for your language.
#: lib/quotearg.c:272
msgid "`"
msgstr "»"

#: lib/quotearg.c:273
msgid "'"
msgstr "«"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "Speicher erschöpft"

# XXX
#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: kann die bind-Adresse »%s« nicht auflösen; bind wird nicht verwendet.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Verbindungsaufbau zu %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Verbindungsaufbau zu %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "verbunden.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "fehlgeschlagen: %s.\n"

# XXX
#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: kann die Host-Adresse »%s« nicht auflösen\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d Dateien in %s Sekunden konvertiert.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Umwandlung von »%s«... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "kein Download notwendig.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Verweise nicht umwandelbar in »%s«: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Es ist nicht möglich, »%s« zu löschen: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Anlegen eines Backups von »%s« als »%s« nicht möglich: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Syntaxfehler bei Set-Cookie, »%s« an der Stelle %d.\n"

# XXX
#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Cookie von »%s« versuchte die Domain auf »%s« zu ändern\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Cookie-Datei »%s« kann nicht geöffnet werden: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Fehler beim Schreiben nach »%s«: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Fehler beim Schließen von »%s«: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Nicht unterstützte Art der Auflistung; Versuch Unix-Auflistung zu "
"verwenden.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Index von /%s auf %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "Zeit unbekannt     "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Datei       "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Verzeichnis "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Verweis     "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Nicht sicher"

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s Bytes)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Länge: %s"

# XXX
#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) sind noch übrig"

# XXX
#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s übrig"

# wohl "unmaßgeblich", nicht "ohne Berechtigung"
#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (unmaßgeblich)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Anmelden als %s ... "

# Ist das gemeint?
# Das finde ich nicht gut.  Ich denke, Programme sollten nie in der
# 1. Person von sich sprechen.  Im Deutschen könnte man sagen:
#     ... Kontroll-Verbindung wird geschlossen
# oder
#     ... Schließen der Kontroll-Verbindung
#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Fehler in der Antwort des Servers; schließe Kontroll-Verbindung.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Fehler bei der Begrüßung des Servers.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Schreiben schlug fehl; Kontroll-Verbindung schließen.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Der Server verweigert die Anmeldung.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Fehler bei der Anmeldung.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Angemeldet!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr ""
"Fehler beim Server; es ist nicht möglich, die Art des Systems "
"festzustellen.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "fertig.    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "fertig.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Unbekannte Art »%c«, schließe Kontroll-Verbindung.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "fertig.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD nicht notwendig.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Das Verzeichnis »%s« gibt es nicht.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD nicht erforderlich.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Kann PASV-Übertragung nicht beginnen.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Kann PASV-Antwort nicht auswerten.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "Konnte keine Verbindung zu »%s«, Port »%d« herstellen: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Verbindungsfehler (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Ungültiger PORT.\n"

# Wieder das mit der 1. Person :)
#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST schlug fehl; es wird wieder von vorn begonnen.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Die Datei »%s« existiert.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr ""
"Die Datei »%s« gibt es nicht.\n"
"\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Die Datei »%s« gibt es nicht.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Die Datei oder das Verzeichnis »%s« gibt es nicht.\n"
"\n"

# XXX
#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "»%s« ist plötzlich entstanden.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s; Kontroll-Verbindung schließen.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Daten-Verbindung: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Kontroll-Verbindung geschlossen.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Daten-Übertragung abgebrochen.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Die Datei »%s« ist schon vorhanden; kein erneuter Download.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(Versuch:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - auf die Standardausgabe geschrieben [%s/%s]\n"
"\n"

# oder "gesichert"?
#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - »%s« gespeichert [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Entferne »%s«.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "»%s« als temporäre Auflistungsdatei benutzen.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "»%s« gelöscht.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Die Rekursionstiefe %d übersteigt die max. erlaubte Tiefe %d.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Datei auf dem Server nicht neuer als die lokale Datei »%s« -- kein Download.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Datei auf dem Server neuer als die lokale Datei »%s«, -- Download erfolgt.\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Größen stimmen nicht überein (lokal %s) -- erneuter Download.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Ungültiger Name für einen symbolischen Verweis; übersprungen.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr "Der richtige symbolische Verweis %s -> %s ist schon vorhanden.\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Symbolischen Verweis %s -> %s anlegen.\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr ""
"Symbolischer Verweis wird nicht unterstützt; symbolischer Verweis »%s« "
"übersprungen.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Verzeichnis »%s« übersprungen.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: unbekannter bzw. nicht unterstützter Dateityp.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: beschädigter Zeitstempel.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Verzeichnisse nicht erneut holen; da die Tiefe bereits %d ist (max. erlaubt %"
"d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr ""
"Nicht zu »%s« hinabsteigen, da es ausgeschlossen bzw. nicht eingeschlossen "
"ist.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "»%s« zurückgewiesen.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Fehler beim Vergleichen von »%s« mit »%s«: %s.\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Keine Treffer bei dem Muster »%s«.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "HTML-artigen Index nach »%s« [%s] geschrieben.\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "HTML-artiger Index nach »%s« geschrieben.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "FEHLER"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "WARNUNG"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: Kein Zertifikat angegeben von %s.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Dem Zertifikat von %s wird nicht vertraut.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""
"%s: Das Zertifikat von »%s« wurde von einem unbekannten Austeller "
"herausgegeben.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: Das Zertifikat von %s wurde für ungültig erklärt.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Fehler beim Initialisieren des X509-Zertifikates: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Kein Zertifikat gefunden.\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Fehler beim Parsen des Zertifikates: %s.\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Das ausgestellte Zertifikat ist noch nicht aktiviert.\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Das ausgestellte Zertifikat ist nicht mehr gültig.\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "Der Zertifikat-Eigentümer paßt nicht zum Hostname »%s«.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Unbekannter Rechner"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Temoprärer Fehler bei der Namensauflösung"

#: src/host.c:364
msgid "Unknown error"
msgstr "Unbekannter Fehler"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Auflösen des Hostnamen »%s«.... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "Fehler: Keine IPv4/IPv6 Adresse für den Host.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "fehlgeschlagen: Wartezeit abgelaufen.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Der unvollständige Link »%s« kann nicht aufgelöst werden.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: %s: Ungültige URL »%s«.\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Fehler beim Schreiben der HTTP-Anforderung: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Keine Header, vermutlich ist es HTTP/0.9."

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "SSL wird ausgeschaltet nachdem Fehler aufgetreten sind.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "POST Datendatei »%s« fehlt: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Wiederverwendung der bestehenden Verbindung zu %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Fehler beim Lesen der Proxy-Antwort: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Proxy-Tunneling fehlgeschlagen: %s"

# Wieder das mit der 1. Person :)
#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s Anforderung gesendet, warte auf Antwort... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Keine Daten empfangen.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Lesefehler (%s) beim Vorspann (header).\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Unbekanntes Authentifizierungsschema.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Authorisierung fehlgeschlagen.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Die Datei »%s« ist schon vorhanden; kein erneuter Download.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Nicht korrekte Statuszeile"

#: src/http.c:2095
msgid "(no description)"
msgstr "(keine Beschreibung)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Platz: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "nicht spezifiziert"

#: src/http.c:2156
msgid " [following]"
msgstr "[folge]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Download der Datei schon vollständig; kein Download notwendig.\n"
"\n"

# Header
#: src/http.c:2243
msgid "Length: "
msgstr "Länge: "

#: src/http.c:2263
msgid "ignored"
msgstr "übergangen"

# XXX
#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "In »%s« speichern.\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Warnung: Joker-Zeichen werden bei HTTP nicht unterstützt.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""
"Spider-Modus eingeschaltet.  Prüfe ob die Datei auf dem Server existiert.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Kann nicht nach »%s« schreiben (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Es ist nicht möglich, eine SSL-Verbindung herzustellen.\n"

# Was meint hier location?
#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "FEHLER: Umleitung (%d) ohne Ziel(?).\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Die Datei auf dem Server existiert nicht -- Link nicht gültig!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s FEHLER %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "»Last-modified«-Kopfzeile fehlt -- Zeitstempel abgeschaltet.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "»Last-modified«-Kopfzeile ungültig -- Zeitstempel übergangen.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Datei auf dem Server nicht neuer als die lokale Datei »%s« -- kein Download.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Größen stimmen nicht überein (lokal %s) -- erneuter Download.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Datei der Gegenseite ist neuer, erneuter Download.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr "Datei auf dem Server existiert und enhält Links -- Download erfolgt.\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Datei auf dem Server existiert aber enhält keine Links -- kein Download.\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Datei auf dem Server existiert und könnte weitere Links enthalten,\n"
"aber Rekursion ist abgeschaltet -- kein Download.\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr "Datei auf dem Server existiert.\n"

#: src/http.c:2790
#, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s URL: %s %2d %s\n"

#: src/http.c:2837
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - auf die Standardausgabe geschrieben %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - »%s« gespeichert [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Verbindung bei Byte %s geschlossen. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Lesefehler bei Byte %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Lesefehler bei Byte %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC zeigt auf die Datei »%s«, die nicht existiert.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: »%s« nicht lesbar (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Fehler in »%s« bei Zeile %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Fehler in »%s« in Zeile %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Unbekanntes Kommando »%s« in »%s« in Zeile %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Warnung: »wgetrc« des Systems und des Benutzers zeigen beide auf »%s«.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Ungültiges »--execute«-Kommando »%s«\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Ungültiger Schalter »%s«, bitte »on« oder »off« angeben.\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Ungültige Nummer »%s«\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Ungültiger Byte-Wert »%s.«\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Ungültige Zeitperiode »%s«\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Ungültiger Wert »%s«.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Ungültige Kopfzeile »%s«\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Ungültiger Fortschrittstyp »%s.«\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Ungültige Einschränkung »%s«,\n"
"    verwenden Sie [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Die Kodierung »%s« ist nicht korrekt\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: Lokale ist nicht gesetzt\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Konvertierung von »%s« nach »%s« ist nicht unterstützt\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Unvollständige oder ungültige multi-Byte-Sequenz\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Fehlernummer %d niche behandelt\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode fehlgeschlagen (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode fehlgeschlagen (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s erhalten, Ausgabe wird nach »%s« umgeleitet.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s empfangen.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; Protokoll wird ausgeschaltet.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Syntax: %s [OPTION]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Erforderliche Argumente zu langen Optionen sind auch bei kurzen Optionen "
"erforderlich.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Beim Start:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version          Programmversion anzeigen und beenden\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help             diese Hilfe anzeigen\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background       nach dem Starten in den Hintergrund gehen\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=BEFEHL   einen ».wgetrc«-artigen Befehl ausführen\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Log-Datei schreiben und Eingabe-Datei:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=DATEI    Protokoll-Meldungen in DATEI schreiben\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=DATEI  Meldungen der DATEI anhängen\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug                Debug-Ausgabe anzeigen\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug               Watt-32 Debug-Ausgabe anzeigen\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet                keine Ausgabe von Meldungen\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose              ausführliche Meldungen (Vorgabe)\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --non-verbose          Meldungen weniger ausführlich, aber nicht »--"
"quiet«\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=DATEI     in lokaler oder externer DATEI gelistete URLs "
"holen\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html           Eingabe-Datei als HTML behandeln\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            Löse Verweise in der HTML Eingabedatei (-i -F)\n"
"                             relativ zur URL auf,\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Download:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=ZAHL             Anzahl der Wiederholversuche auf ZAHL "
"setzen\n"
"                                  (0 steht für unbegrenzt)\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused      Wiederhole, auch wenn der Partner die "
"Verbindung abgelehnt hat.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O   --output-document=DATEI  Dokumente in DATEI schreiben\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber             bestehende Dateien nicht überschreiben "
"oder \n"
"                                  ».#« Suffix verwenden\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue               Fortführung des Downloads einer bereits zum\n"
"                                  Teil geholten Datei\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=STYLE         Anzeige für den Download auf STYLE setzen\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping           Nur Dateien holen, die neuer als die "
"lokalen\n"
"                                  Dateien sind\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response        Antwort des Servers anzeigen\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr ""
"       --spider                 kein Download (don't download anything)\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr "  -T,  --timeout=SEKUNDEN       alle Timeouts auf SEKUNDEN setzen\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEKUNDEN   den Timeout der DNS-Abfrage auf SEKUNDEN "
"setzen\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SEKUNDEN   den Connect-Timeout auf SEKUNDEN setzen\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SEKUNDEN  den Lese-Timeout auf SEKUNDEN setzen\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=SEKUNDEN          SEKUNDEN zwischen den Downloads warten\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEKUNDEN     1...SEKUNDEN zwischen den erneuten "
"Versuchen\n"
"                                  warten\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait            Zwischen 0 und 2*WAIT Sekunden zwischen\n"
"                                  Versuchen warten\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy               Keinen Proxy verwenden\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=ZAHL             Kontingent für den Download auf ZAHL setzen\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRESSE   An die ADRESSE (Hostname oder IP) des "
"lokalen\n"
"                                  Rechners binden\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=RATE        Datenrate beim Download auf RATE begrenzen\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --dns-cache=off          Cachen von DNS-Abfragen ausschalten\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS Verwendbare Zeichen in Dateinamen auf \n"
"                                  diejenigen einschränken, die das \n"
"                                  Betriebssystem erlaubt\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case            ignoriere Groß-/Kleinschreibung bei Datei-/"
"Verzeichnisnamen.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only             Verbinde nur zu IPv4-Adressen.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only             Verbinde nur zu IPv6-Adressen.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILIE   Versuche zunächste eine Verbindung zur\n"
"                                 angegebenen Familie, eins von »IPv6«,\n"
"                                 »IPv4« oder »none«\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=USER              Verwende USER sowohl als ftp- als auch als "
"http-Benutzer.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=PASS          Verwende PASS sowohl als ftp- als auch als "
"http-Passwort.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password           Frage nach Passworten.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  Support für IRI abschalten.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=ENC      verwende ENC als die lokale Kodierung für "
"IRIs.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=ENC     verwende ENC als die externe "
"Standardkodierung\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Verzeichnisse:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd  --no-directories            keine Verzeichnisse anlegen\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr ""
"  -x,  --force-directories         Anlegen von Verzeichnissen erzwingen\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories       keine Host-Verzeichnisse anlegen\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     Verwende den Protokollnamen in "
"Verzeichnissen\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""
"  -P,  --directory-prefix=PREFIX   Dateien unter dem Verzeichnis PREFIX/...\n"
"                                     speichern\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=ZAHL             ZAHL der Verzeichnisebenen der "
"Gegenseite\n"
"                                     überspringen\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP-Optionen:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=BENUTZER   http-Benutzer auf BENUTZER setzen\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-passwd=PASS     http-Passwort auf PASS setzen\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache             Verbiete durch den Server gecachte Daten\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"        --default-page=NAME    Ändere den Namen der Standard-Seite "
"(normalerweise »index.html«).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension       alle text/html-Dokumente mit der richtigen\n"
"                                Namenserweiterung speichern\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length        das »Content-Length«-Kopffeld ignorieren\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""
"       --header=ZEICHENKETTE  ZEICHENKETTE zwischen die Kopfzeilen einfügen\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect         maximale Anzahl erlaubter »Redirects« pro "
"Seite.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=BENUTZER  BENUTZER als Proxy-Benutzername setzen\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-passwd=PASS    PASS als Proxy-Passwort setzen\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL          die Kopfzeile `Referer: URL' der HTTP-"
"Anforderung\n"
"                                hinzufügen\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr ""
"       --save-headers         den HTTP-Vorspann (header lines) in Datei "
"sichern\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT     als AGENT anstelle of Wget/VERSION "
"identifizieren\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive   »HTTP keep-alive« (ununterbrochene "
"Verbindungen)\n"
"                                deaktivieren\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies           Cookies nicht verwenden\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=DATEI   Cookies vor der Sitzung aus der DATEI laden\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=DATEI   Cookies nach der Sitzung in der DATEI "
"speichern\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies Lade und speichere (nicht-permanente) Session-"
"Cookies.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=STRING     Verwende die POST-Methode, sende dabei die \n"
"                                Zeichenkette STRING als Daten\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=DATEI      Verwende die POST-Methode, sende dabei den \n"
"                                Inhalt aus DATEI\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   beachte den Content-Disposition Header bei "
"der\n"
"                               Auswahl lokaler Dateinamen (EXPERIMENTAL).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Sende »Basic HTTP authentication« "
"Informationen\n"
"                               ohne zuerst auf die Aufforderung des Servers\n"
"                               zu warten.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS (SSL) Optionen:\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     Verwende als sicheres Protokoll eins aus\n"
"                                »auto«, »SSLv2«, »SSLv3« oder »TLSv1«.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   Das Server-Zertifikat nicht validieren.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=DATEI      Datei mit dem Client-Zertifikat.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TYP   Typ des Client-Zertifikates, »PEM« oder "
"»DER«.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=DATEI      Datei mit dem Private Key\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TYP   Typ des Private Key, »PEM« oder »DER«\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=DATEI   Datei mit der CA-Sammlung\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=VERZEICHNIS  Verzeichnis mit der Hash-Liste der CAs\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=DATEI      Datei mit Zufallsdaten zur Initialisierung "
"des\n"
"                                SSL Pseudo-Zufallszahlen-Generators\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=DATEI         Dateiname des EGD-Sockets mit Zufallszahlen\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP-Optionen:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             Verwende Stream_LF Format für alle binären "
"FTP-Dateien.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""
"       --ftp-user=BENUTZER       Verwende BENUTZER als ftp-Benutzername\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=PASSWORT Verwende PASSWORT als ftp-Passwort\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing    ».listing«-Dateien nicht entfernen\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               Schalte ftp Dateinamens-Globbing aus\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp        Verwende nur »aktiven« Transfer-Modus\n"

# Check --retr-symlinks
#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks        falls auftretend, verlinkte Dateien holen "
"(keine\n"
"                                Verzeichnisse)\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekursives Holen:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr ""
"  -r,  --recursive         rekursiver Download -- mit Umsicht verwenden!\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=Zahl        maximale Rekursionstiefe (»inf« oder »0« steht\n"
"                             für ohne Begrenzung)\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after      geholte Dateien nach dem Download löschen\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links     Links in HTML- oder CSS-Downloads in lokale Links "
"umwandeln\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted      vor dem Umwandeln der Datei X, ein Backup "
"als\n"
"                                 X_orig anlagen.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted      vor dem Umwandeln der Datei X, ein Backup "
"als\n"
"                                 X.orig anlagen.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror                Kurzform, die »-r -N -l inf -nr --no-remove-"
"listing« entspricht.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites       alle Bilder usw. holen, die für die Anzeige\n"
"                                 der HTML-Seite notwendig sind\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments       Strikte Handhabung (SGML) von HTML-"
"Kommentaren\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Rekursiv erlauben/zurückweisen:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LISTE               komma-unterteilte Liste der erlaubten\n"
"                                      Dateiendungen\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LISTE               komma-unterteilte Liste der\n"
"                                      zurückzuweisenden Erweiterungen\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LISTE              komma-unterteilte Liste der erlaubten\n"
"                                      Domains\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LISTE      komma-unterteilte Liste der\n"
"                                      zurückzuweisenden Domains\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                 FTP-Verweisen von HTML-Dokumenten aus\n"
"                                      folgen\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTE          komma-unterteilte Liste der zu "
"folgenden\n"
"                                      HTML-Tags\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTE          komma-unterteilte Liste der zu\n"
"                                      missachtenden HTML-Tags\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                 wenn »--recursive«, auch zu fremden "
"Hosts\n"
"                                      gehen\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                   nur relativen Verweisen folgen\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""
"  -I,  --include-directories=LISTE  Liste der erlaubten Verzeichnisse\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""
"  -X,  --exclude-directories=LISTE  Liste der auszuschließenden "
"Verzeichnisse\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""
"  -np, --no-parent                  nicht in das übergeordnete Verzeichnis\n"
"                                      wechseln\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr ""
"Fehlerberichte und Verbesserungsvorschläge bitte an <bug-wget@gnu.org>\n"
"schicken.\n"
"\n"
"Für die deutsche Übersetzung ist die Mailingliste <de@li.org> zuständig.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr ""
"GNU Wget %s, ein nicht-interaktives Netz-Werkzeug zum Download von Dateien.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Passwort für Benutzer »%s«: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Passwort: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Lokale: "

#: src/main.c:782
msgid "Compile: "
msgstr "Übersetzt: "

#: src/main.c:783
msgid "Link: "
msgstr "Gebunden: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s übersetzt unter VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s übersetzt unter %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (Umgebung)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (Benutzer)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (System)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Copyright (C) 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Dies ist Freie Software; Sie dürfen diese ändern und weitergeben.\n"
"Es wird keine Garantie gegeben, soweit das Gesetz es zuläßt.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Ursprünglich geschrieben von Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Derzeit gepflegt von Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Fehlerberichte und Verbesserungsvorschläge bitte an <bug-wget@gnu.org>\n"
"schicken.\n"
"\n"
"Für die deutsche Übersetzung ist die Mailingliste <de@li.org> zuständig.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "»%s --help« gibt weitere Informationen.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: ungültige Option -- »-n%c«\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "»Ausführliche« und »keine Meldungen« ist gleichzeitig unmöglich.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"»Zeitstempel« und »Überschreibung alter Dateien« ist gleichzeitig unmöglich.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr ""
"Die Optionen »--inet4-only« und »--inet6-only« sind gemeinsam nicht erlaubt\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Die Optionen »-k« und »-o« sind gemeinsam nicht erlaubt, wenn mehrere\n"
"URLs oder die Optionen »-p« oder »-r« angegeben sind.  Weitere\n"
"Informationen finden Sie im Handbuch.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"WARNUNG: Die Option -O zusammen mit einer der Optionen -r oder -p\n"
"bedeutet, dass jeglicher Download in genau der angegebenen Datei\n"
"gespeichert wird.\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"WARNUNG: Zeitstempel funktionieren nicht in Kombination mit der Option\n"
"»-O«.  Genauere Erläuterungen finden Sie im Handbuch.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Die Datei »%s« ist schon vorhanden; kein erneuter Download.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""
"Die Optionen »--ask-password« und »--password« sind gemeinsam nicht erlaubt.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL fehlt\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Diese Version unterstützt keine IRIs.\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"WARNUNG: Kann die Standard-Ausgabe nicht erneut im Binärmodus öffnen;\n"
"         heruntergeladene Dateien könnten unpassende Zeilenenden enthalten.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Keine URLs in %s gefunden.\n"

# XXX
#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"BEENDET --%s--\n"
"Geholt: %d Dateien, %s in %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Download-Kontingent von %s ERSCHÖPFT!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Im Hintergrund geht's weiter.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Im Hintergrund geht's weiter, die Prozeßnummer ist %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "Ausgabe wird nach »%s« geschrieben.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Kein benutzbar \"socket driver\" auffindbar.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: Warnung: »%s«-Wortteil erscheint vor jeglichem Maschinennamen\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: unbekannter Wortteil »%s«\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Syntax: %s NETRC [HOSTNAME]\n"

# stat
#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: kann nicht finden %s: %s\n"

# XXX
#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr ""
"WARNUNG: Der Zufallszahlengenerator wird mit einem schwachen Wert "
"initialisiert.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"Der Zufallszahlengenerator konnte nicht initialisiert werden, denken Sie "
"über --random-file nach.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: Kann das Zertifikat von »%s« nicht prüfen, ausgestellt von »%s«:.\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr ""
"  Die Authorität des Ausstellers des Zertifikates kann lokal nicht geprüft "
"werden.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Ein selbst-signiertes Zertifikat gefunden.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Das ausgestellte Zertifikat ist noch nicht gültig.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Das ausgestellte Zertifikat ist nicht mehr gültig.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: Der Common Name »%s« des Zertifikates entspricht nicht dem angeforderten "
"Hostname »%s«.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: Der »common name« des Zertifikates ist ungültig (enthält ein NUL-"
"Zeichen).\n"
"Das könnte ein Zeichen dafür sein, dass der Host nicht derjenige ist, der "
"er\n"
"zu sein vorgibt (also nicht der echte »%s«).\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"Verwenden Sie »--no-check-certificate«, um zu dem Server »%s« eine nicht "
"gesicherte Verbindung aufzubauen.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ überspringe %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr ""
"Ungültiger Stil für den »dot«-Fortschrittsindikator  »%s«; keine Änderung.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  ETA %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   in "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Kann die Frequenz der Echtzeit-Uhr nicht bestimmen: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Entferne »%s«, da dies zurückgewiesen werden soll.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Kann »%s« nicht öffnen: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Lade »robots.txt«; bitte Fehler ignorieren.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Fehler beim Parsen der Proxy-URL »%s«: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Fehler in der Proxy-URL »%s«: Es muss eine HTTP-URL sein.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d: Die Anzahl der Verweise ist zu groß.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Aufgegeben.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Erneuter Versuch.\n"
"\n"

# Besser als: Alle Verweise ok?
#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Keine ungültigen Verweise gefunden.\n"
"\n"

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] ""
"Ein %d ungültiger Verweis gefunden.\n"
"\n"
msgstr[1] ""
"%d ungültige Verweise gefunden.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Kein Fehler"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Nicht unterstütztes Schema »%s«"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Schema fehlt"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Ungültiger Hostname"

#: src/url.c:641
msgid "Bad port number"
msgstr "Ungültige Port-Nummer"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Ungültiger Benutzername"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Unvollständige numerische IPv6-Adresse"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6-Adressen werden nicht unterstützt"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Ungültige numerische IPv6-Adresse"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "Keine HTTPS-Unterstützung einkompiliert"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr ""
"%s: %s: Fehler beim Allozieren von ausreichend Speicher; Speicher "
"erschöpft.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Fehler beim Allozieren von %ld Bytes; Speicher erschöpft.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: Textpuffer ist zu groß (%ld Bytes), Abbruch.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Im Hintergrund geht's weiter, die Prozeßnummer ist %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Entfernen des symbolischen Verweises »%s« fehlgeschlagen: %s\n"
