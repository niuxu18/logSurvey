		case OBJ_COMMIT:
			break;
		case OBJ_BLOB:
			export_blob(commit->object.sha1);
			continue;
		default: /* OBJ_TAG (nested tags) is already handled */
			warning("Tag points to object of unexpected type %s, skipping.",
