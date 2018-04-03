# Japanese messages for GNU Wget.
# Copyright (C) 1998, 2000 Free Software Foundation, Inc.
# Hiroshi Takekawa <takekawa@sr3.t.u-tokyo.ac.jp>, 2000
# Originally translated by Penguin Kun <penguin-kun@geocities.com>, 1998
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.5.3\n"
"POT-Creation-Date: 1998-09-21 19:08+0200\n"
"PO-Revision-Date: 2000-02-22 20:14+09:00\n"
"Last-Translator: Hiroshi Takekawa <takekawa@sr3.t.u-tokyo.ac.jp>\n"
"Language-Team: Japanese <ja@li.org>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=EUC-JP\n"
"Content-Transfer-Encoding: 8bit\n"

#. Login to the server:
#. First: Establish the control connection.
#: src/ftp.c:147 src/http.c:346
#, c-format
msgid "Connecting to %s:%hu... "
msgstr "%s:%hu ����³���Ƥ��ޤ�... "

#: src/ftp.c:169 src/ftp.c:411 src/http.c:363
#, c-format
msgid "Connection to %s:%hu refused.\n"
msgstr "%s:%hu �ؤ���³�˼��Ԥ��ޤ�����\n"

#. Second: Login with proper USER/PASS sequence.
#: src/ftp.c:190 src/http.c:374
msgid "connected!\n"
msgstr "��³���ޤ���!\n"

#: src/ftp.c:191
#, c-format
msgid "Logging in as %s ... "
msgstr "%s �Ȥ��ƥ������󤷤Ƥ��ޤ�... "

#: src/ftp.c:200 src/ftp.c:253 src/ftp.c:301 src/ftp.c:353 src/ftp.c:447
#: src/ftp.c:520 src/ftp.c:568 src/ftp.c:616
msgid "Error in server response, closing control connection.\n"
msgstr "�����Фα����˥��顼������Τǡ���³��λ���ޤ���\n"

#: src/ftp.c:208
msgid "Error in server greeting.\n"
msgstr "�����Фν�������˥��顼������ޤ���\n"

#: src/ftp.c:216 src/ftp.c:262 src/ftp.c:310 src/ftp.c:362 src/ftp.c:457
#: src/ftp.c:530 src/ftp.c:578 src/ftp.c:626
msgid "Write failed, closing control connection.\n"
msgstr "�񤭹��ߤ˼��Ԥ����Τǡ���³��λ���ޤ���\n"

#: src/ftp.c:223
msgid "The server refuses login.\n"
msgstr "�����Ф������������ݤ��ޤ�����\n"

#: src/ftp.c:230
msgid "Login incorrect.\n"
msgstr "��������˼��Ԥ��ޤ�����\n"

#: src/ftp.c:237
msgid "Logged in!\n"
msgstr "�������󤷤ޤ���!\n"

#: src/ftp.c:270
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "`%c' �������ʼ���ʤΤǡ���³��λ���ޤ���\n"

#: src/ftp.c:283
msgid "done.  "
msgstr "��λ���ޤ�����  "

#: src/ftp.c:289
msgid "==> CWD not needed.\n"
msgstr "==> CWD ��ɬ�פ���ޤ���\n"

#: src/ftp.c:317
#, c-format
msgid "No such directory `%s'.\n\n"
msgstr "`%s' �Ȥ����ǥ��쥯�ȥ�Ϥ���ޤ���\n\n"

#: src/ftp.c:331 src/ftp.c:599 src/ftp.c:647 src/url.c:1431
msgid "done.\n"
msgstr "��λ���ޤ�����\n"

#. do not CWD
#: src/ftp.c:335
msgid "==> CWD not required.\n"
msgstr "==> CWD ��ɬ�פ���ޤ���\n"

#: src/ftp.c:369
msgid "Cannot initiate PASV transfer.\n"
msgstr "PASVž���ν�������Ǥ��ޤ���\n"

#: src/ftp.c:373
msgid "Cannot parse PASV response.\n"
msgstr "PASV�α�������ϤǤ��ޤ���\n"

#: src/ftp.c:387
#, c-format
msgid "Will try connecting to %s:%hu.\n"
msgstr "%s:%hu �ؤ���³���ߤƤ��ޤ���\n"

#: src/ftp.c:432 src/ftp.c:504 src/ftp.c:548
msgid "done.    "
msgstr "��λ���ޤ�����    "

#: src/ftp.c:474
#, c-format
msgid "Bind error (%s).\n"
msgstr "�Х���ɥ��顼�Ǥ� (%s)��\n"

#: src/ftp.c:490
msgid "Invalid PORT.\n"
msgstr "̵���ʥݡ����ֹ�Ǥ���\n"

#: src/ftp.c:537
msgid "\nREST failed, starting from scratch.\n"
msgstr "\nREST�˼��Ԥ��ޤ������ǽ餫��Ϥ�ޤ���\n"

