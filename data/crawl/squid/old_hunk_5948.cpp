	    break;
	}
    }
#if STDERR_DEBUG
    fprintf(stderr, "%d diskd exiting\n", (int) mypid);
#endif
    if (msgctl(rmsgid, IPC_RMID, 0) < 0)
	perror("msgctl IPC_RMID");
    if (msgctl(smsgid, IPC_RMID, 0) < 0)