                     % self.smtpserverdebuglevel)
                 self.smtp.set_debuglevel(self.smtpserverdebuglevel)
         except Exception:
-            sys.stderr.write(
+            self.environment.get_logger().error(
                 '*** Error establishing SMTP connection to %s ***\n'
-                % self.smtpserver)
-            sys.stderr.write('*** %s\n' % sys.exc_info()[1])
+                '*** %s\n'
+                % (self.smtpserver, sys.exc_info()[1]))
             sys.exit(1)
 
     def __del__(self):