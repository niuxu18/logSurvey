 msgid "%s: option requires an argument -- %c\n"
 msgstr "%s: v�ti n�uab argumenti -- %c\n"
 
-#: src/host.c:438
-#, c-format
-msgid "%s: Cannot determine user-id.\n"
-msgstr "%s: Ei suuda tuvastada kasutaja id'd.\n"
-
-#: src/host.c:450
-#, c-format
-msgid "%s: Warning: uname failed: %s\n"
-msgstr "%s: Hoiatus: uname eba�nnestus %s\n"
-
-#: src/host.c:462
-#, c-format
-msgid "%s: Warning: gethostname failed\n"
-msgstr "%s: Hoiatus: gethostname eba�nnestus\n"
-
-#: src/host.c:490
-#, c-format
-msgid "%s: Warning: cannot determine local IP address.\n"
-msgstr "%s: Hoiatus: ei suuda tuvastada lokaalset IP aadressi.\n"
-
-#: src/host.c:504
-#, c-format
-msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
-msgstr "%s: Hoiatus: ei saa lokaalse IP aadressi reversit.\n"
-
-#. This gets ticked pretty often.  Karl Berry reports
-#. that there can be valid reasons for the local host
-#. name not to be an FQDN, so I've decided to remove the
-#. annoying warning.
-#: src/host.c:517
-#, c-format
-msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
-msgstr "%s: Hoiatus: lokaalse aadressi revers ei anna FQDN!\n"
-
-#: src/host.c:545
+#: src/host.c:374
 msgid "Host not found"
 msgstr "Hosti ei leitud"
 
-#: src/host.c:547
+#: src/host.c:376
 msgid "Unknown error"
 msgstr "Tundmatu viga"
 
-#: src/html.c:615 src/html.c:617
-#, c-format
-msgid "Index of /%s on %s:%d"
-msgstr "/%s indeks serveris %s:%d"
+#. this is fatal
+#: src/http.c:554
+msgid "Failed to set up an SSL context\n"
+msgstr "SSL konteksti m��ramine eba�nnestus\n"
 
-#: src/html.c:639
-msgid "time unknown       "
-msgstr "tundmatu aeg       "
+#: src/http.c:560
+#, c-format
+msgid "Failed to load certificates from %s\n"
+msgstr "Sertifikaadi laadimine failist %s eba�nnestus\n"
 
-#: src/html.c:643
-msgid "File        "
-msgstr "Fail        "
+#: src/http.c:564 src/http.c:572
+msgid "Trying without the specified certificate\n"
+msgstr "Proovin n�idatud sertifikaati mitte kasutada\n"
 
-#: src/html.c:646
-msgid "Directory   "
-msgstr "Kataloog    "
+#: src/http.c:568
+#, c-format
+msgid "Failed to get certificate key from %s\n"
+msgstr "Sertifikaadi v�tme laadimine failist %s eba�nnestus\n"
 
-#: src/html.c:649
-msgid "Link        "
-msgstr "Viide       "
+#: src/http.c:662 src/http.c:1592
+msgid "Unable to establish SSL connection.\n"
+msgstr "SSL �henduse loomine ei �nnestu.\n"
 
-#: src/html.c:652
-msgid "Not sure    "
-msgstr "Pole kindel "
-
-#: src/html.c:670
+#: src/http.c:670
 #, c-format
-msgid " (%s bytes)"
-msgstr " (%s baiti)"
+msgid "Reusing connection to %s:%hu.\n"
+msgstr "Kasutan �hendust serveriga %s:%hu.\n"
 
-#: src/http.c:508
-msgid "Failed writing HTTP request.\n"
-msgstr "HTTP p�ringu kirjutamine eba�nnestus.\n"
+#: src/http.c:860
+#, c-format
+msgid "Failed writing HTTP request: %s.\n"
+msgstr "HTTP p�ringu kirjutamine eba�nnestus: %s.\n"
 
-#: src/http.c:512
+#: src/http.c:865
 #, c-format
 msgid "%s request sent, awaiting response... "
 msgstr "%s p�ring saadetud, ootan vastust... "
 
-#: src/http.c:551
+#: src/http.c:909
 msgid "End of file while parsing headers.\n"
 msgstr "P�iste anal��sil sain faili l�pu teate.\n"
 
-#: src/http.c:562
+#: src/http.c:919
 #, c-format
 msgid "Read error (%s) in headers.\n"
 msgstr "P�iste lugemise viga (%s).\n"
 
-#: src/http.c:602
+#: src/http.c:958
 msgid "No data received"
 msgstr "Andmeid ei saanudki"
 
-#: src/http.c:604
+#: src/http.c:960
 msgid "Malformed status line"
 msgstr "Katkine staatuse rida"
 
-#: src/http.c:609
+#: src/http.c:965
 msgid "(no description)"
 msgstr "(kirjeldus puudub)"
 
