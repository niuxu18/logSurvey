    AsyncCall::Pointer call = commCbCall(33, 5, "ClientSocketContext::wroteControlMsg",
                                         CommIoCbPtrFun(&WroteControlMsg, this));

    getConn()->writeControlMsgAndCall(this, rep.getRaw(), call);
}

/// called when we wrote the 1xx response
