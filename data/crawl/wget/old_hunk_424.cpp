# translation of wget to zh_CN
# Copyright (C) 2008 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Rongjun Mu <elanmu@sina.com>, 2003.
# Liu Songhe <jackliu9999@263.net>, 2003.
# Zong Yaotang <zong@cosix.com.cn>, 2003.
# Ji ZhengYu <zhengyuji@gmail.com>, 2009.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-18 14:54中国标准时间\n"
"Last-Translator: Ji ZhengYu <zhengyuji@gmail.com>\n"
"Language-Team: Chinese (simplified) <translation-team-zh-cn@lists."
"sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=1; plural=0;\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "未知的系统错误"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s：选项“%s”不明确\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s：选项“--%s”不允许有参数\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s：选项“%c%s”不允许有参数\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s：选项“%s”需要参数\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s：无法识别的选项“--%s”\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s：无法识别的选项“%c%s”\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s：非法选项 -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s：无效选项 -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s：选项需要参数 -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s：选项“-W %s”不明确\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s：选项“-W %s”不允许有参数\n"

#. TRANSLATORS:
#. Get translations for open and closing quotation marks.
#.
#. The message catalog should translate "`" to a left
#. quotation mark suitable for the locale, and similarly for
#. "'".  If the catalog has no translation,
#. locale_quoting_style quotes `like this', and
#. clocale_quoting_style quotes "like this".
#.
#. For example, an American English Unicode locale should
#. translate "`" to U+201C (LEFT DOUBLE QUOTATION MARK), and
#. should translate "'" to U+201D (RIGHT DOUBLE QUOTATION
#. MARK).  A British English Unicode locale should instead
#. translate these to U+2018 (LEFT SINGLE QUOTATION MARK)
#. and U+2019 (RIGHT SINGLE QUOTATION MARK), respectively.
#.
#. If you don't know what to put here, please see
#. <http://en.wikipedia.org/wiki/Quotation_mark#Glyphs>
#. and use glyphs suitable for your language.
#: lib/quotearg.c:272
msgid "`"
msgstr "“"

#: lib/quotearg.c:273
msgid "'"
msgstr "”"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "内存耗尽"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: 无法解析 bind 地址 %s；禁用 bind。\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "正在连接 %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "正在连接 %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "已连接。\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "失败：%s。\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: 无法解析主机地址 %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "已转换 %d 个文件(在 %s 秒之内)。\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "正在转换 %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "不需进行任何操作。\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "无法转换 %s 中的链接：%s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "无法删除 %s: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "无法将 %s 备份成 %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "在 Set-Cookie 中出现语法错误：%s 在位置 %d 处。\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "来自 %s 的 Cookie 尝试将域设置为 %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "无法打开 cookie 文件 %s: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "写入 %s 时发生错误: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "关闭 %s 时发生错误: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "不支持的文件列表类型，试用 Unix 格式的列表来分析。\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s 的索引在 %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "未知的时间         "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "文件        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "目录        "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "链接        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "不确定    "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s 字节)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "长度：%s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr "，%s (%s) 字节剩余"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr "，%s 字节剩余"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (非正式数据)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "正在以 %s 登录 ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "服务器响应时发生错误，正在关闭控制连接。\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "服务器消息出现错误。\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "写入失败，正在关闭控制连接。\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "服务器拒绝登录。\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "登录不正确。\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "登录成功！\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "服务器错误，无法确定操作系统的类型。\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "完成。    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "完成。\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "未知的类别“%c”，正在关闭控制连接。\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "完成。  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> 不需要 CWD。\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"目录 %s 不存在。\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> 不需要 CWD。\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "无法启动 PASV 传输。\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "无法解析 PASV 响应内容。\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "无法连接到 %s 端口号 %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bind 错误(%s)。\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "无效的 PORT(端口)。\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"重置 (REST) 失败，重新开始发送。\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "存在文件 %s。\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "文件 %s 不存在。\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"文件 %s 不存在。\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"文件或目录 %s 不存在。\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s 已经存在。\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s：%s，正在关闭控制连接。\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - 数据连接：%s；"

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "已关闭控制连接。\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "数据传输已被中止。\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "文件 %s 已经存在；不取回。\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(尝试次数：%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - 已写入标准输出 %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s 已保存 [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "正在删除 %s。\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "使用 %s 作为列表临时文件。\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "已删除 %s。\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "链接递归深度 %d 超过最大值 %d。\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "远程文件比本地文件 %s 更老 -- 不取回。\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr "远程文件较本地文件 %s 新 -- 取回。\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"文件大小不符(本地文件 %s) -- 取回。\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "无效的符号连接名，跳过。\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"已经存在正确的符号连接 %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "正在创建符号链接 %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "不支持符号连接，正在跳过符号连接 %s。\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "正在跳过目录 %s。\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s：未知的/不支持的文件类型。\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s：错误的时间戳标记。\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "因为设定深度为 %d(最大值为 %d)，所以不取回。\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "不进入 %s 目录因为其已被排除或未被包含进来。\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "拒绝 %s。\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "%s 和 %s 匹配错误: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "没有与模式 %s 相符合的。\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "已经将 HTML 格式的索引写入到 %s [%s]。\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "已经将 HTML 格式的索引写入到 %s。\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "错误"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "警告"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s 未提出证书。\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: %s 的证书不可信。\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: %s 的证书颁发者未知。\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: %s 的证书已经过期。\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "初始化 X509 证书错误: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "未找到证书\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "解析证书时发生错误: %s。\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "证书还未激活\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "证书已经过期\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "证书所有者与主机名 %s 不符\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "未知的主机"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "名字解析时有临时错误"

