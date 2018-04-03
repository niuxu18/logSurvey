# Vietnamese translation for WGet.
# Copyright © 2009 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Phan Vinh Thinh <teppi82@gmail.com>, 2005.
# Clytie Siddall <clytie@riverland.net.au>, 2007-2009.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-20 00:08+0930\n"
"Last-Translator: Clytie Siddall <clytie@riverland.net.au>\n"
"Language-Team: Vietnamese <vi-VN@googlegroups.com>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=1; plural=0;\n"
"X-Generator: LocFactoryEditor 1.8\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Lỗi hệ thống không rõ"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: tùy chọn `%s' không rõ ràng\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: tùy chọn `--%s' không cho phép một tham số\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: tùy chọn `%c%s' không cho phép một tham số\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: tùy chọn `%s' yêu cầu một tham số\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: tùy chọn không nhận ra `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: tùy chọn không nhận ra `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: tùy chọn không hợp lệ -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: tùy chọn sai -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: tùy chọn yêu cầu một tham số -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: tùy chọn `-W %s' không rõ ràng\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: tùy chọn `-W %s' không cho phép một tham số\n"

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
msgstr "« "

#: lib/quotearg.c:273
msgid "'"
msgstr " »"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "cạn bộ nhớ"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: không tìm thấy được địa chỉ bind `%s'; tắt bỏ bind.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Đang kết nối tới %s[%s]:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Đang kết nối tới %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "đã kết nối.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "không thành công: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: không quyết định được địa chỉ của máy %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Đã chuyển đổi %d tập tin trong %s giây.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Đang chuyển đổi %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "không có gì cần làm.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Không thể chuyển đổi liên kết trong %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Không xoá được %s: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Không sao lưu được %s thành %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Lỗi cú pháp trong Set-Cookie: %s tại vị trí %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Cookie đến từ %s đã thử đặt miền thành %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Không mở được tập tin cookie %s: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Lỗi ghi nhớ tới %s: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Lỗi đóng %s: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Dạng danh sách không hỗ trợ, đang thử phân tích dạng danh sách Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Chỉ mục của /%s trên %s: %d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "thời gian không rõ       "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Tập tin        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Thư mục   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Liên kết        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Không chắc    "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s byte)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Chiều dài: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", còn lại %s (%s)"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", còn lại %s"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (không có quyền)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Đăng nhập với tên %s... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr ""
"Lỗi trong câu trả lời của máy phục vụ, đang đóng liên kết điều khiển.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Lỗi trong lời chào mừng của máy phục vụ.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Ghi nhớ không thành công, đang đóng liên kết điều khiển.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Máy phục vụ từ chối đăng nhập.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Đăng nhập không đúng.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Đã đăng nhập !\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Lỗi máy phục vụ, không xác định được dạng hệ thống.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "đã xong.    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "đã xong.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Không rõ loại `%c', đang đóng liên kết điều khiển.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "đã xong.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> không cần thiết CWD.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Không có thư mục %s như vậy.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> không yêu cầu CWD.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Không khởi đầu được sự truyền tải PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Không phân tích được câu trả lời PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "không kết nối được tới %s cổng %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Lỗi bind (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "CỔNG không đúng.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST không thành công; bắt đầu lại từ đầu.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Tập tin %s đã có.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Không có tập tin %s như vậy.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Không có tập tin %s như vậy.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Không có tập tin hay thư mục %s như vậy.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s đã xuất hiện.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, đang đóng kết nối điều khiển.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Kết nối dữ liệu: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Đã đóng kết nối điều khiển.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Dừng truyền tải dữ liệu.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Tập tin %s đã có ở đó nên không nhận nữa.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(thử: %2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) — được ghi nhớ ra đầu ra tiêu chuẩn %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) — %s được lưu [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Đang xoá %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Đang dùng %s làm tập tin danh sách tmp.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "Đã xóa %s.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Độ sâu đệ quy %d vượt quá độ sâu tối đa %d.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "Tập tin ở xa không mới hơn tập tin cục bộ %s -- không tải xuống.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Tập tin ở xa mới hơn tập tin cục bộ %s -- đang tải xuống.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Kích thước không tương ứng (nội bộ %s) -- đang tải xuống.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Sai tên của liên kết mềm, bỏ qua.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Đã có liên kết mềm đúng %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Đang tạo liên kết mềm %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Không hỗ trợ liên kết mềm, nhảy qua liên kết mềm %s.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Nhảy qua thư mục %s.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: loại tập tin không biết/không hỗ trợ.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: tem đánh dấu thời gian bị lỗi.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Sẽ không nhận thư mục vì độ sâu là %d (max %d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Không giảm xuống thành %s vì nó bị loại bỏ/không được thêm.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "Đang từ chối %s.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Lỗi khớp %s với %s: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Không có tương ứng với mẫu %s.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Đã viết chỉ mục ở dạng HTML tới %s [%s].\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Đã viết chỉ mục ở dạng HTML tới %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "LỖI"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "CẢNH BÁO"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: Không có chứng thực từ %s.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Chứng nhận của %s không tin cậy.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: Chứng nhận của %s không có nhà cấp đã biết.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: Chứng nhận của %s đã bị thu hồi.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Lỗi sơ khởi chứng nhận X509: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Không tìm thấy chứng nhận\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Lỗi phân tích cú pháp của chứng nhận: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Chứng nhận chưa được kích hoạt\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Chứng nhận đã hết hạn dùng\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "Chủ chứng nhận không tương ứng với tên máy %s\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Máy không rõ"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Thất bại tạm thời khi tìm tên"

