+# Irish translations for wget.
+# Copyright (C) 2004 Free Software Foundation, Inc.
+# This file is distributed under the same license as the wget package.
+# Kevin Patrick Scannell <scannell@SLU.EDU>, 2004.
+#
+msgid ""
+msgstr ""
+"Project-Id-Version: wget 1.10-b1\n"
+"Report-Msgid-Bugs-To: \n"
+"POT-Creation-Date: 2005-05-12 11:00-0400\n"
+"PO-Revision-Date: 2005-05-13 11:59-0500\n"
+"Last-Translator: Kevin Patrick Scannell <scannell@SLU.EDU>\n"
+"Language-Team: Irish <ga@li.org>\n"
+"MIME-Version: 1.0\n"
+"Content-Type: text/plain; charset=ISO-8859-1\n"
+"Content-Transfer-Encoding: 8bit\n"
+
+#: src/connect.c:199
+#, c-format
+msgid "%s: unable to resolve bind address `%s'; disabling bind.\n"
+msgstr "%s: n� f�idir seoladh ceangail `%s' a r�iteach; ceangal � dh�chumas�.\n"
+
+#: src/connect.c:271
+#, c-format
+msgid "Connecting to %s|%s|:%d... "
+msgstr "Ag dul i dteagmh�il le %s|%s|:%d... "
+
+#: src/connect.c:274
+#, c-format
+msgid "Connecting to %s:%d... "
+msgstr "Ag dul i dteagmh�il le %s:%d... "
+
+#: src/connect.c:335
+msgid "connected.\n"
+msgstr "nasctha.\n"
+
+#: src/convert.c:176
+#, c-format
+msgid "Converted %d files in %.*f seconds.\n"
+msgstr "Tionta�odh %d comhad i %.*f soicind.\n"
+
+#: src/convert.c:202
+#, c-format
+msgid "Converting %s... "
+msgstr "%s � thiont�..."
+
+#: src/convert.c:215
+msgid "nothing to do.\n"
+msgstr "faic le d�anamh.\n"
+
+#: src/convert.c:223 src/convert.c:247
+#, c-format
+msgid "Cannot convert links in %s: %s\n"
+msgstr "N� f�idir naisc a thiont� i %s: %s\n"
+
+#: src/convert.c:238
+#, c-format
+msgid "Unable to delete `%s': %s\n"
+msgstr "N� f�idir `%s' a scriosadh: %s\n"
+
+#: src/convert.c:447
+#, c-format
+msgid "Cannot back up %s as %s: %s\n"
+msgstr "N� f�idir c�ltaca a dh�anamh ar %s mar %s: %s\n"
+
+#: src/cookies.c:619
+#, c-format
+msgid "Error in Set-Cookie, field `%s'"
+msgstr "Earr�id i Set-Cookie, r�imse `%s'"
+
+#: src/cookies.c:643
+#, c-format
+msgid "Syntax error in Set-Cookie: %s at position %d.\n"
+msgstr "Earr�id chomhr�ire i Set-Cookie: %s ag %d.\n"
+
+#: src/cookies.c:1469
+#, c-format
+msgid "Cannot open cookies file `%s': %s\n"
+msgstr "N� f�idir comhad fian�in `%s' a oscailt: %s\n"
+
+#: src/cookies.c:1481
+#, c-format
+msgid "Error writing to `%s': %s\n"
+msgstr "Earr�id ag scr�obh comhaid `%s': %s\n"
+
+#: src/cookies.c:1484
+#, c-format
+msgid "Error closing `%s': %s\n"
+msgstr "Earr�id ag d�nadh comhaid `%s': %s\n"
+
+#: src/ftp-ls.c:841
+msgid "Unsupported listing type, trying Unix listing parser.\n"
+msgstr "Modh liost�il gan taca�ocht, ag baint triail as pars�la� liost�la Unix.\n"
+
+#: src/ftp-ls.c:887 src/ftp-ls.c:889
+#, c-format
+msgid "Index of /%s on %s:%d"
+msgstr "Inn�acs de /%s ar %s:%d"
+
+#: src/ftp-ls.c:912
+#, c-format
+msgid "time unknown       "
+msgstr "am anaithnid       "
+
+#: src/ftp-ls.c:916
+#, c-format
+msgid "File        "
+msgstr "Comhad      "
+
+#: src/ftp-ls.c:919
+#, c-format
+msgid "Directory   "
+msgstr "Comhadlann  "
+
+#: src/ftp-ls.c:922
+#, c-format
+msgid "Link        "
+msgstr "Nasc        "
+
+#: src/ftp-ls.c:925
+#, c-format
+msgid "Not sure    "
+msgstr "�iginnte    "
+
+#: src/ftp-ls.c:943
+#, c-format
+msgid " (%s bytes)"
+msgstr " (%s beart)"
+
+#: src/ftp.c:226
+#, c-format
+msgid "Length: %s"
+msgstr "Fad: %s"
+
+#: src/ftp.c:232 src/http.c:1859
+#, c-format
+msgid ", %s (%s) remaining"
+msgstr ", %s (%s) f�gtha"
+
+#: src/ftp.c:236 src/http.c:1863
+#, c-format
+msgid ", %s remaining"
+msgstr ", %s f�gtha"
+
+#: src/ftp.c:240
+msgid " (unauthoritative)\n"
+msgstr " (neamh�dar�sach)\n"
+
+#. Second: Login with proper USER/PASS sequence.
+#: src/ftp.c:315
+#, c-format
+msgid "Logging in as %s ... "
+msgstr "Log�il isteach mar %s ... "
+
+#: src/ftp.c:328 src/ftp.c:374 src/ftp.c:403 src/ftp.c:455 src/ftp.c:567
+#: src/ftp.c:613 src/ftp.c:641 src/ftp.c:699 src/ftp.c:760 src/ftp.c:820
+#: src/ftp.c:867
+msgid "Error in server response, closing control connection.\n"
+msgstr "Earr�id sa fhreagra �n fhreastala�, ag d�nadh an naisc rialaithe.\n"
+
+#: src/ftp.c:335
+msgid "Error in server greeting.\n"
+msgstr "Earr�id ag nascadh leis an bhfreastala�.\n"
+
+#: src/ftp.c:342 src/ftp.c:463 src/ftp.c:575 src/ftp.c:649 src/ftp.c:709
+#: src/ftp.c:770 src/ftp.c:830 src/ftp.c:877
+msgid "Write failed, closing control connection.\n"
+msgstr "Theip ar scr�obh, ag d�nadh an naisc rialaithe.\n"
+
+#: src/ftp.c:348
+msgid "The server refuses login.\n"
+msgstr "N� cheada�onn an freastala� do log�il isteach.\n"
+
+#: src/ftp.c:354
+msgid "Login incorrect.\n"
+msgstr "Log�il mh�cheart.\n"
+
+#: src/ftp.c:360
+msgid "Logged in!\n"
+msgstr "Log�ilte isteach!\n"
+
+#: src/ftp.c:382
+msgid "Server error, can't determine system type.\n"
+msgstr "Earr�id fhreastala�, n� f�idir an cine�l c�rais a dh�anamh amach.\n"
+
+# used in the stats page table
+#: src/ftp.c:391 src/ftp.c:686 src/ftp.c:743 src/ftp.c:786
+msgid "done.    "
+msgstr "cr�ochnaithe.  "
+
+# used in the stats page table
+#: src/ftp.c:443 src/ftp.c:592 src/ftp.c:625 src/ftp.c:850 src/ftp.c:896
+msgid "done.\n"
+msgstr "cr�ochnaithe.\n"
+
+#: src/ftp.c:470
+#, c-format
+msgid "Unknown type `%c', closing control connection.\n"
+msgstr "Cine�l anaithnid `%c', ag d�nadh an naisc rialaithe.\n"
+
+# used in the stats page table
+#: src/ftp.c:482
+msgid "done.  "
+msgstr "cr�ochnaithe."
+
+#: src/ftp.c:488
+msgid "==> CWD not needed.\n"
+msgstr "==> N� g� le CWD.\n"
+
+#: src/ftp.c:581
+#, c-format
+msgid ""
+"No such directory `%s'.\n"
+"\n"
+msgstr ""
+"N�l a leith�id de chomhadlann `%s' ann.\n"
+"\n"
+
+#. do not CWD
+#: src/ftp.c:596
+msgid "==> CWD not required.\n"
+msgstr "==> N� g� le CWD.\n"
+
+#: src/ftp.c:655
+msgid "Cannot initiate PASV transfer.\n"
+msgstr "N� f�idir t�s a chur leis an aistri� PASV.\n"
+
+#: src/ftp.c:659
+msgid "Cannot parse PASV response.\n"
+msgstr "N� f�idir an freagra PASV a phars�il.\n"
+
+#: src/ftp.c:677
+#, c-format
+msgid "couldn't connect to %s port %d: %s\n"
+msgstr "n�orbh fh�idir dul i dteagmh�il le %s port %d: %s\n"
+
+#: src/ftp.c:725
+#, c-format
+msgid "Bind error (%s).\n"
+msgstr "Earr�id cheangail (%s).\n"
+
+#: src/ftp.c:731
+msgid "Invalid PORT.\n"
+msgstr "PORT neamhbhail�.\n"
+
+#: src/ftp.c:777
+msgid ""
+"\n"
+"REST failed, starting from scratch.\n"
+msgstr ""
+"\n"
+"Theip ar REST, ag atos� � thosach.\n"
+
+#: src/ftp.c:838
+#, c-format
+msgid ""
+"No such file `%s'.\n"
+"\n"
+msgstr ""
+"N�l a leith�id de chomhad `%s' ann.\n"
+"\n"
+
+#: src/ftp.c:885
+#, c-format
+msgid ""
+"No such file or directory `%s'.\n"
+"\n"
+msgstr ""
+"N�l a leith�id de chomhad n� de chomhadlann `%s' ann.\n"
+"\n"
+
+#. We cannot just invent a new name and use it (which is
+#. what functions like unique_create typically do)
+#. because we told the user we'd use this name.
+#. Instead, return and retry the download.
+#: src/ftp.c:947 src/http.c:1915
+#, c-format
+msgid "%s has sprung into existence.\n"
+msgstr "T� %s ann anois.\n"
+
+# CRL next update.
+#: src/ftp.c:1009
+#, c-format
+msgid "%s: %s, closing control connection.\n"
+msgstr "%s: %s, ag d�nadh an naisc rialaithe.\n"
+
+#: src/ftp.c:1017
+#, c-format
+msgid "%s (%s) - Data connection: %s; "
+msgstr "%s (%s) - Nasc sonra�: %s; "
+
+#: src/ftp.c:1032
+msgid "Control connection closed.\n"
+msgstr "Nasc rialaithe d�nta.\n"
+
+#: src/ftp.c:1050
+msgid "Data transfer aborted.\n"
+msgstr "Tobscoireadh an t-aistri� sonra�.\n"
+
+#: src/ftp.c:1115
+#, c-format
+msgid "File `%s' already there, not retrieving.\n"
+msgstr "T� an comhad `%s' ann cheana, n� aisghabhfar.\n"
+
+#: src/ftp.c:1179 src/http.c:2132
+#, c-format
+msgid "(try:%2d)"
+msgstr "(iarracht:%2d)"
+
+#: src/ftp.c:1249 src/http.c:2406
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%s]\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' s�bh�ilte [%s]\n"
+"\n"
+
+#: src/ftp.c:1291 src/main.c:948 src/recur.c:376 src/retr.c:842
+#, c-format
+msgid "Removing %s.\n"
+msgstr "%s � bhaint.\n"
+
+#: src/ftp.c:1333
+#, c-format
+msgid "Using `%s' as listing tmp file.\n"
+msgstr "`%s' � �s�id mar chomhad sealadach chun liost�.\n"
+
+#: src/ftp.c:1348
+#, c-format
+msgid "Removed `%s'.\n"
+msgstr "Baineadh `%s'.\n"
+
+#: src/ftp.c:1383
+#, c-format
+msgid "Recursion depth %d exceeded max. depth %d.\n"
+msgstr "Doimhneacht athch�rs�la %d n�os m� n� an t-uasmh�id %d.\n"
+
+#. Remote file is older, file sizes can be compared and
+#. are both equal.
+#: src/ftp.c:1453
+#, c-format
+msgid "Remote file no newer than local file `%s' -- not retrieving.\n"
+msgstr "N�l an cianchomhad n�os nua� n� an comhad log�nta `%s' -- n� aisghabhfar.\n"
+
+#. Remote file is newer or sizes cannot be matched
+#: src/ftp.c:1460
+#, c-format
+msgid ""
+"Remote file is newer than local file `%s' -- retrieving.\n"
+"\n"
+msgstr ""
+"T� an cianchomhad n�os nua� n� an comhad log�nta `%s' -- ag aisghabh.\n"
+"\n"
+
+#. Sizes do not match
+#: src/ftp.c:1467
+#, c-format
+msgid ""
+"The sizes do not match (local %s) -- retrieving.\n"
+"\n"
+msgstr ""
+"N�l an m�id c�anna ar na comhaid (log�nta %s) -- � aisghabh.\n"
+"\n"
+
+#: src/ftp.c:1485
+msgid "Invalid name of the symlink, skipping.\n"
+msgstr "Ainm neamhbhail� ar an nasc siombalach, � scipe�il.\n"
+
+#: src/ftp.c:1502
+#, c-format
+msgid ""
+"Already have correct symlink %s -> %s\n"
+"\n"
+msgstr ""
+"T� nasc ceart siombalach ann cheana %s -> %s\n"
+"\n"
+
+#: src/ftp.c:1510
+#, c-format
+msgid "Creating symlink %s -> %s\n"
+msgstr "Ag cruth� nasc siombalach %s -> %s\n"
+
+#: src/ftp.c:1520
+#, c-format
+msgid "Symlinks not supported, skipping symlink `%s'.\n"
+msgstr "N�l aon taca�ocht ar naisc shiombalacha, ag scipe�il `%s'.\n"
+
+#: src/ftp.c:1532
+#, c-format
+msgid "Skipping directory `%s'.\n"
+msgstr "Ag f�g�il na comhadlainne `%s' ar l�r.\n"
+
+#: src/ftp.c:1541
+#, c-format
+msgid "%s: unknown/unsupported file type.\n"
+msgstr "%s: comhad de chine�l anaithnid/gan tac�.\n"
+
+#: src/ftp.c:1568
+#, c-format
+msgid "%s: corrupt time-stamp.\n"
+msgstr "%s: stampa truaillithe ama.\n"
+
+#: src/ftp.c:1596
+#, c-format
+msgid "Will not retrieve dirs since depth is %d (max %d).\n"
+msgstr "N� aisghabhfar comhadlanna �s rud � go bhfuil an doimhneacht %d faoi l�thair (uasmh�id %d).\n"
+
+#: src/ftp.c:1646
+#, c-format
+msgid "Not descending to `%s' as it is excluded/not-included.\n"
+msgstr "n� ag dul isteach i `%s' �s rud � go bhfuil s� f�gtha-as/nach-curtha-san-�ireamh.\n"
+
+#: src/ftp.c:1712 src/ftp.c:1726
+#, c-format
+msgid "Rejecting `%s'.\n"
+msgstr "`%s' � dhi�lt�.\n"
+
+#. No luck.
+#. #### This message SUCKS.  We should see what was the
+#. reason that nothing was retrieved.
+#: src/ftp.c:1772
+#, c-format
+msgid "No matches on pattern `%s'.\n"
+msgstr "N�l aon rud comhoiri�nach leis an phatr�n `%s'.\n"
+
+#: src/ftp.c:1838
+#, c-format
+msgid "Wrote HTML-ized index to `%s' [%s].\n"
+msgstr "Scr�obhadh inn�acs i gcruth HTML i `%s' [%s].\n"
+
+#: src/ftp.c:1843
+#, c-format
+msgid "Wrote HTML-ized index to `%s'.\n"
+msgstr "Scr�obhadh inn�acs i gcruth HTML i `%s'.\n"
+
+#: src/getopt.c:675
+#, c-format
+msgid "%s: option `%s' is ambiguous\n"
+msgstr "%s: T� an rogha `%s' d�bhr�och\n"
+
+#: src/getopt.c:700
+#, c-format
+msgid "%s: option `--%s' doesn't allow an argument\n"
+msgstr "%s: n� cheada�tear arg�int i ndiaidh na rogha `--%s'\n"
+
+#: src/getopt.c:705
+#, c-format
+msgid "%s: option `%c%s' doesn't allow an argument\n"
+msgstr "%s: n� cheada�tear arg�int i ndiaidh na rogha `%c%s'\n"
+
+#: src/getopt.c:723 src/getopt.c:896
+#, c-format
+msgid "%s: option `%s' requires an argument\n"
+msgstr "%s: n� fol�ir arg�int don rogha `%s'\n"
+
+#. --option
+#: src/getopt.c:752
+#, c-format
+msgid "%s: unrecognized option `--%s'\n"
+msgstr "%s: rogha anaithnid `--%s'\n"
+
+#. +option or -option
+#: src/getopt.c:756
+#, c-format
+msgid "%s: unrecognized option `%c%s'\n"
+msgstr "%s: rogha anaithnid `%c%s'\n"
+
+#. 1003.2 specifies the format of this message.
+#: src/getopt.c:782
+#, c-format
+msgid "%s: illegal option -- %c\n"
+msgstr "%s: rogha neamhcheadaithe -- %c\n"
+
+#: src/getopt.c:785
+#, c-format
+msgid "%s: invalid option -- %c\n"
+msgstr "%s: rogha neamhbhail� -- %c\n"
+
+#. 1003.2 specifies the format of this message.
+#: src/getopt.c:815 src/getopt.c:945
+#, c-format
+msgid "%s: option requires an argument -- %c\n"
+msgstr "%s: n� fol�ir arg�int don rogha -- %c\n"
+
+#: src/getopt.c:862
+#, c-format
+msgid "%s: option `-W %s' is ambiguous\n"
+msgstr "%s: T� an rogha `-W %s' d�bhr�och\n"
+
+#: src/getopt.c:880
+#, c-format
+msgid "%s: option `-W %s' doesn't allow an argument\n"
+msgstr "%s: n� cheada�tear arg�int i ndiaidh na rogha `-W %s'\n"
+
+#: src/host.c:370
+msgid "Unknown host"
+msgstr "�str�omhaire anaithnid"
+
+#. Message modeled after what gai_strerror returns in similar
+#. circumstances.
+#: src/host.c:374
+msgid "Temporary failure in name resolution"
+msgstr "Teip shealadach ar r�iteach na n-ainmneacha"
+
+#: src/host.c:376
+msgid "Unknown error"
+msgstr "Earr�id anaithnid"
+
+#: src/host.c:755
+#, c-format
+msgid "Resolving %s... "
+msgstr "%s � r�iteach... "
+
+#: src/host.c:799 src/host.c:828
+#, c-format
+msgid "failed: %s.\n"
+msgstr "teipthe: %s.\n"
+
+#: src/host.c:808
+msgid "failed: No IPv4/IPv6 addresses for host.\n"
+msgstr "teipthe: Gan seoladh IPv4/IPv6 don �str�omhaire.\n"
+
+#: src/host.c:831
+msgid "failed: timed out.\n"
+msgstr "teipthe: thar am.\n"
+
+#: src/html-url.c:298
+#, c-format
+msgid "%s: Cannot resolve incomplete link %s.\n"
+msgstr "%s: N� f�idir nasc %s neamhioml�n a r�iteach.\n"
+
+#: src/http.c:373 src/http.c:1545
+#, c-format
+msgid "Failed writing HTTP request: %s.\n"
+msgstr "Theip ar scr�obh iarratais HTTP: %s.\n"
+
+#: src/http.c:687
+msgid "No headers, assuming HTTP/0.9"
+msgstr "Gan cheannt�sca, glac le HTTP/0.9"
+
+#: src/http.c:1194
+msgid "Disabling SSL due to encountered errors.\n"
+msgstr "SSL � dh�chumas� de bharr earr�id�.\n"
+
+#: src/http.c:1413
+#, c-format
+msgid "Reusing existing connection to %s:%d.\n"
+msgstr "Ag baint ath�s�id as an nasc le %s:%d.\n"
+
+#: src/http.c:1475
+#, c-format
+msgid "Failed writing to proxy: %s.\n"
+msgstr "Theip ar scr�obh go seachfhreastala�: %s.\n"
+
+#: src/http.c:1484
+#, c-format
+msgid "Failed reading proxy response: %s\n"
+msgstr "Theip ar l�amh freagra �n seachfhreastala�: %s\n"
+
+#: src/http.c:1504
+#, c-format
+msgid "Proxy tunneling failed: %s"
+msgstr "Theip ar tholl�n� seachfhreastala�: %s"
+
+#: src/http.c:1551
+#, c-format
+msgid "%s request sent, awaiting response... "
+msgstr "Iarratas %s seolta, ag fanacht le freagra... "
+
+#: src/http.c:1562
+msgid "No data received.\n"
+msgstr "N�or glacadh aon sonra.\n"
+
+#: src/http.c:1569
+#, c-format
+msgid "Read error (%s) in headers.\n"
+msgstr "Earr�id (%s) ag l�amh na gceannt�sc.\n"
+
+#. If the authentication header is missing or
+#. unrecognized, there's no sense in retrying.
+#: src/http.c:1657
+msgid "Unknown authentication scheme.\n"
+msgstr "Sc�im anaithnid fh�ordheimhnithe.\n"
+
+#: src/http.c:1681
+msgid "Authorization failed.\n"
+msgstr "Theip ar �dar�.\n"
+
+#: src/http.c:1695
+msgid "Malformed status line"
+msgstr "L�ne st�dais m�chumtha"
+
+#: src/http.c:1697
+msgid "(no description)"
+msgstr "(gan cur s�os)"
+
+#: src/http.c:1768
+#, c-format
+msgid "Location: %s%s\n"
+msgstr "Su�omh: %s%s\n"
+
+#: src/http.c:1769 src/http.c:1869
+msgid "unspecified"
+msgstr "gan sonr�"
+
+#: src/http.c:1770
+msgid " [following]"
+msgstr " [ag lean�int]"
+
+#. If `-c' is in use and the file has been fully downloaded (or
+#. the remote file has shrunk), Wget effectively requests bytes
+#. after the end of file and the server response with 416.
+#: src/http.c:1819
+msgid ""
+"\n"
+"    The file is already fully retrieved; nothing to do.\n"
+"\n"
+msgstr ""
+"\n"
+"    Bh� an comhad aisghafa ina ioml�ine cheana; n�l faic le d�anamh.\n"
+"\n"
+
+#. No need to print this output if the body won't be
+#. downloaded at all, or if the original server response is
+#. printed.
+#: src/http.c:1849
+msgid "Length: "
+msgstr "Fad: "
+
+#: src/http.c:1869
+msgid "ignored"
+msgstr "rinneadh neamhaird"
+
+#: src/http.c:2009
+msgid "Warning: wildcards not supported in HTTP.\n"
+msgstr "Rabhadh: n�l saor�ga ar f�il i HTTP.\n"
+
+#. If opt.noclobber is turned on and file already exists, do not
+#. retrieve the file
+#: src/http.c:2044
+#, c-format
+msgid "File `%s' already there, will not retrieve.\n"
+msgstr "T� an comhad `%s' ann cheana, n� aisghabhfar.\n"
+
+#: src/http.c:2229
+#, c-format
+msgid "Cannot write to `%s' (%s).\n"
+msgstr "N� f�idir aon rud a scr�obh i gcomhad `%s' (%s).\n"
+
+#. Another fatal error.
+#: src/http.c:2236
+msgid "Unable to establish SSL connection.\n"
+msgstr "N� f�idir nasc SSL a dh�anamh.\n"
+
+#: src/http.c:2245
+#, c-format
+msgid "ERROR: Redirection (%d) without location.\n"
+msgstr "EARR�ID: Atreor� (%d) gan su�omh.\n"
+
+#: src/http.c:2275
+#, c-format
+msgid "%s ERROR %d: %s.\n"
+msgstr "%s EARR�ID %d: %s.\n"
+
+#: src/http.c:2288
+msgid "Last-modified header missing -- time-stamps turned off.\n"
+msgstr "Ceannt�sc `Last-modified' ar iarraidh -- n� �s�idfear stampa� ama.\n"
+
+#: src/http.c:2296
+msgid "Last-modified header invalid -- time-stamp ignored.\n"
+msgstr "Ceannt�sc neamhbhail� `Last-modified' -- tugadh neamhaird ar an stampa ama.\n"
+
+#: src/http.c:2319
+#, c-format
+msgid ""
+"Server file no newer than local file `%s' -- not retrieving.\n"
+"\n"
+msgstr ""
+"N�l an comhad freastala� n�os nua� n� an comhad log�nta `%s' -- n� aisghabhfar.\n"
+"\n"
+
+#: src/http.c:2327
+#, c-format
+msgid "The sizes do not match (local %s) -- retrieving.\n"
+msgstr "N�l an m�id c�anna ar na comhaid (log�nta %s) -- � aisghabh.\n"
+
+#: src/http.c:2332
+msgid "Remote file is newer, retrieving.\n"
+msgstr "T� an cianchomhad n�os nua�, ag aisghabhadh.\n"
+
+#: src/http.c:2374
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%s/%s]\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' s�bh�ilte [%s/%s]\n"
+"\n"
+
+#: src/http.c:2431
+#, c-format
+msgid "%s (%s) - Connection closed at byte %s. "
+msgstr "%s (%s) - Nasc d�nta ag beart %s. "
+
+#: src/http.c:2440
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%s/%s])\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' s�bh�ilte [%s/%s])\n"
+"\n"
+
+#: src/http.c:2466
+#, c-format
+msgid "%s (%s) - Connection closed at byte %s/%s. "
+msgstr "%s (%s) - Nasc d�nta ag beart %s/%s. "
+
+#: src/http.c:2480
+#, c-format
+msgid "%s (%s) - Read error at byte %s (%s)."
+msgstr "%s (%s) - Earr�id l�imh ag beart %s (%s)."
+
+#: src/http.c:2490
+#, c-format
+msgid "%s (%s) - Read error at byte %s/%s (%s). "
+msgstr "%s (%s) - Earr�id l�imh ag beart %s/%s (%s). "
+
+#: src/init.c:369
+#, c-format
+msgid "%s: WGETRC points to %s, which doesn't exist.\n"
+msgstr "%s: T� WGETRC d�rithe ar %s, agus n�l s� seo ann ar chor ar bith.\n"
+
+#: src/init.c:433 src/netrc.c:277
+#, c-format
+msgid "%s: Cannot read %s (%s).\n"
+msgstr "%s: N� f�idir %s a l�amh (%s).\n"
+
+#: src/init.c:451
+#, c-format
+msgid "%s: Error in %s at line %d.\n"
+msgstr "%s: Earr�id i %s, l�ne %d.\n"
+
+#: src/init.c:457
+#, c-format
+msgid "%s: Syntax error in %s at line %d.\n"
+msgstr "%s: Earr�id chomhr�ire i %s ag l�ne %d.\n"
+
+#: src/init.c:462
+#, c-format
+msgid "%s: Unknown command `%s' in %s at line %d.\n"
+msgstr "%s: Ord� anaithnid `%s' i %s ag l�ne %d.\n"
+
+#: src/init.c:507
+#, c-format
+msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
+msgstr "%s: Rabhadh: T� an comhad wgetrc �s�ideora agus an comhad c�rais wgetrc araon d�rithe ar `%s'.\n"
+
+#: src/init.c:661
+#, c-format
+msgid "%s: Invalid --execute command `%s'\n"
+msgstr "%s: Ord� neamhbhail� --execute `%s'\n"
+
+#: src/init.c:707
+#, c-format
+msgid "%s: %s: Invalid boolean `%s', use `on' or `off'.\n"
+msgstr "%s: %s: Slonn neamhbhail� Boole `%s', �s�id `on' n� `off'.\n"
+
+#: src/init.c:750
+#, c-format
+msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
+msgstr "%s: %s: Slonn neamhbhail� Boole `%s', �s�id always, on, off, n� never.\n"
+
+#: src/init.c:767
+#, c-format
+msgid "%s: %s: Invalid number `%s'.\n"
+msgstr "%s: %s: Uimhir neamhbhail� `%s'.\n"
+
+#: src/init.c:998 src/init.c:1017
+#, c-format
+msgid "%s: %s: Invalid byte value `%s'\n"
+msgstr "%s: %s: Luach neamhbhail� bearta `%s'\n"
+
+#: src/init.c:1042
+#, c-format
+msgid "%s: %s: Invalid time period `%s'\n"
+msgstr "%s: %s: Tr�imhse neamhbhail� `%s'\n"
+
+#: src/init.c:1096 src/init.c:1177 src/init.c:1272 src/init.c:1297
+#, c-format
+msgid "%s: %s: Invalid value `%s'.\n"
+msgstr "%s: %s: Luach neamhbhail� `%s'.\n"
+
+#: src/init.c:1125
+#, c-format
+msgid "%s: %s: Invalid header `%s'.\n"
+msgstr "%s: %s: Ceannt�sc neamhbhail� `%s'.\n"
+
+#: src/init.c:1189
+#, c-format
+msgid "%s: %s: Invalid progress type `%s'.\n"
+msgstr "%s: %s: Cine�l neamhbhail� dul chun cinn `%s'.\n"
+
+#: src/init.c:1240
+#, c-format
+msgid "%s: %s: Invalid restriction `%s', use `unix' or `windows'.\n"
+msgstr "%s: %s: Teorann� neamhbhail� `%s', �s�id `unix' n� `windows'.\n"
+
+#: src/log.c:796
+#, c-format
+msgid ""
+"\n"
+"%s received, redirecting output to `%s'.\n"
+msgstr ""
+"\n"
+"Fuarthas %s, ag athsheoladh an aschuir go `%s'.\n"
+
+#. Eek!  Opening the alternate log file has failed.  Nothing we
+#. can do but disable printing completely.
+#: src/log.c:806
+#, c-format
+msgid ""
+"\n"
+"%s received.\n"
+msgstr ""
+"\n"
+"fuarthas %s.\n"
+
+#: src/log.c:807
+#, c-format
+msgid "%s: %s; disabling logging.\n"
+msgstr "%s: %s; log�il � d�chumas�.\n"
+
+#: src/main.c:375
+#, c-format
+msgid "Usage: %s [OPTION]... [URL]...\n"
+msgstr "�s�id: %s [ROGHA]... [URL]...\n"
+
+#: src/main.c:387
+#, fuzzy
+msgid ""
+"Mandatory arguments to long options are mandatory for short options too.\n"
+"\n"
+msgstr ""
+"\n"
+"Is riachtanach le rogha ghearr aon arg�int at� riachtanach leis an rogha fhada.\n"
+"\n"
+
+#: src/main.c:389
+msgid "Startup:\n"
+msgstr "Tos�:\n"
+
+#: src/main.c:391
+msgid "  -V,  --version           display the version of Wget and exit.\n"
+msgstr "  -V,  --version           taispe�in an leagan Wget agus scoir.\n"
+
+#: src/main.c:393
+msgid "  -h,  --help              print this help.\n"
+msgstr "  -h,  --help              taispe�in an chabhair seo.\n"
+
+#: src/main.c:395
+msgid "  -b,  --background        go to background after startup.\n"
+msgstr "  -b,  --background        rith sa ch�lra.\n"
+
+#: src/main.c:397
+msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+msgstr "  -e,  --execute=ORD�      rith ord� sa st�l `.wgetrc'.\n"
+
+#: src/main.c:401
+msgid "Logging and input file:\n"
+msgstr "Log�il agus an t-inchomhad:\n"
+
+#: src/main.c:403
+msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
+msgstr "  -o,  --output-file=COMHAD  log�il teachtaireachta� i gCOMHAD.\n"
+
+#: src/main.c:405
+msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
+msgstr "  -a,  --append-output=COMHAD iarcheangail teachtaireachta� le COMHAD.\n"
+
+#: src/main.c:408
+msgid "  -d,  --debug               print lots of debugging information.\n"
+msgstr "  -d,  --debug               taispe�in go leor eolas dh�fhabhtaithe.\n"
+
+#: src/main.c:411
+msgid "  -q,  --quiet               quiet (no output).\n"
+msgstr "  -q,  --quiet               tostach (gan aschur).\n"
+
+#: src/main.c:413
+msgid "  -v,  --verbose             be verbose (this is the default).\n"
+msgstr "  -v,  --verbose             b� foclach (is � seo an r�amhshocr�).\n"
+
+#: src/main.c:415
+msgid "  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
+msgstr "  -nv, --no-verbose          n� b� foclach, ach n� b� tostach ach oiread.\n"
+
+#: src/main.c:417
+msgid "  -i,  --input-file=FILE     download URLs found in FILE.\n"
+msgstr "  -i,  --input-file=COMHAD   �osluchtaigh URLanna �n CHOMHAD.\n"
+
+#: src/main.c:419
+msgid "  -F,  --force-html          treat input file as HTML.\n"
+msgstr "  -F,  --force-html          caith leis an inchomhad mar HTML.\n"
+
+#: src/main.c:421
+msgid "  -B,  --base=URL            prepends URL to relative links in -F -i file.\n"
+msgstr "  -B,  --base=URL            cuir URL roimh naisc choibhneasta i gcomhad -F -i.\n"
+
+#: src/main.c:425
+msgid "Download:\n"
+msgstr "�osluchtaigh:\n"
+
+#: src/main.c:427
+msgid "  -t,  --tries=NUMBER            set number of retries to NUMBER (0 unlimits).\n"
+msgstr "  -t,  --tries=UIMHIR            l�on na n-atrialacha (0=gan teorainn).\n"
+
+#: src/main.c:429
+msgid "       --retry-connrefused       retry even if connection is refused.\n"
+msgstr "       --retry-connrefused       atriail fi� m� t� an nasc di�ltaithe.\n"
+
+#: src/main.c:431
+msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
+msgstr "  -O   --output-document=COMHAD  scr�obh c�ip�is� i gCOMHAD.\n"
+
+#: src/main.c:433
+msgid ""
+"  -nc, --no-clobber              skip downloads that would download to\n"
+"                                 existing files.\n"
+msgstr "  -nc, --no-clobber              n� forscr�obh comhaid n� �s�id iarmh�reanna .#.\n"
+
+#: src/main.c:436
+msgid "  -c,  --continue                resume getting a partially-downloaded file.\n"
+msgstr "  -c,  --continue                atosaigh �osluchtaigh comhad.\n"
+
+#: src/main.c:438
+msgid "       --progress=TYPE           select progress gauge type.\n"
+msgstr "       --progress=CINE�L         cine�l rianaire dul chun cinn.\n"
+
+#: src/main.c:440
+msgid ""
+"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
+"                                 local.\n"
+msgstr "  -N,  --timestamping            n� haisghabh comhaid ar�s mura bhfuil siad n�os nua�\n"
+
+#: src/main.c:443
+msgid "  -S,  --server-response         print server response.\n"
+msgstr "  -S,  --server-response         taispe�in freagra �n fhreastala�.\n"
+
+#: src/main.c:445
+msgid "       --spider                  don't download anything.\n"
+msgstr "       --spider                  n� h�osluchtaigh rud ar bith.\n"
+
+#: src/main.c:447
+msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
+msgstr "  -T,  --timeout=SOICIND�        socraigh gach seal fanachta = SOICIND�.\n"
+
+#: src/main.c:449
+msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
+msgstr "       --dns-timeout=SOIC        seal fanachta DNS = SOIC.\n"
+
+#: src/main.c:451
+msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
+msgstr "       --connect-timeout=SOIC    seal fanachta nasctha = SOIC.\n"
+
+#: src/main.c:453
+msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
+msgstr "       --read-timeout=SOIC       seal fanachta l�imh = SOIC.\n"
+
+#: src/main.c:455
+msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
+msgstr "  -w,  --wait=SOICIND�           fan SOICIND� idir �osluchtuithe.\n"
+
+#: src/main.c:457
+msgid "       --waitretry=SECONDS       wait 1..SECONDS between retries of a retrieval.\n"
+msgstr "       --waitretry=SOICIND�      fan 1...SOICIND� idir atrialacha.\n"
+
+#: src/main.c:459
+msgid "       --random-wait             wait from 0...2*WAIT secs between retrievals.\n"
+msgstr "       --random-wait             fan � 0...2*WAIT soicind� idir �osluchtuithe.\n"
+
+#: src/main.c:461
+msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
+msgstr "  -Y,  --proxy                  �s�id seachfhreastala�.\n"
+
+#: src/main.c:463
+msgid "       --no-proxy                explicitly turn off proxy.\n"
+msgstr "       --no-proxy                n� h�s�id seachfhreastala�.\n"
+
+#: src/main.c:465
+msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
+msgstr "  -Q,  --quota=UIMHIR            socraigh cu�ta athghabh�la.\n"
+
+#: src/main.c:467
+msgid "       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local host.\n"
+msgstr "       --bind-address=SEOLADH    ceangail le SEOLADH (�stainm/IP) go log�nta.\n"
+
+#: src/main.c:469
+msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
+msgstr "       --limit-rate=R�TA         socraigh uasr�ta �osluchtaithe.\n"
+
+#: src/main.c:471
+msgid "       --no-dns-cache            disable caching DNS lookups.\n"
+msgstr "       --no-dns-cache            n� cuir cuardaigh DNS i dtaisce.\n"
+
+#: src/main.c:473
+msgid "       --restrict-file-names=OS  restrict chars in file names to ones OS allows.\n"
+msgstr "       --restrict-file-names=OS  �s�id carachtair ceadaithe ag an ch�ras.\n"
+
+#: src/main.c:476
+msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
+msgstr "  -4,  --inet4-only              nasc le seolta� IPv4 amh�in.\n"
+
+#: src/main.c:478
+msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
+msgstr "  -6,  --inet6-only              nasc le seolta� IPv6 amh�in.\n"
+
+#: src/main.c:480
+msgid ""
+"       --prefer-family=FAMILY    connect first to addresses of specified family,\n"
+"                                 one of IPv6, IPv4, or none.\n"
+msgstr ""
+"       --prefer-family=CLANN     nasc ar dt�s le seolta� �n CHLANN sonraithe:\n"
+"                                 IPv6, IPv4, n� \"none\".\n"
+
+#: src/main.c:484
+msgid "       --user=USER               set both ftp and http user to USER.\n"
+msgstr "       --user=�S�IDEOIR          socraigh �S�IDEOIR do ftp agus http araon.\n"
+
+#: src/main.c:486
+msgid "       --password=PASS           set both ftp and http password to PASS.\n"
+msgstr "       --password=FF             socraigh focal faire do ftp agus http.\n"
+
+#: src/main.c:490
+msgid "Directories:\n"
+msgstr "Comhadlanna:\n"
+
+#: src/main.c:492
+msgid "  -nd, --no-directories           don't create directories.\n"
+msgstr "  -nd, --no-directories           n� cruthaigh comhadlanna.\n"
+
+#: src/main.c:494
+msgid "  -x,  --force-directories        force creation of directories.\n"
+msgstr "  -x,  --force-directories        cruthaigh comhadlanna i gc�na�.\n"
+
+#: src/main.c:496
+msgid "  -nH, --no-host-directories      don't create host directories.\n"
+msgstr "  -nH, --no-host-directories      n� cruthaigh comhadlanna �stacha.\n"
+
+#: src/main.c:498
+msgid "       --protocol-directories     use protocol name in directories.\n"
+msgstr "       --protocol-directories     �s�id ainm an phr�tacail i gcomhadlanna.\n"
+
+#: src/main.c:500
+msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
+msgstr "  -P,  --directory-prefix=R�IM�R  s�bh�il comhaid i R�IM�R/...\n"
+
+#: src/main.c:502
+msgid "       --cut-dirs=NUMBER          ignore NUMBER remote directory components.\n"
+msgstr "       --cut-dirs=UIMHIR          d�an neamhshuim ar UIMHIR comhph�irt chomhadlainne.\n"
+
+#: src/main.c:506
+msgid "HTTP options:\n"
+msgstr "Roghanna HTTP:\n"
+
+#: src/main.c:508
+msgid "       --http-user=USER        set http user to USER.\n"
+msgstr "       --http-user=�S�IDEOIR   socraigh �S�IDEOIR http.\n"
+
+#: src/main.c:510
+msgid "       --http-password=PASS    set http password to PASS.\n"
+msgstr "       --http-passwd=FF        socraigh focal faire http.\n"
+
+#: src/main.c:512
+msgid "       --no-cache              disallow server-cached data.\n"
+msgstr "       --no-cache              n� ceadaigh sonra� curtha i dtaisce ag an fhreastala�.\n"
+
+#: src/main.c:514
+msgid "  -E,  --html-extension        save HTML documents with `.html' extension.\n"
+msgstr "  -E,  --html-extension        s�bh�il gach c�ip�is text/html le s�nte�n .html.\n"
+
+#: src/main.c:516
+msgid "       --ignore-length         ignore `Content-Length' header field.\n"
+msgstr "       --ignore-length         d�an neamhaird den r�imse `Content-Length'.\n"
+
+#: src/main.c:518
+msgid "       --header=STRING         insert STRING among the headers.\n"
+msgstr "       --header=TEAGHR�N       ions�igh TEAGHR�N sna ceannt�sca.\n"
+
+#: src/main.c:520
+msgid "       --proxy-user=USER       set USER as proxy username.\n"
+msgstr "       --proxy-user=�S�IDEOIR  socraigh �S�IDEOIR an seachfhreastala�.\n"
+
+#: src/main.c:522
+msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
+msgstr "       --proxy-passwd=FF       socraigh focal faire seachfhreastala�.\n"
+
+#: src/main.c:524
+msgid "       --referer=URL           include `Referer: URL' header in HTTP request.\n"
+msgstr "       --referer=URL           iniaigh ceannt�sc `Referer: URL' san iarracht.\n"
+
+#: src/main.c:526
+msgid "       --save-headers          save the HTTP headers to file.\n"
+msgstr "       --save-headers          s�bh�il na ceannt�sca HTTP i gcomhad.\n"
+
+#: src/main.c:528
+msgid "  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
+msgstr "  -U,  --user-agent=AINM       cuir thusa f�in in aithne le hAINM vs. Wget/LEAGAN.\n"
+
+#: src/main.c:530
+msgid "       --no-http-keep-alive    disable HTTP keep-alive (persistent connections).\n"
+msgstr "       --no-http-keep-alive    d�chumasaigh keep-alive HTTP (naisc sheasmhach).\n"
+
+#: src/main.c:532
+msgid "       --no-cookies            don't use cookies.\n"
+msgstr "       --no-cookies            n� h�s�id fian�in.\n"
+
+#: src/main.c:534
+msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
+msgstr "       --load-cookies=COMHAD   luchtaigh fian�in � CHOMHAD roimh an seisi�n.\n"
+
+#: src/main.c:536
+msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
+msgstr "       --save-cookies=COMHAD   s�bh�il fian�in i gCOMHAD tar �is an tseisi�in.\n"
+
+#: src/main.c:538
+msgid "       --keep-session-cookies  load and save session (non-permanent) cookies.\n"
+msgstr "       --keep-session-cookies  luchtaigh agus s�bh�il fian�in (sealadacha) an tseisi�in.\n"
+
+#: src/main.c:540
+msgid "       --post-data=STRING      use the POST method; send STRING as the data.\n"
+msgstr "       --post-data=TEAGHR�N    �s�id an modh POST; seol TEAGHR�N mar sonra�.\n"
+
+#: src/main.c:542
+msgid "       --post-file=FILE        use the POST method; send contents of FILE.\n"
+msgstr "       --post-file=COMHAD      �s�id an mhodh POST; seol na sonra� as COMHAD.\n"
+
+#: src/main.c:547
+msgid "HTTPS (SSL/TLS) options:\n"
+msgstr "Roghanna HTTPS (SSL/TLS):\n"
+
+#: src/main.c:549
+msgid ""
+"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
+"                                SSLv3, and TLSv1.\n"
+msgstr ""
+"       --secure-protocol=PR     roghnaigh pr�tacal daingean: auto, SSLv2,\n"
+"                                SSLv3, n� TLSv1.\n"
+"                                SSLv3, and TLSv1.\n"
+
+#: src/main.c:552
+msgid "       --no-check-certificate   don't validate the server's certificate.\n"
+msgstr "       --no-check-certificate   n� bail�ochtaigh teastas an fhreastala�.\n"
+
+#: src/main.c:554
+msgid "       --certificate=FILE       client certificate file.\n"
+msgstr "       --certificate=COMHAD     comhad teastais an chliaint.\n"
+
+#: src/main.c:556
+msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
+msgstr "       --certificate-type=CINL  cine�l teastais an chliaint: PEM n� DER.\n"
+
+#: src/main.c:558
+msgid "       --private-key=FILE       private key file.\n"
+msgstr "       --private-key=COMHAD     comhad don eochair phr�obh�ideach.\n"
+
+#: src/main.c:560
+msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
+msgstr "       --private-key-type=CINL  cine�l na heochrach pr�obh�id�, PEM n� DER.\n"
+
+#: src/main.c:562
+msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
+msgstr "       --ca-certificate=COMHAD  comhad le burla den CAnna.\n"
+
+#: src/main.c:564
+msgid "       --ca-directory=DIR       directory where hash list of CA's is stored.\n"
+msgstr "       --ca-directory=COMHADLN  comhadlann leis an liosta haise�ilte de CAnna.\n"
+
+#: src/main.c:566
+msgid "       --random-file=FILE       file with random data for seeding the SSL PRNG.\n"
+msgstr "       --random-file=COMHAD     comhad le sonra� randamacha chun SSL PRNG a sh�olr�.\n"
+
+#: src/main.c:568
+msgid "       --egd-file=FILE          file naming the EGD socket with random data.\n"
+msgstr "       --egd-file=COMHAD        comhad a ainmn�onn an soic�ad EGD le sonra� randamacha.\n"
+
+#: src/main.c:573
+msgid "FTP options:\n"
+msgstr "Roghanna FTP:\n"
+
+#: src/main.c:575
+msgid "       --ftp-user=USER         set ftp user to USER.\n"
+msgstr "       --ftp-user=�S�IDEOIR    socraigh an t�S�IDEOIR ftp.\n"
+
+#: src/main.c:577
+msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
+msgstr "       --ftp-password=FF       socraigh an focal faire ftp.\n"
+
+#: src/main.c:579
+msgid "       --no-remove-listing     don't remove `.listing' files.\n"
+msgstr "       --no-remove-listing     n� bain comhaid `.listing' amach.\n"
+
+#: src/main.c:581
+msgid "       --no-glob               turn off FTP file name globbing.\n"
+msgstr "       --no-glob               n� h�s�id glob�il le hainmneacha comhaid FTP.\n"
+
+#: src/main.c:583
+msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
+msgstr "       --no-passive-ftp        d�chumasaigh an m�d aistrithe \"passive\".\n"
+
+#: src/main.c:585
+msgid "       --retr-symlinks         when recursing, get linked-to files (not dir).\n"
+msgstr "       --retr-symlinks         faigh comhaid lena nasctar, le linn athch�rs�la.\n"
+
+#: src/main.c:587
+msgid "       --preserve-permissions  preserve remote file permissions.\n"
+msgstr "       --preserve-permissions  caomhnaigh ceadanna � na cianchomhaid.\n"
+
+#: src/main.c:591
+msgid "Recursive download:\n"
+msgstr "�oslucht� athch�rsach:\n"
+
+#: src/main.c:593
+msgid "  -r,  --recursive          specify recursive download.\n"
+msgstr "  -r,  --recursive          �osluchtaigh go hathch�rsach.\n"
+
+#: src/main.c:595
+msgid "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for infinite).\n"
+msgstr "  -l,  --level=UIMHIR       uasmh�id doimhneachta (inf n� 0 = gan teorainn).\n"
+
+#: src/main.c:597
+msgid "       --delete-after       delete files locally after downloading them.\n"
+msgstr "       --delete-after       scrios comhaid log�nta i ndiaidh �osluchtaithe.\n"
+
+#: src/main.c:599
+msgid "  -k,  --convert-links      make links in downloaded HTML point to local files.\n"
+msgstr "  -k,  --convert-links      nasc le comhaid log�nta i HTML �osluchtaithe.\n"
+
+#: src/main.c:601
+msgid "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
+msgstr "  -K,  --backup-converted   roimh X a thiont�, d�an c�ltaca mar X.orig.\n"
+
+#: src/main.c:603
+msgid "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -nr.\n"
+msgstr "  -m,  --mirror             rogha aicearra ar comhbhr� le -r -N -l inf -nr.\n"
+
+#: src/main.c:605
+msgid "  -p,  --page-requisites    get all images, etc. needed to display HTML page.\n"
+msgstr ""
+"  -p,  --page-requisites    faigh gach �omh�, srl. riachtanach chun an\n"
+"                               leathanach HTML a thaispe�int go ceart.\n"
+
+#: src/main.c:607
+msgid "       --strict-comments    turn on strict (SGML) handling of HTML comments.\n"
+msgstr "       --strict-comments    glac le n�ta� tr�chta HTML go docht (mar SGML).\n"
+
+#: src/main.c:611
+msgid "Recursive accept/reject:\n"
+msgstr "Glacadh/Di�lt� Athch�rsach:\n"
+
+#: src/main.c:613
+msgid "  -A,  --accept=LIST               comma-separated list of accepted extensions.\n"
+msgstr "  -A,  --accept=LIOSTA             s�nte�in ghlactha, scartha le cam�ga.\n"
+
+#: src/main.c:615
+msgid "  -R,  --reject=LIST               comma-separated list of rejected extensions.\n"
+msgstr "  -R,  --reject=LIOSTA             s�nte�in di�ltaithe, scartha le cam�ga.\n"
+
+#: src/main.c:617
+msgid "  -D,  --domains=LIST              comma-separated list of accepted domains.\n"
+msgstr "  -D,  --domains=LIOSTA            fearainn ghlactha, scartha le cam�ga.\n"
+
+#: src/main.c:619
+msgid "       --exclude-domains=LIST      comma-separated list of rejected domains.\n"
+msgstr "       --exclude-domains=LIOSTA    fearainn di�ltaithe, scartha le cam�ga.\n"
+
+#: src/main.c:621
+msgid "       --follow-ftp                follow FTP links from HTML documents.\n"
+msgstr "       --follow-ftp                lean naisc FTP i gc�ip�is� HTML.\n"
+
+#: src/main.c:623
+msgid "       --follow-tags=LIST          comma-separated list of followed HTML tags.\n"
+msgstr "       --follow-tags=LIOSTA        clibeanna HTML le lean�int, scartha le cam�ga.\n"
+
+#: src/main.c:625
+msgid "       --ignore-tags=LIST          comma-separated list of ignored HTML tags.\n"
+msgstr "       --ignore-tags=LIOSTA        clibeanna HTML le scipe�il, scartha le cam�ga.\n"
+
+#: src/main.c:627
+msgid "  -H,  --span-hosts                go to foreign hosts when recursive.\n"
+msgstr "  -H,  --span-hosts                t�igh go cian�sta� m�s athch�rsach �.\n"
+
+#: src/main.c:629
+msgid "  -L,  --relative                  follow relative links only.\n"
+msgstr "  -L,  --relative                  n� lean ach naisc choibhneasta.\n"
+
+#: src/main.c:631
+msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
+msgstr "  -I,  --include-directories=LIOSTA comhadlanna ceadaithe.\n"
+
+#: src/main.c:633
+msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
+msgstr "  -X,  --exclude-directories=LIOSTA comhadlanna neamhcheadaithe.\n"
+
+#: src/main.c:635
+msgid "  -np, --no-parent                 don't ascend to the parent directory.\n"
+msgstr "  -np, --no-parent                 n� t�igh suas go comhadlanna n�os airde.\n"
+
+#: src/main.c:639
+msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
+msgstr "Seol tuairisc� fabhtanna agus molta� chuig <bug-wget@gnu.org>.\n"
+
+#: src/main.c:644
+#, c-format
+msgid "GNU Wget %s, a non-interactive network retriever.\n"
+msgstr "GNU Wget, leagan %s, faighteoir cianchomhad nach idirghn�omhach.\n"
+
+#: src/main.c:658
+msgid "Copyright (C) 2005 Free Software Foundation, Inc.\n"
+msgstr "Copyright � 2005 Free Software Foundation, Inc.\n"
+
+#: src/main.c:660
+msgid ""
+"This program is distributed in the hope that it will be useful,\n"
+"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
+"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
+"GNU General Public License for more details.\n"
+msgstr ""
+"Scaiptear an r�omhchl�r seo le s�il go mbeidh s� �isi�il,\n"
+"ach GAN AON BAR�NTA; go fi� gan an bar�ntas intuigthe\n"
+"d'IND�OLTACHT n� FEILI�NACHT D'FHEIDHM AR LEITH.  F�ach ar an\n"
+"GNU General Public License chun n�os m� sonra� a fh�il.\n"
+
+#: src/main.c:665
+msgid ""
+"\n"
+"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
+msgstr ""
+"\n"
+"Scr�ofa ar dt�s le Hrvoje Niksic <hniksic@xemacs.org>.\n"
+
+#. #### Something nicer should be printed here -- similar to the
+#. pre-1.5 `--help' page.
+#: src/main.c:711 src/main.c:780 src/main.c:859
+#, c-format
+msgid "Try `%s --help' for more options.\n"
+msgstr "Bain triail as `%s --help' chun tuilleadh roghanna a fheice�il.\n"
+
+#: src/main.c:777
+#, c-format
+msgid "%s: illegal option -- `-n%c'\n"
+msgstr "%s: rogha neamhcheadaithe -- `-n%c'\n"
+
+#: src/main.c:830
+#, c-format
+msgid "Can't be verbose and quiet at the same time.\n"
+msgstr "N� f�idir a bheith foclach agus tostach san am c�anna.\n"
+
+#: src/main.c:836
+#, c-format
+msgid "Can't timestamp and not clobber old files at the same time.\n"
+msgstr "N� f�idir stampa� ama a dh�anamh gan forscr�obh ar do chuid sheanchomhaid.\n"
+
+#: src/main.c:844
+#, c-format
+msgid "Cannot specify both --inet4-only and --inet6-only.\n"
+msgstr "N� f�idir --inet4-only agus --inet6-only a shonr� araon.\n"
+
+#. No URL specified.
+#: src/main.c:854
+#, c-format
+msgid "%s: missing URL\n"
+msgstr "%s: URL ar iarraidh\n"
+
+#: src/main.c:963
+#, c-format
+msgid "No URLs found in %s.\n"
+msgstr "N�or aims�odh aon URL i %s.\n"
+
+#: src/main.c:972
+#, c-format
+msgid ""
+"\n"
+"FINISHED --%s--\n"
+"Downloaded: %s bytes in %d files\n"
+msgstr ""
+"\n"
+"CR�OCHNAITHE --%s--\n"
+"Luchtaithe: %s beart i %d comhad\n"
+
+#: src/main.c:978
+#, c-format
+msgid "Download quota (%s bytes) EXCEEDED!\n"
+msgstr "S�ra�odh an cu�ta luchtaithe de %s beart!\n"
+
+#: src/mswindows.c:235
+#, c-format
+msgid "Continuing in background.\n"
+msgstr "Ag lean�int sa ch�lra.\n"
+
+#: src/mswindows.c:427
+#, c-format
+msgid "Continuing in background, pid %lu.\n"
+msgstr "Ag lean�int sa ch�lra, pid %lu.\n"
+
+#: src/mswindows.c:429 src/utils.c:348
+#, c-format
+msgid "Output will be written to `%s'.\n"
+msgstr "Scr�obhfar aschur i `%s'.\n"
+
+#: src/mswindows.c:597 src/mswindows.c:604
+#, c-format
+msgid "%s: Couldn't find usable socket driver.\n"
+msgstr "%s: N�orbh fh�idir tiom�na� in�s�idte soic�id a aimsi�.\n"
+
+#: src/netrc.c:385
+#, c-format
+msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
+msgstr "%s: %s:%d: rabhadh: tagann an teaghr�n \"%s\" roimh aon ainm meais�n\n"
+
+#: src/netrc.c:416
+#, c-format
+msgid "%s: %s:%d: unknown token \"%s\"\n"
+msgstr "%s: %s:%d: teaghr�n anaithnid comharthach \"%s\"\n"
+
+#: src/netrc.c:480
+#, c-format
+msgid "Usage: %s NETRC [HOSTNAME]\n"
+msgstr "�s�id: %s NETRC [�STAINM]\n"
+
+#: src/netrc.c:490
+#, c-format
+msgid "%s: cannot stat %s: %s\n"
+msgstr "%s: n� f�idir %s a stat: %s\n"
+
+#. Still not random enough, presumably because neither /dev/random
+#. nor EGD were available.  Try to seed OpenSSL's PRNG with libc
+#. PRNG.  This is cryptographically weak and defeats the purpose
+#. of using OpenSSL, which is why it is highly discouraged.
+#: src/openssl.c:121
+msgid "WARNING: using a weak random seed.\n"
+msgstr "RABHADH: s�ol lag randamach in �s�id.\n"
+
+#: src/openssl.c:181
+msgid "Could not seed PRNG; consider using --random-file.\n"
+msgstr "N�orbh fh�idir PRNG a sh�ol�; b'fh�idir --random-file a �s�id.\n"
+
+#. If the user has specified --no-check-cert, we still want to warn
+#. him about problems with the server's certificate.
+#: src/openssl.c:404
+msgid "ERROR"
+msgstr "EARR�ID"
+
+#: src/openssl.c:404
+msgid "WARNING"
+msgstr "RABHADH"
+
+#: src/openssl.c:412
+#, c-format
+msgid "%s: No certificate presented by %s.\n"
+msgstr "%s: N�or taispe�in %s teastas ar bith.\n"
+
+#: src/openssl.c:434
+#, c-format
+msgid "%s: Certificate verification error for %s: %s\n"
+msgstr "%s: Earr�id agus teastas � bhail�ocht� le haghaidh %s: %s\n"
+
+#: src/openssl.c:457
+#, c-format
+msgid "%s: certificate common name `%s' doesn't match requested host name `%s'.\n"
+msgstr "%s: n�l ainm coitianta an teastais `%s' comhoiri�nach leis an �stainm iarrtha `%s'.\n"
+
+#. Align the [ skipping ... ] line with the dots.  To do
+#. that, insert the number of spaces equal to the number of
+#. digits in the skipped amount in K.
+#: src/progress.c:243
+#, c-format
+msgid ""
+"\n"
+"%*s[ skipping %dK ]"
+msgstr ""
+"\n"
+"%*s[ %dK � scipe�il ]"
+
+#: src/progress.c:410
+#, c-format
+msgid "Invalid dot style specification `%s'; leaving unchanged.\n"
+msgstr "Sonr� neamhbhail� ar st�l phonc `%s'; ag f�g�il gan athr�.\n"
+
+#: src/recur.c:377
+#, c-format
+msgid "Removing %s since it should be rejected.\n"
+msgstr "Ag baint %s toisc gur ceart � a dhi�lt�.\n"
+
+#: src/res.c:544
+msgid "Loading robots.txt; please ignore errors.\n"
+msgstr "robots.txt � lucht�; d�an neamhaird d'earr�id� le do thoil.\n"
+
+#: src/retr.c:645
+#, c-format
+msgid "Error parsing proxy URL %s: %s.\n"
+msgstr "Earr�id agus URL an seachfhreastala� %s � phars�il: %s.\n"
+
+#: src/retr.c:653
+#, c-format
+msgid "Error in proxy URL %s: Must be HTTP.\n"
+msgstr "Earr�id i URL seachfhreastala� %s: N� fol�ir a bheith HTTP.\n"
+
+#: src/retr.c:738
+#, c-format
+msgid "%d redirections exceeded.\n"
+msgstr "n�os m� n� %d atreor�.\n"
+
+#: src/retr.c:863
+msgid ""
+"Giving up.\n"
+"\n"
+msgstr ""
+"Ag �ir� as.\n"
+"\n"
+
+#: src/retr.c:863
+msgid ""
+"Retrying.\n"
+"\n"
+msgstr ""
+"Ag triail ar�s.\n"
+"\n"
+
+#: src/url.c:620
+msgid "No error"
+msgstr "N� raibh aon earr�id"
+
+#: src/url.c:622
+msgid "Unsupported scheme"
+msgstr "Sc�im gan tac�"
+
+#: src/url.c:624
+msgid "Empty host"
+msgstr "�str�omhaire folamh"
+
+#: src/url.c:626
+msgid "Bad port number"
+msgstr "Drochuimhir phoirt"
+
+#: src/url.c:628
+msgid "Invalid user name"
+msgstr "Ainm neamhbhail� �s�ideora"
+
+#: src/url.c:630
+msgid "Unterminated IPv6 numeric address"
+msgstr "Seoladh uimhri�il IPv6 gan chr�ochn�"
+
+#: src/url.c:632
+msgid "IPv6 addresses not supported"
+msgstr "N�l seolta� IPv6 ar f�il"
+
+#: src/url.c:634
+msgid "Invalid IPv6 numeric address"
+msgstr "Seoladh uimhri�il IPv6 neamhbhail�"
+
+#. parent, no error
+#: src/utils.c:346
+#, c-format
+msgid "Continuing in background, pid %d.\n"
+msgstr "Ag lean�int sa ch�lra, pid %d.\n"
+
+#: src/utils.c:394
+#, c-format
+msgid "Failed to unlink symlink `%s': %s\n"
+msgstr "Theip ar d�nascadh an naisc shiombalaigh `%s': %s\n"
+
+#: src/xmalloc.c:72
+#, c-format
+msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
+msgstr "%s: %s: Theip ar leithdh�ileadh %ld beart; cuimhne �dithe.\n"
