 "Content-Type: text/plain; charset=iso-8859-2\n"
 "Content-Transfer-Encoding: 8bit\n"
 
-#: src/connect.c:195
+#: lib/getopt.c:530 lib/getopt.c:546
+#, c-format
+msgid "%s: option `%s' is ambiguous\n"
+msgstr "%s: opcija `%s' je dvosmislena\n"
+
+#: lib/getopt.c:579 lib/getopt.c:583
+#, c-format
+msgid "%s: option `--%s' doesn't allow an argument\n"
+msgstr "%s: uz opciju `--%s' ne ide argument\n"
+
+#: lib/getopt.c:592 lib/getopt.c:597
+#, c-format
+msgid "%s: option `%c%s' doesn't allow an argument\n"
+msgstr "%s: opcija `%c%s' ne dopu�ta argument\n"
+
+#: lib/getopt.c:640 lib/getopt.c:659 lib/getopt.c:975 lib/getopt.c:994
+#, c-format
+msgid "%s: option `%s' requires an argument\n"
+msgstr "%s: opcija `%s' tra�i argument\n"
+
+#: lib/getopt.c:697 lib/getopt.c:700
+#, c-format
+msgid "%s: unrecognized option `--%s'\n"
+msgstr "%s: nepoznata opcija `--%s'\n"
+
+#: lib/getopt.c:708 lib/getopt.c:711
+#, c-format
+msgid "%s: unrecognized option `%c%s'\n"
+msgstr "%s: nepoznata opcija `%c%s'\n"
+
+#: lib/getopt.c:763 lib/getopt.c:766
+#, c-format
+msgid "%s: illegal option -- %c\n"
+msgstr "%s: nedopu�tena opcija -- %c\n"
+
+#: lib/getopt.c:772 lib/getopt.c:775
+#, c-format
+msgid "%s: invalid option -- %c\n"
+msgstr "%s: neispravna opcija -- %c\n"
+
+#: lib/getopt.c:827 lib/getopt.c:843 lib/getopt.c:1047 lib/getopt.c:1065
+#, c-format
+msgid "%s: option requires an argument -- %c\n"
+msgstr "%s: opcija tra�i argument -- %c\n"
+
+#: lib/getopt.c:896 lib/getopt.c:912
+#, c-format
+msgid "%s: option `-W %s' is ambiguous\n"
+msgstr "%s: opcija `-W %s' je dvosmislena\n"
+
+#: lib/getopt.c:936 lib/getopt.c:954
+#, c-format
+msgid "%s: option `-W %s' doesn't allow an argument\n"
+msgstr "%s: uz opciju `-W %s' ne ide argument\n"
+
+#: src/connect.c:194
 #, c-format
 msgid "%s: unable to resolve bind address `%s'; disabling bind.\n"
 msgstr "%s: ne mogu prona�i adresu `%s' u svrhu binda; bindanje onemogu�eno.\n"
 
-#: src/connect.c:267
+#: src/connect.c:266
 #, c-format
 msgid "Connecting to %s|%s|:%d... "
 msgstr "Spajam se na %s|%s|:%d... "
 
-#: src/connect.c:270
+#: src/connect.c:269
 #, c-format
 msgid "Connecting to %s:%d... "
 msgstr "Spajam se na %s:%d... "
 
-#: src/connect.c:330
+#: src/connect.c:329
 msgid "connected.\n"
 msgstr "spojen.\n"
 
-#: src/connect.c:342 src/host.c:752 src/host.c:781
+#: src/connect.c:341 src/host.c:752 src/host.c:781
 #, c-format
 msgid "failed: %s.\n"
 msgstr "nije uspjelo: %s.\n"
 
-#: src/convert.c:171
+#: src/connect.c:365 src/http.c:1628
+#, fuzzy, c-format
+msgid "%s: unable to resolve host address `%s'\n"
+msgstr "%s: ne mogu prona�i adresu `%s' u svrhu binda; bindanje onemogu�eno.\n"
+
+#: src/convert.c:169
 #, fuzzy, c-format
 msgid "Converted %d files in %s seconds.\n"
 msgstr "Konvertirao %d spisa za %.*f sekundi.\n"
 
-#: src/convert.c:196
+#: src/convert.c:194
 #, c-format
 msgid "Converting %s... "
 msgstr "Konvertiram %s... "
 
-#: src/convert.c:209
+#: src/convert.c:207
 msgid "nothing to do.\n"
 msgstr "nema posla.\n"
 
-#: src/convert.c:217 src/convert.c:241
+#: src/convert.c:215 src/convert.c:239
 #, c-format
 msgid "Cannot convert links in %s: %s\n"
 msgstr "Ne mogu konvertirati linkove u %s: %s\n"
 
