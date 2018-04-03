# Turkish translations for wget messages.
# Copyright (C) 2005 Free Software Foundation, Inc.
# Nilgün Belma Bugüner <nilgun@superonline.com>, 2001,..., 2005.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.10.1-b1\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2005-07-16 19:09+0300\n"
"Last-Translator: Nilgün Belma Bugüner <nilgun@superonline.com>\n"
"Language-Team: Turkish <gnu-tr-u12a@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"X-Generator: KBabel 1.9.1\n"
"Plural-Forms: nplurals=2; plural=(n != 1);\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Hata anlaşılamadı"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: seçenek `%s' belirsiz\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: seçenek `--%s' argümansız kullanılır\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: seçenek `%c%s' argümansız kullanılır\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: seçenek `%s' bir argümanla kullanılır\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: `--%s' seçeneği bilinmiyor\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: `%c%s' seçeneği bilinmiyor\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: kuraldışı seçenek -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: geçersiz seçenek -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: seçenek bir argümanla kullanılır -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: seçenek `-W %s' belirsiz\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: seçenek `-W %s' argümansız kullanılır\n"

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
msgstr "%s: `%s' adresi çözümlenemiyor; işlem iptal edildi.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "%s[%s]:%d bağlanılıyor... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "%s:%d bağlanılıyor..."

#: src/connect.c:358
msgid "connected.\n"
msgstr "bağlantı kuruldu.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "olmadı: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: `%s' adresi çözümlenemiyor; işlem iptal edildi.\n"

#: src/convert.c:185
#, fuzzy, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d dosya %.*f saniyede dönüştürüldü.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "%s dönüştürülüyor..."

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "birşey yapılmadı.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "%s deki bağlar dönüştürülemiyor: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "`%s' silinemiyor: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "%s, %s olarak yedeklenemiyor: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Set-Cookie'de sözdizimi hatası: %2$d. konumda %1$s.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "%s adresinden gelen çerez alan adını %s yapmaya çalıştı\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Çerezler dosyası `%s' açılamıyor: %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "`%s' yazılırken hata: %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "`%s' kapatılırken hata: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Desteklenmeyen listeleme türü, Unix liste çözümleyici deneniyor.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "%2$s:%3$d üstünde /%1$s indeksi"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "zaman bilinmiyor    "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Dosya       "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Dizin       "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Bağ         "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Kesin değil "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bayt)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Uzunluk: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) kalan"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s kalan"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (yetkin değil)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "%s olarak oturuma giriliyor ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Sunucu yanıtında hata, kontrol bağlantısı kapatılıyor.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Sunucu karşılama iletisinde hata.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Yazma başarısız, kontrol bağlantısı kapatılıyor.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Sunucu oturum açmayı reddetti.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Oturum açma başarısız.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Oturum açıldı!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Sunucu hatası, sistem türü saptanamadı.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "tamam.   "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "tamam.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tür `%c' bilinmiyor, kontrol bağlantısı kapatılıyor.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "tamam.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD gereksiz.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"`%s' diye bir dizin yok.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD gerekli değil.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "PASV aktarımı başlatılamadı.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "PASV yanıtı çözümlenemedi.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "bağlanılamadı: %s:%d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bağlanma hatası (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT geçersiz.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST başarısız, baştan başlanıyor.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"`%s' diye bir dosya yok.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"`%s' diye bir dosya yok.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"`%s' diye bir dosya ya da dizin yok.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s birden ortaya çıktı.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, kontrol bağlantısı kapatılıyor.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Veri bağlantısı: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Kontrol bağlantısı kapatıldı.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Veri aktarımı kesildi.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "`%s' dosyası zaten var; alınmayacak.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(deneme: %2d)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' kaydedildi [%s/%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' kaydedildi [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "%s kaldırılıyor.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Listeleme için geçici dosya olarak `%s' kullanılıyor.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "`%s' kaldırıldı.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Yineleme derinliği %d aşıldı. En fazla derinlik %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Uzak dosya bizdeki %s dosyasından daha yeni değil -- alınmayacak.\n"
"\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Uzak dosya bizdeki %s dosyasından daha yeni  -- alınıyor.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Uzunlukları aynı değil (bizdeki %s), -- alınıyor.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Sembolik bağın ismi geçersiz, atlanıyor.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Zaten doğru sembolik bağ var: %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Sembolik bağ oluşturuluyor: %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Sembolik bağ desteklenmiyor. `%s' sembolik bağı atlanıyor.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "`%s' dizini atlanıyor.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: bilinmeyen/desteklenmeyen dosya türü.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: zaman damgası bozuk.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "%d derinliğindeki dizinler alınamayacak (en çok %d)\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Dışlanan/izin-verilmeyen olarak `%s' e inilmiyor.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "`%s' reddediliyor.\n"

