# Czech translations for GNU wget
# Copyright (C) 1998, 2000, 2001 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Jan Prikryl <prikryl@acm.org>, 1998, 2000, 2001
# Petr Pisar <petr.pisar@atlas.cz>, 2007, 2008, 2009
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-09 23:12+0200\n"
"Last-Translator: Petr Pisar <petr.pisar@atlas.cz>\n"
"Language-Team: Czech <translation-team-cs@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8-bit\n"
"Plural-Forms: nplurals=3; plural=(n==1) ? 0 : (n>=2 && n<=4) ? 1 : 2;\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Neznámá chyba systému"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: přepínač „%s“ není jednoznačný\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: přepínač „--%s“ nemá argument\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: přepínač „%c%s“ nemá argument\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: přepínač „%s“ vyžaduje argument\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: neznámý přepínač „--%s“\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: neznámý přepínač „%c%s“\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: nepřípustný přepínač – %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: chybný přepínač – %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: přepínač vyžaduje argument – %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: přepínač „-W %s“ není jednoznačný\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: přepínač „-W %s“ nemá argument\n"

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
msgstr "paměť vyčerpána"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: adresu pro přilepení %s nelze přeložit, vypínám přilepování (bind(2)).\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Navazuje se spojení s %s|%s|:%d… "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Navazuje se spojení s %s:%d… "

#: src/connect.c:358
msgid "connected.\n"
msgstr "spojeno.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "nezdařilo se: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: adresu počítače %s nelze přeložit\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d souborů převedeno za %s sekund.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Převádí se %s… "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "nic není potřeba převádět.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Nelze převést odkazy v %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "%s nebylo možné smazat: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Nelze zálohovat %s jako %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Syntaktická chyba v hlavičce Set-Cookie: %s na pozici %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Cookie přišedši z %s se pokusila nastavit doménu na %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Soubor s cookie %s nelze otevřít: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Při zápisu do %s nastala chyba: %s.\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Při uzavírání %s nastala chyba: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Nepodporovaný typ výpisu, použije se Unixový parser.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Obsah /%s na %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "čas neznámý        "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Soubor      "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Adresář     "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Sym. odkaz  "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Neznámý typ "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bajtů)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Délka: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) zbývá"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s zbývá"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (není směrodatné)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Probíhá přihlašování jako %s… "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr ""
"Řídicí spojení bude ukončeno, protože server odpověděl chybovým hlášením.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Úvodní odpověď serveru je chybná.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Řídicí spojení bude ukončeno, protože nelze zapsat data.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Server odmítá přihlášení.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Chyba při přihlášení.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Přihlášeno!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr ""
"Nelze zjistit typ vzdáleného operačního systému, protože server odpověděl "
"chybovým hlášením.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "hotovo.  "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "hotovo.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr ""
"Řídicí spojení bude ukončeno, protože je požadován neznámý typ přenosu „%"
"c“.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "hotovo."

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD není potřeba.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Adresář %s neexistuje.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD není potřeba.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Nelze spustit pasivní přenos dat.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Odpověď na PASV není pochopitelná.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "s %s na portu %d se nelze spojit: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Chyba při přilepování (bind) (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Neplatný PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"Příkaz REST selhal, přenos začne od začátku souboru.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Soubor %s existuje.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Soubor %s neexistuje.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Soubor %s neexistuje.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Soubor či adresář %s neexistuje.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s se objevil.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, řídicí spojení bude ukončeno.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) – Datové spojení: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Řídicí spojení bylo ukončeno.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Přenos dat byl předčasně ukončen.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Soubor %s je již přítomen, nebude přenášen.\n"

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
"%s (%s) – zapsáno na standardní výstup %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) – %s uložen [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Maže se %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Seznam souborů bude dočasně uložen v %s.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "Soubor %s byl odstraněn.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Hloubka rekurze %d překročila maximální hloubku %d.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Vzdálený soubor není novější než lokální soubor %s, a není jej třeba "
"stahovat.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Vzdálený soubor je novější než lokální soubor %s, a je jej třeba stáhnout.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Velikosti se neshodují (lokální %s), stahuji.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Přeskakuje se symbolický odkaz, neboť název odkazu není platný.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Korektní symbolický odkaz %s -> %s již existuje.\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Vytváří se symbolický odkaz %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr ""
"Symbolické odkazy nejsou podporovány, symbolický odkaz %s bude vynechán.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Adresář %s bude vynechán.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: neznámý/nepodporovaný typ souboru.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: časové razítko souboru je porušené.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Podadresáře se nebudou přenášet, protože již bylo dosaženo hloubky %d "
"(maximum je %d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr ""
"Do adresáře %s se nesestoupí, protože tento adresář se buď má vynechat, nebo "
"nebyl zadán k procházení.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "%s se zamítá.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Při porovnávání %s s %s došlo k chybě: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Vzorku %s nic neodpovídá.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Výpis adresáře v HTML formátu byl zapsán do %s [%s].\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Výpis adresáře v HTML formátu byl zapsán do %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "CHYBA"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "VAROVÁNÍ"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s nepředložil žádný certifikát.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Certifikát %s není důvěryhodný.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: Certifikát %s nemá známého vydavatele.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: Certifikát %s byl odvolán.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Chyba při inicializaci X509 certifikátu: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Žádný certifikát nenalezen\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Chyba při rozebírání certifikátu: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Certifikát ještě nenabyl platnosti.\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Certifikátu uplynula doba platnosti\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "Jméno vlastníka certifikátu se neshoduje se jménem počítače %s\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Neznámé jméno počítače"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Dočasná chyba při překladu jména"

