			safe_write(out, buf + pf+1, len);
			continue;
		default:
			fprintf(stderr, "%s: protocol error: bad band #%d\n",
				me, band);
			return SIDEBAND_PROTOCOL_ERROR;
		}
	}
