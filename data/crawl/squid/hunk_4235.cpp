 SQUIDCEXTERN void _db_init(const char *logfile, const char *options);
 SQUIDCEXTERN void _db_rotate_log(void);
 
-#if STDC_HEADERS
 SQUIDCEXTERN void _db_print(const char *,...) PRINTF_FORMAT_ARG1;
-#else
-SQUIDCEXTERN void _db_print();
-#endif
 
 /* packs, then prints an object using debug() */
 SQUIDCEXTERN void debugObj(int section, int level, const char *label, void *obj, ObjPackMethod pm);
