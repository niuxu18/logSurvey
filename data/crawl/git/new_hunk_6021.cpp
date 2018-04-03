	}
	return 0;
}

char *getpass(const char *prompt)
{
	struct strbuf buf = STRBUF_INIT;

	fputs(prompt, stderr);
	for (;;) {
		char c = _getch();
		if (c == '\r' || c == '\n')
			break;
		strbuf_addch(&buf, c);
	}
	fputs("\n", stderr);
	return strbuf_detach(&buf, NULL);
}