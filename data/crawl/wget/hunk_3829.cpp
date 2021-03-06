 msgid "%s: Couldn't find usable socket driver.\n"
 msgstr "%s: Non se puido atopar un controlador de sockets utilizable.\n"
 
-#: src/netrc.c:334
+#: src/netrc.c:367
 #, c-format
 msgid "%s: %s:%d: warning: \"%s\" token appears before any machine name\n"
-msgstr "%s: %s:%d: aviso: o elemento \"%s\" aparece antes dun nome de m�quina\n"
+msgstr ""
+"%s: %s:%d: aviso: o elemento \"%s\" aparece antes dun nome de m�quina\n"
 
-#: src/netrc.c:365
+#: src/netrc.c:398
 #, c-format
 msgid "%s: %s:%d: unknown token \"%s\"\n"
 msgstr "%s: %s:%d: elemento \"%s\" desco�ecido\n"
 
-#: src/netrc.c:429
+#: src/netrc.c:462
 #, c-format
 msgid "Usage: %s NETRC [HOSTNAME]\n"
 msgstr "Uso: %s NETRC [SERVIDOR]\n"
 
-#: src/netrc.c:439
+#: src/netrc.c:472
 #, c-format
 msgid "%s: cannot stat %s: %s\n"
 msgstr "%s: non se pode obter informaci�n de %s: %s\n"
 
-#: src/recur.c:449 src/retr.c:462
-#, c-format
-msgid "Removing %s.\n"
-msgstr "Borrando %s.\n"
-
-#: src/recur.c:450
+#: src/recur.c:506
 #, c-format
 msgid "Removing %s since it should be rejected.\n"
 msgstr "Borrando %s porque deber�a ser rexeitado.\n"
 
-#: src/recur.c:609
+#: src/recur.c:680
 msgid "Loading robots.txt; please ignore errors.\n"
 msgstr "Cargando robots.txt; por favor, ignore os erros.\n"
 
-#: src/retr.c:193
+#: src/retr.c:217
 #, c-format
-msgid "\n          [ skipping %dK ]"
-msgstr "\n          [ saltando %dK ]"
+msgid ""
+"\n"
+"          [ skipping %dK ]"
+msgstr ""
+"\n"
+"          [ saltando %dK ]"
 
-#: src/retr.c:344
+#: src/retr.c:399
 msgid "Could not find proxy host.\n"
 msgstr "Non se puido atopar un servidor proxy.\n"
 
-#: src/retr.c:355
+#: src/retr.c:413
 #, c-format
 msgid "Proxy %s: Must be HTTP.\n"
 msgstr "Proxy %s: Debe ser HTTP.\n"
 
-#: src/retr.c:398
-#, c-format
-msgid "%s: Redirection to itself.\n"
+#: src/retr.c:507
+#, fuzzy, c-format
+msgid "%s: Redirection cycle detected.\n"
 msgstr "%s: Redirecci�n a si mesmo.\n"
 
-#: src/retr.c:483
-msgid "Giving up.\n\n"
-msgstr "Abandonando.\n\n"
-
-#: src/retr.c:483
-msgid "Retrying.\n\n"
-msgstr "Intent�ndoo de novo.\n\n"
-
-#: src/url.c:940
-#, c-format
-msgid "Error (%s): Link %s without a base provided.\n"
-msgstr "Error (%s): Proporcionouse a ligaz�n %s sen unha base.\n"
+#: src/retr.c:601
+msgid ""
+"Giving up.\n"
+"\n"
+msgstr ""
+"Abandonando.\n"
+"\n"
 
-#: src/url.c:955
-#, c-format
-msgid "Error (%s): Base %s relative, without referer URL.\n"
-msgstr "Error (%s): A base %s � relativa, sen unha URL � que se referir.\n"
+#: src/retr.c:601
+msgid ""
+"Retrying.\n"
+"\n"
+msgstr ""
+"Intent�ndoo de novo.\n"
+"\n"
 
-#: src/url.c:1373
+#: src/url.c:1325
 #, c-format
 msgid "Converting %s... "
 msgstr "Convertindo %s..."
 
-#: src/url.c:1378 src/url.c:1389
+#: src/url.c:1338
+msgid "nothing to do.\n"
+msgstr ""
+
+#: src/url.c:1346 src/url.c:1370
 #, c-format
 msgid "Cannot convert links in %s: %s\n"
 msgstr "Non se poden converte-las ligaz�ns en %s: %s\n"
 
-#: src/utils.c:71
+#: src/url.c:1361
+#, fuzzy, c-format
+msgid "Unable to delete `%s': %s\n"
+msgstr "Fallo ao desligar `%s': %s\n"
+
+#: src/url.c:1558
+#, fuzzy, c-format
+msgid "Cannot back up %s as %s: %s\n"
+msgstr "Non se poden converte-las ligaz�ns en %s: %s\n"
+
+#: src/utils.c:94
 #, c-format
 msgid "%s: %s: Not enough memory.\n"
 msgstr "%s: %s: Non hai memoria dabondo.\n"
 
-#: src/utils.c:203
+#: src/utils.c:392
 msgid "Unknown/unsupported protocol"
 msgstr "Protocolo desco�ecido ou non soportado"
 
-#: src/utils.c:206
+#: src/utils.c:395
 msgid "Invalid port specification"
 msgstr "Especificaci�n de porto incorrecta"
 
-#: src/utils.c:209
+#: src/utils.c:398
 msgid "Invalid host name"
 msgstr "O nome do servidor non � v�lido"
 
-#: src/utils.c:430
+#: src/utils.c:619
 #, c-format
 msgid "Failed to unlink symlink `%s': %s\n"
 msgstr "Fallo ao desligar `%s': %s\n"
+
+#~ msgid ""
+#~ "Local file `%s' is more recent, not retrieving.\n"
+#~ "\n"
+#~ msgstr ""
+#~ "O ficheiro local `%s' � m�is recente, non se ha descargar.\n"
+#~ "\n"
+
+#~ msgid "Error (%s): Link %s without a base provided.\n"
+#~ msgstr "Error (%s): Proporcionouse a ligaz�n %s sen unha base.\n"
+
+#~ msgid "Error (%s): Base %s relative, without referer URL.\n"
+#~ msgstr "Error (%s): A base %s � relativa, sen unha URL � que se referir.\n"
