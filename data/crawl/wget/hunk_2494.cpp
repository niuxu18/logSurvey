 #. No luck.
 #. #### This message SUCKS.  We should see what was the
 #. reason that nothing was retrieved.
-#: src/ftp.c:1698
+#: src/ftp.c:1753
 #, c-format
 msgid "No matches on pattern `%s'.\n"
 msgstr "Ниједна датотека не одговара шаблону „%s‟.\n"
 
-#: src/ftp.c:1764
-#, c-format
-msgid "Wrote HTML-ized index to `%s' [%ld].\n"
+#: src/ftp.c:1819
+#, fuzzy, c-format
+msgid "Wrote HTML-ized index to `%s' [%s].\n"
 msgstr "Списак је пребачен у HTML и записан у „%s‟ [%ld].\n"
 
-#: src/ftp.c:1769
+#: src/ftp.c:1824
 #, c-format
 msgid "Wrote HTML-ized index to `%s'.\n"
 msgstr "Списак је пребачен у HTML и записан у „%s‟.\n"
 
-#: src/gen_sslfunc.c:117
-msgid "Could not seed OpenSSL PRNG; disabling SSL.\n"
-msgstr "OpenSSL PRNG seed није постављен. Искључујем SSL.\n"
-
-#: src/getopt.c:675
+#: src/getopt.c:670
 #, c-format
 msgid "%s: option `%s' is ambiguous\n"
 msgstr "%s: Избор „%s‟ је двосмислен\n"
 
-#: src/getopt.c:700
+#: src/getopt.c:695
 #, c-format
 msgid "%s: option `--%s' doesn't allow an argument\n"
 msgstr "%s: Избор „--%s‟ се задаје без додатних аргумената\n"
 
-#: src/getopt.c:705
+#: src/getopt.c:700
 #, c-format
 msgid "%s: option `%c%s' doesn't allow an argument\n"
 msgstr "%s: Избор „%c%s‟ се задаје без додатних аргумената\n"
 
-#: src/getopt.c:723 src/getopt.c:896
+#: src/getopt.c:718 src/getopt.c:891
 #, c-format
 msgid "%s: option `%s' requires an argument\n"
 msgstr "%s: За избор „%s‟ потребан је додатни аргумент\n"
 
 #. --option
-#: src/getopt.c:752
+#: src/getopt.c:747
 #, c-format
 msgid "%s: unrecognized option `--%s'\n"
 msgstr "%s: Избор није препознат: „--%s‟\n"
 
 #. +option or -option
-#: src/getopt.c:756
+#: src/getopt.c:751
 #, c-format
 msgid "%s: unrecognized option `%c%s'\n"
 msgstr "%s: Избор није препознат: `%c%s'\n"
 
 #. 1003.2 specifies the format of this message.
-#: src/getopt.c:782
+#: src/getopt.c:777
 #, c-format
 msgid "%s: illegal option -- %c\n"
 msgstr "%s: неисправан избор -- %c\n"
 
-#: src/getopt.c:785
+#: src/getopt.c:780
 #, c-format
 msgid "%s: invalid option -- %c\n"
 msgstr "%s: непостојећи избор -- %c\n"
 
 #. 1003.2 specifies the format of this message.
-#: src/getopt.c:815 src/getopt.c:945
+#: src/getopt.c:810 src/getopt.c:940
 #, c-format
 msgid "%s: option requires an argument -- %c\n"
 msgstr "%s: избор захтева аргумент -- %c\n"
 
-#: src/getopt.c:862
+#: src/getopt.c:857
 #, c-format
 msgid "%s: option `-W %s' is ambiguous\n"
 msgstr "%s: избор `-W %s' је двосмислен\n"
 
-#: src/getopt.c:880
+#: src/getopt.c:875
 #, c-format
 msgid "%s: option `-W %s' doesn't allow an argument\n"
 msgstr "%s: избор `-W %s' не захтева аргумент\n"
 
-#: src/host.c:636
+#: src/host.c:347
+#, fuzzy
+msgid "Unknown host"
+msgstr "Непозната грешка"
+
+#. Message modeled after what gai_strerror returns in similar
+#. circumstances.
+#: src/host.c:351
+msgid "Temporary failure in name resolution"
+msgstr ""
+
+#: src/host.c:353
+msgid "Unknown error"
+msgstr "Непозната грешка"
+
+#: src/host.c:714
 #, c-format
 msgid "Resolving %s... "
 msgstr "Тражим %s... "
 
-#: src/host.c:656 src/host.c:672
-#, c-format
-msgid "failed: %s.\n"
-msgstr "није успело: %s.\n"
+#: src/host.c:761
+msgid "failed: No IPv4/IPv6 addresses for host.\n"
+msgstr ""
 
-#: src/host.c:674
+#: src/host.c:784
 msgid "failed: timed out.\n"
 msgstr "није успело: време је истекло.\n"
 
-#: src/host.c:762
-msgid "Host not found"
-msgstr "Рачунар није пронађен"
-
-#: src/host.c:764
-msgid "Unknown error"
-msgstr "Непозната грешка"
-
-#: src/html-url.c:293
+#: src/html-url.c:288
 #, c-format
 msgid "%s: Cannot resolve incomplete link %s.\n"
 msgstr "%s: Не може се утврдити шта значи непотпуна веза %s.\n"
 
