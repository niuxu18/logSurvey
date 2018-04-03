# Mesajele �n limba rom�n� pentru pachetul wget.
# Copyright (C) 2003 Free Software Foundation, Inc.
# Eugen Hoanca <eugenh@urban-grafx.ro>, 2003.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.9.1\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2003-11-01 18:02+0200\n"
"Last-Translator: Eugen Hoanca <eugenh@urban-grafx.ro>\n"
"Language-Team: Romanian <translation-team-ro@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=ISO-8859-2\n"
"Content-Transfer-Encoding: 8bit\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Eroare necunoscut�"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: op�iunea `%s' este ambigu�\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: op�iunea `--%s' nu permite un parametru\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: op�iunea `%c%s' nu permite un parametru\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: op�iunea `%s' necesit� un parametru\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: op�iune nerecunoscut� `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: op�iune nerecunoscut� `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: op�iune ilegal� -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: op�iune invalid� -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: op�iunea necesit� un parametru -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: op�iunea `W %s' este ambigu�\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: op�iunea `-W %s' nu permite parametri\n"

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
msgstr "Conectare la %s[%s]:%hu..."

#: src/connect.c:298
#, fuzzy, c-format
msgid "Connecting to %s:%d... "
msgstr "Conectare la %s:%hu..."

#: src/connect.c:358
msgid "connected.\n"
msgstr "conectat.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "e�uare: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr ""

#: src/convert.c:185
#, fuzzy, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d fi�iere convertite �n %.2f secunde.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Convertire %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "nimic de f�cut.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Nu pot converti linkurile �n %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Nu pot �terge `%s': %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Nu pot face backup la %s ca %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Eroare de sintax� �n Set-Cookie: %s la pozi�ia %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr ""

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Nu pot deschide fi�ierul de cookies `%s': %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Eroare la scriere �n `%s': %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Eroare la �nchiderea `%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Tip de listare nesuportat, se �ncearc� trecere la listare Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Index al /%s pe %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "durat� necunoscut� "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Fi�ier      "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Director    "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Link        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Nesigur     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s octe�i)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Dimensiune: %s"

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
msgstr " (neobligatoriu)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Login ca %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Eroare �n r�spunsul serverului, �nchid conexiunea.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Eroare �n salutul serverului.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Scriere e�uat�, �nchid conexiunea.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Serverul refuz� loginul.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Login incorect.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Admis!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Eroare server, nu se poate determina tipul sistemului.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "terminat."

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "terminat.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tip `%c' necunoscut, conexiune �nchis�.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "finalizat."

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD nenecesar.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Nu exist� directorul `%s'.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD nu este necesar.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Nu s-a putut ini�ia transferul PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Nu s-a putut analiza r�spunsul PASV.\n"

#: src/ftp.c:816
#, fuzzy, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "conectare la %s:%hu nereu�it�: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Eroare de leg�tur�(bind) (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT invalid.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST e�uat, start de la �nceput.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"Nu exist� fi�ierul `%s'.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Nu exist� fi�ierul `%s'.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Nu exist� fi�ierul sau directorul `%s'.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr ""

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, �nchid controlul conexiunii.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Conexiune de date: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Controlul conexiunii �nchis.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Transfer de date �ntrerupt.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Fi�ierul `%s' exist� deja, nu se mai aduce.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(�ncercare:%2d)"

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
msgstr "%s (%s) - `%s' salvat [%ld]\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "�terg %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Se utilizeaz� `%s' ca fi�ier temporar de listare.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "`%s' �ters.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Ad�ncimea de recuren�� %d a depa�it max. de ad�ncime %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Fi�ierul remote nu este mai nou dec�t fi�ierul local `%s'--nu se aduce.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr "Fi�ierul remote este mai nou dec�t fi�ierul local `%s' -- se aduce.\n"

#: src/ftp.c:1748
#, fuzzy, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Dimensiunile nu corespund (local %ld) -- se aduce.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Nume symlink invalid, se omite.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Deja exist� symlinkul corect %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Creare symlink %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Symlinkuri nesuportate, se omite symlinkul `%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Se omite directorul `%s.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: tip fi�ier necunoscut/nesuportat.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: identificator-timp(time-stamp) corupt.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Nu vor fi aduse directoare pentru ad�ncime setat� la %d (max %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Nu se coboar� la `%s' daca este exclus/neinclus.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Refuzare `%s'.\n"

