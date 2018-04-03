}

void
StoreController::updateSize(size_t size, int sign)
{
    fatal("StoreController has no independent size\n");
}

void
SwapDir::updateSize(size_t size, int sign)
{
    int blks = (size + fs.blksize - 1) / fs.blksize;
    int k = (blks * fs.blksize >> 10) * sign;
