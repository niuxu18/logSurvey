 "Re�ncerc.\n"
 "\n"
 
-#: src/url.c:626
+#: src/url.c:621
 msgid "No error"
 msgstr "Eroare necunoscut�"
 
-#: src/url.c:628
+#: src/url.c:623
 msgid "Unsupported scheme"
 msgstr "Schem� nesuportat�"
 
-#: src/url.c:630
+#: src/url.c:625
 msgid "Empty host"
 msgstr "Host vid"
 
-#: src/url.c:632
+#: src/url.c:627
 msgid "Bad port number"
 msgstr "Num�r de port invalid"
 
-#: src/url.c:634
+#: src/url.c:629
 msgid "Invalid user name"
 msgstr "Nume utilizator invalid"
 
-#: src/url.c:636
+#: src/url.c:631
 msgid "Unterminated IPv6 numeric address"
 msgstr "Adres� numeric� IPv6 neterminat�"
 
-#: src/url.c:638
+#: src/url.c:633
 msgid "IPv6 addresses not supported"
 msgstr "Adresele IPv6 nu sunt suportate"
 
-#: src/url.c:640
+#: src/url.c:635
 msgid "Invalid IPv6 numeric address"
 msgstr "Adres� numeric� IPv6 invalid�"
 
+#: src/utils.c:120
+#, c-format
+msgid "%s: %s: Not enough memory.\n"
+msgstr "%s: %s: Memorie plin�.\n"
+
 #. parent, no error
-#: src/utils.c:346
+#: src/utils.c:485
 #, c-format
 msgid "Continuing in background, pid %d.\n"
 msgstr "Continui �n fundal, pid %d.\n"
 
-#: src/utils.c:394
+#: src/utils.c:529
 #, c-format
 msgid "Failed to unlink symlink `%s': %s\n"
 msgstr "Nu am putut scoate(unlink) symlinkul `%s': %s\n"
 
