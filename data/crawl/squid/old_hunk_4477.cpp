            fprintf(fp, "#\n");

        for (line = entry->nocomment; line != NULL; line = line->next) {
            fprintf(fp, "%s\n", line->data);
        }

        if (entry->doc != NULL) {