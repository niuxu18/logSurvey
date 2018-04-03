"F�rs�ker igen.\n"
"\n"

#: src/url.c:626
msgid "No error"
msgstr "Inget fel"

#: src/url.c:628
msgid "Unsupported scheme"
msgstr "Schemat st�ds inte"

#: src/url.c:630
msgid "Empty host"
msgstr "Tom v�rd"

#: src/url.c:632
msgid "Bad port number"
msgstr "Felaktigt portnummer"

#: src/url.c:634
msgid "Invalid user name"
msgstr "Ogiltigt anv�ndarnamn"

#: src/url.c:636
msgid "Unterminated IPv6 numeric address"
msgstr "Oavslutad numerisk IPv6-adress"

#: src/url.c:638
msgid "IPv6 addresses not supported"
msgstr "IPv6-adresser st�ds inte"

#: src/url.c:640
msgid "Invalid IPv6 numeric address"
msgstr "Ogiltig numerisk IPv6-adress"

#. parent, no error
#: src/utils.c:346
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Forts�tter i bakgrunden, pid %d.\n"

#: src/utils.c:394
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "Misslyckades med att ta bort symboliska l�nken \"%s\": %s\n"

#: src/xmalloc.c:72
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "Misslyckades med att st�lla in ett SSL-sammanhang\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "Misslyckades med att l�sa in certifikat fr�n %s\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "F�rs�ker utan det angivna certifikatet\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "Misslyckades med att f� tag i certifikatnyckel fr�n %s\n"

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr "Kan inte konvertera \"%s\" till en bind-adress. �terg�r till ANY.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST misslyckades, kommer inte att klippa \"%s\".\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s kvar]"

