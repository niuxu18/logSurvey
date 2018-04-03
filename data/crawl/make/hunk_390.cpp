               struct nameseq *next = files->next;
               const char *name = files->name;
               struct dep *deps;
-              void *dlp;
 
               free_ns (files);
               files = next;
 
-              if (! load_file (&ebuf->floc, &name, noerror, &dlp) && ! noerror)
+              if (! load_file (&ebuf->floc, &name, noerror) && ! noerror)
                 fatal (&ebuf->floc, _("%s: failed to load"), name);
 
               deps = alloc_dep ();
