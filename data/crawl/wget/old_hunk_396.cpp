# Mensajes en espa�ol para GNU wget.
# Copyright (C) 2001 Free Software Foundation, Inc.
# Salvador Gimeno Zan�n <salgiza@jazzfree.com>, 2001
#
# Traducido con la ayuda de:
# Juan Jos� Rodr�guez <jcnsoft@jal1.telmex.net.mx>
#
# Revisado por:
# Carlos Linares L�pez <clinares@delicias.dia.fi.upm.es; carlosl@acm.org>
# Santiago Vila <sanvila@unex.es>
# Nicol�s Lichtmaier <nick@feedback.net.ar>
#
# Notas:
#
# 1. Los comentarios que empiezan por "Duda:" se refieren a mensajes que
#    debieran ser revisados.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.8.1\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2001-12-29 19:00GMT+0200\n"
"Last-Translator: Salvador Gimeno Zan�n <salgiza@jazzfree.com>\n"
"Language-Team: Spanish <es@li.org>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=ISO-8859-1\n"
"Content-Transfer-Encoding: 8bit\n"
"X-Generator: KBabel 0.9.5\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Error desconocido"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: la opci�n `%s' es ambigua\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: la opci�n `--%s' no admite ning�n argumento\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: la opci�n `%c%s' no admite ning�n argumento\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: la opci�n `%s' requiere un argumento\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: opci�n no reconocida `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: opci�n no reconocida `%c%s\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: opci�n ilegal -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, fuzzy, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: opci�n ilegal -- %c\n"

# nota jjrs: argumento o parametro?
# mmm... argumento? ;-P -Salva
#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: la opci�n requiere un argumento -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, fuzzy, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: la opci�n `%s' es ambigua\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, fuzzy, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: la opci�n `--%s' no admite ning�n argumento\n"

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

# Me temo que nadie se "conecta a" sino que se "conecta con", ... �no te
# suena mejor? - cll
# sip - Salva
#: src/connect.c:291
#, fuzzy, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Conectando con %s[%s]:%hu... "

# Me temo que nadie se "conecta a" sino que se "conecta con", ... �no te
# suena mejor? - cll
# sip - Salva
#
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
msgstr "fall�: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr ""

#: src/convert.c:185
#, fuzzy, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d ficheros convertidos en %.2f segundos.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Convirtiendo %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "no hay nada que hacer.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "No se han podido convertir los enlaces en %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "No se ha borrar `%s': %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "No se pudo hacer una copia de seguridad de %s como %s: %s\n"

#: src/cookies.c:443
#, fuzzy, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Error de sintaxis al asignar cookie: fin de cadena inesperado.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr ""

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "No se pudo abrir el fichero de cookies `%s': %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Error escribiendo a `%s': %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Error cerrando `%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Tipo de listado no soportado, se intentar� con el parseador de listados de "
"Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "�ndice de /%s en %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "hora desconocida   "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Fichero     "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Directorio  "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Enlace      "

# creo que se refiere al tipo (fichero/directorio/enlace)
#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Ni idea     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bytes)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Longitud: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ""

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ""

# nota jjrs: Se agrega este mensaje cuando el wget no ha obtenido
#   directamente el tama�o del archivo a transferir y esta usando la
#   longitud que reporta el inicio de la transferencia.
#
# �Dabuti! Si no lo llegas a decir, ... �Lo estaba flipando! :) Pero
# vamos, siendo como dices, a m� me suena perfect�simamente - cll
#
#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (probablemente)\n"

# mmmm... no estoy seguro de esto...
# �As� no es mejor? (nl)
#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Identific�ndose como %s ... "

# Me parece m�s `humanoide' a�adir el art�culo a las cosas, ... Los
# angloparlantes suelen evitarlo (�ser� porque no son humanos? :) pero
# eso no significa que nosotros nos lo ahorremos, pues eso es contrario
# a nuestra costumbre - cll
# einch! que tengo familiares g�iris ;-) , pero tienes raz�n -Salva
#
#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Error en la respuesta del servidor, cerrando la conexi�n de control.\n"

# `greeting' tambi�n puede traducirse como `recepci�n' que, en este
# caso, me parece m�s apropiado. -cll
# bien - Salva
# No est� bien, es confuso. Recepci�n suena a recibir... (nl)
#
#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Error en el saludo del servidor.\n"

# En ingl�s suele resultar muy adecuada la utilizaci�n de participios,
# puesto que esa es una forma de adjetivaci�n muy com�n. Sin embargo, en
# espa�ol crea un efecto "computadora" muy desagradable, ...
#
# Por ejemplo, "Fallo de escritura" me parece much�simo m�s apropiado
# que "Escritura fallida"
#
# Adem�s, he a�adido el art�culo a `conexi�n' - cll
#
#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Fallo de escritura, cerrando la conexi�n de control.\n"