#: src/ftp.c:586
#, c-format
msgid "No such file `%s'.\n\n"
msgstr "`%s' �Ȥ����ե�����Ϥ���ޤ���\n\n"

#: src/ftp.c:634
#, c-format
msgid "No such file or directory `%s'.\n\n"
msgstr "`%s' �Ȥ����ե�����ޤ��ϥǥ��쥯�ȥ�Ϥ���ޤ���\n\n"

#: src/ftp.c:692 src/ftp.c:699
#, c-format
msgid "Length: %s"
msgstr "Ĺ��: %s"

#: src/ftp.c:694 src/ftp.c:701
#, c-format
msgid " [%s to go]"
msgstr " [�Τ��� %s]"

#: src/ftp.c:703
msgid " (unauthoritative)\n"
msgstr " (ɬ���������ΤǤϤ���ޤ���)\n"

#: src/ftp.c:721
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s����³��λ���ޤ���\n"

#: src/ftp.c:729
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - �ǡ�����³: %s; "

#: src/ftp.c:746
msgid "Control connection closed.\n"
msgstr "��³��λ���ޤ���\n"

#: src/ftp.c:764
msgid "Data transfer aborted.\n"
msgstr "�ǡ���ž�������Ǥ��ޤ�����\n"

#: src/ftp.c:830
#, c-format
msgid "File `%s' already there, not retrieving.\n"
msgstr "�ե����� `%s' �Ϥ��Ǥ�¸�ߤ���Τǡ�ž�����ޤ���\n"

#: src/ftp.c:896 src/http.c:922
#, c-format
msgid "(try:%2d)"
msgstr "(���:%2d)"

#: src/ftp.c:955 src/http.c:1116
#, c-format
msgid "%s (%s) - `%s' saved [%ld]\n\n"
msgstr "%s (%s) - `%s' ����¸���ޤ��� [%ld]\n\n"

#: src/ftp.c:1001
#, c-format
msgid "Using `%s' as listing tmp file.\n"
msgstr "����ե������ꥹ�Ȥ��뤿��� `%s' ����Ѥ��ޤ���\n"

#: src/ftp.c:1013
#, c-format
msgid "Removed `%s'.\n"
msgstr "`%s' �������ޤ�����\n"

#: src/ftp.c:1049
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "�Ƶ����뿼�� %d �������ͤ�Ķ�ᤷ�Ƥ��ޤ��������� %d �Ǥ���\n"

#: src/ftp.c:1096 src/http.c:1054
#, c-format
msgid "Local file `%s' is more recent, not retrieving.\n\n"
msgstr "��������ե����� `%s' �Τۤ����������Τǡ�ž�����ޤ���\n\n"

#: src/ftp.c:1102 src/http.c:1060
#, c-format
msgid "The sizes do not match (local %ld), retrieving.\n"
msgstr "�礭�������ʤ��Τ�(��������� %ld)��ž�����ޤ���\n"

#: src/ftp.c:1119
msgid "Invalid name of the symlink, skipping.\n"
msgstr "�����ʥ���ܥ�å����̾�ʤΤǡ��ȤФ��ޤ���\n"

#: src/ftp.c:1136
#, c-format
msgid "Already have correct symlink %s -> %s\n\n"
msgstr "���Ǥ� %s -> %s �Ȥ�������������ܥ�å���󥯤�����ޤ�\n\n"

#: src/ftp.c:1144
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "%s -> %s �Ȥ�������ܥ�å���󥯤�������Ƥ��ޤ�\n"

#: src/ftp.c:1155
#, c-format
msgid "Symlinks not supported, skipping symlink `%s'.\n"
msgstr "����ܥ�å���󥯤��б����Ƥ��ʤ��Τǡ�����ܥ�å���� `%s' ��ȤФ��ޤ���\n"

#: src/ftp.c:1167
#, c-format
msgid "Skipping directory `%s'.\n"
msgstr "�ǥ��쥯�ȥ� `%s' ��ȤФ��ޤ���\n"

#: src/ftp.c:1176
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: �����ʤޤ����б����Ƥ��ʤ��ե�����μ���Ǥ���\n"

#: src/ftp.c:1193
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: ���դ�����Ƥ��ޤ���\n"

#: src/ftp.c:1213
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "������ %d (���� %d)�ʤΤǥǥ��쥯�ȥ��ž�����ޤ���\n"

#: src/ftp.c:1252
#, c-format
msgid "Not descending to `%s' as it is excluded/not-included.\n"
msgstr "��������Ƥ��뤫�ޤޤ�Ƥ��ʤ��Τ� `%s' �˰�ư���ޤ���\n"

#: src/ftp.c:1297
#, c-format
msgid "Rejecting `%s'.\n"
msgstr "`%s' ��������ޤ���\n"

