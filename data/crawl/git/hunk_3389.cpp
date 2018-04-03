 	return ret - used + len;
 }
 
+static void set_shortened_ref(struct strbuf *buf, const char *ref)
+{
+	char *s = shorten_unambiguous_ref(ref, 0);
+	strbuf_reset(buf);
+	strbuf_addstr(buf, s);
+	free(s);
+}
+
+static const char *get_upstream_branch(const char *branch_buf, int len)
+{
+	char *branch = xstrndup(branch_buf, len);
+	struct branch *upstream = branch_get(*branch ? branch : NULL);
+
+	/*
+	 * Upstream can be NULL only if branch refers to HEAD and HEAD
+	 * points to something different than a branch.
+	 */
+	if (!upstream)
+		die(_("HEAD does not point to a branch"));
+	if (!upstream->merge || !upstream->merge[0]->dst) {
+		if (!ref_exists(upstream->refname))
+			die(_("No such branch: '%s'"), branch);
+		if (!upstream->merge) {
+			die(_("No upstream configured for branch '%s'"),
+				upstream->name);
+		}
+		die(
+			_("Upstream branch '%s' not stored as a remote-tracking branch"),
+			upstream->merge[0]->src);
+	}
+	free(branch);
+
+	return upstream->merge[0]->dst;
+}
+
+static int interpret_upstream_mark(const char *name, int namelen,
+				   int at, struct strbuf *buf)
+{
+	int len;
+
+	len = upstream_mark(name + at, namelen - at);
+	if (!len)
+		return -1;
+
+	set_shortened_ref(buf, get_upstream_branch(name, at));
+	return len + at;
+}
+
 /*
  * This reads short-hand syntax that not only evaluates to a commit
  * object name, but also can act as if the end user spelled the name
