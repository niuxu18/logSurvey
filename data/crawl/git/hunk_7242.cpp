 	die("unrecognized help format '%s'", format);
 }
 
+static const char *get_man_viewer_info(const char *name)
+{
+	struct man_viewer_info_list *viewer;
+
+	for (viewer = man_viewer_info_list; viewer; viewer = viewer->next)
+	{
+		if (!strcasecmp(name, viewer->name))
+			return viewer->info;
+	}
+	return NULL;
+}
+
 static int check_emacsclient_version(void)
 {
 	struct strbuf buffer = STRBUF_INIT;
