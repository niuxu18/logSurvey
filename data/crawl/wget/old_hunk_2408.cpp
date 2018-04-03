# Norwegian messages for GNU wget (bokm�l dialect)
# Copyright (C) 1998 Free Software Foundation, Inc.
# Robert Schmidt <rsc@vingmed.no>, 1998.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.5.2-b1\n"
"Report-Msgid-Bugs-To: \n"
"POT-Creation-Date: 2007-08-02 21:02-0700\n"
"PO-Revision-Date: 1998-05-22 09:00+0100\n"
"Last-Translator: Robert Schmidt <rsc@vingmed.no>\n"
"Language-Team: Norwegian <no@li.org>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=iso-8859-2\n"
"Content-Transfer-Encoding: 8bit\n"

#: src/connect.c:195
#, c-format
msgid "%s: unable to resolve bind address `%s'; disabling bind.\n"
msgstr ""

#: src/connect.c:267
#, fuzzy, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Kontakter %s:%hu... "

#: src/connect.c:270
#, fuzzy, c-format
msgid "Connecting to %s:%d... "
msgstr "Kontakter %s:%hu... "

#: src/connect.c:330
#, fuzzy
msgid "connected.\n"
msgstr "kontakt!\n"

#: src/connect.c:342 src/host.c:752 src/host.c:781
#, c-format
msgid "failed: %s.\n"
msgstr ""

#: src/convert.c:171
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr ""

#: src/convert.c:196
#, c-format
msgid "Converting %s... "
msgstr "Konverterer %s... "

#: src/convert.c:209
msgid "nothing to do.\n"
msgstr ""

#: src/convert.c:217 src/convert.c:241
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Kan ikke konvertere linker i %s: %s\n"

#: src/convert.c:232
#, fuzzy, c-format
msgid "Unable to delete `%s': %s\n"
msgstr "Kan ikke slette den symbolske linken �%s�: %s\n"

#: src/convert.c:441
#, fuzzy, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Kan ikke konvertere linker i %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr ""

#: src/cookies.c:685
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr ""

#: src/cookies.c:1132 src/cookies.c:1250
#, fuzzy, c-format
msgid "Cannot open cookies file `%s': %s\n"
msgstr "Kan ikke konvertere linker i %s: %s\n"

#: src/cookies.c:1287
#, fuzzy, c-format
msgid "Error writing to `%s': %s\n"
msgstr "Kan ikke skrive til �%s� (%s).\n"

#: src/cookies.c:1290
#, c-format
msgid "Error closing `%s': %s\n"
msgstr ""

#: src/ftp-ls.c:836
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""

#: src/ftp-ls.c:882 src/ftp-ls.c:884
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Indeks for /%s p� %s:%d"

#: src/ftp-ls.c:907
#, c-format
msgid "time unknown       "
msgstr "ukjent tid         "

#: src/ftp-ls.c:911
#, c-format
msgid "File        "
msgstr "Fil         "

#: src/ftp-ls.c:914
#, c-format
msgid "Directory   "
msgstr "Katalog     "

#: src/ftp-ls.c:917
#, c-format
msgid "Link        "
msgstr "Link        "

#: src/ftp-ls.c:920
#, c-format
msgid "Not sure    "
msgstr "Usikker     "

#: src/ftp-ls.c:938
#, c-format
msgid " (%s bytes)"
msgstr " (%s bytes)"

#: src/ftp.c:209
#, c-format
msgid "Length: %s"
msgstr "Lengde: %s"

#: src/ftp.c:215 src/http.c:2174
#, c-format
msgid ", %s (%s) remaining"
msgstr ""

#: src/ftp.c:219 src/http.c:2178
#, c-format
msgid ", %s remaining"
msgstr ""

#: src/ftp.c:222
msgid " (unauthoritative)\n"
msgstr " (ubekreftet)\n"

#. Second: Login with proper USER/PASS sequence.
#: src/ftp.c:298
#, c-format
msgid "Logging in as %s ... "
msgstr "Logger inn som %s ... "

#: src/ftp.c:311 src/ftp.c:357 src/ftp.c:386 src/ftp.c:438 src/ftp.c:550
#: src/ftp.c:596 src/ftp.c:625 src/ftp.c:682 src/ftp.c:743 src/ftp.c:803
#: src/ftp.c:850
msgid "Error in server response, closing control connection.\n"
msgstr "Feil i svar fra tjener, lukker kontrollforbindelsen.\n"

#: src/ftp.c:318
msgid "Error in server greeting.\n"
msgstr "Feil i melding fra tjener.\n"

#: src/ftp.c:325 src/ftp.c:446 src/ftp.c:558 src/ftp.c:633 src/ftp.c:692
#: src/ftp.c:753 src/ftp.c:813 src/ftp.c:860
msgid "Write failed, closing control connection.\n"
msgstr "Feil ved skriving, lukker kontrollforbindelsen.\n"

#: src/ftp.c:331
msgid "The server refuses login.\n"
msgstr "Tjeneren tillater ikke innlogging.\n"

#: src/ftp.c:337
msgid "Login incorrect.\n"
msgstr "Feil ved innlogging.\n"

#: src/ftp.c:343
msgid "Logged in!\n"
msgstr "Logget inn!\n"

#: src/ftp.c:365
msgid "Server error, can't determine system type.\n"
msgstr ""

#: src/ftp.c:374 src/ftp.c:669 src/ftp.c:726 src/ftp.c:769
msgid "done.    "
msgstr "OK.      "

#: src/ftp.c:426 src/ftp.c:575 src/ftp.c:608 src/ftp.c:833 src/ftp.c:879
msgid "done.\n"
msgstr "OK.\n"

