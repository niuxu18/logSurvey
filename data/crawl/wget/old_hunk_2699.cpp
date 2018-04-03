"Content-Type: text/plain; charset=iso-8859-2\n"
"Content-Transfer-Encoding: 8-bit\n"

#: src/connect.c:199
#, c-format
msgid "%s: unable to resolve bind address `%s'; disabling bind.\n"
msgstr ""

# , c-format
#: src/connect.c:271
#, fuzzy, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Navazuje se spojen� s %s:%hu... "

# , c-format
#: src/connect.c:274
#, fuzzy, c-format
msgid "Connecting to %s:%d... "
msgstr "Navazuje se spojen� s %s:%hu... "

#: src/connect.c:335
#, fuzzy
msgid "connected.\n"
msgstr "spojeno!\n"

#: src/convert.c:176
#, c-format
msgid "Converted %d files in %.*f seconds.\n"
msgstr ""

# , c-format
#: src/convert.c:202
#, c-format
msgid "Converting %s... "
msgstr "P�ev�d� se %s... "

#: src/convert.c:215
msgid "nothing to do.\n"
msgstr "nic nen� pot�eba p�ev�d�t.\n"

# , c-format
#: src/convert.c:223 src/convert.c:247
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Nelze p�ev�st odkazy v %s: %s\n"

# , c-format
#: src/convert.c:238
#, c-format
msgid "Unable to delete `%s': %s\n"
msgstr "Nebylo mo�n� odstranit `%s': %s\n"

# , c-format
#: src/convert.c:447
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Nelze z�lohovat %s jako %s: %s\n"

#: src/cookies.c:619
#, c-format
msgid "Error in Set-Cookie, field `%s'"
msgstr "Chyba v hlavi�ce Set-Cookie v poli `%s'"

#: src/cookies.c:643
#, fuzzy, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Syntaktick� chyba v hlavi�ce Set-Cookie: P�ed�asn� konec �et�zce.\n"

# , c-format
#: src/cookies.c:1469
#, c-format
msgid "Cannot open cookies file `%s': %s\n"
msgstr "Nelze otev��t soubor s kol��ky `%s': %s\n"

# , c-format
#: src/cookies.c:1481
#, c-format
msgid "Error writing to `%s': %s\n"
msgstr "P�i z�pisu do `%s' nastala chyba: %s.\n"

#: src/cookies.c:1484
#, c-format
msgid "Error closing `%s': %s\n"
msgstr "P�i uzav�r�n� `%s' nastala chyba: %s\n"

#: src/ftp-ls.c:841
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Nepodporovan� typ v�pisu, pou�ije se Unixov� parser.\n"

# , c-format
#: src/ftp-ls.c:887 src/ftp-ls.c:889
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Obsah /%s na %s:%d"

#: src/ftp-ls.c:912
#, c-format
msgid "time unknown       "
msgstr "�as nezn�m�        "

#: src/ftp-ls.c:916
#, c-format
msgid "File        "
msgstr "Soubor      "

#: src/ftp-ls.c:919
#, c-format
msgid "Directory   "
msgstr "Adres��     "

#: src/ftp-ls.c:922
#, c-format
msgid "Link        "
msgstr "Sym. odkaz  "

#: src/ftp-ls.c:925
#, c-format
msgid "Not sure    "
msgstr "Nezn�m� typ "

# , c-format
#: src/ftp-ls.c:943
#, c-format
msgid " (%s bytes)"
msgstr " (%s bajt�)"

# , c-format
#: src/ftp.c:226
#, c-format
msgid "Length: %s"
msgstr "D�lka: %s"

#: src/ftp.c:232 src/http.c:1857
#, c-format
msgid ", %s (%s) remaining"
msgstr ""

#: src/ftp.c:236 src/http.c:1861
#, c-format
msgid ", %s remaining"
msgstr ""

#: src/ftp.c:239
msgid " (unauthoritative)\n"
msgstr " (nen� sm�rodatn�)\n"

# , c-format
#. Second: Login with proper USER/PASS sequence.
#: src/ftp.c:314
#, c-format
msgid "Logging in as %s ... "
msgstr "Prob�h� p�ihla�ov�n� jako %s ... "

