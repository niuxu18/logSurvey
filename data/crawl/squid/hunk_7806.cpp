 	return;
     if ((pwd = getpwnam(getEffectiveUser())) == NULL)
 	return;
-    /* change current directory to swap space so we can get core */
-    if (chdir(swappath(0)) < 0) {
-	debug(21, 0, "%s: %s\n", swappath(0), xstrerror());
-	fatal_dump("Cannot cd to swap directory?");
-    }
     if (getEffectiveGroup() && (grp = getgrnam(getEffectiveGroup()))) {
 	setgid(grp->gr_gid);
     } else {
 	setgid(pwd->pw_gid);
     }
+#if HAVE_SETRESUID
+    setresuid(pwd->pw_uid, pwd->pw_uid, 0);
+#elif HAVE_SETEUID
+    seteuid(pwd->pw_uid);
+#else
     setuid(pwd->pw_uid);
+#endif
+}
+
+void get_suid()
+{
+#if HAVE_SETRESUID
+    setresuid(-1, 0, -1);
+#else
+    setuid(0);
+#endif
+}
+
+void no_suid()
+{
+    uid_t uid;
+    check_suid();
+    uid = geteuid();
+#if HAVE_SETRESUID
+    setresuid(uid, uid, uid);
+#else
+    setuid(0);
+    setuid(uid);
+#endif
 }
 
 void writePidFile()
