# Translation of wget messages to Russian
# Copyright (C) 1998, 1999, 2000, 2001, 2004, 2005, 2006, 2008 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
#
# Const Kaplinsky <const@ce.cctpu.edu.ru>, 1998, 1999, 2000, 2001.
# Pavel Maryanov <acid_jack@ukr.net>, 2004, 2005, 2006, 2008, 2009.
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre2\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-07-24 14:47+0200\n"
"Last-Translator: Pavel Maryanov <acid_jack@ukr.net>\n"
"Language-Team: Russian <gnu@mx.ru>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=(n != 1);\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Неизвестная системная ошибка"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: параметр «%s» неоднозначен\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: для параметра «--%s» нельзя использовать аргумент\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: для параметра «%c%s» нельзя использовать аргумент\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: для параметра «%s» требуется аргумент\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: нераспознанный параметр «--%s»\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: нераспознанный параметр «%c%s»\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: недопустимый параметр -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: недопустимый параметр -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: для опции требуется аргумент -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: опция `-W %s' неоднозначна\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: опция `-W %s' не разрешает использовать аргумент\n"

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
msgstr "«"

#: lib/quotearg.c:273
msgid "'"
msgstr "»"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr ""

#: src/connect.c:207
#, fuzzy, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: невозможно распознать адрес bind `%s'; bind отключается.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Устанавливается соединение с %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Устанавливается соединение с %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "соединение установлено.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "сбой: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: невозможно распознать адрес `%s'\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Преобразовано %d файлов за %s секунд.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Выполняется преобразование %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "нечего выполнять.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Не удаётся преобразовать ссылки в %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Не удаётся удалить %s: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Не удаётся сохранить %s под именем %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Синтаксическая ошибка в Set-Cookie: %s в позиции %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Cookie, пришедшие из %s, попытались установить домен в %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Невозможно открыть файл cookies, `%s': %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Ошибка записи в `%s': %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Ошибка закрытия `%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Неподдерживаемый формат листинга, пробуется парсер листинга для Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Индекс /%s на %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "время неизвестно   "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Файл        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Каталог     "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Ссылка      "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Неизвестно  "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s байт)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Длина: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) осталось"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s осталось"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (не достоверно)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Выполняется вход под именем %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Ошибка в ответе сервера, управляющее соединение закрывается.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Ошибка в приветствии сервера.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Ошибка записи, управляющее соединение закрывается.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Сервер отклонил логин.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Неверный логин.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Выполнен вход в систему!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Ошибка сервера, невозможно определить тип системы.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "готово.  "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "готово.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Неизвестный тип `%c', управляющее соединение закрывается.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "готово.   "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD не нужен.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Нет такого каталога `%s'.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD не требуется.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Невозможно начать PASV-передачу.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Ошибка парсинга ответа PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "невозможно было подключиться к %s порт %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Ошибка bind (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Недопустимый PORT.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"Сбой REST, запуск с начала.\n"

#: src/ftp.c:957
#, fuzzy, c-format
msgid "File %s exists.\n"
msgstr ""
"Удалённый файл существует.\n"
"\n"

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"Нет такого файла `%s'.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Нет такого файла `%s'.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Нет такого файла или каталога `%s'.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s вырвался в действительность.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, управляющее соединение закрывается.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Соединение: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Управляющее соединение закрыто.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Передача данных прервана.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Файл `%s' уже существует; не загружается.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(попытка:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' сохранён [%s/%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' сохранён [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Удаляется %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "`%s' используется как временный файл для листинга.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "Удалён `%s'.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Глубина рекурсии %d превысила максимальную глубину %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "Удалённый файл не новее локального файла `%s' -- не загружается.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr "Удалённый файл новее локального файла `%s' -- загружается.\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr "Размеры не совпадают (локальный размер %s) -- загружается.\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Недопустимое имя символической ссылки, пропускается.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Корректная символическая ссылка %s -> %s уже существует.\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Создаётся символическая ссылка %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Символические ссылки не поддерживаются, ссылка `%s' пропускается.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Пропускается каталог `%s'.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: неизвестный/неподдерживаемый тип файла.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: повреждена метка даты/времени.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Каталоги не будут загружены, т.к. глубина составляет %d (максимум %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Вход в каталог `%s' не выполняется, т.к. он исключён/не включён.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Отклоняется `%s'.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Ошибка сопоставления %s с %s: %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Нет совпадений с шаблоном `%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Индекс в формате HTML записан в файл `%s' [%s].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Индекс в формате HTML записан в файл `%s'.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "ОШИБКА"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "ПРЕДУПРЕЖДЕНИЕ"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: Нет сертификата, представленного %s.\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Нет сертификата, представленного %s.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "  Для запрошенного сертификата истёк срок действия.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Ошибка инициализации сертификата X509: %s\n"

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s: Нет сертификата, представленного %s.\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Ошибка разбора URL прокси %s: %s\n"

