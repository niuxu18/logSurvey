 			s1, &d1, &d2, &d3, &d4, &f1, &d5, &d6, &d7);
 		    if (sn == 1) {
 			if (hasTables)
-			    printf("<tr><td align=\"right\"><B>%s</B>", s1);
+			    printf("<tr><td align=\"right\"><STRONG>%s</STRONG>\n", s1);
 			else
-			    printf("%8s", s1);
+			    printf("%s-Requests\n", s1);
 			break;
 		    }
 		    if (hasTables)
-			printf("<tr><td align=\"right\"><B>%s</B><td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%4.2f<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d",
+			printf("<tr><td align=\"right\"><STRONG>%s</STRONG><td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%4.2f<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d\n",
 			    s1, d1, d2, d3, d4, f1, d5, d6, d7);
 		    else
 			printf("%8s %7d %9d %9d %9d %4.2f %6d %9d %10d\n",