
    outputBuffer.append(" [", 2);

    outputBuffer.appendf("%" PRIu64 "<=%" PRIu64, theGetSize, thePutSize);
    if (theBodySize >= 0)
        outputBuffer.appendf("<=%" PRId64, theBodySize);
    else
        outputBuffer.append("<=?", 3);

    outputBuffer.appendf(" %u+%u", theBuf.contentSize(), theBuf.spaceSize());

    outputBuffer.appendf(" pipe%p", this);
    if (theProducer.set())
        outputBuffer.appendf(" prod%p", theProducer.get());
    if (theConsumer.set())
        outputBuffer.appendf(" cons%p", theConsumer.get());

    if (mustAutoConsume)
        outputBuffer.append(" A", 2);