#: src/gnutls.c:283
#, fuzzy
msgid "The certificate has not yet been activated\n"
msgstr "  Запрошенный сертификат ещё недействителен.\n"

#: src/gnutls.c:288
#, fuzzy
msgid "The certificate has expired\n"
msgstr "  Для запрошенного сертификата истёк срок действия.\n"

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"%s: Общее название сертификата `%s' не совпадает с именем запрошенного хоста "
"`%s'.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Неизвестный хост"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Временный сбой при разрешении имени"

#: src/host.c:364
msgid "Unknown error"
msgstr "Неизвестная ошибка"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Распознаётся %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "сбой: Для хоста нет адресов IPv4/IPv6.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "сбой: превышен тайм-аут.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Невозможно распознать неполную ссылку %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Неверный URL %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Сбой записи запроса HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Заголовки отсутствуют, подразумевается HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "SSL отключается из-за непредвиденных ошибок.\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Отсутствует файл POST-данных `%s': %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Повторное использование соединения с %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Сбой чтения ответа прокси: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Сбой туннелирования прокси: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Запрос %s послан, ожидается ответ... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Не получено никаких данных.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Ошибка чтения (%s) в заголовках.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Неизвестная схема аутентификации.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Сбой авторизации.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Файл `%s' уже существует; не загружается.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Неполная строка статуса"

#: src/http.c:2095
msgid "(no description)"
msgstr "(нет описания)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Адрес: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "нет информации"

#: src/http.c:2156
msgid " [following]"
msgstr " [переход]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Файл уже полностью загружен; нечего выполнять.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Длина: "

#: src/http.c:2263
msgid "ignored"
msgstr "игнорируется"