#. No luck.
#. #### This message SUCKS.  We should see what was the
#. reason that nothing was retrieved.
#: src/ftp.c:1344
#, c-format
msgid "No matches on pattern `%s'.\n"
msgstr "�ѥ����� `%s' ��Ŭ�礹���Τ�����ޤ���\n"

#: src/ftp.c:1404
#, c-format
msgid "Wrote HTML-ized index to `%s' [%ld].\n"
msgstr "`%s' [%ld]���Ф���HTML�����줿���Ф�(index)��񤭤ޤ�����\n"

#: src/ftp.c:1409
#, c-format
msgid "Wrote HTML-ized index to `%s'.\n"
msgstr "`%s' ���Ф���HTML�����줿���Ф�(index)��񤭤ޤ�����\n"

#: src/getopt.c:454
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: ���ץ���� `%s' ��ۣ��Ǥ�\n"

#: src/getopt.c:478
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: ���ץ���� `--%s' �ϰ�����ɬ�פȤ��ޤ���\n"

#: src/getopt.c:483
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: ���ץ���� `%c%s' �ϰ�����ɬ�פȤ��ޤ���\n"

#: src/getopt.c:498
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: ���ץ���� `%s' �ϰ�����ɬ�פȤ��ޤ�\n"

#. --option
#: src/getopt.c:528
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: `--%s' ��ǧ���Ǥ��ʤ����ץ����Ǥ�\n"

#. +option or -option
#: src/getopt.c:532
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: `%c%s' ��ǧ���Ǥ��ʤ����ץ����Ǥ�\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:563
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: �����ʥ��ץ����Ǥ� -- %c\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:602
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: ���ץ����ϰ�����ɬ�פȤ��ޤ� -- %c\n"

#: src/host.c:432
#, c-format
msgid "%s: Cannot determine user-id.\n"
msgstr "%s: user-id�����Ǥ��ޤ���\n"

#: src/host.c:444
#, c-format
msgid "%s: Warning: uname failed: %s\n"
msgstr "%s: �ٹ�: uname�˼��Ԥ��ޤ���: %s\n"

#: src/host.c:456
#, c-format
msgid "%s: Warning: gethostname failed\n"
msgstr "%s: �ٹ�: gethostname�˼��Ԥ��ޤ���\n"

#: src/host.c:484
#, c-format
msgid "%s: Warning: cannot determine local IP address.\n"
msgstr "%s: �ٹ�: ��������IP���ɥ쥹�����Ǥ��ޤ���\n"

#: src/host.c:498
#, c-format
msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
msgstr "%s: �ٹ�: ��������IP���ɥ쥹�εհ������Ǥ��ޤ���\n"

#. This gets ticked pretty often.  Karl Berry reports
#. that there can be valid reasons for the local host
#. name not to be an FQDN, so I've decided to remove the
#. annoying warning.
#: src/host.c:511
#, c-format
msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
msgstr "%s: �ٹ�: �������륢�ɥ쥹�εհ�����̤�FQDN�ǤϤ���ޤ���!\n"

#: src/host.c:539
msgid "Host not found"
msgstr "�ۥ��Ȥ����Ĥ���ޤ���"

#: src/host.c:541
msgid "Unknown error"
msgstr "�����ʥ��顼�Ǥ�"

#: src/html.c:439 src/html.c:441
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s (%s:%d ��)�θ��Ф�(index)�Ǥ�"

#: src/html.c:463
msgid "time unknown       "
msgstr "���֤������Ǥ�       "

#: src/html.c:467
msgid "File        "
msgstr "�ե�����        "

#: src/html.c:470
msgid "Directory   "
msgstr "�ǥ��쥯�ȥ�   "

#: src/html.c:473
msgid "Link        "
msgstr "���        "

#: src/html.c:476
msgid "Not sure    "
msgstr "�Գμ�    "

#: src/html.c:494
#, c-format
msgid " (%s bytes)"
msgstr " (%s �Х���)"

#: src/http.c:492
msgid "Failed writing HTTP request.\n"
msgstr "HTTP �ˤ����³�׵�������˼��Ԥ��ޤ�����\n"

#: src/http.c:497
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s �ˤ����³�׵���������ޤ������������ԤäƤ��ޤ�... "

#: src/http.c:536
msgid "End of file while parsing headers.\n"
msgstr "�إå��β�����˥ե�����ν�ü�ˤʤ�ޤ�����\n"

#: src/http.c:547
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "�إå�����ɤ߹��ߥ��顼(%s)�Ǥ�\n"

#: src/http.c:587
msgid "No data received"
msgstr "�ǡ�������������ޤ���Ǥ���"

#: src/http.c:589
msgid "Malformed status line"
msgstr "��̯�ʾ��֤Ǥ�"

#: src/http.c:594
msgid "(no description)"
msgstr "(�����ʤ�)"

#. If we have tried it already, then there is not point
#. retrying it.
#: src/http.c:678
msgid "Authorization failed.\n"
msgstr "ǧ�ڤ˼��Ԥ��ޤ�����\n"

