 	case S_IFREG:
 		if (strbuf_read_file(buf, path, st->st_size) != st->st_size)
 			return error("unable to open or read %s", path);
-		convert_to_git(path, buf->buf, buf->len, buf);
+		convert_to_git(path, buf->buf, buf->len, buf, 0);
 		return 0;
 	default:
 		return -1;
