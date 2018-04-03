 typedef void (*append_f) (void *, const char *buf, int size);
 typedef void (*vprintf_f) (void *, const char *fmt, va_list args);
 
-class Packer
+class Packer : public Packable
 {
 
 public:
     virtual ~Packer();
 
+    /* Packable API */
     virtual void append(const char *buf, int size);
-
-    /*
-     * \note  we use Printf instead of printf so the compiler won't
-     *        think we're calling the libc printf()
-     */
     virtual void Printf(const char *fmt,...) PRINTF_FORMAT_ARG2;
 
     /* protected, use interface functions instead */