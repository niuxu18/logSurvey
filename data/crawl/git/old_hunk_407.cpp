	io.input = fopen(path, "r");
	io.io.wrerror = 0;
	if (!io.input)
		return error("Could not open %s", path);

	if (output) {
		io.io.output = fopen(output, "w");
		if (!io.io.output) {
			fclose(io.input);
			return error("Could not write %s", output);
		}
	}
