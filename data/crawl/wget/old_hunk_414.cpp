# This file is distributed under the same license as the wget package.
# translation of wget-1.12-pre6.po to Brazilian Portuguese
# Brazilian Portuguese translation of the "wget" messages
# Copyright (C) 1998, 2009 Free Software Foundation, Inc.
#
# Wanderlei Antonio Cavassin <cavassin@conectiva.com.br>, 1998.
# Marcus Moreira de Souza <marcus@frb.br>, 2004.
# Rodolfo Ribeiro Gomes <rodolforg@gmail.com>, 2008, 2009.
msgid ""
msgstr ""
"Project-Id-Version: wget-1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-10 12:21-0300\n"
"Last-Translator: Rodolfo Ribeiro Gomes <rodolforg@gmail.com>\n"
"Language-Team: Brazilian Portuguese <ldp-br@bazar.conectiva.com.br>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms:  nplurals=2; plural=(n > 1);\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Erro desconhecido de sistema"

# , c-format
#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: a opção \"%s\" é ambígua\n"

# , c-format
#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: a opção \"--%s\" não permite argumentos\n"

# , c-format
#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: a opção \"%c%s\" não permite argumentos\n"

# , c-format
#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: a opção \"%s\" exige um argumento\n"

# , c-format
#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: a opção não é reconhecida \"--%s\"\n"

# , c-format
#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: a opção não é reconhecida \"%c%s\"\n"

# , c-format
#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: a opção é ilegal -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: a opção é inválida -- %c\n"

# , c-format
#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: a opção exige um argumento -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: a opção \"-W %s\" é ambígua\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: a opção \"-W %s\" não permite argumentos\n"

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
msgstr "“"

#: lib/quotearg.c:273
msgid "'"
msgstr "”"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "memória esgotada"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""
"%s: não foi possível resolver endereço de associação %s; desabilitando a "
"associação.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Conectando-se a %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Conectando-se a %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "conectado.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "falhou: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: não foi possível resolver endereço de máquina %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "%d arquivos convertidos em %s segundos.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Convertendo %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "nada a ser feito.\n"

# , c-format
#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Não foi possível converter links em %s: %s\n"

# , c-format
#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Não foi possível excluir %s: %s\n"

# , c-format
#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Não foi possível fazer uma cópia de segurança de %s como %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Erro de sintaxe em Set-Cookie: %s na posição %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Cookie vindo de %s tentou designar domínio como %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Não foi possível abrir o arquivo de cookies %s: %s\n"

# , c-format
#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Erro ao gravar em %s: %s.\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Erro ao fechar %s: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Sem suporte ao tipo de listagem. Tentando usar interpretador de listagem "
"UNIX.\n"

# , c-format
#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Índice de /%s em %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "horário desconhecido "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Arquivo     "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Diretório   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Link        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Incerto     "

# , c-format
#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bytes)"

# , c-format
#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Tamanho: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) restantes"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s restantes"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (sem autoridade)\n"

# , c-format
#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Acessando como %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Erro na resposta do servidor, fechando a conexão de controle.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Erro na saudação do servidor.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Falha de escrita, fechando a conexão de controle.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "O servidor recusou o acesso.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Identificação incorreta.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Acesso autorizado!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Erro do servidor, não foi possível determinar tipo de sistema.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "feito.   "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "feito.\n"

# , c-format
#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tipo \"%c\" é desconhecido, fechando a conexão de controle.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "feito. "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD não é necessário.\n"

# , c-format
#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"O diretório %s não foi encontrado.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD não exigido.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Não é possível iniciar transferência PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Não foi possível entender resposta do comando PASV.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "não foi possível se conectar a %s porta %d: %s\n"

# , c-format
#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Erro na associação (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT é inválido.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST falhou, recomeçando do zero.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "O arquivo %s existe.\n"

# , c-format
#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr ""
"O arquivo %s não foi encontrado.\n"
"\n"

# , c-format
#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"O arquivo %s não foi encontrado.\n"
"\n"

# , c-format
#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"O arquivo ou diretório %s não foi encontrado.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s surgiu do nada.\n"

# , c-format
#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, fechando conexão de controle.\n"