#: src/http.c:685
msgid "Unknown authentication scheme.\n"
msgstr "������ǧ�ڷ����Ǥ���\n"

#: src/http.c:748
#, c-format
msgid "Location: %s%s\n"
msgstr "���: %s%s\n"

#: src/http.c:749 src/http.c:774
msgid "unspecified"
msgstr "����Ǥ��ޤ���"

#: src/http.c:750
msgid " [following]"
msgstr " [³��]"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:764
msgid "Length: "
msgstr "Ĺ��: "

#: src/http.c:769
#, c-format
msgid " (%s to go)"
msgstr " (�Τ���%s)"

#: src/http.c:774
msgid "ignored"
msgstr "̵�뤷�ޤ���"

#: src/http.c:857
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "�ٹ�: HTTP�ϥ磻��ɥ����ɤ��б����Ƥ��ޤ���\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:872
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "�ե����� `%s' �Ϥ��Ǥ�¸�ߤ���Τǡ�ž�����ޤ���\n"

#: src/http.c:978
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "`%s' (%s)�ؽ񤭹���ޤ���\n"

#: src/http.c:988
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "���顼: ��꤬¸�ߤ��ʤ���ǥ��쥯�����(%d)�Ǥ���\n"

#: src/http.c:1011
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ���顼 %d: %s��\n"

#: src/http.c:1023
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Last-modified �إå�������ޤ��� -- ���դ�̵���ˤ��ޤ���\n"

#: src/http.c:1031
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Last-modified �إå���̵���Ǥ� -- ���դ�̵�뤷�ޤ���\n"

#: src/http.c:1064
msgid "Remote file is newer, retrieving.\n"
msgstr "��⡼�ȥե�����Τۤ����������Τǡ�ž�����ޤ���\n"

#: src/http.c:1098
#, c-format
msgid "%s (%s) - `%s' saved [%ld/%ld]\n\n"
msgstr "%s (%s) - `%s' ����¸���ޤ��� [%ld/%ld]\n\n"

#: src/http.c:1130
#, c-format
msgid "%s (%s) - Connection closed at byte %ld. "
msgstr "%s (%s) - %ld �Х��Ȥ���³����λ���ޤ����� "

#: src/http.c:1138
#, c-format
msgid "%s (%s) - `%s' saved [%ld/%ld])\n\n"
msgstr "%s (%s) - `%s' ����¸���ޤ��� [%ld/%ld])\n\n"

#: src/http.c:1150
#, c-format
msgid "%s (%s) - Connection closed at byte %ld/%ld. "
msgstr "%s (%s) - %ld/%ld �Х��Ȥ���³����λ���ޤ����� "

#: src/http.c:1161
#, c-format
msgid "%s (%s) - Read error at byte %ld (%s)."
msgstr "%s (%s) - %ld �Х��Ȥ��ɤ߹��ߥ��顼�Ǥ� (%s)��"

#: src/http.c:1169
#, c-format
msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
msgstr "%s (%s) - %ld/%ld �Х��Ȥ��ɤ߹��ߥ��顼�Ǥ� (%s)�� "

#: src/init.c:312 src/netrc.c:250
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: %s (%s)���ɤ߹���ޤ���\n"

#: src/init.c:333 src/init.c:339
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: %s ��� %d �Ԥǥ��顼�Ǥ�\n"

#: src/init.c:370
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
msgstr "%s: �ٹ�: �����ƥ�ȥ桼����wgetrc��ξ���� `%s' ����ꤷ�Ƥ��ޤ���\n"

#: src/init.c:458
#, c-format
msgid "%s: BUG: unknown command `%s', value `%s'.\n"
msgstr "%s: �Х�: `%s' ��������̿��Ǥ����ͤ� `%s' �Ǥ���\n"

#: src/init.c:485
#, c-format
msgid "%s: %s: Please specify on or off.\n"
msgstr "%s: %s: on��off�������ꤷ�Ƥ���������\n"

#: src/init.c:503 src/init.c:760 src/init.c:782 src/init.c:855
#, c-format
msgid "%s: %s: Invalid specification `%s'.\n"
msgstr "%s: %s: ̵���ʻ��� `%s' �Ǥ���\n"

#: src/init.c:616 src/init.c:638 src/init.c:660 src/init.c:686
#, c-format
msgid "%s: Invalid specification `%s'\n"
msgstr "%s: ̵���ʻ��� `%s' �Ǥ���\n"

#: src/main.c:101
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "�Ȥ���: %s [���ץ����]... [URL]...\n"

#: src/main.c:109
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, ������Ū�ͥåȥ��ž�����ե�\n"

#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
#. don't bitch.  Also, it makes translation much easier.
#: src/main.c:114
msgid "\nMandatory arguments to long options are mandatory for short options too.\n\n"
msgstr "\nĹ�����ץ������Բķ�ʰ�����û�����ץ����Ǥ��Բķ�Ǥ���\n\n"

