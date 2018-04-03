 				ERROR("python plugin: Unable to convert \"%s\" to "
 				      "a python object.", dir);
 				free(dir);
-				PyErr_Print();
+				cpy_log_exception("python initialization");
 				continue;
 			}
 			if (PyList_Append(sys_path, dir_object) != 0) {
 				ERROR("python plugin: Unable to append \"%s\" to "
 				      "python module path.", dir);
-				PyErr_Print();
+				cpy_log_exception("python initialization");
 			}
 			Py_DECREF(dir_object);
 			free(dir);
