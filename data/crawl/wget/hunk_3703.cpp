 "Proovin uuesti.\n"
 "\n"
 
-#: src/url.c:1332
+#: src/url.c:983
+#, c-format
+msgid "Error (%s): Link %s without a base provided.\n"
+msgstr "Viga (%s): Viide %s on ilma baasita.\n"
+
+#: src/url.c:999
+#, c-format
+msgid "Error (%s): Base %s relative, without referer URL.\n"
+msgstr "Viga(%s): Baas %s on suhteline, puudub viitav URL.\n"
+
+#: src/url.c:1540
 #, c-format
 msgid "Converting %s... "
 msgstr "Teisendan %s... "
 
-#: src/url.c:1345
-msgid "nothing to do.\n"
-msgstr ""
-
-#: src/url.c:1353 src/url.c:1377
+#: src/url.c:1545 src/url.c:1632
 #, c-format
 msgid "Cannot convert links in %s: %s\n"
 msgstr "Ei suuda teisendada linke %s: %s\n"
 
-#: src/url.c:1368
-#, fuzzy, c-format
-msgid "Unable to delete `%s': %s\n"
-msgstr "Ei �nnestu kustutada s�mbol viidet `%s': %s\n"
-
-#: src/url.c:1558
-#, fuzzy, c-format
+#: src/url.c:1608
+#, c-format
 msgid "Cannot back up %s as %s: %s\n"
-msgstr "Ei suuda teisendada linke %s: %s\n"
+msgstr "Ei saa luua %s varukoopiat %s: %s\n"
 
-#: src/utils.c:94
+#: src/utils.c:72
 #, c-format
 msgid "%s: %s: Not enough memory.\n"
 msgstr "%s: %s: m�lu ei j�tku.\n"
 
-#: src/utils.c:386
+#: src/utils.c:204
 msgid "Unknown/unsupported protocol"
 msgstr "Tundmatu/mittetoetatav protokoll"
 
-#: src/utils.c:389
+#: src/utils.c:207
 msgid "Invalid port specification"
 msgstr "Vigane pordi spetsifikatsioon"
 
-#: src/utils.c:392
+#: src/utils.c:210
 msgid "Invalid host name"
 msgstr "Vigane hosti nimi"
 
-#: src/utils.c:613
+#: src/utils.c:431
 #, c-format
 msgid "Failed to unlink symlink `%s': %s\n"
 msgstr "Ei �nnestu kustutada s�mbol viidet `%s': %s\n"
 
-#, fuzzy
-#~ msgid "%s: Out of memory.\n"
-#~ msgstr "%s: %s: m�lu ei j�tku.\n"
-
 #~ msgid ""
 #~ "Local file `%s' is more recent, not retrieving.\n"
 #~ "\n"
 #~ msgstr ""
 #~ "Lokaalne fail `%s' on uuem, ei t�mba.\n"
 #~ "\n"
-
-#~ msgid "Error (%s): Link %s without a base provided.\n"
-#~ msgstr "Viga (%s): Viide %s on ilma baasita.\n"
-
-#~ msgid "Error (%s): Base %s relative, without referer URL.\n"
-#~ msgstr "Viga(%s): Baas %s on suhteline, puudub viitav URL.\n"