#: src/ftp.c:2035
#, fuzzy, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Eroare la scriere �n `%s': %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Nu s-au g�sit potriviri pentru tiparul `%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "S-a scris indexul HTML �n `%s' [%ld].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "S-a scris indexul HTML �n `%s'\n"

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
msgstr "Eroare �n analiza URL proxy: %s: %s.\n"

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
msgstr "Eroare necunoscut�"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr ""

#: src/host.c:364
msgid "Unknown error"
msgstr "Eroare necunoscut�"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Rezolvare %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr ""

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "e�uare: .expirat(�)\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Nu s-a rezolvat linkul incomplet %s.\n"

#: src/html-url.c:772
#, fuzzy, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: %s: Valoare invalid� `%s'.\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Scriere cerere HTTP e�uat�: %s.\n"

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
msgstr "Reutilizare conexiune c�tre %s:%hu.\n"

#: src/http.c:1729
#, fuzzy, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Scriere cerere HTTP e�uat�: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr ""

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Cerere %s trimis�, se a�teapt� r�spuns... "

#: src/http.c:1811
#, fuzzy
msgid "No data received.\n"
msgstr "Nici o dat� recep�ionat�"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Eroare de citire (%s) �n headere.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Schem� autentificare necunoscut�.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Autorizare e�uat�.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr "Fi�ierul `%s' exist� deja, nu se mai aduce.\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Linie de stare malformat�"

#: src/http.c:2095
msgid "(no description)"
msgstr "(f�r� descriere)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Loca�ie: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "nespecificat(�)"

#: src/http.c:2156
msgid " [following]"
msgstr " [urmeaz�]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Fi�ierul este deja complet; nu mai e nimic de f�cut.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Dimensiune: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignorat"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr ""

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Avertisment: selec�iile globale(wildcards) nu sunt permise �n HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Nu se poate scrie �n `%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Nu s-a putut stabili o conexiune SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "EROARE: Redirectare (%d) f�r� loca�ie.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "EROARE %s %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Lipse�te headerul Last-modified -- identificatori de timp opri�i.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Headerul Last-modified invalid -- identificator de timp ignorat.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Fisierul de pe server nu e mai nou dec�t fi�ierul local `%s' -- nu se "
"aduce.\n"
"\n"

#: src/http.c:2736
#, fuzzy, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Dimensiunile difer� (local %ld) -- se aduce.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Fi�ierul remote este mai nou, se aduce.\n"

#: src/http.c:2760
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr "Fi�ierul remote este mai nou dec�t fi�ierul local `%s' -- se aduce.\n"

#: src/http.c:2766
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Fi�ierul remote nu este mai nou dec�t fi�ierul local `%s'--nu se aduce.\n"

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
msgstr "Fi�ierul remote este mai nou, se aduce.\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "EROARE %s %d: %s.\n"

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
"%s(%s) - `%s' salvat [%ld%ld]\n"
"\n"

#: src/http.c:2899
#, fuzzy, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Conexiune �nchis� la octetul %ld. "

#: src/http.c:2922
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Eroare de citire la octetul %ld (%s)."

#: src/http.c:2931
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Eroare de citire la octetul %ld/%ld (%s)."

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC �inte�te spre %s, care nu exist�.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Nu s-a putut citi %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Eroare �n %s la linia %d.\n"

#: src/init.c:533
#, fuzzy, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Eroare �n %s la linia %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: BUG: comand� necunoscut� `%s', valoare `%s'.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Avertisment: Fi�ierele wgetrc �i sistem �i user trimit c�tre `%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Comand� --execute invalid� `%s'\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr ""
"%s: %s: Boolean invalid `%s', folosi�i `on' (activat) sau "
"`off'(dezactivat).\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Num�r invalid `%s'.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Valoare octet invalid� `%s'\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Perioad� de timp invalid� `%s'.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Valoare invalid� `%s'.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Header invalid `%s'.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Tip evolu�ie `%s' invalid.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr "%s: %s: Restric�ie invalid� `%s', folosi�i `unix' sau `windows'.\n"

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
"%s recep�iona�i, redirectare output c�tre `%s'.\n"

#: src/log.c:819
#, fuzzy, c-format
msgid ""
"\n"
"%s received.\n"
msgstr "Nici o dat� recep�ionat�"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; logging dezactivat.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Folosire: %s [OP�IUNE]... [URL]...\n"

