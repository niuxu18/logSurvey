 			}
 			goto retry;
 		} else {
-			error("unable to move logfile tmp-renamed-log to logs/%s: %s",
+			error("unable to move logfile "TMP_RENAMED_LOG" to logs/%s: %s",
 				newref, strerror(errno));
 			goto rollback;
 		}