#: src/ftp.c:2035
#, fuzzy, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "`%s' yazılırken hata: %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "`%s' kalıbına uygun sonuç gelmedi.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "HTMLeştirilmiş indeks `%s' e yazıldı [%s].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "HTMLeştirilmiş indeks `%s' e yazıldı.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "HATA"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "DİKKAT"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s tarafından sunulun böyle bir sertifika yok.\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: %s tarafından sunulun böyle bir sertifika yok.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: %s tarafından sunulun böyle bir sertifika yok.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s: %s tarafından sunulun böyle bir sertifika yok.\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Vekil URLsi %s çözümlenirken hata: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr ""

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr ""

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"%s: sertifikadaki isim (`%s') istenen makine ismiyle (`%s') uyuşmuyor.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Bilinmeyen makine"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "İsim çözümlemesinde geçici bir hata oluştu"

#: src/host.c:364
msgid "Unknown error"
msgstr "Hata anlaşılamadı"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "%s çözümleniyor... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "olmadı: Makinenin bir IPv4/IPv6 adresi yok.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "olmadı: zamanaşımı.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: İçi boş %s bağı çözümlenemez.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL `%s' geçersiz: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "HTTP isteğini yazma başarısız: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Başlıklar eksik, HTTP/0.9 olduğu varsayılıyor"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Ne olduğu belirsiz hatalardan dolayı SSL iptal ediliyor.\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "POST veri dosyası `%s' kayıp: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Bağlantı tekrar kullanılıyor: %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Vekilin yanıtı okunamadı: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Vekil tünellenemedi: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s isteği gönderildi, yanıt bekleniyor... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Hiçbir veri alınmadı.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Başlıklar okunurken hata (%s).\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Kimlik tanımlama şeması bilinmiyor.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Yetkilendirme başarısız.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr "`%s' dosyası zaten var; alınmayacak.\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Durum satırı bozuk"

#: src/http.c:2095
msgid "(no description)"
msgstr "(açıklama yok)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Yer: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "belirtilmeyen"

#: src/http.c:2156
msgid " [following]"
msgstr " [izleyen]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Dosya zaten alınmıştı; birşey yapılmadı.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Uzunluk: "

#: src/http.c:2263
msgid "ignored"
msgstr "yoksayıldı"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr ""

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Uyarı: HTTP ile genel arama karakterleri kullanılamaz.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "`%s'e yazılamadı (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "SSL bağlantısı kurulamıyor.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "HATA: Yönlendirmede (%d) yer belirtilmemiş.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s HATA %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Last-modified başlığı kayıp -- zaman damgası kapatıldı.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Last-modified başlığı geçersiz -- zaman damgası yoksayıldı.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Sunucudaki dosya yerel dosya %s'den daha yeni değil -- alınmayacak.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Uzunlukları aynı değil (bizdeki %s), -- alınıyor.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Uzak dosya daha yeni, alınıyor.\n"

#: src/http.c:2760
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Uzak dosya bizdeki %s dosyasından daha yeni  -- alınıyor.\n"
"\n"

