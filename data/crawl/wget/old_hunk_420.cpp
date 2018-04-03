# Swedish messages for wget.
# Copyright (C) 2008, 2009 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Christian Rose <menthos@menthos.com>, 1999, 2000, 2001, 2002, 2003.
# Daniel Nylander <po@danielnylander.se>, 2006, 2007, 2008, 2009.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-09 21:22+0100\n"
"Last-Translator: Daniel Nylander <po@danielnylander.se>\n"
"Language-Team: Swedish <tp-sv@listor.tp-sv.se>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=utf-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=(n != 1)\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Okänt systemfel"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: flaggan \"%s\" är tvetydig\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: flaggan \"--%s\" tar inget argument\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: flaggan \"%c%s\" tar inget argument\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: flaggan \"%s\" behöver ett argument\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: okänd flagga \"--%s\"\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: okänd flagga \"%c%s\"\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: otillåten flagga -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: ogiltig flagga -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: flaggan behöver ett argument -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: flaggan \"-W %s\" är tvetydig\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: flaggan \"-W %s\" tar inget argument\n"

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
msgstr "\""

#: lib/quotearg.c:273
msgid "'"
msgstr "\""

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "slut på minne"

# bind? binda? FIXME.
#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: kunde inte slå upp bindningsadressen %s; inaktiverar bindning.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Ansluter till %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Ansluter till %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "ansluten.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "misslyckades: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: kunde inte slå upp värdadressen %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Konverterade %d filer på %s sekunder.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Konverterar %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "inget att göra.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Kan inte konvertera länkar i %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Kunde inte ta bort %s: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Kan inte säkerhetskopiera %s som %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Syntaxfel i \"Set-Cookie\": %s vid position %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Kaka som kommer från %s försökte ställa in domän till %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Kan inte öppna kakfilen %s: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Fel vid skrivning till %s: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Fel vid stängning av %s: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Listningstypen stöds inte, försöker med Unix-listtolkare.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Innehåll i /%s på %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "okänd tid          "

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
msgstr "Länk        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Osäker      "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s byte) "

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Längd: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) återstår"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s återstår"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (inte auktoritativt)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Loggar in som %s... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Fel i serversvar, stänger styranslutning.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Fel i serverhälsning.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Skrivning misslyckades, stänger styranslutning.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Inloggning nekas av servern.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Felaktig inloggning.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Inloggad!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Serverfel, kan inte avgöra systemtyp.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "färdig.  "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "färdig.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Typen \"%c\" är okänd, stänger styranslutning.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "färdig.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD behövs inte.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Katalogen %s finns inte.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD behövs inte.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Kan inte initiera PASV-överföring.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Kan inte tolka PASV-svar.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "kunde inte ansluta till %s port %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bindningsfel (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Felaktig PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST misslyckades, startar om från början.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Filen %s finns redan.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Filen %s finns inte.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Filen %s finns inte.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Filen eller katalogen %s finns inte.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s har uppstått.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, stänger styranslutning.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Dataanslutning: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Styranslutning stängd.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Dataöverföring avbruten.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Filen %s finns redan där; hämtar den inte.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(försök:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - skrevs till standard ut %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s sparades [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Tar bort %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Använder %s som temporär listningsfil.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "Tog bort %s.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Rekursionsdjupet %d överskred det maximala djupet %d.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "Fjärrfilen är inte nyare än lokala filen %s -- hämtar den inte.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Fjärrfilen är nyare än lokala filen %s -- hämtar den.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Storlekarna stämmer inte överens (lokal %s) -- hämtar.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Ogiltig symbolisk länk, hoppar över.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"En korrekt symbolisk länk %s -> %s finns redan.\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Skapar symbolisk länk %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Symboliska länkar stöds inte, hoppar över symboliska länken %s.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Hoppar över katalogen %s.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: okänd filtyp/filtypen stöds inte.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: felaktig tidsstämpel.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Hämtar inte kataloger eftersom djupet är %d (max %d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Går inte ner till %s eftersom det är undantaget/inte-inkluderat.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "Nekar %s.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Fel vid matchning av %s mot %s: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Inga träffar med mönstret %s.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Skrev HTML-iserat index till %s [%s].\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Skrev HTML-iserat index till %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "FEL"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "VARNING"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: Inget certifikat presenterades av %s.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Certifikatet för %s är inte pålitligt.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: Certifikatet för %s saknar en känd utfärdare.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: Certifikatet för %s har spärrats.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Fel vid initiering av X509-certifikat: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Inget certifikat hittades\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Fel vid tolkning av certifikat: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Certifikatet har ännu inte aktiverats\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Certifikatet har gått ut\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "Certifikatets ägare matchar inte värdnamnet %s\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Okänd värd"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Temporärt fel i namnuppslagning"

#: src/host.c:364
msgid "Unknown error"
msgstr "Okänt fel"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Slår upp %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "misslyckades: Inga IPv4/IPv6-adresser för värd.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "misslyckades: gjorde time-out.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Kan inte slå upp den ofullständiga länken %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Ogiltig URL %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Misslyckades med att skriva HTTP-begäran: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Inga rubriker, antar HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Inaktiverar SSL på grund av påträffade fel.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Datafil för POST %s saknas: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Återanvänder befintlig anslutning till %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Misslyckades med att läsa proxysvar: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Proxytunnel misslyckades: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s-begäran skickad, väntar på svar... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Ingen data mottagen.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Läsfel (%s) i rubriker.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Okänd autentiseringsmetod.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Auktorisering misslyckades.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Filen %s finns redan där; hämtar den inte.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Felaktig statusrad"

#: src/http.c:2095
msgid "(no description)"
msgstr "(ingen beskrivning)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Adress: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "ospecifierat"

#: src/http.c:2156
msgid " [following]"
msgstr " [följer]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Filen är redan fullständigt hämtad, inget att göra.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Längd: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignorerad"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Sparar till: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Varning: jokertecken stöds inte i HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Spindelläget aktiverat. Kontrollera om fjärrfilen finns.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Kan inte skriva till %s (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Kan inte etablera en SSL-anslutning.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "FEL: Omdirigering (%d) utan adress.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Fjärrfilen finns inte -- trasig länk!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s FEL %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "\"Last-modified\"-rubrik saknas -- tidsstämplar avstängda.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "\"Last-modified\"-rubriken är ogiltig -- tidsstämpel ignorerad.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Filen på servern är inte nyare än lokala filen %s -- hämtar den inte.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Storlekarna stämmer inte överens (lokal %s) -- hämtar.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Fjärrfilen är nyare, hämtar den.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Fjärrfilen finns och kan innehålla länkar till andra resurser -- hämtar "
"den.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Fjärrfilen finns men innehåller ingen länk -- hämtar den inte.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Fjärrfilen finns och kan innehålla ytterligare länkar,\n"
"men rekursion är inaktiverat -- hämtar den inte.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Fjärrfilen finns.\n"
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
"%s (%s) - skrevs till standard ut %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - %s sparades [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Anslutningen stängd vid byte %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Läsfel vid byte %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Läsfel vid byte %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC pekar till %s som inte finns.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Kan inte läsa %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Fel i %s vid rad %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Syntaxfel i %s på rad %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Okänt kommando %s i %s på rad %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: Varning: Både systemets och användarens wgetrc pekar till %s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Kommando med argumentet --execute är ogiltigt %s\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Ogiltigt booleskt värde %s; använd \"on\" eller \"off\".\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Ogiltigt tal %s.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Ogiltigt bytevärde %s\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Ogiltig tidsperiod %s\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Ogiltigt värde %s.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Ogiltig rubrik %s.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Förloppstypen %s är ogiltig.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Ogiltig begränsning %s,\n"
"    använd [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Kodningen %s är inte giltig\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: lokalen är inte inställd\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Konvertering från %s till %s stöds inte\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Ofullständig eller ogiltig multibyte-sekvens påträffades\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Ohanterat felnummer %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode misslyckades (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode misslyckades (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s mottagna, omdirigerar utdata till %s.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s mottogs.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; deaktiverar loggning.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Användning: %s [FLAGGA]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Obligatoriska argument till långa flaggor är obligatoriska även för de "
"korta.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Uppstart:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           visa versionen av Wget och avsluta.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              skriv ut denna hjälp.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        gå till bakgrunden efter uppstart.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=KOMMANDO  kör ett \".wgetrc\"-liknande kommando.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Loggning och inmatningsfil:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FIL     logga meddelanden till FIL.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FIL   lägg till meddelanden till FIL.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr ""
"  -d,  --debug               skriver ut massor av felsökningsinformation.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""
"       --wdebug              skriv ut Watt-32-felsökningsinformation.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               tyst (ingen utdata).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             var informativ (detta är standard).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          stäng av information, utan att vara helt tyst.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=FIL      hämta URL:er som hittats i lokal eller extern "
"FIL.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          behandla inmatningsfil som HTML.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            slår upp HTML-länkar från input-file\n"
"                              (-i -F) relativa till URL.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Hämta:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=ANTAL             ställ in antal försök till ANTAL (0 =  "
"ingen gräns).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       försök igen även om anslutningen nekas.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FIL     skriv dokument till FIL.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              hoppa över hämtningar som skulle hämta "
"till\n"
"                                 redan befintliga filer.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                återuppta hämtning av delvis hämtad fil.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=TYP            välj typ av förloppsindikator.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            hämta inte om filer om de inte är nyare än\n"
"                                 lokala filer.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         skriv ut serversvar.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  hämta ingenting.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SEKUNDER        ställ in alla timeout-värden till "
"SEKUNDER.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEK         ställ in timeout för DNS-uppslag till SEK.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SEK     ställ in timeout för anslutning till SEK.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SEK        ställ in lästimeout till SEK.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SEKUNDER           vänta SEKUNDER mellan hämtningar.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEKUNDER      vänta 1..SEKUNDER mellan hämtningsförsök.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             vänta från 0...2*VÄNTA sekunder mellan "
"hämtningar.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                stäng uttryckligen av proxy.\n"

# Nummer eller antal?
#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=ANTAL             ställ in mottagningskvot till ANTAL.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRESS     bind till ADRESS (värdnamn eller IP) på "
"lokal värd.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=FART         begränsa hämtningshastighet till FART.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache            inaktivera mellanlagring av DNS-uppslag.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  begränsa tecken i filnamn till vad OS "
"tillåter.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ignorera skiftläge vid matchning av filer/"
"kataloger.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              anslut endast till IPv4-adresser.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              anslut endast till IPv6-adresser.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILJ    anslut först till adresser av angiven "
"familj,\n"
"                                 en av IPv6, IPv4, eller none.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=ANVÄNDARE          ställ in både ftp- och http-användare till "
"ANVÄNDARE.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=LÖSEN          ställ in både ftp- och http-lösenord till "
"LÖSEN.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            fråga efter lösenord.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  stäng av IRI-stöd.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=KOD      använd KOD som lokal kodning för IRI:er.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=KOD     använd KOD för fjärrkodning som standard.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Kataloger:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           skapa inga kataloger.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        tvinga skapandet av kataloger.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      skapa inte värdkataloger.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr "       --protocol-directories     använd protokollnamn i kataloger.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIX  spara filer till PREFIX/...\n"

# antal? nummer?
#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=ANTAL           ignorera ANTAL fjärrkatalogkomponenter.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP-flaggor:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr ""
"       --http-user=ANVÄNDARE   ställ in http-användare till ANVÄNDARE.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=LÖSEN   ställ in http-lösenord till LÖSEN.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              tillåt inte mellanlagrad data på servern.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NAMN     Ändra namnet för standardsidan (vanligtvis\n"
"                               är detta \"index.html\".).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension      spara HTML/CSS-dokument med korrekta "
"ändelser.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         ignorera \"Content-Length\"-rubrikfält.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=STRÄNG         infoga STRÄNG i rubrikerna.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          maximalt antal tillåtna omdirigeringar per "
"sida.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=ANVÄNDARE  ställ in ANVÄNDARE som proxy-användarnamn.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=LÖSEN  ställ in LÖSEN som proxy-lösenord.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           inkludera \"Referer: URL\"-rubrik i HTTP-"
"begäran.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          spara HTTP-rubrikerna till fil.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT      identifiera som AGENT istället för Wget/"
"VERSION.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    inaktivera HTTP keep-alive (ihållande "
"anslutningar).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            använd inte kakor.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr "       --load-cookies=FIL      läs in kakor från FIL före session.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=FIL      spara kakor till FIL efter session.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  läs in och spara sessionskakor (icke-"
"permanent).\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=STRÄNG      använd POST-metoden; skicka STRÄNG som data.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FIL         använd POST-metoden; skicka innehållet av "
"FIL.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   ta hänsyn till Content-Disposition-rubriken\n"
"                               när lokala filnamn väljs (EXPERIMENTELL).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     skicka Basic HTTP-autentiseringsinformation\n"
"                               utan att först vänta på serverns\n"
"                               kontrollfråga.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS-flaggor (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     välj säkert protokoll, ett av auto, SSLv2,\n"
"                                SSLv3 och TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   validera inte serverns certifikat.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FIL        klientcertifikatfil.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr "       --certificate-type=TYP   klientcertifikattyp, PEM eller DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FIL        privat nyckelfil.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TYP   privat nyckeltyp, PEM eller DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=FIL     fil med paketerade CA:er.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=KAT       katalog där hash-lista av CA:er är lagrad.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FIL        fil med slumpfrö för att så SSL PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr "       --egd-file=FIL           fil för EGD-uttag med slumpfrö.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP-flaggor:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             Använd formatet Stream_LF för alla binära FTP-"
"filer.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""
"       --ftp-user=ANVÄNDARE    ställ in ftp-användare till ANVÄNDARE.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=LÖSEN    ställ in ftp-lösenord till LÖSEN.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     ta inte bort \".listing\"-filer.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               stäng av FTP-filnamnsmatchning.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        inaktivera \"passivt\"-överföringsläge.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         när rekursiv, hämta \"länkade-till\"-filer "
"(inte kat).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekursiv hämtning:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          ange rekursiv hämtning.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=ANTAL        maximalt djup för rekursion (inf eller 0 för "
"oändligt).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       ta bort lokala filer efter att de hämtats.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      peka länkar i hämtad HTML eller CSS till\n"
"                            lokala filer.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   före konvertering av fil X, säkerhetskopiera som "
"X_orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   före konvertering av fil X, säkerhetskopiera som "
"X.orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             genväg för -N -r -l inf --no-remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    hämta alla bilder, etc. som behövs för att visa "
"HTML-sida.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    slå på strikt (SGML) hantering av HTML-"
"kommentarer.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Rekursiv acceptans/vägran:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LISTA              kommaseparerad lista över accepterade "
"filändelser.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LISTA              kommaseparerad lista över vägrade "
"filändelser.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LISTA             kommaseparerad lista av accepterade "
"domäner.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LISTA     kommaseparerad lista av vägrade domäner.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                följ FTP-länkar från HTML-dokument.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTA         kommaseparerad lista av HTML-taggar att "
"följa.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTA         kommaseparerad lista av HTML-taggar att "
"ignorera.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                gå till främmande värdar när rekursiv.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  följ endast relativa länkar.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LISTA lista av tillåtna kataloger.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LISTA lista av exkluderade kataloger.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 gå in upp till förälderkatalogen.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr ""
"Skicka felrapporter och förslag till <bug-wget@gnu.org>.\n"
"Skicka synpunkter på översättningen till <tp-sv@listor.tp-sv.se>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, en icke-interaktiv nätverkshämtare.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Lösenord för användaren %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Lösenord: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Lokalanpassning: "

#: src/main.c:782
msgid "Compile: "
msgstr "Kompilering: "

#: src/main.c:783
msgid "Link: "
msgstr "Länkning: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s byggd på VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s byggd på %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (miljö)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (användare)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (system)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Copyright © 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Licens GPLv3+: GNU GPL version 3 eller senare\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Det här är fri programvara: du får fritt ändra och distribuera den.\n"
"Det finns INGEN GARANTI så långt som lagen tillåter.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Ursprungligen skrivet av Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Underhålls för närvarande av Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Skicka felrapporter och frågor till <bug-wget@gnu.org>.\n"
"Skicka synpunkter på översättningen till <tp-sv@listor.tp-sv.se>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Prova \"%s --help\" för fler flaggor.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: ogiltig flagga -- \"-n%c\"\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Kan inte vara utförlig och tyst på samma gång.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Kan inte tidsstämpla och inte skriva över gamla filer på samma gång.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Kan inte ange både --inet4-only och --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Kan inte ange både -k och -O om flera url:er har angivits, eller i "
"kombination\n"
"med -p eller -r. Se manualen för information.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"VARNING: kombinera -O med -r eller -p betyder att allt hämtat innehåll\n"
"kommer att placeras i en enstaka fil som du har angivit.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"VARNING: tidsstämpling gör ingenting i kombination med -O. Se manualen\n"
"för information.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Filen \"%s\" finns redan där; hämtar den inte.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Kan inte ange både --ask-password och --password.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL saknas\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Denna version saknar stöd för IRI:er\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"VARNING: Kan inte återöppna standard ut i binärt läge;\n"
"         hämtad fil kan innehålla felaktiga radslut.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Inga URL:er hittade i %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"FÄRDIG --%s--\n"
"Hämtade: %d filer, %s i %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Hämtningskvot för %s ÖVERSKRIDEN!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Fortsätter i bakgrunden.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Fortsätter i bakgrunden, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "Utdata kommer att skrivas till %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Kunde inte hitta användbar uttagsdrivrutin (socket driver).\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: varning: %s-märke förekommer framför alla maskinnamn\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: okänt märke \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Användning: %s NETRC [VÄRDDATORNAMN]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: kan inte ta status på %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "VARNING: använder ett svagt slumpfrö.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Kunde inte så PRNG; överväg att använda --random-file.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: kan inte validera certifikatet för %s, utfärdat av %s:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Kunde inte lokalt verifiera utfärdarens auktoritet.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Självsignerat certifikat påträffades.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Utfärdat certifikat är ännu inte giltigt.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Utfärdat certifikat har gått ut.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: namnet på certifikat %s stämmer inte överens med begärda värdnamnet %s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: certifikatets namn är ogiltigt (innehåller ett NUL-tecken).\n"
"Detta kan indikera att värddatorn inte är den som den utger sig\n"
"för att vara (den är alltså inte den riktiga %s).\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"För att ansluta till %s på osäkert sätt, använd \"--no-check-certificate\".\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ hoppar över %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Punktstilsspecifikationen %s är ogiltig; lämnar oförändrad.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  klar %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   på "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Kan inte hämta REALTIME-klockfrekvens: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Tar bort %s eftersom den skulle ha avvisats.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Kan inte öppna %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Läser in robots.txt; ignorera fel.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Fel vid tolkning av proxy-URL %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Fel i proxy-URL %s: Måste vara HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d omdirigeringar överskreds.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Ger upp.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Försöker igen.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Hittade inga trasiga länkar.\n"
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
"Hittade %d trasig länk.\n"
"\n"
msgstr[1] ""
"Hittade %d trasiga länkar.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Inget fel"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Schemat %s stöds inte"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Schema saknas"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Ogiltigt värdnamn"

#: src/url.c:641
msgid "Bad port number"
msgstr "Felaktigt portnummer"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Ogiltigt användarnamn"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Oavslutad numerisk IPv6-adress"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6-adresser stöds inte"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Ogiltig numerisk IPv6-adress"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "HTTPS-stöd är inte inkompilerat"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr ""
"%s: %s: Misslyckades med att allokera tillräckligt mycket minne; slut på "
"minne.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Misslyckades att allokera %ld byte; minne fullt.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: textbufferten är för stor (%ld byte), avbryter.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Fortsätter i bakgrunden, pid %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Misslyckades med att ta bort symboliska länken %s: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            lägger till URL till relativa länkar i -F -i "
#~ "fil.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr "       --preserve-permissions  behåll fjärrfilens rättigheter.\n"

#~ msgid "Cannot specify -r, -p or -N if -O is given.\n"
#~ msgstr "Kan inte ange -r, -p eller -N om -O har angivits.\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                   slå uttryckligen på proxy.\n"

#~ msgid ""
#~ "       --no-content-disposition  don't honor Content-Disposition header.\n"
#~ msgstr ""
#~ "       --no-content-disposition  använd inte \"Content-Disposition\"-"
#~ "huvudet.\n"

#~ msgid "%s referred by:\n"
#~ msgstr "%s refereras till av:\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Fel i \"Set-Cookie\", fält \"%s\""

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) - Anslutningen stängd vid byte %s/%s. "

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: Ogiltigt utökat booleskt värde \"%s\";\n"
#~ "använd en av \"on\", \"off\", \"always\" eller \"never\".\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Följande text är en informell översättning som enbart tillhandahålls\n"
#~ "i informativt syfte. För alla juridiska tolkningar gäller den\n"
#~ "engelska originaltexten.\n"
#~ "Detta program distribueras i hopp om att det ska vara användbart,\n"
#~ "men UTAN NÅGON SOM HELST GARANTI, även utan underförstådd garanti\n"
#~ "om SÄLJBARHET eller LÄMPLIGHET FÖR NÅGOT SPECIELLT ÄNDAMÅL. Se GNU\n"
#~ "General Public License för ytterligare information.\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s: Fel vid validering av certifikat för %s: %s\n"

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr "Kan inte konvertera \"%s\" till en bind-adress. Återgår till ANY.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST misslyckades, kommer inte att klippa \"%s\".\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s kvar]"

#~ msgid "Host not found"
#~ msgstr "Servern kunde inte hittas"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "Misslyckades med att ställa in ett SSL-sammanhang\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "Misslyckades med att läsa in certifikat från %s\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Försöker utan det angivna certifikatet\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "Misslyckades med att få tag i certifikatnyckel från %s\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Filslut vid genomsökning av huvuden.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Återupptagen hämtning av denna fil misslyckades, vilket är i konflikt\n"
#~ "med \"-c\".\n"
#~ "Vägrar att klippa existerande filen \"%s\".\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s kvar)"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "Filen \"%s\" finns redan där, hämtar inte.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - \"%s\" sparad [%ld/%ld])\n"
#~ "\n"

#~ msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
#~ msgstr ""
#~ "%s: %s: Booleska värdet \"%s\" är ogiltigt, använd \"always\", \"on\", "
#~ "\"off\" eller \"never\".\n"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Uppstart:\n"
#~ "  -V,  --version            visa versionsinformation för Wget och "
#~ "avsluta.\n"
#~ "  -h,  --help               visa denna hjälptext.\n"
#~ "  -b,  --background         gå till bakgrunden efter uppstart.\n"
#~ "  -e,  --execute=KOMMANDO   utför ett kommando av \".wgetrc\"-typ.\n"
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
#~ "Loggning och infil:\n"
#~ "  -o,  --output-file=FIL        logga meddelanden till FIL.\n"
#~ "  -a,  --append-output=FIL      lägg till meddelanden till FIL.\n"
#~ "  -d,  --debug                  skriv ut felsökningsmeddelanden.\n"
#~ "  -q,  --quiet                  tyst (inga utskrifter).\n"
#~ "  -v,  --verbose                var utförlig (detta är standard).\n"
#~ "  -nv, --non-verbose            stäng av utförlighet, utan att vara "
#~ "tyst.\n"
#~ "  -i,  --input-file=FIL         hämta URL:er som finns i FIL.\n"
#~ "  -F,  --force-html             behandla indatafil som HTML.\n"
#~ "  -B,  --base=URL               lägger till URL till relativa länkar vid\n"
#~ "                                -F -i fil.\n"
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
#~ "Hämtning:\n"
#~ "  -t,  --tries=ANTAL            sätt antal försök till ANTAL "
#~ "(0=obegränsat).\n"
#~ "       --retry-connrefused      försök igen även om anslutning nekas.\n"
#~ "  -O   --output-document=FIL    skriv dokument till FIL.\n"
#~ "  -nc, --no-clobber             skriv inte över existerande filer eller\n"
#~ "                                använd .#-suffix.\n"
#~ "  -c,  --continue               återuppta hämtningen av en delvis hämtad "
#~ "fil.\n"
#~ "       --progress=TYP           välj typ av förloppsmätare.\n"
#~ "  -N,  --timestamping           hämta inte om filer om de inte är nyare "
#~ "än\n"
#~ "                                de lokala.\n"
#~ "  -S,  --server-response        visa serversvar.\n"
#~ "       --spider                 hämta inte något.\n"
#~ "  -T,  --timeout=SEKUNDER       sätt alla tidsgränser till SEKUNDER.\n"
#~ "       --dns-timeout=SEKUNDER   sätt tidsgräns för DNS-uppslagning till\n"
#~ "                                SEKUNDER.\n"
#~ "       --connect-timeout=SEK    sätt tidsgräns för anslutning till SEK.\n"
#~ "       --read-timeout=SEKUNDER  sätt tidsgräns för läsning till "
#~ "SEKUNDER.\n"
#~ "  -w,  --wait=SEKUNDER          vänta SEKUNDER mellan hämtningar.\n"
#~ "       --waitretry=SEKUNDER     vänta 1...SEKUNDER mellan "
#~ "hämtningsförsök.\n"
#~ "       --random-wait            vänta från 0...2*VÄNTA sekunder mellan\n"
#~ "                                hämtningar.\n"
#~ "  -Y,  --proxy=on/off           sätt proxy till på (on) eller av (off).\n"
#~ "  -Q,  --quota=ANTAL            sätt gräns för hämtning till ANTAL.\n"
#~ "       --bind-address=ADRESS    bind till ADRESS (värdnamn eller IP) på\n"
#~ "                                lokala värden.\n"
#~ "       --limit-rate=HASTIGHET   begränsa hämtningshastighet till "
#~ "HASTIGHET.\n"
#~ "\n"
#~ "       --dns-cache=off          inaktivera cachande av DNS-"
#~ "uppslagningar.\n"
#~ "       --restrict-file-names=OS begränsa tecken i filnamn till de som\n"
#~ "                                operativsystemet tillåter.\n"

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
#~ "Kataloger:\n"
#~ "  -nd, --no-directories            skapa inte kataloger.\n"
#~ "  -x,  --force-directories         tvinga skapande av kataloger.\n"
#~ "  -nH, --no-host-directories       skapa inte värddatorkataloger.\n"
#~ "  -P,  --directory-prefix=PREFIX   spara filer till PREFIX/...\n"
#~ "       --cut-dirs=ANTAL            ignorera ANTAL "
#~ "fjärrkatalogkomponenter.\n"
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
#~ "HTTP-flaggor:\n"
#~ "       --http-user=ANVÄNDARE     sätt http-användare till ANVÄNDARE.\n"
#~ "       --http-passwd=LÖSENORD    sätt http-lösenord till LÖSENORD.\n"
#~ "  -C,  --cache=on/off            tillåt/tillåt inte server-cachad data\n"
#~ "                                 (normalt tillåtet).\n"
#~ "  -E,  --html-extension          spara alla text/html-dokument med "
#~ "ändelsen\n"
#~ "                                 .html.\n"
#~ "       --ignore-length           ignorera \"Content-Length\"-fält i "
#~ "huvuden.\n"
#~ "       --header=STRÄNG           sätt in STRÄNG bland huvudena.\n"
#~ "       --proxy-user=ANVÄNDARE    sätt ANVÄNDARE som användarnamn för\n"
#~ "                                 proxyserver.\n"
#~ "       --proxy-passwd=LÖSENORD   sätt LÖSENORD som lösenord för "
#~ "proxyserver.\n"
#~ "       --referer=URL             inkludera \"Referer: URL\"-huvud i\n"
#~ "                                 HTTP-begäran.\n"
#~ "  -s,  --save-headers            spara HTTP-huvudena till fil.\n"
#~ "  -U,  --user-agent=AGENT        identifiera som AGENT istället för\n"
#~ "                                 Wget/VERSION.\n"
#~ "       --no-http-keep-alive      använd inte \"HTTP-keepalive"
#~ "\" (beständiga\n"
#~ "                                 anslutningar).\n"
#~ "       --cookies=off             använd inte kakor.\n"
#~ "       --load-cookies=FIL        läs in kakor från FIL innan sessionen.\n"
#~ "       --save-cookies=FIL        spara kakor till FIL efter sessionen.\n"
#~ "       --post-data=STRÄNG        använd POST-metoden; skicka STRÄNG som "
#~ "data.\n"
#~ "       --post-file=FIL           använd POST-metoden; skicka innehållet i "
#~ "FIL.\n"
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
#~ "HTTPS-flaggor (SSL-flaggor):\n"
#~ "       --sslcertfile=FIL        frivilligt klientcertifikat.\n"
#~ "       --sslcertkey=NYCKELFIL   frivillig nyckelfil för detta "
#~ "certifikat.\n"
#~ "       --egd-file=FIL           filnamn på EGD-uttaget.\n"
#~ "       --sslcadir=KATALOG       katalog där hash-list med CA:er lagras.\n"
#~ "       --sslcafile=FIL          fil med CA-samling\n"
#~ "       --sslcerttype=0/1        klientcertifikattyp 0=PEM (standard) / "
#~ "1=ASN1 (DER)\n"
#~ "       --sslcheckcert=0/1       kontrollera servercertifikatet mot "
#~ "angiven CA\n"
#~ "       --sslprotocol=0-3        välj SSL-protokoll; 0=automatiskt,\n"
#~ "                                1=SSLv2 2=SSLv3 3=TLSv1\n"
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
#~ "FTP-flaggor:\n"
#~ "  -nr, --dont-remove-listing   ta inte bort \".listing\"-filer.\n"
#~ "  -g,  --glob=on/off           sätt på/stäng av filnamnsmatchning.\n"
#~ "       --passive-ftp           använd \"passiv\" överföring.\n"
#~ "       --retr-symlinks         hämta länkade filer (inte kataloger) vid\n"
#~ "                               rekursion.\n"
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
#~ "Rekursiv hämtning:\n"
#~ "  -r,  --recursive             rekursiv hämtning.\n"
#~ "  -l,  --level=ANTAL           maximalt rekursionsdjup (inf eller 0 för\n"
#~ "                               obegränsat).\n"
#~ "       --delete-after          ta bort filer lokalt efter hämtning.\n"
#~ "  -k,  --convert-links         konvertera absoluta länkar till relativa.\n"
#~ "  -K,  --backup-converted      säkerhetskopiera som X.orig innan\n"
#~ "                               konvertering av filen X.\n"
#~ "  -m,  --mirror                genvägsflagga som motsvarar -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites       hämta alla bilder osv som behövs för "
#~ "visning\n"
#~ "                               av HTML-sida.\n"
#~ "       --strict-comments       slå på strikt (SGML) hantering av HTML-\n"
#~ "                               kommentarer.\n"
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
#~ "Tillåtelser vid rekursiv hämtning:\n"
#~ "  -A,  --accept=LISTA                kommaseparerad lista med tillåtna\n"
#~ "                                     ändelser.\n"
#~ "  -R,  --reject=LISTA                kommaseparerad lista med otillåtna\n"
#~ "                                     ändelser.\n"
#~ "  -D,  --domains=LISTA               kommaseparerad lista med tillåtna "
#~ "domäner.\n"
#~ "       --exclude-domains=LISTA       kommaseparerad lista med otillåtna\n"
#~ "                                     domäner.\n"
#~ "       --follow-ftp                  följ FTP-länkar från HTML-dokument.\n"
#~ "       --follow-tags=LISTA           kommaseparerad lista med HTML-"
#~ "taggar\n"
#~ "                                     som följs.\n"
#~ "  -G,  --ignore-tags=LISTA           kommaseparerad lista med ignorerade\n"
#~ "                                     HTML-taggar.\n"
#~ "  -H,  --span-hosts                  gå till främmande värdar i rekursivt "
#~ "läge.\n"
#~ "  -L,  --relative                    följ endast relativa länkar.\n"
#~ "  -I,  --include-directories=LISTA   lista med tillåtna kataloger.\n"
#~ "  -X,  --exclude-directories=LISTA   lista med uteslutna kataloger.\n"
#~ "  -np, --no-parent                   gå inte upp till förälderkatalog.\n"
#~ "\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Startar WinHelp %s\n"

#~ msgid "Empty host"
#~ msgstr "Tom värd"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Inte tillräckligt med minne.\n"

#~ msgid "Resolving %s..."
#~ msgstr "Slår upp %s..."

#~ msgid "[following]"
#~ msgstr "[följer]"

#~ msgid ""
#~ "HTTPS (SSL) options:\n"
#~ "       --sslcertfile=FILE     optional client certificate.\n"
#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
#~ "       --egd-file=FILE        file name of the EGD socket.\n"
#~ "       --sslcadir=DIR         dir where hash list of CA's are stured.\n"
#~ "       --sslcafile=FILE       file with bundle of CA's\n"
#~ "       --sslcerttype=0/1      Client-Cert type 0=PEM (default) / 1=ASN1 "
#~ "(DER)\n"
#~ "       --sslcheckcert=0/1     Check the server cert agenst given CA\n"
#~ "       --sslprotocol=0-3      choose SSL protocol; 0=automatic,\n"
#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
#~ "\n"
#~ msgstr ""
#~ "HTTPS-flaggor (SSL-flaggor):\n"
#~ "       --sslcertfile=FIL        frivilligt klientcertifikat.\n"
#~ "       --sslcertkey=NYCKELFIL   frivillig nyckelfil för detta "
#~ "certifikat.\n"
#~ "       --egd-file=FIL           filnamn på EGD-uttaget.\n"
#~ "       --sslcadir=KATALOG       katalog där hash-list med CA:er lagras.\n"
#~ "       --sslcafile=FIL          fil med CA-samling\n"
#~ "       --sslcerttype=0/1        klientcertifikattyp 0=PEM (standard) / "
#~ "1=ASN1 (DER)\n"
#~ "       --sslcheckcert=0/1       kontrollera servercertifikatet mot "
#~ "angiven CA\n"
#~ "       --sslprotocol=0-3        välj SSL-protokoll; 0=automatiskt,\n"
#~ "                                1=SSLv2 2=SSLv3 3=TLSv1\n"
#~ "\n"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Syntaxfel i \"Set-Cookie\" vid tecknet \"%c\".\n"

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: Kan inte konvertera \"%s\" till en IP-adress.\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: ogiltigt kommando\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Kunde inte hitta proxyvärden.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: Omdirigeringscykel upptäckt.\n"

#~ msgid ""
#~ "\n"
#~ "CTRL+Break received, redirecting output to `%s'.\n"
#~ "Execution continued in background.\n"
#~ "You may stop Wget by pressing CTRL+ALT+DELETE.\n"
#~ msgstr ""
#~ "\n"
#~ "CTRL+Break mottaget, omdirigerar utdata till \"%s\".\n"
#~ "Programkörningen fortsätter i bakgrunden.\n"
#~ "Du kan stoppa Wget genom att trycka CTRL+ALT+DELETE.\n"

#~ msgid "Connection to %s:%hu refused.\n"
#~ msgstr "Anslutning till %s:%hu nekas.\n"

#~ msgid "Will try connecting to %s:%hu.\n"
#~ msgstr "Försöker ansluta till %s:%hu.\n"

#~ msgid "Unknown/unsupported protocol"
#~ msgstr "Okänt protokoll/protokollet stöds inte"

#~ msgid "Invalid port specification"
#~ msgstr "Ogiltig portspecifikation"

#~ msgid "%s: Cannot determine user-id.\n"
#~ msgstr "%s: Kan inte avgöra användar-id.\n"

#~ msgid "%s: Warning: uname failed: %s\n"
#~ msgstr "%s: Varning: uname misslyckades: %s\n"

#~ msgid "%s: Warning: gethostname failed\n"
#~ msgstr "%s: Varning: gethostname misslyckades\n"

#~ msgid "%s: Warning: cannot determine local IP address.\n"
#~ msgstr "%s: Varning: kan inte avgöra lokal IP-adress.\n"

#~ msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
#~ msgstr ""
#~ "%s: Varning: kan inte utföra omvänd uppslagning av lokal IP-adress.\n"

#~ msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
#~ msgstr ""
#~ "%s: Varning: omvänd uppslagning av den lokala adressen gav inget\n"
#~ "fullständigt domännamn!\n"

#~ msgid "%s: Out of memory.\n"
#~ msgstr "%s: Slut på minne.\n"

#~ msgid "%s: Redirection to itself.\n"
#~ msgstr "%s: Omdirigering till sig själv.\n"

#~ msgid "Error (%s): Link %s without a base provided.\n"
#~ msgstr "Fel (%s): Länk %s given utan en bas.\n"

#~ msgid "Error (%s): Base %s relative, without referer URL.\n"
#~ msgstr "Fel (%s): Basen %s relativ utan hänvisar-URL.\n"

#~ msgid ""
#~ "Local file `%s' is more recent, not retrieving.\n"
#~ "\n"
#~ msgstr ""
#~ "Lokala filen \"%s\" är nyare, hämtar inte.\n"
#~ "\n"
