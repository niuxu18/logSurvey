 msgid "%s: option requires an argument -- %c\n"
 msgstr "%s: 選項需要一個引數 -- %c\n"
 
-#: src/host.c:432
+#: src/host.c:394
 #, c-format
 msgid "%s: Cannot determine user-id.\n"
 msgstr "%s: 無法偵測使用者識別碼.\n"
 
-#: src/host.c:444
+#: src/host.c:406
 #, c-format
 msgid "%s: Warning: uname failed: %s\n"
 msgstr "%s: 警告: uname 失敗: %s\n"
 
-#: src/host.c:456
+#: src/host.c:418
 #, c-format
 msgid "%s: Warning: gethostname failed\n"
 msgstr "%s: 警告: gethostname 失敗\n"
 
-#: src/host.c:484
+#: src/host.c:446
 #, c-format
 msgid "%s: Warning: cannot determine local IP address.\n"
 msgstr "%s: 警告: 無法偵測本地 IP 位址.\n"
 
-#: src/host.c:498
+#: src/host.c:460
 #, c-format
 msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
 msgstr "%s: 警告: 無法反查本地 IP 位址.\n"
 
-#: src/host.c:506
+#. This gets ticked pretty often.  Karl Berry reports
+#. that there can be valid reasons for the local host
+#. name not to be an FQDN, so I've decided to remove the
+#. annoying warning.
+#: src/host.c:473
 #, c-format
 msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
 msgstr "%s: 警告: 本地位址的反查不符合 FQDN 規格!\n"
 
-#: src/host.c:533
+#: src/host.c:501
 msgid "Host not found"
 msgstr "找不到主機"
 
-#: src/host.c:535
+#: src/host.c:503
 msgid "Unknown error"
 msgstr "不明的錯誤"
 
-#: src/html.c:433 src/html.c:435
-#, c-format
-msgid "Index of /%s on %s:%d"
-msgstr "/%s 的索引在 %s:%d"
-
-#: src/html.c:457
-msgid "time unknown       "
-msgstr "時間不明           "
-
-#: src/html.c:461
-msgid "File        "
-msgstr "檔案        "
-
-#: src/html.c:464
-msgid "Directory   "
-msgstr "目錄        "
-
-#: src/html.c:467
-msgid "Link        "
-msgstr "連結        "
-
-#: src/html.c:470
-msgid "Not sure    "
-msgstr "沒有確定    "
+#: src/http.c:621 src/http.c:1433
+msgid "Unable to establish SSL connection.\n"
+msgstr ""
 
-#: src/html.c:488
-#, c-format
-msgid " (%s bytes)"
-msgstr " (%s 位元組)"
+#: src/http.c:629
+#, fuzzy, c-format
+msgid "Reusing connection to %s:%hu.\n"
+msgstr "將會繼續嘗試與 %s 連線: %hu.\n"
 
-#: src/http.c:483
-msgid "Failed writing HTTP request.\n"
+#: src/http.c:805
+#, fuzzy, c-format
+msgid "Failed writing HTTP request: %s.\n"
 msgstr "失敗於寫入 HTTP 請求時.\n"
 
-#: src/http.c:488
+#: src/http.c:810
 #, c-format
 msgid "%s request sent, awaiting response... "
 msgstr "已經送出 %s 請求封包，正在等待回應中... "
 
-#: src/http.c:527
+#: src/http.c:854
 msgid "End of file while parsing headers.\n"
 msgstr "正在分析標頭內容時，檔案已經未端.\n"
 
-#: src/http.c:538
+#: src/http.c:865
 #, c-format
 msgid "Read error (%s) in headers.\n"
 msgstr "讀取的標頭有錯誤 (%s).\n"
 
-#: src/http.c:578
+#: src/http.c:905
 msgid "No data received"
 msgstr "沒有接收到任何資料"
 
-#: src/http.c:580
+#: src/http.c:907
 msgid "Malformed status line"
 msgstr "畸形的狀態行"
 
-#: src/http.c:585
+#: src/http.c:912
 msgid "(no description)"
 msgstr "(沒有相關說明)"
 
-#. If we have tried it already, then there is not point
-#. retrying it.
-#: src/http.c:669
+#: src/http.c:1030
 msgid "Authorization failed.\n"
 msgstr "認證失敗.\n"
 