#: src/main.c:117
msgid ""
"Startup:\n"
"  -V,  --version           display the version of Wget and exit.\n"
"  -h,  --help              print this help.\n"
"  -b,  --background        go to background after startup.\n"
"  -e,  --execute=COMMAND   execute a `.wgetrc' command.\n"
"\n"
msgstr ""
"��ư:\n"
"  -V,  --version           Wget�ΥС�������ֹ��ɽ��������λ���ޤ���\n"
"  -h,  --help              ���Υإ�פ�ɽ�����ޤ���\n"
"  -b,  --background        ��ư��Хå����饦��ɤ�ư��ޤ���\n"
"  -e,  --execute=COMMAND   `.wgetrc' ���ޥ�ɤ�¹Ԥ��ޤ���\n"
"\n"

#: src/main.c:123
msgid ""
"Logging and input file:\n"
"  -o,  --output-file=FILE     log messages to FILE.\n"
"  -a,  --append-output=FILE   append messages to FILE.\n"
"  -d,  --debug                print debug output.\n"
"  -q,  --quiet                quiet (no output).\n"
"  -v,  --verbose              be verbose (this is the default).\n"
"  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
"  -i,  --input-file=FILE      read URL-s from file.\n"
"  -F,  --force-html           treat input file as HTML.\n"
"\n"
msgstr ""
"������������ϥե�����:\n"
"  -o,  --output-file=FILE     FILE �˥�����å�������񤭹��ߤޤ���\n"
"  -a,  --append-output=FILE   FILE �˥�å��������ɲä��ޤ���\n"
"  -d,  --debug                �ǥХå������ɽ�����ޤ���\n"
"  -q,  --quiet                ���Ϥ��ޤ���\n"
"  -v,  --verbose              �ܤ������Ϥ򤷤ޤ�(ɸ��)��\n"
"  -nv, --non-verbose          �������줿���Ϥ򤷤ޤ���\n"
"  -i,  --input-file=FILE      URL��ե����뤫���ɤ߹��ߤޤ���\n"
"  -F,  --force-html           ���ϥե������HTML�Ȥ��ư����ޤ���\n"
"\n"

#: src/main.c:133
msgid ""
"Download:\n"
"  -t,  --tries=NUMBER           set number of retries to NUMBER (0 unlimits).\n"
"  -O   --output-document=FILE   write documents to FILE.\n"
"  -nc, --no-clobber             don't clobber existing files.\n"
"  -c,  --continue               restart getting an existing file.\n"
"       --dot-style=STYLE        set retrieval display style.\n"
"  -N,  --timestamping           don't retrieve files if older than local.\n"
"  -S,  --server-response        print server response.\n"
"       --spider                 don't download anything.\n"
"  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
"  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
"  -Y,  --proxy=on/off           turn proxy on or off.\n"
"  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
"\n"
msgstr ""
"�����������:\n"
"  -t,  --tries=NUMBER           �ƻ�Ԥ���������ꤷ�ޤ� (0��̵����)��\n"
"  -O   --output-document=FILE   FILE ��ʸ�����Ϥ��ޤ���\n"
"  -nc, --no-clobber             ��¸�Υե������õ�ޤ���\n"
"  -c,  --continue               ���ˤ���ե������³������ž����Ԥ��ޤ���\n"
"       --dot-style=STYLE        �ǥ����ץ졼��������ꤷ�ޤ���\n"
"  -N,  --timestamping           ����������Ť��ե������ž�����ޤ���\n"
"  -S,  --server-response        �����Фα�����ɽ�����ޤ���\n"
"       --spider                 �������������ɤ��ޤ���\n"
"  -T,  --timeout=SECONDS        �ɤ߹��ߥ����ॢ���Ȼ��֤�SECONDS�ˤ��ޤ���\n"
"  -w,  --wait=SECONDS           ž�����Ȥ� SECONDS ���Ԥ��ޤ���\n"
"  -Y,  --proxy=on/off           ����������(proxy)��on/off�ˤ��ޤ���\n"
"  -Q,  --quota=NUMBER           ��������(quota)�� NUMBER �ˤ��ޤ���\n"
"\n"

#: src/main.c:147
msgid ""
"Directories:\n"
"  -nd  --no-directories            don't create directories.\n"
"  -x,  --force-directories         force creation of directories.\n"
"  -nH, --no-host-directories       don't create host directories.\n"
"  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
"       --cut-dirs=NUMBER           ignore NUMBER remote directory components.\n"
"\n"
msgstr ""
"�ǥ��쥯�ȥ�:\n"
"  -nd  --no-directories            �ǥ��쥯�ȥ��������ޤ���\n"
"  -x,  --force-directories         ����Ū�˥ǥ��쥯�ȥ��������ޤ���\n"
"  -nH, --no-host-directories       �ۥ��ȥǥ��쥯�ȥ��������ޤ���\n"
"  -P,  --directory-prefix=PREFIX   PREFIX�˥ե��������¸���ޤ���\n"
"       --cut-dirs=NUMBER           NUMBER�Υ�⡼�ȥǥ��쥯�ȥ�\n"
"                                   ����ݡ��ͥ�Ȥ�̵�뤷�ޤ���\n"
"\n"

