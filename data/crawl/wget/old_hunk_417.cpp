# Slovak translations for GNU wget
# Copyright (C) 1999, 2002, 2003, 2005, 2007, 2008, 2009 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Marcel Telka <marcel@telka.sk>, 2002, 2003, 2005, 2007, 2008, 2009.
# Miroslav Vasko <vasko@debian.cz>, 1999.
#
msgid ""
msgstr ""
"Project-Id-Version: GNU wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-09 23:48+0200\n"
"Last-Translator: Marcel Telka <marcel@telka.sk>\n"
"Language-Team: Slovak <sk-i18n@lists.linux.sk>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8-bit\n"
"Plural-Forms: nplurals=3; plural= (n==1) ? 1 : (n>=2 && n<=4) ? 2 : 0;\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Neznáma systémová chyba"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: voľba `%s' nie je jednoznačná\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: voľba `--%s' nepodporuje parameter\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: voľba `%c%s' nepodporuje parameter\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: voľba `%s' vyžaduje parameter\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: neznáma voľba `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: neznáma voľba `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: neprípustná voľba -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: neplatná voľba -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: voľba vyžaduje parameter -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: voľba `-W %s' nie je jednoznačná\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: voľba `-W %s' nepodporuje parameter\n"

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
msgstr "„"

#: lib/quotearg.c:273
msgid "'"
msgstr "“"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "pamäť vyčerpaná"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: nepodarilo sa previesť adresu zviazania %s; deaktivujem zviazanie.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Pripájam sa k %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Pripájam sa k %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "pripojené.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "zlyhalo: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: nepodarilo sa previesť adresu hostiteľa %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Skonvertovaných %d súborov za %s sekúnd.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Konvertujem %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "niet čo robiť.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Nemôžem previesť odkazy v %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Nemôžem zmazať %s: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Nemôžem zálohovať %s ako %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Chyba syntaxe v Set-Cookie: %s na pozícii %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Koláčiky prichádzajúce z %s sa pokúsili nastaviť doménu na %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Nedokážem otvoriť súbor s cookie %s: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Chyba pri zápise do %s: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Chyba pri zatváraní %s: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Nepodporovaný typ výpisu, skúša sa unixový parser.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Obsah /%s na %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "čas neznámy        "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Súbor       "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Adresár     "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Sym. odkaz  "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Neznámy typ "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bajtov)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Dĺžka: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", ostáva %s (%s)"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", ostáva %s"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (nie je smerodajné)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Prihlasujem sa ako %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Server odpovedal chybne, uzatváram riadiace spojenie.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Úvodná odpoveď servera je chybná.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Nemôžem zapísať dáta, uzatváram riadiace spojenie.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Server odmieta prihlásenie.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Chyba pri prihlásení.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Prihlásený!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Chyba servera, nie je možné zistiť typ systému.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "hotovo.  "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "hotovo.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Neznámy typ `%c', uzatváram riadiace spojenie.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "hotovo."

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD nie je potrebné.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Adresár %s neexistuje.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD nie je potrebné.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Nemožno iniciovať prenos príkazom PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Nemôžem analyzovať odpoveď na PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "nemôžem sa pripojiť k %s port %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Chyba pri operácii \"bind\" (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Neplatný PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST zlyhal, začínam odznova.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Súbor %s existuje.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Súbor %s neexistuje.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Súbor %s neexistuje.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Súbor alebo adresár %s neexistuje.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s bol odpružený do existencie.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, uzatváram riadiace spojenie.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Dátové spojenie: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Riadiace spojenie uzatvorené.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Prenos dát bol predčasne ukončený.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Súbor %s je už tam, nebudem ho prenášať.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(pokus:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - zapísané na štandardný výstup %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s uložený [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Odstraňujem %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Použiť %s ako dočasný súbor zoznamu.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "Odstránené %s.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Hĺbka rekurzie %d prekročila maximálnu hĺbku %d.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "Vzdialený súbor nie je novší ako miestny súbor %s -- neprenášam.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Vzdialený súbor je novší ako miestny súbor %s -- prenášam.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Veľkosti se nezhodujú (miestny %s) -- prenášam.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Neplatný názov symoblického odkazu, preskakujem.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Korektný symbolický odkaz %s -> %s už existuje.\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Vytváram symbolický odkaz %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr ""
"Symbolické odkazy nie sú podporované, preskakujem symbolický odkaz %s.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Preskakujem adresár %s.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: neznámy/nepodporovaný typ súboru.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: časové značka súboru je porušená.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Nebudem prenášať adresáre, pretože sme už v hĺbke %d (maximum je %d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Nezostupujem do %s, pretože je vylúčený/nezačlenený.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "Odmietam %s.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Chyba pri hľadaní zhody %s s %s: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Vzoru %s nič nezodpovedá.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Výpis adresára v HTML formáte bol zapísaný do %s [%s].\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Výpis adresára v HTML formáte bol zapísaný do %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "CHYBA"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "UPOZORNENIE"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s neprezentoval certifikát.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Certifikát %s nie je dôveryhodný.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: Certifikát %s nedostal známeho vydavateľa.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: Certifikát %s bol zrušený.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Chyba pri inicializácii certifikátu X509: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Certifikát nenájdený\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Chyba pri analýze certifikátu: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Certifikát ešte nebol aktivovaný\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Certifikátu vypršala platnosť\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "Majiteľ certifikátu sa nezhoduje s názvom hostiteľa %s\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Neznámy hostiteľ"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Dočasné zlyhanie pri prevode názvu"

#: src/host.c:364
msgid "Unknown error"
msgstr "Neznáma chyba"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Prevádzam %s na IP adresu... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "zlyhalo: Hostiteľ nemá IPv4/IPv6 adresy.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "zlyhalo: časový limit vypršal.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Nemôžem rozložiť neúplný odkaz %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Neplatné URL %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Požiadavku HTTP nebolo možné odoslať: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Bez hlavičiek, predpokladám HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Deaktivujem SSL z dôvodu výskytu chýb.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Chýba POST dátový súbor %s: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Používam existujúce spojenie s %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Zlyhalo čítanie odpovede z proxy: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Tunelovanie proxy zlyhalo: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s požiadavka odoslaná, čakám na odpoveď... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Neboli prijaté žiadne dáta.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Chyba (%s) pri čítaní hlavičiek.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Neznámy spôsob autentifikácie.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Autorizácia zlyhala.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr "Súbor %s je už tam, nebudem ho prenášať.\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Odpoveď servera má skomolený stavový riadok"

#: src/http.c:2095
msgid "(no description)"
msgstr "(bez popisu)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Presmerované na: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "neudané"

#: src/http.c:2156
msgid " [following]"
msgstr " [nasledujem]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Tento súbor je už kompletne prenesený; netreba nič robiť.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Dĺžka:  "

#: src/http.c:2263
msgid "ignored"
msgstr "ignorované"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Ukladám do: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Upozornenie: HTTP nepodporuje žolíkové znaky.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Povolený režim pavúka. Skontrolujte, či vzdialený súbor existuje.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Nemožno zapísať do %s (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Nepodarilo sa nadviazať SSL spojenie.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "CHYBA: Presmerovanie (%d) bez udanej novej adresy.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Vzdialený súbor neexistuje -- poškodený odkaz!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s CHYBA %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Hlavička Last-modified chýba -- nebudú sa používať časové značky.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Hlavička Last-modified je neplatná -- ignorujem časové značky.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Súbor na serveri nie je novší ako miestny súbor %s -- neprenášam.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Veľkosti se nezhodujú (miestny %s) -- prenášam.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Vzdialený súbor je novší, prenášam.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Vzdialený súbor existuje a mohol by obsahovať odkazy na iné zdroje -- "
"prenášam.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Vzdialený súbor, ale neobsahuje žiadne odkazy -- neprenášam.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Vzdialený súbor existuje a mohol by obsahovať ďalšie odkazy,\n"
"ale rekurzia nie je povolená -- neprenášam.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Vzdialený súbor existuje.\n"
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
"%s (%s) - zapísané na štandardný výstup %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - %s uložené [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Spojenie uzatvorené na bajte %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Chyba pri čítaní na bajte %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Chyba pri čítaní na bajte %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC ukazuje na %s a ten neexistuje.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Nemožno prečítať %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Chyba v %s na riadku %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Chyba syntaxe v %s na riadku %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Neznámy príkaz %s v %s na riadku %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Upozornenie: Systémový aj používateľov súbor wgetrc úkazujú na %s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Neplatný príkaz --execute %s\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Neplatná logická hodnota %s; použite `on' alebo `off'.\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Neplatné číslo %s.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Neplatná hodnota bajtu %s.\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Neplatný časový interval %s\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Neplatná hodnota %s.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Neplatná hlavička %s.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Neplatný typ postupu %s.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Neplatné obmedzenie %s,\n"
"    použite [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Kódovanie %s nie je platné\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: národné prostredie je nenastavené\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Konverzia z %s do %s nie je podporovaná\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Vyskytla sa nekompletná alebo neplatná viacbajtová postupnosť\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Nespracované errno %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode zlyhalo (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode zlyhalo (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s prijaté, presmerovávam výstup do %s.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s prijatých.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; vypínam protokolovanie.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Použitie: %s [VOĽBA]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Parametre povinné pri dlhých voľbách sú povinné aj pre skrátené voľby.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Spustenie:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           zobraziť verziu programu Wget a skončiť.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              vytlačiť túto pomoc.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        prejsť do pozadia po spustení.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=PRÍKAZ    vykonať príkaz štýlu .wgetrc.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Zaznamenávanie a vstupný súbor:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=SÚBOR   zaznamenať správy do SÚBORu.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=SÚBOR pridať správy do SÚBORu.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               vytlačiť množstvo ladiacich informácií.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              vytlačiť ladiaci výstup Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               potichu (bez výstupu).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             byť táravý (toto je štandard).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          vypnúť táravosť bez toho, aby bolo ticho.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=SÚBOR    stiahnuť URL, ktoré sa nachádzajú v miestnom\n"
"                             alebo externom SÚBORe.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          spracovať vstupný súbor ako HTML.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            prevedie HTML odkazy vstupného súboru (-i -F)\n"
"                             relatívne k URL.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Sťahovanie:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=ČÍSLO             nastaviť počet opakovaní na ČÍSLO (0 "
"neobmedzene).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       pokús sa znova, aj keď bolo spojenie "
"odmietnuté.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=SÚBOR   zapísať dokumenty do SÚBORu.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              preskočiť sťahovania, ktoré by prepísali\n"
"                                 existujúce súbory.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                obnoviť získavanie čiastočne stiahnutého "
"súboru.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=TYP            zvoliť typ zobrazenia postupu.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            nesťahovať opäť súbory, iba ak sú novšie\n"
"                                 ako miestne.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         vytlačiť odpoveď servera.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  nesťahovať nič.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SEKUNDY         nastaviť všetky hodnoty časových limitov na "
"SEKUNDY.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEKUNDY     nastaviť časový limit DNS vyhľadávania na "
"SEKUNDY.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SEKUNDY nastaviť časový limit spojenia na SEKUNDY.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SEKUNDY    nastaviť časový limit čítania na SEKUNDY.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SEKUNDY            počkať SEKUNDY medzi sťahovaniami.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEKÚND        počkať 1..SEKÚND medzi pokusmi o "
"sťahovanie.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             počkať od 0...2*POČKAŤ sekúnd medzi "
"sťahovaniami.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                explicitne vypnúť proxy.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=ČÍSLO             nastaviť limit sťahovania na ČÍSLO.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRESA     zviazať s ADRESOU (názov hostiteľa alebo "
"IP) na miestnom hostiteľovi.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=RÝCHLOSŤ     obmedziť rýchlosť sťahovania na RÝCHLOSŤ.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache            zakázať dočasné ukladanie DNS "
"vyhľadávania.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  obmedziť znaky v názvoch súborov na tie, "
"ktoré povoľuje OS.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ignorovať veľkosť písmen pri porovnávaní "
"súborov/adresárov.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              pripájať sa len na adresy IPv4.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              pripájať sa len na adresy IPv6.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=RODINA    pripájať sa najskôr k adresám zadanej "
"rodiny,\n"
"                                 jedno z IPv6, IPv4 alebo none.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=POUŽÍVATEĽ         nastaviť ftp a http používateľov na "
"POUŽÍVATEĽ.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --password=HESLO          nastaviť ftp a http heslo na HESLO.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            pýtať sa na heslá.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  vypnúť podporu IRI.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=KÓD      použiť KÓD ako ako miestne kódovanie pre "
"IRI.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=KÓD     použiť KÓD ako predvolené vzdialené "
"kódovanie.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Adresáre:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           nevytvárať adresáre.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        vynútiť vytváranie adresárov.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      nevytvárať adresáre hostiteľa.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     použiť názov protokolu v adresároch.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREDP   uložiť súbory do PREDP/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cur-dirs=POČET           ignorovať POČET vzdialených častí názvu "
"adresára.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP voľby:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr ""
"       --http-user=POUŽÍVATEĽ  nastaviť http používateľa na POUŽÍVATEĽ.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=HESLO   nastaviť http heslo na HESLO.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              nepovoliť dočasne uložené dáta na serveri.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NÁZOV    Zmeniť názov predvolenej stránky (štandardne\n"
"                               je to `index.html'.).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --html-extension        uložiť HTML/CSS dokumenty so správnou "
"príponou.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         ignorovať pole `Content-Length' v hlavičke.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=REŤAZEC        vložiť REŤAZEC do hlavičky.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          maximum povolených presmerovaní na stránku.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=POUŽÍVATEĽ nastaviť POUŽÍVATEĽa ako používateľa proxy.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=HESLO  nastaviť HESLO ako heslo proxy.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           zahrnúť hlavičku `Referer: URL' do HTTP "
"požiadavky.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          uložiť HTTP hlavičky do súboru.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT      identifikovať sa ako AGENT namiesto Wget/"
"VERZIA.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    zakázať HTTP keep-alive (trvalé spojenia).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            nepoužívať koláčiky.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=SÚBOR    načítať koláčiky zo SÚBORu pred sedením.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=SÚBOR    uložiť koláčiky do SÚBORu po sedení.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  načítať a uložiť koláčiky sedenia (nie "
"trvalé).\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=REŤAZEC     použiť POST metódu; poslať REŤAZEC ako dáta.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=SÚBOR       použiť POST metódu; poslať obsah SÚBORu.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   dodržať hlavičku Content-Disposition pri\n"
"                               voľbe miestnych názvov súborov\n"
"                               (EXPERIMENTÁLNE).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     poslať informáciu o základnom overení "
"totožnosti\n"
"                               HTTP bez počiatočného čakania na výzvu "
"servera.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Voľby HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     vybrať bezpečný protokol, jeden z auto, "
"SSLv2,\n"
"                                SSLv3 alebo TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   noverovať certifikát servera.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=SÚBOR      súbor certifikátu klienta.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TYP   typ certifikátu klienta, PEM alebo DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=SÚBOR      súbor súkromného kľúča.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TYP   typ súkromného kľúča, PEM alebo DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=SÚBOR   súbor s balíkom CA.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=ADR       adresár, kde je uložený hašovaný zoznam CA.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=SÚBOR      súbor s náhodnými dátami, pre spustenie SSL "
"PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=SÚBOR         súbor s pomenovaním EGD zásuvky s náhodnými "
"dátami.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP voľby:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             Použiť formát Stream_LF pre všetky binárne "
"súbory FTP.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""
"       --ftp-user=POUŽÍVATEĽ   nastaviť ftp používateľa na POUŽÍVATEĽ.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=HESLO    nastaviť ftp heslo na HESLO.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     neodstraňovať súbory `.listing'.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               pri FTP vypnúť používanie divokých znakov v "
"názvoch súborov.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp        zakázať \"pasívny\" režim prenosu.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         pri rekurzii získať spojené súbory (nie "
"adresáre).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekurzívne sťahovanie:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          nastaviť rekurzívne sťahovanie.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=ČÍSLO        maximálna hĺbka rekurzie (inf alebo 0 pre "
"nekonečno).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       odstrániť miestne súbory po ich stiahnutí.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      zmeniť odkazy v stiahnutých HTML a CSS tak, aby "
"ukazovaly na miestne súbory.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   pred konverziou súboru X, zazálohovať ho ako "
"X_orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   pred konverziou súboru X, zazálohovať ho ako X."
"orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             skratka pre -N -r -l inf --no-remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    získaž všetky obrázky, atď. potrebné pre "
"zobrazenie HTML stránky.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    zapnúť striktné (SGML) spracovávanie HTML "
"komentárov.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Rekurzívne akceptovanie/odmietnutie:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=ZOZNAM             čiarkou oddelený zoznam akceptovaných "
"prípon.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=ZOZNAM             čiarkou oddelený zoznam odmietnutých "
"prípon.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=ZOZNAM            čiarkou oddelený zoznam akceptovaných "
"domén.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=ZOZNAM    čiarkou oddelený zoznam odmietnutých "
"domén.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                nasledovať FTP odkazy z HTML dokumentov.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=ZOZNAM        čiarkou oddelený zoznam nasledovaných "
"HTML značiek.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=ZOZNAM        čiarkou oddelený zoznam ignorovaných HTML "
"značiek.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                prejsť na cudzích hostiteľov pri "
"rekurzii.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  nasledovať len relatívne odkazy.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=ZOZNAM zoznam povolených adresárov.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=ZOZNAM zoznam vynechaných adresárov.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""
"  -np, --no-parent                 nevystupovať do rodičovského adresára.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr ""
"Správy o chybách a návrhy na vylepšenie zasielajte na adresu\n"
"<bug-wget@gnu.org> (iba anglicky).\n"
"Komentáre k slovenskému prekladu zasielajte na adresu <sk-i18n@lists.linux."
"sk>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, program pre neinteraktívne sťahovanie súborov.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Heslo pre používateľa %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Heslo: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Národné prostredie: "

