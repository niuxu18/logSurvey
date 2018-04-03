# Dutch translations for wget.
# Copyright (C) 2009 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
#
# André van Dijk <ady@unseen.demon.nl>, 1998.
# Elros Cyriatan <cyriatan@fastmail.fm>, 2004.
# Benno Schulenberg <benno@vertaalt.nl>, 2005, 2006, 2007, 2008.
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre5\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-08-03 07:54+0100\n"
"Last-Translator: Erwin Poeze <erwin.poeze@gmail.com>\n"
"Language-Team: Dutch <vertaling@vrijschrift.org>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"X-Generator: KBabel 1.11.4\n"
"Plural-Forms: nplurals=2; plural=(n != 1);\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Onbekende systeemfout"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: optie `%s' is niet eenduidig\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: optie `--%s' staat geen argument toe\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: optie `%c%s' staat geen argument toe\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: optie `%s' vereist een argument\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: onbekende optie `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: onbekende optie `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: ongeldige optie -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: ongeldige optie -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: optie vereist een argument -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: optie `-W %s' is niet eenduidig\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: optie `-W %s' staat geen argument toe\n"

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
msgstr "`"

#: lib/quotearg.c:273
msgid "'"
msgstr "'"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "geheugen uitgeput"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: kan bindingsadres '%s' niet herleiden; binding wordt uitgeschakeld.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Verbinding maken met %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Verbinding maken met %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "verbonden.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "mislukt: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: kan host-adres '%s' niet herleiden\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d bestanden geconverteerd in %s seconden.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Converteren van %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "niets te doen.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Kan hyperlinks in %s niet converteren: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Kan '%s' niet verwijderen: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Kan geen reservekopie %2$s van %1$s maken: %3$s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Syntaxfout in 'Set-Cookie'-kopregel: %s op positie %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Een cookie afkomstig van %s probeerde %s als domein in te stellen\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Kan cookiesbestand '%s' niet openen: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Fout bij schrijven naar '%s': %s.\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Fout bij sluiten van '%s': %s.\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Niet-ondersteunde lijstsoort; Unix-lijstontleder wordt geprobeerd.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Index van /%s op %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "tijd onbekend      "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Bestand     "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Map         "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Koppeling   "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Onzeker     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bytes)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Lengte: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) resterend"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s resterend"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (onzeker)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Inloggen als %s... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Fout in server-antwoord -- de besturingsverbinding wordt gesloten.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Fout in server-groet.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Schrijffout -- de besturingsverbinding wordt gesloten.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "De server weigert de login.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Login onjuist.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Ingelogd!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Serverfout -- kan systeemsoort niet bepalen.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "gereed.  "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "gereed.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Onbekend soort `%c' -- de besturingsverbinding wordt gesloten.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "gereed.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD is niet nodig.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Map '%s' bestaat niet.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD is niet vereist.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Kan geen PASV-transport starten.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Kan PASV-antwoord niet verwerken.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "Kan geen verbinding maken met %s op poort %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bindingsfout (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Ongeldige PORT-opdracht.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST-opdracht is mislukt; van voren af aan begonnen.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Bestand '%s' bestaat.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Bestand '%s' bestaat niet.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Bestand '%s' bestaat niet.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Bestand of map '%s' bestaat niet.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s is zojuist ontstaan.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s -- de besturingsverbinding wordt gesloten.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Gegevensverbinding: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Besturingsverbinding is gesloten.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Gegevensoverdracht is afgebroken.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Bestand '%s' is reeds aanwezig -- wordt niet opgehaald.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(poging %2d) "

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - weggeschreven naar stdout %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - '%s' opgeslagen [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Verwijderen van %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "'%s' wordt gebruikt als tijdelijk lijstbestand.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "'%s' is verwijderd.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Recursiediepte %d heeft maximum diepte %d overschreden.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Bestand op server is niet nieuwer dan lokaal bestand '%s' -- wordt niet "
"opgehaald.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Bestand op server is nieuwer dan lokaal bestand '%s' -- ophalen.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"De groottes komen niet overeen (is lokaal %s) -- ophalen.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Ongeldige naam voor een symbolische koppeling, wordt overgeslagen.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Correcte symbolische koppeling bestaat al: %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Maken van symbolische koppeling: %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr ""
"Symbolische koppelingen worden niet ondersteund; '%s' wordt overgeslagen.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Map '%s' wordt overgeslagen.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: onbekende of niet-ondersteunde bestandssoort.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: beschadigd tijdsstempel.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Mappen worden niet opgehaald, want de diepte is %d (maximaal %d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr ""
"Er wordt niet afgedaald naar '%s', want deze is uitgesloten of niet "
"ingesloten.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "'%s' wordt verworpen.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Fout bij vergelijken van '%s' met '%s': %s.\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Geen overeenkomsten met patroon '%s'.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Index is in HTML-vorm naar '%s' [%s] geschreven.\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Index is in HTML-vorm naar '%s' geschreven.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "FOUT"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "WAARSCHUWING"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: geen certificaat aangeboden door %s.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: het certificaat van '%s' is niet vertrouwd.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: het certificaat van %s heeft een onbekende uitgever.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: het certificaat van '%s' is herroepen.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Initialiseren X509-certificaat is mislukt: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Geen certificaat gevonden\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Fout tijdens ontleden van certificaat: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Het certificaat is nog niet geactiveerd\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Het certificaat is verlopen\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "De certificaateigenaar komt niet overeen met hostnaam '%s'\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Onbekende host"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Tijdelijke storing in naamsherleiding"

#: src/host.c:364
msgid "Unknown error"
msgstr "Onbekende fout"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Herleiden van %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "mislukt: geen IPv4/IPv6-adressen gevonden voor de host.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "mislukt: wachttijd is verstreken.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Kan doel van onvolledige hyperlink %s niet bepalen.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Ongeldige URL '%s': %s.\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Schrijven van HTTP-verzoek is mislukt: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Geen kopregels aanwezig; HTTP/0.9 aangenomen."

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Wegens fouten wordt SSL uitgeschakeld.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "POST-gegevensbestand '%s' ontbreekt: %s.\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Verbinding met %s:%d wordt hergebruikt.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Lezen van proxy-antwoord is mislukt: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Het tunnelen door een proxy is mislukt: %s."

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s-verzoek is verzonden; wachten op antwoord... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Geen gegevens ontvangen.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Leesfout (%s) in kopregels.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Onbekend aanmeldingsschema.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Aanmelding is mislukt.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Bestand '%s' is reeds aanwezig -- wordt niet opgehaald.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Onjuiste statusregel"

#: src/http.c:2095
msgid "(no description)"
msgstr "(geen omschrijving)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Locatie: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "niet-opgegeven"

#: src/http.c:2156
msgid " [following]"
msgstr " [volgen...]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Het bestand is reeds volledig opgehaald; er is niets te doen.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Lengte: "

#: src/http.c:2263
msgid "ignored"
msgstr "genegeerd"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Wordt geschreven naar: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Waarschuwing: jokertekens zijn bij HTTP niet mogelijk.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Spider-modus: controleren of bestand bestaat op server.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Kan niet naar '%s' schrijven (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Kan geen SSL-verbinding maken.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "Fout: doorverwijzing (%d) zonder locatie.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Bestand bestaat niet op server -- verbroken hyperlink!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s Fout %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr ""
"'Laatst-aangepast'-kopregel ontbreekt -- tijdsstempels worden "
"uitgeschakeld.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"'Laatst-aangepast'-kopregel is ongeldig -- tijdsstempel wordt genegeerd.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Bestand op server is niet nieuwer dan lokaal bestand '%s' -- wordt niet "
"opgehaald.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "De groottes komen niet overeen (is lokaal %s) -- ophalen.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Bestand op server is nieuwer -- ophalen.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Bestand bestaat op server en zou hyperlinks kunnen bevatten -- ophalen.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Bestand bestaat op server maar bevat geen hyperlinks -- wordt niet "
"opgehaald.\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Bestand bestaat op server en zou verdere hyperlinks kunnen bevatten,\n"
"maar recursie is uitgeschakeld -- wordt niet opgehaald.\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Bestand bestaat op server.\n"
"\n"

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
"%s (%s) - geschreven naar stdout %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - '%s' opgeslagen [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Verbinding werd verbroken bij byte %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Leesfout bij byte %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Leesfout bij byte %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: De variabele WGETRC wijst naar %s, maar deze bestaat niet.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Kan '%s' niet lezen (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Fout in %s op regel %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Syntaxfout in %s op regel %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Onbekende opdracht '%s' in %s op regel %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Waarschuwing: zowel de systeem- als gebruikers-wgetrc wijzen naar '%s'.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Ongeldige opdracht '%s' bij '--execute'.\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Ongeldige booleaan '%s' --  gebruik 'on' of 'off'.\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Ongeldig aantal '%s'.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Ongeldige bytewaarde '%s'\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Ongeldig tijdsinterval '%s'\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Ongeldige waarde '%s'\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Ongeldige kopregel '%s'\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Ongeldig voortgangstype '%s'.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Ongeldige beperking '%s',\n"
"    gebruik [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Codering %s is niet geldig\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: locale is niet ingesteld\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Omzetting van %s naar %s is niet ondersteund\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Incomplete of ongeldige multibyte-volgorde aangetroffen\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Onafgehandeld foutnummer %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode is mislukt (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode is mislukt (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s ontvangen, uitvoer wordt omgeleid naar '%s'.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s ontvangen.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; bijhouden van logboek wordt uitgeschakeld.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Gebruik:  %s [OPTIE]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"(De argumenten bij lange opties gelden ook voor de korte vormen.)\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Opstarten:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           programmaversie tonen en stoppen\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              deze hulptekst tonen en stoppen\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        na opstarten naar de achtergrond gaan\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""
"  -e,  --execute=OPDRACHT  deze OPDRACHT (in '.wgetrc'-stijl) uitvoeren\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Logboek en invoerbestand:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=BESTAND    meldingen opslaan in BESTAND\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=BESTAND  meldingen toevoegen aan BESTAND\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug                  uitgebreide debuguitvoer tonen\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug                 'Watt-32'-debuguitvoer tonen\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet                  stil zijn (geen uitvoer produceren)\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr ""
"  -v,  --verbose                gedetailleerde uitvoer produceren "
"(standaard)\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose             beknopte uitvoer (maar niet geheel stil)\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=BESTAND     lees URL's uit BESTAND.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html             invoerbestand als HTML behandelen\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            koppelingen van HTML-invoerbestanden herleiden "
"(-i -F)\n"
"                             relatief tot URL.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Downloaden:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=AANTAL           maximaal dit AANTAL herhalingspogingen doen\n"
"                                  ('0' voor onbegrensd)\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused      ook bij geweigerde verbinding opnieuw "
"proberen\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr ""
"  -O   --output-document=BSTND  alle documenten naar dit ene BSTND "
"schrijven\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber             bestaande bestanden niet overschrijven\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue               voortzetten van gedeeltelijk opgehaald "
"bestand\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=TYPE          dit TYPE voortgangsmeter gebruiken\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping           bestanden niet opnieuw ophalen tenzij ze "
"nieuwer\n"
"                                  zijn dan lokale bestanden\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response        antwoord van server tonen\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                 niets ophalen, alleen kijken\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SECONDEN       alle wachttijden instellen op SECONDEN\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SECONDEN   DNS-opzoekwachttijd instellen op SECONDEN\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SCNDN  verbindingswachttijd instellen op SCNDN\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SECONDEN  leeswachttijd instellen op SECONDEN\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=SECONDEN          tussen bestanden dit aantal SECONDEN "
"wachten\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SECONDEN     1..SECONDEN wachten tussen herhaalde "
"pogingen\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait            tussen bestanden 0..2 keer gewone tijd "
"wachten\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy               geen proxy gebruiken\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=AANTAL           downloadquotum is AANTAL (Kilo- of "
"Megabytes)\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRES     binden aan ADRES (hostnaam of IP) op "
"localhost\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=SNELHEID    downloaden tot deze SNELHEID begrenzen\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache           bufferen van DNS-zoekacties uitschakelen\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS tekens in bestandsnamen beperken tot die\n"
"                                  welke besturingssysteem OS toestaat\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case            verschil tussen kleine en hoofdletters "
"negeren\n"
"                                  bij vergelijken van bestands- en mapnamen\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only             alleen met IPv4-adressen verbinden\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only             alleen met IPv6-adressen verbinden\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=SOORT    eerst met deze SOORT adressen verbinden\n"
"                                  ('IPv6', 'IPv4', of 'none')\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr "       --user=GEBRUIKER         de GEBRUIKER voor FTP en HTTP\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --password=WACHTWOORD    het WACHTWOORD voor FTP en HTTP\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            vraag om wachtwoorden.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  IRI-ondersteuning uitschakelen.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=ENC      gebruik ENC als de lokale codering voor "
"IRIs.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=ENC     gebruik ENC als de standaard remote-"
"codering.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Mappen:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd  --no-directories         geen mappen aanmaken\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories      aanmaken van mappen afdwingen\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories    geen host-mappen maken\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories   in mappen het gegeven protocol gebruiken\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PAD   bestanden opslaan in de map PAD/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=AANTAL        dit AANTAL padcomponenten op server negeren\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP-opties:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=GEBRUIKER    de GEBRUIKER voor HTTP\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-passwd=WACHTWOORD het WACHTWOORD voor HTTP\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr "       --no-cache               server-gebufferde data niet toestaan\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NAAM     de standaardpaginanaam aanpassen (normaal\n"
"                               is dit `index.html'.).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension       alle HTML- en CSS-documenten opslaan met "
"passende extensie.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr "       --ignore-length          de 'Content-Length'-kopregel negeren\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""
"       --header=TEKENREEKS      deze TEKENREEKS tussen kopregels invoegen\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect           maximum aantal doorverwijzingen per pagina\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=GEBRUIKER   de GEBRUIKER voor de proxy\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-passwd=WACHTWRD  het WACHTWRD voor de proxy\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL            een 'Referer'-kopregel met deze URL "
"gebruiken\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers           HTTP-kopregels in bestand opslaan\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT       als AGENT identificeren, niet als Wget/"
"VERSIE\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr "       --no-http-keep-alive     geen HTTP-'keep-alive' gebruiken\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies             geen cookies gebruiken\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=BESTAND   cookies voor de sessie uit dit BESTAND "
"laden\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=BESTAND   cookies na de sessie in dit BESTAND opslaan\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies   de (tijdelijke) sessiecookies laden en "
"opslaan\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=TEKENREEKS   deze TEKENREEKS met POST-methode verzenden\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=BESTAND      dit BESTAND met POST-methode verzenden\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition    'Content-Disposition'-kopregel respecteren "
"bij\n"
"                                  keuze van lokale bestandsnamen "
"[EXPERIMENTEEL]\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge      basale HTTP-authenticatie-informatie "
"verzenden\n"
"                                zonder te wachten op de vraag van de server\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS-opties (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PRTCL  beveiligingsprotocol PRTCL gebruiken\n"
"                                  ('auto', 'SSLv2', 'SSLv3', of 'TLSv1')\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   servercertificaat niet controleren\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=BESTAND    BESTAND dat cliënt-certificaat bevat\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TYPE  TYPE van cliëntcertificaat ('PEM' of 'DER')\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=BESTAND    BESTAND dat de privésleutels bevat\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""
"       --private-key-type=TYPE  TYPE van privésleutel ('PEM' of 'DER')\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=BESTAND BESTAND dat bundel CA's bevat\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=MAP       MAP waar hash-lijst van CA's opgeslagen is\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=BESTAND    BESTAND met ruis om de SSL-PRNG te 'seeden'\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr "       --egd-file=BESTAND       BESTAND met naam van de EGD-socket\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP-opties:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             gebruik Stream_LF voor alle binaire FTP-"
"bestanden.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=GEBRUIKER     de GEBRUIKER voor FTP\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=WACHTWRD  het WACHTWRD voor FTP\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr ""
"       --no-remove-listing      '.listing'-bestanden niet verwijderen\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob                bestandsnaam-'globbing' uitzetten\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp         niet de \"passieve\" overdrachtsmodus "
"gebruiken\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks          symbolisch-gekoppelde bestanden ook ophalen\n"
"                                  (bij recursie), maar geen mappen\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Recursief downloaden:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          recursief downloaden\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=AANTAL       maximale recursiediepte ('0' voor onbegrensd)\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after       bestanden na downloaden lokaal wissen\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      de hyperlinks in opgehaalde HTML-of CSS-"
"bestanden naar\n"
"                            lokale bestanden laten wijzen\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   een reverkopie XX.orig maken alvorens bestand "
"XX\n"
"                              te converteren\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   een reverkopie XX.orig maken alvorens bestand "
"XX\n"
"                              te converteren\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             gelijk aan '-r -N -l inf --no-remove-listing' "
"samen\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    alle plaatjes enzovoort voor HTML-weergave "
"ophalen\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    HTML-commentaar strikt volgens SGML afhandelen\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr ""
"Recursief accepteren/weigeren (de LIJSTen zijn kommagescheiden "
"opsommingen):\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr "  -A,  --accept=LIJST               geaccepteerde achtervoegsels\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr "  -R,  --reject=LIJST               geweigerde achtervoegsels\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr "  -D,  --domains=LIJST              geaccepteerde domeinen\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr "       --exclude-domains=LIJST      geweigerde domeinen\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                 FTP-hyperlinks in HTML-documenten "
"volgen\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr "       --follow-tags=LIJST          deze HTML-tags volgen\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr "       --ignore-tags=LIJST          deze HTML-tags negeren\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                 ook naar andere servers gaan (bij "
"recursie)\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""
"  -L,  --relative                   alleen relatieve hyperlinks volgen\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LIJST  geaccepteerde mappen\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LIJST  uitgesloten mappen\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                  hogergelegen mappen negeren\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr ""
"Rapporteer gebreken in het programma (of suggesties) aan <bug-wget@gnu."
"org>;\n"
"meld fouten in de vertaling aan <vertaling@vrijschrift.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr ""
"GNU Wget %s\n"
"\n"
"Een niet-interactief programma voor het ophalen van bestanden over een "
"netwerk.\n"
"\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Wachtwoord voor gebruiker %s:"

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Wachtwoord:"

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Locale: "

