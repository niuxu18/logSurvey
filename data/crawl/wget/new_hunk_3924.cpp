# Chinese translation of GNU wget messages.
# Copyright (C) 1998 Free Software Foundation, Inc.
# Pofeng Lee <pofeng.lee@ms7.url.com.tw>, 1998.
# Originla author CD Chen <cdchen@linux.ntcic.edu.tw>
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.5.3\n"
"POT-Creation-Date: 1998-09-21 19:08+0200\n"
"PO-Revision-Date: 2000-01-14 21:49:32+0800\n"
"Last-Translator: Pofeng Lee <pofeng.lee@ms7.url.com.tw>\n"
"Language-Team: Chinese <zh@li.org>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=big5\n"
"Content-Transfer-Encoding: 8bit\n"

#. Login to the server:
#. First: Establish the control connection.
#: src/ftp.c:146 src/http.c:337
#, c-format
msgid "Connecting to %s:%hu... "
msgstr "���s�� %s: %hu... "

#: src/ftp.c:168 src/ftp.c:409 src/http.c:354
#, c-format
msgid "Connection to %s:%hu refused.\n"
msgstr "�s�u�� %s: %hu �Q�ڵ�. \n"

#. Second: Login with proper USER/PASS sequence.
#: src/ftp.c:189 src/http.c:365
msgid "connected!\n"
msgstr "�s�W�F!\n"

#: src/ftp.c:190
#, c-format
msgid "Logging in as %s ... "
msgstr "�ϥ� %s ñ�J... "

#: src/ftp.c:199 src/ftp.c:251 src/ftp.c:299 src/ftp.c:351 src/ftp.c:445
#: src/ftp.c:518 src/ftp.c:566 src/ftp.c:614
msgid "Error in server response, closing control connection.\n"
msgstr "���A���ݦ^���ɵo�Ϳ��~�A���b�����s�u����.\n"

#: src/ftp.c:207
msgid "Error in server greeting.\n"
msgstr "�P���A���s�u�ɵo�Ϳ��~.\n"

#: src/ftp.c:214 src/ftp.c:260 src/ftp.c:308 src/ftp.c:360 src/ftp.c:455
#: src/ftp.c:528 src/ftp.c:576 src/ftp.c:624
msgid "Write failed, closing control connection.\n"
msgstr "�g�J����, ���b�����s�u����.\n"

#: src/ftp.c:221
msgid "The server refuses login.\n"
msgstr "���A���ڵ�ñ�J.\n"

#: src/ftp.c:228
msgid "Login incorrect.\n"
msgstr "ñ�J�����T.\n"

#: src/ftp.c:235
msgid "Logged in!\n"
msgstr "�w�gñ�J�F!\n"

#: src/ftp.c:268
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "�������Φ� `%c', ���b�����s�u����.\n"

#: src/ftp.c:281
msgid "done.  "
msgstr "����.  "

#: src/ftp.c:287
msgid "==> CWD not needed.\n"
msgstr "==> ���ݭn CWD.\n"

#: src/ftp.c:315
#, c-format
msgid "No such directory `%s'.\n\n"
msgstr "�S�� `%s' �o�ӥؿ�.\n\n"

#: src/ftp.c:329 src/ftp.c:597 src/ftp.c:645 src/url.c:1421
msgid "done.\n"
msgstr "����.\n"

#. do not CWD
#: src/ftp.c:333
msgid "==> CWD not required.\n"
msgstr "==> ���ݭn CWD.\n"

#: src/ftp.c:367
msgid "Cannot initiate PASV transfer.\n"
msgstr "�L�k�Ұ� PASV �ǿ�.\n"

#: src/ftp.c:371
msgid "Cannot parse PASV response.\n"
msgstr "�L�k���R PASV �^�����e.\n"

#: src/ftp.c:385
#, c-format
msgid "Will try connecting to %s:%hu.\n"
msgstr "�N�|�~����ջP %s �s�u: %hu.\n"

#: src/ftp.c:472
#, c-format
msgid "Bind error (%s).\n"
msgstr "BIND ���~ (%s).\n"

#: src/ftp.c:488
msgid "Invalid PORT.\n"
msgstr "�L�Ī� PORT.\n"