# Es una regla de oro intentar evitar las expresiones en ingl�s tanto
# como sea posible. Esta ha sido una cuesti�n harto discutida en
# es@li.org y, al final, se decidi�, por consenso adoptar siempre la
# siguiente norma:
#
# "Siempre que sea posible debe sustituirse el t�rmino en ingl�s por
# otro equivalente en espa�ol. Solo si el t�rmino espa�ol no resulta
# suficientemente descriptivo puede acompa�arse entre par�ntesis del
# t�rmino en ingl�s. Por ejemplo: `pipe' se debe traducir por `tuber�a',
# pero como este t�rmino puede resultar extra�o para muchos
# programadores, se admite: `tuberia (pipe)'.
#
# A prop�sito de esta norma, `login' puede parecer un t�rmino muy
# extendido que todo el mundo conoce y entiende, �pero no es
# espa�ol!.
#
# Me he permitido sustituirte `login' por `acceso', o una expresi�n
# equivalente, en todos los mensajes del fichero. Espero que te parezca
# oportuno - cll
#
#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "El servidor ha rechazado el acceso.\n"

# Duda: en este caso, sospecho que el `login' se refiere al nombre de
# usuario, �verdad? - cll
# s� -Salva
#
#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Nombre de usuario incorrecto.\n"

# �Una excelente traducci�n! :) - cll
# gracias! :) -Salva
#
# Preferir�a algo como "Conectado" o algo as�. sv
#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "�Dentro!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Error del servidor, no se pudo determinar el tipo de sistema.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "hecho.   "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "hecho.\n"

# He a�adido el art�culo a `conexi�n' - cll
#
#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tipo desconocido `%c', cerrando la conexi�n de control.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "hecho.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> no se necesita CWD.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"No existe el directorio `%s'.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> no se requiere CWD.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "No se pudo iniciar la trasferencia PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "No se pudo analizar la respuesta PASV.\n"

#: src/ftp.c:816
#, fuzzy, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "no se pudo conectar con %s:%hu: %s\n"

# Duda: no estoy muy seguro, pero ... �y `error de enlace' o algo
# parecido? Probablemente, este sea uno de los casos en los que debas
# incluir entre par�ntesis la palabra `bind'.
#
# Mientras tanto, te sugiero `error de enlace (bind)' - cll
# la verdad es que no tengo ni idea de qu� es esto :( - Salva
#
# Es la funci�n bind(2), que asigna una direcci�n a un socket.
# Me parece que decir lo de la funci�n es mejor. (nl)
#
#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Error en la llamada `bind' (%s).\n"

# Ya no est� "prohibido" usar esta palabra. sv
#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PUERTO inv�lido.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"El comando REST no funcion�, se empezar� desde el principio\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"No existe el fichero `%s'.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"No existe el fichero `%s'.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"No existe el fichero o directorio `%s'.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr ""

# He a�adido el art�culo a `conexi�n' - cll
#
#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, cerrando la conexi�n de control.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Conexi�n de datos: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Conexi�n de control cerrada.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Trasferencia de datos abortada.\n"

# `no recuperando' no me suena muy espa�ol, te propongo la alternativa
# m�s "humanizada", `no se recupera' - cll
#
#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "El fichero `%s' ya est� ah�, no se recupera.\n"

# nota jjrs: no ser�a mejor intento?
# pues s� - Salva
# decididamente si - cll
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
msgstr ""
"%s (%s) - `%s' guardado [%ld]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Eliminando %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Usando `%s' como fichero temporal de listado.\n"

# Aqu� volvemos un poco a lo de siempre: en ingl�s, los participios se
# emplean con frecuencia para adjetivar un sustantivo, sin embargo, en
# espa�ol sirven para hacer referencia a una acci�n. Esto es, deben ir
# despu�s del sustantivo - cll
#
#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "`%s' eliminado.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "La profundidad de recursi�n %d excede la m�xima de %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"El fichero remoto no es m�s moderno que el fichero local `%s' -- no se "
"descargar�.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"El fichero remoto es m�s moderno que el fichero local `%s' -- descargando.\n"
"\n"

#: src/ftp.c:1748
#, fuzzy, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Los tama�os no concuerdan (%ld local) -- recuperando.\n"
"\n"

# Simplemente me suena mejor `omitir' que `saltar'. Adem�s, las acciones
# expresadas en gerundio, ..., prefiero una forma impersonal como `se
# omite' - cll
#
#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "El nombre del enlace simb�lico no es v�lido, se omite.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Ya se tiene el enlace simb�lico correcto %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Creando enlace simb�lico %s -> %s\n"

