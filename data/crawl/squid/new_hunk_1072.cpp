{}

void
Store::unlink(StoreEntry &)
{
    fatal("Store::unlink on invalid Store\n");
}

void *
StoreEntry::operator new (size_t bytecount)
{
    assert(bytecount == sizeof (StoreEntry));

    if (!pool) {
        pool = memPoolCreate ("StoreEntry", bytecount);
