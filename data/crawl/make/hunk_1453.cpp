   if (memname_p != 0)
     *memname_p = savestring (p + 1, end - (p + 1));
 }  
+ 
+#ifdef VMS
+#include <lbrdef.h>
+#include <mhddef.h>
+#include <credef.h>
+#include <descrip.h>
+#include <ctype.h>
+#if __DECC
+#include <lbr$routines.h>
+#endif
+
+#define uppercasify(str) {char *str1; for (str1 = str; *str1; str1++) *str1 = _toupper(*str1);}
+
+#define LBR$_KEYNOTFND 2527330 /* This isn't in any .h file anywhere so I got it from a MACRO library */
+
+time_t
+ar_member_date (name)
+     char *name;
+{
+  static char *arname;
+  static char *memname;
+  char *p,*q;
+  long int val;
+  static struct {
+    struct mhddef mhd;
+    struct credef cre;
+    char garbage[256];
+  } buf;
+  int func=LBR$C_READ,
+      type=LBR$C_TYP_OBJ,
+      rfa[2],
+      lidx,
+      status;
+  $DESCRIPTOR(bufdesc,(char *)&buf);
+  $DESCRIPTOR(libdesc,arname);
+  $DESCRIPTOR(moddesc,memname);
+
+  /* This "file" is an archive member.  */
+  p = index (name, '(');
+  arname = savestring (name, p - name);
+  val = strlen (p) - 2;
+/*
+  if (val > 15)
+    val = 15;
+*/
+  memname = savestring (p + 1, val);
+#ifdef OLDWAY
+  p = rindex (memname, ')');
+  if (p != 0) {
+      q = rindex(p,'.');
+      if (q)
+	*q = '\0'; /* to get rid of extension */
+  }
+#endif
+
+  q = rindex(memname,'.');
+  if (q)
+    *q = '\0'; /* to get rid of extension */
+
+  uppercasify(memname);
+
+  /* Make sure we know the modtime of the archive itself because
+     we are likely to be called just before commands to remake a
+     member are run, and they will change the archive itself.  */
+  (void) f_mtime (enter_file (arname));
+
+  libdesc.dsc$a_pointer = arname;
+  libdesc.dsc$w_length = strlen(arname);
+  moddesc.dsc$a_pointer = memname;
+  moddesc.dsc$w_length = strlen(memname);
+
+  if (!((status = lbr$ini_control(&lidx,&func,&type,0)) & 1)) {
+    printf("Error in lbr$ini_control, %d\n",status);
+    return(-1);
+  }
+
+  if (!((status = lbr$open(&lidx,&libdesc,0,0,0,0,0)) & 1)) {
+    printf("Error opening library %s to lookup member %s, %d\n",arname, memname ,status);
+    return(-1);
+  }
+
+  if (!((status = lbr$lookup_key(&lidx,&moddesc,rfa)) & 1)) {
+      if (status != LBR$_KEYNOTFND)
+	printf("Error looking up module %s in library %s, %d\n",memname, arname ,status);
+      lbr$close(&lidx);
+      return(-1);
+  }
+
+  if (!((status = lbr$set_module(&lidx,rfa,&bufdesc,&bufdesc,0)) & 1)) {
+    printf("Error getting module info, %d\n",status);
+    lbr$close(&lidx);
+    return(-1);
+  }
+
+  lbr$close(&lidx);
+
+  val = SHELL$FIX_TIME(&buf.mhd.mhd$l_datim);
+
+  free (arname);
+  free (memname);
+  return (val <= 0 ? (time_t) -1 : (time_t) val);
+}
+
+#else
 
-static long int ar_member_date_1 ();
+static long int ar_member_date_1 PARAMS ((int desc, char *mem, int truncated, long int hdrpos,
+	long int datapos, long int size, long int date, int uid, int gid, int mode, char *name));
 
 /* Return the modtime of NAME.  */
 
