 			printf("D %s\n", spec->path);
 		else {
 			struct object *object = lookup_object(spec->sha1);
-			printf("M 0%06o :%d %s\n", spec->mode,
+			printf("M %06o :%d %s\n", spec->mode,
 			       get_object_mark(object), spec->path);
 		}
 	}