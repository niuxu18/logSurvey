# Galician translation of wget
# Copyright (C) 2000, 2003 Free Software Foundation, Inc.
# Jacobo Tarr�o Barreiro <jtarrio@trasno.net>, 2000, 2003.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.9.1\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2003-11-15 02:13+0100\n"
"Last-Translator: Jacobo Tarr�o Barreiro <jtarrio@trasno.net>\n"
"Language-Team: Galician <gpul-traduccion@ceu.fi.udc.es>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=iso-8859-1\n"
"Content-Transfer-Encoding: 8bit\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Erro desco�ecido"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: a opci�n `%s' � ambigua\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: a opci�n `--%s' non admite argumentos\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: a opci�n `%c%s' non admite argumentos\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: a opci�n `%s' precisa dun argumento\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: opci�n desco�ecida `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: opci�n desco�ecida `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: opci�n incorrecta -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: opci�n non v�lida -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: a opci�n precisa dun argumento -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: a opci�n `-W %s' � ambigua\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: a opci�n `-W %s' non admite argumentos\n"

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
msgstr "Conectando con %s[%s]:%hu... "

#: src/connect.c:298
#, fuzzy, c-format
msgid "Connecting to %s:%d... "
msgstr "Conectando con %s:%hu... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "conectado.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "fallou: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr ""

#: src/convert.c:185
#, fuzzy, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Convert�ronse %d ficheiros en %.2f segundos.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Convertindo %s..."

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "non hai nada que facer.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Non se poden converte-las ligaz�ns en %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Non se puido borrar `%s': %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Non se pode copiar %s coma %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Erro de sintaxe en Set-Cookie: %s na posici�n %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr ""

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Non se pode abri-lo ficheiro de cookies `%s': %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Non se pode escribir en `%s': %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Erro ao pechar `%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Tipo de listado non soportado, probando o analizador de listados Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "�ndice de /%s en %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "data desco�ecida   "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Ficheiro    "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Directorio  "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Ligaz�n     "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Non seguro  "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bytes)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Lonxitude: %s"

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
msgstr " (dato non fidedigno)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Identific�ndome coma %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Erro na resposta do servidor, pechando a conexi�n de control.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Erro no sa�do do servidor.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Erro escribindo, pechando a conexi�n de control.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "O servidor rexeita o login.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Login incorrecto.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "�Conectado!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Erro no servidor, non se pode determina-lo tipo do sistema.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "feito.   "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "feito.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tipo `%c' desco�ecido, pechando a conexi�n de control.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "feito.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD non foi necesario.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Non existe tal ficheiro ou directorio `%s'.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD non foi preciso.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Non se puido comeza-la transferencia PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Non se puido analiza-la resposta PASV.\n"

#: src/ftp.c:816
#, fuzzy, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "non se puido conectar a %s:%hu: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Erro facendo bind (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT incorrecto.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST fallou, comezando dende o principio.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"Non hai tal ficheiro `%s'.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Non hai tal ficheiro `%s'.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Non hai tal ficheiro ou directorio `%s'.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr ""

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, pechando a conexi�n de control.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Conexi�n de datos: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Conexi�n de control pechada.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Transferencia de datos abortada.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "O ficheiro `%s' xa est� a�, non se ha descargar.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(intento:%2d)"

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
msgstr "%s (%s) - `%s' gardado [%ld]\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Borrando %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Usando `%s' coma un ficheiro temporal de listado.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "Borrado `%s'.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "A profundidade de recursi�n %d excedeu a m�xima %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"O ficheiro remoto non � m�is novo c� ficheiro local `%s' -- non se "
"descarga.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"O ficheiro remoto � m�is novo c� ficheiro local `%s' -- descargando.\n"
"\n"

#: src/ftp.c:1748
#, fuzzy, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Os tama�os non coinciden (local %ld) -- descargando.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "O nome da ligaz�n simb�lica � incorrecto, omitindo.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Xa ten unha ligaz�n simb�lica correcta %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Creando a ligaz�n simb�lica %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Ligaz�ns simb�licas non soportadas, omitindo `%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Omitindo o directorio `%s'.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: tipo de ficheiro desco�ecido ou non soportado.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: data e hora corrompidas.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Non se han descargar directorios, porque a profundidade chegou a %d (m�ximo %"
"d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Non se ha descender a %s' porque est� exclu�do ou non inclu�do.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Rexeitando `%s'.\n"

