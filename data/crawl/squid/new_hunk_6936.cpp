    struct node *np, *root, *oldnp = NULL;

    type = get_token(fp, token);
    if (type != EQUALS) {
	print_error("Bad format", token, type);
	return 0;
    }
    if ((length = getoid(fp, oid, 32)) != 0) {
	np = root = (struct node *) Malloc(sizeof(struct node));
	bzero((char *) np, sizeof(struct node));
	/*
	 * For each parent-child subid pair in the subid array,
	 * create a node and link it into the node list.
	 */
	for (count = 0, op = oid, nop = oid + 1; count < (length - 2); count++,
	    op++, nop++) {
	    /* every node must have parent's name and child's name or number */
	    if (op->label && (nop->label || (nop->subid != -1))) {
		strcpy(np->parent, op->label);
		if (nop->label)
		    strcpy(np->label, nop->label);
