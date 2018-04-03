
#endif

#if XMALLOC_TRACE && !HAVE_MALLOCBLKSIZE
size_t
xmallocblksize(void *p)
{
    int B, I;
    B = DBG_HASH_BUCKET(p);

    for (I = 0; I < DBG_ARRY_SZ; ++I) {
        if (malloc_ptrs[B][I] == p)
            return malloc_size[B][I];
    }

    return 0;
}

#endif

#ifdef XMALLOC_TRACE
static char *
malloc_file_name(void *p)
{
    int B, I;
    B = DBG_HASH_BUCKET(p);

    for (I = 0; I < DBG_ARRY_SZ; ++I) {
        if (malloc_ptrs[B][I] == p)
            return malloc_file[B][I];
    }

    return 0;
}

int
malloc_line_number(void *p)
{
    int B, I;
    B = DBG_HASH_BUCKET(p);

    for (I = 0; I < DBG_ARRY_SZ; ++I) {
        if (malloc_ptrs[B][I] == p)
            return malloc_line[B][I];
    }

    return 0;
}

int
malloc_number(void *p)
{
    int B, I;
    B = DBG_HASH_BUCKET(p);

    for (I = 0; I < DBG_ARRY_SZ; ++I) {
        if (malloc_ptrs[B][I] == p)
            return malloc_count[B][I];
    }

    return 0;
}

static void
xmalloc_show_trace(void *p, int sign)
{
    int statMemoryAccounted();
    static size_t last_total = 0, last_accounted = 0, last_mallinfo = 0;
    size_t accounted = statMemoryAccounted();
    size_t mi = 0;
    size_t sz;
#if HAVE_MALLINFO

    struct mallinfo mp = mallinfo();
    mi = mp.uordblks + mp.usmblks + mp.hblkhd;
#endif

    sz = xmallocblksize(p) * sign;
    xmalloc_total += sz;
    xmalloc_count += sign > 0;

    if (xmalloc_trace) {
        fprintf(stderr, "%c%8p size=%5d/%d acc=%5d/%d mallinfo=%5d/%d %s:%d %s",
                sign > 0 ? '+' : '-', p,
                (int) xmalloc_total - last_total, (int) xmalloc_total,
                (int) accounted - last_accounted, (int) accounted,
                (int) mi - last_mallinfo, (int) mi,
                xmalloc_file, xmalloc_line, xmalloc_func);

        if (sign < 0)
            fprintf(stderr, " (%d %s:%d)\n", malloc_number(p), malloc_file_name(p), malloc_line_number(p));
        else
            fprintf(stderr, " %d\n", xmalloc_count);
    }

    last_total = xmalloc_total;
    last_accounted = accounted;
    last_mallinfo = mi;
}

short malloc_refs[DBG_ARRY_BKTS][DBG_ARRY_SZ];
#define XMALLOC_LEAK_ALIGN (4)
static void
xmalloc_scan_region(void *start, int size, int depth)
{
    int B, I;
    char *ptr = start;
    char *end = ptr + size - XMALLOC_LEAK_ALIGN;
    static int sum = 0;

    while (ptr <= end) {
        void *p = *(void **) ptr;

        if (p && p != start) {
            B = DBG_HASH_BUCKET(p);

            for (I = 0; I < DBG_ARRY_SZ; ++I) {
                if (malloc_ptrs[B][I] == p) {
                    if (!malloc_refs[B][I]++) {
                        /* A new reference */
                        fprintf(stderr, "%*s%p %s:%d size %d allocation %d\n",
                                depth, "",
                                malloc_ptrs[B][I], malloc_file[B][I],
                                malloc_line[B][I], malloc_size[B][I],
                                malloc_count[B][I]);
                        sum += malloc_size[B][I];
                        xmalloc_scan_region(malloc_ptrs[B][I], malloc_size[B][I], depth + 1);

                        if (depth == 0) {
                            if (sum != malloc_size[B][I])
                                fprintf(stderr, "=== %d bytes\n", sum);

                            sum = 0;
                        }

#if XMALLOC_SHOW_ALL_REFERENCES

                    } else {
                        /* We have already scanned this pointer... */
                        fprintf(stderr, "%*s%p %s:%d size %d allocation %d ... (%d)\n",
                                depth * 2, "",
                                malloc_ptrs[B][I], malloc_file[B][I],
                                malloc_line[B][I], malloc_size[B][I],
                                malloc_count[B][I], malloc_refs[B][I]);
#endif

                    }
                }
            }
        }

        ptr += XMALLOC_LEAK_ALIGN;
    }
}

void
xmalloc_find_leaks(void)
{
    int B, I;
    int leak_sum = 0;

    extern void _etext;
    fprintf(stderr, "----- Memory map ----\n");
    xmalloc_scan_region(&_etext, (void *) sbrk(0) - (void *) &_etext, 0);

    for (B = 0; B < DBG_ARRY_BKTS; ++B) {
        for (I = 0; I < DBG_ARRY_SZ; ++I) {
            if (malloc_ptrs[B][I] && malloc_refs[B][I] == 0) {
                /* Found a leak... */
                fprintf(stderr, "Leak found: %p", malloc_ptrs[B][I]);
                fprintf(stderr, " %s", malloc_file[B][I]);
                fprintf(stderr, ":%d", malloc_line[B][I]);
                fprintf(stderr, " size %d", malloc_size[B][I]);
                fprintf(stderr, " allocation %d\n", malloc_count[B][I]);
                leak_sum += malloc_size[B][I];
            }
        }
    }

    if (leak_sum) {
        fprintf(stderr, "Total leaked memory: %d\n", leak_sum);
    } else {
        fprintf(stderr, "No memory leaks detected\n");
    }

    fprintf(stderr, "----------------------\n");
}

#endif /* XMALLOC_TRACE */
