msgid "%s: option requires an argument -- %c\n"
msgstr "%s: �ﶵ�ݭn�@�Ӥ޼� -- %c\n"

#: src/host.c:394
#, c-format
msgid "%s: Cannot determine user-id.\n"
msgstr "%s: �L�k�����ϥΪ��ѧO�X.\n"

#: src/host.c:406
#, c-format
msgid "%s: Warning: uname failed: %s\n"
msgstr "%s: ĵ�i: uname ����: %s\n"

#: src/host.c:418
#, c-format
msgid "%s: Warning: gethostname failed\n"
msgstr "%s: ĵ�i: gethostname ����\n"

#: src/host.c:446
#, c-format
msgid "%s: Warning: cannot determine local IP address.\n"
msgstr "%s: ĵ�i: �L�k�������a IP ��}.\n"

#: src/host.c:460
#, c-format
msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
msgstr "%s: ĵ�i: �L�k�Ϭd���a IP ��}.\n"

#. This gets ticked pretty often.  Karl Berry reports
#. that there can be valid reasons for the local host
#. name not to be an FQDN, so I've decided to remove the
#. annoying warning.
#: src/host.c:473
#, c-format
msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
msgstr "%s: ĵ�i: ���a��}���Ϭd���ŦX FQDN �W��!\n"

#: src/host.c:501
msgid "Host not found"
msgstr "�䤣��D��"

#: src/host.c:503
msgid "Unknown error"
msgstr "���������~"

#: src/http.c:621 src/http.c:1433
msgid "Unable to establish SSL connection.\n"
msgstr ""

#: src/http.c:629
#, fuzzy, c-format
msgid "Reusing connection to %s:%hu.\n"
msgstr "�N�|�~����ջP %s �s�u: %hu.\n"

#: src/http.c:805
#, fuzzy, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "���ѩ�g�J HTTP �ШD��.\n"

#: src/http.c:810
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "�w�g�e�X %s �ШD�ʥ]�A���b���ݦ^����... "

#: src/http.c:854
msgid "End of file while parsing headers.\n"
msgstr "���b���R���Y���e�ɡA�ɮפw�g����.\n"

#: src/http.c:865
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Ū�������Y�����~ (%s).\n"

#: src/http.c:905
msgid "No data received"
msgstr "�S�������������"

#: src/http.c:907
msgid "Malformed status line"
msgstr "��Ϊ����A��"

#: src/http.c:912
msgid "(no description)"
msgstr "(�S����������)"

#: src/http.c:1030
msgid "Authorization failed.\n"
msgstr "�{�ҥ���.\n"

#: src/http.c:1037
msgid "Unknown authentication scheme.\n"
msgstr "�������{�Ҥ��.\n"

#: src/http.c:1127
#, c-format
msgid "Location: %s%s\n"
msgstr "��m: %s%s\n"

#: src/http.c:1128 src/http.c:1153
msgid "unspecified"
msgstr "�S�����w"

#: src/http.c:1129
msgid " [following]"
msgstr " [�U�C�U��]"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:1143
msgid "Length: "
msgstr "����: "

#: src/http.c:1148
#, c-format
msgid " (%s to go)"
msgstr " (%s �n�}�l)"

#: src/http.c:1153
msgid "ignored"
msgstr "����"

#: src/http.c:1254
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "ĵ�i: �b HTTP �̭��ä䴩�U�Φr���Ÿ� (wildcards).\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:1275
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "�ɮ� `%s' �w�g�s�b�A�N�����^.\n"

#: src/http.c:1425
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "�L�k�g�� `%s' (%s).\n"

#: src/http.c:1443
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "���~: �n�D���s�w�V (%d) �o�S����m.\n"

#: src/http.c:1468
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ���~ %d: %s.\n"

#: src/http.c:1481
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "�� \"Last-modified\" �����Y -- �ɶ��W�O�Q����.\n"

