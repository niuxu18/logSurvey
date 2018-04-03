                 DUMP_EXT_ACL_TYPE(PATH);
                 DUMP_EXT_ACL_TYPE(METHOD);
 #if USE_SSL
-
-            case _external_acl_format::EXT_ACL_USER_CERT_RAW:
-                storeAppendPrintf(sentry, " %%USER_CERT");
-                break;
-
-            case _external_acl_format::EXT_ACL_USER_CERTCHAIN_RAW:
-                storeAppendPrintf(sentry, " %%USER_CERTCHAIN");
-                break;
-
-            case _external_acl_format::EXT_ACL_USER_CERT:
-                storeAppendPrintf(sentry, " %%USER_CERT_%s", format->header);
-                break;
-
-            case _external_acl_format::EXT_ACL_CA_CERT:
-                storeAppendPrintf(sentry, " %%USER_CERT_%s", format->header);
-                break;
+                DUMP_EXT_ACL_TYPE_FMT(USER_CERT_RAW, " %%USER_CERT_RAW");
+                DUMP_EXT_ACL_TYPE_FMT(USER_CERTCHAIN_RAW, " %%USER_CERTCHAIN_RAW");
+                DUMP_EXT_ACL_TYPE_FMT(USER_CERT, " %%USER_CERT_%s", format->header);
+                DUMP_EXT_ACL_TYPE_FMT(CA_CERT, " %%CA_CERT_%s", format->header);
 #endif
 #if USE_AUTH
                 DUMP_EXT_ACL_TYPE(EXT_USER);
 #endif
                 DUMP_EXT_ACL_TYPE(EXT_LOG);
                 DUMP_EXT_ACL_TYPE(TAG);
+                DUMP_EXT_ACL_TYPE_FMT(PERCENT, " %%%%");
             default:
                 fatal("unknown external_acl format error");
                 break;