#: src/ftp.c:453
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Ukjent type �%c�, lukker kontrollforbindelsen.\n"

#: src/ftp.c:465
msgid "done.  "
msgstr "OK.    "

#: src/ftp.c:471
msgid "==> CWD not needed.\n"
msgstr "==> CWD ikke n�dvendig.\n"

#: src/ftp.c:564
#, c-format
msgid ""
"No such directory `%s'.\n"
"\n"
msgstr ""
"Ingen katalog ved navn �%s�.\n"
"\n"

#. do not CWD
#: src/ftp.c:579
msgid "==> CWD not required.\n"
msgstr "==> CWD ikke n�dvendig.\n"

#: src/ftp.c:639
msgid "Cannot initiate PASV transfer.\n"
msgstr "Kan ikke sette opp PASV-overf�ring.\n"

#: src/ftp.c:643
msgid "Cannot parse PASV response.\n"
msgstr "Kan ikke tolke PASV-tilbakemelding.\n"

#: src/ftp.c:660
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr ""

#: src/ftp.c:708
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bind-feil (%s).\n"

#: src/ftp.c:714
msgid "Invalid PORT.\n"
msgstr "Ugyldig PORT.\n"

#: src/ftp.c:760
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"Feil ved REST, starter fra begynnelsen.\n"

#: src/ftp.c:821
#, c-format
msgid ""
"No such file `%s'.\n"
"\n"
msgstr ""
"Ingen fil ved navn �%s�.\n"
"\n"

#: src/ftp.c:868
#, c-format
msgid ""
"No such file or directory `%s'.\n"
"\n"
msgstr ""
"Ingen fil eller katalog ved navn �%s�.\n"
"\n"

#. We cannot just invent a new name and use it (which is
#. what functions like unique_create typically do)
#. because we told the user we'd use this name.
#. Instead, return and retry the download.
#: src/ftp.c:930 src/http.c:2236
#, c-format
msgid "%s has sprung into existence.\n"
msgstr ""

#: src/ftp.c:982
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, lukker kontrollforbindelsen.\n"

#: src/ftp.c:991
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - dataforbindelse: %s; "

#: src/ftp.c:1006
msgid "Control connection closed.\n"
msgstr "Forbindelsen brutt.\n"

#: src/ftp.c:1024
msgid "Data transfer aborted.\n"
msgstr "Dataoverf�ring brutt.\n"

#: src/ftp.c:1092
#, fuzzy, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "File �%s� eksisterer allerede, ignoreres.\n"

#: src/ftp.c:1160 src/http.c:2375
#, c-format
msgid "(try:%2d)"
msgstr "(fors�k:%2d)"

#: src/ftp.c:1230 src/http.c:2683
#, fuzzy, c-format
msgid ""
"%s (%s) - `%s' saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - �%s� lagret [%ld]\n"
"\n"

#: src/ftp.c:1272 src/main.c:990 src/recur.c:376 src/retr.c:859
#, c-format
msgid "Removing %s.\n"
msgstr "Fjerner %s.\n"

#: src/ftp.c:1314
#, c-format
msgid "Using `%s' as listing tmp file.\n"
msgstr "Bruker �%s� som tempor�r katalogliste.\n"

#: src/ftp.c:1329
#, c-format
msgid "Removed `%s'.\n"
msgstr "Slettet �%s�.\n"

#: src/ftp.c:1362
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Rekursjonsdybde %d overskred maksimal dybde %d.\n"

#. Remote file is older, file sizes can be compared and
#. are both equal.
#: src/ftp.c:1432
#, fuzzy, c-format
msgid "Remote file no newer than local file `%s' -- not retrieving.\n"
msgstr "Fil p� tjener er nyere - hentes.\n"

#. Remote file is newer or sizes cannot be matched
#: src/ftp.c:1439
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file `%s' -- retrieving.\n"
"\n"
msgstr "Fil p� tjener er nyere - hentes.\n"

#. Sizes do not match
#: src/ftp.c:1446
#, fuzzy, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr "Filst�rrelsene er forskjellige (local %ld), hentes.\n"

#: src/ftp.c:1464
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Ugyldig navn for symbolsk link, ignoreres.\n"

#: src/ftp.c:1481
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Har allerede gyldig symbolsk link %s -> %s\n"
"\n"

#: src/ftp.c:1489
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Lager symbolsk link %s -> %s\n"

#: src/ftp.c:1499
#, c-format
msgid "Symlinks not supported, skipping symlink `%s'.\n"
msgstr "Symbolske linker ikke st�ttet, ignorerer �%s�.\n"

#: src/ftp.c:1511
#, c-format
msgid "Skipping directory `%s'.\n"
msgstr "Ignorerer katalog �%s�.\n"

#: src/ftp.c:1520
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: filtypen er ukjent/ikke st�ttet.\n"

#: src/ftp.c:1547
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: ugyldig tidsstempel.\n"

#: src/ftp.c:1575
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Henter ikke kataloger p� dybde %d (max %d).\n"

#: src/ftp.c:1625
#, c-format
msgid "Not descending to `%s' as it is excluded/not-included.\n"
msgstr "Behandler ikke �%s� da det er ekskludert/ikke inkludert.\n"

#: src/ftp.c:1691 src/ftp.c:1705
#, c-format
msgid "Rejecting `%s'.\n"
msgstr "Ignorerer �%s�.\n"

#. No luck.
#. #### This message SUCKS.  We should see what was the
#. reason that nothing was retrieved.
#: src/ftp.c:1753
#, c-format
msgid "No matches on pattern `%s'.\n"
msgstr "Ingenting passer med m�nsteret �%s�.\n"

