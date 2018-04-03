
/// check FD after clientHttp[s]ConnectionOpened, adjust HttpSockets as needed
static bool
OpenedHttpSocket(int fd, const Ipc::FdNoteId portType)
{
    if (fd < 0) {
        Must(NHttpSockets > 0); // we tried to open some
        --NHttpSockets; // there will be fewer sockets than planned
        Must(HttpSockets[NHttpSockets] < 0); // no extra fds received

        if (!NHttpSockets) // we could not open any listen sockets at all
            fatalf("Unable to open %s",FdNote(portType));

        return false;
    }
