    print "Finding tests...\n";
    opendir (SCRIPTDIR, $scriptpath)
	|| &error ("Couldn't opendir $scriptpath: $!\n");
    @dirs = readdir (SCRIPTDIR);
    closedir (SCRIPTDIR);
    foreach $dir (@dirs)
    {
