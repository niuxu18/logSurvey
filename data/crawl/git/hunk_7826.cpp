 			/* abbreviated? */
 			if (!strncmp(options->long_name, arg, arg_end - arg)) {
 is_abbreviated:
-				if (abbrev_option)
-					return error("Ambiguous option: %s "
-						"(could be --%s%s or --%s%s)",
-						arg,
-						(flags & OPT_UNSET) ?
-							"no-" : "",
-						options->long_name,
-						(abbrev_flags & OPT_UNSET) ?
-							"no-" : "",
-						abbrev_option->long_name);
+				if (abbrev_option) {
+					/*
+					 * If this is abbreviated, it is
+					 * ambiguous. So when there is no
+					 * exact match later, we need to
+					 * error out.
+					 */
+					ambiguous_option = abbrev_option;
+					ambiguous_flags = abbrev_flags;
+				}
 				if (!(flags & OPT_UNSET) && *arg_end)
 					p->opt = arg_end + 1;
 				abbrev_option = options;