#: src/ftp.c:1819
#, fuzzy, c-format
msgid "Wrote HTML-ized index to `%s' [%s].\n"
msgstr "Skrev HTML-formattert indeks til �%s� [%ld].\n"

#: src/ftp.c:1824
#, c-format
msgid "Wrote HTML-ized index to `%s'.\n"
msgstr "Skrev HTML-formattert indeks til �%s�.\n"

#: src/getopt.c:670
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: flagget �%s� er tvetydig\n"

#: src/getopt.c:695
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: flagget �--%s� tillater ikke argumenter\n"

#: src/getopt.c:700
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: flagget �%c%s� tillater ikke argumenter\n"

#: src/getopt.c:718 src/getopt.c:891
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: flagget �%s� krever et argument\n"

#. --option
#: src/getopt.c:747
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: ukjent flagg �--%s�\n"

#. +option or -option
#: src/getopt.c:751
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: ukjent flagg �%c%s�\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:777
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: ugyldig flagg -- %c\n"

#: src/getopt.c:780
#, fuzzy, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: ugyldig flagg -- %c\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:810 src/getopt.c:940
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: flagget krever et argument -- %c\n"

#: src/getopt.c:857
#, fuzzy, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: flagget �%s� er tvetydig\n"

#: src/getopt.c:875
#, fuzzy, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: flagget �--%s� tillater ikke argumenter\n"

#: src/host.c:347
#, fuzzy
msgid "Unknown host"
msgstr "Ukjent feil"

#. Message modeled after what gai_strerror returns in similar
#. circumstances.
#: src/host.c:351
msgid "Temporary failure in name resolution"
msgstr ""

#: src/host.c:353
msgid "Unknown error"
msgstr "Ukjent feil"

#: src/host.c:714
#, fuzzy, c-format
msgid "Resolving %s... "
msgstr "Fjerner %s.\n"

#: src/host.c:761
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr ""

#: src/host.c:784
msgid "failed: timed out.\n"
msgstr ""

#: src/html-url.c:288
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr ""

#: src/html-url.c:695
#, fuzzy, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Ugyldig spesifikasjon �%s�\n"

#: src/http.c:367
#, fuzzy, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Feil ved sending av HTTP-foresp�rsel.\n"

#: src/http.c:736
msgid "No headers, assuming HTTP/0.9"
msgstr ""

#: src/http.c:1413
msgid "Disabling SSL due to encountered errors.\n"
msgstr ""

#: src/http.c:1566
#, c-format
msgid "POST data file `%s' missing: %s\n"
msgstr ""

#: src/http.c:1615
#, fuzzy, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Vil pr�ve � kontakte %s:%hu.\n"

#: src/http.c:1684
#, fuzzy, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Feil ved sending av HTTP-foresp�rsel.\n"

#: src/http.c:1704
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr ""

#: src/http.c:1749
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s foresp�rsel sendt, mottar topptekster... "

#: src/http.c:1760
#, fuzzy
msgid "No data received.\n"
msgstr "Ingen data mottatt"

#: src/http.c:1767
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Lesefeil (%s) i topptekster.\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:1813
#, fuzzy, c-format
msgid ""
"File `%s' already there; not retrieving.\n"
"\n"
msgstr "File �%s� eksisterer allerede, ignoreres.\n"

#. If the authentication header is missing or
#. unrecognized, there's no sense in retrying.
#: src/http.c:1966
msgid "Unknown authentication scheme.\n"
msgstr "Ukjent autorisasjons-protokoll.\n"

#: src/http.c:1997
msgid "Authorization failed.\n"
msgstr "Autorisasjon mislyktes\n"

#: src/http.c:2011
msgid "Malformed status line"
msgstr "Feil i statuslinje"

#: src/http.c:2013
msgid "(no description)"
msgstr "(ingen beskrivelse)"

#: src/http.c:2076
#, c-format
msgid "Location: %s%s\n"
msgstr "Sted: %s%s\n"

#: src/http.c:2077 src/http.c:2184
msgid "unspecified"
msgstr "uspesifisert"

#: src/http.c:2078
msgid " [following]"
msgstr " [omdirigert]"

#. If `-c' is in use and the file has been fully downloaded (or
#. the remote file has shrunk), Wget effectively requests bytes
#. after the end of file and the server response with 416.
#: src/http.c:2134
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:2164
msgid "Length: "
msgstr "Lengde: "

#: src/http.c:2184
msgid "ignored"
msgstr "ignoreres"

#: src/http.c:2255
#, fuzzy, c-format
msgid "Saving to: `%s'\n"
msgstr "Ignorerer katalog �%s�.\n"

#: src/http.c:2335
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Advarsel: jokertegn ikke st�ttet i HTTP.\n"

#: src/http.c:2364
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2450
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "Kan ikke skrive til �%s� (%s).\n"

#. Another fatal error.
#: src/http.c:2459
msgid "Unable to establish SSL connection.\n"
msgstr ""

#: src/http.c:2467
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "FEIL: Omdirigering (%d) uten nytt sted.\n"

#: src/http.c:2505
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2510
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s FEIL %d: %s.\n"

#: src/http.c:2526
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Last-modified topptekst mangler -- tidsstempling sl�s av.\n"

#: src/http.c:2534
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Last-modified topptekst ugyldig -- tidsstempel ignoreres.\n"

#: src/http.c:2558
#, c-format
msgid ""
"Server file no newer than local file `%s' -- not retrieving.\n"
"\n"
msgstr ""

#: src/http.c:2566
#, fuzzy, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Filst�rrelsene er forskjellige (local %ld), hentes.\n"

