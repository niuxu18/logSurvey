				CPY_RETURN_FROM_THREADS 0;
			}
		}
		v = PyObject_CallFunction((void *) &ValuesType, "sOssssdi", value_list->type, list,
				value_list->plugin_instance, value_list->type_instance, value_list->plugin,
				value_list->host, (double) value_list->time, value_list->interval);
		Py_DECREF(list);
		ret = PyObject_CallFunctionObjArgs(c->callback, v, c->data, (void *) 0); /* New reference. */
		if (ret == NULL) {
			cpy_log_exception("write callback");
