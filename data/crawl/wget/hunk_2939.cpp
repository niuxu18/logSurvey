 "Retrying.\n"
 "\n"
 
-#: src/url.c:621
+#: src/url.c:642
 msgid "No error"
 msgstr "No error"
 
-#: src/url.c:623
+#: src/url.c:644
 msgid "Unsupported scheme"
 msgstr "Unsupported scheme"
 
-#: src/url.c:625
+#: src/url.c:646
 msgid "Empty host"
 msgstr "Empty host"
 
-#: src/url.c:627
+#: src/url.c:648
 msgid "Bad port number"
 msgstr "Bad port number"
 
-#: src/url.c:629
+#: src/url.c:650
 msgid "Invalid user name"
 msgstr "Invalid user name"
 
-#: src/url.c:631
+#: src/url.c:652
 msgid "Unterminated IPv6 numeric address"
 msgstr "Unterminated IPv6 numeric address"
 
-#: src/url.c:633
+#: src/url.c:654
 msgid "IPv6 addresses not supported"
 msgstr "IPv6 addresses not supported"
 
-#: src/url.c:635
+#: src/url.c:656
 msgid "Invalid IPv6 numeric address"
 msgstr "Invalid IPv6 numeric address"
 
-#: src/utils.c:120
-#, c-format
-msgid "%s: %s: Not enough memory.\n"
-msgstr "%s: %s: Not enough memory.\n"
-
 #. parent, no error
-#: src/utils.c:485
+#: src/utils.c:347
 #, c-format
 msgid "Continuing in background, pid %d.\n"
 msgstr "Continuing in background, pid %d.\n"
 
-#: src/utils.c:529
+#: src/utils.c:391
 #, c-format
 msgid "Failed to unlink symlink `%s': %s\n"
 msgstr "Failed to unlink symlink `%s': %s\n"
