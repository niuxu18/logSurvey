        if (node->negative_ttl != node->ttl)
            storeAppendPrintf(sentry, " negative_ttl=%d", node->negative_ttl);

        if (node->children != DEFAULT_EXTERNAL_ACL_CHILDREN)
            storeAppendPrintf(sentry, " children=%d", node->children);

        if (node->concurrency)
            storeAppendPrintf(sentry, " concurrency=%d", node->concurrency);

        for (format = node->format; format; format = format->next) {
            switch (format->type) {

