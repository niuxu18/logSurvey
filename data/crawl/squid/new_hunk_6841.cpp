

static void
dump_denyinfo(StoreEntry * entry, const char *name, acl_deny_info_list *var)
{
    storeAppendPrintf(entry, "%s -- UNIMPLEMENTED\n", name);
}

static void
parse_denyinfo(acl_deny_info_list **var)
{
    aclParseDenyInfoLine(var);
}

void
free_denyinfo(acl_deny_info_list ** list)
{
    acl_deny_info_list *a = NULL;
    acl_deny_info_list *a_next = NULL;
    acl_name_list *l = NULL;
    acl_name_list *l_next = NULL;
    for (a = *list; a; a = a_next) {
	for (l = a->acl_list; l; l = l_next) {
	    l_next = l->next;
