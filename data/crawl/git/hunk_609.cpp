 	init_revisions(&revs, NULL);
 	for (i = 0; i < p->nr; i++) {
 		struct ref_list_entry *e = p->list + i;
-		struct object *o = parse_object(e->sha1);
+		struct object *o = parse_object(e->oid.hash);
 		if (o) {
 			o->flags |= PREREQ_MARK;
 			add_pending_object(&revs, o, e->name);
 			continue;
 		}
 		if (++ret == 1)
 			error("%s", message);
-		error("%s %s", sha1_to_hex(e->sha1), e->name);
+		error("%s %s", oid_to_hex(&e->oid), e->name);
 	}
 	if (revs.pending.nr != p->nr)
 		return ret;