#: src/http.c:2766
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Uzak dosya bizdeki %s dosyasından daha yeni değil -- alınmayacak.\n"
"\n"

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
msgstr "Uzak dosya daha yeni, alınıyor.\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: URL `%s' geçersiz: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' kaydedildi [%s/%s]\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' kaydedildi [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - %s baytta bağlantı kesildi. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - %s. baytta okuma hatası (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - %s/%s baytta okuma hatası (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC olmayan %s dosyasını gösteriyor.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: %s okunamadı (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: %s dosyasının %d. satırında hata.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: %s dosyasının %d. satırında sözdizimi hatası.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%1$s: %3$s:%4$d: `%2$s' komutu bilinmiyor.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Uyarı: Sistem ve kullanıcı wgetrc dosyalarının her ikisi de %s "
"gösteriyor.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: --execute ile verilen `%s' komutu geçersiz.\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: `%s' mantıken geçersiz; `on' ya da `off' kullanın.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: `%s' sayı olarak geçersiz.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: `%s' bayt değer olarak geçersiz.\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: `%s'süre olarak geçersiz.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: `%s' değer olarak geçersiz.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: `%s' başlok olarak geçersiz.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: İşlem türü `%s' geçersiz.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr "%s: %s: `%s' sınırlaması geçersiz, `unix' ya da `windows' kullanın.\n"

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
"%s alındı, çıktı `%s'e yönlendirildi. \n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s alındı.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; giriş iptalediliyor.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Kullanımı: %s [SEÇENEK]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Uzun seçeneklerdeki zorunlu argümanlar kısa seçeneklerde de zorunludur.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Başlangıç:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version              Wget sürümünü gösterir ve çıkar.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help                 bu yardım metnini basar.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background           artalanda başlatılır.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""
"  -e,  --execute=KOMUT        `.wgetrc' tarzı bir komut çalıştırmak için.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Günlük kaydı ve girdi dosyası:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=DOSYA    Günlük kayıtları DOSYAya yazılır.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=DOSYA  iletiler DOSYAya eklenir.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug                hata ayıklama bilgileri basılır.\n"

#: src/main.c:423
#, fuzzy
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "  -d,  --debug                hata ayıklama bilgileri basılır.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr ""
"  -q,  --quiet                hiçbir bilgi verilmez (sessiz çalışma).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose              ayrıtılı bilgi verilir (öntanımlıdır).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr "  -nv, --no-verbose           daha az ayrıntılı bilgi verilir.\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=DOSYA     DOSYAda kayıtlı adresler indirilir.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr ""
"  -F,  --force-html           girdi dosyasının HTML olduğu varsayılır.\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping         mevcuttan daha yeni olmayan dosyalar "
"indirilmez.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "İndirme:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr "  -t,  --tries=SAYI           yineleme SAYIsı (0: sınırsız).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       bağlantı reddedilse bile yeniden dener.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr ""
"  -O,  --output-document=DOSYA\n"
"                               belgeler DOSYAya yazılır.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr "  -nc, --no-clobber           Mevcut dosyalar tekrar indirilmez.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue             dosya yarım kalmışsa kaldığı yerden devam\n"
"                              ettirilir.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=TÜR         süreç göstergesi TÜRü.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping         mevcuttan daha yeni olmayan dosyalar "
"indirilmez.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response      sunucunun yanıtını basar.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr ""
"       --spider               hiçbir şey indirilmez (araştırma kipi).\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr "  -T,  --timeout=SÜRE         saniye cinsinden zamanaşımı SÜREsi.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SÜRE      saniye cinsinden isim çözümleme SÜREsi.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SÜRE saniye cinsinden bağlantı zamanaşımı SÜREsi\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SÜRE    saniye cinsinden okuma zamanaşımı SÜREsi\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=SÜRE            saniye cinsinden alımlar arasındaki bekleme\n"
"                              SÜREsi\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=BSÜRE      saniye cinsinden alımın yinelenmesini bekleme\n"
"                              SÜREsi\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait          alımlar arasında 0 ile 2*BSÜRE saniye "
"arasında\n"
"                              bekleme yapar.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy             vekil kullanılmaz.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=SAYI           alım kotasını SAYIya ayarlar.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRES   makinenizin adresi (isim ya da IP) olarak bu\n"
"                              ADRES gösterilir.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=HIZ         indirme HIZ sınırı.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache         isim çözümlemesi kayıtları tutulmaz.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=İŞLETİM-SİSTEMİ\n"
"                              dosya ismi uzunluğunu İŞLETİM-SİSTEMİnin izin\n"
"                              verdiği uzunluğa ayarlar.\n"

