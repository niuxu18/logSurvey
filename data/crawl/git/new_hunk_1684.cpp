		}
		else {
			result = error("in tree %s: entry %s has bad mode %.6o",
					describe_object(options, &tree->object), entry.path, entry.mode);
		}
		if (result < 0)
			return result;
