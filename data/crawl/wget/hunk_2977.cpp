 "Pr�ver igjen.\n"
 "\n"
 
-#: src/url.c:1332
-#, c-format
-msgid "Converting %s... "
-msgstr "Konverterer %s... "
+#: src/url.c:642
+#, fuzzy
+msgid "No error"
+msgstr "Ukjent feil"
 
-#: src/url.c:1345
-msgid "nothing to do.\n"
+#: src/url.c:644
+msgid "Unsupported scheme"
 msgstr ""
 
-#: src/url.c:1353 src/url.c:1377
-#, c-format
-msgid "Cannot convert links in %s: %s\n"
-msgstr "Kan ikke konvertere linker i %s: %s\n"
+#: src/url.c:646
+msgid "Empty host"
+msgstr ""
 
-#: src/url.c:1368
-#, fuzzy, c-format
-msgid "Unable to delete `%s': %s\n"
-msgstr "Kan ikke slette den symbolske linken �%s�: %s\n"
+#: src/url.c:648
+msgid "Bad port number"
+msgstr ""
 
-#: src/url.c:1558
-#, fuzzy, c-format
-msgid "Cannot back up %s as %s: %s\n"
-msgstr "Kan ikke konvertere linker i %s: %s\n"
+#: src/url.c:650
+#, fuzzy
+msgid "Invalid user name"
+msgstr "Tjenernavnet er ugyldig"
 
-#: src/utils.c:94
-#, c-format
-msgid "%s: %s: Not enough memory.\n"
-msgstr "%s: %s: Ikke nok minne.\n"
+#: src/url.c:652
+msgid "Unterminated IPv6 numeric address"
+msgstr ""
 
-#: src/utils.c:386
-msgid "Unknown/unsupported protocol"
-msgstr "Protokollen er ukjent/ikke st�ttet"
+#: src/url.c:654
+msgid "IPv6 addresses not supported"
+msgstr ""
 
-#: src/utils.c:389
-msgid "Invalid port specification"
-msgstr "Port-spesifikasjonen er ugyldig"
+#: src/url.c:656
+msgid "Invalid IPv6 numeric address"
+msgstr ""
 
-#: src/utils.c:392
-msgid "Invalid host name"
-msgstr "Tjenernavnet er ugyldig"
+#. parent, no error
+#: src/utils.c:347
+#, fuzzy, c-format
+msgid "Continuing in background, pid %d.\n"
+msgstr "Fortsetter i bakgrunnen.\n"
 
-#: src/utils.c:613
+#: src/utils.c:391
 #, c-format
 msgid "Failed to unlink symlink `%s': %s\n"
 msgstr "Kan ikke slette den symbolske linken �%s�: %s\n"
 