# Lo dicho de los gerundios por formas impersonales - cll
#
#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "No se admiten enlaces simb�licos, se omite el enlace simb�lico `%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Omitiendo el directorio `%s'.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: tipo de fichero desconocido/no soportado.\n"

# sigo las indicaciones del texto "pifias" para time-stamp.
#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: marca de tiempo corrupta.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"No se recuperar�n directorios puesto que la profundidad es %d (m�x %d).\n"

# Los gerundios me parecen poco apropiados para construir predicados
# normales y corrientes como intentas en este mensaje. En su lugar, te
# propongo la forma alternativa `se desciende' - cll
#
#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "No se desciende hasta `%s' por estar excluido/no incluido.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Rechazando `%s'.\n"

#: src/ftp.c:2035
#, fuzzy, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Error escribiendo a `%s': %s\n"

# alguna idea mejor?
# nota jjrs: En el PO para el grep 2.1 pattern est� traducido como
#   patr�n por <melero@iprolink.ch> y <sanvila@unex.es>
#
# De hecho, `pattern' debiera traducirse como `patr�n' y casi siempre os
# saldr�n las traducciones perfectas con este t�rmino. A m�, de hecho el
# mensaje que habeis puesto me parece una traducci�n excelente - cll
#
# Algo no es *parecido* a un patr�n. Algo *cumple* con un patr�n. (nl)
# Bien, pero aceptar� la matizaci�n cd C.S. Suarez de 'se ajusta a...' -Salva
#
#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "No hay nada que se ajuste al patr�n `%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Se escribi� un �ndice en HTML a `%s' [%ld].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Se escribi� un �ndice en HTML a `%s'.\n"

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
msgstr "Error parseando la URL del proxy `%s': %s\n"

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
msgstr "Error desconocido"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr ""

#: src/host.c:364
msgid "Unknown error"
msgstr "Error desconocido"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Resolviendo %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr ""

#: src/host.c:812
#, fuzzy
msgid "failed: timed out.\n"
msgstr "fall�: %s.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: no se pudo resolver el enlace incompleto %s.\n"

#: src/html-url.c:772
#, fuzzy, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: especificaci�n inv�lida `%s'\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Fallo escribiendo petici�n HTTP: %s.\n"

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
msgstr "Reutilizando la conexi�n con %s:%hu.\n"

#: src/http.c:1729
#, fuzzy, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Fallo escribiendo petici�n HTTP: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr ""

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Petici�n %s enviada, esperando respuesta... "

#: src/http.c:1811
#, fuzzy
msgid "No data received.\n"
msgstr "No se han recibido datos"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Error de lectura (%s) en las cabeceras.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "M�todo de autentificaci�n desconocido.\n"

# En vez de `fall� la autorizaci�n' me parece m�s apropiado
# `Autorizaci�n denegada' - cll
#
#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Autorizaci�n denegada.\n"

# `no recuperando' no me suena muy espa�ol, te propongo la alternativa
# m�s "humanizada", `no se recupera' - cll
#
#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr "El fichero `%s' ya est� ah�, no se recupera.\n"

# Piiiiii: escuchemos a los super-taca�ones :)
#
# Como no existe el verbo "malformar" en espa�ol, el participio
# `malformado' es incorrecto. El �nico t�rmino parecido a �ste que
# existe en espa�ol es `malformaci�n'. - cll
#: src/http.c:2093
msgid "Malformed status line"
msgstr "L�nea de estado mal formada"

#: src/http.c:2095
msgid "(no description)"
msgstr "(sin descripci�n)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Localizaci�n: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "no especificado"

# Duda: Hmmm, ... �`siguiendo' o `siguiente'? - cll
# siguiendo - Salva
#
#: src/http.c:2156
msgid " [following]"
msgstr " [siguiendo]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    El fichero ya ha sido totalmente recuperado, no hay nada que hacer.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Longitud: "

#: src/http.c:2263
msgid "ignored"
msgstr "descartado"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr ""

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Atenci�n: no se admiten comodines en HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "No se puede escribir a `%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "No se pudo establecer la conexi�n SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERROR: redirecci�n (%d) sin localizaci�n.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERROR %d: %s.\n"

# as� se entiende mejor -Salva
#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr ""
"Falta la fecha de la �ltima modificaci�n -- marcas de tiempo apagadas.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"La fecha de �ltima modificaci�n es inv�lida -- marca de tiempo descartada.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"El fichero del servidor no es m�s moderno que el fichero local `%s' -- no se "
"descargar�.\n"
"\n"

