 
       /* Make the new variable context current and define the variable.  */
       current_variable_set_list = vlist;
-      v = try_variable_definition (flocp, defn, origin);
+      v = try_variable_definition (flocp, defn, origin, 1);
       if (!v)
         error (flocp, _("Malformed per-target variable definition"));
       v->per_target = 1;
