    }

  fputs ("# HTTP cookie file.\n", fp);
  fprintf (fp, "# Generated by Wget on %s.\n", datetime_str (NULL));
  fputs ("# Edit at your own risk.\n\n", fp);

  hash_table_map (jar->chains, save_cookies_mapper, fp);