#: src/http.c:2736
#, fuzzy, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Los tama�os no concuerdan (%ld local), recuperando.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "El fichero remoto es nuevo, recuperando.\n"

#: src/http.c:2760
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"El fichero remoto es m�s moderno que el fichero local `%s' -- descargando.\n"
"\n"

#: src/http.c:2766
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"El fichero remoto no es m�s moderno que el fichero local `%s' -- no se "
"descargar�.\n"

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
msgstr "El fichero remoto es nuevo, recuperando.\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s ERROR %d: %s.\n"

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
"%s (%s) - `%s' guardado [%ld/%ld]\n"
"\n"

#: src/http.c:2899
#, fuzzy, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Conexi�n cerrada en el byte %ld. "

#: src/http.c:2922
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Error de lectura en el byte %ld (%s)."

#: src/http.c:2931
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Error de lectura en el byte %ld/%ld (%s)."

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr ""

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: No se pudo leer %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Error en %s en la l�nea %d.\n"

#: src/init.c:533
#, fuzzy, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Error en %s en la l�nea %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Error: orden desconocida `%s', valor `%s'.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Atenci�n: tanto el fichero wgetrc de usuario como el del sistema apuntan "
"a `%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: %s: orden no v�lida\n"

# Te cambio la `o' antes de `off' por `u' - cll
#
#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: por favor, especifique on u off.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: especificaci�n inv�lida `%s'.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: tipo de progreso no v�lido `%s'.\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: especificaci�n inv�lida `%s'.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: especificaci�n inv�lida `%s'.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: especificaci�n inv�lida `%s'.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: tipo de progreso no v�lido `%s'.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""

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
"%s recibido, redirigiendo la salida a `%s'.\n"

#: src/log.c:819
#, fuzzy, c-format
msgid ""
"\n"
"%s received.\n"
msgstr "No se han recibido datos"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; deshabilitando el registro.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Modo de empleo: %s [OPCI�N]... [URL]...\n"

# Duda: �por qu� has insertado manualmente un `\n'? �es realmente
# necesario? Probablemente s�, pero yo normalmente traduzco todo en la
# misma l�nea, ... - cll
# Hombre, as� deber�a quedar bastante mejor (adem�s creo que no es la �nica vez
# que lo he hecho), espero que no de problemas. - Salva
#
#: src/main.c:398
#, fuzzy
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"\n"
"Los argumentos obligatorios para las opciones largas son tambi�n "
"obligatorios\n"
"para las opciones cortas.\n"
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
msgstr "Env�e informaci�n sobre errores y sugerencias a <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, un recuperador por red no interactivo.\n"

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
msgstr ""
"Copyright (C) 1995, 1996, 1997, 1998, 2000, 2001 Free Software Foundation, "
"Inc.\n"

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
#, fuzzy
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Escrito originalmente por Hrvoje Niksic <hniksic@arsdigita.com>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Env�e informaci�n sobre errores y sugerencias a <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Ejecute `%s --help' para obtener la lista de opciones.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: opci�n ilegal -- `-n%c'\n"

# Como otras veces, te propongo que sustituyas `sacar' por `ofrecer' -
# cll
#
#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "No se puede ofrecer informaci�n y estar silencioso al mismo tiempo.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"No se pueden usar marcas de tiempo y no sobreescribir ficheros al mismo "
"tiempo.\n"

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

# `no recuperando' no me suena muy espa�ol, te propongo la alternativa
# m�s "humanizada", `no se recupera' - cll
#
#: src/main.c:1079
#, fuzzy, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "El fichero `%s' ya est� ah�, no se recupera.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: falta la URL\n"

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
msgstr "No se han encontrado URLs en %s.\n"

# `Bajados' es una traducci�n demasiado literal. Como en uno de los
# mensajes de ayuda que hay m�s arriba, y para ser coherente, con lo que
# all� te sugiero, te propongo ahora tambi�n `descargados' - cll
#
#: src/main.c:1336
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"ACABADO --%s--\n"
"Descargados: %s bytes en %d ficheros\n"

# �Efectivamente! Ahora lo has puesto tu, ...  `download'=`descarga' -
# cll
#
#: src/main.c:1345
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "�Cuota de descarga (%s bytes) EXCEDIDA!\n"

# Lo mismo que antes, ... `background' es `segundo plano' - cll
#
#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Continuando en segundo plano.\n"

# Lo mismo que antes, ... `background' es `segundo plano' - cll
#: src/mswindows.c:292
#, fuzzy, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Continuando en segundo plano, pid %d.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "La salida ser� escrita en `%s'.\n"

