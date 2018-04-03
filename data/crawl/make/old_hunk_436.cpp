
/* This is the function registered with make  */
static char *
func_guile (char *o, char **argv, const char *funcname UNUSED)
{
  if (argv[0] && argv[0][0] != '\0')
    {
      char *str = scm_with_guile (internal_guile_eval, argv[0]);
      if (str)
        {
          o = variable_buffer_output (o, str, strlen (str));
          free (str);
        }
    }

  return o;
}

/* ----- Public interface ----- */