#: src/main.c:782
msgid "Compile: "
msgstr "Compileer: "

#: src/main.c:783
msgid "Link: "
msgstr "Link: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s bouwde op VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s bouwde op %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (env)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (user)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (system)\n"

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
"Dit is vrije software: u mag het vrijelijk wijzigen en verder verspreiden.\n"
"De precieze licentie is GPLv3+: GNU GPL versie 3 of later.\n"
"Zie http://gnu.org/licenses/gpl.html voor de volledige tekst.\n"
"Er is GEEN GARANTIE, voor zover de wet dit toestaat.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Oorspronkelijk geschreven door Hrvoje Nikšić <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Tegenwoordig onderhouden door Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Rapporteer gebreken in het programma (of suggesties) aan <bug-wget@gnu."
"org>;\n"
"meld fouten in de vertaling aan <vertaling@vrijschrift.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Typ '%s --help' voor meer opties.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: ongeldige optie -- '-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Kan niet gelijktijdig 'details geven' en 'stil zijn'.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Tijdsstempels en het niet-overschrijven van oude bestanden gaan niet samen.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Opties '--inet4-only' en '--inet6-only' gaan niet samen.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Opties '-k' en '-O' gaan niet samen als er meerdere URL's gegeven zijn\n"
"of als ook '-p' of '-r' gegeven is.\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"WAARSCHUWING: optie '-O' samen met '-r' of '-p' betekent dat alles\n"
"wat opgehaald wordt in het ene opgegeven bestand geplaatst wordt.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"WAARSCHUWING: optie '-N' of '--timestamping' heeft geen effect samen met '-"
"O'.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Bestand '%s' is reeds aanwezig -- wordt niet opgehaald.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Opties '--ask-password' en '--password' gaan niet samen.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: ontbrekende URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Deze versie heeft geen ondersteuning voor IRIS\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"WAARSCHUWING: Kan standaarduitvoer niet opnieuw in binaire modus openen -- \n"
"              gedownload bestand kan ongeschikte regeleinden bevatten.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Geen URL's gevonden in %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"KLAAR --%s--\n"
"Opgehaald: %d bestanden, %s in %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Downloadquotum van %s bytes is overschreden!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Voortzetting in de achtergrond.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Voortzetting in de achtergrond, proces-ID %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "Uitvoer wordt naar '%s' geschreven.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Kan geen bruikbare 'socket driver' vinden.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: waarschuwing: '%s'-sleutelwoord aangetroffen voor een "
"machinenaam\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: onbekend sleutelwoord '%s'\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Gebruik:  %s NETRC [HOSTNAAM]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: kan status van %s niet opvragen: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr ""
"WAARSCHUWING: er wordt een zwakke 'seed' voor de toevalsgenerator gebruikt.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"Kan geen 'seed' voor PRNG vinden;  gebruik eventueel '--random-file'.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: kan certificaat van %s (uitgegeven door %s) niet controleren:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Kan de autoriteit van de uitgever niet lokaal verifiëren.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Zelf-ondertekend certificaat gevonden.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Certificaat is nog niet geldig.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Certificaat is verlopen.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: naam '%s' in certificaat komt niet overeen met gevraagde hostnaam '%s'.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"Gebruik '--no-check-certificate' om een onbeveiligde verbinding met %s te "
"maken.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ %sK wordt overgeslagen ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Ongeldige puntjesstijl '%s' opgegeven; blijft onveranderd.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  nog %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   in "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Kan frequentie van de klok niet bepalen: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "'%s' wordt verwijderd omdat het verworpen dient te worden.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Kan %s niet openen: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Laden van 'robots.txt'; fouten kunnen worden genegeerd.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Fout tijdens ontleden van proxy-URL '%s': %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Fout in proxy-URL '%s': moet HTTP zijn.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Maximum van %d doorverwijzingen is overschreden.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Pogingen worden gestaakt.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Nieuwe poging.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Geen verbroken hyperlinks gevonden.\n"
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
"%d verbroken hyperlink gevonden.\n"
"\n"
msgstr[1] ""
"%d verbroken hyperlinks gevonden.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Geen fout"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Niet-ondersteund schema '%s'"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Schema ontbreekt"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Ongeldige hostnaam"

#: src/url.c:641
msgid "Bad port number"
msgstr "Ongeldig poortnummer"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Ongeldige gebruikersnaam"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Onafgesloten numeriek IPv6-adres"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6-adressen worden niet ondersteund"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Ongeldig numeriek IPv6-adres"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "Ondersteuning voor HTTPS niet meegecompileerd"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Kan onvoldoende geheugen reserveren; geheugen uitgeput.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Kan geen %ld bytes reserveren; onvoldoende geheugen.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: tekstbuffer is te groot (%ld bytes), afbreken.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Voortzetting in de achtergrond, proces-ID %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Verwijderen van symbolische koppeling '%s' is mislukt: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL               deze URL voorvoegen bij relatieve links\n"
#~ "                                  (in bestand opgegeven met '-F -i')\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions   permissies van bestanden op server "
#~ "behouden\n"
