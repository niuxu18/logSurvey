		       unsigned char *prev, unsigned char *result)
{
	enum object_type type;
	struct strbuf header = STRBUF_INIT;
	char *path = NULL;

	type = sha1_object_info(object, NULL);
	if (type <= OBJ_NONE)
	    die(_("bad object type."));

	strbuf_addf(&header,
		    "object %s\n"
		    "type %s\n"
		    "tag %s\n"
		    "tagger %s\n\n",
		    sha1_to_hex(object),
		    typename(type),
		    tag,
		    git_committer_info(IDENT_STRICT));

	if (!opt->message_given) {
		int fd;