# he imitado a I�aki Gonzalez en el error.es.po, donde no traduce socket.
#
# Si, este es uno de esos casos que se dan por imposibles ya, ... Todo
# el mundo utilizamos `socket' "asinque" nada, ... - cll
#
#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: No se ha podido encontrar un controlador de `socket' utilizable\n"

# Simplemente, te cambio un par de palabras de sitio, a ver si as� te
# gusta m�s, ... - cll
#
#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: atenci�n: no aparece ning�n nombre de m�quina antes del s�mbolo "
"\"%s\"\n"

# la traducci�n de token es de diccionario, pero me parece correcta.
# nota jjrs: Aqu� se usa en el contexto de un analizador l�xico (parser)
#
# Asi es, jjrs tiene raz�n, ... por eso, `token' es habitualmente
# traducido en inform�tica como `s�mbolo'. La traducci�n, por lo tanto,
# es correcta - cll
#
#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: s�mbolo desconocido \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Modo de empleo: %s NETRC [NOMBREDEM�QUINA]\n"

# no tengo ni idea de a que se refiere stat en este caso :-/
# nota jjrs: stat es una funci�n de C que obtiene datos de un archivo
#   y en esta parte solamente lo usa para checar si existe el archivo
#   pero el wget no utiliza esta funci�n.
#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: no se pudo ejecutar `stat' sobre %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr ""

#: src/openssl.c:173
#, fuzzy
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "No se pudo alimentar el PRNG de OpenSSL; deshabilitando SSL.\n"

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

# Como en otros mensajes anteriores te recomiendo que emplees el t�rmino
# `omitir' en vez de `saltar' para `skip' - clldigits in the skipped amount in K.
#: src/progress.c:242
#, fuzzy, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ omitiendo %dK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr ""
"El estilo de la pantalla '%s' no es v�lido; se utilizar� el predeterminado.\n"

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
msgstr "Eliminando %s puesto que deber�a ser rechazado.\n"

#: src/res.c:391
#, fuzzy, c-format
msgid "Cannot open %s: %s"
msgstr "No se han podido convertir los enlaces en %s: %s\n"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Cargando robots.txt; por favor ignore los errores.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Error parseando la URL del proxy `%s': %s\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Error en la URL del proxy %s: debe ser HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Sobrepasadas las %d redirecciones.\n"

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
"Reintentando.\n"
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
#, fuzzy
msgid "No error"
msgstr "Error desconocido"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr ""

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr ""

#: src/url.c:641
msgid "Bad port number"
msgstr ""

#: src/url.c:643
msgid "Invalid user name"
msgstr ""

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr ""

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr ""

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr ""

#: src/url.c:951
#, fuzzy
msgid "HTTPS support not compiled in"
msgstr "%s: el soporte para la depuraci�n no ha sido compilado.\n"

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

# Lo mismo que antes, ... `background' es `segundo plano' - cll
#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Continuando en segundo plano, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "No se ha podido deshacer el enlace simb�lico `%s': %s\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Error al asignar cookie, en el campo `%s'"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Error de sintaxis al asignar cookie, en el car�cter `%c'.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "El comando REST no funcion�, no se truncar� `%s'.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s para acabar]"

# �Con la Iglesia y el Ej�rcito hemos ido a topar! :)
#
# Lo de `host' puede dar lugar a una aut�ntica discusi�n, ... Te ruego
# por favor que, si no est�s de acuerdo conmigo, te dirijas a la lista
# para discutirlo all� p�blicamente, ... Es importante que todos los
# miembros de Spanish GNU Translation Team actuemos de la misma manera
# y, en este caso, el convenio es emplear el t�rmino `anfitri�n' para
# `host'. De hecho, yo lo he hecho en la traducci�n del CLisp y empieza
# a ser habitual verlo en el software comercial traducido al espa�ol, y
# si no, echa un ojo a los juegos de LucasArts, ... - cll
#
#~ msgid "Host not found"
#~ msgstr "No se ha encontrado el anfitri�n"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "No se pudo configurar un contexto SSL\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "No se pudo descargar los certificados desde %s\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Intent�ndolo sin el certificado especificado\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "No se pudo obtener la clave certificadora desde %s\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Fin de fichero mientras se analizaban las cabeceras.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "No se pudo continuar la descarga de este fichero, lo que choca con `-c'.\n"
#~ "Se rechaza truncar el fichero existente `%s'.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s para acabar)"

# Has traducido `retrieve' como `recuperar' todo el rato, ... �por qu�
# lo cambias ahora?. Te lo pongo de nuevo como `recuperar' - cll
# jjr no solo revis�, sino que adem�s tradujo bastante cacho del po,
# seguramente se debe a eso - Salva
#
#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "El fichero '%s' ya existe, no se recuperar�.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - `%s' guardado [%ld/%ld])\n"
#~ "\n"

