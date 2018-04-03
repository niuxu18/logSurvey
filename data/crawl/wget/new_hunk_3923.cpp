# Swedish messages for wget
# Copyright (C) 1999 Free Software Foundation, Inc.
# Christian Rose <menthos@menthos.com>, 1999.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.5.3\n"
"POT-Creation-Date: 1998-09-21 19:08+0200\n"
"PO-Revision-Date: 1999-11-22 22:21+01:00\n"
"Last-Translator: Christian Rose <menthos@menthos.com>\n"
"Language-Team: Swedish <sv@li.org>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=ISO-8859-1\n"
"Content-Transfer-Encoding: 8bit\n"

#. Login to the server:
#. First: Establish the control connection.
#: src/ftp.c:147 src/http.c:346
#, c-format
msgid "Connecting to %s:%hu... "
msgstr "Ansluter till %s:%hu... "

#: src/ftp.c:169 src/ftp.c:411 src/http.c:363
#, c-format
msgid "Connection to %s:%hu refused.\n"
msgstr "Anslutning till %s:%hu v�gras.\n"

#. Second: Login with proper USER/PASS sequence.
#: src/ftp.c:190 src/http.c:374
msgid "connected!\n"
msgstr "ansluten!\n"

#: src/ftp.c:191
#, c-format
msgid "Logging in as %s ... "
msgstr "Loggar in som %s ... "

#: src/ftp.c:200 src/ftp.c:253 src/ftp.c:301 src/ftp.c:353 src/ftp.c:447
#: src/ftp.c:520 src/ftp.c:568 src/ftp.c:616
msgid "Error in server response, closing control connection.\n"
msgstr "Fel i serversvar, st�nger styrf�rbindelse.\n"

#: src/ftp.c:208
msgid "Error in server greeting.\n"
msgstr "Fel i serverh�lsning.\n"

#: src/ftp.c:216 src/ftp.c:262 src/ftp.c:310 src/ftp.c:362 src/ftp.c:457
#: src/ftp.c:530 src/ftp.c:578 src/ftp.c:626
msgid "Write failed, closing control connection.\n"
msgstr "Skrivning misslyckades, st�nger styrf�rbindelse.\n"

#: src/ftp.c:223
msgid "The server refuses login.\n"
msgstr "Inloggning nekas av servern.\n"

#: src/ftp.c:230
msgid "Login incorrect.\n"
msgstr "Felaktig inloggning.\n"

#: src/ftp.c:237
msgid "Logged in!\n"
msgstr "Inloggad!\n"

#: src/ftp.c:270
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Ok�nd typ \"%c\", st�nger styrf�rbindelse.\n"

#: src/ftp.c:283
msgid "done.  "
msgstr "f�rdig.  "

#: src/ftp.c:289
msgid "==> CWD not needed.\n"
msgstr "==> CWD beh�vs inte.\n"

#: src/ftp.c:317
#, c-format
msgid "No such directory `%s'.\n\n"
msgstr "Katalogen \"%s\" finns inte.\n\n"

#: src/ftp.c:331 src/ftp.c:599 src/ftp.c:647 src/url.c:1431
msgid "done.\n"
msgstr "f�rdig.\n"

#. do not CWD
#: src/ftp.c:335
msgid "==> CWD not required.\n"
msgstr "==> CWD kr�vs inte.\n"

#: src/ftp.c:369
msgid "Cannot initiate PASV transfer.\n"
msgstr "Kan inte initiera PASV-�verf�ring.\n"

#: src/ftp.c:373
msgid "Cannot parse PASV response.\n"
msgstr "Kan inte tolka PASV-svar.\n"

#: src/ftp.c:387
#, c-format
msgid "Will try connecting to %s:%hu.\n"
msgstr "F�rs�ker ansluta till %s:%hu.\n"

#: src/ftp.c:432 src/ftp.c:504 src/ftp.c:548
msgid "done.    "
msgstr "f�rdig.  "

#: src/ftp.c:474
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bindningsfel (%s).\n"

#: src/ftp.c:490
msgid "Invalid PORT.\n"
msgstr "Felaktig PORT.\n"

#: src/ftp.c:537
msgid "\nREST failed, starting from scratch.\n"
msgstr "\nREST misslyckades, startar om fr�n b�rjan.\n"

