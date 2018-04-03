void
Rock::SwapDir::ioCompletedNotification()
{
    if (!theFile)
        fatalf("Rock cache_dir failed to initialize db file: %s", filePath);

    if (theFile->error())
        fatalf("Rock cache_dir at %s failed to open db file: %s", filePath,
               xstrerror());

    debugs(47, 2, "Rock cache_dir[" << index << "] limits: " <<
        std::setw(12) << maxSize() << " disk bytes and " <<
        std::setw(7) << map->entryLimit() << " entries");