#: src/ftp.c:502 src/ftp.c:546
msgid "done.    "
msgstr "����.    "

#: src/ftp.c:535
msgid "\nREST failed, starting from scratch.\n"
msgstr "\nRSET ���ѡA���ѿ��ä��}�l��.\n"

#: src/ftp.c:584
#, c-format
msgid "No such file `%s'.\n\n"
msgstr "�S�� `%s' �o���ɮ�.\n\n"

#: src/ftp.c:632
#, c-format
msgid "No such file or directory `%s'.\n\n"
msgstr "�S�� `%s' �o���ɮשΥؿ�.\n\n"

#: src/ftp.c:690 src/ftp.c:697
#, c-format
msgid "Length: %s"
msgstr "����: %s"

#: src/ftp.c:692 src/ftp.c:699
#, c-format
msgid " [%s to go]"
msgstr " [%s �}�l]"

#: src/ftp.c:701
msgid " (unauthoritative)\n"
msgstr " (����{�i��)\n"

#: src/ftp.c:719
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, ���b�����s�u����.\n"

#: src/ftp.c:727
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - ��Ƴs�u: %s; "

#: src/ftp.c:744
msgid "Control connection closed.\n"
msgstr "�s�u����w�g�Q�����F.\n"

#: src/ftp.c:762
msgid "Data transfer aborted.\n"
msgstr "��ƶǿ�w�g�Q���_�F.\n"

#: src/ftp.c:828
#, c-format
msgid "File `%s' already there, not retrieving.\n"
msgstr "�ɮ� `%s' �w�g�s�b�A���|����.\n"

#: src/ftp.c:894 src/http.c:913
#, c-format
msgid "(try:%2d)"
msgstr "(����:%2d)"

#: src/ftp.c:953 src/http.c:1099
#, c-format
msgid "%s (%s) - `%s' saved [%ld]\n\n"
msgstr "%s (%s) - `%s' �Q�x�s [%ld]\n\n"

#: src/ftp.c:999
#, c-format
msgid "Using `%s' as listing tmp file.\n"
msgstr "�ϥ� `%s' �@���C�����Ȧs��.\n"

#: src/ftp.c:1011
#, c-format
msgid "Removed `%s'.\n"
msgstr "���� `%s'.\n"

#: src/ftp.c:1047
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "���j�h�� %d �w�g�W�L�̤j�� %d �h����. \n"

#: src/ftp.c:1094 src/http.c:1037
#, c-format
msgid "Local file `%s' is more recent, not retrieving.\n\n"
msgstr "���a�� `%s' �ɮפ���s�A�ҥH�N�����^.\n\n"

#: src/ftp.c:1100 src/http.c:1043
#, c-format
msgid "The sizes do not match (local %ld), retrieving.\n"
msgstr "�ɮפj�p�ä��۲ŦX (���a���� %ld)�A���b���^��.\n"

#: src/ftp.c:1117
msgid "Invalid name of the symlink, skipping.\n"
msgstr "�L�Ī��s���˸m�W�١A���b���L��.\n"

#: src/ftp.c:1134
#, c-format
msgid "Already have correct symlink %s -> %s\n\n"
msgstr "�w�g�s�b���T�� %s -> %s �H�x�s��\n\n"

#: src/ftp.c:1141
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "���b�إ� %s -> %s ���H�x�s��\n"

#: src/ftp.c:1152
#, c-format
msgid "Symlinks not supported, skipping symlink `%s'.\n"
msgstr "���䴩�s���˸m�A���b���L `%s' �o�ӶH�x�s��.\n"

#: src/ftp.c:1164
#, c-format
msgid "Skipping directory `%s'.\n"
msgstr "�����L `%s' �ؿ�.\n"

#: src/ftp.c:1173
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: ������/���䴩���ɮ׮榡.\n"

#: src/ftp.c:1189
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: ���~���ɶ��W�O.\n"

#: src/ftp.c:1209
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "�N�����^�q %d (�̤j�Ȭ� %d) �h�᪺�ؿ�.\n"

#: src/ftp.c:1248
#, c-format
msgid "Not descending to `%s' as it is excluded/not-included.\n"
msgstr "���U��� `%s' �]���L�O�Q�ư����άO�D�]�t�i�Ӫ�.\n"

