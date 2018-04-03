# Irish translations for wget.
# Copyright (C) 2004 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Kevin Patrick Scannell <scannell@SLU.EDU>, 2004, 2007, 2008.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.11.3\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2008-05-13 11:59-0500\n"
"Last-Translator: Kevin Scannell <kscanne@gmail.com>\n"
"Language-Team: Irish <gaeilge-gnulinux@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=ISO-8859-1\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=5; plural=n==1 ? 0 : n==2 ? 1 : (n>2 && n<7) ? 2 :"
"(n>6 && n<11) ? 3 : 4;\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Earr�id anaithnid"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: T� an rogha `%s' d�bhr�och\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: n� cheada�tear arg�int i ndiaidh na rogha `--%s'\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: n� cheada�tear arg�int i ndiaidh na rogha `%c%s'\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: t� arg�int de dh�th i ndiaidh na rogha `%s'\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: rogha anaithnid `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: rogha anaithnid `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: rogha neamhcheadaithe -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: rogha neamhbhail� -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: t� arg�int de dh�th i ndiaidh na rogha -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: T� an rogha `-W %s' d�bhr�och\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: n� cheada�tear arg�int i ndiaidh na rogha `-W %s'\n"

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
msgstr ""
"%s: n� f�idir seoladh ceangail `%s' a r�iteach; ceangal � dh�chumas�.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Ag dul i dteagmh�il le %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Ag dul i dteagmh�il le %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "ceangailte.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "teipthe: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: n� f�idir seoladh an �str�omhaire `%s' a r�iteach\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Tionta�odh %d comhad i %s soicind.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "%s � thiont�..."

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "faic le d�anamh.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "N� f�idir naisc a thiont� i %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "N� f�idir `%s' a scriosadh: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "N� f�idir c�ltaca a dh�anamh ar %s mar %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Earr�id chomhr�ire i Set-Cookie: %s ag %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Ba mhaith le fian�n � %s an fearann a shocr� mar %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "N� f�idir comhad fian�in `%s' a oscailt: %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Earr�id le linn scr�ofa i gcomhad `%s': %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Earr�id ag d�nadh comhaid `%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Modh liost�il gan taca�ocht, ag baint triail as pars�la� liost�la Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Inn�acs de /%s ar %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "am anaithnid       "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Comhad      "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Comhadlann  "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Nasc        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "�iginnte    "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s beart)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Fad: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) f�gtha"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s f�gtha"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (neamh�dar�sach)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Log�il isteach mar %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Earr�id sa fhreagra �n fhreastala�, ceangal rialaithe � dh�nadh.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Earr�id i mbeannacht �n fhreastala�.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Theip ar scr�obh, ceangal rialaithe � dh�nadh.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "N� cheada�onn an freastala� do log�il isteach.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Log�il mh�cheart.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Log�ilte isteach!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Earr�id fhreastala�, n� f�idir an cine�l c�rais a dh�anamh amach.\n"

# used in the stats page table
#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "cr�ochnaithe.  "

# used in the stats page table
#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "cr�ochnaithe.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Cine�l anaithnid `%c', ceangal rialaithe � dh�nadh.\n"

