                kid->stop(status);
                if (kid->calledExit()) {
                    syslog(LOG_NOTICE,
                           "Squid Parent: %s process %d exited with status %d",
                           kid->name().termedBuf(),
                           kid->getPid(), kid->exitStatus());
                } else if (kid->signaled()) {
                    syslog(LOG_NOTICE,
                           "Squid Parent: %s process %d exited due to signal %d with status %d",
                           kid->name().termedBuf(),
                           kid->getPid(), kid->termSignal(), kid->exitStatus());
                } else {
                    syslog(LOG_NOTICE, "Squid Parent: %s process %d exited",
                           kid->name().termedBuf(), kid->getPid());
                }
                if (kid->hopeless()) {
                    syslog(LOG_NOTICE, "Squid Parent: %s process %d will not"
                           " be restarted due to repeated, frequent failures",
                           kid->name().termedBuf(), kid->getPid());
                }
            } else {
                syslog(LOG_NOTICE, "Squid Parent: unknown child process %d exited", pid);