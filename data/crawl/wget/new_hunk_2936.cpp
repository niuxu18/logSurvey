"���������� ����.\n"
"\n"

#: src/url.c:642
#, fuzzy
msgid "No error"
msgstr "������� ������"

#: src/url.c:644
msgid "Unsupported scheme"
msgstr ""

#: src/url.c:646
msgid "Empty host"
msgstr ""

#: src/url.c:648
msgid "Bad port number"
msgstr ""

#: src/url.c:650
#, fuzzy
msgid "Invalid user name"
msgstr "�� ������ ����� �����������"

#: src/url.c:652
msgid "Unterminated IPv6 numeric address"
msgstr ""

#: src/url.c:654
msgid "IPv6 addresses not supported"
msgstr ""

#: src/url.c:656
msgid "Invalid IPv6 numeric address"
msgstr ""

#. parent, no error
#: src/utils.c:347
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr ""
"�������� ��� ����������, ��������� ���������� (pid) %d.\n"
"\n"

#: src/utils.c:391
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "�������� ��������� ���������� ��������� `%s': %s\n"

#: src/xmalloc.c:72
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "��������� ������ ��� Set-Cookie ��� ��������� `%c'.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "�������� ��� REST� �� �� ����������� �� `%s'.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s ��� �����]"

#~ msgid "Host not found"
#~ msgstr "� ����������� �� �������"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "����� ������� ��� ������� ����������� ��� ���������.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "� �������� ��� ��������� ������� ��� ���� �� ������, ��� ����������� �� "
#~ "�� `-c'.\n"
#~ "������ �������� ���� ��� ������ ������ `%s'.\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s ����� �����)"

#~ msgid "%s: BUG: unknown command `%s', value `%s'.\n"
#~ msgstr "%s: ������: ������� ������ `%s', ���� `%s'.\n"

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: ��� ����� ������ � ��������� ��� `%s' �� ��������� IP.\n"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "������:\n"
#~ "  -V,  --version           �������� ��� ������� ��� Wget ��� ������.\n"
#~ "  -h,  --help              �������� ��� �������� �����.\n"
#~ "  -b,  --background        �������� ��� ���������� ���� ��� ������.\n"
#~ "  -e,  --execute=������    �������� ���� ������� ������ `.wgetrc'.\n"
#~ "\n"

#~ msgid ""
#~ "Logging and input file:\n"
#~ "  -o,  --output-file=FILE     log messages to FILE.\n"
#~ "  -a,  --append-output=FILE   append messages to FILE.\n"
#~ "  -d,  --debug                print debug output.\n"
#~ "  -q,  --quiet                quiet (no output).\n"
#~ "  -v,  --verbose              be verbose (this is the default).\n"
#~ "  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
#~ "  -i,  --input-file=FILE      download URLs found in FILE.\n"
#~ "  -F,  --force-html           treat input file as HTML.\n"
#~ "  -B,  --base=URL             prepends URL to relative links in -F -i "
#~ "file.\n"
#~ "       --sslcertfile=FILE     optional client certificate.\n"
#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
#~ "       --egd-file=FILE        file name of the EGD socket.\n"
#~ "\n"
#~ msgstr ""
#~ "��������޷����������������:\n"
#~ "  -o,  --output-file=������   ��������޷�������������������.\n"
#~ "  -a,  --append-output=������ ���������������������������.\n"
#~ "  -d,  --debug                ���������������������������������.\n"
#~ "  -q,  --quiet                ������ܷ(����������).\n"
#~ "  -v,  --verbose              �����������ܷ(��'����������������).\n"
#~ "  -nv, --non-verbose          �������������������������������,"
#~ "�����������������������.\n"
#~ "  -i,  --input-file=������    ��������URL�������������.\n"
#~ "  -F,  --force-html           "
#~ "�����������������������������������HTML.\n"
#~ "  -B,  --base=URL             "
#~ "�����������URL����������������������������-F�-i�������.\n"
#~ "       --sslcertfile=������   ��������������������������������.\n"
#~ "       --sslcertkey=������    ����������� ������ �������� ��� ���� �� "
#~ "�������������.\n"
#~ "       --egd-file=������      ����� ������� ��� ��� �������� EGD.\n"
#~ "\n"

