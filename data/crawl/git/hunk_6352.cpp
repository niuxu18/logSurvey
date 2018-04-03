 		info = &commit_reflog->reflogs->items[commit_reflog->recno+1];
 		if (oneline) {
 			printf("%s@{", commit_reflog->reflogs->ref);
-			if (commit_reflog->flag || relative_date)
-				printf("%s", show_date(info->timestamp, 0, 1));
+			if (commit_reflog->flag || dmode)
+				printf("%s", show_date(info->timestamp,
+						       info->tz,
+						       dmode));
 			else
 				printf("%d", commit_reflog->reflogs->nr
 				       - 2 - commit_reflog->recno);
 			printf("}: %s", info->message);
 		}
 		else {
 			printf("Reflog: %s@{", commit_reflog->reflogs->ref);
-			if (commit_reflog->flag || relative_date)
+			if (commit_reflog->flag || dmode)
 				printf("%s", show_date(info->timestamp,
 							info->tz,
-							relative_date));
+							dmode));
 			else
 				printf("%d", commit_reflog->reflogs->nr
 				       - 2 - commit_reflog->recno);