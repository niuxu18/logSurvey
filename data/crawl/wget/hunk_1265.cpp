 msgid " (unauthoritative)\n"
 msgstr " (nem hiteles)\n"
 
-#: src/ftp.c:303
+#: src/ftp.c:305
 #, c-format
 msgid "Logging in as %s ... "
 msgstr "Belépés mint %s ... "
 
-#: src/ftp.c:316 src/ftp.c:362 src/ftp.c:391 src/ftp.c:443 src/ftp.c:555
-#: src/ftp.c:601 src/ftp.c:630 src/ftp.c:687 src/ftp.c:748 src/ftp.c:808
-#: src/ftp.c:855
+#: src/ftp.c:319 src/ftp.c:365 src/ftp.c:394 src/ftp.c:446 src/ftp.c:559
+#: src/ftp.c:606 src/ftp.c:635 src/ftp.c:692 src/ftp.c:753 src/ftp.c:839
+#: src/ftp.c:886
 msgid "Error in server response, closing control connection.\n"
 msgstr "Hiba a kiszolgáló válaszában, vezérlő kapcsolat bezárva.\n"
 
-#: src/ftp.c:323
+#: src/ftp.c:326
 msgid "Error in server greeting.\n"
 msgstr "Hiba a kiszolgáló üdvözlésében.\n"
 
-#: src/ftp.c:330 src/ftp.c:451 src/ftp.c:563 src/ftp.c:638 src/ftp.c:697
-#: src/ftp.c:758 src/ftp.c:818 src/ftp.c:865
+#: src/ftp.c:333 src/ftp.c:454 src/ftp.c:567 src/ftp.c:643 src/ftp.c:702
+#: src/ftp.c:763 src/ftp.c:849 src/ftp.c:896
 msgid "Write failed, closing control connection.\n"
 msgstr "Írás sikertelen, vezérlőkapcsolat bezárva.\n"
 
-#: src/ftp.c:336
+#: src/ftp.c:339
 msgid "The server refuses login.\n"
 msgstr "A kiszolgáló visszautasítja a belépést.\n"
 
-#: src/ftp.c:342
+#: src/ftp.c:345
 msgid "Login incorrect.\n"
 msgstr "A belépés helytelen.\n"
 
-#: src/ftp.c:348
+#: src/ftp.c:351
 msgid "Logged in!\n"
 msgstr "Belépve!\n"
 
-#: src/ftp.c:370
+#: src/ftp.c:373
 msgid "Server error, can't determine system type.\n"
 msgstr "Kiszolgálóhiba, a rendszer típusa nem határozható meg.\n"
 
-#: src/ftp.c:379 src/ftp.c:674 src/ftp.c:731 src/ftp.c:774
+#: src/ftp.c:382 src/ftp.c:679 src/ftp.c:736 src/ftp.c:779
 msgid "done.    "
 msgstr "kész.    "
 
-#: src/ftp.c:431 src/ftp.c:580 src/ftp.c:613 src/ftp.c:838 src/ftp.c:884
+#: src/ftp.c:434 src/ftp.c:584 src/ftp.c:618 src/ftp.c:869 src/ftp.c:915
 msgid "done.\n"
 msgstr "kész.\n"
 
-#: src/ftp.c:458
+#: src/ftp.c:461
 #, c-format
 msgid "Unknown type `%c', closing control connection.\n"
-msgstr "Ismeretlen típus: \"%c\", a vezérlőkapcsolat lezárásra kerül.\n"
+msgstr "Ismeretlen típus: „%c”, a vezérlőkapcsolat lezárásra kerül.\n"
 
-#: src/ftp.c:470
+#: src/ftp.c:473
 msgid "done.  "
 msgstr "kész.  "
 
-#: src/ftp.c:476
+#: src/ftp.c:479
 msgid "==> CWD not needed.\n"
 msgstr "==> CWD nem szükséges.\n"
 
-#: src/ftp.c:569
-#, c-format
+#: src/ftp.c:573
+#, fuzzy, c-format
 msgid ""
-"No such directory `%s'.\n"
+"No such directory %s.\n"
 "\n"
 msgstr ""
-"Nincs ilyen könyvtár: \"%s\".\n"
+"Nincs ilyen könyvtár: „%s”.\n"
 "\n"
 
-#: src/ftp.c:584
+#: src/ftp.c:588
 msgid "==> CWD not required.\n"
 msgstr "==> CWD nem szükséges.\n"
 
-#: src/ftp.c:644
+#: src/ftp.c:649
 msgid "Cannot initiate PASV transfer.\n"
 msgstr "Nem kezdeményezhető PASV átvitel.\n"
 
-#: src/ftp.c:648
+#: src/ftp.c:653
 msgid "Cannot parse PASV response.\n"
 msgstr "A PASV válasz nem dolgozható fel.\n"
 
-#: src/ftp.c:665
+#: src/ftp.c:670
 #, c-format
 msgid "couldn't connect to %s port %d: %s\n"
 msgstr "nem lehet csatlakozni %s %d. portjához: %s\n"
 
-#: src/ftp.c:713
+#: src/ftp.c:718
 #, c-format
 msgid "Bind error (%s).\n"
 msgstr "Hozzárendelési hiba (%s).\n"
 
-#: src/ftp.c:719
+#: src/ftp.c:724
 msgid "Invalid PORT.\n"
 msgstr "Érvénytelen PORT.\n"
 
-#: src/ftp.c:765
+#: src/ftp.c:770
 msgid ""
 "\n"
 "REST failed, starting from scratch.\n"
