
        String ctype=(reply->content_type.size() ? reply->content_type.termedBuf() : str_unknown);

        logfilePrintf(storelog, "%9d.%03d %-7s %02d %08X %s %4d %9d %9d %9d " SQUIDSTRINGPH " %"PRId64"/%"PRId64" %s %s\n",
                      (int) current_time.tv_sec,
                      (int) current_time.tv_usec / 1000,
