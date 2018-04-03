# Catalan translation of wget.
# Copyright © 2002, 2003, 2005, 2007, 2008 Free Software Foundation, Inc.
# This file is distributed under the same licence as the wget package.
# Jordi Valverde Sivilla <jordi@eclipsi.net>, 2002.
# Ernest Adrogué Calveras <eadrogue@gmx.net>, 2003.
# Jordi Mallach <jordi@gnu.org>, 2003, 2005, 2007, 2008.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.11.3\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2008-06-10 00:40+0200\n"
"Last-Translator: Jordi Mallach <jordi@gnu.org>\n"
"Language-Team: Catalan <ca@dodds.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=n!=1;\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "S'ha produït un error desconegut"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: l'opció «%s» és ambigua\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: l'opció «--%s» no admet arguments\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: l'opció «%c%s» no admet arguments\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: l'opció «%s» requereix un argument\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: l'opció «--%s» és desconeguda\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: l'opció «%c%s» és desconeguda\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: l'opció és il·legal -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: l'opció no és vàlida -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: l'opció requereix un argument -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: l'opció «-W %s» és ambigua\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: l'opció «-W %s» no admet arguments\n"

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

# Bind? jm
#: src/connect.c:207
#, fuzzy, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: no s'ha pogut resoldre l'adreça de vinculació «%s»; s'està inhabilitant "
"la connexió.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "S'està connectant a %s|%s|:%d..."

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "S'està connectant a %s:%d..."

#: src/connect.c:358
msgid "connected.\n"
msgstr "connectat.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "error: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: no s'ha pogut resoldre l'adreça del servidor «%s»\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "S'han convertit %d fitxers en %s segons.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "S'està convertint %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "res a fer.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "No s'han pogut convertir els enllaços de «%s»: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "No s'ha pogut suprimir «%s»: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "No es pot fer una còpia de %s com a %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr ""
"S'ha produït un error de sintaxi a la capçalera Set-Cookie: %s a la posició %"
"d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "La galeta provinent de %s ha intentat establir el domini a %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "No es pot obrir el fitxer de cookies «%s»: %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "S'ha produït un error en escriure a «%s»: %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "S'ha produït un error en tancar «%s»: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"El tipus de llista no és suportat, es prova amb l'analitzador de Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Índex de /%s a %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "data desconeguda   "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Fitxer      "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Directori   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Enllaç      "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "No és segur "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s octets)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Mida: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) restant"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s restant"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (no autoritatiu)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "S'està entrant com a «%s» ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr ""
"S'ha produït un error en la resposta del servidor, es tanca la connexió de "
"control.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "S'ha produït un error en el missatge de benvinguda del servidor.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr ""
"S'ha produït un error d'escriptura, s'està tancant la connexió de control.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "El servidor rebutja les peticions d'entrada.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Entrada incorrecta.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "S'ha entrat amb èxit!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr ""
"S'ha produït un error del servidor, no es pot determinar el tipus de "
"sistema.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "fet.     "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "fet.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "El tipus «%c» és desconegut , es tanca la connexió de control.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "fet.   "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD innecessari.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"El directori «%s» no existeix.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD no requerit.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "No s'ha pogut iniciar la transferència PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "No s'ha pogut analitzar la resposta PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "no s'ha pogut connectar a %s port %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "S'ha produït un error en vincular (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT incorrecte.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST ha fallat, s'està començant des del principi.\n"

