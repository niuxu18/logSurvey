 	unsigned flags1, flags2;
 
 	if (rev->pending.nr != 2)
-		die("Need exactly one range.");
+		die(_("Need exactly one range."));
 
 	o1 = rev->pending.objects[0].item;
 	flags1 = o1->flags;
 	o2 = rev->pending.objects[1].item;
 	flags2 = o2->flags;
 
 	if ((flags1 & UNINTERESTING) == (flags2 & UNINTERESTING))
-		die("Not a range.");
+		die(_("Not a range."));
 
 	init_patch_ids(ids);
 
