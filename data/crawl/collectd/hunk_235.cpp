 			NULL, &plugin, NULL, &host, &time, &severity))
 		return -1;
 	
-	if (type[0] != 0 && plugin_get_ds(type) == NULL) {
+	if (type && plugin_get_ds(type) == NULL) {
 		PyErr_Format(PyExc_TypeError, "Dataset %s not found", type);
+		FreeAll();
+		PyMem_Free(message);
 		return -1;
 	}
 
-	sstrncpy(self->data.host, host, sizeof(self->data.host));
-	sstrncpy(self->data.plugin, plugin, sizeof(self->data.plugin));
-	sstrncpy(self->data.plugin_instance, plugin_instance, sizeof(self->data.plugin_instance));
-	sstrncpy(self->data.type, type, sizeof(self->data.type));
-	sstrncpy(self->data.type_instance, type_instance, sizeof(self->data.type_instance));
+	sstrncpy(self->data.host, host ? host : "", sizeof(self->data.host));
+	sstrncpy(self->data.plugin, plugin ? plugin : "", sizeof(self->data.plugin));
+	sstrncpy(self->data.plugin_instance, plugin_instance ? plugin_instance : "", sizeof(self->data.plugin_instance));
+	sstrncpy(self->data.type, type ? type : "", sizeof(self->data.type));
+	sstrncpy(self->data.type_instance, type_instance ? type_instance : "", sizeof(self->data.type_instance));
+	sstrncpy(self->message, message ? message : "", sizeof(self->message));
 	self->data.time = time;
-
-	sstrncpy(self->message, message, sizeof(self->message));
 	self->severity = severity;
+
+	FreeAll();
+	PyMem_Free(message);
 	return 0;
 }
 