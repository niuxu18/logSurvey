		printf("<PRE>\n");
	    }
	    istate = isBody;
	    /* yes, fall through, we do not want to loose the first line */
	case isBody:
	    /* interpret [and reformat] cache response */
	    if (parse_menu)