#: src/ftp.c:586
#, c-format
msgid "No such file `%s'.\n\n"
msgstr "Filen \"%s\" finns inte.\n\n"

#: src/ftp.c:634
#, c-format
msgid "No such file or directory `%s'.\n\n"
msgstr "Filen eller katalogen \"%s\" finns inte.\n\n"

#: src/ftp.c:692 src/ftp.c:699
#, c-format
msgid "Length: %s"
msgstr "L�ngd: %s"

#: src/ftp.c:694 src/ftp.c:701
#, c-format
msgid " [%s to go]"
msgstr " [%s kvar]"

#: src/ftp.c:703
msgid " (unauthoritative)\n"
msgstr " (ej auktoritativt)\n"

#: src/ftp.c:721
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, st�nger styrf�rbindelse.\n"

#: src/ftp.c:729
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Dataf�rbindelse: %s; "

#: src/ftp.c:746
msgid "Control connection closed.\n"
msgstr "Styrf�rbindelse st�ngd.\n"

#: src/ftp.c:764
msgid "Data transfer aborted.\n"
msgstr "Data�verf�ring avbruten.\n"

#: src/ftp.c:830
#, c-format
msgid "File `%s' already there, not retrieving.\n"
msgstr "Filen \"%s\" finns redan, h�mtar inte.\n"

#: src/ftp.c:896 src/http.c:922
#, c-format
msgid "(try:%2d)"
msgstr "(f�rs�k:%2d)"

#: src/ftp.c:955 src/http.c:1116
#, c-format
msgid "%s (%s) - `%s' saved [%ld]\n\n"
msgstr "%s (%s) - \"%s\" sparad [%ld]\n\n"

#: src/ftp.c:1001
#, c-format
msgid "Using `%s' as listing tmp file.\n"
msgstr "Anv�nder \"%s\" som tempor�r listningsfil.\n"

#: src/ftp.c:1013
#, c-format
msgid "Removed `%s'.\n"
msgstr "Raderade \"%s\".\n"

#: src/ftp.c:1049
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Rekursionsdjupet %d �verskred det maximala djupet %d.\n"

#: src/ftp.c:1096 src/http.c:1054
#, c-format
msgid "Local file `%s' is more recent, not retrieving.\n\n"
msgstr "Lokala filen \"%s\" �r nyare, h�mtar inte.\n\n"

#: src/ftp.c:1102 src/http.c:1060
#, c-format
msgid "The sizes do not match (local %ld), retrieving.\n"
msgstr "Storlekarna st�mmer inte �verens (lokal %ld), h�mtar.\n"

#: src/ftp.c:1119
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Ogiltig symbolisk l�nk, hoppar �ver.\n"

#: src/ftp.c:1136
#, c-format
msgid "Already have correct symlink %s -> %s\n\n"
msgstr "En korrekt symbolisk l�nk %s -> %s existerar redan.\n\n"

#: src/ftp.c:1144
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Skapar symbolisk l�nk %s -> %s\n"

#: src/ftp.c:1155
#, c-format
msgid "Symlinks not supported, skipping symlink `%s'.\n"
msgstr "Symboliska l�nkar st�ds inte, hoppar �ver symbolisk l�nk \"%s\".\n"

#: src/ftp.c:1167
#, c-format
msgid "Skipping directory `%s'.\n"
msgstr "Hoppar �ver katalogen \"%s\".\n"

#: src/ftp.c:1176
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: ok�nd/ej underst�dd filtyp.\n"

#: src/ftp.c:1193
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: felaktig tidsst�mpel.\n"

#: src/ftp.c:1213
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "H�mtar inte kataloger eftersom djupet �r %d (max %d).\n"

#: src/ftp.c:1252
#, c-format
msgid "Not descending to `%s' as it is excluded/not-included.\n"
msgstr "G�r inte ner till \"%s\" eftersom det �r undantaget/inte ing�r.\n"

#: src/ftp.c:1297
#, c-format
msgid "Rejecting `%s'.\n"
msgstr "F�rkastar \"%s\".\n"

#. No luck.
#. #### This message SUCKS.  We should see what was the
#. reason that nothing was retrieved.
#: src/ftp.c:1344
#, c-format
msgid "No matches on pattern `%s'.\n"
msgstr "Inga tr�ffar med m�nster \"%s\".\n"

