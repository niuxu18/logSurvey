 "Προσπάθεια ξανά.\n"
 "\n"
 
-#: src/url.c:621
+#: src/url.c:619
 #, fuzzy
 msgid "No error"
 msgstr "Άγνωστο σφάλμα"
 
-#: src/url.c:623
+#: src/url.c:621
 msgid "Unsupported scheme"
 msgstr ""
 
-#: src/url.c:625
-msgid "Empty host"
-msgstr ""
+#: src/url.c:623
+#, fuzzy
+msgid "Invalid host name"
+msgstr "Μη έγκυρο όνομα εξυπηρετητή"
 
-#: src/url.c:627
+#: src/url.c:625
 msgid "Bad port number"
 msgstr ""
 
-#: src/url.c:629
+#: src/url.c:627
 #, fuzzy
 msgid "Invalid user name"
 msgstr "Μη έγκυρο όνομα εξυπηρετητή"
 
-#: src/url.c:631
+#: src/url.c:629
 msgid "Unterminated IPv6 numeric address"
 msgstr ""
 
-#: src/url.c:633
+#: src/url.c:631
 msgid "IPv6 addresses not supported"
 msgstr ""
 
-#: src/url.c:635
+#: src/url.c:633
 msgid "Invalid IPv6 numeric address"
 msgstr ""
 
-#: src/utils.c:120
-#, c-format
-msgid "%s: %s: Not enough memory.\n"
-msgstr "%s: %s: Δεν υπάρχει αρκετή μνήμη.\n"
-
 #. parent, no error
-#: src/utils.c:485
+#: src/utils.c:324
 #, c-format
 msgid "Continuing in background, pid %d.\n"
 msgstr ""
 "Συνέχιση στο παρασκήνιο, ταυτότητα διεργασίας (pid) %d.\n"
 "\n"
 
-#: src/utils.c:529
+#: src/utils.c:372
 #, c-format
 msgid "Failed to unlink symlink `%s': %s\n"
 msgstr "Αποτυχία διαγραφής συμβολικού συνδέσμου `%s': %s\n"
 