#: src/host.c:364
msgid "Unknown error"
msgstr "Lỗi không rõ nguyên nhân"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Đang tìm %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "thất bại: Không có địa chỉ IPv4/IPv6 cho máy.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "không thành công: vượt quá thời gian chờ.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Không tìm thấy được liên kết không hoàn chỉnh %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL không hợp lệ %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Yêu cầu ghi HTTP không thành công: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Không có phần đầu, coi như HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Tắt bỏ SSL vì tạo ra lỗi.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Thiếu tập tin dữ liệu POST %s: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Đang dùng lại kết nối đã có tới %s: %d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Đọc câu trả lời proxy không thành công: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Tạo đường hầm proxy không thành công: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s yêu cầu đã gửi, đang đợi câu trả lời... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Không nhận được dữ liệu.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Lỗi đọc (%s) trong phần đầu.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Hệ thống xác thực không rõ.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Xác thực không thành công.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Tập tin %s đã có ở đó nên không nhận nữa.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Dòng trạng thái dạng sai"

#: src/http.c:2095
msgid "(no description)"
msgstr "(không mô tả)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Vị trí: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "chưa chỉ ra"

#: src/http.c:2156
msgid " [following]"
msgstr " [theo sau]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Đã nhận tập tin đầy đủ; không cần làm gì.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Dài: "

#: src/http.c:2263
msgid "ignored"
msgstr "lờ đi"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Đang lưu vào : %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Cảnh báo: không hỗ trợ ký tự đại diện trong HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""
"Chế độ nhện đã được hiệu lực. Hãy kiểm tra tập tin ở xa tồn tại không.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Không ghi nhớ được tới %s (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Không thiết lập được kết nối SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "LỖI: Chuyển hướng (%d) mà không có vị trí.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Tập tin ở xa không tồn tại — liên kết bị ngắt !\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s LỖI %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Thiếu phần đầu \"Lần-sửa-cuối-cùng\" -- tắt tem đánh dấu thời gian.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Sai phần đầu \"Lần-sửa-cuối-cùng\" -- lờ đi tem đánh dấu thời gian.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Tập tin trên máy chủ không mới hơn tập tin cục bộ %s -- không nhận.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Kích thước tập tin không tương ứng (cục bộ %s) - đang nhận.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Tập tin ở xa mới hơn, đang nhận.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Tập tin ở xa có phải tồn tại và có thể chứa liên kết đến tài nguyên khác nên "
"đang lấy nó.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Tập tin ở xa có phải tồn tại nhưng không chứa liên kết nên không lấy nó.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Tập tin ở xa có phải tồn tại và có thể chứa thêm liên kết,\n"
"nhưng khả năng đệ quy bị tắt nên không lấy nó.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Tập tin ở xa có phải tồn tại.\n"
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
"%s (%s) — được ghi nhớ ra đầu ra tiêu chuẩn %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) — %s được lưu [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Đóng kết nối tại byte %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Lỗi đọc tại byte %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Lỗi đọc tại byte %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC chỉ tới %s không tồn tại.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Không đọc được %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Lỗi trong %s trên dòng %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Lỗi cú pháp trong %s trên dòng %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Không rõ câu lệnh %s trong %s trên dòng %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: Cảnh báo: Cả wgetrc của hệ thống và người dùng đều chỉ tới %s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Câu lệnh « --execute » không đúng %s\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Boolean không đúng %s; hãy dùng « on » (bật) hay « off » (tắt)\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Số sai %s.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Giá trị byte sai %s.\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Khoảng thời gian sai %s.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Giá trị sai %s.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Phần đầu sai %s.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Loại tiến hành sai %s.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Giới hạn sai %s, hãy dùng:\n"
" • unix|windows\n"
" • lowercase|uppercase\t\tchữ hoa hoặc chữ thường\n"
" • nocontrol\t\t\t\tkhông có điều khiển\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Bảng mã %s không hợp lệ\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: chưa đặt miền địa phương\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Không hỗ trợ chức năng chuyển đổi từ %s sang %s\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Gặp dãy đa byte không hoàn toàn hay không hợp lệ\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Số thứ tự lỗi %d không được quản lý\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode bị lỗi (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode bị lỗi (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"đã nhận %s, đang chuyển hướng kết quả tới %s.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"Đã nhận %s.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; đang tắt bỏ việc ghi sự kiện.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Sử dụng: %s [TÙY CHỌN]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Tham số cho các tùy chọn dài cũng là tham số cho các tùy chọn ngắn.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Khởi động:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           hiển thị phiên bản của Wget rồi thoát.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              hiển thị trợ giúp này.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        chuyển vào nền sau sau khi khởi động.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=COMMAND   thực hiện một câu lệnh dạng `.wgetrc'.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Tập tin ghi sự kiện và tập tin nhập vào:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FILE    ghi sự kiện vào FILE.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FILE  thêm thông báo sự kiện vào FILE.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               in nhiều thông tin để tìm sửa lỗi.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              in kết quả gỡ lỗi Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               im lặng (không đưa sự kiện).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             chi tiết (đây là mặc định).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr "  -nv, --no-verbose          không chi tiết, và không im lặng.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=TẬP_TIN     tải các URL tìm thấy trong TẬP_TIN cục bộ "
"hay bên ngoài.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          coi tập tin dữ liệu vào là HTML.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            quyết định các liên kết tập tin nhập HTML (-i -"
"F)\n"
"\t\t\t\t\tcân xứng với URL.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Tải xuống:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=SỐ            đặt số lần cố thử lại thành SỐ (0 = không giới "
"hạn).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr "       --retry-connrefused       cố tải dù kết nối bị từ chối.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FILE    ghi tài liệu vào FILE.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              bỏ qua những công việc sẽ tải tới tập tin\n"
"                                 đã có.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                tiếp tục tải phần còn tại của một tập tin.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=TYPE           chọn dạng mô tả tiến trình.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            không nhận lại tập tin trừ khi mới hơn\n"
"                                 nội bộ.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         in ra câu trả lời của máy chủ.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  không tải xuống gì hết.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SECONDS         đặt mọi giá trị thời gian chờ thành "
"SECONDS.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SECS        đặt thời gian chờ tìm DNS thành SECS.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SECS    đặt thời gian chờ kết nối thành SECS.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SECS       đặt thời gian chờ đọc thành SECS.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SECONDS            chờ SECONDS giữa các lần phục hồi.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SECONDS       chờ 1..SECONDS giữa các lần thử của một sự "
"phục hồi.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             chờ từ 0...2*WAIT giây giữa các lần phục "
"hồi.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                không dùng proxy.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=NUMBER            đặt giới hạn số phục hồi thành NUMBER.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADDRESS    bind tới ADDRESS (tên máy hoặc IP) trên máy "
"nội bộ.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=RATE         giới hạn tốc độ tải xuống thành RATE.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            không dùng cache tìm kiếm DNS.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  giới hạn ký tự trong tên tập tin thành "
"những gì OS cho phép.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case    không phân biệt chữ hoa/thường khi khớp tập tin/thư "
"mục.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              chỉ kết nối tới các địa chỉ IPv4.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              chỉ kết nối tới các địa chỉ IPv6.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILY    đầu tiên kết nối tới địa chỉ của nhóm chỉ "
"ra,\n"
"                                 một trong IPv6, IPv4, hoặc rỗng.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=USER               đặt người dùng cho cả ftp và http thành "
"USER.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=PASS           đặt cả mật khẩu ftp và http thành PASS.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            nhắc nhập mật khẩu.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  tắt hỗ trợ IRI.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=BẢNG_MÃ      dùng bảng mã này làm bảng mã cục bộ cho "
"IRI.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=BẢNG_MÃ     dùng bảng mã này làm bảng mã từ xa mặc "
"định.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Thư mục:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           không tạo thư mục.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        bắt buộc tạo thư mục.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      không tạo thư mục máy.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr "       --protocol-directories     dùng tên giao thức trong thư mục.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIX  ghi tập tin vào PREFIX/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=NUMBER          lời đi NUMBER thành phần thư mục ở xa.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Tùy chọn HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=USER        đặt người dùng http thành USER.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=PASS    đặt mật khẩu http thành PASS.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              không cho phép dữ liệu cache trên server.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=TÊN     Thay đổi tên trang mặc định (bình thường là « "
"index.html »).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension      lưu tài liệu HTML/CSS với phần mở rộng đúng.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         lờ đi thành phần `Content-Length' của phần "
"đầu.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=CHUỖI         chèn CHUỖI vào giữa các phần đầu.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect    số lần chuyển hướng tối đa cho phép trên mỗi "
"trang.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=USER       đặt USER làm tên người dùng ủy nhiệm.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=PASS   đặt PASS làm mật khẩu ủy nhiệm.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           thêm phần đầu `Referer: URL' vào yêu cầu "
"HTTP.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          ghi phần đầu HTTP vào tập tin.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT      dùng AGENT làm tên thay cho Wget/PHIÊNBẢN.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    không giữ HTTP sống (kết nối cố định).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            không dùng cookies.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=TẬP_TIN     nạp cookie từ TẬP_TIN trước khi làm việc.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=TẬP_TIN     ghi cookie vào TẬP_TIN sau khi làm việc.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  nạp và ghi cookie buổi làm việc (không thường "
"trực).\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=CHUỖI      dùng phương pháp POST; gửi CHUỖI làm dữ liệu.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=TẬP_TIN      dùng phương pháp POST; gửi nội dung của "
"TẬP_TIN.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   tùy theo dòng đầu « Content-Disposition »\n"
"\t\t\t(sắp đặt nội dung) khi chọn tên tập tin cục bộ\n"
"\t\t\t(VẪN THỰC NGHIỆM)\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Gửi thông tin xác thực HTTP Cơ bản\n"
"                               mà không đợi yêu cầu của máy phục vụ.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Tùy chọn HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     chọn giao thức bảo mật, một trong số auto, "
"SSLv2,\n"
"                                SSLv3, và TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   không kiểm tra tính hợp lệ của chứng thực "
"của server.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr ""
"       --certificate=TẬP_TIN       tập tin chứng nhận của ứng dụng khách\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=LOẠI  dạng chứng nhận ứng dụng khách, PEM hoặc "
"DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=TẬP_TIN       tập tin chìa khóa riêng tư.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""
"       --private-key-type=LOẠI  dạng chìa khóa riêng tư, PEM hoặc DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=TẬP_TIN    tập tin với các gói của CA.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr "       --ca-directory=DIR       thư mục chứa danh sách hash của CA.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=TẬP_TIN       tập tin với dữ liệu theo xác suất để tạo "
"thành SSL PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=TẬP_TIN          đặt tên socket EGD với dữ liệu theo xác "
"suất.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Tùy chọn FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             Dùng định dạng Stream_LF cho mọi tập tin FTP "
"nhị phân.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=USER         đặt người dùng ftp thành USER.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=PASS     đặt mật khẩu ftp thành PASS.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     không xóa bỏ tập tin `.listing'.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               không dùng globbing cho tên tập tin FTP.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        không dùng dạng truyền tải \"passive\" (thụ "
"động).\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         khi đệ quy, lấy tập tin được liên kết đến "
"(không phải thư mục).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Tải đệ quy:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          dùng tải đệ quy.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=SỐ       độ sâu lớn nhất của đệ quy (inf hoặc 0 = vô hạn).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after       xóa tập tin nội bộ sau khi tải xong.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      khiến liên kết trong mã HTML hay CSS tải xuống "
"chỉ tới tập tin cục bộ.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   trước khi chuyển đổi tập tin X, sao lưu thành "
"X_orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   trước khi chuyển đổi tập tin X, sao lưu thành X."
"orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             tùy chọn rút gọn tương đương với\n"
"\t\t\t\t\t« -N -r -l inf --no-remove-listing ».\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    lấy mọi hình ảnh, v.v... cần thiết để hiển thị "
"trang HTML.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    dùng việc giới hạn (SGML) điều khiển chú thích "
"HTML.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Chấp nhận/nhả ra đệ quy:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LIST               những phần mở rộng chấp nhận, cách nhau "
"một dấu phẩy.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LIST               những phần mở rộng nhả ra, cách nhau một "
"dấu phẩy.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LIST              những miền chấp nhận, cách nhau một dấu "
"phẩy.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LIST      những miền nhả ra, cách nhau một dấu "
"phẩy.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                đi theo liên kết FTP từ tài liệu HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LIST          những thẻ HTML đi theo, cách nhau một dấu "
"phẩy.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LIST          những thẻ HTML bị lờ đi, cách nhau một "
"dấu phẩy.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr "  -H,  --span-hosts                đi tới máy khác khi đệ quy.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  chỉ đi theo liên kết tương đối.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LIST  những thư mục cho phép.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LIST  những thư mục bỏ đi.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 không đi ngược lên thư mục mẹ.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Gửi báo cáo lỗi (bug) và đề nghị tới <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr ""
"GNU Wget %s, một chương trình truyền tải mạng có thể chạy ở dạng daemon.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Mật khẩu cho người dùng %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Mật khẩu : "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Miền địa phương: "

#: src/main.c:782
msgid "Compile: "
msgstr "Biên dịch: "

#: src/main.c:783
msgid "Link: "
msgstr "Liên kết: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s xây dựng trên VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s xây dựng trên %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (môi trường)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (người dùng)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (hệ thống)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Tác quyền © năm 2009 của Tổ chực Phần mềm Tự do.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Giấy Phép Công Cộng GNU (GPL), phiên bản 3 hay sau\n"
"<http://gnu.org/licenses/gpl.html>\n"
"Đây là phần mềm tự do : bạn có quyền thay đổi và phát hành lại nó.\n"
"KHÔNG CÓ BẢO HÀNH GÌ CẢ, với điều kiện được pháp luật cho phép.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Được viết bởi Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Nhà duy trì hiện thời: Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Hãy gửi báo cáo lỗi và đề nghị tới <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Hãy thử `%s --help' để biết thêm tùy chọn.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: tùy chọn không cho phép -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Không thể cùng một lúc thông báo chi tiết và im lặng.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Không thể cùng một lúc đánh dấu thời gian và không ghi đè tập tin cũ.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Không thể chỉ ra cả --inet4-only và --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Đưa ra nhiều địa chỉ URL, hoặc dùng tùy chọn « -p » hay « -r »,\n"
"thì không thể ghi rõ cả hai tùy chọn « -k » và « -O ».\n"
"Xem sổ tay để tìm chi tiết.\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"CẢNH BÁO : tổ hợp tùy chọn « -O » với « -r » hay « -p » gây ra\n"
"tất cả nội dung đã tải lên được đặt vào tập tin riêng lẻ bạn đã ghi rõ.\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"CẢNH BÁO : chức năng ghi giờ không làm gì khi dùng cùng với tùy chọn « -O ». "
"Xem sổ tay để tìm chi tiết.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Tập tin `%s' đã có ở đó nên không nhận nữa.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Không thể chỉ ra cả « --ask-password » và « --password ».\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: thiếu URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Phiên bản này không hỗ trợ IRI\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"CẢNH BÁO : không thể mở lại đầu ra tiêu chuẩn trong chế độ nhị phân;\n"
"\ttập tin tải xuống có thể chứa kết thúc dòng không thích hợp.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Không tìm thấy URL trong %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"KẾT THÚC --%s--\n"
"Đã tải về: %d tập tin, %s trên %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Giới hạn tải về %s BỊ VƯỢT QUÁ !\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Tiếp tục trong nền sau.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Đang tiếp tục trong nền sau, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "Kết quả sẽ được ghi vào %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Không tìm thấy trình điều khiển ổ cắm có thể sử dụng.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: cảnh báo: hiệu bài %s xuất hiện trước bất kỳ tên máy nào\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: không rõ hiệu bài « %s »\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Sử dụng: %s NETRC [TÊN MÁY]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: không thể lấy trạng thái về %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "CẢNH BÁO: đang sử dụng một nguồn sinh theo xác suất yếu.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Không thể tạo nguồn sinh PRNG, coi như sử dụng --random-file.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: không thể thẩm tra chứng nhận của %s, cấp bởi %s:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Không thể thẩm tra cục bộ quyền của nhà cấp.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Gặp chứng nhận tự ký.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Chứng nhận đã cấp nhưng chưa hợp lệ.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Chứng nhận đã cấp cũng đã hết hạn dùng.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr "%s: tên chung của chứng nhận %s không tương ứng tên máy yêu cầu %s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: tên chung chứng nhận không hợp lệ (chứa một ký tự NUL).\n"
"Trường hợp này có thể ngụ ý rằng máy không phải là %s thật.\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr "Để kết nối không an toàn tới %s, hãy dùng `-no-check-certificate'.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ nhảy qua %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Lỗi trong định dạng dấu chấm %s, để nguyên.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  tới %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   trong "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Không thể lấy tần số đồng hồ THỜI GIAN THỰC: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Đang xóa bỏ %s vì nó sẽ bị nhả ra.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Không thể mở %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Đang nạp robots.txt; xin hãy lờ đi các thông báo lỗi.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Lỗi phân tích URL của proxy %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Lỗi trong URL của proxy %s: Phải là HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Vượt quá giới hạn %d lần chuyển hướng.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Đầu hàng.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Đang thử lại.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Không tìm thấy liên kết bị ngắt.\n"
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
"Tìm thấy %d liên kết bị ngắt.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Không có lỗi"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Sơ đồ không hỗ trợ %s"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Thiếu sơ đồ"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Sai tên máy"

#: src/url.c:641
msgid "Bad port number"
msgstr "Số thứ tự cổng xấu"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Sai tên người dùng"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Địa chỉ số IPv6 không có giới hạn"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Không hỗ trợ địa chỉ IPv6"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Địa chỉ IPv6 không đúng"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "Chưa biên dịch để hỗ trợ HTTPS"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: không cấp pháp được đủ bộ nhớ ; cạn bộ nhớ.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Phân phối không thành công %ld byte; cạn bộ nhớ.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: vùng đệm văn bản quá lớn (%ld byte), nên hủy bỏ.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Tiếp tục trong nền sau, pid %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Bỏ liên kết mềm %s không thành công: %s\n"