#: src/http.c:2365
#, fuzzy, c-format
msgid "Saving to: %s\n"
msgstr "Сохраняется в каталог: `%s'.\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Предупреждение: в HTTP маски не поддерживаются.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Включен режим робота. Проверка существования удалённого файла.\n"

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Невозможно записать в `%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Невозможно установить соединение SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ОШИБКА: Перенаправление (%d) без указания адреса.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Удалённый файл не существует -- битая ссылка!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ОШИБКА %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Отсутствует заголовок last-modified -- временные отметки выключены.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"Неверный заголовок last-modified -- временные отметки проигнорированы.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr "Файл на сервере не новее локального файла `%s' -- не загружается.\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Размеры файлов не совпадают (локальный размер %s) -- загружается.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Удалённый файл более новый, загружается.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Удалённый файл существует и может содержать ссылки на другие ресурсы -- "
"загружается.\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr "Удалённый файл существует, но не содержит ссылок -- не загружается.\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Удалённый файл существует и может содержать дополнительные\n"
"ссылки, но рекурсия отключена -- не загружается.\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Удалённый файл существует.\n"
"\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: Неверный URL %s: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' сохранён [%s/%s]\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' сохранён [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Соединение закрыто, позиция %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Ошибка чтения, позиция %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Ошибка чтения, позиция %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC указывает на несуществующий %s.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Невозможно прочитать %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Ошибка в %s в строке %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Ошибка синтаксиса в %s в строке %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Неизвестная команда `%s' в %s строке %d.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Предупреждение: системный и пользовательский wgetrc указывают на `%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Неверная команда --execute `%s'\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr ""
"%s: %s: Неверное логическое выражение `%s'; используйте `on' или `off'.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Неверное число `%s'.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Неверное значение байта `%s'\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Неверный диапазон времени`%s'.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Неверное значение `%s'.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Неверный заголовок `%s'.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Неверный тип прогресса, `%s'.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Недопустимое ограничение `%s', используйте [unix|windows],[lowercase|"
"uppercase],[nocontrol].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Кодировка %s является недопустимой\n"

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
"Получен сигнал %s, вывод перенаправляется в `%s'.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"Получен сигнал %s.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; журналирование отключается.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Использование: %s [ОПЦИЯ]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Обязательные аргументы для длинных опций также являются обязательными и для "
"коротких опций.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Запуск:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           вывод версии Wget и выход.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              вывод этой справки.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        после запуска перейти в фоновый режим.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=КОМАНДА   выполнить команду в стиле `.wgetrc'.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Журналирование и входной файл:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=ФАЙЛ    записывать сообщения в ФАЙЛ.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=ФАЙЛ  дописывать сообщения в конец ФАЙЛА.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr ""
"  -d,  --debug               вывод большого количества отладочной "
"информации.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              выводить отладочную информацию Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               молча (без выходных данных).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             подробный вывод (по умолчанию).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          отключение подробного режима, но не полностью.\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=ФАЙЛ     загрузка URL'ов, найденных в ФАЙЛЕ.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          считать, что входной файл - HTML.\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping            не загружать повторно файлы, только если "
"они\n"
"                                 не новее, чем локальные.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Загрузка:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=ЧИСЛО             установить ЧИСЛО повторных попыток (0 без "
"ограничения).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       повторять, даже если в подключении "
"отказано.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=ФАЙЛ    записывать документы в ФАЙЛ.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              пропускать загрузки, которые приведут к\n"
"                                 загрузке уже существующих файлов.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                возобновить загрузку частично загруженного "
"файла.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=ТИП            выбрать тип индикатора выполнения.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            не загружать повторно файлы, только если "
"они\n"
"                                 не новее, чем локальные.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         вывод ответа сервера.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  ничего не загружать.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=СЕКУНДЫ         установка значений всех тайм-аутов в "
"СЕКУНДЫ.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=СЕК         установка тайм-аута поиска в DNS в СЕК.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=СЕК     установка тайм-аута подключения в СЕК.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=СЕК        установка тайм-аута чтения в СЕК.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=СЕКУНДЫ            пауза в СЕКУНДАХ между загрузками.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=СЕКУНДЫ       пауза в 1..СЕКУНДЫ между повторными "
"попытками загрузки.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             пауза в 0...2*WAIT секунд между "
"загрузками.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                явно выключить прокси.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=ЧИСЛО             установить величину квоты загрузки в "
"ЧИСЛО.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=АДРЕС      привязка к АДРЕСУ (имя хоста или IP) "
"локального хоста.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=СКОРОСТЬ     ограничение СКОРОСТИ загрузки.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache            отключение кэширования поисковых DNS-"
"запросов.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=ОС  ограничение на символы в именах файлов, "
"использование которых допускает ОС.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             игнорировать регистр при сопоставлении\n"
"                                 файлов и/или каталогов.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              подключаться только к адресам IPv4.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              подключаться только к адресам IPv6.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=СЕМЕЙСТВО подключаться сначала к адресам указанного "
"семейства,\n"
"                                 может быть IPv6, IPv4 или ничего.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=ПОЛЬЗОВАТЕЛЬ       установить и ftp- и http-пользователя в "
"ПОЛЬЗОВАТЕЛЬ.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=ПАРОЛЬ         установить и ftp- и http-пароль в ПАРОЛЬ.\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr ""
"       --password=ПАРОЛЬ         установить и ftp- и http-пароль в ПАРОЛЬ.\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-proxy                явно выключить прокси.\n"

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
msgstr "Каталоги:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           не создавать каталоги.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        принудительно создавать каталоги.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""
"  -nH, --no-host-directories      не создавать каталоги как на хосте.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     использовать имя протокола в каталогах.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=ПРЕФИКС сохранять файлы в ПРЕФИКС/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=ЧИСЛО           игнорировать ЧИСЛО компонентов удалённого "
"каталога.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Опции HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr ""
"       --http-user=ПОЛЬЗОВАТЕЛЬ установить http-пользователя в "
"ПОЛЬЗОВАТЕЛЬ.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=ПАРОЛЬ  установить http-пароль в ПАРОЛЬ.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              отвергать кэшированные сервером данные.\n"

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
"  -E,  --html-extension        сохранять HTML-документы с расширением `."
"html'.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         игнорировать поле заголовка `Content-"
"Length'.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=СТРОКА         вставить СТРОКУ между заголовками.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          максимально допустимое число перенаправлений\n"
"                               на страницу.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=ПОЛЬЗОВАТЕЛЬ установить ПОЛЬЗОВАТЕЛЯ в качестве имени "
"пользователя для прокси.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""
"       --proxy-password=ПАРОЛЬ   установить ПАРОЛЬ в качестве пароля для "
"прокси.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           включить в HTTP-запрос заголовок `Referer: "
"URL'.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          сохранять HTTP-заголовки в файл.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=АГЕНТ      идентифицировать себя как АГЕНТ вместо Wget/"
"ВЕРСИЯ.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    отключить поддержание активности HTTP "
"(постоянные подключения).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            не использовать кукисы.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=ФАЙЛ     загрузить кукисы из ФАЙЛА перед сеансом.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=ФАЙЛ     сохранить кукисы в ФАЙЛ после сеанса.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  загрузить и сохранить кукисы сеанса "
"(непостоянные).\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=СТРОКА      использовать метод POST; отправка СТРОКИ в "
"качестве данных.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=ФАЙЛ        использовать метод POST; отправка содержимого "
"ФАЙЛА.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   Учитывать заголовок Content-Disposition\n"
"                               при выборе имён для локальных файлов\n"
"                               (ЭКСПЕРИМЕНТАЛЬНЫЙ).\n"