#~ msgid ""
#~ "Download:\n"
#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
#~ "host.\n"
#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
#~ "unlimits).\n"
#~ "  -O   --output-document=FILE   write documents to FILE.\n"
#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
#~ "suffixes.\n"
#~ "  -c,  --continue               resume getting a partially-downloaded "
#~ "file.\n"
#~ "       --progress=TYPE          select progress gauge type.\n"
#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
#~ "local.\n"
#~ "  -S,  --server-response        print server response.\n"
#~ "       --spider                 don't download anything.\n"
#~ "  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
#~ "retrieval.\n"
#~ "       --random-wait            wait from 0...2*WAIT secs between "
#~ "retrievals.\n"
#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
#~ "\n"
#~ msgstr ""
#~ "�����������:\n"
#~ "       --bind-address=��������� ������� ��� ��������� (����� ���������� � "
#~ "IP) ��� ������ �������.\n"
#~ "  -t,  --tries=�������          ������� ��� ������� ��� ����������� �� "
#~ "������� (0 ��� ����� ����).\n"
#~ "  -O   --output-document=������ ������� �������� ��� ������.\n"
#~ "  -nc, --no-clobber             �� ��� ��������� �� ������� ���������� "
#~ "������� � �� ������ ���������� .#.\n"
#~ "  -c,  --continue               �������� ��������� ���������� �������.\n"
#~ "       --progress=�����         ������� ��� ������ ��������� ��� ������� "
#~ "���������.\n"
#~ "  -N,  --timestamping           ������� ��������� ������� ����������� ��� "
#~ "�������.\n"
#~ "  -S,  --server-response        �������� ���������� ��� ����������.\n"
#~ "       --spider                 ������� ��������� ������������ �������.\n"
#~ "  -T,  --timeout=������������   ������� �������� ����� ��������� �� "
#~ "������������.\n"
#~ "  -w,  --wait=������������      ������� ������������ ������ ����������.\n"
#~ "       --waitretry=������������ ������� 1...������������ ������ "
#~ "����������� ���������.\n"
#~ "       --random-wait            ������� ��� 0...2*����������� "
#~ "������������ ������ ����������.\n"
#~ "  -Y,  --proxy=on/off           ������� ������ ������������� �� ������ "
#~ "(on) � �������� (off).\n"
#~ "  -Q,  --quota=�������          ������� ����� ��������� �������� ������� "
#~ "���� �������� �� ������.\n"
#~ "       --limit-rate=������      ����������� ��� ������ ��������� �� "
#~ "������.\n"
#~ "\n"

#~ msgid ""
#~ "Directories:\n"
#~ "  -nd  --no-directories            don't create directories.\n"
#~ "  -x,  --force-directories         force creation of directories.\n"
#~ "  -nH, --no-host-directories       don't create host directories.\n"
#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
#~ "components.\n"
#~ "\n"
#~ msgstr ""
#~ "���������:\n"
#~ "  -nd  --no-directories            ������� ����������� ���������.\n"
#~ "  -x,  --force-directories         ����������� ���������� ���������.\n"
#~ "  -nH, --no-host-directories       ������� ����������� host directories.\n"
#~ "  -P,  --directory-prefix=�������  ���������� ������� ��� �������/...\n"
#~ "       --cut-dirs=�������          ������� ������� ��������� "
#~ "�������������� ���������\n"
#~ "\n"

