#. No luck.
#. #### This message SUCKS.  We should see what was the
#. reason that nothing was retrieved.
#: src/ftp.c:1778
#, c-format
msgid "No matches on pattern `%s'.\n"
msgstr "Pas de concordance avec le patron � %s �.\n"

#: src/ftp.c:1844
#, c-format
msgid "Wrote HTML-ized index to `%s' [%s].\n"
msgstr "Index HTML-is� �crit dans � %s � [%s].\n"

#: src/ftp.c:1849
#, c-format
msgid "Wrote HTML-ized index to `%s'.\n"
msgstr "Index HTML-is� �crit dans � %s �.\n"

#: src/getopt.c:675
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: l'option � %s � est ambigu�.\n"

#: src/getopt.c:700
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: l'option � --%s � ne permet pas d'argument.\n"

#: src/getopt.c:705
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: l'option � %c%s � ne permet pas d'argument.\n"

#: src/getopt.c:723 src/getopt.c:896
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: l'option � %s � requiert un argument.\n"

#. --option
#: src/getopt.c:752
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: l'option � --%s � n'est pas reconnue.\n"

#. +option or -option
#: src/getopt.c:756
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: l'option � %c%s � n'est pas reconnue.\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:782
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: option ill�gale -- %c\n"

#: src/getopt.c:785
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: option invalide -- %c\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:815 src/getopt.c:945
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: l'option requiert un argument -- %c\n"

#: src/getopt.c:862
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: l'option � -W %s � est ambigu�.\n"

#: src/getopt.c:880
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: l'option � -W %s � ne permet pas d'argument.\n"

#: src/host.c:366
msgid "Unknown host"
msgstr "H�te inconnu"

#. Message modeled after what gai_strerror returns in similar
#. circumstances.
#: src/host.c:370
msgid "Temporary failure in name resolution"
msgstr "?chec temporaire dans la r�solution du nom"

#: src/host.c:372
msgid "Unknown error"
msgstr "ERREUR inconnue"

#: src/host.c:751
#, c-format
msgid "Resolving %s... "
msgstr "R�solution de %s... "

#: src/host.c:798
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "�chec: pas d'adresses IPv4/IPv6 pour l'h�te.\n"

#: src/host.c:821
msgid "failed: timed out.\n"
msgstr "�chec: expiration de la minuterie\n"

#: src/html-url.c:298
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: ne peut r�soudre le lien incomplet %s.\n"

#: src/html-url.c:705
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL invalide %s: %s\n"

#: src/http.c:373
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "�CHEC d'�criture de la requ�te HTTP: %s.\n"

#: src/http.c:687
msgid "No headers, assuming HTTP/0.9"
msgstr "Pas d'en-t�te, HTTP/0.9 assum�"

#: src/http.c:1204
msgid "Disabling SSL due to encountered errors.\n"
msgstr "D�sactivation SSL en raison des erreurs rencontr�s.\n"

#: src/http.c:1374
#, c-format
msgid "POST data file `%s' missing: %s\n"
msgstr "Fichier de donn�es POST `%s' est manquant: %s\n"

#: src/http.c:1423
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "R�utilisation de la connexion existante vers %s:%d.\n"

#: src/http.c:1492
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "�CHEC de lecture de la r�ponse proxy: %s.\n"

#: src/http.c:1512
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "�chec du tunneling proxy: %s"

#: src/http.c:1557
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "requ�te %s transmise, en attente de la r�ponse..."

#: src/http.c:1568
msgid "No data received.\n"
msgstr "Aucune donn�e re�ue.\n"

#: src/http.c:1575
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "ERREUR de lecture (%s) de l'en-t�te.\n"

#. If the authentication header is missing or
#. unrecognized, there's no sense in retrying.
#: src/http.c:1660
msgid "Unknown authentication scheme.\n"
msgstr "Sch�me d'authentification inconnu.\n"

#: src/http.c:1684
msgid "Authorization failed.\n"
msgstr "�CHEC d'autorisation.\n"

#: src/http.c:1698
msgid "Malformed status line"
msgstr "Ligne d'�tat mal compos�e"

#: src/http.c:1700
msgid "(no description)"
msgstr "(pas de description)"

#: src/http.c:1763
#, c-format
msgid "Location: %s%s\n"
msgstr "Emplacement: %s%s\n"

#: src/http.c:1764 src/http.c:1871
msgid "unspecified"
msgstr "non sp�cifi�"

#: src/http.c:1765
msgid " [following]"
msgstr " [suivant]"

#. If `-c' is in use and the file has been fully downloaded (or
#. the remote file has shrunk), Wget effectively requests bytes
#. after the end of file and the server response with 416.
#: src/http.c:1821
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