-#: src/http.c:676
+#: src/http.c:1037
 msgid "Unknown authentication scheme.\n"
 msgstr "不明的認證方案.\n"
 
-#: src/http.c:739
+#: src/http.c:1127
 #, c-format
 msgid "Location: %s%s\n"
 msgstr "位置: %s%s\n"
 
-#: src/http.c:740 src/http.c:765
+#: src/http.c:1128 src/http.c:1153
 msgid "unspecified"
 msgstr "沒有指定"
 
-#: src/http.c:741
+#: src/http.c:1129
 msgid " [following]"
 msgstr " [下列各項]"
 
 #. No need to print this output if the body won't be
 #. downloaded at all, or if the original server response is
 #. printed.
-#: src/http.c:755
+#: src/http.c:1143
 msgid "Length: "
 msgstr "長度: "
 
-#: src/http.c:760
+#: src/http.c:1148
 #, c-format
 msgid " (%s to go)"
 msgstr " (%s 要開始)"
 
-#: src/http.c:765
+#: src/http.c:1153
 msgid "ignored"
 msgstr "忽略"
 
-#: src/http.c:848
+#: src/http.c:1254
 msgid "Warning: wildcards not supported in HTTP.\n"
 msgstr "警告: 在 HTTP 裡面並支援萬用字元符號 (wildcards).\n"
 
 #. If opt.noclobber is turned on and file already exists, do not
 #. retrieve the file
-#: src/http.c:863
+#: src/http.c:1275
 #, c-format
 msgid "File `%s' already there, will not retrieve.\n"
 msgstr "檔案 `%s' 已經存在，將不取回.\n"
 
-#: src/http.c:969
+#: src/http.c:1425
 #, c-format
 msgid "Cannot write to `%s' (%s).\n"
 msgstr "無法寫到 `%s' (%s).\n"
 
-#: src/http.c:979
+#: src/http.c:1443
 #, c-format
 msgid "ERROR: Redirection (%d) without location.\n"
 msgstr "錯誤: 要求重新定向 (%d) 卻沒有位置.\n"
 
-#: src/http.c:995
+#: src/http.c:1468
 #, c-format
 msgid "%s ERROR %d: %s.\n"
 msgstr "%s 錯誤 %d: %s.\n"
 
-#: src/http.c:1007
+#: src/http.c:1481
 msgid "Last-modified header missing -- time-stamps turned off.\n"
 msgstr "遺失 \"Last-modified\" 的檔頭 -- 時間戳記被關閉.\n"
 
-#: src/http.c:1015
+#: src/http.c:1489
 msgid "Last-modified header invalid -- time-stamp ignored.\n"
 msgstr "無效的 \"Last-modified\" 檔頭 -- 時間戳記被忽略.\n"
 
-#: src/http.c:1047
+#: src/http.c:1524
 msgid "Remote file is newer, retrieving.\n"
 msgstr "遠端的檔案比較新，取回中.\n"
 
-#: src/http.c:1081
+#: src/http.c:1559
 #, c-format
-msgid "%s (%s) - `%s' saved [%ld/%ld]\n\n"
-msgstr "%s (%s) - `%s' 被存為 [%ld/%ld]\n\n"
+msgid ""
+"%s (%s) - `%s' saved [%ld/%ld]\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' 被存為 [%ld/%ld]\n"
+"\n"
 
-#: src/http.c:1113
+#: src/http.c:1607
 #, c-format
 msgid "%s (%s) - Connection closed at byte %ld. "
 msgstr "%s (%s) - 連線被關閉在 %ld 位元組. "
 
-#: src/http.c:1121
+#: src/http.c:1615
 #, c-format
-msgid "%s (%s) - `%s' saved [%ld/%ld])\n\n"
-msgstr "%s (%s) - `%s' 被存為 [%ld/%ld])\n\n"
+msgid ""
+"%s (%s) - `%s' saved [%ld/%ld])\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' 被存為 [%ld/%ld])\n"
+"\n"
 
-#: src/http.c:1133
+#: src/http.c:1635
 #, c-format
 msgid "%s (%s) - Connection closed at byte %ld/%ld. "
 msgstr "%s (%s) - 連線關閉於 %ld/%ld byte."
 
