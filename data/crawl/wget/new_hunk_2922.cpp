"S'està reintentant.\n"
"\n"

#: src/url.c:642
msgid "No error"
msgstr "Cap error"

#: src/url.c:644
msgid "Unsupported scheme"
msgstr "Sistema no suportat"

#: src/url.c:646
msgid "Empty host"
msgstr "Host no especificat"

#: src/url.c:648
msgid "Bad port number"
msgstr "Nombre de port incorrecte"

#: src/url.c:650
msgid "Invalid user name"
msgstr "Nom d'usuari no vàlid"

#: src/url.c:652
msgid "Unterminated IPv6 numeric address"
msgstr "Adreça numèrica IPv6 no acabada"

#: src/url.c:654
msgid "IPv6 addresses not supported"
msgstr "Les adreces IPv6 no estan suportades"

#: src/url.c:656
msgid "Invalid IPv6 numeric address"
msgstr "Adreça numèrica IPv6 no vàlida"

#. parent, no error
#: src/utils.c:347
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Es continua en segon terme, pid %d.\n"

#: src/utils.c:391
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "No s'ha pogut eliminar l'enllaç simbòlic `%s': %s\n"

#: src/xmalloc.c:72
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr ""
#~ "No s'ha pogut convertir `%s' en una adreça vàlida. S'utilitza `ANY'.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST ha fallat; `%s' no es truncarà.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s per acabar]"

