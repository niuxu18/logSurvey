# Italian messages for wget.
# Copyright (C) 1998, 2004, 2005, 2007, 2008, 2009 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Marco Colombo <m.colombo@ed.ac.uk>, 2004, 2005, 2007, 2008, 2009.
# Giovanni Bortolozzo <borto@dei.unipd.it>, 1998.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-10 11:10+0100\n"
"Last-Translator: Marco Colombo <m.colombo@ed.ac.uk>\n"
"Language-Team: Italian <tp@lists.linux.it>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=(n != 1);\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Errore di sistema sconosciuto"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: l'opzione \"%s\" è ambigua\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: l'opzione \"--%s\" non accetta argomenti\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: l'opzione \"%c%s\" non accetta argomenti\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: l'opzione \"%s\" richiede un argomento\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: opzione \"--%s\" non riconosciuta\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: opzione \"%c%s\" non riconosciuta\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: opzione illecita -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: opzione non valida -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: l'opzione richiede un argomento -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: l'opzione \"-W %s\" è ambigua\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: l'opzione \"-W %s\" non accetta argomenti\n"

#. TRANSLATORS:
#. Get translations for open and closing quotation marks.
#.
#. The message catalog should translate "`" to a left
#. quotation mark suitable for the locale, and similarly for
#. "'".  If the catalog has no translation,
#. locale_quoting_style quotes `like this', and
#. clocale_quoting_style quotes "like this".
#.
#. For example, an American English Unicode locale should
#. translate "`" to U+201C (LEFT DOUBLE QUOTATION MARK), and
#. should translate "'" to U+201D (RIGHT DOUBLE QUOTATION
#. MARK).  A British English Unicode locale should instead
#. translate these to U+2018 (LEFT SINGLE QUOTATION MARK)
#. and U+2019 (RIGHT SINGLE QUOTATION MARK), respectively.
#.
#. If you don't know what to put here, please see
#. <http://en.wikipedia.org/wiki/Quotation_mark#Glyphs>
#. and use glyphs suitable for your language.
#: lib/quotearg.c:272
msgid "`"
msgstr "\""

#: lib/quotearg.c:273
msgid "'"
msgstr "\""

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "memoria esaurita"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: impossibile risolvere l'indirizzo di bind %s; bind disabilitato.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Connessione a %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Connessione a %s:%d..."

#: src/connect.c:358
msgid "connected.\n"
msgstr "connesso.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "fallito: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: impossibile risolvere l'indirizzo dell'host %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Convertiti %d file in %s secondi.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Conversione di %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "niente da fare.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Impossibile convertire i collegamenti in %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Impossibile rimuovere %s: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Impossibile fare il backup di %s in %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Errore di sintassi in Set-Cookie: %s alla posizione %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Cookie proveniente da %s ha tentato di impostare il dominio a %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Impossibile aprire il file dei cookies %s: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Errore scrivendo in %s: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Errore chiudendo %s: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Tipo di elencazione non gestito, si prova un parser di elencazioni Unix.\n"

# FIXME: su o presso?
#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Indice della directory /%s su %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "data sconosciuta      "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "File        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Directory   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Collegam.   "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Incerto     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s byte)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Lunghezza: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) rimanenti"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s rimanenti"

# FIXME
#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (non autorevole)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Accesso come utente %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr ""
"Errore nella risposta del server, chiusura della connessione di controllo.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Errore nel codice di benvenuto del server.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Scrittura non riuscita, chiusura della connessione di controllo.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Il server rifiuta il login.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Login non corretto.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Login eseguito!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Errore del server, impossibile determinare il tipo di sistema.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "fatto.   "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "fatto.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tipo \"%c\" sconosciuto, chiusura della connessione di controllo.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "fatto.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD non necessario.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"La directory %s non esiste.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD non necessario.\n"

# GB: initiate = inizializzare
#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Impossibile iniziare il trasferimento PASV.\n"

