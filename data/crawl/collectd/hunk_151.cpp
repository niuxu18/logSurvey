 		{
 			/* parse_option failed, buffer has been modified.
 			 * => we need to abort */
-			print_to_socket (fh, "-1 Misformatted option.\n");
-			sfree (vl.values);
-			return (-1);
+			cmd_error (CMD_PARSE_ERROR, err, "Misformatted option.");
+			cmd_destroy_putval (ret_putval);
+			return (CMD_PARSE_ERROR);
 		}
 		else if (status == 0)
 		{
