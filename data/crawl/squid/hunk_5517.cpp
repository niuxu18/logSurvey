 	matchrv = aclMatchUser(data, MatchParam);
 	break;
     case ACL_PROXY_AUTH_REGEX:
-	matchrv = aclMatchRegex(data, MatchParam);
+	matchrv = aclMatchRegex((relist *)data, MatchParam);
 	break;
     default:
 	/* This is a fatal to ensure that aclCacheMatchAcl calls are _only_
 	 * made for supported acl types */
 	fatal("aclCacheMatchAcl: unknown or unexpected ACL type");
 	return 0;		/* NOTREACHED */
     }
-    auth_match = memAllocate(MEM_ACL_PROXY_AUTH_MATCH);
+    auth_match = (acl_proxy_auth_match_cache *)memAllocate(MEM_ACL_PROXY_AUTH_MATCH);
     auth_match->matchrv = matchrv;
     auth_match->acl_data = data;
     dlinkAddTail(auth_match, &auth_match->link, cache);
