		data = unpack_compressed_entry(p, &w_curs, curpos, *sizep);
		break;
	default:
		die("unknown object type %i in %s", *type, p->pack_name);
	}
	unuse_pack(&w_curs);
	return data;
