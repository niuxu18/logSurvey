 			}
 	}
 
+	/* handle tag->tagged having been filtered out due to paths specified */
+	tagged = tag->tagged;
+	tagged_mark = get_object_mark(tagged);
+	if (!tagged_mark) {
+		switch(tag_of_filtered_mode) {
+		case ABORT:
+			die ("Tag %s tags unexported object; use "
+			     "--tag-of-filtered-object=<mode> to handle it.",
+			     sha1_to_hex(tag->object.sha1));
+		case DROP:
+			/* Ignore this tag altogether */
+			return;
+		case REWRITE:
+			if (tagged->type != OBJ_COMMIT) {
+				die ("Tag %s tags unexported %s!",
+				     sha1_to_hex(tag->object.sha1),
+				     typename(tagged->type));
+			}
+			p = (struct commit *)tagged;
+			for (;;) {
+				if (p->parents && p->parents->next)
+					break;
+				if (p->object.flags & UNINTERESTING)
+					break;
+				if (!(p->object.flags & TREESAME))
+					break;
+				if (!p->parents)
+					die ("Can't find replacement commit for tag %s\n",
+					     sha1_to_hex(tag->object.sha1));
+				p = p->parents->item;
+			}
+			tagged_mark = get_object_mark(&p->object);
+		}
+	}
+
 	if (!prefixcmp(name, "refs/tags/"))
 		name += 10;
 	printf("tag %s\nfrom :%d\n%.*s%sdata %d\n%.*s\n",
-	       name, get_object_mark(tag->tagged),
+	       name, tagged_mark,
 	       (int)(tagger_end - tagger), tagger,
 	       tagger == tagger_end ? "" : "\n",
 	       (int)message_size, (int)message_size, message ? message : "");