#: src/main.c:576
#, fuzzy
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Отправить базовые данные аутентификации HTTP\n"
"                               не дожидаясь ответа от сервера.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Опции HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=ПР     выбор безопасного протокола: auto, SSLv2,\n"
"                                SSLv3 или TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   не проверять сертификат сервера.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FILE       файл сертификата пользователя.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=ТИП   тип сертификата пользователя: PEM или DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=ФАЙЛ       файл секретного ключа.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=ТИП   тип секретного ключа: PEM или DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=ФАЙЛ    файл с набором CA.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=КАТ       каталог, в котором хранится список CA.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=ФАЙЛ       файл со случайными данными для SSL PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=ФАЙЛ          файл, определяющий сокет EGD со случайными "
"данными.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Опции FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""
"       --ftp-user=ПОЛЬЗОВАТЕЛЬ установить ftp-пользователя в ПОЛЬЗОВАТЕЛЬ.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=ПАРОЛЬ   установить ftp-пароль в ПАРОЛЬ.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     не удалять файлы файлы `.listing'.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               выключить маски для имён файлов FTP.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        отключить \"пассивный\" режим передачи.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         при рекурсии загружать файлы по ссылкам (не "
"каталоги).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Рекурсивная загрузка:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          включение рекурсивной загрузки.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=ЧИСЛО        глубина рекурсии (inf и 0 - бесконечность).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr "       --delete-after       удалять локальные файлы после загрузки.\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      делать ссылки локальными в загруженном HTML.\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   перед преобразованием файла X делать резервную "
"копию X.orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   перед преобразованием файла X делать резервную "
"копию X.orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             короткая опция, эквивалентная\n"
"                            -N -r -l inf --no-remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    загрузить все изображения и проч., необходимые "
"для отображения HTML-страницы.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    включить строгую (SGML) обработку комментариев "
"HTML.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Разрешения/запреты при рекурсии:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=СПИСОК             список разрешённых расширений, "
"разделённых запятыми.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=СПИСОК             список запрещённых расширений, "
"разделённых запятыми.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=СПИСОК            список разрешённых доменов, разделённых "
"запятыми.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=СПИСОК    список запрещённых доменов, разделённых "
"запятыми.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                следовать по ссылкам FTP в HTML-"
"документах.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=СПИСОК        список используемых тегов HTML, "
"разделённых запятыми.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=СПИСОК        список игнорируемых тегов HTML, "
"разделённых запятыми.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                заходить на чужие хосты при рекурсии.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""
"  -L,  --relative                  следовать только по относительным "
"ссылкам.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=СПИСОК список разрешённых каталогов.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=СПИСОК список исключаемых каталогов.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""
"  -np, --no-parent                 не подниматься в родительский каталог.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Отчёты об ошибках и пожелания отправляйте на <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr ""
"GNU Wget %s, программа для загрузки файлов из сети в автономном режиме.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Пароль для пользователя %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Пароль: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Локаль: "

#: src/main.c:782
msgid "Compile: "
msgstr "Компиляция: "

