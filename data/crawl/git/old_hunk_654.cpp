			return ACK;
		}
	}
	die(_("git fetch-pack: expected ACK/NAK, got '%s'"), line);
}