#: src/host.c:364
msgid "Unknown error"
msgstr "未知的错误"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "正在解析主机 %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "失败：主机没有 IPv4/IPv6 地址。\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "失败：超时。\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s：无法解析不完整的链接 %s。\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s：无效的 URL %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "无法写入 HTTP 请求：%s。\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "没有 HTTP 头，尝试 HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "由于遭遇错误，将禁用 SSL。\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "缺少 POST 数据文件 %s : %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "再次使用存在的到 %s:%d 的连接。\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "无法读取代理响应：%s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "代理渠道错误: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "已发出 %s 请求，正在等待回应... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "没有接收到数据。\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "读取文件头错误 (%s)。\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "未知的验证方式。\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "验证失败。\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"文件 %s 已经存在；不取回。\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "不正常的状态行"

#: src/http.c:2095
msgid "(no description)"
msgstr "(没有描述)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "位置：%s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "未指定"

#: src/http.c:2156
msgid " [following]"
msgstr " [跟随至新的 URL]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    文件已下载完成；不会进行任何操作。\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "长度："

#: src/http.c:2263
msgid "ignored"
msgstr "已忽略"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "正在保存至: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "警告：HTTP 不支持通配符。\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "开启 Spider 模式。检查是否存在远程文件。\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "无法写入 %s (%s)。\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "无法建立 SSL 连接。\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "错误：重定向 (%d) 但没有指定位置。\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "远程文件不存在 -- 链接断开！！！\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s 错误 %d：%s。\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "缺少“Last-modified”文件头-- 关闭时间戳标记。\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "无效的“Last-modified”文件头 -- 忽略时间戳标记。\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"远程文件比本地文件 %s 更老 -- 不取回。\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "文件大小不符 (本地文件 %s) -- 取回。\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "远程文件较新，取回。\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"存在远程文件且可能含有到其它资源的链接 -- 取回。\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"存在远程文件但不含任何链接 -- 无法取回。\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"存在远程文件且该文件可能含有更深层的链接，\n"
"但不能进行递归操作 -- 无法取回。\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"存在远程文件。\n"
"\n"

#: src/http.c:2790
#, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s URL: %s %2d %s\n"

#: src/http.c:2837
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - 已写入标准输出 %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - 已保存 %s [%s/%s])\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - 在 %s 字节处连接关闭。"

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - 在 %s 字节处发生读取错误 (%s)。"

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - 在 %s/%s 字节处发生读取错误 (%s)。"

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC指向 %s，但它并不存在。\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s：无法读取 %s (%s)。\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%1$s：错误发生于第 %3$d 行的 %2$s。\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%1$s: 第 %3$d 行的 %2$s 处发生语法错误。\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%1$s: 未知的命令 %2$s 在第 %4$d 行 %3$s 处。\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s：警告：系统与用户的 wgetrc 都指向 %s。\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s：无效 -- 执行命令 %s\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s：%s：无效的布尔值 %s；请使用“on”或“off”。\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s：%s：无效数字 %s。\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s：%s：无效的字节数值 %s\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s：%s：无效的时间周期 %s\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s：%s：无效的值 %s。\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s：%s：无效的文件头 %s。\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s：%s：无效的进度指示方式 %s。\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s：%s：无效的限定项 %s，\n"
"    请使用 [unix|windows]、[lowercase|uppercase]、[nocontrol] 或 [ascii]。\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "编码 %s 无效\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: locale 未设定\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "不支持从 %s 转换为 %s\n"

