 				&update->type,
 				err);
 		if (!update->lock) {
+			char *reason;
+
 			ret = (errno == ENOTDIR)
 				? TRANSACTION_NAME_CONFLICT
 				: TRANSACTION_GENERIC_ERROR;
-			error("%s", err->buf);
-			strbuf_reset(err);
-			strbuf_addf(err, "Cannot lock the ref '%s'.",
-				    update->refname);
+			reason = strbuf_detach(err, NULL);
+			strbuf_addf(err, "Cannot lock the ref '%s': %s",
+				    update->refname, reason);
+			free(reason);
 			goto cleanup;
 		}
 	}