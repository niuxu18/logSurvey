        debugs(47, (should_exist ? DBG_IMPORTANT : 3), aPath << " created");
        created = 1;
    } else {
        int xerrno = errno;
        fatalf("Failed to make swap directory %s: %s", aPath, xstrerr(xerrno));
    }

    return created;