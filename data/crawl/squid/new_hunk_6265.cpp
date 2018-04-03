	- Added configure check for libbind.a.  If found, it will be
	  used instead of libresolv.a.
	- Changed fwdStart() to always allow internally generated
	  requests, such as for peer digests.  These requests are
	  known to fwdStart() because the address arg is set to
	  'no_addr'.
	- Completed initial HTCP implementation.  It works, but is not
	  tested much.
	- Added counters for I/O syscalls.
	- Fixed httpMaybeRemovePublic.  With broken ICP neighbors
	  (netapp) Squid doesn't use private keys.  This caused us
	  to remove almost every object from the cache.
	- Added 'asndb' cachemgr stats to show AS Number tree.
	- Fixed AS Number byte-order bug for netmasks.
	- Fixed comm_incoming calling rate for high loads (Stewart
	  Forster).
	- Give always_direct higher precedence than never_direct
	  (Henrik Nordstrom).
	- Changed PORT ACL type to accept ranges.  Now you can easily
	   deny, for example, all priveleged ports except 80, 70, 21,
	   etc.
	- ARP ACL fixes for Linux (David Luyer).
	- Replaced various "EBIT" flags bitfileds with structures of
	  "int:1" members.
	- Changed storeKeyPrivate and storeKeyPublic to be a bit more
	  efficient by removing snprintf().  This causes an
	  incompatibility with old cache keys, however.  To transition,
	  we will look up both the new and old style keys for about the
	  next 30 days.  After that, if you haven't run this (or a
	  future) version, your cache contents will be lost.
	- Made the client-side write buffer size configurable with
	  a #define in defines.h.  By default it is still 4096 bytes.
	- Removed redirectUnregister().  It should be unnecessary
	  because of cbdata locks.
	- Fixed multiple HEAD request brokennesses (Henrik Nordstrom).
	- Changed non-blocking connect(2) code to call getsockopt()
	  instead of connect() again.  This is the approach recommended
	  by Stevens, and fixes bugs on BSD-ish systems when subsequent
	  connect() calls loop with EAGAIN status.
	- Added MD5 cache keys to memory pool accounting.
	- Added code to track number of open DISK descriptors and stop
	  swapping out objects if the number of disk descriptors becomes
	  too large.  For now the limit must be manually configured with
	  the 'max_open_disk_fds'.  By default, there is no limit.
	- Stopped encoding a request method in the high byte of the ICP
	  reqnum field.  Instead queried cache keys are copied to a
	  static array, indexed by the reqnum, modulo the array size.
	  Now we just use the request number to lookup a cache key,
	  instead of rebuilding it from the ICP reply URL and method,
	  unless we have netapp neighbors--they don't do reqnum
	  properly.
	- Fixed reconfigure memory access bugs in redirect.c.

Changes to squid-1.2.beta24 (August 21, 1998):
