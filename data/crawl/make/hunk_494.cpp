                         FILE_TIMESTAMP mtime;
                         /* The update failed and this makefile was not
                            from the MAKEFILES variable, so we care.  */
-                        error (NILF, _("Failed to remake makefile `%s'."),
+                        error (NILF, _("Failed to remake makefile '%s'."),
                                d->file->name);
                         mtime = file_mtime_no_search (d->file);
                         any_remade |= (mtime != NONEXISTENT_MTIME
