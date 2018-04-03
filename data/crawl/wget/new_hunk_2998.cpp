"Пробам поново.\n"
"\n"

#: src/url.c:642
msgid "No error"
msgstr "Нема грешке"

#: src/url.c:644
msgid "Unsupported scheme"
msgstr "Шаблон није подржан"

#: src/url.c:646
msgid "Empty host"
msgstr "Празна ознака рачунара"

#: src/url.c:648
msgid "Bad port number"
msgstr "Лоше наведен број порта"

#: src/url.c:650
msgid "Invalid user name"
msgstr "Лоше наведено корисничко име"

#: src/url.c:652
msgid "Unterminated IPv6 numeric address"
msgstr "IPv6 адреса није исправно наведена"

#: src/url.c:654
msgid "IPv6 addresses not supported"
msgstr "IPv6 адресе нису подржане"

#: src/url.c:656
msgid "Invalid IPv6 numeric address"
msgstr "Неисправна IPv6 нумеричка адреса"

#. parent, no error
#: src/utils.c:347
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Настављам рад у позадини, ознака pid је %d.\n"

#: src/utils.c:391
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "Неуспело брисање симболичке везе `%s': %s\n"

#: src/xmalloc.c:72
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr ""
#~ "„%s‟ се не може претворити у адресу за повезивање.  Покушавам ANY.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST није успео; „%s‟ неће бити одсечен.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s преостало]"

