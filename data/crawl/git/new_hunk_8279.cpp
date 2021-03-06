        if not files:
            return

        # We cannot put all the files on the command line
        # OS have limitations on the max lenght of arguments
        # POSIX says it's 4096 bytes, default for Linux seems to be 130 K.
        # and all OS from the table below seems to be higher than POSIX.
        # See http://www.in-ulm.de/~mascheck/various/argmax/
        argmax = min(4000, os.sysconf('SC_ARG_MAX'))
        chunk = ''
        filedata = []
        for i in xrange(len(files)):
            f = files[i]
            chunk += '"%s#%s" ' % (f['path'], f['rev'])
            if len(chunk) > argmax or i == len(files)-1:
                data = p4CmdList('print %s' % chunk)
                if "p4ExitCode" in data[0]:
                    die("Problems executing p4. Error: [%d]." % (data[0]['p4ExitCode']));
                filedata.extend(data)
                chunk = ''

        j = 0;
        contents = {}