#: src/http.c:2573
msgid "Remote file is newer, retrieving.\n"
msgstr "Fil p� tjener er nyere - hentes.\n"

#: src/http.c:2596
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr "Fil p� tjener er nyere - hentes.\n"

#: src/http.c:2602
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr "Fil p� tjener er nyere - hentes.\n"

#: src/http.c:2610
#, fuzzy
msgid ""
"Remote file exists but recursion is disabled -- not retrieving.\n"
"\n"
msgstr "Fil p� tjener er nyere - hentes.\n"

#: src/http.c:2652
#, fuzzy, c-format
msgid ""
"%s (%s) - `%s' saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - �%s� lagret [%ld/%ld]\n"
"\n"

#: src/http.c:2707
#, fuzzy, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Forbindelse brutt ved byte %ld. "

#: src/http.c:2722
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Lesefeil ved byte %ld (%s)."

#: src/http.c:2731
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Lesefeil ved byte %ld/%ld (%s)."

#: src/init.c:371
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr ""

#: src/init.c:434 src/netrc.c:267
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Kan ikke lese %s (%s).\n"

#: src/init.c:452
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Feil i %s p� linje %d.\n"

#: src/init.c:458
#, fuzzy, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Feil i %s p� linje %d.\n"

#: src/init.c:463
#, fuzzy, c-format
msgid "%s: Unknown command `%s' in %s at line %d.\n"
msgstr "%s: Ukjent kommando �%s�, verdi �%s�.\n"

#: src/init.c:508
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
msgstr "%s: Advarsel: B�de systemets og brukerens wgetrc peker til �%s�.\n"

#: src/init.c:661
#, fuzzy, c-format
msgid "%s: Invalid --execute command `%s'\n"
msgstr "%s: Ugyldig spesifikasjon �%s�\n"

#: src/init.c:706
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean `%s'; use `on' or `off'.\n"
msgstr "%s: %s: Vennligst spesifiser �on� eller �off�.\n"

#: src/init.c:723
#, fuzzy, c-format
msgid "%s: %s: Invalid number `%s'.\n"
msgstr "%s: %s: Ugyldig spesifikasjon �%s�\n"

#: src/init.c:954 src/init.c:973
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value `%s'\n"
msgstr "%s: %s: Ugyldig spesifikasjon �%s�\n"

#: src/init.c:998
#, fuzzy, c-format
msgid "%s: %s: Invalid time period `%s'\n"
msgstr "%s: %s: Ugyldig spesifikasjon �%s�\n"

#: src/init.c:1052 src/init.c:1142 src/init.c:1245 src/init.c:1270
#, fuzzy, c-format
msgid "%s: %s: Invalid value `%s'.\n"
msgstr "%s: %s: Ugyldig spesifikasjon �%s�\n"

#: src/init.c:1089
#, fuzzy, c-format
msgid "%s: %s: Invalid header `%s'.\n"
msgstr "%s: %s: Ugyldig spesifikasjon �%s�\n"

#: src/init.c:1155
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type `%s'.\n"
msgstr "%s: %s: Ugyldig spesifikasjon �%s�\n"

#: src/init.c:1214
#, c-format
msgid ""
"%s: %s: Invalid restriction `%s', use [unix|windows],[lowercase|uppercase],"
"[nocontrol].\n"
msgstr ""

#: src/log.c:783
#, fuzzy, c-format
msgid ""
"\n"
"%s received, redirecting output to `%s'.\n"
msgstr "%s mottatt, omdirigerer utskrifter til �%%s�.\n"

#. Eek!  Opening the alternate log file has failed.  Nothing we
#. can do but disable printing completely.
#: src/log.c:793
#, fuzzy, c-format
msgid ""
"\n"
"%s received.\n"
msgstr "Ingen data mottatt"

#: src/log.c:794
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr ""

#: src/main.c:353
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Bruk: %s [FLAGG]... [URL]...\n"

#: src/main.c:365
#, fuzzy
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"\n"
"Obligatoriske argumenter til lange flagg er obligatoriske ogs� \n"
"for korte.\n"
"\n"

#: src/main.c:367
msgid "Startup:\n"
msgstr ""

#: src/main.c:369
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr ""

#: src/main.c:371
msgid "  -h,  --help              print this help.\n"
msgstr ""

#: src/main.c:373
msgid "  -b,  --background        go to background after startup.\n"
msgstr ""

#: src/main.c:375
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""

#: src/main.c:379
msgid "Logging and input file:\n"
msgstr ""

#: src/main.c:381
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr ""

#: src/main.c:383
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr ""

#: src/main.c:386
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr ""

#: src/main.c:389
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr ""

#: src/main.c:391
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr ""

#: src/main.c:393
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""

#: src/main.c:395
msgid "  -i,  --input-file=FILE     download URLs found in FILE.\n"
msgstr ""

#: src/main.c:397
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr ""

#: src/main.c:399
msgid ""
"  -B,  --base=URL            prepends URL to relative links in -F -i file.\n"
msgstr ""

#: src/main.c:403
msgid "Download:\n"
msgstr ""

#: src/main.c:405
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""

#: src/main.c:407
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""

#: src/main.c:409
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr ""

#: src/main.c:411
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""

#: src/main.c:414
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""

#: src/main.c:416
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""

#: src/main.c:418
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""

#: src/main.c:421
msgid "  -S,  --server-response         print server response.\n"
msgstr ""

#: src/main.c:423
msgid "       --spider                  don't download anything.\n"
msgstr ""

#: src/main.c:425
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""

#: src/main.c:427
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""

#: src/main.c:429
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""

#: src/main.c:431
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""

#: src/main.c:433
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""

#: src/main.c:435
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""

#: src/main.c:437
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""

