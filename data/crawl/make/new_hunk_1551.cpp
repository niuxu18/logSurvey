void
print_rule_data_base ()
{
  register unsigned int rules, terminal;
  register struct rule *r;
  register struct dep *d;
  register unsigned int i;

  puts ("\n# Implicit Rules");

  rules = terminal = 0;
  for (r = pattern_rules; r != 0; r = r->next)
    {
      ++rules;
