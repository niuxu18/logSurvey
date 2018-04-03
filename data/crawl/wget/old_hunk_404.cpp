# Croatian messages for GNU Wget
# Copyright (C) 2005 Free Software Foundation, Inc.
# Hrvoje Nik�i� <hniksic@xemacs.org>, 2005.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.10-b1\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2005-07-06 17:42+0200\n"
"Last-Translator: Hrvoje Nik�i� <hniksic@xemacs.org>\n"
"Language-Team: Croatian <lokalizacija@linux.hr>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=iso-8859-2\n"
"Content-Transfer-Encoding: 8bit\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Nepoznata gre�ka"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: opcija `%s' je dvosmislena\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: uz opciju `--%s' ne ide argument\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: opcija `%c%s' ne dopu�ta argument\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: opcija `%s' tra�i argument\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: nepoznata opcija `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: nepoznata opcija `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: nedopu�tena opcija -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: neispravna opcija -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: opcija tra�i argument -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: opcija `-W %s' je dvosmislena\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: uz opciju `-W %s' ne ide argument\n"

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
msgstr "%s: ne mogu prona�i adresu `%s' u svrhu binda; bindanje onemogu�eno.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Spajam se na %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Spajam se na %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "spojen.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "nije uspjelo: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: ne mogu prona�i adresu `%s' u svrhu binda; bindanje onemogu�eno.\n"

