	PyType_Ready(&ValuesType);
	NotificationType.tp_base = &PluginDataType;
	PyType_Ready(&NotificationType);
	SignedType.tp_base = &PyLong_Type;
	PyType_Ready(&SignedType);
	UnsignedType.tp_base = &PyLong_Type;
	PyType_Ready(&UnsignedType);
	sys = PyImport_ImportModule("sys"); /* New reference. */
	if (sys == NULL) {
		cpy_log_exception("python initialization");
