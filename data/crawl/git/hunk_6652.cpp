 			base_offset = (base_offset << 7) + (c & 127);
 		}
 		delta_base->offset = obj->idx.offset - base_offset;
-		if (delta_base->offset >= obj->idx.offset)
+		if (delta_base->offset <= 0 || delta_base->offset >= obj->idx.offset)
 			bad_object(obj->idx.offset, "delta base offset is out of bound");
 		break;
 	case OBJ_COMMIT: