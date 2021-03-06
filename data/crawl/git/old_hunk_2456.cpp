		case ABORT:
			die ("Tag %s tags unexported object; use "
			     "--tag-of-filtered-object=<mode> to handle it.",
			     sha1_to_hex(tag->object.sha1));
		case DROP:
			/* Ignore this tag altogether */
			return;
		case REWRITE:
			if (tagged->type != OBJ_COMMIT) {
				die ("Tag %s tags unexported %s!",
				     sha1_to_hex(tag->object.sha1),
				     typename(tagged->type));
			}
			p = (struct commit *)tagged;