#: src/main.c:489
#, fuzzy
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-length        `Content-Length' başlık alanı yoksayılır.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only           sadece IPv4 adreslere bağlanılır.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only           sadece IPv6 adreslere bağlanılır.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=AİLE   ilk bağlantı belirtilen AİLEdeki adrese "
"yapılır.\n"
"                              IPv6, IPv4 ya da none belirtilebilir.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=İSİM            ftp ve http kullanıcı ismi olarak bu İSİM\n"
"                              kullanılır.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=PAROLA      ftp ve http kullanıcı parolası olarak bu\n"
"                              PAROLA kullanılır.\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr ""
"       --password=PAROLA      ftp ve http kullanıcı parolası olarak bu\n"
"                              PAROLA kullanılır.\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-proxy             vekil kullanılmaz.\n"

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
msgstr "Dizinler:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories    dizin oluşturulmaz.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories mutlaka dizin oluşturulur.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""
"  -nH, --no-host-directories\n"
"                           karşı tarafın dizin yapısına uyulmaz.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories\n"
"                           dizinlerde protokol ismi kullanılır.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""
"  -P,  --directory-prefix=DİZİN  dosyalar belirtilen DİZİN altına "
"kaydedilir.\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=SAYI        belirtilen SAYIda uzak dizin bileşeni "
"yoksayılır\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP seçenekleri:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=İSİM       http kullanıcı İSMİ.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=PAROLA http kullanıcı PAROLASI.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache             sunucu-arabellekli veriye izin verilmez.\n"

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
msgstr ""
"  -E,  --html-extension       HTML belgeler `.html' uzantılı kaydedilir.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length        `Content-Length' başlık alanı yoksayılır.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=DİZGE         başlık yerine DİZGE konur.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=İSİM      vekil kullanıcı İSMİ.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""
"       --proxy-password=PAROLA\n"
"                              vekil kullanıcı PAROLASI.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=ADRES        HTTP isteğinde `Referer: ADRES' başlığı\n"
"                              kullanılır.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers         HTTP başlıkları dosyaya kaydedilir.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr "  -U,  --user-agent=AJAN      Wget/SÜRÜM yerine AJAN kullanılır.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive   HTTP keep-alive (sürekli bağlantı) iptal "
"edilir.\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies           çerezler kullanılmaz.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=DOSYA   çerezler oturumdan önce DOSYAdan yüklenir.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=DOSYA   çerezler oturumdan sonra DOSYAya kaydedilir.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies çerezleri sadece oturum için yükler ve "
"kaydeder\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=DİZGE      POST yöntemi kullanılır; veri olarak DİZGE\n"
"                              gönderilir.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=DOSYA      POST yöntemi kullanılır; veri olarak DOSYA\n"
"                              içeriği gönderilir\n"

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
msgstr "HTTPS (SSL/TLS) seçenekleri:\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR   güvenlik protokolü belirtilir;\n"
"                               auto, SSLv2, SSLv3 veya TLSv1 "
"belirtilebilir.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate sunucu sertifikası doğrulatılmaz.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=DOSYA    istemci sertifika DOSYAsı.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr "       --certificate-type=TÜR istemci sertifika TÜRü; PEM veya DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=DOSYA    gizli anahtar DOSYAsı.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TÜR gizli anahtar TÜRü; PEM veya DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr ""
"       --ca-certificate=DOSYA sertifika yetkilisinin (CA) bohçası için "
"DOSYA.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=DİZİN   sertifika yetkilisinin (CA) çırpılarının "
"yeri.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=DOSYA    SSL PRNG'sini tohumlamak için rasgele veri\n"
"                              içeren DOSYA.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=DOSYA       EGD soketini isimlendirmek için rasgele veri\n"
"                              içeren DOSYA.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP seçenekleri:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=İSİM        ftp kullanıcı İSMİ.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=PAROLA  ftp kullanıcı PAROLAsı.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing    `.listing' uzantılı dosyalar silinmez.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob              FTP dosya ismi arama kalıpları kullanılmaz.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp       \"passive\" aktarım kipini iptal eder.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks        alt dizinlerdeki sembolik bağlı dosyalar\n"
"                              (dizinler değil) alınır.\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Ne varsa indirme seçenekleri:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive            ne varsa indirilir.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=SAYI           inilecek azami dizin derinliği\n"
"                              (sonsuz için inf veya 0 belirtin).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       indirilen dosyaları indirdikten sonra siler.\n"
"                            (tabii ki yerel)\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links        sembolik bağlar değil bağ ismiyle hedefin\n"
"                              içeriği indirilir.\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted     dosyayı dönüştürmeden önce .orig uzantılı\n"
"                              yedeğini alır.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted     dosyayı dönüştürmeden önce .orig uzantılı\n"
"                              yedeğini alır.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             -N -r -l inf--no-remove-listing için kısayol.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    HTML sayfada gösterilmesi gerekli herşeyi\n"
"                            (resimler, v.s.) indirir.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments      HTML açıklama alanlarında belirtime uyulur.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Ne varsa indirmede kabul/red seçenekleri:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LISTE         izin verilecek dosya uzatılarının virgül "
"ayraçlı\n"
"                              listesi\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LISTE         reddedilecek dosya uzatılarının virgül "
"ayraçlı\n"
"                              listesi\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LISTE        izin verilecek alan isimlerinin virgül "
"ayraçlı\n"
"                              listesi\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LISTE\n"
"                              reddedilecek alan isimlerinin virgül ayraçlı\n"
"                              listesi\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr "       --follow-ftp           HTML belgelerdeki FTP bağları izlenir.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTE    izin verilen HTML etiketlerinin virgül\n"
"                              ayraçlı listesi.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTE    yoksayılacak HTML etiketlerinin virgül\n"
"                              ayraçlı listesi.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts        rastlandıkça başka makinelerdekilerde alınır.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative          sadece göreli bağlar izlenir.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""
"  -I,  --include-directories=LISTE\n"
"                           izin verilen dizinlerin listesi.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""
"  -X,  --exclude-directories=LISTE\n"
"                           dışlanacak dizinlerin listesi.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent         üst dizine çıkılmaz.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr ""
"Yazılım hatalarını ve önerilerinizi <bug-wget@gnu.org> adresine\n"
"çeviri hatalarını   <gnu-tr@belgeler.org>  adresine bildiriniz.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, bir etkileşimsiz dosya/dizin indirme aracı.\n"

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
msgstr "Telif Hakkı © 2005 Free Software Foundation, Inc.\n"

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
"Özgün olarak Hrvoje Niksic <hniksic@xemacs.org> tarafından yazıldı.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Yazılım hatalarını ve önerilerinizi <bug-wget@gnu.org> adresine\n"
"çeviri hatalarını   <gnu-tr@belgeler.org>  adresine bildiriniz.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Daha fazla seçenek için `%s --help' yazın.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: seçenek uygun değil -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Hem çok detaylı hem de sessiz olmaz.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Eski dosyaları hem zaman damgalamak hem de dokunmamak olmaz.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Hem --inet4-only hem de --inet6-only olmaz.\n"

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
msgstr "`%s' dosyası zaten var; alınmayacak.\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Hem --inet4-only hem de --inet6-only olmaz.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL kayıp\n"

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
msgstr "%s de URL yok.\n"

