 {
     debug(20, 3, "destroy_StoreEntry: destroying %p\n", e);
     if (!e)
-	fatal_dump("destroy_StoreEntry: NULL Entry\n");
+	fatal_dump("destroy_StoreEntry: NULL Entry");
     if (e->mem_obj)
 	destroy_MemObject(e->mem_obj);
     xfree(e);