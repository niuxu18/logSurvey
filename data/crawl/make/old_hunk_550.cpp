	}
#endif /* !NO_ARCHIVES */

      switch (glob (name, GLOB_NOSORT|GLOB_ALTDIRFUNC, NULL, &gl))
	{
	case GLOB_NOSPACE:
	  fatal (NILF, _("virtual memory exhausted"));

	case 0:
          /* Success.  */
          i = gl.gl_pathc;
          nlist = (const char **)gl.gl_pathv;
          break;

        case GLOB_NOMATCH:
          /* If we want only existing items, skip this one.  */
          if (flags & PARSEFS_EXISTS)
            {
              i = 0;
              break;
            }
          /* FALLTHROUGH */

	default:
          /* By default keep this name.  */
          i = 1;
          nlist = &name;
          break;
	}

      /* For each matched element, add it to the list.  */
      while (i-- > 0)