-#. this is fatal
-#: src/http.c:674
-msgid "Failed to set up an SSL context\n"
-msgstr "Нисам успео да подесим SSL контекст\n"
+#: src/html-url.c:695
+#, fuzzy, c-format
+msgid "%s: Invalid URL %s: %s\n"
+msgstr "%s: %s: Неисправна вредност `%s'.\n"
 
-#: src/http.c:680
+#: src/http.c:367
 #, c-format
-msgid "Failed to load certificates from %s\n"
-msgstr "Није успело учитавање сертификата из %s\n"
-
-#: src/http.c:684 src/http.c:692
-msgid "Trying without the specified certificate\n"
-msgstr "Покушавам приступ без потребног сертификата\n"
+msgid "Failed writing HTTP request: %s.\n"
+msgstr "HTTP захтев није успео: %s.\n"
 
-#: src/http.c:688
-#, c-format
-msgid "Failed to get certificate key from %s\n"
-msgstr "Не могу да преузмем кључ сертификата са %s\n"
+#: src/http.c:736
+msgid "No headers, assuming HTTP/0.9"
+msgstr ""
 
-#: src/http.c:761 src/http.c:1809
-msgid "Unable to establish SSL connection.\n"
-msgstr "Не могу да успоставим SSL везу.\n"
+#: src/http.c:1413
+msgid "Disabling SSL due to encountered errors.\n"
+msgstr ""
 
-#: src/http.c:770
+#: src/http.c:1566
 #, c-format
-msgid "Reusing connection to %s:%hu.\n"
+msgid "POST data file `%s' missing: %s\n"
+msgstr ""
+
+#: src/http.c:1615
+#, fuzzy, c-format
+msgid "Reusing existing connection to %s:%d.\n"
 msgstr "Поново користим везу са %s:%hu.\n"
 
-#: src/http.c:1034
-#, c-format
-msgid "Failed writing HTTP request: %s.\n"
+#: src/http.c:1684
+#, fuzzy, c-format
+msgid "Failed reading proxy response: %s\n"
 msgstr "HTTP захтев није успео: %s.\n"
 
-#: src/http.c:1039
+#: src/http.c:1704
+#, c-format
+msgid "Proxy tunneling failed: %s"
+msgstr ""
+
+#: src/http.c:1749
 #, c-format
 msgid "%s request sent, awaiting response... "
 msgstr "%s захтев је послат, чека се одговор... "
 
-#: src/http.c:1083
-msgid "End of file while parsing headers.\n"
-msgstr "Крај датотеке приликом читања заглавља.\n"
+#: src/http.c:1760
+#, fuzzy
+msgid "No data received.\n"
+msgstr "Подаци нису примљени"
 
-#: src/http.c:1093
+#: src/http.c:1767
 #, c-format
 msgid "Read error (%s) in headers.\n"
 msgstr "Грешка у читању (%s) у заглављима.\n"
 
-#: src/http.c:1128
-msgid "No data received"
-msgstr "Подаци нису примљени"
+#. If opt.noclobber is turned on and file already exists, do not
+#. retrieve the file
+#: src/http.c:1813
+#, fuzzy, c-format
+msgid ""
+"File `%s' already there; not retrieving.\n"
+"\n"
+msgstr "Датотека „%s‟ већ постоји, не преузимам поново.\n"
+
+#. If the authentication header is missing or
+#. unrecognized, there's no sense in retrying.
+#: src/http.c:1966
+msgid "Unknown authentication scheme.\n"
+msgstr "Начин пријаве није познат.\n"
+
+#: src/http.c:1997
+msgid "Authorization failed.\n"
+msgstr "Пријава није успела.\n"
 
-#: src/http.c:1130
+#: src/http.c:2011
 msgid "Malformed status line"
 msgstr "Неисправна статусна линија"
 
-#: src/http.c:1135
+#: src/http.c:2013
 msgid "(no description)"
 msgstr "(нема описа)"
 
-#: src/http.c:1267
-msgid "Authorization failed.\n"
-msgstr "Пријава није успела.\n"
-
-#: src/http.c:1274
-msgid "Unknown authentication scheme.\n"
-msgstr "Начин пријаве није познат.\n"
-
-#: src/http.c:1314
+#: src/http.c:2076
 #, c-format
 msgid "Location: %s%s\n"
 msgstr "Место: %s%s\n"
 
-#: src/http.c:1315 src/http.c:1454
+#: src/http.c:2077 src/http.c:2184
 msgid "unspecified"
 msgstr "није наведено"
 
-#: src/http.c:1316
+#: src/http.c:2078
 msgid " [following]"
 msgstr " [пратим]"
 
-#: src/http.c:1383
+#. If `-c' is in use and the file has been fully downloaded (or
+#. the remote file has shrunk), Wget effectively requests bytes
+#. after the end of file and the server response with 416.
+#: src/http.c:2134
 msgid ""
 "\n"
 "    The file is already fully retrieved; nothing to do.\n"