# used in the stats page table
#: src/ftp.c:496
msgid "done.  "
msgstr "cr�ochnaithe."

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> N�l g� le CWD.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"N�l a leith�id de chomhadlann `%s' ann.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> N�l g� le CWD.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "N� f�idir t�s a chur leis an aistri� PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "N� f�idir an freagra PASV a phars�il.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "n�orbh fh�idir dul i dteagmh�il le %s port %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Earr�id cheangail (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT neamhbhail�.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"Theip ar REST, ag atos� � thosach.\n"

#: src/ftp.c:957
#, fuzzy, c-format
msgid "File %s exists.\n"
msgstr ""
"T� an cianchomhad ann.\n"
"\n"

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"N�l a leith�id de chomhad `%s' ann.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"N�l a leith�id de chomhad `%s' ann.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"N�l a leith�id de chomhad n� de chomhadlann `%s' ann.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "T� %s ann anois.\n"

# CRL next update.
#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, ceangal rialaithe � dh�nadh.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Ceangal sonra�: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Ceangal rialaithe d�nta.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Tobscoireadh an t-aistri� sonra�.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "T� an comhad `%s' ann cheana; n� aisghabhfar �.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(iarracht:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' s�bh�ilte [%s/%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' s�bh�ilte [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "%s � bhaint.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "`%s' � �s�id mar chomhad sealadach chun liost�.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "Baineadh `%s'.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Doimhneacht athch�rs�la %d n�os m� n� an t-uasmh�id %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"N�l an cianchomhad n�os nua� n� an comhad log�nta `%s' -- n� aisghabhfar �.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"T� an cianchomhad n�os nua� n� an comhad log�nta `%s' -- � aisghabh�il.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"N�l an m�id c�anna ar na comhaid (log�nta %s) -- � aisghabh.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Ainm neamhbhail� ar an nasc siombalach, � scipe�il.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"T� nasc ceart siombalach ann cheana %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Nasc siombalach %s -> %s � chruth�\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "N�l aon taca�ocht ar naisc shiombalacha, ag scipe�il `%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Ag f�g�il na comhadlainne `%s' ar l�r.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: comhad de chine�l anaithnid/gan tac�.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: stampa truaillithe ama.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"N� aisghabhfar comhadlanna �s rud � go bhfuil an doimhneacht %d faoi l�thair "
"(uasmh�id %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr ""
"n� ag dul isteach i `%s' �s rud � go bhfuil s� f�gtha-as/nach-curtha-san-"
"�ireamh.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "`%s' � dhi�lt�.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Earr�id agus %s � chur i gcomhoiri�nacht do %s: %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "N�l aon rud comhoiri�nach leis an phatr�n `%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Scr�obhadh inn�acs i gcruth HTML i `%s' [%s].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Scr�obhadh inn�acs i gcruth HTML i `%s'.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "EARR�ID"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "RABHADH"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: N�or thaispe�in %s teastas ar bith.\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: N�or thaispe�in %s teastas ar bith.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "  T� an teastas imithe as feidhm.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s: N�or thaispe�in %s teastas ar bith.\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Earr�id agus URL an seachfhreastala� %s � phars�il: %s.\n"

#: src/gnutls.c:283
#, fuzzy
msgid "The certificate has not yet been activated\n"
msgstr "  N�l an teastas eisithe bail� f�s.\n"

#: src/gnutls.c:288
#, fuzzy
msgid "The certificate has expired\n"
msgstr "  T� an teastas imithe as feidhm.\n"

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"%s: n�l ainm coitianta an teastais `%s' comhoiri�nach leis an �stainm "
"iarrtha `%s'.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "�str�omhaire anaithnid"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Teip shealadach ar r�iteach na n-ainmneacha"

#: src/host.c:364
msgid "Unknown error"
msgstr "Earr�id anaithnid"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "%s � r�iteach... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "teipthe: Gan seoladh IPv4/IPv6 don �str�omhaire.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "teipthe: thar am.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: N� f�idir nasc %s neamhioml�n a r�iteach.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL neamhbhail� %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Theip ar scr�obh iarratais HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Gan cheannt�sca, glac le HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "SSL � dh�chumas� de bharr earr�id�.\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Comhad sonra� POST `%s' ar iarraidh: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Ag baint ath�s�id as an gceangal le %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Theip ar l�amh freagra �n seachfhreastala�: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Theip ar tholl�n� seachfhreastala�: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Iarratas %s seolta, ag fanacht le freagra... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "N�or glacadh aon sonra.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Earr�id (%s) ag l�amh na gceannt�sc.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Sc�im anaithnid fh�ordheimhnithe.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Theip ar �dar�.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"T� an comhad `%s' ann cheana; n� aisghabhfar �.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "L�ne st�dais m�chumtha"

#: src/http.c:2095
msgid "(no description)"
msgstr "(gan cur s�os)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Su�omh: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "gan sonr�"

#: src/http.c:2156
msgid " [following]"
msgstr " [� lean�int]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Bh� an comhad aisghafa ina ioml�ine cheana; n�l faic le d�anamh.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Fad: "

#: src/http.c:2263
msgid "ignored"
msgstr "rinneadh neamhaird"

#: src/http.c:2365
#, fuzzy, c-format
msgid "Saving to: %s\n"
msgstr "� sh�bh�il i: `%s'\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Rabhadh: n�l saor�ga ar f�il i HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Cumasa�odh an m�d cr�bad�in. Seice�il an bhfuil an cianchomhad ann.\n"

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "N� f�idir aon rud a scr�obh i gcomhad `%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "N� f�idir ceangal SSL a dh�anamh.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "EARR�ID: Atreor� (%d) gan su�omh.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "N�l an cianchomhad ann -- nasc briste!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s EARR�ID %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Ceannt�sc `Last-modified' ar iarraidh -- n� �s�idfear stampa� ama.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"Ceannt�sc neamhbhail� `Last-modified' -- tugadh neamhaird ar an stampa ama.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"N�l an comhad freastala� n�os nua� n� an comhad log�nta `%s' -- n� "
"aisghabhfar �.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "N�l an m�id c�anna ar na comhaid (log�nta %s) -- � aisghabh.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "T� an cianchomhad n�os nua�, � aisghabh�il.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"T� an cianchomhad ann agus is f�idir go bhfuil naisc le hacmhainn� eile ann "
"-- � aisghabh�il.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"T� an cianchomhad ann ach n�l aon nasc ann -- n� aisghabhfar �.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"T� an cianchomhad ann agus seans go bhfuil nascanna breise ann,\n"
"ach d�chumasa�odh athch�rs�il -- n� aisghabhfar �.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"T� an cianchomhad ann.\n"
"\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: URL neamhbhail� %s: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' s�bh�ilte [%s/%s]\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' s�bh�ilte [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Ceangal d�nta ag beart %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Earr�id l�imh ag beart %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Earr�id l�imh ag beart %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: T� WGETRC d�rithe ar %s, agus n�l s� seo ann ar chor ar bith.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: N� f�idir %s a l�amh (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Earr�id i %s, l�ne %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Earr�id chomhr�ire i %s ag l�ne %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Ord� anaithnid `%s' i %s ag l�ne %d.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Rabhadh: T� an comhad wgetrc �s�ideora agus an comhad c�rais wgetrc "
"araon d�rithe ar `%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Ord� neamhbhail� --execute `%s'\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Slonn neamhbhail� Boole `%s'; �s�id `on' n� `off'.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Uimhir neamhbhail� `%s'.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Luach neamhbhail� bearta `%s'\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Tr�imhse neamhbhail� `%s'\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Luach neamhbhail� `%s'.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Ceannt�sc neamhbhail� `%s'.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Cine�l neamhbhail� dul chun cinn `%s'.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Teorann� neamhbhail� `%s', �s�id [unix|windows],[lowercase|"
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
"Fuarthas %s, ag athsheoladh an aschuir go `%s'.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"fuarthas %s.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; log�il � d�chumas�.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "�s�id: %s [ROGHA]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Is riachtanach le rogha ghearr aon arg�int at� riachtanach leis an rogha "
"fhada.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Tos�:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           taispe�in an leagan Wget agus scoir.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              taispe�in an chabhair seo.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        rith sa ch�lra.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=ORD�      rith ord� sa st�l `.wgetrc'.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Log�il agus an t-inchomhad:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=COMHAD  log�il teachtaireachta� i gCOMHAD.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr ""
"  -a,  --append-output=COMHAD iarcheangail teachtaireachta� le COMHAD.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               taispe�in go leor eolas dh�fhabhtaithe.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              taispe�in eolas dh�fhabhtaithe Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               tostach (gan aschur).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             b� foclach (is � seo an r�amhshocr�).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          n� b� foclach, ach n� b� tostach ach oiread.\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=COMHAD   �osluchtaigh URLanna �n CHOMHAD.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          caith leis an inchomhad mar HTML.\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping            n� haisghabh comhaid ar�s mura bhfuil siad "
"n�os nua�\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "�osluchtaigh:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=UIMHIR            l�on na n-atrialacha (0=gan teorainn).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       atriail fi� m� t� an ceangal di�ltaithe.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=COMHAD  scr�obh c�ip�is� i gCOMHAD.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr "  -nc, --no-clobber              n� forscr�obh comhaid at� ann.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr "  -c,  --continue                atosaigh �osluchtaigh comhad.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=CINE�L         cine�l rianaire dul chun cinn.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            n� haisghabh comhaid ar�s mura bhfuil siad "
"n�os nua�\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         taispe�in freagra �n fhreastala�.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  n� h�osluchtaigh rud ar bith.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SOICIND�        socraigh gach seal fanachta = SOICIND�.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr "       --dns-timeout=SOIC        seal fanachta DNS = SOIC.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr "       --connect-timeout=SOIC    seal fanachta ceangailte = SOIC.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SOIC       seal fanachta l�imh = SOIC.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SOICIND�           fan SOICIND� idir �osluchtuithe.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr "       --waitretry=SOICIND�      fan 1...SOICIND� idir atrialacha.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             fan � 0...2*WAIT soicind� idir "
"�osluchtuithe.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                n� h�s�id seachfhreastala�.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=UIMHIR            socraigh cu�ta athghabh�la.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=SEOLADH    ceangail le SEOLADH (�stainm/IP) go "
"log�nta.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=R�TA         socraigh uasr�ta �osluchtaithe.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            n� cuir cuardaigh DNS i dtaisce.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  �s�id carachtair ceadaithe ag an ch�ras.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             n� bac le c�s agus comhaid � meaitse�il.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              ceangail le seolta� IPv4 amh�in.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              ceangail le seolta� IPv6 amh�in.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=CLANN     ceangail ar dt�s le seolta� �n CHLANN "
"sonraithe:\n"
"                                 IPv6, IPv4, n� \"none\".\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=�S�IDEOIR          socraigh �S�IDEOIR do ftp agus http araon.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=FF             socraigh focal faire do ftp agus http.\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr ""
"       --password=FF             socraigh focal faire do ftp agus http.\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-proxy                n� h�s�id seachfhreastala�.\n"

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
msgstr "Comhadlanna:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           n� cruthaigh comhadlanna.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        cruthaigh comhadlanna i gc�na�.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      n� cruthaigh comhadlanna �stacha.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     �s�id ainm an phr�tacail i gcomhadlanna.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=R�IM�R  s�bh�il comhaid i R�IM�R/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=UIMHIR          d�an neamhshuim ar UIMHIR comhph�irt "
"chomhadlainne.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Roghanna HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=�S�IDEOIR   socraigh �S�IDEOIR http.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-passwd=FF        socraigh focal faire http.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              n� ceadaigh sonra� curtha i dtaisce ag an "
"fhreastala�.\n"

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
"  -E,  --html-extension        s�bh�il gach c�ip�is HTML le hiarmh�r `."
"html'.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         d�an neamhaird den r�imse `Content-Length'.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=TEAGHR�N       ions�igh TEAGHR�N sna ceannt�sca.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr "       --max-redirect          uasmh�id atreoraithe sa leathanach.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=�S�IDEOIR  socraigh �S�IDEOIR an seachfhreastala�.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""
"       --proxy-passwd=FF       socraigh focal faire seachfhreastala�.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           iniaigh ceannt�sc `Referer: URL' san "
"iarracht.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          s�bh�il na ceannt�sca HTTP i gcomhad.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AINM       cuir thusa f�in in aithne le hAINM vs. Wget/"
"LEAGAN.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    d�chumasaigh keep-alive HTTP (ceangail "
"sheasmhacha).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            n� h�s�id fian�in.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=COMHAD   luchtaigh fian�in � CHOMHAD roimh an "
"seisi�n.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=COMHAD   s�bh�il fian�in i gCOMHAD tar �is an "
"tseisi�in.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  luchtaigh agus s�bh�il fian�in (sealadacha) "
"an tseisi�in.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=TEAGHR�N    �s�id an modh POST; seol TEAGHR�N mar "
"sonra�.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=COMHAD      �s�id an modh POST; seol na sonra� as "
"COMHAD.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   g�ill do cheannt�sc Content-Disposition agus\n"
"                               ainmneacha log�nta � roghn� (TRIALACH).\n"

#: src/main.c:576
#, fuzzy
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Seol bunfhaisn�is fh�ordheimhnithe HTTP\n"
"                               gan fanacht le d�shl�n �n fhreastala�.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Roghanna HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     roghnaigh pr�tacal daingean: auto, SSLv2,\n"
"                                SSLv3, n� TLSv1.\n"
"                                SSLv3, and TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   n� bail�ochtaigh teastas an fhreastala�.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=COMHAD     comhad teastais an chliaint.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=CINL  cine�l teastais an chliaint: PEM n� DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=COMHAD     comhad don eochair phr�obh�ideach.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""
"       --private-key-type=CINL  cine�l na heochrach pr�obh�id�, PEM n� DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=COMHAD  comhad le burla den CAnna.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=COMHADLN  comhadlann leis an liosta haise�ilte de "
"CAnna.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=COMHAD     comhad le sonra� randamacha chun SSL PRNG a "
"sh�olr�.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=COMHAD        comhad a ainmn�onn an soic�ad EGD le sonra� "
"randamacha.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Roghanna FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=�S�IDEOIR    socraigh an t�S�IDEOIR ftp.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=FF       socraigh an focal faire ftp.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     n� bain comhaid `.listing' amach.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               n� h�s�id glob�il le hainmneacha comhaid "
"FTP.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        d�chumasaigh an m�d aistrithe \"passive\".\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         faigh comhaid lena nasctar, le linn "
"athch�rs�la.\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "�oslucht� athch�rsach:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          �osluchtaigh go hathch�rsach.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=UIMHIR       uasmh�id doimhneachta (inf n� 0 = gan "
"teorainn).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       scrios comhaid log�nta i ndiaidh �osluchtaithe.\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      nasc le comhaid log�nta i HTML �osluchtaithe.\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   roimh X a thiont�, d�an c�ltaca mar X.orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   roimh X a thiont�, d�an c�ltaca mar X.orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             rogha aicearra ar comhbhr� le -N -r -l inf --no-"
"remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    faigh gach �omh�, srl. riachtanach chun an\n"
"                               leathanach HTML a thaispe�int go ceart.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    glac le n�ta� tr�chta HTML go docht (mar SGML).\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Glacadh/Di�lt� Athch�rsach:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LIOSTA             iarmh�reanna inghlactha, scartha le "
"cam�ga.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LIOSTA             iarmh�reanna di�ltaithe, scartha le "
"cam�ga.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LIOSTA            fearainn ghlactha, scartha le cam�ga.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LIOSTA    fearainn di�ltaithe, scartha le cam�ga.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr "       --follow-ftp                lean naisc FTP i gc�ip�is� HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LIOSTA        clibeanna HTML le lean�int, scartha le "
"cam�ga.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LIOSTA        clibeanna HTML le scipe�il, scartha le "
"cam�ga.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                t�igh go cian�sta� m�s athch�rsach �.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  n� lean ach naisc choibhneasta.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LIOSTA comhadlanna ceadaithe.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LIOSTA comhadlanna neamhcheadaithe.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""
"  -np, --no-parent                 n� t�igh suas go comhadlanna n�os airde.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Seol tuairisc� fabhtanna agus molta� chuig <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget, leagan %s, faighteoir cianchomhad nach idirghn�omhach.\n"

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
msgstr "Copyright � 2008 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Cead�nas GPLv3+: GNU GPL, leagan 3 n� n�os nua�\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Is saorbhogearra � seo: ceada�tear duit � a athr� agus a athdh�ileadh.\n"
"N�l bar�nta AR BITH ann, an oiread at� ceadaithe de r�ir dl�.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Scr�ofa ar dt�s ag Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Cothaitheoir reatha: Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Seol tuairisc� fabhtanna agus molta� chuig <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Bain triail as `%s --help' chun tuilleadh roghanna a fheice�il.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: rogha neamhcheadaithe -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "N� f�idir a bheith foclach agus tostach san am c�anna.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"N� f�idir stampa� ama a dh�anamh gan forscr�obh ar do chuid sheanchomhaid.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "N� f�idir --inet4-only agus --inet6-only a shonr� araon.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"N� f�idir -k agus -O araon a shonr� m� t� URLanna iomad�la ann, n� in "
"�ineacht le -p n� -r. F�ach ar an l�mhleabhar chun tuilleadh eolais a "
"fh�il.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"RABHADH: M� shonra�onn t� -O in �ineacht le -r n� -p, cuirfear an t-�bhar "
"�osluchtaithe go l�ir sa chomhad a roghnaigh t�.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"RABHADH: n� dh�anann stamp�il ama faic in �ineacht le -O. F�ach ar an\n"
"l�mhleabhar chun tuilleadh eolais a fh�il.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "T� an comhad `%s' ann cheana; n� aisghabhfar �.\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "N� f�idir --inet4-only agus --inet6-only a shonr� araon.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL ar iarraidh\n"

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
msgstr "N�or aims�odh aon URL i %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"CR�OCHNAITHE --%s--\n"
"�osluchtaithe: %d comhad, %s i %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "S�ra�odh an cu�ta �osluchtaithe de %s!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "� lean�int sa ch�lra.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "� lean�int sa ch�lra, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Scr�obhfar aschur i `%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: N�orbh fh�idir tiom�na� in�s�idte soic�id a aimsi�.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: rabhadh: tagann an teaghr�n \"%s\" roimh aon ainm meais�n\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: teaghr�n anaithnid comharthach \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "�s�id: %s NETRC [�STAINM]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: n� f�idir %s a stat: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "RABHADH: s�ol lag randamach in �s�id.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "N�orbh fh�idir PRNG a sh�ol�; b'fh�idir --random-file a �s�id.\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: n� f�idir teastas %s a fh�or�, eisithe ag `%s':\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  N� f�idir �dar�s an eisitheora a fh�or� go log�nta.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Teastas f�ins�nithe.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  N�l an teastas eisithe bail� f�s.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  T� an teastas imithe as feidhm.\n"

#: src/openssl.c:579
#, fuzzy, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: n�l ainm coitianta an teastais `%s' comhoiri�nach leis an �stainm "
"iarrtha `%s'.\n"

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
"Chun ceangal neamhdhaingean a dh�anamh le %s, �s�id `--no-check-"
"certificate'.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ %sK � scipe�il ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Sonr� neamhbhail� ar st�l phonc `%s'; ag f�g�il gan athr�.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  eta %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   i  "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "N� f�idir minic�ocht an chloig REALTIME a fh�il: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Ag baint %s toisc gur ceart � a dhi�lt�.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "N� f�idir %s a oscailt: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "robots.txt � lucht�; d�an neamhaird d'earr�id� le do thoil.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Earr�id agus URL an seachfhreastala� %s � phars�il: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Earr�id i URL seachfhreastala� %s: N� fol�ir a bheith HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "n�os m� n� %d atreor�.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"� �ir� as.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"� triail ar�s.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"N�or aims�odh aon nasc briste.\n"
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
"Aims�odh %d nasc briste.\n"
"\n"
msgstr[1] ""
"Aims�odh %d nasc briste.\n"
"\n"
msgstr[2] ""
"Aims�odh %d nasc briste.\n"
"\n"
msgstr[3] ""
"Aims�odh %d nasc briste.\n"
"\n"
msgstr[4] ""
"Aims�odh %d nasc briste.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "N� raibh aon earr�id"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Sc�im gan tac�"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "�stainm neamhbhail�"

#: src/url.c:641
msgid "Bad port number"
msgstr "Drochuimhir phoirt"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Ainm neamhbhail� �s�ideora"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Seoladh uimhri�il IPv6 gan chr�ochn�"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "N�l seolta� IPv6 ar f�il"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Seoladh uimhri�il IPv6 neamhbhail�"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr ""

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Theip ar leithdh�ileadh %ld beart; cuimhne �dithe.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Theip ar leithdh�ileadh %ld beart; cuimhne �dithe.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "� lean�int sa ch�lra, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Theip ar dh�nascadh an naisc shiombalaigh `%s': %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            cuir URL roimh naisc choibhneasta i gcomhad -"
#~ "F -i.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  caomhnaigh ceadanna � na cianchomhaid.\n"

#~ msgid ""
#~ "Cannot specify -N if -O is given. See the manual for details.\n"
#~ "\n"
#~ msgstr ""
#~ "N� f�idir -N a shonr� m� t� -O ann. F�ach ar an l�mhleabhar chun "
#~ "tuilleadh eolais a fh�il.\n"
#~ "\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                  �s�id seachfhreastala�.\n"

#~ msgid ""
#~ "       --no-content-disposition  don't honor Content-Disposition header.\n"
#~ msgstr ""
#~ "       --no-content-disposition  n� g�ill do cheannt�sc Content-"
#~ "Disposition.\n"

#~ msgid "%s referred by:\n"
#~ msgstr "%s tagartha ag:\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Earr�id i Set-Cookie, r�imse `%s'"

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) - Ceangal d�nta ag beart %s/%s. "

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: Slonn neamhbhail� Boole s�nithe `%s';\n"
#~ "�s�id ceann de `on', `off', `always', n� `never'.\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Scaiptear an r�omhchl�r seo le s�il go mbeidh s� �isi�il,\n"
#~ "ach GAN AON BAR�NTA; go fi� gan an bar�ntas intuigthe\n"
#~ "d'IND�OLTACHT n� FEILI�NACHT D'FHEIDHM AR LEITH.  F�ach ar an\n"
#~ "GNU General Public License chun n�os m� sonra� a fh�il.\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s: Earr�id agus teastas � bhail�ocht� le haghaidh %s: %s\n"

#~ msgid "Failed writing to proxy: %s.\n"
#~ msgstr "Theip ar scr�obh go seachfhreastala�: %s.\n"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "T� an comhad `%s' ann cheana, n� aisghabhfar �.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%s/%s])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - `%s' s�bh�ilte [%s/%s])\n"
#~ "\n"

#~ msgid "Empty host"
#~ msgstr "�str�omhaire folamh"
