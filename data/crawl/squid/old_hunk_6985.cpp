int
urlcmp(const void *url1, const void *url2)
{
    if (!url1 || !url2)
	fatal_dump("urlcmp: Got a NULL url pointer.");
    return (strcmp(url1, url2));
}
