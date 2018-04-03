# Danish messages for GNU wget
# Copyright (C) 1998 Free Software Foundation, Inc.
# Keld J�rn Simonsen <keld@dkuug.dk>, 2000-2002.
#
# Reviewed: 2001-10-20 Thorbjoern Ravn Andersen <ravn@unixsnedkeren.dk>
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.8.1\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2002-01-20 19:53-0100\n"
"Last-Translator: Keld J�rn Simonsen <keld@dkuug.dk>\n"
"Language-Team: Danish <dansk@klid.dk>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=iso-8859-1\n"
"Content-Transfer-Encoding: 8bit\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Ukendt fejl"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: flaget '%s' er flertydig\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: flaget '--%s' tillader ikke argumenter\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: flaget '%c%s' tillader ikke argumenter\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: flaget '%s' kr�ver et argument\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: ukendt flag '--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: ukendt flag '%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: ugyldigt flag -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, fuzzy, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: ugyldigt flag -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: flaget kr�ver et argument -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, fuzzy, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: flaget '%s' er flertydig\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, fuzzy, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: flaget '--%s' tillader ikke argumenter\n"

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
msgstr ""

#: lib/quotearg.c:273
msgid "'"
msgstr ""

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr ""

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""

#: src/connect.c:291
#, fuzzy, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Kontakter %s[%s]:%hu... "

#: src/connect.c:298
#, fuzzy, c-format
msgid "Connecting to %s:%d... "
msgstr "Kontakter %s:%hu... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "forbundet.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "mislykkedes: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr ""

#: src/convert.c:185
#, fuzzy, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Konverterede %d filer p� %.2f sekunder.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Konverterer %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "ingenting at g�re.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Kan ikke konvertere l�nker i %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Kan ikke slette '%s': %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Kan ikke sikkerhedskopiere %s som %s: %s\n"

#: src/cookies.c:443
#, fuzzy, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Syntaksfejl i Set-Cookie: streng afsluttet for tidligt.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr ""

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Kan ikke �bne infokagefil %s: %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Fejl ved skrivning til '%s' %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Fejl ved lukning af '%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Ikke-underst�ttet listningstype, pr�ver Unix-listningsfortolker.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Indeks for /%s p� %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "ukendt tid         "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Fil         "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Katalog     "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Link        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Usikker     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s byte)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "L�ngde: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ""

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ""

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (ikke endegyldigt)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Logger ind som %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Fejl i svar fra server, lukker kontrolforbindelsen.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Fejl i velkomsthilsen fra server.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Fejl ved skrivning, lukker kontrolforbindelsen.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Serveren tillader ikke indlogning.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Fejl ved indlogging.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Logget ind!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Serverfejl, kan ikke bestemme systemtype.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "f�rdig.      "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "O.k.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Ukendt type '%c', lukker kontrolforbindelsen.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "O.k.    "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD ikke n�dvendig.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Intet katalog ved navn '%s'.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD ikke n�dvendig.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Kan ikke ops�tte PASV-overf�rsel.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Kan ikke tolke PASV-tilbagemelding.\n"

#: src/ftp.c:816
#, fuzzy, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "kunne ikke forbinde til %s:%hu: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bind-fejl (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Ugyldig PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"Fejl ved REST, starter forfra.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"Ingen fil ved navn '%s'.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Ingen fil ved navn '%s'.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Ingen fil eller katalog ved navn '%s'.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr ""

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, lukker kontrolforbindelsen.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - dataforbindelse: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Forbindelsen lukket.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Dataoverf�rsel afbrudt.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "File '%s' eksisterer allerede, hentes ikke.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(fors�g:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - '%s' gemt [%ld]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Fjerner %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Bruger '%s' som midlertidig katalogliste.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "Slettet '%s'.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Rekursionsdybde %d overskred maksimal dybde %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Fjernfil ikke nyere end lokal fil '%s' - hentes ikke.\n"
"\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Fjernfil er nyere end lokal fil '%s' - hentes.\n"
"\n"

