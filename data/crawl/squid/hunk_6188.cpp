 #include <netinet/in.h>
 main ()
 {
+	FILE *fp;
         int fd,val=0,len=sizeof(int);
 	if ((fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) exit(1);
         if (getsockopt(fd, SOL_SOCKET, SO_RCVBUF, &val, &len) < 0) exit(1);
 	if (val <= 0) exit(1);
-        fprintf (fopen("conftestval", "w"), "%d\n", val);
+	fp = fopen("conftestval", "w"); 
+	fprintf (fp, "%d\n", val);
 	exit(0);
 }
 
 EOF
-if { (eval echo configure:4483: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest && (./conftest; exit) 2>/dev/null
+if { (eval echo configure:4494: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest && (./conftest; exit) 2>/dev/null
 then
   SQUID_TCP_SO_RCVBUF=`cat conftestval`
 else