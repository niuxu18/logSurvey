msgid "Unknown error"
msgstr "不明的錯誤"

#: src/http.c:621 src/http.c:1433
msgid "Unable to establish SSL connection.\n"
msgstr ""

#: src/http.c:629
#, fuzzy, c-format
msgid "Reusing connection to %s:%hu.\n"
msgstr "將會繼續嘗試與 %s 連線: %hu.\n"

#: src/http.c:805
#, fuzzy, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "失敗於寫入 HTTP 請求時.\n"

#: src/http.c:810
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "已經送出 %s 請求封包，正在等待回應中... "

#: src/http.c:854
msgid "End of file while parsing headers.\n"
msgstr "正在分析標頭內容時，檔案已經未端.\n"

#: src/http.c:865
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "讀取的標頭有錯誤 (%s).\n"

#: src/http.c:905
msgid "No data received"
msgstr "沒有接收到任何資料"

#: src/http.c:907
msgid "Malformed status line"
msgstr "畸形的狀態行"

#: src/http.c:912
msgid "(no description)"
msgstr "(沒有相關說明)"

#: src/http.c:1030
msgid "Authorization failed.\n"
msgstr "認證失敗.\n"

#: src/http.c:1037
msgid "Unknown authentication scheme.\n"
msgstr "不明的認證方案.\n"

#: src/http.c:1127
#, c-format
msgid "Location: %s%s\n"
msgstr "位置: %s%s\n"

#: src/http.c:1128 src/http.c:1153
msgid "unspecified"
msgstr "沒有指定"

#: src/http.c:1129
msgid " [following]"
msgstr " [下列各項]"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:1143
msgid "Length: "
msgstr "長度: "

#: src/http.c:1148
#, c-format
msgid " (%s to go)"
msgstr " (%s 要開始)"

#: src/http.c:1153
msgid "ignored"
msgstr "忽略"

#: src/http.c:1254
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "警告: 在 HTTP 裡面並支援萬用字元符號 (wildcards).\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:1275
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "檔案 `%s' 已經存在，將不取回.\n"

#: src/http.c:1425
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "無法寫到 `%s' (%s).\n"

#: src/http.c:1443
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "錯誤: 要求重新定向 (%d) 卻沒有位置.\n"

#: src/http.c:1468
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s 錯誤 %d: %s.\n"

#: src/http.c:1481
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "遺失 \"Last-modified\" 的檔頭 -- 時間戳記被關閉.\n"

#: src/http.c:1489
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "無效的 \"Last-modified\" 檔頭 -- 時間戳記被忽略.\n"

#: src/http.c:1524
msgid "Remote file is newer, retrieving.\n"
msgstr "遠端的檔案比較新，取回中.\n"

#: src/http.c:1559
#, c-format
msgid ""
"%s (%s) - `%s' saved [%ld/%ld]\n"
