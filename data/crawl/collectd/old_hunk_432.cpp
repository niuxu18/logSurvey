    if (meta->type == NM_TYPE_STRING)
      fprintf (fh, "%s: %s\n", meta->name, meta->value_string);
    else if (meta->type == NM_TYPE_SIGNED_INT)
      fprintf (fh, "%s: %lli\n", meta->name, meta->value_signed_int);
    else if (meta->type == NM_TYPE_UNSIGNED_INT)
      fprintf (fh, "%s: %llu\n", meta->name, meta->value_unsigned_int);
    else if (meta->type == NM_TYPE_DOUBLE)
      fprintf (fh, "%s: %e\n", meta->name, meta->value_double);
    else if (meta->type == NM_TYPE_BOOLEAN)
