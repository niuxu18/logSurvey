 			return 1;
 		}
 		obj->used = 1;
+		if (name_objects)
+			add_decoration(fsck_walk_options.object_names,
+				obj, xstrdup(":"));
 		mark_object_reachable(obj);
 		if (obj->type != OBJ_TREE)
 			err |= objerror(obj, "non-tree in cache-tree");
