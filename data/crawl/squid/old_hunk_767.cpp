{
    static MemBuf buf;
    buf.reset();
    buf.Printf(" [request->requestId %u]", request->requestId);
    buf.terminate();
    return buf.content();
}