# Messages fran�ais pour GNU concernant wget.
# Copyright � 2008 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Michel Robitaille <robitail@IRO.UMontreal.CA>, traducteur depuis/since 1996.
# Nicolas Provost <nprovost@quadriv.com>, 2009.
#
msgid ""
msgstr ""
"Project-Id-Version: GNU wget 1.12-pre5\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-08-03 15:36+0100\n"
"Last-Translator: Nicolas Provost <nprovost@quadriv.com>\n"
"Language-Team: French <traduc@traduc.org>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=ISO-8859-1\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=(n > 1);\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Erreur syst�me inconnue"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: l'option � %s � est ambigu�.\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: l'option � --%s � ne prend pas d'argument.\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: l'option � %c%s � ne prend pas d'argument.\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: l'option � %s � requiert un argument.\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: l'option � --%s � n'est pas reconnue.\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: l'option � %c%s � n'est pas reconnue.\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: option ill�gale -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: option non valide -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: l'option requiert un argument -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: l'option � -W %s � est ambigu�.\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: l'option � -W %s � ne prend pas d'argument.\n"

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
msgstr "�"

#: lib/quotearg.c:273
msgid "'"
msgstr "�"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "m�moire �puis�e"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s : impossible de r�soudre l'adresse \"bind\" %s; d�sactivation de \"bind"
"\".\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Connexion vers %s|%s|:%d..."

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Connexion vers %s:%d..."

