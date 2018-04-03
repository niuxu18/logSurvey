 	if (prefixcmp(key,  "remote."))
 		return 0;
 	name = key + 7;
+	if (*name == '/') {
+		warning("Config remote shorthand cannot begin with '/': %s",
+			name);
+		return 0;
+	}
 	subkey = strrchr(name, '.');
 	if (!subkey)
 		return error("Config with no key for remote %s", name);
-	if (*subkey == '/') {
-		warning("Config remote shorthand cannot begin with '/': %s", name);
-		return 0;
-	}
 	remote = make_remote(name, subkey - name);
 	if (!strcmp(subkey, ".mirror"))
 		remote->mirror = git_config_bool(key, value);