#: src/main.c:398
#, fuzzy
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"\n"
"Parametrii obligatorii pentru op�iuni lungi sunt obligatorii �i la cele "
"scurte.\n"

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
msgstr "Director    "

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
msgstr "Rapoarte de bug-uri prin mail �i sugestii la <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, un manager de desc�rcare non-interactiv.\n"

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
msgstr "Copyright (C) 2003 Free Software Foundation, Inc.\n"

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
"Original scris de Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Rapoarte de bug-uri prin mail �i sugestii la <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "�ncerca�i `%s --help' pentru mai multe op�iuni.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: op�iune ilegal� -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Nu pot fi �i detaliat �i silen�ios �n acela�i timp.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Nu pot �i identifica pentru timp (timestamp) �i l�sa fi�ierele nesec�ionate "
"�n acela�i timp.\n"

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
msgstr "Fi�ierul `%s' exist� deja, nu se mai aduce.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL lips�\n"

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
msgstr "Nici un URL g�sit �n %s.\n"

#: src/main.c:1336
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"FINALIZAT --%s--\n"
"Downloadat: %s octe�i �n %d fi�iere\n"

#: src/main.c:1345
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Cot� de download (%s octe�i) DEPêIT�!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Continui �n fundal.\n"

#: src/mswindows.c:292
#, fuzzy, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Continui �n fundal, pid %d.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Output-ul va fi scris �n `%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Nu am putut g�si un driver de socket folosibil.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: avertisment: Simbolul \"%s\" apare �nainte de numele ma�inii\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: simbol necunoscut \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Folosire: %s NETRC [NUME_HOST]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: n-am putut stabili %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr ""

#: src/openssl.c:173
#, fuzzy
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Nu s-a selectat OpenSSL PRNG; dezactivare SSL.\n"

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
"%*s[ omitere %dK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Specificare punct invalid� `%s'; l�sat neschimbat.\n"

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
msgstr "�tergere %s pentru c� oricum ar fi trebuit refuzat.\n"

#: src/res.c:391
#, fuzzy, c-format
msgid "Cannot open %s: %s"
msgstr "Nu pot converti linkurile �n %s: %s\n"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Se �ncarc� robots.txt; ignora�i erorile.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Eroare �n analiza URL proxy: %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Eroare �n URL proxy %s: Trebuie s� fie HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d redirect�ri dep�ite.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Renun�.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Re�ncerc.\n"
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
msgstr "Eroare necunoscut�"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Schem� nesuportat�"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
#, fuzzy
msgid "Invalid host name"
msgstr "Nume utilizator invalid"

#: src/url.c:641
msgid "Bad port number"
msgstr "Num�r de port invalid"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Nume utilizator invalid"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Adres� numeric� IPv6 neterminat�"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Adresele IPv6 nu sunt suportate"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Adres� numeric� IPv6 invalid�"

#: src/url.c:951
#, fuzzy
msgid "HTTPS support not compiled in"
msgstr "%s: suport de debug necompilat.\n"

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
msgstr "Continui �n fundal, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Nu am putut scoate(unlink) symlinkul `%s': %s\n"

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr ""
#~ "Nu am putut converti `%s' �ntr-o adres� bind.  Readucere(reverting) la "
#~ "ANY.\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Eroare �n Set-Cookie, c�mpul `%s'"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST e�uat; nu se va trunchia `%s'.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s r�ma�i]"

#~ msgid "Host not found"
#~ msgstr "Host neg�sit"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "S-a e�uat �n setarea contextului SSL\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "S-a e�uat �n �nc�rcarea certificatelor din %s\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Se �ncearc� f�r� certificatele specificate\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "Nu s-a putut primi codul(key) certificatului de la %s\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Sf�r�it fi�ier la analiza headerelor.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Continuarea downloadului a e�uat la acest fi�ier, ceea ce intr� �n \n"
#~ "conflict cu `-c'.\n"
#~ "Se refuz� trunchierea fi�ierului `%s' existent. \n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s r�ma�i)"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "Fi�ierul `%s' exist� deja, nu se mai aduce.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr "%s (%s) - `%s' salvat [%ld%ld])\n"

#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
#~ msgstr "%s (%s) - Conexiune �nchis� la octetul %ld/%ld. "

