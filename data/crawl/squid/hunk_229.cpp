     return (os << (int)d);
 }
 
-/* Legacy debug style. Still used in some places. needs to die... */
-#define do_debug(SECTION, LEVEL)   ((Debug::level = (LEVEL)) <= Debug::Levels[SECTION])
-#define old_debug(SECTION, LEVEL)  if do_debug((SECTION), (LEVEL)) _db_print
-
 /* Legacy debug function definitions */
 void _db_init(const char *logfile, const char *options);
 void _db_print(const char *,...) PRINTF_FORMAT_ARG1;