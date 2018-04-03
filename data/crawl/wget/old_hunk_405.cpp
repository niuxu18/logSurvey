# Hungarian translation of wget
# Copyright (C) 2001, 2002, 2003, 2004, 2006, 2007, 2008, 2009 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
#
# Pal Szasz <szpal@Maria.UTCluj.Ro>, 2001-2003.
# Laszlo Dvornik <dvornik@gnome.hu>, 2004.
# Gabor Kelemen <kelemeng@gnome.hu>, 2006, 2007, 2008, 2009.
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre5\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-08-02 10:34+0200\n"
"Last-Translator: Gabor Kelemen <kelemeng@gnome.hu>\n"
"Language-Team: Hungarian <translation-team-hu@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"X-Generator: KBabel 1.11.4\n"
"Plural-Forms:  nplurals=2; plural=(n != 1);\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Ismeretlen rendszerhiba"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: a(z) „%s” kapcsoló nem egyértelmű\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: a(z) „--%s” kapcsoló nem enged meg argumentumot\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: a(z) „%c%s” kapcsoló nem enged meg argumentumot\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: a(z) „%s” kapcsolóhoz argumentum szükséges\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: a(z) „--%s” kapcsoló ismeretlen\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: a(z) „%c%s” kapcsoló ismeretlen\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: illegális kapcsoló -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: érvénytelen kapcsoló -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: a kapcsoló egy argumentumot igényel -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: a „-W %s” kapcsoló nem egyértelmű\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: a „-W %s” kapcsoló nem enged meg argumentumot\n"

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
msgstr "”"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "elfogyott a memória"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: a bind cím (%s) nem oldható fel; a bind le lesz tiltva.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Csatlakozás a következőhöz: %s[%s]:%d… "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Csatlakozás a következőhöz: %s:%d… "

