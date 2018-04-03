"Opnieuw proberen.\n"
"\n"

#: src/url.c:642
msgid "No error"
msgstr "Geen fout"

#: src/url.c:644
msgid "Unsupported scheme"
msgstr "Niet-ondersteund schema"

#: src/url.c:646
msgid "Empty host"
msgstr "Lege host"

#: src/url.c:648
msgid "Bad port number"
msgstr "Ongeldig poortnummer"

#: src/url.c:650
msgid "Invalid user name"
msgstr "Ongeldige gebruikersnaam"

#: src/url.c:652
msgid "Unterminated IPv6 numeric address"
msgstr "Ongetermineerd IPv6 numeriek adres"

#: src/url.c:654
msgid "IPv6 addresses not supported"
msgstr "IPv6-adressen niet ondersteund"

#: src/url.c:656
msgid "Invalid IPv6 numeric address"
msgstr "Ongeldig IPv6 numeriek adres"

#. parent, no error
#: src/utils.c:347
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Voortzetting in de achtergrond, proces-ID %d.\n"

#: src/utils.c:391
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "Verwijderen symbolische koppeling `%s' mislukt: %s\n"

#: src/xmalloc.c:72
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr ""
#~ "Kan niet `%s' converteren naar een bind-adres, terugvallen op ANY.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "REST mislukt; zal niet afkappen `%s'.\n"

#~ msgid " [%s to go]"
#~ msgstr " [nog %s]"