#: src/main.c:439
msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
msgstr ""

#: src/main.c:441
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr ""

#: src/main.c:443
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""

#: src/main.c:445
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""

#: src/main.c:447
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""

#: src/main.c:449
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""

#: src/main.c:451
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""

#: src/main.c:453
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""

#: src/main.c:456
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr ""

#: src/main.c:458
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr ""

#: src/main.c:460
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""

#: src/main.c:464
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""

#: src/main.c:466
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""

#: src/main.c:470
#, fuzzy
msgid "Directories:\n"
msgstr "Katalog     "

#: src/main.c:472
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr ""

#: src/main.c:474
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr ""

#: src/main.c:476
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""

#: src/main.c:478
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""

#: src/main.c:480
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""

#: src/main.c:482
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""

#: src/main.c:486
msgid "HTTP options:\n"
msgstr ""

#: src/main.c:488
msgid "       --http-user=USER        set http user to USER.\n"
msgstr ""

#: src/main.c:490
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr ""

#: src/main.c:492
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""

#: src/main.c:494
msgid ""
"  -E,  --html-extension        save HTML documents with `.html' extension.\n"
msgstr ""

#: src/main.c:496
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""

#: src/main.c:498
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""

#: src/main.c:500
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""

#: src/main.c:502
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""

#: src/main.c:504
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""

#: src/main.c:506
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""

#: src/main.c:508
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr ""

#: src/main.c:510
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""

#: src/main.c:512
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""

#: src/main.c:514
msgid "       --no-cookies            don't use cookies.\n"
msgstr ""

#: src/main.c:516
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""

#: src/main.c:518
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""

#: src/main.c:520
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""

#: src/main.c:522
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""

#: src/main.c:524
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""

#: src/main.c:526
msgid ""
"       --no-content-disposition  don't honor Content-Disposition header.\n"
msgstr ""

#: src/main.c:531
msgid "HTTPS (SSL/TLS) options:\n"
msgstr ""

#: src/main.c:533
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""

#: src/main.c:536
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""

#: src/main.c:538
msgid "       --certificate=FILE       client certificate file.\n"
msgstr ""

#: src/main.c:540
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""

#: src/main.c:542
msgid "       --private-key=FILE       private key file.\n"
msgstr ""

#: src/main.c:544
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""

#: src/main.c:546
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr ""

#: src/main.c:548
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""

#: src/main.c:550
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""

#: src/main.c:552
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""

#: src/main.c:557
msgid "FTP options:\n"
msgstr ""

#: src/main.c:559
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""

#: src/main.c:561
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr ""

#: src/main.c:563
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr ""

#: src/main.c:565
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""

#: src/main.c:567
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""

#: src/main.c:569
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""

#: src/main.c:571
msgid "       --preserve-permissions  preserve remote file permissions.\n"
msgstr ""

#: src/main.c:575
msgid "Recursive download:\n"
msgstr ""

#: src/main.c:577
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr ""

#: src/main.c:579
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""

#: src/main.c:581
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""

#: src/main.c:583
msgid ""
"  -k,  --convert-links      make links in downloaded HTML point to local "
"files.\n"
msgstr ""

#: src/main.c:585
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""

#: src/main.c:587
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""

#: src/main.c:589
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""

#: src/main.c:591
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""

#: src/main.c:595
msgid "Recursive accept/reject:\n"
msgstr ""

#: src/main.c:597
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""

#: src/main.c:599
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""

#: src/main.c:601
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""

#: src/main.c:603
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""

#: src/main.c:605
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""

#: src/main.c:607
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""

#: src/main.c:609
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""

#: src/main.c:611
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""

#: src/main.c:613
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""

#: src/main.c:615
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""

#: src/main.c:617
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""

#: src/main.c:619
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""

#: src/main.c:623
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Rapport�r feil og send forslag til <bug-wget@gnu.org>.\n"

#: src/main.c:628
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, en ikke-interaktiv informasjonsagent.\n"

#: src/main.c:668
msgid "Copyright (C) 2007 Free Software Foundation, Inc.\n"
msgstr ""

#: src/main.c:670
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""

#: src/main.c:675
#, fuzzy
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Skrevet av Hrvoje Niksic <hniksic@srce.hr>.\n"

#: src/main.c:677
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#. #### Something nicer should be printed here -- similar to the
#. pre-1.5 `--help' page.
#: src/main.c:724 src/main.c:793 src/main.c:890
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Pr�v �%s --help� for flere flagg.\n"

#: src/main.c:790
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: ugyldig flagg -- �-n%c�\n"

#: src/main.c:845
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Kan ikke v�re utf�rlig og stille p� samme tid.\n"

#: src/main.c:851
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Kan ikke tidsstemple og la v�re � ber�re eksisterende filer p� samme tid.\n"

#: src/main.c:859
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr ""

#: src/main.c:869
#, c-format
msgid "Cannot specify -r, -p or -N if -O is given.\n"
msgstr ""

#: src/main.c:877
#, c-format
msgid "Cannot specify both -k and -O if multiple URLs are given.\n"
msgstr ""

#. No URL specified.
#: src/main.c:885
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL mangler.\n"

#: src/main.c:1005
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Fant ingen URLer i %s.\n"

#: src/main.c:1023
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"FERDIG --%s--\n"
"Lastet ned %s bytes i %d filer\n"

#: src/main.c:1032
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Nedlastingskvote (%s bytes) overskredet!\n"

#: src/mswindows.c:96
#, c-format
msgid "Continuing in background.\n"
msgstr "Fortsetter i bakgrunnen.\n"

#: src/mswindows.c:289
#, fuzzy, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Fortsetter i bakgrunnen.\n"