#: src/convert.c:185
#, fuzzy, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Konvertirao %d spisa za %.*f sekundi.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Konvertiram %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "nema posla.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Ne mogu konvertirati linkove u %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Ne mogu izbrisati `%s': %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Ne mogu snimiti backup iz %s u %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Gre�ka u Set-Cookie: %s na poziciji %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Cookie s adrese %s poku�ao je postaviti domenu na %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Ne mogu otvoriti spis s cookiejima `%s': %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Gre�ka pri pisanju u `%s': %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Gre�ka pri zatvaranju `%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Nepodr�ana vrsta ispisa, poku�avat �u s razlu�iteljem Unixovog ispisa.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Indeks direktorija /%s na %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "nepoznato vrijeme    "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Spis        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Direktorij  "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Link        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Ne znam     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bajtova)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Duljina: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) preostaje"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s preostaje"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (nepouzdano)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Prijavljujem se kao %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Gre�ka u odgovoru, zatvaram kontrolnu vezu.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Gre�ka u poslu�iteljevom pozdravu.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Pisanje je zakazalo, zatvaram kontrolnu vezu.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Poslu�itelj odbija prijavu.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Pogre�na prijava.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Ulogiran!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Gre�ka na serveru, ne mogu utvrditi vrstu sustava.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "gotovo.  "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "gotovo.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Nepoznat tip `%c', zatvaram kontrolnu vezu.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "gotovo."

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD nepotreban.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr "Ne postoji direktorij `%s'.\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD se ne tra�i.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Ne mogu otpo�eti PASV prijenos.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Ne mogu ra��laniti PASV odgovor.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "nemogu�e spajanje na %s, port %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Gre�ka pri bindu (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Neispravan PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST nije uspio, po�injem ispo�etka.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"Nema spisa `%s'.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Nema spisa `%s'.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Nema spisa ili direktorija `%s'.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s se nenadano pojavio.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, zatvaram kontrolnu vezu.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Podatkovna veza: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Kontrolna veza prekinuta.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Prijenos podataka prekinut.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Spis `%s' ve� postoji; ne dohva�am.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(pok:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' snimljen [%s/%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' snimljen [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Bri�em %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Koristim `%s' kao privremeni spis za listing.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "Izbrisao `%s'.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Dubina rekurzije %d prelazi najve�u dopu�tenu %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Spis na poslu�itelju nije noviji od lokalnog spisa `%s' -- ne dohva�am.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr "Spis na poslu�itelju noviji od lokalnog spisa `%s' -- dohva�am.\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr "Veli�ine se ne sla�u (lokalno %s) -- dohva�am.\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Neispravno ime simboli�kog linka, preska�em.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Ve� postoji ispravan link %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Stvaram simboli�ki link %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Linkovi nisu podr�ani, preska�em link `%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Preska�em direktorij `%s'.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: nepoznata/nepodr�ana vrsta spisa.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: pogre�no vrijeme.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Ne dohva�am direktorije jer je dubina %d (najvi�e %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Ne ponirem u `%s' jer je isklju�en ili nije uklju�en.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Odbijam `%s'.\n"

#: src/ftp.c:2035
#, fuzzy, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Gre�ka pri pisanju u `%s': %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Ni�ta ne ide uz `%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Snimio HTML-iziran indeks u `%s' [%s].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Snimio HTML-iziran indeks u `%s'.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "GRE�KA"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "UPOZORENJE"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s nije predo�io ovjeru.\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: %s nije predo�io ovjeru.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: %s nije predo�io ovjeru.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s: %s nije predo�io ovjeru.\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Gre�ka pri ra��lani proxy URL-a %s: %s.\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr ""

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr ""

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"%s: \"common name\" `%s' navedeno u ovjeri ne odgovara tra�enom imenu `%s'.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Nepoznat host"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Privremena pogre�ka pri pronala�enju adrese"

#: src/host.c:364
msgid "Unknown error"
msgstr "Nepoznata gre�ka"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Tra�im %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "neuspjeh: ra�unalo nema IPv4/IPv6 adresa.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "neuspjeh: isteklo vrijeme.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Ne mogu sastaviti nepotpun link %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Neispravan URL %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Nisam uspio poslati HTTP zahtjev: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Nema zaglavlja, pretpostavljam HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Isklju�ujem SSL zbog navedenih gre�aka.\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Nema spisa `%s' za POST: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Koristim postoje�u vezu prema %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Nisam uspio procitati proxyjev odgovor: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Neuspjeh tuneliranja kroz proxy: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s zahtjev poslan, i��ekujem odgovor... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Podaci nisu primljeni.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Gre�ka pri �itanju zaglavlja (%s).\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Nepoznata metoda ovjere.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Ovjera nije uspjela.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr "Spis `%s' ve� postoji; ne dohva�am.\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Deformirana statusna linija"

#: src/http.c:2095
msgid "(no description)"
msgstr "(bez opisa)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Polo�aj: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "nenazna�en"

#: src/http.c:2156
msgid " [following]"
msgstr " [pratim]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Spis je ve� u potpunosti dohva�en; nema se �to napraviti.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Duljina: "

#: src/http.c:2263
msgid "ignored"
msgstr "zanemarena"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr ""

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Upozorenje: wildcardi nisu podr�ani za HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Ne mogu pisati u `%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Ne mogu uspostaviti SSL vezu.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "GRE�KA: Redirekcija (%d) bez novog polo�aja (location).\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s GRE�KA %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Nedostaje zaglavlje Last-Modified -- ignoriram vremensku granicu.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Neispravno zaglavlje Last-Modified -- ignoriram vremensku oznaku.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Spis na poslu�itelju nije noviji od lokalnog spisa `%s' -- ne dohva�am.\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Veli�ine se ne sla�u (lokalno %s) -- dohva�am.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Spis na poslu�itelju je noviji, dohva�am.\n"

#: src/http.c:2760
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr "Spis na poslu�itelju noviji od lokalnog spisa `%s' -- dohva�am.\n"

#: src/http.c:2766
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Spis na poslu�itelju nije noviji od lokalnog spisa `%s' -- ne dohva�am.\n"

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
msgstr "Spis na poslu�itelju je noviji, dohva�am.\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: Neispravan URL %s: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' snimljen [%s/%s]\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' snimljen [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Veza zatvorena na bajtu %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Gre�ka pri �itanju na bajtu %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Gre�ka pri �itanju na bajtu %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC pokazuje na %s, koji ne postoji.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Ne mogu pro�itati %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Gre�ka u %s na liniji %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Sintaksna gre�ka u %s na liniji %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Nepoznata naredba `%s' u %s na liniji %d.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: Upozorenje: sistemski i korisnikov wgetrc su `%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Neispravna --execute naredba `%s'\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Neispravan boolean `%s'; navedite `on' ili `off'.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Neispravan broj `%s'.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Neispravna bajtovna vrijednost `%s'\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Neispravan vremenski period `%s'\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Neispravna vrijednost `%s'.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Neispravno zaglavlje `%s'.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Neispravan indikator napretka `%s'.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Neispravna restrikcija `%s', upotrijebite `unix' ili `windows'.\n"

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
"%s primljen, preusmjeravam izlaz u `%s'.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"dobio %s.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; isklju�ujem logiranje.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Uporaba: %s [OPCIJA]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Ako duga�ka opcija zahtijeva argument, to vrijedi i za kratku.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Pokretanje:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           prika�i verziju Wgeta i iza�i.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              ispi�i pomo�.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        radi u pozadini nakon pokretanja.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=NAREDBA    izv�i NAREDBU poput onih u `.wgetrc'-u.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Logiranje i ulazni spis:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=SPIS    spremaj poruke u SPIS.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=SPIS  spremaj poruke na kraj SPISA.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr ""
"  -d,  --debug               ispisuj veliku koli�inu poruka korisnih pri\n"
"                             ispravljanju gre�aka.\n"

#: src/main.c:423
#, fuzzy
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""
"  -d,  --debug               ispisuj veliku koli�inu poruka korisnih pri\n"
"                             ispravljanju gre�aka.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               ti�ina (bez ipisa).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             rje�it ispis (podrazumijevano).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          isklju�i rje�itost, ali ipak pone�to ispisuj.\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i, --input-file=SPIS      dohvati URL-ove navedene u SPISU.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr ""
"  -F,  --force-html          tretiraj sadr�aj ulaznog spisa kao HTML.\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping            skidaj samo spise novije od lokalnih.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Dohvat:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=BROJ              postavi broj poku�aja na BROJ (0 za "
"bezbroj).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       poku�avaj iznova i kad je spajanje "
"odbijeno.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=SPIS    spremaj dohva�ene dokumente u SPIS.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              ne dohva�aj spise koji postoje lokalno.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                nastavi s dohvatom napola skinutog spisa.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=VRSTA          promijeni izgled pokazatelj dohvata.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            skidaj samo spise novije od lokalnih.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         ispisuj poslu�iteljeve odgovore.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  ne dohva�aj sadr�aje URL-ova.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=VRIJEME         postavi sve vrijednosti isteka vremena.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=VRIJEME     postavi maksimalno vrijeme DNS pretrage.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=VRIJEME postavi maksimalno vrijeme spajanja.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=VRIJEME    postavi maksimalno vrijeme �itanja.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=VRIJEME            napravi pauzu od VREMENA izme�u dohvata.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=VRIJEME       �ekaj 1..VRIJEME sekundi izme�u ponovnih\n"
"                                 poku�aja dohvata.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             �ekaj od 0..2*s sekundi izme�u dohvata, "
"gdje\n"
"                                 je s vrijeme zadano s --wait.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                isklju�i upotrebu proxyja.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quote=KOLI�INA          ograni�i koli�inu dohva�enih podataka.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRESA     koristi lokalnu ADRESU (ime ili IP) za "
"bind.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=BRZINA       ograni�i brzinu dohvata u bajtovima u "
"sekundi.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            ne pamti rezultate pretraga DNS-a.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  ograni�i znakove u nazivima spis� na one\n"
"                                 koje dopu�ta OS.\n"

#: src/main.c:489
#, fuzzy
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-length         ne uva�avaj zaglavlje `Content-Length'.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              spajaj se samo na IPv4 adrese.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              spajaj se samo na IPv6 adrese.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=VRSTA     daj prednost navedenoj vrsti IP adresa, "
"jednoj\n"
"                                 od IPv6, IPv4 ili none.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=KORISNIK           postavi KORISNIKA za http i ftp korisnika.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --password=ZAPORKA        �alji ZAPORKU za http i ftp.\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --password=ZAPORKA        �alji ZAPORKU za http i ftp.\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-proxy                isklju�i upotrebu proxyja.\n"

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
msgstr "Direktoriji:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           ne stvaraj direktorije.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories       uvijek stvaraj direktorije.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""
"  -nH, --no-host-directories      ne stvaraj direktorije po imenu "
"poslu�itelja.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr "       --protocol-directories     stavi ime protokola u direktorij.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIX  spremaj spise u PREFIX/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=N               ignoriraj N stranih komponenti "
"direktorija.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Opcije HTTP-a:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=KORISNIK    postavi KORISNIKA za http korisnika.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=ZAPORKA �alji ZAPORKU za http.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              tra�i od servera da ne �alje ke�irane "
"podatke.\n"

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
"  -E,  --html-extension        spremaj HTML dokumente s ekstenzijom `."
"html'.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         ne uva�avaj zaglavlje `Content-Length'.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""
"       --header=ZAGLAVLJE      umetni ZAGLAVLJE me�u ostala zaglavlja.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=KORISNIK   postavi KORISNIKA za korisnika proxyja.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=ZAPORKA �alji ZAPORKU za proxy.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr "       --referer=URL           �alji zaglavlje `Referer: URL'.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          snimaj HTTP zaglavlja na disk.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=KLIJENT    identificiraj se kao KLIJENT umjesto kao\n"
"                               Wget/VERZIJA.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    ne koristi neprekinutu HTTP vezu (keep-"
"alive).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            ne koristi cookieje.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=SPIS     u�itaj cookieje iz SPISA na po�etku rada.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=SPIS     spremi cookieje u SPIS na kraju rada.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  u�itaj i snimi cookieje ograni�ene na "
"\"session\".\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=PODACI      koristi metodu POST, �alju�i PODATKE u "
"zahtjevu.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=SPIS        koristi metodu POST, �alju�i sadr�aj SPISA.\n"

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
msgstr "Opcije HTTPS-a (SSL-a/TLS-a):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     izaberi sigurni protokol, jedan od auto, "
"SSLv2,\n"
"                                SSLv3 ili TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   ne provjeravaj poslu�iteljevu ovjeru.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=SPIS       datoteka s klijentovom ovjerom.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=VRSTA vrsta klijentove ovjere, PEM ili DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FILE       spis s privatnim klju�em.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TYPE  vrsta privatnog klju�a, PEM ili DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=SPIS    spis s CA-ovima na okupu.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr "       --ca-directory=DIR       direktorij s pojedina�nim CA-ovima.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=SPIS       spis s nasumi�nim podacima za zametak SSL-"
"ovog\n"
"                                generatora slu�ajnih brojeva.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=SPIS          naziv spisa u kojem je EGD socket s "
"nasumi�nim\n"
"                                podacima.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Opcije FTP-a:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=KORISNIK     postavi KORISNIKA za ftp korisnika.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=ZAPORKA  �alji ZAPORKU za ftp.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr ""
"       --no-remove-listing     ne bri�i ispise direktorija `.listing'.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               nemoj interpretirati * i ? u nazivu spisa.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp        onemogu�i \"pasivni\" mod prijenosa.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         pri rekurziji, dohva�aj datoteke na koje\n"
"                               pokazuju linkovi (ne radi za direktorije).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekurzivni dohvat:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          rekurzivni dohvat.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=BROJ         najve�a dubina rekurzije (0 za neograni�enu).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after       pobri�i lokalne spise nakon dohvata.\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      promijeni linkove u lokalnom HTML-u tako da\n"
"                            pokazuju na dohva�ene spise.\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   prije konverzije spisa X, spremi sadr�aj u X."
"orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   prije konverzije spisa X, spremi sadr�aj u X."
"orig.\n"

#: src/main.c:647
#, fuzzy
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             kra�i oblik za -N -r -l inf --no-remove-"
"listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    dohvati sve slike itd. potrebne za prikaz HTML-"
"a.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    uklju�i strog (SGML) tretman HTML komentara.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Rekurzivno prihva�anje/odbijanje:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=POPIS              zarezom odvojen popis prihva�enih "
"nastavaka.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=POPIS              zarezom odvojen popis odbijenih "
"nastavaka.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=POPIS             zarezom odvojen popis prihva�enih "
"domena.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=POPIS     zarezom odvojen popis odbijenih domena.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                prati linkove na FTP iz HTML dokumenata.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=POPIS         popis HTML tagova koje treba pratiti.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=POPIS         popis HTML tagova koje ne treba pratiti.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                ska�i sa servera na server pri "
"rekurzivnom\n"
"                                   dohvatu.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  prati samo relativne linkove.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""
"  -I,  --include-directories=POPIS\n"
"                                   popis dopu�tenih direktorija.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""
"  -X,  --exclude-directories=POPIS\n"
"                                    popis nedopu�tenih direktorija.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""
"  -np, --no-parent                 ne uspinji se u direktorij iznad "
"trenutnog.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Uo�ene gre�ke i prijedloge �aljite na <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, program za neinteraktivni dohvat s mre�e.\n"

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
msgstr "Copyright (C) 2005 Free Software Foundation, Inc.\n"

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
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Izvorno napisao Hrvoje Nik�i� <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Uo�ene gre�ke i prijedloge �aljite na <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Poku�ajte `%s --help' za vi�e opcija.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: nedopu�tena opcija -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Ne mogu istovremeno biti rje�it i tih.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Ne mogu istovremeno paziti na vrijeme i ne gaziti stare spise.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Nije dopu�teno navesti i --inet4-only i --inet6-only.\n"

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
msgstr "Spis `%s' ve� postoji; ne dohva�am.\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Nije dopu�teno navesti i --inet4-only i --inet6-only.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: nedostaje URL\n"

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
msgstr "Nijedan URL nije prona�en u %s.\n"

#: src/main.c:1336
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"ZAVR�IO --%s--\n"
"Dohvatio: %s bajtova u %d spisa\n"

#: src/main.c:1345
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Ograni�enje dohvata (%s bajtova) je PREKORA�ENO!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Nastavljam u pozadini.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Nastavljam u pozadini, s pid-om %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Izlaz se sprema u `%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Ne mogu na�i upotrebljiv pogonitelj za sockete.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: upozorenje: \"%s\" token se pojavljuje prije naziva stroja\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: nepoznat token \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Uporaba: %s NETRC [RA�UNALO]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: ne mogu stat-irati %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "UPOZORENJE: rabi se slab zametak slu�ajnih brojeva.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Nije postavljen zametak PRNG-a; razmisli o --random-file.\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: %s nije predo�io ovjeru.\n"

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
#, fuzzy, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: \"common name\" `%s' navedeno u ovjeri ne odgovara tra�enom imenu `%s'.\n"

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
msgstr "Za nesigurno spajanje na %s upotrijebite `--no-check-certificate'.\n"

#: src/progress.c:242
#, fuzzy, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ preska�em %dK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr ""
"Neispravna naznaka stila to�kica `%s': ostavljam prija�nju vrijednost.\n"

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
msgstr "Nedostupna frekvencija REALTIME clocka: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Uklanjam %s budu�i da bi ga trebalo odbiti.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Ne mogu otvoriti %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "U�itavam robots.txt; molim ne obazirati se na gre�ke.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Gre�ka pri ra��lani proxy URL-a %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Gre�ka u proxy URL-u %s: Mora biti HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Vi�e od %d preusmjeravanja.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Odustajem.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Poku�avam ponovo.\n"
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
msgid "No error"
msgstr "Nema gre�ke"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Nepodr�ana shema"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "Neispravno ime poslu�itelja"

#: src/url.c:641
msgid "Bad port number"
msgstr "Neispravan broj porta"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Neispravno korisni�ko ime"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Nedovrssena IPv6 numeri�ka adresa"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6 adrese nisu podr�ane"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Neispravna IPv6 numeri�ka adresa"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr ""

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Nije uspjela alokacija %ld bajtova; memorija je potro�ena.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Nije uspjela alokacija %ld bajtova; memorija je potro�ena.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Nastavljam u pozadini, s pid-om %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Ne mogu izbrisati link `%s': %s\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Gre�ka u Set-Cookie, polje `%s'"

#, fuzzy
#~ msgid "File `%s' already there, not retrieving.\n"
#~ msgstr "Spis `%s' ve� postoji; ne dohva�am.\n"

#, fuzzy
#~ msgid "Failed writing to proxy: %s.\n"
#~ msgstr "Nisam uspio poslati HTTP zahtjev: %s.\n"

#, fuzzy
#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "Spis `%s' ve� postoji; ne dohva�am.\n"

#, fuzzy
#~ msgid ""
#~ "%s (%s) - `%s' saved [%s/%s])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - `%s' snimljen [%s/%s]\n"
#~ "\n"

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) - Veza zatvorena na bajtu %s/%s. "

#, fuzzy
#~ msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
#~ msgstr "%s: %s: Neispravan boolean `%s'; navedite `on' ili `off'.\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            polazni URL za relativne linkove pri obradi -"
#~ "F -i.\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                   uklju�i upotrebu proxyja.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  sa�uvaj dozvole na datotekama skinutim FTP-"
#~ "om.\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ "\n"
#~ "Sva prava zadr�ana.  Ovaj program distribuira se u nadi da �e biti\n"
#~ "koristan, ali BEZ IKAKVOG JAMSTVA; bez �ak i impliciranog jamstva\n"
#~ "PROIZVODNOSTI ili UPOTREBLJIVOSTI ZA ODRE�ENU SVRHU.  Pogledajte GNU\n"
#~ "General Public License za vi�e detalja.\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s: gre�ka pri verifikaciji ovjere od %s: %s\n"

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: Neispravan boolean `%s';\n"
#~ "navedite `always', `on', `off' ili `never'.\n"
