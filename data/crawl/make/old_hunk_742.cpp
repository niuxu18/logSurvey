	 ignoring anything, since they control what we will do with
	 following lines.  */

      if (!in_ignored_define
	  && (word1eq ("ifdef") || word1eq ("ifndef")
	      || word1eq ("ifeq") || word1eq ("ifneq")
	      || word1eq ("else") || word1eq ("endif")))
	{
 	  int i = conditional_line (p, fstart);
	  if (i < 0)
	    fatal (fstart, _("invalid syntax in conditional"));

          ignoring = i;
	  continue;
	}

      if (word1eq ("endef"))
