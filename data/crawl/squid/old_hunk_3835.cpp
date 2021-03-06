    }
}

void ICAPModXact::addLastRequestChunk(MemBuf &buf)
{
    const bool ieof = state.writing == State::writingPreview && preview.ieof();
    openChunk(buf, 0, ieof);
    closeChunk(buf);
}

void ICAPModXact::openChunk(MemBuf &buf, size_t chunkSize, bool ieof)
{
    buf.Printf((ieof ? "%x; ieof\r\n" : "%x\r\n"), (int) chunkSize);
}

void ICAPModXact::closeChunk(MemBuf &buf)
{
    buf.append(ICAP::crlf, 2); // chunk-terminating CRLF
}

// did the activity reached the end of the virgin body?
bool ICAPModXact::virginBodyEndReached(const VirginBodyAct &act) const
{
    return
        !act.active() || // did all (assuming it was originally planned)