#: src/main.c:1336
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"BİTTİ --%s--\n"
"İndirilen: %s bayt, %d dosya\n"

#: src/main.c:1345
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "İndirme kotası (%s bayt) AŞILDI! \n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Ardalanda sürüyor.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "İşlem PID %lu ile artalanda sürüyor.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Çıktı `%s'e yazılmış olacak.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Kullanılabilir soket sürücü bulunamadı.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: uyarı: herhangi bir makina isminden önce \"%s\" dizgeciği "
"görünüyor\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: bilinmeyen dizgecik \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Kullanım: %s NETRC [MAKİNA-ADI]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: %s durumlanamadı: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "DİKKAT: rasgele sayı üreteci yeterli değil.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Rasgele sayı üreteci tohumlanamadı; --random-file kullanılabilir.\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: %s tarafından sunulun böyle bir sertifika yok.\n"

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
msgstr ""
"%s: sertifikadaki isim (`%s') istenen makine ismiyle (`%s') uyuşmuyor.\n"

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
msgstr ""
"%s adresine güvenliği gözardı ederek bağlanmak için `--no-check-certificate' "
"seçeneğini kullanın.\n"

#: src/progress.c:242
#, fuzzy, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ %dK atlanıyor ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "`%s' gösterge türü geçersiz; değiştirilmedi.\n"

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
msgstr "RTC saptanamadı: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Reddedileceğinden %s kaldırılıyor.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "%s açılamıyor: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "robots.txt yükleniyor; lütfen hataları yoksayın.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Vekil URLsi %s çözümlenirken hata: %s\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Vekil URLsi %s: HTTP olmalı.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d yönlendirme geçildi.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Vazgeçiliyor.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Tekrarlanıyor.\n"
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
msgstr "Hata yok"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Şema desteklenmiyor"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "Makine ismi geçersiz"

#: src/url.c:641
msgid "Bad port number"
msgstr "Port numarası hatalı"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Kullanıcı ismi geçersiz"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "IPv6 sayısal adresi sonlandırılmamış"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6 adresler desteklenmiyor"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "IPv6 sayısal adresi geçersiz"