#: src/ftp.c:1404
#, c-format
msgid "Wrote HTML-ized index to `%s' [%ld].\n"
msgstr "Skrev HTML-iserat index till \"%s\" [%ld].\n"

#: src/ftp.c:1409
#, c-format
msgid "Wrote HTML-ized index to `%s'.\n"
msgstr "Skrev HTML-iserat index till \"%s\".\n"

#: src/getopt.c:454
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: flaggan \"%s\" �r tvetydig\n"

#: src/getopt.c:478
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: flaggan \"--%s\" tar inget argument\n"

#: src/getopt.c:483
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: flaggan \"%c%s\" tar inget argument\n"

#: src/getopt.c:498
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: flaggan \"%s\" beh�ver ett argument\n"

#. --option
#: src/getopt.c:528
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: ok�nd flagga \"--%s\"\n"

#. +option or -option
#: src/getopt.c:532
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: ok�nd flagga \"%c%s\"\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:563
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: otill�ten flagga -- %c\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:602
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: flaggan beh�ver ett argument -- %c\n"

#: src/host.c:432
#, c-format
msgid "%s: Cannot determine user-id.\n"
msgstr "%s: Kan inte avg�ra anv�ndar-id.\n"

#: src/host.c:444
#, c-format
msgid "%s: Warning: uname failed: %s\n"
msgstr "%s: Varning: uname misslyckades: %s\n"

#: src/host.c:456
#, c-format
msgid "%s: Warning: gethostname failed\n"
msgstr "%s: Varning: gethostname misslyckades\n"

#: src/host.c:484
#, c-format
msgid "%s: Warning: cannot determine local IP address.\n"
msgstr "%s: Varning: kan inte avg�ra lokal IP-adress.\n"

#: src/host.c:498
#, c-format
msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
msgstr "%s: Varning: kan inte utf�ra omv�nd uppslagning av lokal IP-adress.\n"

#. This gets ticked pretty often.  Karl Berry reports
#. that there can be valid reasons for the local host
#. name not to be an FQDN, so I've decided to remove the
#. annoying warning.
#: src/host.c:511
#, c-format
msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
msgstr ""
"%s: Varning: omv�nd uppslagning av den lokala adressen gav inget\n"
"fullst�ndigt dom�nnamn!\n"

#: src/host.c:539
msgid "Host not found"
msgstr "Servern kunde inte hittas"

#: src/host.c:541
msgid "Unknown error"
msgstr "Ok�nt fel"

#: src/html.c:439 src/html.c:441
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Inneh�ll i /%s p� %s:%d"

#: src/html.c:463
msgid "time unknown       "
msgstr "ok�nd tid          "

#: src/html.c:467
msgid "File        "
msgstr "Fil         "

#: src/html.c:470
msgid "Directory   "
msgstr "Katalog     "

#: src/html.c:473
msgid "Link        "
msgstr "L�nk        "

#: src/html.c:476
msgid "Not sure    "
msgstr "Os�ker      "

#: src/html.c:494
#, c-format
msgid " (%s bytes)"
msgstr " (%s byte)"

#: src/http.c:492
msgid "Failed writing HTTP request.\n"
msgstr "Misslyckades med att skriva HTTP-beg�ran.\n"

#: src/http.c:497
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s beg�ran skickad, v�ntar p� svar... "

#: src/http.c:536
msgid "End of file while parsing headers.\n"
msgstr "Filslut vid genoms�kning av huvuden.\n"

#: src/http.c:547
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "L�sfel (%s) i huvuden.\n"

#: src/http.c:587
msgid "No data received"
msgstr "Ingen data mottagen"

#: src/http.c:589
msgid "Malformed status line"
msgstr "Missbildad statusrad"

#: src/http.c:594
msgid "(no description)"
msgstr "(ingen beskrivning)"

#. If we have tried it already, then there is not point
#. retrying it.
#: src/http.c:678
msgid "Authorization failed.\n"
msgstr "Auktorisering misslyckades.\n"

#: src/http.c:685
msgid "Unknown authentication scheme.\n"
msgstr "Ok�nd auktoriseringsmetod.\n"