#: src/main.c:783
msgid "Link: "
msgstr "Ссылка: "

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
msgstr "Copyright (C) 2008 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Лицензия GPLv3+: GNU GPL версии 3 или старше\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Это свободное программное обеспечение: его можно свободно изменять\n"
"и распространять дальше.\n"
"Ничего НЕ ГАРАНТИРУЕТСЯ, в пределах, ограниченных законом.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Автор оригинальной версии: Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Текущий сопровождающий: Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Отчёты об ошибках и пожелания отправляйте на <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Попробуйте `%s --help' для получения списка опций.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: недопустимая опция -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Невозможно одновременно использовать режимы verbose и quiet.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Невозможно одновременно использовать временные метки и не затирать старые "
"файлы.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Невозможно указать и --inet4-only, и --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Нельзя указать одновременно -k и -O, если указано несколько URL,\n"
"или в комбинации с параметрами -p или -r. Подробности см. в документации.\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"ПРЕДУПРЕЖДЕНИЕ: комбинирование параметра -O с -r или -p означает, что весь "
"загруженный контент будет помещён в один файл.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Файл `%s' уже существует; не загружается.\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Невозможно указать и --inet4-only, и --inet6-only.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: отсутствует URL\n"

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
msgstr "Не найдены URL'ы в файле %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"ЗАВЕРШЕНО --%s--\n"
"Загружено: %d файлов, %s за %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "ПРЕВЫШЕНО ограничение на загрузку (%s)!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Работа продолжается в фоновом режиме.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Работа продолжается в фоновом режиме, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Выходные данные будут записаны в `%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Невозможно найти подходящий драйвер сокета.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: предупреждение: перед именем каждой машины встречается маркер \"%s"
"\"\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: неизвестный маркер \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Использование: %s NETRC [ИМЯ_ХОСТА]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: невозможно выполнить stat для %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "ПРЕДУПРЕЖДЕНИЕ: используется слабый источник случайных данных.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"Невозможно породить PRNG; подразумевается использование опции --random-"
"file.\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: невозможно проверить сертификат %s, запрошенный `%s':\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Невозможно локально проверить подлинность запрашивающего.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Обнаружен самостоятельно подписанный сертификат.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Запрошенный сертификат ещё недействителен.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Для запрошенного сертификата истёк срок действия.\n"

#: src/openssl.c:579
#, fuzzy, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: Общее название сертификата `%s' не совпадает с именем запрошенного хоста "
"`%s'.\n"

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
"Чтобы небезопасно подключиться к %s, используйте `--no-check-certificate'.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ пропускается %sK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Недопустимая спецификация dot-стиля `%s'; оставлен без изменения.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  ост %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   в "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Не удаётся получить REALTIME-частоту часов: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Удаляется %s, т. к. он должен быть исключён.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Не удаётся открыть %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Загружается robots.txt; не обращайте внимание на ошибки.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Ошибка разбора URL прокси %s: %s\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Ошибка в URL прокси %s: Должен быть HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Превышено число перенаправлений %d.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Завершение.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Повтор.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Битые ссылки не найдены.\n"
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
"Найдена %d битая ссылка.\n"
"\n"
msgstr[1] ""
"Найдено %d битых ссылок.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Нет ошибок"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Неподдерживаемая схема"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "Неверное имя хоста"

#: src/url.c:641
msgid "Bad port number"
msgstr "Неверный номер порта"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Неверное имя пользователя"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Незавершённые числовые адреса IPv6"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Адреса IPv6 не поддерживаются"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Неверный числовой адрес IPv6"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr ""

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Не удалось выделить %ld байт; нехватка памяти.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Не удалось выделить %ld байт; нехватка памяти.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Работа продолжается в фоновом режиме, pid %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Не удалось разорвать символьную ссылку %s: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            добавление URL в начало относительных ссылок "
#~ "в файле -F -i.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  сохранять права доступа удалённых файлов.\n"

#~ msgid ""
#~ "Cannot specify -N if -O is given. See the manual for details.\n"
#~ "\n"
#~ msgstr ""
#~ "Нельзя указать параметр -N, если указан -O.\n"
#~ "Подробности см. в документации.\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Ошибка в Set-Cookie, поле `%s'"

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: Неверное расширенное логическое выражение `%s';\n"
#~ "используйте `on', `off', `always' или `never'.\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                   явно включить прокси.\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Эта программа распространяется в надежде, что она будет полезна,\n"
#~ "но БЕЗ ВСЯКОЙ ГАРАНТИИ; даже без подразумеваемой гарантии\n"
#~ "РАБОТОСПОСОБНОСТИ или ПРИГОДНОСТИ ДЛЯ КАКОЙ-ЛИБО ЦЕЛИ. За более\n"
#~ "подробной информацией обращайтесь к GNU General Public License.\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s: Ошибка проверки сертификата для %s: %s\n"

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) - Соединение закрыто, позиция %s/%s. "
