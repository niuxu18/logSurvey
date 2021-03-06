 msgid "Failed writing HTTP request: %s.\n"
 msgstr "A HTTP kérés írása meghiúsult: %s.\n"
 
-#: src/http.c:737
+#: src/http.c:745
 msgid "No headers, assuming HTTP/0.9"
 msgstr "Nincsenek fejlécek, HTTP/0.9 feltételezése"
 
-#: src/http.c:1417
+#: src/http.c:1430
 msgid "Disabling SSL due to encountered errors.\n"
 msgstr "A tapasztalt hibák miatt az SSL letiltásra kerül.\n"
 
-#: src/http.c:1570
-#, c-format
-msgid "POST data file `%s' missing: %s\n"
-msgstr "A(z) \"%s\" POST adatfájl hiányzik: %s\n"
+#: src/http.c:1548
+#, fuzzy, c-format
+msgid "POST data file %s missing: %s\n"
+msgstr "A(z) „%s” POST adatfájl hiányzik: %s\n"
 
-#: src/http.c:1619
+#: src/http.c:1632
 #, c-format
 msgid "Reusing existing connection to %s:%d.\n"
 msgstr "Újrahasználom a kapcsolatot a következőhöz: %s:%d.\n"
 
-#: src/http.c:1687
+#: src/http.c:1701
 #, c-format
 msgid "Failed reading proxy response: %s\n"
 msgstr "A proxy válasz olvasása meghiúsult: %s\n"
 
-#: src/http.c:1707
+#: src/http.c:1721
 #, c-format
 msgid "Proxy tunneling failed: %s"
 msgstr "A proxy alagutazás meghiúsult: %s"
 
-#: src/http.c:1752
+#: src/http.c:1766
 #, c-format
 msgid "%s request sent, awaiting response... "
 msgstr "%s kérés elküldve, várom a választ... "
 
-#: src/http.c:1763
+#: src/http.c:1777
 msgid "No data received.\n"
 msgstr "Nem érkezett adat.\n"
 
-#: src/http.c:1770
+#: src/http.c:1784
 #, c-format
 msgid "Read error (%s) in headers.\n"
 msgstr "Olvasási hiba (%s) a fejlécekben.\n"
 
-#: src/http.c:1816 src/http.c:2368
-#, c-format
+#: src/http.c:1831 src/http.c:2385
+#, fuzzy, c-format
 msgid ""
-"File `%s' already there; not retrieving.\n"
+"File %s already there; not retrieving.\n"
 "\n"
 msgstr ""
-"A(z) \"%s\" fájl már létezik, nem töltöm le.\n"
+"A(z) „%s” fájl már létezik, nem töltöm le.\n"
 "\n"
 
-#: src/http.c:1969
+#: src/http.c:1985
 msgid "Unknown authentication scheme.\n"
 msgstr "Ismeretlen hitelesítési séma.\n"
 
-#: src/http.c:2000
+#: src/http.c:2016
 msgid "Authorization failed.\n"
 msgstr "A hitelesítés meghiúsult.\n"
 
-#: src/http.c:2014
+#: src/http.c:2030
 msgid "Malformed status line"
 msgstr "Rosszul formázott állapotsor"
 
-#: src/http.c:2016
+#: src/http.c:2032
 msgid "(no description)"
 msgstr "(nincs leírás)"
 
-#: src/http.c:2082
+#: src/http.c:2098
 #, c-format
 msgid "Location: %s%s\n"
 msgstr "Hely: %s%s\n"
 
-#: src/http.c:2083 src/http.c:2193
+#: src/http.c:2099 src/http.c:2209
 msgid "unspecified"
 msgstr "nincs megadva"
 
-#: src/http.c:2084
+#: src/http.c:2100
 msgid " [following]"
 msgstr " [következik]"
 
-#: src/http.c:2140
+#: src/http.c:2156
 msgid ""
 "\n"
 "    The file is already fully retrieved; nothing to do.\n"
