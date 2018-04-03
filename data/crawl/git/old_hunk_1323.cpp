	for (i = 0; i < log->list.nr; i++) {
		const struct string_list_item *item = &log->list.items[i];
		if (log->summary) {
			printf("%6d\t%s\n", (int)UTIL_TO_INT(item), item->string);
		} else {
			struct string_list *onelines = item->util;
			printf("%s (%d):\n", item->string, onelines->nr);
			for (j = onelines->nr - 1; j >= 0; j--) {
				const char *msg = onelines->items[j].string;

				if (log->wrap_lines) {
					strbuf_reset(&sb);
					add_wrapped_shortlog_msg(&sb, msg, log);
					fwrite(sb.buf, sb.len, 1, stdout);
				}
				else
					printf("      %s\n", msg);
			}
			putchar('\n');
			onelines->strdup_strings = 1;
			string_list_clear(onelines, 0);
			free(onelines);