#: src/connect.c:358
msgid "connected.\n"
msgstr "connect�.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "�chec: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s : impossible de r�soudre l'adresse de l'h�te %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d fichiers convertis en %s secondes.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Conversion de %s..."

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "rien � faire.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Ne peut convertir les liens dans %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Impossible de supprimer %s : %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Ne peut archiver %s comme %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Erreur de syntaxe dans Set-Cookie: %s � la position %d\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Un cookie provenant de %s a tent� de changer le domaine en %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Impossible d'ouvrir le fichier des cookies %s : %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Erreur d'�criture dans %s : %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Erreur de fermeture pour %s : %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Type d'affichage (listing) non-support�, on essaye le parseur d'affichage � "
"la Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Index de /%s sur %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "heure inconnue     "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Fichier     "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "R�pertoire  "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Lien        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Incertain   "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s octets)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Longueur: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) restant"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s restant"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (non certifi�e)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Ouverture de session en %s..."

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr ""
"ERREUR dans la r�ponse du serveur, fermeture de la connexion de contr�le.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "ERREUR dans le message de salutation du serveur.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "�CHEC d'�criture, fermeture de la connexion de contr�le.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Le serveur refuse l'�tablissement de session.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "�tablissement de session erron�.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Session �tablie!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Erreur du serveur, ne peut d�terminer le type de syst�me.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "compl�t�.    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "compl�t�.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Type %c inconnu, fermeture de la connexion de contr�le.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "compl�t�.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD n'est pas n�cessaire.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"R�pertoire %s inexistant.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD n'est pas requis.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Ne peut initier le transfert PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Ne peut analyser la r�ponse PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "ne peut �tablir la connexion vers %s sur le port %d: %s.\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "ERREUR de la fonction � bind � (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Port non valable.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"�CHEC de REST, reprise depuis le d�but.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Le fichier %s existe.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Fichier %s inexistant.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Fichier %s inexistant.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Fichier ou r�pertoire %s inexistant.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s vient de s'annoncer comme existante.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, fermeture de la connexion de contr�le.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Connexion de transfert de donn�es: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Connexion de contr�le ferm�e.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Transfert des donn�es abandonn�.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Fichier %s d�j� pr�sent ; pas de r�cup�ration.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(essai:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - envoi sur stdout %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s sauvegard� [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Destruction de %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Utilisation de %s comme fichier temporaire de listage.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "%s d�truit.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Le niveau %d de r�cursivit� d�passe le niveau maximum %d.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Fichier distant pas plus r�cent que le fichier local %s -- non r�cup�r�.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Fichier distant plus r�cent que le fichier local %s -- r�cup�ration.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Les tailles ne concordent pas (local %s) -- r�cup�ration.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Nom erron� d'un lien symbolique, escamot�.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Lien symbolique d�j� correct %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Cr�ation du lien symbolique %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Liens symboliques non support�s, lien %s ignor�.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "R�pertoire %s ignor�.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: type de fichier inconnu ou non support�.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: horodatage corrompu.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Les r�pertoires ne seront pas r�cup�r�s, la profondeur %d d�passe le maximum "
"%d.\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "%s non parcouru puisqu'il est exclu ou non inclus.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "Rejet de %s.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Erreur - %s ne correspond pas � %s : %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Pas de concordance pour le motif %s.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Index �crit sous forme HTML dans %s [%s].\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Index �crit sous forme HTML dans %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "ERREUR"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "AVERTISSEMENT"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: pas de certificat pr�sent� par %s.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s : le certificat de %s n'est pas digne de confiance.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s : le certificat %s n'est pas d'un �metteur connu.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s : le certificat de %s a �t� r�voqu�.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Erreur d'initialisation du certificat X509 : %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Aucun certificat trouv�\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Erreur d'analyse du certificat : %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Le certificat n'est pas encore actif\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Le certificat a expir�\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"Le propri�taire du certificat ne concorde pas avec le nom de l'h�te %s\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "H�te inconnu"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Echec temporaire dans la r�solution de nom"

#: src/host.c:364
msgid "Unknown error"
msgstr "ERREUR inconnue"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "R�solution de %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "�chec: pas d'adresse IPv4/IPv6 pour l'h�te.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "�chec: d�lai d'attente expir�\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: impossible de r�soudre le lien incomplet %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL non valide %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Echec d'�criture de la requ�te HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Pas d'ent�te, HTTP/0.9 assum�"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "D�sactivation SSL en raison des erreurs rencontr�s.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Fichier de donn�es POST %s manquant : %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "R�utilisation de la connexion existante vers %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "�CHEC de lecture de la r�ponse proxy: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "�chec de tunnel proxy: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "requ�te %s transmise, en attente de la r�ponse..."

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Aucune donn�e re�ue.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "ERREUR de lecture (%s) de l'en-t�te.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Sch�ma d'authentification inconnu.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "�CHEC d'autorisation.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Fichier %s d�j� pr�sent; pas de r�cup�ration.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Ligne d'�tat mal form�e"

#: src/http.c:2095
msgid "(no description)"
msgstr "(pas de description)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Emplacement: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "non sp�cifi�"

#: src/http.c:2156
msgid " [following]"
msgstr " [suivant]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Le fichier a d�j� �t� compl�tement r�cup�r�; rien � faire.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Longueur: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignor�"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Sauvegarde en : %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "AVERTISSEMENT: les m�tacaract�res ne sont pas support�s en HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Mode \"spider\" activ�. Test de l'existence d'un fichier distant.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Impossible d'�crire dans %s (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Incapable d'�tablir une connexion SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERREUR: redirection (%d) sans destination.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Le fichier distant n'existe pas -- lien mort!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERREUR %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "En-t�te de derni�re modification manquant -- horodatage ignor�.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "En-t�te de derni�re modification erron� -- horodatage ignor�.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Fichier du serveur pas plus r�cent que le fichier local %s -- non r�cup�r�.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Les tailles ne concordent pas (local %s) -- r�cup�ration.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Le fichier distant est plus r�cent, r�cup�ration.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Le fichier distant existe et doit contenir des liens vers d'autres "
"ressources - r�cup�ration en cours.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Le fichier distant existe mais ne contient aucun lien - r�cup�ration "
"abandonn�e.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Le fichier distant existe et pourrait contenir plusieurs liens,\n"
"mais l'analyse r�cursive est d�sactiv�e -- abandon de la r�cup�ration.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Le fichier distant existe.\n"
"\n"

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
"%s (%s) - envoi vers sortie standard %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - %s sauvegard� [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Fermeture de la connexion � l'octet %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - ERREUR de lecture � l'octet %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - ERREUR de lecture � l'octet %s/%s (%s)."

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC pointe vers %s lequel n'existe pas.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: ne peut lire %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: ERREUR dans %s � la ligne %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: ERREUR de syntaxe dans %s � la ligne %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s : commande inconnue %s  dans %s � la ligne %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s : ATTENTION, \"wgetrc\" du syst�me ET de l'usager pointent vers %s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s : commande --execute non valide %s\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s : %s : bool�en non valide %s ; utiliser � on � ou � off �.\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s : %s : nombre %s non valide.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s : %s : valeur d'octet non valide %s.\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s : %s : p�riode de temps non valide %s.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s : %s : valeur non valide %s.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s : %s : en-t�te non valide %s.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s : %s : type de progression non valide %s.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s : %s : restriction non valide %s,\n"
"    utiliser [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "L'encodage %s n'est pas valide\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8 : la varaiable \"locale\" n'est pas positionn�e\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "La conversion de %s � %s n'est pas support�e\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "S�quence multi-octets incompl�te ou non valide rencontr�e\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Erreur num. %d (errno) non g�r�e\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "�chec de \"idn_encode\" (%d) : %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "�chec de \"idn_decode\" (%d) : %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"re�u %s, redirection de la sortie vers %s.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s re�u.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; d�sactivation de la journalisation.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Usage: %s [OPTION]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Les arguments obligatoires pour les options de format long le sont\n"
"aussi pour les options de format court.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "D�marrage:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           afficher la version de Wget et quitter.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              afficher l'aide-m�moire.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr ""
"  -b,  --background        passer � l'arri�re plan apr�s le d�marrage.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=COMMANDE  ex�cuter une commande `.wgetrc'-style\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Journalisation et fichier d'entr�e:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr ""
"  -o,  --output-file=FICHIER journaliser les messages dans le FICHIER.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FICHIER accoler les messages au FICHIER.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr ""
"  -d,  --debug               afficher beaucoup d'informations de d�bogage.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              affiche la sortie de d�bogage Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr ""
"  -q,  --quiet               ex�cuter en mode silencieux (sans sortie "
"d'affichage).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr ""
"  -v,  --verbose             ex�cuter en mode bavard (mode par d�faut).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          �teindre le mode bavard, sans �tre silencieux.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=FIC       t�l�charge les URLs trouv�es dans FIChier "
"local ou externe.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr ""
"  -F,  --force-html          traiter le fichier d'entr�e comme du HTML.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            r�sout les liens HTML du fichier en\n"
"                             entr�e (-i -F) relativement � URL,\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "T�l�chargement :\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=NOMBRE            fixer le NOMBRE de tentatives de reprises "
"(0 : sans limite).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       r�-essayer m�me si la connexion est "
"refus�e.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr ""
"  -O,  --output-document=FICHIER �crire les documents dans le FICHIER.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              escamoter les t�l�chargements de fichiers\n"
"                                             d�j� existants.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                poursuivre le t�l�chargement d'un fichier "
"partiellement t�l�charg�.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=TYPE           s�lectionner le type de jauge de "
"progression de t�l�chargement.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            ne pas re-t�l�charger les fichiers � moins "
"que\n"
"                                 qu'il y en ait de plus r�cents que les "
"locaux.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         afficher la r�ponse du serveur.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  ne rien t�l�charger.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SECONDES        fixer toutes les valeurs de d�lai maximal "
"d'attente � SECONDES.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SECS        fixer le d�lai maximal d'attente de "
"recherche DNS � SECS.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SECS    fixer le d�lai maximal d'attente de "
"connexion � SECS.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SECS       fixer le d�lai maximal d'attente de lecture "
"� SECS.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr "  -w,  --wait=SECONDES           attendre SECONDES entre les essais.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SECONDES      attendre 1..SECONDES entre les essais d'une "
"r�cup�ration.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             attendre 0...2*ATTENTE secondes entre les "
"r�cup�rations.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                d�sactivier explicitement le proxy.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=NOMBRE            fixer le quota de r�cup�ration � NOMBRE.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADRESSE    lier � l'ADRESSE (nom d'h�te ou adresse IP) "
"sur l'h�te local.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=TAUX         limiter le TAUX de t�l�chargement.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache            d�sactiver la mise en cache des r�sultats "
"de recherche DNS.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  restreindre les caract�res dans les noms de "
"fichier � ceux permis par l'OS.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ignore la casse des caract�res lors de "
"l'examen des fichiers/r�pertoires.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr ""
"  -4,  --inet4-only              connecter seulement sur des adresses IPv4.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr ""
"  -6,  --inet6-only              connnecter seulement sur des adresses "
"IPv6.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILLE   connecter d'abord sur des adresses de la "
"FAMILLE,\n"
"                                 soit IPv6, IPv4 ou none (pour aucun).\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=USAGER             fixer l'utilisateur � USAGER pour ftp et "
"http.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=MOT_DE_PASSE   fixer le MOT_DE_PASSE pour ftp et http.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            demander les mots de passe.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  d�sactive le support des IRIs.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=ENC      utiliser l'encodage local ENC pour les "
"IRIs.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=ENC     utiliser l'encodage distant ENC par "
"d�faut.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "R�pertoires :\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           ne pas cr�er de r�pertoires.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        forcer la cr�ation de r�pertoires.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""
"  -nH, --no-host-directories      ne pas cr�er de r�pertoires sur l'h�te.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     utiliser le nom du protocole dans les "
"r�pertoires.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""
"  -P,  --directory-prefix=PR�FIXE sauvegarder les fichiers avec PR�FIXE/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=NOMBRE          ignorer le NOMBRE de composants des "
"r�pertoires distants.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "options HTTP :\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=USAGER      fixer l'USAGER http.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=MDP    fixer le MDP (mot de passe) http.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              interdire les donn�es mise en cache sur le "
"serveur.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NOM      Change le nom de la page par d�faut\n"
"                               (normalement \"index.html\").\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension      sauver les documents HTML avec l'extension "
"adapt�e.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         ignorer le champ de l'en-t�te `Content-"
"Length'.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=CHA�NE         ins�rer la CHA�NE parmi les en-t�tes.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          nbr maximum de redirections autoris�es par "
"page.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=USAGER     fixer le nom d'USAGER proxy.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=MDP    fixer le MDP (mot de passe) du proxy.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           inclure l'en-t�te `Referer: URL' dans la "
"requ�te HTTP.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr ""
"       --save-headers          sauvegarder les en-t�tes HTTP dans le "
"fichier.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT      s'identifier comme AGENT au lieu de Wget/"
"VERSION.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    d�sactiver l'option HTTP keep-alive "
"(connexions persistentes).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            ne pas utiliser les cookies.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=FICHIER  charger les cookies � partir du FICHIER avant "
"la session.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=FICHIER  sauvegarder les cookies dans le FICHIER apr�s "
"la session.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  charger et sauvegarder les cookies de session "
"non permanents.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=CHA�NE      utiliser une m�thode POST; transmettre la "
"CHA�NE\n"
"                                                 comme des donn�es.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FICHIER     utiliser une m�thode POST; transmettre le "
"contenu du FICHIER.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   tient compte de l'ent�te \"Content-Disposition"
"\" pour\n"
"                               le choix des noms de fichiers locaux "
"(EXPERIMENTAL).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     envoie l'information d'authentification "
"basique HTTP\n"
"                               sans attendre d'abord le certificat du "
"serveur.\n"
"                               \n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "options HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     choisir un protocole s�curis� PR parmi : "
"auto, SSLv2,\n"
"                                SSLv3 et TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   ne pas valider le certificat du serveur.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FICHIER    fichier du certificat client.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TYPE  type du certificat client, PEM ou DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FICHIER    fichier de la cl� priv�e.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TYPE  type de cl� priv�e, PEM ou DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr ""
"       --ca-certificate=FICHIER fichier avec un lot de certificats "
"autorit�s.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=R�P       r�pertoire o� la liste de hash des "
"certificats autorit�s est stock�e.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FICHIER    fichier avec des donn�es al�atoires pour le "
"germe de SSL PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=FICHIER       d�nomination de fichier du socket EGD avec "
"donn�es al�atoires.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "options FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             Utilise le format Stream_LF pour tous les\n"
"                                    fichier binaires FTP.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""
"       --ftp-user=USAGER       utiliser USAGER comme utilisateur pour le "
"transfert ftp.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr ""
"       --ftp-password=MDP      utiliser le MDP (mot de passe) pour les "
"transfert ftp.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr ""
"       --no-remove-listing     ne pas enlever les fichiers `.listing'.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               d�sactiver la mutilation des noms de fichiers "
"par FTP.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        d�sactiver le mode de transfert passif.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         lors de la r�cursion, prendre les fichiers "
"attach�s � des liens (pas les r�pertoires).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "T�l�chargement r�cursif:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          activer les t�l�chargements r�cursifs.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=NOMBRE       profondeur maximale de r�cursion (inf ou 0 pour "
"infini).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       d�truire les fichiers localement apr�s les avoir "
"t�l�charg�s.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      fait pointer les liens dans le HTML/CSS "
"t�l�charg� vers des fichiers locaux.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   avant de convertir le fichier X, le sauver en "
"X_orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   avant de convertir le fichier X en faire "
"l'archive sous X.orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             option courte �quivalente � -N -r -l inf --no-"
"remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    obtenir toutes les images, etc. n�cessaires � "
"l'affichage de la page HTML.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    activer le traitement strict (SGML) des "
"commentaires HTML.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Acceptation/rejet r�cursif:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LISTE              liste des extensions accept�es, s�par�es "
"par des virgules.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LISTE              liste des extensions rejet�es, s�par�es "
"par des virgules.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LISTE             liste des domaines accept�s, s�par�s par "
"des virgules.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LISTE     liste des domaines rejet�s, s�par�s par "
"des virgules.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                suivre les liens FTP � partir des "
"documents HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTE         liste des balises HTML � suivre,  "
"s�par�es par des virgules.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTE         liste des balises HTML ignor�es, s�par�es "
"par des virgules.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                aller sur les h�tes externes en mode "
"r�cursif.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""
"  -L,  --relative                  suivre les liens relatifs seulement.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LISTE liste des r�pertoires permis.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LISTE liste des r�pertoires exclus.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""
"  -np, --no-parent                 ne pas remonter dans le r�pertoire "
"parent.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Transmettre toutes anomalies ou suggestions � <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, un r�cup�rateur r�seau non interactif.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Mot de passe pour l'utilisateur %s : "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Mot de passe : "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc : "

#: src/main.c:781
msgid "Locale: "
msgstr "Locale : "

#: src/main.c:782
msgid "Compile: "
msgstr "Compilation : "

#: src/main.c:783
msgid "Link: "
msgstr "Lien : "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s compil� sur VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s compil� sur %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (env)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (utilisateur)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (syst�me)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Copyright � 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Licence GPLv3+: GNU GPL version 3 ou ult�rieure\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Logiciel libre : vous �tes libre de le modifier ou de le redistribuer.\n"
"Il n'y a AUCUNE GARANTIE, dans les limites permises par la loi.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"�crit � l'origine par Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Actuellement maintenu par Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Transmettre les anomalies ou demandes � <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Essayez � %s --help � pour plus d'informations.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: option non reconnue -- � -n%c �\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Ne peut �tre en mode bavard et silencieux en m�me temps.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Ne peut se servir des dates et ne pas �craser les vieux fichiers en m�me "
"temps.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Ne peut utiliser ensemble --inet4-only et --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Impossible de sp�cifier � la fois -k et -O si plusieurs URLs sont donn�es, "
"ou en combinaison\n"
"avec -p ou -r. Voyez le manuel pour des d�tails.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"ATTENTION: combiner -O avec -r ou -p signifie que tout le contenu "
"t�l�charg�\n"
"va �tre plac� dans le fichier unique pr�cis�.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"ATTENTION: l'horodatage est inactif si combin� avec -O. Voir le manuel\n"
"pour les d�tails.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Fichier � %s � est d�j� l�; pas de r�cup�ration.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Impossible de sp�cifier � la fois --ask-password et --password.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL manquante\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Cette version ne supporte pas les IRIs\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"AVERT. : impossible de r�ouvrir la sortie standard en mode\n"
"binaire; fin de lignes des fichiers t�l�charg�s probl�matiques.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Aucune URL rep�r�e dans %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"Termin� --%s--\n"
"T�l�charg�(s): %d fichiers, %s en %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Quota de t�l�chargement (%s octets) D�PASS�!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Poursuite en arri�re plan.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Poursuite � l'arri�re plan, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "La sortie sera �crite vers %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: aucun slot de pilote (socket) utilisable.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s : %s:%d : ATTENTION : le jeton %s appara�t devant le nom des machines\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: jeton inconnu � %s �\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Usage: %s NETRC [H�TE]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: ne peut �valuer par stat() le fichier %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "AVERTISSEMENT: utilisation d'un germe al�atoire faible.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"Impossible de g�n�rer un germe PRNG (seed); consid�rer l'utilisation de --"
"random-file.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr ""
"%s : impossible de v�rifier l'attribut %s du certificat, �mis par %s :\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr ""
"  Impossible de v�rifier localement le certificat autorit� de l'�metteur.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  R�cup�ration d'un certificat auto-sign�.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Certificat �mis non encore valide.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Le certificat �mis a expir�.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s : le nom commun du certificat %s ne concorde pas avec le nom de l'h�te "
"demand� %s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"Pour �tablir une connexion � %s non s�curis�e, utiliser `--no-check-"
"certificate'.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ ignor�s %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Sp�cification du style \"point\" %s non valide; reste inchang�e.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  eta %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   ds "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Ne peut obtenir la fr�quence de l'horloge en TEMPS R�EL: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Destruction de %s puisqu'il doit �tre rejet�.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Ne peut ouvrir %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Chargement de robots.txt; svp ignorer les erreurs.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Erreur d'analyse syntaxique du proxy URL %s: %s\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Erreur dans le proxy URL %s: doit �tre de type HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d redirections d�passant la limite permise.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Abandon.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Nouvel essai.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Pas trouv� de lien mort.\n"
"\n"

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] ""
"Found %d broken link.\n"
"\n"
msgstr[1] ""
"Trouv� %d liens morts.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Aucune erreur"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Sch�ma non support� %s"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Sch�ma manquant"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Nom de l'h�te non valide"

#: src/url.c:641
msgid "Bad port number"
msgstr "Mauvais num�ro de port"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Nom de l'usager non valide"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Adresse num�rique IPv6 non termin�e"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Adresses IPv6 non support�es"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Adresse num�rique IPv6 invalide"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "Support de HTTPS manquant (non compil�)"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s : %s : �chec d'allocation de m�moire; m�moire �puis�e.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: �chec d'allocation de %ld octets; m�moire �puis�e.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s : aprintf : tampon de texte trop grand (%ld octets), abandon.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Poursuite � l'arri�re plan, pid %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Impossible de supprimer le lien symbolique %s : %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            accoler les URL aux liens relatifs dans -F -"
#~ "i fichier.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  pr�server les permissions des fichiers "
#~ "distants.\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Erreur dans Set-Cookie(), champ � %s �"

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) - Fermeture de la connexion � l'octet %s/%s. "

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: bool�en �tendu invalide � %s �;\n"
#~ "utiliser une des options � on �, � off �, � always � ou � never �.\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr "  -Y,  --proxy                   activer explicitement le proxy.\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Ce logiciel est distribu� en esp�rant qu'il soit utile,\n"
#~ "mais sans AUCUNE garantie; sans la garantie li�e � des raisons\n"
#~ "COMMERCIALES ou pour R�PONDRE � UN BESOIN PARTICULIER.\n"
#~ "selon les termes de la � GNU General Public License �.\n"
#~ "Pour plus d'informations � ce sujet, consulter la � GNU General Public "
#~ "License �.\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s: erreur de v�rification du certificat pour %s: %s\n"

#~ msgid "Failed writing to proxy: %s.\n"
#~ msgstr "�CHEC d'�criture vers le proxy: %s.\n"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "Fichier � %s � est d�j� l�, pas de r�cup�ration.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%s/%s])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - � %s � sauvegard� [%s/%s]\n"
#~ "\n"

#~ msgid "Empty host"
#~ msgstr "H�te vide"

#~ msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
#~ msgstr "Incapable de convertir `%s' pour lier l'adresse. Retour � ANY.\n"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "�CHEC REST; aucune troncation de � %s �\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s restant]"

#~ msgid "Host not found"
#~ msgstr "H�te non rep�r�"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "�CHEC d'initialisation du contexte SSL\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "�CHEC de chargement des certificats de %s\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Essai sans le certificat sp�cifi�\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "�CHEC d'obtention de la cl� du certificat de %s\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Fin de fichier lors de l'analyse du l'en-t�te.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "�chec de la poursuite du t�l�chargement du fichier, en conflit avec � -c "
#~ "�.\n"
#~ "Refus de tronquer le fichier existant � %s �.\n"
#~ "\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s restant)"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "D�marrage:\n"
#~ "  -V,  --version               afficher le nom et la version du logiciel\n"
#~ "  -h,  --help                  afficher l'aide-m�moire\n"
#~ "  -b,  --background            travailler � l'arri�re plan apr�s le "
#~ "d�marrage.\n"
#~ "  -e,  --execute=COMMAND       ex�cuter une commande de style � .wgetrc "
#~ "�.\n"
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
#~ "Journalisation et fichier d'entr�e:\n"
#~ "  -o,  --output-file=FICHIER   journaliser les messages dans le FICHIER.\n"
#~ "  -a,  --append-output=FICHIER concat�ner les messages au FICHIER.\n"
#~ "  -d,  --debug                 afficher les informations de mise au "
#~ "point.\n"
#~ "  -q,  --quiet                 travailler silencieusement (sans sortie).\n"
#~ "  -v,  --verbose               travailler en mode bavard (par d�faut).\n"
#~ "  -nv, --non-verbose           ne pas travailler en mode explicatif, \n"
#~ "                               mais garder un niveau informatif "
#~ "suffisant.\n"
#~ "  -i,  --input-file=FICHIER    lire les URL du FICHIER.\n"
#~ "  -F,  --force-html            traiter le fichier d'entr�e comme du code "
#~ "HTML.\n"
#~ "  -B,  --base=URL              ajouter le URL aux liens relatifs de -F -i "
#~ "fichier.\n"
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
#~ "T�l�chargement:\n"
#~ "  -t,  --tries=NOMBRE            initialiser le NOMBRE d'essais (0 sans "
#~ "limite).\n"
#~ "       --retry-connrefused       r�-essayer m�me si la connexion est "
#~ "refus�e.\n"
#~ "  -O   --output-document=FICHIER �crire les documents dans le FICHIER.\n"
#~ "  -nc, --no-clobber              ne pas �craser les fichiers existants.\n"
#~ "  -c,  --continue                red�marrer la r�cup�ration d'un fichier "
#~ "existant.\n"
#~ "       --progress=STYLE          utiliser le STYLE de jauge de "
#~ "progression.\n"
#~ "  -N,  --timestamping            ne pas r�cup�rer un fichier plus vieux "
#~ "qu'un fichier local.\n"
#~ "  -S,  --server-response         afficher la r�ponse du serveur.\n"
#~ "       --spider                  ne rien t�l�charger.\n"
#~ "  -T,  --timeout=SECONDES        initialiser le d�lai de gr�ce en "
#~ "SECONDES.\n"
#~ "       --dns-timeout=N           fixer la minuterie de recherche du DNS � "
#~ "N secondes.\n"
#~ "       --connect-timeout=N       fixer le temps d'oisivet� � N secondes.\n"
#~ "       --read-timeout=N          fixer le temps de lecture � N secondes.\n"
#~ "  -w,  --wait=N                  attendre N secondes entre chaque essai.\n"
#~ "       --waitretry=N             attendre 1...N secondes entre les "
#~ "essais.\n"
#~ "       --random-wait             attendre de 0...2*N secondes entre les "
#~ "essais.\n"
#~ "  -Y,  --proxy=on/off            activer (� on �) ou d�sactiver (� off �) "
#~ "le proxy.\n"
#~ "  -Q,  --quota=N                 initialiser le quota de r�cup�ration � "
#~ "N.\n"
#~ "       --bind-address=ADDRESS    lier l'ADRESSE (nom de l'h�te ou IP) � "
#~ "l'h�te local.\n"
#~ "       --limit-rate=TAUX         limiter le TAUX de t�l�chargement.\n"
#~ "       --dns-cache=off           d�sactiver la cache lors de la "
#~ "r�solution DNS.\n"
#~ "       --restrict-file-names=OS restrict chars in file names to ones OS "
#~ "allows.\n"
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
#~ "R�pertoires:\n"
#~ "  -nd  --no-directories            ne pas cr�er les r�pertoires.\n"
#~ "  -x,  --force-directories         forcer la cr�ation des r�pertoires.\n"
#~ "  -nH, --no-host-directories       ne pas cr�er les r�pertoires d'h�te.\n"
#~ "  -P,  --directory-prefix=PR�FIXE  sauvegarder les fichiers avec le "
#~ "PR�FIXE/...\n"
#~ "       --cut-dirs=N                ignorer N composants des r�pertoires "
#~ "de l'h�te.\n"
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
#~ "Options HTTP:\n"
#~ "       --http-user=USAGER      utiliser le nom d'USAGER http.\n"
#~ "       --http-passwd=MOT_DE_PASSE\n"
#~ "                               utiliser le MOT_DE_PASSE http.\n"
#~ "  -C,  --cache=on/off          activer (� on �) ou d�sactiver (� off �) le "
#~ "cache\n"
#~ "                               de donn�es du serveur (activ� par d�faut)\n"
#~ "  -E,  --html-extension        sauvegarder tous les documents texte/html "
#~ "avec un suffixe .html\n"
#~ "       --ignore-length         ignorer le champ � Content-Length � de l'en-"
#~ "t�te.\n"
#~ "       --header=CHA�NE         ins�rer la CHA�NE � travers les en-t�tes.\n"
#~ "       --proxy-user=USAGER     utiliser le nom USAGER pour le proxy.\n"
#~ "       --proxy-passwd=MOT_DE_PASSE\n"
#~ "                               utiliser le MOT_DE_PASSE pour le proxy.\n"
#~ "       --referer=URL           inclure l'en-t�te `Referer: URL' dans la "
#~ "requ�te HTTP.\n"
#~ "  -s,  --save-headers          sauvegarder les en-t�tes HTTP dans le "
#~ "fichier.\n"
#~ "  -U,  --user-agent=AGENT      identifier l'AGENT plut�t que Wget/"
#~ "VERSION.\n"
#~ "       --no-http-keep-alive    d�sactiver l'option HTTP keep-alive "
#~ "(connexions persistantes).\n"
#~ "       --cookies=off           ne pas utiliser les cookies.\n"
#~ "       --load-cookies=FICHIER  charger les cookies � partir du FICHIER "
#~ "avant la session.\n"
#~ "       --save-cookies=FICHIER  sauvegarder les cookies dans le FICHIER "
#~ "apr�s la session.\n"
#~ "       --post-data=CHA�NE      utiliser la m�thode POST; transmettre la "
#~ "CHA�NE comme des donn�es.\n"
#~ "       --post-file=FICHIER     utiliser la m�thode POST; transmettre le "
#~ "contenu du FICHIER.\n"
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
#~ "Options HTTPS (SSL):\n"
#~ "       --sslcertfile=FICHIER     certificat optionel du client.\n"
#~ "       --sslcertkey=FICHIER_CLES fichier optionel de cl�s pour ce "
#~ "certificat.\n"
#~ "       --egd-file=FICHIER        nom du fichier pour le socket EGD.\n"
#~ "       --sslcadir=R�P            R�Pertoire o� la liste de hash o� les CA "
#~ "sont stock�s\n"
#~ "       --sslcafile=FICHIER       fichier li� avec les CA\n"
#~ "       --sslcerttype=0/1         type de certficat-client 0=PEM (par "
#~ "d�faut) / 1=ASN1 (DER)\n"
#~ "       --sslcheckcert=0/1        v�rifier le certificat du serveur versus "
#~ "le CA fourni\n"
#~ "       --sslprotocol=0-3         s�lectionner le protocol SSL ; "
#~ "0=automatic,\n"
#~ "                                 1=SSLv2 2=SSLv3 3=TLSv1\n"
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
#~ "Option FTP:\n"
#~ "  -nr, --dont-remove-listing   ne pas d�truire les fichier � .listing �\n"
#~ "  -g,  --glob=on/off           �craser (� on �) ou ne pas �craser (� off �) "
#~ "les noms de fichiers\n"
#~ "       --passive-ftp           utiliser le mode de transfert � passif �.\n"
#~ "       --retr-symlinks         r�cup�rer les liens symbolique via FTP.\n"
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
#~ "R�cup�ration r�cursive:\n"
#~ "  -r,  --recursive             r�cup�ration r�cursive sur le web -- "
#~ "utiliser avec pr�caution!.\n"
#~ "  -l,  --level=N               fixer le niveau maximal r�cursif � N (0 "
#~ "sans limite).\n"
#~ "       --delete-after          d�truire les fichiers t�l�charg�s.\n"
#~ "  -k,  --convert-links         convertir les liens non relatifs en liens "
#~ "relatifs.\n"
#~ "  -K,  --backup-converted      avant de convertir le fichier X, "
#~ "l'archiver sous X.orig\n"
#~ "  -m,  --mirror                activer l'option de r�cup�ration en mode "
#~ "miroir.\n"
#~ "  -p,  --page-requisites       ramasser toutes les images, etc. avant "
#~ "d'afficher la page HTML\n"
#~ "       --strict-comments       activer le traitement strict (SGML) des "
#~ "commentaires HTML.\n"
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
#~ "Acception ou rejet r�cursif:\n"
#~ "  -A,  --accept=LISTE               liste s�par�e par des virgules "
#~ "d'extensions accept�es.\n"
#~ "  -R,  --reject=LISTE               liste s�par�e par des virgules "
#~ "d'extensions rejet�es.\n"
#~ "  -D,  --domains=LISTE              liste s�par�e par des virgules de "
#~ "domaines accept�s.\n"
#~ "       --exclude-domains=LISTE      liste s�par�e par des virgules de "
#~ "domaines rejet�s.\n"
#~ "       --follow-ftp                 suivre les liens FTP � partir des "
#~ "documents HTML\n"
#~ "       --follow-tags=LISTE          liste s�par�e par des virgules de "
#~ "marqueurs HTML � suivre\n"
#~ "  -G,  --ignore-tags=LISTE          liste s�par�e par des virgules de "
#~ "marqueurs HTML � ignorer\n"
#~ "  -H,  --span-hosts                 la r�cursion suit d'un h�te � "
#~ "l'autre.\n"
#~ "  -L,  --relative                   suivre les liens relatifs seulement.\n"
#~ "  -I,  --include-directories=LISTE  lister les r�pertoires permis.\n"
#~ "  -X,  --exclude-directories=LISTE  lister les r�pertoire exclus.\n"
#~ "  -np, --no-parent                  ne pas remonter vers le r�pertoire "
#~ "parent.\n"
#~ "\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "D�marrage de WinHelp %s\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Pas assez de m�moire.\n"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Erreur de syntaxe dans Set-Cookie sur le caract�re � %c �.\n"

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: ne peut convertir � %s � en une adresse IP.\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: commande invalide\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Ne peut rep�rer un h�te proxy.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: boucle de redirection d�tect�e.\n"

#~ msgid ""
#~ "\n"
#~ "CTRL+Break received, redirecting output to `%s'.\n"
#~ "Execution continued in background.\n"
#~ "You may stop Wget by pressing CTRL+ALT+DELETE.\n"
#~ msgstr ""
#~ "\n"
#~ "CTRL+Break re�u, redirection de la sortie vers `%s'.\n"
#~ "L'ex�cution de poursuit en arri�re plan.\n"
#~ "Vous pouvez arr�ter l'ex�cution de `wget' en appuyant CTRL+ALT+DELETE.\n"

#~ msgid "Connection to %s:%hu refused.\n"
#~ msgstr "Connexion vers %s:%hu refus�e.\n"

#~ msgid "Will try connecting to %s:%hu.\n"
#~ msgstr "Tentative de connexion vers %s:%hu.\n"

#~ msgid "Unknown/unsupported protocol"
#~ msgstr "Protocole inconnu ou non support�"

#~ msgid "Invalid port specification"
#~ msgstr "Sp�cification de port erron�e"

#~ msgid "%s: Cannot determine user-id.\n"
#~ msgstr "%s: ne peut d�terminer l'UID de l'usager.\n"

#~ msgid "%s: Warning: uname failed: %s\n"
#~ msgstr "%s: AVERTISSEMENT: �chec de `uname': %s\n"

#~ msgid "%s: Warning: gethostname failed\n"
#~ msgstr "%s: AVERTISSEMENT: �chec de la fonction gethostname()\n"

#~ msgid "%s: Warning: cannot determine local IP address.\n"
#~ msgstr "%s: AVERTISSEMENT: ne peut d�terminer l'adresse IP locale.\n"

#~ msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
#~ msgstr ""
#~ "%s: AVERTISSEMENT: ne peut rep�rer l'adresse IP locale par requ�te "
#~ "inverse.\n"

#~ msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
#~ msgstr ""
#~ "%s: AVERTISSEMENT: requ�te inverse de l'adresse IP locale n'a pas renvoy� "
#~ "un nom complet (FQDN) !\n"

#~ msgid "%s: Out of memory.\n"
#~ msgstr "%s: m�moire �puis�e.\n"

#~ msgid "%s: Redirection to itself.\n"
#~ msgstr "%s: redirection vers lui-m�me.\n"

#~ msgid "Error (%s): Link %s without a base provided.\n"
#~ msgstr "ERREUR (%s): lien %s sans base fournie.\n"

#~ msgid "Error (%s): Base %s relative, without referer URL.\n"
#~ msgstr "ERREUR (%s): base %s relative, sans URL r�f�rent.\n"

#~ msgid ""
#~ "Local file `%s' is more recent, not retrieving.\n"
#~ "\n"
#~ msgstr "Fichier local �%s� est plus r�cent, pas de r�cup�ration.\n"
