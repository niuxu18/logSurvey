    FREE * free_func)
{
    dwrite_q *wq = NULL;
    fde *fde;
    if (fd < 0)
	fatal_dump("file_write: bad FD");
    fde = &fd_table[fd];