#~ msgid "Host not found"
#~ msgstr "Рачунар није пронађен"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Крај датотеке приликом читања заглавља.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Наставак преузимања није успео за ову датотеку, а то је у супротности са\n"
#~ "избором `-c'. Датотека `%s' неће бити скраћена.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (још %s)"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Startup:\n"
#~ "  -V,  --version           исписује ознаку верзије програма wget.\n"
#~ "  -h,  --help              исписује ову помоћну поруку.\n"
#~ "  -b,  --background        пребацује се у позадину после покретања.\n"
#~ "  -e,  --execute=КОМАНДА   изврши команду као да је уписана у `.wgetrc'.\n"
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
#~ "Дневник и улазна датотека:\n"
#~ "  -o,  --output-file=ДАТОТЕКА   запиши поруке у ДАТОТЕКУ.\n"
#~ "  -a,  --append-output=ДАТОТЕКА надовежи поруке на ДАТОТЕКУ.\n"
#~ "  -d,  --debug                  исписуј поруке за дебагирање.\n"
#~ "  -q,  --quiet                  тишина (ништа не исписуј).\n"
#~ "  -v,  --verbose                детаљи (подразумевана вредност).\n"
#~ "  -nv, --non-verbose            не исписуј баш све детаље.\n"
#~ "  -i,  --input-file=ДАТОТЕКА    преузимај са URL-ова из ДАТОТЕКЕ.\n"
#~ "  -F,  --force-html             сматрај да је улаз у HTML.\n"
#~ "  -B,  --base=URL               додаје URL на релативне везе у -F -i "
#~ "датотеци.\n"
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
#~ "Преузимање:\n"
#~ "  -t,  --tries=БРОЈ             поставља број покушаја на БРОЈ "
#~ "(0=бесконачно).\n"
#~ "       --retry-connrefused      покушај опет чак и ако је веза одбијена.\n"
#~ "  -O   --output-document=ДАТ    запиши документе у датотеку ДАТ.\n"
#~ "  -nc, --no-clobber             не преписуј датотеке које већ постоје као "
#~ "ни .# суфиксе.\n"
#~ "  -c,  --continue               настави делимично преузете датотеке.\n"
#~ "       --progress=ВРСТА         изабери врсту мерача напретка.\n"
#~ "  -N,  --timestamping           не преузимај уколико су датотеке "
#~ "старије.\n"
#~ "  -S,  --server-response        исписуј одговоре са сервера.\n"
#~ "       --spider                 не преузимај ништа.\n"
#~ "  -T,  --timeout=СЕКУНДЕ        све временске границе постави на "
#~ "СЕКУНДЕ.\n"
#~ "       --dns-timeout=СЕКУНДЕ    време за одговор од DNS-а.\n"
#~ "       --connect-timeout=СЕКУНДЕ време за повезивање.\n"
#~ "       --read-timeout=СЕКУНДЕ   време за читање.\n"
#~ "  -w,  --wait=СЕКУНДЕ           чекај неколико СЕКУНДИ пре преузимања\n"
#~ "       --waitretry=СЕКУНДЕ      чекај најмање 1 а највише СЕКУНДИ пре "
#~ "поновног поушаја.\n"
#~ "       --random-wait            wait from 0...2*WAIT secs between "
#~ "retrievals.\n"
#~ "  -Y,  --proxy=on/off           укључи или искључи приступ преко "
#~ "заступника.\n"
#~ "  -Q,  --quota=БРОЈ             постави границу за преузимање на БРОЈ.\n"
#~ "       --bind-address=АДРЕСА    повежи се на АДРЕСУ (име или IP) у "
#~ "локалу.\n"
#~ "       --limit-rate=ПРОТОК      ограничи проток на ПРОТОК.\n"
#~ "       --dns-cache=off          не чувај DNS упите.\n"
#~ "       --restrict-file-names=OS у имену датотека легални су само знаци "
#~ "које дозвољава оперативни систем OS.\n"
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
#~ "Директоријуми:\n"
#~ "  -nd, --no-directories            не прави директоријуме.\n"
#~ "  -x,  --force-directories         увек прави директоријуме.\n"
#~ "  -nH, --no-host-directories       не прави директоријуме за хост.\n"
#~ "  -P,  --directory-prefix=ПРЕФИКС  снимај датотеке у ПРЕФИКС/...\n"
#~ "       --cut-dirs=БРОЈ             игнориши БРОЈ компоненти имена "
#~ "директоријума.\n"
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
#~ "HTTP избори:\n"
#~ "       --http-user=USER      постави корисничко име на USER.\n"
#~ "       --http-passwd=PASS    постави лозинку на PASS.\n"
#~ "  -C,  --cache=on/off        да ли је дозвољено кеширање (подразумевано: "
#~ "on).\n"
#~ "  -E,  --html-extension      све документе сними са .html екстензијом.\n"
#~ "       --ignore-length       не користи заглавље `Content-Length'.\n"
#~ "       --header=STRING       убаци STRING у заглавља.\n"
#~ "       --proxy-user=USER     стави име USER при пријави заступнику.\n"
#~ "       --proxy-passwd=PASS   стави лозинку PASS при пријави заступнику.\n"
#~ "       --referer=URL         убаци `Referer: URL' заглавље у HTTP "
#~ "захтев.\n"
#~ "  -s,  --save-headers        сними HTTP заглавља у датотеку.\n"
#~ "  -U,  --user-agent=AGENT    пријави се као AGENT уместо Wget/Верзија.\n"
#~ "       --no-http-keep-alive  искључи одржавање HTTP везе (трајне везе).\n"
#~ "       --cookies=off         не користи колачиће.\n"
#~ "       --load-cookies=FILE   учитај колачиће из датотеке FILE пре "
#~ "преноса.\n"
#~ "       --save-cookies=FILE   сними колачиће у FILE после преноса.\n"
#~ "       --post-data=STRING    користи POST методу; шаљи STRING као "
#~ "податке.\n"
#~ "       --post-file=FILE      користи POST методу; шаљи садржај датотеке "
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
#~ "HTTPS (SSL) избори:\n"
#~ "       --sslcertfile=FILE     опциони сертификат за клијента.\n"
#~ "       --sslcertkey=KEYFILE   опциона датотека са кључевима.\n"
#~ "       --egd-file=FILE        име датотеке са EGD утичницом.\n"
#~ "       --sslcadir=DIR         директоријум где се чувају CA.\n"
#~ "       --sslcafile=FILE       датотека са списком CA\n"
#~ "       --sslcerttype=0/1      Тип сертификата 0=PEM (подраз.) / 1=ASN1 "
#~ "(DER)\n"
#~ "       --sslcheckcert=0/1     Провери серверов сертификат уз помоћ CA\n"
#~ "       --sslprotocol=0-3      одабери SSL протокол; 0=аутоматски,\n"
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
#~ "FTP избори:\n"
#~ "  -nr, --dont-remove-listing   не уклањај датотеке `.listing'.\n"
#~ "  -g,  --glob=on/off           укључи или искључи промену имена "
#~ "датотека.\n"
#~ "       --passive-ftp           користи пасивни начин преноса.\n"
#~ "       --retr-symlinks         при рекурзивном спусту, преузимај "
#~ "линковане датотеке (не директоријуме)\n"
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
#~ "Рекурзивни спуст:\n"
#~ "  -r,  --recursive          рекурзивни спуст.\n"
#~ "  -l,  --level=NUMBER       највећа дубина рекурзије (inf или 0 за "
#~ "бесконачну).\n"
#~ "       --delete-after       избриши датотеке у локалу после преузимања.\n"
#~ "  -k,  --convert-links      пребаци релативне везе у апсолутне.\n"
#~ "  -K,  --backup-converted   пре пребацивања направи резервну копију "
#~ "датотеке X са именом X.orig\n"
#~ "  -m,  --mirror             ради исто што и скуп избора -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites    преузми све слике и остало потребно за приказ "
#~ "HTML стране.\n"
#~ "       --strict-comments    укључи стриктну (SGML) обраду HTML-а.\n"
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
#~ "Рекурзивно прихватање и одбијање:\n"
#~ "  -A,  --accept=LIST                списак наставака који се прихватају "
#~ "(раздвојени запетама)\n"
#~ "  -R,  --reject=LIST                списак наставака који се одбијају (р."
#~ "з.)\n"
#~ "  -D,  --domains=LIST               списак домена који се прихватају (р."
#~ "з.)\n"
#~ "       --exclude-domains=LIST       списак домена који се одбијају (р."
#~ "з.)\n"
#~ "       --follow-ftp                 прати FTP везе из HTML докумената.\n"
#~ "       --follow-tags=LIST           списак праћених HTML страна (р.з.)\n"
#~ "  -G,  --ignore-tags=LIST           списак одбијених HTML ознака (р.з.)\n"
#~ "  -H,  --span-hosts                 прелази на друге хостове при спусту\n"
#~ "  -L,  --relative                   прати само релативне везе\n"
#~ "  -I,  --include-directories=LIST   списак дозвољених директоријума\n"
#~ "  -X,  --exclude-directories=LIST   списак нежељених директоријума\n"
#~ "  -np, --no-parent                  не иди у родитељски директоријум\n"
#~ "\n"

#~ msgid "%s: debug support not compiled in.\n"
#~ msgstr "%s: подршка за дебагирање није уграђена.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Покрећем WinHelp %s\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Нема довољно меморије.\n"