#: src/iri.c:183
#, fuzzy
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "出现未完成或无效的多字节序列\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "无法处理的错误 %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode 错误 (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode 错误 (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"接收 %s 完毕，正在把输出重定向至 %s。\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"接收了 %s。\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s：%s；禁用日志记录。\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "用法： %s [选项]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"长选项所必须的参数在使用短选项时也是必须的。\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "开始:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           显示 Wget 的版本信息并退出。\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              打印此帮助。\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        启动后转入后台。\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=COMMAND   运行一个‘.wgetrc’风格的命令。\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "登入并输入文件:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FILE    将信息写入 FILE。\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FILE  将信息添加至 FILE。\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               打印大量调试信息。\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              打印 Watt-32 调试信息。\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               安静模式(无信息输出)。\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             详尽的输出(此为默认值)。\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr "  -nv, --no-verbose          关闭详尽输出，但不进入安静模式。\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=FILE     下载本地或外部 FILE 中的 URLs。\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          把输入文件当成 HTML 文件。\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            解析与 URL 相关的\n"
"                             HTML 输入文件（由 -i -F 选项指定）。\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "下载:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=NUMBER            设置重试次数为 NUMBER (0 代表无限制)。\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr "       --retry-connrefused       即使拒绝连接也是重试。\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FILE    将文档写入 FILE。\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              不要重复下载已存在的文件。\n"
"                                 \n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr "  -c,  --continue                继续下载部分下载的文件。\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=TYPE           选择进度条类型。\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            只获取比本地文件新的文件。\n"
"                                 \n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         打印服务器响应。\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  不下载任何文件。\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr "  -T,  --timeout=SECONDS         将所有超时设为 SECONDS 秒。\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr "       --dns-timeout=SECS        设置 DNS 查寻超时为 SECS 秒。\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr "       --connect-timeout=SECS    设置连接超时为 SECS 秒。\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SECS       设置读取超时为 SECS 秒。\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SECONDS            等待间隔为 SECONDS 秒。\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SECONDS       在取回文件的重试期间等待 1..SECONDS 秒。\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr "       --random-wait             取回时等待 0...2*WAIT 秒。\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                关闭代理。\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=NUMBER            设置取回配额为 NUMBER 字节。\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADDRESS    绑定至本地主机上的 ADDRESS (主机名或是 "
"IP)。\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=RATE         限制下载速率为 RATE。\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            关闭 DNS 查寻缓存。\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  限定文件名中的字符为 OS 允许的字符。\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr "       --ignore-case             匹配文件/目录时忽略大小写。\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              仅连接至 IPv4 地址。\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              仅连接至 IPv6 地址。\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILY    首先连接至指定协议的地址\n"
"                                 FAMILY 为 IPv6，IPv4 或是 none。\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=USER               将 ftp 和 http 的用户名均设置为 USER。\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=PASS           将 ftp 和 http 的密码均设置为 PASS。\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password           提示输入密码。\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                关闭 IRI 支持。\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr "       --local-encoding=ENC      IRI 使用 ENC 作为本地编码。\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr "       --remote-encoding=ENC     使用 ENC 作为默认远程编码。\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "目录:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           不创建目录。\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        强制创建目录。\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      不要创建主目录。\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr "       --protocol-directories     在目录中使用协议名称。\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIX  以 PREFIX/... 保存文件\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr "       --cut-dirs=NUMBER          忽略 NUMBER 个远程目录路径。\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP 选项:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=USER        设置 http 用户名为 USER。\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=PASS    设置 http 密码为 PASS。\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr "       --no-cache              不在服务器上缓存数据。\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NAME     改变默认页\n"
"                               （默认页通常是“index.html”）。\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr "  -E,  --adjust-extension      以合适的扩展名保存 HTML/CSS 文档。\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr "       --ignore-length         忽略头部的‘Content-Length’区域。\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=STRING         在头部插入 STRING。\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr "       --max-redirect          每页所允许的最大重定向。\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=USER       使用 USER 作为代理用户名。\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=PASS   使用 PASS 作为代理密码。\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr "       --referer=URL           在 HTTP 请求头包含‘Referer: URL’。\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          将 HTTP 头保存至文件。\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr "  -U,  --user-agent=AGENT      标识为 AGENT 而不是 Wget/VERSION。\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr "       --no-http-keep-alive    禁用 HTTP keep-alive(永久连接)。\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            不使用 cookies。\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr "       --load-cookies=FILE     会话开始前从 FILE 中载入 cookies。\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=FILE     会话结束后保存 cookies 至 FILE。\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr "       --keep-session-cookies  载入并保存会话(非永久) cookies。\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=STRING      使用 POST 方式；把 STRING 作为数据发送。\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr "       --post-file=FILE        使用 POST 方式；发送 FILE 内容。\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   当选中本地文件名时\n"
"                               允许 Content-Disposition 头部(尚在实验)。\n"

#: src/main.c:576
#, fuzzy
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     发送不含服务器询问的首次等待\n"
"                               的基本 HTTP 验证信息。\n"
"                               \n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS (SSL/TLS) 选项:\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     选择安全协议，可以是 auto、SSLv2、\n"
"                                SSLv3 或是 TLSv1 中的一个。\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   不要验证服务器的证书。\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FILE       客户端证书文件。\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr "       --certificate-type=TYPE  客户端证书类型， PEM 或 DER。\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FILE       私钥文件。\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TYPE  私钥文件类型， PEM 或 DER。\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=FILE    带有一组 CA 认证的文件。\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr "       --ca-directory=DIR       保存 CA 认证的哈希列表的目录。\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr "       --random-file=FILE       带有生成 SSL PRNG 的随机数据的文件。\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=FILE          用于命名带有随机数据的 EGD 套接字的文件。\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP 选项:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             对所有二进制 FTP 文件使用 Stream_LF 格式\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=USER         设置 ftp 用户名为 USER。\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=PASS     设置 ftp 密码为 PASS。\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     不要删除‘.listing’文件。\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               不在 FTP 文件名中使用通配符展开。\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp        禁用“passive”传输模式。\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         递归目录时，获取链接的文件(而非目录)。\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "递归下载:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          指定递归下载。\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=NUMBER       最大递归深度( inf 或 0 代表无限制，即全部下"
"载)。\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after       下载完成后删除本地文件。\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      让下载得到的 HTML 或 CSS 中的链接指向本地文件。\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr "  -K,  --backup-converted   在转换文件 X 前先将它备份为 X_orig。\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr "  -K,  --backup-converted   在转换文件 X 前先将它备份为 X.orig。\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             -N -r -l inf --no-remove-listing 的缩写形式。\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    下载所有用于显示 HTML 页面的图片之类的元素。\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr "       --strict-comments    开启 HTML 注释的精确处理(SGML)。\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "递归接受/拒绝:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr "  -A,  --accept=LIST               逗号分隔的可接受的扩展名列表。\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr "  -R,  --reject=LIST               逗号分隔的要拒绝的扩展名列表。\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr "  -D,  --domains=LIST              逗号分隔的可接受的域列表。\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr "       --exclude-domains=LIST      逗号分隔的要拒绝的域列表。\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr "       --follow-ftp                跟踪 HTML 文档中的 FTP 链接。\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr "       --follow-tags=LIST          逗号分隔的跟踪的 HTML 标识列表。\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr "       --ignore-tags=LIST          逗号分隔的忽略的 HTML 标识列表。\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr "  -H,  --span-hosts                递归时转向外部主机。\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  只跟踪有关系的链接。\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LIST  允许目录的列表。\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LIST  排除目录的列表。\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 不追溯至父目录。\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "请将错误报告或建议寄给 <bug-wget@gnu.org>。\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s，非交互式的网络文件下载工具。\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "用户 %s 的密码: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "密码: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "字符集: "

#: src/main.c:782
msgid "Compile: "
msgstr "编译: "

#: src/main.c:783
msgid "Link: "
msgstr "链接程序: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s 在 VMS %s %s 上编译。\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s 在 %s 上编译。\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (环境)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (用户)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (系统)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "版权所有 (C) 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"GPLv3+ 版本: GNU GPL 第3版或更高版本\n"
"<http://www.gnu.org/licenses/gpl.html>。\n"
"这是自由软件：您可以自由地更改并重新分发它。\n"
"在法律所允许的范围内，没有任何担保。\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"最初由 Hrvoje Niksic <hniksic@xemacs.org> 编写。\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "目前由 Micah Cowan <micah@cowan.name> 维护。\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "请将错误报告或建议寄给 <bug-wget@gnu.org>。\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "请尝试使用“%s --help”查看更多的选项。\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s：非法的选项 -- “-n%c”\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "无法同时使用详细输出模式和安静模式。\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "无法修改时间戳标记而不更改本地文件。\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "无法同时指定 --inet4-only 和 --inet6-only。\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"如果给出了多个 URL 则无法同时指定 -k 和 -O 选项，也不可以与 -p 或 -r 选项\n"
"结合使用。参阅手册来获取详细信息。\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"警告: 将 -O 与 -r 或 -p 选项结合使用意味着所有下载来的内容\n"
"会被放入您指定的那个单一文件。\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"警告: 时间戳与 -O 结合使用没有任何效果。\n"
"参阅手册来获取详细信息。\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "文件“%s”已经存在；不取回。\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "无法同时指定 --ask-password 和 --password。\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s：未指定 URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "此版本不支持 IRIs\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"警告: 无法在二进制模式下重新打开标准输出设备；\n"
"         下载到的文件可能带有错误的行尾结束符。\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "在 %s 中找不到 URL。\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"下载完毕 --%1$s--\n"
"下载了：%2$d 个文件，%4$s (%5$s) 中的 %3$s\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "超过下载限额( %s 字节)！\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "继续在后台运行。\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "继续在后台运行，pid 为 %lu。\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "将把输出写入至 %s。\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s：找不到可用的 socket 驱动程序。\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s：%s:%d：警告: %s 标记出现在机器名称前\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s：%s:%d：未知的标记“%s”\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "用法：%s NETRC [主机名]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s：无法 stat %s：%s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "警告: 正在使用一个弱口令的随机种子。\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "无法 seed PRNG；考虑使用 --random-file。\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: 无法验证 %s 的由 %s 颁发的证书:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  无法本地校验颁发者的权限。\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  出现了自己签名的证书。\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  颁发的证书还未生效。\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  颁发的证书已经过期。\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr "%s: 证书通用名 %s 与所要求的主机名 %s 不符。\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: 证书通用名无效（包含空字符）。\n"
"这可能是由于主机声明错误\n"
"（即，不是真正的 %s）。\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr "要以不安全的方式连接至 %s，使用‘--no-check-certificate’。\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ 正跳过 %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "无效的进度指示方式 %s；不会改变原来的方式。\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr " eta(英国中部时间) %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   in "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "无法获取 REALTIME 时钟频率: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "正在删除 %s 因为它应该被指定了拒绝下载。\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "无法打开 %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "正在载入 robots.txt；请忽略错误消息。\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "解析代理服务器 URL %s 时发生错误：%s。\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "代理服务器 URL %s 错误：必须是 HTTP。\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "已超过 %d 次重定向。\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"已放弃。\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"重试中。\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"未找到中断的链接。\n"
"\n"

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] ""
"找到 %d 个中断的链接。\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "没有错误"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "不支持的地址列表 %s"

#: src/url.c:637
#, fuzzy
msgid "Scheme missing"
msgstr "缺少地址列表"

#: src/url.c:639
msgid "Invalid host name"
msgstr "无效的主机名"

#: src/url.c:641
msgid "Bad port number"
msgstr "端口号错误"

#: src/url.c:643
msgid "Invalid user name"
msgstr "无效的用户名"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "未结束的 IPv6 数字地址"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "不支持 IPv6 地址"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "无效的 IPv6 数字地址"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "未将 HTTPS 支持编译到程序中"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: 无法分配足够内存；内存耗尽。\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: 无法分配 %ld 字节；内存耗尽。\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: 文本缓冲区太大 (%ld 字节)，退出。\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "继续在后台运行，pid 为 %d。\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "无法删除符号链接 %s: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            prepends URL 至 -F -i 选项所指定文件中的相关"
#~ "链接。\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr "       --preserve-permissions  保留远程文件的权限。\n"

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr "无法转换 “%s”为绑定地址，正在恢复为 ANY。\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "在 Set-Cookie 的中出现错误，字段“%s”"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "重置 (REST) 失败；不会截短‘%s’。\n"

#~ msgid " [%s to go]"
#~ msgstr " [尚有 %s]"

#~ msgid "Host not found"
#~ msgstr "找不到主机"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "无法创建 SSL context\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "无法从 %s 载入证书 (certificate)\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "尝试不载入指定的证书 (certificate)\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "无法从 %s 获取证书密钥\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "正在分析文件头时，文件已结束。\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "无法续传此文件，与“-c”选项的意义冲突。\n"
#~ "不会截短已存在的文件“%s”。\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (尚有 %s)"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "文件“%s”已经存在，不会取回。\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) -- 已保存“%s”[%ld/%ld])\n"
#~ "\n"

#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
#~ msgstr "%s (%s) - 连接在 %ld/%ld 字节时被关闭。"

#~ msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
#~ msgstr "%s：%s：无效的布尔值“%s”，请使用 always、on、off 或 never。\n"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "启动：\n"
#~ "  -V,  --version           显示 Wget 的版本并且退出。\n"
#~ "  -h,  --help              打印此帮助。\n"
#~ "  -b,  -background         启动后进入后台操作。\n"
#~ "  -e,  -execute=COMMAND    运行‘.wgetrc’形式的命令。\n"
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
#~ "\n"
#~ msgstr ""
#~ "日志记录及输入文件：\n"
#~ "  -o,  --output-file=文件     将日志消息写入到指定文件中。\n"
#~ "  -a,  --append-output=文件   将日志消息追加到指定文件的末端。\n"
#~ "  -d,  --debug                打印调试输出。\n"
#~ "  -q,  --quiet                安静模式(不输出信息)。\n"
#~ "  -v,  --verbose               详细输出模式(默认)。\n"
#~ "  -nv, --non-verbose          关闭详细输出模式，但不进入安静模式。\n"
#~ "  -i,  --input-file=文件      下载从指定文件中找到的 URL。\n"
#~ "  -F,  --force-html           以 HTML 方式处理输入文件。\n"
#~ "  -B,  --base=URL             使用 -F -i 文件选项时，在相对链接前添加指定"
#~ "的 URL。\n"
#~ "\n"

#~ msgid ""
#~ "Download:\n"
#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
#~ "unlimits).\n"
#~ "       --retry-connrefused      retry even if connection is refused.\n"
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
#~ "  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
#~ "       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
#~ "       --connect-timeout=SECS   set the connect timeout to SECS.\n"
#~ "       --read-timeout=SECS      set the read timeout to SECS.\n"
#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
#~ "retrieval.\n"
#~ "       --random-wait            wait from 0...2*WAIT secs between "
#~ "retrievals.\n"
#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
#~ "host.\n"
#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
#~ "       --dns-cache=off          disable caching DNS lookups.\n"
#~ "       --restrict-file-names=OS restrict chars in file names to ones OS "
#~ "allows.\n"
#~ "\n"
#~ msgstr ""
#~ "下载：\n"
#~ "  -t,  --tries=次数             配置重试次数（0 表示无限）。\n"
#~ "       --retry-connrefused      即使拒绝连接也重试。\n"
#~ "  -O   --output-document=文件   将数据写入此文件中。\n"
#~ "  -nc, --no-clobber             不更改已经存在的文件，也不使用在文件名后\n"
#~ "                                添加 .#（# 为数字）的方法写入新的文件。\n"
#~ "  -c,  --continue               继续接收已下载了一部分的文件。\n"
#~ "       --progress=方式          选择下载进度的表示方式。\n"
#~ "  -N,  --timestamping           除非远程文件较新，否则不再取回。\n"
#~ "  -S,  --server-response        显示服务器回应消息。\n"
#~ "       --spider                 不下载任何数据。\n"
#~ "  -T,  --timeout=秒数           配置读取数据的超时时间 (秒数)。\n"
#~ "  -w,  --wait=秒数              接收不同文件之间等待的秒数。\n"
#~ "       --waitretry=秒数         在每次重试之间稍等一段时间 (由 1 秒至指定"
#~ "的 秒数不等)。\n"
#~ "       --random-wait            接收不同文件之间稍等一段时间(由 0 秒至  "
#~ "2*WAIT 秒不等)。\n"
#~ "  -Y,  --proxy=on/off           打开或关闭代理服务器。\n"
#~ "  -Q,  --quota=大小             配置接收数据的限额大小。\n"
#~ "       --bind-address=地址      使用本机的指定地址 (主机名称或 IP) 进行连"
#~ "接。\n"
#~ "       --limit-rate=速率        限制下载的速率。\n"
#~ "       --dns-cache=off          禁止查找存于高速缓存中的 DNS。\n"
#~ "       --restrict-file-names=OS 限制文件名中的字符为指定的 OS (操作系统) "
#~ "所允许的字符。\n"
#~ "\n"

#~ msgid ""
#~ "Directories:\n"
#~ "  -nd, --no-directories            don't create directories.\n"
#~ "  -x,  --force-directories         force creation of directories.\n"
#~ "  -nH, --no-host-directories       don't create host directories.\n"
#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
#~ "components.\n"
#~ "\n"
#~ msgstr ""
#~ "目录：\n"
#~ "  -nd  --no-directories            不创建目录。\n"
#~ "  -x,  --force-directories         强制创建目录。\n"
#~ "  -nH, --no-host-directories       不创建含有远程主机名称的目录。\n"
#~ "  -P,  --directory-prefix=名称     保存文件前先创建指定名称的目录。\n"
#~ "       --cut-dirs=数目             忽略远程目录中指定数目的目录层。\n"
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
#~ "       --post-data=STRING    use the POST method; send STRING as the "
#~ "data.\n"
#~ "       --post-file=FILE      use the POST method; send contents of FILE.\n"
#~ "\n"
#~ msgstr ""
#~ "HTTP 选项：\n"
#~ "       --http-user=用户    配置 http 用户名。\n"
#~ "       --http-passwd=密码    配置 http 用户密码。\n"
#~ "  -C,  --cache=on/off        (不)使用服务器中的高速缓存中的数据 (默认是使"
#~ "用的)。\n"
#~ "  -E,  --html-extension      将所有 MIME 类型为 text/html 的文件都加上 ."
#~ "html 扩展文件名。\n"
#~ "       --ignore-length       忽略“Content-Length”文件头字段。\n"
#~ "       --header=字符串         在文件头中添加指定字符串。\n"
#~ "       --proxy-user=用户   配置代理服务器用户名。\n"
#~ "       --proxy-passwd=密码   配置代理服务器用户密码。\n"
#~ "       --referer=URL         在 HTTP 请求中包含“Referer：URL”头。\n"
#~ "  -s,  --save-headers        将 HTTP 头存入文件。\n"
#~ "  -U,  --user-agent=AGENT    标志为 AGENT 而不是 Wget/VERSION。\n"
#~ "       --no-http-keep-alive  禁用 HTTP keep-alive（持久性连接）。\n"
#~ "       --cookies=off         禁用 cookie。\n"
#~ "       --load-cookies=文件   会话开始前由指定文件载入 cookie。\n"
#~ "       --save-cookies=文件   会话结束后将 cookie 保存至指定文件。\n"
#~ "       --post-data=字符串    使用 POST 方法，发送指定字符串。\n"
#~ "       --post-file=文件      使用 POST 方法，发送指定文件中的内容。\n"
#~ "\n"

#~ msgid ""
#~ "HTTPS (SSL) options:\n"
#~ "       --sslcertfile=FILE     optional client certificate.\n"
#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
#~ "       --egd-file=FILE        file name of the EGD socket.\n"
#~ "       --sslcadir=DIR         dir where hash list of CA's are stored.\n"
#~ "       --sslcafile=FILE       file with bundle of CA's\n"
#~ "       --sslcerttype=0/1      Client-Cert type 0=PEM (default) / 1=ASN1 "
#~ "(DER)\n"
#~ "       --sslcheckcert=0/1     Check the server cert agenst given CA\n"
#~ "       --sslprotocol=0-3      choose SSL protocol; 0=automatic,\n"
#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
#~ "\n"
#~ msgstr ""
#~ "HTTPS (SSL) 选项：\n"
#~ "       --sslcertfile=文件     可选的客户段端证书。\n"
#~ "       --sslcertkey=密钥文件  对此证书可选的“密钥文件”。\n"
#~ "       --egd-file=文件        EGD socket 文件名。\n"
#~ "       --sslcadir=目录         CA 散列表所在的目录。\n"
#~ "       --sslcafile=文件      包含 CA 的文件。\n"
#~ "       --sslcerttype=0/1      Client-Cert 类型 0=PEM (默认) / 1=ASN1 "
#~ "(DER)\n"
#~ "       --sslcheckcert=0/1     根据提供的 CA 检查服务器的证书\n"
#~ "       --sslprotocol=0-3      选择 SSL 协议；0=自动选择，\n"
#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
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
#~ "FTP 选项：\n"
#~ "  -nr, --dont-remove-listing   不删除“.listing”文件。\n"
#~ "  -g,  --glob=on/off           设置是否展开有通配符的文件名。\n"
#~ "       --passive-ftp           使用“被动”传输模式。\n"
#~ "       --retr-symlinks         在递归模式中，下载链接所指示的文件(连至目"
#~ "录\n"
#~ "                               则例外）。\n"

#~ msgid ""
#~ "Recursive retrieval:\n"
#~ "  -r,  --recursive          recursive download.\n"
#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
#~ "infinite).\n"
#~ "       --delete-after       delete files locally after downloading them.\n"
#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
#~ "page.\n"
#~ "       --strict-comments    turn on strict (SGML) handling of HTML "
#~ "comments.\n"
#~ "\n"
#~ msgstr ""
#~ "递归下载：\n"
#~ "  -r,  --recursive          递归下载。\n"
#~ "  -l,  --level=数字         最大递归深度(inf 或 0 表示无限)。\n"
#~ "       --delete-after       删除下载后的文件。\n"
#~ "  -k,  --convert-links      将绝对链接转换为相对链接。\n"
#~ "  -K,  --backup-converted   转换文件 X 前先将其备份为 X.orig。\n"
#~ "  -m,  --mirror             等效于 -r -N -l inf -nr 的选项。\n"
#~ "  -p,  --page-requisites    下载所有显示完整网页所需的文件，例如图像。\n"
#~ "       --strict-comments    打开对 HTML 备注的严格(SGML)处理选项。\n"
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
#~ "递归下载时有关接受/拒绝的选项：\n"
#~ "  -A,  --accept=列表                接受的文件样式列表，以逗号分隔。\n"
#~ "  -R,  --reject=列表                排除的文件样式列表，以逗号分隔。\n"
#~ "  -D,  --domains=列表               接受的域列表，以逗号分隔。\n"
#~ "       --exclude-domains=列表       排除的域列表，以逗号分隔。\n"
#~ "       --follow-ftp                 跟随 HTML 文件中的 FTP 链接。\n"
#~ "       --follow-tags=列表           要跟随的 HTML 标记，以逗号分隔。\n"
#~ "  -G,  --ignore-tags=列表           要忽略的 HTML 标记，以逗号分隔。\n"
#~ "  -H,  --span-hosts                 递归时可进入其它主机。\n"
#~ "  -L,  --relative                   只跟随相对链接。\n"
#~ "  -I,  --include-directories=列表   要下载的目录列表。\n"
#~ "  -X,  --exclude-directories=列表   要排除的目录列表。\n"
#~ "  -np, --no-parent                  不搜索上层目录。\n"
#~ "\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "此程序发布的目的是希望它会有用，但它不作任何保证；\n"
#~ "甚至没有可售性或适用于特定目的的保证。\n"
#~ "详情请查看 GNU General Public License。\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "正在启动 WinHelp %s\n"

#~ msgid "Empty host"
#~ msgstr "未指定主机"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s：%s：内存不足。\n"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "在 Set-Cookie 中字符“%c”处出现语法错误。\n"

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s：%s：无法将“%s”转换为一个 IP 地址。\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s：%s：无效的命令\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "找不到代理服务器主机。\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s：重定向到自己。\n"