msgid " (%s bytes)"
msgstr " (%s bytes)"

#: src/http.c:507
msgid "Failed writing HTTP request.\n"
msgstr "Falha na requisi��o HTTP.\n"

# , c-format
#: src/http.c:511
#, fuzzy, c-format
msgid "%s request sent, awaiting response... "
msgstr "%s requisi��o enviada, buscando headers... "

#: src/http.c:550
msgid "End of file while parsing headers.\n"
msgstr "Fim de arquivo durante a leitura dos headers.\n"

# , c-format
#: src/http.c:561
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Erro de leitura (%s) nos headers.\n"

#: src/http.c:601
msgid "No data received"
msgstr ""

#: src/http.c:603
msgid "Malformed status line"
msgstr ""

#: src/http.c:608
msgid "(no description)"
msgstr "(sem descri��o)"

#. If we have tried it already, then there is not point
#. retrying it.
#: src/http.c:692
msgid "Authorization failed.\n"
msgstr ""

#: src/http.c:699
msgid "Unknown authentication scheme.\n"
msgstr ""

# , c-format
#: src/http.c:762
#, c-format
msgid "Location: %s%s\n"
msgstr "Localiza��o: %s%s\n"

#: src/http.c:763 src/http.c:788
msgid "unspecified"
msgstr "nao especificado"

#: src/http.c:764
msgid " [following]"
msgstr " [seguinte]"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:778
msgid "Length: "
msgstr "Tamanho: "

# , c-format
#: src/http.c:783
#, c-format
msgid " (%s to go)"
msgstr " (%s para o fim)"

#: src/http.c:788
msgid "ignored"
msgstr "ignorado"

#: src/http.c:880
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Aviso: wildcards n�o suportados para HTTP.\n"

# , c-format
#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:895
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "Arquivo `%s' j� presente, n�o ser� baixado.\n"

# , c-format
#: src/http.c:1048
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "N�o foi poss�vel escrever em `%s' (%s).\n"

# , c-format
#: src/http.c:1058
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERRO: Redire��o (%d) sem Location.\n"

# , c-format
#: src/http.c:1081
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERRO %d: %s.\n"

#: src/http.c:1093
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Header Last-modified n�o recebido -- time-stamps desligados.\n"

#: src/http.c:1101
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Header Last-modified inv�lido -- time-stamp ignorado.\n"

#. We can't collapse this down into just one logprintf()
#. call with a variable set to u->local or the .orig
#. filename because we have to malloc() space for the
#. latter, and because there are multiple returns above (a
#. coding style no-no by many measures, for reasons such as
#. this) we'd have to remember to free() the string at each
#. one to avoid a memory leak.
#: src/http.c:1132
#, c-format
msgid ""
"Server file no newer than local file `%s.orig' -- not retrieving.\n"
"\n"
msgstr ""

#: src/http.c:1146
msgid "Remote file is newer, retrieving.\n"
msgstr "Arquivo remoto � mais novo, buscando.\n"

# , c-format
#: src/http.c:1180
#, c-format
msgid ""
"%s (%s) - `%s' saved [%ld/%ld]\n"
