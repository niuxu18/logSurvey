	storeAppendPrintf(sentry, "Filemap bits in use: %d of %d (%d%%)\n",
	    SD->map->n_files_in_map, SD->map->max_n_files,
	    percent(SD->map->n_files_in_map, SD->map->max_n_files));
    }
}
