}

/* calls memBufVPrintf */
void
MemBuf::Printf(const char *fmt,...)
{
    va_list args;
    va_start(args, fmt);
    vPrintf(fmt, args);
    va_end(args);
}