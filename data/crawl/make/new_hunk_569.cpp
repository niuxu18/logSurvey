          break;
      else
          fprintf(stderr,
                  _("make reaped child pid %Iu, still waiting for pid %Iu\n"),
                  (DWORD_PTR)hWaitPID, (DWORD_PTR)hPID);
    }

  /* return child's exit code as our exit code */