# , c-format
#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Conexão de dados: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "A conexão de controle está fechada.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "A transferência dos dados foi abortada.\n"

# , c-format
#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "O arquivo %s já existe, não será baixado.\n"

# , c-format
#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(tentativa:%2d)"

# , c-format
#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - escrito para a saída padrão %s[%s]\n"
"\n"

# , c-format
#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s salvo [%s]\n"
"\n"

# , c-format
#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Removendo %s.\n"

# , c-format
#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Usando %s como arquivo temporário de listagem.\n"

# , c-format
#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "Removeu %s.\n"

# , c-format
#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Nível de recursão %d excedeu o nível máximo %d.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr "O arquivo remoto não é mais novo que o local %s -- ignorando.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"O arquivo remoto é mais novo que o local %s -- baixando.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Os tamanhos não coincidem (local %s) -- baixando.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Nome inválido da ligação simbólica, ignorando.\n"

# , c-format
#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Ligação simbólica já está correta %s -> %s\n"
"\n"

# , c-format
#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Criando ligação simbólica %s -> %s\n"

# , c-format
#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Não há suporte para ligações simbólicas, ignorando a ligação %s.\n"

# , c-format
#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Ignorando o diretório %s.\n"

# , c-format
#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: o tipo de arquivo é desconhecido ou não possui suporte.\n"

# , c-format
#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: horário (timestamp) corrompido.\n"

# , c-format
#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr ""
"Não serão baixados os diretórios, pois o nível de recursão é %d (máx. %d).\n"

# , c-format
#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Não descendo para %s, pois está excluído/não incluído.\n"

# , c-format
#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "Rejeitando %s.\n"

# , c-format
#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Erro ao comparar %s com %s: %s.\n"

# , c-format
#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Não há ocorrências para o padrão %s.\n"

# , c-format
#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Escrito índice em formato HTML em %s [%s].\n"

# , c-format
#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Escrito índice em formato HTML em %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "ERRO"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "AVISO"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: Nenhum certificado apresentado por %s.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: O certificado de %s não é confiável.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: O certificado de %s não tem um emissor conhecido.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: O certificado de %s foi revogado.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Erro ao iniciar o certificado X509: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Nenhum certificado foi encontrado\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Erro ao analisar o certificado: %s\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "O certificado não foi ativado ainda\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "O certificado expirou\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "O dono do certificado não coincide com o nome de máquina %s.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "A máquina é desconhecida"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Falha temporária na resolução de nomes"

#: src/host.c:364
msgid "Unknown error"
msgstr "Erro desconhecido"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Resolvendo %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "falha: Não há endereços IPv4/IPv6 para a máquina.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "falha: o tempo esgostou.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Não foi possível resolver o link incompleto %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: O URL %s é inválido: %s.\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Falhou em enviar requisição HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Não foram recebidos cabeçalhos, assumindo HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Desabilitando SSL devido aos erros encontrados.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "O arquivo %s de dados POST está faltando: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Reaproveitando a conexão existente para %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Falhou em ler a resposta do proxy: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "O tunelamento pelo proxy falhou: %s"

# , c-format
#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "A requisição %s foi enviada, aguardando resposta... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Nenhum dado foi recebido.\n"

# , c-format
#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Erro de leitura (%s) nos cabeçalhos.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "O esquema de autenticação é desconhecido.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "A autorização falhou.\n"

# , c-format
#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"O arquivo %s já existe, não será baixado.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "A linha de status é inválida"

#: src/http.c:2095
msgid "(no description)"
msgstr "(sem descrição)"

# , c-format
#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Localização: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "não especificada"

#: src/http.c:2156
msgid " [following]"
msgstr " [redirecionando]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    O arquivo já foi completamente obtido; não há nada a ser feito.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Tamanho: "

#: src/http.c:2263
msgid "ignored"
msgstr "ignorado"

# , c-format
#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Salvando em: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Aviso: Não há suporte para caracteres coringa no HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "O modo aranha está habilitado. Verifique se o arquivo remoto existe.\n"

# , c-format
#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Não foi possível escrever em %s (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Não foi possível estabelecer conexão segura (SSL).\n"

