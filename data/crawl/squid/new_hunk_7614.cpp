		    d1 = 0;
		    sscanf(reserve, "%s %d \"%[^\"]", s1, &d1, s2);
		    if (hasTables)
			printf("<tr><td><STRONG>%s</STRONG><td ALIGN=\"right\">%d<td>%s\n", s1, d1, s2 + 2);
		    else
			printf("%14s %7d %s\n", s1, d1, s2 + 2);
		    break;
		case STATS_U:
		    p_state = 1;
		    sscanf(reserve, "%s %d %d %d %d %f %d %d %d",
			s1, &d1, &d2, &d3, &d4, &f1, &d5, &d6, &d7);
		    if (hasTables)
			printf("<tr><td align=\"right\"><B>%s</B><td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%4.2f<td align=\"right\">%d<td align=\"right\">%d<td align=\"right\">%d",
			    s1, d1, d2, d3, d4, f1, d5, d6, d7);
		    else
			printf("%8s %7d %9d %9d %9d %4.2f %6d %9d %10d\n",
			    s1, d1, d2, d3, d4, f1, d5, d6, d7);
		    break;
		case STATS_O:
