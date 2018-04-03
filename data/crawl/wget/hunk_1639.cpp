 msgid "Resolving %s... "
 msgstr "Пошук %s... "
 
-#: src/host.c:762
+#: src/host.c:763
 msgid "failed: No IPv4/IPv6 addresses for host.\n"
-msgstr ""
+msgstr "збой: адсутнічае IPv4/IPv6 адрас для вузла.\n"
 
-#: src/host.c:785
+#: src/host.c:786
 msgid "failed: timed out.\n"
 msgstr "збой: скончыўся час.\n"
 
 #: src/html-url.c:289
 #, c-format
 msgid "%s: Cannot resolve incomplete link %s.\n"
-msgstr ""
+msgstr "%s: немагчыма разьвязаць незавершаную спасылку %s.\n"
 
 #: src/html-url.c:696
 #, c-format
 msgid "%s: Invalid URL %s: %s\n"
-msgstr ""
+msgstr "%s: нерэчаісны URL %s: %s\n"
 
 #: src/http.c:368
 #, c-format
 msgid "Failed writing HTTP request: %s.\n"
 msgstr "Памылка запісу HTTP зварота: %s.\n"
 
-#: src/http.c:737
+#: src/http.c:745
 msgid "No headers, assuming HTTP/0.9"
 msgstr "Адсутнічаюць загалоўкі; верагодна, HTTP/0.9"
 
-#: src/http.c:1414
+#: src/http.c:1430
 msgid "Disabling SSL due to encountered errors.\n"
-msgstr ""
+msgstr "SSL адключаны з-за пералічаных памылак.\n"
 
-#: src/http.c:1567
-#, c-format
-msgid "POST data file `%s' missing: %s\n"
-msgstr ""
-
-#: src/http.c:1616
+#: src/http.c:1548
 #, fuzzy, c-format
+msgid "POST data file %s missing: %s\n"
+msgstr "Адсутнічае файл \"%s\" з POST-данымі: %s\n"
+
+#: src/http.c:1632
+#, c-format
 msgid "Reusing existing connection to %s:%d.\n"
-msgstr "Паўторнае выкарыстаньне далучэньня да %s:%hu.\n"
+msgstr "Паўторнае выкарыстаньне існуючага далучэньня да %s:%d.\n"
 
-#: src/http.c:1684
+#: src/http.c:1701
 #, c-format
 msgid "Failed reading proxy response: %s\n"
 msgstr "Памылка чытаньня адказу проксі: %s.\n"
 
-#: src/http.c:1704
+#: src/http.c:1721
 #, c-format
 msgid "Proxy tunneling failed: %s"
 msgstr "Збой проксі-тунэлю: %s"
 
-#: src/http.c:1749
+#: src/http.c:1766
 #, c-format
 msgid "%s request sent, awaiting response... "
 msgstr "%s зварот дасланы, чакаецца адказ... "
 
-#: src/http.c:1760
+#: src/http.c:1777
 msgid "No data received.\n"
 msgstr "Даныя не атрыманы.\n"
 
-#: src/http.c:1767
+#: src/http.c:1784
 #, c-format
 msgid "Read error (%s) in headers.\n"
 msgstr "Памылка чытаньня (%s) у загалоўках.\n"
 
-#. If opt.noclobber is turned on and file already exists, do not
-#. retrieve the file
-#: src/http.c:1813
-#, c-format
+#: src/http.c:1831 src/http.c:2385
+#, fuzzy, c-format
 msgid ""
-"File `%s' already there; not retrieving.\n"
+"File %s already there; not retrieving.\n"
 "\n"
 msgstr ""
 "Файл \"%s\" ужо тут і ня будзе выцягвацца.\n"
 "\n"
 
-#. If the authentication header is missing or
-#. unrecognized, there's no sense in retrying.
-#: src/http.c:1966
+#: src/http.c:1985
 msgid "Unknown authentication scheme.\n"
 msgstr "Невядомая схема аўтарызаваньня.\n"
 
-#: src/http.c:1997
+#: src/http.c:2016
 msgid "Authorization failed.\n"
 msgstr "Збой аўтарызаваньня.\n"
 
-#: src/http.c:2011
+#: src/http.c:2030
 msgid "Malformed status line"
 msgstr "Дрэннаскладзены радок стану"
 
-#: src/http.c:2013
+#: src/http.c:2032
 msgid "(no description)"
 msgstr "(апісаньне адсутнічае)"
 
-#: src/http.c:2076
+#: src/http.c:2098
 #, c-format
 msgid "Location: %s%s\n"
 msgstr "Знаходжаньне: %s%s\n"
 
-#: src/http.c:2077 src/http.c:2184
+#: src/http.c:2099 src/http.c:2209
 msgid "unspecified"
-msgstr "незаданы"
+msgstr "невядома"
 
-#: src/http.c:2078
+#: src/http.c:2100
 msgid " [following]"
 msgstr ""
 
-#. If `-c' is in use and the file has been fully downloaded (or
-#. the remote file has shrunk), Wget effectively requests bytes
-#. after the end of file and the server response with 416.
-#: src/http.c:2134
+#: src/http.c:2156
 msgid ""
 "\n"
 "    The file is already fully retrieved; nothing to do.\n"
