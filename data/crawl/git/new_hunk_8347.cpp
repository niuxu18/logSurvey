		while (c & 128) {
			base_offset += 1;
			if (!base_offset || MSB(base_offset, 7))
				bad_object(obj->idx.offset, "offset value overflow for delta base object");
			p = fill(1);
			c = *p;
			use(1);
			base_offset = (base_offset << 7) + (c & 127);
		}
		delta_base->offset = obj->idx.offset - base_offset;
		if (delta_base->offset >= obj->idx.offset)
			bad_object(obj->idx.offset, "delta base offset is out of bound");
		break;
	case OBJ_COMMIT:
	case OBJ_TREE:
	case OBJ_BLOB:
	case OBJ_TAG:
		break;
	default:
		bad_object(obj->idx.offset, "unknown object type %d", obj->type);
	}
	obj->hdr_size = consumed_bytes - obj->idx.offset;

	data = unpack_entry_data(obj->idx.offset, obj->size);
	obj->idx.crc32 = input_crc32;
	return data;
}

static void *get_data_from_pack(struct object_entry *obj)
{
	unsigned long from = obj[0].idx.offset + obj[0].hdr_size;
	unsigned long len = obj[1].idx.offset - from;
	unsigned long rdy = 0;
	unsigned char *src, *data;
	z_stream stream;