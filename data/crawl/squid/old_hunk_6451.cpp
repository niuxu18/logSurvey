	storeAppendPrintf(sentry, "Current Size: %d KB\n", SD->cur_size);
	storeAppendPrintf(sentry, "Percent Used: %0.2f%%\n",
	    100.0 * SD->cur_size / SD->max_size);
	storeAppendPrintf(sentry, "Filemap bits in use: %d\n",
	    SD->map->n_files_in_map);
    }
}