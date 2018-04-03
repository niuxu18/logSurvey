       */
      if (i == opt.backups)
        {
          snprintf (to, sizeof(to), "%s%s%d%s", fname, SEP, i, AVS);
          delete (to);
        }
#endif
      snprintf (to, maxlen, "%s%s%d", fname, SEP, i);
      snprintf (from, maxlen, "%s%s%d", fname, SEP, i - 1);
      if (rename (from, to))
        logprintf (LOG_NOTQUIET, "Failed to rename %s to %s: (%d) %s\n",
                   from, to, errno, strerror (errno));
    }

  snprintf (to, maxlen, "%s%s%d", fname, SEP, 1);
  if (rename(fname, to))
    logprintf (LOG_NOTQUIET, "Failed to rename %s to %s: (%d) %s\n",
               fname, to, errno, strerror (errno));
}

static bool no_proxy_match (const char *, const char **);