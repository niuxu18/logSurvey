    errorStateFree(error);
    entry->flush();
    entry->complete();

    mustStop(reason);
}

void
Mgr::Forwarder::callException(const std::exception& e)
{
    try {
        if (entry != NULL && request != NULL && fd >= 0)
            quitOnError("exception", errorCon(ERR_INVALID_RESP, HTTP_INTERNAL_SERVER_ERROR, request));
    } catch (const std::exception& ex) {
        debugs(16, DBG_CRITICAL, HERE << ex.what());
    }
    AsyncJob::callException(e);
}

/// returns and forgets the right Forwarder callback for the request
AsyncCall::Pointer
Mgr::Forwarder::DequeueRequest(unsigned int requestId)
{
    debugs(16, 3, HERE);
    Must(requestId != 0);
    AsyncCall::Pointer call;
    RequestsMap::iterator request = TheRequestsMap.find(requestId);
    if (request != TheRequestsMap.end()) {
        call = request->second;
        Must(call != NULL);
        TheRequestsMap.erase(request);
    }
    return call;
}

/// called when we are no longer waiting for Coordinator to respond
void
Mgr::Forwarder::removeTimeoutEvent()
{
    if (eventFind(&Forwarder::RequestTimedOut, this))
        eventDelete(&Forwarder::RequestTimedOut, this);
}

void
Mgr::Forwarder::HandleRemoteAck(unsigned int requestId)
{
    debugs(16, 3, HERE);
    Must(requestId != 0);

    AsyncCall::Pointer call = DequeueRequest(requestId);
    if (call != NULL)
        ScheduleCallHere(call);
}

/// called when something goes wrong with the Store entry
void
Mgr::Forwarder::Abort(void* param)
{
    Forwarder* mgrFwdr = static_cast<Forwarder*>(param);
    if (mgrFwdr->fd >= 0)
        comm_close(mgrFwdr->fd);
}
