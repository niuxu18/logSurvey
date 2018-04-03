        debugs(57, 9, "packing sline " << this << " using " << p << ":");
        debugs(57, 9, "FORMAT=" << IcyStatusLineFormat );
        debugs(57, 9, "ICY " << status() << " " << reason());
        p->appendf(IcyStatusLineFormat, status(), reason());
        return;
    }

    debugs(57, 9, "packing sline " << this << " using " << p << ":");
    debugs(57, 9, "FORMAT=" << Http1StatusLineFormat );
    debugs(57, 9, "HTTP/" << version.major << "." << version.minor << " " << status() << " " << reason());
    p->appendf(Http1StatusLineFormat, version.major, version.minor, status(), reason());
}

/*