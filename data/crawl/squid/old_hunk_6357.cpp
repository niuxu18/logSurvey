     */
    httpHeaderPutStrf(&rep->header, HDR_X_SQUID_ERROR, "%s %d",
	err_type_str[err->page_id], err->xerrno);
    httpBodySet(&rep->body, content.buf, content.size + 1, NULL);
    memBufClean(&content);
    return rep;
}