#: src/http.c:1489
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "�L�Ī� \"Last-modified\" ���Y -- �ɶ��W�O�Q����.\n"

#: src/http.c:1524
msgid "Remote file is newer, retrieving.\n"
msgstr "���ݪ��ɮפ���s�A���^��.\n"

#: src/http.c:1559
#, c-format
msgid ""
"%s (%s) - `%s' saved [%ld/%ld]\n"
"\n"
msgstr ""
"%s (%s) - `%s' �Q�s�� [%ld/%ld]\n"
"\n"

#: src/http.c:1607
#, c-format
msgid "%s (%s) - Connection closed at byte %ld. "
msgstr "%s (%s) - �s�u�Q�����b %ld �줸��. "

#: src/http.c:1615
#, c-format
msgid ""
"%s (%s) - `%s' saved [%ld/%ld])\n"
"\n"
msgstr ""
"%s (%s) - `%s' �Q�s�� [%ld/%ld])\n"
"\n"

#: src/http.c:1635
#, c-format
msgid "%s (%s) - Connection closed at byte %ld/%ld. "
msgstr "%s (%s) - �s�u������ %ld/%ld byte."

#: src/http.c:1646
#, c-format
msgid "%s (%s) - Read error at byte %ld (%s)."
msgstr "%s (%s) - �� %ld (%s) �줸�ճB�o��Ū�����~."

#: src/http.c:1654
#, c-format
msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
msgstr "%s (%s) - �� %ld/%ld (%s) �줸�ճB�o��Ū�����~."

#: src/init.c:332 src/netrc.c:261
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: �L�kŪ�� %s (%s).\n"

#: src/init.c:350 src/init.c:356
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: ���ѩ� %s �b�� %d ��.\n"

#: src/init.c:387
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
msgstr "%s: ĵ�i: �t�λP�ϥΪ̪� wgetrc �����V `%s'.\n"

#: src/init.c:479
#, c-format
msgid "%s: BUG: unknown command `%s', value `%s'.\n"
msgstr "%s: BUG: �������R�O `%s', �ƭ� `%s'.\n"

#: src/init.c:501
#, fuzzy, c-format
msgid "%s: Out of memory.\n"
msgstr "%s: %s: �S���������O����.\n"

#: src/init.c:507
#, fuzzy, c-format
msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
msgstr "%s: ĵ�i: �L�k�Ϭd���a IP ��}.\n"

#: src/init.c:535
#, c-format
msgid "%s: %s: Please specify on or off.\n"
msgstr "%s: %s: �ЯS�O���w�}�ҩ�����.\n"

#: src/init.c:579
#, fuzzy, c-format
msgid "%s: %s: Please specify always, on, off, or never.\n"
msgstr "%s: %s: �ЯS�O���w�}�ҩ�����.\n"

#: src/init.c:598 src/init.c:855 src/init.c:877 src/init.c:941
#, c-format
msgid "%s: %s: Invalid specification `%s'.\n"
msgstr "%s: %s: �L�Ī����w���� `%s'.\n"

#: src/init.c:711 src/init.c:733 src/init.c:755 src/init.c:781
#, c-format
msgid "%s: Invalid specification `%s'\n"
msgstr "%s: �L�Ī����w���� `%s'\n"

#: src/main.c:119
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "�Ϊk: %s [�ﶵ]... [URL]...\n"

#: src/main.c:127
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNY Wget %s, �@�ӫD��ͦ����������ɤu��.\n"

#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
#. don't bitch.  Also, it makes translation much easier.
#: src/main.c:132
msgid ""
"\n"
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"\n"
"�R�O���޼ƨϥΪ����ػP�u���جۦP.\n"

#: src/main.c:135
#, fuzzy
msgid ""
"Startup:\n"
"  -V,  --version           display the version of Wget and exit.\n"
"  -h,  --help              print this help.\n"
"  -b,  --background        go to background after startup.\n"
"  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
"\n"
msgstr ""
"�Ұ�:\n"