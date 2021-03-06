"Đang thử lại.\n"
"\n"

#: src/url.c:642
msgid "No error"
msgstr "Không có lỗi"

#: src/url.c:644
msgid "Unsupported scheme"
msgstr "Sơ đồ không hỗ trợ"

#: src/url.c:646
msgid "Empty host"
msgstr "Máy rỗng"

#: src/url.c:648
msgid "Bad port number"
msgstr "Số thứ tự cổng xấu"

#: src/url.c:650
msgid "Invalid user name"
msgstr "Sai tên người dùng"

#: src/url.c:652
msgid "Unterminated IPv6 numeric address"
msgstr "Địa chỉ số IPv6 không có giới hạn"

#: src/url.c:654
msgid "IPv6 addresses not supported"
msgstr "Không hỗ trợ địa chỉ IPv6"

#: src/url.c:656
msgid "Invalid IPv6 numeric address"
msgstr "Địa chỉ IPv6 không đúng"

#. parent, no error
#: src/utils.c:347
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Tiếp tục trong nền sau, pid %d.\n"

#: src/utils.c:391
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "Bỏ liên kết mềm `%s' không thành công: %s\n"

#: src/xmalloc.c:72
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr "Không chuyển đổi được `%s' thành địa chỉ tên.  Chuyển thành ANY.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST không thành công; sẽ không cắt bớt `%s'.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s để tới]"