#: src/url.c:951
#, fuzzy
msgid "HTTPS support not compiled in"
msgstr "%s: hata ayıklayıcı desteğiyle derlenmedi.\n"

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: %ld baytı ayırmak mümkün olmadı; bellek tükenmiş olabilir.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: %ld baytı ayırmak mümkün olmadı; bellek tükenmiş olabilir.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Ardalanda sürüyor, pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "`%s' sembolik bağ asıl dosyaya dönüştürülürken başarısız: %s\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Set-Cookie, `%s' alanında hata"

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) -  %s/%s baytta bağlantı kesildi. "

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: `%s' mantıken geçersiz;\n"
#~ "`always', `on', `off' veya `never' kullanın.\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=ADRES            -F -i DOSYA kullanımındaki göreli "
#~ "bağların\n"
#~ "                                önüne konacak ADRES\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                vekili etkinleştirir.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr "       --preserve-permissions uzak dosya izinleri korunur.\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Bu program faydalı olacağı umularak dağıtılmaktadır. Hiçbir\n"
#~ "GARANTİSİ YOKTUR;  SATILABİLİRLİĞİ hatta HERHANGİ BİR AMACA\n"
#~ "UYGUNLUĞU  için bile garanti verilmez.  Ayrıntılar için GNU\n"
#~ "Genel Kamu Lisansına bakınız.\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s: %s için sertifika doğrulama hatası: %s\n"

#~ msgid "Failed writing to proxy: %s.\n"
#~ msgstr "Vekile yazılamadı: %s.\n"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "`%s' zaten var, alınmayacak.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%s/%s])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - `%s' kaydedildi [%s/%s])\n"
#~ "\n"

#~ msgid "Empty host"
#~ msgstr "Boş konak"

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr "`%s' bir bağlantı adresine dönüştürülemedi.  ANY'ye dönülüyor.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST başarısız; `%s' devam etmeyecek.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s gider]"

