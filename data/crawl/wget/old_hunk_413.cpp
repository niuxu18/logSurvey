# Portuguese translation of the "wget" messages
# Copyright (C) 2005 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Helder Correia <helder.pereira.correia@gmail.com>, 2005-2008.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.11.3\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2008-05-15 11:05+0100\n"
"Last-Translator: Helder Correia <helder.pereira.correia@gmail.com>\n"
"Language-Team: Portuguese <translation-team-pt@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=(n != 1);\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Erro desconhecido"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: a opção '%s' é ambígua\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: a opção '--%s não permite um argumento\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: a opção '%c%s' não permite um argumento\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: a opção '%s' requere um argumento\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: opção '--%s' desconhecida\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: opção '%c%s' desconhecida\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: opção ilegal -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: opção inválida -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s a opção requere um argumento -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: a opção '-W %s' é ambígua\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: a opção '-W %s' não permite um argumento\n"

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
msgstr ""

#: lib/quotearg.c:273
msgid "'"
msgstr ""

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr ""

#: src/connect.c:207
#, fuzzy, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: incapaz de resolver o endereço de ligação '%s'; a desactivar a ligação.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "A conectar %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "A conectar %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "conectado.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "falhou: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, fuzzy, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: incapaz de processar o endereço '%s'\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d ficheiros convertidos em %s segundos.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "A converter %s..."

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "nada para fazer.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Não é possível converter as ligações em %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Não é possível remover '%s': %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Não é possível salvaguardar %s como %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Erro de sintaxe em Set-Cookie: %s na posiçao %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "O 'cookie' vindo de %s tentou definir o domínio como %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Não é possível abrir o ficheiro de cookies '%s': %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Erro ao escrever para '%s': %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Erro ao fechar '%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Tipo de listagem não suportado, a tentar o analisador de listagem Unix.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Índice de /%s em %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "tempo desconhecido       "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Ficheiro        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Pasta   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Ligação        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Incerto     "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bytes)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Tamanho: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) em falta"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s em falta"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (não autoritário)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "A entrar como %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Erro na resposta do servidor, a fechar a conexão de controlo.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Erro na saudação do servidor.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "A escrita falhou, a fechar a conexão de controlo.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "O servidor recusa a entrada.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Entrada incorrecta.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Entrada com sucesso!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Erro do servidor, não é possível determinar o tipo de sistema.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "feito.    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "feito.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tipo '%c' desconhecido, a feito a conexão de controlo.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "feito.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD desnecessário.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Pasta '%s' inexistente.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD não requerido.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Não é possível iniciar a transferência PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Não é possível analisar a resposta PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "não foi possível conectar %s porto %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Erro de cobertura (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT inválido.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST falhou, a reiniciar.\n"

#: src/ftp.c:957
#, fuzzy, c-format
msgid "File %s exists.\n"
msgstr ""
"O ficheiro remoto existe.\n"
"\n"

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"O ficheiro '%s' não existe.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"O ficheiro '%s' não existe.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Ficheiro ou pasta '%s' inexistente.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s formou-se de repente.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, a fechar a conexão de controlo.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - conexão de dados: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Conexão de controlo fechada.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Transferência de dados cancelada.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "O ficheiro '%s' já existe; a não transferir.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(tentativa:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - '%s' gravado [%s/%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - '%s' gravado [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "A remover %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "A usar '%s' como ficheiro de listagem temporário.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "'%s' removido.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Profundidade de recursividade %d excedeu a profundidade máxima %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"O ficheiro remoto é mais antigo que o ficheiro local '%s' -- a não "
"transferir.\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"O ficheiro remoto é mais recente que o ficheiro local '%s' -- a transferir.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Os tamanhos não coincidem (local %s) -- a transferir.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Nome da ligação simbólica inválido, a ignorar.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr "Já tem a ligação simbólica correcta %s -> %s\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "A criar a ligação simbólica %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr ""
"Ligações simbólicas não suportadas, a ignorar ligação simbólica '%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "A ignorar a pasta '%s'.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: tipo de ficheiro desconhecido ou não suportado.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: selo temporal corrompido.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"As pastas não serão transferidas, uma ves que a profundidade é %d (máximo %"
"d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "A não descer para '%s', uma vez que está excluída.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "A rejeitar '%s'.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Erro ao corresponder %s com %s: %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Não há correspondências com o padrão '%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Índice em HTML gravado para '%s' [%s].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Índice HTML gravado para '%s'.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "ERRO"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "AVISO"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: Certificado não apresentado por %s.\n"