#: src/ftp.c:1748
#, fuzzy, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr "St�rrelserne er forskellige (lokal %ld) - hentes.\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Ugyldigt navn for symbolsk l�nke, ignoreres.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Har allerede gyldig symbolsk l�nke %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Laver symbolsk l�nke %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Symbolske l�nker ikke underst�ttet, ignorerer '%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Ignorerer katalog '%s'.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: filtypen er ukendt/ikke underst�ttet.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: ugyldigt tidsstempel.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Henter ikke kataloger, da dybde er %d (max %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Behandler ikke '%s' da det er ekskluderet/ikke inkluderet.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Ignorerer '%s'.\n"

#: src/ftp.c:2035
#, fuzzy, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Fejl ved skrivning til '%s' %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Ingenting passer med m�nstret '%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Skrev HTML-formateret indeks til '%s' [%ld].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Skrev HTML-formateret indeks til '%s'.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr ""

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr ""

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr ""

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr ""

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr ""

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr ""

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Fejl ved fortolkning af proxy-URL %s: %s.\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr ""

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr ""

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""

#: src/host.c:358
#, fuzzy
msgid "Unknown host"
msgstr "Ukendt fejl"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr ""

#: src/host.c:364
msgid "Unknown error"
msgstr "Ukendt fejl"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "L�ser %s..."

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr ""

#: src/host.c:812
#, fuzzy
msgid "failed: timed out.\n"
msgstr "mislykkedes: %s.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: kan ikke l�se ukomplet l�nke %s.\n"

#: src/html-url.c:772
#, fuzzy, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Ugyldig specifikation '%s'\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Fejl ved skrivning af HTTP-foresp�rgsel: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr ""

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr ""

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr ""

#: src/http.c:1660
#, fuzzy, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Genbruger forbindelse til %s:%hu.\n"

#: src/http.c:1729
#, fuzzy, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Fejl ved skrivning af HTTP-foresp�rgsel: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr ""

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s foresp�rgsel sendt, afventer svar... "

#: src/http.c:1811
#, fuzzy
msgid "No data received.\n"
msgstr "Ingen data modtaget"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "L�sefejl (%s) i toptekster.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Ukendt autorisations-protokol.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Autorisation mislykkedes\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr "File '%s' eksisterer allerede, hentes ikke.\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Forkert udformet statuslinje"

#: src/http.c:2095
msgid "(no description)"
msgstr "(ingen beskrivelse)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Sted: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "uspecificeret"

#: src/http.c:2156
msgid " [following]"
msgstr " [omdirigeret]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Filen er allerede fuldt overf�rt; ingen handling n�dvendig.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "L�ngde: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignoreret"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr ""

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Advarsel: jokertegn ikke underst�ttet i HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Kan ikke skrive til '%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Kunne ikke etablere SSL-forbindelse.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "FEJL: Omdirigering (%d) uden nyt sted.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s FEJL %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Last-modified toptekst mangler -- tidsstempling sl�s fra.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Last-modified toptekst ugyldig -- tidsstempel ignoreret.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Serverfil ikke nyere end lokal fil '%s' - hentes ikke.\n"
"\n"

#: src/http.c:2736
#, fuzzy, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "St�rrelserne er forskellige (lokal %ld) - hentes.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Fil p� server er nyere - hentes.\n"

#: src/http.c:2760
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Fjernfil er nyere end lokal fil '%s' - hentes.\n"
"\n"

#: src/http.c:2766
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Fjernfil ikke nyere end lokal fil '%s' - hentes ikke.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""

#: src/http.c:2781
#, fuzzy
msgid ""
"Remote file exists.\n"
"\n"
msgstr "Fil p� server er nyere - hentes.\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s FEJL %d: %s.\n"

#: src/http.c:2837
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - '%s' gemt [%ld/%ld]\n"
"\n"

#: src/http.c:2899
#, fuzzy, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Forbindelse lukket ved byte %ld. "

#: src/http.c:2922
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - L�sefejl ved byte %ld (%s)."

#: src/http.c:2931
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - L�sefejl ved byte %ld/%ld (%s)."

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr ""

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Kan ikke l�se %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Fejl i %s p� linje %d.\n"