#: src/mswindows.c:291 src/utils.c:326
#, c-format
msgid "Output will be written to `%s'.\n"
msgstr "Utskrifter vil bli skrevet til �%s�.\n"

#: src/mswindows.c:459 src/mswindows.c:466
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Fant ingen brukbar socket-driver.\n"

#: src/netrc.c:375
#, c-format
msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
msgstr "%s: %s:%d: Advarsel: symbolet �%s� funnet f�r tjener-navn\n"

#: src/netrc.c:406
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: ukjent symbol �%s�\n"

#: src/netrc.c:470
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Bruk: %s NETRC [TJENERNAVN]\n"

#: src/netrc.c:480
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: �stat� feilet for %s: %s\n"

#. Still not random enough, presumably because neither /dev/random
#. nor EGD were available.  Try to seed OpenSSL's PRNG with libc
#. PRNG.  This is cryptographically weak and defeats the purpose
#. of using OpenSSL, which is why it is highly discouraged.
#: src/openssl.c:112
msgid "WARNING: using a weak random seed.\n"
msgstr ""

#: src/openssl.c:172
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""

#. If the user has specified --no-check-cert, we still want to warn
#. him about problems with the server's certificate.
#: src/openssl.c:487
msgid "ERROR"
msgstr ""

#: src/openssl.c:487
msgid "WARNING"
msgstr ""

#: src/openssl.c:496
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr ""

#: src/openssl.c:517
#, c-format
msgid "%s: cannot verify %s's certificate, issued by `%s':\n"
msgstr ""

#: src/openssl.c:525
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr ""

#: src/openssl.c:529
msgid "  Self-signed certificate encountered.\n"
msgstr ""

#: src/openssl.c:532
msgid "  Issued certificate not yet valid.\n"
msgstr ""

#: src/openssl.c:535
msgid "  Issued certificate has expired.\n"
msgstr ""

#: src/openssl.c:567
#, c-format
msgid ""
"%s: certificate common name `%s' doesn't match requested host name `%s'.\n"
msgstr ""

#: src/openssl.c:580
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""

#. Align the [ skipping ... ] line with the dots.  To do
#. that, insert the number of spaces equal to the number of
#. digits in the skipped amount in K.
#: src/progress.c:238
#, fuzzy, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"          [ hopper over %dK ]"

#: src/progress.c:452
#, fuzzy, c-format
msgid "Invalid dot style specification `%s'; leaving unchanged.\n"
msgstr "%s: Ugyldig spesifikasjon �%s�\n"

#. Translation note: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:946
#, c-format
msgid "  eta %s"
msgstr ""

#. When the download is done, print the elapsed time.
#. Note to translators: this should not take up more room than
#. available here.  Abbreviate if necessary.
#: src/progress.c:961
msgid "   in "
msgstr ""

#. If no clock was found, it means that clock_getres failed for
#. the realtime clock.
#: src/ptimer.c:160
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr ""

#: src/recur.c:377
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Fjerner %s fordi den skal forkastes.\n"

#: src/res.c:392
#, fuzzy, c-format
msgid "Cannot open %s: %s"
msgstr "Kan ikke konvertere linker i %s: %s\n"

#: src/res.c:544
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Henter robots.txt; ignorer eventuelle feilmeldinger.\n"

#: src/retr.c:651
#, fuzzy, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Kan ikke skrive til �%s� (%s).\n"

#: src/retr.c:659
#, fuzzy, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Proxy %s: M� st�tte HTTP.\n"

#: src/retr.c:745
#, fuzzy, c-format
msgid "%d redirections exceeded.\n"
msgstr "%s: Omdirigerer til seg selv.\n"

#: src/retr.c:880
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Gir opp.\n"
"\n"

#: src/retr.c:880
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Pr�ver igjen.\n"
"\n"

#: src/url.c:619
#, fuzzy
msgid "No error"
msgstr "Ukjent feil"

#: src/url.c:621
msgid "Unsupported scheme"
msgstr ""

#: src/url.c:623
msgid "Invalid host name"
msgstr "Tjenernavnet er ugyldig"

#: src/url.c:625
msgid "Bad port number"
msgstr ""

#: src/url.c:627
#, fuzzy
msgid "Invalid user name"
msgstr "Tjenernavnet er ugyldig"

#: src/url.c:629
msgid "Unterminated IPv6 numeric address"
msgstr ""

#: src/url.c:631
msgid "IPv6 addresses not supported"
msgstr ""

#: src/url.c:633
msgid "Invalid IPv6 numeric address"
msgstr ""

#. parent, no error
#: src/utils.c:324
#, fuzzy, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Fortsetter i bakgrunnen.\n"

#: src/utils.c:372
#, c-format
msgid "Failed to unlink symlink `%s': %s\n"
msgstr "Kan ikke slette den symbolske linken �%s�: %s\n"

#: src/xmalloc.c:62
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#~ msgid "Connection to %s:%hu refused.\n"
#~ msgstr "Kontakt med %s:%hu nektet.\n"

#~ msgid "Will try connecting to %s:%hu.\n"
#~ msgstr "Vil pr�ve � kontakte %s:%hu.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s igjen]"

#~ msgid "Host not found"
#~ msgstr "Tjener ikke funnet"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Filslutt funnet ved lesing av topptekster.\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s igjen)"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "Filen �%s� hentes ikke, fordi den allerede eksisterer.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - �%s� lagret [%ld/%ld]\n"
#~ "\n"

#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
#~ msgstr "%s (%s) - Forbindelse brutt ved byte %ld/%ld. "

#, fuzzy
#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: Advarsel: feil fra tilbake-oppslag for lokal IP-adresse.\n"

