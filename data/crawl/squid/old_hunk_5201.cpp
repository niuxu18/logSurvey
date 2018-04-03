    update_maxobjsize();
}

static void
parse_cachedir_option_readonly(SwapDir * sd, const char *option, const char *value, int reconfiguring)
{
    int read_only = 0;

    if (value)
        read_only = xatoi(value);
    else
        read_only = 1;

    sd->flags.read_only = read_only;
}

static void
dump_cachedir_option_readonly(StoreEntry * e, const char *option, SwapDir const * sd)
{
    if (sd->flags.read_only)
        storeAppendPrintf(e, " %s", option);
}

static void
parse_cachedir_option_maxsize(SwapDir * sd, const char *option, const char *value, int reconfiguring)
{
    ssize_t size;

    if (!value)
        self_destruct();

    size = xatoi(value);

    if (reconfiguring && sd->max_objsize != size)
        debug(3, 1) ("Cache dir '%s' max object size now %ld\n", sd->path, (long int) size);

    sd->max_objsize = size;
}

static void
dump_cachedir_option_maxsize(StoreEntry * e, const char *option, SwapDir const * sd)
{
    if (sd->max_objsize != -1)
        storeAppendPrintf(e, " %s=%ld", option, (long int) sd->max_objsize);
}

void

parse_cachedir_options(SwapDir * sd, struct cache_dir_option *options, int reconfiguring)
{
    unsigned int old_read_only = sd->flags.read_only;
    char *name, *value;

    struct cache_dir_option *option, *op;

    while ((name = strtok(NULL, w_space)) != NULL)
    {
        value = strchr(name, '=');

        if (value)
            *value++ = '\0';	/* cut on = */

        option = NULL;

        if (options) {
            for (op = options; !option && op->name; op++) {
                if (strcmp(op->name, name) == 0) {
                    option = op;
                    break;
                }
            }
        }

        for (op = common_cachedir_options; !option && op->name; op++) {
            if (strcmp(op->name, name) == 0) {
                option = op;
                break;
            }
        }

        if (!option || !option->parse)
            self_destruct();

        option->parse(sd, name, value, reconfiguring);
    }

    /*
     * Handle notifications about reconfigured single-options with no value
     * where the removal of the option cannot be easily detected in the
     * parsing...
     */
    if (reconfiguring)
    {
        if (old_read_only != sd->flags.read_only) {
            debug(3, 1) ("Cache dir '%s' now %s\n",
                         sd->path, sd->flags.read_only ? "Read-Only" : "Read-Write");
        }
    }
}

static void
free_cachedir(_SquidConfig::_cacheSwap * swap)
{