# GB: parse = comprendere
#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Impossibile analizzare la risposta PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "impossibile connettersi a %s porta %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Errore di bind (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT non valido.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST non riuscito, riavvio da capo.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Il file %s esiste.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Il file %s non esiste.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Il file %s non esiste.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Il file o la directory %s non esiste.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s è venuto in esistenza.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, chiusura della connessione di controllo.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Connessione dati: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Connessione di controllo chiusa.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Trasferimento dati interrotto.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Il file %s è già presente, non viene scaricato.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(tentativo:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - scritto su stdout %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s salvato [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Rimozione di %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Usato %s come file di elenco temporaneo.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "%s rimosso.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "La profondità di ricorsione %d eccede il massimo (%d).\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Il file remoto è più vecchio del file locale %s -- non viene scaricato.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Il file remoto è più recente del file locale %s -- scaricamento in corso.\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Le dimensioni non coincidono (locale %s) -- scaricamento in corso.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Il nome del link simbolico non è valido, saltato.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Link simbolico già esistente %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Creazione del link simbolico %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Collegamenti simbolici non gestiti, collegamento %s saltato.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Directory %s saltata.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: tipo di file sconosciuto/non gestito.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: timestamp danneggiato.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Le directory non verranno scaricate perché la loro profondità è %d (max %"
"d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Non si discende nella directory %s perché è esclusa/non inclusa.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "%s rifiutato.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Errore nella corrispondenza di %s con %s: %s.\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Nessun corrispondenza con il modello %s.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Indice in formato HTML scritto in %s [%s].\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Indice in formato HTML scritto in %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "ERRORE"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "AVVERTIMENTO"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: nessun certificato presentato da %s.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: il certificato di %s non è fidato.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: il certificate di %s non ha un emittente conosciuto.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: Il certificato di %s è stato revocato.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Errore durante l'inizializzazione del certificato X509: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Nessun certificato trovato\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Errore analizzando il certificato: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Il certificato non è ancora stato attivato\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Il certificato è scaduto\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"Il proprietario del certificato non corrisponde al nome dell'host %s.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Host sconosciuto"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Risoluzione del nome temporaneamente fallita"

#: src/host.c:364
msgid "Unknown error"
msgstr "Errore sconosciuto"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Risoluzione di %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "fallito: nessun indirizzo IPv4/IPv6 per l'host.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "fallito: tempo scaduto.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: impossibile risolvere il link incompleto %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL non valido %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Scrittura della richiesta HTTP non riuscita: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Nessuna intestazione, si assume HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "SSL disabilitato a causa di errori.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "File di dati POST %s mancante: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Riutilizzo della connessione esistente a %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Lettura della risposta del proxy non riuscita: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Proxy tunneling non riuscito: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s richiesta inviata, in attesa di risposta... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Nessun dato ricevuto.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Errore di lettura nelle intestazioni (%s).\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Schema di autotentificazione sconosciuto.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Autorizzazione fallita.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Il file %s è già presente, non viene scaricato.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Riga di stato malformata"

#: src/http.c:2095
msgid "(no description)"
msgstr "(nessuna descrizione)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Posizione: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "non specificato"

