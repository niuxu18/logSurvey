    }

    secure.updateTlsVersionLimits();
    secure.staticContext.reset(sslCreateServerContext(*this));

    if (!secure.staticContext) {
        char buf[128];
        fatalf("%s_port %s initialization error", AnyP::ProtocolType_str[transport.protocol], s.toUrl(buf, sizeof(buf)));
    }
}
#endif
