 "\n"
 
 #. do not CWD
-#: src/ftp.c:595
+#: src/ftp.c:502
 msgid "==> CWD not required.\n"
 msgstr "==> CWD n�o requerido.\n"
 
-#: src/ftp.c:654
+#: src/ftp.c:567
 msgid "Cannot initiate PASV transfer.\n"
 msgstr "N�o foi poss�vel iniciar transfer�ncia PASV.\n"
 
-#: src/ftp.c:658
+#: src/ftp.c:571
 msgid "Cannot parse PASV response.\n"
 msgstr "N�o foi poss�vel entender resposta do comando PASV.\n"
 
-#: src/ftp.c:676
-#, fuzzy, c-format
-msgid "couldn't connect to %s port %d: %s\n"
+#: src/ftp.c:588
+#, c-format
+msgid "couldn't connect to %s:%hu: %s\n"
 msgstr "n�o foi poss�vel conectar para %s:%hu: %s\n"
 
 # , c-format
-#: src/ftp.c:724
+#: src/ftp.c:638
 #, c-format
 msgid "Bind error (%s).\n"
 msgstr "Erro no bind (%s).\n"
 
-#: src/ftp.c:730
+#: src/ftp.c:645
 msgid "Invalid PORT.\n"
 msgstr "PORT inv�lido.\n"
 
-#: src/ftp.c:776
+#: src/ftp.c:698
+#, c-format
+msgid ""
+"\n"
+"REST failed; will not truncate `%s'.\n"
+msgstr ""
+"\n"
+"REST falhou; %s n�o ser� truncado.\n"
+
+#: src/ftp.c:705
 msgid ""
 "\n"
 "REST failed, starting from scratch.\n"