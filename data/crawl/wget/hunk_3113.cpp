+# Translation of wget-1.9.1.po to Euskara
+# Basque translation of wget.
+# Copyright (C) 2001 Free Software Foundation, Inc.
+# This file is distributed under the same license as the wget package.
+# Mikel Olasagasti <hey_neken@euskal.org>, 2003.
+# 
+# 
+msgid ""
+msgstr ""
+"Project-Id-Version: wget 1.9.1\n"
+"Report-Msgid-Bugs-To: \n"
+"POT-Creation-Date: 2003-10-11 16:21+0200\n"
+"PO-Revision-Date: 2004-02-24 10:37+0100\n"
+"Last-Translator: Mikel Olasagasti <hey_neken@euskal.org>\n"
+"Language-Team: Basque <linux-eu@chanae.alphanet.ch>\n"
+"MIME-Version: 1.0\n"
+"Content-Type: text/plain; charset=UTF-8\n"
+"Content-Transfer-Encoding: 8bit\n"
+
+#: src/connect.c:88
+#, c-format
+msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
+msgstr "Ezin da `%s' lotura helbide batetara bihurtu.  BESTE batera bihurtzen.\n"
+
+#: src/connect.c:165
+#, c-format
+msgid "Connecting to %s[%s]:%hu... "
+msgstr "%s[%s]ra konektatzen:%hu... "
+
+#: src/connect.c:168
+#, c-format
+msgid "Connecting to %s:%hu... "
+msgstr "%sra konektatzen: %hu... "
+
+#: src/connect.c:222
+msgid "connected.\n"
+msgstr "konektatua.\n"
+
+#: src/convert.c:171
+#, c-format
+msgid "Converted %d files in %.2f seconds.\n"
+msgstr "%d fitxategi %.2f segundutan bihurtuak.\n"
+
+#: src/convert.c:197
+#, c-format
+msgid "Converting %s... "
+msgstr "%s bihurtzen... "
+
+#: src/convert.c:210
+msgid "nothing to do.\n"
+msgstr "ezer ez egiteko.\n"
+
+#: src/convert.c:218 src/convert.c:242
+#, c-format
+msgid "Cannot convert links in %s: %s\n"
+msgstr "Ezin dira %s-ko linkak bihurtu: %s\n"
+
+#: src/convert.c:233
+#, c-format
+msgid "Unable to delete `%s': %s\n"
+msgstr "Ezin da `%s' ezabatu: %s\n"
+
+#: src/convert.c:439
+#, c-format
+msgid "Cannot back up %s as %s: %s\n"
+msgstr "Ezin da %s gordetzeko kopia egin %s bezala: %s\n"
+
+#: src/cookies.c:606
+#, c-format
+msgid "Error in Set-Cookie, field `%s'"
+msgstr "Okerra Set-Cookie egiten, `%s' eremuan"
+
+#: src/cookies.c:629
+#, c-format
+msgid "Syntax error in Set-Cookie: %s at position %d.\n"
+msgstr "Kookie-a ezartzean sintaxi errorea: %s %d posizioan.\n"
+
+#: src/cookies.c:1426
+#, c-format
+msgid "Cannot open cookies file `%s': %s\n"
+msgstr "Ezin da `%s' cookie fitxategia ireki: %s\n"
+
+#: src/cookies.c:1438
+#, c-format
+msgid "Error writing to `%s': %s\n"
+msgstr "Errorea `%s' idazterakoan: %s\n"
+
+#: src/cookies.c:1442
+#, c-format
+msgid "Error closing `%s': %s\n"
+msgstr "`%s' itxitzerakoan errorea: %s\n"
+
+#: src/ftp-ls.c:812
+msgid "Unsupported listing type, trying Unix listing parser.\n"
+msgstr "Zerredatze mota sostengurik gabe, Unix zerrendatze sintaxi-analizatzailearekin saiatzen.\n"
+
+#: src/ftp-ls.c:857 src/ftp-ls.c:859
+#, c-format
+msgid "Index of /%s on %s:%d"
+msgstr "/%s-ren indexa  %s:%d-en"
+
+#: src/ftp-ls.c:882
+msgid "time unknown       "
+msgstr "denbora ezezaguna       "
+
+#: src/ftp-ls.c:886
+msgid "File        "
+msgstr "Fitxategia        "
+
+#: src/ftp-ls.c:889
+msgid "Directory   "
+msgstr "Direktorioa   "
+
+#: src/ftp-ls.c:892
+msgid "Link        "
+msgstr "Link        "
+
+#: src/ftp-ls.c:895
+msgid "Not sure    "
+msgstr "Zihurtasunik gabe    "
+
+#: src/ftp-ls.c:913
+#, c-format
+msgid " (%s bytes)"
+msgstr " (%s byte)"
+
+#. Second: Login with proper USER/PASS sequence.
+#: src/ftp.c:202
+#, c-format
+msgid "Logging in as %s ... "
+msgstr "%s bezala saioa hasten... "
+
+#: src/ftp.c:215 src/ftp.c:268 src/ftp.c:299 src/ftp.c:353 src/ftp.c:468
+#: src/ftp.c:519 src/ftp.c:551 src/ftp.c:611 src/ftp.c:675 src/ftp.c:748
+#: src/ftp.c:796
+msgid "Error in server response, closing control connection.\n"
+msgstr "Zerbitzariaren erantzunean errorea, konexio kontrol panela itxitzen.\n"
+
+#: src/ftp.c:223
+msgid "Error in server greeting.\n"
+msgstr "Errorea zerbitzarikin agurtzerakoan.\n"
+
+#: src/ftp.c:231 src/ftp.c:362 src/ftp.c:477 src/ftp.c:560 src/ftp.c:621
+#: src/ftp.c:685 src/ftp.c:758 src/ftp.c:806
+msgid "Write failed, closing control connection.\n"
+msgstr "Idaztean huts egin da, kontrol konexioa itxitzen.\n"
+
+#: src/ftp.c:238
+msgid "The server refuses login.\n"
+msgstr "Zerbitzariak saio hasiera ukatzen du.\n"
+
+#: src/ftp.c:245
+msgid "Login incorrect.\n"
+msgstr "Saio sartze okerra.\n"
+
+#: src/ftp.c:252
+msgid "Logged in!\n"
+msgstr "Saiora sartua!\n"
+
+#: src/ftp.c:277
+msgid "Server error, can't determine system type.\n"
+msgstr "Zerbitzari errorea, ezin da sistema moeta determinatu.\n"
+
+#: src/ftp.c:287 src/ftp.c:596 src/ftp.c:659 src/ftp.c:716
+msgid "done.    "
+msgstr "eginda.    "
+
+#: src/ftp.c:341 src/ftp.c:498 src/ftp.c:533 src/ftp.c:779 src/ftp.c:827
+msgid "done.\n"
+msgstr "eginda.\n"
+
+#: src/ftp.c:370
+#, c-format
+msgid "Unknown type `%c', closing control connection.\n"
+msgstr "Mota ezezaguna `%c', kontrol konexioa itxitzen.\n"
+
+#: src/ftp.c:383
+msgid "done.  "
+msgstr "eginda.  "
+
+#: src/ftp.c:389
+msgid "==> CWD not needed.\n"
+msgstr "==> CWDa ez da behar.\n"
+
+#: src/ftp.c:484
+#, c-format
+msgid ""
+"No such directory `%s'.\n"
+"\n"
+msgstr ""
+"Ez dago `%s' direktoriorik.\n"
+"\n"
+
+#. do not CWD
+#: src/ftp.c:502
+msgid "==> CWD not required.\n"
+msgstr "==> CWD ez da beharrezkoa.\n"
+
+#: src/ftp.c:567
+msgid "Cannot initiate PASV transfer.\n"
+msgstr "Ezin da PASV transferentzia hasi.\n"
+
+#: src/ftp.c:571
+msgid "Cannot parse PASV response.\n"
+msgstr "Ezin da PASV erantzuan parseatu.\n"
+
+#: src/ftp.c:588
+#, c-format
+msgid "couldn't connect to %s:%hu: %s\n"
+msgstr "ezin izan da %s-ra konektatu:%hu:%s\n"
+
+#: src/ftp.c:638
+#, c-format
+msgid "Bind error (%s).\n"
+msgstr "Lotze errorea (%s).\n"
+
+#: src/ftp.c:645
+msgid "Invalid PORT.\n"
+msgstr "PORTU desegokia.\n"
+
+#: src/ftp.c:698
+#, c-format
+msgid ""
+"\n"
+"REST failed; will not truncate `%s'.\n"
+msgstr ""
+"\n"
+"REST komanduak huts egin du, ez da`%s' moztuko.\n"
+
+#: src/ftp.c:705
+msgid ""
+"\n"
+"REST failed, starting from scratch.\n"
+msgstr ""
+"\n"
+"REST komanduak huts egin du, hutsetik hasten.\n"
+
+#: src/ftp.c:766
+#, c-format
+msgid ""
+"No such file `%s'.\n"
+"\n"
+msgstr ""
+"Ez dago `%s' fitxategirik.\n"
+"\n"
+
+#: src/ftp.c:814
+#, c-format
+msgid ""
+"No such file or directory `%s'.\n"
+"\n"
+msgstr ""
+"Ez dago `%s' fitxategi edo direktoriorik.\n"
+"\n"
+
+#: src/ftp.c:898 src/ftp.c:906
+#, c-format
+msgid "Length: %s"
+msgstr "Luzeera: %s"
+
+#: src/ftp.c:900 src/ftp.c:908
+#, c-format
+msgid " [%s to go]"
+msgstr " [%s amaitzeko]"
+
+#: src/ftp.c:910
+msgid " (unauthoritative)\n"
+msgstr " (autorizaziorik gabea)\n"
+
+#: src/ftp.c:936
+#, c-format
+msgid "%s: %s, closing control connection.\n"
+msgstr "%s: %s, konexio kontrola itxitzen.\n"
+
+#: src/ftp.c:944
+#, c-format
+msgid "%s (%s) - Data connection: %s; "
+msgstr "%s (%s) - Datu konexioa: %s; "
+
+#: src/ftp.c:961
+msgid "Control connection closed.\n"
+msgstr "Kontrol konexioa itxia.\n"
+
+#: src/ftp.c:979
+msgid "Data transfer aborted.\n"
+msgstr "Datu transferentzia abortatua.\n"
+
+#: src/ftp.c:1044
+#, c-format
+msgid "File `%s' already there, not retrieving.\n"
+msgstr "`%s' fitxategia dagoeneko badago, ez da jasoko.\n"
+
+#: src/ftp.c:1114 src/http.c:1716
+#, c-format
+msgid "(try:%2d)"
+msgstr "(saiatu:%2d)"
+
+#: src/ftp.c:1180 src/http.c:1975
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%ld]\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' gordeta [%ld]\n"
+"\n"
+
+#: src/ftp.c:1222 src/main.c:890 src/recur.c:377 src/retr.c:596
+#, c-format
+msgid "Removing %s.\n"
+msgstr "%s ezabatzen.\n"
+
+#: src/ftp.c:1264
+#, c-format
+msgid "Using `%s' as listing tmp file.\n"
+msgstr "`%s' erabiltzen zerrenda tmp fitxategi bezala.\n"
+
+#: src/ftp.c:1279
+#, c-format
+msgid "Removed `%s'.\n"
+msgstr "`%s' ezabatua.\n"
+
+#: src/ftp.c:1314
+#, c-format
+msgid "Recursion depth %d exceeded max. depth %d.\n"
+msgstr "Inkurtsio sakonera %dk maximoa gainditzen du. Sakonera %d.\n"
+
+#. Remote file is older, file sizes can be compared and
+#. are both equal.
+#: src/ftp.c:1384
+#, c-format
+msgid "Remote file no newer than local file `%s' -- not retrieving.\n"
+msgstr "`%s' fitxategi erremotoa ez da bertakoa baina berriagoa -- ez da jasoko.\n"
+
+#. Remote file is newer or sizes cannot be matched
+#: src/ftp.c:1391
+#, c-format
+msgid ""
+"Remote file is newer than local file `%s' -- retrieving.\n"
+"\n"
+msgstr "`%s' fitxategi erremotoa bertakoa baina berriagoa da -- jasotzen.\n"
+
+#. Sizes do not match
+#: src/ftp.c:1398
+#, c-format
+msgid ""
+"The sizes do not match (local %ld) -- retrieving.\n"
+"\n"
+msgstr ""
+"Tamainuak ez dute ezkontzen (lokalak %ld) -- jasotzen.\n"
+"\n"
+
+#: src/ftp.c:1415
+msgid "Invalid name of the symlink, skipping.\n"
+msgstr "Baliogabeko symlink izena, saltatzen.\n"
+
+#: src/ftp.c:1432
+#, c-format
+msgid ""
+"Already have correct symlink %s -> %s\n"
+"\n"
+msgstr ""
+"Dagoeneko baduka link simboliko zuzena %s -> %s\n"
+"\n"
+
+#: src/ftp.c:1440
+#, c-format
+msgid "Creating symlink %s -> %s\n"
+msgstr "Link sinbolikoa sortzen %s -> %s\n"
+
+#: src/ftp.c:1451
+#, c-format
+msgid "Symlinks not supported, skipping symlink `%s'.\n"
+msgstr "Link sinbolikoak ez daude onartuak, `%s' link sinbolikoa baztetzen.\n"
+
+#: src/ftp.c:1463
+#, c-format
+msgid "Skipping directory `%s'.\n"
+msgstr "Direktorioa utzitzen `%s'.\n"
+
+#: src/ftp.c:1472
+#, c-format
+msgid "%s: unknown/unsupported file type.\n"
+msgstr "%s: ezagun/euskarririk gabeko fitxategi mota.\n"
+
+#: src/ftp.c:1499
+#, c-format
+msgid "%s: corrupt time-stamp.\n"
+msgstr "%s: ordu zigilu okerra.\n"
+
+#: src/ftp.c:1524
+#, c-format
+msgid "Will not retrieve dirs since depth is %d (max %d).\n"
+msgstr "Ez dira direktorio gehiago jasoko, sakonera %d-koa delako (mas %d).\n"
+
+#: src/ftp.c:1574
+#, c-format
+msgid "Not descending to `%s' as it is excluded/not-included.\n"
+msgstr "Ez jaisten `%s'ra, ez baitago sartua edo exkluditua dago.\n"
+
+#: src/ftp.c:1639 src/ftp.c:1652
+#, c-format
+msgid "Rejecting `%s'.\n"
+msgstr "`%s' ez onartzen.\n"
+
+#. No luck.
+#. #### This message SUCKS.  We should see what was the
+#. reason that nothing was retrieved.
+#: src/ftp.c:1698
+#, c-format
+msgid "No matches on pattern `%s'.\n"
+msgstr "`%s' ereduarekin ez du lotzen.\n"
+
+#: src/ftp.c:1764
+#, c-format
+msgid "Wrote HTML-ized index to `%s' [%ld].\n"
+msgstr "Idatzia HTMLizatutako index-a `%s'-en [%ld].\n"
+
+#: src/ftp.c:1769
+#, c-format
+msgid "Wrote HTML-ized index to `%s'.\n"
+msgstr "Idatzia HTMLzatutako index-a '%s'-en.\n"
+
+#: src/gen_sslfunc.c:117
+msgid "Could not seed OpenSSL PRNG; disabling SSL.\n"
+msgstr "Ezin da OpenSSL PRNG hasi, SSL ezintzen.\n"
+
+#: src/getopt.c:675
+#, c-format
+msgid "%s: option `%s' is ambiguous\n"
+msgstr "%s: `%s' aukera anbiguoa da\n"
+
+#: src/getopt.c:700
+#, c-format
+msgid "%s: option `--%s' doesn't allow an argument\n"
+msgstr "%s: `--%s'k ez du argudiorik onartzen\n"
+
+#: src/getopt.c:705
+#, c-format
+msgid "%s: option `%c%s' doesn't allow an argument\n"
+msgstr "%s: `%c%s' aukerak ez du argudiorik onartzen\n"
+
+#: src/getopt.c:723 src/getopt.c:896
+#, c-format
+msgid "%s: option `%s' requires an argument\n"
+msgstr "%s: `%s' aukerak argudio bat behar du\n"
+
+#. --option
+#: src/getopt.c:752
+#, c-format
+msgid "%s: unrecognized option `--%s'\n"
+msgstr "%s: aukera·ezezaguna `--%s'\n"
+
+#. +option or -option
+#: src/getopt.c:756
+#, c-format
+msgid "%s: unrecognized option `%c%s'\n"
+msgstr "%s: aukera ezezaguna `%c%s'\n"
+
+#. 1003.2 specifies the format of this message.
+#: src/getopt.c:782
+#, c-format
+msgid "%s: illegal option -- %c\n"
+msgstr "%s: legez kanpoko aukera -- %c\n"
+
+#: src/getopt.c:785
+#, c-format
+msgid "%s: invalid option -- %c\n"
+msgstr "%s: legez kanpoko aukera -- %c\n"
+
+#. 1003.2 specifies the format of this message.
+#: src/getopt.c:815 src/getopt.c:945
+#, c-format
+msgid "%s: option requires an argument -- %c\n"
+msgstr "%s: aukerak argumentu bat behar du -- %c\n"
+
+#: src/getopt.c:862
+#, c-format
+msgid "%s: option `-W %s' is ambiguous\n"
+msgstr "%s: `-W %s' aukera anbiguoa da\n"
+
+#: src/getopt.c:880
+#, c-format
+msgid "%s: option `-W %s' doesn't allow an argument\n"
+msgstr "%s: `-W %s' aukerak ez du argudiorik onartzen\n"
+
+#: src/host.c:636
+#, c-format
+msgid "Resolving %s... "
+msgstr "%s ebazten... "
+
+#: src/host.c:656 src/host.c:672
+#, c-format
+msgid "failed: %s.\n"
+msgstr "huts egin da: %s.\n"
+
+#: src/host.c:674
+msgid "failed: timed out.\n"
+msgstr "huts·egin·da: denboraz kanpo.\n"
+
+#: src/host.c:762
+msgid "Host not found"
+msgstr "Host-a ez da aurkitu"
+
+#: src/host.c:764
+msgid "Unknown error"
+msgstr "Errore ezezaguna"
+
+#: src/html-url.c:293
+#, c-format
+msgid "%s: Cannot resolve incomplete link %s.\n"
+msgstr "%s: Ezin da osatu gabeko linka ebatzi %s.\n"
+
+#. this is fatal
+#: src/http.c:674
+msgid "Failed to set up an SSL context\n"
+msgstr "Huts egin da SSL kontextua eratzen\n"
+
+#: src/http.c:680
+#, c-format
+msgid "Failed to load certificates from %s\n"
+msgstr "%s-tik zertifikazioak kargatzerakoan huts egin da\n"
+
+#: src/http.c:684 src/http.c:692
+msgid "Trying without the specified certificate\n"
+msgstr "Zehaztutako zertifikaziorik gabe saiatzen\n"
+
+#: src/http.c:688
+#, c-format
+msgid "Failed to get certificate key from %s\n"
+msgstr "Huts egin da zertifikazio gakoa hartzerakoan %s-tik\n"
+
+#: src/http.c:761 src/http.c:1809
+msgid "Unable to establish SSL connection.\n"
+msgstr "Ezinezkoa SSL konexioa sortzea.\n"
+
+#: src/http.c:770
+#, c-format
+msgid "Reusing connection to %s:%hu.\n"
+msgstr "Konexioa berrerabiltzen %srentzat: %hu.\n"
+
+#: src/http.c:1034
+#, c-format
+msgid "Failed writing HTTP request: %s.\n"
+msgstr "Huts egin da HTTP eskaera idazterakoan: %s.\n"
+
+#: src/http.c:1039
+#, c-format
+msgid "%s request sent, awaiting response... "
+msgstr "%s eskaera bidalia, erantzunaren zain... "
+
+#: src/http.c:1083
+msgid "End of file while parsing headers.\n"
+msgstr "Fitxategiaren amaiera goi-buruak parseatzen ziren bitartean.\n"
+
+#: src/http.c:1093
+#, c-format
+msgid "Read error (%s) in headers.\n"
+msgstr "Irakurketa errorea (%s) goiburukoetan.\n"
+
+#: src/http.c:1128
+msgid "No data received"
+msgstr "Ez da daturik jaso"
+
+#: src/http.c:1130
+msgid "Malformed status line"
+msgstr "Gaizki eratutako egoera lerroa"
+
+#: src/http.c:1135
+msgid "(no description)"
+msgstr "(deskripziorik gabe)"
+
+#: src/http.c:1267
+msgid "Authorization failed.\n"
+msgstr "Autorizazitzen huts egin da.\n"
+
+#: src/http.c:1274
+msgid "Unknown authentication scheme.\n"
+msgstr "Autentifikazio eskema ezezaguna.\n"
+
+#: src/http.c:1314
+#, c-format
+msgid "Location: %s%s\n"
+msgstr "Kokapena: %s%s\n"
+
+#: src/http.c:1315 src/http.c:1454
+msgid "unspecified"
+msgstr "zehaztugabea"
+
+#: src/http.c:1316
+msgid " [following]"
+msgstr " [hurrengoa]"
+
+#: src/http.c:1383
+msgid ""
+"\n"
+"    The file is already fully retrieved; nothing to do.\n"
+"\n"
+msgstr ""
+"\n"
+"    Fitxategi hau iada guztiz jasoa dago; ezer ez egiteko.\n"
+"\n"
+
+#: src/http.c:1401
+#, c-format
+msgid ""
+"\n"
+"Continued download failed on this file, which conflicts with `-c'.\n"
+"Refusing to truncate existing file `%s'.\n"
+"\n"
+msgstr ""
+"\n"
+"Deskarkaren jarrapienak huts egin du fitxategi hontan, eta `-c'-rekin gatazka sortzen du.\n"
+"Existitzen den `%s' fitxategia moztea ukatzen da.\n"
+
+#. No need to print this output if the body won't be
+#. downloaded at all, or if the original server response is
+#. printed.
+#: src/http.c:1444
+msgid "Length: "
+msgstr "Luzera: "
+
+#: src/http.c:1449
+#, c-format
+msgid " (%s to go)"
+msgstr " (%s amaitzeko)"
+
+#: src/http.c:1454
+msgid "ignored"
+msgstr "baztertua"
+
+#: src/http.c:1598
+msgid "Warning: wildcards not supported in HTTP.\n"
+msgstr "Oharra: komodinak ez daude onartuak HTTPean.\n"
+
+#. If opt.noclobber is turned on and file already exists, do not
+#. retrieve the file
+#: src/http.c:1628
+#, c-format
+msgid "File `%s' already there, will not retrieve.\n"
+msgstr "`%s'·fitxategia·dagoeneko·badago,·ez·da·jasoko.\n"
+
+#: src/http.c:1800
+#, c-format
+msgid "Cannot write to `%s' (%s).\n"
+msgstr "Ezin da `%s' idatzi (%s).\n"
+
+#: src/http.c:1819
+#, c-format
+msgid "ERROR: Redirection (%d) without location.\n"
+msgstr "ERROREA: (%d) helbideraketa kokapenik gabe.\n"
+
+#: src/http.c:1851
+#, c-format
+msgid "%s ERROR %d: %s.\n"
+msgstr "%s ERROREA %d %s.\n"
+
+#: src/http.c:1864
+msgid "Last-modified header missing -- time-stamps turned off.\n"
+msgstr "Azken·burugoiko·modifikazitua falta da·-·ordu·zigilua·itzalia.\n"
+
+#: src/http.c:1872
+msgid "Last-modified header invalid -- time-stamp ignored.\n"
+msgstr "Azken burugoiko modifikazioa baliogabekoa - ordu zigilua ignoratua.\n"
+
+#: src/http.c:1895
+#, c-format
+msgid ""
+"Server file no newer than local file `%s' -- not retrieving.\n"
+"\n"
+msgstr ""
+"Zerbitzariko fitxategia ez da bertakoa %s fitxategia  baina berriagoa -- ez da jasoko.\n"
+"\n"
+
+#: src/http.c:1903
+#, c-format
+msgid "The sizes do not match (local %ld) -- retrieving.\n"
+msgstr "Tamainuak·ez·dute·ezkontzen·(lokalak·%ld)·--·jasotzen.\n"
+
+#: src/http.c:1907
+msgid "Remote file is newer, retrieving.\n"
+msgstr "Fitxategi erremotoa berriagoa da, jasotzen.\n"
+
+#: src/http.c:1948
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%ld/%ld]\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' gordeta [%ld/%ld]\n"
+"\n"
+
+#: src/http.c:1998
+#, c-format
+msgid "%s (%s) - Connection closed at byte %ld. "
+msgstr "%s (%s) - Konexioa itxia ondorengo bytean %ld. "
+
+#: src/http.c:2007
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%ld/%ld])\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' gordeta [%ld/%ld])\n"
+"\n"
+
+#: src/http.c:2028
+#, c-format
+msgid "%s (%s) - Connection closed at byte %ld/%ld. "
+msgstr "%s (%s) - Konexioa itxia ondorengo bytean %ld/%ld. "
+
+#: src/http.c:2040
+#, c-format
+msgid "%s (%s) - Read error at byte %ld (%s)."
+msgstr "%s (%s) - Irakurtze errorea %ld bytean (%s)."
+
+#: src/http.c:2049
+#, c-format
+msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
+msgstr "%s (%s) - Irakurtze errorea %ld/%ld bytean (%s). "
+
+#: src/init.c:342
+#, c-format
+msgid "%s: WGETRC points to %s, which doesn't exist.\n"
+msgstr "%s: WGETRC %sra apuntatzen du, ez dena existitzen.\n"
+
+#: src/init.c:398 src/netrc.c:276
+#, c-format
+msgid "%s: Cannot read %s (%s).\n"
+msgstr "%s: Ezin irakurri %s (%s).\n"
+
+#: src/init.c:416 src/init.c:422
+#, c-format
+msgid "%s: Error in %s at line %d.\n"
+msgstr "%s: %s-n errorea %d lerroan.\n"
+
+#: src/init.c:454
+#, c-format
+msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
+msgstr "%s: Kontuz: Bai sistema bai wgetrc `%s'ra apuntatzen dute.\n"
+
+#: src/init.c:594
+#, c-format
+msgid "%s: Invalid --execute command `%s'\n"
+msgstr "%s: Baliogaeko --exekutatu`%s' komandoa\n"
+
+#: src/init.c:630
+#, c-format
+msgid "%s: %s: Invalid boolean `%s', use `on' or `off'.\n"
+msgstr "%s: %s: Baliogabeko booleanoa `%s', erabili `on' edo `off'.\n"
+
+#: src/init.c:673
+#, c-format
+msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
+msgstr "%s: %s: Baliogabeko booleanoa `%s', erabili beti, on, off, edo never.\n"
+
+#: src/init.c:691
+#, c-format
+msgid "%s: %s: Invalid number `%s'.\n"
+msgstr "%s: %s: Baliogabeko zenbakia `%s'.\n"
+
+#: src/init.c:930 src/init.c:949
+#, c-format
+msgid "%s: %s: Invalid byte value `%s'\n"
+msgstr "%s: %s: Baliogabeko byte balioa `%s'\n"
+
+#: src/init.c:974
+#, c-format
+msgid "%s: %s: Invalid time period `%s'\n"
+msgstr "%s: %s: Baliogabeko denbora tartea `%s'\n"
+
+#: src/init.c:1051
+#, c-format
+msgid "%s: %s: Invalid header `%s'.\n"
+msgstr "%s: %s: Baliogabeko goiburukoa `%s'.\n"
+
+#: src/init.c:1106
+#, c-format
+msgid "%s: %s: Invalid progress type `%s'.\n"
+msgstr "%s: %s: Baliogabeko aurreratze mota `%s'.\n"
+
+#: src/init.c:1157
+#, c-format
+msgid "%s: %s: Invalid restriction `%s', use `unix' or `windows'.\n"
+msgstr "%s: %s: Baliogabeko mugaketa `%s', erabili `unix' edo `windows'.\n"
+
+#: src/init.c:1198
+#, c-format
+msgid "%s: %s: Invalid value `%s'.\n"
+msgstr "%s: %s: Baliogabeko balioa `%s'.\n"
+
+#: src/log.c:636
+#, c-format
+msgid ""
+"\n"
+"%s received, redirecting output to `%s'.\n"
+msgstr ""
+"\n"
+"%s jasota, irteera `%s'ra bideratzen.\n"
+
+#. Eek!  Opening the alternate log file has failed.  Nothing we
+#. can do but disable printing completely.
+#: src/log.c:643
+#, c-format
+msgid "%s: %s; disabling logging.\n"
+msgstr "%s: %s; saio hasiera desgaitzen.\n"
+
+#: src/main.c:127
+#, c-format
+msgid "Usage: %s [OPTION]... [URL]...\n"
+msgstr "Erabili: %s [AUKERA]... [URL]...\n"
+
+#: src/main.c:135
+#, c-format
+msgid "GNU Wget %s, a non-interactive network retriever.\n"
+msgstr "GNU Wget %s, sare informazio jaitsitzaile ez interaktiboa.\n"
+
+#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
+#. don't bitch.  Also, it makes translation much easier.
+#: src/main.c:140
+msgid ""
+"\n"
+"Mandatory arguments to long options are mandatory for short options too.\n"
+"\n"
+msgstr ""
+"\n"
+"Aginduzko argumentu luzeegiak aukera txikientzako agindu ere badira.\n"
+"\n"
+
+#: src/main.c:144
+msgid ""
+"Startup:\n"
+"  -V,  --version           display the version of Wget and exit.\n"
+"  -h,  --help              print this help.\n"
+"  -b,  --background        go to background after startup.\n"
+"  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+"\n"
+msgstr ""
+"Hasteko:\n"
+"  -V,  --version           Wget-en bertsioa erakutsi eta irten.\n"
+"  -h,  --help              laguntza hau erakutsi.\n"
+"  -b,  --background        asterakoan atzealdean ipini.\n"
+"  -e,  --execute=KOMANDUA   `.wgetrc'-motako komandua ejekutatzen du.\n"
+"\n"
+
+#: src/main.c:151
+msgid ""
+"Logging and input file:\n"
+"  -o,  --output-file=FILE     log messages to FILE.\n"
+"  -a,  --append-output=FILE   append messages to FILE.\n"
+"  -d,  --debug                print debug output.\n"
+"  -q,  --quiet                quiet (no output).\n"
+"  -v,  --verbose              be verbose (this is the default).\n"
+"  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
+"  -i,  --input-file=FILE      download URLs found in FILE.\n"
+"  -F,  --force-html           treat input file as HTML.\n"
+"  -B,  --base=URL             prepends URL to relative links in -F -i file.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:163
+msgid ""
+"Download:\n"
+"  -t,  --tries=NUMBER           set number of retries to NUMBER (0 unlimits).\n"
+"       --retry-connrefused      retry even if connection is refused.\n"
+"  -O   --output-document=FILE   write documents to FILE.\n"
+"  -nc, --no-clobber             don't clobber existing files or use .# suffixes.\n"
+"  -c,  --continue               resume getting a partially-downloaded file.\n"
+"       --progress=TYPE          select progress gauge type.\n"
+"  -N,  --timestamping           don't re-retrieve files unless newer than local.\n"
+"  -S,  --server-response        print server response.\n"
+"       --spider                 don't download anything.\n"
+"  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
+"       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
+"       --connect-timeout=SECS   set the connect timeout to SECS.\n"
+"       --read-timeout=SECS      set the read timeout to SECS.\n"
+"  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
+"       --waitretry=SECONDS      wait 1...SECONDS between retries of a retrieval.\n"
+"       --random-wait            wait from 0...2*WAIT secs between retrievals.\n"
+"  -Y,  --proxy=on/off           turn proxy on or off.\n"
+"  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
+"       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local host.\n"
+"       --limit-rate=RATE        limit download rate to RATE.\n"
+"       --dns-cache=off          disable caching DNS lookups.\n"
+"       --restrict-file-names=OS restrict chars in file names to ones OS allows.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:188
+msgid ""
+"Directories:\n"
+"  -nd, --no-directories            don't create directories.\n"
+"  -x,  --force-directories         force creation of directories.\n"
+"  -nH, --no-host-directories       don't create host directories.\n"
+"  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
+"       --cut-dirs=NUMBER           ignore NUMBER remote directory components.\n"
+"\n"
+msgstr ""
+"Direktorioak:\n"
+"  -nd, --no-directories            ez sortu direkoriorik.\n"
+"  -x,  --force-directories         behartu direktorioak sortzera.\n"
+"  -nH, --no-host-directories       ez sortu host direktoriorik.\n"
+"  -P,  --directory-prefix=AURREZKI   gorde fitxategiak AURREZKI/-an...\n"
+"       --cut-dirs=KOPURUA           ez egin jaramonik urruneko direktorio KOPURUAri.\n"
+"\n"
+
+#: src/main.c:196
+msgid ""
+"HTTP options:\n"
+"       --http-user=USER      set http user to USER.\n"
+"       --http-passwd=PASS    set http password to PASS.\n"
+"  -C,  --cache=on/off        (dis)allow server-cached data (normally allowed).\n"
+"  -E,  --html-extension      save all text/html documents with .html extension.\n"
+"       --ignore-length       ignore `Content-Length' header field.\n"
+"       --header=STRING       insert STRING among the headers.\n"
+"       --proxy-user=USER     set USER as proxy username.\n"
+"       --proxy-passwd=PASS   set PASS as proxy password.\n"
+"       --referer=URL         include `Referer: URL' header in HTTP request.\n"
+"  -s,  --save-headers        save the HTTP headers to file.\n"
+"  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
+"       --no-http-keep-alive  disable HTTP keep-alive (persistent connections).\n"
+"       --cookies=off         don't use cookies.\n"
+"       --load-cookies=FILE   load cookies from FILE before session.\n"
+"       --save-cookies=FILE   save cookies to FILE after session.\n"
+"       --post-data=STRING    use the POST method; send STRING as the data.\n"
+"       --post-file=FILE      use the POST method; send contents of FILE.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:217
+msgid ""
+"HTTPS (SSL) options:\n"
+"       --sslcertfile=FILE     optional client certificate.\n"
+"       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
+"       --egd-file=FILE        file name of the EGD socket.\n"
+"       --sslcadir=DIR         dir where hash list of CA's are stored.\n"
+"       --sslcafile=FILE       file with bundle of CA's\n"
+"       --sslcerttype=0/1      Client-Cert type 0=PEM (default) / 1=ASN1 (DER)\n"
+"       --sslcheckcert=0/1     Check the server cert agenst given CA\n"
+"       --sslprotocol=0-3      choose SSL protocol; 0=automatic,\n"
+"                              1=SSLv2 2=SSLv3 3=TLSv1\n"
+"\n"
+msgstr ""
+
+#: src/main.c:230
+msgid ""
+"FTP options:\n"
+"  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
+"  -g,  --glob=on/off           turn file name globbing on or off.\n"
+"       --passive-ftp           use the \"passive\" transfer mode.\n"
+"       --retr-symlinks         when recursing, get linked-to files (not dirs).\n"
+"\n"
+msgstr ""
+
+#: src/main.c:237
+msgid ""
+"Recursive retrieval:\n"
+"  -r,  --recursive          recursive download.\n"
+"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for infinite).\n"
+"       --delete-after       delete files locally after downloading them.\n"
+"  -k,  --convert-links      convert non-relative links to relative.\n"
+"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
+"  -m,  --mirror             shortcut option equivalent to -r -N -l inf -nr.\n"
+"  -p,  --page-requisites    get all images, etc. needed to display HTML page.\n"
+"       --strict-comments    turn on strict (SGML) handling of HTML comments.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:248
+msgid ""
+"Recursive accept/reject:\n"
+"  -A,  --accept=LIST                comma-separated list of accepted extensions.\n"
+"  -R,  --reject=LIST                comma-separated list of rejected extensions.\n"
+"  -D,  --domains=LIST               comma-separated list of accepted domains.\n"
+"       --exclude-domains=LIST       comma-separated list of rejected domains.\n"
+"       --follow-ftp                 follow FTP links from HTML documents.\n"
+"       --follow-tags=LIST           comma-separated list of followed HTML tags.\n"
+"  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML tags.\n"
+"  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
+"  -L,  --relative                   follow relative links only.\n"
+"  -I,  --include-directories=LIST   list of allowed directories.\n"
+"  -X,  --exclude-directories=LIST   list of excluded directories.\n"
+"  -np, --no-parent                  don't ascend to the parent directory.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:263
+msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
+msgstr "Bidali bug-ak eta iradokizunak <bug-wget@gnu.org>-era.\n"
+
+#: src/main.c:465
+#, c-format
+msgid "%s: debug support not compiled in.\n"
+msgstr "%s: ez dago debug euskarriarekin konpilatua.\n"
+
+#: src/main.c:517
+msgid "Copyright (C) 2003 Free Software Foundation, Inc.\n"
+msgstr "Copyright (C) 2003 Free Software Foundation, Inc.\n"
+
+#: src/main.c:519
+msgid ""
+"This program is distributed in the hope that it will be useful,\n"
+"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
+"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
+"GNU General Public License for more details.\n"
+msgstr ""
+"Programa hau erabilgarria izango zaizulakoan distribuitzen da,\n"
+"baina INOLAKO GARANTIARIK GABE; ezta MERKATURAKO edo\n"
+"NORBERAREN ERABILPENERAKO garantiarik.  Ikusi GNUren Lizentzia\n"
+"Publiko Generala detaile gehiagorako.\n"
+
+#: src/main.c:524
+msgid ""
+"\n"
+"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
+msgstr ""
+"\n"
+"Originalki Hrvoje Niksic-k idatzia <hniksic@xemacs.org>.\n"
+
+#: src/main.c:703
+#, c-format
+msgid "%s: illegal option -- `-n%c'\n"
+msgstr "%s: legez kanpoko aukera -- `-n%c'\n"
+
+#. #### Something nicer should be printed here -- similar to the
+#. pre-1.5 `--help' page.
+#: src/main.c:706 src/main.c:748 src/main.c:794
+#, c-format
+msgid "Try `%s --help' for more options.\n"
+msgstr "Saiatu `%s --help` aukera gehiagorako.\n"
+
+#: src/main.c:774
+msgid "Can't be verbose and quiet at the same time.\n"
+msgstr "Ezin da berritsu eta ixil moduan egon une berean.\n"
+
+#: src/main.c:780
+msgid "Can't timestamp and not clobber old files at the same time.\n"
+msgstr "Ezin dira ez-gainidatzi fitxategiak eta denbora markak erabili une berean.\n"
+
+#. No URL specified.
+#: src/main.c:789
+#, c-format
+msgid "%s: missing URL\n"
+msgstr "%s: URL falta\n"
+
+#: src/main.c:905
+#, c-format
+msgid "No URLs found in %s.\n"
+msgstr "Ez da URLrik aurkitu %s-n.\n"
+
+#: src/main.c:914
+#, c-format
+msgid ""
+"\n"
+"FINISHED --%s--\n"
+"Downloaded: %s bytes in %d files\n"
+msgstr ""
+"\n"
+"AMAITUTA --%s--\n"
+"Jatsitakoa: %s byte %d fitxategietan\n"
+
+#: src/main.c:920
+#, c-format
+msgid "Download quota (%s bytes) EXCEEDED!\n"
+msgstr "Jaitsiera kuota (%s byte) GAINDITUA!\n"
+
+#: src/mswindows.c:147
+msgid "Continuing in background.\n"
+msgstr "Atzeko planoan jarraitzen.\n"
+
+#: src/mswindows.c:149 src/utils.c:487
+#, c-format
+msgid "Output will be written to `%s'.\n"
+msgstr "Irteera `%s'-n idatziko da.\n"
+
+#: src/mswindows.c:245
+#, c-format
+msgid "Starting WinHelp %s\n"
+msgstr "WinHelp %s hasten\n"
+
+#: src/mswindows.c:272 src/mswindows.c:279
+#, c-format
+msgid "%s: Couldn't find usable socket driver.\n"
+msgstr "%s: Ezin aurkitu socket kontrolatzaile erabilgarririk.\n"
+
+#: src/netrc.c:380
+#, c-format
+msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
+msgstr "%s: %s:%d: abisua: \"%s\" tokena makina izenanen aurretik dago\n"
+
+#: src/netrc.c:411
+#, c-format
+msgid "%s: %s:%d: unknown token \"%s\"\n"
+msgstr "%s: %s:%d: token ezezaguna \"%s\"\n"
+
+#: src/netrc.c:475
+#, c-format
+msgid "Usage: %s NETRC [HOSTNAME]\n"
+msgstr "Erabilera: %s NETRC [HOST-IZENA]\n"
+
+#: src/netrc.c:485
+#, c-format
+msgid "%s: cannot stat %s: %s\n"
+msgstr "%s: ezin da identifikatu %s: %s\n"
+
+#. Align the [ skipping ... ] line with the dots.  To do
+#. that, insert the number of spaces equal to the number of
+#. digits in the skipped amount in K.
+#: src/progress.c:234
+#, c-format
+msgid ""
+"\n"
+"%*s[ skipping %dK ]"
+msgstr ""
+"\n"
+"%*s[ saltatzen %dK ]"
+
+#: src/progress.c:401
+#, c-format
+msgid "Invalid dot style specification `%s'; leaving unchanged.\n"
+msgstr "Baliogabeko puntuazio estilo espezifikazioa '%s'; aldatu gabe utzitzen.\n"
+
+#: src/recur.c:378
+#, c-format
+msgid "Removing %s since it should be rejected.\n"
+msgstr "%s ezabatzen ezestua izan behar zuelako.\n"
+
+#: src/res.c:549
+msgid "Loading robots.txt; please ignore errors.\n"
+msgstr "Robots.txt kargatzen; mesedez ignoratu erroreak.\n"
+
+#: src/retr.c:400
+#, c-format
+msgid "Error parsing proxy URL %s: %s.\n"
+msgstr "Proxy URLa parseatzen errorea %s: %s.\n"
+
+#: src/retr.c:408
+#, c-format
+msgid "Error in proxy URL %s: Must be HTTP.\n"
+msgstr "Errorea proxy URLan %s: HTTP izan behar du.\n"
+
+#: src/retr.c:493
+#, c-format
+msgid "%d redirections exceeded.\n"
+msgstr "%d erredirekzio kopurua gainditua.\n"
+
+#: src/retr.c:617
+msgid ""
+"Giving up.\n"
+"\n"
+msgstr ""
+"Utzitzen.\n"
+"\n"
+
+#: src/retr.c:617
+msgid ""
+"Retrying.\n"
+"\n"
+msgstr ""
+"Berriz saiatzen.\n"
+"\n"
+
+#: src/url.c:621
+msgid "No error"
+msgstr "Errorerik ez"
+
+#: src/url.c:623
+msgid "Unsupported scheme"
+msgstr "Sostengu gabeko eskema"
+
+#: src/url.c:625
+msgid "Empty host"
+msgstr "Ostalaria hutsa"
+
+#: src/url.c:627
+msgid "Bad port number"
+msgstr "Portu zenbaki akastuna"
+
+#: src/url.c:629
+msgid "Invalid user name"
+msgstr "Baliogabeko erabiltzaile izena"
+
+#: src/url.c:631
+msgid "Unterminated IPv6 numeric address"
+msgstr "IPv6 zenbaki helbide amaitugabea"
+
+#: src/url.c:633
+msgid "IPv6 addresses not supported"
+msgstr "IPV6 motako helbideak ez daude erabilgarri"
+
+#: src/url.c:635
+msgid "Invalid IPv6 numeric address"
+msgstr "Baliogabeko IPv6 zenbaki helbidea"
+
+#: src/utils.c:120
+#, c-format
+msgid "%s: %s: Not enough memory.\n"
+msgstr "%s: %s: Behar adina memoriarik gabe.\n"
+
+#. parent, no error
+#: src/utils.c:485
+#, c-format
+msgid "Continuing in background, pid %d.\n"
+msgstr "Atzeko planoan jarraitzen, pid %d.\n"
+
+#: src/utils.c:529
+#, c-format
+msgid "Failed to unlink symlink `%s': %s\n"
+msgstr "Huts egin da `%s' link sinbolikoa askatzerakoan: %s\n"
