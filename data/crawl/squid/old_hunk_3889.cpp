{
    typedef Groups::iterator GI;
    for (GI i = AllGroups().begin(); i != AllGroups().end(); ++i)
        storeAppendPrintf(entry, "%s %.*s\n", name, (*i)->id.psize(), (*i)->id.rawBuf());
}

void
