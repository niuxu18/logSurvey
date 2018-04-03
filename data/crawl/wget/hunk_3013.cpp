 "重试中。\n"
 "\n"
 
-#: src/url.c:621
+#: src/url.c:642
 msgid "No error"
 msgstr "没有错误"
 
-#: src/url.c:623
+#: src/url.c:644
 msgid "Unsupported scheme"
 msgstr "不支持的主题"
 
-#: src/url.c:625
+#: src/url.c:646
 msgid "Empty host"
 msgstr "未指定主机"
 
-#: src/url.c:627
+#: src/url.c:648
 msgid "Bad port number"
 msgstr "端口号错误"
 
-#: src/url.c:629
+#: src/url.c:650
 msgid "Invalid user name"
 msgstr "无效的用户名"
 
-#: src/url.c:631
+#: src/url.c:652
 msgid "Unterminated IPv6 numeric address"
 msgstr "未结束的 IPv6 数字地址"
 
-#: src/url.c:633
+#: src/url.c:654
 msgid "IPv6 addresses not supported"
 msgstr "不支持 IPv6 地址"
 
-#: src/url.c:635
+#: src/url.c:656
 msgid "Invalid IPv6 numeric address"
 msgstr "无效的 IPv6 数字地址"
 
-#: src/utils.c:120
-#, c-format
-msgid "%s: %s: Not enough memory.\n"
-msgstr "%s：%s：内存不足。\n"
-
 #. parent, no error
-#: src/utils.c:485
+#: src/utils.c:347
 #, c-format
 msgid "Continuing in background, pid %d.\n"
 msgstr "继续在后台运行，pid 为 %d。\n"
 
-#: src/utils.c:529
+#: src/utils.c:391
 #, c-format
 msgid "Failed to unlink symlink `%s': %s\n"
 msgstr "无法删除符号链接 '%s'：%s\n"
 
