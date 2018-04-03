 	status_printf(s, color(WT_STATUS_HEADER, s), "\t");
 	switch (status) {
 	case DIFF_STATUS_ADDED:
-		status_printf_more(s, c, "new file:   %s", one);
+		status_printf_more(s, c, _("new file:   %s"), one);
 		break;
 	case DIFF_STATUS_COPIED:
-		status_printf_more(s, c, "copied:     %s -> %s", one, two);
+		status_printf_more(s, c, _("copied:     %s -> %s"), one, two);
 		break;
 	case DIFF_STATUS_DELETED:
-		status_printf_more(s, c, "deleted:    %s", one);
+		status_printf_more(s, c, _("deleted:    %s"), one);
 		break;
 	case DIFF_STATUS_MODIFIED:
-		status_printf_more(s, c, "modified:   %s", one);
+		status_printf_more(s, c, _("modified:   %s"), one);
 		break;
 	case DIFF_STATUS_RENAMED:
 		status_printf_more(s, c, "renamed:    %s -> %s", one, two);
 		break;
 	case DIFF_STATUS_TYPE_CHANGED:
-		status_printf_more(s, c, "typechange: %s", one);
+		status_printf_more(s, c, _("typechange: %s"), one);
 		break;
 	case DIFF_STATUS_UNKNOWN:
-		status_printf_more(s, c, "unknown:    %s", one);
+		status_printf_more(s, c, _("unknown:    %s"), one);
 		break;
 	case DIFF_STATUS_UNMERGED:
-		status_printf_more(s, c, "unmerged:   %s", one);
+		status_printf_more(s, c, _("unmerged:   %s"), one);
 		break;
 	default:
-		die("bug: unhandled diff status %c", status);
+		die(_("bug: unhandled diff status %c"), status);
 	}
 	if (extra.len) {
 		status_printf_more(s, color(WT_STATUS_HEADER, s), "%s", extra.buf);