+
+#: src/xmalloc.c:72
+#, c-format
+msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
+msgstr ""
+
+#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
+#~ msgstr "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
+
+#~ msgid ""
+#~ "\n"
+#~ "REST failed; will not truncate `%s'.\n"
+#~ msgstr ""
+#~ "\n"
+#~ "REST failed; will not truncate `%s'.\n"
+
+#~ msgid " [%s to go]"
+#~ msgstr " [%s to go]"
+
+#~ msgid "Host not found"
+#~ msgstr "Host not found"
+
+#~ msgid "End of file while parsing headers.\n"
+#~ msgstr "End of file while parsing headers.\n"
+
+#~ msgid ""
+#~ "\n"
+#~ "Continued download failed on this file, which conflicts with `-c'.\n"
+#~ "Refusing to truncate existing file `%s'.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "\n"
+#~ "Continued download failed on this file, which conflicts with `-c'.\n"
+#~ "Refusing to truncate existing file `%s'.\n"
+#~ "\n"
+
+#~ msgid " (%s to go)"
+#~ msgstr " (%s to go)"
+
+#~ msgid ""
+#~ "Startup:\n"
+#~ "  -V,  --version           display the version of Wget and exit.\n"
+#~ "  -h,  --help              print this help.\n"
+#~ "  -b,  --background        go to background after startup.\n"
+#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Startup:\n"
+#~ "  -V,  --version           display the version of Wget and exit.\n"
+#~ "  -h,  --help              print this help.\n"
+#~ "  -b,  --background        go to background after startup.\n"
+#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "Logging and input file:\n"
+#~ "  -o,  --output-file=FILE     log messages to FILE.\n"
+#~ "  -a,  --append-output=FILE   append messages to FILE.\n"
+#~ "  -d,  --debug                print debug output.\n"
+#~ "  -q,  --quiet                quiet (no output).\n"
+#~ "  -v,  --verbose              be verbose (this is the default).\n"
+#~ "  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
+#~ "  -i,  --input-file=FILE      download URLs found in FILE.\n"
+#~ "  -F,  --force-html           treat input file as HTML.\n"
+#~ "  -B,  --base=URL             prepends URL to relative links in -F -i "
+#~ "file.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Logging and input file:\n"
+#~ "  -o,  --output-file=FILE     log messages to FILE.\n"
+#~ "  -a,  --append-output=FILE   append messages to FILE.\n"
+#~ "  -d,  --debug                print debug output.\n"
+#~ "  -q,  --quiet                quiet (no output).\n"
+#~ "  -v,  --verbose              be verbose (this is the default).\n"
+#~ "  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
+#~ "  -i,  --input-file=FILE      download URLs found in FILE.\n"
+#~ "  -F,  --force-html           treat input file as HTML.\n"
+#~ "  -B,  --base=URL             prepends URL to relative links in -F -i "
+#~ "file.\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "Download:\n"
+#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
+#~ "unlimits).\n"
+#~ "       --retry-connrefused      retry even if connection is refused.\n"
+#~ "  -O   --output-document=FILE   write documents to FILE.\n"
+#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
+#~ "suffixes.\n"
+#~ "  -c,  --continue               resume getting a partially-downloaded "
+#~ "file.\n"
+#~ "       --progress=TYPE          select progress gauge type.\n"
+#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
+#~ "local.\n"
+#~ "  -S,  --server-response        print server response.\n"
+#~ "       --spider                 don't download anything.\n"
+#~ "  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
+#~ "       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
+#~ "       --connect-timeout=SECS   set the connect timeout to SECS.\n"
+#~ "       --read-timeout=SECS      set the read timeout to SECS.\n"
+#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
+#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
+#~ "retrieval.\n"
+#~ "       --random-wait            wait from 0...2*WAIT secs between "
+#~ "retrievals.\n"
+#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
+#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
+#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
+#~ "host.\n"
+#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
+#~ "       --dns-cache=off          disable caching DNS lookups.\n"
+#~ "       --restrict-file-names=OS restrict chars in file names to ones OS "
+#~ "allows.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Download:\n"
+#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
+#~ "unlimits).\n"
+#~ "       --retry-connrefused      retry even if connection is refused.\n"
+#~ "  -O   --output-document=FILE   write documents to FILE.\n"
+#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
+#~ "suffixes.\n"
+#~ "  -c,  --continue               resume getting a partially-downloaded "
+#~ "file.\n"
+#~ "       --progress=TYPE          select progress gauge type.\n"
+#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
+#~ "local.\n"
+#~ "  -S,  --server-response        print server response.\n"
+#~ "       --spider                 don't download anything.\n"
+#~ "  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
+#~ "       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
+#~ "       --connect-timeout=SECS   set the connect timeout to SECS.\n"
+#~ "       --read-timeout=SECS      set the read timeout to SECS.\n"
+#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
+#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
+#~ "retrieval.\n"
+#~ "       --random-wait            wait from 0...2*WAIT secs between "
+#~ "retrievals.\n"
+#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
+#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
+#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
+#~ "host.\n"
+#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
+#~ "       --dns-cache=off          disable caching DNS lookups.\n"
+#~ "       --restrict-file-names=OS restrict chars in file names to ones OS "
+#~ "allows.\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "Directories:\n"
+#~ "  -nd, --no-directories            don't create directories.\n"
+#~ "  -x,  --force-directories         force creation of directories.\n"
+#~ "  -nH, --no-host-directories       don't create host directories.\n"
+#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
+#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
+#~ "components.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Directories:\n"
+#~ "  -nd, --no-directories            don't create directories.\n"
+#~ "  -x,  --force-directories         force creation of directories.\n"
+#~ "  -nH, --no-host-directories       don't create host directories.\n"
+#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
+#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
+#~ "components.\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "HTTP options:\n"
+#~ "       --http-user=USER      set http user to USER.\n"
+#~ "       --http-passwd=PASS    set http password to PASS.\n"
+#~ "  -C,  --cache=on/off        (dis)allow server-cached data (normally "
+#~ "allowed).\n"
+#~ "  -E,  --html-extension      save all text/html documents with .html "
+#~ "extension.\n"
+#~ "       --ignore-length       ignore `Content-Length' header field.\n"
+#~ "       --header=STRING       insert STRING among the headers.\n"
+#~ "       --proxy-user=USER     set USER as proxy username.\n"
+#~ "       --proxy-passwd=PASS   set PASS as proxy password.\n"
+#~ "       --referer=URL         include `Referer: URL' header in HTTP "
+#~ "request.\n"
+#~ "  -s,  --save-headers        save the HTTP headers to file.\n"
+#~ "  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
+#~ "       --no-http-keep-alive  disable HTTP keep-alive (persistent "
+#~ "connections).\n"
+#~ "       --cookies=off         don't use cookies.\n"
+#~ "       --load-cookies=FILE   load cookies from FILE before session.\n"
+#~ "       --save-cookies=FILE   save cookies to FILE after session.\n"
+#~ "       --post-data=STRING    use the POST method; send STRING as the "
+#~ "data.\n"
+#~ "       --post-file=FILE      use the POST method; send contents of FILE.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "HTTP options:\n"
+#~ "       --http-user=USER      set http user to USER.\n"
+#~ "       --http-passwd=PASS    set http password to PASS.\n"
+#~ "  -C,  --cache=on/off        (dis)allow server-cached data (normally "
+#~ "allowed).\n"
+#~ "  -E,  --html-extension      save all text/html documents with .html "
+#~ "extension.\n"
+#~ "       --ignore-length       ignore `Content-Length' header field.\n"
+#~ "       --header=STRING       insert STRING among the headers.\n"
+#~ "       --proxy-user=USER     set USER as proxy username.\n"
+#~ "       --proxy-passwd=PASS   set PASS as proxy password.\n"
+#~ "       --referer=URL         include `Referer: URL' header in HTTP "
+#~ "request.\n"
+#~ "  -s,  --save-headers        save the HTTP headers to file.\n"
+#~ "  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
+#~ "       --no-http-keep-alive  disable HTTP keep-alive (persistent "
+#~ "connections).\n"
+#~ "       --cookies=off         don't use cookies.\n"
+#~ "       --load-cookies=FILE   load cookies from FILE before session.\n"
+#~ "       --save-cookies=FILE   save cookies to FILE after session.\n"
+#~ "       --post-data=STRING    use the POST method; send STRING as the "
+#~ "data.\n"
+#~ "       --post-file=FILE      use the POST method; send contents of FILE.\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "HTTPS (SSL) options:\n"
+#~ "       --sslcertfile=FILE     optional client certificate.\n"
+#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
+#~ "       --egd-file=FILE        file name of the EGD socket.\n"
+#~ "       --sslcadir=DIR         dir where hash list of CA's are stored.\n"
+#~ "       --sslcafile=FILE       file with bundle of CA's\n"
+#~ "       --sslcerttype=0/1      Client-Cert type 0=PEM (default) / 1=ASN1 "
+#~ "(DER)\n"
+#~ "       --sslcheckcert=0/1     Check the server cert agenst given CA\n"
+#~ "       --sslprotocol=0-3      choose SSL protocol; 0=automatic,\n"
+#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
+#~ "\n"
+#~ msgstr ""
+#~ "HTTPS (SSL) options:\n"
+#~ "       --sslcertfile=FILE     optional client certificate.\n"
+#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
+#~ "       --egd-file=FILE        file name of the EGD socket.\n"
+#~ "       --sslcadir=DIR         dir where hash list of CA's are stored.\n"
+#~ "       --sslcafile=FILE       file with bundle of CA's\n"
+#~ "       --sslcerttype=0/1      Client-Cert type 0=PEM (default) / 1=ASN1 "
+#~ "(DER)\n"
+#~ "       --sslcheckcert=0/1     Check the server cert agenst given CA\n"
+#~ "       --sslprotocol=0-3      choose SSL protocol; 0=automatic,\n"
+#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "FTP options:\n"
+#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
+#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
+#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
+#~ "       --retr-symlinks         when recursing, get linked-to files (not "
+#~ "dirs).\n"
+#~ "\n"
+#~ msgstr ""
+#~ "FTP options:\n"
+#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
+#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
+#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
+#~ "       --retr-symlinks         when recursing, get linked-to files (not "
+#~ "dirs).\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "Recursive retrieval:\n"
+#~ "  -r,  --recursive          recursive download.\n"
+#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
+#~ "infinite).\n"
+#~ "       --delete-after       delete files locally after downloading them.\n"
+#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
+#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
+#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
+#~ "nr.\n"
+#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
+#~ "page.\n"
+#~ "       --strict-comments    turn on strict (SGML) handling of HTML "
+#~ "comments.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Recursive retrieval:\n"
+#~ "  -r,  --recursive          recursive download.\n"
+#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
+#~ "infinite).\n"
+#~ "       --delete-after       delete files locally after downloading them.\n"
+#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
+#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
+#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
+#~ "nr.\n"
+#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
+#~ "page.\n"
+#~ "       --strict-comments    turn on strict (SGML) handling of HTML "
+#~ "comments.\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "Recursive accept/reject:\n"
+#~ "  -A,  --accept=LIST                comma-separated list of accepted "
+#~ "extensions.\n"
+#~ "  -R,  --reject=LIST                comma-separated list of rejected "
+#~ "extensions.\n"
+#~ "  -D,  --domains=LIST               comma-separated list of accepted "
+#~ "domains.\n"
+#~ "       --exclude-domains=LIST       comma-separated list of rejected "
+#~ "domains.\n"
+#~ "       --follow-ftp                 follow FTP links from HTML "
+#~ "documents.\n"
+#~ "       --follow-tags=LIST           comma-separated list of followed HTML "
+#~ "tags.\n"
+#~ "  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML "
+#~ "tags.\n"
+#~ "  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
+#~ "  -L,  --relative                   follow relative links only.\n"
+#~ "  -I,  --include-directories=LIST   list of allowed directories.\n"
+#~ "  -X,  --exclude-directories=LIST   list of excluded directories.\n"
+#~ "  -np, --no-parent                  don't ascend to the parent "
+#~ "directory.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Recursive accept/reject:\n"
+#~ "  -A,  --accept=LIST                comma-separated list of accepted "
+#~ "extensions.\n"
+#~ "  -R,  --reject=LIST                comma-separated list of rejected "
+#~ "extensions.\n"
+#~ "  -D,  --domains=LIST               comma-separated list of accepted "
+#~ "domains.\n"
+#~ "       --exclude-domains=LIST       comma-separated list of rejected "
+#~ "domains.\n"
+#~ "       --follow-ftp                 follow FTP links from HTML "
+#~ "documents.\n"
+#~ "       --follow-tags=LIST           comma-separated list of followed HTML "
+#~ "tags.\n"
+#~ "  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML "
+#~ "tags.\n"
+#~ "  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
+#~ "  -L,  --relative                   follow relative links only.\n"
+#~ "  -I,  --include-directories=LIST   list of allowed directories.\n"
+#~ "  -X,  --exclude-directories=LIST   list of excluded directories.\n"
+#~ "  -np, --no-parent                  don't ascend to the parent "
+#~ "directory.\n"
+#~ "\n"
+
+#~ msgid "%s: debug support not compiled in.\n"
+#~ msgstr "%s: debug support not compiled in.\n"
+
+#~ msgid "Starting WinHelp %s\n"
+#~ msgstr "Starting WinHelp %s\n"
+
+#~ msgid "%s: %s: Not enough memory.\n"
+#~ msgstr "%s: %s: Not enough memory.\n"
