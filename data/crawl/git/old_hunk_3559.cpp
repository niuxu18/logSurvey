	case STATUS_FORMAT_PORCELAIN:
		wt_porcelain_print(s);
		break;
	case STATUS_FORMAT_NONE:
	case STATUS_FORMAT_LONG:
		wt_status_print(s);