#: src/init.c:533
#, fuzzy, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Fejl i %s p� linje %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: FEJL: Ukendt kommando '%s', v�rdi '%s'.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: Advarsel: B�de systemets og brugerens wgetrc peger p� '%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: %s: ugyldig kommando\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Venligst angiv 'on' eller 'off'.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Ugyldig specifikation '%s'\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Ugyldig fremskridtstype '%s'\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Ugyldig specifikation '%s'\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Ugyldig specifikation '%s'\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Ugyldig specifikation '%s'\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Ugyldig fremskridtstype '%s'\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr ""

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr ""

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr ""

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr ""

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr ""

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr ""

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr ""

#: src/log.c:809
#, fuzzy, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s modtaget, omdirigerer udskrifter til '%s'.\n"

#: src/log.c:819
#, fuzzy, c-format
msgid ""
"\n"
"%s received.\n"
msgstr "Ingen data modtaget"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; deaktiverer logning.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Brug: %s [FLAG]... [URL]...\n"

#: src/main.c:398
#, fuzzy
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"\n"
"Obligatoriske argumenter til lange flag er obligatoriske ogs� \n"
"for korte.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr ""

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr ""

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr ""

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr ""

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr ""

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr ""

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr ""

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr ""

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr ""

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr ""

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr ""

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""

#: src/main.c:441
msgid "Download:\n"
msgstr ""

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr ""

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr ""

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr ""

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr ""

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr ""

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr ""

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr ""

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr ""

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""

#: src/main.c:514
#, fuzzy
msgid "Directories:\n"
msgstr "Katalog     "

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr ""

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr ""

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""

#: src/main.c:530
msgid "HTTP options:\n"
msgstr ""

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr ""

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr ""

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr ""

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr ""

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr ""

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr ""

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr ""

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr ""

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""

#: src/main.c:609
msgid "FTP options:\n"
msgstr ""

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr ""

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr ""

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""

#: src/main.c:629
msgid "Recursive download:\n"
msgstr ""

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr ""

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr ""

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Rapport�r fejl og send forslag til <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, en ikke-interaktiv informationsagent.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr ""

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr ""

#: src/main.c:780
msgid "Wgetrc: "
msgstr ""

#: src/main.c:781
msgid "Locale: "
msgstr ""

#: src/main.c:782
msgid "Compile: "
msgstr ""

#: src/main.c:783
msgid "Link: "
msgstr ""

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr ""

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr ""

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr ""

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
#, fuzzy
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr ""
"Ophavsret � 1995, 1996, 1997, 1998, 2000, 2001 Free Software Foundation, "
"Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
#, fuzzy
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Oprindeligt skrevet af Hrvoje Niksic <hniksic@arsdigita.com>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Rapport�r fejl og send forslag til <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Pr�v '%s --help' for flere flag.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: ugyldigt flag -- '-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Kan ikke v�re udf�rlig og stille p� samme tid.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Kan ikke tidsstemple og lade v�re at ber�re eksisterende filer p� samme "
"tid.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr ""

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""

#: src/main.c:1079
#, fuzzy, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "File '%s' eksisterer allerede, hentes ikke.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL mangler.\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr ""

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Fandt ingen URLer i %s.\n"

#: src/main.c:1336
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"F�RDIG --%s--\n"
"Nedhentede %s byte i %d filer\n"

#: src/main.c:1345
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Hente-kvote (%s byte) overskredet!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Forts�tter i baggrunden.\n"

#: src/mswindows.c:292
#, fuzzy, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Forts�tter i baggrunden, pid %d.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Uddata vil blive skrevet til '%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Fandt ingen brugbar sokkel-driver.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: Advarsel: symbolet '%s' fundet f�r server-navn\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: ukendt symbol '%s'\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Brug: %s NETRC [V�RTSNAVN]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: 'stat' fejlede for %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr ""

#: src/openssl.c:173
#, fuzzy
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Kunne ikke p�begynde OpenSSL PRNG; deaktiverer SSL.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr ""

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr ""

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr ""

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr ""

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr ""

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""

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

#: src/progress.c:242
#, fuzzy, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ hopper over %dK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Ugyldig punkt-stils specifikation '%s'; forbliver u�ndret.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr ""

#: src/progress.c:1050
msgid "   in "
msgstr ""

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr ""

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Fjerner %s fordi den skal forkastes.\n"

