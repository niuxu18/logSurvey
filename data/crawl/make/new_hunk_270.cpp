  retsock = Rpc_UdpCreate (True, 0);
  if (retsock < 0)
    {
      O (error, NILF, "exporting: Couldn't create return socket.");
      return 1;
    }