#: src/ftp.c:327 src/ftp.c:373 src/ftp.c:402 src/ftp.c:454 src/ftp.c:566
#: src/ftp.c:612 src/ftp.c:640 src/ftp.c:698 src/ftp.c:759 src/ftp.c:819
#: src/ftp.c:866
msgid "Error in server response, closing control connection.\n"
msgstr ""
"��dic� spojen� bude ukon�eno, proto�e server odpov�d�l chybov�m hl�en�m.\n"

#: src/ftp.c:334
msgid "Error in server greeting.\n"
msgstr "�vodn� odpov�� serveru je chybn�.\n"

#: src/ftp.c:341 src/ftp.c:462 src/ftp.c:574 src/ftp.c:648 src/ftp.c:708
#: src/ftp.c:769 src/ftp.c:829 src/ftp.c:876
msgid "Write failed, closing control connection.\n"
msgstr "R�dic� spojen� bude ukon�eno, proto�e nelze zapsat data.\n"

#: src/ftp.c:347
msgid "The server refuses login.\n"
msgstr "Server odm�t� p�ihl�en�.\n"

#: src/ftp.c:353
msgid "Login incorrect.\n"
msgstr "Chyba p�i p�ihl�en�.\n"

#: src/ftp.c:359
msgid "Logged in!\n"
msgstr "P�ihl�eno!\n"

#: src/ftp.c:381
msgid "Server error, can't determine system type.\n"
msgstr ""
"Nelze zjistit typ vzd�len�ho opera�n�ho syst�mu, proto�e server odpov�d�l "
"chybov�m hl�en�m.\n"

#: src/ftp.c:390 src/ftp.c:685 src/ftp.c:742 src/ftp.c:785
msgid "done.    "
msgstr "hotovo.  "

#: src/ftp.c:442 src/ftp.c:591 src/ftp.c:624 src/ftp.c:849 src/ftp.c:895
msgid "done.\n"
msgstr "hotovo.\n"

# , c-format
#: src/ftp.c:469
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr ""
"R�dic� spojen� bude ukon�eno, proto�e je po�adov�n nezn�m� typ p�enosu `%"
"c'.\n"

#: src/ftp.c:481
msgid "done.  "
msgstr "hotovo."

#: src/ftp.c:487
msgid "==> CWD not needed.\n"
msgstr "==> CWD nen� pot�eba.\n"

# , c-format
#: src/ftp.c:580
#, c-format
msgid ""
"No such directory `%s'.\n"
"\n"
msgstr ""
"Adres�� `%s' neexistuje.\n"
"\n"

#. do not CWD
#: src/ftp.c:595
msgid "==> CWD not required.\n"
msgstr "==> CWD nen� pot�eba.\n"

#: src/ftp.c:654
msgid "Cannot initiate PASV transfer.\n"
msgstr "Nelze spustit pasivn� p�enos dat.\n"

#: src/ftp.c:658
msgid "Cannot parse PASV response.\n"
msgstr "Odpov�� na PASV nen� pochopiteln�.\n"

#: src/ftp.c:676
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr ""

# , c-format
#: src/ftp.c:724
#, c-format
msgid "Bind error (%s).\n"
msgstr "Chyba p�i operaci \"bind\" (%s).\n"

#: src/ftp.c:730
msgid "Invalid PORT.\n"
msgstr "Neplatn� PORT.\n"

#: src/ftp.c:776
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"P��kaz REST selhal, p�enos za�ne od za��tku souboru.\n"

# , c-format
#: src/ftp.c:837
#, c-format
msgid ""
"No such file `%s'.\n"
"\n"
msgstr ""
"Soubor `%s' neexistuje.\n"
"\n"

# , c-format
#: src/ftp.c:884
#, c-format
msgid ""
"No such file or directory `%s'.\n"
"\n"
msgstr ""
"Soubor �i adres�� `%s' neexistuje.\n"
"\n"

#. We cannot just invent a new name and use it (which is
#. what functions like unique_create typically do)
#. because we told the user we'd use this name.
#. Instead, return and retry the download.
#: src/ftp.c:946 src/http.c:1913
#, c-format
msgid "%s has sprung into existence.\n"
msgstr ""

# , c-format
#: src/ftp.c:1008
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, ��dic� spojen� bude ukon�eno.\n"

# , c-format
#: src/ftp.c:1016
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Datov� spojen�: %s; "

#: src/ftp.c:1031
msgid "Control connection closed.\n"
msgstr "��dic� spojen� bylo ukon�eno.\n"

