		if (permille) {
			int percent = permille / 10;
			if (percent >= dir->percent) {
				printf("%4d.%01d%% %.*s\n", percent, permille % 10, baselen, base);
				if (!dir->cumulative)
					return 0;
			}
