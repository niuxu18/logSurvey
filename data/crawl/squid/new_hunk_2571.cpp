        storeAppendPrintf(s, "Connection: %p\n", conn);

        if (conn != NULL) {
            const int fd = conn->clientConnection->fd;
            storeAppendPrintf(s, "\tFD %d, read %"PRId64", wrote %"PRId64"\n", fd,
                              fd_table[fd].bytes_read, fd_table[fd].bytes_written);
            storeAppendPrintf(s, "\tFD desc: %s\n", fd_table[fd].desc);
            storeAppendPrintf(s, "\tin: buf %p, offset %ld, size %ld\n",
                              conn->in.buf, (long int) conn->in.notYetUsed, (long int) conn->in.allocatedSize);
            storeAppendPrintf(s, "\tremote: %s\n",
                              conn->clientConnection->remote.ToURL(buf,MAX_IPSTRLEN));
            storeAppendPrintf(s, "\tlocal: %s\n",
                              conn->clientConnection->local.ToURL(buf,MAX_IPSTRLEN));
            storeAppendPrintf(s, "\tnrequests: %d\n",
                              conn->nrequests);
        }
