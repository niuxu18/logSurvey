
	if (msgbuf.len) {
		fwrite(msgbuf.buf, sizeof(char), msgbuf.len, stdout);
		printf("%s%s", extra, sep);
	}
	strbuf_release(&msgbuf);
}
