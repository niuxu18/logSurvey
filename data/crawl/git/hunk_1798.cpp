 	}
 
 	if (opt->show_log_size) {
-		printf("log size %i\n", (int)msgbuf.len);
+		fprintf(opt->diffopt.file, "log size %i\n", (int)msgbuf.len);
 		graph_show_oneline(opt->graph);
 	}
 