#: src/gnutls.c:234
#, fuzzy, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Certificado não apresentado por %s.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, fuzzy, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "  Certificado emitido expirado.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
#, fuzzy
msgid "No certificate found\n"
msgstr "%s: Certificado não apresentado por %s.\n"

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Erro ao analisar URL %s do 'proxy': %s.\n"

#: src/gnutls.c:283
#, fuzzy
msgid "The certificate has not yet been activated\n"
msgstr "  Certificado emitido ainda inválido.\n"

#: src/gnutls.c:288
#, fuzzy
msgid "The certificate has expired\n"
msgstr "  Certificado emitido expirado.\n"

#: src/gnutls.c:294
#, fuzzy, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""
"%s: o nome do certificado '%s' não corresponde ao nome da máquina requerida "
"'%s'.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Máquina desconhecida"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Falha temporária na resolução de nome"

#: src/host.c:364
msgid "Unknown error"
msgstr "Erro desconhecido"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "A resolver %s..."

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "falhou: Endereços IPv4/IPv6 inexistentes para a máquina.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "falhou: terminou o tempo.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Não é possível resolver a ligação incompleta %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: Endereço '%s' inválido: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Falha ao escrever o pedido HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Sem cabeçalhos, a assumir HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "A desactivar o SSL devido a erros encontrados.\n"

#: src/http.c:1576
#, fuzzy, c-format
msgid "POST data file %s missing: %s\n"
msgstr "Ficheiro de dados POST '%s' em falta: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "A reutilizar a conexão existente com %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Falha ao ler a resposta do procurador ('proxy'): %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Falhou o 'túnel' com o procurador ('proxy'): %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Pedido %s enviado, a aguardar resposta..."

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Nenhuns dados recebidos.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Erro de leitura (%s) nos cabeçalhos.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Esquema de autenticação desconhecido.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "A autorização falhou.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"O ficheiro '%s' já existe, a não transferir.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Linha de estado mal-formada"

#: src/http.c:2095
msgid "(no description)"
msgstr "(sem descrição)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Localização: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "não especificado"

#: src/http.c:2156
msgid " [following]"
msgstr " [a seguir]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"     O ficheiro já está todo transferido; nada para fazer.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Tamanho: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignorado"

#: src/http.c:2365
#, fuzzy, c-format
msgid "Saving to: %s\n"
msgstr "A gravar em: '%s'\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Aviso: carácteres de expansão ('wildcards') não suportados no HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Modo de aranha activado. Verificar se o ficheiro remoto existe.\n"

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Não é possível escrever para '%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Incapaz de estabelecer a conexão SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERRO: Redireccionamento (%d) sem localização.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "O ficheiro remoto não existe -- ligação quebrada!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERRO %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Falta o último cabeçalho modificado -- selos temporais desactivados.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Último cabeçalho modificado inválido -- selo temporal ignorado.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"O ficheiro do servidor não é mais recente que o ficheiro local '%s' -- a não "
"transferir.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Os tamanhos não coincidem (local %s) -- a transferir.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "O ficheiro remoto é mais recente, a transferir.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"O ficheiro remoto existe e pode conter ligações para outros recursos -- a "
"transferir.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"O ficheiro remoto existe mas não contém ligações -- não transferir.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"O ficheiro remoto existe e pode conter mais ligações,\n"
"mas recursividade está desactivada -- a não transferir.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"O ficheiro remoto existe.\n"
"\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: Endereço '%s' inválido: %s\n"

