 "������� `%s' צ����Φ�.\n"
 "\n"
 
+#  do not CWD
+#  do not CWD
 #. do not CWD
-#: src/ftp.c:595
+#: src/ftp.c:502
 msgid "==> CWD not required.\n"
 msgstr "==> CWD �� �����������.\n"
 
-#: src/ftp.c:654
+#: src/ftp.c:567
 msgid "Cannot initiate PASV transfer.\n"
 msgstr "�� ���� �Φæ����� PASV-��������.\n"
 
-#: src/ftp.c:658
+#: src/ftp.c:571
 msgid "Cannot parse PASV response.\n"
 msgstr "������� ������������� ���̦�� צ���צĦ PASV.\n"
 
-#: src/ftp.c:676
-#, fuzzy, c-format
-msgid "couldn't connect to %s port %d: %s\n"
+#: src/ftp.c:588
+#, c-format
+msgid "couldn't connect to %s:%hu: %s\n"
 msgstr "�� ������� Ц�'�������� �� %s:%hu: %s\n"
 
-#: src/ftp.c:724
+#: src/ftp.c:638
 #, c-format
 msgid "Bind error (%s).\n"
 msgstr "������� ��'�������� (%s).\n"
 
-#: src/ftp.c:730
+#: src/ftp.c:645
 msgid "Invalid PORT.\n"
 msgstr "��צ���� PORT.\n"
 
-#: src/ftp.c:776
+#: src/ftp.c:698
+#, c-format
+msgid ""
+"\n"
+"REST failed; will not truncate `%s'.\n"
+msgstr ""
+"\n"
+"������� REST �� �������, �� ��Ҧ����� `%s'.\n"
+
+#: src/ftp.c:705
 msgid ""
 "\n"
 "REST failed, starting from scratch.\n"