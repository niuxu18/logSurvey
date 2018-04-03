# -*- mode:po; coding:iso-8859-2; -*- Slovenian messages for GNU Wget
# Copyright (C) 2008 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Roman Maurer <roman.maurer@amis.net>, 2008.
#
# Spremembe:
#
# LLLL-MM-DD     avtor     sprememba
# -------------------------------------------------------------------
# 2008-05-14     Roman     dopolnitve za wget 1.11.3
# 2008-04-20     Roman     spremembe in dopolnitve za wget 1.11.1
# 2003-10-13     Roman     spremembe in dopolnitve za wget 1.9
# 2002-04-09     Roman     spremembe in dopolnitve za wget 1.8.1
# 2001-11-01     Roman     spremembe in dopolnitve za wget 1.7.1
# 2001-05-10     Primo�    spremembe in dopolnitve za wget 1.6
# 1999-10-04     Roman     sprememba e-naslova
# 1999-07-09     Roman     razli�ica, ki jo je TP-robot sprejel
# 1999-05-06     Roman     kot je bila poslana na lugos-slo@lugos.si
# 1999-03-11     Roman     prva razli�ica
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.11.3\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2008-05-19 03:10+0200\n"
"Last-Translator: Roman Maurer <roman.maurer@amis.net>\n"
"Language-Team: Slovenian <translation-team-sl@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=iso-8859-2\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=4; plural=(n%100==1 ? 1 : n%100==2 ? 2 : n%100==3 || n"
"%100==4 ? 3 : 0);\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Neznana napaka"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: izbira `%s' je dvoumna\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: izbira `--%s' ne dopu��a dodatnih argumentov\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: izbira `%c%s' ne dopu��a dodatnih argumentov\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: izbira `%s' zahteva argument\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: neprepoznana izbira `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: neznana izbira `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: nedovoljena izbira -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: neveljavna izbira -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: izbira zahteva argument -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: izbira '-W %s' je dvoumna\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: izbira `-W %s' ne dopu��a dodatnih argumentov\n"

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
#, fuzzy, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: ne morem ugotoviti naslova za povezovanje `%s'; onemogo�am povezavo.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Povezujem se na %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Povezujem se na %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "priklju�en.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "spodletelo: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: ne morem ugotoviti naslova ,%s`\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Pretvorjenih %d datotek v %s sekundah.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Pretvarjam %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "ni� za storiti.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Ne morem pretvoriti povezav v %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Ni mo� izbrisati ,%s`: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Ni mogo�e varnostno shraniti %s kot %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Skladenjska napaka v Set-Cookie: %s na mestu %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Pi�kot iz %s je sku�al nastaviti domeno na %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Datoteke s pi�koti ,%s` ni mo� odpreti: %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Napaka pri pisanju v ,%s`: %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Napaka pri zapiranju ,%s`: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Nepodprta vrsta seznama, posku�am z raz�lenjevalnikom seznama za Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Kazalo imenika /%s na %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "neznan �as         "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Datoteka    "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Imenik      "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Povezava    "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Neznano     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bajtov)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Dol�ina: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) preostalo"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s preostalo"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (neavtorizirana)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Prijavljam se kot %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Napa�en odgovor, zapiram nadzorno povezavo.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Napaka v pozdravu stre�nika.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Pisanje neuspe�no, zapiram nadzorno povezavo.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Stre�nik zavra�a prijavo.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Napa�na prijava.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Prijavljen!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Napaka v stre�niku, vrste sistema ni mo� ugotoviti.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "opravljeno. "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "kon�ano.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Neznan tip `%c', zapiram nadzorno zvezo.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "opravljeno."

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD ni potreben.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Ni imenika z imenom `%s'.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD ni zahtevan.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Ne morem za�eti prenosa PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Ne morem raz�leniti odgovora PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "ni se bilo mo� povezati z %s na vrata %d: %s.\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Napaka pri povezovanju (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Neveljaven PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST neuspe�en, za�enjam znova.\n"

#: src/ftp.c:957
#, fuzzy, c-format
msgid "File %s exists.\n"
msgstr ""
"Oddaljena datoteka obstaja.\n"
"\n"

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"Ni datoteke `%s'.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Ni datoteke `%s'.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Ni datoteke ali imenika `%s'.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s je za�ela obstajati.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, zapiram nadzorno zvezo.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Podatkovna zveza: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Nadzorna zveza prekinjena.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Prenos podatkov prekinjen.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Datoteka `%s' �e obstaja; ne jemljem.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(posk:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' shranjen [%s/%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' posnet [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Odstranjujem %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Uporabljam `%s' kot za�asno datoteko za izpis.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "Odstranil `%s'.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Globina rekurzije %d presega najve�jo dovoljeno %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "Datoteka na stre�niku ni novej�a kot lokalna ,%s` -- ne prena�am.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Datoteka na stre�niku je novej�a kot lokalna ,%s` -- prena�am.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Velikosti se ne ujemata (lokalna %s) -- prena�am.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Neveljavno ime simbolne povezave, preskakujem.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Obstaja �e pravilna simbolna povezava %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Ustvarjam simbolno povezavo %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Povezave niso podprte, preskakujem simbolno povezavo `%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Preskakujem imenik `%s'.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: neznana/nepodprta vrsta datoteke.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: okvarjena ozna�ba �asa.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Ne jemljem imenikov, ker je globina %d (maksimalno %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Ne grem v `%s', ker je izklju�en ali pa ni vklju�en.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Zavra�am `%s'.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Napaka pri ujemanju %s z %s: %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Ni zadetkov za vzorec `%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Kazalo v HTML zapisal kot ,%s` [%s].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Kazalo v HTML zapisal kot `%s'.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "NAPAKA"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "OPOZORILO"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s ni podal certifikata.\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: %s ni podal certifikata.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "  Izdani certifikat je �e potekel.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s: %s ni podal certifikata.\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Napaka pri raz�lenjevanju URL zastopnika %s: %s.\n"

#: src/gnutls.c:283
#, fuzzy
msgid "The certificate has not yet been activated\n"
msgstr "  Izdani certifikat �e ne velja.\n"

#: src/gnutls.c:288
#, fuzzy
msgid "The certificate has expired\n"
msgstr "  Izdani certifikat je �e potekel.\n"

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"%s: obi�ajno ime ,%s` na certifikatu ne ustreza imenu ra�unalnika ,%s`.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Neznan ra�unalnik"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Za�asna napaka pri razre�evanju imena"

#: src/host.c:364
msgid "Unknown error"
msgstr "Neznana napaka"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Razre�uje se %s..."

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "spodletelo: Ni naslova IPv4/IPv6 za ra�unalnik.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "spodletelo: zakasnitev.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Ni mo� razre�iti nepopolne povezave %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Neveljaven URL %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Napaka pri pisanju zahteve HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Ni glav, privzema se HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "SSL se onemogo�a zaradi opa�enih te�av.\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Manjka podatkovna datoteka ,%s` za POST: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Znova se uporablja povezava z %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Napaka pri branju odgovora posrednika: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Posredni�ko tuneliranje spodletelo: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s zahteva poslana, �akam odgovor... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Brez sprejetih podatkov.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Napaka pri branju glave (%s).\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Neznata metoda avtentikacije.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Avtorizacija neuspe�na.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Datoteka ,%s` �e obstaja, ne jemljem.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Zmali�ena statusna linija"

#: src/http.c:2095
msgid "(no description)"
msgstr "(brez opisa)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Polo�aj: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "nedolo�en"

#: src/http.c:2156
msgid " [following]"
msgstr " [spremljam]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Datoteka je �e popolnoma prene�ena; ni� ni za storiti.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Dol�ina: "

#: src/http.c:2263
msgid "ignored"
msgstr "prezrta"

#: src/http.c:2365
#, fuzzy, c-format
msgid "Saving to: %s\n"
msgstr "Shranjujem v: ,%s`\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Pozor: HTTP ne podpira d�okerjev.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Omogo�en na�in pajka. Preverite, �e obstaja oddaljena datoteka.\n"

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Ne morem pisati v `%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Povezave SSL ni bilo mo� vzpostaviti.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "NAPAKA: Preusmeritev (%d) brez nove lokacije.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Oddaljena datoteka ne obstaja -- pokvarjena povezava!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s NAPAKA %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Glava ,Last-Modified` manjka - izklapljam oznako �asa.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Neveljavna glava `Last-Modified' -- ignoriram �asovno oznako.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Datoteka na stre�niku ni novej�a kot lokalna ,%s` -- ne prena�amo.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Velikosti se ne ujemata (lokalno %s) -- prena�amo.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Oddaljena datoteka je novej�a, jemljem.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Oddaljena datoteka obstaja in lahko vsebuje povezave na druge vire -- "
"prena�amo.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Oddaljena datoteka obstaja, vendar ne vsebuje nobenih povezav -- ne "
"prena�amo.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Oddaljena datoteka obstaja, in morda vsebuje nadaljnje\n"
"povezave, vendar je rekurzija onemogo�ena -- ne prena�amo.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Oddaljena datoteka obstaja.\n"
"\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: Neveljaven URL %s: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' shranjen [%s/%s]\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' shranjen [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Zveza zaprta z bajtom �t. %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Napaka pri branju na bajtu %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Napaka pri branju na bajtu %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC ka�e na %s, ki ne obstaja.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Ne morem prebrati %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Napaka v %s na liniji %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Sintakti�na napaka v %s v %d. vrstici.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Neznan ukaz ,%s` v %s v %d. vrstici.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: Pozor: sistemska in uporabnikova wgetrc ka�eta na `%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Neveljaven ukaz --execute `%s'\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Neveljavni booleov izraz ,%s`, uporabite ,on` ali ,off`.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Neveljavno �tevilo `%s'\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Neveljavna vrednost bajta ,%s`\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Neveljavno �asovno obdobje `%s'\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Neveljavna vrednost '%s'\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Neveljavna glava `%s'\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Neveljavna vrsta napredka ,%s`\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Neveljavna omejitev ,%s`, uporabite  [unix|windows],[lowercase|"
"uppercase],[nocontrol].\n"

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
"%s prejet, preusmerjam izhod na ,%s`.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s sprejetih.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; onemogo�eno bele�enje.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Uporaba: %s [IZBIRA]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Obvezni argumenti za dolge izbire so obvezni tudi za kratke izbire.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Zagon:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           prika�i razli�ico Wgeta in se vrni.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              izpi�i pomo�.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        po zagonu pojdi v ozadje.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=UKAZ      izvedi ukaz v slogu ,.wgetrc`.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Bele�enje in vhodna datoteka:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=DAT.    shranjuj sporo�ila v DATOTEKO.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=DAT.  dodajaj sporo�ila v DATOTEKO.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               izpisuj razhro��evalni dnevnik.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""
"       --wdebug              izpisuj razhro��evalni izhod za Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               ti�ina (brez izpisa).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             vklju�i polni izpis (privzeto).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr "  -nv, --no-verbose          izklju�i ve�ino izpisa, a brez ti�ine.\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=DAT.     poberi URL-je iz DATOTEKE.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          privzemi, da je vhodna datoteka HTML.\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping              vdrugo ne jemlji datotek, ki so\n"
"                                   starej�e od lokalnih.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Jemanje:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=�TEVILO           nastavi �TEVILO poskusov (0 za neskon�no).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused         znova poskusi, tudi �e je povezava "
"zavrnjena.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O   --output-document=DAT.    zapisuj dokumente v DATOTEKO.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              presko�i jemanja, ki bi pobrala\n"
"                                 v obstoje�e datoteke.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                nadaljuj z jemanjem delno prene�ene "
"datoteke.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=VRSTA          dolo�i slog prikaza jemanja.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping              vdrugo ne jemlji datotek, ki so\n"
"                                   starej�e od lokalnih.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response           izpisuj gostiteljev odziv.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                    ni�esar ne jemlji.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr "  -T,  --timeout=SEKUNDE           dolo�i vse zakasnitve na SEKUNDE.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEKUNDE       dolo�i zakasnitev poizvedbe DNS na "
"SEKUNDE.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SECS      dolo�i povezovalno zakasnitev na "
"SEKUNDE.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SECS         dolo�i bralno zakasnitev na SEKUNDE.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=SEKUNDE              po�akaj toliko SEKUND med jemanji.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEKUNDE         po�akaj 1..SEKUNDE med ponovnimi poskusi\n"
"                                     jemanja.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait               po�akaj od 0...2*WAIT sek. med jemanji.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                posebej izklju�i posrednika.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=�TEVILO             dolo�i omejitev jemanja na �TEVILO.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=NASLOV       pove�i se z NASLOVOM (ime ali IP) na \n"
"                                     lokalnem ra�unalniku.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=HITROST        omeji hitrost jemanja na HITROST.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache                onemogo�i predpomnjenje poizvedb DNS.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS    omeji znake v imenih datotek na tiste, "
"ki\n"
"                                     so dovoljeni v OS.\n"
"\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ne upo�tevaj velikosti �rk pri\n"
"                                 ujemanju datotek/imenikov\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              priklju�uj se zgolj na naslove IPv4\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              priklju�uj se zgolj na naslove IPv6\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=DRU�INA   najprej se prijavljaj na naslove iz "
"dolo�ene dru�ine,\n"
"                                 lahko je IPv6, IPv4, ali none.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=UPORABNIK          dolo�i uporabnika za FTP in HTTP na "
"UPORABNIK.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --passwd=GESLO     dolo�i geslo za FTP in HTTP kot GESLO.\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --passwd=GESLO     dolo�i geslo za FTP in HTTP kot GESLO.\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-proxy                posebej izklju�i posrednika.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""

#: src/main.c:514
msgid "Directories:\n"
msgstr "Imeniki:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd  --no-directories             ne ustvarjaj imenikov.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories          vedno ustvarjaj imenike.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""
"  -nH, --no-host-directories        ne ustvarjaj imenikov po gostiteljih.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     v imenikih uporabljaj ime protokola.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREDPONA  shranjuj datoteke v PREDPONA/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=�TEVILO         ignoriraj �TEVILO komponent oddaljenih "
"imenikov.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Izbire za HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=UPORABNIK   dolo�i uporabnika HTTP na UPORABNIK.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-passwd=GESLO     dolo�i geslo za HTTP kot GESLO.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              onemogo�i predpomnjene podatke s stre�nika.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""

#: src/main.c:541
#, fuzzy
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --html-extension        vse nadbesedilne spise shranjuj s pripono ."
"html.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr "       --ignore-length         ignoriraj glavo `Content-Length'.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=NIZ            vstavi NIZ v glavo.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          najve� dovoljenih preusmeritev na stran.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=UPORABNIK  dolo�i UPORABNIKA kot uporabnika proxy-ja.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-passwd=GESLO    dolo�i geslo za proxy GESLO.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           vklju�i ,Referer: URL` v zahtevek HTTP.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          shranjuj glave HTTP v datoteko.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=ODJEMNIK   predstavi se kot ODJEMNIK namesto Wget/"
"RAZLI�ICA.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    onemogo�i stalne povezave HTTP (keep-alive).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            ne uporabljaj pi�kotov.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr "       --load-cookies=DATOT.   pred sejo nalo�i pi�kote iz DATOTEKE.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=DATOT.   po seji shrani pi�kote v DATOTEKO.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  nalo�i in shrani (za�asne) pi�kote seje.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=NIZ         uporabi metodo POST; po�lji NIZ kot podatke.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=DATOTEKA    uporabi metodo POST; po�lji vsebino "
"DATOTEKE.\n"
"\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   upo�tevaj glavo Content-Disposition, ko\n"
"                               izbira� lokalna imena datotek (POSKUSNO).\n"

#: src/main.c:576
#, fuzzy
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Po�lji osnovne podatke za avtentikacijo "
"HTTP,\n"
"                               ne da bi najprej �akal na stre�nikov poziv.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr " Izbire za HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol          izberi varni protokol SSL; lahko je auto,\n"
"                                  SSLv2, SSLv3 ali TLSv1\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   ne preveri certifikata stre�nika.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=DAT.       odjemni�ka datoteka s certifikati.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TIP   tip certifikata odjemnika, PEM ali DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=DAT.       dat. s privatnim klju�em.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TIP   tip privatnega klju�a, PEM ali DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=DAT.    datoteka s CA-ji.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr "       --ca-directory=DIR       imenik s hash-seznamom CA-jev.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=DAT.       datoteka z naklju�nim semenom za SSL PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=DAT.       ime datoteke vti�a EGD z naklju�nimi podatki.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Izbire za FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=UPORABNIK    dolo�i uporabnika FTP na UPORABNIK.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-passwd=GESLO     dolo�i geslo za FTP kot GESLO.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     ne odstranjuj datotek ,.listing`.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob             izklju�i `globbing' imen datotek pri FTP.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp           ne uporabljaj \"pasivnega\" na�ina "
"prenosa.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         pri rekurziji jemlji cilje (ne velja za "
"imenike).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekurzivno jemanje:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive            dolo�i rekurzivno jemanje.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=�TEVILO      najve�ja dovoljena globina rekurzije (inf ali 0\n"
"                            za neskon�no).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after         bri�i krajevne datoteke, ko jih pobere�.\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links        povezave v pobranem HTML naj ka�ejo lokalno.\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   pred pretvorbo datoteke X shrani izvorno \n"
"                            datoteko kot X.orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   pred pretvorbo datoteke X shrani izvorno \n"
"                            datoteko kot X.orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror              bli�njica za -N -r -l inf --no-remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites      vzemi vse slike itd., potrebne za prikaz "
"spletne\n"
"                                strani HTML.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments     vklju�i striktno rokovanje SGML s komentarji "
"HTML.\n"
"\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Rekurzivno sprejemanje/zavra�anje:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr "  -A,  --accept=SEZNAM               seznam sprejemljivih pripon.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr "  -R,  --reject=SEZNAM               seznam zavrnljivih pripon.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr "  -D,  --domains=SEZNAM              seznam sprejemljivih domen.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=SEZNAM     seznam (z vejicami) zavrnljivih domen.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                sledi povezavam FTP iz spisov HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=SEZNAM         seznam (z vejicami) sledenim zna�kam "
"HTML.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr "        --ignore-tags=SEZNAM          seznam ignoriranih zna�k HTML.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                pri rekurziji pojdi tudi na druge "
"ra�unalnike.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""
"  -L,  --relative                    spremljaj samo relativne povezave.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=SEZNAM  seznam dovoljenih imenikov.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=SEZNAM  seznam nedovoljenih imenikov.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                   ne pojdi v star�evski imenik.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Po�iljajte poro�ila o hro��ih in predloge na <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, orodje za neinteraktivno jemanje preko mre�e.\n"

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
msgstr "Copyright (C) 2008 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Licenca GPLv3+: GNU GPL razli�ice 3 ali poznej�a\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"To je prosto programje: lahko ga spreminjate in raz�irjate.\n"
"Programje je BREZ VSAKEGA JAMSTVA, kolikor to dopu��a zakon.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Izvorni avtor: Hrvoje Nik�i� <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Trenutno vzdr�uje: Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Po�iljajte poro�ila o hro��ih in predloge na <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Poskusite `%s --help' za ve� izbir.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: nedovoljena izbira -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Ne morem biti isto�asno iz�rpen in tih.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Ne morem isto�asno upo�tevati �asa in prepisovati starih datotek.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Ni mogo�e hkrati dolo�iti --inet4-only in --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Ni mogo�e dolo�iti hkrati -k in -O, �e je podanih ve� URL-jev, ali\n"
"v kombinaciji s -p ali -r. Za podrobnosti glejte priro�nik.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"POZOR: kombinacija -O z -r ali -p bo pomenila, da se bo vsa pobrana vsebina\n"
"vpisovala v eno samo datoteko, ki ste jo podali.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"POZOR: �asovno �igosanje v kombinaciji z -O ne dela ni�. Za podrobnosti\n"
"glejte priro�nik.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Datoteka `%s' �e obstaja; ne jemljem.\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Ni mogo�e hkrati dolo�iti --inet4-only in --inet6-only.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: manjka URL\n"

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
msgstr "V %s nisem na�el nobenega URL.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"KON�ANO --%s--\n"
"Pobrano: %d datotek, %s v %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Kvota pobiranja %s je PREKORA�ENA!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Nadaljujem v ozadju.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Nadaljujem v ozadju, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Izhod bo zapisan v `%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Ne morem najti uporabnega gonilnika za vti�nice.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: pozor: beseda \"%s\" se pojavlja pred vsakim imenom stroja\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: neznana beseda \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Uporaba: %s NETRC [RA�UNALNIK]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: ne morem pognati stat na %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "POZOR: uporabljate �ibko seme za naklju�na �tevila.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Ni mo� zasejati PRNG; razmislite o rabi --random-file.\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: ni mo� preveriti certifikata od %s, ki ga je izdal ,%s`:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Istovetnosti izdajalca ni mo� preveriti lokalno.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Zaznan samopodpisan certifikat.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Izdani certifikat �e ne velja.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Izdani certifikat je �e potekel.\n"

#: src/openssl.c:579
#, fuzzy, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: obi�ajno ime ,%s` na certifikatu ne ustreza imenu ra�unalnika ,%s`.\n"

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
"Uporabite ,--no-check-certificate`, �e se �elite povezati z %s brez "
"varnosti.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ preskakujem %sK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Neveljavna dolo�itev sloga pike ,%s`: ostaja nespremenjena.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  oc. %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   v "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Ni mo� dobiti realnega �asa: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Odstranjam %s, saj bi moral biti zavrnjen.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Ni mo� odpreti %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Nalagam robots.txt; prosim, prezrite napake.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Napaka pri raz�lenjevanju URL zastopnika %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Napaka v URL zastopnika %s: Mora biti HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d preusmeritev prekora�enih.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Odneham.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Posku�am ponovno.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Ni najdenih pokvarjenih povezav.\n"
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
"Najdenih %d pokvarjenih povezav.\n"
"\n"
msgstr[1] ""
"Najdena %d pokvarjena povezava.\n"
"\n"
msgstr[2] ""
"Najdeni %d pokvarjeni povezavi.\n"
"\n"
msgstr[3] ""
"Najdene %d pokvarjene povezave.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Brez napake"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Nepodprta shema"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "Neveljavno ime gostitelja"

#: src/url.c:641
msgid "Bad port number"
msgstr "Slaba stevilka vrat"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Neveljavno uporabnisko ime"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Neprekinjen �tevilski naslov IPv6"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Naslovi IPv6 niso podprti"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Neveljaven �tevilski naslov IPv6"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr ""

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Ni mo� dodeliti %ld bajtov; zmanjkalo pomnilnika.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Ni mo� dodeliti %ld bajtov; zmanjkalo pomnilnika.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Nadaljujem v ozadju, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Ne morem odstraniti simbolne povezave `%s': %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            pripni URL pred relativne povezave v -F -i "
#~ "datoteka.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  ohrani oddaljena dovoljenja datotek.\n"

#~ msgid "Cannot specify -r, -p or -N if -O is given.\n"
#~ msgstr "Ni mogo�e dolo�iti -r, -p ali -N hkrati z -O.\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                     posebej vklju�i posrednika.\n"

#~ msgid ""
#~ "       --no-content-disposition  don't honor Content-Disposition header.\n"
#~ msgstr ""
#~ "       --no-content-disposition  ne upo�tevaj glave Content-Disposition.\n"

#~ msgid "%s referred by:\n"
#~ msgstr "na %s povezuje:\n"
