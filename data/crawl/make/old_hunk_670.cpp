void
print_dir_data_base (void)
{
  register unsigned int files;
  register unsigned int impossible;
  register struct directory **dir_slot;
  register struct directory **dir_end;

  puts (_("\n# Directories\n"));

