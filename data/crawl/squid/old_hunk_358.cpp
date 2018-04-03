    scheduleReadControlReply(1);
}

/**
 * Quickly abort the transaction
 *
 \todo destruction should be sufficient as the destructor should cleanup,
 * including canceling close handlers
 */
void
Ftp::Client::abortAll(const char *reason)
{
    debugs(9, 3, "aborting transaction for " << reason <<
           "; FD " << (ctrl.conn!=NULL?ctrl.conn->fd:-1) << ", Data FD " << (data.conn!=NULL?data.conn->fd:-1) << ", this " << this);
    if (Comm::IsConnOpen(ctrl.conn)) {
        ctrl.conn->close();
        return;
    }

    fwd->handleUnregisteredServerEnd();
    mustStop("Ftp::Client::abortTransaction");
}

/**