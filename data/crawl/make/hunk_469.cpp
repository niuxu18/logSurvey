       if (!v->exp_count)
         /* Expanding V causes infinite recursion.  Lose.  */
         fatal (*expanding_var,
-               _("Recursive variable `%s' references itself (eventually)"),
+               _("Recursive variable '%s' references itself (eventually)"),
                v->name);
       --v->exp_count;
     }