#: src/res.c:391
#, fuzzy, c-format
msgid "Cannot open %s: %s"
msgstr "Kan ikke konvertere l�nker i %s: %s\n"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Henter robots.txt; ignorer eventuelle fejlmeldinger.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Fejl ved fortolkning af proxy-URL %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Fejl i proxy URL %s: Skal v�re HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d: Omdirigeringer overskredet.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Giver op.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Pr�ver igen.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] ""
msgstr[1] ""

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr ""

#: src/url.c:633
#, fuzzy
msgid "No error"
msgstr "Ukendt fejl"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr ""

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "V�rtsnavnet er ugyldigt"

#: src/url.c:641
msgid "Bad port number"
msgstr ""

#: src/url.c:643
#, fuzzy
msgid "Invalid user name"
msgstr "V�rtsnavnet er ugyldigt"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr ""

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr ""

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr ""

#: src/url.c:951
#, fuzzy
msgid "HTTPS support not compiled in"
msgstr "%s: underst�ttelse for fejls�gning ikke inkluderet ved overs�ttelse.\n"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr ""

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Forts�tter i baggrunden, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Kan ikke slette den symbolske l�nke '%s': %s\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "fejl ved Set-Cookie, felt '%s'"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Syntaksfejl i Set-Cookie ved tegnet '%c'.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST mislykkedes; vil ikke afkorte '%s'.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s tilbage]"

#~ msgid "Host not found"
#~ msgstr "V�rt ikke fundet"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "Kunne ikke ops�tte et SSL-milj�\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "Kunne ikke indl�se certifikater fra %s\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Pr�ver uden det angivne certifikat\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "Kunne ikke f� certifikatn�gle fra %s\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Filafslutning fundet ved l�sning af toptekster.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Fortsat hentning mislykkedes for denne fil, hvilket er i mods�tning til '-"
#~ "c'.\n"
#~ "N�gter at afkorte eksisterende fil '%s'.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s tilbage)"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "Filen '%s' hentes ikke, fordi den allerede eksisterer.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - '%s' gemt [%ld/%ld]\n"
#~ "\n"

#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
#~ msgstr "%s (%s) - Forbindelse lukket ved byte %ld/%ld. "

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: Kan ikke omforme '%s' til en IP-adresse.\n"

#~ msgid "%s: %s: Please specify always, on, off, or never.\n"
#~ msgstr "%s: %s: Venligst angiv 'always', 'on' 'off', eller 'never'.\n"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Opstart:\n"
#~ "  -V,  --version           vis Wget's versionsnummer og afslut.\n"
#~ "  -h,  --help              udskriv denne hj�lpetekst.\n"
#~ "  -b,  --background        k�r i baggrunden efter opstart.\n"
#~ "  -e,  --execute=KOMMANDO  udf�r en '.wgetrc'-kommando.\n"
#~ "\n"

#~ msgid ""
#~ "Logging and input file:\n"
#~ "  -o,  --output-file=FILE     log messages to FILE.\n"
#~ "  -a,  --append-output=FILE   append messages to FILE.\n"
#~ "  -d,  --debug                print debug output.\n"
#~ "  -q,  --quiet                quiet (no output).\n"
#~ "  -v,  --verbose              be verbose (this is the default).\n"
#~ "  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
#~ "  -i,  --input-file=FILE      download URLs found in FILE.\n"
#~ "  -F,  --force-html           treat input file as HTML.\n"
#~ "  -B,  --base=URL             prepends URL to relative links in -F -i "
#~ "file.\n"
#~ "       --sslcertfile=FILE     optional client certificate.\n"
#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
#~ "       --egd-file=FILE        file name of the EGD socket.\n"
#~ "\n"
#~ msgstr ""
#~ "Logning og indl�sning:\n"
#~ "  -o,  --output-file=FIL      log beskeder til FIL.\n"
#~ "  -a,  --append-output=FIL    tilf�j beskeder til slutningen af FIL.\n"
#~ "  -d,  --debug                skriv fejls�gningsinformation.\n"
#~ "  -q,  --quiet                stille (ingen udskrifter).\n"
#~ "  -v,  --verbose              v�r udf�rlig (standard).\n"
#~ "  -nv, --non-verbose          mindre udf�rlig, men ikke stille.\n"
#~ "  -i,  --input-file=FIL       hent URLer fundet i FIL.\n"
#~ "  -F,  --force-html           behandl inddatafil som HTML.\n"
#~ "  -B,  --base=URL             foranstiller URL til relative l�nker i -F -"
#~ "i fil.\n"
#~ "       --sslcertfile=FIL      valgbart klient-certifikat.\n"
#~ "       --sslcertkey=N�GLEFIL  valgbar n�glefil for dette certifikat.\n"
#~ "       --egd-file=FIL         filnavn for EGD-soklen.\n"
#~ "\n"