#: src/main.c:154
msgid ""
"HTTP options:\n"
"       --http-user=USER      set http user to USER.\n"
"       --http-passwd=PASS    set http password to PASS.\n"
"  -C,  --cache=on/off        (dis)allow server-cached data (normally allowed).\n"
"       --ignore-length       ignore `Content-Length' header field.\n"
"       --header=STRING       insert STRING among the headers.\n"
"       --proxy-user=USER     set USER as proxy username.\n"
"       --proxy-passwd=PASS   set PASS as proxy password.\n"
"  -s,  --save-headers        save the HTTP headers to file.\n"
"  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
"\n"
msgstr ""
"HTTP���ץ����:\n"
"       --http-user=USER      http�桼���� USER �ˤ��ޤ���\n"
"       --http-passwd=PASS    http�ѥ���ɤ� PASS �ˤ��ޤ���\n"
"  -C,  --cache=on/off        �����ФΥ���å���ǡ����� on/off �ˤ��ޤ�\n"
"                             (�̾��on�ˤ��ޤ�)��\n"
"       --ignore-length       �إå��ե������ `Content-Length' ��̵�뤷�ޤ���\n"
"       --header=STRING       �إå��� STRING ���������ޤ���\n"
"       --proxy-user=USER     USER ������������(proxy)�Υ桼��̾�ˤ��ޤ���\n"
"       --proxy-passwd=PASS   PASS ������������(proxy)�Υѥ���ɤˤ��ޤ���\n"
"  -s,  --save-headers        HTTP�إå���ե��������¸���ޤ���\n"
"  -U,  --user-agent=AGENT    User Agent�Ȥ��ơ�`Wget/�С�������ֹ�'������\n"
"                             AGENT ����Ѥ��ޤ���\n"
"\n"

#: src/main.c:165
msgid ""
"FTP options:\n"
"       --retr-symlinks   retrieve FTP symbolic links.\n"
"  -g,  --glob=on/off     turn file name globbing on or off.\n"
"       --passive-ftp     use the \"passive\" transfer mode.\n"
"\n"
msgstr ""
"FTP���ץ����:\n"
"       --retr-symlinks   FTP�Υ���ܥ�å���󥯤�ž�����ޤ���\n"
"  -g,  --glob=on/off     �ե�����̾��globbing�򥪥�ޤ��ϥ��դˤ��ޤ���\n"
"       --passive-ftp     \"passive\" ž���⡼�ɤ���Ѥ��ޤ���\n"
"\n"

#: src/main.c:170
msgid ""
"Recursive retrieval:\n"
"  -r,  --recursive             recursive web-suck -- use with care!.\n"
"  -l,  --level=NUMBER          maximum recursion depth (0 to unlimit).\n"
"       --delete-after          delete downloaded files.\n"
"  -k,  --convert-links         convert non-relative links to relative.\n"
"  -m,  --mirror                turn on options suitable for mirroring.\n"
"  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
"\n"
msgstr ""
"�Ƶ�Ūž��:\n"
"  -r,  --recursive             �����֤�Ƶ�Ū��ž�����ޤ�\n"
"                               -- ���դ��ƻ��Ѥ��Ƥ�������!\n"
"  -l,  --level=NUMBER          �Ƶ����뿼������ꤷ�ޤ�(0��̵����)��\n"
"       --delete-after          ����������ɤ����ե�����������ޤ���\n"
"  -k,  --convert-links         �����Х�󥯤����Х�󥯤��Ѵ����ޤ���\n"
"  -m,  --mirror                �ߥ顼��Ŭ�������ץ�����ư��ޤ���\n"
"  -nr, --dont-remove-listing   `.listing' �ե�����������ޤ���\n"
"\n"

