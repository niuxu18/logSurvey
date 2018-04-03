    init_stats();

    while (fgets(mbuf, 256, fp)!=NULL) {
#if RUNTIME_STATSA
	a++;
	if (a%20000==0) print_stats();
#endif
	p=NULL;
	switch(mbuf[0]) {
	case 'm': /* malloc */
	   p=strtok(&mbuf[2],":");
	   if (!p) badformat();
	   size=atoi(p);
	   p=strtok(NULL,"\n");
	   if (!p) badformat();
	   mi=malloc(sizeof(memitem)); 
	   strcpy(mi->orig_ptr,p);
	   mi->size=size;
	   size2id(size,mi);
	   mi->my_ptr=(void *)xmalloc(size);
	   hash_insert(mem_table, mi->orig_ptr, mi);
	   mstat.mallocs++;
	   break;
	case 'c': /* calloc */
	   p=strtok(&mbuf[2],":");
	   if (!p) badformat();
	   amt=atoi(p);
	   p=strtok(NULL,":");
	   if (!p) badformat();
	   size=atoi(p);
	   p=strtok(NULL,"\n");
	   if (!p) badformat();
           mi=malloc(sizeof(memitem));
	   strcpy(mi->orig_ptr,p);
	   size2id(size,mi);
           mi->size=amt*size;
           mi->my_ptr=(void *)xmalloc(amt*size);
	   hash_insert(mem_table, mi->orig_ptr, mi);
	   mstat.callocs++;
	   break;
	case 'r':
           p=strtok(&mbuf[2],":");
	   if (!p) badformat();
	   strcpy(abuf,p);
           p=strtok(NULL,":");
	   if (!p) badformat();
	   mem_entry=hash_lookup(mem_table, p);
           if (mem_entry==NULL) {
                fprintf(stderr,"invalid realloc (%s)!\n",p);
		break;
           }
	   mi=(memitem *)mem_entry;
	   xfree(mi->my_ptr);
           strcpy(mi->orig_ptr,abuf);
	   p=strtok(NULL,"\n");
	   if (!p) badformat();
	   mi->my_ptr=(char *)xmalloc(atoi(p)); 
	   mstat.reallocs++;
	   break;
	case 'f':
	   p=strtok(&mbuf[2],"\n");
	   mem_entry=hash_lookup(mem_table, p);		
	   if (mem_entry==NULL) {
		fprintf(stderr,"invalid free (%s)!\n",p);
		break;
	   }
	   mi=(memitem *)mem_entry;
	   xfree(mi->my_ptr);
	   hash_unlink(mem_table, mem_entry, 1);
	   mstat.frees++;
	   break;
	default: