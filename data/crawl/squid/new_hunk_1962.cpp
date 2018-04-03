    static int DoneReadFD;
};

/* Inline code. TODO: make structured approach to inlining */
void
CommIO::NotifyIOCompleted()
{
    if (!Initialised) {
        fatalf("Disk Threads I/O pipes not initialized before first use.");
    }

    if (!DoneSignalled) {
        DoneSignalled = true;
