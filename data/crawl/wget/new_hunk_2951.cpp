"Yritet��n uudelleen.\n"
"\n"

#: src/url.c:642
msgid "No error"
msgstr "Ei virhett�"

#: src/url.c:644
msgid "Unsupported scheme"
msgstr "Kaavaa ei tueta"

#: src/url.c:646
msgid "Empty host"
msgstr "Ei koneen nime�"

#: src/url.c:648
msgid "Bad port number"
msgstr "Portin numero ei kelpaa"

#: src/url.c:650
msgid "Invalid user name"
msgstr "Ep�kelpo k�ytt�j�tunnus"

#: src/url.c:652
msgid "Unterminated IPv6 numeric address"
msgstr "P��tt�m�t�n numeerinen IPv6-osoite"

#: src/url.c:654
msgid "IPv6 addresses not supported"
msgstr "IPv6 osoitteita ei tueta"

#: src/url.c:656
msgid "Invalid IPv6 numeric address"
msgstr "Ep�kelpo numeerinen IPv6-osoite"

#. parent, no error
#: src/utils.c:347
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Ohjelman suoritus jatkuu taustalla, pid %d.\n"

#: src/utils.c:391
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "Symbolisen linkin \"%s\" poistaminen ep�onnistui: %s\n"

#: src/xmalloc.c:72
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr "Ei voi muuttaa \"%s\":ta bind-osoitteeksi. Valitaan ANY.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST ep�onnistui; en lyhenn� \"%s\".\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s j�ljell�]"

