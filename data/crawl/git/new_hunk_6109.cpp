			}
			break;
		default:
			warning("%s: Unexpected object of type %s, skipping.",
				e->name,
				typename(e->item->type));
			continue;
		}
		if (commit->util)
			/* more than one name for the same object */