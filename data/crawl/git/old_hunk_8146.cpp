		}
	}

	if (fgetc(stdin) != '\n')
		die("An lf did not trail the binary data as expected.");

	*size = length;
	return buffer;
}