#, fuzzy
#~ msgid "%s: %s: Please specify always, on, off, or never.\n"
#~ msgstr "%s: %s: Vennligst spesifiser �on� eller �off�.\n"

#, fuzzy
#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Oppstart:\n"
#~ "  -V,  --version           viser Wget's versjonsnummer og avslutter.\n"
#~ "  -h,  --help              skriver ut denne hjelpeteksten.\n"
#~ "  -b,  --background        kj�rer i bakgrunnen etter oppstart.\n"
#~ "  -e,  --execute=KOMMANDO  utf�r en �.wgetrc�-kommando.\n"
#~ "\n"

#, fuzzy
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
#~ "       --sslcertfile=FILE     optional client certificate.\n"
#~ "       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
#~ "\n"
#~ msgstr ""
#~ "Utskrifter og innlesing:\n"
#~ "  -o,  --output-file=FIL      skriv meldinger til ny FIL.\n"
#~ "  -a,  --append-output=FIL    skriv meldinger p� slutten av FIL.\n"
#~ "  -d,  --debug                skriv avlusingsinformasjon.\n"
#~ "  -q,  --quiet                stille (ingen utskrifter).\n"
#~ "  -v,  --verbose              v�r utf�rlig (standard).\n"
#~ "  -nv, --non-verbose          mindre utf�rlig, men ikke stille.\n"
#~ "  -i,  --input-file=FIL       les URLer fra FIL.\n"
#~ "  -F,  --force-html           les inn filer som HTML.\n"
#~ "\n"

#, fuzzy
#~ msgid ""
#~ "Download:\n"
#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
#~ "host.\n"
#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
#~ "unlimits).\n"
#~ "  -O   --output-document=FILE   write documents to FILE.\n"
#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
#~ "suffixes.\n"
#~ "  -c,  --continue               resume getting a partially-downloaded "
#~ "file.\n"
#~ "       --dot-style=STYLE        set retrieval display style.\n"
#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
#~ "local.\n"
#~ "  -S,  --server-response        print server response.\n"
#~ "       --spider                 don't download anything.\n"
#~ "  -T,  --timeout=SECONDS        set the read timeout to SECONDS.\n"
#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
#~ "retrieval.\n"
#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
#~ "\n"
#~ msgstr ""
#~ "Nedlasting:\n"
#~ "  -t,  --tries=ANTALL           maksimalt antall fors�k (0 for "
#~ "uendelig).\n"
#~ "  -O   --output-document=FIL    skriv nedlastede filer til FIL.\n"
#~ "  -nc, --no-clobber             ikke ber�r eksisterende filer.\n"
#~ "  -c,  --continue               fortsett nedlasting av en eksisterende "
#~ "fil.\n"
#~ "       --dot-style=TYPE         velg format for nedlastings-status.\n"
#~ "  -N,  --timestamping           ikke hent filer som er eldre enn "
#~ "eksisterende.\n"
#~ "  -S,  --server-response        vis svar fra tjeneren.\n"
#~ "       --spider                 ikke hent filer.\n"
#~ "  -T,  --timeout=SEKUNDER       sett ventetid ved lesing til SEKUNDER.\n"
#~ "  -w,  --wait=SEKUNDER          sett ventetid mellom filer til SEKUNDER.\n"
#~ "  -Y,  --proxy=on/off           sett bruk av proxy p� eller av.\n"
#~ "  -Q,  --quota=ANTALL           sett nedlastingskvote til ANTALL.\n"
#~ "\n"

#~ msgid ""
#~ "Directories:\n"
#~ "  -nd  --no-directories            don't create directories.\n"
#~ "  -x,  --force-directories         force creation of directories.\n"
#~ "  -nH, --no-host-directories       don't create host directories.\n"
#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
#~ "components.\n"
#~ "\n"
#~ msgstr ""
#~ "Kataloger:\n"
#~ "  -nd  --no-directories             ikke lag kataloger.\n"
#~ "  -x,  --force-directories          lag kataloger.\n"
#~ "  -nH, --no-host-directories        ikke lag ovenst�ende kataloger.\n"
#~ "  -P,  --directory-prefix=PREFIKS   skriv filer til PREFIKS/...\n"
#~ "       --cut-dirs=ANTALL            ignorer ANTALL komponenter av "
#~ "tjenerens\n"
#~ "                                    katalognavn.\n"
#~ "\n"

#, fuzzy
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
#~ "\n"
#~ msgstr ""
#~ "HTTP-flagg:\n"
#~ "       --http-user=BRUKER      sett HTTP-bruker til BRUKER.\n"
#~ "       --http-passwd=PASSORD   sett HTTP-passord til PASSORD.\n"
#~ "  -C,  --cache=on/off          (ikke) tillat bruk av hurtiglager p� "
#~ "tjener.\n"
#~ "       --ignore-length         ignorer �Content-Length� felt i "
#~ "topptekst.\n"
#~ "       --header=TEKST          sett TEKST inn som en topptekst.\n"
#~ "       --proxy-user=BRUKER     sett proxy-bruker til BRUKER.\n"
#~ "       --proxy-passwd=PASSORD  sett proxy-passord til PASSORD.\n"
#~ "  -s,  --save-headers          skriv HTTP-topptekster til fil.\n"
#~ "  -U,  --user-agent=AGENT      identifiser som AGENT i stedet for \n"
#~ "                               �Wget/VERSJON�.\n"
#~ "\n"

