    return ctx;
}

bool
Security::ServerOptions::createStaticServerContext(AnyP::PortCfg &port)
{
    updateTlsVersionLimits();

    Security::ContextPointer t(createBlankContext());
    if (t) {
#if USE_OPENSSL
        if (!Ssl::InitServerContext(t, port))
            return false;
#endif
        if (!loadClientCaFile())
            return false;
    }