#: src/http.c:748
#, c-format
msgid "Location: %s%s\n"
msgstr "Adress: %s%s\n"

#: src/http.c:749 src/http.c:774
msgid "unspecified"
msgstr "ospecificerat"

#: src/http.c:750
msgid " [following]"
msgstr " [f�ljande]"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:764
msgid "Length: "
msgstr "L�ngd: "

#: src/http.c:769
#, c-format
msgid " (%s to go)"
msgstr " (%s kvar)"

#: src/http.c:774
msgid "ignored"
msgstr "ignorerad"

#: src/http.c:857
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Varning: jokertecken underst�ds inte i HTTP.\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:872
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "Filen \"%s\" finns redan d�r, h�mtar inte.\n"

#: src/http.c:978
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "Kan inte skriva till \"%s\" (%s).\n"

#: src/http.c:988
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "FEL: Omdirigering (%d) utan adress.\n"

#: src/http.c:1011
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s FEL %d: %s.\n"

#: src/http.c:1023
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "\"Last-modified\"-huvud saknas -- tidsst�mplar avst�ngda.\n"

#: src/http.c:1031
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "\"Last-modified\"-huvudet ogiltigt -- tidsst�mpel ignorerad.\n"

#: src/http.c:1064
msgid "Remote file is newer, retrieving.\n"
msgstr "Filen p� fj�rrsystemet �r nyare, h�mtar.\n"

#: src/http.c:1098
#, c-format
msgid "%s (%s) - `%s' saved [%ld/%ld]\n\n"
msgstr "%s (%s) - \"%s\" sparad [%ld/%ld]\n\n"

#: src/http.c:1130
#, c-format
msgid "%s (%s) - Connection closed at byte %ld. "
msgstr "%s (%s) - F�rbindelse st�ngd vid byte %ld. "

#: src/http.c:1138
#, c-format
msgid "%s (%s) - `%s' saved [%ld/%ld])\n\n"
msgstr "%s (%s) - \"%s\" sparad [%ld/%ld])\n\n"

#: src/http.c:1150
#, c-format
msgid "%s (%s) - Connection closed at byte %ld/%ld. "
msgstr "%s (%s) - F�rbindelse st�ngd vid byte %ld/%ld. "

#: src/http.c:1161
#, c-format
msgid "%s (%s) - Read error at byte %ld (%s)."
msgstr "%s (%s) - L�sfel vid byte %ld (%s)."

#: src/http.c:1169
#, c-format
msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
msgstr "%s (%s) - L�sfel vid byte %ld/%ld (%s). "

#: src/init.c:312 src/netrc.c:250
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Kan inte l�sa %s (%s).\n"

#: src/init.c:333 src/init.c:339
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Fel i %s vid rad %d.\n"

#: src/init.c:370
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
msgstr "%s: Varning: B�de systemets och anv�ndarens wgetrc pekar till \"%s\".\n"

#: src/init.c:458
#, c-format
msgid "%s: BUG: unknown command `%s', value `%s'.\n"
msgstr "%s: BUGG: ok�nt kommando \"%s\", v�rde \"%s\".\n"

#: src/init.c:485
#, c-format
msgid "%s: %s: Please specify on or off.\n"
msgstr "%s: %s: V�nligen ange \"on\" eller \"off\".\n"

#: src/init.c:503 src/init.c:760 src/init.c:782 src/init.c:855
#, c-format
msgid "%s: %s: Invalid specification `%s'.\n"
msgstr "%s: %s: Ogiltig specifikation \"%s\".\n"

#: src/init.c:616 src/init.c:638 src/init.c:660 src/init.c:686
#, c-format
msgid "%s: Invalid specification `%s'\n"
msgstr "%s: Ogiltig specifikation \"%s\"\n"

#: src/main.c:101
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Anv�ndning: %s [FLAGGA]... [URL]...\n"

#: src/main.c:109
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, en icke-interaktiv n�tverksh�mtare.\n"

#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
#. don't bitch.  Also, it makes translation much easier.
#: src/main.c:114
msgid "\nMandatory arguments to long options are mandatory for short options too.\n\n"
msgstr "\nObligatoriska argument till l�nga flaggor �r obligatoriska �ven f�r de korta.\n\n"

