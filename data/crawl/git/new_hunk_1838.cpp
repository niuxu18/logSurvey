				(*tail)->status |= REF_STATUS_UPTODATE;
				if (read_ref((*tail)->name,
					     (*tail)->old_oid.hash) < 0)
					die(_("Could not read ref %s"),
					    (*tail)->name);
			}
		}