      else if (f->type == FT_SYMLINK)
	fprintf (fp, "-> %s", f->linkto ? f->linkto : "(nil)");
      putc ('\n', fp);
      xfree (htclfile);
      f = f->next;
    }
  fprintf (fp, "</pre>\n</body>\n</html>\n");
  xfree (upwd);
  if (!opt.dfp)
    fclose (fp);
  else
