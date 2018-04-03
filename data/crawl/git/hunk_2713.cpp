 		for (i = 0; i < merge_rr.nr; i++) {
 			const char *path = merge_rr.items[i].string;
 			const char *name = (const char *)merge_rr.items[i].util;
-			diff_two(rerere_path(name, "preimage"), path, path, path);
+			if (diff_two(rerere_path(name, "preimage"), path, path, path))
+				die("unable to generate diff for %s", name);
 		}
 	else
 		usage_with_options(rerere_usage, options);