#~ msgid "Host not found"
#~ msgstr "Makina bulunamadı"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "Bir SSL bağlamı belirlenemedi\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "Sertifikalar %s'den yüklenemedi\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Belirtilen sertifikasız deneniyor\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "Sertifika anahtarı %s'den alınamadı\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Başlıklar çözümlenirken dosya sonuyla karşılaşıldı.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Sunucu kesilen indirme işlemine devam etmeyi desteklemiyor,\n"
#~ "bu da `-c' ile çelişiyor. `%s' dosyası alınamıyor.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s gider)"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Başlatma:\n"
#~ "  -V,  --version           Wget sürümünü gösterir ve çıkar.\n"
#~ "  -h,  --help              bu iletiyi gösterir.\n"
#~ "  -b,  --background        başlatıldıktan sonra ardalana gider.\n"
#~ "  -e,  --execute=KOMUT     bir `.wgetrc' KOMUTunu çalıştırır.\n"
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
#~ "Oturum açma ve girdi dosyası:\n"
#~ "  -o,  --output-file=DOSYA    günlüğü DOSYA ya yazar.\n"
#~ "  -a,  --append-output=DOSYA  iletileri DOSYAya ekler.\n"
#~ "  -d,  --debug                hata ayıklama iletileri gösterir.\n"
#~ "  -q,  --quiet                sessiz (çıktı verilmez).\n"
#~ "  -v,  --verbose              çıktı daha ayrıntılı olur (öntanımlı).\n"
#~ "  -nv, --non-verbose          çıktı ayrıntılı olmaz.\n"
#~ "  -i,  --input-file=DOSYA     DOSYAda bulunan URLleri indirir.\n"
#~ "  -F,  --force-html           girdi dosyası HTML olarak işlenir.\n"
#~ "  -B,  --base=URL             -F -i DOSYA içindeki göreceli bağlara\n"
#~ "                              önhazırlık olarak URL atar.\n"
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
#~ "İndirme:\n"
#~ "  -t,  --tries=SAYI             tekrar SAYIsı (0 sınırsız).\n"
#~ "       --retry-connrefused      bağlantı reddedilse bile dener.\n"
#~ "  -O   --output-document=DOSYA  belgeleri DOSYAya yazar.\n"
#~ "  -nc, --no-clobber             mevcut dosyaların üstüne yazılmaz ve .# "
#~ "öneki\n"
#~ "                                kullanılır.\n"
#~ "  -c,  --continue               yarım kalan bir dosyaya devam edilir.\n"
#~ "       --progress=TÜRÜ          işlemin gösterge türü belirtilir.\n"
#~ "  -N,  --timestamping           yerel dosyadan daha eskiyse işleme "
#~ "başlamaz.\n"
#~ "  -S,  --server-response        sunucu cevabını gösterir.\n"
#~ "       --spider                 hiçbir şey indirilmez.\n"
#~ "  -T,  --timeout=SANİYE         okuma SANİYE sonra zamanaşımına uğrar.\n"
#~ "       --dns-timeout=SANİYE     DNS araması SANİYE sonra zamanaşımına "
#~ "uğrar.\n"
#~ "       --connect-timeout=SANİYE bağlantı SANİYE sonra zamanaşımına "
#~ "uğrar.\n"
#~ "       --read-timeout=SANİYE    okuma SANİYE sonra zamanaşımına uğrar.\n"
#~ "  -w,  --wait=SANİYE            işlemler arasında 1...SANİYE kadar "
#~ "bekler.\n"
#~ "       --waitretry=SANİYE       işlem tekrarları arasında SANİYE bekler\n"
#~ "       --random-wait            işlemler arasında 0...2*WAIT saniye "
#~ "bekler.\n"
#~ "  -Y,  --proxy=on/off           vekil bağlantısını açar ya da kapatır.\n"
#~ "  -Q,  --quota=SAYI             işlem kotasını SAYIya ayarlar.\n"
#~ "       --bind-address=ADRES     ADRESe (makina adı ya da IP) bağlanır.\n"
#~ "       --limit-rate=HIZ         indirme HIZını sınırlar.\n"
#~ "       --dns-cache=off          önbellekleyen DNS aramaları kapatılır.\n"
#~ "       --restrict-file-names=unix|windows\n"
#~ "                                dosya isimleri işletim sistemine uygun "
#~ "alınır\n"
#~ "                                 (unix dosya isimlerinde tüm karakterler\n"
#~ "                                kullanılabilir).\n"
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
#~ "Dizinler:\n"
#~ "  -nd  --no-directories            dizinleri oluşturmaz.\n"
#~ "  -x,  --force-directories         dizin oluşturmaya zorlar.\n"
#~ "  -nH, --no-host-directories       konak dizinlerini oluşturmaz.\n"
#~ "  -P,  --directory-prefix=DiZiN    dosyalar DiZiN/...e kaydedilir.\n"
#~ "       --cut-dirs=ADET             ADET karşı dizini yoksayar.\n"
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
#~ "HTTP seçenekleri:\n"
#~ "       --http-user=KULLANICI  http ile KULLANICI belirtir.\n"
#~ "       --http-passwd=PAROLA   http ile PAROLA belirtir.\n"
#~ "  -C,  --cache=on/off         sunucu-önbellekli veriyi engel-ler/lemez.\n"
#~ "       --ignore-length        `Content-Length' başlık alanını yoksayar.\n"
#~ "       --header=DiZGE         başlıkların arasına DiZGEyi yerleştirir.\n"
#~ "       --proxy-user=KULLANICI Vekil makina için KULLANICI.\n"
#~ "       --proxy-passwd=PAROLA  Vekil makina için PAROLA.\n"
#~ "       --referer=URL          http isteğinde `Referer: URL' başlığını "
#~ "içerir.\n"
#~ "  -s,  --save-headers         HTTP başlıklarını dosyaya kaydeder.\n"
#~ "  -U,  --user-agent=İSTEMCİ   Wget/SÜRÜM yerine İSTEMCİ olarak "
#~ "tanıtılır.\n"
#~ "       --no-http-keep-alive   HTTP sürekli bağlantısı etkisizleştirilir.\n"
#~ "       --cookies=off          çerezler kabul edilmez.\n"
#~ "       --load-cookies=DOSYA   çerezler oturum öncesi DOSYAdan yüklenir.\n"
#~ "       --save-cookies=DOSYA   çerezler oturum sonrası DOSYAya yazılır.\n"
#~ "       --post-data=DİZGE      POST yöntemi ile veri olarak DIZGE "
#~ "gönderilir.\n"
#~ "       --post-file=DOSYA      POST yöntemi ile içerik DOSYAya "
#~ "gönderilir.\n"
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
#~ "HTTPS (SSL) seçenekleri:\n"
#~ "       --sslcertfile=DOSYA    isteğe bağlı istemci sertifikası.\n"
#~ "       --sslcertkey=ANHDSY    bu sertifikanın alınacağı dosya.\n"
#~ "       --egd-file=DOSYA       EGD soketi için dosya ismi.\n"
#~ "       --sslcadir=DİZİN       sertifikaların bulunduğu dizin.\n"
#~ "       --sslcafile=DOSYA      sertifikaların bulunduğu dosya\n"
#~ "       --sslcerttype=0/1      İstemci Sertifikası türü:\n"
#~ "                              0=PEM (öntanımlı) / 1=ASN1 (DER)\n"
#~ "       --sslcheckcert=0/1     sunucu setifikasını kontrol etme/et\n"
#~ "       --sslprotocol=0-3      SSL protokolü seçilir; 0=otomatik,\n"
#~ "                              1=SSLv2, 2=SSLv3, 3=TLSv1\n"
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
#~ "FTP seçenekleri:\n"
#~ "  -nr, --dont-remove-listing   `.listing' dosyaları silinmez.\n"
#~ "  -g,  --glob=on/off           dosya ismi genellemelerini  açar ya da "
#~ "kapar.\n"
#~ "       --passive-ftp           \"pasif\" aktarım kipi kullanılır.\n"
#~ "       --retr-symlinks         özyineleme sırasında, dizinlere değil,\n"
#~ "                               dosyalara bağı olanlar alınır.\n"
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
#~ "Özyinelemeli işlemler:\n"
#~ "  -r,  --recursive            özyinelemeli web-emme -- dikkatli "
#~ "kullanın!.\n"
#~ "  -l,  --level=SAYI           en çok özyineleme derinliği (0 veya inf:"
#~ "sınırsız).\n"
#~ "       --delete-after         indirdikten sonra yerel dosyaları siler.\n"
#~ "  -k,  --convert-links        göreceli olmayan bağları göreceli yapar.\n"
#~ "  -K,  --backup-converted     X dosyasını çevirmeden önce X.orig olarak\n"
#~ "                              kopyalar\n"
#~ "  -m,  --mirror               -r -N -l inf -nr seçenekleri için "
#~ "kısaltma.\n"
#~ "  -p,  --page-requisites      HTML sayfasının gösterilebilmesi için "
#~ "gerekli\n"
#~ "                              tüm resim dosyalarını alır.\n"
#~ "       --strict-comments      HTML açıklamalarını SGML uyumlu yapar.\n"
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
#~ "Özyinelemeli kabul/red:\n"
#~ "  -A,  --accept=LİSTE               kabul edilen uzantıların virgüllü "
#~ "LİSTEsi\n"
#~ "  -R,  --reject=LİSTE               reddedilen uzantıların virgüllü "
#~ "LİSTEsi.\n"
#~ "  -D,  --domains=LİSTE              kabul edilen alanların virgüllü "
#~ "LİSTEsi.\n"
#~ "       --exclude-domains=LİSTE      reddedilen alanların virgüllü "
#~ "LİSTEsi.\n"
#~ "       --follow-ftp                 HTML belgelerdeki FTP bağları izler.\n"
#~ "       --follow-tags=LİSTE          izlenecek HTML adreslerinin virgüllü\n"
#~ "                                    LİSTEsi\n"
#~ "  -G,  --ignore-tags=LİSTE          izlenmeyecek HTML adreslerinin "
#~ "virgüllü\n"
#~ "                                    LİSTEsi\n"
#~ "  -H,  --span-hosts                 özyinelerken diğer makinalara da "
#~ "gider.\n"
#~ "  -L,  --relative                   sadece göreceli bağları izler.\n"
#~ "  -i,  --include-directories=LİSTE  izin verilen dizinlerin LİSTEsi.\n"
#~ "  -X,  --exclude-directories=LİSTE  dışlanan dizinlerin LİSTEsi.\n"
#~ "  -np, --no-parent                  Üst dizine çıkmaz.\n"
#~ "\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "WinHelp %s Başlatılıyor\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Bellek yetersiz.\n"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Set-Cookie `%c' karakterinde sözdizimi hatası.\n"

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: `%s' bir IP adresine dönüştürülemez.\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: komut geçersiz\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Vekil makina bulunamadı.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: Yönlendirme çevrimi saptandı.\n"
