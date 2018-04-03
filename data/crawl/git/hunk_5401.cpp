 	}
 	return NULL;
 }
+
+/*
+ * The per-object header is a pretty dense thing, which is
+ *  - first byte: low four bits are "size", then three bits of "type",
+ *    and the high bit is "size continues".
+ *  - each byte afterwards: low seven bits are size continuation,
+ *    with the high bit being "size continues"
+ */
+int encode_in_pack_object_header(enum object_type type, uintmax_t size, unsigned char *hdr)
+{
+	int n = 1;
+	unsigned char c;
+
+	if (type < OBJ_COMMIT || type > OBJ_REF_DELTA)
+		die("bad type %d", type);
+
+	c = (type << 4) | (size & 15);
+	size >>= 4;
+	while (size) {
+		*hdr++ = c | 0x80;
+		c = size & 0x7f;
+		size >>= 7;
+		n++;
+	}
+	*hdr = c;
+	return n;
+}