-#: src/convert.c:232
+#: src/convert.c:230
 #, c-format
 msgid "Unable to delete `%s': %s\n"
 msgstr "Ne mogu izbrisati `%s': %s\n"
 
-#: src/convert.c:441
+#: src/convert.c:439
 #, c-format
 msgid "Cannot back up %s as %s: %s\n"
 msgstr "Ne mogu snimiti backup iz %s u %s: %s\n"
 
-#: src/cookies.c:443
+#: src/cookies.c:442
 #, c-format
 msgid "Syntax error in Set-Cookie: %s at position %d.\n"
 msgstr "Gre�ka u Set-Cookie: %s na poziciji %d.\n"
 
-#: src/cookies.c:685
+#: src/cookies.c:684
 #, c-format
 msgid "Cookie coming from %s attempted to set domain to %s\n"
 msgstr "Cookie s adrese %s poku�ao je postaviti domenu na %s\n"
 
-#: src/cookies.c:1132 src/cookies.c:1250
+#: src/cookies.c:1131 src/cookies.c:1249
 #, c-format
 msgid "Cannot open cookies file `%s': %s\n"
 msgstr "Ne mogu otvoriti spis s cookiejima `%s': %s\n"
 
-#: src/cookies.c:1287
+#: src/cookies.c:1286
 #, c-format
 msgid "Error writing to `%s': %s\n"
 msgstr "Gre�ka pri pisanju u `%s': %s\n"
 
-#: src/cookies.c:1290
+#: src/cookies.c:1289
 #, c-format
 msgid "Error closing `%s': %s\n"
 msgstr "Gre�ka pri zatvaranju `%s': %s\n"
 
-#: src/ftp-ls.c:836
+#: src/ftp-ls.c:835
 msgid "Unsupported listing type, trying Unix listing parser.\n"
 msgstr ""
 "Nepodr�ana vrsta ispisa, poku�avat �u s razlu�iteljem Unixovog ispisa.\n"
 
-#: src/ftp-ls.c:882 src/ftp-ls.c:884
+#: src/ftp-ls.c:881 src/ftp-ls.c:883
 #, c-format
 msgid "Index of /%s on %s:%d"
 msgstr "Indeks direktorija /%s na %s:%d"
 
-#: src/ftp-ls.c:907
+#: src/ftp-ls.c:906
 #, c-format
 msgid "time unknown       "
 msgstr "nepoznato vrijeme    "
 
-#: src/ftp-ls.c:911
+#: src/ftp-ls.c:910
 #, c-format
 msgid "File        "
 msgstr "Spis        "
 
-#: src/ftp-ls.c:914
+#: src/ftp-ls.c:913
 #, c-format
 msgid "Directory   "
 msgstr "Direktorij  "
 
-#: src/ftp-ls.c:917
+#: src/ftp-ls.c:916
 #, c-format
 msgid "Link        "
 msgstr "Link        "
 
-#: src/ftp-ls.c:920
+#: src/ftp-ls.c:919
 #, c-format
 msgid "Not sure    "
 msgstr "Ne znam     "
 
-#: src/ftp-ls.c:938
+#: src/ftp-ls.c:937
 #, c-format
 msgid " (%s bytes)"
 msgstr " (%s bajtova)"
 
-#: src/ftp.c:209
+#: src/ftp.c:213
 #, c-format
 msgid "Length: %s"
 msgstr "Duljina: %s"
 
-#: src/ftp.c:215 src/http.c:2174
+#: src/ftp.c:219 src/http.c:2173
 #, c-format
 msgid ", %s (%s) remaining"
 msgstr ", %s (%s) preostaje"
 
-#: src/ftp.c:219 src/http.c:2178
+#: src/ftp.c:223 src/http.c:2177
 #, c-format
 msgid ", %s remaining"
 msgstr ", %s preostaje"
 
-#: src/ftp.c:222
+#: src/ftp.c:226
 msgid " (unauthoritative)\n"
 msgstr " (nepouzdano)\n"
 
-#. Second: Login with proper USER/PASS sequence.
-#: src/ftp.c:298
+#: src/ftp.c:302
 #, c-format
 msgid "Logging in as %s ... "
 msgstr "Prijavljujem se kao %s ... "
 