#: src/host.c:364
msgid "Unknown error"
msgstr "Neznámá chyba"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Překládám %s… "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "selhal: Pro dané jméno neexistuje žádná IPv4/IPv6 adresa.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "selhal: vypršel časový limit.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Neúplný odkaz %s nelze vyhodnotit.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Neplatné URL %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Nebylo možné odeslat HTTP požadavek: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Chybí hlavičky, předpokládám HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Vypínám SSL kvůli chybám, které se vyskytly.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Soubor %s s daty pro POST chybí: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Využívám existující spojení s %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Chyba při čtení odpovědi od proxy: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Tunelování skrz proxy se nezdařilo: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s požadavek odeslán, program čeká na odpověď… "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Nepřišla žádná data.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Chyba (%s) při čtení hlaviček.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Server požaduje neznámý způsob autentizace.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Autorizace selhala.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Soubor %s je již přítomen, nebude přenášen.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Odpověď serveru má zkomolený stavový řádek"

#: src/http.c:2095
msgid "(no description)"
msgstr "(žádný popis)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Přesměrováno na: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "neudáno"

#: src/http.c:2156
msgid " [following]"
msgstr " [následuji]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Soubor je již plně přenesen, nebude se nic dělat.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Délka: "

#: src/http.c:2263
msgid "ignored"
msgstr "je ignorována"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Ukládám do: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Varování: HTTP nepodporuje žolíkové znaky.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Aktivován režim pavouka. Kontroluje, zda vzdálený soubor existuje.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Nelze zapsat do %s (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Nebylo možné navázat SSL spojení.\n"

# , c-format
#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "CHYBA: Přesměrování (%d) bez udané nové adresy.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Vzdálený soubor neexistuje – slepý odkaz!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s CHYBA %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr ""
"Nelze použít časová razítka, protože v odpovědi serveru \n"
"schází hlavička „Last-modified“.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"Časové razítko souboru bude ignorováno, protože hlavička \n"
"„Last-modified“ obsahuje neplatné údaje.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Soubor na serveru není novější než lokální soubor %s – nebude přenášen.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Velikosti se neshodují (lokální %s), stahuji.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Lokální soubor je starší a vzdálený soubor se proto bude přenášet.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Vzdálený soubor existuje a mohl by obsahovat odkazy na další zdroje – "
"stahuji.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Vzdálený soubor existuje, ale neobsahuje žádné odkazy – nestahuji.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Vzdálený soubor existuje a možná obsahuje další odkazy,\n"
"avšak rekurze je vypnuta – nestahuji.\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Vzdálený soubor existuje.\n"
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
"%s (%s) – zapsáno na standardní výstup %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) – %s uloženo [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) – Spojení ukončeno na bajtu %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) – Chyba při čtení dat na bajtu %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) – Chyba při čtení dat na bajtu %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC ukazuje na %s, který ale neexistuje.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Nelze přečíst %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Chyba v %s na řádku %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Syntaktická chyba v %s na řádku %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Neznámý příkaz %s v %s na řádku %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Varování: Globální i uživatelský wgetrc jsou shodně uloženy v %s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Neplatný příkaz --execute %s\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr ""
"%s: %s: Neplatná pravdivostní hodnota %s, zadejte „on“ (zapnuto) nebo "
"„off“ (vypnuto).\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Neplatné číslo %s\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Neplatná hodnota bajtu %s\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Neplatná časová perioda %s\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Neplatná hodnota %s.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Neplatná hlavička %s\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Neplatný druh indikace postupu %s.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Neplatná hodnota omezení %s,\n"
"    použijte [unix|windows],[lowercase|uppercase],[nocontrol][ascii]\n"
"    (význam česky:          [malá|velká písmena], [neřídicí].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Kódování %s není platné\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: národní prostředí není nastaveno\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Převod z %s do %s není podporován\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Zaznamenána neúplná nebo neplatná vícebajtová posloupnost\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Neobsloužená chyba č. %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode selhala (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode selhala (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"Obdržen signál %s, výstup přesměrován do %s.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"obdržen signál %s.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s: vypínám protokolování\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Použití: %s [PŘEPÍNAČ]… [URL]…\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Argumenty povinné u dlouhých přepínačů jsou povinné i pro jejich krátké "
"verze.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Rozjezd:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           zobrazí verzi Wgetu a skončí.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              vytiskne tuto nápovědu.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        po spuštění přejde do pozadí.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=PŘÍKAZ    provede příkaz jako z „.wgetrc“.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Protokolový a vstupní soubor:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=SOUBOR  protokol zapisuje do SOUBORU.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr ""
"  -a,  --append-output=SOUBOR\n"
"                             zprávy připojuje k SOUBORU.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               tiskne mnoho ladicích informací.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              tiskne ladicí informace z Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               tichý režim (žádný výstup).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             bude upovídaný (implicitní chování).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          vypne upovídanost, aniž by byl zcela zticha.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=SOUBOR   stáhne URL uvedená v místním nebo "
"vnějším SOUBORU.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          vstupní soubor považuje za HTML soubor.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            vyhodnocuje odkazy ve vstupním HTML (-i -F)\n"
"                             relativně vzhledem k URL.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Stahování:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=POČET             nastaví POČET opakování (0 znamená "
"neomezeno).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       opakuje, i když spojení bude odmítnuto.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=SOUBOR  dokumenty zapisuje do SOUBORU.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              vynechá stahování, která by přepsala již\n"
"                                 existující soubory.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                obnoví stahování částečně staženého "
"souboru.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=DRUH           vybere druh indikátoru postupu.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            nesnaží se znovu získat soubory, jež mají\n"
"                                 mladší místní kopii.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         tiskne odpověď serveru.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  nestahuje nic.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SEKUNDY         nastaví všechny časové limity\n"
"                                 na SEKUND.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEKUNDY     nastaví limit pro hledání v DNS\n"
"                                 na SEKUND.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SEKUNDY\n"
"                                 nastaví limit pro navázání spojení\n"
"                                 na SEKUND.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SEKUNDY    nastaví limit pro čtení na SEKUND\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SEKUNDY            čeká SEKUND mezi každým stažením.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEKUNDY       čeká 1 až SEKUND mezi opakováním stažení.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             čeká od 0 do 2*WAIT sekund mezi staženími.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                explicitně vypne proxy.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=POČET             nastaví kvótu na POČET stažení.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRESA     přilepí se (bind) na ADRESU (jméno nebo "
"IP)\n"
"                                 na tomto stroji.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=RYCHLOST     omezí rychlost stahování na RYCHLOST.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            zakáže kešování DNS odpovědí.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  omezí znaky ve jménech souborů na ty,\n"
"                                 které dovoluje vybraný operační systém "
"(OS).\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             při porovnávání jmen souborů/adresářů\n"
"                                 nebere zřetel na velikost písmen.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              připojuje se jen na IPv4 adresy.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              připojuje se jen na IPv6 adresy.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=RODINA    připojuje se nejprve na adresu zadané\n"
"                                 RODINY („IPv6“, „IPv4“ nebo "
"„none“ (žádná)).\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=UŽIVATEL           nastaví přihlašovací jméno uživatele\n"
"                                 pro FTP i pro HTTP na UŽIVATELE.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=HESLO          nastaví heslo pro FTP i pro HTTP na HESLO.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            ptá se na heslo.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  vypne podporu IRI.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=KÓD      jako místní kódování IRI použije KÓD.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=KÓD     jako implicitní vzdálené kódování IRI\n"
"                                 použije KÓD.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Adresáře:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           nevytváří adresáře.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        vynutí vytváření adresářů.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""
"  -nH, --no-host-directories      nevytváří adresáře se jmény počítačů.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     použije jméno protokolu v adresářích.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=CESTA   uloží soubory do CESTA/…\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=POČET           ignoruje POČET vzdálených adresářových\n"
"                                  komponent.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Přepínače pro HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr ""
"       --http-user=UŽIVATEL    nastaví přihlašovací jméno uživatele\n"
"                               pro HTTP na UŽIVATELE.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=HESLO   nastaví heslo pro HTTP na HESLO.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr "       --no-cache              zakáže kešování na straně serveru.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NÁZEV    Změní výchozí název stránky (běžně\n"
"                               to je „index.html“.).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension      HTML/CSS dokumenty ukládá s patřičnou "
"příponou.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr "       --ignore-length         ignoruje hlavičku „Content-Length“.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=ŘETĚZEC        ke hlavičkám přidá ŘETĚZEC.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          maximum přesměrování povolených\n"
"                               na stránku.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=UŽIVATEL   nastaví UŽIVATELE jako přihlašovací jméno\n"
"                               uživatele pro proxy.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=HESLO  nastaví HESLO jako heslo pro proxy.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           zahrne hlavičku „Referer: URL“ do\n"
"                               HTTP požadavku.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          hlavičky HTTP uloží do souboru.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT      identifikuje se jako AGENT místo Wget/VERZE.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    zakáže HTTP keep-alive (trvalá spojení).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            nepoužívá cookies.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr "       --load-cookies=SOUBOR   před relací načte cookies ze SOUBORU.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=SOUBOR   po relaci uloží cookies do SOUBORU.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  načte a uloží cookies relace (ne-trvalé).\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=ŘETĚZEC     použije metodu POST, jako data pošle "
"ŘETĚZEC.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=SOUBOR      použije metodu POST, pošle obsah SOUBORU.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   při volbě jména místního souboru vezme "
"v úvahu\n"
"                               hlavičku Content-Disposition (POKUSNÉ).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     posílá údaje Basic HTTP autentizace, aniž by\n"
"                               čekal na výzvu od serveru.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Přepínače HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PROT   vybere bezpečnostní protokol, jeden z "
"„auto“,\n"
"                                „SSLv2“, „SSLv3“ a „TLSv1“.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   neověřuje certifikát serveru.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=SOUBOR     soubor s certifikátem klienta.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=DRUH  druh certifikátu klienta: „PEM“ nebo „DER“.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=SOUBOR     soubor se soukromým klíčem.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""
"       --private-key-type=DRUH  druh soukromého klíče: „PEM“ nebo „DER“.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr ""
"       --ca-certificate=SOUBOR  soubor se sbírkou certifikačních autorit.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=ADRESÁŘ   adresář obsahující hashe jmen\n"
"                                certifikačních autorit.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=SOUBOR     soubor s náhodnými daty pro zdroj SSL PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=SOUBOR        soubor jmenující soket EGD s náhodnými "
"daty.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Přepínače FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             Použije formát Stream_LF pro všechny binární\n"
"                               FTP soubory.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""
"       --ftp-user=UŽIVATEL     nastaví přihlašovací jméno na UŽIVATELE.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=HESLO    nastaví heslo pro FTP na HESLO.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     neodstraňuje soubory „.listing“.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               neexpanduje jména FTP souborů.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp        zakáže pasivní režim přenosu.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         při rekurzi stáhne soubory (adresáře ne),\n"
"                               na které odkazuje symbolický odkaz.\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekurzivní stahování:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          zapne rekurzivní stahování.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=POČET        maximální hloubka rekurze\n"
"                            („inf“ nebo „0“ pro nekonečno).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       smaže soubory lokálně po té, co dokončí "
"stahování.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      učiní odkazy v HTML nebo CSS odkazující na\n"
"                            místní soubory.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   před konverzí souboru X jej zazálohuje jako "
"X_orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   před konverzí souboru X jej zazálohuje jako X."
"orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             zkratka pro -N -r -l inf --no-remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    získá všechny obrázky apod. potřebné pro\n"
"                            zobrazení HTML stránky.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    zapne přísné zacházení s HTML komentáři podle "
"SGML.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Rekurzivní povolení/zakázání:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=SEZNAM             čárkou oddělený seznam povolených "
"přípon.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=SEZNAM             čárkou oddělený seznam zakázaných "
"přípon.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=SEZNAM            čárkou oddělený seznam povolených domén.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=SEZNAM    čárkou oddělený seznam zakázaných domén.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                následuje FTP odkazy z HTML dokumentů.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=SEZNAM        čárkou oddělený seznam HTML značek "
"určených\n"
"                                   k následování.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=SEZNAM        čárkou oddělený seznam ignorovaných\n"
"                                   HTML značek.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                při rekurzi přechází i na jiné počítače.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  následuje jen relativní odkazy.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""
"  -I,  --include-directories=SEZNAM\n"
"                                   seznam povolených adresářů.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""
"  -X,  --exclude-directories=SEZNAM\n"
"                                   seznam zakázaných adresářů.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 nestoupá do nadřízeného adresáře.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr ""
"Zprávy o chybách a návrhy na vylepšení programu zasílejte na adresu\n"
"<bug-wget@gnu.org> (pouze anglicky). Komentáře k českému překladu\n"
"zasílejte na adresu <translation-team-cs@lists.sourceforge.net>.\n"

# , c-format
#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, program pro neinteraktivní stahování souborů.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Heslo uživatele %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Heslo: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc:"

#: src/main.c:781
msgid "Locale: "
msgstr "Národní prostředí: "

#: src/main.c:782
msgid "Compile: "
msgstr "Přeloženo: "

#: src/main.c:783
msgid "Link: "
msgstr "Odkaz: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s sestaven na systému VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s sestaven na systému %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (prostředí)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (uživatelský)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (globální)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Copyright © 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Licence GPLv3+: GNU GPL verze 3 nebo vyšší\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Toto je volné programové vybavení: máte právo jej měnit a dále šířit.\n"
"Není poskytována ŽÁDNÁ ZÁRUKA, jak jen zákon dovoluje.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Původním autorem tohoto programu je Hrvoje Nikšić <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Nyní jej spravuje Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Chybová hlášení a dotazy zasílejte na adresu <bug-wget@gnu.org> (pouze\n"
"anglicky). Komentáře k českému překladu zasílejte na adresu\n"
"<translation-team-cs@lists.sourceforge.net>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Příkaz „%s --help“ vypíše další přepínače.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: nepřípustný přepínač – „-n%c“\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Program nemůže být upovídaný a zticha zároveň.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Nelze používat časová razítka a nemazat přitom staré soubory.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "--inet4-only a --inet6-only nelze zadat najednou.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Přepínače -k a -O  nelze spolu použít, je-li zadáno více URL nebo\n"
"zadán přepínač -p nebo -r. Vysvětlení naleznete v manuálu.\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"VAROVÁNÍ: kombinace -O s -r nebo -p způsobí, že veškerý stažený obsah bude\n"
"uložen do jediného souboru, který jste určili.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"VAROVÁNÍ: porovnávání času spolu s -O nic nedělá. Vysvětlení naleznete\n"
"v manuálu.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Soubor „%s“ je již zde, nebudu jej přenášet.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "--ask-password a --password nelze zadat najednou.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: chybí URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Tato verze neobsahuje podporu pro IRI\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"POZOR: Standardní výstup nelze znovu otevřít v binárním režimu.\n"
"       stažené soubory mohou obsahovat nevhodné konce řádků.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "V souboru „%s“ nebyla nalezena žádná URL.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"KONEC --%s--\n"
"Staženo: %d souborů, %s za %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Kvóta %s na stahování PŘEKROČENA!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Program pokračuje v běhu na pozadí.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Program pokračuje v běhu na pozadí, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "Výstup bude zapsán do %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Nelze najít použitelný ovladač soketů.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: varování: token %s se nachází ještě před jakýmkoliv názvem "
"počítače\n"

# TODO: msgid bug: explicit quotation
#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: neznámý token „%s“\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Použití: %s NETRC [NÁZEV POČÍTAČE]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: volání „stat %s“ skončilo chybou: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "VAROVÁNÍ: používám slabý zdroj náhodných čísel.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "PRNG nelze zinicializovat, zvažte použití přepínače --random-file.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: certifikát pro %s vydaný %s nelze ověřit:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Autoritu vydavatele nelze lokálně ověřit.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Nalezen certifikát podepsaný sám sebou.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Vydaný certifikát ještě nenabyl platnosti.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Vydanému certifikátu uplynula doba platnosti.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: obecné jméno (CN) certifikátu %s se neshoduje s požadovaným jménem "
"počítače %s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: obecné jméno (CN) certifikátu není platné (obsahuje znak NUL).\n"
"To může ukazovat na to, že stroj není tím, za koho se vydává (to jest\n"
"ve skutečnosti to není %s).\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr "Pro nezabezpečené spojení s %s použijte „--no-check-certificate“.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ přeskakuje se %s K ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "%s není platné určení způsobu indikace, ponecháno nezměněno.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr " zbývá %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   za "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Frekvenci hodin REÁLNÉHO ČASU nelze určit: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Maže se %s, protože tento soubor není požadován.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "%s nelze otevřít: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Načítá se „robots.txt“. Chybová hlášení ignorujte, prosím.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Chyba rozebírání URL proxy serveru %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Chyba v URL Proxy %s: Musí být HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Překročeno %d přesměrování.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Ani poslední pokus nebyl úspěšný.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Zkusí se to znovu.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Nenalezeny žádné slepé odkazy.\n"
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
"Nalezen %d slepý odkaz.\n"
"\n"
msgstr[1] ""
"Nalezeny %d slepé odkazy.\n"
"\n"
msgstr[2] ""
"Nalezeno %d slepých odkazů.\n"
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
msgstr "Nepodporované schéma %s"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Chybí schéma"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Neplatné jméno stroje"

#: src/url.c:641
msgid "Bad port number"
msgstr "Chybné číslo portu"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Neplatné jméno uživatele"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Neukončená číselní IPv6 adresa"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6 adresy nejsou podporovány"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Chybná číselná IPv6 adresa"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "Podpora HTTPS nebyla zakompilována do programu"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Nezdařilo se alokovat dostatek paměti, paměť vyčerpána.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: alokace %ld bajtů selhala, paměť vyčerpána.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""
"%s: aprintf: vyrovnávací paměť pro text je příliš velká (%ld bajtů), "
"přerušeno.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Program pokračuje v běhu na pozadí. pid %d\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Nebylo možné odstranit symbolický odkaz %s: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            předřadí URL relativním odkazům z -F -i "
#~ "souboru.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  zachová přístupová práva ze serveru.\n"

#~ msgid ""
#~ "Cannot specify -N if -O is given. See the manual for details.\n"
#~ "\n"
#~ msgstr ""
#~ "Je-li zadáno -O, nelze současně použít -N. Vysvětlení naleznete "
#~ "v manuálu\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                   explicitně zapne proxy.\n"

#~ msgid ""
#~ "       --no-content-disposition  don't honor Content-Disposition header.\n"
#~ msgstr ""
#~ "       --no-content-disposition  nebere v úvahu hlavičku Content-"
#~ "Disposition.\n"

#~ msgid "%s referred by:\n"
#~ msgstr "%s odkázán z:\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Chyba v hlavičce Set-Cookie v poli „%s“"

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: Chybná rozšířená pravdivostní hodnota „%s“;\n"
#~ "zadejte jeden z: „on“ (zapnuto), „off“ (vypnuto), „always“ (vždy) nebo\n"
#~ "„never“ (nikdy).\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Tento program je šířen v naději, že bude užitečný, avšak\n"
#~ "BEZ JAKÉKOLI ZÁRUKY; neposkytují se ani odvozené záruky PRODEJNOSTI \n"
#~ "anebo VHODNOSTI PRO URČITÝ ÚČEL. Další podrobnosti hledejte \n"
#~ "v Obecné veřejné licenci GNU (GNU General Public License).\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s: Chyba ověřování certifikátu pro %s: %s\n"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Syntaktická chyba v hlavičce Set-Cookie na znaku „%c“.\n"

# , c-format
#~ msgid "Connection to %s:%hu refused.\n"
#~ msgstr "Spojení s %s:%hu odmítnuto.\n"

# , c-format
#~ msgid "Will try connecting to %s:%hu.\n"
#~ msgstr "Program se pokusí spojit s %s:%hu.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "Příkaz REST selhal, „%s“ nebude zkráceno.\n"

# , c-format
#~ msgid " [%s to go]"
#~ msgstr " [%s zbývá]"

#~ msgid "Host not found"
#~ msgstr "Počítač nebyl nalezen"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "Nebylo možné nastavit SSL kontext\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "SSL certifikáty nebylo možné ze souboru „%s“ načíst.\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Program se pokusí pokračovat bez zadaného certifikátu.\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr ""
#~ "Ze souboru „%s“ nebylo možné klíč k certifikátu načíst.\n"
#~ "\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Hlavička není úplná.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Na přerušené stahování tohoto souboru nelze navázat. Bylo ovšem zadáno `-"
#~ "c'.\n"
#~ "Existující soubor „%s“ tedy raději nebude zkrácen.\n"
#~ "\n"

# , c-format
#~ msgid " (%s to go)"
#~ msgstr " (%s zbývá)"

# , c-format
#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "Soubor „%s“ je již zde a nebude se znovu přenášet.\n"

# , c-format
#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - „%s“ uloženo [%ld/%ld])\n"
#~ "\n"

# , c-format
#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
#~ msgstr "%s (%s) - Spojení ukončeno na bajtu %ld/%ld. "

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: „%s“ nelze převést na IP adresu.\n"

# , c-format
#~ msgid "%s: %s: Please specify always, on, off, or never.\n"
#~ msgstr ""
#~ "%s: %s: Zadejte prosím „always“ (vždy), „on“ (zapnuto), „off“ (vypnuto), "
#~ "nebo „never“ (nikdy).\n"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Začátek:\n"
#~ "  -V,  --version           vypíše informaci o verzi programu Wget a "
#~ "skončí\n"
#~ "  -h,  --help              vypíše tuto nápovědu\n"
#~ "  -b,  --background        po spuštění pokračuje program v běhu na "
#~ "pozadí\n"
#~ "  -e,  --execute=PŘÍKAZ    provede příkaz zadaný ve stylu „.wgetrc“\n"
#~ "\n"

# , fuzzy
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
#~ "\n"
#~ msgstr ""
#~ "Protokolování a vstupní soubor:\n"
#~ "  -o,  --output-file=SOUBOR   název souboru s protokolem\n"
#~ "  -a,  --append-output=SOUBOR protokol se připojí na konec tohoto "
#~ "souboru\n"
#~ "  -d,  --debug                vypisuje ladicí informace\n"
#~ "  -q,  --quiet                nevypisuje vůbec nic\n"
#~ "  -v,  --verbose              bude upovídaný (implicitně zapnuto)\n"
#~ "  -nv, --non-verbose          vypisuje pouze nejdůležitější informace\n"
#~ "  -i,  --input-file=SOUBOR    výchozí URL odkazy načte z tohoto souboru\n"
#~ "  -F,  --force-html           soubor s URL je v HTML formátu\n"
#~ "  -B,  --base=URL             přidá URL na začátky relat. odkazů při '-F -"
#~ "i'\n"
#~ "       --sslcertfile=SOUBOR   volitelný certifikát klienta\n"
#~ "       --sslcertkey=SOUBOR    volitelný soubor klíčů pro tento "
#~ "certifikát\n"
#~ "\n"

# , fuzzy
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
#~ "       --dot-style=STYLE        set retrieval display style.\n"
#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
#~ "local.\n"
#~ "  -S,  --server-response        print server response.\n"
#~ "       --spider                 don't download anything.\n"
#~ "  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
#~ "retrieval.\n"
#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
#~ "\n"
#~ msgstr ""
#~ "Stahování:\n"
#~ "       --bind-address=ADRESA    použij lokální rozhraní s danou adresou "
#~ "(IP nebo jméno)\n"
#~ "  -t,  --tries=ČÍSLO            počet pokusů stáhnout URL (0 "
#~ "donekonečna)\n"
#~ "  -O   --output-document=SOUBOR stažené dokumenty ukládá do tohoto "
#~ "souboru\n"
#~ "  -nc, --no-clobber             nepřepisuje existující soubory\n"
#~ "  -c,  --continue               pokračuje ve stahování částečně "
#~ "přenesených dat\n"
#~ "       --dot-style=STYL         nastaví způsob zobrazení při stahování "
#~ "dat\n"
#~ "  -N,  --timestamping           nestahuje starší soubory (zapne časová "
#~ "razítka)\n"
#~ "  -S,  --server-response        vypisuje odpovědi serveru\n"
#~ "       --spider                 nic nestahuje\n"
#~ "  -T,  --timeout=SEKUNDY        nastaví timeout při čtení na tuto "
#~ "hodnotu\n"
#~ "  -w,  --wait=POČET             před každým stahováním počká POČET "
#~ "sekund\n"
#~ "       --waitretry=POČET        čeká 1...POČET sec před novým pokusem o "
#~ "stažení\n"
#~ "  -Y,  --proxy=on/off           zapne přenos přes proxy (standardně "
#~ "„off“)\n"
#~ "  -Q,  --quota=BAJTŮ            nastaví limit objemu uložených dat\n"
#~ "\n"

# , fuzzy
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
#~ "Adresáře:\n"
#~ "  -nd  --no-directories            nevytváří adresáře\n"
#~ "  -x,  --force-directories         vždy vytváří adresáře\n"
#~ "  -nH, --no-host-directories       nevytváří adresáře s adresou serveru\n"
#~ "  -P,  --directory-prefix=PREFIX   ukládá data do PREFIX/...\n"
#~ "       --cut-dirs=POČET            nevytváří prvních POČET podadresářů\n"
#~ "\n"

# , fuzzy
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
#~ "Přepínače pro HTTP:\n"
#~ "       --http-user=UŽIVATEL  uživatelské jméno pro autorizovaný HTTP "
#~ "přenos\n"
#~ "       --http-passwd=HESLO   heslo pro autorizovaný HTTP přenos \n"
#~ "  -C,  --cache=on/off        povolí či zakáže použití vyrovnávací paměti "
#~ "na\n"
#~ "                             straně serveru (implicitně „on“)\n"
#~ "  -E,  --html-extension      uloží dokumenty typu „text/html“ s příponou ."
#~ "html\n"
#~ "       --ignore-length       ignoruje pole „Content-Length“ v hlavičce\n"
#~ "       --header=ŘETĚZEC      pošle ŘETĚZEC serveru jako součást hlaviček\n"
#~ "       --proxy-user=UŽIVATEL jméno uživatele vyžadované pro proxy přenos\n"
#~ "       --proxy-passwd=HESLO  heslo pro proxy přenos\n"
#~ "       --referer=URL         posílá v hlavičce HTTP požadavku `Referer: "
#~ "URL'\n"
#~ "  -s,  --save-headers        do stahovaného souboru uloží i hlavičky "
#~ "HTTP\n"
#~ "  -U,  --user-agent=AGENT    místo identifikace „Wget/VERZE“ posílá v "
#~ "hlavičce \n"
#~ "                             HTTP požadavku identifikační řetězec AGENT\n"
#~ "       --no-http-keep-alive  vypne HTTP keep-alive (trvalé spojení se "
#~ "serverem)\n"
#~ "       --cookies=off         nebude používat koláčky (HTTP cookies)\n"
#~ "       --load-cookies=SOUBOR před sezením načte koláčky ze souboru "
#~ "SOUBOR\n"
#~ "       --save-cookies=SOUBOR po sezení uloží koláčky do souboru SOUBOR\n"
#~ "\n"

# , fuzzy
#~ msgid ""
#~ "FTP options:\n"
#~ "  -nr, --dont-remove-listing   don't remove „.listing“ files.\n"
#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
#~ "       --retr-symlinks         when recursing, get linked-to files (not "
#~ "dirs).\n"
#~ "\n"
#~ msgstr ""
#~ "Přepínače pro FTP protokol:\n"
#~ "  -nr, --dont-remove-listing  nemaže soubory „.listing“ s obsahy "
#~ "adresářů\n"
#~ "  -g,  --glob=on/off          zapne či vypne expanzi žolíků ve jménech "
#~ "souborů\n"
#~ "       --passive-ftp          použije pasivní mód přenosu dat\n"
#~ "       --retr-symlinks        v rekurzivním módu stahuje i symbolické "
#~ "odkazy na\n"
#~ "                              soubory (nikoliv na adresáře)\n"

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
#~ "Rekurzivní stahování:\n"
#~ "  -r,  --recursive             rekurzivní stahování -- buďte opatrní!\n"
#~ "  -l,  --level=ČÍSLO           maximální hloubka rekurze (0 bez limitu)\n"
#~ "       --delete-after          po přenosu smaže stažené soubory\n"
#~ "  -k,  --convert-links         absolutní URL převede na relativní\n"
#~ "  -K,  --backup-converted      před konverzí uloží „X“ jako „X.orig“\n"
#~ "  -m,  --mirror                zapne přepínače vhodné pro zrcadlení dat \n"
#~ "  -p,  --page-requisites       stáhne vše nutné pro zobrazení HTML "
#~ "stránky\n"

# , fuzzy
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
#~ "  -nh, --no-host-lookup             don't DNS-lookup hosts.\n"
#~ "  -np, --no-parent                  don't ascend to the parent "
#~ "directory.\n"
#~ "\n"
#~ msgstr ""
#~ "Omezení při rekurzi:\n"
#~ "  -A,  --accept=SEZNAM              seznam povolených extenzí souborů\n"
#~ "  -R,  --reject=SEZNAM              seznam nepovolených extenzí souborů\n"
#~ "  -D,  --domains=SEZNAM             seznam povolených domén\n"
#~ "       --exclude-domains=SEZNAM     seznam nepovolených domén\n"
#~ "       --follow-ftp                 následuje FTP odkazy v HTML "
#~ "dokumentech\n"
#~ "       --follow-tags=LIST           seznam následovaných HTML značek \n"
#~ "  -G,  --ignore-tags=LIST           seznam ignorovaných HTML značek\n"
#~ "  -H,  --span-hosts                 načítá dokumenty i z ostatních "
#~ "serverů\n"
#~ "  -I,  --include-directories=SEZNAM seznam povolených adresářů\n"
#~ "  -L,  --relative                   následuje pouze relativní odkazy\n"
#~ "  -X,  --exclude-directories=SEZNAM seznam vyloučených adresářů\n"
#~ "  -nh, --no-host-lookup             nevyhledává adresy v DNS\n"
#~ "  -np, --no-parent                  nesestupuje do rodičovského adresáře\n"
#~ "\n"

# , c-format
#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: neplatný příkaz\n"

# , c-format
#~ msgid ""
#~ "\n"
#~ "CTRL+Break received, redirecting output to `%s'.\n"
#~ "Execution continued in background.\n"
#~ "You may stop Wget by pressing CTRL+ALT+DELETE.\n"
#~ msgstr ""
#~ "\n"
#~ "Stiskli jste CTRL+Break, výstup byl proto přesměrován do „%s“.\n"
#~ "Program pokračuje v běhu na pozadí.\n"
#~ "Wget lze zastavit stiskem CTRL+ALT+DELETE.\n"

# , c-format
#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Spouští se WinHelp %s\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Nelze najít proxy server.\n"

# , c-format
#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Není dost paměti.\n"

#~ msgid "Unknown/unsupported protocol"
#~ msgstr "Neznámý/nepodporovaný protokol"

#~ msgid "Invalid port specification"
#~ msgstr "Neplatná specifikace portu"

#~ msgid "%s: Cannot determine user-id.\n"
#~ msgstr "%s: Nelze zjistit ID uživatele.\n"

# , c-format
#~ msgid "%s: Warning: uname failed: %s\n"
#~ msgstr "%s: Varování: Volání funkce \"uname\" skončilo chybou %s\n"

#~ msgid "%s: Warning: gethostname failed\n"
#~ msgstr "%s: Varování: Volání funkce \"gethostname\" skončilo chybou\n"

#~ msgid "%s: Warning: cannot determine local IP address.\n"
#~ msgstr "%s: Varování: Nelze zjistit lokální IP adresu.\n"

#~ msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
#~ msgstr "%s: Varování: Lokální IP adresa nemá reverzní DNS záznam.\n"

#~ msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
#~ msgstr ""
#~ "%s: Varování: Zpětné vyhledání lokální adresy nenavrátilo plně \n"
#~ "kvalifikované jméno domény!\n"

# , c-format
#~ msgid "%s: Redirection to itself.\n"
#~ msgstr "%s: Přesměrování na sebe sama.\n"

# , c-format
#~ msgid "Error (%s): Link %s without a base provided.\n"
#~ msgstr "Chyba (%s): K relativnímu odkazu %s nelze najít bázový odkaz.\n"

# , c-format
#~ msgid "Error (%s): Base %s relative, without referer URL.\n"
#~ msgstr "Chyba (%s): Bázový odkaz %s nesmí být relativní.\n"

# , c-format
#~ msgid ""
#~ "Local file `%s' is more recent, not retrieving.\n"
#~ "\n"
#~ msgstr ""
#~ "Soubor „%s“ nebudu přenášet, protože lokální verze je novější.\n"
#~ "\n"
