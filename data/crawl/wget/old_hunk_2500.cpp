#. No luck.
#. #### This message SUCKS.  We should see what was the
#. reason that nothing was retrieved.
#: src/ftp.c:1778
#, c-format
msgid "No matches on pattern `%s'.\n"
msgstr "`%s' kalıbına uygun sonuç gelmedi.\n"

#: src/ftp.c:1844
#, c-format
msgid "Wrote HTML-ized index to `%s' [%s].\n"
msgstr "HTMLeştirilmiş indeks `%s' e yazıldı [%s].\n"

#: src/ftp.c:1849
#, c-format
msgid "Wrote HTML-ized index to `%s'.\n"
msgstr "HTMLeştirilmiş indeks `%s' e yazıldı.\n"

#: src/getopt.c:675
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: seçenek `%s' belirsiz\n"

#: src/getopt.c:700
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: seçenek `--%s' argümansız kullanılır\n"

#: src/getopt.c:705
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: seçenek `%c%s' argümansız kullanılır\n"

#: src/getopt.c:723 src/getopt.c:896
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: seçenek `%s' bir argümanla kullanılır\n"

#. --option
#: src/getopt.c:752
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: `--%s' seçeneği bilinmiyor\n"

#. +option or -option
#: src/getopt.c:756
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: `%c%s' seçeneği bilinmiyor\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:782
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: kuraldışı seçenek -- %c\n"

#: src/getopt.c:785
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: geçersiz seçenek -- %c\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:815 src/getopt.c:945
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: seçenek bir argümanla kullanılır -- %c\n"

#: src/getopt.c:862
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: seçenek `-W %s' belirsiz\n"

#: src/getopt.c:880
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: seçenek `-W %s' argümansız kullanılır\n"

#: src/host.c:366
msgid "Unknown host"
msgstr "Bilinmeyen makine"

#. Message modeled after what gai_strerror returns in similar
#. circumstances.
#: src/host.c:370
msgid "Temporary failure in name resolution"
msgstr "İsim çözümlemesinde geçici bir hata oluştu"

#: src/host.c:372
msgid "Unknown error"
msgstr "Hata anlaşılamadı"

#: src/host.c:751
#, c-format
msgid "Resolving %s... "
msgstr "%s çözümleniyor... "

#: src/host.c:798
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "olmadı: Makinenin bir IPv4/IPv6 adresi yok.\n"

#: src/host.c:821
msgid "failed: timed out.\n"
msgstr "olmadı: zamanaşımı.\n"

#: src/html-url.c:298
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: İçi boş %s bağı çözümlenemez.\n"

#: src/html-url.c:705
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL `%s' geçersiz: %s\n"

#: src/http.c:373
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "HTTP isteğini yazma başarısız: %s.\n"

#: src/http.c:687
msgid "No headers, assuming HTTP/0.9"
msgstr "Başlıklar eksik, HTTP/0.9 olduğu varsayılıyor"

#: src/http.c:1204
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Ne olduğu belirsiz hatalardan dolayı SSL iptal ediliyor.\n"

#: src/http.c:1374
#, c-format
msgid "POST data file `%s' missing: %s\n"
msgstr "POST veri dosyası `%s' kayıp: %s\n"

#: src/http.c:1423
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Bağlantı tekrar kullanılıyor: %s:%d.\n"

#: src/http.c:1492
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Vekilin yanıtı okunamadı: %s\n"

#: src/http.c:1512
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Vekil tünellenemedi: %s"

#: src/http.c:1557
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s isteği gönderildi, yanıt bekleniyor... "

#: src/http.c:1568
msgid "No data received.\n"
msgstr "Hiçbir veri alınmadı.\n"

#: src/http.c:1575
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Başlıklar okunurken hata (%s).\n"

#. If the authentication header is missing or
#. unrecognized, there's no sense in retrying.
#: src/http.c:1660
msgid "Unknown authentication scheme.\n"
msgstr "Kimlik tanımlama şeması bilinmiyor.\n"

#: src/http.c:1684
msgid "Authorization failed.\n"
msgstr "Yetkilendirme başarısız.\n"

#: src/http.c:1698
msgid "Malformed status line"
msgstr "Durum satırı bozuk"

#: src/http.c:1700
msgid "(no description)"
msgstr "(açıklama yok)"

#: src/http.c:1763
#, c-format
msgid "Location: %s%s\n"
msgstr "Yer: %s%s\n"

#: src/http.c:1764 src/http.c:1871
msgid "unspecified"
msgstr "belirtilmeyen"

#: src/http.c:1765
msgid " [following]"
msgstr " [izleyen]"

#. If `-c' is in use and the file has been fully downloaded (or
#. the remote file has shrunk), Wget effectively requests bytes
#. after the end of file and the server response with 416.
#: src/http.c:1821
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
