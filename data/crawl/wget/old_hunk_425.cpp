# traditional Chinese translation of wget.
# Copyright (C) 1998, 2000, 01, 02, 05 Free Software Foundation, Inc.
# CD Chen <cdchen@linux.ntcic.edu.tw>, 1998.
# Pofeng Lee <pofeng.lee@ms7.url.com.tw>, 1998.
# Jing-Jong Shyue <shyue@sonoma.com.tw>, 2000.
# Abel Cheung <abelcheung@gmail.com>, 2001-2002, 2005.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.10.1-b1\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2005-08-17 13:30+0800\n"
"Last-Translator: Abel Cheung <abelcheung@gmail.com>\n"
"Language-Team: Chinese (traditional) <zh-l10n@linux.org.tw>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "錯誤原因不明"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: 選項‘%s’不明確\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: 選項‘--%s’不可配合引數使用\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: 選項‘%c%s’不可配合引數使用\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: 選項‘%s’需要引數\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: 無法識別選項‘--%s’\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: 無法識別選項‘%c%s’\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: 選項不合法 ─ %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: 選項無效 ─ %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: 選項需要引數 ─ %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: 選項‘-W %s’不明確\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: 選項‘-W %s’不可配合引數使用\n"

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
msgstr ""

#: lib/quotearg.c:273
msgid "'"
msgstr ""

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr ""

#: src/connect.c:207
#, fuzzy, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: 無法解析位址 ‘%s’；不使用 bind。\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "正在連接 %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "正在連接 %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "連上了。\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "失敗: %s。\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: 無法解析位址 ‘%s’；不使用 bind。\n"

#: src/convert.c:185
#, fuzzy, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "已在 %3$.*2$f 秒之內轉換了 %1$d 個檔案。\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "正在轉換 %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "不需進行任何操作。\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "無法轉換 %s 中的鏈結: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "無法刪除‘%s’: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "無法將 %s 備份成 %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Set-Cookie 出現語法錯誤: 在 %2$d 位置的 %1$s。\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "來自 %s 的 cookie 嘗試將網域設定為 %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "無法開啟 cookie 檔‘%s’: %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "寫入‘%s’時發生錯誤: %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "關閉‘%s’時發生錯誤: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "使用了不支援的檔案清單類型，假設是 Unix 格式的清單來分析。\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s 的索引，在 %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "時間不詳           "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "檔案        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "目錄        "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "鏈結        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "無法確定    "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s 位元組)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "長度: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr "，剩餘 %s (%s)"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr "，剩餘 %s"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (非正式資料)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "以 %s 的身分登入... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "伺服器回應訊息發生錯誤，會關閉控制連線。\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "伺服器訊息出現錯誤。\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "無法寫入，會關閉控制連線。\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "伺服器拒絕登入。\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "登入錯誤。\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "登入完成！\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "伺服器錯誤，無法決定作業系統的類型。\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "完成。    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "完成。\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "類別 ‘%c’ 不詳，會關閉控制連線。\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "完成。  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> 不需要 CWD (切換路徑)。\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"目錄‘%s’不存在。\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> 不需要 CWD (切換路徑)。\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "無法初始化 PASV 檔案傳送方式。\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "無法分析 PASV 回應訊息。\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "無法連上 %s 的埠號 %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bind 發生錯誤(%s)。\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT 指令無效。\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"重設 (REST) 失敗，需要重新開始傳送。\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"檔案‘%s’不存在。\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"檔案‘%s’不存在。\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"檔案或目錄‘%s’不存在。\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s 突然出現。\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s，將會關閉控制連線。\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) ─ 數據連線: %s；"

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "已關閉控制連線。\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "已中止傳送資料。\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "檔案 ‘%s’ 已存在，不會下載。\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(嘗試第 %2d 次)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) -- 已儲存 ‘%s’ [%s/%s])\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - 已儲存‘%s’ [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "刪除 %s。\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "使用‘%s’作為檔案清單暫存檔。\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "已刪除‘%s’。\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "鏈結深度 %d 超過最大值 %d。\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "遠端檔案不比本機檔案‘%s’新 ─ 不會下載。\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr "遠端檔案較本機檔案‘%s’新 ─ 會下載檔案。\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"檔案大小不符 (本機檔案為 %s) -- 下載檔案。\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "略過名稱有誤的符號鏈結。\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"正確的符號鏈結 %s → %s 已經存在\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "建立符號鏈結 %s → %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "本系統不支援符號鏈結，略過符號鏈結‘%s’。\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "略過目錄‘%s’。\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: 檔案類別不詳或不支援。\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: 時間標記錯誤。\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "因為深度為 %d (最大值為 %d)，所以不下載。\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "不進入‘%s’目錄因為已被排除或不被列入清單中。\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "拒絕‘%s’。\n"