#: src/connect.c:358
msgid "connected.\n"
msgstr "kapcsolódva.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "sikertelen: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: a gépcím (%s) nem oldható fel\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d fájl átalakítva %s másodperc alatt.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "%s átalakítása… "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "nincs teendő.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "A hivatkozások nem alakíthatók át a következőben: %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "%s nem törölhető: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "%s nem menthető mint %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Szintaktikai hiba a Set-Cookie-ban: %s a(z) %d pozíciónál.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr ""
"A(z) %s helyről érkező süti megkísérelte a tartományt a következőre "
"állítani: %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Nem lehet megnyitni a sütifájlt (%s): %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Hiba %s írása közben: %s.\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Hiba %s bezárásakor: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Nem támogatott listatípus, a Unix listaértelmező kerül felhasználásra.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s tartalma %s:%d-n"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "idő ismeretlen     "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Fájl        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Könyvtár    "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Link        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Nem biztos  "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bájt)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Hossz: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) van hátra"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s van hátra"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (nem hiteles)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Belépés mint %s … "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Hiba a kiszolgáló válaszában, vezérlőkapcsolat lezárása.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Hiba a kiszolgáló üdvözlésében.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Írás sikertelen, vezérlőkapcsolat bezárva.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "A kiszolgáló visszautasítja a belépést.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "A belépés helytelen.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Belépve!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Kiszolgálóhiba, a rendszer típusa nem határozható meg.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "kész.    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "kész.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Ismeretlen típus: „%c”, a vezérlőkapcsolat lezárásra kerül.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "kész.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD nem szükséges.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Nincs ilyen könyvtár: %s.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD nem szükséges.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Nem kezdeményezhető PASV átvitel.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "A PASV válasz nem dolgozható fel.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "nem lehet csatlakozni %s %d. portjához: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Hozzárendelési hiba (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Érvénytelen PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST sikertelen, kezdés elölről.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""
"A fájl (%s) létezik.\n"
"\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Nincs ilyen fájl: %s.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Nincs ilyen fájl: %s.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Nincs ilyen fájl vagy könyvtár: %s.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s létrejött.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, vezérlőkapcsolat lezárása.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) -- Adatkapcsolat: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Vezérlőkapcsolat lezárva.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Adatátvitel megszakítva.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "A fájl (%s) már megvan, nem kerül letöltésre.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(próba:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) -- szabványos kimenetre mentve %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) -- %s mentve [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "%s eltávolítása.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "%s kerül felhasználásra felsorolási átmeneti fájlként.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "%s eltávolítva.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "A(z) %d rekurziós mélység túllépte a maximális %d mélységet.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "A távoli fájl nem újabb a helyi %s fájlnál -- nem kerül letöltésre.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"A távoli fájl újabb a helyi %s fájlnál -- letöltésre kerül.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"A méretek nem egyeznek (a helyi: %s) -- letöltésre kerül.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "A szimbolikus link neve érvénytelen, kihagyás.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Már létezik a helyes %s → %s szimbolikus link\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "A(z) %s → %s szimbolikus link létrehozása\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr ""
"A szimbolikus linkek nem támogatottak, a(z) %s szimbolikus link kihagyva.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "A könyvtár (%s) kihagyása.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: ismeretlen/nem támogatott fájltípus.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: sérült időpecsét.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "A könyvtárak letöltése kihagyva, mivel a mélység %d (max %d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr ""
"A következőbe belépés kihagyva: %s, mert ki van zárva/nincs kijelölve.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "%s visszautasítása.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Hiba %s és %s illesztésekor: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Nincs találat a mintához (%s).\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "A HTML-esített index kiírva a fájlba (%s[%s]) fájlba.\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "A HTML-esített index kiírva a fájlba (%s).\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "HIBA"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "FIGYELMEZTETÉS"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s nem mutatott be tanúsítványt.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: %s tanúsítványa nem megbízható.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: %s tanúsítványának nincs ismert kibocsátója.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: %s tanúsítványát visszavonták.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Hiba az X509 tanúsítvány előkészítésekor: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Nem található tanúsítvány\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Hiba a tanúsítvány feldolgozása közben: %s.\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "A tanúsítványt még nem aktiválták.\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "A tanúsítvány lejárt.\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "A tanúsítvány tulajdonosa nem felel meg a gépnévnek (%s).\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Ismeretlen kiszolgáló"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Átmeneti névfeloldási hiba"

#: src/host.c:364
msgid "Unknown error"
msgstr "Ismeretlen hiba"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "%s feloldása… "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "meghiúsult: nem található IPv4/IPv6 cím a géphez.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "meghiúsult: időtúllépés.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: nem oldható fel a hiányos %s hivatkozás.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Érvénytelen URL: %s: %s.\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "A HTTP kérés írása meghiúsult: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Nincsenek fejlécek, HTTP/0.9 feltételezése"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "A tapasztalt hibák miatt az SSL letiltásra kerül.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "A POST adatfájl (%s) hiányzik: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Újrahasználom a kapcsolatot a következőhöz: %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "A proxy válasz olvasása meghiúsult: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "A proxy alagutazás meghiúsult: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s kérés elküldve, várakozás válaszra… "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Nem érkezett adat.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Olvasási hiba (%s) a fejlécekben.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Ismeretlen hitelesítési séma.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "A hitelesítés meghiúsult.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"A fájl (%s) már létezik, nem kerül letöltésre.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Rosszul formázott állapotsor"

#: src/http.c:2095
msgid "(no description)"
msgstr "(nincs leírás)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Hely: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "nincs megadva"

#: src/http.c:2156
msgid " [following]"
msgstr " [következik]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    A fájl már teljesen le van töltve; nincs teendő.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Hossz: "

#: src/http.c:2263
msgid "ignored"
msgstr "figyelmen kívül hagyva"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Mentés ide: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Figyelmeztetés: a helyettesítő karaktereket a HTTP nem támogatja.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "A „spider” mód bekapcsolva. A távoli fájl létezésének ellenőrzése.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "%s nem írható (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Nem lehet létrehozni SSL-kapcsolatot.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "HIBA: Átirányítás (%d) hely nélkül.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "A távoli fájl nem létezik -- hibás hivatkozás!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s HIBA %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Az Utolsó módosítás fejléc hiányzik -- az időbélyegek kikapcsolva.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"Az Utolsó módosítás fejléc érvénytelen -- az időbélyeg figyelmen kívül "
"hagyva.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"A kiszolgálón lévő %s fájl nem újabb mint a helyi -- nem kerül letöltésre.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "A méretek nem egyeznek (a helyi: %s) -- letöltésre kerül.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "A távoli fájl újabb, letöltésre kerül.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"A távoli fájl létezik és hivatkozásokat tartalmazhat más erőforrásokra -- "
"letöltésre kerül.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"A távoli fájl létezik, de nem tartalmaz hivatkozásokat -- nem kerül "
"letöltésre.\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"A távoli fájl létezik és tartalmazhat további hivatkozásokat,\n"
"de a rekurzió le van tiltva -- nem kerül letöltésre.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"A távoli fájl létezik.\n"
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
"%s (%s) -- %s kiírva a szabványos kimenetre [%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) -- %s mentve [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) -- A kapcsolat lezárva a(z) %s. bájtnál. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) -- Olvasási hiba a(z) %s. bájtnál (%s). "

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) -- Olvasási hiba a(z) %s/%s. bájtnál (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: A WGETRC a nem létező %s elemre mutat.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: %s nem olvasható (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Hiba a következőben: %s, a(z) %d. sornál.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Szintaktikai hiba a következőben: %s, a(z) %d. sornál.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Ismeretlen parancs (%s) a következőben: %s, a(z) %d. sornál.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Figyelmeztetés: Mind a rendszer, mind a felhasználói wgetrc a(z) %s "
"elemre mutat.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Érvénytelen --execute parancs: %s\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr ""
"%s: %s: Érvénytelen logikai érték: %s, használja az „on” vagy „off” "
"szavakat.\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Érvénytelen szám: %s.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Érvénytelen bájtérték: %s\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Érvénytelen időintervallum: %s\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Érvénytelen érték: %s.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Érvénytelen fejléc: %s.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Érvénytelen folyamattípus: %s.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Érvénytelen korlátozás: %s\n"
"    használja a [unix|windows],[lowercase|uppercase],[nocontrol] egyikét.\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "A kódolás (%s) nem érvényes\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: a területi beállítás nincs megadva\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Az átalakítás (%s → %s) nem támogatott\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Nem teljes vagy érvénytelen többájtos sorozat található\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Kezeletlen hibaszám: %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "az idn_encode meghiúsult (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "az idn_decode meghiúsult (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s érkezett, a kimenet átirányítása %s fájlba.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s érkezett.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; naplózás kikapcsolva.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Használat: %s [KAPCSOLÓ]… [URL]…\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Ha egy hosszú kapcsolóhoz kötelező argumentumot megadni, akkor ez a "
"megfelelő\n"
"rövid kapcsolónál is kötelező.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Indítás:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           a Wget verziójának kiírása és kilépés.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              ezen súgó megjelenítése.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        indítás után folytatás a háttérben.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""
"  -e,  --execute=PARANCS   egy „.wgetrc” stílusú parancs végrehajtása.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Naplózás és bemeneti fájl:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FÁJL    üzenetek naplózása a FÁJLBA.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FÁJL  üzenetek hozzáfűzése a FÁJLHOZ.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr ""
"  -d,  --debug               rengeteg hibakeresési információ kiírása.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""
"       --wdebug              Watt-32 hibakeresési információk kiírása.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               csendes (nincs kimenet).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             bőbeszédű (ez az alapértelmezés).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          bőbeszédűség kikapcsolása csendes mód nélkül.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=FÁJL     a helyi vagy külső FÁJLBAN található URL-címek\n"
"                               letöltése.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          a bemeneti fájl HTML-ként kezelése.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            a HTML bemeneti fájl hivatkozások (-i -F)\n"
"                             feloldása az URL-hez képest.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Letöltés:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=SZÁM              újrapróbálkozások számának beállítása a "
"SZÁMRA\n"
"                                   (0=végtelen).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       újrapróbálkozás, még ha a kapcsolat\n"
"                                   visszautasításra kerül is.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FÁJL    dokumentumok írása a FÁJLBA.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              azon letöltések kihagyása, amelyek létező\n"
"                                   fájlokra töltenének le.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                részben letöltött fájl letöltésének "
"folytatása.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=TÍPUS          az előrehaladás mérése típusának "
"kiválasztása.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            ne töltse le újra a fájlokat, hacsak nem\n"
"                                   újabbak a helyinél.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         a kiszolgáló válaszának kiírása.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  ne töltsön le semmit.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=MÁSODPERC       minden időkorlát értékének beállítása "
"ennyi\n"
"                                   MÁSODPERCRE.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=MP          a DNS kikeresés időkorlátjának beállítása\n"
"                                   MP másodpercre.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=MP      a kapcsolódás időkorlátjának beállítása\n"
"                                   MP másodpercre.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=MP         az olvasási időkorlát beállítása MP\n"
"                                   másodpercre.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=MÁSODPERC         MÁSODPERC várakozás az újrapróbálkozások "
"között.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=MÁSODPERC     1..MÁSODPERC várakozás egy újrapróbálkozás\n"
"                                   újrapróbálásai között.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             várakozás 0…2*WAIT másodpercig az \n"
"                                   újrapróbálkozások között.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                proxy kikapcsolása.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=SZÁM              a letöltési kvóta beállítása a SZÁMRA.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=CÍM        kapcsolódás a CÍMRE (gépnév vagy IP) a "
"helyi                                    gépen.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=SEBESSÉG     a letöltési sebesség korlátozása a "
"SEBESSÉGRE.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache            DNS kikeresések gyorsítótárazásnak "
"kikapcsolása\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  a fájlnevek karakterei korlátozása az OS\n"
"                                   operációs rendszer által "
"engedélyezettekre.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             kis- és nagybetűk figyelmen kívül\n"
"                                 hagyása fájlok/könyvtárak illesztésekor.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              kapcsolódás csak IPv4 címekhez.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              kapcsolódás csak IPv6 címekhez.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=CSALÁD    kapcsolódás először a megadott család "
"címeihez\n"
"                                   ez az „IPv6”, „IPv4”, vagy „none” egyike\n"
"                                   lehet.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=FELHASZNÁLÓ        mind az ftp, mind a http felhasználó "
"beállítása\n"
"                                   a FELHASZNÁLÓRA.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=JELSZÓ         mind az ftp, mind a http jelszó beállítása "
"a JELSZÓRA.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            jelszavak bekérése.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  IRI támogatás kikapcsolása.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=KÓD      a KÓD használata az IRI-k helyi "
"kódolásaként.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=KÓD     a KÓD használata az IRI-k távoli "
"kódolásaként.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Könyvtárak:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           ne hozzon létre könyvtárakat.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr ""
"  -x,  --force-directories        könyvtárak létrehozásának kényszerítése.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""
"  -nH, --no-host-directories      ne hozzon létre kiszolgálókönyvtárakat.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     a protokollnév használata a "
"könyvtárakban.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""
"  -P,  --directory-prefix=ELŐTAG  fájlok mentése az ELŐTAG/… könyvtárba\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=SZÁM            SZÁM darab távoli könyvtárösszetevő "
"kihagyása.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP kapcsolók:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=FELHASZNÁLÓ a http felhasználó beállítása.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=JELSZÓ  a http jelszó beállítása.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              a kiszolgáló által gyorsítótárazott adatok\n"
"                                 tiltása.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NÉV      Az alapértelmezett oldalnév módosítása (ez\n"
"                                 általában az „index.html”).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension        a HTML/CSS dokumentumok mentése a "
"megfelelő\n"
"                                 kiterjesztéssel.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         a „Content-Length” fejlécmező figyelmen "
"kívül\n"
"                                 hagyása.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""
"       --header=KARAKTERLÁNC   a KARAKTERLÁNC beszúrása a fejlécek közé.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          oldalanként engedélyezett átirányítások\n"
"                               maximális száma.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=FELHASZNÁLÓ a FELHASZNÁLÓ beállítása proxyfelhasználó-\n"
"                                  névként.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=JELSZÓ a JELSZÓ beállítása proxy jelszóként.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           a „Referer: URL” fejléc beillesztése a HTTP\n"
"                                 kérésbe.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          a HTTP fejlécek mentése fájlba.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=ÜGYNÖK     azonosítás ÜGYNÖKKÉNT a Wget/VERZIÓ helyett.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    a HTTP keep-alive (tartós kapcsolatok)\n"
"                                 kikapcsolása.\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            ne használjon sütiket.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=FÁJL     sütik betöltése a FÁJLBÓL a munkamenet\n"
"                                 megkezdése előtt.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=FÁJL     sütik mentése a FÁJLBA a munkamenet után.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  munkamenet (nem állandó) sütik betöltése és\n"
"                                 mentése.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=KARAKTERLÁNC  a POST módszer használata, a KARAKTERLÁNC\n"
"                                   küldése adatként.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FÁJL        a POST módszer használata, a FÁJL "
"tartalmának\n"
"                                 küldése.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   a Content-Disposition fejléc figyelembe "
"vétele\n"
"                                 helyi fájlnevek kiválasztásakor "
"(KÍSÉRLETI).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     alapvető HTTP hitelesítési információk "
"küldése\n"
"                                 a kiszolgáló kérésének megvárása nélkül\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS (SSL/TLS) kapcsolók:\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     a biztonságos protokoll kiválasztása, az "
"„auto”,\n"
"                                 „SSLv2”, „SSLv3”, és „TLSv1” egyike.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   ne ellenőrizze a kiszolgáló tanúsítványát.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FÁJL       ügyfél tanúsítványfájlja.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TÍPUS  ügyfél tanúsítványának típusa, PEM vagy "
"DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FÁJL       személyeskulcs-fájl.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""
"       --private-key-type=TÍPUS  személyes kulcs típusa, PEM vagy DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr ""
"       --ca-certificate=FÁJL    a tanúsítványok csoportját tartalmazó fájl.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=KÖNYVTÁR  a tanúsítványok hash listáját tároló\n"
"                                  könyvtár.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FÁJL       véletlen adatokat tartalmazó fájl az SSL "
"PRNG\n"
"                                  inicializálásához.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=FÁJL          véletlen adatokat tartalmazó, az EGD "
"foglalatot\n"
"                                  megnevező fájl.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP kapcsolók:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             A Stream_LF formátum használata minden "
"bináris\n"
"                                 FTP fájlhoz.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=FELHASZNÁLÓ  az ftp felhasználó beállítása.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=JELSZÓ   az ftp jelszó beállítása.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr ""
"       --no-remove-listing     ne távolítsa el a „.listing” fájlokat.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               helyettesítő karakterek használatának\n"
"                                 kikapcsolása FTP fájlnevekben.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        a „passzív” átviteli mód kikapcsolása.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         rekurzív letöltés esetén a szimbolikus "
"linkek\n"
"                                 által hivatkozott fájlok (nem könyvtárak)\n"
"                                 letöltése.\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekurzív letöltés:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          rekurzív letöltés megadása.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=SZÁM         maximális rekurziós mélység (inf vagy 0 = "
"végtelen).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after       helyi fájlok törlése letöltés után.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      hivatkozások átalakítása a letöltött HTML vagy "
"CSS\n"
"                             fájlban, hogy helyi fájlokra mutassanak.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   az X fájl átalakítása előtt készüljön róla "
"X_orig\n"
"                              néven mentés.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   az X fájl átalakítása előtt készüljön róla X."
"orig\n"
"                              néven mentés.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             ugyanaz, mint -N -r -l inf --no-remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    a HTML oldal megjelenítéséhez szükséges összes "
"kép,\n"
"                              stb. letöltése.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    a HTML megjegyzések szigorú (SGML) kezelésének\n"
"                              bekapcsolása.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Rekurzív elfogadás/visszautasítás:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LISTA              az elfogadott kiterjesztések vesszőkkel\n"
"                                     elválasztott listája.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LISTA              a visszautasított kiterjesztések "
"vesszőkkel\n"
"                                     elválasztott listája.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LISTA             az elfogadott tartományok vesszőkkel\n"
"                                     elválasztott listája.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LISTA     a visszautasított tartományok vesszőkkel\n"
"                                     elválasztott listája.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                FTP hivatkozások követése HTML\n"
"                                     dokumentumokból.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTA         a követett HTML címkék vesszőkkel\n"
"                                     elválasztott listája.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTA         a figyelmen kívül hagyott HTML címkék\n"
"                                      vesszőkkel elválasztott listája.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                rekurzív módban menjen idegen gépekre "
"is.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""
"  -L,  --relative                  csak a relatív hivatkozások követése.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""
"  -I,  --include-directories=LISTA  az engedélyezett könyvtárak listája.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LISTA  a kihagyott könyvtárak listája.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 ne lépjen be a szülőkönyvtárba.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Hibajelentéseket és javaslatokat a <bug-wget@gnu.org> címre küldhet.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, egy nem-interaktív hálózati letöltő.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "%s felhasználó jelszava: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Jelszó: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Területi beállítás: "

#: src/main.c:782
msgid "Compile: "
msgstr "Fordítás: "

#: src/main.c:783
msgid "Link: "
msgstr "Összeállítás: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s, összeállítva VMS %s %s rendszeren.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s, összeállítva %s rendszeren.\n"
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
"Licenc: GPLv3+: GNU GPL v3 vagy újabb\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Ez egy szabad szoftver, szabadon módosíthatja és terjesztheti.\n"
"NINCS GARANCIA, a jog által engedélyezett mértékig.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Eredetileg Hrvoje Niksic <hniksic@xemacs.org> írta.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Jelenlegi karbantartó: Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Hibajelentések és kérdések a <bug-wget@gnu.org> címre küldhetők.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "További kapcsolókért adja ki a „%s --help” parancsot.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: szabálytalan kapcsoló -- „-n%c”\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Nem lehet bőbeszédű és csendes egyszerre.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Nem lehet időbejegyzést is tenni egy fájlra és békén is hagyni.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Nem adható meg egyszerre mind a --inet4-only, mind az --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Nem adható meg egyszerre a -k és a -O több URL megadásakor vagy a -p vagy -r "
"kapcsolókkal együtt. Részletekért lásd a kézikönyvet.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"FIGYELMEZTETÉS: a -O és a -r vagy -p együttes használata azt jelenti, hogy "
"minden letöltött tartalom a megadott fájlba kerül.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"FIGYELMEZTETÉS: az időbélyegek hatástalanok a -O kapcsolóval együtt.\n"
"A részletekért lásd a kézikönyvoldalt.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "A fájl („%s”) már létezik, nem kerül letöltésre.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Nem adható meg egyszerre az --ask-password és a --password.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: hiányzó URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Ez a verzió nem tartalmazza az IRI-k támogatását\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"FIGYELMEZTETÉS: A szabványos kimenet nem nyitható meg bináris módban\n"
"                a letöltött fájl nem megfelelő sor vége jeleket "
"tartalmazhat.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Nem található URL a következőben: %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"BEFEJEZVE --%s--\n"
"Letöltve: %d fájl, %s %s alatt (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "A letöltési korlát (%s) TÚLLÉPVE!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Folytatás a háttérben.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Folytatás a háttérben, a pid: %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "A kimenet a következő fájlba lesz kiírva: %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Nem található használható foglalat-illesztőprogram.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: figyelmeztetés: %s jelsor található a gépnév előtt\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: ismeretlen token „%s”\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Használat: %s NETRC [GÉPNÉV]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: %s nem érhető el: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "FIGYELMEZTETÉS: gyenge véletlenmag kerül felhasználásra.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"A PRNG nem inicializálható; fontolja meg a --random-file használatát.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: %s %s által kiadott tanúsítványa nem ellenőrizhető:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  A kibocsátó hitelessége nem ellenőrizhető helyileg.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Saját aláírású tanúsítvány.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  A kibocsátott tanúsítvány még nem érvényes.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  A kibocsátott tanúsítvány lejárt.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr "%s: a tanúsítvány %s általános neve nem egyezik a kért %s gépnévvel.\n"

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
"A nem biztonságos kapcsolódáshoz %s géphez használja a --no-check-"
"certificate kapcsolót.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ kihagyva %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Érvénytelen pontstílus meghatározás: %s; változatlanul hagyva.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr " kész: %s"

#: src/progress.c:1050
msgid "   in "
msgstr "  idő "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "A valós idejű óra frekvenciája nem kérhető le: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "%s eltávolítása, mivel vissza kellene utasítani.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "%s nem nyitható meg: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "robots.txt betöltése; hagyja figyelmen kívül a hibákat.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Hiba a proxy URL feldolgozása közben: %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Hiba a(z) %s proxy URL-ben: HTTP kell legyen.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d átirányítás túllépve.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Feladás.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Újrapróbálkozás.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Nincsenek hibás hivatkozások.\n"
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
"%d hibás hivatkozás.\n"
"\n"
msgstr[1] ""
"%d hibás hivatkozás.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Nincs hiba"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Nem támogatott séma (%s) "

#: src/url.c:637
msgid "Scheme missing"
msgstr "A séma hiányzik"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Érvénytelen gépnév"

#: src/url.c:641
msgid "Bad port number"
msgstr "Rossz portszám"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Érvénytelen felhasználói név"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Befejezetlen IPv6 numerikus cím"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Az IPv6 címek nem támogatottak"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Hibás IPv6 numerikus cím"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "A HTTPS támogatás nincs befordítva"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr ""
"%s: %s: A szükséges memória lefoglalása meghiúsult; elfogyott a memória.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: %ld bájt lefoglalása meghiúsult; elfogyott a memória.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: a szöveges puffer túl nagy (%ld bájt), megszakítás.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Folytatás a háttérben, a pid: %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "A szimbolikus link (%s) törlése meghiúsult: %s\n"