#~ msgid ""
#~ "Download:\n"
#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
#~ "host.\n"
#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
#~ "unlimits).\n"
#~ "  -O   --output-document=FILE   write documents to FILE.\n"
#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
#~ "suffixes.\n"
#~ "  -c,  --continue               resume getting a partially-downloaded "
#~ "file.\n"
#~ "       --progress=TYPE          select progress gauge type.\n"
#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
#~ "local.\n"
#~ "  -S,  --server-response        print server response.\n"
#~ "       --spider                 don't download anything.\n"
#~ "  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
#~ "retrieval.\n"
#~ "       --random-wait            wait from 0...2*WAIT secs between "
#~ "retrievals.\n"
#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
#~ "\n"
#~ msgstr ""
#~ "Hentning:\n"
#~ "       --bind-address=ADRESSE   bind til ADRESSE (v�rtsnavn eller IP) p� "
#~ "lokal v�rt.\n"
#~ "  -t,  --tries=ANTAL            maksimalt antal fors�g (0 for uendelig).\n"
#~ "  -O   --output-document=FIL    skriv dokumenter til FIL.\n"
#~ "  -nc, --no-clobber             ber�r ikke eksisterende filer, eller "
#~ "brug .#-endelser.\n"
#~ "  -c,  --continue               forts�t hentning af en eksisterende fil.\n"
#~ "       --progress=TYPE          v�lg type af fremskridtsvisning.\n"
#~ "  -N,  --timestamping           hent ikke filer igen som er �ldre end "
#~ "eksisterende.\n"
#~ "  -S,  --server-response        vis svar fra serveren.\n"
#~ "       --spider                 hent ikke filer.\n"
#~ "  -T,  --timeout=SEKUNDER       s�t ventetid ved l�sning til SEKUNDER.\n"
#~ "  -w,  --wait=SEKUNDER          s�t ventetid mellem filer til SEKUNDER.\n"
#~ "       --waitretry=SEKUNDER\twait 1...SEKUNDER mellem fors�g p� "
#~ "gentagelse af en hentning.\n"
#~ "       --random-wait            vent fra 0...2*WAIT sekunder mellem "
#~ "modtagelse.\n"
#~ "  -Y,  --proxy=on/off           sl� brug af proxy til eller fra.\n"
#~ "  -Q,  --quota=ANTAL            s�t hente-kvote til ANTAL.\n"
#~ "       --limit-rate=RATE        begr�ns hentingshastighed til RATE.\n"
#~ "\n"

#~ msgid ""
#~ "Directories:\n"
#~ "  -nd  --no-directories            don't create directories.\n"
#~ "  -x,  --force-directories         force creation of directories.\n"
#~ "  -nH, --no-host-directories       don't create host directories.\n"
#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
#~ "components.\n"
#~ "\n"
#~ msgstr ""
#~ "Kataloger:\n"
#~ "  -nd  --no-directories             lav ikke kataloger.\n"
#~ "  -x,  --force-directories          lav kataloger.\n"
#~ "  -nH, --no-host-directories        lav ikke ovenst�ende kataloger.\n"
#~ "  -P,  --directory-prefix=PR�FIKS   skriv filer til PR�FIKS/...\n"
#~ "       --cut-dirs=ANTAL             ignor�r ANTAL komponenter af "
#~ "serverens\n"
#~ "                                    katalognavn.\n"
#~ "\n"

