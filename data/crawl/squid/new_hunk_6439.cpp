	    }
	    safe_inet_addr(optarg, &_res.nsaddr_list[_res.nscount++].sin_addr);
#else
	    fprintf(stderr, "-s is not supported on this resolver\n");
#endif /* HAVE_RES_INIT */
	    break;
	case 'v':