# , c-format
#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERRO: Redirecionamento (%d) sem Location.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "O arquivo remoto não existe -- link quebrado!!!\n"

# , c-format
#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERRO %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Está faltando o cabeçalho Last-modified -- horários desligados.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "O cabeçalho Last-modified é inválido -- horário ignorado.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"O arquivo no servidor não é mais novo que o local %s -- ignorando.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Os tamanhos não coincidem (local %s) -- baixando.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "O arquivo remoto é mais novo, baixando.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"O arquivo remoto existe e pode conter links para outras fontes -- baixando.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"O arquivo remoto existe mas não contém link algum -- ignorando.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"O arquivo remoto existe e poderia conter mais links,\n"
"mas a recursão está desabilitada -- ignorando.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"O arquivo remoto existe.\n"
"\n"

# , c-format
#: src/http.c:2790
#, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s URL: %s %2d %s\n"

# , c-format
#: src/http.c:2837
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - escrito para a saída padrão %s [%s/%s]\n"
"\n"

# , c-format
#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - %s salvo [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Conexão fechada no byte %s. "

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
msgstr "%s: WGETRC aponta para %s, que não existe.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Não foi possível ler %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Erro em %s na linha %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Erro de sintaxe em %s na linha %d.\n"

# , c-format
#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Comando desconhecido %s em %s na linha %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Aviso: os arquivos wgetrc tanto do sistema como do usuário apontam para %"
"s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: O comando --execute %s é inválido\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: o valor booleano %s é inválido; use \"on\" ou \"off\".\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: O número %s é inválido.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: O valor de byte %s é inválido\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: O período de tempo %s é inválido\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: O valor %s é inválido.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: O cabeçalho %s é inválido.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: O tipo de progresso %s é inválido.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: A restrição %s é inválida;\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "A codificação %s não é válida\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "locale_to_utf8: localidade não definida\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Não há suporte para a conversão de %s para %s\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Encontrou-se uma sequência multibyte inválida ou incompleta\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Erro não tratado: errno %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode falhou (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode falhou (%d): %s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s recebido, redirecionando saída para %s.\n"

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
msgstr "%s: %s; desabilitando registro.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Uso: %s [OPÇÃO]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Argumentos obrigatórios para opções longas também o são para as opções "
"curtas.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Inicialização:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           mostra a versão do Wget e sai.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              emite esta ajuda.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr ""
"  -b,  --background        vai para o plano de fundo depois de iniciar.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr "  -e,  --execute=COMANDO   executa um comando no estilo \".wgetrc\".\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Arquivo de entrada e de registro:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=ARQ     envia as mensagens de log para ARQuivo.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=ARQ   anexa mensagens ao ARQuivo.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               emite muita informações de depuração.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug              emite a saída de depuração Watt-32.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               silencioso (não emite nada).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             detalhista (isto é o padrão).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"  -nv, --no-verbose          desativa o detalhamento, sem ser silencioso.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=ARQ      baixa os URLs encontrados no ARQuivo local ou\n"
"                               externo.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          trata o arquivo de entrada como HTML.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            resolve os links do arquivo HTML de entrada (-i "
"-F)\n"
"                               relativos a URL.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Download:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=NÚMERO            define o número de tentativas como NÚMERO\n"
"                                   (0 significa ilimitada).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""
"       --retry-connrefused       tenta novamente mesmo se a conexão for\n"
"                                   recusada.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=ARQ     escreve os documentos no ARQuivo.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              ignora os downloads que sobrescreveriam\n"
"                                   arquivos existentes.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                retoma o download de um arquivo baixado\n"
"                                   parcialmente.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""
"       --progress=TIPO           seleciona o tipo de indicador de "
"progresso.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            não tentar refazer o download de um "
"arquivo,\n"
"                                   a menos que ele seja mais novo que o "
"local.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         exibe a resposta do servidor.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  não baixa nada.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SEGUNDOS        define todos os valores de tempo de espera\n"
"                                   como SEGUNDOS.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SEGUNDOS    define o tempo de espera de busca de DNS "
"como\n"
"                                   SEGUNDOS.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""
"       --connect-timeout=SEGS    define o tempo de espera da conexão como "
"SEGS.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""
"       --read-timeout=SEGUNDOS   define o tempo de espera de leitura como\n"
"                                   SEGUNDOS.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=SEGUNDOS           espera SEGUNDOS entre as tentativas.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SEGUNDOS      espera de 1 a SEGUNDOS entre as tentativas "
"de\n"
"                                   baixar.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             espera de 0 a 2*ESPERA segundos entre os\n"
"                                   downloads.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                desativa explicitamente o proxy.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""
"  -Q,  --quota=QUANTIDADE        define a cota de download como QUANTIDADE.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ENDEREÇO   associa à máquina local o ENDEREÇO (nome "
"de\n"
"                                   máquina ou número IP).\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=TAXA         limita a taxa de download a TAXA.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            desabilita o cache da busca de DNS.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=SO  restringe os caracteres nos nomes de "
"arquivos\n"
"                                   aos que o SO (sistema operacional) "
"permite.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             ignora a maiusculização ao comparar "
"arquivos/\n"
"                                   diretórios.\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr "  -4,  --inet4-only              conecta apenas a endereços IPv4.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr "  -6,  --inet6-only              conecta apenas a endereços IPv6.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMÍLIA   conecta primeiro a endereços da família\n"
"                                   especificada: IPv6, IPv4 ou \"none"
"\" (nenhum).\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr "       --user=USUÁRIO            define o usuário para HTTP e FTP.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=SENHA          define a senha a ser usada para HTTP e "
"FTP.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            pergunta pelas senhas.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  desativa o suporte a IRI.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=COD      usa COD como a codificação local para "
"IRIs.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=COD     usa COD como a codificação remota padrão.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Diretórios:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd, --no-directories           não cria diretórios.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        força a criação de diretórios.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      não cria diretórios do servidor.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     usa o nome do protocolo nos diretórios.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIXO  salva os arquivos em PREFIXO/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=QTD             ignora QTD componentes do diretório "
"remoto.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Opções HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=USUÁRIO     define o usuário do HTTP.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=SENHA   define a senha a usar para HTTP.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""
"       --no-cache              desautoriza dados em cache do servidor.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NOME     Altera o nome da página padrão (normalmente,\n"
"                                 ela é \"index.html\").\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension      salva os documentos HTML/CSS com as "
"extensões\n"
"                                  apropriadas.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         ignora o campo de cabeçalho \"Content-Length"
"\".\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=TEXTO          insere TEXTO em meio aos cabeçalhos.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          máximo redirecionamentos permitido por "
"página.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=USUÁRIO    define o nome de usuário do proxy.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=SENHA  define a senha para o proxy.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           inclui o cabeçalho \"Referer: URL\" na "
"requisição\n"
"                                 HTTP.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          salva os cabeçalhos HTTP no arquivo.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENTE     identifica-se como AGENTE em vez de Wget/"
"VERSÃO.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    desabilita o \"HTTP keep-alive\" (para "
"conexões\n"
"                                 persistentes).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            não usa cookies.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=ARQUIVO  carrega os cookies do ARQUIVO antes da "
"sessão.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=ARQUIVO  salva os cookies no ARQUIVO depois da "
"sessão.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  carrega e salva os cookies (não permanentes) "
"da\n"
"                                 sessão.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=TEXTO       usa o método POST; envia o TEXTO como dados.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=ARQUIVO     usa o método POST; envia o conteúdo de "
"ARQUIVO.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   honra o cabeçalho Content-Disposition ao\n"
"                                 escolher os nomes do arquivo local\n"
"                                 (EXPERIMENTAL).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     envia informações de autenticação HTTP "
"básica\n"
"                                 sem antes aguardar pelo desafio do "
"servidor.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Opções HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     escolhe entre um protocolo de segurança: "
"auto\n"
"                                  (automático), SSLv2, SSLv3 e TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   não valida o certificado do servidor.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=ARQUIVO    o arquivo de certificado do cliente.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TIPO  tipo de certificado do client: PEM ou DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=ARQUIVO    arquivo de chave privada.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TIPO  tipo de chave privada: PEM ou DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=ARQUIVO arquivo com o maço de CA's.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=DIR       diretório onde está a lista de hash das "
"CA's.\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=ARQUIVO    arquivo com dados aleatórios para semear o "
"SSL\n"
"                                  PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=ARQUIVO       arquivo nomeando o soquete EGD com dados\n"
"                                  aleatórios.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Opções FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             Usa o formato Stream_LF para todos os "
"arquivos                                  binários do FTP.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=USUÁRIO      define o usuário de FTP.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=SENHA    define a senha para FTP.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     não exclui os arquivos \".listing\".\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""
"       --no-glob               desativa a pesquisa aproximada (glob search)\n"
"                                 para nomes de arquivo no FTP.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""
"       --no-passive-ftp        desabilita o modo de transferência \"passivo"
"\".\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         em uma recursão, obtém arquivos apontados "
"por\n"
"                                 ligação (não vale para diretórios).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Download recursivo:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr "  -r,  --recursive          especifica como download recursivo.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=NÚMERO       nível máximo da recursão (inf ou 0 para "
"infinito).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       exclui os arquivos localmente depois de baixá-"
"los.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      faz os links no HTML ou CSS baixado apontarem\n"
"                              para os arquivos locais.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   antes de converter o arquivo X, faz uma cópia "
"de\n"
"                              de segurança como X_orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   antes de converter o arquivo X, faz uma cópia "
"de\n"
"                              de segurança como X.orig.\n"

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
"  -p,  --page-requisites    obtém todas as imagens, etc. necessárias para\n"
"                              exibir a página HTML.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    ativa a manipulação estrita (SGML) dos "
"comentários\n"
"                              HTML.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Aceitação/Recusa de recursão:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LISTA              lista separada por vírgulas das "
"extensões\n"
"                                     aceitas.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LISTA              lista separada por vírgulas das "
"extensões\n"
"                                     rejeitadas.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LISTA             lista separada por vírgulas dos domínios\n"
"                                     aceitos.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LISTA     lista separada por vírgulas dos domínios\n"
"                                     rejeitados.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""
"       --follow-ftp                segue os links FTP dos documentos HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LISTA         lista separada por vírgulas das tags "
"HTML\n"
"                                     permitidas.\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LISTA         lista separada por vírgulas das tags "
"HTML\n"
"                                     ignoradas.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                vai para máquinas estrangeiras ao "
"recursar.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr "  -L,  --relative                  segue apenas links relativos.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr "  -I,  --include-directories=LISTA  lista dos diretórios permitidos.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr "  -X,  --exclude-directories=LISTA  lista dos diretórios excluídos.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr "  -np, --no-parent                 não subir ao diretório-pai.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Relatos de problemas e sugestões para <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr ""
"GNU Wget %s, um programa não interativo para baixar arquivos da rede.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Senha para o usuário %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Senha: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Localidade: "

#: src/main.c:782
msgid "Compile: "
msgstr "Compilação: "

#: src/main.c:783
msgid "Link: "
msgstr "Link: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s construído em VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s construído em %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (ambiente)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (usuário)\n"

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
"Licença GPLv3+: GNU GPL versão 3 ou posterior\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Este é um software livre: você é livre para alterá-lo e redistribui-lo.\n"
"Não há GARANTIAS, na extensão máxima permitida por lei.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Escrito originalmente por Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Atualmente mantido por Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Por favor, envie relatos de problemas e sugestões para <bug-wget@gnu.org>.\n"

# , c-format
#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Tente \"%s --help\" para mais opções.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: a opção é ilegal -- \"-n%c\"\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Não pode ser \"detalhista\" e \"silencioso\" ao mesmo tempo.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Não é possível usar as opções \"timestamp\" e \"no clobber\" ao mesmo "
"tempo.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr ""
"Não é possível especificar ao mesmo tempo --inet4-only e --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Não é possível especificar -k e -O se são fornecidos múltiplos URLs, ou em\n"
"combinação com -p ou -r. Veja o manual para mais detalhes.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"AVISO: combinar -O com -r ou -p significa que todo o conteúdo baixado será\n"
"colocado em um único arquivo que você especificou.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"AVISO: a opção --timestamp não faz nada se combinada com -O. Veja o manual\n"
"para detalhes.\n"
"\n"

# , c-format
#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "O arquivo \"%s\" já existe, não será baixado.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""
"Não é possível especificar ao mesmo tempo --ask-password e --password.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: falta o URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Esta versão não oferece suporte a IRIs\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"AVISO: Não reabra a saída padrão em modo binário;\n"
"        o arquivo baixado pode conter fins-de-linha inapropriados.\n"

# , c-format
#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Nenhum URL foi encontrado em %s.\n"

# , c-format
#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"FINALIZADO --%s--\n"
"Baixados: %d arquivos, %s em %s (%s)\n"

# , c-format
#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "EXCEDIDA a cota de download de %s!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Continuando em plano de fundo.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Continuando em plano de fundo, pid %lu.\n"

# , c-format
#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "A saída será escrita em %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Não foi possível encontrar um driver de soquete usável.\n"

# , c-format
#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: aviso: o termo %s aparece antes de qualquer nome de máquina\n"

# , c-format
#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: o termo \"%s\" é desconhecido\n"

# , c-format
#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Uso: %s NETRC [NOME DA MÁQUINA]\n"

# , c-format
#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: não foi possível acessar %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "AVISO: usando uma semente fraca de aleatoriedade.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr ""
"Não foi possível gerar semente para PRNG; considere o uso de --random-file.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr "%s: não foi possível verificar o certificado de %s, emitido por %s:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Não foi possível verificar localmente a autoridade do emissor.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Foi encontrado um certificado auto-assinado.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Certificado emitido ainda não é válido.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Certificado emitido expirou.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: o nome comum no certificado %s não coincide com o nome de máquina "
"solicitado %s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: o nome comum no certificado é inválido (contém um caracter nulo).\n"
"Isso pode ser um indício que a máquina não é quem afirma ser, isto é,\n"
"que ela não é o verdadeiro %s).\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"Para se conectar a %s de forma insegura, use \"--no-check-certificate\".\n"

# , c-format
#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ ignorando %sK ]"

# , c-format
#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr ""
"Especificação inválida de estilo da ordem de grandeza (dot) %s;\n"
"  mantendo inalterado.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  TED %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   em "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Não foi possível obter a freqüência do relógio de TEMPO REAL: %s\n"

# , c-format
#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Removendo %s já que ele deveria ser rejeitado.\n"

# , c-format
#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Não foi possível abrir %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Carregando robots.txt; por favor ignore qualquer erro.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Erro ao analisar URL do proxy %s: %s\n"

# , c-format
#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Erro no URL do proxy %s: Tem que ser HTTP.\n"

# , c-format
#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Excedeu os %d redirecionamentos.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Desistindo.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Tentando novamente.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Não encontrou links quebrados.\n"
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
"Encontrou %d link quebrado.\n"
"\n"
msgstr[1] ""
"Encontrou %d links quebrados.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Nenhum erro"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Não há suporte ao esquema %s"

#: src/url.c:637
msgid "Scheme missing"
msgstr "O esquema está faltando"

#: src/url.c:639
msgid "Invalid host name"
msgstr "O nome de máquina é inválido"

#: src/url.c:641
msgid "Bad port number"
msgstr "O número de porta é inválido"

#: src/url.c:643
msgid "Invalid user name"
msgstr "O nome de usuário é inválido"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "O endereço IPv6 está incompleto"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Não há suporte a endereços IPv6"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "O endereço IPv6 é inválido"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "Compilado sem suporte a HTTPS"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr "%s: %s: Falhou em alocar memória suficiente; memória esgotada.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Falhou em alocar %ld bytes; memória esgotada.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""
"%s: aprintf: a memória para texto é muito grande (%ld bytes); abortando.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Continuando em plano de fundo, pid %d.\n"

# , c-format
#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Falha na remoção da ligação simbólica %s: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            prefixa com URL os links relativos no "
#~ "arquivo\n"
#~ "                               quando usadas as opções -F -i.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr ""
#~ "       --preserve-permissions  preserva as permissões do arquivo remoto.\n"
