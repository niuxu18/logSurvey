 	}
 
 	if (ARRAY_SIZE(valid_atom) <= i)
-		die("unknown field name: %.*s", (int)(ep-atom), atom);
+		die(_("unknown field name: %.*s"), (int)(ep-atom), atom);
 
 	/* Add it in, including the deref prefix */
 	at = used_atom_cnt;
