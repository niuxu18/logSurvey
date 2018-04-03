  * the need to parse the object via parse_object(). peel_ref() might be a
  * more efficient alternative to obtain the pointee.
  */
-static const struct object_id *match_points_at(struct sha1_array *points_at,
+static const struct object_id *match_points_at(struct oid_array *points_at,
 					       const struct object_id *oid,
 					       const char *refname)
 {
 	const struct object_id *tagged_oid = NULL;
 	struct object *obj;
 
-	if (sha1_array_lookup(points_at, oid) >= 0)
+	if (oid_array_lookup(points_at, oid) >= 0)
 		return oid;
 	obj = parse_object(oid->hash);
 	if (!obj)
 		die(_("malformed object at '%s'"), refname);
 	if (obj->type == OBJ_TAG)
 		tagged_oid = &((struct tag *)obj)->tagged->oid;
-	if (tagged_oid && sha1_array_lookup(points_at, tagged_oid) >= 0)
+	if (tagged_oid && oid_array_lookup(points_at, tagged_oid) >= 0)
 		return tagged_oid;
 	return NULL;
 }
