}

void
Fs::Ufs::UFSSwapDir::optionIODump(StoreEntry * e) const
{
    storeAppendPrintf(e, " IOEngine=%s", ioType);
}

ConfigOption *
Fs::Ufs::UFSSwapDir::getOptionTree() const
{
    ConfigOption *parentResult = SwapDir::getOptionTree();