#: src/ftp.c:1049
msgid "Data transfer aborted.\n"
msgstr "P�enos dat byl p�ed�asn� ukon�en.\n"

# , c-format
#: src/ftp.c:1114
#, c-format
msgid "File `%s' already there, not retrieving.\n"
msgstr "Soubor `%s' je ji� zde a nen� jej t�eba p�en�et.\n"

# , c-format
#: src/ftp.c:1182 src/http.c:2130
#, c-format
msgid "(try:%2d)"
msgstr "(pokus:%2d)"

# , c-format
#: src/ftp.c:1252 src/http.c:2409
#, fuzzy, c-format
msgid ""
"%s (%s) - `%s' saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' ulo�en [%ld]\n"
"\n"

# , c-format
#: src/ftp.c:1294 src/main.c:948 src/recur.c:376 src/retr.c:842
#, c-format
msgid "Removing %s.\n"
msgstr "Ma�e se %s.\n"

# , c-format
#: src/ftp.c:1336
#, c-format
msgid "Using `%s' as listing tmp file.\n"
msgstr "Seznam soubor� bude do�asn� ulo�en v `%s'.\n"

# , c-format
#: src/ftp.c:1351
#, c-format
msgid "Removed `%s'.\n"
msgstr "Soubor `%s' byl vymaz�n.\n"

# , c-format
#: src/ftp.c:1386
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Hloubka rekurze %d p�ekro�ila maxim�ln� hloubku %d.\n"

#. Remote file is older, file sizes can be compared and
#. are both equal.
#: src/ftp.c:1456
#, c-format
msgid "Remote file no newer than local file `%s' -- not retrieving.\n"
msgstr ""
"Vzd�len� soubor nen� nov�j��, ne� lok�ln� soubor `%s', a nen� jej t�eba "
"stahovat.\n"

#. Remote file is newer or sizes cannot be matched
#: src/ftp.c:1463
#, c-format
msgid ""
"Remote file is newer than local file `%s' -- retrieving.\n"
"\n"
msgstr ""
"Vzd�len� soubor je nov�j��, ne� lok�ln� soubor `%s', a je jej t�eba "
"st�hnout.\n"
"\n"

# , c-format
#. Sizes do not match
#: src/ftp.c:1470
#, fuzzy, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Velikosti se neshoduj� (lok�ln� %ld), soubor je t�eba st�hnout.\n"
"\n"

#: src/ftp.c:1488
msgid "Invalid name of the symlink, skipping.\n"
msgstr "P�eskakuje se symbolick� odkaz, nebo� n�zev odkazu nen� platn�.\n"

# , c-format
#: src/ftp.c:1505
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Korektn� symbolick� odkaz %s -> %s ji� existuje.\n"
"\n"

# , c-format
#: src/ftp.c:1513
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Vytv��� se symbolick� odkaz %s -> %s\n"

# , c-format
#: src/ftp.c:1523
#, c-format
msgid "Symlinks not supported, skipping symlink `%s'.\n"
msgstr ""
"Symbolick� odkaz `%s' bude vynech�n, proto�e syst�m symbolick� odkazy "
"nepodporuje.\n"

# , c-format
#: src/ftp.c:1535
#, c-format
msgid "Skipping directory `%s'.\n"
msgstr "Adres�� `%s' bude vynech�n.\n"

# , c-format
#: src/ftp.c:1544
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: nezn�m�/nepodporovan� typ souboru.\n"

# , c-format
#: src/ftp.c:1571
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: �asov� raz�tko souboru je poru�en�.\n"

# , c-format
#: src/ftp.c:1599
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Podadres��e se nebudou p�en�et, proto�e ji� bylo dosa�eno hloubky %d "
"(maximum je %d).\n"

# , c-format
#: src/ftp.c:1649
#, c-format
msgid "Not descending to `%s' as it is excluded/not-included.\n"
msgstr ""
"Do adres��e `%s' se nesetupuje, proto�e tento adres�� se bu� m� vynechat "
"nebo\n"
"nebyl zad�n k proch�zen�.\n"

# , c-format
#: src/ftp.c:1715 src/ftp.c:1729
#, c-format
msgid "Rejecting `%s'.\n"
msgstr "Soubor `%s' se nem� stahovat.\n"
