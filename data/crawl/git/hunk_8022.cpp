 	die("%s died of unnatural causes %d", argv[0], status);
 }
 
-static struct ref *do_fetch_pack(int fd[2], int nr_match, char **match)
+static struct ref *do_fetch_pack(int fd[2],
+		int nr_match,
+		char **match,
+		char **pack_lockfile)
 {
 	struct ref *ref;
 	unsigned char sha1[20];