#~ msgid ""
#~ "HTTP options:\n"
#~ "       --http-user=USER      set http user to USER.\n"
#~ "       --http-passwd=PASS    set http password to PASS.\n"
#~ "  -C,  --cache=on/off        (dis)allow server-cached data (normally "
#~ "allowed).\n"
#~ "  -E,  --html-extension      save all text/html documents with .html "
#~ "extension.\n"
#~ "       --ignore-length       ignore `Content-Length' header field.\n"
#~ "       --header=STRING       insert STRING among the headers.\n"
#~ "       --proxy-user=USER     set USER as proxy username.\n"
#~ "       --proxy-passwd=PASS   set PASS as proxy password.\n"
#~ "       --referer=URL         include `Referer: URL' header in HTTP "
#~ "request.\n"
#~ "  -s,  --save-headers        save the HTTP headers to file.\n"
#~ "  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
#~ "       --no-http-keep-alive  disable HTTP keep-alive (persistent "
#~ "connections).\n"
#~ "       --cookies=off         don't use cookies.\n"
#~ "       --load-cookies=FILE   load cookies from FILE before session.\n"
#~ "       --save-cookies=FILE   save cookies to FILE after session.\n"
#~ "\n"
#~ msgstr ""
#~ "�������� HTTP:\n"
#~ "       --http-user=�������   ������� ������ http �� ������.\n"
#~ "       --http-passwd=������� ������� ������� ������ http �� �������.\n"
#~ "  -C,  --cache=on/off        ��������/����� ��������� ��� ������������� "
#~ "(�������� �����������).\n"
#~ "  -E,  --html-extension      ���������� ���� ��� �������� text/html �� "
#~ "�������� .html.\n"
#~ "       --ignore-length       ������� ��� ������ `Content-Length' ��� "
#~ "���������.\n"
#~ "       --header=�������������  �������� ��� ������������� ���� ��������.\n"
#~ "       --proxy-user=�������  ������� ��� ������� ��� ������ ��� "
#~ "�������������.\n"
#~ "       --proxy-passwd=�������  ������� ��� ������� ��� ������� ��� "
#~ "�������������.\n"
#~ "       --referer=URL         ����� ��������� `Referer: URL' ���� ������ "
#~ "HTTP.\n"
#~ "  -s,  --save-headers        ���������� ��� HTTP ��������� �� ������.\n"
#~ "  -U,  --user-agent=��������� ����� ��� ��������� ���� ��� Wget/������.\n"
#~ "       --no-http-keep-alive  �������������� ��� HTTP keep-alive "
#~ "(��������� ���������).\n"
#~ "       --cookies=off         �� �� ����� ����� ��� cookies.\n"
#~ "       --load-cookies=������ ������� cookies ��� �� ������ ���� �� "
#~ "��������.\n"
#~ "       --save-cookies=������ ���������� ��� cookies ��� ������ ���� �� "
#~ "��������.\n"
#~ "\n"

#~ msgid ""
#~ "FTP options:\n"
#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
#~ "       --retr-symlinks         when recursing, get linked-to files (not "
#~ "dirs).\n"
#~ "\n"
#~ msgstr ""
#~ "�������� FTP:\n"
#~ "  -nr, --dont-remove-listing �� �� ���������� �� ������ `.listing'.\n"
#~ "  -g,  --glob=on/off         (��)������������ ������������ �������� "
#~ "�������.\n"
#~ "       --passive-ftp         ����� ���������� ��������� \"passive\" ��� "
#~ "�� FTP.\n"
#~ "       --retr-symlinks       ���� ��� ���������� ��������, ���� "
#~ "������������ ������� (��� ���������).\n"
#~ "\n"

