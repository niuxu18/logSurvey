 		}
 		if (!get_sha1_committish(this, from_sha1) &&
 		    !get_sha1_committish(next, sha1)) {
-			struct commit *a, *b;
-			struct commit_list *exclude;
-
-			a = lookup_commit_reference(from_sha1);
-			b = lookup_commit_reference(sha1);
-			if (!a || !b) {
-				if (revs->ignore_missing)
-					return 0;
-				die(symmetric ?
-				    "Invalid symmetric difference expression %s...%s" :
-				    "Invalid revision range %s..%s",
-				    arg, next);
-			}
+			struct object *a_obj, *b_obj;
 
 			if (!cant_be_filename) {
 				*dotdot = '.';
 				verify_non_filename(revs->prefix, arg);
 			}
 
-			if (symmetric) {
+			a_obj = parse_object(from_sha1);
+			b_obj = parse_object(sha1);
+			if (!a_obj || !b_obj) {
+			missing:
+				if (revs->ignore_missing)
+					return 0;
+				die(symmetric
+				    ? "Invalid symmetric difference expression %s"
+				    : "Invalid revision range %s", arg);
+			}
+
+			if (!symmetric) {
+				/* just A..B */
+				a_flags = flags_exclude;
+			} else {
+				/* A...B -- find merge bases between the two */
+				struct commit *a, *b;
+				struct commit_list *exclude;
+
+				a = (a_obj->type == OBJ_COMMIT
+				     ? (struct commit *)a_obj
+				     : lookup_commit_reference(a_obj->sha1));
+				b = (b_obj->type == OBJ_COMMIT
+				     ? (struct commit *)b_obj
+				     : lookup_commit_reference(b_obj->sha1));
+				if (!a || !b)
+					goto missing;
 				exclude = get_merge_bases(a, b, 1);
 				add_pending_commit_list(revs, exclude,
 							flags_exclude);
 				free_commit_list(exclude);
+
 				a_flags = flags | SYMMETRIC_LEFT;
-			} else
-				a_flags = flags_exclude;
-			a->object.flags |= a_flags;
-			b->object.flags |= flags;
-			add_rev_cmdline(revs, &a->object, this,
+			}
+
+			a_obj->flags |= a_flags;
+			b_obj->flags |= flags;
+			add_rev_cmdline(revs, a_obj, this,
 					REV_CMD_LEFT, a_flags);
-			add_rev_cmdline(revs, &b->object, next,
+			add_rev_cmdline(revs, b_obj, next,
 					REV_CMD_RIGHT, flags);
-			add_pending_object(revs, &a->object, this);
-			add_pending_object(revs, &b->object, next);
+			add_pending_object(revs, a_obj, this);
+			add_pending_object(revs, b_obj, next);
 			return 0;
 		}
 		*dotdot = '.';
