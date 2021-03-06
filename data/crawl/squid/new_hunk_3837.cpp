        parseBody();
}

void Adaptation::Icap::ModXact::callException(const std::exception &e)
{
    if (!canStartBypass || isRetriable) {
        Adaptation::Icap::Xaction::callException(e);
        return;
    }

    try {
        debugs(93, 3, "bypassing Adaptation::Icap::ModXact::" << inCall << " exception: " <<
               e.what() << ' ' << status());
        bypassFailure();
    } catch (const std::exception &bypassE) {
        Adaptation::Icap::Xaction::callException(bypassE);
    }
}

void Adaptation::Icap::ModXact::bypassFailure()
{
    disableBypass("already started to bypass");

