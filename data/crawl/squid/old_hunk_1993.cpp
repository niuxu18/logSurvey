}

static void
dump_denyinfo(StoreEntry * entry, const char *name, acl_deny_info_list * var)
{
    acl_name_list *a;

    while (var != NULL) {
        storeAppendPrintf(entry, "%s %s", name, var->err_page_name);