#~ msgid ""
#~ "Recursive retrieval:\n"
#~ "  -r,  --recursive          recursive web-suck -- use with care!\n"
#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
#~ "infinite).\n"
#~ "       --delete-after       delete files locally after downloading them.\n"
#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
#~ "page.\n"
#~ "\n"
#~ msgstr ""
#~ "���������� ��������:\n"
#~ "  -r,  --recursive             ���������� �������� -- ����� �� ������!\n"
#~ "  -l,  --level=�������         ������� ����� ��������� (`inf' � 0 ��� "
#~ "�����������).\n"
#~ "       --delete-after          �������� ������� ������ ���� �� "
#~ "����������� ����.\n"
#~ "  -k,  --convert-links         ��������� ��-�������� ��������� �� "
#~ "���������.\n"
#~ "  -K,  --backup-converted      ���� �� ��������� ��� ������� �, ��������� "
#~ "���������� ��������� X.orig.\n"
#~ "  -m,  --mirror                ������� �������, ��������� �� -r -N -l inf "
#~ "-nr.\n"
#~ "  -p,  --page-requisites       ���� ���� ��� �������, ���. ��� "
#~ "����������� ��� ��� �������� ������� HTML.\n"
#~ "\n"

#~ msgid ""
#~ "Recursive accept/reject:\n"
#~ "  -A,  --accept=LIST                comma-separated list of accepted "
#~ "extensions.\n"
#~ "  -R,  --reject=LIST                comma-separated list of rejected "
#~ "extensions.\n"
#~ "  -D,  --domains=LIST               comma-separated list of accepted "
#~ "domains.\n"
#~ "       --exclude-domains=LIST       comma-separated list of rejected "
#~ "domains.\n"
#~ "       --follow-ftp                 follow FTP links from HTML "
#~ "documents.\n"
#~ "       --follow-tags=LIST           comma-separated list of followed HTML "
#~ "tags.\n"
#~ "  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML "
#~ "tags.\n"
#~ "  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
#~ "  -L,  --relative                   follow relative links only.\n"
#~ "  -I,  --include-directories=LIST   list of allowed directories.\n"
#~ "  -X,  --exclude-directories=LIST   list of excluded directories.\n"
#~ "  -np, --no-parent                  don't ascend to the parent "
#~ "directory.\n"
#~ "\n"
#~ msgstr ""
#~ "���������� �������/��������:\n"
#~ "  -A,  --accept=�����               ����� ������������� �� ����� ��� "
#~ "��������� ����������.\n"
#~ "  -R,  --reject=�����               ����� ������������� �� ����� ��� ��-"
#~ "��������� ����������.\n"
#~ "  -D,  --domains=�����              ����� ������������� �� ����� ��� "
#~ "�������� ���������.\n"
#~ "       --exclude-domains=�����      ����� ������������� �� ����� ��� ��-"
#~ "�������� ���������.\n"
#~ "       --follow-ftp                 ���������� ��������� FTP ��� ������� "
#~ "HTML.\n"
#~ "       --follow-tags=�����          ����� ������������� �� ����� �� "
#~ "���������� ��� ����� �����������.\n"
#~ "  -G,  --ignore-tags=�����          ����� ������������� �� ����� �� "
#~ "���������� ��� ����� ��������.\n"
#~ "  -H,  --span-hosts                 �������� ��� ����� ����������� ���� "
#~ "��� ��������.\n"
#~ "  -L,  --relative                   ���������� ���� �������� URL.\n"
#~ "  -I,  --include-directories=�����  ����� ���������� ���������.\n"
#~ "  -X,  --exclude-directories=�����  ����� ��-���������� ���������.\n"
#~ "  -np, --no-parent                  �������������� ��������� ��� ��� "
#~ "������ ��������.\n"
#~ "\n"

#~ msgid "%s: debug support not compiled in.\n"
#~ msgstr ""
#~ "%s: � ���������� ������������� ��� ���� ������������� ��� ������������.\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: �� ������ ������\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "�������� ��� WinHelp %s\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "�������� ������� �������������.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: ����������� ������� ���������������.\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: ��� ������� ������ �����.\n"

#~ msgid "Connection to %s:%hu refused.\n"
#~ msgstr "������� �� %s:%hu ��� ���������.\n"