#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
#~ msgstr "%s (%s) - Conexi�n cerrada en el byte %ld/%ld. "

# �No debiera ser la `direcci�n IP local'? - cll
# uups - Salva
#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: no se pudo convertir `%s' en una direcci�n IP.\n"

# Te cambio la `o' antes de `off' por `u' - cll
#~ msgid "%s: %s: Please specify always, on, off, or never.\n"
#~ msgstr "%s: %s: por favor especifique siempre, on, off, o nunca.\n"

# Primero, simplemente pongo `wget' con `W'. Es una pijada :) pero es
# por hacerlo como en el mensaje original, ...rc' contendr� una
# orden y, sin embargo, cualquier usuario imaginar� que, al ser un
# fichero con un nombre acabado en `rc', ser� un fichero de
# recursos. Esto es, no s�lo servir� para ejecutar varias �rdenes al
# inicio de Wget, sino que adem�s, probablemente servir� para configurar
# su ejecuci�n. Por todo ello, �qu� tal te suena `ejecuta el fichero de
# �rdenes .wgetrc'?. De momento, yo te lo pongo as�, ... - cll
# bien - Salva
#
# --execute ejecuta una orden `del estilo de las incluidas en .wgetrc'
# (nl)
#
#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Inicio:\n"
#~ "  -V,  --version           muestra la versi�n de wget y termina.\n"
#~ "  -h,  --help              muestra esta ayuda.\n"
#~ "  -b,  --background        pasa a segundo plano al iniciar.\n"
#~ "  -e,  --execute=ORDEN     ejecuta una orden como las de `.wgetrc'.\n"
#~ "\n"

# tengo que dejar los porros! (pero que conste que se entiende)
# me refiero por supuesto a la traducci�n de verbose y quiet - Salva,
# d�jala tal cual, ... solo que lo de ��CALLADITO!! :) :) Me parece
# exagerado, ... como bien dices, ���seguro que estabas fumado!!! :) :)
# (ni se entiende, ni leches, seguro que estabas literalmente fumado ;)
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
#~ "       --egd-file=FILE        file name of the EGD socket.\n"
#~ "\n"
#~ msgstr ""
#~ "Fichero de entrada y registro:\n"
#~ "  -o,  --output-file=FICHERO   registra los mensajes en FICHERO.\n"
#~ "  -a,  --append-output=FICHERO a�ade los mensajes a FICHERO.\n"
#~ "  -d,  --debug                 imprime la salida de depurado.\n"
#~ "  -q,  --quiet                 modo silencioso (no muestra ninguna "
#~ "salida).\n"
#~ "  -v,  --verbose               modo informativo (predeterminado).\n"
#~ "  -nv, --non-verbose           muestra el m�nimo necesario de "
#~ "informaci�n.\n"
#~ "  -i,  --input-file=FICHERO    descarga las URLs que haya en FICHERO.\n"
#~ "  -F,  --force-html            trata el fichero de entrada como HTML.\n"
#~ "  -B,  --base=URL              a�ade URL delante de los enlaces "
#~ "relativos\n"
#~ "                               en el fichero -F -i.\n"
#~ "       --sslcertfile=FICHERO   certificado opcional del cliente.\n"
#~ "       --sslcertkey=FICHERO    llave opcional para este certificado.\n"
#~ "       --egd-file=FICHERO     fichero del socket EGD.\n"
#~ "\n"