#: src/ftp.c:2035
#, fuzzy, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Non se pode escribir en `%s': %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Non encaixa no patron `%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Escrito un �ndice en HTML en `%s' [%ld].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Escrito un �ndice en HTML en `%s'.\n"

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
msgstr "Erro ao analiza-lo URL do proxy %s: %s.\n"

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
msgstr "Erro desco�ecido"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr ""

#: src/host.c:364
msgid "Unknown error"
msgstr "Erro desco�ecido"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Resolvendo %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr ""

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "fallou: tempo esgotado.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Non se pode resolve-la ligaz�n incompleta %s.\n"

#: src/html-url.c:772
#, fuzzy, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: %s: Valor `%s' non v�lido.\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Fallo ao escribir unha petici�n HTTP: %s.\n"

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
msgstr "Reutilizando a conexi�n de %s:%hu.\n"

#: src/http.c:1729
#, fuzzy, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Fallo ao escribir unha petici�n HTTP: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr ""

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Petici�n %s enviada, agardando unha resposta... "

#: src/http.c:1811
#, fuzzy
msgid "No data received.\n"
msgstr "Non se recibiron datos"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Erro ao ler (%s) nas cabeceiras.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Sistema de autenticaci�n desco�ecido.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Fallo na autorizaci�n.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr "O ficheiro `%s' xa est� a�, non se ha descargar.\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Li�a de estado mal formada"

#: src/http.c:2095
msgid "(no description)"
msgstr "(sen descripci�n)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Lugar: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "non especificado"

#: src/http.c:2156
msgid " [following]"
msgstr " [segu�ndoo]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    O ficheiro xa est� completo; non hai nada que facer.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Lonxitude: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignorado"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr ""

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Aviso: comod�ns non soportados en HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Non se pode escribir en `%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Non se puido estabrece-la conexi�n SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERROR: Redirecci�n (%d) sen destino.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERRO %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr ""
"Falta a cabeceira Last-modified -- marcas de data e hora desactivadas.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"Cabeceira Last-modified incorrecta -- a marca de data e hora foi ignorada.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"O ficheiro do servidor non � m�is novo c� ficheiro local `%s' -- non se "
"descarga.\n"
"\n"

#: src/http.c:2736
#, fuzzy, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Os tama�os non coinciden (local %ld) -- descargando.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "O ficheiro remoto � m�is novo, descargando.\n"

#: src/http.c:2760
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"O ficheiro remoto � m�is novo c� ficheiro local `%s' -- descargando.\n"
"\n"

#: src/http.c:2766
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"O ficheiro remoto non � m�is novo c� ficheiro local `%s' -- non se "
"descarga.\n"

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
msgstr "O ficheiro remoto � m�is novo, descargando.\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s ERRO %d: %s.\n"

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
"%s (%s) - `%s' gardado [%ld/%ld]\n"
"\n"

#: src/http.c:2899
#, fuzzy, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Conexi�n pechada no byte %ld. "

#: src/http.c:2922
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Erro de lectura no byte %ld (%s)."