#: src/http.c:2837
#, fuzzy, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - '%s' gravado [%s/%s]\n"
"\n"

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - '%s' gravado [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Conexão fechada ao byte %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Erro de leitura no byte %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Erro de leitura no byte %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC aponta para %s, o qual não existe.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Não é possível ler %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Erro em %s na linha %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Erro de sintaxe em %s na linha %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Comando desconhecido '%s' em %s na linha %d.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Aviso: Ambos o ficheiro de sistema e de utilizador wgetrc apontam para '%"
"s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Comando --execute '%s' inválido\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Valor lógico '%s' inválido; use 'on' ou 'off'.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Número '%s' inválido.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Valor de byte '%s' inválido\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s Período de tempo '%s' inválido\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Valor '%s' inválido.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Cabeçãlho '%s' inválido.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Tipo de progresso '%s' inválido.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Restrição '%s' inválida, use [unix|windows],[lowercase|uppercase],"
"[nocontrol].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr ""

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr ""

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr ""

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr ""

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr ""

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr ""

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr ""

#: src/log.c:809
#, fuzzy, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s recebido, a redireccionar saída para '%s'.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s recebido.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; a desactivar registo.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Utilização: %s [OPÇÃO]... [ENDEREÇO]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Argumentos mandatórios para opções longas são também mandatórios para opções "
"curtas.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Arranque:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           exibir a versão do Wget e terminar.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              exibir esta ajuda.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr ""
"  -b,  --background        executar em segundo plano após o arranque.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=COMANDO   executar um comando do estilo '.wgetrc'.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Registo e ficheiro de entrada:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FICH    registar mensagens em FICH.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FICH  acrescentar mensagens a FICH.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               exibir informação de depuração.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              exibir informação de depuração Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               modo silencioso.\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             modo verboso (activado por omissão).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          desactivar a verbosidade, sem silenciar.\n"

#: src/main.c:432
#, fuzzy
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr "  -i,  --input-file=FICH     transferir endereços contidos em FICH.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          tratar o ficheiro de entrada como HTML.\n"

#: src/main.c:436
#, fuzzy
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -N,  --timestamping            não transferir ficheiros de novo mais "
"antigos\n"
"                                 que o local.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Transferência:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=NÚMERO            definir NÚMERO de tentativas (0 para "
"ilimitado).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       tentar de novo se a conexão for recusada.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FICH    escrever documentos para FICH.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              saltar transferências que sobreporiam\n"
"                                 ficheiros existentes.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                continuar transferência parcial de "
"ficheiro.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=TIPO           definir o TIPO de escala de progresso.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            não transferir ficheiros de novo mais "
"antigos\n"
"                                 que o local.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         exibir a resposta do servidor.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  não transferir os ficheiros.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SEGUNDOS        definir tempo máximo de todas as "
"tentativas.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr "       --dns-timeout=SEGS        definir o tempo máximo de pesquisa.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr "       --connect-timeout=SEGS    definir o tempo máximo de conexão.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SEGS       definir o tempo máximo de leitura.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=SEGUNDOS           esperar SEGUNDOS entre transferências.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEGUNDOS      esperar 1..SEGUNDOS entre tentativas.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             esperar de 0...2*N segundos entre transf.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr ""
"       --no-proxy                desativar procurador ('proxy') "
"implicitamente.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=NUMERO            definir quota de transferência NÚMERO.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ENDEREÇO   ligar a ENDEREÇO (nome ou IP) na máquina "
"local.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=TAXA         limitar TAXA de transferência.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""
"       --no-dns-cache            desactivar esconderijo ('cache') de "
"pesquisas DNS.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  restringir a caracteres do sistema para "
"nomes de ficheiros.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ignorar capitalização ao verificar "
"ficheiros/pastas.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              conectar apenas a endereços IPv4.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              conectar apenas a endereços IPv6.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMÍLIA   conectar primeiro a endereços da família "
"especificada,\n"
"                                 um de IPv6, IPv4 ou nenhum.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr "       --user=UTILIZADOR         definir UTILIZADOR FTP e HTTP.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr "       --password=SENHA          definir a SENHA FTP e HTTP.\n"

#: src/main.c:504
#, fuzzy
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --password=SENHA          definir a SENHA FTP e HTTP.\n"

#: src/main.c:506
#, fuzzy
msgid "       --no-iri                  turn off IRI support.\n"
msgstr ""
"       --no-proxy                desativar procurador ('proxy') "
"implicitamente.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""

#: src/main.c:514
msgid "Directories:\n"
msgstr "Pastas:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           não criar pastas.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        forçar a criação de pastas.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      não criar pastas do servidor.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     usar o nome do protocolo nas pastas.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIX  gravar ficheiros para PREFIX/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=NÚMERO          ignorar NÚMERO componentes de pasta "
"remotos.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Opções HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=UTILIZADOR  definir o UTILIZADOR HTTP.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=SENHA   definir a SENHA HTTP.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              não permitir dados em esconderijo ('cache') "
"no servidor.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""

#: src/main.c:541
#, fuzzy
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --html-extension        gravar documentos HTML com extensão '.html'.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         ignorar campo de cabeçalho `Content-Length'.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""
"       --header=EXPRESSÃO      inserir EXPRESSÃO entre os cabeçalhos.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          máximo de redireccionamentos permitido por "
"página.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""
"       --proxy-user=UTILIZAD   definir UTILIZADor do procurador ('proxy').\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""
"       --proxy-password=SENHA  definir SENHA do procurador ('proxy').\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=ENDEREÇO      incluir o cabeçalho 'Referer: ENDEREÇO' no "
"pedido.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr ""
"       --save-headers          gravar os cabeçalhos HTTP no ficheiro.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENTE     identificar como AGENTE ao invés de Wget/"
"VERSÃO.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    desactivar 'HTTP keep-alive' (conexões "
"persistentes).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            não usar 'cookies'.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=FICH     carregar 'cookies' de FICHeiro antes da "
"sessão.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=FICH     gravar 'cookies' para FICHeiro após a "
"sessão.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  carregar e gravar os 'cookies' da sessão (não "
"permanentes).\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=EXPRESSÃO   usar o método POST; enviar EXPRESSÃO como "
"dados.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FICHEIRO    usar o método POST; enviar conteúdo de "
"FICHEIRO.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   honrar o cabeçalho Content-Disposition ao\n"
"                               escolher nomes de fich. locais "
"(EXPERIMENTAL).\n"

#: src/main.c:576
#, fuzzy
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Enviar informação de autenticação HTTP "
"básica\n"
"                               sem primeiro esperar pelo desafio do\n"
"                               servidor.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Opções HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     escolher protocolo de segurança, auto, "
"SSLv2,\n"
"                                SSLv3 ou TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   não validar o certificado do servidor.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FICH       FICHeiro do certificado do cliente.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TIPO  TIPO do certificado do cliente, PEM ou DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FICHEIRO   FICHEIRO da chave privada.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TIPO  TIPO da chave privada, PEM ou DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=FICH    FICHeiro com CAs.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr "       --ca-directory=PASTA     PASTA da lista de chaves de CAs.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FICH       FICHeiro com dados aleatórios para SSL "
"PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr "       --egd-file=FICHEIRO      FICHEIRO EGD com dados aleatórios.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Opções FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=UTILIZADOR   definir UTILIZADOR FTP.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=SENHA    definir a SENHA FTP.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     não remover ficheiros '.listing'.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               desactivar alterações de nome de ficheiros "
"FTP.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        desactivar o modo passivo de transferência.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         em recursividade, obter ficheiros ligados "
"(não pastas).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Transferência recursiva:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          especificar transferência recursiva.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=NÚMERO       profundidade máxima (inf ou 0 para infinito).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       remover os ficheiros localmente após "
"transferência.\n"

#: src/main.c:637
#, fuzzy
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      apontar as ligações em HTML para ficheiros "
"locais.\n"

#: src/main.c:641
#, fuzzy
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   salvaguardar com extensão '.orig' antes de "
"converter.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   salvaguardar com extensão '.orig' antes de "
"converter.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             atalho para -N -r -l inf --no-remove-listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    obter todas as imagens, etc. para exibir a "
"página HTML.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    activar tratamento severo (SGML) de comentários "
"HTML.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Aceitação/Rejeitação recursiva:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LISTA              LISTA de extensões aceites separadas por "
"vírgula.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr "  -R,  --reject=LISTA              LISTA de extensões rejeitadas.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr "  -D,  --domains=LISTA             LISTA de domínios aceites.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr "       --exclude-domains=LISTA     LISTA de domínios rejeitados.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                seguir ligações FTP de documentos HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTA         LISTA de elementos HTML para seguir.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTA         LISTA de elementos HTML para ignorar.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                ir para outros servidores quando "
"recursivo.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  seguir apenas ligações relativas.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LISTA LISTA de pastas permitidas.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LISTA LISTA de pastas excluídas.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 não ascender à pasta anterior.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Envie erros e sugestões para <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, um transferidor de rede não interactivo.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr ""

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr ""

#: src/main.c:780
msgid "Wgetrc: "
msgstr ""

#: src/main.c:781
msgid "Locale: "
msgstr ""

#: src/main.c:782
msgid "Compile: "
msgstr ""

#: src/main.c:783
msgid "Link: "
msgstr ""

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr ""

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr ""

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr ""

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
#, fuzzy
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Copyright (C) 2008 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Licença GPLv3+: GNU GPL versão 3 ou posterior\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Este software é livre: é livre de o alterar e redistribuir.\n"
"Não é dada QUALQUER GARANTIA para o programa, até aos limites permitidos por "
"lei aplicável.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Originalmente escrito por Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Actualmente mantido por Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Envie erros e sugestões para <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Tente '%s --help' para mais opções.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: opção ilegal -- '-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Não é possível ser simultaneamente verboso e silencioso.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Não é possível marcar com selo temporal e sobrepor ficheiros antigos, "
"simultaneamente.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr ""
"Não é possível especificar simultaneamente --inet4-only e --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Não é possível especificar simultaneamente -k e -O quando são fornecidos\n"
"múltiplos endereços ou em combinação com -r. Veja os detalhes no manual.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"AVISO: combinar -0 com -r ou -p significa que todos os dados transferidos\n"
"serão colocados no ficheiro único que especificou.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"AVISO: marcação de tempo não tem acção quando combinado com -O. Veja o\n"
"manual para detalhes.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "O ficheiro '%s' já existe; a não transferir.\n"

#: src/main.c:1086
#, fuzzy, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""
"Não é possível especificar simultaneamente --inet4-only e --inet6-only.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: URL em falta\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr ""

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "URLs não encontrados em %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"TERMINADO --%s--\n"
"Transferido: %d ficheiros, %s em %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Quota de transferência de %s EXCEDIDA!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "A continuar em segundo plano (fundo).\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "A continuar em segundo plano, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Resultados serão gravados em '%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: 'socket driver' utilizável não encontrado.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: aviso: \"%s\" expressão aparece antes de qualquer nome de "
"máquina\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: expressão desconhecida \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Utilização: %s NETRC [NOME-DA-MÁQUINA]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: não é possível analisar %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "AVISO: a usar uma semente aleatória fraca.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Não foi possível gerar PRNG; considere usar --random-file.\n"

#: src/openssl.c:526
#, fuzzy, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: não é possível verificar o certificado de %s, emitido por '%s':\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Incapaz de verificar localmente a autoridade do emissor.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Encontrado certificado auto-assinado.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Certificado emitido ainda inválido.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Certificado emitido expirado.\n"

#: src/openssl.c:579
#, fuzzy, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: o nome do certificado '%s' não corresponde ao nome da máquina requerida "
"'%s'.\n"

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
msgstr "Para conectar a %s de forma insegura, use '--no-check-certificate'.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ a saltar %sK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Especificação de estilo de ponto '%s' inválida; a não alterar.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  eta %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   em "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Não é possível obter a frequência de relógio de tempo real: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "A remover %s, uma vez que deveria ser rejeitado.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Não é possível abrir %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "A carregar robots.txt; por favor, ignore erros.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Erro ao analisar URL %s do 'proxy': %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Erro no URL %s do 'proxy': Necessita ser HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d redireccionamentos excedidos.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"A desistir.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"A tentar novamente.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Não foram encontradas ligações quebradas.\n"
"\n"

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] "Encontrada %d ligação quebrada.\n"
msgstr[1] "Encontradas %d ligações quebradas.\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Sem erros"

#: src/url.c:635
#, fuzzy, c-format
msgid "Unsupported scheme %s"
msgstr "Esquema não suportado"

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
msgid "Invalid host name"
msgstr "Nome de máquina inválido"

#: src/url.c:641
msgid "Bad port number"
msgstr "Mau número de porto"

#: src/url.c:643
msgid "Invalid user name"
msgstr "Nome de utilizador inválido"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Endereço numérico IPv6 não concluído"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Endereços IPv6 não suportados"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Endereço numérico IPv6 inválido"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr ""

#: src/utils.c:108
#, fuzzy, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Falha ao reservar %ld bytes; memória insuficiente.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Falha ao reservar %ld bytes; memória insuficiente.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "A continuar em segundo plano (fundo), pid %d.\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Erro ao remover ligação simbólica '%s': %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            acrescenta URL a ligações relativas no "
#~ "ficheiro -F -i.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  preservar as permissões dos ficheiros "
#~ "remotos.\n"

#~ msgid ""
#~ "Cannot specify -N if -O is given. See the manual for details.\n"
#~ "\n"
#~ msgstr ""
#~ "Não é possível especificar -N se -O for usado. Veja detalhes no manual.\n"
#~ "\n"