# `pone' me parece demasiado coloquial. Prefiero la traducci�n textual
# `establece''?. Te lo dejo como `recuperando'.ue me parece importante, porque har�s seguro que la
# salida no sea c�modamente legible para el usuario. Te la desdoblo en
# dos l�neas.
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
#~ "       --progress=TYPE          select progress gauge type.\n"
#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
#~ "local.\n"
#~ "  -S,  --server-response        print server response.\n"
#~ "       --spider                 don't download anything.\n"
#~ "  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
#~ "retrieval.\n"
#~ "       --random-wait            wait from 0...2*WAIT secs between "
#~ "retrievals.\n"
#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
#~ "\n"
#~ msgstr ""
#~ "Descarga:\n"
#~ "       --bind-address=DIRECCI�N   realiza un bind a la DIRECCI�N (m�quina "
#~ "o IP)\n"
#~ "                                  en la m�quina local.\n"
#~ "  -t,  --tries=N�MERO             establece en N�MERO el n�mero de "
#~ "reintentos\n"
#~ "                                  (0 no pone l�mite).\n"
#~ "  -O,  --output-document=FICHERO  escribe los documentos en FICHERO.\n"
#~ "  -nc, --no-clobber               no sobreescribir ficheros existentes. "
#~ "o \n"
#~ "                                  utilizar sufijos .#\n"
#~ "  -c,  --continue                 continuar recuperando un fichero "
#~ "existente.\n"
#~ "       --dot-style=ESTILO         establece el estilo de la pantalla de\n"
#~ "                                  recuperaci�n.\n"
#~ "  -N,  --timestamping             no recupera ficheros m�s viejos que "
#~ "los\n"
#~ "                                  locales.\n"
#~ "  -S,  --server-response          imprime la respuesta del servidor.\n"
#~ "       --spider                   no recupera nada.\n"
#~ "  -T,  --timeout=SEGUNDOS         establece el tiempo de espera de "
#~ "lectura\n"
#~ "                                  en SEGUNDOS.\n"
#~ "  -w,  --wait=SEGUNDOS            espera SEGUNDOS entre recuperaciones.\n"
#~ "       --waitretry=SEGUNDOS       espera 1...SEGUNDOS entre reintentos.\n"
#~ "       --random-wait            espera de 0 a 2*WAIT segundos entre "
#~ "reintentos.\n"
#~ "  -Y,  --proxy=on/off             habilita/deshabilita el uso de "
#~ "proxies.\n"
#~ "  -Q,  --quota=N�MERO             establece la cuota de recuperaci�n en "
#~ "N�MERO.\n"
#~ "       --limit-rate=TASA        limita la tasa de descarga a TASA.\n"
#~ "\n"

# Te he cambiado lo de `host' por el t�rmino apropiado (que tu ya ven�as
# utilizando en los mensajes anteriores): `anfitri�n'. Adem�s, hab�as
# puesto `/...' al final de la misma l�nea, cuando no es ah� donde ten�a
# que ir. - cll
#
# Ojo con --no-host-directories, los directorios no se crean
# "en el anfitri�n", sino que se crean directorios cuyo nombre
# coincide con el anfitri�n. Ya lo he cambiado. sv
#
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
#~ "Directorios:\n"
#~ "  -nd  --no-directories            no crea directorios.\n"
#~ "  -x   --force-directories         fuerza la creaci�n de directorios.\n"
#~ "  -nH, --no-host-directories       no crea directorios en el anfitri�n\n"
#~ "  -P,  --directory-prefix=PREFIJO  guarda ficheros en PREFIJO/...\n"
#~ "       --cut-dirs=N�MERO           descarta N�MERO componentes del "
#~ "directorio\n"
#~ "                                   remoto.\n"
#~ "\n"

# Como en otros mensajes, sustituyo `poner' por `establecer' u otro
# sin�nimo parecido.es espa�ol, ... sino spanglish. Este es, precisamente,
# el tipo de t�rminos que debieran evitarse en la medida de lo posible.
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
#~ "Opciones de HTTP:\n"
#~ "       --http-user=USUARIO   establece que el usuario de http es "
#~ "USUARIO.\n"
#~ "       --http-passwd=CLAVE   utiliza CLAVE como contrase�a de http.\n"
#~ "  -C,  --cache=on/off        (des)habilita la cach� del servidor de "
#~ "datos.\n"
#~ "                             (normalmente habilitada).\n"
#~ "  -E,  --html-extension      guarda todos los ficheros de texto/html con "
#~ "la\n"
#~ "                             extensi�n .html.\n"
#~ "       --ignore-length       ignora el campo 'Content-Length' de la "
#~ "cabecera.\n"
#~ "       --header=TEXTO        inserta el TEXTO entre las cabeceras.\n"
#~ "       --proxy-user=USUARIO  establece que el usuario del proxy es "
#~ "USUARIO.\n"
#~ "       --proxy-passwd=CLAVE  utiliza CLAVE como contrase�a del proxy.\n"
#~ "       --referer=URL         incluir cabecera 'Referer: URL' en petici�n "
#~ "HTTP.\n"
#~ "  -s,  --save-headers        guarda las cabeceras de HTTP en un fichero.\n"
#~ "  -U,  --user-agent=AGENTE   identificarse como AGENTE en vez de Wget/"
#~ "VERSI�N.\n"
#~ "       --no-http-keep-alive  deshabilita las conexiones persistentes de "
#~ "HTTP.\n"
#~ "       --cookies=off         no utiliza cookies.\n"
#~ "       --load-cookies=FICH.  carga las cookies desde FICH. antes de la "
#~ "sesi�n.\n"
#~ "       --save-cookies=FICH.  guarda las cookies en FICH. tras la sesi�n.\n"
#~ "\n"

