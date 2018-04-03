+blob
+mark :1
+data 157
+#include <stdio.h>
+
+int f(int x)
+{
+	int s = 0;
+	while (x) {
+		x >>= 1;
+		s++;
+	}
+}
+
+/*
+ * A comment.
+ */
+
+int main ()
+{
+	printf("%d\n", f(15));
+	return 0;
+}
+
+reset refs/tags/simple
+commit refs/tags/simple
+mark :2
+author Thomas Rast <trast@student.ethz.ch> 1362044688 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044688 +0100
+data 8
+initial
+M 100644 :1 a.c
+
+blob
+mark :3
+data 168
+#include <stdio.h>
+
+int f(int x)
+{
+	int s = 0;
+	while (x) {
+		x >>= 1;
+		s++;
+	}
+	return s;
+}
+
+/*
+ * A comment.
+ */
+
+int main ()
+{
+	printf("%d\n", f(15));
+	return 0;
+}
+
+commit refs/tags/simple
+mark :4
+author Thomas Rast <trast@student.ethz.ch> 1362044695 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044695 +0100
+data 11
+change f()
+from :2
+M 100644 :3 a.c
+
+blob
+mark :5
+data 171
+#include <stdio.h>
+
+long f(long x)
+{
+	int s = 0;
+	while (x) {
+		x >>= 1;
+		s++;
+	}
+	return s;
+}
+
+/*
+ * A comment.
+ */
+
+int main ()
+{
+	printf("%ld\n", f(15));
+	return 0;
+}
+
+commit refs/tags/simple
+mark :6
+author Thomas Rast <trast@student.ethz.ch> 1362044716 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044716 +0100
+data 21
+touch both functions
+from :4
+M 100644 :5 a.c
+
+blob
+mark :7
+data 185
+#include <stdio.h>
+
+long f(long x)
+{
+	int s = 0;
+	while (x) {
+		x >>= 1;
+		s++;
+	}
+	return s;
+}
+
+/*
+ * This is only an example!
+ */
+
+int main ()
+{
+	printf("%ld\n", f(15));
+	return 0;
+}
+
+commit refs/tags/simple
+mark :8
+author Thomas Rast <trast@student.ethz.ch> 1362044741 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044741 +0100
+data 14
+touch comment
+from :6
+M 100644 :7 a.c
+
+blob
+mark :9
+data 205
+#include <unistd.h>
+#include <stdio.h>
+
+long f(long x)
+{
+	int s = 0;
+	while (x) {
+		x >>= 1;
+		s++;
+	}
+	return s;
+}
+
+/*
+ * This is only an example!
+ */
+
+int main ()
+{
+	printf("%ld\n", f(15));
+	return 0;
+}
+
+commit refs/tags/simple
+mark :10
+author Thomas Rast <trast@student.ethz.ch> 1362044860 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044860 +0100
+data 25
+change at very beginning
+from :8
+M 100644 :9 a.c
+
+blob
+mark :11
+data 204
+#include <unistd.h>
+#include <stdio.h>
+
+long f(long x)
+{
+	int s = 0;
+	while (x) {
+		x >>= 1;
+		s++;
+	}
+	return s;
+}
+
+/*
+ * This is only an example!
+ */
+
+int main ()
+{
+	printf("%ld\n", f(15));
+	return 0;
+}
+commit refs/tags/simple
+mark :12
+author Thomas Rast <trast@student.ethz.ch> 1362044890 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044890 +0100
+data 36
+change to an incomplete line at end
+from :10
+M 100644 :11 a.c
+
+blob
+mark :13
+data 238
+#include <unistd.h>
+#include <stdio.h>
+
+long f(long x)
+{
+	int s = 0;
+	while (x) {
+		x >>= 1;
+		s++;
+	}
+	return s;
+}
+
+/*
+ * This is only an example!
+ */
+
+int main ()
+{
+	printf("%ld\n", f(15));
+	return 0;
+}
+
+/* incomplete lines are bad! */
+
+commit refs/tags/simple
+mark :14
+author Thomas Rast <trast@student.ethz.ch> 1362044923 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044923 +0100
+data 29
+change back to complete line
+from :12
+M 100644 :13 a.c
+
+commit refs/tags/move-support
+mark :15
+author Thomas Rast <trast@student.ethz.ch> 1362044968 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044968 +0100
+data 10
+move file
+from :14
+D a.c
+M 100644 :13 b.c
+
+blob
+mark :16
+data 237
+#include <unistd.h>
+#include <stdio.h>
+
+long f(long x)
+{
+	int s = 0;
+	while (x) {
+		x /= 2;
+		s++;
+	}
+	return s;
+}
+
+/*
+ * This is only an example!
+ */
+
+int main ()
+{
+	printf("%ld\n", f(15));
+	return 0;
+}
+
+/* incomplete lines are bad! */
+
+commit refs/tags/move-support
+mark :17
+author Thomas Rast <trast@student.ethz.ch> 1362044990 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362044990 +0100
+data 22
+another simple change
+from :15
+M 100644 :16 b.c
+
+blob
+mark :18
+data 254
+#include <unistd.h>
+#include <stdio.h>
+
+long f(long x);
+
+/*
+ * This is only an example!
+ */
+
+int main ()
+{
+	printf("%ld\n", f(15));
+	return 0;
+}
+
+/* incomplete lines are bad! */
+
+long f(long x)
+{
+	int s = 0;
+	while (x) {
+		x /= 2;
+		s++;
+	}
+	return s;
+}
+
+commit refs/heads/master
+mark :19
+author Thomas Rast <trast@student.ethz.ch> 1362045024 +0100
+committer Thomas Rast <trast@student.ethz.ch> 1362045024 +0100
+data 21
+move within the file
+from :17
+M 100644 :18 b.c
+
+reset refs/heads/master
+from :19
+