#~ msgid ""
#~ "HTTP options:\n"
#~ "       --http-user=USER      set http user to USER.\n"
#~ "       --http-passwd=PASS    set http password to PASS.\n"
#~ "  -C,  --cache=on/off        (dis)allow server-cached data (normally "
#~ "allowed).\n"
#~ "  -E,  --html-extension      save all text/html documents with .html "
#~ "extension.\n"
#~ "       --ignore-length       ignore `Content-Length' header field.\n"
#~ "       --header=STRING       insert STRING among the headers.\n"
#~ "       --proxy-user=USER     set USER as proxy username.\n"
#~ "       --proxy-passwd=PASS   set PASS as proxy password.\n"
#~ "       --referer=URL         include `Referer: URL' header in HTTP "
#~ "request.\n"
#~ "  -s,  --save-headers        save the HTTP headers to file.\n"
#~ "  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
#~ "       --no-http-keep-alive  disable HTTP keep-alive (persistent "
#~ "connections).\n"
#~ "       --cookies=off         don't use cookies.\n"
#~ "       --load-cookies=FILE   load cookies from FILE before session.\n"
#~ "       --save-cookies=FILE   save cookies to FILE after session.\n"
#~ "\n"
#~ msgstr ""
#~ "HTTP-flag:\n"
#~ "       --http-user=BRUGER      s�t HTTP-bruger til BRUGER.\n"
#~ "       --http-passwd=PASSORD   s�t HTTP-adgangskode til PASSORD.\n"
#~ "  -C,  --cache=on/off          tillad (ikke) brug af mellemlager p� "
#~ "server.\n"
#~ "  -E,  --html-extension        gem alle tekst/html dokumenter med .html "
#~ "filkode.\n"
#~ "       --ignore-length         ignorer 'Content-Length' felt i toptekst.\n"
#~ "       --header=TEKST          s�t TEKST ind som en toptekst.\n"
#~ "       --proxy-user=BRUGER     s�t proxy-bruger til BRUGER.\n"
#~ "       --proxy-passwd=PASSORD  s�t proxy-adgangskode til PASSORD.\n"
#~ "       --referer=URL           brug `Referer: URL' kommando i HTTP-"
#~ "foresp�rgsel.\n"
#~ "  -s,  --save-headers          skriv HTTP-toptekster til fil.\n"
#~ "  -U,  --user-agent=AGENT      identificer som AGENT i stedet for \n"
#~ "                               'Wget/VERSION'.\n"
#~ "       --no-http-keep-alive    deaktiv�r HTTP keep-alive (overlevende "
#~ "forbindelser).\n"
#~ "       --cookies=off           brug ikke infokager.\n"
#~ "       --load-cookies=FILE     indl�s infokager fra FIL f�r session.\n"
#~ "       --save-cookies=FILE     gem infokager i FIL efter session.\n"
#~ "\n"

#~ msgid ""
#~ "FTP options:\n"
#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
#~ "       --retr-symlinks         when recursing, get linked-to files (not "
#~ "dirs).\n"
#~ "\n"
#~ msgstr ""
#~ "FTP-flag:\n"
#~ "  -nr, --dont-remove-listing   fjern ikke `.listing' filer.\n"
#~ "  -g,  --glob=on/off           tolk (ikke) brug af jokertegn i filnavn.\n"
#~ "       --passive-ftp           brug passiv overf�rselsmetode.\n"
#~ "       --retr-symlinks         hent filer (ikke kataloger) der er l�nket "
#~ "til, ved rekursiv brug.\n"
#~ "\n"

#~ msgid ""
#~ "Recursive retrieval:\n"
#~ "  -r,  --recursive          recursive web-suck -- use with care!\n"
#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
#~ "infinite).\n"
#~ "       --delete-after       delete files locally after downloading them.\n"
#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
#~ "page.\n"
#~ "\n"
#~ msgstr ""
#~ "Rekursiv nedlasting:\n"
#~ "  -r,  --recursive             tillad rekursiv nedlasting -- brug med "
#~ "omtanke!\n"
#~ "  -l,  --level=ANTAL           maksimalt antal rekursionsniveauer "
#~ "(0=uendelig).\n"
#~ "       --delete-after          slet hentede filer.\n"
#~ "  -k,  --convert-links         konverter absolutte l�nker til relative.\n"
#~ "  -K,  --backup-converted      f�r fil X konverteres, sikkerhedskopi�r "
#~ "som X.orig.\n"
#~ "  -m,  --mirror                s�t passende flag for spejling af "
#~ "servere.\n"
#~ "  -p,  --page-requisites       hent alle billeder osv. der er n�dvendige "
#~ "for at vise HTML siden.\n"
#~ "\n"

