  };
  int ok = decode_string (val, choices, countof (choices), place);
  if (!ok)
    fprintf (stderr, _("%s: %s: Invalid value `%s'.\n"), exec_name, com, val);
  return ok;
}
#endif
