			return ACK;
		}
	}
	die("git fetch_pack: expected ACK/NAK, got '%s'", line);
}

static void send_request(struct fetch_pack_args *args,