#~ msgid ""
#~ "Recursive accept/reject:\n"
#~ "  -A,  --accept=LIST                comma-separated list of accepted "
#~ "extensions.\n"
#~ "  -R,  --reject=LIST                comma-separated list of rejected "
#~ "extensions.\n"
#~ "  -D,  --domains=LIST               comma-separated list of accepted "
#~ "domains.\n"
#~ "       --exclude-domains=LIST       comma-separated list of rejected "
#~ "domains.\n"
#~ "       --follow-ftp                 follow FTP links from HTML "
#~ "documents.\n"
#~ "       --follow-tags=LIST           comma-separated list of followed HTML "
#~ "tags.\n"
#~ "  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML "
#~ "tags.\n"
#~ "  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
#~ "  -L,  --relative                   follow relative links only.\n"
#~ "  -I,  --include-directories=LIST   list of allowed directories.\n"
#~ "  -X,  --exclude-directories=LIST   list of excluded directories.\n"
#~ "  -np, --no-parent                  don't ascend to the parent "
#~ "directory.\n"
#~ "\n"
#~ msgstr ""
#~ "Hvad er tilladt ved rekursion:\n"
#~ "  -A,  --accept=LISTE               liste med tilladte filtyper.\n"
#~ "  -R,  --reject=LISTE               liste med ikke-tilladte filtyper.\n"
#~ "  -D,  --domains=LISTE              liste med tilladte dom�ner.\n"
#~ "       --exclude-domains=LISTE      liste med ikke-tilladte dom�ner.\n"
#~ "       --follow-ftp                 f�lg FTP-l�nker fra HTML-dokumenter.\n"
#~ "       --follow-tags=LIST           komma-separeret liste af fulgte HTML-"
#~ "m�rker.\n"
#~ "  -G,  --ignore-tags=LIST           komma-separeret liste af ignorerede "
#~ "HTML-m�rker.\n"
#~ "  -H,  --span-hosts                 f�lg l�nker til andre v�rter.\n"
#~ "  -L,  --relative                   f�lg kun relative l�nker.\n"
#~ "  -I,  --include-directories=LISTE  liste med tilladte katalognavne.\n"
#~ "  -X,  --exclude-directories=LISTE  liste med ikke-tilladte "
#~ "katalognavne.\n"
#~ "  -np, --no-parent                  f�lg ikke l�nke til ovenliggende "
#~ "katalog.\n"
#~ "\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Dette program distribueres i h�b om at det bliver fundet nyttigt,\n"
#~ "men UDEN NOGEN GARANTIER; ikke engang for SALGBARHED eller\n"
#~ "EGNETHED TIL NOGEN SPECIEL OPGAVE.\n"
#~ "Se 'GNU General Public License' for detaljer.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Starter WinHelp %s\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Fandt ikke proxy-server.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: Omdirigering l�ber i ring.\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Ikke nok hukommelse.\n"

#~ msgid "Connection to %s:%hu refused.\n"
#~ msgstr "Kontakt med %s:%hu n�gtet.\n"

#~ msgid "Will try connecting to %s:%hu.\n"
#~ msgstr "Vil pr�ve at kontakte %s:%hu.\n"

#~ msgid ""
#~ "\n"
#~ "CTRL+Break received, redirecting output to `%s'.\n"
#~ "Execution continued in background.\n"
#~ "You may stop Wget by pressing CTRL+ALT+DELETE.\n"
#~ msgstr ""
#~ "\n"
#~ "CTRL+Break modtaget, omdirigerer udskrifter til `%s'.\n"
#~ "K�rsel forts�tter i baggrunden.\n"
#~ "Du kan stoppe Wget ved at trykke CTRL+ALT+DELETE.\n"
#~ "\n"

#~ msgid "Unknown/unsupported protocol"
#~ msgstr "Protokollen er ukendt/ikke underst�ttet"

#~ msgid "Invalid port specification"
#~ msgstr "Port-specifikationen er ugyldig"