#: src/main.c:117
msgid ""
"Startup:\n"
"  -V,  --version           display the version of Wget and exit.\n"
"  -h,  --help              print this help.\n"
"  -b,  --background        go to background after startup.\n"
"  -e,  --execute=COMMAND   execute a `.wgetrc' command.\n"
"\n"
msgstr ""
"Uppstart:\n"
"  -V,  --version           visa versionsinformation och avsluta.\n"
"  -h,  --help              visa denna hj�lptext och avsluta.\n"
"  -b,  --background        g� till bakgrunden efter uppstart.\n"
"  -e,  --execute=KOMMANDO  utf�r ett \".wgetrc\"-kommando.\n"
"\n"

#: src/main.c:123
msgid ""
"Logging and input file:\n"
"  -o,  --output-file=FILE     log messages to FILE.\n"
"  -a,  --append-output=FILE   append messages to FILE.\n"
"  -d,  --debug                print debug output.\n"
"  -q,  --quiet                quiet (no output).\n"
"  -v,  --verbose              be verbose (this is the default).\n"
"  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
"  -i,  --input-file=FILE      read URL-s from file.\n"
"  -F,  --force-html           treat input file as HTML.\n"
"\n"
msgstr ""
"Loggning och infil:\n"
"  -o,  --output-file=FIL      logga meddelanden till FIL.\n"
"  -a,  --append-output=FIL    l�gg till meddelanden till FIL.\n"
"  -d,  --debug                skriv ut avlusningsmeddelanden.\n"
"  -q,  --quiet                tyst (inga utskrifter).\n"
"  -v,  --verbose              var utf�rlig (detta �r standard).\n"
"  -nv, --non-verbose          st�ng av utf�rlighet, utan att vara tyst.\n"
"  -i,  --input-file=FIL       l�s URLer fr�n fil.\n"
"  -F,  --force-html           behandla indatafil som HTML.\n"
"\n"

#: src/main.c:133
msgid ""
"Download:\n"
"  -t,  --tries=NUMBER           set number of retries to NUMBER (0 unlimits).\n"
"  -O   --output-document=FILE   write documents to FILE.\n"
"  -nc, --no-clobber             don't clobber existing files.\n"
"  -c,  --continue               restart getting an existing file.\n"
"       --dot-style=STYLE        set retrieval display style.\n"
"  -N,  --timestamping           don't retrieve files if older than local.\n"
"  -S,  --server-response        print server response.\n"
"       --spider                 don't download anything.\n"
"  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
"  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
"  -Y,  --proxy=on/off           turn proxy on or off.\n"
"  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
"\n"
msgstr ""
"Nerladdning:\n"
"  -t,  --tries=ANTAL            s�tt antal f�rs�k till ANTAL (0=obegr�nsat).\n"
"  -O   --output-document=FIL    skriv dokument till FIL.\n"
"  -nc, --no-clobber             skriv inte �ver existerande filer.\n"
"  -c,  --continue               forts�tt nerladdningen av en existerande fil.\n"
"       --dot-style=STIL         st�ll in visning f�r nerladdningen.\n"
"  -N,  --timestamping           h�mta inte filer om de �r �ldre �n de lokala.\n"
"  -S,  --server-response        visa serversvar.\n"
"       --spider                 ladda inte ner n�got.\n"
"  -T,  --timeout=SEKUNDER       s�tt tidsgr�ns f�r l�sning till SEKUNDER.\n"
"  -w,  --wait=SEKUNDER          v�nta SEKUNDER mellan h�mtningar.\n"
"  -Y,  --proxy=on/off           s�tt proxy till p� (on) eller av (off).\n"
"  -Q,  --quota=ANTAL            s�tt gr�ns f�r h�mtning till ANTAL.\n"
"\n"

#: src/main.c:147
msgid ""
"Directories:\n"
"  -nd  --no-directories            don't create directories.\n"
"  -x,  --force-directories         force creation of directories.\n"
"  -nH, --no-host-directories       don't create host directories.\n"
"  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
"       --cut-dirs=NUMBER           ignore NUMBER remote directory components.\n"
"\n"
msgstr ""
"Kataloger:\n"
"  -nd  --no-directories            skapa inte kataloger.\n"
"  -x,  --force-directories         p�tvinga skapande av kataloger.\n"
"  -nH, --no-host-directories       skapa inte v�rddatorkataloger.\n"
"  -P,  --directory-prefix=PREFIX   spara filer till PREFIX/...\n"
"       --cut-dirs=ANTAL            ignorera ANTAL fj�rrkatalogkomponenter.\n"
"\n"