#~ msgid "Host not found"
#~ msgstr "No s'ha trobat el host"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Final de fitxer mentre s'analitzaven les capçaleres.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "No s'ha pogut continuar la descàrrega d'aquest fitxer, això no és "
#~ "compatible amb «-c».\n"
#~ "El fitxer existent `%s' no es sobreescriurà.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s per acabar)"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Inici:\n"
#~ "  -V,  --version           mostra la versió del Wget i surt.\n"
#~ "  -h,  --help              mostra aquesta ajuda.\n"
#~ "  -b,  --background        execució en segon terme.\n"
#~ "  -e,  --execute=ORDRE     executa una ordre de l'estil `.wgetrc'.\n"
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
#~ "Registre i fitxer d'entrada:\n"
#~ "  -o,  --output-file=FITXER   desa els missatges del programa a FITXER.\n"
#~ "  -a,  --append-output=FITXER afegeix els missatges a FITXER.\n"
#~ "  -d,  --debug                mostra informació de depuració.\n"
#~ "  -q,  --quiet                mode silenciós (cap missatge).\n"
#~ "  -v,  --verbose              mode loquaç (per omissió).\n"
#~ "  -nv, --non-verbose          mode no loquaç, però tampoc del tot "
#~ "silenciós.\n"
#~ "  -i,  --input-file=FITXER    llegeix els enllaços de FITXER.\n"
#~ "  -F,  --force-html           tracta el fitxer d'entrada com a HTML.\n"
#~ "  -B,  --base=URL             afegeix el prefix URL a tots els enllaços\n"
#~ "                              relatius del fitxer d'entrada.\n"

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
#~ "Descàrrega:\n"
#~ "  -t,  --tries=NOMBRE           estableix el nombre de reintents (0=sense "
#~ "limit).\n"
#~ "       --retry-connrefused      reintenta encara que es refusi la "
#~ "connexió.\n"
#~ "  -O,  --output-document=FITXER escriu els documents a FITXER.\n"
#~ "  -nc, --no-clobber             no descarrega fitxers ja existents.\n"
#~ "  -c,  -­continue               continua una descàrrega interrompuda.\n"
#~ "       --progress=TIPUS         selecciona el tipus d'indicador de "
#~ "progressió.\n"
#~ "  -N,  --timestamping           només descarrega fitxers més nous que "
#~ "els\n"
#~ "                                locals.\n"
#~ "  -S,  --server-response        mostra les respostes del servidor.\n"
#~ "       --spider                 no descarrega.\n"
#~ "  -T,  --timeout=SEGONS         estableix tots els temps d'espera en "
#~ "SEGONS.\n"
#~ "       --dns-timeout=SEGONS     estableix el temps d'espera de DNS en "
#~ "SEGONS.\n"
#~ "       --connect-timeout=SEGONS estableix el temps d'espera de connexió "
#~ "en\n"
#~ "                                SEGONS.\n"
#~ "       --read-timeout=SEGONS    estableix el temps d'espera de lectura "
#~ "en\n"
#~ "                                SEGONS.\n"
#~ "  -w,  --wait=SEGONS            pausa entre descàrregues de SEGONS.\n"
#~ "       --waitretry=SEGONS       pausa entre intents de descàrrega de\n"
#~ "                                1...SEGONS.\n"
#~ "       --random-wait            pausa de 0...2*PAUSA segons entre "
#~ "descàrregues.\n"
#~ "  -Y,  --proxy=on/off           habilita o deshabilita l'ús de proxy.\n"
#~ "  -Q,  --quota=NOMBRE           estableix la quota de descàrrega en "
#~ "NOMBRE.\n"
#~ "       --bind-address=ADREÇA    usa l'adreça local ADREÇA\n"
#~ "       --limit-rate=NOMBRE      extableix el límit d'octets per segon.\n"
#~ "       --dns-cache=off          no usa `cache' en la resolució de noms "
#~ "de\n"
#~ "                                domini.\n"
#~ "       --restrict-file-names=SO restringeix determinats caràcters dels "
#~ "noms\n"
#~ "                                dels fitxers segons el SO (sistema "
#~ "operatiu).\n"
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
#~ "Directoris:\n"
#~ "  -nd, --no-directories            no crea directoris.\n"
#~ "  -x,  --force-directories         crea directoris obligatòriament.\n"
#~ "  -nH, --no-host-directories       crea directoris, sense el prefix del "
#~ "host.\n"
#~ "  -P,  --directory-prefix=PREFIX   desa els fitxers a PREFIX/...\n"
#~ "       --cut-dirs=NOMBRE           omet NOMBRE components de l'estructura "
#~ "de\n"
#~ "                                   directoris remota.\n"
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
#~ "Opcions d'HTTP:\n"
#~ "       --http-user=USUARI    estableix l'usuari http en USUARI.\n"
#~ "       --http-passwd=PASS    estableix la contrasenya http en PASS.\n"
#~ "  -C,  --cache=on/off        admet o no dades del `cache' del servidor.\n"
#~ "  -E,  --html-extension      afegeix l'ext. html a tots els fitxers text/"
#~ "html\n"
#~ "       --ignore-length       ignora la capçalera `Content-Length'.\n"
#~ "       --header=CADENA       insereix CADENA entre les capçaleres.\n"
#~ "       --proxy-user=USUARI   estableix l'usuari pel proxy en USUARI.\n"
#~ "       --proxy-passwd=PASS   estableix la contrasenya pel proxy en PASS.\n"
#~ "       --referer=URL         inclou una capçalera `Referer' a la petició "
#~ "HTTP.\n"
#~ "  -s,  --save-headers        desa les capçaleres HTTP en un fitxer.\n"
#~ "  -U,  --user-agent=AGENT    s'identifica com a AGENT en lloc de Wget/"
#~ "VERSIÓ.\n"
#~ "       --no-http-keep-alive  no utilitza connexions HTTP persistents.\n"
#~ "       --cookies=off         no admet cookies.\n"
#~ "       --load-cookies=FITXER carrega les cookies de FITXER.\n"
#~ "       --save-cookies=FITXER desa les cookies a FITXER.\n"
#~ "       --post-data=CADENA    envia CADENA com a dades `POST'.\n"
#~ "       --post-file=FITXER    envia FITXER com a dades `POST'.\n"
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
#~ "Opcions d'HTTPS (SSL):\n"
#~ "       --sslcertfile=FITXER   certificat opcional del client.\n"
#~ "       --sslcertkey=FITXER    clau opcional del certificat.\n"
#~ "       --egd-file=FITXER      usa FITXER com a socket EGD.\n"
#~ "       --sslcadir=DIRECTORI   directori on hi ha la llista de CA's.\n"
#~ "       --sslcafile=FITXER     fitxer que conté els CA's.\n"
#~ "       --sslcerttype=0/1      tipus de Client-Cert: 0=OEM (per omissió),\n"
#~ "                              1=ASN1\n"
#~ "       --sslcheckcert=0/1     comprova el certificat del servidor amb el "
#~ "CA.\n"
#~ "       --sslprotocol=0-3      protocol SSL: 0=auto, 1=SSLv2, 2=SSLv3, "
#~ "3=TLSv1\n"
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
#~ "Opcions d'FTP:\n"
#~ "  -nr, --dont-remove-listing   no elimina els fitxers `.listing'.\n"
#~ "  -g,  --glob=on/off           habilita o no l'interpretació de "
#~ "caràcters\n"
#~ "                               especials, com `*', per seleccionar "
#~ "fitxers.\n"
#~ "       --passive-ftp           usa el mode de transferència passiu.\n"
#~ "       --retr-symlinks         descarrega els fitxers apuntats per "
#~ "enllaços\n"
#~ "                               simbòlics, en mode de recursió.\n"
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
#~ "Opcions de recursió:\n"
#~ "  -r,  --recursive          descarrega de forma recursiva.\n"
#~ "  -l,  --level=NOMBRE       nivell màxim de recursió (inf o 0 per "
#~ "infinit).\n"
#~ "       --delete-after       elimina els fitxers locals un cop "
#~ "descarregats.\n"
#~ "  -k,  --convert-links      converteix els enllaços absoluts a relatius.\n"
#~ "  -K,  --backup-converted   fa una còpia dels fitxers abans de convertir-"
#~ "los.\n"
#~ "  -m,  --mirror             opció equivalent a -r -N -l inf -nr.\n"
#~ "  -p,  --page-requisites    descarrega tots els components (imatges, "
#~ "etc.)\n"
#~ "                            necessaris per veure el document HTML.\n"
#~ "       --strict-comments    interpreta els comentaris de forma estricta.\n"
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
#~ "Inclusió/Exclusió en mode recursiu:\n"
#~ "  -A,  --accept=LLISTA              llista d'extensions acceptades.\n"
#~ "  -R,  --reject=LLISTA              llista d'extensions rebutjades.\n"
#~ "  -D,  --domains=LLISTA             llista de dominis acceptats.\n"
#~ "       --exclude-domains=LLISTA     llista de dominis rebutjats.\n"
#~ "       --follow-ftp                 segueix enllaços FTP en documents "
#~ "HTML.\n"
#~ "       --follow-tags=LLISTA         llista de tags HTML que contenen "
#~ "enllaços.\n"
#~ "  -G,  --ignore-tags=LLISTA         llista de tags HTML ignorats.\n"
#~ "  -H,  --span-hosts                 segueix enllaços a altres hosts.\n"
#~ "  -L,  --relative                   només segueix enllaços relatius.\n"
#~ "  -I,  --include-directories=LLISTA llista de directoris acceptats.\n"
#~ "  -X,  --exclude-directories=LLISTA llista de directoris rebutjats.\n"
#~ "  -np, --no-parent                  no ascendeix a directoris superiors.\n"
#~ "\n"

#~ msgid "%s: debug support not compiled in.\n"
#~ msgstr "%s: no s'ha compilat suport per depuració.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "S'està iniciant el WinHelp %s\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: No hi ha memòria suficient.\n"