#~ msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
#~ msgstr ""
#~ "%s: %s:Boolean invalid `%s', specifica�i always, on, off sau never.\n"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "De start:\n"
#~ "  -V,  --version\t\t    afi�eaz� versiunea Wget �i iese.\n"
#~ "  -h,  --help\t\t\t    tip�re�te acest help.\n"
#~ "  -b,  --background\t\trulare �n fundal dupa startare.\n"
#~ "  -e,  --execute=COMAND�\texecut� o comand� �n stilul `.wgetrc'.\n"
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
#~ "\n"
#~ msgstr ""
#~ "Log�ri �i fi�iere de intrare:\n"
#~ "  -o,  --output-file=FI�IER\tlogare mesaje �n FI�IER.\n"
#~ "  -a,  --append-output=FI�IER\tad�ugare mesaje �n FI�IER.\n"
#~ "  -d,  --debug\t\t\t        tip�rire output debug.\n"
#~ "  -q,  --quiet\t\t\t        silen�ios (f�r� output).\n"
#~ "  -v,  --verbose\t\t        detaliat (este implicit).\n"
#~ "  -nv, --non-verbose\t\t    nedetaliat, f�r� a fi silen�ios.\n"
#~ "  -i,  --input-file=FI�IER\t    download de URL-uri g�site �n FI�IER.\n"
#~ "  -F,  --force-html\t\t    consider� fi�ierul de intrare ca HTML.\n"
#~ "  -B,  --base=URL\t            prefixare URL la linkuri relative �n -F -i "
#~ "fi�ier.\n"
#~ "\n"

#~ msgid ""
#~ "Download:\n"
#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
#~ "unlimits).\n"
#~ "       --retry-connrefused      retry even if connection is refused.\n"
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
#~ "  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
#~ "       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
#~ "       --connect-timeout=SECS   set the connect timeout to SECS.\n"
#~ "       --read-timeout=SECS      set the read timeout to SECS.\n"
#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
#~ "retrieval.\n"
#~ "       --random-wait            wait from 0...2*WAIT secs between "
#~ "retrievals.\n"
#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
#~ "host.\n"
#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
#~ "       --dns-cache=off          disable caching DNS lookups.\n"
#~ "       --restrict-file-names=OS restrict chars in file names to ones OS "
#~ "allows.\n"
#~ "\n"
#~ msgstr ""
#~ "Download:\n"
#~ "  -t,\t--tries=NUM�R\t\tseteaz� num�rul de �ncerc�ri ca NUM�R (0 este "
#~ "nelimitat\n"
#~ "       --retry-connrefused      re�ncearc� �i �n cazul �n care conexiunea "
#~ "este refuzat�.\n"
#~ "  -O,\t--output-document=FI�IER \tscrie documentele �n FI�IER.\n"
#~ "  -nc, --no-clobber\t\tnu sec�iona fi�ierele existente sau utilizeaz�  "
#~ "sufixe .#\n"
#~ "  -c,  --continue\t\t    continu� s� iei un fi�ier downloadat par�ial.\n"
#~ "\t--progress=TIP\t\t    selecteaz� mod m�surare desfa�urare download.\n"
#~ "  -N,  --timestamping\t\tnu aduce fi�ierele dac� nu sunt mai noi dec�t "
#~ "cele locale.\n"
#~ "  -S,  --server-response\ttip�re�te r�spunsul serverului.\n"
#~ "       --spider\t\t    nu desc�rca nimic.\n"
#~ "  -T,  --timeout=SECUNDE\ta�teapt� 1...SECUNDE �ntre re�ncerc�rile de "
#~ "aducere.\n"
#~ "       --dns-timeout=SECUNDE       setare expirare c�utare DNS la "
#~ "SECUNDE.\n"
#~ "       --connect-timeout=SECUNDE   setare expirare conectare la.SECUNDE\n"
#~ "       --read-timeout=SECUNDE      setare expirare citire la SECUNDE.\n"
#~ "  -w,  --wait=SECUNDE           a�teapt� SECUNDE �ntre aduceri.\n"
#~ "       --waitretry=SECUNDE      a�teapt� 1...SECUNDE �ntre �ncerc�rile de "
#~ "aducere.\n"
#~ "       --random-wait            a�teapt� �ntre 0...2*WAIT secunde �ntre  "
#~ "aduceri.\n"
#~ "  -Y,  --proxy=on/off\t\tactiveaz� (on) sau dezactiveaz�(off) proxy.\n"
#~ "  -Q,  --quota=NUM�R\t\tseteaz� cot� de desc�rcare la NUM�R.\n"
#~ "\t--limit-rate=RAT�\t    limiteaz� rat� desc�rcare la RAT�.\n"
#~ "       --dns-cache=off          dezactiveaz� cachingul de c�ut�ri DNS.\n"
#~ "       --restrict-file-names=OS restric�ioneaz� caracterele din numele "
#~ "fi�ierul la cele pe care le permite sistemul de operare.n\n"