#: src/ftp.c:1293
#, c-format
msgid "Rejecting `%s'.\n"
msgstr "����� `%s' ��.\n"

#. No luck.
#. #### This message SUCKS.  We should see what was the
#. reason that nothing was retrieved.
#: src/ftp.c:1340
#, c-format
msgid "No matches on pattern `%s'.\n"
msgstr "�S���P `%s' �榡�۲ŦX��.\n"

#: src/ftp.c:1400
#, c-format
msgid "Wrote HTML-ized index to `%s' [%ld].\n"
msgstr "�w�g�g�J HTML �榡�������ɨ� `%s' [%ld].\n"

#: src/ftp.c:1405
#, c-format
msgid "Wrote HTML-ized index to `%s'.\n"
msgstr "�g�� HTML �榡�������ɨ� `%s'.\n"

#: src/getopt.c:454
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: �ﶵ `%s' �O�����T��\n"

#: src/getopt.c:478
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: �ﶵ `--%s' �����Ѥ@�Ӥ޼ƭ�\n"

#: src/getopt.c:483
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: �ﶵ `%c%s' �����Ѥ@�Ӥ޼ƭ�\n"

#: src/getopt.c:498
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: �ﶵ `%s' �ݭn�@�Ӥ޼�\n"

#. --option
#: src/getopt.c:528
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: ���Q�{�w���ﶵ `--%s'\n"

#. +option or -option
#: src/getopt.c:532
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: ���Q�{�w���ﶵ `%c%s'\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:563
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: ���X�W�w���ﶵ -- %c\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:602
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: �ﶵ�ݭn�@�Ӥ޼� -- %c\n"

#: src/host.c:432
#, c-format
msgid "%s: Cannot determine user-id.\n"
msgstr "%s: �L�k�����ϥΪ��ѧO�X.\n"

#: src/host.c:444
#, c-format
msgid "%s: Warning: uname failed: %s\n"
msgstr "%s: ĵ�i: uname ����: %s\n"

#: src/host.c:456
#, c-format
msgid "%s: Warning: gethostname failed\n"
msgstr "%s: ĵ�i: gethostname ����\n"

#: src/host.c:484
#, c-format
msgid "%s: Warning: cannot determine local IP address.\n"
msgstr "%s: ĵ�i: �L�k�������a IP ��}.\n"

#: src/host.c:498
#, c-format
msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
msgstr "%s: ĵ�i: �L�k�Ϭd���a IP ��}.\n"

#: src/host.c:506
#, c-format
msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
msgstr "%s: ĵ�i: ���a��}���Ϭd���ŦX FQDN �W��!\n"

#: src/host.c:533
msgid "Host not found"
msgstr "�䤣��D��"

#: src/host.c:535
msgid "Unknown error"
msgstr "���������~"

#: src/html.c:433 src/html.c:435
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s �����ަb %s:%d"

#: src/html.c:457
msgid "time unknown       "
msgstr "�ɶ�����           "

#: src/html.c:461
msgid "File        "
msgstr "�ɮ�        "

#: src/html.c:464
msgid "Directory   "
msgstr "�ؿ�        "

#: src/html.c:467
msgid "Link        "
msgstr "�s��        "

#: src/html.c:470
msgid "Not sure    "
msgstr "�S���T�w    "

#: src/html.c:488
#, c-format
msgid " (%s bytes)"
msgstr " (%s �줸��)"

#: src/http.c:483
msgid "Failed writing HTTP request.\n"
msgstr "���ѩ�g�J HTTP �ШD��.\n"

#: src/http.c:488
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "�w�g�e�X %s �ШD�ʥ]�A���b���ݦ^����... "

#: src/http.c:527
msgid "End of file while parsing headers.\n"
msgstr "���b���R���Y���e�ɡA�ɮפw�g����.\n"

#: src/http.c:538
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Ū�������Y�����~ (%s).\n"

#: src/http.c:578
msgid "No data received"
msgstr "�S�������������"

#: src/http.c:580
msgid "Malformed status line"
msgstr "��Ϊ����A��"

#: src/http.c:585
msgid "(no description)"
msgstr "(�S����������)"

#. If we have tried it already, then there is not point
#. retrying it.
#: src/http.c:669
msgid "Authorization failed.\n"
msgstr "�{�ҥ���.\n"

#: src/http.c:676
msgid "Unknown authentication scheme.\n"
msgstr "�������{�Ҥ��.\n"

#: src/http.c:739
#, c-format
msgid "Location: %s%s\n"
msgstr "��m: %s%s\n"

#: src/http.c:740 src/http.c:765
msgid "unspecified"
msgstr "�S�����w"

#: src/http.c:741
msgid " [following]"
msgstr " [�U�C�U��]"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:755
msgid "Length: "
msgstr "����: "

#: src/http.c:760
#, c-format
msgid " (%s to go)"
msgstr " (%s �n�}�l)"

#: src/http.c:765
msgid "ignored"
msgstr "����"

#: src/http.c:848
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "ĵ�i: �b HTTP �̭��ä䴩�U�Φr���Ÿ� (wildcards).\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:863
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "�ɮ� `%s' �w�g�s�b�A�N�����^.\n"

#: src/http.c:969
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "�L�k�g�� `%s' (%s).\n"

#: src/http.c:979
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "���~: �n�D���s�w�V (%d) �o�S����m.\n"

#: src/http.c:995
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ���~ %d: %s.\n"

#: src/http.c:1007
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "�� \"Last-modified\" �����Y -- �ɶ��W�O�Q����.\n"

#: src/http.c:1015
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "�L�Ī� \"Last-modified\" ���Y -- �ɶ��W�O�Q����.\n"

#: src/http.c:1047
msgid "Remote file is newer, retrieving.\n"
msgstr "���ݪ��ɮפ���s�A���^��.\n"

#: src/http.c:1081
#, c-format
msgid "%s (%s) - `%s' saved [%ld/%ld]\n\n"
msgstr "%s (%s) - `%s' �Q�s�� [%ld/%ld]\n\n"

#: src/http.c:1113
#, c-format
msgid "%s (%s) - Connection closed at byte %ld. "
msgstr "%s (%s) - �s�u�Q�����b %ld �줸��. "

#: src/http.c:1121
#, c-format
msgid "%s (%s) - `%s' saved [%ld/%ld])\n\n"
msgstr "%s (%s) - `%s' �Q�s�� [%ld/%ld])\n\n"

#: src/http.c:1133
#, c-format
msgid "%s (%s) - Connection closed at byte %ld/%ld. "
msgstr "%s (%s) - �s�u������ %ld/%ld byte."

#: src/http.c:1144
#, c-format
msgid "%s (%s) - Read error at byte %ld (%s)."
msgstr "%s (%s) - �� %ld (%s) �줸�ճB�o��Ū�����~."

#: src/http.c:1152
#, c-format
msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
msgstr "%s (%s) - �� %ld/%ld (%s) �줸�ճB�o��Ū�����~."

#: src/init.c:311 src/netrc.c:249
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: �L�kŪ�� %s (%s).\n"

#: src/init.c:332 src/init.c:338
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: ���ѩ� %s �b�� %d ��.\n"

#: src/init.c:369
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
msgstr "%s: ĵ�i: �t�λP�ϥΪ̪� wgetrc �����V `%s'.\n"

#: src/init.c:460
#, c-format
msgid "%s: BUG: unknown command `%s', value `%s'.\n"
msgstr "%s: BUG: �������R�O `%s', �ƭ� `%s'.\n"

#: src/init.c:487
#, c-format
msgid "%s: %s: Please specify on or off.\n"
msgstr "%s: %s: �ЯS�O���w�}�ҩ�����.\n"

#: src/init.c:505 src/init.c:762 src/init.c:784 src/init.c:857
#, c-format
msgid "%s: %s: Invalid specification `%s'.\n"
msgstr "%s: %s: �L�Ī����w���� `%s'.\n"

#: src/init.c:618 src/init.c:640 src/init.c:662 src/init.c:688
#, c-format
msgid "%s: Invalid specification `%s'\n"
msgstr "%s: �L�Ī����w���� `%s'\n"

#: src/main.c:101
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "�Ϊk: %s [�ﶵ]... [URL]...\n"

#: src/main.c:109
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNY Wget %s, �@�ӫD��ͦ����������ɤu��.\n"

#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
#. don't bitch.  Also, it makes translation much easier.
#: src/main.c:114
msgid "\nMandatory arguments to long options are mandatory for short options too.\n\n"
msgstr "\n�R�O���޼ƨϥΪ����ػP�u���جۦP.\n"

#: src/main.c:117
msgid ""
"Startup:\n"
"  -V,  --version           display the version of Wget and exit.\n"
"  -h,  --help              print this help.\n"
"  -b,  --background        go to background after startup.\n"
"  -e,  --execute=COMMAND   execute a `.wgetrc' command.\n"
"\n"
msgstr ""
"�Ұ�:\n"
"  -V,  --version           ��� Wget �������åB���}.\n"
"  -h,  --help              ��ܳo�ӻ�����.\n"
"  -b,  -background         �b�Ұʤ������I���h.\n"
"  -e,  -execute=COMMAND    ����@�� `.wgetrc' �̭��� COMMAND ���O.\n"
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
"�����ɻP��J���ɮ�:\n"
"  -o,  --output-file=FILE     �����T���� FILE �h.\n"
"  -a,  -append-output=FILE    �W�[�T���� FILE �h.\n"
"  -d,  --debug                ��ܰ�������X.\n"
"  -q,  --quiet                �w�R�Ҧ� (����J����T��).\n"
"  -v,  --verbose              �����Ҧ� (�o�O���w��).\n"
"  -nv, --non-verbose          ���� verboseness, �����O�w�R�Ҧ�.\n"
"  -i,  --input-file=FILE      �q FILE Ū�� URL .\n"
"  -F,  --force-html           ���J���ɮ׷��@ HTML.\n"
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
"�U��:\n"
"  -t,  --tries=NUMBER           �]�w���ƹ��� NUMBER �� (0 �O�L����).\n"
"  -O   --output-document=FILE   ����g�� FILE ��.\n"
"  -nc, --no-clobber             ���}�a�w�g�s�b���ɮ�.\n"
"  -c,  --continue               ���s���o�@�Ӥw�g�s�b���ɮ�.\n"
"       --dot-style=STYLE        �]�w���^���p����ܭ���.\n"
"  -N,  --timestamping           �����^�񥻦a�ª��ɮ�.\n"
"  -S,  --server-response        ��ܦ��A���^�����p.\n"
"       --spider                 ���U������F��.\n"
"  -T,  --timeout=SECONDS        �]�wŪ���ɶW�L���ɶ��� SECONDS ��.\n"
"  -w,  --wait=SECONDS           �b���^�ɮ׮ɵ��� SECONDS ��.\n"
"  -Y,  --proxy=on/off           �}�ҩ����� Proxy.\n"
"  -Q,  --quota=NUMBER           �]�w���^�ɮת��w�B��� NUMBER ��.\n"
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
"�ؿ�:\n"
"  -nd  --no-directories            ���إߥؿ�.\n"
"  -x,  --force-directories         �j��i��ؿ��إߪ��u�@.\n"
"  -nH, --no-host-directories       ���إߥD�����ؿ�.\n"
"  -P,  --directory-prefix=PREFIX   ���ɮצs�� PREFIX/...\n"
"       --cut-dirs=NUMBER           ���� NUMBER �ӻ��ݪ��ؿ�����.\n"
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
"HTTP �ﶵ:\n"
"       --http-user=USER       �] http �ϥΪ̬� USER.\n"
"       --http0passwd=PASS     �] http �ϥΪ̪��K�X�� PASS.\n"
"  -C,  --cache=on/off         ����/�����֨����A����� (���`���p������).\n"
"       --ignore-length        ���� `Content-Length' ���Y���.\n"
"       --proxy-user=USER      �] USER �� Proxy �ϥΪ̦W��.\n"
"       --proxy-passwd=PASS    �] PASS �� Proxy �K�X.\n"
"  -s,  --save-headers         �x�s HTTP ���Y�����ɮ�.\n"
"  -U,  --user-agent=AGENT     �ϥ� AGENT ���N Wget/VERSION �@���ѧO�N��.\n"
"\n"

#: src/main.c:165
msgid ""
"FTP options:\n"
"       --retr-symlinks   retrieve FTP symbolic links.\n"
"  -g,  --glob=on/off     turn file name globbing on or off.\n"
"       --passive-ftp     use the \"passive\" transfer mode.\n"
"\n"
msgstr ""
"FTP �ﶵ:\n"
"       --retr-symlinks   ���^ FTP ���H�x�s��.\n"
"  -g,  --glob=on/off     turn file name globbing on ot off.\n"
"       --passive-ftp     �ϥ� \"passive\" �ǿ�Ҧ�.\n"
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
"�ϥλ��j�覡�����^:\n"
"  -r,  --recursive             ���O�l�J web �����^ -- �Фp�ߨϥ�!.\n"
"  -l,  --level=NUMBER          ���j�h�����̤j�� (0 ������).\n"
"       --delete-after          �R���U���������ɮ�.\n"
"  -k,  --convert-links         ���ܨS�����s���s�����������s.\n"
"  -m,  --mirror                �}�ҾA�X�ΨӬM�g���ﶵ.\n"
"  -nr, --dont-remove-listing   ���n���� `.listing' ��.\n"
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
"���j���@�~�����\\�P�ڵ��ﶵ:\n"
"  -A,  --accept=LIST                ���\\���X�R���ت��C��.\n"
"  -R,  --reject=LIST                �ڵ����X�R���ت��C��.\n"
"  -D,  --domains=LIST               ���\\������C��.\n"
"       --exclude-domains=LIST       �ڵ�������C�� (�ϥγr���Ӥ��j).\n"
"  -L,  --relative                   �u���H���p�s���e�i.\n"
"       --follow-ftp                 ���H HTML ���̭��� FTP �s��.\n"
"  -H,  --span-hosts                 ���}�l���j�ɫK��~�����D��.\n"
"  -I,  --include-directories=LIST   ���\\���ؿ��C��.\n"
"  -X,  --exclude-directories=LIST   �ư����ؿ��C��.\n"
"  -nh, --no-host-lookup             ���z�L DNS �d�M�D��.\n"
"  -np, --no-parent                  ���l�Ҩ�_���ؿ�.\n"
"\n"

#: src/main.c:191
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "���~�^���P��ĳ�бH�� <bug-wget@gnu.org>.\n"

#: src/main.c:347
#, c-format
msgid "%s: debug support not compiled in.\n"
msgstr "%s: �����䴩�\\��Q�S���Q�sĶ�i��.\n"

#: src/main.c:395
msgid ""
"Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.\n"
"This program is distributed in the hope that it will be useful,\n"
"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"GNU General Public License for more details.\n"
msgstr ""

#: src/main.c:401
msgid "\nWritten by Hrvoje Niksic <hniksic@srce.hr>.\n"
msgstr "\n�� Hrvoje Niksic <hniksic@srce.hr> ���g.\n"

#: src/main.c:465
#, c-format
msgid "%s: %s: invalid command\n"
msgstr "%s: %s: �L�Ī��R�O\n"

#: src/main.c:515
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: �H�k���ﶵ -- `-n%c'\n"

#. #### Something nicer should be printed here -- similar to the
#. pre-1.5 `--help' page.
#: src/main.c:518 src/main.c:560 src/main.c:591
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "�յۨϥ� `%s --help' ���o��h���ﶵ.\n"

#: src/main.c:571
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "�L�k�P�ɨϥΤ����Ҧ��M�w�R�Ҧ�.\n"

#: src/main.c:577
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "�L�k�P�ɭק�ɶ��W�O�M�л\\����.\n"

#. No URL specified.
#: src/main.c:586
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: �� URL \n"

#: src/main.c:670
#, c-format
msgid "No URLs found in %s.\n"
msgstr "�b %s �̭��䤣����� URL.\n"

#: src/main.c:679
#, c-format
msgid ""
"\n"
"FINISHED --%s--\n"
"Downloaded: %s bytes in %d files\n"
msgstr ""
"\n"
"�w�g���� --%s--\n"
"�U��: %s �줸�զb %d �ɮ׸�\n"

#: src/main.c:684
#, c-format
msgid "Download quota (%s bytes) EXCEEDED!\n"
msgstr "�U�����w�B (%s �줸��) �w�g�W�L!\n"

#. Please note that the double `%' in `%%s' is intentional, because
#. redirect_output passes tmp through printf.
#: src/main.c:711
msgid "%s received, redirecting output to `%%s'.\n"
msgstr "%s: �w�g�����L�A�N��X���s���V `%%s'.\n"

#: src/mswindows.c:118
#, c-format
msgid ""
"\n"
"CTRL+Break received, redirecting output to `%s'.\n"
"Execution continued in background.\n"
"You may stop Wget by pressing CTRL+ALT+DELETE.\n"
msgstr ""
"\n"
"�w�g������ CTRL+Break �T���A�N��X���s���V `%s'.\n"
"�w�g�b�I�����~�����F.\n"
"�z�i�H�ǥѫ��U CTRL+ALT+DELETE �Ӱ��� Wget.\n"

#. parent, no error
#: src/mswindows.c:135 src/utils.c:265
msgid "Continuing in background.\n"
msgstr "�b�I���~�����.\n"

#: src/mswindows.c:137 src/utils.c:267
#, c-format
msgid "Output will be written to `%s'.\n"
msgstr "��X�����e�N�Q�g�� `%s'.\n"

#: src/mswindows.c:227
#, c-format
msgid "Starting WinHelp %s\n"
msgstr "�Ұ� WinHelp %s ��\n"

#: src/mswindows.c:254 src/mswindows.c:262
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: �L�k���i�H�ϥΪ� socket �X�ʵ{��.\n"

#: src/netrc.c:333
#, c-format
msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
msgstr "%s: %s:%d: ĵ�i \"%s\" �O���b��������W�٤��e�X�{\n"

#: src/netrc.c:365
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: �������O�� \"%s\"\n"

#: src/netrc.c:429
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "�Ϊk: %s NETRC [�D���W��]\n"

#: src/netrc.c:439
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: �L�k�}�l %s: %s\n"

#: src/recur.c:449 src/retr.c:462
#, c-format
msgid "Removing %s.\n"
msgstr "���b���� %s.\n"

#: src/recur.c:450
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "�۱q %s ���Q�ڵ����_�K�}�l������.\n"

#: src/recur.c:609
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "���J robots.txt; �Щ������~.\n"

#: src/retr.c:193
#, c-format
msgid "\n          [ skipping %dK ]"
msgstr "\n          [ �b���L %dk ]"

#: src/retr.c:344
msgid "Could not find proxy host.\n"
msgstr "�L�k��� Proxy �D��.\n"

#: src/retr.c:355
#, c-format
msgid "Proxy %s: Must be HTTP.\n"
msgstr "Proxy %s: �����O HTTP.\n"

#: src/retr.c:398
#, c-format
msgid "%s: Redirection to itself.\n"
msgstr "%s: ���s���V�쥦�ۤv.\n"

#: src/retr.c:483
msgid "Giving up.\n\n"
msgstr "���.\n\n"

#: src/retr.c:483
msgid "Retrying.\n\n"
msgstr "���s���դ�.\n\n"

#: src/url.c:940
#, c-format
msgid "Error (%s): Link %s without a base provided.\n"
msgstr "���~ (%s): %s �o�ӳs�����ݭn�@�Ӱ�Ǩ����I.\n"

#: src/url.c:954
#, c-format
msgid "Error (%s): Base %s relative, without referer URL.\n"
msgstr "���~ (%s): ��� %s ���s���t�G�A���ݭn���� URL.\n"

#: src/url.c:1363
#, c-format
msgid "Converting %s... "
msgstr "�ഫ�� %s... "

#: src/url.c:1368 src/url.c:1379
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "�L�k�ഫ�b %s: %s ���s��\n"

#: src/utils.c:68
#, c-format
msgid "%s: %s: Not enough memory.\n"
msgstr "%s: %s: �S���������O����.\n"

#: src/utils.c:200
msgid "Unknown/unsupported protocol"
msgstr "������/���䴩���q�T��w"

#: src/utils.c:203
msgid "Invalid port specification"
msgstr "�L�Ī��𸹳W��"

#: src/utils.c:206
msgid "Invalid host name"
msgstr "�L�Ī��D���W��"

#: src/utils.c:427
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "���ѩ���� `%s': %s ���H�x�s��\n"