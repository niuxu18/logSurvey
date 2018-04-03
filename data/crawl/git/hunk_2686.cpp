 		free(to_free);
 		return;
 	}
-	template_len = strlen(template_dir);
-	if (PATH_MAX <= (template_len+strlen("/config")))
-		die(_("insanely long template path %s"), template_dir);
-	strcpy(template_path, template_dir);
-	if (template_path[template_len-1] != '/') {
-		template_path[template_len++] = '/';
-		template_path[template_len] = 0;
-	}
-	dir = opendir(template_path);
+
+	strbuf_addstr(&template_path, template_dir);
+	strbuf_complete(&template_path, '/');
+	template_len = template_path.len;
+
+	dir = opendir(template_path.buf);
 	if (!dir) {
 		warning(_("templates not found %s"), template_dir);
 		goto free_return;
 	}
 
 	/* Make sure that template is from the correct vintage */
-	strcpy(template_path + template_len, "config");
+	strbuf_addstr(&template_path, "config");
 	repository_format_version = 0;
 	git_config_from_file(check_repository_format_version,
-			     template_path, NULL);
-	template_path[template_len] = 0;
+			     template_path.buf, NULL);
+	strbuf_setlen(&template_path, template_len);
 
 	if (repository_format_version &&
 	    repository_format_version != GIT_REPO_VERSION) {