

#if 0
void 
print_variable_list(variable_list * V)
{
    print_variable(V->name, V->name_length, V);
}

void 
print_variable_list_value(variable_list * pvariable)
{
    char buf[512];
    struct snmp_mib_tree *subtree = Mib;

    *buf = '.';			/* this is a fully qualified name */
    subtree = get_symbol(pvariable->name, pvariable->name_length, subtree, buf + 1);
    *buf = '\0';

    if (subtree->printer)
	(*subtree->printer) (buf, pvariable, subtree->enums, 1);
    else {
	sprint_by_type(buf, pvariable, subtree->enums, 1);
    }
    printf("%s", buf);
}
#endif

void 
print_type(variable_list * var)
{
    switch (var->type) {
    case SMI_INTEGER:
	printf("Integer");
	break;
    case SMI_STRING:
	printf("Octet String");
	break;
    case SMI_OPAQUE:
	printf("Opaque");
	break;
    case SMI_OBJID:
	printf("Object Identifier");
	break;
    case SMI_TIMETICKS:
	printf("Timeticks");
	break;
    case SMI_GAUGE32:
	printf("Gauge");
	break;
    case SMI_COUNTER32:
	printf("Counter");
	break;
    case SMI_IPADDRESS:
	printf("IP Address");
	break;
    case SMI_NULLOBJ:
	printf("NULL");
	break;
    default:
	printf("Unknown type %d\n", var->type);
	break;
    }
}

void 
print_oid_nums(oid * O, int len)
{
    int x;

    for (x = 0; x < len; x++)
	printf(".%u", O[x]);
}
