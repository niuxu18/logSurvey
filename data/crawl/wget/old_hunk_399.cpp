# translation of wget-1.12.pre5.po to translation-team-fi
# Finnish messages for wget.
# Copyright © 2005, 2009 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Proofreading by Tero Jänkä and others.#
# Petri T. Koistinen <petri.koistinen@iki.fi>, 2005.
# Jorma Karvonen <karvonen.jorma@gmail.com>, 2008-2009.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-10 00:34+0200\n"
"Last-Translator: Jorma Karvonen <karvonen.jorma@gmail.com>\n"
"Language-Team: Finnish <translation-team-fi@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=(n != 1);\n"
"X-Generator: KBabel 1.11.4\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Tuntematon järjestelmävirhe"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: valitsin ”%s” on moniselitteinen\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: valitsin ”--%s” ei salli argumenttia\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: valitsin ”%c%s” ei salli argumenttia\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: valitsin ”%s” vaatii argumentin\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: tuntematon valitsin ”--%s”\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: tuntematon valitsin ”%c%s”\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: valitsin ei kelpaa – %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: valitsin on virheellinen – %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: valitsin vaatii argumentin – %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: valitsin ”-W %s” on moniselitteinen\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: valitsin ”-W %s” ei salli argumentteja\n"

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
msgstr "”"

#: lib/quotearg.c:273
msgid "'"
msgstr "”"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "muisti loppui"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: lähdeosoite %s ei selvinnyt, osoitetta ei käytetä.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Yhdistetään palvelimeen %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Yhdistetään palvelimeen %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "yhdistetty.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "epäonnistui: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: ei kyetty ratkaisemaan palvelinosoitetta %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Muunnettu %d tiedostoa %s sekunnissa.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Muunnetaan linkkejä %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "ei ole tehtävää.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Ei voida muuntaa linkkejä tiedostossa %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Ei voi poistaa tiedostoa %s: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Tiedostoa %s ei voitu varmuuskopioida tiedostoon %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Syntaksivirhe Set-Cookiessa: %s kohdassa %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr ""
"Eväste, joka tuli osoitteesta %s yritti asettaa verkkotunnukseksi %s.\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Ei voitu avata evästetiedostoa %s: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Virhe kirjoitettaessa tiedostoon %s: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Virhe suljettaessa tiedostoa %s: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Listaustyyppiä ei tueta, yritetään jäsentää unix-listauksena.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s indeksi kohteessa %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "tuntematon aika    "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Tiedosto    "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Hakemisto   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Linkki      "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Epävarma    "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s tavua)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Pituus: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) jäljellä"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s jäljellä"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (vahvistamaton)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Kirjaudutaan nimellä %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Virhe palvelimen vastauksessa. Hallintayhteys suljetaan.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Virhe palvelimen tervehdyksessä.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Kirjoitus epäonnistui. Hallintayhteys suljetaan.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Palvelin hylkäsi kirjautumisen.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Kirjautuminen epäonnistui.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Kirjauduttu!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Palvelinvirhe, järjestelmän tyyppiä ei voitu päätellä.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "valmis.  "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "valmis.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tuntematon tyyppi ”%c”. Hallintayhteys suljetaan.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "valmis."

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD:tä ei tarvita.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Hakemistoa %s ei ole.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD:tä ei vaadita.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "PASV-siirtoa ei voitu aloittaa.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "PASV-vastausta ei voitu jäsentää.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "ei voitu yhdistää %s porttiin %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bind-virhe (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Virheellinen PORTti.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST epäonnistui, aloitetaan alusta.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Etätiedosto %s on olemassa.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Tiedostoa %s ei ole.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Tiedostoa %s ei ole.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Tiedostoa tai hakemistoa %s ei ole.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s on ilmestynyt.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, suljetaan hallintayhteys.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - tiedonsiirtoyhteys: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Hallintayhteys suljettu.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Tiedonsiirto keskeytetty.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Tiedostoa %s ei noudeta, koska se on jo paikalla.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(yritys:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - kirjoitettu vakiotulosteeseen %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s tallennettu [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Poistetaan %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Listaus tallennetaan väliaikaisesti tiedostoon %s.\n"

#  Tähän lisäsin ylimääräisen sanan, jotta lause alkaisi isolla kirjaimella.
#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "Listatiedosto %s poistettu.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Rekursiosyvyys %d on ylittänyt sallitun syvyyden %d.\n"