#: src/main.c:154
msgid ""
"HTTP options:\n"
"       --http-user=USER      set http user to USER.\n"
"       --http-passwd=PASS    set http password to PASS.\n"
"  -C,  --cache=on/off        (dis)allow server-cached data (normally allowed).\n"
"       --ignore-length       ignore `Content-Length' header field.\n"
"       --header=STRING       insert STRING among the headers.\n"
"       --proxy-user=USER     set USER as proxy username.\n"
"       --proxy-passwd=PASS   set PASS as proxy password.\n"
"  -s,  --save-headers        save the HTTP headers to file.\n"
"  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
"\n"
msgstr ""
"HTTP-flaggor:\n"
"       --http-user=ANV�NDARE     s�tt http-anv�ndare till ANV�NDARE.\n"
"       --http-passwd=L�SENORD    s�tt http-l�senord till L�SENORD.\n"
"  -C,  --cache=on/off            till�t/till�t inte server-cachad data\n"
"                                 (normalt till�tet).\n"
"       --ignore-length           ignorera \"Content-Length\"-f�lt i huvuden.\n"
"       --header=STR�NG           s�tt in STR�NG bland huvudena.\n"
"       --proxy-user=ANV�NDARE    s�tt ANV�NDARE som anv�ndarnamn f�r ombud\n"
"                                 (proxy).\n"
"       --proxy-passwd=L�SENORD   s�tt L�SENORD som l�senord f�r ombud (proxy).\n"
"  -s,  --save-headers            spara HTTP-huvudena till fil.\n"
"  -U,  --user-agent=AGENT        identifiera som AGENT ist�llet f�r\n"
"                                 Wget/VERSION.\n"
"\n"

#: src/main.c:165
msgid ""
"FTP options:\n"
"       --retr-symlinks   retrieve FTP symbolic links.\n"
"  -g,  --glob=on/off     turn file name globbing on or off.\n"
"       --passive-ftp     use the \"passive\" transfer mode.\n"
"\n"
msgstr ""
"FTP-flaggor:\n"
"       --retr-symlinks   h�mta symboliska l�nkar �ver FTP.\n"
"  -g,  --glob=on/off     s�tt p�/st�ng av filnamnsmatchning.\n"
"       --passive-ftp     anv�nd \"passiv\" �verf�ring.\n"
"\n"

#: src/main.c:170
msgid ""
"Recursive retrieval:\n"
"  -r,  --recursive             recursive web-suck -- use with care!.\n"
"  -l,  --level=NUMBER          maximum recursion depth (0 to unlimit).\n"
"       --delete-after          delete downloaded files.\n"
"  -k,  --convert-links         convert non-relative links to relative.\n"
"  -m,  --mirror                turn on options suitable for mirroring.\n"
"  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
"\n"
msgstr ""
"Rekursiv h�mtning:\n"
"  -r,  --recursive             rekursiv webbh�mtning -- anv�nds varsamt!.\n"
"  -l,  --level=ANTAL           maximalt rekursionsdjup (0 f�r obegr�nsat).\n"
"       --delete-after          radera nerladdade filer.\n"
"  -k,  --convert-links         konvertera absoluta l�nkar till relativa.\n"
"  -m,  --mirror                s�tt p� flaggor l�mpliga f�r spegling.\n"
"  -nr, --dont-remove-listing   ta inte bort \".listing\"-filer.\n"
"\n"