#: src/ftp.c:2035
#, fuzzy, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "寫入‘%s’時發生錯誤: %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "沒有任何項目符合樣式‘%s’。\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "將 HTML 化的索引寫入至 ‘%s’ [%s]。\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "將 HTML 化的索引寫入至 ‘%s’。\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "錯誤"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "警告"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s：%s 沒有提供憑證。\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s：%s 沒有提供憑證。\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s：%s 沒有提供憑證。\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s：%s 沒有提供憑證。\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "分析代理伺服器 URL %s 時發生錯誤: %s。\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr ""

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr ""

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "%s：憑證的 common name ‘%s’ 和主機名稱 ‘%s’ 不符。\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "不明主機"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "暫時無法檢索主機名稱"

#: src/host.c:364
msgid "Unknown error"
msgstr "錯誤原因不明"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "正在查找主機 %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "失敗: 該主機沒有 IPv4/IPv6 地址。\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "失敗: 連線逾時。\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: 無法解析不完整的符號鏈結 %s。\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL ‘%s’ 無效: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "無法寫入 HTTP 要求: %s。\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "沒有任何標頭資料，假設為 HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "因遇到錯誤而停止使用 SSL。\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "載有 POST 資料的檔案 ‘%s’ 不見了：%s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "繼續使用和 %s:%d 的連線。\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "無法讀取代理伺服器回應: %s。\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "無法透過代理伺服器進行 tunneling: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "已送出 %s 要求，正在等候回應... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "收不到資料。\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "讀取標頭時發生錯誤 (%s)。\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "認證方式不詳。\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "認證失敗！\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"檔案 ‘%s’ 已存在，不會下載。\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "不正常的狀態行"

#: src/http.c:2095
msgid "(no description)"
msgstr "(沒有任何說明)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "位置: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "未指定"

#: src/http.c:2156
msgid " [following]"
msgstr " [跟隨至新的 URL]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    檔案早已下載完成；不會進行任何操作。\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "長度: "

#: src/http.c:2263
msgid "ignored"
msgstr "忽略"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr ""

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "警告: HTTP 不支援萬用字元。\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "無法寫入‘%s’(%s)。\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "無法建立 SSL 連線。\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "錯誤: 重新導向 (%d) 但沒有指定位置。\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s 錯誤 %d: %s。\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "缺少了最後修改時間標頭 ─ 關閉時間標記。\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "無效的最後修改時間標頭 ─ 忽略時間標記。\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"遠端檔案不比本機檔案‘%s’新 ─ 不會下載。\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "檔案大小不符 (本機檔案為 %s) -- 會下載檔案。\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "遠端檔案較新，會下載檔案。\n"

#: src/http.c:2760
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr "遠端檔案較本機檔案‘%s’新 ─ 會下載檔案。\n"

#: src/http.c:2766
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr "遠端檔案不比本機檔案‘%s’新 ─ 不會下載。\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""

#: src/http.c:2781
#, fuzzy
msgid ""
"Remote file exists.\n"
"\n"
msgstr "遠端檔案較新，會下載檔案。\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: URL ‘%s’ 無效: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) -- 已儲存 ‘%s’ [%s/%s])\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) -- 已儲存 ‘%s’ [%s/%s])\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - 在 %s 位元組後連線突然中斷。 "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - 讀取至 %s 位元組時發生錯誤 (%s)。"

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - 讀取至 %s/%s 位元組時發生錯誤 (%s)。"

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC 位置為 %s，但該檔案不存在。\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: 無法讀取 %s (%s)。\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%1$s: 錯誤發生於第 %3$d 行的 %2$s。\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%1$s: 錯誤發生於第 %3$d 行的 %2$s。\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%1$s: 第 %4$d 行的 %3$s 出現不明指令 ‘%2$s’。\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: 警告: 系統與使用者的 wgetrc 都指向‘%s’。\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: --execute 指令 ‘%s’ 無效\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: 邏輯值 ‘%s’ 無效，請使用 ‘on’ 或 ‘off’。\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: 數值 ‘%s’ 無效。\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: 位元值 ‘%s’ 無效。\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: 時間 ‘%s’ 無效。\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: 數值 ‘%s’ 無效。\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: 標頭內容 ‘%s’ 無效。\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: 無效的進度指示方式‘%s’。\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr "%s: %s: 作業系統類型 ‘%s’ 無效，請使用 unix 或 windows。\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr ""

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr ""

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr ""

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr ""

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr ""

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr ""

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr ""

