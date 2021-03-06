  if (num_pattern_rules != rules)
    fatal ("BUG: num_pattern_rules wrong!  %u != %u",
	   num_pattern_rules, rules);

  puts ("\n# Pattern-specific variable values");

  {
    struct pattern_var *p;

    rules = 0;
    for (p = pattern_vars; p != 0; p = p->next)
      {
        ++rules;

        printf ("\n%s :\n", p->target);
        print_variable_set (p->vars->set, "# ");
      }

    if (rules == 0)
      puts ("\n# No pattern-specific variable values.");
    else
      {
        printf ("\n# %u pattern-specific variable values", rules);
      }
  }
}
