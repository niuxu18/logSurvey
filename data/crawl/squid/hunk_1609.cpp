 static int
 parse_wccp2_service_flags(char *flags)
 {
-    if (!flags)
+    char *tmp, *tmp2;
+    char *flag;
+    int retflag = 0;
+
+    if (!flags) {
         return 0;
+    }
 
-    char *flag = flags;
-    int retflag = 0;
+    tmp = xstrdup(flags);
+    tmp2 = tmp;
 
-    while (size_t len = strcspn(flag, ",")) {
+    flag = strsep(&tmp2, ",");
 
-        if (strncmp(flag, "src_ip_hash", len) == 0) {
+    while (flag) {
+        if (strcmp(flag, "src_ip_hash") == 0) {
             retflag |= WCCP2_SERVICE_SRC_IP_HASH;
-        } else if (strncmp(flag, "dst_ip_hash", len) == 0) {
+        } else if (strcmp(flag, "dst_ip_hash") == 0) {
             retflag |= WCCP2_SERVICE_DST_IP_HASH;
-        } else if (strncmp(flag, "source_port_hash", len) == 0) {
+        } else if (strcmp(flag, "source_port_hash") == 0) {
             retflag |= WCCP2_SERVICE_SRC_PORT_HASH;
-        } else if (strncmp(flag, "dst_port_hash", len) == 0) {
+        } else if (strcmp(flag, "dst_port_hash") == 0) {
             retflag |= WCCP2_SERVICE_DST_PORT_HASH;
-        } else if (strncmp(flag, "ports_source", len) == 0) {
+        } else if (strcmp(flag, "ports_source") == 0) {
             retflag |= WCCP2_SERVICE_PORTS_SOURCE;
-        } else if (strncmp(flag, "src_ip_alt_hash", len) == 0) {
+        } else if (strcmp(flag, "src_ip_alt_hash") == 0) {
             retflag |= WCCP2_SERVICE_SRC_IP_ALT_HASH;
-        } else if (strncmp(flag, "dst_ip_alt_hash", len) == 0) {
+        } else if (strcmp(flag, "dst_ip_alt_hash") == 0) {
             retflag |= WCCP2_SERVICE_DST_IP_ALT_HASH;
-        } else if (strncmp(flag, "src_port_alt_hash", len) == 0) {
+        } else if (strcmp(flag, "src_port_alt_hash") == 0) {
             retflag |= WCCP2_SERVICE_SRC_PORT_ALT_HASH;
-        } else if (strncmp(flag, "dst_port_alt_hash", len) == 0) {
+        } else if (strcmp(flag, "dst_port_alt_hash") == 0) {
             retflag |= WCCP2_SERVICE_DST_PORT_ALT_HASH;
         } else {
-            flag[len] = '\0';
             fatalf("Unknown wccp2 service flag: %s\n", flag);
         }
 
-        if (flag[len] == '\0')
-            break;
-
-        flag += len+1;
+        flag = strsep(&tmp2, ",");
     }
 
+    xfree(tmp);
     return retflag;
 }
 
 static void
 parse_wccp2_service_ports(char *options, int portlist[])
 {
+    int i = 0;
+    int p;
+    char *tmp, *tmp2, *port;
+
     if (!options) {
         return;
     }
 
-    int i = 0;
-    char *tmp = options;
+    tmp = xstrdup(options);
+    tmp2 = tmp;
 
-    while (size_t len = strcspn(tmp, ",")) {
-        if (i >= WCCP2_NUMPORTS) {
-            fatalf("parse_wccp2_service_ports: too many ports (maximum: 8) in list '%s'\n", options);
-        }
-        int p = xatoi(tmp);
+    port = strsep(&tmp2, ",");
+
+    while (port && i < WCCP2_NUMPORTS) {
+        p = xatoi(port);
 
         if (p < 1 || p > 65535) {
-            fatalf("parse_wccp2_service_ports: port value '%s' isn't valid (1..65535)\n", tmp);
+            fatalf("parse_wccp2_service_ports: port value '%s' isn't valid (1..65535)\n", port);
         }
 
         portlist[i] = p;
         ++i;
-        if (tmp[len] == '\0')
-            return;
-        tmp += len+1;
+        port = strsep(&tmp2, ",");
     }
+
+    if (i == WCCP2_NUMPORTS && port) {
+        fatalf("parse_wccp2_service_ports: too many ports (maximum: 8) in list '%s'\n", options);
+    }
+
+    xfree(tmp);
 }
 
 void