#: src/main.c:178
msgid ""
"Recursive accept/reject:\n"
"  -A,  --accept=LIST                list of accepted extensions.\n"
"  -R,  --reject=LIST                list of rejected extensions.\n"
"  -D,  --domains=LIST               list of accepted domains.\n"
"       --exclude-domains=LIST       comma-separated list of rejected domains.\n"
"  -L,  --relative                   follow relative links only.\n"
"       --follow-ftp                 follow FTP links from HTML documents.\n"
"  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
"  -I,  --include-directories=LIST   list of allowed directories.\n"
"  -X,  --exclude-directories=LIST   list of excluded directories.\n"
"  -nh, --no-host-lookup             don't DNS-lookup hosts.\n"
"  -np, --no-parent                  don't ascend to the parent directory.\n"
"\n"
msgstr ""
"�Ƶ�ž������ž������ե�����ε��ġ��Ե���\n"
"  -A,  --accept=LIST                ���Ĥ���ե�����Υꥹ�Ȥ���ꤷ�ޤ���\n"
"  -R,  --reject=LIST                ��������ե�����Υꥹ�Ȥ���ꤷ�ޤ���\n"
"  -D,  --domains=LIST               ���Ĥ���ɥᥤ��Υꥹ�Ȥ���ꤷ�ޤ���\n"
"       --exclude-domains=LIST       ��������ɥᥤ��Υꥹ�Ȥ򥳥��(,)\n"
"                                    �Ƕ��ڤäƻ��ꤷ�ޤ���\n"
"  -L,  --relative                   ���Х�󥯤Τ��б����ޤ���\n"
"       --follow-ftp                 HTMLʸ�񤫤��FTP��󥯤��б����ޤ���\n"
"  -H,  --span-hosts                 �Ƶ�����¾�Υۥ��Ȥذ�ư���ޤ���\n"
"  -I,  --include-directories=LIST   ���Ĥ���ǥ��쥯�ȥ�Υꥹ�ȤǤ���\n"
"  -X,  --exclude-directories=LIST   ��������ǥ��쥯�ȥ�Υꥹ�ȤǤ���\n"
"  -nh, --no-host-lookup             �ۥ��Ȥ��Ф���DNS�򸫤ޤ���\n"
"  -np, --no-parent                  �ƥǥ��쥯�ȥ�˰�ư���ޤ���\n"
"\n"

#: src/main.c:191
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "�Х�������Ƥ�<bug-wget@gnu.org>��\n"

#: src/main.c:347
#, c-format
msgid "%s: debug support not compiled in.\n"
msgstr "%s: �ǥХå����б�����褦�˥���ѥ��뤵��Ƥ��ޤ���\n"

#: src/main.c:395
msgid ""
"Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.\n"
"This program is distributed in the hope that it will be useful,\n"
"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"GNU General Public License for more details.\n"
msgstr ""
"Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.\n"
"This program is distributed in the hope that it will be useful,\n"
"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"GNU General Public License for more details.\n"
"\n"
"�ʲ��ϻ������Ǥ���ˡŪ�ˤϾ�α�ʸ�˽����ޤ���\n"
"\n"
"Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.\n"
"���Υץ�������ͭ�ѤȻפ��ޤ���̵�ݾڤǤ���\n"
"���������������Ū�˹��פ��뤫�ΰ��ۤ��ݾڤ⤢��ޤ���\n"
"�ܺ٤�GNU���̸��ѻ��ѵ���������������\n"

#: src/main.c:401
msgid "\nWritten by Hrvoje Niksic <hniksic@srce.hr>.\n"
msgstr "\nHrvoje Niksic <hniksic@srce.hr>�ˤ�äƽ񤫤�ޤ�����\n"

#: src/main.c:465
#, c-format
msgid "%s: %s: invalid command\n"
msgstr "%s: %s: ̵���ʥ��ޥ�ɤǤ�\n"

#: src/main.c:515
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: `-n%c' �������ʥ��ץ�������Ǥ�\n"

#. #### Something nicer should be printed here -- similar to the
#. pre-1.5 `--help' page.
#: src/main.c:518 src/main.c:560 src/main.c:591
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "�ܤ������ץ����� `%s --help' ��¹Ԥ��Ƥ���������\n"

#: src/main.c:571
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "���Ϥ�ܺ٤��륪�ץ����Ƚ��Ϥ���������륪�ץ�����Ʊ���ˤϻ���Ǥ��ޤ���\n"

#: src/main.c:577
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "�Ť��ե���������դ��դ��ʤ������ȤȸŤ��ե������õ�ʤ����Ȥ�Ʊ���ˤϹԤ��ޤ���\n"

#. No URL specified.
#: src/main.c:586
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL������ޤ���\n"

#: src/main.c:674
#, c-format
msgid "No URLs found in %s.\n"
msgstr "%s �ˤ�URL������ޤ���\n"

#: src/main.c:683
#, c-format
msgid ""
"\n"
"FINISHED --%s--\n"
"Downloaded: %s bytes in %d files\n"
msgstr ""
"\n"
"��λ���ޤ��� --%s--\n"
"�����������: %s �Х���(�ե������ %d)\n"

#: src/main.c:688
#, c-format
msgid "Download quota (%s bytes) EXCEEDED!\n"
msgstr "��������(%s �Х��Ȥ�quota)��Ķ�ᤷ�ޤ�!\n"

#. Please note that the double `%' in `%%s' is intentional, because
#. redirect_output passes tmp through printf.
#: src/main.c:715
msgid "%s received, redirecting output to `%%s'.\n"
msgstr "%s ��������ޤ�����`%%s' �˽��Ϥ��ǥ��쥯�Ȥ��ޤ���\n"