+#: src/xmalloc.c:62
+#, c-format
+msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
+msgstr ""
+
+#~ msgid "Error in Set-Cookie, field `%s'"
+#~ msgstr "Σφάλμα στο Set-Cookie, πεδίο `%s'"
+
+#~ msgid ""
+#~ "\n"
+#~ "REST failed; will not truncate `%s'.\n"
+#~ msgstr ""
+#~ "\n"
+#~ "Αποτυχία της REST· δε θα επανακτηθεί το `%s'.\n"
+
+#~ msgid " [%s to go]"
+#~ msgstr " [%s για πέρας]"
+
+#~ msgid "Host not found"
+#~ msgstr "Ο διακομιστής δε βρέθηκε"
+
+#~ msgid "Failed to set up an SSL context\n"
+#~ msgstr "Αποτυχία δημιουργίας περιβάλλοντος SSL\n"
+
+#~ msgid "Failed to load certificates from %s\n"
+#~ msgstr "Αποτυχία φόρτωσης πιστοποιητικών από %s\n"
+
+#~ msgid "Trying without the specified certificate\n"
+#~ msgstr "Προσπάθεια χωρίς το καθορισμένο πιστοποιητικό\n"
+
+#~ msgid "Failed to get certificate key from %s\n"
+#~ msgstr "Αποτυχία λήψης κλειδιού πιστοποιητικού από %s\n"
+
+#~ msgid "End of file while parsing headers.\n"
+#~ msgstr "Τέλος αρχείου ενώ γινόταν επεξεργασία των κεφαλίδων.\n"
+
+#~ msgid ""
+#~ "\n"
+#~ "Continued download failed on this file, which conflicts with `-c'.\n"
+#~ "Refusing to truncate existing file `%s'.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "\n"
+#~ "Η συνέχιση της ανάκτησης απέτυχε για αυτό το αρχείο, που συγκρούεται με "
+#~ "το `-c'.\n"
+#~ "Άρνηση εγγραφής πάνω στο υπάρχο αρχείο `%s'.\n"
+
+#~ msgid " (%s to go)"
+#~ msgstr " (%s μέχρι πέρας)"
+
+#~ msgid "File `%s' already there, will not retrieve.\n"
+#~ msgstr "Το αρχείο `%s' είναι ήδη εδώ, δε θα ανακτηθεί.\n"
+
+#~ msgid ""
+#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
+#~ "\n"
+#~ msgstr ""
+#~ "%s (%s) - `%s' αποθηκεύτηκε [%ld/%ld])\n"
+#~ "\n"
+
+#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
+#~ msgstr "%s (%s) - Η σύνδεση διακόπηκε στο byte %ld/%ld. "
+
+#, fuzzy
+#~ msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
+#~ msgstr ""
+#~ "%s: %s: Παρακαλώ καθορίστε πάντα(always), ενεργό(on), ανενεργό(off) ή ποτέ"
+#~ "(never).\n"
+
+#~ msgid ""
+#~ "Startup:\n"
+#~ "  -V,  --version           display the version of Wget and exit.\n"
+#~ "  -h,  --help              print this help.\n"
+#~ "  -b,  --background        go to background after startup.\n"
+#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Έναρξη:\n"
+#~ "  -V,  --version           εμφάνιση της έκδοσης του Wget και έξοδος.\n"
+#~ "  -h,  --help              εμφάνιση της βοήθειας αυτής.\n"
+#~ "  -b,  --background        αποστολή στο παρασκήνιο μετά την έναρξη.\n"
+#~ "  -e,  --execute=ΕΝΤΟΛΗ    εκτέλεση μιας εντολής μορφής `.wgetrc'.\n"
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
+#~ "\n"
+#~ msgstr ""
+#~ "Καταγραφή·και·αρχείο·εισόδου:\n"
+#~ "  -o,  --output-file=ΑΡΧΕΙΟ   καταγραφή·μηνυμάτων·στο·ΑΡΧΕΙΟ.\n"
+#~ "  -a,  --append-output=ΑΡΧΕΙΟ προσθήκη·μηνυμάτων·στο·ΑΡΧΕΙΟ.\n"
+#~ "  -d,  --debug                εμφάνιση·πληροφοριών·εκσφαλμάτωσης.\n"
+#~ "  -q,  --quiet                σιωπηλά·(χωρίς·έξοδο).\n"
+#~ "  -v,  --verbose              περιφραστικά·(εξ'·ορισμού·ρύθμιση).\n"
+#~ "  -nv, --non-verbose          απενεργοποίηση·περιφραστικότητας,"
+#~ "·χωρίς·να·είναι·και·σιωπηλό.\n"
+#~ "  -i,  --input-file=ΑΡΧΕΙΟ    ανάγνωση·URL·από·το·ΑΡΧΕΙΟ.\n"
+#~ "  -F,  --force-html           "
+#~ "μεταχείριση·αρχείου·εισόδου·ως·αρχείο·HTML.\n"
+#~ "  -B,  --base=URL             "
+#~ "προσθέτει·το·URL·στους·σχετικούς·συνδέσμους·στο·-F·-i·αρχείο.\n"
+#~ "       --sslcertfile=ΑΡΧΕΙΟ   προαιρετικό·πιστοποιητικό·πελάτη.\n"
+#~ "       --sslcertkey=ΑΡΧΕΙΟ    προαιρετικό αρχείο κλειδιού για αυτό το "
+#~ "πιστοποιητικό.\n"
+#~ "       --egd-file=ΑΡΧΕΙΟ      όνομα αρχείου για τον υποδοχέα EGD.\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "Download:\n"
+#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
+#~ "unlimits).\n"
+#~ "       --retry-connrefused      retry even if connection is refused.\n"
+#~ "  -O   --output-document=FILE   write documents to FILE.\n"
+#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
+#~ "suffixes.\n"
+#~ "  -c,  --continue               resume getting a partially-downloaded "
+#~ "file.\n"
+#~ "       --progress=TYPE          select progress gauge type.\n"
+#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
+#~ "local.\n"
+#~ "  -S,  --server-response        print server response.\n"
+#~ "       --spider                 don't download anything.\n"
+#~ "  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
+#~ "       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
+#~ "       --connect-timeout=SECS   set the connect timeout to SECS.\n"
+#~ "       --read-timeout=SECS      set the read timeout to SECS.\n"
+#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
+#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
+#~ "retrieval.\n"
+#~ "       --random-wait            wait from 0...2*WAIT secs between "
+#~ "retrievals.\n"
+#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
+#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
+#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
+#~ "host.\n"
+#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
+#~ "       --dns-cache=off          disable caching DNS lookups.\n"
+#~ "       --restrict-file-names=OS restrict chars in file names to ones OS "
+#~ "allows.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Μεταφόρτωση:\n"
+#~ "       --bind-address=ΔΙΕΥΘΥΝΣΗ σύνδεση στη ΔΙΕΥΘΥΝΣΗ (όνομα συστήματος ή "
+#~ "IP) στο τοπικό σύστημα.\n"
+#~ "  -t,  --tries=ΑΡΙΘΜΟΣ          ορισμός του αριθμού των προσπαθειών σε "
+#~ "ΑΡΙΘΜΟΣ (0 για χωρίς όριο).\n"
+#~ "  -O   --output-document=ΑΡΧΕΙΟ εγγραφή εγγράφων στο ΑΡΧΕΙΟ.\n"
+#~ "  -nc, --no-clobber             να μην αλλαχτούν τα ονόματα υπαρχόντων "
+#~ "αρχείων ή να δοθούν καταλήξεις .#.\n"
+#~ "  -c,  --continue               συνέχιση ανάκτησης υπάρχοντος αρχείου.\n"
+#~ "       --progress=ΜΟΡΦΗ         επιλογή της μορφής εμφάνισης της προόδου "
+#~ "ανάκτησης.\n"
+#~ "  -N,  --timestamping           αποφυγή ανάκτησης αρχείων παλαιότερων των "
+#~ "τοπικών.\n"
+#~ "  -S,  --server-response        εμφάνιση αποκρίσεων του διακομιστή.\n"
+#~ "       --spider                 αποφυγή ανάκτησης οποιουδήποτε αρχείου.\n"
+#~ "  -T,  --timeout=ΔΕΥΤΕΡΟΛΕΠΤΑ   ορισμός χρονικού ορίου ανάκτησης σε "
+#~ "ΔΕΥΤΕΡΟΛΕΠΤΑ.\n"
+#~ "  -w,  --wait=ΔΕΥΤΕΡΟΛΕΠΤΑ      αναμονή ΔΕΥΤΕΡΟΛΕΠΤΑ μεταξύ ανακτήσεων.\n"
+#~ "       --waitretry=ΔΕΥΤΕΡΟΛΕΠΤΑ αναμονή 1...ΔΕΥΤΕΡΟΛΕΠΤΑ μεταξύ "
+#~ "προσπαθειών ανάκτησης.\n"
+#~ "       --random-wait            αναμονή από 0...2*ΚΑΘΥΣΤΕΡΗΣΗ "
+#~ "δευτερόλεπτα μεταξύ ανακτήσεων.\n"
+#~ "  -Y,  --proxy=on/off           ρύθμιση χρήσης διαμεσολαβητή σε ενεργό "
+#~ "(on) ή ανενεργό (off).\n"
+#~ "  -Q,  --quota=ΑΡΙΘΜΟΣ          ορισμός ορίου συνολικού μεγέθους αρχείων "
+#~ "προς ανάκτηση σε ΑΡΙΘΜΟ.\n"
+#~ "       --limit-rate=ΡΥΘΜΟΣ      περιορισμός του ρυθμού ανάκτησης σε "
+#~ "ΡΥΘΜΟΣ.\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "Directories:\n"
+#~ "  -nd, --no-directories            don't create directories.\n"
+#~ "  -x,  --force-directories         force creation of directories.\n"
+#~ "  -nH, --no-host-directories       don't create host directories.\n"
+#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
+#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
+#~ "components.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Κατάλογοι:\n"
+#~ "  -nd  --no-directories            αποφυγή δημιουργίας καταλόγων.\n"
+#~ "  -x,  --force-directories         υποχρεωτική δημιουργία καταλόγων.\n"
+#~ "  -nH, --no-host-directories       αποφυγή δημιουργίας host directories.\n"
+#~ "  -P,  --directory-prefix=ΠΡΟΘΕΜΑ  αποθήκευση αρχείων στο ΠΡΟΘΕΜΑ/...\n"
+#~ "       --cut-dirs=ΑΡΙΘΜΟΣ          αγνόηση ΑΡΙΘΜΟΣ στοιχείων "
+#~ "απομακρυσμένων καταλόγων\n"
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
+#~ "       --no-http-keep-alive  disable HTTP keep-alive (persistent "
+#~ "connections).\n"
+#~ "       --cookies=off         don't use cookies.\n"
+#~ "       --load-cookies=FILE   load cookies from FILE before session.\n"
+#~ "       --save-cookies=FILE   save cookies to FILE after session.\n"
+#~ "       --post-data=STRING    use the POST method; send STRING as the "
+#~ "data.\n"
+#~ "       --post-file=FILE      use the POST method; send contents of FILE.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Επιλογές HTTP:\n"
+#~ "       --http-user=ΧΡΗΣΤΗΣ   ορισμός χρήστη http σε ΧΡΗΣΤΗ.\n"
+#~ "       --http-passwd=ΚΩΔΙΚΟΣ ορισμός κωδικού χρήστη http σε ΚΩΔΙΚΟΣ.\n"
+#~ "  -C,  --cache=on/off        αποτροπή/χρήση δεδομένων του διαμεσολαβητή "
+#~ "(κανονικά επιτρέπεται).\n"
+#~ "  -E,  --html-extension      αποθήκευση όλων των εγγράφων text/html με "
+#~ "κατάληξη .html.\n"
+#~ "       --ignore-length       αγνόηση του πεδίου `Content-Length' της "
+#~ "κεφαλίδας.\n"
+#~ "       --header=ΑΛΦΑΡΙΘΜΗΤΙΚΟ  εισαγωγή του ΑΛΦΑΡΙΘΜΗΤΙΚΟ στην κεφαλίδα.\n"
+#~ "       --proxy-user=ΧΡΗΣΤΗΣ  ορισμός του ΧΡΗΣΤΗΣ για χρήστη του "
+#~ "διαμεσολαβητή.\n"
+#~ "       --proxy-passwd=ΚΩΔΙΚΟΣ  ορισμός του ΚΩΔΙΚΟΣ για κωδικός στο "
+#~ "διαμεσολαβητή.\n"
+#~ "       --referer=URL         χρήση κεφαλίδας `Referer: URL' στην αίτηση "
+#~ "HTTP.\n"
+#~ "  -s,  --save-headers        αποθήκευση των HTTP κεφαλίδων σε αρχείο.\n"
+#~ "  -U,  --user-agent=ΠΡΑΚΤΟΡΑΣ χρήση του ΠΡΑΚΤΟΡΑΣ αντί του Wget/ΕΚΔΟΣΗ.\n"
+#~ "       --no-http-keep-alive  απενεργοποίηση του HTTP keep-alive "
+#~ "(συνδέσεις διαρκείας).\n"
+#~ "       --cookies=off         να μη γίνει χρήση των cookies.\n"
+#~ "       --load-cookies=ΑΡΧΕΙΟ φόρτωση cookies από το ΑΡΧΕΙΟ πριν τη "
+#~ "συνεδρία.\n"
+#~ "       --save-cookies=ΑΡΧΕΙΟ αποθήκευση των cookies στο ΑΡΧΕΙΟ μετά τη "
+#~ "συνεδρία.\n"
+#~ "\n"
+
+#~ msgid ""
+#~ "FTP options:\n"
+#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
+#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
+#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
+#~ "       --retr-symlinks         when recursing, get linked-to files (not "
+#~ "dirs).\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Επιλογές FTP:\n"
+#~ "  -nr, --dont-remove-listing να μη διαγραφούν τα αρχεία `.listing'.\n"
+#~ "  -g,  --glob=on/off         (απ)ενεργοποίηση ταιριάσματος ονομάτων "
+#~ "αρχείων.\n"
+#~ "       --passive-ftp         χρήση κατάστασης μεταφοράς \"passive\" για "
+#~ "το FTP.\n"
+#~ "       --retr-symlinks       κατά την αναδρομική ανάκτηση, λήψη "
+#~ "αναφερόμενων αρχείων (όχι κατάλογοι).\n"
+#~ "\n"
+
+#, fuzzy
+#~ msgid ""
+#~ "Recursive retrieval:\n"
+#~ "  -r,  --recursive          recursive download.\n"
+#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
+#~ "infinite).\n"
+#~ "       --delete-after       delete files locally after downloading them.\n"
+#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
+#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
+#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
+#~ "nr.\n"
+#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
+#~ "page.\n"
+#~ "       --strict-comments    turn on strict (SGML) handling of HTML "
+#~ "comments.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Αναδρομική ανάκτηση:\n"
+#~ "  -r,  --recursive             αναδρομική ανάκτηση -- χρήση με σύνεση!\n"
+#~ "  -l,  --level=ΑΡΙΘΜΟΣ         μέγιστο βάθος αναδρομής (`inf' ή 0 για "
+#~ "απεριόριστο).\n"
+#~ "       --delete-after          διαγραφή αρχείων τοπικά μετά τη "
+#~ "μεταφόρτωσή τους.\n"
+#~ "  -k,  --convert-links         μετατροπή μη-σχετικών συνδέσμων σε "
+#~ "σχετικούς.\n"
+#~ "  -K,  --backup-converted      πριν τη μετατροπή του αρχείου Χ, διατήρηση "
+#~ "αντιγράφου ασφαλείας X.orig.\n"
+#~ "  -m,  --mirror                σύντομη επιλογή, ισοδύναμη με -r -N -l inf "
+#~ "-nr.\n"
+#~ "  -p,  --page-requisites       λήψη όλων των εικόνων, κλπ. που "
+#~ "απαιτούνται για την εμφάνιση σελίδας HTML.\n"
+#~ "\n"
+
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
+#~ "  -np, --no-parent                  don't ascend to the parent "
+#~ "directory.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "Αναδρομική αποδοχή/απόρριψη:\n"
+#~ "  -A,  --accept=ΛΙΣΤΑ               λίστα διαχωριζόμενη με κόμμα από "
+#~ "αποδεκτές καταλήξεις.\n"
+#~ "  -R,  --reject=ΛΙΣΤΑ               λίστα διαχωριζόμενη με κόμμα από μη-"
+#~ "αποδεκτές καταλήξεις.\n"
+#~ "  -D,  --domains=ΛΙΣΤΑ              λίστα διαχωριζόμενη με κόμμα από "
+#~ "αποδεκτά επιθήματα.\n"
+#~ "       --exclude-domains=ΛΙΣΤΑ      λίστα διαχωριζόμενη με κόμμα από μη-"
+#~ "αποδεκτά επιθήματα.\n"
+#~ "       --follow-ftp                 ακολούθηση συνδέσμων FTP από έγγραφα "
+#~ "HTML.\n"
+#~ "       --follow-tags=ΛΙΣΤΑ          λίστα διαχωριζόμενη με κόμμα με "
+#~ "συνδέσμους που έχουν ακολουθηθεί.\n"
+#~ "  -G,  --ignore-tags=ΛΙΣΤΑ          λίστα διαχωριζόμενη με κόμμα με "
+#~ "συνδέσμους που έχουν αγνοηθεί.\n"
+#~ "  -H,  --span-hosts                 επίσκεψη και ξένων διακομιστών κατά "
+#~ "την αναδρομή.\n"
+#~ "  -L,  --relative                   ακολούθηση μόνο σχετικών URL.\n"
+#~ "  -I,  --include-directories=ΛΙΣΤΑ  λίστα επιτρεπτών καταλόγων.\n"
+#~ "  -X,  --exclude-directories=ΛΙΣΤΑ  λίστα μη-επιτρεπτών καταλόγων.\n"
+#~ "  -np, --no-parent                  απενεργοποίηση πρόσβασης και στο "
+#~ "γονικό κατάλογο.\n"
+#~ "\n"
+
+#~ msgid "%s: debug support not compiled in.\n"
+#~ msgstr ""
+#~ "%s: η υποστήριξη εκσφαλμάτωσης δεν έχει συμπεριληφθεί στη μεταγλώττιση.\n"
+
+#~ msgid ""
+#~ "This program is distributed in the hope that it will be useful,\n"
+#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
+#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
+#~ "GNU General Public License for more details.\n"
+#~ msgstr ""
+#~ "Αυτό το πρόγραμμα διανέμεται με την ελπίδα ότι θα είναι χρήσιμο,\n"
+#~ "αλλά ΧΩΡΙΣ ΚΑΜΙΑ ΕΓΓΫΗΣΗ· χωρίς ούτε έμμεση εγγύηση\n"
+#~ "ΛΕΙΤΟΥΡΓΙΚΟΤΗΤΑΣ ή ΚΑΤΑΛΛΗΛΟΤΗΤΑΣ ΓΙΑ ΕΝΑ ΣΥΓΚΕΚΡΙΜΕΝΟ ΣΚΟΠΟ.\n"
+#~ "Αναφερθείτε στη Γενική Δημόσια Άδεια GNU για περισσότερες λεπτομέρειες.\n"
+
+#~ msgid "Starting WinHelp %s\n"
+#~ msgstr "Εκκίνηση του WinHelp %s\n"
+
+#~ msgid "%s: %s: Not enough memory.\n"
+#~ msgstr "%s: %s: Δεν υπάρχει αρκετή μνήμη.\n"
+
 #~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
 #~ msgstr "Συνακτικό σφάλμα στο Set-Cookie στο χαρακτήρα `%c'.\n"
 
-#~ msgid "%s: BUG: unknown command `%s', value `%s'.\n"
-#~ msgstr "%s: ΣΦΑΛΜΑ: Άγνωστη εντολή `%s', τιμή `%s'.\n"
-
 #~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
 #~ msgstr "%s: %s: Δεν είναι δυνατή η μετατροπή του `%s' σε διεύθυνση IP.\n"
 
