						     ntohl(off64[1]);
				off64_nr++;
			}
			printf("%llu %s (%08x)\n", (unsigned long long) offset,
			       sha1_to_hex(entries[i].sha1),
			       ntohl(entries[i].crc));
		}