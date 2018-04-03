      return;
    }

  error (NILF, l + INTSTR_LENGTH,
         _("%s[%s] Error 0x%x%s"), pre, f->name, exit_code, post);
#else
  if (exit_sig == 0)
    error (NILF, l + INTSTR_LENGTH,
           _("%s[%s] Error %d%s"), pre, f->name, exit_code, post);
  else
    {
      const char *s = strsignal (exit_sig);
      error (NILF, l + strlen (s) + strlen (dump),
             _("%s[%s] %s%s%s"), pre, f->name, s, dump, post);
    }
#endif /* VMS */

