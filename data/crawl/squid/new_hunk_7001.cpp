	debug(15, 0) ("Check 'icp_port' in your config file\n");
	fatal_dump(NULL);
    }
    assert(entry->swap_status == SWAPOUT_NONE);
    mem->start_ping = current_time;
    mem->icp_reply_callback = callback;
    mem->ircb_data = callback_data;