#: src/main.c:178
msgid ""
"Recursive accept/reject:\n"
"  -A,  --accept=LIST                list of accepted extensions.\n"
"  -R,  --reject=LIST                list of rejected extensions.\n"
"  -D,  --domains=LIST               list of accepted domains.\n"
"       --exclude-domains=LIST       comma-separated list of rejected domains.\n"
"  -L,  --relative                   follow relative links only.\n"
"       --follow-ftp                 follow FTP links from HTML documents.\n"
"  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
"  -I,  --include-directories=LIST   list of allowed directories.\n"
"  -X,  --exclude-directories=LIST   list of excluded directories.\n"
"  -nh, --no-host-lookup             don't DNS-lookup hosts.\n"
"  -np, --no-parent                  don't ascend to the parent directory.\n"
"\n"
msgstr ""
"Till�telser vid rekursiv h�mtning:\n"
"  -A,  --accept=LISTA                lista med till�tna �ndelser.\n"
"  -R,  --reject=LISTA                lista med otill�tna �ndelser.\n"
"  -D,  --domains=LISTA               lista med till�tna dom�ner.\n"
"       --exclude-domains=LISTA       kommaseparerad lista med otill�tna\n"
"                                     dom�ner.\n"
"  -L,  --relative                    f�lj endast relativa l�nkar.\n"
"       --follow-ftp                  f�lj FTP-l�nkar fr�n HTML-dokument.\n"
"  -H,  --span-hosts                  g� till fr�mmande v�rdar i rekursivt l�ge.\n"
"  -I,  --include-directories=LISTA   lista med till�tna kataloger.\n"
"  -X,  --exclude-directories=LISTA   lista med uteslutna kataloger.\n"
"  -nh, --no-host-lookup              utf�r ingen DNS-uppslagning av v�rdar.\n"
"  -np, --no-parent                   g� inte upp till f�r�lderkatalog.\n"
"\n"

#: src/main.c:191
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr ""
"Skicka felrapporter och f�rslag till <bug-wget@gnu.org>.\n"
"Skicka anm�rkningar p� �vers�ttningar till <sv@li.org>.\n"

#: src/main.c:347
#, c-format
msgid "%s: debug support not compiled in.\n"
msgstr "%s: st�d f�r fels�kningsinformation �r inte inkompilerat.\n"

#: src/main.c:395
msgid ""
"Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.\n"
"This program is distributed in the hope that it will be useful,\n"
"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"GNU General Public License for more details.\n"
msgstr ""
"Copyright (C) 1995, 1996, 1997, 1998, 1999 Free Software Foundation, Inc.\n"
"F�ljande text �r en informell �vers�ttning som enbart tillhandah�lls\n"
"i informativt syfte. F�r alla juridiska tolkningar g�ller den\n"
"engelska originaltexten.\n"
"Detta program distribueras i hopp om att det ska vara anv�ndbart,\n"
"men UTAN N�GON SOM HELST GARANTI, �ven utan underf�rst�dd garanti\n"
"om S�LJBARHET eller L�MPLIGHET F�R N�GOT SPECIELLT �NDAM�L. Se GNU\n"
"General Public License f�r ytterligare information.\n"

#: src/main.c:401
msgid "\nWritten by Hrvoje Niksic <hniksic@srce.hr>.\n"
msgstr "\nSkrivet av Hrvoje Niksic <hniksic@srce.hr>.\n"

#: src/main.c:465
#, c-format
msgid "%s: %s: invalid command\n"
msgstr "%s: %s: ogiltigt kommando\n"

#: src/main.c:515
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: ogiltig flagga -- \"-n%c\"\n"

#. #### Something nicer should be printed here -- similar to the
#. pre-1.5 `--help' page.
#: src/main.c:518 src/main.c:560 src/main.c:591
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Prova \"%s --help\" f�r fler alternativ.\n"

#: src/main.c:571
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Kan inte vara utf�rlig och tyst p� samma g�ng.\n"

#: src/main.c:577
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Kan inte tidsst�mpla och inte skriva �ver gamla filer p� samma g�ng.\n"

#. No URL specified.
#: src/main.c:586
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL saknas\n"

#: src/main.c:674
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Inga URLer hittade i %s.\n"

#: src/main.c:683
#, c-format
msgid ""
"\n"
"FINISHED --%s--\n"
"Downloaded: %s bytes in %d files\n"
msgstr ""
"\n"
"F�RDIG --%s--\n"
"Laddade ner: %s byte i %d filer\n"

#: src/main.c:688
#, c-format
msgid "Download quota (%s bytes) EXCEEDED!\n"
msgstr "Nerladdningsgr�ns (%s byte) �VERSKRIDEN!\n"

