    FH = fopen(filename, "r");
    if ( FH ) {
        /* the pointer to the first entry in the linked list */
        unsigned int lineCount = 0;
        while (fgets(line, sizeof(line), FH)) {
            ++lineCount;
            if (line[0] == '#') {
                continue;
            }
            if ((cp = strchr (line, '\n')) != NULL) {
                /* chop \n characters */
                *cp = '\0';
            }
            log_debug("read config line %u: \"%s\".\n", lineCount, line);
            if ((username = strtok(line, "\t ")) != NULL) {

                /* get the time budget */
                if ((budget = strtok(NULL, "/")) == NULL) {
                    fprintf(stderr, "ERROR: missing 'budget' field on line %u of '%s'.\n", lineCount, filename);
                    continue;
                }
                if ((period = strtok(NULL, "/")) == NULL) {
                    fprintf(stderr, "ERROR: missing 'period' field on line %u of '%s'.\n", lineCount, filename);
                    continue;
                }

                parseTime(budget, &budgetSecs, &start);
                parseTime(period, &periodSecs, &start);