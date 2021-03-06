static void
append_file (char *path)
{
  int handle = open (path, O_RDONLY | O_BINARY);
  struct stat stat_data;

  if (handle < 0)
    {
      ERROR ((0, errno, _("Cannot open file %s"), path));
      return;
    }

  if (fstat (handle, &stat_data) != 0)
    ERROR ((0, errno, "%s", path));
  else
    {
      off_t bytes_left = stat_data.st_size;

      while (bytes_left > 0)
	{
	  union block *start = find_next_block ();
	  size_t buffer_size = available_space_after (start);
	  ssize_t status;
	  char buf[UINTMAX_STRSIZE_BOUND];

	  if (bytes_left < buffer_size)
	    {
	      buffer_size = bytes_left;
	      status = buffer_size % BLOCKSIZE;
	      if (status)
		memset (start->buffer + bytes_left, 0,
			(size_t) (BLOCKSIZE - status));
	    }

	  status = safe_read (handle, start->buffer, buffer_size);
	  if (status < 0)
	    FATAL_ERROR ((0, errno,
			  _("Read error at byte %s reading %lu bytes in file %s"),
			  STRINGIFY_BIGINT (stat_data.st_size - bytes_left,
					    buf),
			  (unsigned long) buffer_size, path));
	  if (status == 0)
	    FATAL_ERROR ((0, 0, _("%s: File shrunk by %s bytes, (yark!)"),
			  path, STRINGIFY_BIGINT (bytes_left, buf)));

	  bytes_left -= status;

	  set_next_block_after (start + (status - 1) / BLOCKSIZE);
	}
    }

