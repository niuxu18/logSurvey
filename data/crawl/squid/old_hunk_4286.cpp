AuthBasicConfig::fixHeader(AuthUserRequest *auth_user_request, HttpReply *rep, http_hdr_type type, HttpRequest * request)
{
    if (authenticate) {
        debugs(29, 9, "authenticateFixErrorHeader: Sending type:" << type << " header: 'Basic realm=\"" << basicAuthRealm << "\"'");
        httpHeaderPutStrf(&rep->header, type, "Basic realm=\"%s\"", basicAuthRealm);
    }
}