-#: src/ftp.c:311 src/ftp.c:357 src/ftp.c:386 src/ftp.c:438 src/ftp.c:550
-#: src/ftp.c:596 src/ftp.c:625 src/ftp.c:682 src/ftp.c:743 src/ftp.c:803
-#: src/ftp.c:850
+#: src/ftp.c:315 src/ftp.c:361 src/ftp.c:390 src/ftp.c:442 src/ftp.c:554
+#: src/ftp.c:600 src/ftp.c:629 src/ftp.c:686 src/ftp.c:747 src/ftp.c:807
+#: src/ftp.c:854
 msgid "Error in server response, closing control connection.\n"
 msgstr "Gre�ka u odgovoru, zatvaram kontrolnu vezu.\n"
 
-#: src/ftp.c:318
+#: src/ftp.c:322
 msgid "Error in server greeting.\n"
 msgstr "Gre�ka u poslu�iteljevom pozdravu.\n"
 
-#: src/ftp.c:325 src/ftp.c:446 src/ftp.c:558 src/ftp.c:633 src/ftp.c:692
-#: src/ftp.c:753 src/ftp.c:813 src/ftp.c:860
+#: src/ftp.c:329 src/ftp.c:450 src/ftp.c:562 src/ftp.c:637 src/ftp.c:696
+#: src/ftp.c:757 src/ftp.c:817 src/ftp.c:864
 msgid "Write failed, closing control connection.\n"
 msgstr "Pisanje je zakazalo, zatvaram kontrolnu vezu.\n"
 
-#: src/ftp.c:331
+#: src/ftp.c:335
 msgid "The server refuses login.\n"
 msgstr "Poslu�itelj odbija prijavu.\n"
 
-#: src/ftp.c:337
+#: src/ftp.c:341
 msgid "Login incorrect.\n"
 msgstr "Pogre�na prijava.\n"
 
-#: src/ftp.c:343
+#: src/ftp.c:347
 msgid "Logged in!\n"
 msgstr "Ulogiran!\n"
 
-#: src/ftp.c:365
+#: src/ftp.c:369
 msgid "Server error, can't determine system type.\n"
 msgstr "Gre�ka na serveru, ne mogu utvrditi vrstu sustava.\n"
 
-#: src/ftp.c:374 src/ftp.c:669 src/ftp.c:726 src/ftp.c:769
+#: src/ftp.c:378 src/ftp.c:673 src/ftp.c:730 src/ftp.c:773
 msgid "done.    "
 msgstr "gotovo.  "
 
-#: src/ftp.c:426 src/ftp.c:575 src/ftp.c:608 src/ftp.c:833 src/ftp.c:879
+#: src/ftp.c:430 src/ftp.c:579 src/ftp.c:612 src/ftp.c:837 src/ftp.c:883
 msgid "done.\n"
 msgstr "gotovo.\n"
 
-#: src/ftp.c:453
+#: src/ftp.c:457
 #, c-format
 msgid "Unknown type `%c', closing control connection.\n"
 msgstr "Nepoznat tip `%c', zatvaram kontrolnu vezu.\n"
 
-#: src/ftp.c:465
+#: src/ftp.c:469
 msgid "done.  "
 msgstr "gotovo."
 
-#: src/ftp.c:471
+#: src/ftp.c:475
 msgid "==> CWD not needed.\n"
 msgstr "==> CWD nepotreban.\n"
 
-#: src/ftp.c:564
+#: src/ftp.c:568
 #, c-format
 msgid ""
 "No such directory `%s'.\n"
 "\n"
 msgstr "Ne postoji direktorij `%s'.\n"
 
-#. do not CWD
-#: src/ftp.c:579
+#: src/ftp.c:583
 msgid "==> CWD not required.\n"
 msgstr "==> CWD se ne tra�i.\n"
 
-#: src/ftp.c:639
+#: src/ftp.c:643
 msgid "Cannot initiate PASV transfer.\n"
 msgstr "Ne mogu otpo�eti PASV prijenos.\n"
 
-#: src/ftp.c:643
+#: src/ftp.c:647
 msgid "Cannot parse PASV response.\n"
 msgstr "Ne mogu ra��laniti PASV odgovor.\n"
 
-#: src/ftp.c:660
+#: src/ftp.c:664
 #, c-format
 msgid "couldn't connect to %s port %d: %s\n"
 msgstr "nemogu�e spajanje na %s, port %d: %s\n"
 
-#: src/ftp.c:708
+#: src/ftp.c:712
 #, c-format
 msgid "Bind error (%s).\n"
 msgstr "Gre�ka pri bindu (%s).\n"
 
-#: src/ftp.c:714
+#: src/ftp.c:718
 msgid "Invalid PORT.\n"
 msgstr "Neispravan PORT.\n"
 
-#: src/ftp.c:760
+#: src/ftp.c:764
 msgid ""
 "\n"
 "REST failed, starting from scratch.\n"
