    // we may need to send: hex-chunk-size CRLF raw-data CRLF last-chunk
    buf.init(16 + 2 + rawDataSize + 2 + 5, raw.max_capacity);

    buf.Printf("%"PRIX64"\r\n", rawDataSize);
    buf.append(raw.content(), rawDataSize);
    buf.Printf("\r\n");
