		if (!data->status)
			return;
		err = whitespace_error_string(data->status);
		fprintf(data->file, "%s:%d: %s.\n", data->filename, data->lineno, err);
		free(err);
		emit_line(data->file, set, reset, line, 1);
		(void)check_and_emit_line(line + 1, len - 1, data->ws_rule,
		    data->file, set, reset, ws);
	} else if (line[0] == ' ')
		data->lineno++;
	else if (line[0] == '@') {
