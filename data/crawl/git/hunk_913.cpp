 		if (top <= 0 || bottom <= 0 || top > menu_stuff->nr || bottom > top ||
 		    (is_single && bottom != top)) {
 			clean_print_color(CLEAN_COLOR_ERROR);
-			printf_ln(_("Huh (%s)?"), (*ptr)->buf);
+			printf(_("Huh (%s)?\n"), (*ptr)->buf);
 			clean_print_color(CLEAN_COLOR_RESET);
 			continue;
 		}