+#: src/xmalloc.c:72
+#, c-format
+msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
+msgstr ""
+
+#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
+#~ msgstr "无法转换 “%s”为绑定地址，正在恢复为 ANY。\n"
+
+#~ msgid ""
+#~ "\n"
+#~ "REST failed; will not truncate `%s'.\n"
+#~ msgstr ""
+#~ "\n"
+#~ "重置 (REST) 失败；不会截短‘%s’。\n"
+
+#~ msgid " [%s to go]"
+#~ msgstr " [尚有 %s]"
+
+#~ msgid "Host not found"
+#~ msgstr "找不到主机"
+
+#~ msgid "End of file while parsing headers.\n"
+#~ msgstr "正在分析文件头时，文件已结束。\n"
+
+#~ msgid ""
+#~ "\n"
+#~ "Continued download failed on this file, which conflicts with `-c'.\n"
+#~ "Refusing to truncate existing file `%s'.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "\n"
+#~ "无法续传此文件，与“-c”选项的意义冲突。\n"
+#~ "不会截短已存在的文件“%s”。\n"
+#~ "\n"
+
+#~ msgid " (%s to go)"
+#~ msgstr " (尚有 %s)"
+
+#~ msgid ""
+#~ "Startup:\n"
+#~ "  -V,  --version           display the version of Wget and exit.\n"
+#~ "  -h,  --help              print this help.\n"
+#~ "  -b,  --background        go to background after startup.\n"
+#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "启动：\n"
+#~ "  -V,  --version           显示 Wget 的版本并且退出。\n"
+#~ "  -h,  --help              打印此帮助。\n"
+#~ "  -b,  -background         启动后进入后台操作。\n"
+#~ "  -e,  -execute=COMMAND    运行‘.wgetrc’形式的命令。\n"
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
+#~ "日志记录及输入文件：\n"
+#~ "  -o,  --output-file=文件     将日志消息写入到指定文件中。\n"
+#~ "  -a,  --append-output=文件   将日志消息追加到指定文件的末端。\n"
+#~ "  -d,  --debug                打印调试输出。\n"
+#~ "  -q,  --quiet                安静模式(不输出信息)。\n"
+#~ "  -v,  --verbose               详细输出模式(默认)。\n"
+#~ "  -nv, --non-verbose          关闭详细输出模式，但不进入安静模式。\n"
+#~ "  -i,  --input-file=文件      下载从指定文件中找到的 URL。\n"
+#~ "  -F,  --force-html           以 HTML 方式处理输入文件。\n"
+#~ "  -B,  --base=URL             使用 -F -i 文件选项时，在相对链接前添加指定"
+#~ "的 URL。\n"
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
+#~ "下载：\n"
+#~ "  -t,  --tries=次数             配置重试次数（0 表示无限）。\n"
+#~ "       --retry-connrefused      即使拒绝连接也重试。\n"
+#~ "  -O   --output-document=文件   将数据写入此文件中。\n"
+#~ "  -nc, --no-clobber             不更改已经存在的文件，也不使用在文件名后\n"
+#~ "                                添加 .#（# 为数字）的方法写入新的文件。\n"
+#~ "  -c,  --continue               继续接收已下载了一部分的文件。\n"
+#~ "       --progress=方式          选择下载进度的表示方式。\n"
+#~ "  -N,  --timestamping           除非远程文件较新，否则不再取回。\n"
+#~ "  -S,  --server-response        显示服务器回应消息。\n"
+#~ "       --spider                 不下载任何数据。\n"
+#~ "  -T,  --timeout=秒数           配置读取数据的超时时间 (秒数)。\n"
+#~ "  -w,  --wait=秒数              接收不同文件之间等待的秒数。\n"
+#~ "       --waitretry=秒数         在每次重试之间稍等一段时间 (由 1 秒至指定"
+#~ "的 秒数不等)。\n"
+#~ "       --random-wait            接收不同文件之间稍等一段时间(由 0 秒至  "
+#~ "2*WAIT 秒不等)。\n"
+#~ "  -Y,  --proxy=on/off           打开或关闭代理服务器。\n"
+#~ "  -Q,  --quota=大小             配置接收数据的限额大小。\n"
+#~ "       --bind-address=地址      使用本机的指定地址 (主机名称或 IP) 进行连"
+#~ "接。\n"
+#~ "       --limit-rate=速率        限制下载的速率。\n"
+#~ "       --dns-cache=off          禁止查找存于高速缓存中的 DNS。\n"
+#~ "       --restrict-file-names=OS 限制文件名中的字符为指定的 OS (操作系统) "
+#~ "所允许的字符。\n"
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
+#~ "目录：\n"
+#~ "  -nd  --no-directories            不创建目录。\n"
+#~ "  -x,  --force-directories         强制创建目录。\n"
+#~ "  -nH, --no-host-directories       不创建含有远程主机名称的目录。\n"
+#~ "  -P,  --directory-prefix=名称     保存文件前先创建指定名称的目录。\n"
+#~ "       --cut-dirs=数目             忽略远程目录中指定数目的目录层。\n"
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
+#~ "HTTP 选项：\n"
+#~ "       --http-user=用户    配置 http 用户名。\n"
+#~ "       --http-passwd=密码    配置 http 用户密码。\n"
+#~ "  -C,  --cache=on/off        (不)使用服务器中的高速缓存中的数据 (默认是使"
+#~ "用的)。\n"
+#~ "  -E,  --html-extension      将所有 MIME 类型为 text/html 的文件都加上 ."
+#~ "html 扩展文件名。\n"
+#~ "       --ignore-length       忽略“Content-Length”文件头字段。\n"
+#~ "       --header=字符串         在文件头中添加指定字符串。\n"
+#~ "       --proxy-user=用户   配置代理服务器用户名。\n"
+#~ "       --proxy-passwd=密码   配置代理服务器用户密码。\n"
+#~ "       --referer=URL         在 HTTP 请求中包含“Referer：URL”头。\n"
+#~ "  -s,  --save-headers        将 HTTP 头存入文件。\n"
+#~ "  -U,  --user-agent=AGENT    标志为 AGENT 而不是 Wget/VERSION。\n"
+#~ "       --no-http-keep-alive  禁用 HTTP keep-alive（持久性连接）。\n"
+#~ "       --cookies=off         禁用 cookie。\n"
+#~ "       --load-cookies=文件   会话开始前由指定文件载入 cookie。\n"
+#~ "       --save-cookies=文件   会话结束后将 cookie 保存至指定文件。\n"
+#~ "       --post-data=字符串    使用 POST 方法，发送指定字符串。\n"
+#~ "       --post-file=文件      使用 POST 方法，发送指定文件中的内容。\n"
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
+#~ "HTTPS (SSL) 选项：\n"
+#~ "       --sslcertfile=文件     可选的客户段端证书。\n"
+#~ "       --sslcertkey=密钥文件  对此证书可选的“密钥文件”。\n"
+#~ "       --egd-file=文件        EGD socket 文件名。\n"
+#~ "       --sslcadir=目录         CA 散列表所在的目录。\n"
+#~ "       --sslcafile=文件      包含 CA 的文件。\n"
+#~ "       --sslcerttype=0/1      Client-Cert 类型 0=PEM (默认) / 1=ASN1 "
+#~ "(DER)\n"
+#~ "       --sslcheckcert=0/1     根据提供的 CA 检查服务器的证书\n"
+#~ "       --sslprotocol=0-3      选择 SSL 协议；0=自动选择，\n"
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
+#~ "FTP 选项：\n"
+#~ "  -nr, --dont-remove-listing   不删除“.listing”文件。\n"
+#~ "  -g,  --glob=on/off           设置是否展开有通配符的文件名。\n"
+#~ "       --passive-ftp           使用“被动”传输模式。\n"
+#~ "       --retr-symlinks         在递归模式中，下载链接所指示的文件(连至目"
+#~ "录\n"
+#~ "                               则例外）。\n"
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
+#~ "递归下载：\n"
+#~ "  -r,  --recursive          递归下载。\n"
+#~ "  -l,  --level=数字         最大递归深度(inf 或 0 表示无限)。\n"
+#~ "       --delete-after       删除下载后的文件。\n"
+#~ "  -k,  --convert-links      将绝对链接转换为相对链接。\n"
+#~ "  -K,  --backup-converted   转换文件 X 前先将其备份为 X.orig。\n"
+#~ "  -m,  --mirror             等效于 -r -N -l inf -nr 的选项。\n"
+#~ "  -p,  --page-requisites    下载所有显示完整网页所需的文件，例如图像。\n"
+#~ "       --strict-comments    打开对 HTML 备注的严格(SGML)处理选项。\n"
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
+#~ "递归下载时有关接受/拒绝的选项：\n"
+#~ "  -A,  --accept=列表                接受的文件样式列表，以逗号分隔。\n"
+#~ "  -R,  --reject=列表                排除的文件样式列表，以逗号分隔。\n"
+#~ "  -D,  --domains=列表               接受的域列表，以逗号分隔。\n"
+#~ "       --exclude-domains=列表       排除的域列表，以逗号分隔。\n"
+#~ "       --follow-ftp                 跟随 HTML 文件中的 FTP 链接。\n"
+#~ "       --follow-tags=列表           要跟随的 HTML 标记，以逗号分隔。\n"
+#~ "  -G,  --ignore-tags=列表           要忽略的 HTML 标记，以逗号分隔。\n"
+#~ "  -H,  --span-hosts                 递归时可进入其它主机。\n"
+#~ "  -L,  --relative                   只跟随相对链接。\n"
+#~ "  -I,  --include-directories=列表   要下载的目录列表。\n"
+#~ "  -X,  --exclude-directories=列表   要排除的目录列表。\n"
+#~ "  -np, --no-parent                  不搜索上层目录。\n"
+#~ "\n"
+
+#~ msgid "%s: debug support not compiled in.\n"
+#~ msgstr "%s：未将调试支持编译到程序中。\n"
+
+#~ msgid "Starting WinHelp %s\n"
+#~ msgstr "正在启动 WinHelp %s\n"
+
+#~ msgid "%s: %s: Not enough memory.\n"
+#~ msgstr "%s：%s：内存不足。\n"
+
 #~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
 #~ msgstr "在 Set-Cookie 中字符“%c”处出现语法错误。\n"
 