#: src/http.c:2931
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Erro de lectura no byte %ld/%ld (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC apunta a %s, que non existe.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Non se pode ler %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Erro en %s na li�a %d.\n"

#: src/init.c:533
#, fuzzy, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Erro en %s na li�a %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: BUG: comando desco�ecido `%s', valor `%s'.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Aviso: Os ficheiros wgetrc do sistema e do usuario apuntan a `%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Orde --execute non v�lida `%s'\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Booleano `%s' non v�lido, empregue `on' ou `off'.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: N�mero `%s' non v�lido.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Valor de byte `%s' non v�lido.\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Periodo de tempo `%s' non v�lido.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Valor `%s' non v�lido.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Cabeceira `%s' non v�lida.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Tipo de progreso `%s' non v�lido.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr "%s: %s: Restricci�n `%s' non v�lida, empregue `unix' ou `windows'.\n"

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
"%s recibido, redireccionando a sa�da a `%s'.\n"

#: src/log.c:819
#, fuzzy, c-format
msgid ""
"\n"
"%s received.\n"
msgstr "Non se recibiron datos"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; desactivando o rexistro.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Uso: %s [OPCI�N]... [URL]...\n"

#: src/main.c:398
#, fuzzy
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"\n"
"Os argumentos obrigatorios nas opci�ns largas sono tam�n nas curtas.\n"
"\n"

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
msgstr "Directorio  "

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
msgstr ""
"Env�e os seus informes sobre erros e suxerencias a <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, un descargador de ficheiros de rede non interactivo.\n"

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
"Escrito orixinalmente por Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Env�e os seus informes sobre erros e suxerencias a <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Escriba `%s --help' para ver m�is opci�ns.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: opci�n incorrecta -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Non se pode ser moi falador e estar en silencio ao mesmo tempo.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Non se pode po�er unha marca de data e hora e non machaca-los ficheiros "
"antigos ao mesmo tempo.\n"

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
msgstr "O ficheiro `%s' xa est� a�, non se ha descargar.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: falta a URL\n"

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
msgstr "Non se atoparon URLs en %s.\n"

#: src/main.c:1336
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"REMATADO --%s--\n"
"Descargados: %s bytes en %d ficheiros\n"

#: src/main.c:1345
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "�O l�mite de descarga (%s bytes) foi SUPERADO!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Seguindo en segundo plano.\n"

#: src/mswindows.c:292
#, fuzzy, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Seguindo en segundo plano, pid %d.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Vaise escribi-la saida a `%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Non se puido atopar un controlador de sockets utilizable.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: aviso: o elemento \"%s\" aparece antes dun nome de m�quina\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: elemento \"%s\" desco�ecido\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Uso: %s NETRC [SERVIDOR]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: non se pode obter informaci�n de %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr ""

#: src/openssl.c:173
#, fuzzy
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"Non se puido sementa-lo xerador de n�meros aleatorios de OpenSSL; "
"desactivando SSL.\n"

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
"%*s[ omitindo %dK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr ""
"Especificaci�n de estilo dos pountos `%s' non v�lida; queda sen cambiar.\n"

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
msgstr "Borrando %s porque deber�a ser rexeitado.\n"

#: src/res.c:391
#, fuzzy, c-format
msgid "Cannot open %s: %s"
msgstr "Non se poden converte-las ligaz�ns en %s: %s\n"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Cargando robots.txt; por favor, ignore os erros.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Erro ao analiza-lo URL do proxy %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Erro no URL do proxy %s: Debe ser HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Super�ronse %d redirecci�ns.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Abandonando.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Intent�ndoo de novo.\n"
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
msgstr "Ning�n erro"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Esquema non soportado"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
#, fuzzy
msgid "Invalid host name"
msgstr "O nome do usuario non � v�lido"

#: src/url.c:641
msgid "Bad port number"
msgstr "N�mero de porto incorrecto"

#: src/url.c:643
msgid "Invalid user name"
msgstr "O nome do usuario non � v�lido"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Enderezo IPv6 num�rico sen rematar"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Non se soportan os enderezos IPv6"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Enderezo IPv6 num�rico non v�lido"

#: src/url.c:951
#, fuzzy
msgid "HTTPS support not compiled in"
msgstr "%s: non se compilou con soporte de depuraci�n.\n"

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
msgstr "Seguindo en segundo plano, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Fallo ao desligar `%s': %s\n"

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr ""
#~ "Non se puido converter `%s' a un enderezo de asignaci�n. Cambiando a "
#~ "CALQUERA.\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Erro en Set-Cookie, campo `%s'"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST fallou; non se ha truncar `%s'.\n"

#~ msgid " [%s to go]"
#~ msgstr " [quedan %s por descargar]"

#~ msgid "Host not found"
#~ msgstr "Non se atopou o servidor"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "Non se puido estabrecer un contexto SSL\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "Non se puideron carga-los certificados de %s\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Probando sen o certificado especificado\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "Non se puido obte-la clave do certificado de %s\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Fin de ficheiro mentres se analizaban as cabeceiras.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Non se puido continua-la descarga do ficheiro, o que � incompatible con `-"
#~ "c'.\n"
#~ "Non se ha trunca-lo ficheiro existente `%s'.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (quedan %s por descargar)"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "O ficheiro `%s' xa est� a�, non se ha descargar.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - `%s' gardado [%ld/%ld])\n"
#~ "\n"

#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
#~ msgstr "%s (%s) - Conexi�n pechada no byte %ld/%ld. "

#~ msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
#~ msgstr ""
#~ "%s: %s: Booleano '%s' non v�lido, empregue always (sempre), on, off ou "
#~ "never (nunca).\n"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Comezo:\n"
#~ "  -V,  --version           amosa a versi�n de Wget e sae.\n"
#~ "  -h,  --help              amosa esta axuda.\n"
#~ "  -b,  --background        deixa o proceso en segundo plano.\n"
#~ "  -e,  --execute=COMANDO   executa un comando esto�p `.wgetrc'.\n"
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
#~ "Rexistro e ficheiro de entrada:\n"
#~ "  -o,  --output-file=FICHEIRO   rexistra-las mensaxes no FICHEIRO.\n"
#~ "  -a,  --append-output=FICHEIRO engadir mensaxes ao FICHEIRO.\n"
#~ "  -d,  --debug                  amosar informaci�n de depuraci�n.\n"
#~ "  -q,  --quiet                  en silencio (sen mensaxes).\n"
#~ "  -v,  --verbose                moi falador (esta � a opci�n por "
#~ "defecto).\n"
#~ "  -nv, --non-verbose            non moi falador, sen estar en silencio.\n"
#~ "  -i,  --input-file=FICHEIRO    descarga-las URLs indicadas no FICHEIRO.\n"
#~ "  -F,  --force-html             trata-lo ficheiro de entrada coma HTML.\n"
#~ "  -B,  --base=URL               precede-la URL nas ligaz�ns relativas\n"
#~ "                                   en -F -i ficheiro.\n"
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
#~ "Descarga de ficheiros:\n"
#~ "  -t,  --tries=N�MERO             facer N�MERO tentativas (0 � sen "
#~ "l�mite).\n"
#~ "       --retry-connrefused        volver tentar se se rexeita a "
#~ "conexi�n.\n"
#~ "  -O   --output-document=FICHEIRO escribi-los documentos ao FICHEIRO.\n"
#~ "  -nc, --no-clobber               non esmaga-los ficheiros que xa "
#~ "existan\n"
#~ "                                        ou empregar sufixos .n�\n"
#~ "  -c,  --continue                 seguir descargando un ficheiro que xa "
#~ "exista.\n"
#~ "       --progress=TIPO            escolle-lo tipo de indicador de "
#~ "progreso.\n"
#~ "  -N,  --timestamping             non descarga-los ficheiros se son m�is\n"
#~ "                                        vellos que os locais.\n"
#~ "  -S,  --server-response          amosa-las respostas do servidor.\n"
#~ "       --spider                   non descargar nada.\n"
#~ "  -T,  --timeout=SEGUNDOS         estabrecer t�dolos tempos de "
#~ "vencemento\n"
#~ "                                        en SEGUNDOS.\n"
#~ "       --dns-timeout=SEGUNDOS     estabrece-lo tempo de vencemento de "
#~ "busca\n"
#~ "                                        en DNS en SEGUNDOS.\n"
#~ "       --connect-timeout=SEGUNDOS estabrece-lo tempo de vencemento de "
#~ "conexi�n\n"
#~ "                                        en SEGUNDOS.\n"
#~ "       --read-timeout=SEGUNDOS    estabrece-lo tempo de vencemento de "
#~ "lectura\n"
#~ "                                        en SEGUNDOS.\n"
#~ "  -w,  --wait=SEGUNDOS            agardar SEGUNDOS entre descargas.\n"
#~ "       --waitretry=SEGUNDOS       agardar 1...SEGUNDOS entre intentos.\n"
#~ "       --random-wait              agardar de 0 a 2*ESPERA seg. entre "
#~ "intentos.\n"
#~ "  -Y,  --proxy=on/off             activar ou desactiva-lo proxy.\n"
#~ "  -Q,  --quota=N�MERO             establece-lo l�mite de descarga a "
#~ "N�MERO.\n"
#~ "       --bind-address=ENDEREZO    emprega-lo ENDEREZO (nome/IP) desta "
#~ "m�quina.\n"
#~ "       --limit-rate=RAZON         limita-la velocidade de descarga a "
#~ "RAZ�N.\n"
#~ "       --dns-cache=off            desactiva-la cach� de buscas DNS.\n"
#~ "       --restric-file-names=SO    restrinxi-los caracteres dos nomes dos\n"
#~ "                                        ficheiros aos que admite o SO.\n"
#~ "\n"

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
#~ "Directorios:\n"
#~ "  -nd, --no-directories            non crear directorios.\n"
#~ "  -x,  --force-directories         forza-la creaci�n de directorios.\n"
#~ "  -nH, --no-host-directories       non crea-los directorios do servidor.\n"
#~ "  -P,  --directory-prefix=PREFIXO  garda-los ficheiros a PREFIXO/...\n"
#~ "       --cut-dirs=N�MERO           ignorar NUMERO compo�entes dos "
#~ "directorios\n"
#~ "                                        remotos.\n"
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
#~ "Opci�ns HTTP:\n"
#~ "       --http-user=USUARIO   establece-lo USUARIO coma o usuario de "
#~ "http.\n"
#~ "       --http-passwd=CLAVE   establece-la CLAVE coma a clave de http.\n"
#~ "  -C,  --cache=on/off        (non) admitir datos da cach� do servidor\n"
#~ "                                (normalmente adm�tense).\n"
#~ "  -E,  --html-extension      gravar t�dolos documentos text/html con\n"
#~ "                                extensi�n .html\n"
#~ "       --ignore-length       ignora-lo campo da cabeceira `Content-"
#~ "Length'.\n"
#~ "       --header=CADEA        inserta-la CADEA entre as cabeceiras.\n"
#~ "       --proxy-user=USUARIO  establece-lo USUARIO coma o usuario do "
#~ "proxy.\n"
#~ "       --proxy-passwd=CLAVE  establece-la CLAVE coma a clave do proxy.\n"
#~ "       --referer=URL         incluir `Referer: URL' na petici�n HTTP\n"
#~ "  -s,  --save-headers        garda-las cabeceiras HTTP ao ficheiro.\n"
#~ "  -U,  --user-agent=AXENTE   identificar coma AXENTE no canto de Wget/"
#~ "VERSION.\n"
#~ "       --no-http-keep-alive  desactiva-las conexi�ns persistentes de "
#~ "HTTP.\n"
#~ "       --cookies=off         non empregar cookies.\n"
#~ "       --load-cookies=FICH   carga-las cookies do FICHeiro antes da "
#~ "sesi�n\n"
#~ "       --save-cookies=FICH   grava-las cookies no FICHeiro trala sesi�n\n"
#~ "       --post-data=CADEA     emprega-lo m�todo POST; envia-la CADEA coma "
#~ "datos.\n"
#~ "       --post-file=FICH      emprega-lo m�todo POST; envia-lo FICHeiro.\n"
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
#~ "Opci�ns de HTTPS (SSL):\n"
#~ "       --sslcertfile=FICHEIRO  certificado opcional do cliente.\n"
#~ "       --sslcertkey=FICHCLAVE  ficheiro de clave opcional para o "
#~ "certificado.\n"
#~ "       --egd-file=FICHEIRO     nome de ficheiro do socket EGD.\n"
#~ "       --sslcadir=DIR          directorio no que se armacena a lista de "
#~ "CAs.\n"
#~ "       --sslcafile=FICHEIRO    ficheiro cun lote de CAs\n"
#~ "       --sslcerttype=0/1       tipo de certificado de cliente\n"
#~ "                               0=PEM (valor por defecto) / 1=ASN1 (DER)\n"
#~ "       --sslcheckcert=0/1      compara-lo certificado do servidor coa CA "
#~ "dada\n"
#~ "       --sslprotocol=0-3       escolle-lo protocolo SSL; 0=autom�tico,\n"
#~ "                               1=SSLv2 2=SSLv3 3=TLSv1\n"
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
#~ "Opci�ns FTP:\n"
#~ "  -nr, --dont-remove-listing   non elimina-los ficheiros `.listing'.\n"
#~ "  -g,  --glob=on/off           usar ou non comparaci�n de nomes de "
#~ "ficheiros\n"
#~ "                                  con patr�ns.\n"
#~ "       --passive-ftp           usa-lo modo de transferencia \"passive\".\n"
#~ "       --retr-symlinks         ao descargar recursivamente, descarga-los\n"
#~ "                                  ficheiros ligados (non os "
#~ "directorios).\n"
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
#~ "Descarga recursiva:\n"
#~ "  -r,  --recursive             descarga recursiva.\n"
#~ "  -l,  --level=NUMERO          m�ximo nivel de recursi�n (empregue inf ou "
#~ "0\n"
#~ "                                  para infinito).\n"
#~ "       --delete-after          borra-los ficheiros despois de "
#~ "descargalos.\n"
#~ "  -k,  --convert-links         converti-las ligaz�ns non relativas a "
#~ "relativas.\n"
#~ "  -K,  --backup-converted      antes de converti-lo ficheiro X, facer "
#~ "unha\n"
#~ "                                  copia chamada X.orig\n"
#~ "  -m,  --mirror                opci�n atallo equivalente a -r -N -l inf -"
#~ "nr.\n"
#~ "  -nr, --dont-remove-listing   non borra-los ficheiros `.listing'.\n"
#~ "  -p,  --page-requisites       obter t�dalas imaxes, etc. necesarias "
#~ "para\n"
#~ "                                  amosa-la p�xina HTML.\n"
#~ "       --strict-comments       activa-lo manexo estricto (SGML) dos\n"
#~ "                                  comentarios HTML.\n"
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
#~ "Aceptar/rexeitar en descargas recursivas:\n"
#~ "  -A,  --accept=LISTA               lista de extensi�ns aceptadas,\n"
#~ "                                        separadas por comas.\n"
#~ "  -R,  --reject=LISTA               lista de extensi�ns rexeitadas,\n"
#~ "                                        separadas por comas.\n"
#~ "  -D,  --domains=LISTA              lista de dominios aceptados,\n"
#~ "                                        separadas por comas.\n"
#~ "       --exclude-domains=LISTA      lista de dominios rexeitados,\n"
#~ "                                        separadas por comas.\n"
#~ "       --follow-ftp                 segui-las ligaz�ns a FTP dende "
#~ "documentos\n"
#~ "                                        en HTML.\n"
#~ "       --follow-tags=LISTA          lista de etiquetas HTML que se "
#~ "siguen,\n"
#~ "                                        separadas por comas.\n"
#~ "  -G,  --ignore-tags=LISTA          lista de etiquetas HTML que se "
#~ "ignoran,\n"
#~ "                                        separadas por comas.\n"
#~ "  -H,  --span-hosts                 ir a servidores de f�ra durante a\n"
#~ "                                        recursi�n.\n"
#~ "  -L,  --relative                   seguir s� as ligaz�ns relativas.\n"
#~ "  -I,  --include-directories=LISTA  lista de directorios admitidos.\n"
#~ "  -X,  --exclude-directories=LISTA  lista de directorios exclu�dos.\n"
#~ "  -np, --no-parent                  non ascender ao directorio pai.\n"
#~ "\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Este programa distrib�ese coa intenci�n de que sexa �til, pero SEN\n"
#~ "NINGUNHA GARANTIA; nin sequera a garant�a impl�cita de MERCABILIDADE\n"
#~ "ou APTITUDE PARA UN FIN PARTICULAR.  Vexa a Licencia P�blica Xeral de\n"
#~ "GNU para obter m�is detalles.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Comezando WinHelp %s\n"

#~ msgid "Empty host"
#~ msgstr "Nome baleiro"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Non hai memoria dabondo.\n"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Erro de sintaxe en Set-Cookie no car�cter `%c'.\n"

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: Non se pode convertir `%s' a un enderezo IP.\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: comando non v�lido\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Non se puido atopar un servidor proxy.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: Detectouse un ciclo de redirecci�ns.\n"

#~ msgid ""
#~ "\n"
#~ "CTRL+Break received, redirecting output to `%s'.\n"
#~ "Execution continued in background.\n"
#~ "You may stop Wget by pressing CTRL+ALT+DELETE.\n"
#~ msgstr ""
#~ "\n"
#~ "Recibiuse un CTRL+Break, redireccionando a saida a `%s'.\n"
#~ "A execuci�n segue en segundo plano.\n"
#~ "Pode deter Wget premendo CTRL+ALT+DELETE.\n"

#~ msgid "Connection to %s:%hu refused.\n"
#~ msgstr "A conexi�n a %s:%hu foi rexeitada.\n"

#~ msgid "Will try connecting to %s:%hu.\n"
#~ msgstr "Tentarase conectar con %s:%hu.\n"

#~ msgid "Unknown/unsupported protocol"
#~ msgstr "Protocolo desco�ecido ou non soportado"

#~ msgid "Invalid port specification"
#~ msgstr "Especificaci�n de porto incorrecta"

#~ msgid "%s: Cannot determine user-id.\n"
#~ msgstr "%s: Non se pode determina-lo identificador de usuario.\n"

#~ msgid "%s: Warning: uname failed: %s\n"
#~ msgstr "%s: Advertencia: a chamada a uname fallou: %s\n"

#~ msgid "%s: Warning: gethostname failed\n"
#~ msgstr "%s: Advertencia: a chamada a gethostname fallou\n"

#~ msgid "%s: Warning: cannot determine local IP address.\n"
#~ msgstr "%s: Advertencia: non se pode determina-lo enderezo IP local.\n"

#~ msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
#~ msgstr "%s: Aviso: non se pode facer unha resoluci�n inversa da IP local.\n"

#~ msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
#~ msgstr ""
#~ "%s: Aviso: a resoluci�n inversa do enderezo local non devolveu un FQDN\n"

#~ msgid "%s: Out of memory.\n"
#~ msgstr "%s: Memoria esgotada.\n"

#~ msgid "%s: Redirection to itself.\n"
#~ msgstr "%s: Redirecci�n a si mesmo.\n"

#~ msgid "Error (%s): Link %s without a base provided.\n"
#~ msgstr "Error (%s): Proporcionouse a ligaz�n %s sen unha base.\n"

#~ msgid "Error (%s): Base %s relative, without referer URL.\n"
#~ msgstr "Error (%s): A base %s � relativa, sen unha URL � que se referir.\n"

#~ msgid ""
#~ "Local file `%s' is more recent, not retrieving.\n"
#~ "\n"
#~ msgstr ""
#~ "O ficheiro local `%s' � m�is recente, non se ha descargar.\n"
#~ "\n"
