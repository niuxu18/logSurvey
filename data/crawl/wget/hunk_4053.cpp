+# Italian messages for GNU Wget
+# Copyright (C) 1998 Free Software Foundation, Inc.
+# Giovanni Bortolozzo <borto@dei.unipd.it>, 1998
+#
+msgid ""
+msgstr ""
+"Project-Id-Version: wget 1.5.2-b1\n"
+"POT-Creation-Date: 1998-09-21 19:08+0200\n"
+"PO-Revision-Date: 1998-06-13 15:22+02:00\n"
+"Last-Translator: Giovanni Bortolozzo <borto@dei.unipd.it>\n"
+"Language-Team: Italian <it@li.org>\n"
+"MIME-Version: 1.0\n"
+"Content-Type: text/plain; charset=iso-8859-1\n"
+"Content-Transfer-Encoding: 8bit\n"
+
+#. Login to the server:
+#. First: Establish the control connection.
+#: src/ftp.c:147 src/http.c:346
+#, c-format
+msgid "Connecting to %s:%hu... "
+msgstr "Mi sto connettendo a %s:%hu..."
+
+#: src/ftp.c:169 src/ftp.c:411 src/http.c:363
+#, c-format
+msgid "Connection to %s:%hu refused.\n"
+msgstr "Connessione a %s:%hu rifiutata.\n"
+
+#. Second: Login with proper USER/PASS sequence.
+#: src/ftp.c:190 src/http.c:374
+msgid "connected!\n"
+msgstr "connesso!\n"
+
+#: src/ftp.c:191
+#, c-format
+msgid "Logging in as %s ... "
+msgstr "Accesso come utente %s ... "
+
+#: src/ftp.c:200 src/ftp.c:253 src/ftp.c:301 src/ftp.c:353 src/ftp.c:447
+#: src/ftp.c:520 src/ftp.c:568 src/ftp.c:616
+msgid "Error in server response, closing control connection.\n"
+msgstr ""
+"Errore nella risposta del server, chiudo la connessione di controllo.\n"
+
+#: src/ftp.c:208
+msgid "Error in server greeting.\n"
+msgstr "Errore nel codice di benvenuto del server\n"
+
+#: src/ftp.c:216 src/ftp.c:262 src/ftp.c:310 src/ftp.c:362 src/ftp.c:457
+#: src/ftp.c:530 src/ftp.c:578 src/ftp.c:626
+msgid "Write failed, closing control connection.\n"
+msgstr "Errore in scrittura, chiudo la connessione di controllo\n"
+
+#: src/ftp.c:223
+msgid "The server refuses login.\n"
+msgstr "Il server rifiuta il login.\n"
+
+#: src/ftp.c:230
+msgid "Login incorrect.\n"
+msgstr "Login non corretto.\n"
+
+#: src/ftp.c:237
+msgid "Logged in!\n"
+msgstr "Login eseguito!\n"
+
+#: src/ftp.c:270
+#, c-format
+msgid "Unknown type `%c', closing control connection.\n"
+msgstr "Tipo `%c' sconosciuto, chiudo la connessione di controllo.\n"
+
+#: src/ftp.c:283
+msgid "done.  "
+msgstr "fatto.  "
+
+#: src/ftp.c:289
+msgid "==> CWD not needed.\n"
+msgstr "==> CWD non necessaria.\n"
+
+#: src/ftp.c:317
+#, c-format
+msgid ""
+"No such directory `%s'.\n"
+"\n"
+msgstr ""
+"La directory `%s' non esiste.\n"
+"\n"
+
+#: src/ftp.c:331 src/ftp.c:599 src/ftp.c:647 src/url.c:1431
+msgid "done.\n"
+msgstr "fatto.\n"
+
+#. do not CWD
+#: src/ftp.c:335
+msgid "==> CWD not required.\n"
+msgstr "==> CWD non necessaria.\n"
+
+#: src/ftp.c:369
+msgid "Cannot initiate PASV transfer.\n"
+msgstr "Non riesco ad inizializzare il trasferimento PASV.\n"
+
+#: src/ftp.c:373
+msgid "Cannot parse PASV response.\n"
+msgstr "Non riesco a comprendere la risposta PASV.\n"
+
+#: src/ftp.c:387
+#, c-format
+msgid "Will try connecting to %s:%hu.\n"
+msgstr "Prover� a connettermi a %s:%hu.\n"
+
+#: src/ftp.c:432 src/ftp.c:504 src/ftp.c:548
+msgid "done.    "
+msgstr "fatto.   "
+
+#: src/ftp.c:474
+#, c-format
+msgid "Bind error (%s).\n"
+msgstr "Errore di bind (%s).\n"
+
+#: src/ftp.c:490
+msgid "Invalid PORT.\n"
+msgstr "PORT non valido.\n"
+
+#: src/ftp.c:537
+msgid ""
+"\n"
+"REST failed, starting from scratch.\n"
+msgstr ""
+"\n"
+"REST fallito, ricomincio dall'inizio.\n"
+
+#: src/ftp.c:586
+#, c-format
+msgid ""
+"No such file `%s'.\n"
+"\n"
+msgstr ""
+"Il file `%s' non esiste.\n"
+"\n"
+
+#: src/ftp.c:634
+#, c-format
+msgid ""
+"No such file or directory `%s'.\n"
+"\n"
+msgstr ""
+"Il file o la directory `%s' non esiste.\n"
+"\n"
+
+#: src/ftp.c:692 src/ftp.c:699
+#, c-format
+msgid "Length: %s"
+msgstr "Lunghezza: %s"
+
+#: src/ftp.c:694 src/ftp.c:701
+#, c-format
+msgid " [%s to go]"
+msgstr " [%s alla fine]"
+
+#: src/ftp.c:703
+msgid " (unauthoritative)\n"
+msgstr " (non autorevole)\n"
+
+#: src/ftp.c:721
+#, c-format
+msgid "%s: %s, closing control connection.\n"
+msgstr "%s: %s, chiudo la connessione di controllo.\n"
+
+#: src/ftp.c:729
+#, c-format
+msgid "%s (%s) - Data connection: %s; "
+msgstr "%s (%s) - Connessione dati: %s; "
+
+#: src/ftp.c:746
+msgid "Control connection closed.\n"
+msgstr "Connessione di controllo chiusa.\n"
+
+#: src/ftp.c:764
+msgid "Data transfer aborted.\n"
+msgstr "Trasferimento dati abortito.\n"
+
+#: src/ftp.c:830
+#, c-format
+msgid "File `%s' already there, not retrieving.\n"
+msgstr "Il file `%s' � gi� presente, non lo scarico.\n"
+
+#: src/ftp.c:896 src/http.c:922
+#, c-format
+msgid "(try:%2d)"
+msgstr "(provo:%2d)"
+
+#: src/ftp.c:955 src/http.c:1116
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%ld]\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' salvato [%ld]\n"
+"\n"
+
+#: src/ftp.c:1001
+#, c-format
+msgid "Using `%s' as listing tmp file.\n"
+msgstr "Utilizzo `%s' come file temporaneo per il listing.\n"
+
+#: src/ftp.c:1013
+#, c-format
+msgid "Removed `%s'.\n"
+msgstr "`%s' rimosso.\n"
+
+#: src/ftp.c:1049
+#, c-format
+msgid "Recursion depth %d exceeded max. depth %d.\n"
+msgstr "La profondit� di %d nella ricorsione eccede il massimo ( %d ).\n"
+
+#: src/ftp.c:1096 src/http.c:1054
+#, c-format
+msgid ""
+"Local file `%s' is more recent, not retrieving.\n"
+"\n"
+msgstr ""
+"Il file locale `%s' � pi� recente, non lo scarico.\n"
+"\n"
+
+#: src/ftp.c:1102 src/http.c:1060
+#, c-format
+msgid "The sizes do not match (local %ld), retrieving.\n"
+msgstr "Le dimensioni non coincidono (locale %ld), lo scarico.\n"
+
+#: src/ftp.c:1119
+msgid "Invalid name of the symlink, skipping.\n"
+msgstr "Il nome del link simbolico non � valido, passo oltre.\n"
+
+#: src/ftp.c:1136
+#, c-format
+msgid ""
+"Already have correct symlink %s -> %s\n"
+"\n"
+msgstr ""
+"Ho gi� il link simbolico %s -> %s\n"
+"\n"
+
+#: src/ftp.c:1144
+#, c-format
+msgid "Creating symlink %s -> %s\n"
+msgstr "Creo il link simbolico %s -> %s\n"
+
+#: src/ftp.c:1155
+#, c-format
+msgid "Symlinks not supported, skipping symlink `%s'.\n"
+msgstr "Link simbolici non supportati, ignoro il link `%s'.\n"
+
+#: src/ftp.c:1167
+#, c-format
+msgid "Skipping directory `%s'.\n"
+msgstr "Ignoro la directory `%s'.\n"
+
+#: src/ftp.c:1176
+#, c-format
+msgid "%s: unknown/unsupported file type.\n"
+msgstr "%s: tipo di file sconosciuto/non supportato.\n"
+
+#: src/ftp.c:1193
+#, c-format
+msgid "%s: corrupt time-stamp.\n"
+msgstr "%s: time-stamp corrotto.\n"
+
+#: src/ftp.c:1213
+#, c-format
+msgid "Will not retrieve dirs since depth is %d (max %d).\n"
+msgstr "Non scarico le directory perch� la profondit� � %d (max %d).\n"
+
+#: src/ftp.c:1252
+#, c-format
+msgid "Not descending to `%s' as it is excluded/not-included.\n"
+msgstr "Non scendo nella directory `%s' perch� � esclusa/non inclusa.\n"
+
+#: src/ftp.c:1297
+#, c-format
+msgid "Rejecting `%s'.\n"
+msgstr "Rifiuto `%s'.\n"
+
+#. No luck.
+#. #### This message SUCKS.  We should see what was the
+#. reason that nothing was retrieved.
+#: src/ftp.c:1344
+#, c-format
+msgid "No matches on pattern `%s'.\n"
+msgstr "Nessun corrispondenza con il modello `%s'.\n"
+
+#: src/ftp.c:1404
+#, c-format
+msgid "Wrote HTML-ized index to `%s' [%ld].\n"
+msgstr "Scrivo l'indice in formato HTML in `%s' [%ld].\n"
+
+#: src/ftp.c:1409
+#, c-format
+msgid "Wrote HTML-ized index to `%s'.\n"
+msgstr "Scrivo l'indice in formato HTML in `%s'.\n"
+
+#: src/getopt.c:454
+#, c-format
+msgid "%s: option `%s' is ambiguous\n"
+msgstr "%s: l'opzione `%s' � ambigua\n"
+
+#: src/getopt.c:478
+#, c-format
+msgid "%s: option `--%s' doesn't allow an argument\n"
+msgstr "%s: l'opzione `--%s' non ammette argomenti\n"
+
+#: src/getopt.c:483
+#, c-format
+msgid "%s: option `%c%s' doesn't allow an argument\n"
+msgstr "%s: l'opzione `%c%s' non ammette argomenti\n"
+
+#: src/getopt.c:498
+#, c-format
+msgid "%s: option `%s' requires an argument\n"
+msgstr "%s: l'opzione `%s' richide un argomento\n"
+
+#. --option
+#: src/getopt.c:528
+#, c-format
+msgid "%s: unrecognized option `--%s'\n"
+msgstr "%s: opzione non riconosciuta`--%s'\n"
+
+#. +option or -option
+#: src/getopt.c:532
+#, c-format
+msgid "%s: unrecognized option `%c%s'\n"
+msgstr "%s: opzione non riconosciuta `%c%s'\n"
+
+#. 1003.2 specifies the format of this message.
+#: src/getopt.c:563
+#, c-format
+msgid "%s: illegal option -- %c\n"
+msgstr "%s: opzione illegale -- %c\n"
+
+#. 1003.2 specifies the format of this message.
+#: src/getopt.c:602
+#, c-format
+msgid "%s: option requires an argument -- %c\n"
+msgstr "%s: l'opzione richiede un argomento -- %c\n"
+
+#: src/host.c:432
+#, c-format
+msgid "%s: Cannot determine user-id.\n"
+msgstr "%s: Impossibile determinare lo user-id .\n"
+
+#: src/host.c:444
+#, c-format
+msgid "%s: Warning: uname failed: %s\n"
+msgstr "%s: Attenzione: uname fallita: %s\n"
+
+#: src/host.c:456
+#, c-format
+msgid "%s: Warning: gethostname failed\n"
+msgstr "%s: Attenzione: gethostname fallita\n"
+
+#: src/host.c:484
+#, c-format
+msgid "%s: Warning: cannot determine local IP address.\n"
+msgstr "%s: Attenzione: impossibile determinare l'indirizzo IP locale.\n"
+
+#: src/host.c:498
+#, c-format
+msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
+msgstr ""
+"%s: Attenzione: impossibile fare la risoluzione inversa dell'indirizzo\n"
+"      IP locale.\n"
+
+#. This gets ticked pretty often.  Karl Berry reports
+#. that there can be valid reasons for the local host
+#. name not to be an FQDN, so I've decided to remove the
+#. annoying warning.
+#: src/host.c:511
+#, c-format
+msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
+msgstr ""
+"%s: Attenzione: la risoluzione inversa dell'indirizzo locale non ha\n"
+"      prodotto un FQDN!\n"
+
+#: src/host.c:539
+msgid "Host not found"
+msgstr "Host non trovato"
+
+#: src/host.c:541
+msgid "Unknown error"
+msgstr "Errore sconosciuto"
+
+#: src/html.c:439 src/html.c:441
+#, c-format
+msgid "Index of /%s on %s:%d"
+msgstr "Indice della directory /%s su %s:%d"
+
+#: src/html.c:463
+msgid "time unknown       "
+msgstr "data sconosciuta      "
+
+#: src/html.c:467
+msgid "File        "
+msgstr "File        "
+
+#: src/html.c:470
+msgid "Directory   "
+msgstr "Directory   "
+
+#: src/html.c:473
+msgid "Link        "
+msgstr "Link        "
+
+#: src/html.c:476
+msgid "Not sure    "
+msgstr "Incerto   "
+
+#: src/html.c:494
+#, c-format
+msgid " (%s bytes)"
+msgstr " (%s byte)"
+
+#: src/http.c:492
+msgid "Failed writing HTTP request.\n"
+msgstr "Non riesco a scrivere la richiesta HTTP.\n"
+
+#: src/http.c:497
+#, c-format
+msgid "%s request sent, awaiting response... "
+msgstr "%s richiesta inviata, aspetto la risposta... "
+
+#: src/http.c:536
+msgid "End of file while parsing headers.\n"
+msgstr "Raggiunta la fine del file durante l'analisi degli header.\n"
+
+#: src/http.c:547
+#, c-format
+msgid "Read error (%s) in headers.\n"
+msgstr "Errore di lettura degli header (%s).\n"
+
+#: src/http.c:587
+msgid "No data received"
+msgstr "Nessun dato ricevuto"
+
+#: src/http.c:589
+msgid "Malformed status line"
+msgstr "Riga di stato malformata"
+
+#: src/http.c:594
+msgid "(no description)"
+msgstr "(nessuna descrizione)"
+
+#. If we have tried it already, then there is not point
+#. retrying it.
+#: src/http.c:678
+msgid "Authorization failed.\n"
+msgstr "Autorizzazione fallita.\n"
+
+#: src/http.c:685
+msgid "Unknown authentication scheme.\n"
+msgstr "Schema di autotentificazione sconosciuto.\n"
+
+#: src/http.c:748
+#, c-format
+msgid "Location: %s%s\n"
+msgstr "Location: %s%s\n"
+
+#: src/http.c:749 src/http.c:774
+msgid "unspecified"
+msgstr "non specificato"
+
+#: src/http.c:750
+msgid " [following]"
+msgstr " [segue]"
+
+#. No need to print this output if the body won't be
+#. downloaded at all, or if the original server response is
+#. printed.
+#: src/http.c:764
+msgid "Length: "
+msgstr "Lunghezza: "
+
+#: src/http.c:769
+#, c-format
+msgid " (%s to go)"
+msgstr " (%s per finire)"
+
+#: src/http.c:774
+msgid "ignored"
+msgstr "ignorato"
+
+#: src/http.c:857
+msgid "Warning: wildcards not supported in HTTP.\n"
+msgstr "Attenzione: le wildcard non sono supportate in HTTP.\n"
+
+#. If opt.noclobber is turned on and file already exists, do not
+#. retrieve the file
+#: src/http.c:872
+#, c-format
+msgid "File `%s' already there, will not retrieve.\n"
+msgstr "Il file `%s' � gi� presente, non lo scarico.\n"
+
+#: src/http.c:978
+#, c-format
+msgid "Cannot write to `%s' (%s).\n"
+msgstr "Non riesco a scrivere in `%s' (%s).\n"
+
+#: src/http.c:988
+#, c-format
+msgid "ERROR: Redirection (%d) without location.\n"
+msgstr "ERRORE: Redirezione (%d) senza posizione.\n"
+
+#: src/http.c:1011
+#, c-format
+msgid "%s ERROR %d: %s.\n"
+msgstr "%s ERRORE %d: %s.\n"
+
+#: src/http.c:1023
+msgid "Last-modified header missing -- time-stamps turned off.\n"
+msgstr "Manca l'header last-modified -- date disattivate.\n"
+
+#: src/http.c:1031
+msgid "Last-modified header invalid -- time-stamp ignored.\n"
+msgstr "Header last-modified non valido -- data ignorata.\n"
+
+#: src/http.c:1064
+msgid "Remote file is newer, retrieving.\n"
+msgstr "Il file remoto � pi� recente, lo scarico.\n"
+
+#: src/http.c:1098
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%ld/%ld]\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' salvato [%ld/%ld]\n"
+"\n"
+
+#: src/http.c:1130
+#, c-format
+msgid "%s (%s) - Connection closed at byte %ld. "
+msgstr "%s (%s) - Connessione chiusa al byte %ld. "
+
+#: src/http.c:1138
+#, c-format
+msgid ""
+"%s (%s) - `%s' saved [%ld/%ld])\n"
+"\n"
+msgstr ""
+"%s (%s) - `%s' salvati [%ld/%ld])\n"
+"\n"
+
+#: src/http.c:1150
+#, c-format
+msgid "%s (%s) - Connection closed at byte %ld/%ld. "
+msgstr "%s (%s) - Connessione chiusa al byte  %ld/%ld. "
+
+#: src/http.c:1161
+#, c-format
+msgid "%s (%s) - Read error at byte %ld (%s)."
+msgstr "%s (%s) - Errore di lettura al byte %ld (%s). "
+
+#: src/http.c:1169
+#, c-format
+msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
+msgstr "%s (%s) - Errore di lettura al %ld/%ld (%s). "
+
+#: src/init.c:312 src/netrc.c:250
+#, c-format
+msgid "%s: Cannot read %s (%s).\n"
+msgstr "%s: Impossibile leggere %s (%s).\n"
+
+#: src/init.c:333 src/init.c:339
+#, c-format
+msgid "%s: Error in %s at line %d.\n"
+msgstr "%s: Errore in %s alla linea %d.\n"
+
+#: src/init.c:370
+#, c-format
+msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
+msgstr ""
+"%s: Attenzione: Sia il wgetrc di sistema che quello personale puntano\n"
+"                  a `%s'.\n"
+
+#: src/init.c:458
+#, c-format
+msgid "%s: BUG: unknown command `%s', value `%s'.\n"
+msgstr "%s: BUG: comando `%s' sconosciuto, valore `%s'.\n"
+
+#: src/init.c:485
+#, c-format
+msgid "%s: %s: Please specify on or off.\n"
+msgstr "%s: %s: Specificare on oppure off.\n"
+
+#: src/init.c:503 src/init.c:760 src/init.c:782 src/init.c:855
+#, c-format
+msgid "%s: %s: Invalid specification `%s'.\n"
+msgstr "%s: %s: Specificazione non valida `%s'\n"
+
+#: src/init.c:616 src/init.c:638 src/init.c:660 src/init.c:686
+#, c-format
+msgid "%s: Invalid specification `%s'\n"
+msgstr "wget: %s: Specificazione non valida `%s'\n"
+
+#: src/main.c:101
+#, c-format
+msgid "Usage: %s [OPTION]... [URL]...\n"
+msgstr "Uso: %s [OPZIONE]... [URL]...\n"
+
+#: src/main.c:109
+#, c-format
+msgid "GNU Wget %s, a non-interactive network retriever.\n"
+msgstr ""
+"GNU Wget %s, un programma non interattivo per scaricare file dalla rete.\n"
+
+#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
+#. don't bitch.  Also, it makes translation much easier.
+#: src/main.c:114
+msgid ""
+"\n"
+"Mandatory arguments to long options are mandatory for short options too.\n"
+"\n"
+msgstr ""
+"\n"
+"Gli argomenti obbligatori per le opzioni lunghe lo sono anche per quelle\n"
+"corte.\n"
+
+#: src/main.c:117
+msgid ""
+"Startup:\n"
+"  -V,  --version           display the version of Wget and exit.\n"
+"  -h,  --help              print this help.\n"
+"  -b,  --background        go to background after startup.\n"
+"  -e,  --execute=COMMAND   execute a `.wgetrc' command.\n"
+"\n"
+msgstr ""
+"Avvio:\n"
+"  -V,  --version           mostra la versione di Wget ed esce.\n"
+"  -h,  --help              mostra questo aiuto.\n"
+"  -b,  --background        va in background dopo l'avvio.\n"
+"  -e,  --execute=COMANDO   esegue un comando `.wgetrc'.\n"
+"\n"
+
+#: src/main.c:123
+msgid ""
+"Logging and input file:\n"
+"  -o,  --output-file=FILE     log messages to FILE.\n"
+"  -a,  --append-output=FILE   append messages to FILE.\n"
+"  -d,  --debug                print debug output.\n"
+"  -q,  --quiet                quiet (no output).\n"
+"  -v,  --verbose              be verbose (this is the default).\n"
+"  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
+"  -i,  --input-file=FILE      read URL-s from file.\n"
+"  -F,  --force-html           treat input file as HTML.\n"
+"\n"
+msgstr ""
+"File di log e d'ingresso:\n"
+"  -o,  --output-file=FILE     registra i messaggi su FILE.\n"
+"  -a,  --append-output=FILE   accoda i messaggi a FILE.\n"
+"  -d,  --debug                mostra l'output di debug.\n"
+"  -q,  --quiet                silenzioso (nessun output).\n"
+"  -v,  --verbose              prolisso (questo � il comportamento\n"
+"                              predefinito).\n"
+"  -nv, --non-verbose          meno prolisso, senza diventare silenzioso.\n"
+"  -i,  --input-file=FILE      legge gli URL da FILE.\n"
+"  -F,  --force-html           tratta il file di input come HTML.\n"
+"\n"
+
+#: src/main.c:133
+msgid ""
+"Download:\n"
+"  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
+"unlimits).\n"
+"  -O   --output-document=FILE   write documents to FILE.\n"
+"  -nc, --no-clobber             don't clobber existing files.\n"
+"  -c,  --continue               restart getting an existing file.\n"
+"       --dot-style=STYLE        set retrieval display style.\n"
+"  -N,  --timestamping           don't retrieve files if older than local.\n"
+"  -S,  --server-response        print server response.\n"
+"       --spider                 don't download anything.\n"
+"  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
+"  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
+"  -Y,  --proxy=on/off           turn proxy on or off.\n"
+"  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
+"\n"
+msgstr ""
+"Download:\n"
+"  -t,  --tries=NUMERO           imposta il numero di tentativi a NUMERO\n"
+"                                (0 = illimitati)\n"
+"  -O   --output-document=FILE   scrive l'output su FILE.\n"
+"  -nc, --no-clobber             non sovrascrive i file gi� esistenti.\n"
+"  -c,  --continue               riprende a scaricare un file gi� esistente.\n"
+"       --dot-style=STILE        imposta lo stile di visualizzazione dello\n"
+"                                scaricamento.\n"
+"  -N,  --timestamping           non scarica i file se sono pi� vecchi di\n"
+"                                quelli locali.\n"
+"  -S,  --server-response        mostra le risposte del server.\n"
+"       --spider                 non scarica niente.\n"
+"  -T,  --timeout=SECONDI        imposta il timeout di lettura a SECONDI.\n"
+"  -w,  --wait=SECONDI           aspetta SECONDI tra i vari scarichi.\n"
+"  -Y,  --proxy=on/off           attiva o disabilita l'uso del proxy.\n"
+"  -Q,  --quota=NUMERO           imposta la quota di scarico a NUMERO.\n"
+"\n"
+
+#: src/main.c:147
+msgid ""
+"Directories:\n"
+"  -nd  --no-directories            don't create directories.\n"
+"  -x,  --force-directories         force creation of directories.\n"
+"  -nH, --no-host-directories       don't create host directories.\n"
+"  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
+"       --cut-dirs=NUMBER           ignore NUMBER remote directory "
+"components.\n"
+"\n"
+msgstr ""
+"Directory:\n"
+"  -nd  --no-directories             non crea directory.\n"
+"  -x,  --force-directories          forza la creazione delle directory.\n"
+"  -nH, --no-host-directories        non crea directory sull'host.\n"
+"  -P,  --directory-prefix=PREFISSO  salva i file in PREFISSO/...\n"
+"       --cut-dirs=NUMERO            ignora NUMERO componenti delle\n"
+"                                    directory remote.\n"
+"\n"
+
+#: src/main.c:154
+msgid ""
+"HTTP options:\n"
+"       --http-user=USER      set http user to USER.\n"
+"       --http-passwd=PASS    set http password to PASS.\n"
+"  -C,  --cache=on/off        (dis)allow server-cached data (normally "
+"allowed).\n"
+"       --ignore-length       ignore `Content-Length' header field.\n"
+"       --header=STRING       insert STRING among the headers.\n"
+"       --proxy-user=USER     set USER as proxy username.\n"
+"       --proxy-passwd=PASS   set PASS as proxy password.\n"
+"  -s,  --save-headers        save the HTTP headers to file.\n"
+"  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
+"\n"
+msgstr ""
+"Opzioni HTTP:\n"
+"       --http-user=UTENTE    imposta l'utente http a UTENTE.\n"
+"       --http-passwd=PASS    Imposta la password http a PASS.\n"
+"  -C,  --cache=on/off        permette o non permette la cache dei dati sul\n"
+"                             server (normalmente permessa).\n"
+"       --ignore-length       ignora il campo `Content-Length' degli header.\n"
+"       --header=STRINGA      inserisce STRINGA tra gli header.\n"
+"       --proxy-user=UTENTE   usa UTENTE come nome utente per il proxy.\n"
+"       --proxy-passwd=PASS   usa PASS come password per il proxy.\n"
+"  -s,  --save-headers        salva gli header HTTP sul file.\n"
+"  -U,  --user-agent=AGENT    si identifica come AGENT invece che come\n"
+"                             Wget/VERSIONE.\n"
+"\n"
+
+#: src/main.c:165
+msgid ""
+"FTP options:\n"
+"       --retr-symlinks   retrieve FTP symbolic links.\n"
+"  -g,  --glob=on/off     turn file name globbing on or off.\n"
+"       --passive-ftp     use the \"passive\" transfer mode.\n"
+"\n"
+msgstr ""
+"Opzioni FTP:\n"
+"       --retr-symlinks   scarica i link simbolici FTP.\n"
+"  -g,  --glob=on/off     abilita o disabilita il file name globbing.\n"
+"       --passive-ftp     usa il modo di trasferimento \"passivo\".\n"
+"\n"
+
+#: src/main.c:170
+msgid ""
+"Recursive retrieval:\n"
+"  -r,  --recursive             recursive web-suck -- use with care!.\n"
+"  -l,  --level=NUMBER          maximum recursion depth (0 to unlimit).\n"
+"       --delete-after          delete downloaded files.\n"
+"  -k,  --convert-links         convert non-relative links to relative.\n"
+"  -m,  --mirror                turn on options suitable for mirroring.\n"
+"  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
+"\n"
+msgstr ""
+"Scarico ricorsivo:\n"
+"  -r,  --recursive             web-suck ricorsivo -- usare con cautela!\n"
+"  -l,  --level=NUMERO          profondit� massima di ricorsione\n"
+"                               (0 = illimitata).\n"
+"       --delete-after          cancella i file scaricati.\n"
+"  -k,  --convert-links         converti i link simbolici non relativi in\n"
+"                               relativi.\n"
+"  -m,  --mirror                abilita le opzioni adatte per il mirroring.\n"
+"  -nr, --dont-remove-listing   non rimuove i file `.listing'.\n"
+"\n"
+
+#: src/main.c:178
+msgid ""
+"Recursive accept/reject:\n"
+"  -A,  --accept=LIST                list of accepted extensions.\n"
+"  -R,  --reject=LIST                list of rejected extensions.\n"
+"  -D,  --domains=LIST               list of accepted domains.\n"
+"       --exclude-domains=LIST       comma-separated list of rejected "
+"domains.\n"
+"  -L,  --relative                   follow relative links only.\n"
+"       --follow-ftp                 follow FTP links from HTML documents.\n"
+"  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
+"  -I,  --include-directories=LIST   list of allowed directories.\n"
+"  -X,  --exclude-directories=LIST   list of excluded directories.\n"
+"  -nh, --no-host-lookup             don't DNS-lookup hosts.\n"
+"  -np, --no-parent                  don't ascend to the parent directory.\n"
+"\n"
+msgstr ""
+"Accetto/rifiuto ricorsivo:\n"
+"  -A,  --accept=LISTA                lista di estensioni accettate.\n"
+"  -R,  --reject=LISTA                lista di  estensioni rifiutate.\n"
+"  -D,  --domains=LISTA               lista di domini accettati.\n"
+"       --exclude-domains=LISTA       lista separata da virgole di domini\n"
+"                                     rifiutati\n"
+"  -L,  --relative                    segue solo i link relativi.\n"
+"       --follow-ftp                  segue i link FTP dai documenti HTTP.\n"
+"  -H,  --span-hosts                  in modo ricorsivo passa anche ad altri\n"
+"                                     host\n"
+"  -I,  --include-directories=LISTA   lista di directory permesse.\n"
+"  -X,  --exclude-directories=LISTA   lista di directory escluse.\n"
+"  -nh, --no-host-lookup              non effettua la risoluzione DNS degli\n"
+"                                     host.\n"
+"  -np, --no-parent                   non risale alla directory genitrice.\n"
+"\n"
+
+#: src/main.c:191
+msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
+msgstr "Inviare segnalazioni di bug e suggerimenti a <bug-wget@gnu.org>.\n"
+
+#: src/main.c:347
+#, c-format
+msgid "%s: debug support not compiled in.\n"
+msgstr ""
+"wget: %s: supporto per il debug non attivato in fase di compilazione.\n"
+
+#: src/main.c:395
+msgid ""
+"Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.\n"
+"This program is distributed in the hope that it will be useful,\n"
+"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
+"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
+"GNU General Public License for more details.\n"
+msgstr ""
+"Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.\n"
+"Questo programma � distribuito nella speranza che possa essere utile,\n"
+"ma SENZA ALCUNA GARANZIA; anche senza la garanzia implicita di\n"
+"COMMERCIABILITA` o di ADEGUATEZZA AD UN PARTICOLARE SCOPO. Si consulti\n"
+"la GNU General Public License per maggiori dettagli.\n"
+
+#: src/main.c:401
+msgid ""
+"\n"
+"Written by Hrvoje Niksic <hniksic@srce.hr>.\n"
+msgstr ""
+"\n"
+"Scritto da Hrvoje Niksic <hniksic@srce.hr>.\n"
+
+#: src/main.c:465
+#, c-format
+msgid "%s: %s: invalid command\n"
+msgstr "%s: %s: comando non valido\n"
+
+#: src/main.c:515
+#, c-format
+msgid "%s: illegal option -- `-n%c'\n"
+msgstr "%s: opzione illegale -- `-n%c'\n"
+
+#. #### Something nicer should be printed here -- similar to the
+#. pre-1.5 `--help' page.
+#: src/main.c:518 src/main.c:560 src/main.c:591
+#, c-format
+msgid "Try `%s --help' for more options.\n"
+msgstr "Usare `%s --help' per ulteriori opzioni.\n"
+
+#: src/main.c:571
+msgid "Can't be verbose and quiet at the same time.\n"
+msgstr "Non posso essere prolisso e silenzioso allo stesso tempo.\n"
+
+#: src/main.c:577
+msgid "Can't timestamp and not clobber old files at the same time.\n"
+msgstr ""
+"Non posso impostare le date e contemporaneamente non modificare\n"
+"i vecchi file.\n"
+
+#. No URL specified.
+#: src/main.c:586
+#, c-format
+msgid "%s: missing URL\n"
+msgstr "%s: manca l'URL\n"
+
+#: src/main.c:674
+#, c-format
+msgid "No URLs found in %s.\n"
+msgstr "Non ci sono URL in %s.\n"
+
+#: src/main.c:683
+#, c-format
+msgid ""
+"\n"
+"FINISHED --%s--\n"
+"Downloaded: %s bytes in %d files\n"
+msgstr ""
+"\n"
+"FINITO --%s--\n"
+"Scaricati: %s byte in %d file\n"
+
+#: src/main.c:688
+#, c-format
+msgid "Download quota (%s bytes) EXCEEDED!\n"
+msgstr "Quota per lo scarico (%s byte) SUPERATA!\n"
+
+#. Please note that the double `%' in `%%s' is intentional, because
+#. redirect_output passes tmp through printf.
+#: src/main.c:715
+msgid "%s received, redirecting output to `%%s'.\n"
+msgstr "%s ricevuti, redirigo l'output su `%%s'.\n"
+
+#: src/mswindows.c:118
+#, c-format
+msgid ""
+"\n"
+"CTRL+Break received, redirecting output to `%s'.\n"
+"Execution continued in background.\n"
+"You may stop Wget by pressing CTRL+ALT+DELETE.\n"
+msgstr ""
+"\n"
+"CTRL+Break intercettato, ridirigo l'output su `%s'.\n"
+"L'esecuzione continuer� in background\n"
+"Wget pu� essere fermato premendo CTRL+ALT+DELETE.\n"
+
+#. parent, no error
+#: src/mswindows.c:135 src/utils.c:268
+msgid "Continuing in background.\n"
+msgstr "Continuo in background.\n"
+
+#: src/mswindows.c:137 src/utils.c:270
+#, c-format
+msgid "Output will be written to `%s'.\n"
+msgstr "L'output sar� scritto su `%s'.\n"
+
+#: src/mswindows.c:227
+#, c-format
+msgid "Starting WinHelp %s\n"
+msgstr "Avvio WinHelp %s\n"
+
+#: src/mswindows.c:254 src/mswindows.c:262
+#, c-format
+msgid "%s: Couldn't find usable socket driver.\n"
+msgstr "%s: Non riesco a trovare un driver utilizzabile per i socket.\n"
+
+#: src/netrc.c:334
+#, c-format
+msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
+msgstr ""
+"%s: %s:%d: attenzione: il token \"%s\" appare prima di un nome di macchina\n"
+
+#: src/netrc.c:365
+#, c-format
+msgid "%s: %s:%d: unknown token \"%s\"\n"
+msgstr "%s: %s:%d:  token \"%s\" sconosciuto\n"
+
+#: src/netrc.c:429
+#, c-format
+msgid "Usage: %s NETRC [HOSTNAME]\n"
+msgstr "Uso: %s NETRC [HOSTNAME]\n"
+
+#: src/netrc.c:439
+#, c-format
+msgid "%s: cannot stat %s: %s\n"
+msgstr "%s: stat su %s fallita: %s\n"
+
+#: src/recur.c:449 src/retr.c:462
+#, c-format
+msgid "Removing %s.\n"
+msgstr "Rimuovo %s.\n"
+
+#: src/recur.c:450
+#, c-format
+msgid "Removing %s since it should be rejected.\n"
+msgstr "Rimuovo %s poich� deve essere rifiutato.\n"
+
+#: src/recur.c:609
+msgid "Loading robots.txt; please ignore errors.\n"
+msgstr "Carico robots.txt; si ignorino eventuali errori.\n"
+
+#: src/retr.c:193
+#, c-format
+msgid ""
+"\n"
+"          [ skipping %dK ]"
+msgstr ""
+"\n"
+"         [ salto %dK ]"
+
+#: src/retr.c:344
+msgid "Could not find proxy host.\n"
+msgstr "Non riesco a trovare il proxy host.\n"
+
+#: src/retr.c:355
+#, c-format
+msgid "Proxy %s: Must be HTTP.\n"
+msgstr "Proxy %s: Deve essere HTTP.\n"
+
+#: src/retr.c:398
+#, c-format
+msgid "%s: Redirection to itself.\n"
+msgstr "%s: Redirezione su se stesso.\n"
+
+#: src/retr.c:483
+msgid ""
+"Giving up.\n"
+"\n"
+msgstr ""
+"Rinuncio.\n"
+"\n"
+
+#: src/retr.c:483
+msgid ""
+"Retrying.\n"
+"\n"
+msgstr ""
+"Ritento.\n"
+"\n"
+
+#: src/url.c:940
+#, c-format
+msgid "Error (%s): Link %s without a base provided.\n"
+msgstr "Errore (%s): Link %s fornito senza una base.\n"
+
+#: src/url.c:955
+#, c-format
+msgid "Error (%s): Base %s relative, without referer URL.\n"
+msgstr "Errore (%s): Base %s relativa, senza URL di riferimento\n"
+
+#: src/url.c:1373
+#, c-format
+msgid "Converting %s... "
+msgstr "Converto %s... "
+
+#: src/url.c:1378 src/url.c:1389
+#, c-format
+msgid "Cannot convert links in %s: %s\n"
+msgstr "Non riesco a convertire i link in %s: %s\n"
+
+#: src/utils.c:71
+#, c-format
+msgid "%s: %s: Not enough memory.\n"
+msgstr "%s: %s: Memoria insufficiente.\n"
+
+#: src/utils.c:203
+msgid "Unknown/unsupported protocol"
+msgstr "Protocollo sconosciuto/non supportato"
+
+#: src/utils.c:206
+msgid "Invalid port specification"
+msgstr "Porta specificata non valida"
+
+#: src/utils.c:209
+msgid "Invalid host name"
+msgstr "Nome host non valido"
+
+#: src/utils.c:430
+#, c-format
+msgid "Failed to unlink symlink `%s': %s\n"
+msgstr "Non riesco a rimuovere il link simbolico `%s': %s\n"
