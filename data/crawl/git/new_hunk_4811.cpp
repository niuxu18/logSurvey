				die("packfile %s cannot be mapped: %s",
					p->pack_name,
					strerror(errno));
			if (!win->offset && win->len == p->pack_size
				&& !p->do_not_close) {
				close(p->pack_fd);
				pack_open_fds--;
				p->pack_fd = -1;
			}
			pack_mmap_calls++;
			pack_open_windows++;
			if (pack_mapped > peak_pack_mapped)