 
     def start(self):
         if len(self.config) > 0 and not self.reset:
-            die("Cannot start sync. Previous sync config found at %s" % self.configFile)
+            die("Cannot start sync. Previous sync config found at %s\nIf you want to start submitting again from scratch maybe you want to call git-p4 submit --reset" % self.configFile)
 
         commits = []
         for line in mypopen("git rev-list --no-merges %s..%s" % (self.origin, self.master)).readlines():