#: src/ftp.c:957
#, fuzzy, c-format
msgid "File %s exists.\n"
msgstr ""
"El fitxer remot existeix.\n"
"\n"

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"El fitxer «%s» no existeix.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"El fitxer «%s» no existeix.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"El fitxer o directori «%s» no existeix.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s ha començat a existir.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, es tanca la connexió de control.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Connexió de dades: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Connexió de control tancada.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "S'ha avortat la transferència de dades.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "El fitxer «%s» ja existeix, no es baixa.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(intent:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - s'ha desat «%s» [%s/%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - s'ha desat «%s» [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "S'està suprimint %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "S'utilitza «%s» com a fitxer de llistat temporal.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "S'ha suprimit «%s».\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "La profunditat de recursió %d excedeix el màxim permès %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "El fitxer remot no és més nou que el local «%s» -- no es baixa.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"El fitxer remot és més nou que el local «%s» -- s'està baixant.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Els fitxers no tenen la mateixa mida (local %s) -- s'està baixant.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "El nom de l'enllaç simbòlic no és correcte; s'omet.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Ja hi ha un enllaç simbòlic correcte %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "S'està creant l'enllaç simbòlic %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "No es suporten enllaços simbòlics; s'omet l'enllaç «%s».\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "S'està ometent el directori «%s».\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: tipus de fitxer desconegut o no suportat.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: la marca de temps és corrupta..\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "No es baixaran els directoris ja que la profunditat és %d (max %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "No es descendeix a «%s» ja que està exclòs, o no inclòs.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "S'està rebutjant «%s».\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "S'ha produït un error en comparar %s amb %s: %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Cap coincidència amb el patró «%s».\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "S'ha escrit un índex HTMLitzat a «%s» [%s].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "S'ha escrit un índex HTMLitzat a «%s».\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "ERROR"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "AVÍS"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s no ha presentat cap certificat.\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: %s no ha presentat cap certificat.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "  El certificat ha caducat.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s: %s no ha presentat cap certificat.\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr ""
"S'ha produït un error en analitzar la URL del servidor intermediari %s: %s.\n"

#: src/gnutls.c:283
#, fuzzy
msgid "The certificate has not yet been activated\n"
msgstr "  El certificat encara no és vàlid.\n"

#: src/gnutls.c:288
#, fuzzy
msgid "The certificate has expired\n"
msgstr "  El certificat ha caducat.\n"

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"%s: el nom comú «%s» del certificat no concorda amb el nom del servidor "
"demanat «%s».\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Servidor desconegut"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "S'ha produït un error temporal en la resolució de noms"

#: src/host.c:364
msgid "Unknown error"
msgstr "S'ha produït un error desconegut"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "S'està resolent %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "error: No hi ha adreces IPv4/IPv6 per al servidor.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "error: s'ha exhaurit el temps.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: No s'ha pogut resoldre l'enllaç incomplet %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: L'URL %s no és vàlid: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "S'ha produït un error en escriure la petició HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "No hi ha capçaleres, s'assumeix HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "S'està inhabilitant SSL a causa dels errors trobats.\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Manca el fitxer de dades POST «%s»: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "S'està reutilitzant la connexió a %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr ""
"S'ha produït un error en llegir la resposta del servidor intermediari: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Ha fallat la tunelització del servidor intermediari: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s: s'ha enviat la petició, s'està esperant una resposta..."

#: src/http.c:1811
msgid "No data received.\n"
msgstr "No s'ha rebut cap dada\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "S'ha produït un error de lectura (%s) a les capçaleres.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "L'esquema d'autenticació és desconegut.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Ha fallat l'autorització.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"El fitxer «%s» ja existeix, no es baixa.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "La línia d'estat és malformada"

#: src/http.c:2095
msgid "(no description)"
msgstr "(sense descripció)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Ubicació: %s%s\n"

# és femení: ubicació/mida. eac
#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "no especificada"

#: src/http.c:2156
msgid " [following]"
msgstr " [es segueix]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    El fitxer ja s'ha baixat totalment; res a fer.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Mida: "

#: src/http.c:2263
msgid "ignored"
msgstr "s'ignora"

#: src/http.c:2365
#, fuzzy, c-format
msgid "Saving to: %s\n"
msgstr "S'està desant a: «%s»\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Avís: En HTTP no es suporten patrons.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Mode aranya habilitat. Comprova si el fitxer remot existeix.\n"

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "No s'ha pogut escriure a «%s» (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "No s'ha pogut establir la connexió SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERROR: Redirecció (%d) sense ubicació.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "El fitxer remot no existeix -- enllaç trencat!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERROR: %d %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr ""
"Falta la capçalera Last-modified -- s'han inhabilitat les marques de temps.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Capçalera Last-modified no vàlida -- s'omet la marca de temps.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"El fitxer remot no és més nou que el local «%s» -- no es baixa.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Les mides dels fitxers no coincideixen (local %s) -- s'està baixant.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "El fitxer remot és més nou, s'està baixant.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"El fitxer remot existeix i pot contenir enllaços a altres recursos -- s'està "
"obtenint.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"El fitxer remot existeix però no conté cap enllaç -- no s'obté.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"El fitxer remot existeix i podria contenir més enllaços,\n"
"però la recursió és inhabilitada -- no es baixa.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"El fitxer remot existeix.\n"
"\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: L'URL %s no és vàlid: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - s'ha desat «%s» [%s/%s]\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - s'ha desat «%s» [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - S'ha tancat la connexió a l'octet %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - S'ha produït un error de lectura a l'octet %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - S'ha produït un error de lectura a l'octet %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: La variable WGETRC apunta a %s, que no existeix.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: No s'ha pogut llegir %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: S'ha produït un error a %s, línia %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: S'ha produït un error de sintaxi a %s, línia %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: L'ordre «%s» és desconeguda a %s, línia %d.\n"

# es refereix a variables d'entorn o què? eac
# es refereix als dotfiles .wgetrc, etc. jm
#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: Avís: L'wgetrc del sistema i de l'usuari apunten a «%s».\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: L'ordre --execute «%s» no és vàlida.\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: El booleà «%s» no és vàlid; useu «on» o «off».\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: El número «%s» no és vàlid.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: L'octet «%s» no és vàlid.\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: El període de temps «%s» no és vàlid.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: El valor «%s» no és vàlid.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: La capçalera «%s» no és vàlida.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: El tipus d'indicador de progrés «%s» no és vàlid.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: La restricció «%s» no és vàlida, useu [unix|windows],[lowercase|"
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
"%s rebut, la sortida es redirigeix a «%s».\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"S'ha rebut %s.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; s'està inhabilitant el registre.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Forma d'ús: %s [OPCIÓ]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Els arguments obligatoris per les opcions llargues també ho són per les "
"curtes.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Inici:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           mostra la versió del Wget i surt.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              mostra aquesta ajuda.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        vés a segon terme després de l'inici.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e, --execute=ORDRE      executa una ordre d'estil «.wgetrc».\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Registres i fitxer d'entrada:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr ""
"  -o,  --output-file=FITXER   desa els missatges del programa a FITXER.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FITXER afegeix els missatges a FITXER.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug                mostra molta informació de depuració.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""
"      --wdebug                mostra informació de depuració de Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet                mode silenciós (cap sortida).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose              mode detallat (per defecte).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --non-verbose          mode no detallat, però tampoc del tot "
"silenciós.\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=FITXER    llegeix les URL de FITXER.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html           tracta el fitxer d'entrada com a HTML.\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping            només baixa fitxers més nous que els "
"locals.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Descàrrega:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=NOMBRE            estableix el nombre de reintents (0=sense "
"limit).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       reintenta encara que es rebutje la "
"connexió.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FITXER  escriu els documents a FITXER.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              omet descàrregues de fitxers ja existents.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  -­continue               continua obtenint un fitxer descàrregat "
"parcialment.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=TIPUS          selecciona el tipus d'indicador de "
"progrés.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            només baixa fitxers més nous que els "
"locals.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         mostra les respostes del servidor.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  no baixes res.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SEGONS          estableix tots els temps d'espera a "
"SEGONS.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEGONS      estableix el temps d'espera de DNS a "
"SEGONS.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SEGONS  estableix el temps d'espera de connexió a\n"
"                                 SEGONS.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SEGONS     estableix el temps d'espera de lectura en\n"
"                                 SEGONS.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=SEGONS             fes una pausa de SEGONS entre "
"descàrregues.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEGONS        fes una pausa entre intents de descàrrega "
"de\n"
"                                 1...SEGONS.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             fes una pausa de 0...2*PAUSA segons entre "
"descàrregues.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr ""
"       --no-proxy                inhabilita explícitament l'ús del servidor\n"
"                                 intermediari.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=NOMBRE            estableix la quota de descàrrega en "
"NOMBRE.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADREÇA    vincula't a l'ADREÇA (nom del servidor o IP) "
"a\n"
"                                localhost.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=NOMBRE       estableix el límit d'octets per segon.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache            no uses memòria cau en la resolució de "
"noms\n"
"                                 de domini.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=SO restringeix determinats caràcters dels noms\n"
"                                dels fitxers als que el SO (sistema "
"operatiu)\n"
"                                permeta.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case            descarta les diferències de capitalització "
"quan\n"
"                                es busquen fitxers/directoris coincidents.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              connecta només a adreces IPv4.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              connecta només a adreces IPv6.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILIA   connecta primer a les adreces de la família "
"especificada,\n"
"                                 IPv6, IPv4 o cap.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=USUARI             estableix els usuaris de ftp i http a "
"USUARI.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=CONTRASENYA    estableix la contrasenya de ftp i http a\n"
"                                 CONTRASENYA.\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr ""
"       --password=CONTRASENYA    estableix la contrasenya de ftp i http a\n"
"                                 CONTRASENYA.\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr ""
"       --no-proxy                inhabilita explícitament l'ús del servidor\n"
"                                 intermediari.\n"

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
msgstr "Directoris:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           no crees directoris.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        força la creació de directoris.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""
"  -nH, --no-host-directories       no crees els directoris del servidor.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     usa el nom del protocol als directoris.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIX  desa els fitxers a PREFIX/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=NOMBRE         omet NOMBRE components de l'estructura de\n"
"                                 directoris remota.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Opcions de HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=USUARI      estableix l'usuari http en USUARI.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr ""
"       --http-passwd=PASS      estableix la contrasenya http en PASS.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              no admetes dades de la memòria cau del "
"servidor.\n"

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
"  -E,  --html-extension        desa els documents HTML amb l'extensió «."
"html».\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         descarta la capçalera «Content-Length».\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=CADENA         insereix CADENA entre les capçaleres.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          redireccions màximes permeses per pàgina.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=USUARI     estableix l'usuari pel proxy a USUARI.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""
"       --proxy-passwd=PASS     estableix la contrasenya pel proxy a PASS.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           inclou una capçalera «Referer» a la petició "
"HTTP.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr ""
"       --save-headers          desa les capçaleres HTTP en un fitxer.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT      identifica't com a AGENT en lloc de Wget/"
"VERSIÓ.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    inhabilita el «keep-alive» de HTTP\n"
"                               (connexions persistents)\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            no utilitzes galetes.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=FITXER   carrega les galetes de FITXER abans de\n"
"                               la sessió.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=FITXER   desa les cookies a FITXER després de la "
"sessió.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  carrega i desa les galetes de la sessió\n"
"                               (no permanents)\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=CADENA      usa el mètode POST, envia CADENA com a "
"dades.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FITXER      usa el mètode POST, envia els continguts de\n"
"                               FITXER.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   respecta la capçalera Content-Disposition "
"quan\n"
"                               es seleccionen noms de fitxers locals\n"
"                               (EXPERIMENTAL)\n"

#: src/main.c:576
#, fuzzy
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Envia informació d'autenticació HTTP bàsica\n"
"                               sense primer esperar la negociació del\n"
"                               servidor.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Opcions de HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     selecciona el protocol segur, d'entre auto,\n"
"                                SSLv2, SSLv3, TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   no valides el certificat del servidor.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificat=FITXER      fitxer del certificat del client.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TIPUS tipus de certificat del client, PEM o DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FITXER     fitxer de clau privada.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TIPUS tipus de clau privada, PEM o DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=FITXER  fitxer amb el conjunt de CA.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=DIR       directori on s'emmagatzema una llista de\n"
"                                dispersió de CA.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FITXER    fitxer amb dades aleatòries per a fer de\n"
"                               llavor per al SSL PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=FITXER fitxer que anomena el sòcol EGD amb dades "
"aleatòries.\n"
"\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Opcions de FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=USUARI       estableix l'usuari de ftp a USUARI.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr ""
"       --ftp-password=PASS     estableix la contrasenya de ftp a PASS.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     no suprimeixes els fitxers «.listing».\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               inhabilita l'ús de comodins de fitxers per a "
"FTP.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        inhabilita el mode de transferència «passiu».\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         en mode de recursió, baixa els fitxers\n"
"                               apuntats per enllaços simbòlics que no "
"siguen\n"
"                               directoris\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Descàrrega recursiva:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          baixa de forma recursiva.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=NOMBRE       nivell màxim de recursió (inf o 0 per infinit).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       suprimeix els fitxers locals un cop baixats.\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      fes que els enllaços als HTML baixats apunten\n"
"                            als fitxers locals.\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   fés una còpia dels fitxers com a X.orig abans\n"
"                            de convertir-los.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   fés una còpia dels fitxers com a X.orig abans\n"
"                            de convertir-los.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             opció equivalent -N -r -l inf -no-remove-"
"listings.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    baixa totes les imatges, etc. necessàries per\n"
"                            veure el document HTML.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    activa la gestió estricta (SGML) de comentaris "
"HTML.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Inclusió/exclusió en mode recursiu:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LLISTA             llista separada per comes d'extensions\n"
"                                   acceptades.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LLISTA             llista separada per comes d'extensions\n"
"                                   rebutjades.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LLISTA            llista separada per comes de dominis\n"
"                                   acceptats.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LLISTA    llista separada per comes de dominis\n"
"                                   rebutjats.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                segueix enllaços FTP en documents HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LLISTA        llista separada per comes d'etiquetes "
"HTML\n"
"                                   que es segueixen.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"  -G,  --ignore-tags=LLISTA        llista separada per comes d'etiquetes "
"HTML\n"
"                                   ignorades.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                segueix enllaços a altres llocs en mode\n"
"                                   de recursió.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  només segueix enllaços relatius.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LLISTA llista de directoris acceptats.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LLISTA llista de directoris rebutjats.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 no ascendeixes al directori pare.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Envieu informes d'error i suggeriments a <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, un baixador de xarxa no interactiu.\n"

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
msgstr "Copyright © 2008 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Llicència GPLv3+: GNU GPL versió 3 o posterior\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Aquest és programari lliure: podeu modificar‐lo i redistribuir‐lo si voleu.\n"
"No hi ha CAP GARANTIA, en la mesura que ho permeta la llei.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Escrit originàriament per Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Actualment mantingut per Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Envieu informes d'error i suggeriments a <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Proveu «%s --help» per a veure més opcions.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: l'opció és il·legal -- «-n%c»\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "No es pot donar informació i ser silenciós al mateix temps.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"No té sentit no sobreescriure fitxers i fer marques de temps al mateix "
"temps.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "No es pot especificar inet4-only i --inet6-only a l'hora.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"No es pot especificar -k i -O a l'hora si es donen múltiples URL, o en\n"
"combinació amb -p o -r. Vegeu el manual per a més detalls.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"AVÍS: combinar -O amb -r o -p voldrà dir que tot el contingut baixat es\n"
"posarà a l'únic fitxer que especifiqueu.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"AVÍS: les marques de temps no fan res en combinació amb -O. Vegeu el manual\n"
"per a més detalls.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "El fitxer «%s» ja existeix, no es baixa.\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "No es pot especificar inet4-only i --inet6-only a l'hora.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: falta l'URL\n"

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
msgstr "No s'ha trobat cap URL a %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"FINALITZAT --%s--\n"
"Baixat: %d fitxers, %s en %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "S'ha EXCEDIT la quota de baixada de %s.\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "S'esta continuant en segon terme.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "S'està continuant en segon terme, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "La sortida s'escriurà a «%s».\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: No s'ha trobat cap controlador de sòcol usable.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: avís: el testimoni «%s» apareix abans que cap nom de màquina.\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: component desconegut \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Forma d'ús: %s NETRC [HOST]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: no s'ha pogut determinar l'estat de %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "AVÍS: s'està utilitzant una llavor aleatòria febla.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"No s'ha pogut donar una llavor al PRNG; considereu usar --random-file.\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: no es pot verificar el certificat de %s, emès per «%s»:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  No s'ha pogut verificar localment l'autoritat de l'emetent.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  S'ha trobat un certificat autosignat.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  El certificat encara no és vàlid.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  El certificat ha caducat.\n"

#: src/openssl.c:579
#, fuzzy, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: el nom comú «%s» del certificat no concorda amb el nom del servidor "
"demanat «%s».\n"

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
"Per a connectar a %s de manera insegura, useu «--no-check-certificate».\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ s'està ometent %sK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "L'estil de progrés «%s» no és vàlid; no es canvia.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  eta %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   en "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "No es pot obtenir la frequència del rellotge en TEMPS REAL: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "S'està suprimint %s ja que no s'hauria de baixar.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "No es pot obrir %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "S'està llegint el robots.txt; si us plau, ignoreu els errors.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr ""
"S'ha produït un error en analitzar la URL del servidor intermediari %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr ""
"Hi ha un error a la URL del servidor intermediari %s: Ha de ser HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "S'ha excedit el màxim de redireccions (%d).\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"S'està abandonant.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"S'està reintentant.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"No s'ha trobat cap enllaç trencat.\n"
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
"S'ha trobat %d enllaç trencat.\n"
"\n"
msgstr[1] ""
"S'han trobat %d enllaços trencats.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Cap error"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "L'esquema no està implementat"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "El nom del servidor és invàlid"

#: src/url.c:641
msgid "Bad port number"
msgstr "El número de port és incorrecte"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Nom d'usuari no vàlid"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "L'adreça numèrica IPv6 no està terminada"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Les adreces IPv6 no estan implementades"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "L'adreça numèrica IPv6 no és vàlida"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr ""

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: No s'ha pogut assignar %ld octets; s'ha exhaurit la memòria.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: No s'ha pogut assignar %ld octets; s'ha exhaurit la memòria.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Es continua en segon terme, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "No s'ha pogut eliminar l'enllaç simbòlic «%s»: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL             afegeix el prefix URL a tots els enllaços "
#~ "relatius en -F -i fitxer.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  preserva els permisos dels fitxers "
#~ "remots.\n"

#~ msgid "Cannot specify -r, -p or -N if -O is given.\n"
#~ msgstr "No es pot especificar -r, -p o -N si es dóna -O.\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "S'ha produït un error a la capçalera Set-Cookie, camp «%s»"

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) - S'ha tancat la connexió a l'octet %s/%s. "

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: El booleà estés «%s» no és vàlid; useu «always», «on», «off» o "
#~ "«never».\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr ""
#~ "  -Y,  --proxy                   habilita explícitament l'ús del "
#~ "servidor\n"
#~ "                                 intermediari.\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Aquest programa es distribueix amb l'esperança que sigui útil, però\n"
#~ "SENSE CAP MENA DE GARANTIA; ni tan sols amb la garantia implícita de\n"
#~ "COMERCIABILITAT o IDONEÏTAT PER A UN PROPÒSIT PARTICULAR. Vegeu la\n"
#~ "llicència GNU General Public License per a més informació.\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr ""
#~ "%s: S'ha produït un error en la verificació del certificat per a %s: %s\n"

#~ msgid "Failed writing to proxy: %s.\n"
#~ msgstr "S'ha produït un error en escriure al servidor intermediari: %s.\n"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "El fitxer «%s» ja existeix, no es baixa.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%s/%s])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - s'ha desat «%s» [%s/%s])\n"
#~ "\n"

#~ msgid "Empty host"
#~ msgstr "Servidor no especificat"
