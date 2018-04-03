catchSignal(int sig)
{
    interrupted = 1;
    std::cerr << "SIGNAL " << sig << " Interrupted." << std::endl;
}

void
pipe_handler(int sig)
{
    std::cerr << "SIGPIPE received." << std::endl;
}

static void
set_our_signal(void)
{
#if HAVE_SIGACTION
    struct sigaction sa;
    sa.sa_handler = pipe_handler;
    sa.sa_flags = SA_RESTART;
    sigemptyset(&sa.sa_mask);

    if (sigaction(SIGPIPE, &sa, NULL) < 0) {
        std::cerr << "ERROR: Cannot set PIPE signal." << std::endl;
        exit(-1);
    }
#else
    signal(SIGPIPE, pipe_handler);
#endif
}

static ssize_t
