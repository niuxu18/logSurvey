}

void
HttpHeader::putStr(http_hdr_type id, const char *str)
{
    assert(any_valid_header(id));
    assert(headerTable[id].type == field_type::ftStr);  /* must be of an appropriate type */
