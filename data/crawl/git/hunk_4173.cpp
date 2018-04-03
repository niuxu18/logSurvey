 		diff_words_show(ecbdata->diff_words);
 }
 
+static void diff_filespec_load_driver(struct diff_filespec *one)
+{
+	/* Use already-loaded driver */
+	if (one->driver)
+		return;
+
+	if (S_ISREG(one->mode))
+		one->driver = userdiff_find_by_path(one->path);
+
+	/* Fallback to default settings */
+	if (!one->driver)
+		one->driver = userdiff_find_by_name("default");
+}
+
+static const char *userdiff_word_regex(struct diff_filespec *one)
+{
+	diff_filespec_load_driver(one);
+	return one->driver->word_regex;
+}
+
+static void init_diff_words_data(struct emit_callback *ecbdata,
+				 struct diff_options *o,
+				 struct diff_filespec *one,
+				 struct diff_filespec *two)
+{
+	int i;
+
+	ecbdata->diff_words =
+		xcalloc(1, sizeof(struct diff_words_data));
+	ecbdata->diff_words->type = o->word_diff;
+	ecbdata->diff_words->opt = o;
+	if (!o->word_regex)
+		o->word_regex = userdiff_word_regex(one);
+	if (!o->word_regex)
+		o->word_regex = userdiff_word_regex(two);
+	if (!o->word_regex)
+		o->word_regex = diff_word_regex_cfg;
+	if (o->word_regex) {
+		ecbdata->diff_words->word_regex = (regex_t *)
+			xmalloc(sizeof(regex_t));
+		if (regcomp(ecbdata->diff_words->word_regex,
+			    o->word_regex,
+			    REG_EXTENDED | REG_NEWLINE))
+			die ("Invalid regular expression: %s",
+			     o->word_regex);
+	}
+	for (i = 0; i < ARRAY_SIZE(diff_words_styles); i++) {
+		if (o->word_diff == diff_words_styles[i].type) {
+			ecbdata->diff_words->style =
+				&diff_words_styles[i];
+			break;
+		}
+	}
+	if (want_color(o->use_color)) {
+		struct diff_words_style *st = ecbdata->diff_words->style;
+		st->old.color = diff_get_color_opt(o, DIFF_FILE_OLD);
+		st->new.color = diff_get_color_opt(o, DIFF_FILE_NEW);
+		st->ctx.color = diff_get_color_opt(o, DIFF_PLAIN);
+	}
+}
+
 static void free_diff_words_data(struct emit_callback *ecbdata)
 {
 	if (ecbdata->diff_words) {
