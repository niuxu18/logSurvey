	    printf ("# %s (device %d, inode %d): ",
		    dir->name, dir->contents->dev, dir->contents->ino);
#endif
#endif /* WINDOWS32 */
	    if (f == 0)
	      fputs ("No", stdout);
	    else