-#: src/http.c:1144
+#: src/http.c:1646
 #, c-format
 msgid "%s (%s) - Read error at byte %ld (%s)."
 msgstr "%s (%s) - 於 %ld (%s) 位元組處發生讀取錯誤."
 
-#: src/http.c:1152
+#: src/http.c:1654
 #, c-format
 msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
 msgstr "%s (%s) - 於 %ld/%ld (%s) 位元組處發生讀取錯誤."
 
-#: src/init.c:311 src/netrc.c:249
+#: src/init.c:332 src/netrc.c:261
 #, c-format
 msgid "%s: Cannot read %s (%s).\n"
 msgstr "%s: 無法讀取 %s (%s).\n"
 
-#: src/init.c:332 src/init.c:338
+#: src/init.c:350 src/init.c:356
 #, c-format
 msgid "%s: Error in %s at line %d.\n"
 msgstr "%s: 失敗於 %s 在第 %d 行.\n"
 
-#: src/init.c:369
+#: src/init.c:387
 #, c-format
 msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
 msgstr "%s: 警告: 系統與使用者的 wgetrc 都指向 `%s'.\n"
 
-#: src/init.c:460
+#: src/init.c:479
 #, c-format
 msgid "%s: BUG: unknown command `%s', value `%s'.\n"
 msgstr "%s: BUG: 不明的命令 `%s', 數值 `%s'.\n"
 
-#: src/init.c:487
+#: src/init.c:501
+#, fuzzy, c-format
+msgid "%s: Out of memory.\n"
+msgstr "%s: %s: 沒有足夠的記憶體.\n"
+
+#: src/init.c:507
+#, fuzzy, c-format
+msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
+msgstr "%s: 警告: 無法反查本地 IP 位址.\n"
+
+#: src/init.c:535
 #, c-format
 msgid "%s: %s: Please specify on or off.\n"
 msgstr "%s: %s: 請特別指定開啟或關閉.\n"
 
-#: src/init.c:505 src/init.c:762 src/init.c:784 src/init.c:857
+#: src/init.c:579
+#, fuzzy, c-format
+msgid "%s: %s: Please specify always, on, off, or never.\n"
+msgstr "%s: %s: 請特別指定開啟或關閉.\n"
+
+#: src/init.c:598 src/init.c:855 src/init.c:877 src/init.c:941
 #, c-format
 msgid "%s: %s: Invalid specification `%s'.\n"
 msgstr "%s: %s: 無效的指定項目 `%s'.\n"
 
-#: src/init.c:618 src/init.c:640 src/init.c:662 src/init.c:688
+#: src/init.c:711 src/init.c:733 src/init.c:755 src/init.c:781
 #, c-format
 msgid "%s: Invalid specification `%s'\n"
 msgstr "%s: 無效的指定項目 `%s'\n"
 
-#: src/main.c:101
+#: src/main.c:119
 #, c-format
 msgid "Usage: %s [OPTION]... [URL]...\n"
 msgstr "用法: %s [選項]... [URL]...\n"
 
-#: src/main.c:109
+#: src/main.c:127
 #, c-format
 msgid "GNU Wget %s, a non-interactive network retriever.\n"
 msgstr "GNY Wget %s, 一個非交談式的網路抓檔工具.\n"
 
 #. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
 #. don't bitch.  Also, it makes translation much easier.
-#: src/main.c:114
-msgid "\nMandatory arguments to long options are mandatory for short options too.\n\n"
-msgstr "\n命令的引數使用長項目與短項目相同.\n"
+#: src/main.c:132
+msgid ""
+"\n"
+"Mandatory arguments to long options are mandatory for short options too.\n"
+"\n"
+msgstr ""
+"\n"
+"命令的引數使用長項目與短項目相同.\n"
 
-#: src/main.c:117
+#: src/main.c:135
+#, fuzzy
 msgid ""
 "Startup:\n"
 "  -V,  --version           display the version of Wget and exit.\n"
 "  -h,  --help              print this help.\n"
 "  -b,  --background        go to background after startup.\n"
-"  -e,  --execute=COMMAND   execute a `.wgetrc' command.\n"
+"  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
 "\n"
 msgstr ""
 "啟動:\n"