+#: src/xmalloc.c:72
+#, c-format
+msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
+msgstr ""
+
+#~ msgid "Connection to %s:%hu refused.\n"
+#~ msgstr "Kontakt med %s:%hu nektet.\n"
+
+#~ msgid "Will try connecting to %s:%hu.\n"
+#~ msgstr "Vil pr�ve � kontakte %s:%hu.\n"
+
+#~ msgid " [%s to go]"
+#~ msgstr " [%s igjen]"
+
+#~ msgid "%s: Cannot determine user-id.\n"
+#~ msgstr "%s: Fant ikke bruker-ID.\n"
+
+#~ msgid "%s: Warning: uname failed: %s\n"
+#~ msgstr "%s: Advarsel: feil fra �uname�:  %s\n"
+
+#~ msgid "%s: Warning: gethostname failed\n"
+#~ msgstr "%s: Advarsel: feil fra �gethostname�\n"
+
+#~ msgid "%s: Warning: cannot determine local IP address.\n"
+#~ msgstr "%s: Advarsel: fant ikke lokal IP-adresse.\n"
+
+#~ msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
+#~ msgstr "%s: Advarsel: feil fra tilbake-oppslag for lokal IP-adresse.\n"
+
+#~ msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
+#~ msgstr ""
+#~ "%s: Advarsel: fikk ikke FQDN fra tilbake-oppslag for lokal IP-adresse!\n"
+
+#~ msgid "Host not found"
+#~ msgstr "Tjener ikke funnet"
+
+#~ msgid "End of file while parsing headers.\n"
+#~ msgstr "Filslutt funnet ved lesing av topptekster.\n"
+
+#~ msgid " (%s to go)"
+#~ msgstr " (%s igjen)"
+
+#~ msgid "%s: BUG: unknown command `%s', value `%s'.\n"
+#~ msgstr "%s: Ukjent kommando �%s�, verdi �%s�.\n"
+
+#, fuzzy
+#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
+#~ msgstr "%s: Advarsel: feil fra tilbake-oppslag for lokal IP-adresse.\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "Startup:\n"
+#~ "  -V,  --version           display the version of Wget and exit.\n"
+#~ "  -h,  --help              print this help.\n"
+#~ "  -b,  --background        go to background after startup.\n"
+#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Oppstart:\n"
+#~ "  -V,  --version           viser Wget's versjonsnummer og avslutter.\n"
+#~ "  -h,  --help              skriver ut denne hjelpeteksten.\n"
+#~ "  -b,  --background        kj�rer i bakgrunnen etter oppstart.\n"
+#~ "  -e,  --execute=KOMMANDO  utf�r en �.wgetrc�-kommando.\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "Logging and input file:\n"
+#~ "  -o,  --output-file=FILE     log messages to FILE.\n"
+#~ "  -a,  --append-output=FILE   append messages to FILE.\n"
+#~ "  -d,  --debug                print debug output.\n"
+#~ "  -q,  --quiet                quiet (no output).\n"
+#~ "  -v,  --verbose              be verbose (this is the default).\n"
+#~ "  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
+#~ "  -i,  --input-file=FILE      download URLs found in FILE.\n"
+#~ "  -F,  --force-html           treat input file as HTML.\n"
+#~ "  -B,  --base=URL             prepends URL to relative links in -F -i "
+#~ "file.\n"
+#~ "       --sslcertfile=FILE     optional client certificate.\n"
+#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Utskrifter og innlesing:\n"
+#~ "  -o,  --output-file=FIL      skriv meldinger til ny FIL.\n"
+#~ "  -a,  --append-output=FIL    skriv meldinger p� slutten av FIL.\n"
+#~ "  -d,  --debug                skriv avlusingsinformasjon.\n"
+#~ "  -q,  --quiet                stille (ingen utskrifter).\n"
+#~ "  -v,  --verbose              v�r utf�rlig (standard).\n"
+#~ "  -nv, --non-verbose          mindre utf�rlig, men ikke stille.\n"
+#~ "  -i,  --input-file=FIL       les URLer fra FIL.\n"
+#~ "  -F,  --force-html           les inn filer som HTML.\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "Download:\n"
+#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
+#~ "host.\n"
+#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
+#~ "unlimits).\n"
+#~ "  -O   --output-document=FILE   write documents to FILE.\n"
+#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
+#~ "suffixes.\n"
+#~ "  -c,  --continue               resume getting a partially-downloaded "
+#~ "file.\n"
+#~ "       --dot-style=STYLE        set retrieval display style.\n"
+#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
+#~ "local.\n"
+#~ "  -S,  --server-response        print server response.\n"
+#~ "       --spider                 don't download anything.\n"
+#~ "  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
+#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
+#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
+#~ "retrieval.\n"
+#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
+#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Nedlasting:\n"
+#~ "  -t,  --tries=ANTALL           maksimalt antall fors�k (0 for "
+#~ "uendelig).\n"
+#~ "  -O   --output-document=FIL    skriv nedlastede filer til FIL.\n"
+#~ "  -nc, --no-clobber             ikke ber�r eksisterende filer.\n"
+#~ "  -c,  --continue               fortsett nedlasting av en eksisterende "
+#~ "fil.\n"
+#~ "       --dot-style=TYPE         velg format for nedlastings-status.\n"
+#~ "  -N,  --timestamping           ikke hent filer som er eldre enn "
+#~ "eksisterende.\n"
+#~ "  -S,  --server-response        vis svar fra tjeneren.\n"
+#~ "       --spider                 ikke hent filer.\n"
+#~ "  -T,  --timeout=SEKUNDER       sett ventetid ved lesing til SEKUNDER.\n"
+#~ "  -w,  --wait=SEKUNDER          sett ventetid mellom filer til SEKUNDER.\n"
+#~ "  -Y,  --proxy=on/off           sett bruk av proxy p� eller av.\n"
+#~ "  -Q,  --quota=ANTALL           sett nedlastingskvote til ANTALL.\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "Directories:\n"
+#~ "  -nd  --no-directories            don't create directories.\n"
+#~ "  -x,  --force-directories         force creation of directories.\n"
+#~ "  -nH, --no-host-directories       don't create host directories.\n"
+#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
+#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
+#~ "components.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Kataloger:\n"
+#~ "  -nd  --no-directories             ikke lag kataloger.\n"
+#~ "  -x,  --force-directories          lag kataloger.\n"
+#~ "  -nH, --no-host-directories        ikke lag ovenst�ende kataloger.\n"
+#~ "  -P,  --directory-prefix=PREFIKS   skriv filer til PREFIKS/...\n"
+#~ "       --cut-dirs=ANTALL            ignorer ANTALL komponenter av "
+#~ "tjenerens\n"
+#~ "                                    katalognavn.\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "HTTP options:\n"
+#~ "       --http-user=USER      set http user to USER.\n"
+#~ "       --http-passwd=PASS    set http password to PASS.\n"
+#~ "  -C,  --cache=on/off        (dis)allow server-cached data (normally "
+#~ "allowed).\n"
+#~ "  -E,  --html-extension      save all text/html documents with .html "
+#~ "extension.\n"
+#~ "       --ignore-length       ignore `Content-Length' header field.\n"
+#~ "       --header=STRING       insert STRING among the headers.\n"
+#~ "       --proxy-user=USER     set USER as proxy username.\n"
+#~ "       --proxy-passwd=PASS   set PASS as proxy password.\n"
+#~ "       --referer=URL         include `Referer: URL' header in HTTP "
+#~ "request.\n"
+#~ "  -s,  --save-headers        save the HTTP headers to file.\n"
+#~ "  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "HTTP-flagg:\n"
+#~ "       --http-user=BRUKER      sett HTTP-bruker til BRUKER.\n"
+#~ "       --http-passwd=PASSORD   sett HTTP-passord til PASSORD.\n"
+#~ "  -C,  --cache=on/off          (ikke) tillat bruk av hurtiglager p� "
+#~ "tjener.\n"
+#~ "       --ignore-length         ignorer �Content-Length� felt i "
+#~ "topptekst.\n"
+#~ "       --header=TEKST          sett TEKST inn som en topptekst.\n"
+#~ "       --proxy-user=BRUKER     sett proxy-bruker til BRUKER.\n"
+#~ "       --proxy-passwd=PASSORD  sett proxy-passord til PASSORD.\n"
+#~ "  -s,  --save-headers          skriv HTTP-topptekster til fil.\n"
+#~ "  -U,  --user-agent=AGENT      identifiser som AGENT i stedet for \n"
+#~ "                               �Wget/VERSJON�.\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "FTP options:\n"
+#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
+#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
+#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
+#~ "       --retr-symlinks         when recursing, get linked-to files (not "
+#~ "dirs).\n"
+#~ "\n"
+#~ msgstr ""
+#~ "FTP-flagg:\n"
+#~ "       --retr-symlinks   hent symbolske linker via FTP.\n"
+#~ "  -g,  --glob=on/off     (ikke) tolk bruk av jokertegn i filnavn.\n"
+#~ "       --passive-ftp     bruk passiv overf�ringsmodus.\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "Recursive retrieval:\n"
+#~ "  -r,  --recursive          recursive web-suck -- use with care!\n"
+#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
+#~ "infinite).\n"
+#~ "       --delete-after       delete files locally after downloading them.\n"
+#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
+#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
+#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
+#~ "nr.\n"
+#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
+#~ "page.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Rekursiv nedlasting:\n"
+#~ "  -r,  --recursive             tillat rekursiv nedlasting -- bruk med "
+#~ "omtanke!\n"
+#~ "  -l,  --level=ANTALL          maksimalt antall rekursjonsniv�er "
+#~ "(0=uendelig).\n"
+#~ "       --delete-after          slett nedlastede filer.\n"
+#~ "  -k,  --convert-links         konverter absolutte linker til relative.\n"
+#~ "  -m,  --mirror                sett passende flagg for speiling av "
+#~ "tjenere.\n"
+#~ "  -nr, --dont-remove-listing   ikke slett �.listing�-filer.\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "Recursive accept/reject:\n"
+#~ "  -A,  --accept=LIST                comma-separated list of accepted "
+#~ "extensions.\n"
+#~ "  -R,  --reject=LIST                comma-separated list of rejected "
+#~ "extensions.\n"
+#~ "  -D,  --domains=LIST               comma-separated list of accepted "
+#~ "domains.\n"
+#~ "       --exclude-domains=LIST       comma-separated list of rejected "
+#~ "domains.\n"
+#~ "       --follow-ftp                 follow FTP links from HTML "
+#~ "documents.\n"
+#~ "       --follow-tags=LIST           comma-separated list of followed HTML "
+#~ "tags.\n"
+#~ "  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML "
+#~ "tags.\n"
+#~ "  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
+#~ "  -L,  --relative                   follow relative links only.\n"
+#~ "  -I,  --include-directories=LIST   list of allowed directories.\n"
+#~ "  -X,  --exclude-directories=LIST   list of excluded directories.\n"
+#~ "  -nh, --no-host-lookup             don't DNS-lookup hosts.\n"
+#~ "  -np, --no-parent                  don't ascend to the parent "
+#~ "directory.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Hva er tillatt ved rekursjon:\n"
+#~ "  -A,  --accept=LISTE               liste med tillatte filtyper.\n"
+#~ "  -R,  --reject=LISTE               liste med ikke tillatte filtyper.\n"
+#~ "  -D,  --domains=LISTE              liste med tillatte domener.\n"
+#~ "       --exclude-domains=LISTE      liste med ikke tillatte domener.\n"
+#~ "  -L,  --relative                   f�lg kun relative linker.\n"
+#~ "       --follow-ftp                 f�lg FTP-linker fra HTML-dokumenter.\n"
+#~ "  -H,  --span-hosts                 f�lg linker til andre tjenere.\n"
+#~ "  -I,  --include-directories=LISTE  liste med tillatte katalognavn.\n"
+#~ "  -X,  --exclude-directories=LISTE  liste med ikke tillatte katalognavn.\n"
+#~ "  -nh, --no-host-lookup             ikke let etter tjenernavn via DNS.\n"
+#~ "  -np, --no-parent                  ikke f�lg linker til ovenst�ende "
+#~ "katalog.\n"
+#~ "\n"
+
+#~ msgid "%s: debug support not compiled in.\n"
+#~ msgstr "%s: st�tte for avlusing ikke inkludert ved kompilering.\n"
+
+#~ msgid "%s: %s: invalid command\n"
+#~ msgstr "%s: %s: ugyldig kommando\n"
+
+#~ msgid ""
+#~ "\n"
+#~ "CTRL+Break received, redirecting output to `%s'.\n"
+#~ "Execution continued in background.\n"
+#~ "You may stop Wget by pressing CTRL+ALT+DELETE.\n"
+#~ msgstr ""
+#~ "\n"
+#~ "CTRL+Break mottatt, omdirigerer utskrifter til `%s'.\n"
+#~ "Kj�ring fortsetter i bakgrunnen.\n"
+#~ "Du kan stoppe Wget ved � trykke CTRL+ALT+DELETE.\n"
+#~ "\n"
+
+#~ msgid "Starting WinHelp %s\n"
+#~ msgstr "Starter WinHelp %s\n"
+
+#~ msgid "Could not find proxy host.\n"
+#~ msgstr "Fant ikke proxy-tjener.\n"
+
+#~ msgid "%s: %s: Not enough memory.\n"
+#~ msgstr "%s: %s: Ikke nok minne.\n"
+
+#~ msgid "Unknown/unsupported protocol"
+#~ msgstr "Protokollen er ukjent/ikke st�ttet"
+
+#~ msgid "Invalid port specification"
+#~ msgstr "Port-spesifikasjonen er ugyldig"
+
 #, fuzzy
 #~ msgid "%s: Out of memory.\n"
 #~ msgstr "%s: %s: Ikke nok minne.\n"
