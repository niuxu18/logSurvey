commit 4659538844daa2849b1a9e7d6fadb96fcd26fc83
Author: Thomas Rast <trast@student.ethz.ch>
Date:   Thu Feb 28 10:48:43 2013 +0100

    change back to complete line

diff --git a/a.c b/a.c
--- a/a.c
@@ -18,5 +18,5 @@
 int main ()
 {
 	printf("%ld\n", f(15));
 	return 0;
-}
\ No newline at end of file

commit 100b61a6f2f720f812620a9d10afb3a960ccb73c
Author: Thomas Rast <trast@student.ethz.ch>
Date:   Thu Feb 28 10:48:10 2013 +0100

    change to an incomplete line at end

diff --git a/a.c b/a.c
--- a/a.c
@@ -18,5 +18,5 @@
 int main ()
 {
 	printf("%ld\n", f(15));
 	return 0;
-}
\ No newline at end of file

commit a6eb82647d5d67f893da442f8f9375fd89a3b1e2
Author: Thomas Rast <trast@student.ethz.ch>
Date:   Thu Feb 28 10:45:16 2013 +0100

    touch both functions

diff --git a/a.c b/a.c
--- a/a.c
@@ -3,9 +3,9 @@
-int f(int x)
 {
 	int s = 0;
 	while (x) {
 		x >>= 1;
 		s++;
 	}
 	return s;
 }
@@ -17,5 +17,5 @@
 int main ()
 {
-	printf("%d\n", f(15));
 	return 0;
 }

commit f04fb20f2c77850996cba739709acc6faecc58f7
Author: Thomas Rast <trast@student.ethz.ch>
Date:   Thu Feb 28 10:44:55 2013 +0100

    change f()

diff --git a/a.c b/a.c
--- a/a.c
@@ -3,8 +3,9 @@
 int f(int x)
 {
 	int s = 0;
 	while (x) {
 		x >>= 1;
 		s++;
 	}
 }

commit de4c48ae814792c02a49c4c3c0c757ae69c55f6a
Author: Thomas Rast <trast@student.ethz.ch>
Date:   Thu Feb 28 10:44:48 2013 +0100

    initial

diff --git a/a.c b/a.c
--- /dev/null
@@ -0,0 +3,8 @@