#: src/main.c:782
msgid "Compile: "
msgstr "Kompilácia: "

#: src/main.c:783
msgid "Link: "
msgstr "Odkaz: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s zostavený na VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s zostavený na %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (prostredie)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (používateľ)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (systém)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Autorské práva © 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Licencia GPLv3+: GNU GPL verzia 3 alebo novšia\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Toto je slobodný softvér: môžete ho ľubovoľne meniť a distribuovať.\n"
"BEZ ZÁRUKY v rozsahu povolenom zákonom.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Pôvodným autorom tohoto programu je Hrvoje Nikšić <hniksic@xemacs.com>\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Momentálne spravovuje Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Hlásenia o chybách a otázky zasielajte, prosím, na adresu\n"
"<bug-wget@gnu.org> (iba anglicky).\n"
"Komentáre k slovenskému prekladu zasielajte na adresu <sk-i18n@lists.linux."
"sk>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Príkaz `%s --help' vypíše viac volieb.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: neprípustná voľba -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Nie je možné byť uhovorený a byť ticho zároveň.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Nie je možné používať časové značky a nemazať pritom staré súbory.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Nemožno zadať naraz --inet4-only aj --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Nemožno zadať naraz -k aj -O ak sú zadané viaceré URL, alebo v kombinácii\n"
"s -p alebo -r. Podrobnosti nájdete v príručke.\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"UPOZORNENIE: kombinácia -O s -r alebo -p bude znamenať, že celý stiahnutý\n"
"obsah bude umiestnený do jedného vami zadaného súboru.\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"UPOZORNENIE: označovanie časovou značkou nerobí nič, ak je kombinované s -"
"O.\n"
"Podrobnosti nájdete v návode.\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Súbor `%s' je už tam, nebudem ho prenášať.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Nemožno zadať naraz --ask-password aj --password.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: chýba URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Táto verzia nemá podporu pre IRI\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"UPOZORNENIE: Nemožno znova otvoriť štandardný vstup v binárnom režime;\n"
"             stiahnutý súbor môž obsahovať nevhodné ukončenia riadkov.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "V %s neboli nájdené URL.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"UKONČENÉ --%s--\n"
"Stiahnutých: %d súborov, %s za %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Limit objemu stiahnutych dát %s PREKROČENÝ!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Pokračujem v behu na pozadí.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Pokračujem v behu na pozadí, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "Výstup bude zapísaný do %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Nemôžem nájsť použiteľný ovládač soketov.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: upozornenie: token %s je uvedený pred akýmkoľvek názvom počítača\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: neznámy token \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Použitie: %s NETRC [NÁZOV_POČÍTAČA]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: volanie `stat %s' skončilo s chybou: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "UPOZORNENIE: používané slabé spúšťacie zrnko pre náhodné čísla.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Nemôžem inicializovať PRNG; zvážte použitie --random-file.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: nie je možné overiť certifikát pre %s, vydaný %s:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Nie je možné miestne overiť autoritu vydavateľa.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Vyskytol sa certifikát podpísaný samým sebou.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Vydaný certifikát je ešte neplatný.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Vydanému certifikátu vypršala platnosť.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: bežný názov %s v certifikáte sa nezhoduje s požadovaným názvom hostiteľa "
"%s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: bežný názov v certifikáte je neplatný (obsahuje znak NUL).\n"
"To môže byť znamením toho, že hostiteľ nie je tým, za koho sa vydáva\n"
"(to znamená, nie je to reálne %s).\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr "Na nie bezpečné pripojenie k %s použite `--no-check-certificate'.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ preskakujem %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Neplatná bodková špecifikácia %s; ponechávam nezmenené.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  odh %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   za "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Nepodarilo sa získať frekvenciu hodín reálneho času: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Odstraňujem %s, pretože by mal byť odmietnutý.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Nepodarilo sa otvoriť %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Načítavam robots.txt. Chybové hlásenia ignorujte, prosím.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Chyba pri analýze proxy URL %s: %s\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Chyba v proxy URL %s: Musí byť HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Prekročený limit %d presmerovaní.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Vzdávam to.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Skúšam znova.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Neboli nájdené poškodené odkazy.\n"
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
"Nájdených %d poškodených odkazov.\n"
"\n"
msgstr[1] ""
"Nájdený %d poškodený odkaz.\n"
"\n"
msgstr[2] ""
"Nájdené %d poškodené odkazy.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Bez chyby"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Nepodporovaná schéma %s"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Chýba schémy %s"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Neplatný názov hostiteľa"

#: src/url.c:641
msgid "Bad port number"
msgstr "Zlé číslo portu"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Neplatné meno používateľa"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Neukončená číselná adresa pre IPv6"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6 adresy nie sú podporované"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Neplatná číselná adresa IPv6"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "Podpora pre HTTPS nie je zakompilovaná"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Zlyhalo vyžiadanie dostatočnej pamäte; pamäť je vyčerpaná.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Zlyhalo vyžiadanie %ld bajtov; pamäť je vyčerpaná.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""
"%s: aprintf: pamäť na text je príliš veľká (%ld bajtov), predčasne "
"ukončujem.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Pokračujem v behu na pozadí, pid %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Nebolo možné odstrániť symbolický odkaz %s: %s\n"