#  Kahdessa seuraavassa olen otaksunut, että etätiedosto
#  ja paikallinen ovat samannimisiä ja siksi tiedoston
#  nimen paikkaa voi vaihtaa.
#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "Etätiedosto %s ei ole uudempi kuin paikallinen – ei noudeta.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Etätiedosto %s on uudempi kuin paikallinen – noudetaan.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Koot eivät täsmää (paikallinen %s) – noudetaan.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Symbolisen linkin nimi on virheellinen, ohitetaan.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Oikea symbolinen linkki %s -> %s on jo paikallaan.\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Luodaan symbolinen linkki %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Ei tukea symbolisille linkeille, ohitetaan %s.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Ohitetaan hakemisto %s.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: tuntematon/tukematon tiedostotyyppi.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: vääristynyt aikaleima.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Hakemistoja ei noudeta, koska syvyys on %d (raja %d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Hakemiston %s sisältöä ei noudeta, koska se on hylätty.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "Hylätään %s.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Virhe kohteessa %s; se on erilainen kuin %s: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Hakulause %s ei löytänyt mitään.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "HTML-muotoiltu indeksi on kirjoitettu tiedostoon %s [%s].\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "HTML-muotoiltu indeksi on kirjoitettu tiedostoon %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "VIRHE"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "VAROITUS"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s ei esittänyt varmennetta.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Varmenne %s ei ole luotettava.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: Varmenteella %s ei ole tunnettua julkaisijaa.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: Varmenne %s on vanhentunut.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Virhe alustettaessa X509-varmennetta: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Varmennetta ei löytynyt\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Virhe jäsennettäessä varmennetta: %s.\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Varmenne ei ole vielä voimassa\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Varmenne on vanhentunut\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "Varmenteen omistaja ei täsmää palvelimen nimeen %s\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Tuntematon palvelin"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Väliaikainen virhe nimipalvelussa"

#: src/host.c:364
msgid "Unknown error"
msgstr "Tuntematon virhe"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Selvitetään osoitetta %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "epäonnistui: Palvelimelle ei ole IPv4/IPv6-osoitteita.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "epäonnistui: aikaraja ylittyi.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Epätäydellistä linkkiä %s ei voitu selvittää.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: virheellinen URL %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "HTTP-pyynnön kirjoitus epäonnistui: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Ei otsakkeita, oletetaan HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "SSL otetaan pois päältä tapahtuneiden virheiden johdosta.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "POST-metodin data-tiedosto %s puuttuu: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Käytetään uudelleen yhteyttä %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Vastaanotto välityspalvelimelta epäonnistui: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Välityspalvelintunnelointi epäonnistui: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s-pyyntö lähetetty, odotetaan vastausta... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Yhtään dataa ei vastaanotettu.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Lukuvirhe (%s) otsakkeissa.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Tuntematon todennusjärjestelmä.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Todentaminen epäonnistui.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Tiedostoa %s ei noudeta, koska se on jo paikalla.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Väärin muotoiltu Status-otsake"

#: src/http.c:2095
msgid "(no description)"
msgstr "(ei kuvausta)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Sijainti: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "määrittelemätön"

#: src/http.c:2156
msgid " [following]"
msgstr " [seurataan]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Tiedosto on jo kokonaan noudettu.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Pituus: "

