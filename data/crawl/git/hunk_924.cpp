 	atom->u.contents.option = C_SUB;
 }
 
+static void trailers_atom_parser(struct used_atom *atom, const char *arg)
+{
+	if (arg)
+		die(_("%%(trailers) does not take arguments"));
+	atom->u.contents.option = C_TRAILERS;
+}
+
 static void contents_atom_parser(struct used_atom *atom, const char *arg)
 {
 	if (!arg)