#~ msgid "Host not found"
#~ msgstr "Palvelinta ei l�ytynyt"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Tiedoston loppu otsakkeita j�sennett�ess�.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Tiedoston noutamisen jatkaminen ep�onnistui, mik� on ristiriidassa \"-c\" "
#~ "vastaan.\n"
#~ "Ei lyhennet� alkuper�ist� tiedostoa \"%s\".\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s j�ljell�)"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "K�ynnistys:\n"
#~ "  -V,  --version                   n�ytt�� Wget:in version ja lopettaa.\n"
#~ "  -h,  --help                      n�ytt�� t�m�n ohjeen.\n"
#~ "  -b,  --background                siirtyy taustalle k�ynnistyksen "
#~ "j�lkeen.\n"
#~ "  -e,  --execute=KOMENTO           suorittaa \".wgetrc\"-tyylisen "
#~ "komennon.\n"
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
#~ "Loki ja sy�tt�tiedostot:\n"
#~ "  -o,  --output-file=TIEDOSTO      kirjoita viestit TIEDOSTOON.\n"
#~ "  -a,  --append-output=TIEDOSTO    lis�� viestit TIEDOSTOON.\n"
#~ "  -d,  --debug                     tulosta vianetsint�tiedot.\n"
#~ "  -q,  --quiet                     hiljainen (ei tulostusta).\n"
#~ "  -v,  --verbose                   ole monisanainen (t�m� on oletus).\n"
#~ "  -nv, --non-verbose               monisanaisuus pois, muttei hiljainen.\n"
#~ "  -i,  --input-file=TIEDOSTO       lataa URLit TIEDOSTOSTA.\n"
#~ "  -F,  --force-html                k�sittele sy�tt�tiedostoa HTML:n�.\n"
#~ "  -B,  --base=URL                  lis�� URLin suht. linkkien alkuun -F -"
#~ "i tiedostoon.\n"
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
#~ "Noutaminen:\n"
#~ "       --bind-address=OSOITE       sido OSOITE (konenimi tai IP) "
#~ "paikalliseen koneeseen.\n"
#~ "  -t,  --tries=M��R�               asettaa yrityskertojen M��R�n (0 on "
#~ "rajaton).\n"
#~ "  -O   --output-document=TIEDOSTO  kirjoita asiakirjat TIEDOSTOON.\n"
#~ "  -nc, --no-clobber                �l� ylikirjoita tiedostoja, �l�k� "
#~ "k�yt� .#-liitteit�.\n"
#~ "  -c,  --continue                  jatka osittain noudetun tiedoston "
#~ "hakemista.\n"
#~ "       --progress=TYYPPI           valitse edistymismittarin tyyppi.\n"
#~ "  -N,  --timestamping              nouda vain paikallista uudemmat "
#~ "tiedostot.\n"
#~ "  -S,  --server-response           tulosta palvelimen vastaus.\n"
#~ "       --spider                    �l� nouda mit��n tiedostoja.\n"
#~ "  -T,  --timeout=SEKUNTIA          aseta lukemisen katkaisuviive.\n"
#~ "  -w,  --wait=SEKUNTIA             odota SEKUNTIA noutojen v�lill�.\n"
#~ "       --waitretry=SEKUNTIA        odota 1...SEKUNTIA noutojen "
#~ "uudelleenyritysten v�lill�.\n"
#~ "       --random-wait               odota 0...2*WAIT sekuntia noutojen "
#~ "v�lill�.\n"
#~ "  -Y,  --proxy=on/off              v�lityspalvelin p��lle tai pois.\n"
#~ "  -Q,  --quota=LUKU                aseta noutokiinti� LUVUN kokoiseksi.\n"
#~ "       --limit-rate=NOPEUS         rajoita noutonopeus NOPEUTEEN.\n"
#~ "       --dns-cache=off             �l� pid� nimipalveluhakuja "
#~ "v�limuistissa.\n"
#~ "       --restrict-file-names=OS    rajoita tiedostonimet "
#~ "k�ytt�j�rjestelm�n sallimiin.\n"
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
#~ "Hakemistot:\n"
#~ "  -nd  --no-directories            �l� luo hakemistoja.\n"
#~ "  -x,  --force-directories         pakotettu hakemistojen luonti.\n"
#~ "  -nH, --no-host-directories       �l� luo konekohtaisia hakemistoja.\n"
#~ "  -P,  --directory-prefix=ETULIITE tallenna tiedostot hakemistoon "
#~ "ETULIITE/...\n"
#~ "       --cut-dirs=LUKU             ohita alusta LUKU kpl hakemistoja.\n"
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
#~ "HTTP-valinnat:\n"
#~ "       --http-user=K�YTT�J�        aseta http-k�ytt�j�ksi K�YTT�J�.\n"
#~ "       --http-passwd=SALASANA      aseta http-salasanaksi SALASANA.\n"
#~ "  -C,  --cache=on/off              salli v�livarastoidun datan k�ytt� "
#~ "(oletus).\n"
#~ "  -E,  --html-extension            tallenna text/html dokumentit .html "
#~ "p��tteisin�.\n"
#~ "       --ignore-length             �l� v�lit� \"Content-Length\"-"
#~ "otsakekent�st�.\n"
#~ "       --header=MERKKIJONO         lis�� MERKKIJONO otsakkeiden sekaan.\n"
#~ "       --proxy-user=K�YTT�J�       aseta v�lityspalvelimen "
#~ "k�ytt�j�nimeksi K�YTT�J�.\n"
#~ "       --proxy-passwd=SALASANA     aseta v�lityspalvelimen salasanaksi "
#~ "SALASANA.\n"
#~ "       --referer=URL               liit� \"Referer: URL\"-otsake http-"
#~ "pyynt��n.\n"
#~ "  -s,  --save-headers              tallenna http-otsakkeet tiedostoon.\n"
#~ "  -U,  --user-agent=AGENTTI        tunnnistaudu Wget/versio sijasta "
#~ "AGENTIKSI.\n"
#~ "       --no-http-keep-alive        �l� salli jatkuvia yhteyksi� (http "
#~ "keep-alive).\n"
#~ "       --cookies=off               �l� k�yt� ev�steit�.\n"
#~ "       --load-cookies=TIEDOSTO     lue ev�steet ennen istuntoa "
#~ "TIEDOSTOSTA.\n"
#~ "       --save-cookies=TIEDOSTO     tallenna ev�steet istunnon j�lkeen "
#~ "TIEDOSTOON.\n"
#~ "       --post-data=MERKKIJONO      k�yt� POST methodia; l�het� MERKKIJONO "
#~ "datana.\n"
#~ "       --post-file=TIEDOSTO        k�yt� POST methodia; l�het� TIEDOSTON "
#~ "sis�lt�.\n"
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
#~ "HTTPS (SSL) -valinnat:\n"
#~ "       --sslcertfile=TIEDOSTO      vapaaehtoinen asiakassertifikaatti.\n"
#~ "       --sslcertkey=AVAINTIEDOSTO  vapaaehtoinen avaintiedosto t�lle "
#~ "sertifikaatille.\n"
#~ "       --egd-file=TIEDOSTO         EGD-pistokkeen tiedostonimi.\n"
#~ "       --sslcadir=DIR              hakemisto minne CA:den tiivistelista "
#~ "on tallennettu.\n"
#~ "       --sslcafile=FILE            tiedosto, jossa on CA kokoelma\n"
#~ "       --sslcerttype=0/1           asiakkaan sertifikaatin tyyppi 0=PEM "
#~ "(oletus) / 1=ASN1 (DER)\n"
#~ "       --sslcheckcert=0/1          tarkista palvelimen sertifikaatti "
#~ "annettua CA:ta vasten\n"
#~ "       --sslprotocol=0-3           valitse SSL-protokolla; "
#~ "0=automaattinen,\n"
#~ "                                   1=SSLv2 2=SSLv3 3=TLSv1\n"
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
#~ "FTP-valinnat:\n"
#~ "  -nr, --dont-remove-listing       �l� poista \".listing\"-tiedostoja.\n"
#~ "  -g,  --glob=on/off               aseta tiedostoniment�ydennys p��lle "
#~ "tai pois.\n"
#~ "       --passive-ftp               k�yt� \"passiivista\" siirtotapaa.\n"
#~ "       --retr-symlinks             rekursiossa: nouda linkitetyt "
#~ "tiedostot (ei hakemistoja).\n"
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
#~ "Rekursiivinen nouto:\n"
#~ "  -r,  --recursive                 rekursiivinen verkkoimu -- k�yt� "
#~ "varoen!\n"
#~ "  -l,  --level=LUKU                rekursiosyvyyden yl�raja (inf tai 0 on "
#~ "��ret�n).\n"
#~ "       --delete-after              poista tiedostot haun j�lkeen.\n"
#~ "  -k,  --convert-links             muuta ei-suhteelliset linkit "
#~ "suhteellisiksi.\n"
#~ "  -K,  --backup-converted          ennen tiedoston X muuttamista, "
#~ "varmuuskopioi X.orig nimell�.\n"
#~ "  -m,  --mirror                    oikopolkuvalinta, yht�kuin -r -N -l "
#~ "inf -nr.\n"
#~ "  -p,  --page-requisites           nouda kaikki kuvat yms. html-sivun "
#~ "n�ytt�miseen tarvittava.\n"
#~ "       --strict-comments           k�yt� HTML-kommenttien tiukkaa (SGML) "
#~ "k�sittely�.\n"
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
#~ "Rekursiivinen hyv�ksynt�/hylk�ys:\n"
#~ "  -A,  --accept=LISTA              lista hyv�ksytyist� p��tteist�.\n"
#~ "  -R,  --reject=LISTA              lista hyl�tyist� p��tteist�.\n"
#~ "  -D,  --domains=LISTA             lista hyv�ksytyist� "
#~ "verkkotunnuksista.\n"
#~ "       --exclude-domains=LISTA     lista hyl�tyist� verkkotunnuksista.\n"
#~ "       --follow-ftp                seuraa ftp-linkkej� html-"
#~ "dokumenteista.\n"
#~ "       --follow-tags=LISTA         lista seurattavista html-tageista.\n"
#~ "  -G,  --ignore-tags=LISTA         lista ohitettavista html-tageista.\n"
#~ "  -H,  --span-hosts                mene eri palvelimille rekursiossa.\n"
#~ "  -L,  --relative                  seuraa vain suhteellisia linkkej�.\n"
#~ "  -I,  --include-directories=LISTA lista hyv�ksytyist� hakemistoista.\n"
#~ "  -X,  --exclude-directories=LISTA lista poissuljetuista hakemistoista.\n"
#~ "  -np, --no-parent                 �l� nouse hakemistorakenteessa.\n"
#~ "\n"

#~ msgid "%s: debug support not compiled in.\n"
#~ msgstr "%s: vianetsint�tukea ei ole k��nnetty mukaan.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "K�ynnistet��n WinHelp %s\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Ei ole tarpeeksi muistia.\n"