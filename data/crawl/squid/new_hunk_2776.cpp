    if (max_objsize <= 0)
        fatal("Rock store requires a positive max-size");

    /* XXX: should we support resize?
    const int64_t eLimitHi = 0xFFFFFF; // Core sfileno maximum
    const int64_t eLimitLo = map->entryLimit(); // dynamic shrinking unsupported