#. Please note that the double `%' in `%%s' is intentional, because
#. redirect_output passes tmp through printf.
#: src/main.c:715
msgid "%s received, redirecting output to `%%s'.\n"
msgstr "%s mottagna, omdirigerar utdata till \"%%s\".\n"

#: src/mswindows.c:118
#, c-format
msgid ""
"\n"
"CTRL+Break received, redirecting output to `%s'.\n"
"Execution continued in background.\n"
"You may stop Wget by pressing CTRL+ALT+DELETE.\n"
msgstr ""
"\n"
"CTRL+Break mottaget, omdirigerar utdata till \"%s\".\n"
"Programk�rningen forts�tter i bakgrunden.\n"
"Du kan stoppa Wget genom att trycka CTRL+ALT+DELETE.\n"

#. parent, no error
#: src/mswindows.c:135 src/utils.c:268
msgid "Continuing in background.\n"
msgstr "Forts�tter i bakgrunden.\n"

#: src/mswindows.c:137 src/utils.c:270
#, c-format
msgid "Output will be written to `%s'.\n"
msgstr "Utdata skrivs till \"%s\".\n"

#: src/mswindows.c:227
#, c-format
msgid "Starting WinHelp %s\n"
msgstr "Startar WinHelp %s\n"

#: src/mswindows.c:254 src/mswindows.c:262
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Kunde inte hitta anv�ndbar uttagsdrivrutin (socket driver).\n"

#: src/netrc.c:334
#, c-format
msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
msgstr "%s: %s:%d: varning: \"%s\"-m�rke f�rekommer framf�r alla maskinnamn\n"

#: src/netrc.c:365
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: ok�nt m�rke \"%s\"\n"

#: src/netrc.c:429
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Anv�ndning: %s NETRC [V�RDDATORNAMN]\n"

#: src/netrc.c:439
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: kan inte ta status p� %s: %s\n"

#: src/recur.c:449 src/retr.c:462
#, c-format
msgid "Removing %s.\n"
msgstr "Tar bort %s.\n"

#: src/recur.c:450
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Tar bort %s eftersom den skulle ha avvisats.\n"

#: src/recur.c:609
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Laddar robots.txt; v�nligen ignorera fel.\n"

#: src/retr.c:193
#, c-format
msgid "\n          [ skipping %dK ]"
msgstr "\n          [ hoppar �ver %dK ]"

#: src/retr.c:344
msgid "Could not find proxy host.\n"
msgstr "Kunde inte hitta proxy-v�rden.\n"

#: src/retr.c:355
#, c-format
msgid "Proxy %s: Must be HTTP.\n"
msgstr "Proxy %s: M�ste vara HTTP.\n"

#: src/retr.c:398
#, c-format
msgid "%s: Redirection to itself.\n"
msgstr "%s: Omdirigering till sig sj�lv.\n"

#: src/retr.c:483
msgid "Giving up.\n\n"
msgstr "Ger upp.\n\n"

#: src/retr.c:483
msgid "Retrying.\n\n"
msgstr "F�rs�ker igen.\n\n"

#: src/url.c:940
#, c-format
msgid "Error (%s): Link %s without a base provided.\n"
msgstr "Fel (%s): L�nk %s given utan en bas.\n"

#: src/url.c:955
#, c-format
msgid "Error (%s): Base %s relative, without referer URL.\n"
msgstr "Fel (%s): Basen %s relativ utan h�nvisar-URL.\n"

#: src/url.c:1373
#, c-format
msgid "Converting %s... "
msgstr "Konverterar %s... "

#: src/url.c:1378 src/url.c:1389
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Kan inte konvertera l�nkar i %s: %s\n"

#: src/utils.c:71
#, c-format
msgid "%s: %s: Not enough memory.\n"
msgstr "%s: %s: Ej tillr�ckligt med minne.\n"

#: src/utils.c:203
msgid "Unknown/unsupported protocol"
msgstr "Ok�nt/ej underst�tt protokoll"

#: src/utils.c:206
msgid "Invalid port specification"
msgstr "Ogiltig portspecifikation"

#: src/utils.c:209
msgid "Invalid host name"
msgstr "Ogiltigt v�rddatornamn"

#: src/utils.c:430
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "Misslyckades med att ta bort symboliska l�nken \"%s\": %s\n"