#: src/http.c:2156
msgid " [following]"
msgstr " [segue]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Il file è già interamente scaricato; niente da fare.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Lunghezza: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignorato"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Salvataggio in: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Attenzione: i metacaratteri non sono supportati in HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Modalità spider abilitata. Controllare se il file remoto esiste.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Impossibile scrivere in %s (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Impossibile stabilire una connessione SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERRORE: redirezione (%d) senza posizione di destinazione.\n"

# FIXME
#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Il file remoto non esiste -- collegamento rotto!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERRORE %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Intestazione Last-modified mancante -- timestamp disattivati.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Intestazione Last-modified non valido -- timestamp ignorato.\n"

# Perché "server file" e non "remote file"? C'è differenza?
#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Il file del server è più vecchio del file locale %s -- non viene scaricato.\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Le dimensioni non coincidono (locale %s) -- scaricamento in corso.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Il file remoto è più recente, scaricamento in corso.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Il file remoto esiste e potrebbe contenere collegamenti ad altre risorse -- "
"scaricamento in corso.\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Il file remoto esiste ma non contiene collegamenti -- non viene scaricato.\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Il file remoto esiste e potrebbe contenere ulteriori collegamenti,\n"
"ma la ricorsione è disabilitata -- non viene scaricato.\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr "Il file remoto esiste.\n"

#: src/http.c:2790
#, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s URL: %s %2d %s\n"

#: src/http.c:2837
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - scritto su stdout %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - %s salvato [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Connessione chiusa al byte %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Errore di lettura al byte %s (%s). "

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Errore di lettura al byte %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC punta a %s, che non esiste.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: impossibile leggere %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: errore in %s alla riga %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: errore di sintassi in %s alla riga %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: comando sconosciuto %s in %s alla riga %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Attenzione: il file wgetrc di sistema e quello personale puntano "
"entrambi a %s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: comando %s passato a --execute non valido\n"

# FIXME: boolean: booleano? logico?
#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: valore logico %s non valido, usare \"on\" oppure \"off\".\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: numero %s non valido.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: valore di byte %s non valido\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: periodo di tempo %s non valido\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: valore %s non valido.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: intestazione %s non valida.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: tipo di progresso %s non valido.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: restrizione %s non valida,\n"
"    usare [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Codifica %s non valida\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: locale non impostata\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Conversione da %s a %s non gestita\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Incontrata sequenza multibyte incompleta o non valida\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Codice di errore %d non gestito\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode non riuscito (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode non riuscito (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s ricevuti, output redirezionato su %s.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s ricevuto.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; logging disabilitato.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Uso: %s [OPZIONE]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Gli argomenti obbligatori per le opzioni lunghe lo sono anche per quelle "
"corte.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Avvio:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           mostra la versione di Wget ed esce.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              mostra questo aiuto.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        va in background dopo l'avvio.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""
"  -e,  --execute=COMANDO   esegue COMANDO come se fosse scritto in \".wgetrc"
"\".\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "File di log e di input:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FILE    registra i messaggi su FILE.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FILE  accoda i messaggi a FILE.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               mostra le informazioni di debug.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""
"       --wdebug              mostra le informazioni di debug Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               silenzioso (nessun output).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             prolisso (predefinito).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr "  -nv, --no-verbose          meno prolisso, ma non silenzioso.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=FILE     scarica gli URL scritti in FILE.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          tratta il file di input come HTML.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            risolve i collegamenti nel file HTML di input\n"
"                             (-i -F) come relativi all'URL.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Scaricamento:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=NUMERO           imposta il NUMERO di tentativi (0 = "
"illimitati).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused      riprova anche se la connessione è "
"rifiutata.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr ""
"  -O   --output-document=FILE   scrive tutti i documenti in un singolo "
"FILE.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr "  -nc, --no-clobber             non scaricare file già esistenti.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue               riprende a scaricare un file parzialmente\n"
"                                scaricato.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=TIPO          sceglie il TIPO di misurazione di "
"progresso.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping           non scarica file più vecchi di quelli "
"locali.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response        mostra le risposte del server.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                 non scarica niente.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr "  -T,  --timeout=SECONDI        imposta tutti i timeout a SECONDI.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SECONDI    imposta il timeout per la risoluzione del "
"DNS\n"
"                                a SECONDI.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SECONDI imposta il timeout di connessione a "
"SECONDI.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SECONDI   imposta il timeout di lettura a SECONDI.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SECONDI           aspetta SECONDI tra i vari download.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SECONDI      aspetta 1...SECONDI tra i tentativi di\n"
"                                scaricamento.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait            aspetta tra 0...2*WAIT secondi tra "
"scaricamenti.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr ""
"       --no-proxy               disattiva esplicitamente l'uso del proxy.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=NUMERO           imposta la quota di scaricamento a NUMERO.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=INDIRIZZO lega l'INDIRIZZO (nome dell'host o IP)\n"
"                                all'host locale.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""
"       --limit-rate=VELOCITÀ    limita la VELOCITÀ di scaricamento in byte.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache           disattiva la cache per la risoluzione del "
"DNS.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=SO limita i caratteri nei nomi dei file a "
"quelli\n"
"                                permessi dal sistema operativo SO indicato.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case           ignora maiuscole/minuscole nei file/"
"directory.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only             si connette solo a indirizzi IPv4.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only             si connette solo a indirizzi IPv6.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMIGLIA  si connette di preferenza ad indirizzi "
"della\n"
"                                 FAMIGLIA specificata (IPv6, IPv4 o none).\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=UTENTE             imposta il nome utente ftp e http a "
"UTENTE.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=PASS           imposta la password ftp e http a PASS.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            chiede la password.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  disattiva la gestione di IRI.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=ENC      usa ENC come codificla locale per gli IRI.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=ENC     usa ENC come codifica remota predefinita.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Directory:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           non crea directory.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        forza la creazione di directory.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      non crea directory sull'host.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     usa il nome di protocollo nelle "
"directory.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFISSO   salva i file in PREFISSO/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=NUMERO             ignora NUMERO componenti delle "
"directory\n"
"                                     remote.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Opzioni HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=UTENTE      imposta l'utente http a UTENTE.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-passwd=PASS      imposta la password http a PASS.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              non permette la cache dei dati sul server.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NOME     cambia il nome della pagina di default\n"
"                               (solitamente \"index.html\").\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension      salva i documenti HTML/CSS con l'estensione "
"corretta.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length       ignora il campo Content-Length nelle "
"intestazioni.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=STRINGA      inserisce STRINGA tra le intestazioni.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          massimo numero di redirezioni per pagina.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=UTENTE   imposta il nome utente per il proxy a UTENTE.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""
"       --proxy-passwd=PASS   imposta la password per il proxy a PASS.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL         include l'intestazione \"Referer: URL\" nella\n"
"                             richiesta HTTP.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers        salva le intestazioni HTTP su file.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENTE   si identifica come AGENTE invece che come\n"
"                             Wget/VERSIONE.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive  disabilita l'HTTP keep-alive (connessioni\n"
"                             persistenti).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            non usa i cookies.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=FILE   carica i cookies dal FILE prima della "
"sessione.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=FILE   salva i cookies sul FILE dopo la sessione.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  carica e salva i cookies per la sessione\n"
"                               (non permanenti).\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=STRINGA   usa il metodo POST; spedisce STRINGA come "
"dati.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FILE      usa il metodo POST; spedisce i contenuti del "
"FILE.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   onora l'intestazione Content-Disposition "
"quando\n"
"                               si scelgono nomi di file locali "
"(SPERIMENTALE).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     invia informazioni di autenticazione Basic "
"HTTP\n"
"                               senza prima aspettare la richiesta dal "
"server.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Opzioni HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PROT.  sceglie il protocollo sicuro, uno tra auto,\n"
"                                SSLv2, SSLv3,e TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   non valida il certificato del server.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FILE       file di certificato del client.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TIPO  tipo di certificato del client, PEM o DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FILE       file della chiave privata.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TIPO  tipo di chiave privata, PEM o DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=FILE    file con il bundle dei CA.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=DIR       directory dove è memorizzata la lista dei "
"CA.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FILE       file con dati casuali per inizializzare\n"
"                                SSL PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=FILE          file col nome del socket EGD con dati "
"casuali.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Opzioni FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             usa il formato Stream_LF per i file FTP "
"binari.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=UTENTE       imposta l'utente ftp a UTENTE.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=PASS     imposta la password ftp a PASS.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     non elimina i file \".listing\".\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob              disabilita il globbing FTP dei nome di file.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        disabilita la modalità di trasferimento "
"passiva.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks        scarica i file (non le directory) puntati dai\n"
"                              link simbolici quando si è in modalità "
"ricorsiva.\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Scaricamento ricorsivo:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          scaricamento ricorsivo.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=NUMERO       profondità massima di ricorsione\n"
"                            (inf o 0 = illimitata).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after         elimina localmente i file dopo averli "
"scaricati.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links        punta i collegamenti nei file HTML o CSS a\n"
"                              file locali.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted     salva il file X come X_orig prima di "
"convertirlo.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted     salva il file X come X.orig prima di "
"convertirlo.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror               scorciatoia per -N -r -l inf --no-remove-"
"listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites      scarica tutte le immagini, ecc, necessarie "
"per\n"
"                              visualizzare la pagina HTML.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments      tratta i commenti HTML in modalità strict "
"(SGML).\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Accetto/rifiuto ricorsivo:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LISTA                lista di estensioni accettate, separate "
"da\n"
"                                     virgole.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LISTA                lista di estensioni rifiutate, separate "
"da\n"
"                                     virgole.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LISTA               lista di domini accettati, separati da\n"
"                                     virgole.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LISTA       lista di domini rifiutati, separati "
"da \n"
"                                     virgole.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                  segue i link FTP dai documenti HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTA           lista di tag HTML, separati da "
"virgole,\n"
"                                     che vengono seguiti nello "
"scaricamento.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTA           lista di tag HTML, separati da "
"virgole,\n"
"                                     che vengono ignorati.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                  visita anche altri host quando si è in\n"
"                                     modalità ricorsiva.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                    segue solo i link relativi.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LISTA   lista di directory permesse.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LISTA   lista di directory escluse.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""
"  -np, --no-parent                   non risale alla directory superiore.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Inviare segnalazioni di bug e suggerimenti a <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr ""
"GNU Wget %s, un programma non interattivo per scaricare file dalla rete.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Password per l'utente %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Password: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Locale: "

#: src/main.c:782
msgid "Compile: "
msgstr "Compilazione: "

#: src/main.c:783
msgid "Link: "
msgstr "Collegamento: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s compilato su VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s compilato su %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (env)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (utente)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (sistema)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Copyright (C) 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Licenza GPLv3+: GNU GPL versione 3 o successiva\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Questo è software libero: siete liberi di modificarlo e redistribuirlo.\n"
"Non c'è ALCUNA GARANZIA, negli estremi permessi dalla legge.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Scritto da Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Attualmente mantenuto da Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Inviare segnalazioni di bug e suggerimenti a <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Usare \"%s --help\" per ulteriori opzioni.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: opzione illecita -- \"-n%c\"\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Impossibile essere prolisso e silenzioso allo stesso tempo.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Impossibile registrare le date senza allo stesso tempo modificare i file.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Impossibile specificare --inet4-only e --inet6-only simultaneamente.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Impossibile specificare -k e -0 simultaneamente se sono forniti URL "
"multipli\n"
"o in combinazione con -p o -r. Consultare il manuale per maggiori dettagli.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"ATTENZIONE: l'uso di -O con -r o -p fà sì che tutto ciò che viene scaricato\n"
"verrà messo nel singolo file specificato.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"ATTENZIONE: non è possibile registrare la data dei file in combinazione con -"
"O.\n"
"Consultare il manuale per maggiori dettagli.\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Il file \"%s\" è già presente, non viene scaricato.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Impossibile specificare --ask-password e --password simultaneamente.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL mancante\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Questa versione non gestisce gli IRI\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"ATTENZIONE: Impossibile riaprire lo standard output in modalità binaria; i "
"file\n"
"            scaricati potrebbero contenere terminatori di riga impropri.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Nessun URL trovato in %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"TERMINATO --%s--\n"
"Scaricati: %d file, %s in %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Quota di scaricamento di %s SUPERATA!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Prosecuzione in background.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Prosecuzione in background, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "L'output sarà scritto su %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: impossibile trovare un driver per i socket utilizzabile.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: attenzione: %s appare prima di un nome di macchina\n"

# token: termine?
#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: termine \"%s\" sconosciuto\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Uso: %s NETRC [HOSTNAME]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: stat di %s non riuscita: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "ATTENZIONE: si sta usando un seme casuale debole.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"Impossibile inizializzare PRNG; considerare l'utilizzo di --random-file.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: impossibile verificare il certificato di %s, rilasciato da %s:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Impossibile verificare localmente l'autorità dell'emittente.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Trovato certificato auto-firmato.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Il certificato rilasciato non è ancora valido.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Il certificato rilasciato è scaduto.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: il nome comune di certificato %s non corrisponde al nome dell'host "
"richiesto %s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: il nome comune di certificato non è valido (contiene un carattere NUL).\n"
"Questo può indicare che l'host non è chi si dichiara di essere\n"
"(cioè non è il vero %s).\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"Per connettersi a %s in modo non sicuro, usare \"--no-check-certificate\".\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ %sK ignorato ]"

# Da man wget:
# Use --progress=dot to switch to the ``dot'' display.  It traces the
# retrieval by printing dots on the screen, each dot representing a
# fixed amount of downloaded data.
#
# When using the dotted retrieval, you may also set the style by
# specifying the type as dot:style.
#
#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Stile di progresso %s non valido; lasciato invariato.\n"

# FIXME
#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  est %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   in "

# FIXME
#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Impossibile ottenere la frequenza di clock REALTIME: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Rimozione di %s poiché deve essere rifiutato.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Impossibile aprire %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Caricamento di robots.txt; ignorare eventuali errori.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Errore analizzando l'URL del proxy %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Errore nell'URL del proxy %s: deve essere HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "superate %d redirezioni.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Rinuncio.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Altro tentativo in corso.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Nessun collegamento rotto trovato.\n"
"\n"

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] "Trovato %d collegamento rotto.\n"
msgstr[1] "Trovati %d collegamenti rotti.\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Nessun errore"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Schema %s non gestito"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Schema mancante"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Nome dell'host non valido"

#: src/url.c:641
msgid "Bad port number"
msgstr "Numero di porta non valido"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Nome utente non valido"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Indirizzo numerico IPv6 non terminato"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Indirizzo IPv6 non supportato"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Indirizzo numerico IPv6 non valido"

# FIXME
#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "Gestione di HTTPS non compilata"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: allocazione di memoria non riuscita; memoria esaurita.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: allocazione di %ld byte non riuscita; memoria esaurita.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: buffer di testo troppo grande (%ld byte), interruzione.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Prosecuzione in background, pid %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Rimozione del collegamento simbolico %s non riuscita: %s\n"

# NdT: tradotta consultando "man wget".
#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            aggiunge URL ai link relativi quando si usa -"
#~ "F \n"
#~ "                             sul file indicato con -i.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  preserva i permessi remoti dei file.\n"

#~ msgid ""
#~ "Cannot specify -N if -O is given. See the manual for details.\n"
#~ "\n"
#~ msgstr ""
#~ "Impossibile specificare -N se -0 è usato. Consultare il manuale per "
#~ "dettagli.\n"
#~ "\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr ""
#~ "  -Y,  --proxy                  attiva esplicitamente l'uso del proxy.\n"

#~ msgid ""
#~ "       --no-content-disposition  don't honor Content-Disposition header.\n"
#~ msgstr ""
#~ "       --no-content-disposition  non onora l'header Content-Disposition.\n"
