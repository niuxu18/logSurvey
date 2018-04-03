
    /* Initiate aio */
    if (aio_write(&qe->aq_e_aiocb) < 0) {
        int xerrno = errno;
        fatalf("Aiee! aio_write() returned error (%d) FIXME and wrap file_write !\n", xerrno);
        debugs(79, DBG_IMPORTANT, "WARNING: aio_write() returned error: " << xstrerr(xerrno));
        /* fall back to blocking method */
        //       file_write(fd, offset, buf, len, callback, data, freefunc);
    }