#~ msgid "Host not found"
#~ msgstr "Servern kunde inte hittas"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Filslut vid genoms�kning av huvuden.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "�terupptagen h�mtning av denna fil misslyckades, vilket �r i konflikt\n"
#~ "med \"-c\".\n"
#~ "V�grar att klippa existerande filen \"%s\".\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s kvar)"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Uppstart:\n"
#~ "  -V,  --version            visa versionsinformation f�r Wget och "
#~ "avsluta.\n"
#~ "  -h,  --help               visa denna hj�lptext.\n"
#~ "  -b,  --background         g� till bakgrunden efter uppstart.\n"
#~ "  -e,  --execute=KOMMANDO   utf�r ett kommando av \".wgetrc\"-typ.\n"
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
#~ "Loggning och infil:\n"
#~ "  -o,  --output-file=FIL        logga meddelanden till FIL.\n"
#~ "  -a,  --append-output=FIL      l�gg till meddelanden till FIL.\n"
#~ "  -d,  --debug                  skriv ut fels�kningsmeddelanden.\n"
#~ "  -q,  --quiet                  tyst (inga utskrifter).\n"
#~ "  -v,  --verbose                var utf�rlig (detta �r standard).\n"
#~ "  -nv, --non-verbose            st�ng av utf�rlighet, utan att vara "
#~ "tyst.\n"
#~ "  -i,  --input-file=FIL         h�mta URL:er som finns i FIL.\n"
#~ "  -F,  --force-html             behandla indatafil som HTML.\n"
#~ "  -B,  --base=URL               l�gger till URL till relativa l�nkar vid\n"
#~ "                                -F -i fil.\n"
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
#~ "H�mtning:\n"
#~ "  -t,  --tries=ANTAL            s�tt antal f�rs�k till ANTAL "
#~ "(0=obegr�nsat).\n"
#~ "       --retry-connrefused      f�rs�k igen �ven om anslutning nekas.\n"
#~ "  -O   --output-document=FIL    skriv dokument till FIL.\n"
#~ "  -nc, --no-clobber             skriv inte �ver existerande filer eller\n"
#~ "                                anv�nd .#-suffix.\n"
#~ "  -c,  --continue               �teruppta h�mtningen av en delvis h�mtad "
#~ "fil.\n"
#~ "       --progress=TYP           v�lj typ av f�rloppsm�tare.\n"
#~ "  -N,  --timestamping           h�mta inte om filer om de inte �r nyare "
#~ "�n\n"
#~ "                                de lokala.\n"
#~ "  -S,  --server-response        visa serversvar.\n"
#~ "       --spider                 h�mta inte n�got.\n"
#~ "  -T,  --timeout=SEKUNDER       s�tt alla tidsgr�nser till SEKUNDER.\n"
#~ "       --dns-timeout=SEKUNDER   s�tt tidsgr�ns f�r DNS-uppslagning till\n"
#~ "                                SEKUNDER.\n"
#~ "       --connect-timeout=SEK    s�tt tidsgr�ns f�r anslutning till SEK.\n"
#~ "       --read-timeout=SEKUNDER  s�tt tidsgr�ns f�r l�sning till "
#~ "SEKUNDER.\n"
#~ "  -w,  --wait=SEKUNDER          v�nta SEKUNDER mellan h�mtningar.\n"
#~ "       --waitretry=SEKUNDER     v�nta 1...SEKUNDER mellan "
#~ "h�mtningsf�rs�k.\n"
#~ "       --random-wait            v�nta fr�n 0...2*V�NTA sekunder mellan\n"
#~ "                                h�mtningar.\n"
#~ "  -Y,  --proxy=on/off           s�tt proxy till p� (on) eller av (off).\n"
#~ "  -Q,  --quota=ANTAL            s�tt gr�ns f�r h�mtning till ANTAL.\n"
#~ "       --bind-address=ADRESS    bind till ADRESS (v�rdnamn eller IP) p�\n"
#~ "                                lokala v�rden.\n"
#~ "       --limit-rate=HASTIGHET   begr�nsa h�mtningshastighet till "
#~ "HASTIGHET.\n"
#~ "\n"
#~ "       --dns-cache=off          inaktivera cachande av DNS-"
#~ "uppslagningar.\n"
#~ "       --restrict-file-names=OS begr�nsa tecken i filnamn till de som\n"
#~ "                                operativsystemet till�ter.\n"

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
#~ "Kataloger:\n"
#~ "  -nd, --no-directories            skapa inte kataloger.\n"
#~ "  -x,  --force-directories         tvinga skapande av kataloger.\n"
#~ "  -nH, --no-host-directories       skapa inte v�rddatorkataloger.\n"
#~ "  -P,  --directory-prefix=PREFIX   spara filer till PREFIX/...\n"
#~ "       --cut-dirs=ANTAL            ignorera ANTAL "
#~ "fj�rrkatalogkomponenter.\n"
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
#~ "HTTP-flaggor:\n"
#~ "       --http-user=ANV�NDARE     s�tt http-anv�ndare till ANV�NDARE.\n"
#~ "       --http-passwd=L�SENORD    s�tt http-l�senord till L�SENORD.\n"
#~ "  -C,  --cache=on/off            till�t/till�t inte server-cachad data\n"
#~ "                                 (normalt till�tet).\n"
#~ "  -E,  --html-extension          spara alla text/html-dokument med "
#~ "�ndelsen\n"
#~ "                                 .html.\n"
#~ "       --ignore-length           ignorera \"Content-Length\"-f�lt i "
#~ "huvuden.\n"
#~ "       --header=STR�NG           s�tt in STR�NG bland huvudena.\n"
#~ "       --proxy-user=ANV�NDARE    s�tt ANV�NDARE som anv�ndarnamn f�r\n"
#~ "                                 proxyserver.\n"
#~ "       --proxy-passwd=L�SENORD   s�tt L�SENORD som l�senord f�r "
#~ "proxyserver.\n"
#~ "       --referer=URL             inkludera \"Referer: URL\"-huvud i\n"
#~ "                                 HTTP-beg�ran.\n"
#~ "  -s,  --save-headers            spara HTTP-huvudena till fil.\n"
#~ "  -U,  --user-agent=AGENT        identifiera som AGENT ist�llet f�r\n"
#~ "                                 Wget/VERSION.\n"
#~ "       --no-http-keep-alive      anv�nd inte \"HTTP-keepalive"
#~ "\" (best�ndiga\n"
#~ "                                 anslutningar).\n"
#~ "       --cookies=off             anv�nd inte kakor.\n"
#~ "       --load-cookies=FIL        l�s in kakor fr�n FIL innan sessionen.\n"
#~ "       --save-cookies=FIL        spara kakor till FIL efter sessionen.\n"
#~ "       --post-data=STR�NG        anv�nd POST-metoden; skicka STR�NG som "
#~ "data.\n"
#~ "       --post-file=FIL           anv�nd POST-metoden; skicka inneh�llet i "
#~ "FIL.\n"
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
#~ "HTTPS-flaggor (SSL-flaggor):\n"
#~ "       --sslcertfile=FIL        frivilligt klientcertifikat.\n"
#~ "       --sslcertkey=NYCKELFIL   frivillig nyckelfil f�r detta "
#~ "certifikat.\n"
#~ "       --egd-file=FIL           filnamn p� EGD-uttaget.\n"
#~ "       --sslcadir=KATALOG       katalog d�r hash-list med CA:er lagras.\n"
#~ "       --sslcafile=FIL          fil med CA-samling\n"
#~ "       --sslcerttype=0/1        klientcertifikattyp 0=PEM (standard) / "
#~ "1=ASN1 (DER)\n"
#~ "       --sslcheckcert=0/1       kontrollera servercertifikatet mot "
#~ "angiven CA\n"
#~ "       --sslprotocol=0-3        v�lj SSL-protokoll; 0=automatiskt,\n"
#~ "                                1=SSLv2 2=SSLv3 3=TLSv1\n"
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
#~ "FTP-flaggor:\n"
#~ "  -nr, --dont-remove-listing   ta inte bort \".listing\"-filer.\n"
#~ "  -g,  --glob=on/off           s�tt p�/st�ng av filnamnsmatchning.\n"
#~ "       --passive-ftp           anv�nd \"passiv\" �verf�ring.\n"
#~ "       --retr-symlinks         h�mta l�nkade filer (inte kataloger) vid\n"
#~ "                               rekursion.\n"
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
#~ "Rekursiv h�mtning:\n"
#~ "  -r,  --recursive             rekursiv h�mtning.\n"
#~ "  -l,  --level=ANTAL           maximalt rekursionsdjup (inf eller 0 f�r\n"
#~ "                               obegr�nsat).\n"
#~ "       --delete-after          ta bort filer lokalt efter h�mtning.\n"
#~ "  -k,  --convert-links         konvertera absoluta l�nkar till relativa.\n"
#~ "  -K,  --backup-converted      s�kerhetskopiera som X.orig innan\n"
#~ "                               konvertering av filen X.\n"
#~ "  -m,  --mirror                genv�gsflagga som motsvarar -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites       h�mta alla bilder osv som beh�vs f�r "
#~ "visning\n"
#~ "                               av HTML-sida.\n"
#~ "       --strict-comments       sl� p� strikt (SGML) hantering av HTML-\n"
#~ "                               kommentarer.\n"
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
#~ "Till�telser vid rekursiv h�mtning:\n"
#~ "  -A,  --accept=LISTA                kommaseparerad lista med till�tna\n"
#~ "                                     �ndelser.\n"
#~ "  -R,  --reject=LISTA                kommaseparerad lista med otill�tna\n"
#~ "                                     �ndelser.\n"
#~ "  -D,  --domains=LISTA               kommaseparerad lista med till�tna "
#~ "dom�ner.\n"
#~ "       --exclude-domains=LISTA       kommaseparerad lista med otill�tna\n"
#~ "                                     dom�ner.\n"
#~ "       --follow-ftp                  f�lj FTP-l�nkar fr�n HTML-dokument.\n"
#~ "       --follow-tags=LISTA           kommaseparerad lista med HTML-"
#~ "taggar\n"
#~ "                                     som f�ljs.\n"
#~ "  -G,  --ignore-tags=LISTA           kommaseparerad lista med ignorerade\n"
#~ "                                     HTML-taggar.\n"
#~ "  -H,  --span-hosts                  g� till fr�mmande v�rdar i rekursivt "
#~ "l�ge.\n"
#~ "  -L,  --relative                    f�lj endast relativa l�nkar.\n"
#~ "  -I,  --include-directories=LISTA   lista med till�tna kataloger.\n"
#~ "  -X,  --exclude-directories=LISTA   lista med uteslutna kataloger.\n"
#~ "  -np, --no-parent                   g� inte upp till f�r�lderkatalog.\n"
#~ "\n"

#~ msgid "%s: debug support not compiled in.\n"
#~ msgstr "%s: st�d f�r fels�kningsinformation �r inte inkompilerat.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Startar WinHelp %s\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Inte tillr�ckligt med minne.\n"

#~ msgid "Resolving %s..."
#~ msgstr "Sl�r upp %s..."

