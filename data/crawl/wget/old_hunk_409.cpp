# translation of wget-1.11.3 to Lithuanian
# Copyright (C) 2008 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
#
# Gintautas Miliauskas <gintas@akl.lt>, 2008.
msgid ""
msgstr ""
"Project-Id-Version: wget-1.11.3\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-01-29 00:21+0200\n"
"Last-Translator: Gintautas Miliauskas <gintas@akl.lt>\n"
"Language-Team: Lithuanian <komp_lt@konferencijos.lt>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms:  nplurals=3; plural=(n%10==1 && n%100!=11 ? 0 : n%10>=2 && (n%"
"100<10 || n%100>=20) ? 1 : 2);\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Nežinoma klaida"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: pasirinkimas „%s“ dviprasmiškas\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: parametras „--%s“ neleidžia argumento\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: parametras „%c%s“ neleidžia argumento\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: parametrui „%s“ reikia argumento\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: neatpažintas parametras „--%s“\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: neatpažintas parametras „%c%s“\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: neleistinas pasirinkimas – %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: negalimas parametras – %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: parinkčiai būtinas argumentas – %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: parametras „-W %s“ dviprasmis\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: parametras „-W %s“ neleidžia argumento\n"

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
msgstr "%s: nepavyko rasti bind adreso „%s“; išjungiamas bind.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Jungiamasi prie %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Jungiamasi prie %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "prisijungta.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "nepavyko: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: nepavyko rasti adreso „%s“\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Pakeista %d failų per %s sekundžių.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Keičiamas %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "neliko užduočių.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Nepavyko pakeisti nuorodų %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Nepavyko pašalinti „%s“: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Nepavyko padaryti atsarginės %s kopijos %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Sintaksės klaida Set-Cookie: %s pozicijoje %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Slapukas iš %s pabandė nustatyti domeną į %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Nepavyko atverti slapukų failo „%s“: %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Klaida rašant į „%s“: %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Klaida uždarant „%s“: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Nesuderinamas sąrašo tipas, bandomas Unix tipo sąrašų doroklis.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s turinys adresu %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "laikas nežinomas       "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Failas      "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Aplankas    "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Saitas      "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Neaišku     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s baitų)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Dydis: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", liko %s (%s)"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", liko %s"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (neautoritatyvus)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Prisijungiama kaip %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Klaida paslaugų stotyje, uždaromas valdymo prisijungimas.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Klaida paslaugų stoties pasisveikinime.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Įrašymas nepavyko, uždaromas valdymo prisijungimas.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Paslaugų stotis atsisako priimti prisijungimą.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Nekorektiškas prisijungimas.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Prisijungta!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Paslaugų stoties klaida, nepavyksta nustatyti sistemos tipo.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "atlikta.    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "atlikta.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Nežinomas tipas „%c“, uždaromas valdymo prisijungimas.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "atlikta.   "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD nereikalingas.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Nerastas aplankas „%s“.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD nereikalingas.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Nepavyksta paleisti PASV persiuntimo.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Nesuprantamas PASV atsakas.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "nepavyko prisijungti prie %s prievado %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Susiejimo klaida (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Nekorektiškas PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"Nepavyko REST, pradedama iš naujo.\n"

#: src/ftp.c:957
#, fuzzy, c-format
msgid "File %s exists.\n"
msgstr ""
"Nutolęs failas egzistuoja.\n"
"\n"

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"Nerastas failas „%s“.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Nerastas failas „%s“.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Nėra tokio failo ar aplanko „%s“.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s staiga susikūrė.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, uždaromas valdymo prisijungimas.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Duomenų prisijungimas: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Valdymo prisijungimas uždarytas.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Duomenų siuntimas nutrauktas.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Failas „%s“ jau egzistuoja; nesiunčiama.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(bandymas:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - „%s“ įrašyta [%s/%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - „%s“ įrašytas [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Šalinamas %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Naudojamas „%s“ kaip laikinas sąrašo failas.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "Pašalintas „%s“.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Apdorojimo gylis %d viršijo didžiausią gylį %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "Nutolęs failas nėra naujesnis už vietinį „%s“ – nesiunčiama.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Nutolęs failas yra naujesnis už vietinį „%s“ – siunčiama.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Failų dydžiai nesutampa (vietinis %s) – siunčiama.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Nekorektiškas saito vardas, praleidžiamas.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Saitas %s -> %s jau yra\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Kuriama simbolinė nuoroda %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Simbolinės nuorodos nepalaikomos, praleidžiama nuoroda „%s“.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Praleidžiamas aplankas „%s“.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: nežinomas/nesuderinamas failo tipas.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: pažeista laiko žymė.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Aplankai nebus siunčiami, nes gylis nurodytas %d (maksimalus %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Nesileidžiama į „%s“, nes jis nufiltruotas/neįtrauktas.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Atmetamas „%s“.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Klaida taikant %s su %s: %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Nėra „%s“ atitikmenų.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "HTML formato turinys įrašytas į „%s“ [%s].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "HTML formato turinys įrašytas į „%s“.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "KLAIDA"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "ĮSPĖJIMAS"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s nepateikė sertifikato.\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: %s nepateikė sertifikato.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "  Išduoto sertifikato galiojimo laikas baigėsi.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s: %s nepateikė sertifikato.\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Klaida apdorojant tarpinės stoties URL %s: %s.\n"

#: src/gnutls.c:283
#, fuzzy
msgid "The certificate has not yet been activated\n"
msgstr "  Išduotas sertifikatas dar nevalidus.\n"

#: src/gnutls.c:288
#, fuzzy
msgid "The certificate has expired\n"
msgstr "  Išduoto sertifikato galiojimo laikas baigėsi.\n"

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "%s: sertifikato vardas „%s“ neatitinka kompiuterio vardo „%s“.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Neatpažintas kompiuterio vardas"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Laikinas vardų paieškos sutrikimas"

#: src/host.c:364
msgid "Unknown error"
msgstr "Nežinoma klaida"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Ieškoma %s..."

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "nepavyko: Nėra IPv4/IPv6 adresų kompiuteriui.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "nepavyko: per ilgai neatsako.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: nepavyksta atsekti saito %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Nekorektiškas URL adresas %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Klaida rašant HTTP užklausą: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Nėra antraščių, bandoma kaip HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Dėl įvykusių klaidų išjungiamas SSL.\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Nėra POST duomenų failo „%s“: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Naudojamas esamas prisijungimas prie %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Klaida skaitant tarpinės stoties atsaką: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Tarpinės stoties tuneliavimas nesėkmingas: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s užklausa išsiųsta, laukiama atsakymo..."

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Negauta duomenų.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Antraščių skaitymo klaida (%s).\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Nesuprantamas autentifikavimo būdas.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Autorizavimas nepavyko.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Failas „%s“ jau egzistuoja; nesiunčiama.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Netinkama būsenos eilutė"

#: src/http.c:2095
msgid "(no description)"
msgstr "(be aprašymo)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Vieta: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "nenurodyta"

#: src/http.c:2156
msgid " [following]"
msgstr " [sekama]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Failas jau atsiųstas iki galo; užduočių nebeliko.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Dydis: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignoruojamas"

#: src/http.c:2365
#, fuzzy, c-format
msgid "Saving to: %s\n"
msgstr "Rašoma į: „%s“\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Perspėjimas: šablonai nesuderinami su HTTP protokolu.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Paieškos veiksena įjungta. Tikrinama, ar nutolęs failas egzistuoja.\n"

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Nepavyksta rašyti į „%s“ (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Nepavyko užmegzti SSL prisijungimo.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "KLAIDA: Nukreipimas (%d) niekur neveda.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Nutolęs failas neegzistuoja – klaidinga nuoroda!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s KLAIDA %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Trūksta paskutinio keitimo antraštės – laiko žymės išjungtos.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Paskutinio keitimo antraštė netaisyklinga – laiko žymės išjungtos.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Serverio filas ne naujesnis negu vietinis failas „%s“ – nesiunčiama.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Nesutampa failų dydžiai (vietinis failas %s) – siunčiama.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Nutolęs failas yra naujesnis, siunčiama.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Nutolęs failas egzistuoja ir gali turėti nuorodų į kitus resursus – "
"siunčiama.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Nutolęs failas egzistuoja, bet jame nėra nuorodų – nesiunčiama.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Nutolęs failas egzistuoja ir gali turėti daugiau nuorodų,\n"
"bet rekursija išjunga – nesiunčiama.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Nutolęs failas egzistuoja.\n"
"\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: Nekorektiškas URL adresas %s: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - „%s“ įrašyta [%s/%s]\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - „%s“ įrašyta [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Prisijungimas užvertas ties %s baitu. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Skaitymo klaida ties %s (%s) baitu."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Skaitymo klaida ties %s/%s (%s) baitu. "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC veda į %s, kuri neegzistuoja.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Nepavyksta nuskaityti %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Klaida %s eilutėje %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Sintaksės klaida %s eilutėje %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Faile %s nežinoma komanda „%s“ eilutėje %d.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Perspėjimas: Tiek naudotojo, tiek sistemos wgetrc failas rodo į „%s“.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Nekorektiška --execute komanda „%s“\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Nekorektiška loginė reikšmė „%s“; naudokite „on“ arba „off“.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Nekorektiškas skaitmuo „%s“.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Nekorektiška baito reikšmė „%s“\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Nekorektiškas laiko periodas „%s“\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Nekorektiška reikšmė „%s“.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Nekorektiška antraštė „%s“.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Nekorektiškas pažangos tipas „%s“.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Netaisyklingas apribojimas „%s“, naudokite [unix|windows],[lowercase|"
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
"gauta %s, išvedimas nukreipiamas į „%s“.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s parsiųsta.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; žurnalas išjungiamas.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Naudojimas: %s [PARINKTIS]... [ADRESAS]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Būtini parametrai ilgiems argumentams taip pat būtini ir trumpiems "
"argumentams.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Pradžia:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           parodyti Wget versiją ir išeiti.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              išspausdinti šią informaciją.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        veikti fone.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=COMMAND   įvykdyti „.wgetrc“ tipo komandą.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Žurnalai ir įvedimo failas:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FAILAS  išvesti pranešimus į FAILĄ.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a, --append-output=FAILAS pridėti pranešimus FAILO pabaigoje.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d, --debug                išvesti daug derinimo informacijos.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""
"       --wdebug              išspausdinti Watt-32 derinimo informaciją.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q, --quiet                tyli veiksena (be išvesties).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr ""
"  -v, --verbose              informuoti išsamiai (numatytoji reikšmė).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          sumažinti informatyvumą (bet neišjungti "
"pranešimų).\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i, --input-file=FAILAS    parsiųsti URL adresus, rastus FAILE.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr ""
"  -F, --force-html suprasti  skaityti nurodytą failą kaip HTML tipo failą.\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping            nesiųsti failų, nebent naujesni už "
"vietinius.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Parsiuntimas:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t, --tries=SKAIČIUS           nustatyti bandymų parsiųsti SKAIČIŲ (0 – "
"neriboti).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       bandyti iš naujo net jei prisijungimas "
"atmetamas.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FAILAS    rašyti dokumentus į FAILĄ.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              praleisti parsiuntimus, kurie turėtų "
"perrašyti\n"
"                                 esamus failus.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr "  -c,  --continue                tęsti dalinai parsiųstą failą.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=TYPE           nurodyti progreso indikatoriaus tipą.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            nesiųsti failų, nebent naujesni už "
"vietinius.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         išvesti serverio atsakymą.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  nieko nesiųsti.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SEK             nustatyti visus laukimo laikus į SEK.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEK         nustatyti DNS paieškos laukimo laiką į "
"SEK.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SEK    nustatyti bandymo prisijungti laiką į SEK.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SEK       nustatyti bandymo skaityti laiką į SEK.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w, --wait=SEKUNDĖS            laukti SEKUNDES tarp siuntimų.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEK           laukti 1..SEK tarp bandymų atsiusti iš "
"naujo.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             laukti tarp 0...2*WAIT sekundžių tarp "
"atsiuntimų.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                būtinai išjungti tarpinę stotį.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=SKAIČIUS          nustatyti parsiuntimo į SKAIČIŲ.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRESAS    susieti su ADRESU (kompiuterio vardu ar\n"
"                                 IP adresu) vietiniame kompiuteryje.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=GREITIS      riboti atsiuntimo greitį iki GREIČIO.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            išjungti DNS paieškų spartinimą.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  apriboti simbolius failų varduose į "
"palaikomus OS.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ignoruoti registrą filtruojant failus/"
"aplankus.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              jungtis tik prie IPv4 adresų.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              jungtis tik prie IPv6 adresų.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=ŠEIMA     pirma jungtis prie nurodytos šeimos "
"adresų:\n"
"                                 „IPv6“, „IPv4“ arba „none“.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr "       --user=NAUDOTOJAS         nustatyti FTP ir HTTP naudotoją.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --password=SLAPTAŽODIS    nustatyti FTP ir HTTP slaptažodį.\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --password=SLAPTAŽODIS    nustatyti FTP ir HTTP slaptažodį.\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-proxy                būtinai išjungti tarpinę stotį.\n"

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
msgstr "Aplankai:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           nekurti aplankų.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        priverstinai kurti aplankus.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      nekurti aplankų pagal kompiuterį.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     aplankuose naudoti protokolo vardą.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""
"  -P,  --directory-prefix=PREFIKSAS rašyti failus aplanke PREFIKSAS/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=SKAIČIUS        ignoruoti SKAIČIŲ nutolusio aplanko "
"komponentų.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP parametrai:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=NAUDOTOJAS  nustatyti HTTP naudotoją.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=SLAPTAŽODIS nustatyti HTTP slaptažodį.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr "       --no-cache              neleisti duomenų serverio kaupe.\n"

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
"  -E,  --html-extension        įrašyti HTML dokumentus su „.html“ priesaga.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr "       --ignore-length         ignoruoti „Content-Length“ antraštę.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=TEKSTAS        įterpti TEKSTĄ tarp antraščių.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          maksimalus peradresavimų skaičius puslapiui.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=NAUDOTOJAS nustatyti tarpinės stoties naudotoją.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""
"       --proxy-password=SLAPTAŽODIS nustatyti tarpinės stoties slaptažodį.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           įtraukti „Referer: URL“ antraštę HTTP "
"užklausoje.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          įrašyti HTTP antraštes į failą.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENTAS    prisistatyti AGENTU vietoje „Wget/VERSIJA“.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    išjungti HTTP keep-alive (ilgalaikiai "
"prisijungimai).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            nenaudoti slapukų.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=FAILAS   įkrauti slapukus iš FAILO prieš sesiją.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=FAILAS   įrašyti slapukus į FAILĄ po sesijos.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr "       --keep-session-cookies  įkrauti ir įrašyti sesijos slapukus.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=TEKSTAS     naudoti POST metodą; siųsti TEKSTĄ kaip "
"duomenis.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FAILAS      naudoti POST metodą; siųsti FAILO turinį.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   atsižvelgti į Content-Disposition antraštę\n"
"                               parenkant vietinių failų vardus "
"(EKSPERIMENTINIS).\n"

#: src/main.c:576
#, fuzzy
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Siųsti „Basic“ HTTP autentikacijos "
"informaciją\n"
"                               nelaukiant serverio užklausimo.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS (SSL/TLS) parametrai:\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     rinktis saugų protokolą: „auto“, „SSLv2“,\n"
"                                „SSLv3“ arba „TLSv1“.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   nevaliduoti serverio sertifikato.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FAILAS     kliento sertifikato failas.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TIPAS kliento sertifikato tipas: PEM arba DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FAILAS     privataus rakto failas.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TIPAS privataus rakto tipas: PEM arba DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=FAILAS  failas su CA rinkiniu.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=DIR       aplankas, kuriame saugomas CA maišų "
"sąrašas.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FAILAS     failas su atsitiktiniais duomenimis SSL\n"
"                                PRNG inicializacijai.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=FILE          EGD lizdo failas su atsitiktiniais "
"duomenimis.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP parametrai:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=NAUDOTOJAS   nustatyti FTP naudotoją.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=SLAPTAŽODIS nustatyti FTP slaptažodį.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     nešalinti „.listing“ failų.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               išjungti FTP failų vardų „globbing“.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        išjungti „pasyvią“ persiuntimo veikseną.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         siunčiant rekursyviai, siųsti simbolinių\n"
"                               nuorodų rodomus failus (ne aplankus).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekursyvus siuntimas:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          siųsti failus rekursyviai.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=SKAIČIUS     maksimalus rekursijos gylis (inf arba 0 "
"begalybei).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after       ištrinti failus juos parsiuntus.\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      pakeisti nuorodas parsiųstame HTML, kad rodytų\n"
"                            į vietinius failus.\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   prieš konvertuojant failą „X“, sukurti "
"atsarginę\n"
"                            kopiją „X.orig“.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   prieš konvertuojant failą „X“, sukurti "
"atsarginę\n"
"                            kopiją „X.orig“.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             „-N -r -l inf --no-remove-listing“ santrumpa.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    parsiųsti visus paveikslėlius ir kt. failus,\n"
"                            reikalingus HTML puslapiui parodyti.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    įjungti griežtą (SGML) HTML komentarų "
"apdorojimą.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Rekursyvus priėmimas/atmetimas:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=SĄRAŠAS            kableliais atskirtas imamų plėtinių "
"sąrašas.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=SĄRAŠAS            kableliais atskirtas atmetamų plėtinių "
"sąrašas.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=SĄRAŠAS           kableliais atskirtas imamų domenų "
"sąrašas.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=SĄRAŠAS   kableliais atskirtas atmetamų domenų "
"sąrašas.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                siųsti FTP nuorodas iš HTML dokumentų.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=SĄRAŠAS       kableliais atskirtas sekamų HTML žymių "
"sąrašas.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=SĄRAŠAS       kableliais atskirtas ignoruojamų\n"
"                                   HTML žymių sąrašas.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                eiti į kitus domenus siunčiant "
"rekursyviai.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  sekti tik reliatyvias nuorodas.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=SĄRAŠAS leistinų aplankų sąrašas.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=SĄRAŠAS atmetamų aplankų sąrašas.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 neiti aukštyn į tėvinį aplanką.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr ""
"Siųskite pranešimus apie klaidas ir pasiūlymus adresu <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, neinteraktyvus parsiuntiklis.\n"

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
"Licencija GPLv3+: GNU GPL versija 3 arba vėlesnė\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Ši programa laisva: galite ją keisti ir platinti.\n"
"Nėra JOKIOS GARANTIJOS, kiek tai leidžia įstatymai.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Parašė Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Šiuo metu prižiūri Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Siųskite pranešimus apie klaidas ir pasiūlymus adresu <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Pabandykite „%s --help“, jei norite daugiau informacijos.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: netaisyklingas parametras – „-n%c“\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Negalima tuo pačiu metu būti informatyviam ir tyliam.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Negalima tuo pačiu metu dėti laiko žymes ir nekeisti senų failų.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Negalima kartu nurodyti --inet4-only ir --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Negalima kartu nurodyti -k ir -O jei duoti keli URL, arba derinant su\n"
"-p arba -r. Daugiau informacijos žinyne..\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"ĮSPĖJIMAS: -O su -r arba -p reiškia, kad visas parsiųstas turinys bus\n"
"įrašytas į vienintelį nurodytą failą.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"ĮSPĖJIMAS: laiko žymių dėjimas nieko nedaro, jei derinamas su -O. Daugiau\n"
"informacijos žinyne.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Failas „%s“ jau egzistuoja; nesiunčiama.\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Negalima kartu nurodyti --inet4-only ir --inet6-only.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: trūksta URL\n"

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
msgstr "%s nerasta URL adresų.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"BAIGTA --%s--\n"
"Parsiųsta: %d failų, %s per %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Parsiuntimo kvota (%s) VIRŠYTA!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Tęsiama fone.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Tęsiama fone, proceso numeris %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Išvestis bus įrašyta į „%s“.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Nepavyko rasti tinkamos lizdo valdyklės.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: įspėjimas: „%s“ yra prieš kompiuterio vardą\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: nežinomas elementas „%s“\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Naudojimas: %s NETRC [HOSTNAME]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: nepavyko patikrinti %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "DĖMESIO: naudojamas silpnas „random seed“.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Nepavyko inicializuoti PRNG; naudokite --random-file parametrą.\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: nepavyko verifikuoti %s sertifikato, išduoto „%s“:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Nepavyko lokaliai verifikuoti išdavėjo autoriteto.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Rastas savo-pasirašytas sertifikatas.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Išduotas sertifikatas dar nevalidus.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Išduoto sertifikato galiojimo laikas baigėsi.\n"

#: src/openssl.c:579
#, fuzzy, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr "%s: sertifikato vardas „%s“ neatitinka kompiuterio vardo „%s“.\n"

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
"Jei norite jungtis prie  %s nesaugiai, naudokite „--no-check-certificate“.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ praleidžiama %sK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Netaisyklinga .wgetrc specifikacija „%s“: paliekama nepakeista.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  eta %s"

#: src/progress.c:1050
msgid "   in "
msgstr "  per "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Nepavyko gauti realaus laiko laikrodžio dažnio: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Šalinamas %s, nes jis turėtų būti atmestas.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Nepavyko atverti %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Įkeliamas robots.txt; nekreipkite dėmesio į klaidas.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Klaida apdorojant tarpinės stoties URL %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Klaida tarpinės stoties URL %s: Turi būti HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "viršyta %d peradresavimų.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Pasiduodama.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Bandoma iš naujo.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Pasenusių nuorodų nerasta.\n"
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
"Rasta %d pasenusi nuoroda.\n"
"\n"
msgstr[1] ""
"Rasta %d pasenusios nuorodos.\n"
"\n"
msgstr[2] ""
"Rasta %d pasenusių nuorodų.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Jokios klaidos"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Nepalaikoma schema"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "Netaisyklingas kompiuterio vardas"

#: src/url.c:641
msgid "Bad port number"
msgstr "Netaisyklingas prievado numeris"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Netaisyklingas naudotojo vardas"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Nebaigtas IPv6 skaitinis adresas"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6 adresai nepalaikomi"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Netaisyklingas IPv6 skaitinis adresas"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr ""

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Nepavyko išskirti %ld baitų; baigėsi atmintis.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Nepavyko išskirti %ld baitų; baigėsi atmintis.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Tęsiama fone, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Nepavyko ištrinti simbolinės nuorodos „%s“: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            prideda URL prie nuorodų, esančių -F -i "
#~ "faile.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  išsaugoti nutolusio failo leidimus.\n"