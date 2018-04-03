#. that there can be valid reasons for the local host
#. name not to be an FQDN, so I've decided to remove the
#. annoying warning.
#: src/host.c:511
#, c-format
msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
msgstr "%s: 警告: ローカルアドレスの逆引き結果がFQDNではありません!\n"

#: src/host.c:539
msgid "Host not found"
msgstr "ホストが見つかりません"

#: src/host.c:541
msgid "Unknown error"
msgstr "不明なエラーです"

#: src/html.c:439 src/html.c:441
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "/%s (%s:%d 上)の見出し(index)です"

#: src/html.c:463
msgid "time unknown       "
msgstr "時間が不明です       "

#: src/html.c:467
msgid "File        "
msgstr "ファイル        "

#: src/html.c:470
msgid "Directory   "
msgstr "ディレクトリ   "

#: src/html.c:473
msgid "Link        "
msgstr "リンク        "

#: src/html.c:476
msgid "Not sure    "
msgstr "不確実    "

#: src/html.c:494
#, c-format
msgid " (%s bytes)"
msgstr " (%s バイト)"

#: src/http.c:492
msgid "Failed writing HTTP request.\n"
msgstr "HTTP による接続要求の送信に失敗しました。\n"

#: src/http.c:497
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s による接続要求を送信しました、応答を待っています... "

#: src/http.c:536
msgid "End of file while parsing headers.\n"
msgstr "ヘッダの解析中にファイルの終端になりました。\n"

#: src/http.c:547
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "ヘッダ内で読み込みエラー(%s)です\n"

#: src/http.c:587
msgid "No data received"
msgstr "データが受信されませんでした"

#: src/http.c:589
msgid "Malformed status line"
msgstr "奇妙な状態です"

#: src/http.c:594
msgid "(no description)"
msgstr "(説明なし)"

#. If we have tried it already, then there is not point
#. retrying it.
#: src/http.c:678
msgid "Authorization failed.\n"
msgstr "認証に失敗しました。\n"

#: src/http.c:685
msgid "Unknown authentication scheme.\n"
msgstr "不明な認証形式です。\n"

#: src/http.c:748
#, c-format
msgid "Location: %s%s\n"
msgstr "場所: %s%s\n"

#: src/http.c:749 src/http.c:774
msgid "unspecified"
msgstr "特定できません"

#: src/http.c:750
msgid " [following]"
msgstr " [続く]"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:764
msgid "Length: "
msgstr "長さ: "

#: src/http.c:769
#, c-format
msgid " (%s to go)"
msgstr " (のこり%s)"

#: src/http.c:774
msgid "ignored"
msgstr "無視しました"

#: src/http.c:857
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "警告: HTTPはワイルドカードに対応していません。\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:872
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "ファイル `%s' はすでに存在するので、転送しません。\n"

#: src/http.c:978
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "`%s' (%s)へ書き込めません。\n"

#: src/http.c:988
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "エラー: 場所が存在しないリディレクション(%d)です。\n"

#: src/http.c:1011
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s エラー %d: %s。\n"

#: src/http.c:1023
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Last-modified ヘッダがありません -- 日付を無効にします。\n"

#: src/http.c:1031
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Last-modified ヘッダが無効です -- 日付を無視します。\n"

#: src/http.c:1064
msgid "Remote file is newer, retrieving.\n"
msgstr "リモートファイルのほうが新しいので、転送します。\n"

#: src/http.c:1098
#, c-format
msgid "%s (%s) - `%s' saved [%ld/%ld]\n\n"
msgstr "%s (%s) - `%s' を保存しました [%ld/%ld]\n\n"

#: src/http.c:1130
#, c-format
msgid "%s (%s) - Connection closed at byte %ld. "
msgstr "%s (%s) - %ld バイトで接続が終了しました。 "

#: src/http.c:1138
#, c-format
msgid "%s (%s) - `%s' saved [%ld/%ld])\n\n"
msgstr "%s (%s) - `%s' を保存しました [%ld/%ld])\n\n"

#: src/http.c:1150
#, c-format
msgid "%s (%s) - Connection closed at byte %ld/%ld. "
msgstr "%s (%s) - %ld/%ld バイトで接続が終了しました。 "

#: src/http.c:1161
#, c-format
msgid "%s (%s) - Read error at byte %ld (%s)."
msgstr "%s (%s) - %ld バイトで読み込みエラーです (%s)。"

#: src/http.c:1169
#, c-format
msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
msgstr "%s (%s) - %ld/%ld バイトで読み込みエラーです (%s)。 "

#: src/init.c:312 src/netrc.c:250
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: %s (%s)を読み込めません。\n"

#: src/init.c:333 src/init.c:339
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: %s 内の %d 行でエラーです\n"

#: src/init.c:370
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
msgstr "%s: 警告: システムとユーザのwgetrcの両方が `%s' を指定しています。\n"

#: src/init.c:458
#, c-format
msgid "%s: BUG: unknown command `%s', value `%s'.\n"
msgstr "%s: バグ: `%s' は不明な命令です、値は `%s' です。\n"

#: src/init.c:485
#, c-format
msgid "%s: %s: Please specify on or off.\n"
msgstr "%s: %s: onかoffかを特定してください。\n"

#: src/init.c:503 src/init.c:760 src/init.c:782 src/init.c:855
#, c-format
msgid "%s: %s: Invalid specification `%s'.\n"
msgstr "%s: %s: 無効な指定 `%s' です。\n"

#: src/init.c:616 src/init.c:638 src/init.c:660 src/init.c:686
#, c-format
msgid "%s: Invalid specification `%s'\n"
msgstr "%s: 無効な指定 `%s' です。\n"

#: src/main.c:101
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "使い方: %s [オプション]... [URL]...\n"

#: src/main.c:109
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, 非対話的ネットワーク転送ソフト\n"

#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
#. don't bitch.  Also, it makes translation much easier.
#: src/main.c:114
msgid "\nMandatory arguments to long options are mandatory for short options too.\n\n"
msgstr "\n長いオプションで不可欠な引数は短いオプションでも不可欠です。\n\n"

#: src/main.c:117
msgid ""
"Startup:\n"
"  -V,  --version           display the version of Wget and exit.\n"
"  -h,  --help              print this help.\n"
"  -b,  --background        go to background after startup.\n"
"  -e,  --execute=COMMAND   execute a `.wgetrc' command.\n"
"\n"
msgstr ""
"起動:\n"