#, fuzzy
#~ msgid ""
#~ "FTP options:\n"
#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
#~ "       --retr-symlinks         when recursing, get linked-to files (not "
#~ "dirs).\n"
#~ "\n"
#~ msgstr ""
#~ "FTP-flagg:\n"
#~ "       --retr-symlinks   hent symbolske linker via FTP.\n"
#~ "  -g,  --glob=on/off     (ikke) tolk bruk av jokertegn i filnavn.\n"
#~ "       --passive-ftp     bruk passiv overf�ringsmodus.\n"
#~ "\n"

#, fuzzy
#~ msgid ""
#~ "Recursive retrieval:\n"
#~ "  -r,  --recursive          recursive web-suck -- use with care!\n"
#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
#~ "infinite).\n"
#~ "       --delete-after       delete files locally after downloading them.\n"
#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
#~ "page.\n"
#~ "\n"
#~ msgstr ""
#~ "Rekursiv nedlasting:\n"
#~ "  -r,  --recursive             tillat rekursiv nedlasting -- bruk med "
#~ "omtanke!\n"
#~ "  -l,  --level=ANTALL          maksimalt antall rekursjonsniv�er "
#~ "(0=uendelig).\n"
#~ "       --delete-after          slett nedlastede filer.\n"
#~ "  -k,  --convert-links         konverter absolutte linker til relative.\n"
#~ "  -m,  --mirror                sett passende flagg for speiling av "
#~ "tjenere.\n"
#~ "  -nr, --dont-remove-listing   ikke slett �.listing�-filer.\n"
#~ "\n"

#, fuzzy
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
#~ "  -nh, --no-host-lookup             don't DNS-lookup hosts.\n"
#~ "  -np, --no-parent                  don't ascend to the parent "
#~ "directory.\n"
#~ "\n"
#~ msgstr ""
#~ "Hva er tillatt ved rekursjon:\n"
#~ "  -A,  --accept=LISTE               liste med tillatte filtyper.\n"
#~ "  -R,  --reject=LISTE               liste med ikke tillatte filtyper.\n"
#~ "  -D,  --domains=LISTE              liste med tillatte domener.\n"
#~ "       --exclude-domains=LISTE      liste med ikke tillatte domener.\n"
#~ "  -L,  --relative                   f�lg kun relative linker.\n"
#~ "       --follow-ftp                 f�lg FTP-linker fra HTML-dokumenter.\n"
#~ "  -H,  --span-hosts                 f�lg linker til andre tjenere.\n"
#~ "  -I,  --include-directories=LISTE  liste med tillatte katalognavn.\n"
#~ "  -X,  --exclude-directories=LISTE  liste med ikke tillatte katalognavn.\n"
#~ "  -nh, --no-host-lookup             ikke let etter tjenernavn via DNS.\n"
#~ "  -np, --no-parent                  ikke f�lg linker til ovenst�ende "
#~ "katalog.\n"
#~ "\n"

#~ msgid "%s: debug support not compiled in.\n"
#~ msgstr "%s: st�tte for avlusing ikke inkludert ved kompilering.\n"

#, fuzzy
#~ msgid ""
#~ "Copyright (C) 1995, 1996, 1997, 1998, 2000, 2001 Free Software "
#~ "Foundation, Inc.\n"
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.\n"
#~ "Dette programmet distribueres i h�p om at det blir funnet nyttig,\n"
#~ "men UTEN NOEN GARANTIER; ikke en gang for SALGBARHET eller\n"
#~ "EGNETHET TIL NOEN SPESIELL OPPGAVE.\n"
#~ "Se �GNU General Public License� for detaljer.\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: ugyldig kommando\n"

#~ msgid ""
#~ "\n"
#~ "CTRL+Break received, redirecting output to `%s'.\n"
#~ "Execution continued in background.\n"
#~ "You may stop Wget by pressing CTRL+ALT+DELETE.\n"
#~ msgstr ""
#~ "\n"
#~ "CTRL+Break mottatt, omdirigerer utskrifter til `%s'.\n"
#~ "Kj�ring fortsetter i bakgrunnen.\n"
#~ "Du kan stoppe Wget ved � trykke CTRL+ALT+DELETE.\n"
#~ "\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Starter WinHelp %s\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Fant ikke proxy-tjener.\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Ikke nok minne.\n"

#~ msgid "Unknown/unsupported protocol"
#~ msgstr "Protokollen er ukjent/ikke st�ttet"

#~ msgid "Invalid port specification"
#~ msgstr "Port-spesifikasjonen er ugyldig"

#~ msgid ""
#~ "Local file `%s' is more recent, not retrieving.\n"
#~ "\n"
#~ msgstr ""
#~ "Lokal fil �%s� er samme/nyere, ignoreres.\n"
#~ "\n"

#~ msgid "%s: Cannot determine user-id.\n"
#~ msgstr "%s: Fant ikke bruker-ID.\n"

#~ msgid "%s: Warning: uname failed: %s\n"
#~ msgstr "%s: Advarsel: feil fra �uname�:  %s\n"

#~ msgid "%s: Warning: gethostname failed\n"
#~ msgstr "%s: Advarsel: feil fra �gethostname�\n"

#~ msgid "%s: Warning: cannot determine local IP address.\n"
#~ msgstr "%s: Advarsel: fant ikke lokal IP-adresse.\n"

#~ msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
#~ msgstr ""
#~ "%s: Advarsel: fikk ikke FQDN fra tilbake-oppslag for lokal IP-adresse!\n"

#~ msgid "Error (%s): Link %s without a base provided.\n"
#~ msgstr "Feil (%s): Link %s gitt uten utgangspunkt.\n"

#~ msgid "Error (%s): Base %s relative, without referer URL.\n"
#~ msgstr ""
#~ "Feil (%s): Utgangspunktet %s er relativt, ukjent URL som referent.\n"