-#. If we have tried it already, then there is not point
-#. retrying it.
-#: src/http.c:693
+#: src/http.c:1088
 msgid "Authorization failed.\n"
 msgstr "Autoriseerimine eba�nnestus.\n"
 
-#: src/http.c:700
+#: src/http.c:1095
 msgid "Unknown authentication scheme.\n"
 msgstr "Tundmatu autentimis skeem.\n"
 
-#: src/http.c:783
+#: src/http.c:1135
 #, c-format
 msgid "Location: %s%s\n"
 msgstr "Asukoht: %s%s\n"
 
-#: src/http.c:784 src/http.c:809
+#: src/http.c:1136 src/http.c:1268
 msgid "unspecified"
 msgstr "m��ramata"
 
-#: src/http.c:785
+#: src/http.c:1137
 msgid " [following]"
 msgstr " [j�rgnev]"
 
+#: src/http.c:1199
+msgid "\n    The file is already fully retrieved; nothing to do.\n\n"
+msgstr "\n    Fail on juba t�ielikult kohal; rohkem ei saa midagi teha.\n\n"
+
+#: src/http.c:1215
+#, c-format
+msgid ""
+"\n"
+"The server does not support continued downloads, which conflicts with `-c'.\n"
+"Refusing to truncate existing file `%s'.\n"
+"\n"
+msgstr ""
+"\n"
+"See server ei toeta allalaadimise j�tkamisi, milline k�itumine on konfliktis\n"
+"v�tmega `-c'. Ei riku olemasolevat faili `%s'.\n"
+"\n"
+
 #. No need to print this output if the body won't be
 #. downloaded at all, or if the original server response is
 #. printed.
-#: src/http.c:799
+#: src/http.c:1258
 msgid "Length: "
 msgstr "Pikkus: "
 
-#: src/http.c:804
+#: src/http.c:1263
 #, c-format
 msgid " (%s to go)"
 msgstr " (%s veel)"
 
-#: src/http.c:809
+#: src/http.c:1268
 msgid "ignored"
 msgstr "ignoreerin"
 
-#: src/http.c:912
+#: src/http.c:1398
 msgid "Warning: wildcards not supported in HTTP.\n"
 msgstr "Hoiatus: HTTP ei toeta jokkereid.\n"
 
 #. If opt.noclobber is turned on and file already exists, do not
 #. retrieve the file
-#: src/http.c:933
+#: src/http.c:1416
 #, c-format
 msgid "File `%s' already there, will not retrieve.\n"
 msgstr "Fail `%s' on juba olemas, ei t�mba.\n"
 
-#: src/http.c:1099
+#: src/http.c:1584
 #, c-format
 msgid "Cannot write to `%s' (%s).\n"
 msgstr "Ei saa kirjutada faili `%s' (%s).\n"
 
-#: src/http.c:1110
+#: src/http.c:1601
 #, c-format
 msgid "ERROR: Redirection (%d) without location.\n"
 msgstr "VIGA: �mbersuunamine (%d) ilma asukohata.\n"
 
-#: src/http.c:1135
+#: src/http.c:1629
 #, c-format
 msgid "%s ERROR %d: %s.\n"
 msgstr "%s VIGA %d: %s.\n"
 
-#: src/http.c:1148
+#: src/http.c:1641
 msgid "Last-modified header missing -- time-stamps turned off.\n"
 msgstr "Last-modified p�ist pole -- ei kasuta aja-stampe.\n"
 
-#: src/http.c:1156
+#: src/http.c:1649
 msgid "Last-modified header invalid -- time-stamp ignored.\n"
 msgstr "Last-modified p�is on vigane -- ignoreerin aja-stampi.\n"
 
-#: src/http.c:1191
+#: src/http.c:1672
+#, c-format
+msgid "Server file no newer than local file `%s' -- not retrieving.\n\n"
+msgstr "Fail serveril ei ole uuem lokaalsest failist `%s' -- ei lae.\n\n"
+
+#: src/http.c:1679
+#, c-format
+msgid "The sizes do not match (local %ld) -- retrieving.\n"
+msgstr "Suurused ei klapi (lokaalne %ld) -- laen uuesti.\n"
+
+#: src/http.c:1683
 msgid "Remote file is newer, retrieving.\n"
 msgstr "Kauge fail on uuem, laen alla.\n"
 
-#: src/http.c:1226
+#: src/http.c:1727
 #, c-format
-msgid ""
-"%s (%s) - `%s' saved [%ld/%ld]\n"
-"\n"
-msgstr ""
-"%s (%s) - `%s' salvestatud [%ld/%ld]\n"
-"\n"
+msgid "%s (%s) - `%s' saved [%ld/%ld]\n\n"
+msgstr "%s (%s) - `%s' salvestatud [%ld/%ld]\n\n"
 
-#: src/http.c:1274
+#: src/http.c:1773
 #, c-format
 msgid "%s (%s) - Connection closed at byte %ld. "
 msgstr "%s (%s) - �hendus suletud baidil %ld. "
 