#~ msgid ""
#~ "Directories:\n"
#~ "  -nd, --no-directories            don't create directories.\n"
#~ "  -x,  --force-directories         force creation of directories.\n"
#~ "  -nH, --no-host-directories       don't create host directories.\n"
#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
#~ "components.\n"
#~ "\n"
#~ msgstr ""
#~ "Directoare:\n"
#~ "  -nd  --no-directories            nu crea directoare.\n"
#~ "  -x,  --force-directories         for�eaz� crearea directoarelor.\n"
#~ "  -nH, --no-host-directories       nu crea directoare gazd�.\n"
#~ "  -P,  --directory-prefix=PREFIX   salveaz� fi�ierele �n PREFIX/...\n"
#~ "       --cut-dirs=NUM�R            Ignor� NUM�R componente director "
#~ "remote.\n"
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
#~ "       --post-data=STRING    use the POST method; send STRING as the "
#~ "data.\n"
#~ "       --post-file=FILE      use the POST method; send contents of FILE.\n"
#~ "\n"
#~ msgstr ""
#~ "Op�iuni HTTP:\n"
#~ "       --http-user=USER      seteaz� userul http ca USER.\n"
#~ "       --http-passwd=PASS    seteaz� parola http ca PASS.\n"
#~ "  -C,  --cache=on/off        (nu)permite date server-cached (�n mod "
#~ "normal permis).\n"
#~ "  -E,  --html-extension      salveaz� toate documentele text/html cu "
#~ "extensie .html.\n"
#~ "       --ignore-length       ignor� c�mpul header `Content-Length'.\n"
#~ "       --header=�IR          insereaz� �IR �n headere.\n"
#~ "       --proxy-user=USER     seteaz� USER drept nume utilizator proxy.\n"
#~ "       --proxy-passwd=PASS   seteaz� PASS drept parol� proxy.\n"
#~ "       --referer=URL         include headerul `Referer: URL' �n cererea "
#~ "HTTP.\n"
#~ "  -s,  --save-headers        salveaz� headerele HTTP �n fi�ier.\n"
#~ "  -U,  --user-agent=AGENT    identificare ca AGENT �n loc de Wget/"
#~ "VERSIUNE.\n"
#~ "       --no-http-keep-alive  dezactiveaz� HTTP keep-alive (conexiuni "
#~ "persistente).\n"
#~ "       --cookies=off         nu utiliza cookies.\n"
#~ "       --load-cookies=FI�IER �nc�rc� cookies din FI�IER �nainte de "
#~ "sesiune.\n"
#~ "       --save-cookies=FI�IER salveaz� cookies �n FI�IER dup� sesiune.\n"
#~ "       --post-data=�IR    folose�te metoda POST; trimite �IR ca �i date.\n"
#~ "       --post-file=FI�IER      folose�te metoda POST; trimite con�inutul "
#~ "FI�IERului\n"
#~ "\n"

#~ msgid ""
#~ "HTTPS (SSL) options:\n"
#~ "       --sslcertfile=FILE     optional client certificate.\n"
#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
#~ "       --egd-file=FILE        file name of the EGD socket.\n"
#~ "       --sslcadir=DIR         dir where hash list of CA's are stored.\n"
#~ "       --sslcafile=FILE       file with bundle of CA's\n"
#~ "       --sslcerttype=0/1      Client-Cert type 0=PEM (default) / 1=ASN1 "
#~ "(DER)\n"
#~ "       --sslcheckcert=0/1     Check the server cert agenst given CA\n"
#~ "       --sslprotocol=0-3      choose SSL protocol; 0=automatic,\n"
#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
#~ "\n"
#~ msgstr ""
#~ "Op�iuni HTTPS (SSL):\n"
#~ "       --sslcertfile=FI�IER     certificat client op�ional.\n"
#~ "       --sslcertkey=FI�IER_CHEIE   fi�ier_cheie op�ional pentru acest "
#~ "certificat.\n"
#~ "       --egd-file=FI�IER        nume fi�ier al socketului EGD.\n"
#~ "       --sslcadir=DIR         directorul unde este stocat� lista de CA-"
#~ "uri.\n"
#~ "       --sslcafile=FI�IER       fi�ierul cu gr�mada(bundle) de CA-uri\n"
#~ "       --sslcerttype=0/1      Tip Cert-Client=PEM (implicit) / 1=ASN1 "
#~ "(DER)\n"
#~ "       --sslcheckcert=0/1     Verificarea serverului pentru CA-urile "
#~ "furnizate\n"
#~ "       --sslprotocol=0-3      verificare protocol SSL; 0=automat,\n"
#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
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
#~ "Op�iuni FTP:\n"
#~ "  -nr, --dont-remove-listing   nu �terge fi�ierele `.listing'.\n"
#~ "  -g,  --glob=on/off           activare/dezactivare nume globale.\n"
#~ "       --passive-ftp           utilizeaz� modul de transfer \"pasiv\".\n"
#~ "       --retr-symlinks         �n recursiune, adu fi�ierele linkuite (nu "
#~ "directoarele).\n"
#~ "\n"

