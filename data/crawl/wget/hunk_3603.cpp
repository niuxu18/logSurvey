+# Ukrainian messages for GNU Wget.
+# Copyright (C) 2000 Free Software Foundation, Inc.
+# Olexander Kunytsa <xakep@snark.ukma.kiev.ua>, 2000
+#
+msgid ""
+msgstr ""
+"Project-Id-Version: wget 1.7\n"
+"POT-Creation-Date: 2001-06-03 15:27+0200\n"
+"PO-Revision-Date: 2001-07-24 14:43+0200\n"
+"Last-Translator: Olexander Kunytsa <xakep@snark.ukma.kiev.ua>\n"
+"Language-Team: Ukrainian <kick@renome.rovno.ua>\n"
+"MIME-Version: 1.0\n"
+"Content-Type: text/plain; charset=koi8-u\n"
+"Content-Transfer-Encoding: 8bit\n"
+
+#: src/cookies.c:588
+#, c-format
+msgid "Error in Set-Cookie, field `%s'"
+msgstr "������� � �����, ���� `%s'"
+
+#: src/cookies.c:612
+#, c-format
+msgid "Syntax error in Set-Cookie at character `%c'.\n"
+msgstr "����������� ������� � �����, �� �����̦ `%c'.\n"
+
+#: src/cookies.c:620
+msgid "Syntax error in Set-Cookie: premature end of string.\n"
+msgstr "����������� ������� � �����: ���ަ������� ˦���� �����.\n"
+
+#: src/cookies.c:1352
+#, c-format
+msgid "Cannot open cookies file `%s': %s\n"
+msgstr "�� ���� צ������ ���� � ������ `%s': %s\n"
+
+#: src/cookies.c:1364
+#, c-format
+msgid "Error writing to `%s': %s\n"
+msgstr "������� ������ � `%s': %s\n"
+
+#: src/cookies.c:1368
+#, c-format
+msgid "Error closing `%s': %s\n"
+msgstr "������� �������� `%s': %s\n"
+
+#: src/ftp-ls.c:787
+msgid "Unsupported listing type, trying Unix listing parser.\n"
+msgstr "��� ̦�Ԧ��� ��צ�����, ������ ��ڦ����� � ���̦ ̦������ Unix.\n"
+
+#: src/ftp-ls.c:832 src/ftp-ls.c:834
+#, c-format
+msgid "Index of /%s on %s:%d"
+msgstr "������ �������� /%s �� %s:%d"
+
+#: src/ftp-ls.c:856
+msgid "time unknown       "
+msgstr "��� ��צ�����      "
+
+#: src/ftp-ls.c:860
+msgid "File        "
+msgstr "����        "
+
+#: src/ftp-ls.c:863
+msgid "Directory   "
+msgstr "�������     "
+
+#: src/ftp-ls.c:866
+msgid "Link        "
+msgstr "���������   "
+
+#: src/ftp-ls.c:869
+msgid "Not sure    "
+msgstr "�������     "
+
+#: src/ftp-ls.c:887
+#, c-format
+msgid " (%s bytes)"
+msgstr " (%s ����)"
+
+#. Login to the server:
+#. First: Establish the control connection.
+#: src/ftp.c:150 src/http.c:624
+#, c-format
+msgid "Connecting to %s:%hu... "
+msgstr "������������ �'������� � %s:%hu... "
+
+#: src/ftp.c:172 src/ftp.c:539 src/http.c:641
+#, c-format
+msgid "Connection to %s:%hu refused.\n"
+msgstr "������ %s:%hu צ������ � �'�����Φ.\n"
+
+#. Second: Login with proper USER/PASS sequence.
+#: src/ftp.c:193 src/http.c:652
+msgid "connected!\n"
+msgstr "Ц�'������!\n"
+
+#: src/ftp.c:194
+#, c-format
+msgid "Logging in as %s ... "
+msgstr "�Ť���դ���� �� %s ... "
+
+#: src/ftp.c:203 src/ftp.c:256 src/ftp.c:288 src/ftp.c:336 src/ftp.c:429
+#: src/ftp.c:481 src/ftp.c:575 src/ftp.c:648 src/ftp.c:709 src/ftp.c:757
+msgid "Error in server response, closing control connection.\n"
+msgstr "������� � ����æ� �������, �������� ��������� �'�������.\n"
+
+#: src/ftp.c:211
+msgid "Error in server greeting.\n"
+msgstr "������� � ���צ���Φ �������.\n"
+
+#: src/ftp.c:219 src/ftp.c:345 src/ftp.c:438 src/ftp.c:490 src/ftp.c:585
+#: src/ftp.c:658 src/ftp.c:719 src/ftp.c:767
+msgid "Write failed, closing control connection.\n"
+msgstr "������� ������, �������� ��������� �'�������.\n"
+
+#: src/ftp.c:226
+msgid "The server refuses login.\n"
+msgstr "������ צ������ � �Ť����æ�.\n"
+
+#: src/ftp.c:233
+msgid "Login incorrect.\n"
+msgstr "��'� �� ������ ���������Φ.\n"
+
+#: src/ftp.c:240
+msgid "Logged in!\n"
+msgstr "�Ť����æ� �������!\n"
+
+#: src/ftp.c:265
+msgid "Server error, can't determine system type.\n"
+msgstr "������� �������, �� ���� ��������� ��� �������.\n"
+
+#: src/ftp.c:275 src/ftp.c:560 src/ftp.c:632 src/ftp.c:689
+msgid "done.    "
+msgstr "��������.    "
+
+#: src/ftp.c:325 src/ftp.c:459 src/ftp.c:740 src/ftp.c:788 src/url.c:1429
+msgid "done.\n"
+msgstr "��������.\n"
+
+#: src/ftp.c:353
+#, c-format
+msgid "Unknown type `%c', closing control connection.\n"
+msgstr "��צ����� ��� `%c', �������� ��������� �'�������.\n"
+
+#: src/ftp.c:366
+msgid "done.  "
+msgstr "��������.  "
+
+#: src/ftp.c:372
+msgid "==> CWD not needed.\n"
+msgstr "==> CWD �� ���Ҧ���.\n"
+
+#: src/ftp.c:445
+#, c-format
+msgid "No such directory `%s'.\n\n"
+msgstr "������� `%s' צ����Φ�.\n\n"
+
+#. do not CWD
+#: src/ftp.c:463
+msgid "==> CWD not required.\n"
+msgstr "==> CWD �� �����������.\n"
+
+#: src/ftp.c:497
+msgid "Cannot initiate PASV transfer.\n"
+msgstr "�� ���� �Φæ����� PASV-��������.\n"
+
+#: src/ftp.c:501
+msgid "Cannot parse PASV response.\n"
+msgstr "������� ������������� ���̦�� צ���צĦ PASV.\n"
+
+#: src/ftp.c:515
+#, c-format
+msgid "Will try connecting to %s:%hu.\n"
+msgstr "�����դ�� �� �'�������� � %s:%hu.\n"
+
+#: src/ftp.c:602
+#, c-format
+msgid "Bind error (%s).\n"
+msgstr "������� ��'�������� (%s).\n"
+
+#: src/ftp.c:618
+msgid "Invalid PORT.\n"
+msgstr "��צ���� PORT.\n"
+
+#: src/ftp.c:671
+#, c-format
+msgid "\nREST failed; will not truncate `%s'.\n"
+msgstr "\n������� REST �� �������, �� ��Ҧ����� `%s'.\n"
+
+#: src/ftp.c:678
+msgid "\nREST failed, starting from scratch.\n"
+msgstr "\n������� REST �� �������, ��������� � ����.\n"
+
+#: src/ftp.c:727
+#, c-format
+msgid "No such file `%s'.\n\n"
+msgstr "���� `%s' צ����Φ�.\n\n"
+
+#: src/ftp.c:775
+#, c-format
+msgid "No such file or directory `%s'.\n\n"
+msgstr "���� �� ������� `%s' צ����Φ�.\n\n"
+
+#: src/ftp.c:859 src/ftp.c:867
+#, c-format
+msgid "Length: %s"
+msgstr "�������: %s"
+
+#: src/ftp.c:861 src/ftp.c:869
+#, c-format
+msgid " [%s to go]"
+msgstr " [%s ����������]"
+
+#: src/ftp.c:871
+msgid " (unauthoritative)\n"
+msgstr " (�� �����)\n"
+
+#: src/ftp.c:898
+#, c-format
+msgid "%s: %s, closing control connection.\n"
+msgstr "%s: %s, �������� ��������� �'�������.\n"
+
+#: src/ftp.c:906
+#, c-format
+msgid "%s (%s) - Data connection: %s; "
+msgstr "%s (%s) - �'�������: %s; "
+
+#: src/ftp.c:923
+msgid "Control connection closed.\n"
+msgstr "������� �'������� �������.\n"
+
+#: src/ftp.c:941
+msgid "Data transfer aborted.\n"
+msgstr "�������� ����� ���������.\n"
+
+#: src/ftp.c:1005
+#, c-format
+msgid "File `%s' already there, not retrieving.\n"
+msgstr "���� `%s' ��� � ���, �� ��������դ��.\n"
+
+#: src/ftp.c:1075 src/http.c:1502
+#, c-format
+msgid "(try:%2d)"
+msgstr "(������:%2d)"
+
+#: src/ftp.c:1139 src/http.c:1753
+#, c-format
+msgid "%s (%s) - `%s' saved [%ld]\n\n"
+msgstr "%s (%s) - `%s' ��������� [%ld]\n\n"
+
+#: src/ftp.c:1181 src/main.c:810 src/recur.c:483 src/retr.c:566
+#, c-format
+msgid "Removing %s.\n"
+msgstr "��������� %s.\n"
+
+#: src/ftp.c:1221
+#, c-format
+msgid "Using `%s' as listing tmp file.\n"
+msgstr "������ ���� ��������� � ����������� ���̦ `%s'.\n"
+
+#: src/ftp.c:1233
+#, c-format
+msgid "Removed `%s'.\n"
+msgstr "`%s' ��������.\n"
+
+#: src/ftp.c:1269
+#, c-format
+msgid "Recursion depth %d exceeded max. depth %d.\n"
+msgstr "������� �����Ӧ� %d ���������� ����������� ������� %d.\n"
+
+#. Remote file is older, file sizes can be compared and
+#. are both equal.
+#: src/ftp.c:1330
+#, c-format
+msgid "Remote file no newer than local file `%s' -- not retrieving.\n"
+msgstr "��������� ���� `%s' ��צ��� -- �� ��������դ�� ����.\n"
+
+#. Remote file is newer or sizes cannot be matched
+#: src/ftp.c:1337
+#, c-format
+msgid "Remote file is newer than local file `%s' -- retrieving.\n\n"
+msgstr "���� `%s' �� �����Ҧ ��צ��� -- ��������դ��.\n\n"
+
+#. Sizes do not match
+#: src/ftp.c:1344
+#, c-format
+msgid "The sizes do not match (local %ld) -- retrieving.\n\n"
+msgstr "������� ���̦� �� �Ц�������� (��������: %ld) -- ��������դ��.\n\n"
+
+#: src/ftp.c:1361
+msgid "Invalid name of the symlink, skipping.\n"
+msgstr "��צ��� ��'� ����������� ���������, ����������.\n"
+
+#: src/ftp.c:1378
+#, c-format
+msgid "Already have correct symlink %s -> %s\n\n"
+msgstr "��������� ��������� %s -> %s ��� ���դ.\n\n"
+
+#: src/ftp.c:1386
+#, c-format
+msgid "Creating symlink %s -> %s\n"
+msgstr "��������� ��������� ��������� %s -> %s\n"
+
+#: src/ftp.c:1397
+#, c-format
+msgid "Symlinks not supported, skipping symlink `%s'.\n"
+msgstr "�������Φ ��������� �� Ц�����������, ����������� `%s'.\n"
+
+#: src/ftp.c:1409
+#, c-format
+msgid "Skipping directory `%s'.\n"
+msgstr "����������� ������� `%s'.\n"
+
+#: src/ftp.c:1418
+#, c-format
+msgid "%s: unknown/unsupported file type.\n"
+msgstr "%s: ��צ����� ��� ����� (��� �� Ц�����դ����).\n"
+
+#: src/ftp.c:1445
+#, c-format
+msgid "%s: corrupt time-stamp.\n"
+msgstr "%s: ���������� ͦ��� ����.\n"
+
+#: src/ftp.c:1466
+#, c-format
+msgid "Will not retrieve dirs since depth is %d (max %d).\n"
+msgstr "�� ��������դ�� �������� ��˦���� ������� ��� %d (�������� %d).\n"
+
+#: src/ftp.c:1512
+#, c-format
+msgid "Not descending to `%s' as it is excluded/not-included.\n"
+msgstr "����������� ������� `%s' ڦ ������ ����������.\n"
+
+#: src/ftp.c:1559
+#, c-format
+msgid "Rejecting `%s'.\n"
+msgstr "����������� `%s'.\n"
+
+#. No luck.
+#. #### This message SUCKS.  We should see what was the
+#. reason that nothing was retrieved.
+#: src/ftp.c:1606
+#, c-format
+msgid "No matches on pattern `%s'.\n"
+msgstr "����� �Ц������� � �������� `%s'.\n"
+
+#: src/ftp.c:1671
+#, c-format
+msgid "Wrote HTML-ized index to `%s' [%ld].\n"
+msgstr "������ � HTML-�����Ԧ �������� � ���� `%s' [%ld].\n"
+
+#: src/ftp.c:1676
+#, c-format
+msgid "Wrote HTML-ized index to `%s'.\n"
+msgstr "������ � HTML-�����Ԧ �������� � ���� `%s'.\n"
+
+#: src/getopt.c:454
+#, c-format
+msgid "%s: option `%s' is ambiguous\n"
+msgstr "%s: ������������� �������� `%s'\n"
+
+#: src/getopt.c:478
+#, c-format
+msgid "%s: option `--%s' doesn't allow an argument\n"
+msgstr "%s: �������� `--%s' �� ���� ���� ���������\n"
+
+#: src/getopt.c:483
+#, c-format
+msgid "%s: option `%c%s' doesn't allow an argument\n"
+msgstr "%s: �������� `%c%s' �� ���� ���� ���������\n"
+
+#: src/getopt.c:498
+#, c-format
+msgid "%s: option `%s' requires an argument\n"
+msgstr "%s: ��������� `%s' ����Ȧ���� ��������\n"
+
+#. --option
+#: src/getopt.c:528
+#, c-format
+msgid "%s: unrecognized option `--%s'\n"
+msgstr "%s: �����Ц������ �������� `--%s'\n"
+
+#. +option or -option
+#: src/getopt.c:532
+#, c-format
+msgid "%s: unrecognized option `%c%s'\n"
+msgstr "%s: �����Ц������ �������� `%c%s'\n"
+
+#. 1003.2 specifies the format of this message.
+#: src/getopt.c:563
+#, c-format
+msgid "%s: illegal option -- %c\n"
+msgstr "%s: ��צ���� �������� -- %c\n"
+
+#. 1003.2 specifies the format of this message.
+#: src/getopt.c:602
+#, c-format
+msgid "%s: option requires an argument -- %c\n"
+msgstr "%s: ��������� ����Ȧ���� �������� -- %c\n"
+
+#: src/host.c:374
+msgid "Host not found"
+msgstr "���� �� ��������"
+
+#: src/host.c:376
+msgid "Unknown error"
+msgstr "��צ���� �������"
+
+#. this is fatal
+#: src/http.c:555
+msgid "Failed to set up an SSL context\n"
+msgstr "�� ������� ���������� SSL\n"
+
+#: src/http.c:561
+#, c-format
+msgid "Failed to load certificates from %s\n"
+msgstr "�� ������� ����������� �����Ʀ��� � %s\n"
+
+#: src/http.c:565 src/http.c:573
+msgid "Trying without the specified certificate\n"
+msgstr "����դ�� ��� ��������� �����Ʀ����\n"
+
+#: src/http.c:569
+#, c-format
+msgid "Failed to get certificate key from %s\n"
+msgstr "��������� �������� ����-�����Ʀ��� � %s\n"
+
+#: src/http.c:663 src/http.c:1593
+msgid "Unable to establish SSL connection.\n"
+msgstr "�� ���� ���������� SSL-�'�������.\n"
+
+#: src/http.c:671
+#, c-format
+msgid "Reusing connection to %s:%hu.\n"
+msgstr "�������� ������������ ��'���� � %s:%hu.\n"
+
+#: src/http.c:861
+#, c-format
+msgid "Failed writing HTTP request: %s.\n"
+msgstr "������� ������ HTTP-������: %s.\n"
+
+#: src/http.c:866
+#, c-format
+msgid "%s request sent, awaiting response... "
+msgstr "%s-����� ��Ħ�����, �ަ�դ� צ���צĦ... "
+
+#: src/http.c:910
+msgid "End of file while parsing headers.\n"
+msgstr "����� ����� Ц� ��� ������������� ������� �������˦�.\n"
+
+#: src/http.c:920
+#, c-format
+msgid "Read error (%s) in headers.\n"
+msgstr "������� ������� � ���������� (%s).\n"
+
+#: src/http.c:959
+msgid "No data received"
+msgstr "�� �������� �����"
+
+#: src/http.c:961
+msgid "Malformed status line"
+msgstr "������������� ��������� �����"
+
+#: src/http.c:966
+msgid "(no description)"
+msgstr "(��� �����)"
+
+#: src/http.c:1089
+msgid "Authorization failed.\n"
+msgstr "��������æ� ���������.\n"
+
+#: src/http.c:1096
+msgid "Unknown authentication scheme.\n"
+msgstr "��צ���� ����� �������Ʀ��æ�.\n"
+
+#: src/http.c:1136
+#, c-format
+msgid "Location: %s%s\n"
+msgstr "�����a: %s%s\n"
+
+#: src/http.c:1137 src/http.c:1269
+msgid "unspecified"
+msgstr "�� �������"
+
+#: src/http.c:1138
+msgid " [following]"
+msgstr " [����Ȧ�]"
+
+#: src/http.c:1200
+msgid "\n    The file is already fully retrieved; nothing to do.\n\n"
+msgstr "\n    ���� ��� ���Φ��� �����������; ���� ���� ������.\n\n"
+
+#: src/http.c:1216
+#, c-format
+msgid ""
+"\n"
+"Continued download failed on this file, which conflicts with `-c'.\n"
+"Refusing to truncate existing file `%s'.\n"
+"\n"
+msgstr ""
+"\n"
+"������� צ��������� ������������ �����, ����̦�� � ���������� `-c'.\n"
+"������� צ� ��Ҧ����� ��������� ����� `%s'.\n"
+"\n"
+
+#. No need to print this output if the body won't be
+#. downloaded at all, or if the original server response is
+#. printed.
+#: src/http.c:1259
+msgid "Length: "
+msgstr "�������: "
+
+#: src/http.c:1264
+#, c-format
+msgid " (%s to go)"
+msgstr " (%s ����������)"
+
+#: src/http.c:1269
+msgid "ignored"
+msgstr "�����դ����"
+
+#: src/http.c:1399
+msgid "Warning: wildcards not supported in HTTP.\n"
+msgstr "�����: � HTTP �� Ц����������� �������.\n"
+
+#. If opt.noclobber is turned on and file already exists, do not
+#. retrieve the file
+#: src/http.c:1417
+#, c-format
+msgid "File `%s' already there, will not retrieve.\n"
+msgstr "���� `%s' ��� � ���, �� ��������դ�� ����.\n"
+
+#: src/http.c:1585
+#, c-format
+msgid "Cannot write to `%s' (%s).\n"
+msgstr "������� ������ � `%s' (%s).\n"
+
+#: src/http.c:1602
+#, c-format
+msgid "ERROR: Redirection (%d) without location.\n"
+msgstr "�������: ��������������� (%d) ��� ���������� ������.\n"
+
+#: src/http.c:1630
+#, c-format
+msgid "%s ERROR %d: %s.\n"
+msgstr "%s ������� %d: %s.\n"
+
+#: src/http.c:1642
+msgid "Last-modified header missing -- time-stamps turned off.\n"
+msgstr "������Φ� ��������� last-modified -- ͦ��� ���� ��������.\n"
+
+#: src/http.c:1650
+msgid "Last-modified header invalid -- time-stamp ignored.\n"
+msgstr "����������� ��������� last-modified -- �����դ�� ͦ��� ����.\n"
+
+#: src/http.c:1673
+#, c-format
+msgid "Server file no newer than local file `%s' -- not retrieving.\n\n"
+msgstr "��������� ���� `%s' ��צ��� -- �� ��������դ�� ����.\n\n"
+
+#: src/http.c:1680
+#, c-format
+msgid "The sizes do not match (local %ld) -- retrieving.\n"
+msgstr "������� ���̦� �� �Ц�������� (��������: %ld) -- ��������դ��.\n"
+
+#: src/http.c:1684
+msgid "Remote file is newer, retrieving.\n"
+msgstr "���� ��צ���, Φ� ���������, ��������դ��.\n"
+
+#: src/http.c:1728
+#, c-format
+msgid "%s (%s) - `%s' saved [%ld/%ld]\n\n"
+msgstr "%s (%s) - `%s' ��������� [%ld/%ld]\n\n"
+
+#: src/http.c:1774
+#, c-format
+msgid "%s (%s) - Connection closed at byte %ld. "
+msgstr "%s (%s) - �'������� ������� � ����æ� %ld. "
+
+#: src/http.c:1782
+#, c-format
+msgid "%s (%s) - `%s' saved [%ld/%ld])\n\n"
+msgstr "%s (%s) - `%s' ��������� [%ld/%ld]\n\n"
+
+#: src/http.c:1801
+#, c-format
+msgid "%s (%s) - Connection closed at byte %ld/%ld. "
+msgstr "%s (%s) - �'������� ������� � ����æ� %ld/%ld. "
+
+#: src/http.c:1812
+#, c-format
+msgid "%s (%s) - Read error at byte %ld (%s)."
+msgstr "%s (%s) - ������� ������� � ����æ� %ld (%s)."
+
+#: src/http.c:1820
+#, c-format
+msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
+msgstr "%s (%s) - ������� ������� � ����æ� %ld/%ld (%s). "
+
+#: src/init.c:349 src/netrc.c:267
+#, c-format
+msgid "%s: Cannot read %s (%s).\n"
+msgstr "%s: ��������� ��������� %s (%s).\n"
+
+#: src/init.c:367 src/init.c:373
+#, c-format
+msgid "%s: Error in %s at line %d.\n"
+msgstr "%s: ������� � %s (����� %d).\n"
+
+#: src/init.c:405
+#, c-format
+msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
+msgstr "%s: �����: �� ��������� wgetrc ��� � wgetrc ����������� �������� �� `%s'.\n"
+
+#: src/init.c:497
+#, c-format
+msgid "%s: BUG: unknown command `%s', value `%s'.\n"
+msgstr "%s: �������: ��צ���� ������� `%s', �������� `%s'.\n"
+
+#: src/init.c:529
+#, c-format
+msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
+msgstr "%s: %s: �� ���� ����������� `%s' �� ip-������.\n"
+
+#: src/init.c:559
+#, c-format
+msgid "%s: %s: Please specify on or off.\n"
+msgstr "%s: %s: ����-����� ���֦�� on �� off.\n"
+
+#: src/init.c:603
+#, c-format
+msgid "%s: %s: Please specify always, on, off, or never.\n"
+msgstr "%s: %s: ����-����� ���֦�� always, on, off �� never.\n"
+
+#: src/init.c:622 src/init.c:919 src/init.c:941 src/init.c:1005
+#, c-format
+msgid "%s: %s: Invalid specification `%s'.\n"
+msgstr "%s: %s: ����������� �������� `%s'.\n"
+
+#: src/init.c:775 src/init.c:797 src/init.c:819 src/init.c:845
+#, c-format
+msgid "%s: Invalid specification `%s'\n"
+msgstr "%s: ����������� �������� `%s'.\n"
+
+#: src/main.c:120
+#, c-format
+msgid "Usage: %s [OPTION]... [URL]...\n"
+msgstr "������������: %s [��������]... [URL]...\n"
+
+#: src/main.c:128
+#, c-format
+msgid "GNU Wget %s, a non-interactive network retriever.\n"
+msgstr "GNU Wget %s, ������������ ������������ ���̦� � ����֦.\n"
+
+#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
+#. don't bitch.  Also, it makes translation much easier.
+#: src/main.c:133
+msgid "\nMandatory arguments to long options are mandatory for short options too.\n\n"
+msgstr "\n'���Ǧ' ��������� ���������� Ԧ � ���������, �� � �����˦.\n\n"
+
+#: src/main.c:137
+msgid ""
+"Startup:\n"
+"  -V,  --version           display the version of Wget and exit.\n"
+"  -h,  --help              print this help.\n"
+"  -b,  --background        go to background after startup.\n"
+"  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+"\n"
+msgstr ""
+"������:\n"
+"  -V,  --version           �������� ���Ӧ� Wget.\n"
+"  -h,  --help              ������� �� Ц������.\n"
+"  -b,  --background        ������� � ������� ����� Ц��� �������.\n"
+"  -e,  --execute=�������   �������� ������� ���� `.wgetrc'.\n"
+"\n"
+
+#: src/main.c:144
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
+"       --sslcertfile=FILE     optional client certificate.\n"
+"       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
+"\n"
+msgstr ""
+"�������������� �� �Ȧ���� ����:\n"
+"  -o,  --output-file=����     ���������� ��צ�������� � ����.\n"
+"  -a,  --append-output=����   �������� ��צ�������� �� �����.\n"
+"  -d,  --debug                ��������� צ������������Φ ��צ��������.\n"
+"  -q,  --quiet                ��������� ��� ��������� ��צ�������.\n"
+"  -v,  --verbose              �������̦��� ��������� (�� ����������).\n"
+"  -nv, --non-verbose          �������� �������̦�Φ���.\n"
+"  -i,  --input-file=����      ������ URL � �����.\n"
+"  -F,  --force-html           ���������� �Ȧ���� ���� �� HTML.\n"
+"  -B,  --base=URL             �������� URL �� צ������� �������� � -F -i ���̦.\n"
+"       --sslcertfile=FILE     ��æ������� �����Ʀ��� �̦����.\n"
+"       --sslcertkey=KEYFILE   ��æ������� ���� ��� ����� �����Ʀ����.\n"
+"\n"
+
+#: src/main.c:158
+msgid ""
+"Download:\n"
+"       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local host.\n"
+"  -t,  --tries=NUMBER           set number of retries to NUMBER (0 unlimits).\n"
+"  -O   --output-document=FILE   write documents to FILE.\n"
+"  -nc, --no-clobber             don't clobber existing files or use .# suffixes.\n"
+"  -c,  --continue               resume getting a partially-downloaded file.\n"
+"       --dot-style=STYLE        set retrieval display style.\n"
+"  -N,  --timestamping           don't re-retrieve files unless newer than local.\n"
+"  -S,  --server-response        print server response.\n"
+"       --spider                 don't download anything.\n"
+"  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
+"  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
+"       --waitretry=SECONDS      wait 1...SECONDS between retries of a retrieval.\n"
+"  -Y,  --proxy=on/off           turn proxy on or off.\n"
+"  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
+"\n"
+msgstr ""
+"����������:\n"
+"       --bind-address=������    ����'���� �� �������ϧ ������.\n"
+"  -t,  --tries=�����            �������� ˦��˦��� ����� (0 - ���̦�).\n"
+"  -O   --output-document=����   ���������� ��������� � ����.\n"
+"  -nc, --no-clobber             �� �������������� �����ަ ����� ��� + ��Ʀ�� .#\n"
+"  -c,  --continue               ������������� �������� ����.\n"
+"       --dot-style=�����        ���������� ����� צ���������� ��������.\n"
+"  -N,  --timestamping           �� ������������� �����, �˦ ����ۦ, Φ� ������Φ.\n"
+"  -S,  --server-response        ��������� צ���צ�� �������.\n"
+"       --spider                 Φ���� �� �������������.\n"
+"  -T,  --timeout=�������        �������� ��� �ަ������� צ���צĦ.\n"
+"  -w,  --wait=�������           ���������� �������� ͦ� ��������������.\n"
+"       --waitretry=�������      �������� 1...������ ͦ� �������� ���������.\n"
+"  -Y,  --proxy=on/off           ��������� ������������ ����Ӧ.\n"
+"  -Q,  --quota=�����            �������� ��������� ��'�� ���̦�.\n"
+"\n"
+
+#: src/main.c:175
+msgid ""
+"Directories:\n"
+"  -nd  --no-directories            don't create directories.\n"
+"  -x,  --force-directories         force creation of directories.\n"
+"  -nH, --no-host-directories       don't create host directories.\n"
+"  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
+"       --cut-dirs=NUMBER           ignore NUMBER remote directory components.\n"
+"\n"
+msgstr ""
+"��������:\n"
+"  -nd  --no-directories            �� ���������� ��������.\n"
+"  -x,  --force-directories         ��������� ��������� ������Ǧ�.\n"
+"  -nH, --no-host-directories       �� ���������� �������� � ������� ���Ԧ�.\n"
+"  -P,  --directory-prefix=������  ���Ҧ���� ����� � ������/...\n"
+"       --cut-dirs=�����            ���������� ����� ����� ��������Ԧ� ��������.\n"
+"\n"
+
+#: src/main.c:183
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
+"\n"
+msgstr ""
+"��������� HTTP:\n"
+"       --http-user=��'�      ��������� ��'� http-�����������.\n"
+"       --http-passwd=������  ��������� ������ ��� http-����Ԧ�.\n"
+"  -C,  --cache=on/off        ���������/Φ ��Φ, ������Φ �� �����Ҧ.\n"
+"  -E,  --html-extension      ���������� �Ӧ ����� text/html � ����������� .html\n"
+"       --ignore-length       ���������� ���� ��������� `Content-Length'.\n"
+"       --header=�����        ��������� ����� � HTTP-���������.\n"
+"       --proxy-user=��'�     ��������� ��'� ����������� ��� ����Ӧ-�������.\n"
+"       --proxy-passwd=������ ��������� ������ ��� ����Ӧ-�������.\n"
+"       --referer=URL         �������� `Referer: URL' ��������� � HTTP-�����.\n"
+"  -s,  --save-headers        ���������� HTTP-��������� � ����.\n"
+"  -U,  --user-agent=�����    ������ ��'� ������ ��ͦ��� Wget/�����.\n"
+"       --no-http-keep-alive  ���������� HTTP keep-alive (���Ӧ�Φ �'�������).\n"
+"       --cookies=off         �� ��������������� ����.\n"
+"       --load-cookies=FILE   ����� ��Ӧ�� ����� ���� � �����.\n"
+"       --save-cookies=FILE   � ˦�æ ��Ӧ� �������� ���� � ����.\n"
+"\n"
+
+#: src/main.c:201
+msgid ""
+"FTP options:\n"
+"  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
+"  -g,  --glob=on/off           turn file name globbing on or off.\n"
+"       --passive-ftp           use the \"passive\" transfer mode.\n"
+"       --retr-symlinks         when recursing, get linked-to files (not dirs).\n"
+"\n"
+msgstr ""
+"��������� FTP:\n"
+"  -nr, --dont-remove-listing �� �������� ����� `.listing'.\n"
+"  -g,  --glob=on/off         ��������� ������ � ��������� ���� ���̦�.\n"
+"       --passive-ftp         ��������������� \"��������\" ��� ������ަ.\n"
+"       --retr-symlinks       ������������� � FTP �����̦�Φ ���������.\n"
+"\n"
+
+#: src/main.c:208
+msgid ""
+"Recursive retrieval:\n"
+"  -r,  --recursive          recursive web-suck -- use with care!\n"
+"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for infinite).\n"
+"       --delete-after       delete files locally after downloading them.\n"
+"  -k,  --convert-links      convert non-relative links to relative.\n"
+"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
+"  -m,  --mirror             shortcut option equivalent to -r -N -l inf -nr.\n"
+"  -p,  --page-requisites    get all images, etc. needed to display HTML page.\n"
+"\n"
+msgstr ""
+"���������� ������������:\n"
+"  -r,  --recursive             ����������� ����� -- ������ ������Φ!\n"
+"  -l,  --level=�����           ����. ������� �����Ӧ� (0 - ��� ��������).\n"
+"       --delete-after          �������� �������� ������Φ �����.\n"
+"  -k,  --convert-links         ������������� ��������� צ����Φ.\n"
+"  -K,  --backup-converted      ���Ҧ���� ���Ҧ ����� ����� ��������æ��.\n"
+"  -m,  --mirror                �צ������ ������, �����Φ ��� �������������.\n"
+"  -p,  --page-requisites       ���������� �Ӧ ����� ��� ������� ���������� HTML\n"
+"\n"
+
+#: src/main.c:218
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
+"  -nh, --no-host-lookup             don't DNS-lookup hosts.\n"
+"  -np, --no-parent                  don't ascend to the parent directory.\n"
+"\n"
+msgstr ""
+"���������� ���������/���������� ���̦�:\n"
+"  -A,  --accept=������               ������ ��������� �� ���������.\n"
+"  -R,  --reject=������               ������ ��������� �� ����������.\n"
+"  -D,  --domains=������              ������ ���������� ����Φ�.\n"
+"       --exclude-domains=������      ����� ���� ������ ����Φ�, �˦ ���������.\n"
+"  -L,  --relative                    ���������� ���� �� צ�������� �����������.\n"
+"       --follow-ftp                  ��� �� FTP-����������� � HTML-����������.\n"
+"       --follow-tags=������          HTML ��Ǧ� ����� ����, �� ����� ����� ���.\n"
+"  -G,  --ignore-tags=������          HTML ��Ǧ� ����� ����, �˦ ����� �����.\n"
+"  -H,  --span-hosts                  ���������� �� ��ۦ ����� Ц� ��� �����Ӧ�.\n"
+"  -L,  --relative                    ��� ��� �� צ�������� �����������.\n"
+"  -I,  --include-directories=������  ������ ���������� ������Ǧ�.\n"
+"  -X,  --exclude-directories=������  ������ ������Ǧ� �� ����������.\n"
+"  -nh, --no-host-lookup              �� ��������� DNS-����� ���Ԧ�.\n"
+"  -np, --no-parent                   �� Ц�Φ������ � ����˦����� �������.\n"
+"\n"
+
+#: src/main.c:234
+msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
+msgstr "��צ�������� ��� ������� �� �������æ� ���������� �� <bug-wget@gnu.org>.\n"
+
+#: src/main.c:420
+#, c-format
+msgid "%s: debug support not compiled in.\n"
+msgstr "%s: Ц������� צ����������� �� ����Ц�������.\n"
+
+#: src/main.c:472
+msgid ""
+"Copyright (C) 1995, 1996, 1997, 1998, 2000, 2001 Free Software Foundation, Inc.\n"
+"This program is distributed in the hope that it will be useful,\n"
+"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
+"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
+"GNU General Public License for more details.\n"
+msgstr ""
+"Copyright (C) 1995-2001 �����æ� �������� ����������� ������������.\n"
+"�� �������� ����������� � ��Ħ��, �� ���� ���� ��������,\n"
+"��� ��� ����-���� ��������; ��צ�� ��� �����Ԧ� ����������\n"
+"�� ����������� ��� ����� ��������� ����. ��צ����\n"
+"GNU General Public License ��� ��������� ������Φ�ϧ �������æ�.\n"
+
+#: src/main.c:478
+msgid "\nOriginally written by Hrvoje Niksic <hniksic@arsdigita.com>.\n"
+msgstr "\n�����: Hrvoje Niksic <hniksic@arsdigita.com>.\n"
+
+#: src/main.c:569
+#, c-format
+msgid "%s: %s: invalid command\n"
+msgstr "%s: %s: ��צ��� �������\n"
+
+#: src/main.c:625
+#, c-format
+msgid "%s: illegal option -- `-n%c'\n"
+msgstr "%s: ��צ���� �������� -- `-n%c'\n"
+
+#. #### Something nicer should be printed here -- similar to the
+#. pre-1.5 `--help' page.
+#: src/main.c:628 src/main.c:670 src/main.c:728
+#, c-format
+msgid "Try `%s --help' for more options.\n"
+msgstr "��������� `%s --help' ��� ��������� �������ϧ �������æ�.\n"
+
+#: src/main.c:708
+msgid "Can't be verbose and quiet at the same time.\n"
+msgstr "������ verbose �� quiet �� ����� ��������������� ���������.\n"
+
+#: src/main.c:714
+msgid "Can't timestamp and not clobber old files at the same time.\n"
+msgstr "������ Ц������� ͦ��� ���� �� ���������� ������ ���̦� ����ͦ�Φ.\n"
+
+#. No URL specified.
+#: src/main.c:723
+#, c-format
+msgid "%s: missing URL\n"
+msgstr "%s: �� ������� URL\n"
+
+#: src/main.c:825
+#, c-format
+msgid "No URLs found in %s.\n"
+msgstr "� %s �� �������� URL'��.\n"
+
+#: src/main.c:834
+#, c-format
+msgid ""
+"\n"
+"FINISHED --%s--\n"
+"Downloaded: %s bytes in %d files\n"
+msgstr ""
+"\n"
+"�������� --%s--\n"
+"�������: %s ���Ԧ� � %d ������(�)\n"
+
+#: src/main.c:842
+#, c-format
+msgid "Download quota (%s bytes) EXCEEDED!\n"
+msgstr "��������� ��������� �� ������������ (%s ���Ԧ�)!\n"
+
+#. Please note that the double `%' in `%%s' is intentional, because
+#. redirect_output passes tmp through printf.
+#: src/main.c:876
+#, c-format
+msgid "%s received, redirecting output to `%%s'.\n"
+msgstr "�������� %s, ��������������� ��������� � `%%s'.\n"
+
+#: src/mswindows.c:89
+#, c-format
+msgid ""
+"\n"
+"CTRL+Break received, redirecting output to `%s'.\n"
+"Execution continued in background.\n"
+"You may stop Wget by pressing CTRL+ALT+DELETE.\n"
+msgstr ""
+"\n"
+"�������� CTRL+Break, ��������� �����������Ѥ�� � `%s'.\n"
+"��������� ���� ���������� �� �̦.\n"
+"���������� CTRL+ALT+DELETE �� ������� �������� Wget.\n"
+
+#. parent, no error
+#: src/mswindows.c:106 src/utils.c:458
+msgid "Continuing in background.\n"
+msgstr "�������դ�� � �������� ����ͦ.\n"
+
+#: src/mswindows.c:108 src/utils.c:460
+#, c-format
+msgid "Output will be written to `%s'.\n"
+msgstr "��������� ���� �������� �� `%s'.\n"
+
+#: src/mswindows.c:188
+#, c-format
+msgid "Starting WinHelp %s\n"
+msgstr "���������� WinHelp %s\n"
+
+#: src/mswindows.c:215 src/mswindows.c:222
+#, c-format
+msgid "%s: Couldn't find usable socket driver.\n"
+msgstr "%s: �� ���� ������ ���Ҧ���� �������.\n"
+
+#: src/netrc.c:367
+#, c-format
+msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
+msgstr "%s: %s:%d: ������������: ������� \"%s\" ����� ������ ������\n"
+
+#: src/netrc.c:398
+#, c-format
+msgid "%s: %s:%d: unknown token \"%s\"\n"
+msgstr "%s: %s:%d: ��צ���� ������� \"%s\"\n"
+
+#: src/netrc.c:462
+#, c-format
+msgid "Usage: %s NETRC [HOSTNAME]\n"
+msgstr "������������: %s NETRC [��'� ������]\n"
+
+#: src/netrc.c:472
+#, c-format
+msgid "%s: cannot stat %s: %s\n"
+msgstr "%s: �� ���� �������� stat %s: %s\n"
+
+#: src/recur.c:484
+#, c-format
+msgid "Removing %s since it should be rejected.\n"
+msgstr "�����Ѥ�� %s, ��˦���� ���� ����� ����������.\n"
+
+#: src/recur.c:679
+msgid "Loading robots.txt; please ignore errors.\n"
+msgstr "��������դ�� ���� robots.txt; �� �������� �� �������.\n"
+
+#: src/retr.c:227
+#, c-format
+msgid "\n          [ skipping %dK ]"
+msgstr "\n          [ ������� %dK ]"
+
+#: src/retr.c:373
+msgid "Could not find proxy host.\n"
+msgstr "�� �������� ����Ӧ-������.\n"
+
+#: src/retr.c:387
+#, c-format
+msgid "Proxy %s: Must be HTTP.\n"
+msgstr "����Ӧ-������ %s ��� ���� HTTP.\n"
+
+#: src/retr.c:481
+#, c-format
+msgid "%s: Redirection cycle detected.\n"
+msgstr "%s: ���������� ���������������.\n"
+
+#: src/retr.c:587
+msgid "Giving up.\n\n"
+msgstr "���Ҧ��� ����������.\n\n"
+
+#: src/retr.c:587
+msgid "Retrying.\n\n"
+msgstr "����������� �����.\n\n"
+
+#: src/url.c:1329
+#, c-format
+msgid "Converting %s... "
+msgstr "������������ %s... "
+
+#: src/url.c:1342
+msgid "nothing to do.\n"
+msgstr "���� ���� ������.\n"
+
+#: src/url.c:1350 src/url.c:1374
+#, c-format
+msgid "Cannot convert links in %s: %s\n"
+msgstr "�� ���� ����������� ��������� � %s: %s\n"
+
+#: src/url.c:1365
+#, c-format
+msgid "Unable to delete `%s': %s\n"
+msgstr "�� ���� �������� `%s': %s\n"
+
+#: src/url.c:1555
+#, c-format
+msgid "Cannot back up %s as %s: %s\n"
+msgstr "�� ���� �������� ��Ц� %s Ц� ������ %s: %s\n"
+
+#: src/utils.c:94
+#, c-format
+msgid "%s: %s: Not enough memory.\n"
+msgstr "%s: %s: ����������� ���'�Ԧ.\n"
+
+#: src/utils.c:417
+msgid "Unknown/unsupported protocol"
+msgstr "�������� ��צ����� �� �� Ц�����դ����"
+
+#: src/utils.c:420
+msgid "Invalid port specification"
+msgstr "������������ ����� �����"
+
+#: src/utils.c:423
+msgid "Invalid host name"
+msgstr "����������� ��'� ������"
+
+#: src/utils.c:620
+#, c-format
+msgid "Failed to unlink symlink `%s': %s\n"
+msgstr "�� ������� �������� ��������� ��������� `%s': %s\n"