#: src/log.c:809
#, fuzzy, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"下載 %s 完畢，將輸出導向至‘%s’。\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"下載 %s 完畢。\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s；無法進行任何記錄。\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "用法: %s [選項]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"長選項必須用的參數在使用短選項時也是必須的。\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "啟動：\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           顯示 Wget 版本並離開\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              印出這段說明文字\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        啟動後進入背景作業\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=指令      執行 ‘.wgetrc’ 形式的指令\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "紀錄訊息及輸入檔案：\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=檔案    將紀錄訊息寫入<檔案>中\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=檔案  將紀錄訊息加入<檔案>末端\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               印出偵錯訊息\n"

#: src/main.c:423
#, fuzzy
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "  -d,  --debug               印出偵錯訊息\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               安靜模式 (不輸出訊息)\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             詳細輸出模式 (預設使用這個模式)\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr "  -nv, --non-verbose         關閉詳細輸出模式，但不啟用安靜模式\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=檔案     下載從檔案中找到的 URL\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          以 HTML 方式處理輸入檔\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping           除非遠端檔案比較新，否則不下載遠端檔案\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "下載：\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr "  -t,  --tries=次數              設定重試次數 (0 表示無限)\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr "       --retry-connrefused       即使連線被拒仍然會不斷嘗試\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O   --output-document=檔案    將資料寫入指定檔案中\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr "  -nc, --no-clobber              不覆寫已經存在的檔案\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr "  -c,  --continue                繼續下載已下載了一部份的檔案\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=方式           選擇下載進度的表示方式\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping           除非遠端檔案比較新，否則不下載遠端檔案\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         顯示伺服器回應訊息\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  不下載任何資料\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr "  -T,  --timeout=秒數            指定所有時限為同一數值\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr "       --dns-timeout=秒數        指定 DNS 查找主機的時限\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr "       --connect-timeout=秒數    指定連線時限\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=秒數       指定讀取資料的時限\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=秒數               每次下載檔案之前等待指定秒數\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=秒數          每次重覆嘗試前稍等一段時間 (由 1 秒至指\n"
"                                 定秒數不等)\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr "       --random-wait             每次下載之前隨機地指定等待的時間\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                禁止使用代理伺服器\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=大小              設定下載資料的限額大小\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=位址       使用本機的指定位址 (主機名稱或 IP) 進行連"
"線\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=速率         限制下載速率\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            不記憶 DNS 查找主機的資料\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  只使用作業系統能夠接受的字元作為檔案字元\n"

#: src/main.c:489
#, fuzzy
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr "       --ignore-length         忽略 ‘Content-Length’ 標頭欄位\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              只會連接 IPv4 地址\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              只會連接 IPv6 地址\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILY    優先採用指定的位址格式，可以是 IPv6、IPv4\n"
"                                 或者 none\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr "       --user=用戶               指定 ftp 和 http 用戶名稱\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --password=PASS           指定 ftp 和 http 密碼\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --password=PASS           指定 ftp 和 http 密碼\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-proxy                禁止使用代理伺服器\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""

#: src/main.c:514
msgid "Directories:\n"
msgstr "目錄：\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd  --no-directories           不建立目錄\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        強制建立目錄\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      不建立含有遠端主機名稱的目錄\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr "       --protocol-directories     在目錄中加上通訊協定名稱\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=名稱    儲存檔案前先建立指定名稱的目錄\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr "       --cut-dirs=數目            忽略遠端目錄中指定<數目>的目錄層\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP 選項：\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=用戶        指定 HTTP 用戶名稱\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-passwd=密碼      指定 HTTP 密碼\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr "       --no-cache              不使用伺服器中的快取記憶資料\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""

#: src/main.c:541
#, fuzzy
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr "  -E,  --html-extension        將所有 HTML 文件加上 “.html” 延伸檔名\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr "       --ignore-length         忽略 ‘Content-Length’ 標頭欄位\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=字串           在連線資料標頭中加入指定字串\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=用戶       設定代理伺服器用戶名稱\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=密碼   設定代理伺服器密碼\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           在 HTTP 請求中包括 ‘Referer: URL’ 標頭\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          將 HTTP 連線資料標頭存檔\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr "  -U,  --user-agent=AGENT      宣稱為 AGENT 而不是 Wget/VERSION\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr "       --no-http-keep-alive    不使用 HTTP keep-alive (持久性連線)\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            不使用 cookie\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr "       --load-cookies=檔案     程式啟動時由指定檔案載入 cookie\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=檔案     程式結束後將 cookie 儲存至指定檔案\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr "       --keep-session-cookies  會載入和儲存暫時性的 cookie\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr "       --post-data=字串        使用 POST 方式送出字串\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr "       --post-file=檔案        使用 POST 方式送出檔案內容\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS (SSL/TLS) 選項：\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     選擇安全通訊協定，可以使用 auto, SSLv2, \n"
"                                SSLv3 或 TLSv1\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   不檢驗伺服器的憑證\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=檔案       指定用戶端的憑證檔案名稱\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr "       --certificate-type=類型  用戶端憑證的類型，可以是 PEM 或 DER\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=檔案       指定私鑰檔案\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=類型  私鑰的類型，可以是 PEM 或 DER\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=檔案    載有憑證管理中心 (CA) 簽章的檔案\n"

# (Abel) 這裡 hashed filename 和選項的用意無關，所以不翻譯
#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr "       --ca-directory=目錄      載有憑證管理中心 (CA) 簽章的目錄\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=檔案       作為 SSL 隨機數產生程序 (PRNG) 的來源數據檔"
"案\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr "       --egd-file=檔案          產生隨機數據的 EGD socket 檔案名稱\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP 選項：\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=用戶         指定 FTP 用戶名稱\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=密碼     設定 FTP 密碼\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     不刪除 ‘.listing’ 檔案\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               不展開有萬用字元的 FTP 檔名\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp        不使用「被動」傳輸模式\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         在遞迴模式中，下載鏈結指示的目標檔案 \n"
"                               (不包括目錄)\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "遞迴下載：\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          遞迴下載\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr "  -l,  --level=數字         最大搜尋深度 (inf 或 0 表示無限)\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after       刪除下載後的檔案\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr "  -k,  --convert-links      將下載後的 HTML 的鏈結轉換為本地檔案\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr "  -K,  --backup-converted   將檔案 X 轉換前先備份為 X.orig\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr "  -K,  --backup-converted   將檔案 X 轉換前先備份為 X.orig\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             相等於 -N -r -l inf --no-remove-listing 選項\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr "  -p,  --page-requisites    下載所有顯示網頁所需的檔案，例如圖片等\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr "       --strict-comments    用嚴格方式 (SGML) 處理 HTML 注釋。\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "遞迴下載時有關接受/拒絕的選項：\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr "  -A,  --accept=清單               接受的檔案樣式，以逗號分隔\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr "  -R,  --reject=清單               排除的檔案樣式，以逗號分隔\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr "  -D,  --domains=清單              接受的網域，以逗號分隔\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr "       --exclude-domains=清單      排除的網域，以逗號分隔\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr "       --follow-ftp                跟隨 HTML 文件中的 FTP 鏈結\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr "       --follow-tags=清單          會跟隨的 HTML 標籤，以逗號分隔\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr "  -G,  --ignore-tags=清單          會忽略的 HTML 標籤，以逗號分隔\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr "  -H,  --span-hosts                遞迴模式中可進入其它主機\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  只跟隨相對鏈結\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=清單  準備下載的目錄\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=清單  準備排除的目錄\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 不進入上層的目錄\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "請將錯誤報告或建議寄給 <bug-wget@gnu.org>。\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s，非互動式檔案下載工具。\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr ""

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr ""

#: src/main.c:780
msgid "Wgetrc: "
msgstr ""

#: src/main.c:781
msgid "Locale: "
msgstr ""

#: src/main.c:782
msgid "Compile: "
msgstr ""

#: src/main.c:783
msgid "Link: "
msgstr ""

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr ""

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr ""

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr ""

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
#, fuzzy
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "版權所有 (C) 2005 自由軟體基金會\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"最初由 Hrvoje Niksic <hniksic@xemacs.org> 編寫。\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "請將錯誤報告或建議寄給 <bug-wget@gnu.org>。\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "請嘗試執行‘%s --help’查看更多選項。\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: 選項不合法 -- ‘-n%c’\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "無法同時使用詳細輸出模式及安靜模式。\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "無法同時使用時間標記而不更改本機檔案。\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "不可以同時使用 --inet4-only 和 --inet6-only 選項。\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "檔案 ‘%s’ 已存在，不會下載。\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "不可以同時使用 --inet4-only 和 --inet6-only 選項。\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: 未指定 URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr ""

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "在 %s 中找不到 URL。\n"

#: src/main.c:1336
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"完成 --%s--\n"
"下載了: %s 位元組，共 %d 個檔案\n"

#: src/main.c:1345
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "超過下載限額 (%s 位元組)！\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "繼續在背景中執行。\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "繼續在背景中執行，pid 為 %lu。\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "將輸出資料寫入 ‘%s’。\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: 找不到可用的 socket 驅動程式。\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: 警告: 「%s」出現在主機名稱之前\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: 不明的標記「%s」\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "用法: %s NETRC [主機名稱]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s：無法 stat() %s：%s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "警告：隨機數品質不夠。\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"無法產生 OpenSSL 隨機數產生程序 (PRNG) 使用的種子；請考慮使用 --random-file "
"選項。\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s：%s 沒有提供憑證。\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr ""

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr ""

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr ""

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr ""

#: src/openssl.c:579
#, fuzzy, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr "%s：憑證的 common name ‘%s’ 和主機名稱 ‘%s’ 不符。\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr "如果不想用安全模式連接 %s，請使用 ‘--no-check-certificate’ 選項\n"

#: src/progress.c:242
#, fuzzy, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ 略過 %dK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "進度指示方式 ‘%s’ 無效；不會改變原來方式。\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr ""

#: src/progress.c:1050
msgid "   in "
msgstr ""

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "無法讀取實時時鐘的頻率：%s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "刪除 %s，因為它應該被指定了拒絕下載。\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "無法開啟 %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "正在載入 robots.txt；請忽略錯誤訊息。\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "分析代理伺服器 URL %s 時發生錯誤: %s。\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "代理伺服器 URL %s 錯誤: 必須是 HTTP。\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "已超過 %d 次重新導向。\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"放棄。\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"準備重試。\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] ""
msgstr[1] ""

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr ""

#: src/url.c:633
msgid "No error"
msgstr "沒有錯誤"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "不支援這種 URL 格式"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "主機名稱無效"

#: src/url.c:641
msgid "Bad port number"
msgstr "通訊埠號錯誤"

#: src/url.c:643
msgid "Invalid user name"
msgstr "用戶名稱無效"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "未完成的 IPv6 位址"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "不支援 IPv6 位址"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "IPv6 位址無效"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr ""

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s：%s：無法分配 %ld 位元組，記憶體已耗盡。\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s：%s：無法分配 %ld 位元組，記憶體已耗盡。\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "繼續在背景中執行，pid 為 %d。\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "無法刪除符號鏈結 '%s': %s\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Set-Cookie 的欄位‘%s’出現錯誤"

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) - 在 %s/%s 位元組後連線突然中斷。 "

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: 邏輯值 ‘%s’ 無效，\n"
#~ "請使用 ‘always’, ‘on’, ‘off’ 或 ‘never’。\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            使用 -F -i file 選項時，在相對鏈結前加入 "
#~ "URL\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                   必定使用代理伺服器\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr "       --preserve-permissions  沿用遠端檔案的權限\n"

# (Abel) 參考 slat.org
#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "本程式係基於使用目的而加以散布，然而不負任何擔保責任；\n"
#~ "亦無對適售性或特定目的適用性所為的默示性擔保。\n"
#~ "詳情請參照 GNU 通用公共授權。\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s：檢驗 %s 的憑證時發生錯誤：%s\n"

#~ msgid "Failed writing to proxy: %s.\n"
#~ msgstr "無法寫入代理伺服器: %s。\n"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "檔案‘%s’已存在，不會下載。\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%s/%s])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - 已儲存 ‘%s’ [%s/%s])\n"
#~ "\n"

#~ msgid "Empty host"
#~ msgstr "沒有主機名稱"