#: src/mswindows.c:118
#, c-format
msgid ""
"\n"
"CTRL+Break received, redirecting output to `%s'.\n"
"Execution continued in background.\n"
"You may stop Wget by pressing CTRL+ALT+DELETE.\n"
msgstr ""
"\n"
"CTRL+Break��������ޤ�����`%s' �˽��Ϥ��ǥ��쥯����󤷤ޤ���\n"
"�¹ԤϥХå����饦��ɤǷ�³���ޤ���\n"
"CTRL+ALT+DELETE �򲡤��С�Wget ����ߤǤ��ޤ���\n"

#. parent, no error
#: src/mswindows.c:135 src/utils.c:268
msgid "Continuing in background.\n"
msgstr "�Хå����饦��ɤǷ�³���ޤ���\n"

#: src/mswindows.c:137 src/utils.c:270
#, c-format
msgid "Output will be written to `%s'.\n"
msgstr "���Ϥ� `%s' �˽񤭹��ߤޤ���\n"

#: src/mswindows.c:227
#, c-format
msgid "Starting WinHelp %s\n"
msgstr "WinHelp %s �򳫻Ϥ��ޤ���\n"

#: src/mswindows.c:254 src/mswindows.c:262
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: ���Ѳ�ǽ�ʥ����åȥɥ饤�Ф򸫤Ĥ����ޤ���\n"

#: src/netrc.c:334
#, c-format
msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
msgstr "%s: %s:%d: �ٹ�: ���ڤ국��(token) \"%s\" �Ϥ��٤ƤΥޥ���̾�����˸����ޤ�\n"

#: src/netrc.c:365
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: \"%s\" �������ʶ��ڤ국��(token)�Ǥ�\n"

#: src/netrc.c:429
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "�Ȥ���: %s NETRC [�ۥ���̾]\n"

#: src/netrc.c:439
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: %s�ξ��������Ǥ��ޤ���: %s \n"

#: src/recur.c:449 src/retr.c:462
#, c-format
msgid "Removing %s.\n"
msgstr "%s �������ޤ�����\n"

#: src/recur.c:450
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "���ݤ��٤��ʤΤǡ�%s �������ޤ�����\n"

#: src/recur.c:609
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "robots.txt���ɤ߹���Ǥ��ޤ������顼��̵�뤷�Ƥ���������\n"

#: src/retr.c:193
#, c-format
msgid "\n          [ skipping %dK ]"
msgstr "\n          [ %dK �ȤФ��ޤ� ]"

#: src/retr.c:344
msgid "Could not find proxy host.\n"
msgstr "�����ۥ���(proxy host)�����Ĥ���ޤ���\n"

#: src/retr.c:355
#, c-format
msgid "Proxy %s: Must be HTTP.\n"
msgstr "����������(proxy) %s: HTTP�Ǥ���ɬ�פ�����ޤ���\n"

#: src/retr.c:398
#, c-format
msgid "%s: Redirection to itself.\n"
msgstr "%s �ϼ�ʬ���ȤؤΥ�ǥ��쥯�����Ǥ���\n"

#: src/retr.c:483
msgid "Giving up.\n\n"
msgstr "��ߤ��ޤ�����\n\n"

#: src/retr.c:483
msgid "Retrying.\n\n"
msgstr "�ƻ�Ԥ��Ƥ��ޤ���\n\n"

#: src/url.c:940
#, c-format
msgid "Error (%s): Link %s without a base provided.\n"
msgstr "���顼 (%s): %s �Ȥ�����󥯤��Ф���١�����Ϳ�����Ƥ��ޤ���\n"

#: src/url.c:955
#, c-format
msgid "Error (%s): Base %s relative, without referer URL.\n"
msgstr "���顼(%s): Base URL %s �����л���ǡ����Ȥ���URL(Referer)��¸�ߤ��ޤ���\n"

#: src/url.c:1373
#, c-format
msgid "Converting %s... "
msgstr "%s ���Ѵ����Ƥ��ޤ�... "

#: src/url.c:1378 src/url.c:1389
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "%s ��Υ�󥯤��Ѵ��Ǥ��ޤ���: %s\n"

#: src/utils.c:71
#, c-format
msgid "%s: %s: Not enough memory.\n"
msgstr "%s: %s: ��ʬ�ʥ��꤬����ޤ���\n"

#: src/utils.c:203
msgid "Unknown/unsupported protocol"
msgstr "�����ʡ��ޤ����б����Ƥ��ʤ��ץ��ȥ���Ǥ�"

#: src/utils.c:206
msgid "Invalid port specification"
msgstr "̵���ʥݡ����ֹ�Ǥ�"

#: src/utils.c:209
msgid "Invalid host name"
msgstr "̵���ʥۥ���̾�Ǥ�"

#: src/utils.c:430
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "����ܥ�å���� `%s' �κ���˼��Ԥ��ޤ���: %s\n"