# `turn on/off' significa `encender' o `apagar', por supuesto, ..., pero
# en estos casos resulta mucho m�s apropiado `habilitar', `deshabilitar'
# o, si quieres, `activar' y `desactivar' - cll
#~ msgid ""
#~ "FTP options:\n"
#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
#~ "       --retr-symlinks         when recursing, get linked-to files (not "
#~ "dirs).\n"
#~ "\n"
#~ msgstr ""
#~ "Opciones de FTP:\n"
#~ "  -nr, --dont-remove-listing   no elimina los ficheros '.listing'.\n"
#~ "  -g,  --glob=on/off           habilita/deshabilita el uso de comodines "
#~ "en\n"
#~ "                               ficheros.\n"
#~ "       --passive-ftp           usa el m�todo de trasferencia \"pasivo\".\n"
#~ "       --retr-symlinks         al descender por los directorios, recupera "
#~ "los\n"
#~ "                               ficheros a los que apunta un enlace (no "
#~ "los\n"
#~ "                               directorios).\n"
#~ "\n"

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
#~ "Recuperaci�n recursiva:\n"
#~ "  -r,  --recursive            succionado de web recursivo, ��selo con "
#~ "cuidado!\n"
#~ "  -l,  --level=N�MERO         profundidad m�xima de recursi�n "
#~ "(0=ilimitada)\n"
#~ "       --delete-after         borra los ficheros locales una vez "
#~ "descargados.\n"
#~ "  -k,  --convert-links        convierte los enlaces no relativos en "
#~ "relativos.\n"
#~ "  -K,  --backup-converted     antes de transformar el fichero X, hace "
#~ "una\n"
#~ "                              copia como X.orig.\n"
#~ "  -m,  --mirror               atajo equivalente a -r -N -l inf -nr.\n"
#~ "  -p,  --page-requisites      descarga todas las im�genes, etc. "
#~ "necesarias\n"
#~ "                              para mostrar la p�gina HTML.\n"
#~ "\n"

# En la opci�n --exclude-domains, date cuenta de que son los dominios
# los que est�n separados por comas, no la lista, ... ;) sin
# traducir. Te pongo `anfitriones' donde ten�as `hosts'
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
#~ "Aceptar/rechazar recursivo:\n"
#~ "  -A,  --accept=LISTA                lista, separada por comas, de "
#~ "extensiones\n"
#~ "                                     aceptadas.\n"
#~ "  -R,  --reject=LISTA                lista, separada por comas, de "
#~ "extensiones\n"
#~ "                                     rechazadas.\n"
#~ "  -D,  --domains=LISTA               lista, separada por comas, de "
#~ "dominios\n"
#~ "                                     aceptados.\n"
#~ "       --exclude-domains=LISTA       lista de dominios rechazados, "
#~ "separados\n"
#~ "                                     por comas.\n"
#~ "       --follow-ftp                  sigue enlaces a FTP desde documentos "
#~ "HTML.\n"
#~ "       --follow-tags=LISTA           lista de etiquetas HTML a las que se "
#~ "sigue.\n"
#~ "  -G,  --ignore-tags=LISTA           lista de etiquetas HTML que se "
#~ "ignorar�n.\n"
#~ "  -H,  --span-hosts                  ir a anfitriones distintos en la "
#~ "recursi�n.\n"
#~ "  -L,  --relative                    sigue s�lo enlaces relativos.\n"
#~ "  -I,  --include-directories=LISTA   lista de directorios permitidos.\n"
#~ "  -X,  --exclude-directories=LISTA   lista de directorios excluidos.\n"
#~ "  -np, --no-parent                   no asciende al directorio padre.\n"
#~ "\n"

# Pongo el texto "est�ndar", extraido de recode, por ejemplo. sv
#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Este programa se distribuye con la esperanza de que sea �til,\n"
#~ "pero SIN NINGUNA GARANT�A; ni siquiera la garant�a impl�cita de\n"
#~ "COMERCIABILIDAD o IDONEIDAD PARA UN FIN DETERMINADO. V�ase la\n"
#~ "Licencia P�blica General de GNU para obtener m�s detalles.\n"

# Eso de `comenzando ...' ha sido demasiado literal, ... ;) �Qu� te
# parece `iniciando'? Es lo mismo pero es un t�rmino m�s com�n en
# inform�tica, ... - cll
#
#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Iniciando WinHelp %s\n"

# `host' es traducido como `anfitri�n'. Debes evitar los t�rminos en
# ingl�s tanto como puedas, ... - cll
#
#~ msgid "Could not find proxy host.\n"
#~ msgstr "No se pudo encontrar el anfitri�n de proxy.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: redirecci�n c�clica detectada.\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: no hay suficiente memoria.\n"