#~ msgid ""
#~ "Recursive retrieval:\n"
#~ "  -r,  --recursive          recursive download.\n"
#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
#~ "infinite).\n"
#~ "       --delete-after       delete files locally after downloading them.\n"
#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
#~ "page.\n"
#~ "       --strict-comments    turn on strict (SGML) handling of HTML "
#~ "comments.\n"
#~ "\n"
#~ msgstr ""
#~ "Aducere recursiv�:\n"
#~ "  -r,  --recursive          absorbire web recursiv� -- folosi�i cu "
#~ "aten�ie!\n"
#~ "  -l,  --level=NUM�R       ad�ncime recursiune maxim� (inf sau 0 pentru "
#~ "infinit�).\n"
#~ "       --delete-after       �terge fi�ierele locale dupa desc�rcare.\n"
#~ "  -k,  --convert-links      converte�te linkuri non-relative �n "
#~ "relative.\n"
#~ "  -K,  --backup-converted   �nainte de a converti fi�ierul X, back-up ca "
#~ "X.orig.\n"
#~ "  -m,  --mirror             op�iune scurt� echivalent� cu -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites    aducere toate imaginile, etc. necesare pentru "
#~ "afi�area paginii HTML.\n"
#~ "       --strict-comments    activeaz� manipularea strict� (SGML) a "
#~ "comentariilorHTML.\n"
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
#~ "Acceptare/refuz recursive:\n"
#~ "  -A,  --accept=LIST�             list� separat� prin virgule a "
#~ "extensiilor acceptate.\n"
#~ "  -R,  --reject=LIST�             list� separat� prin virgule a "
#~ "extensiilor refuzate.\n"
#~ "  -D,  --domains=LIST�            list� separat� prin virgule a "
#~ "domeniilor acceptate.\n"
#~ "       --exclude-domains=LIST�    list� separat� prin virgule a "
#~ "domeniilor refuzate.\n"
#~ "       --follow-ftp               urmeaz� leg�turile FTP din documente "
#~ "HTML.\n"
#~ "       --follow-tags=LIST�        list� separat� prin virgule a tagurilor "
#~ "HTML urmate.\n"
#~ "  -G,  --ignore-tags=LIST�        list� separat� prin virgule a tagurilor "
#~ "HTML ignorate.\n"
#~ "  -H,  --span-hosts                 viziteaz� �i site-uri str�ine �n "
#~ "recursiune.\n"
#~ "  -L,  --relative                   urmeaz� doar linkurile relative.\n"
#~ "  -I,  --include-directories=LIST�  list� directoare permise.\n"
#~ "  -X,  --exclude-directories=LIST�  list� directoare excluse.\n"
#~ "  -np, --no-parent                  nu urca la directorul p�rinte.\n"
#~ "\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Acest program este distribuit �n speran�a c� va fi folositor,\n"
#~ "dar F�R� NICI O GARAN�IE; chiar f�r� garan�ia presupus� a\n"
#~ "VANDABILIT��II sau POTRIVIRII PENT UN SCOP ANUME.  Citi�i\n"
#~ "Licen�a Public� General� GNU pentru mai multe detalii.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Startare WinHelp %s\n"

#~ msgid "Empty host"
#~ msgstr "Host vid"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Memorie plin�.\n"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Eroare de sintax� �n Set-Cookie la caracterul `%c'.\n"

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: Nu se poate converti `%s' �n adres� IP.\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: comand� invalid�\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Nu s-a putut g�si serverul proxy.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: Ciclu de redirectare detectat.\n"