#~ msgid "Host not found"
#~ msgstr "Host niet gevonden"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Bestandseinde bij ontleden kopregels.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Voortzetten ophalen van dit bestand mislukt, dit is in strijd met `-c'.\n"
#~ "Weiger bestaande bestand af te kappen `%s'.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (nog %s)"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Opstarten:\n"
#~ "  -V,  --version           toon de versie van wget en stop.\n"
#~ "  -h,  --help              deze hulp tonen.\n"
#~ "  -b,  --background        naar achtergrond gaan na opstarten.\n"
#~ "  -e,  --execute=OPDRACHT  een `.wgetrc'-stijl opdracht uitvoeren.\n"
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
#~ "Log bijhouden en invoerbestand:\n"
#~ "  -o,  --output-file=BESTAND   meldingen bijhouden in BESTAND.\n"
#~ "  -a,  --append-output=BESTAND meldingen toevoegen aan BESTAND.\n"
#~ "  -d,  --debug                 debug uitvoer tonen.\n"
#~ "  -q,  --quiet                 stil (geen uitvoer).\n"
#~ "  -v,  --verbose               woordenrijk (dit is standaard).\n"
#~ "  -nv, --non-verbose           beknopte uitvoer; niet geheel stil.\n"
#~ "  -i,  --input-file=BESTAND    URLs uit BESTAND lezen.\n"
#~ "  -F,  --force-html            invoerbestand als HTML behandelen.\n"
#~ "  -B,  --base=URL              voeg URL voor relatieve links in -F -i "
#~ "bestand.\n"
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
#~ "Download:\n"
#~ "  -t,  --tries=AANTAL         zet herhalingspogingen op AANTAL \n"
#~ "                              (0 is ongelimiteerd).\n"
#~ "       --retry-connrefused    opnieuw proberen zelfs bij verbinding "
#~ "geweigerd\n"
#~ "  -O   --output-document=BESTAND schrijf dokumenten naar BESTAND.\n"
#~ "  -nc, --no-clobber           bestaande bestanden niet overschrijven of\n"
#~ "                              .# achtervoegsels gebruiken.\n"
#~ "  -c,  --continue             voortzetten gedeeltelijk opgehaald bestand\n"
#~ "       --progress=TYPE        voortgangsmeter-type selecteren.\n"
#~ "  -N,  --timestamping         bestanden niet opnieuw ophalen tenzij "
#~ "nieuwer\n"
#~ "                              dan lokale bestanden.\n"
#~ "  -S,  --server-response      serverantwoord tonen.\n"
#~ "       --spider               niets ophalen.\n"
#~ "  -T,  --timeout=SECONDEN     lees-wachttijd instellen op SECONDEN.\n"
#~ "       --dns-timeout=SECONDEN DNS-opzoekwachttijd instellen op SECONDEN.\n"
#~ "       --connect-timeout=SECS verbindingswachttijd instellen op SECS.\n"
#~ "       --read-timeout=SECS    leeswachttijd instellen op SECS.\n"
#~ "  -w,  --wait=SECONDEN        SECONDEN wachten tussen ontvangsten.\n"
#~ "       --waitretry=SECONDEN   1...SECONDEN wachten tussen opnieuw "
#~ "proberen.\n"
#~ "       --random-wait          0...2*WAIT seconden wachten tussen "
#~ "ontvangsten.\n"
#~ "  -Y,  --proxy=on/off         proxy aan (`on') of uit (`off').\n"
#~ "  -Q,  --quota=AANTAL         zet de ontvangstquota op AANTAL.\n"
#~ "       --bind-address=ADRES   binden aan ADRES (hostnaam of IP) op "
#~ "localhost.\n"
#~ "       --limit-rate=SNELHEID  downloadsnelheid begrenzen tot SNELHEID.\n"
#~ "       --dns-cache=off        bufferen van DNS-zoekacties uitschakelen.\n"
#~ "       --restrict-file-names=OS alleen tekens in bestandsnamen die het "
#~ "OS\n"
#~ "                              besturingssysteem.\n"
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
#~ "Mappen:\n"
#~ "  -nd  --no-directories            geen mappen aanmaken.\n"
#~ "  -x,  --force-directories         aanmaken van mappen afdwingen.\n"
#~ "  -nH, --no-host-directories       geen host-mappen maken.\n"
#~ "  -P,  --directory-prefix=VOORVOEGSEL bestanden in VOORVOEGSEL/... "
#~ "bewaren\n"
#~ "       --cut-dirs=AANTAL           AANTAL mapcomponenten-op-afstand "
#~ "negeren.\n"
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
#~ "HTTP-opties:\n"
#~ "       --http-user=GEBRUIKER  zet http-gebruiker op GEBRUIKER\n"
#~ "       --http-passwd=WACHTW   zet http-wachtwoord op WACHTW\n"
#~ "  -C,  --cache=on/off         server-gebufferde data al dan niet "
#~ "toestaan\n"
#~ "                              (normaal toegestaan).\n"
#~ "  -E,  --html-extension       alle tekst/html documenten met .html\n"
#~ "                              achtervoegsel opslaan.\n"
#~ "       --ignore-length        negeer de `Content-Length'-kopregel.\n"
#~ "       --header=TEKENREEKS    TEKENREEKS tussen kopregels invoegen.\n"
#~ "       --proxy-user=GEBRUIKER GEBRUIKER als proxy-gebruikersnaam.\n"
#~ "       --proxy-passwd=WACHTW  WACHTW als proxy-wachtwoord.\n"
#~ "       --referer=URL          gebruik `Referer: URL' kopregel in HTTP-"
#~ "verzoek.\n"
#~ "  -s,  --save-headers         HTTP-kopregels in bestand opslaan.\n"
#~ "  -U,  --user-agent=AGENT     als AGENT identificeren i.p.v Wget/"
#~ "VERSION.\n"
#~ "       --no-http-keep-alive   uitschakelen HTTP keep-alive\n"
#~ "                               (verbindingen hergebruiken).\n"
#~ "       --cookies=off          geen cookies gebruiken.\n"
#~ "       --load-cookies=BESTAND cookies uit BESTAND laden voor sessie.\n"
#~ "       --save-cookies=BESTAND cookies in BESTAND opslaan na sessie.\n"
#~ "       --post-data=TEKENREEKS POST-methode gebruiken; TEKENREEKS als de\n"
#~ "                              data verzenden.\n"
#~ "       --post-file=BESTAND    POST-methode gebruiken; TEKENREEKS als "
#~ "inhoud\n"
#~ "                              van BESTAND verzenden.\n"
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
#~ "HTTPS (SSL) opties:\n"
#~ "       --sslcertfile=BESTAND  optioneel client-certificaat.\n"
#~ "       --sslcertkey=SLEUTELBESTAND optioneel sleutelbestand voor dit "
#~ "certificaat.\n"
#~ "       --egd-file=BESTAND     bestandsnaam van het EGD-socket.\n"
#~ "       --sslcadir=MAP         map waar hash-lijst van CA's opgeslagen "
#~ "is.\n"
#~ "       --sslcafile=BESTAND    bestand met CA-bundel\n"
#~ "       --sslcerttype=0/1      Client-Cert type 0=PEM (standaard) / 1=ASN1 "
#~ "(DER)\n"
#~ "       --sslcheckcert=0/1     Server controleren tegen gegeven CA\n"
#~ "       --sslprotocol=0-3      kies SSL protocol; 0=automatisch,\n"
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
#~ "FTP-opties:\n"
#~ "  -nr, --dont-remove-listing   `.listing' bestanden niet verwijderen.\n"
#~ "  -g,  --glob=on/off           bestandsnaam-`globbing' aan (`on') of uit\n"
#~ "                               (`off') zetten.\n"
#~ "       --passive-ftp           gebruik \"passieve\" overdrachtsmodus.\n"
#~ "       --retr-symlinks         haal FTP symbolische koppelingen op.\n"
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
#~ "Recursieve ontvangst:\n"
#~ "  -r,  --recursive          recursief downloaden.\n"
#~ "  -l,  --level=AANTAL       maximale recursiediepte (inf of 0 voor "
#~ "ongelimiteerd).\n"
#~ "       --delete-after       wis bestanden lokaal na downloaden.\n"
#~ "  -k,  --convert-links      niet-relatieve verwijzingen naar relatieve\n"
#~ "  -K,  --backup-converted   voor omzetten bestand X, reservekopie als X."
#~ "orig.\n"
#~ "  -m,  --mirror             gelijk aan de opties -r -N -l inf -nr.\n"
#~ "  -p,  --page-requisites    haal alle plaatjes, etc. nodig voor HTML-"
#~ "weergave op.\n"
#~ "       --strict-comments    strikte (SGML) afhandeling van HTML "
#~ "commentaar.\n"
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
#~ "Recursief accepteren/weigeren:\n"
#~ "  -A,  --accept=LIJST                kommagescheiden lijst van "
#~ "geaccepteerde\n"
#~ "                                     achtervoegsels.\n"
#~ "  -R,  --reject=LIJST                kommagescheiden lijst van "
#~ "geweigerde\n"
#~ "                                     achtervoegsels.\n"
#~ "  -D,  --domains=LIJST               kommagescheiden lijst van "
#~ "geaccepteerde\n"
#~ "                                     domeinen.\n"
#~ "       --exclude-domains=LIJST       kommagescheiden lijst van "
#~ "geweigerde\n"
#~ "                                     domeinen.\n"
#~ "       --follow-ftp                  FTP-verwijzingen van HTML-\n"
#~ "                                     documenten volgen.\n"
#~ "       --follow-tags=LIJST           kommagescheiden lijst met te volgen "
#~ "HTML\n"
#~ "                                     tags.\n"
#~ "  -G,  --ignore-tags=LIJST           kommagescheiden lijst van te "
#~ "negeren\n"
#~ "                                     HTML tags.\n"
#~ "  -H,  --span-hosts                  bij `--recursive', ook naar vreemde "
#~ "hosts\n"
#~ "  -L,  --relative                    alleen relatieve verwijzingen "
#~ "volgen.\n"
#~ "  -I,  --include-directories=LIJST   lijst van geaccepteerde mappen.\n"
#~ "  -X,  --exclude-directories=LIJST   lijst van uitgesloten mappen.\n"
#~ "  -np, --no-parent                   hoger gelegen mappen negeren.\n"
#~ "\n"

#~ msgid "%s: debug support not compiled in.\n"
#~ msgstr "%s: Debug-ondersteuning niet meegecompileerd.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "WinHelp %s wordt gestart\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Onvoldoende geheugen.\n"