-#: src/xmalloc.c:72
-#, c-format
-msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
-msgstr ""
-
-#~ msgid "Failed to set up an SSL context\n"
-#~ msgstr "S-a e�uat �n setarea contextului SSL\n"
-
-#~ msgid "Failed to load certificates from %s\n"
-#~ msgstr "S-a e�uat �n �nc�rcarea certificatelor din %s\n"
-
-#~ msgid "Trying without the specified certificate\n"
-#~ msgstr "Se �ncearc� f�r� certificatele specificate\n"
-
-#~ msgid "Failed to get certificate key from %s\n"
-#~ msgstr "Nu s-a putut primi codul(key) certificatului de la %s\n"
-
-#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
-#~ msgstr ""
-#~ "Nu am putut converti `%s' �ntr-o adres� bind.  Readucere(reverting) la "
-#~ "ANY.\n"
-
-#~ msgid ""
-#~ "\n"
-#~ "REST failed; will not truncate `%s'.\n"
-#~ msgstr ""
-#~ "\n"
-#~ "REST e�uat; nu se va trunchia `%s'.\n"
-
-#~ msgid " [%s to go]"
-#~ msgstr " [%s r�ma�i]"
-
-#~ msgid "Host not found"
-#~ msgstr "Host neg�sit"
-
-#~ msgid "End of file while parsing headers.\n"
-#~ msgstr "Sf�r�it fi�ier la analiza headerelor.\n"
-
-#~ msgid ""
-#~ "\n"
-#~ "Continued download failed on this file, which conflicts with `-c'.\n"
-#~ "Refusing to truncate existing file `%s'.\n"
-#~ "\n"
-#~ msgstr ""
-#~ "\n"
-#~ "Continuarea downloadului a e�uat la acest fi�ier, ceea ce intr� �n \n"
-#~ "conflict cu `-c'.\n"
-#~ "Se refuz� trunchierea fi�ierului `%s' existent. \n"
-#~ "\n"
-
-#~ msgid " (%s to go)"
-#~ msgstr " (%s r�ma�i)"
-
-#~ msgid ""
-#~ "Startup:\n"
-#~ "  -V,  --version           display the version of Wget and exit.\n"
-#~ "  -h,  --help              print this help.\n"
-#~ "  -b,  --background        go to background after startup.\n"
-#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
-#~ "\n"
-#~ msgstr ""
-#~ "De start:\n"
-#~ "  -V,  --version\t\t    afi�eaz� versiunea Wget �i iese.\n"
-#~ "  -h,  --help\t\t\t    tip�re�te acest help.\n"
-#~ "  -b,  --background\t\trulare �n fundal dupa startare.\n"
-#~ "  -e,  --execute=COMAND�\texecut� o comand� �n stilul `.wgetrc'.\n"
-#~ "\n"
-
-#~ msgid ""
-#~ "Logging and input file:\n"
-#~ "  -o,  --output-file=FILE     log messages to FILE.\n"
-#~ "  -a,  --append-output=FILE   append messages to FILE.\n"
-#~ "  -d,  --debug                print debug output.\n"
-#~ "  -q,  --quiet                quiet (no output).\n"
-#~ "  -v,  --verbose              be verbose (this is the default).\n"
-#~ "  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
-#~ "  -i,  --input-file=FILE      download URLs found in FILE.\n"
-#~ "  -F,  --force-html           treat input file as HTML.\n"
-#~ "  -B,  --base=URL             prepends URL to relative links in -F -i "
-#~ "file.\n"
-#~ "\n"
-#~ msgstr ""
-#~ "Log�ri �i fi�iere de intrare:\n"
-#~ "  -o,  --output-file=FI�IER\tlogare mesaje �n FI�IER.\n"
-#~ "  -a,  --append-output=FI�IER\tad�ugare mesaje �n FI�IER.\n"
-#~ "  -d,  --debug\t\t\t        tip�rire output debug.\n"
-#~ "  -q,  --quiet\t\t\t        silen�ios (f�r� output).\n"
-#~ "  -v,  --verbose\t\t        detaliat (este implicit).\n"
-#~ "  -nv, --non-verbose\t\t    nedetaliat, f�r� a fi silen�ios.\n"
-#~ "  -i,  --input-file=FI�IER\t    download de URL-uri g�site �n FI�IER.\n"
-#~ "  -F,  --force-html\t\t    consider� fi�ierul de intrare ca HTML.\n"
-#~ "  -B,  --base=URL\t            prefixare URL la linkuri relative �n -F -i "
-#~ "fi�ier.\n"
-#~ "\n"
-
-#~ msgid ""
-#~ "Download:\n"
-#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
-#~ "unlimits).\n"
-#~ "       --retry-connrefused      retry even if connection is refused.\n"
-#~ "  -O   --output-document=FILE   write documents to FILE.\n"
-#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
-#~ "suffixes.\n"
-#~ "  -c,  --continue               resume getting a partially-downloaded "
-#~ "file.\n"
-#~ "       --progress=TYPE          select progress gauge type.\n"
-#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
-#~ "local.\n"
-#~ "  -S,  --server-response        print server response.\n"
-#~ "       --spider                 don't download anything.\n"
-#~ "  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
-#~ "       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
-#~ "       --connect-timeout=SECS   set the connect timeout to SECS.\n"
-#~ "       --read-timeout=SECS      set the read timeout to SECS.\n"
-#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
-#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
-#~ "retrieval.\n"
-#~ "       --random-wait            wait from 0...2*WAIT secs between "
-#~ "retrievals.\n"
-#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
-#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
-#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
-#~ "host.\n"
-#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
-#~ "       --dns-cache=off          disable caching DNS lookups.\n"
-#~ "       --restrict-file-names=OS restrict chars in file names to ones OS "
-#~ "allows.\n"
-#~ "\n"
-#~ msgstr ""
-#~ "Download:\n"
-#~ "  -t,\t--tries=NUM�R\t\tseteaz� num�rul de �ncerc�ri ca NUM�R (0 este "
-#~ "nelimitat\n"
-#~ "       --retry-connrefused      re�ncearc� �i �n cazul �n care conexiunea "
-#~ "este refuzat�.\n"
-#~ "  -O,\t--output-document=FI�IER \tscrie documentele �n FI�IER.\n"
-#~ "  -nc, --no-clobber\t\tnu sec�iona fi�ierele existente sau utilizeaz�  "
-#~ "sufixe .#\n"
-#~ "  -c,  --continue\t\t    continu� s� iei un fi�ier downloadat par�ial.\n"
-#~ "\t--progress=TIP\t\t    selecteaz� mod m�surare desfa�urare download.\n"
-#~ "  -N,  --timestamping\t\tnu aduce fi�ierele dac� nu sunt mai noi dec�t "
-#~ "cele locale.\n"
-#~ "  -S,  --server-response\ttip�re�te r�spunsul serverului.\n"
-#~ "       --spider\t\t    nu desc�rca nimic.\n"
-#~ "  -T,  --timeout=SECUNDE\ta�teapt� 1...SECUNDE �ntre re�ncerc�rile de "
-#~ "aducere.\n"
-#~ "       --dns-timeout=SECUNDE       setare expirare c�utare DNS la "
-#~ "SECUNDE.\n"
-#~ "       --connect-timeout=SECUNDE   setare expirare conectare la.SECUNDE\n"
-#~ "       --read-timeout=SECUNDE      setare expirare citire la SECUNDE.\n"
-#~ "  -w,  --wait=SECUNDE           a�teapt� SECUNDE �ntre aduceri.\n"
-#~ "       --waitretry=SECUNDE      a�teapt� 1...SECUNDE �ntre �ncerc�rile de "
-#~ "aducere.\n"
-#~ "       --random-wait            a�teapt� �ntre 0...2*WAIT secunde �ntre  "
-#~ "aduceri.\n"
-#~ "  -Y,  --proxy=on/off\t\tactiveaz� (on) sau dezactiveaz�(off) proxy.\n"
-#~ "  -Q,  --quota=NUM�R\t\tseteaz� cot� de desc�rcare la NUM�R.\n"
-#~ "\t--limit-rate=RAT�\t    limiteaz� rat� desc�rcare la RAT�.\n"
-#~ "       --dns-cache=off          dezactiveaz� cachingul de c�ut�ri DNS.\n"
-#~ "       --restrict-file-names=OS restric�ioneaz� caracterele din numele "
-#~ "fi�ierul la cele pe care le permite sistemul de operare.n\n"
-
-#~ msgid ""
-#~ "Directories:\n"
-#~ "  -nd, --no-directories            don't create directories.\n"
-#~ "  -x,  --force-directories         force creation of directories.\n"
-#~ "  -nH, --no-host-directories       don't create host directories.\n"
-#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
-#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
-#~ "components.\n"
-#~ "\n"
-#~ msgstr ""
-#~ "Directoare:\n"
-#~ "  -nd  --no-directories            nu crea directoare.\n"
-#~ "  -x,  --force-directories         for�eaz� crearea directoarelor.\n"
-#~ "  -nH, --no-host-directories       nu crea directoare gazd�.\n"
-#~ "  -P,  --directory-prefix=PREFIX   salveaz� fi�ierele �n PREFIX/...\n"
-#~ "       --cut-dirs=NUM�R            Ignor� NUM�R componente director "
-#~ "remote.\n"
-#~ "\n"
-
-#~ msgid ""
-#~ "HTTP options:\n"
-#~ "       --http-user=USER      set http user to USER.\n"
-#~ "       --http-passwd=PASS    set http password to PASS.\n"
-#~ "  -C,  --cache=on/off        (dis)allow server-cached data (normally "
-#~ "allowed).\n"
-#~ "  -E,  --html-extension      save all text/html documents with .html "
-#~ "extension.\n"
-#~ "       --ignore-length       ignore `Content-Length' header field.\n"
-#~ "       --header=STRING       insert STRING among the headers.\n"
-#~ "       --proxy-user=USER     set USER as proxy username.\n"
-#~ "       --proxy-passwd=PASS   set PASS as proxy password.\n"
-#~ "       --referer=URL         include `Referer: URL' header in HTTP "
-#~ "request.\n"
-#~ "  -s,  --save-headers        save the HTTP headers to file.\n"
-#~ "  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
-#~ "       --no-http-keep-alive  disable HTTP keep-alive (persistent "
-#~ "connections).\n"
-#~ "       --cookies=off         don't use cookies.\n"
-#~ "       --load-cookies=FILE   load cookies from FILE before session.\n"
-#~ "       --save-cookies=FILE   save cookies to FILE after session.\n"
-#~ "       --post-data=STRING    use the POST method; send STRING as the "
-#~ "data.\n"
-#~ "       --post-file=FILE      use the POST method; send contents of FILE.\n"
-#~ "\n"
-#~ msgstr ""
-#~ "Op�iuni HTTP:\n"
-#~ "       --http-user=USER      seteaz� userul http ca USER.\n"
-#~ "       --http-passwd=PASS    seteaz� parola http ca PASS.\n"
-#~ "  -C,  --cache=on/off        (nu)permite date server-cached (�n mod "
-#~ "normal permis).\n"
-#~ "  -E,  --html-extension      salveaz� toate documentele text/html cu "
-#~ "extensie .html.\n"
-#~ "       --ignore-length       ignor� c�mpul header `Content-Length'.\n"
-#~ "       --header=�IR          insereaz� �IR �n headere.\n"
-#~ "       --proxy-user=USER     seteaz� USER drept nume utilizator proxy.\n"
-#~ "       --proxy-passwd=PASS   seteaz� PASS drept parol� proxy.\n"
-#~ "       --referer=URL         include headerul `Referer: URL' �n cererea "
-#~ "HTTP.\n"
-#~ "  -s,  --save-headers        salveaz� headerele HTTP �n fi�ier.\n"
-#~ "  -U,  --user-agent=AGENT    identificare ca AGENT �n loc de Wget/"
-#~ "VERSIUNE.\n"
-#~ "       --no-http-keep-alive  dezactiveaz� HTTP keep-alive (conexiuni "
-#~ "persistente).\n"
-#~ "       --cookies=off         nu utiliza cookies.\n"
-#~ "       --load-cookies=FI�IER �nc�rc� cookies din FI�IER �nainte de "
-#~ "sesiune.\n"
-#~ "       --save-cookies=FI�IER salveaz� cookies �n FI�IER dup� sesiune.\n"
-#~ "       --post-data=�IR    folose�te metoda POST; trimite �IR ca �i date.\n"
-#~ "       --post-file=FI�IER      folose�te metoda POST; trimite con�inutul "
-#~ "FI�IERului\n"
-#~ "\n"
-
-#~ msgid ""
-#~ "HTTPS (SSL) options:\n"
-#~ "       --sslcertfile=FILE     optional client certificate.\n"
-#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
-#~ "       --egd-file=FILE        file name of the EGD socket.\n"
-#~ "       --sslcadir=DIR         dir where hash list of CA's are stored.\n"
-#~ "       --sslcafile=FILE       file with bundle of CA's\n"
-#~ "       --sslcerttype=0/1      Client-Cert type 0=PEM (default) / 1=ASN1 "
-#~ "(DER)\n"
-#~ "       --sslcheckcert=0/1     Check the server cert agenst given CA\n"
-#~ "       --sslprotocol=0-3      choose SSL protocol; 0=automatic,\n"
-#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
-#~ "\n"
-#~ msgstr ""
-#~ "Op�iuni HTTPS (SSL):\n"
-#~ "       --sslcertfile=FI�IER     certificat client op�ional.\n"
-#~ "       --sslcertkey=FI�IER_CHEIE   fi�ier_cheie op�ional pentru acest "
-#~ "certificat.\n"
-#~ "       --egd-file=FI�IER        nume fi�ier al socketului EGD.\n"
-#~ "       --sslcadir=DIR         directorul unde este stocat� lista de CA-"
-#~ "uri.\n"
-#~ "       --sslcafile=FI�IER       fi�ierul cu gr�mada(bundle) de CA-uri\n"
-#~ "       --sslcerttype=0/1      Tip Cert-Client=PEM (implicit) / 1=ASN1 "
-#~ "(DER)\n"
-#~ "       --sslcheckcert=0/1     Verificarea serverului pentru CA-urile "
-#~ "furnizate\n"
-#~ "       --sslprotocol=0-3      verificare protocol SSL; 0=automat,\n"
-#~ "                              1=SSLv2 2=SSLv3 3=TLSv1\n"
-#~ "\n"
-
-#~ msgid ""
-#~ "FTP options:\n"
-#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
-#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
-#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
-#~ "       --retr-symlinks         when recursing, get linked-to files (not "
-#~ "dirs).\n"
-#~ "\n"
-#~ msgstr ""
-#~ "Op�iuni FTP:\n"
-#~ "  -nr, --dont-remove-listing   nu �terge fi�ierele `.listing'.\n"
-#~ "  -g,  --glob=on/off           activare/dezactivare nume globale.\n"
-#~ "       --passive-ftp           utilizeaz� modul de transfer \"pasiv\".\n"
-#~ "       --retr-symlinks         �n recursiune, adu fi�ierele linkuite (nu "
-#~ "directoarele).\n"
-#~ "\n"
-
-#~ msgid ""
-#~ "Recursive retrieval:\n"
-#~ "  -r,  --recursive          recursive download.\n"
-#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
-#~ "infinite).\n"
-#~ "       --delete-after       delete files locally after downloading them.\n"
-#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
-#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
-#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
-#~ "nr.\n"
-#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
-#~ "page.\n"
-#~ "       --strict-comments    turn on strict (SGML) handling of HTML "
-#~ "comments.\n"
-#~ "\n"
-#~ msgstr ""
-#~ "Aducere recursiv�:\n"
-#~ "  -r,  --recursive          absorbire web recursiv� -- folosi�i cu "
-#~ "aten�ie!\n"
-#~ "  -l,  --level=NUM�R       ad�ncime recursiune maxim� (inf sau 0 pentru "
-#~ "infinit�).\n"
-#~ "       --delete-after       �terge fi�ierele locale dupa desc�rcare.\n"
-#~ "  -k,  --convert-links      converte�te linkuri non-relative �n "
-#~ "relative.\n"
-#~ "  -K,  --backup-converted   �nainte de a converti fi�ierul X, back-up ca "
-#~ "X.orig.\n"
-#~ "  -m,  --mirror             op�iune scurt� echivalent� cu -r -N -l inf -"
-#~ "nr.\n"
-#~ "  -p,  --page-requisites    aducere toate imaginile, etc. necesare pentru "
-#~ "afi�area paginii HTML.\n"
-#~ "       --strict-comments    activeaz� manipularea strict� (SGML) a "
-#~ "comentariilorHTML.\n"
-#~ "\n"
-
-#~ msgid ""
-#~ "Recursive accept/reject:\n"
-#~ "  -A,  --accept=LIST                comma-separated list of accepted "
-#~ "extensions.\n"
-#~ "  -R,  --reject=LIST                comma-separated list of rejected "
-#~ "extensions.\n"
-#~ "  -D,  --domains=LIST               comma-separated list of accepted "
-#~ "domains.\n"
-#~ "       --exclude-domains=LIST       comma-separated list of rejected "
-#~ "domains.\n"
-#~ "       --follow-ftp                 follow FTP links from HTML "
-#~ "documents.\n"
-#~ "       --follow-tags=LIST           comma-separated list of followed HTML "
-#~ "tags.\n"
-#~ "  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML "
-#~ "tags.\n"
-#~ "  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
-#~ "  -L,  --relative                   follow relative links only.\n"
-#~ "  -I,  --include-directories=LIST   list of allowed directories.\n"
-#~ "  -X,  --exclude-directories=LIST   list of excluded directories.\n"
-#~ "  -np, --no-parent                  don't ascend to the parent "
-#~ "directory.\n"
-#~ "\n"
-#~ msgstr ""
-#~ "Acceptare/refuz recursive:\n"
-#~ "  -A,  --accept=LIST�             list� separat� prin virgule a "
-#~ "extensiilor acceptate.\n"
-#~ "  -R,  --reject=LIST�             list� separat� prin virgule a "
-#~ "extensiilor refuzate.\n"
-#~ "  -D,  --domains=LIST�            list� separat� prin virgule a "
-#~ "domeniilor acceptate.\n"
-#~ "       --exclude-domains=LIST�    list� separat� prin virgule a "
-#~ "domeniilor refuzate.\n"
-#~ "       --follow-ftp               urmeaz� leg�turile FTP din documente "
-#~ "HTML.\n"
-#~ "       --follow-tags=LIST�        list� separat� prin virgule a tagurilor "
-#~ "HTML urmate.\n"
-#~ "  -G,  --ignore-tags=LIST�        list� separat� prin virgule a tagurilor "
-#~ "HTML ignorate.\n"
-#~ "  -H,  --span-hosts                 viziteaz� �i site-uri str�ine �n "
-#~ "recursiune.\n"
-#~ "  -L,  --relative                   urmeaz� doar linkurile relative.\n"
-#~ "  -I,  --include-directories=LIST�  list� directoare permise.\n"
-#~ "  -X,  --exclude-directories=LIST�  list� directoare excluse.\n"
-#~ "  -np, --no-parent                  nu urca la directorul p�rinte.\n"
-#~ "\n"
-
-#~ msgid "%s: debug support not compiled in.\n"
-#~ msgstr "%s: suport de debug necompilat.\n"
-
-#~ msgid "Starting WinHelp %s\n"
-#~ msgstr "Startare WinHelp %s\n"
-
-#~ msgid "%s: %s: Not enough memory.\n"
-#~ msgstr "%s: %s: Memorie plin�.\n"
-
 #~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
 #~ msgstr "Eroare de sintax� �n Set-Cookie la caracterul `%c'.\n"
 
+#~ msgid "%s: BUG: unknown command `%s', value `%s'.\n"
+#~ msgstr "%s: BUG: comand� necunoscut� `%s', valoare `%s'.\n"
+
 #~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
 #~ msgstr "%s: %s: Nu se poate converti `%s' �n adres� IP.\n"
 