#: src/http.c:2263
msgid "ignored"
msgstr "jätetty huomiotta"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Tallennetaan kohteeseen %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Varoitus: HTTP ei tue jokerimerkkejä.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Hakurobottitila aktivoitu. Tarkista, onko etätiedosto olemassa.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Tiedostoon %s ei voitu kirjoittaa (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "SSL-yhteyden muodostaminen ei onnistunut.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "VIRHE: Edelleenohjaus (%d) ilman sijaintia.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Etätiedostoa ei ole – rikkinäinen linkki!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s VIRHE %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "”Last-modified”-otsake puuttuu – aikaleimat poistettu käytöstä.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"”Last-modified”-otsake on virheellinen – aikaleima jätetty huomiotta.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Palvelimen tiedosto %s ei ole paikallista uudempi – ei noudeta.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Koot eivät täsmää (paikallinen %s) – noudetaan.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Etätiedosto on uudempi, noudetaan.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Etätiedosto on olemassa ja saattaisi sisältää linkkejä muihin resursseihin – "
"noudetaan.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Etätiedosto on olemassa, mutta ei sisällä yhtään linkkiä – ei noudeta.\n"
"\n"

#  Tämä kuten useat aiemmat yllä ovat lokitiedostorivejä, joilla
#  kommentoidaan hakurobotin tekemisiä ja tekemättä jättämisiä.
#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Etätiedosto on olemassa ja saattaa sisältää lisää linkkejä.\n"
"Rekursio ei kuitenkaan ole käytössä joten linkkejä ei seurata.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Etätiedosto on olemassa.\n"
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
"%s (%s) - kirjoitettu vakiotulosteeseen %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - %s tallennettu [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Yhteys suljettu tavun %s kohdalla. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Lukuvirhe tavun %s kohdalla (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Lukuvirhe tavun %s/%s kohdalla (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC osoittaa kohteeseen %s, jota ei ole olemassa.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Ei voitu lukea %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Virhe kohdassa %s rivillä %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Syntaksivirhe kohdassa %s rivillä %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Tuntematon komento %s kohdassa %s rivillä %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Varoitus: Sekä järjestelmän että käyttäjän wgetrc osoittavat tiedostoon %"
"s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Komento --execute %s on virheellinen\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Virheellinen boolean %s, valitse ”on” tai ”off”.\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Numero %s on virheellinen.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Tavun arvo %s on virheellinen.\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Aikaväli %s on virheellinen\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Arvo %s on virheellinen.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Otsake %s on virheellinen.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Edistymistyyppi %s on virheellinen.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Virheellinen rajoite %s,\n"
"    valitse [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Koodaus %s on virheellinen\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: lokaalia ei ole asetettu\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Muunnosta muodosta %s muotoon %s ei tueta\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Kohdattu puutteellinen tai virheellinen monitavusekvenssi\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Käsittelemätön errno-virhenumero %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode ei onnistunut (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode ei onnistunut (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s vastaanotettu, ohjataan tulostus tiedostoon %s.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s vastaanotettu.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; loki poistettu käytöstä.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Käyttö: %s [VALITSIN]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Pakolliset argumentit pitkille valitsimille ovat pakollisia myös lyhyille.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Käynnistys:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version                   näytä Wget-versio ja lopeta.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help                      näytä tämä ohje.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr ""
"  -b,  --background                siirry taustalle käynnistyksen jälkeen.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""
"  -e,  --execute=KOMENTO           suorita ”.wgetrc”-tyylinen komento.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Loki- ja syötetiedostot:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=TIEDOSTO      kirjaa viestit TIEDOSTOon.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=TIEDOSTO    lisää viestit TIEDOSTOon.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug                     näytä paljon vianetsintätietoja.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""
"       --wdebug                    näytä ”Watt-32”-virheenjäljitystuloste.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet                     ole hiljaa (ei tulostusta).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose                   näytä yksityiskohtia (oletus).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose                ei yksityiskohtia, muttei hiljainen.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=TIEDOSTO       noudettavat URL:t löydetty paikallisesta "
"tai ulkoisesta TIEDOSTOsta.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html                käsittele syötetiedosto HTML:nä.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            ratkaisee HTML syötetiedostolinkit (-i -F)\n"
"                             suhteessa URL:ään.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Noutaminen:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=MÄÄRÄ               yrityskertojen MÄÄRÄ (0 on rajaton).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused         yritä uudelleen vaikka yhteys "
"torjuttaisiin.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=TIEDOSTO  kirjoita dokumentit TIEDOSTOon.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber                ohita noudot, jotka korvaisivat jo\n"
"                                   olemassaolevia tiedostoja.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                  jatka osittain noudetun tiedoston "
"noutamista.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=TYYPPI           valitse edistymismittarin tyyppi.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping              nouda vain paikallista uudemmat "
"tiedostot.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response           näytä palvelimen vastaus.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                    älä nouda mitään.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr "  -T,  --timeout=SEKUNTIA          kaikkien aikakatkaisujen pituus.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEKUNTIA      nimipalveluhaun aikakatkaisun pituus.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SEKUNTIA  yhdistämisen aikakatkaisun pituus.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SEKUNTIA     vastaanoton aikakatkaisun pituus.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SEKUNTIA             odota SEKUNTIA noutojen välillä.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"      --waitretry=SEKUNTIA        odota 1...SEKUNTIA noutojen "
"uudelleenyritysten välillä.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait               odota 0...2*WAIT sekuntia noutojen "
"välillä.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                  välityspalvelin pois päältä.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=LUKU                noutokiintiön koko.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=OSOITE       liitä (palvelin tai IP-) OSOITE "
"paikallisesti.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=NOPEUS         rajoita noutoNOPEUS.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache              älä säilytä nimipalvelutietoja "
"välimuistissa.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=KJ    käytä vain käyttöjärjestelmän\n"
"                                   sallimia tiedostonimiä.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ei oteta huomioon merkkikokoa kun verrataan "
"tiedostoja/hakemistoja.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr ""
"  -4,  --inet4-only                ota yhteyttä vain IPv4-osoitteisiin.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr ""
"  -6,  --inet6-only                ota yhteyttä vain IPv6-osoitteisiin.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=PERHE       ota yhteyttä ensin PERHEen määrittemään "
"osoitteeseen,\n"
"                                   vaihtoedot: IPv6, IPv4 tai none.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr "       --user=KÄYTTÄJÄ             FTP- ja HTTP-käyttäjänimi.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --password=SALASANA         FTP- ja HTTP-salasana.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --password=SALASANA         kehote salasanoille.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                    IRI-tuki pois päältä.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=ENC        käytä ENC paikallisena koodauksena IRI:"
"lle.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=ENC       käytä ENC etäkoodauksen oletuksena.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Hakemistot:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd  --no-directories            älä luo hakemistoja.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories         pakotettu hakemistojen luonti.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories       älä luo palvelinhakemistoja.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories      käytä protokollan nimeä hakemistoissa.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""
"  -P,  --directory-prefix=ETULIITE tallenna tiedostot hakemistoon "
"ETULIITE/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=LUKU             ohita ensimmäiset LUKU hakemistoa.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP-valitsimet:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=KÄYTTÄJÄ        HTTP-käyttäjänimi.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-passwd=SALASANA      HTTP-salasana.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache                  älä käytä palvelimelle välivarastoitua "
"dataa.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NAME     Vaihda oletussivun nimi (normaalisti\n"
"                               se on ”index.html”.).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension          tallenna HTML/CSS-dokumentit oikeilla "
"tiedostonimipäätteillä.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length             älä välitä ”Content-Length”-"
"otsakekentästä.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""
"       --header=MERKKIJONO         lisää MERKKIJONO otsakkeiden sekaan.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect              uudelleenohjausten sallittu maksimimäärä "
"sivua kohden.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=KÄYTTÄJÄ       välityspalvelimen käyttäjänimi.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-passwd=SALASANA     välityspalvelimen salasana\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL               liitä ”Referer: URL”-otsake HTTP-"
"pyyntöön.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr ""
"       --save-headers              tallenna HTTP-otsakkeet tiedostoon.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENTTI        tunnistaudu Wget/version sijasta AGENTTI-"
"käyttäjäksi.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive        ota pois käytöstä jatkuvat yhteydet.\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies                älä käytä evästeitä.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=TIEDOSTO     lue evästeet ennen istuntoa TIEDOSTOsta.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=TIEDOSTO     tallenna evästeet istunnon jälkeen "
"TIEDOSTOon.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies      hae ja tallenna (väliaikaiset) "
"istuntoevästeet.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=MERKKIJONO      käytä POST-metodia; lähetä MERKKIJONO "
"datana.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=TIEDOSTO        käytä POST-metodia; lähetä TIEDOSTOn "
"sisältö.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   kunnioittaa Content-Disposition-otsaketta "
"kun\n"
"                               valitaan paikalliset tiedostonimet "
"(KOKEELLINEN).\n"

#  Challenge viittaa tässä ilmeisesti challenge-response method eli haastemenetelmään
#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Lähetä Basic HTTP -todennustiedot "
"odottamatta\n"
"                               ensin palvelimen haastetta\n"
".\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS (SSL/TLS) -valitsimet:\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR        valitse turvaprotokolla, vaihtoehdot:\n"
"                                   auto, SSLv2, SSLv3 tai TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate      älä tarkista palvelimen varmennetta.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=TIEDOSTO      asiakasvarmenne.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TYYPPI   asiakasvarmenteen tyyppi: PEM tai DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=TIEDOSTO      salainen avain.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""
"       --private-key-type=TYYPPI   salaisen avaimen tyyppi: PEM tai DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=TIEDOSTO   juurivarmennekokoelma.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr "       --ca-directory=HAKEMISTO    juurivarmenteiden hajautuslista.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=TIEDOSTO      satunnaista dataa SSL PRNG:n siemeneksi.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=TIEDOSTO         EGD-pistoke, josta saa satunnaista "
"dataa.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP-valitsimet:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf                  Käytä ”Stream_LF”-muotoa kaikille "
"binäärisille FTP-tiedostoille.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=KÄYTTÄJÄ         FTP-käyttäjänimi.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=SALASANA     FTP-salasana.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing         älä poista ”.listing”-tiedostoja.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob                   älä täydennä tiedostonimiä.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp            älä käytä ”passiivista” siirtotapaa.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks             rekursiossa: hae linkitetyt tiedostot\n"
"                                   (ei hakemistoja).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Rekursiivinen nouto:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive                 nouda rekursiivisesti.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=LUKU                rekursiosyvyys (inf ja 0 = ääretön).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after              poista tiedostot haun jälkeen.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links             aseta haettujen HTML- tai CSS-sivujen "
"linkit\n"
"                                   osoittamaan paikallisiin tiedostoihin.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted          ennen tiedoston X muuttamista,\n"
"                                   varmuuskopioi nimellä ”X.orig”.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted          ennen tiedoston X muuttamista,\n"
"                                   varmuuskopioi nimellä ”X.orig”.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror                    oikovalitsin, yhtäkuin -r -N -l inf\n"
"                                   --no-remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites           nouda kaikki kuvat yms. HTML-sivun\n"
"                                   näyttämiseen tarvittava.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments           käytä HTML-kommenttien tiukkaa\n"
"                                   (SGML) käsittelyä.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr ""
"Rekursiivinen hyväksyntä/hylkäys:\n"
"(listojen osat erotellaan pilkuin)\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr "  -A,  --accept=LISTA              lista hyväksytyistä päätteistä.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr "  -R,  --reject=LISTA              lista hylätyistä päätteistä.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LISTA             lista hyväksytyistä verkkotunnuksista.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LISTA     lista hylätyistä verkkotunnuksista.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                seuraa ftp-linkkejä HTML-dokumenteista.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTA         lista seurattavista HTML-tageista.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTA         lista ohitettavista HTML-tageista.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                siirry rekursiossa eri palvelimille.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""
"  -L,  --relative                  seuraa vain suhteellisia linkkejä.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""
"  -I,  --include-directories=LISTA lista hyväksytyistä hakemistoista.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LISTA lista hylätyistä hakemistoista.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 älä nouse hakemistorakenteessa.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Lähetä virheraportit ja ehdotukset osoitteeseen <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, ei-vuorovaikutteinen tiedostojen noutaja.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Salasana käyttäjälle %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Salasana: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Lokaali: "

#: src/main.c:782
msgid "Compile: "
msgstr "Käännä: "

#: src/main.c:783
msgid "Link: "
msgstr "Linkitä: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s käännetty käyttöjärjestelmälle VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s käännetty järjestelmään %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (ympäristö)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (käyttäjä)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (järjestelmä)\n"

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
"Lisenssi GPLv3+: GNU GPL versio 3 tai myöhäisempi\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Tämä on vapaa ohjelmisto: voit muuttaa sitä vapaasti ja jakaa sitä "
"edelleen.\n"
"Ohjelmalle EI OLE MITÄÄN TAKUUTA siinä laajuudessa, mitä laki sallii.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Alunperin kirjoittanut Hrvoje Nikšić <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Nykyinen ylläpitäjä Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Lähetä virheraportit ja kysymykset osoitteeseen <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Kirjoita ”%s --help” saadaksesi lisää valitsimia.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: virheellinen valitsin – ”-n%c”\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Ei voi näyttää yksityiskohtia ja olla hiljaa yhtä aikaa.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Vanhoja tiedostoja ei voi aikaleimata ja jättää koskematta yhtä aikaa.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr ""
"Argumentteja ”--inet4-only” ja ”--inet6-only” ei voi käyttää yhtä aikaa.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Argumentteja ”-k” ja ”-O” ei voi määritellä, jos on annettu useita URL-"
"osoitteita, tai\n"
"yhdessä argumenttien ”-p” tai ”-r” kanssa. Lisätietoja käsikirjasta.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"VAROITUS: argumentin ”-O” yhdistäminen argumentin ”-r” tai ”-p” kanssa "
"tarkoittaa, että kaikki\n"
"ladattu sisältö sijoitetaan yhteen määrittelemääsi tiedostoon.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"VAROITUS: aikaleimausta ei tapahdu käytettäessä argumenttia ”-O”. "
"Lisätietoja\n"
"käsikirjasta.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Tiedostoa ”%s” ei noudeta, koska se on jo paikalla.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""
"Argumentteja ”--ask-password” ja ”--password” ei voi käyttää yhtä aikaa.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL puuttuu\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Tässä versiossa ei tueta IRI:jä\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"VAROITUS: Vakiotulostetta ei voi arvata uudelleen binääritilassa;\n"
"          haettu tiedosto saattaa sisältää sopimattomia rivipäätteitä.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Tiedostosta %s ei löytynyt URLeja.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"VALMIS --%s--\n"
"Noudettu: %d tiedostoa, %s kohteesssa %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Haun %s:n tavun kiintiö YLITETTY!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Ohjelman suoritus jatkuu taustalla.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Ohjelman suoritus jatkuu taustalla, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "Tuloste kirjoitetaan tiedostoon %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Ei löytynyt käyttökelpoista pistokeajuria.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: varoitus: %s-merkintä esiintyy kaikkien koneiden nimien edessä\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: tuntematon merkki ”%s”\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Käyttö: %s NETRC [PALVELIMEN NIMI]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: tiedoston %s tilaa ei voitu lukea: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "VAROITUS: satunnaislukujen lähde on heikkolaatuinen.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"PRNG:tä ei voitu alustaa; harkitse ”--random-file”-valitsimen käyttöä.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: ei voida todentaa kohteen %s varmennetta, myöntäjä: %s:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Ei voida paikallisesti todentaa myöntäjän valtuutusta.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Itse allekirjoitettu varmenne kohdattu.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Varmenne ei ole vielä voimassa.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Varmenne on vanhentunut.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr "%s: varmenteen yleinen nimi %s ei täsmää palvelimen nimeen %s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: varmenteen yleinen nimi on virheellinen (sisältää NUL-merkin).\n"
"Tämä saattaa olla merkki siitä, että palvelin ei ole se, joka väittää\n"
"olevansa (toisin sanoen, se ei todella ole %s).\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"Ottaaksesi yhteyden kohteeseen %s:n turvattomasti, käytä ”--no-check-"
"certificate”-valitsinta.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ ohitetaan %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Pistetyylin määrittely %s on virheellinen; jätetään muuttamatta.\n"

#  Tämä ja seuraava ovat täysiä arvoituksia.
#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  eta %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   in "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "REAALIAIKAkellon taajuutta ei saatu: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Poistetaan %s, koska sen pitäisi olla hylätty.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Ei voitu avata tiedostoa %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Ladataan robots.txt, älä välitä virheistä.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Virhe tulkittaessa välityspalvelimen URLia %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Virhe välityspalvelimen URLissa %s: Sen täytyy olla HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d edelleenohjausta ylitetty.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Luovutetaan.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Yritetään uudelleen.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Ei löydetty rikkinäisiä linkkejä.\n"
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
"Löydettiin %d rikkinäinen linkki.\n"
"\n"
msgstr[1] ""
"Löydettiin %d rikkinäistä linkkiä.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Ei virhettä"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Kaavaa %s ei tueta"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Kaava puuttuu"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Palvelimen nimi on virheellinen"

#: src/url.c:641
msgid "Bad port number"
msgstr "Portin numero on virheellinen"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Käyttäjätunnus on virheellinen"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Päättämätön numeerinen IPv6-osoite"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6-osoitteita ei tueta"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Virheellinen numeerinen IPv6-osoite"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "HTTPS-tukea ei ole käännetty koodiin"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Riittävän muistin varaaminen epäonnistui, muisti loppui.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Muisti loppui, %ld tavun varaaminen epäonnistui.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: tekstipuskuri on liian iso (%ld tavua), keskeytetään.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Ohjelman suoritus jatkuu taustalla, pid %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Symbolisen linkin %s poistaminen epäonnistui: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL                  lisää URL suhteellisten linkkien "
#~ "alkuun\n"
#~ "                                   ”-F -i”-valintojen määrittelemään "
#~ "tiedostoon.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions      säilytä noudetun tiedoston oikeudet.\n"

#~ msgid "Cannot specify -r, -p or -N if -O is given.\n"
#~ msgstr ""
#~ "Ei voida määritellä argumentteja ”-r”, ”-p” tai ”-N” jos ”-O” on "
#~ "annettu.\n"