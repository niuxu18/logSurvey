 
 int display_progress(struct progress *progress, unsigned n)
 {
-	return display(progress, n, 0);
+	return progress ? display(progress, n, 0) : 0;
 }
 
-void start_progress_delay(struct progress *progress, const char *title,
-			  unsigned total, unsigned percent_treshold, unsigned delay)
+struct progress *start_progress_delay(const char *title, unsigned total,
+				       unsigned percent_treshold, unsigned delay)
 {
+	struct progress *progress = malloc(sizeof(*progress));
+	if (!progress) {
+		/* unlikely, but here's a good fallback */
+		fprintf(stderr, "%s...\n", title);
+		return NULL;
+	}
 	progress->title = title;
 	progress->total = total;
 	progress->last_value = -1;
 	progress->last_percent = -1;
 	progress->delayed_percent_treshold = percent_treshold;
 	progress->delay = delay;
 	set_progress_signal();
+	return progress;
 }
 
-void start_progress(struct progress *progress, const char *title, unsigned total)
+struct progress *start_progress(const char *title, unsigned total)
 {
-	start_progress_delay(progress, title, total, 0, 0);
+	return start_progress_delay(title, total, 0, 0);
 }
 
-void stop_progress(struct progress *progress)
+void stop_progress(struct progress **p_progress)
 {
+	struct progress *progress = *p_progress;
+	if (!progress)
+		return;
+	*p_progress = NULL;
 	if (progress->last_value != -1) {
 		/* Force the last update */
 		progress_update = 1;
 		display(progress, progress->last_value, 1);
 	}
 	clear_progress_signal();
+	free(progress);
 }
