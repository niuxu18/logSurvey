        ipa = R.sin_addr;
        printf("==============================================================================\n");
        printf("Received from %s [%s]\n",
               ipa.toStr(tmp,MAX_HOSTNAMELEN),
               (hp && hp->h_name) ? hp->h_name : "Unknown");
        fputs(buf, stdout);
        fflush(stdout);