	    storeAppendPrintf(entry, "%s 0x%02X", name, l->tos);
	else
	    storeAppendPrintf(entry, "%s none", name);
	dump_acl_list(entry, l->acl_list);
	storeAppendPrintf(entry, "\n");
    }
}
