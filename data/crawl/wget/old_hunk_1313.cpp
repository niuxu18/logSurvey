                      logprintf (LOG_NONVERBOSE, 
                                 _("%s URL:%s %2d %s\n"), 
                                 tms, u->url, hstat.statcode,
                                 hstat.message ? escnonprint (hstat.message) : "");
                      goto exit;
                    }
                }
src/ChangeLog |  5 +++++
src/ftp.c     | 10 ++++++++--
2 files changed, 13 insertions(+), 2 deletions(-)
