	string_list_clear(&new_refs, 0);
}

static int do_fetch(struct transport *transport,
		    struct refspec *refs, int ref_count)
{