#~ msgid "Host not found"
#~ msgstr "Không tìm thấy máy"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Kết thúc tập tin khi phân tích phần đầu.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Tiếp tục tải tập tin không thành công, có mâu thuẫn với '-c'.\n"
#~ "Đang từ chối cắt bớt tập tin đã có `%s'.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (còn %s)"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Bắt đầu:\n"
#~ "  -V,  --version           Hiển thị phiên bản của Wget và thoát.\n"
#~ "  -h,  --help              in trợ giúp này.\n"
#~ "  -b,  --background        chuyển vào nền sau, sau khi bẳt đầu chạy.\n"
#~ "  -e,  --execute=COMMAND   chạy một câu lệnh \"kiểu\" .wgetrc.\n"
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
#~ "Tập tin Ghi sự kiện và đầu vào:\n"
#~ "  -o,  --output-file=FILE     ghi thông báo vào FILE.\n"
#~ "  -a,  --append-output=FILE   thêm thông báo vào FILE.\n"
#~ "  -d,  --debug                in ra thông tin dùng để tìm & sửa lỗi.\n"
#~ "  -q,  --quiet                im lặng (không hiển thị gì).\n"
#~ "  -v,  --verbose              chi tiết (là mặc định).\n"
#~ "  -nv, --non-verbose          tắt bỏ chế độ chi tiết, mà cũng không im "
#~ "lặng.\n"
#~ "  -i,  --input-file=FILE      tải xuống các URL tìm thấy trong FILE.\n"
#~ "  -F,  --force-html           coi tập tin đầu vào có dạng HTML.\n"
#~ "  -B,  --base=URL             thêm URL vào đầu liên kết tương đối trong -"
#~ "F -i file.\n"
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
#~ "Tải xuống:\n"
#~ "  -t,  --tries=NUMBER           đặt số lần thử thành NUMBER (0 là không "
#~ "giới hạn).\n"
#~ "       --retry-connrefused      cố tải dù kết nối bị từ chối.\n"
#~ "  -O   --output-document=FILE   ghi nhớ tài liệu thành FILE.\n"
#~ "  -nc, --no-clobber             không ghi đè lên tập tin đã có hoặc sử "
#~ "dụng hậu tố .#.\n"
#~ "  -c,  --continue               tải phần còn lại của tập tin đã tải.\n"
#~ "       --progress=TYPE          chọn dạng đo tiến trình.\n"
#~ "  -N,  --timestamping           đừng tải lại tập tin trừ khi mới hơn nội "
#~ "bộ.\n"
#~ "  -S,  --server-response        in ra câu trả lời của máy chủ.\n"
#~ "       --spider                 đừng tải gì cả.\n"
#~ "  -T,  --timeout=SECONDS        đặt tất cả thời gian chờ thành SECONDS.\n"
#~ "       --dns-timeout=SECS       đặt thời gian chờ tìm kiếm DNS thành "
#~ "SECS.\n"
#~ "       --connect-timeout=SECS   đặt thời gian chờ kết nối thành SECS.\n"
#~ "       --read-timeout=SECS      đặt thời gian đọc thành SECS.\n"
#~ "  -w,  --wait=SECONDS           chờ SECONDS giữa các lần tải.\n"
#~ "       --waitretry=SECONDS      chờ 1...SECONDS giữa những lần thử tải "
#~ "một tập tin.\n"
#~ "       --random-wait            chờ từ 0...2*WAIT giây giữa các lần tải.\n"
#~ "  -Y,  --proxy=on/off           bật hay tắt proxy.\n"
#~ "  -Q,  --quota=NUMBER           đặt giới hạn số tải thành NUMBER.\n"
#~ "       --bind-address=ADDRESS   bind tới ADDRESS (tên máy hoặc IP) trên "
#~ "máy nội bộ.\n"
#~ "       --limit-rate=RATE        giới hạn tốc độ thành RATE.\n"
#~ "       --dns-cache=off          tắt bỏ bộ nhớ tạm cho tìm kiếm DNS.\n"
#~ "       --restrict-file-names=OS giới hạn ký tự trong tên tập tin thành "
#~ "những ký tự hệ điều hành OS cho phép.\n"
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
#~ "Thư mục:\n"
#~ "  -nd, --no-directories            không tạo thư mục.\n"
#~ "  -x,  --force-directories         bắt buộc tạo thư mục.\n"
#~ "  -nH, --no-host-directories       không tạo thư mục cho các máy.\n"
#~ "  -P,  --directory-prefix=PREFIX   ghi tập tin vào PREFIX/...\n"
#~ "       --cut-dirs=NUMBER           bỏ qua NUMBER thành phần của thư mục ở "
#~ "xa.\n"
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
#~ "Tùy chọn HTTP:\n"
#~ "       --http-user=USER      đặt người dùng http thành USER.\n"
#~ "       --http-passwd=PASS    đặt mật khẩu http thành PASS.\n"
#~ "  -C,  --cache=on/off        (không) cho phép dữ liệu cache của máy chủ "
#~ "(thông thường cho phép).\n"
#~ "  -E,  --html-extension      ghi nhớ mọi tài liệu text/html với \"đuôi\" ."
#~ "html.\n"
#~ "       --ignore-length       lờ đi `Content-Length' trong phần đầu.\n"
#~ "       --header=STRING       chèn chuỗi STRING vào giữa các phần đầu.\n"
#~ "       --proxy-user=USER     dùng USER làm tên người dùng proxy.\n"
#~ "       --proxy-passwd=PASS   dùng PASS làm mật khẩu proxy.\n"
#~ "       --referer=URL         thêm phần đầu `Referer: URL' vào yêu cầu "
#~ "HTTP.\n"
#~ "  -s,  --save-headers        ghi nhớ phần đầu HTTP vào tập tin.\n"
#~ "  -U,  --user-agent=AGENT    lấy AGENT làm tên đại diện thay cho Wget/"
#~ "VERSION.\n"
#~ "       --no-http-keep-alive  không dùng tính năng giữ kết nối HTTP (kết "
#~ "nối cố định).\n"
#~ "       --cookies=off         không dùng cookies.\n"
#~ "       --load-cookies=FILE   nạp cookies từ FILE trước buổi làm việc.\n"
#~ "       --save-cookies=FILE   ghi cookies vào FILE sau buổi làm việc.\n"
#~ "       --post-data=STRING    dùng phương pháp POST; gửi STRING như dữ "
#~ "liệu.\n"
#~ "       --post-file=FILE      dùng phương pháp POST; gửi nội dung của "
#~ "FILE.\n"
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
#~ "Tùy chọn HTTPS (SSL):\n"
#~ "       --sslcertfile=FILE     chứng thực không bắt buộc của client.\n"
#~ "       --sslcertkey=KEYFILE   tập tin chìa khóa không bắt buộc cho chứng "
#~ "thực này.\n"
#~ "       --egd-file=FILE        tên tập tin của socket EGD.\n"
#~ "       --sslcadir=DIR         thư mục chứa danh sách hash của CA.\n"
#~ "       --sslcafile=FILE       tập tin với các gói CA\n"
#~ "       --sslcerttype=0/1      Dạng Client-Cert 0=PEM (mặc định) / 1=ASN1 "
#~ "(DER)\n"
#~ "       --sslcheckcert=0/1     Kiểm tra chứng thực của máy chủ đưa ra CA "
#~ "này\n"
#~ "       --sslprotocol=0-3      Chọn giao thức SSL; 0=tự động,\n"
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
#~ "Tùy chọn FTP:\n"
#~ "  -nr, --dont-remove-listing   không xóa bỏ các tập tin `.listing'.\n"
#~ "  -g,  --glob=on/off           sử dụng hay không wildcard trong tên tập "
#~ "tin.\n"
#~ "       --passive-ftp           sử dụng chế độ truyền tải \"passive\".\n"
#~ "       --retr-symlinks         khi đệ quy, lấy cả tập tin được liên kết "
#~ "chỉ đến (không tải thư mục).\n"
#~ "\n"

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
#~ "Truyền tải đệ quy:\n"
#~ "  -r,  --recursive          tải xuống đệ quy.\n"
#~ "  -l,  --level=NUMBER       độ sâu lớn nhất của đệ quy (inf hoặc 0 để "
#~ "không giới hạn).\n"
#~ "       --delete-after       xóa các tập tin nội bộ sau khi tải chúng.\n"
#~ "  -k,  --convert-links      chuyển các liên kết không tương đối thành "
#~ "tương đối.\n"
#~ "  -K,  --backup-converted   trước khi chuyển đổi tập tin A, sao lưu thành "
#~ "A.orig.\n"
#~ "  -m,  --mirror             tùy chọn rút gọn tương đương với -r -N -l inf "
#~ "-nr.\n"
#~ "  -p,  --page-requisites    lấy tất cả hình ảnh, v.v... cần để hiển thị "
#~ "trang HTML.\n"
#~ "       --strict-comments    bật điều khiển chính xác (SGML) của chú thích "
#~ "HTML.\n"
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
#~ "Chấp nhận/nhả ra đệ quy:\n"
#~ "  -A,  --accept=LIST                danh sách những phần mở rộng (phân "
#~ "cách nhau                                    bởi dấu \":\") được chấp "
#~ "nhận.\n"
#~ "  -R,  --reject=LIST                danh sách những phần mở rộng (phân "
#~ "cách nhau\t\t\t\t\t\t\t\t\t \t\t\t\t    bởi dấu \":\") bị nhả ra.\n"
#~ "  -D,  --domains=LIST               danh sách những miền (phân cách nhau "
#~ "bởi dấu\t\t\t\t\t\t\t\t\t \t\t\t\t    \":\") được chấp nhận.\n"
#~ "       --exclude-domains=LIST       danh sách những miền (phân cách nhau "
#~ "bởi dấu\t\t\t\t\t\t\t\t\t \t\t\t\t    \":\") bị nhả ra.\n"
#~ "       --follow-ftp                 đi theo liên kết FTP từ tài liệu "
#~ "HTML.\n"
#~ "       --follow-tags=LIST           danh sách những thẻ HTML (phân cách "
#~ "nhau bởi\t\t\t \t    \t\t\t    dấu \":\") đi theo.\n"
#~ "  -G,  --ignore-tags=LIST           danh sách những thẻ HTML (phân cách "
#~ "nhau bởi\t\t\t \t    \t\t\t    dấu \":\") lờ đi.\n"
#~ "  -H,  --span-hosts                 đi tới các máy ngoại quốc khi đệ "
#~ "quy.\n"
#~ "  -L,  --relative                   chỉ đi theo các liên kết tương đối.\n"
#~ "  -I,  --include-directories=LIST   danh sách những thư mục cho phép.\n"
#~ "  -X,  --exclude-directories=LIST   danh sách những thư mục không cho "
#~ "phép.\n"
#~ "  -np, --no-parent                  không đi ngược lên thư mục mẹ.\n"
#~ "\n"

#~ msgid "%s: debug support not compiled in.\n"
#~ msgstr "%s: không biên dịch với hỗ trợ báo lỗi (debug).\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Đang chạy WinHelp %s\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Không đủ bộ nhớ.\n"
