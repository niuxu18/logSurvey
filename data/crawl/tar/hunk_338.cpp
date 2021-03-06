       union block *data_block = find_next_block ();
       if (! data_block)
 	{
-	  ERROR ((0, 0, _("Unexpected EOF on archive file")));
+	  ERROR ((0, 0, _("Unexpected EOF in archive")));
 	  return;
 	}
       if (lseek (fd, sparsearray[sparse_ind].offset, SEEK_SET) < 0)
 	{
-	  char buf[UINTMAX_STRSIZE_BOUND];
-	  int e = errno;
-	  ERROR ((0, e, _("%s: lseek error at byte %s"),
-		  quotearg_colon (name),
-		  STRINGIFY_BIGINT (sparsearray[sparse_ind].offset, buf)));
+	  seek_error_details (name, sparsearray[sparse_ind].offset);
 	  return;
 	}
       written = sparsearray[sparse_ind++].numbytes;
