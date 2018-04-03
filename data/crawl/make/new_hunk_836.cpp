void
print_dir_data_base ()
{
  register unsigned int files;
  register unsigned int impossible;
  register struct directory **dir_slot;
  register struct directory **dir_end;

  puts (_("\n# Directories\n"));

  files = impossible = 0;

  dir_slot = (struct directory **) directories.ht_vec;
  dir_end = dir_slot + directories.ht_size;
  for ( ; dir_slot < dir_end; dir_slot++)
    {
      register struct directory *dir = *dir_slot;
      if (! HASH_VACANT (dir))
	{
	  if (dir->contents == 0)
	    printf (_("# %s: could not be stat'd.\n"), dir->name);
	  else if (dir->contents->dirfiles.ht_vec == 0)
	    {
#ifdef WINDOWS32
	      printf (_("# %s (key %s, mtime %d): could not be opened.\n"),
		      dir->name, dir->contents->path_key,dir->contents->mtime);
#else  /* WINDOWS32 */
#ifdef VMS
	      printf (_("# %s (device %d, inode [%d,%d,%d]): could not be opened.\n"),
		      dir->name, dir->contents->dev,
		      dir->contents->ino[0], dir->contents->ino[1],
		      dir->contents->ino[2]);
#else
	      printf (_("# %s (device %ld, inode %ld): could not be opened.\n"),
		      dir->name, (long int) dir->contents->dev,
		      (long int) dir->contents->ino);
#endif
#endif /* WINDOWS32 */
	    }
	  else
	    {
	      register unsigned int f = 0;
	      register unsigned int im = 0;
	      register struct dirfile **files_slot;
	      register struct dirfile **files_end;

	      files_slot = (struct dirfile **) dir->contents->dirfiles.ht_vec;
	      files_end = files_slot + dir->contents->dirfiles.ht_size;
	      for ( ; files_slot < files_end; files_slot++)
		{
		  register struct dirfile *df = *files_slot;
		  if (! HASH_VACANT (df))
		    {
		      if (df->impossible)
			++im;
		      else
			++f;
		    }
		}
#ifdef WINDOWS32
	      printf (_("# %s (key %s, mtime %d): "),
		      dir->name, dir->contents->path_key, dir->contents->mtime);
#else  /* WINDOWS32 */
#ifdef VMS
	      printf (_("# %s (device %d, inode [%d,%d,%d]): "),
		      dir->name, dir->contents->dev,
		      dir->contents->ino[0], dir->contents->ino[1],
		      dir->contents->ino[2]);
#else
	      printf (_("# %s (device %ld, inode %ld): "),
		      dir->name,
		      (long)dir->contents->dev, (long)dir->contents->ino);
#endif
#endif /* WINDOWS32 */
	      if (f == 0)
		fputs (_("No"), stdout);
	      else
		printf ("%u", f);
	      fputs (_(" files, "), stdout);
	      if (im == 0)
		fputs (_("no"), stdout);
	      else
		printf ("%u", im);
	      fputs (_(" impossibilities"), stdout);
	      if (dir->contents->dirstream == 0)
		puts (".");
	      else
		puts (_(" so far."));
	      files += f;
	      impossible += im;
	    }
	}
    }

  fputs ("\n# ", stdout);
  if (files == 0)