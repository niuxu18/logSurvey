 "\n"
 
 #. do not CWD
-#: src/ftp.c:453
+#: src/ftp.c:579
 msgid "==> CWD not required.\n"
 msgstr "==> CWD не е необходимо.\n"
 
-#: src/ftp.c:516
+#: src/ftp.c:639
 msgid "Cannot initiate PASV transfer.\n"
 msgstr "Не мога да започна пасивен трансфер.\n"
 
-#: src/ftp.c:520
+#: src/ftp.c:643
 msgid "Cannot parse PASV response.\n"
 msgstr "Не мога да разбера PASV отговора.\n"
 
-#: src/ftp.c:541
-#, c-format
-msgid "couldn't connect to %s:%hu: %s\n"
+#: src/ftp.c:660
+#, fuzzy, c-format
+msgid "couldn't connect to %s port %d: %s\n"
 msgstr "немога да се свържа към %s:%hu: %s\n"
 
-#: src/ftp.c:591
+#: src/ftp.c:708
 #, c-format
 msgid "Bind error (%s).\n"
 msgstr "Грешка при свързване (%s).\n"
 
-#: src/ftp.c:598
+#: src/ftp.c:714
 msgid "Invalid PORT.\n"
 msgstr "Невалиден порт.\n"
 
-#: src/ftp.c:651
-#, c-format
-msgid ""
-"\n"
-"REST failed; will not truncate `%s'.\n"
-msgstr ""
-"\n"
-"Грешка при REST; няма да прекъсна `%s'.\n"
-
-#: src/ftp.c:658
+#: src/ftp.c:760
 msgid ""
 "\n"
 "REST failed, starting from scratch.\n"