-#: src/http.c:1282
+#: src/http.c:1781
 #, c-format
-msgid ""
-"%s (%s) - `%s' saved [%ld/%ld])\n"
-"\n"
-msgstr ""
-"%s (%s) - `%s' salvestatud [%ld/%ld])\n"
-"\n"
+msgid "%s (%s) - `%s' saved [%ld/%ld])\n\n"
+msgstr "%s (%s) - `%s' salvestatud [%ld/%ld])\n\n"
 
-#: src/http.c:1302
+#: src/http.c:1800
 #, c-format
 msgid "%s (%s) - Connection closed at byte %ld/%ld. "
 msgstr "%s (%s) - �hendus suletud baidil %ld/%ld. "
 
-#: src/http.c:1313
+#: src/http.c:1811
 #, c-format
 msgid "%s (%s) - Read error at byte %ld (%s)."
 msgstr "%s (%s) - Lugemise viga baidil %ld (%s)."
 
-#: src/http.c:1321
+#: src/http.c:1819
 #, c-format
 msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
 msgstr "%s (%s) - Lugemise viga baidil %ld/%ld (%s). "
 
-#: src/init.c:329 src/netrc.c:260
+#: src/init.c:348 src/netrc.c:267
 #, c-format
 msgid "%s: Cannot read %s (%s).\n"
 msgstr "%s: %s ei saa lugeda (%s).\n"
 
-#: src/init.c:347 src/init.c:353
+#: src/init.c:366 src/init.c:372
 #, c-format
 msgid "%s: Error in %s at line %d.\n"
 msgstr "%s: Viga %s's real %d.\n"
 
-#: src/init.c:384
+#: src/init.c:404
 #, c-format
 msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
 msgstr "%s: Hoiatus: Nii s�steemne kui kasutaja wgetrc on `%s'.\n"
 
-#: src/init.c:476
+#: src/init.c:496
 #, c-format
 msgid "%s: BUG: unknown command `%s', value `%s'.\n"
 msgstr "%s: BUG: tundmatu k�sklus`%s', v��rtus `%s'.\n"
 
-#: src/init.c:498
-#, c-format
-msgid "%s: Out of memory.\n"
-msgstr "%s: M�lu ei j�tku.\n"
-
-#: src/init.c:504
+#: src/init.c:528
 #, c-format
 msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
-msgstr "%s: %s: `%s' ei �nnestu teisendada IP aadressiks.\n"
+msgstr "%s: %s: `%s' ei saa IP aadressiks teisendada.\n"
 
-#: src/init.c:532
+#: src/init.c:558
 #, c-format
 msgid "%s: %s: Please specify on or off.\n"
 msgstr "%s: %s: Palun kasuta `on' v�i `off'.\n"
 
-#: src/init.c:576
+#: src/init.c:602
 #, c-format
 msgid "%s: %s: Please specify always, on, off, or never.\n"
 msgstr "%s: %s: Palun kasuta `always', `on', `off' v�i `never'.\n"
 
-#: src/init.c:595 src/init.c:852 src/init.c:874 src/init.c:938
+#: src/init.c:621 src/init.c:918 src/init.c:940 src/init.c:1004
 #, c-format
 msgid "%s: %s: Invalid specification `%s'.\n"
 msgstr "%s %s: Vigane spetsifikatsioon `%s'.\n"
 
-#: src/init.c:708 src/init.c:730 src/init.c:752 src/init.c:778
+#: src/init.c:774 src/init.c:796 src/init.c:818 src/init.c:844
 #, c-format
 msgid "%s: Invalid specification `%s'\n"
 msgstr "%s: Vigane spetsifikatsioon `%s'\n"
 
-#: src/main.c:105
+#: src/main.c:119
 #, c-format
 msgid "Usage: %s [OPTION]... [URL]...\n"
 msgstr "Kasuta: %s [V�TI]... [URL]...\n"
 
-#: src/main.c:113
+#: src/main.c:127
 #, c-format
 msgid "GNU Wget %s, a non-interactive network retriever.\n"
 msgstr "GNU Wget %s, mitte-interaktiivne v�rgu imeja.\n"
 
 #. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
 #. don't bitch.  Also, it makes translation much easier.
-#: src/main.c:118
-msgid ""
-"\n"
-"Mandatory arguments to long options are mandatory for short options too.\n"
-"\n"
+#: src/main.c:132
+msgid "\nMandatory arguments to long options are mandatory for short options too.\n\n"
 msgstr ""
 "\n"
 "Kohustuslikud argumendid pikkadele v�tmetele\n"
 "on kohustuslikud ka l�hikestele v�tmetele.\n"
 "\n"
 
-#: src/main.c:121
+#: src/main.c:136
 msgid ""
 "Startup:\n"
 "  -V,  --version           display the version of Wget and exit.\n"
