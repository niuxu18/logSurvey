         token on the next line. */
      if (remaining_chars <= strlen (token)) 
        {
          printf ("\n%*c", leading_spaces, ' ');
          remaining_chars = line_length - leading_spaces;
        }
      printf ("%s ", token);
