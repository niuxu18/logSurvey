# Japanese messages for GNU Wget.
# Copyright (C) 1998 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Originally translated by Penguin Kun <penguin-kun@geocities.com>, 1998
# Hiroshi Takekawa <sian@big.or.jp>, 2000-2009
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-10 06:13+0900\n"
"Last-Translator: Hiroshi Takekawa <sian@big.or.jp>\n"
"Language-Team: Japanese <translation-team-ja@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=0;\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "不明なシステムエラーです"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: オプション `%s' は曖昧です\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: オプション `--%s' は引数を必要としません\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: オプション `%c%s' は引数を必要としません\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: オプション `%s' は引数を必要とします\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: `--%s' は認識できないオプションです\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: `%c%s' は認識できないオプションです\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: 不正なオプションです -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: 不正なオプションです -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: オプションは引数を必要とします -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: オプション `-W %s' は曖昧です\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: オプション `-W %s' は引数を取りません\n"

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
msgstr "`"

#: lib/quotearg.c:273
msgid "'"
msgstr "'"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "メモリ不足"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: バインドしようとしたアドレス %s を解決できませんでした; バインドを禁止し"
"ます。\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "%s|%s|:%d に接続しています... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "%s:%d に接続しています... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "接続しました。\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "失敗しました: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: ホストアドレス %s を解決できませんでした。\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d 個のファイルを %s 秒で変換しました。\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "%s を変換しています... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "なにもすることがありません。\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "%s 中のリンクを変換できません: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "%s の削除に失敗しました: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "%s を %s としてバックアップできません: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Set-Cookie: %s の位置 %d には文法エラーがあります。\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "%s からのクッキーがドメインを %s に設定しようとしました\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "クッキーファイル %s を開けませんでした: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "%s へ書き込めません: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "%s を閉じる際にエラーが発生しました: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "サポートしていないリスト形式です、UNIX形式と見て解釈してみます。\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s (%s:%d 上)の見出し(index)です"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "時間が不明です       "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "ファイル        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "ディレクトリ   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "リンク        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "不確実    "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s バイト)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "長さ: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) 残っています"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s 残っています"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (確証はありません)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "%s としてログインしています... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "サーバの応答にエラーがあるので、接続を終了します。\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "サーバの初期応答にエラーがあります。\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "書き込みに失敗したので、接続を終了します。\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "サーバがログインを拒否しました。\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "ログインに失敗しました。\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "ログインしました!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "サーバエラーで、システムがなにか判別できません。\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "完了しました。    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "完了しました。\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "`%c' は不明な種類なので、接続を終了します。\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "完了しました。  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD は必要ありません。\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"%s というディレクトリはありません。\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD は必要ありません。\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "PASV転送の初期化ができません。\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "PASVの応答を解析できません。\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "%s:%d へ接続できませんでした: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "バインドエラーです (%s)。\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "無効なポート番号です。\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"RESTに失敗しました、最初から始めます。\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "%s というファイルが存在します。\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "%s というファイルはありません。\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"%s というファイルはありません。\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"%s というファイルまたはディレクトリはありません。\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s が存在しています。\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s、接続を終了します。\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - データ接続: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "制御用の接続を切断します。\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "データ転送を中断しました。\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "ファイル %s はすでに存在するので、取得しません。\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(試行:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - stdout へ出力しました %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s へ保存終了 [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "%s を削除しました。\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "リスト一時ファイルに %s を使用します。\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "%s を削除しました。\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "再帰する深さ %d が最大値を超過しています。深さは %d です。\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"サーバ側のファイルよりローカルのファイル %s の方が新しいか同じなので取得しま"
"せん。\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"サーバ側のファイルの方がローカルのファイル %s より新しいので取得します。\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"サイズが合わないので(ローカルは %s)、取得します。\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "不正なシンボリックリンク名なので、とばします。\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"すでに %s -> %s という正しいシンボリックリンクがあります\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "%s -> %s というシンボリックリンクを作成しています\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr ""
"シンボリックリンクに対応していないので、シンボリックリンク %s をとばしま"
"す。\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "ディレクトリ %s をとばします。\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: 不明なまたは対応していないファイルの種類です。\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: 日付が壊れています。\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "深さが %d (最大 %d)なのでディレクトリを転送しません。\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "除外されているか含まれていないので %s に移動しません。\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "%s を除外します。\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "%s は %s に対してマッチしませんでした: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "パターン %s に適合するものがありません。\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "%s [%s]にHTML化されたインデックスを書きました。\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "%s にHTML化されたインデックスを書きました。\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "エラー"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "警告"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: %s から証明書の提示がありませんでした\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: %s の証明書は信用されません。\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: %s の証明書の発行者が不明です。\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: %s の証明書は失効しています。\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "X509 証明書の初期化に失敗しました: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "証明書が見つかりません\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "証明書を解釈中にエラーが発生しました: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "証明書はまだ有効ではありません。\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "証明書は失効しています。\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "証明書の所有者の名前とホスト名 %s が一致しません\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "不明なホストです"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "名前解決中に一時的な失敗が発生しました"

#: src/host.c:364
msgid "Unknown error"
msgstr "不明なエラーです"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "%s をDNSに問いあわせています... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "失敗: ホストに IPv4/IPv6 アドレスがありません。\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "失敗しました: タイムアウト.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: 不完全なリンク %s を解決できません。\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: %s は無効な URL です(%s)。\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "HTTP による接続要求の送信に失敗しました: %s\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "ヘッダがないので、HTTP/0.9 だと仮定します"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "エラーが発生したので SSL を無効にします\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "POST データファイル %s がありません: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "%s:%d への接続を再利用します。\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "プロクシからの読み込みに失敗しました: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "プロクシのトンネリングに失敗しました: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s による接続要求を送信しました、応答を待っています... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "データが受信されませんでした\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "ヘッダ内で読み込みエラー(%s)です\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "不明な認証形式です。\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "認証に失敗しました。\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"ファイル %s はすでに存在するので、取得しません。\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "奇妙なステータス行です"

#: src/http.c:2095
msgid "(no description)"
msgstr "(説明なし)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "場所: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "特定できません"

#: src/http.c:2156
msgid " [following]"
msgstr " [続く]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    このファイルは既に全部取得しおわっています。何もすることはありません。\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "長さ: "

#: src/http.c:2263
msgid "ignored"
msgstr "無視しました"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "%s に保存中\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "警告: HTTPはワイルドカードに対応していません。\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""
"スパイダーモードが有効です。リモートファイルが存在してるか確認します。\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "%s へ書き込めません(%s)。\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "SSL による接続が確立できません。\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "エラー: 場所が存在しないリダイレクション(%d)です。\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "リモートファイルが存在していません -- リンクが壊れています!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s エラー %d: %s。\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Last-modified ヘッダがありません -- 日付を無効にします。\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Last-modified ヘッダが無効です -- 日付を無視します。\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"サーバ側のファイルよりローカルのファイル %s の方が新しいので取得しません。\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "大きさが合わないので(ローカルは %s)、転送します。\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "リモートファイルのほうが新しいので、転送します。\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"リモートファイルが存在し、他のリソースへのリンクがあるかもしれません -- 取得"
"中。\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"リモートファイルは存在していますが、リンクを含んでいません -- 取得しませ"
"ん。\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"リモートファイルが存在し、さらなるリンクもあり得ますが、再帰が禁止されていま"
"す -- 取得しません。\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr "リモートファイルが存在します。\n"

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
"%s (%s) - stdout へ出力完了 %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - %s へ保存完了 [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - %s バイトで接続が終了しました。 "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - %s バイトで読み込みエラーが発生しました (%s)。"

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - %s/%s バイトで読み込みエラーが発生しました (%s)。 "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC が %s を指していますが, 存在しません。\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: %s (%s)を読み込めません。\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: %s 内の %d 行でエラーです\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: %s 内の %d 行で文法エラーが発生しました\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: コマンド %s (%s の %d行目) は不明です\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: 警告: システムとユーザの wgetrc の両方が %s を指定しています。\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: 無効な --execute 指定 %s です。\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr ""
"%s: %s: %s はブール値として無効です。`on' か `off' を指定してください。\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: %s は無効な数です。\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: %s は無効なバイト値です。\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: %s は無効な時間間隔です。\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: %s は無効な値です。\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: %s は無効なヘッダです。\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: %s は無効な経過表示形式です。\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: %s は無効です。unix か windows、lowercase か uppercase、nocontrol や "
"ascii を指定してください。\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "エンコード %s は無効です\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: ロケールが設定されていません\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "%s から %s への変換はサポートしていません\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "不完全か不正なマルチバイト文字列です\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "処理されないエラー (errno %d)\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode に失敗しました (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode に失敗しました (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s を受信しました、%s に出力をリダイレクトします。\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s 受信しました\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; ログ取りを禁止します。\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "使い方: %s [オプション]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"長いオプションで不可欠な引数は短いオプションでも不可欠です。\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "スタートアップ:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           バージョン情報を表示して終了する\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              このヘルプを表示する\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        スタート後にバックグラウンドに移行する\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=COMMAND   `.wgetrc'形式のコマンドを実行する\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "ログと入力ファイル:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FILE    ログを FILE に出力する\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FILE  メッセージを FILE に追記する\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               デバッグ情報を表示する\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              Watt-32デバッグ情報を表示する\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               何も出力しない\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             冗長な出力をする (デフォルト)\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr "  -nv, --no-verbose          冗長ではなくする\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=FILE     FILE の中に指定された URL をダウンロードする\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          入力ファイルを HTML として扱う\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            HTML で入力されたファイル(-i -F)のリンクを\n"
"                             指定した URL の相対 URL として扱う\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "ダウンロード:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=NUMBER            リトライ回数の上限を指定 (0 は無制限).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr "       --retry-connrefused       接続を拒否されてもリトライする\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FILE    FILE に文書を書きこむ\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              存在しているファイルをダウンロードで上書きし"
"ない\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                部分的にダウンロードしたファイルの続きから始"
"める\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=TYPE           進行表示ゲージの種類を TYPE に指定する\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            ローカルにあるファイルよりも新しいファイルだ"
"け取得する\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         サーバの応答を表示する\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  何もダウンロードしない\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SECONDS         全てのタイムアウトを SECONDS 秒に設定する\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SECS        DNS 問い合わせのタイムアウトを SECS 秒に設定"
"する\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SECS    接続タイムアウトを SECS 秒に設定する\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SECS       読み込みタイムアウトを SECS 秒に設定する\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SECONDS            ダウンロード毎に SECONDS 秒待つ\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr "       --waitretry=SECONDS       リトライ毎に 1〜SECONDS 秒待つ\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr "       --random-wait             ダウンロード毎に 0〜2*WAIT 秒待つ\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                プロクシを使わない\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=NUMBER            ダウンロードするバイト数の上限を指定する\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADDRESS    ローカルアドレスとして ADDRESS (ホスト名か "
"IP) を使う\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=RATE         ダウンロード速度を RATE に制限する\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache            DNS の問い合わせ結果をキャッシュしない\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr "       --restrict-file-names=OS  OS が許しているファイル名に制限する\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ファイル名/ディレクトリ名の比較で大文字小文"
"字を無視する\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              IPv4 だけを使う\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              IPv6 だけを使う\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILY    指定したファミリ(IPv6, IPv4, none)で最初に接"
"続する\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr "       --user=USER               ftp, http のユーザ名を指定する\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --password=PASS           ftp, http のパスワードを指定する\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            パスワードを別途入力する\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  IRI サポートを使わない\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=ENC      指定した ENC を IRI のローカルエンコーディン"
"グにする\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=ENC     指定した ENC をデフォルトのリモートエンコー"
"ディングにする\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "ディレクトリ:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           ディレクトリを作らない\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        ディレクトリを強制的に作る\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      ホスト名のディレクトリを作らない\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr "       --protocol-directories     プロトコル名のディレクトリを作る\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIX  ファイルを PREFIX/ 以下に保存する\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=NUMBER          リモートディレクトリ名の NUMBER 階層分を無"
"視する\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "HTTP オプション:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=USER        http ユーザ名として USER を使う\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=PASS    http パスワードとして PASS を使う\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              サーバがキャッシュしたデータを許可しない\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NAME     デフォルトのページ名を NAME に変更します\n"
"                               通常は `index.html' です\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension        HTML/CSS 文書は適切な拡張子で保存する\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr "       --ignore-length         `Content-Length' ヘッダを無視する\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=STRING         送信するヘッダに STRING を追加する\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr "       --max-redirect          ページで許可する最大転送回数\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=USER       プロクシユーザ名として USER を使う\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=PASS   プロクシパスワードとして PASS を使う\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr "       --referer=URL           Referer を URL に設定する\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          HTTP のヘッダをファイルに保存する\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT      User-Agent として Wget/VERSION ではなく AGENT "
"を使う\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    HTTP の keep-alive (持続的接続) 機能を使わな"
"い\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            クッキーを使わない\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr "       --load-cookies=FILE     クッキーを FILE から読みこむ\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr "       --save-cookies=FILE     クッキーを FILE に保存する\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  セッションだけで用いるクッキーを保持する\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=STRING      POST メソッドを用いて STRING を送信する\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FILE        POST メソッドを用いて FILE の中味を送信する\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   Content-Disposition ヘッダがあれば\n"
"                               ローカルのファイル名として用いる (実験的)\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     サーバからのチャレンジを待たずに、\n"
"                               Basic認証の情報を送信します。\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "HTTPS (SSL/TLS) オプション:\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     セキュアプロトコルを選択する (auto, SSLv2, "
"SSLv3, TLSv1)\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr "       --no-check-certificate   サーバ証明書を検証しない\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FILE       クライアント証明書として FILE を使う\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TYPE  クライアント証明書の種類を TYPE (PEM, DER) に"
"設定する\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FILE       秘密鍵として FILE を使う\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""
"       --private-key-type=TYPE  秘密鍵の種類を TYPE (PEM, DER) に設定する\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=FILE    CA 証明書として FILE を使う\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=DIR       CA のハッシュリストが保持されているディレクト"
"リを指定する\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FILE       SSL PRNG の初期化データに使うファイルを指定す"
"る\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr "       --egd-file=FILE          EGD ソケットとして FILE を使う\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "FTP オプション:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             ftp の全てのバイナリファイルで Stream_LF "
"フォーマットを用います。\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=USER         ftp ユーザとして USER を使う\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=PASS     ftp パスワードとして PASS を使う\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     `.listing' ファイルを削除しない\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               FTP ファイル名のグロブを無効にする\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp        \"passive\" 転送モードを使わない\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         再帰取得中に、シンボリックリンクでリンクされた"
"先のファイルを取得する\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "再帰ダウンロード:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          再帰ダウンロードを行う\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=NUMBER       再帰時の階層の最大の深さを NUMBER に設定する (0 "
"で無制限)\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       ダウンロード終了後、ダウンロードしたファイルを削"
"除する\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      HTML や CSS 中のリンクをローカルを指すように変更"
"する\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   リンク変換前のファイル X を X_orig として保存す"
"る\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   リンク変換前のファイルを .orig として保存する\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr "  -m,  --mirror             -N -r -l 0 --no-remove-listing の省略形\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    HTML を表示するのに必要な全ての画像等も取得する\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr "       --strict-comments    HTML 中のコメントの処理を厳密にする\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "再帰ダウンロード時のフィルタ:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LIST               ダウンロードする拡張子をコンマ区切りで指定"
"する\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LIST               ダウンロードしない拡張子をコンマ区切りで指"
"定する\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LIST              ダウンロードするドメインをコンマ区切りで指"
"定する\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LIST      ダウンロードしないドメインをコンマ区切りで"
"指定する\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                HTML 文書中の FTP リンクも取得対象にする\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LIST          取得対象にするタグ名をコンマ区切りで指定す"
"る\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LIST          取得対象にしないタグ名をコンマ区切りで指定"
"する\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                再帰中に別のホストもダウンロード対象にす"
"る\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  相対リンクだけ取得対象にする\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""
"  -I,  --include-directories=LIST  取得対象にするディレクトリを指定する\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""
"  -X,  --exclude-directories=LIST  取得対象にしないディレクトリを指定する\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 親ディレクトリを取得対象にしない\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "バグ報告や提案は<bug-wget@gnu.org>へ\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, 非対話的ネットワーク転送ソフト\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "ユーザ %s のパスワード: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "パスワード: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "ロケール: "

#: src/main.c:782
msgid "Compile: "
msgstr "コンパイル: "

#: src/main.c:783
msgid "Link: "
msgstr "リンク: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s built on %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (env)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (user)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (system)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Copyright (C) 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"ライセンス GPLv3+: GNU GPL バージョン 3 あるいはそれ以降のバージョン\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"このソフトウェアはフリーソフトウェアです。自由に変更、再配布ができます。\n"
"法律が許すかぎり、全くの無保証です。\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Hrvoje Niksic <hniksic@xemacs.org> によって書かれました。\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""
"現在は Micah Cowan <micah@cowan.name> によってメンテナンスされています。\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "バグ報告や質問は<bug-wget@gnu.org>へ\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "詳しいオプションは `%s --help' を実行してください。\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: `-n%c' は不正なオプション指定です\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr ""
"出力を詳細にするオプションと出力を抑制するオプションを同時には指定できませ"
"ん\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "-Nと-ncとを同時には指定できません。\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "--inet4-only と --inet6-only を両方指定することはできません\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"複数の URL を指定する場合、あるいは -p や -r と使う場合、\n"
"-k と -O を両方指定することはできません。詳しくはマニュアルを参照してくださ"
"い。\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"警告: -r や -p と -O を一緒に使うと、ダウンロードした内容は、\n"
"全て指定された一つのファイルに入ることを意味します。\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"警告: タイムスタンプの比較は -O では無効です。\n"
"詳しくはマニュアルを参照してください。\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "ファイル `%s' はすでに存在するので、取得しません。\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "--ask-password と --password を両方指定することはできません\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URLがありません\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "このバージョンは IRI をサポートしていません\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"警告: 標準出力をバイナリモードで再オープンできません。\n"
"      ダウンロードしたファイルに正しくない行末コードが含まれるかもしれませ"
"ん。\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "%s にはURLがありません。\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"終了しました --%s--\n"
"ダウンロード完了: %d ファイル、%s バイトを %s で取得 (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "容量制限(%s バイト)を超過します!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "バックグラウンドで継続します。\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "バックグラウンドで継続します、pidは %lu。\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "出力を %s に書き込みます。\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: 使用可能なソケットドライバを見つけられません。\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: 警告: 区切り記号(token) %s はすべてのマシン名の前に現われます\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: \"%s\" は不明な区切り記号(token)です\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "使い方: %s NETRC [ホスト名]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: %sの情報を取得できません: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "警告: 弱い乱数の種を使用しています\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "PRNGの初期化に失敗しました。--random-file の使用を検討してください。\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: %s の証明書(発行者: %s)の検証に失敗しました:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  発行者の権限を検証できませんでした。\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  自己署名証明書です。\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  発行された証明書はまだ有効ではありません。\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  発行された証明書は失効しています。\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr "%s: 証明書に記載されている名前 %s とホスト名 %s が一致しません\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: 証明書の名前が不正です(NUL文字を含んでいます)。\n"
"接続先のサーバがなりすましている可能性があります。\n"
"つまり、本物の %s ではないかもしれません。\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"%s に安全の確認をしないで接続するには、`--no-check-certificate' を使ってくだ"
"さい。\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ %sK とばします ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "%s は無効なドット表示形式なので変更しません。\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  残り%s"

#: src/progress.c:1050
msgid "   in "
msgstr " 時間 "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "リアルタイムクロックの周波数を取得できません: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "拒否すべきなので、%s を削除しました。\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "%s を開けません: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "robots.txtを読み込んでいます、エラーは無視してください。\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "proxy URL %s を解釈中にエラーが発生しました: %s\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "proxy URL %s に間違いがあります: HTTPでなければなりません。\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "リダイレクション回数が %d を越えました。\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"中止しました。\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"再試行しています。\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"壊れたリンクはありませんでした。\n"
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
"%d 個の壊れたリンクを見つけました。\n"
"\n"
msgstr[1] ""
"%d 個の壊れたリンクを見つけました。\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "エラーなし"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "%s はサポートされていないスキームです"

#: src/url.c:637
msgid "Scheme missing"
msgstr "スキームがありません"

#: src/url.c:639
msgid "Invalid host name"
msgstr "ホスト名が不正です"

#: src/url.c:641
msgid "Bad port number"
msgstr "ポート番号が不正です"

#: src/url.c:643
msgid "Invalid user name"
msgstr "ユーザ名が不正です"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "IPv6 アドレスの記述が終了していません"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "IPv6 アドレスはサポートされていません"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "IPv6 アドレスが不正です"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "HTTPS がサポートされるようコンパイルされていません"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: メモリの確保に失敗しました; メモリがいっぱいです\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: %ld バイトの確保に失敗しました; メモリがいっぱいです\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""
"%s: aprintf: テキストバッファ (%ld bytes) は大きすぎるので、中止します。\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "バックグラウンドで継続します、pidは %d。\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "シンボリックリンク %s の削除に失敗しました: %s\n"
