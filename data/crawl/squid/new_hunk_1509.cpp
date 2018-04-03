    Pointer tmp = fwd; // Grab a temporary pointer to keep the object alive during our scope.

    if (Comm::IsConnOpen(fwd->serverConnection())) {
        fwd->closeServerConnection("store entry aborted");
    } else {
        debugs(17, 7, HERE << "store entry aborted; no connection to close");
    }
    fwd->serverDestinations.clear();
    fwd->self = NULL;
}

void
FwdState::closeServerConnection(const char *reason)
{
    debugs(17, 3, "because " << reason << "; " << serverConn);
    comm_remove_close_handler(serverConn->fd, fwdServerClosedWrapper, this);
    fwdPconnPool->noteUses(fd_table[serverConn->fd].pconn.uses);
    serverConn->close();
}

/**** PUBLIC INTERFACE ********************************************************/

FwdState::FwdState(const Comm::ConnectionPointer &client, StoreEntry * e, HttpRequest * r, const AccessLogEntryPointer &alp):
