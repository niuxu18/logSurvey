	- Different sized 'cache_dirs' supported.

==============================================================================

Changes to squid-1.1.14 (July 11, 1997):

	- Another try at log_url crap.  Added icpState->log_url
	  member.  Set mem_obj->log_url in new_MemObject() which
	  means passing more args to storeCreateEntry().  Also added
	  urlClean() which calls urlParse(); needed for ICP logging.
	- Clean URLs will be truncated at '?' if present.
	- Give fd_note() the clean URL.

Changes to squid-1.1.13 (July 9, 1997):

	- Fixed storeLog() coredump on mem->log_url.
	- Fixed string bounds bug if a redirector returns a short
	  hostname which require appending 'append_domain' (David
	  Lamkin).
	- Added 'fake_user_agent' to configuration because HTTP
	  anonymizing strips the User-Agent which some servers require.

Changes to squid-1.1.12 (July 5, 1997):

	- Fixed dnsserver buffer overflow bug and other problems related
	  to long, bogus domain names.
	- Fixed occasional incorrect ERR_DNS_FAIL errors caused when
	  an IP cache entry gets released about the same time an
	  ICP query timeout occurs.
	- Fixed setrlimit() bugs seen on DUNIX 4.0; rl.rlim_max == 0.
	- Only strip 'Proxy-authorization' header when USE_PROXY_AUTH
	  is defined and proxy_auth is configured (Ron Gomes).
	- Added missing calls to reset socket timeouts for SSL
	  and passthrough requests.
	- Fixed "Available number of file descriptors" value in
	  cachemgr info output.
	- Fixed coredump in proxyAuthenticate() if password file
	  has an entry with only a user name (Jordan Hrycaj).
	- Security patch for usernames and passwords in URLs.
	  + ftpget would insert a BASE URL including the username and
	    password for directory listings IF the original request did
	    NOT include the the trailing slash.  This could be disabled
	    with a command line option, but is enabled by default.  Now
	    its #ifdefd out.
	  + Usernames and passwords could be logged to access.log and
	    store.log.  Now a new element,
	    StoreEntry->MemObject->log_url, holds a copy of the requested
	    URL without the name and password.  This isn't 100% fixed yet
	    because log_url gets generated when the StoreEntry gets
	    created.  If the StoreEntry never gets created, then the URL
	    with name and password will get logged.  Also, the name and
	    password are not stripped from ICP requests.  Also, this
	    changes store.log.  Previously we logged StoreEntry->key
	    which would look different than the URL for private entries,
	    but now we'll always log the URL.
	  + Finally, we now set REQ_AUTH for any request that includes a
	    name or password.  This prevents the request from being
	    cached (!) and prevents it from being sent to neighbor
	    caches.  In other words, its treated just as if an
	    Authorization request header were present.
	- Fixed Byte-Range handling so that valid, whole objects
	  are not released.

Changes to squid-1.1.11 (June 14, 1997):

	- Clean up NeXTStep compiler warnings (Karsten Heinze, Ed Knowles).
	- Don't forward 'Proxy-Authorization' headers (Chris Pascoe).
	- Fixed up Host: header parsing (Henrik Nordstrom).
	- Changed DefaultObjectsPerBucket to 20 in cache_cf.c.
	- Fixed parsePathname() bug for magic word "none".
	- Fixed ipcache_release to rename entries which get stuck with locks.
	- Fixed "eventDelete(peerCheckConnect, e);" bug when the DNS lookup
	  is pending.
	- Add sys/types.h to lib/safe_inet_addr.c for NeXTSTEP (Timo
	  Hennerich).
	- Fixed cur_len decrement bug in diskHandleRead()
	  (Michael O'Reilly).
	- Added contrib/rredir.pl from Peter Eisenhauer.
	- Always forward requests with 'Byte-Range' headers (Ron Gomes).
	- Fixed StoreEntry client offset bug which could trigger a
	  fatal_dump().
	- Fixed noticing that dnsservers have shut down during restart.
	- Added contrib/nextstep installer package from Gerben Wierda.
	- Modified storeDirClean() to remove swap files where the
	  number is being used, but the file is in the wrong directory.
	- Allow PURGE method on all protocols.
	- Added 'icp_hit_stale' option.
	- Fixed proxy auth refresh bug (Chris Pascoe).
	- Don't check for other filename extensions if an FTP URL
	  ends with .txt (Ed Knowles).
	- Relocated ERR_NO_CLIENT_BIG_OBJ check to eliminate incorrect
	  (but harmless) error message.

Changes to squid-1.1.10 (April 24, 1997):

	- Require 0 <= multicast ttl <= 128.
	- Changed 'unsigned int inaddr_none' to 'struct in_addr no_addr'.
	- Added debug_trap() if unlocking a StoreEntry which still 
	  has registered clients.
	- Added missing storeUnregister() calls.
	- Fixed storeClientListAdd() bug of adding same FD twice.
	- Fixed reconfigure/SIGHUP to wait 'shutdown_lifetime' seconds
	  after receiving signal (Ron Gomes).
	- Added missing commSetSelect() in icpDetectClientClose()
	  (Mark Treacy).
	- Fixed multicast group member counting bug with fake
	  StoreEntry's.
	- Only enable ICP_FLAG_SRC_RTT if the peer is ICP_VERSION_2.
	- Fixed compiling unlinkd in a separate directory (Assar Westerlund).
	- Fixed comm_select_incoming SEGV for poll() version when using
	  udp_{incoming,outgoing}_address  (Mark Treacy).
	- Fixed some SIGHUP related memory problems with redirectors,
	  ipcache, and fqdncache, and peerCountMcastPeers*().
	- Make the unlinkd and pinger programs configurable (Ron Gomes,
	  Neil Murray).
	- Add handshake to unlinkd program (Ron Gomes).
	- Exit if a configured program doesn't exist (Neil Murray).
	- Abort if unlinkd fails to start (Ron Gomes).
	- Added -m option to ftpget for defining default MIME type.
	  (Neil Murray).
	- Optimized comm_select() functions (Mark Treacy).
	- Fixed ipcache_release() to not release locked entries;
	  instead expire them immediately.
	- Fixed up rebuild code to handle swapfile/URL clash
	  cases better.
	- Added safe_inet_addr() to protect from bogus IP addresses
	  (Arjan de Vet).
	- Fixed handling of ssl_proxy and passthrough_proxy when not
	  behind a firewall.


Changes to squid-1.1.9 (March 30, 1997):

	- Fixed aclIpNetworkCompare for USE_SPLAY_TREE; was applying
	  netmask to non-local variable through pointer.  (Ansgar
	  Hockmann).
	- Fixed cachemgr bug incorrectly assigning connect() return
	  value (Nigel Metheringham).
	- Fixed diskHandleWrite bug: not setting write_daemon = PRESENT.
	- Fixed situation where all requests would be handled by
	  "single parent" and other peers would never be queried
	  again.
	- Fixed ftpget bug causing program to continue after printing
	  usage.
	- Changed 'reference_age' to be the maximum for the dynamcially
	  computed value (Mark Treacy).
 	- Added external 'unlinkd' process to unlink swap files.
	- Added more dnsserver status information to cachemgr output.
	- In httpReadReply: extend FD lifetime only after successful
	  read, not every read.
	- In httpBuildRequestHeader: link size of 'ybuf' to MAX_URL.
	- Added routines to count number of members of each multicast
	  peer.
	- Fixed multicast ICP bug causing unnecessary timeouts.
	- Added error messages if setuid/setgid functions fail.
	- Added non-POSIX tempnam.c replacement for NeXTStep (Gerben
	  Wierda).
	- Removed redundant file:// --> ftp:// check (Willy TARREAU).
	- Removed check for reply->code == 200 in icpGetHeadersForIMS().
	- Fixed IP cache bug which caused 'dns_children 0' to break;
	- Deny access to dangerous TCP ports (7, 9, 19).
	- Removed single-line functions: fdstat_biggest_fd(),
	  comm_get_fd_lifetime(), comm_get_fd_timeout().
	- Removed storeCheckExpired() from storeGetSwapSpace() as
	  likely cause of slowing down cache when exceeding the high
	  water mark.
	- Fixed storeCheckExpired() to not always check the
	  LRU expiration age (Mark Treacy).
	- Lowered 'store_objects_per_bucket' to 20 so that
	  storeMaintainSwapSpace() runs frequently enough to 
	  keep up with incoming objects.
	- Fixed FTP to use the Authorization header only when the
	  usernames match.
	- Fixed another continuation-lines-not-starting-with-NNN bug
	  in ftpget.
	- Added 'client_db' config option to disable keeping statistics 
	  for each client address.
	- Added support for using ICMP data stuffed into ICP replies
	  for peer selection algorithm.  Enable with 'query_icmp'
	  in squid.conf.
	- Fixed net_db design bug where _net_db_peer structures pointed
	  to 'peer' structures that get freed and reallocated during a
	  reconfigure.
	- Moved comm.c fd_lifetime[] array into FD_ENTRY structure.
	- Cleaned up storeCopy().  debug_trap on requested offset <
	  e_lowest_offset.
	- Cleaned up fdstat_init() and fdstat_update().
	- Cleaned up ftp_login_parser().

Changes to squid-1.1.8 (March 3, 1997):

	- Fixed neighborsUdpAck() coredump bug for source-ping and
	  non-peer ICP replies.
	- Prevent ipcache_gethostbyname from changing an IP_DISPATCHED
	  entry to IP_CACHED; fqdncache too.
	- Made send_announce non-blocking.
	- Force release of negative-cached objects upon receipt of
	  no-cache request.
	- Ignore ACLs which fail to parse.
	- Added 'proxy_auth_ignore' regular expression list (Andreas
	  Lamprecht).
	- Changed how failed TCP connections affects peer up/down
	  status.  Now retry TCP connections at regular intervals in the
	  background and don't mark the peer as 'up' until a connection
	  succeeds.
	- Okay to increase FD_SETSIZE on FreeBSD 2.2.x (Peter Wemm).
	- Fixed HTTP anonymizer bug in 'standard' mode.
	- Fixed aclMatchDomainList() coredump for unresolvable addresses.
	- Changed default disk low/high water marks to 90/95%.
	- Prevent ftpget buffer overflow (Riku Saikkonen).

Changes to squid-1.1.7 (February 25, 1997):

	- Fixed non-default port numbers for FTP URLs (John Saunders).
	- Fixed urlParse to leave trailing slashes on FTP URLs.  Although
	  stripping the slashes offers a slight hit rate increase, it
	  breaks some proxies which return HTTP redirects.
	- Initialize struct tm in parse_rfc1123() (Henrik Hempelmann).
	- Fixed parseHttpRequest() to use memcpy instead of strncpy;
	  caused POST's with NULL bytes to fail (Joe Ramey).
	- Fixed another HTTP reply code 0 bug (Neil Murray).
	- Changed code structure in ipcache_nbgethostbyname() to
	  maybe get around some trashed-stack problems.
	- Added WARNING if blocking gethostbyname() gets called.
	- Fixed calling commSetSelect() with FD < 0 bug in ssl.c and
	  pass.c.
	- Moved 'append_domain' operation to urlParse().
	- Fixed too many arguments bug in diskHandleWrite, caused
	  coredumps when write fails (due to full disk).
	- Fixed extra unlocking on partial reads from dnsservers.
	- Fixes for 'Splay' trees in acl.c (Ed Knowles)
	- Support for balanced binary trees in acl.c (Arjan de Vet).
	- Made HTTP anonymizing a standard feature and settable in
	  squid.conf (disabled by default).
	- Ignore ICP_MISS replies from multicast-responding parents
	  which would violate the domain restrictions.
	- Fixed another diskHandleWrite coredump bug when freeing
	  list of pending blocks.
	- Added support for 'src' ACLs in cache_host_acl lines.
	- Fixed ftpget bug when PASV connect times out.
	- Fixed adding duplicate IP cache entry for failed BLOCKING lookups.
	- Changed peer IP addresses (for ICP) to be refreshed every hour.
	- Accomodated Solaris bug requiring suid privs for getrusage()
	  (Arjan de Vet).

Changes to squid-1.novm.6 (February 7, 1997):

	- Merged squid-1.1.6 changes.

Changes to squid-1.1.6 (February 7, 1997):

	- Fix redirector to make sure the redirector child process is 
	  is alive and not busy before using it (Brent Foster).
	- Fixed ACL joining bug.
	- Fixed up support for multicast; see Release Notes for 
	  details.
	- Fixed ftpget to properly handle multi-line replies that
	  don't begin with "NNN-".
	- Changed store maintenance to randomize bucket order
	  each time after completion.
	- Set RLIMIT_VMEM to the maximum.
	- Syntax change: "edge" to "peer" everywhere.
	- Change redirector stats to also show number of rewritten
	  requests (Andrew Humphrey).
	- Changed HTTP anonmyizing to remove 'denied' headers
	  by default.  Define USE_PARANOID_ANONYMIZER to only pass
	  'allowed' headers instead (Bernd Ernesti).
	- Added 'Splay' trees (in #ifdefs) for fast IP access checking
	  (Ed Knowles).
	- Fixed 'COMM_INPROGRESS' typo bug (Balint Nagy Endre).
	- Added support for PURGE method to remove cached objects.
	- Upgraded scripts/check_cache.pl for v1.1 (Bertold Kolics).
	- Fixed announcement file descriptor leak (Balint Nagy Endre).
	- Fixed [^0-9] sscanf bug for some compilers (Jim Carroll).
	- Upgrade to autoconf-2.12
	- Added 'dns_defnames' option to allow dnsserver to interpret
	  single-component hostnames.
	- Refuse to run as root without defining 'cache_effective_user'.

Changes to squid-1.novm.5 (February 6, 1997):

	- Fixed stuck objects (and FD leak) due to not unlocking
	  objects in storeAbort().
	- Merged squid-1.1.5 changes.

Changes to squid-1.1.5 (January 22, 1997):

	- Fixed ACL parsing to join ACL entries with the same name
	  (Markus Stumpf).
	- Fixed BIT_SET/BIT_TEST typo in getDefaultParent() (Ed Knowles).
	- Removed comm_read() and commHandleRead().
	- Fixed rotating special files (Kolics Bertold).
	- Fixed sending HTTP reply code 0 in error messages.
	- Fixed ftpget to recognize 'NetWare' servers and skip whitespace
	  before filenames.
	- Changed ftpget default Content-Type to application/octet-stream.
	- Added .rpm MIME type (Nigel Metheringham).
	- Changed storeDirClean() to create missing directories.
	- Removed icpState->buf and storeCopy() call in icpGetHeadersfForIMS().
	- Fixed *_ip_list parsing bug (Hiroyuki Inoue).
	- Fixed bad comm_write() calls in passStart() and sslStart()
	  (Martin Boening).
	- Changed storeMaintainSwapSpace() to scan hash table buckets in
	  random order.
	- Added dynamic LRU Age expiration feature.  Expiration age is
	  calculated as a function of store_swap_size so that object
	  deletion rate matches the addition rate and we avoid emergency
	  object purge mode.

Changes to squid-1.novm.4 (January XX, 1997):

	- Fixed storeRegister loop in icpHandleIMSReply().
	- Merged squid-1.1.4 changes.

Changes to squid-1.1.4 (January 13, 1997):

	- Created USE_GNUREGEX define to fix forcing GNU regex on 
	  Solaris and NeXTStep.
	- Changed SQUID_MAXFD to be a C variable.
	- Added QUICKSTART file.
	- Fixed ident so the identd request comes from the same IP
	  address as the original connection was made to (Russell
	  Street).
	- Added '!' condition feature for the 'firewall_ip' list
	  (Hiroyuki Inoue).
	- Added 'udp_hit_obj_size' option (Mark Treacy).
	- Fixed cachemgr.cgi to print 'NEVER' instead of '27Y ago'.
	- Fixed finding FTP end-of-transfer marker in the middle
	  of the file.
	- More ipcache fixes for long-pending requests which get preempted.
	- Fixed cachemgr.cgi to parse password from URL (Peter Wemm).
	- Fixed cachemgr.cgi to keep password in HTML form field (Peter
	  Wemm).
	- Fixed reporting Maximum Resident Size (Peter Wemm).
	- Handle unexpected data from a redirector (Brent Foster).

Changes to squid-1.novm.3 (January 7, 1996):

	- Merged squid-1.1.3 changes.

Changes to squid-1.novm.2 (January 7, 1996):

	- Mega changes to make Squid not store objects in VM.

Changes to squid-1.1.3 (January 7, 1997):

	- Changed inet_addr("X") to inet_addr("255.255.255.255")
	  (Dan Riley).
	- Fixed matchInsideFirewall() bug when using 'firewall_ip' but
	  not 'inside_firewall' (Tai Jin).
	- check for text == NULL in icpSendERROR().
	- Don't make inaddr_none static in ftpget.c (Davide Migliavacca).
	- Fixed ipcache FMR bug for long-pending requests.
	- Fixes for NeXTSTEP 3.3 (Tethpub Znek).
	- add storeWriteCleanLog() call in fatal().

Changes to squid-1.1.2 (December 18, 1996):

	- Fixed (negative) caching of HTTP objects witch consist of
	  only some HTTP headers.
	- Fixed up SSL neighbor selection algorithm to be just
	  like the one in pass.c.
	- Fixed incorrect squid.conf comment about setting an objcache
	  password to 'none'.  Added keyword 'disable' to disable an
	  objcache function (Markus Gyger).
	- Further Cache.Announce.on fixes (Ernest Yik).
	- Add theOutIcpConnection to comm_select_incoming() for improved
	  ICP performance (Stewart Forster).
	- Added access.log documentation to Release-Notes-1.1.txt
	- Added support for TRACE method.
	- Added 'log_icp_queries on|off' to config (David Luyer).
	- Added hierarchy tag to common HTTP format access.log (David Luyer).
	- Moved second SQUID_MAXFD/FD_SETSIZE check to after #includes.
	- Added reverse DNS lookups for 'dstdomain' ACLs when the URL
	  contains an IP address.
	- Made HTTP reply header parsing more robust to deal with
	  bad 304 replies from squid-1.1.beta27 and earlier.
	- Changed reqnum passed in ICP replies to encode request method
	  in high byte.
	- Fixed neighbor round-robin bug (Uwe Doering).
	- Calculate accurage percentages for ICP and HTTP requests in
	  cachemgr 'client list'.
	- Fixed refresh lm-factor calculations to allow percent = 0.
	- Make sure DNS lookups don't remain PENDING for a very long time.

Changes to squid-1.1.1 (December 15, 1996):

	- Fixed announcement bug.  Announcements were always off unless
	  a file was specified.
	- Fixed wrong number of args to examine_select() debug.
	- Fixed null-string content-type
	- Don't cache replies with 'Set-Cookie:' headers.
	- Fixed bug when client issues IMS, Squid has stale object and
	  Squid's lastmod time is greater than the client IMS time.
	  A 304 reply would be appropriate for Squid, but not the client
	  (diagnosed by Mark Treacy).
	- Fixed httpBuildRequestHeader() content length bug which breaks for
	  really large POST requests (Takahiro Yugawa).
	- Fixed 'passthrough_proxy' to pick up port number from list of
	  neighbors.
	- Ensure pid file is world-readable if umask is set otherwise
	  (Doug Urner).
	- Collect statistics on a few more HTTP headers (Ed Knowles).

Changes to squid-1.1.0 (December 6, 1996):

	- Fixed inequality bug in neighborUp().
	- Fixed off-by-one ack_deficit bug in neighborUp() (Joe Ramey).
	- Fixed pfds[] ABW bug for USE_POLL (Joe Ramey).
	- Added anonymizer options; compile with USE_ANONYMIZER (Lutz
	  Donnerhacke).
	- Added Gauntlet proxy support to ftpget (Mukaigawa Shin'ichi).
	- Changed UDP_HIT_OBJ to be disabled by default.
	- Updated doc/Release-Notes-1.1.txt

==============================================================================

Changes to squid-1.1.beta28 (December 5, 1996):

	- Fixed missing CR on Not-Modified replies (Balint Nagy Endre)
	- Fixed not truncating multi-word content-types.
	- Fixed ABR bug due to too-small redirector buffers.
	- Fixed ABR in httpBuildRequestHeader().
	- Removed asynch_io code.

Changes to squid-1.1.beta27 (December 4, 1996):

	- Fixed wrong number of args to debug().
	- Make failure to start any dnsservers fatal.
	- Fixed dnsGetFirstAvailable() to skip dead dnsservers.
	- Fixed loop detection for two squids on the same host (Mark
	  Treacy)
	- Fixed strcasecmp bug which broke some POST requests.

Changes to squid-1.1.beta26 (December 3, 1996):

	- Another 'rm -rf' fix for store.c (Bernd Ernesti).
	- Use of the Host: header for httpd_accel requests is now
	  disabled unless 'httpd_accel_uses_host_header' is set.
	- Have configure check for libgnumalloc.a.
	- Added support for using poll() instead of select(); enable
	  USE_POLL_OPT in src/Makefile (Stewart Forster, Anthony
	  Baxter).
	- Fixed httpBuildRequestHeader() 'strcat' bug (Andres Kroonmaa).
	- Changed store.log to include date, last-modified, and
	  expires timestamps, plus content-type.
	- Added content-type to access.log too.
	- parse HTTP timestamps directly in httpParseReplyHeaders().
	- moved timestampsSet() to storeTimestampsSet().
	- fixed ACL '/32' bug (Ansgar Hockmann).

Changes to squid-1.1.beta25 ():

	- Check if we should delete-behind large objects when above LOW
	  water mark.
	- Merged request header parsing code from http.c and pass.c
	  into httpBuildRequestHeader().
	- Fixed 'rm -rf' command in store.c.
	- Changed viz_hack stuff to use multicast.

Changes to squid-1.1.beta24 ():

	- Added 'cache_stoplist_pattern' to squid.conf
	- Remove trailing slashes from FTP URLs.
	- Added 'passthrough_proxy' support.
	- Added "default parent" support with a 'default' option for
	  cache_host config line.
	- Upgraded autoconf to 2.10.
	- Strip Proxy-Connection request headers.
	- Do not return UDP_HIT for objects which will soon be stale.
	- Parse/Filter HTTP request headers in passthrough module.
	- Fixed parsing hostnames with dashes in 'src' ACLs.
	- Added warning message when forwarding loops detected.
	- Split getSingleParent() into getSingleParent() and
	  neighborsCount().
	- Dont check sibling caches for REFRESH requests.
	- Add X-Forwarded-For: header which is the comma-separated
	  list of client addresses along the request path.
	- Fixed icpDetectClientClose() to check if Content-Length
	  bytes have been delivered.

Changes to squid-1.1.beta23 (November 25, 1996):

	- Fixed "viabuf" memory leak.

Changes to squid-1.1.beta22 (November 25, 1996):

	- Fixed xstrncpy() bug in mime_get_header().
	- Fixed Via: header.
	- Fixed Host: header for proxy requests.
	- Fixed re-initializing client_db and net_db hash tables upon
	  SIGHUP (Cord Beermann).
	- Mucked with regex stuff so HP users don't have to put up with
	  GNUregex (Markus Gyger).
	- Changed SQUID_MAXFD back to FD_SETSIZE.
	- Fixed checking Max-age in httpSendRequest().
	- Made failure to fork ftpget fatal.
	- Call *FreeMemory() routines only if debugging.

Changes to squid-1.1.beta21 (November 22, 1996):

	- Fixed setting entry->timestamp for NOT MODIFIED replies.
	- Changed old HTTP/1.1 Forwarded: header to new Via:.
	- Fixed needlessly calling storeSwapFullPath() in
	  storeSwapOutHandle() (Mark Treacy).
	- Simplified hash linking (Mark Treacy).
	- Write pid_filename by default (Markus Gyger).
	- Changed "Invalid dnsserver output" to non-fatal debug_trap()
	  (Joe Ramey).
	- Changed STORE_IN_MEM_BUCKETS to the prime 229 (Neil Murray).
	- Changed FD_SETSIZE to SQUID_MAXFD (Jonathan Larmour).
	- Strip :port from Host: header if present.
	- Reschedule fqdncache_dnsHandleRead() to prevent dnsservers
	  from getting stuck (Makoto Ishisone).
	- Fixed handing SSL requests inside firewalls (Akira Sato).
	- Fixed passthrough neighbor selection bug (Akira Sato).
	- Removed 'post_buf' stuff from http.c.

Changes to squid-1.1.beta20 (November 17, 1996):

	- Changed neighbor_domain_type to neighbor_type_domain in
	  squid.conf.
	- Changed all 'xstrerror' debug messages to section 50.
	- More const fixes (Markus Gyger).
	- Added xstrncpy() which null-terminates (Markus Gyger).
	- Fixed Cache-Control counting in HTTP reply header stats.
	- Relocated rfc1738_unescape() calls in ftpget so that
	  ftp://foo.org/%2fbar/ works (Jonathan Larmour).
	- Fixed forwarding loop for a pair of neighbors behind a firewall.
	- Cleaned up ftpget non-blocking flags (Jean-Hugues ROYER).

Changes to squid-1.1.beta19 (November 13, 1996):

	- Fixed havoc-wreaking getsockname() bug (Noriyuki Soda
	  <soda@sra.co.jp>).
	- Fixed InvokeHandlers() debug_trap bug.
	- Lock entry while calling swapin handler in case someone tries to
	  release it.
	- Changed configure to allow overriding of XTRA_LIBS in config.site.
	- Fixed comm_accept() FMR bug.
	- Replaced MemObject->fd_of_first_client structure member with
	  storeFirstClientFD() function.

Changes to squid-1.1.beta18 (November 13, 1996):

	- Fixed 'void *buf' bug icpCreateMessage() (Jean-Hugues ROYER).
	- Fixed more NULL 'friends' bugs.
	- Added debug_trap for NULL mem->clients in InvokeHandlers()
	  (Mark Treacy).

Changes to squid-1.1.beta17 (November 12, 1996):

	- Fixed NULL friends coredump in neighbors_open().
	- Added setting HAVE_TEMPNAM back to the configure script.
	- Fixed h_errno bug on NeXTStep (frank@langen.bull.de).
	- Fixed expiresMoreThan() bug causing all UDP_MISS replies.
	- Changed 'background.c' to 'event.c' and merged all periodic
	  functions into an event queue.
	- Renamed httpParseHeaders() to httpParseReplyHeaders().
	- Added support for sending HTTP/1.1 'Cache-Control: max-age=X'
	  in requests.  The max-age value is taken from the
	  'refresh_pattern' rules.
	- Added support for parsing max-age in client request.
	- Split icpUdpSend() into simpler icpUdpSend() plus
	  icpCreateMessage().
	- Force storeAbort() for dispatched objects in
	  asciiLifetimeHandle().
	- Fixed firewall-related bug when the DNS lookup fails.
	- Fixed '#define HAVE_GETRUSAGE' bug (Takahiro Yugawa).
	- Made storeStartDeleteBehind() quiet for 'no-proxy' neighbors.
	- Fixed log_quote() signed/unsigned bug (Ron Gomes).

Changes to squid-1.1.beta16 (November 8, 1996):

	- Fixed type of Config.level{One,Two}Dirs.
	- Fixed calling storeRegister and storeUnregister with NULL a entry.
	- Fixed objcache "squid.conf" request and now require a
	  password for it (Jan.Harkes@cwi.nl).
	- Added check for dotted-quads in matchInsideFirewall()
	  (Andreas Lamprecht).
	- Fixed up some HTTP/1.1 Cache-Control parsing (Ed Knowles).
	- Fixed IP ACL memset() bug when -DPURIFY=1.
	- Resurrected storeEntryValidToSend().
	- Moved storeSetPrivateKey() calls to storeReleaseRequest().
	- Added separate config line (neighbor_type_domain) for modifying
	  neighbor type (parent vs. sibling) for certain domains.  Adding
	  it to cache_host_domain doesn't provide needed flexibility.
	- Added User-Agent log patch (Joe Ramey).
	- Added httpd-accel Host: patch (Miguel A.L. Paraz).
	- Changed ident lookup stuff to require the lookup before
	  checking ACL's.  If you have 'ident_lookup on' then this
	  may cause noticable delay while waiting for the ident
	  lookup.
	- Fixed storeSwapOutHandle() FMR bug.
	- Stopped inserting incorrect Host: header for proxy-HTTP requests.

Changes to squid-1.1.beta15 ():

	- Fixed entry->clients[].fd initialization bug causing all
	  large objects to get stuck.
	- Changed /www.nlanr.net/Squid/ to /squid.nlanr.net/Squid/.

Changes to squid-1.1.beta14 ():

	- Added pw_encrypt() check to configure.
	- Added 'cache_stop_relist' for a regular expression based
	  stoplist.
	- Fixed checkRefresh() to not cause IMS request for objects
	  which have not yet expired, but are past the LM-factor.
	- Fixed asciiConnLifetimeHandle() to force storeAbort() for
	  pending objects.
	- Made lots of variables and args 'const' (Markus Gyger).
	- Added cachemgr password support in squid.conf (Yaroslav M.
	  Levchenko).  Each cachemgr operation may have a separate
	  password.  Shutdown and all "log" operations must be
	  password-protected.
	- Removed debug_trap() calls in squid_error_entry().
	- Removed InvokeHandlers() call from StoreAbort().
	- Added icpHandleAbort() to deliver abort messages, if at all.
	- Added passthrough module (pass.c) for POST, et. al.
	- Fixed purify bugs in storeCloseLog() and storeSwapInHandle().
	- Merged store 'pending list' into 'client list.'
	- Made number of first- and second-level swap directories
	  configurable (Ralph Loader).

Changes to squid-1.1.beta13 (November 1, 1996):

	- Fixed base64_code[] typo bug (Joe Ramey).
	- Fixed errors being returned as empty objects.
	- Changed order of sanity checks in neighborsUdpAck().
	- Made swap log pathname configurable with 'store_swap_log'.
	- Made 'http_accel virtual 80' same as -V on command line.
	- Fixed string termination bug in base64_decode() (Joe Ramey).

Changes to squid-1.1.beta12 (October 31, 1996):

	- Fixed ICMP 'pinger' failure detection.
	- Fixed handling of no-cache for negative-cached objects.
	- Replaced protoUnregister() call in icpDetectClientClose().
	- Fixed calling storeReleaseRequest() on unlocked objects.

Changes to squid-1.1.beta11 (October 29, 1996):

	- Fixed rfc1123() to use actual RFC1123 time format.
	- Made Store Hash parameters configurable
		- store_objects_per_bucket
		- store_avg_objects_size
	- Fundamental changes to object TTLs; now think in terms of
	  refresh times.  Replaced 'ttl_pattern' with 'refresh_pattern'.
	- Dropped 'http', 'ftp', and 'gopher' config options.
	- Added a single 'maximum_object_size' value.
	- Moved storeStartDeleteBehind() calls from http/ftp/gopher to
	  storeAppend().
	- Moved storeClientListAdd() call from store to client/icp
	  because of storeClientCopy() race condition between IMS
	  replies and objects in delete behind mode.
	- renamed TCP_EXPIRED* to TCP_REFRESH*.
	- Stopped appending error messages to partially delivered
	  objects.
	- Removed protoUnregister() call in icpDetectClientClose()
	  as probable cause of storeReleaseRequest() warnings.
	
Changes to squid-1.1.beta10 (October 24, 1996):

	- Fixed neighborsUdpAck() coredump bug and made debug messages
	  more consistent.
	- Removed old REQ_ACCEL test (Miguel A.L. Paraz)
	- Fixed process RSS value for SGI (Ed Knowles).
	- Fixed parseAddressLine() to use gethostbyname(3) because
	  its called before ipcache_init(). (Miguel A.L. Paraz)
	- Fixed announce bug since beta7 causing caches to be announced
	  regardless of 'announce_to' setting.  (Paul Southworth)
	- Fixed pinger 'last_check_time' bug.
	- Changed storeEntry->flag and storeEntry->refcount back to
	  32-bit ints.
	- Removed extra "\r\n" for abort error messages.
	- Numerous hash fixes from Mark Treacy.
	- Renamed rfc850 to rfc1123.
	- Changed storeRelease to not make recursive call for HEAD
	  objects.
	- Changed return value semantics of storeRelease().

Changes to squid-1.1.beta9 (October 21, 1996):

	- Added 'make depend' target to Makefiles.
	- Fixed changing the wrong instance of 'opt_catch_signals'
	  in tools.c for beta8.
	- Fixed xmemcpy macros in include/config.h (Ed Knowles).
	- Fixed logging of "TCP_EXPIRED_MISS/304."

Changes to squid-1.1.beta8 ():

	- Added client_db.c; keeps stats on clients, use cachemgr
	  to view client list.
	- Stop sending ICP_OP_DENIED to clients if 95% of their
	  queries are denied (then they'll think we're dead).
	- Fixed objects getting stuck in VM when handling aborted
	  requests in icpHandleIMSReply().
	- If IMS verification fails, send the old object and log it
	  as TCP_EXP_FAIL_HIT.
	- Added Host: header to HTTP requests.
	- Disable dnsservers with 'dns_children 0' in the config file.
	- Disable ftpget with 'ftpget_program none' in the config
	  file.  Also ftpget is disabled for http_accel mode.
	- Changed cachemgr stats/objects listing format.
	- Added some missing "entry->refcount++"
	- Changed StoreEntry->timestamp to be the last verification time.
	  (was the stored-on-disk time).
	- Fixed stuck objects from "304 Not Modified" responses without
	  final blank line.
	- Added failure detection to icmpRecv().
	- Fixed backwards logic in debug_trap().
	- Fixed neighbor caches remaining in 'DEAD' state.  Reorganized
	  handling ICP replies so neighborsUdpAck gets called for
	  most every reply.

Changes to squid-1.1.beta7 (October 14, 1996):

	- Combined and renamed comm_set_select_handler() functions.
	- Fixed netdbPingSite() not checking n->next_ping_time.
	- Fixed acl.c to use regular gethostbyname() because IP cache
	  isn't initialized while reading config file.
	- Linked ftpget with debug.o and removed lib/debug.c,
	  lib/log.c.
	- Fixed matchDomainName() coredump for late ICP packets.
	- Removed date string from syslog messages.
	- Fixed ftpget BASE HREF.
	- Fixed pinger to check squid socket every 10 seconds.

Changes to squid-1.1.beta6 ():

	- Fixed lots of function prototypes, etc (Ed Knowles).
	- Added multicast patch (Martin Hamilton).
	- Replaced 'struct hostent' with 'struct ipcache_addrs' in IP
	  cache.
	- Added ipcacheCycleAddrs() to round-robin IP addresses.
	- Added ipcacheRemoveBadAddr() to remove addresses from failed
	  connect()'s.
	- Changed comm_connect() to comm_nbconnect() and removed other
	  nonblocking connection handling code from other modules.
	- Improved cache memory usage.  Now cache_mem specifies the
	  size of the in-memory data pool.  Hot objects use whatever
	  space is not used by in-transit objects.
	- Removed 'max_hot_object_size' config option.
	- Fixed virtual-host coredump bug (Aaron Hopkins).

Changes to squid-1.1.beta5 (October 7, 1996):

	- Fixed coredump in storeFreeMemory().
	- Fixed displaying repeated IP addresses in IP cache contents.
	- Added parent/sibling modifiers to cache_host_domain lines.
	- Added 'miss_access' to restrict fetching HTTP MISS requests.
	  Use this to force your peer caches to use you as a sibling and
	  not as a parent.
	- Added browser ACL patch (Carson Gaspar).
	- Added reading ACLs from file patch (Arjan de Vet).
	- Squid-1.0 changes up to 1.0.18.
	- Added release/cleanup functions to net_db.c.
	- Added 'minimum_direct_hops' config option.

Changes to squid-1.1.beta4 (September 26, 1996):

	- Fixed coredump in icpStateFree() when calling
	  checkFailureRatio().
	- Added more stuff to net_db.c.
	- Fixed memory leak in stat_ipcache_get().
	- Changed __P back to _PARAMS.
	- Fixed authorization parsing bug in ftp.c (Yoichi Shinoda).
	- Allow ICP socket on priveledged ports.
	- Added trap for STORE_PENDING objects when lock_count == 0.
	- Replaced 'cache_hot_vm_factor' with 'max_hotvm_obj_size'.
	- Moved ICMP socket to external 'pinger' program.
	- Moved tvSubMsec() to lib/util.c.
	- Moved accessLogTime() to debug.c.
	- Fixed handling of race condition in icpHandleIMSReply().
	- Fixed "\r\n\0" bug in gopherSendRequest();
	- Fixed cachemgr output for non-table browsers (Cord Beermann).
	- Moved accept() for dnsserver into Squid.
	- New SVR4 config stuff in contrib directory (Markus Gyger).
	- Includes squid-1.0 changes up to 1.0.17.
	- Fixed storeWriteCleanLog() bug which caused released objects
	  to be kept.
	- Added *FreeMemory() routines.

Changes to squid-1.1.beta3 (September 16, 1996):

	- s/()/(void)/
	- Fixed 8k page leak in icmpRecv().
	- Use strerror() if available instead of sys_errlist[].
	- Misc ANSI-related cleanup.
	- Added 'cache_stoplist' to specify things which should
	  never get saved to disk.
	- Merged some parsing routines into parseWordlist().
	- Fixed icpHandleIMSReply() bug when HTTP reply headers
	  received in multiple reads.
	- Changed all ipcache_nbgethostbyname() handler functions
	  to be void.
	- Fixed bug when storeLockObject() fails for UDP_HIT_OBJ
	  replies.
	- Simplified storeGet().
	- Removed meta_data.hash_links member.
	- Includes squid-1.0 changes up to 1.0.16.
	- s/__STRICT_ANSI__/__STDC__/g

Changes to squid-1.1.beta2 (September 12, 1996):

	- Switched to ANSI style coding.
	- Fixed UDP_HIT_OBJ objects ignoring 'proxy-only' setting.
	- Added setting cachemgr.cgi fields from query string
	  (Neil Murray).
	- Split log type TCP_IFMODSINCE into TCP_IMS_HIT and
	  TCP_IMS_MISS
	- Replaced proto_hit() and proto_miss() with proto_count()
	  which looks at log_type argument to calcultate hits
	  and misses.
	- Split CacheInfo into HTTPCacheInfo and ICPCacheInfo.
	- Placed call to proto_count() just after log_append()
	  so we only need it in one place.
	- Made a lot of proto.c functions static and added prototypes.
	- Fixed icpProcessRequest() bug.  Need to check EXPIRED
	  before IMS.
	- Fixed aclDestroyDenyInfoList() to NULL free'd lists.
	- Fixed storeDirClean() to unlink files which should be
	  directories (Cord Beerman).
	- Added ICMP support.  Source ping will use ICMP packets if
	  compiled with -DUSE_ICMP=1 and started with root privleges.

Changes to squid-1.1.beta1 (September 12, 1996):

	- Fixed stupid coredump bug in storeGetSwapSpace().
	- Cleaned up gopher.c; prototypes, make functions static, etc.
	- Added READ_DEFERRED entry flag.  Only extend lifetime when
	  first entering deferred mode.
	- Added debug_trap() to replace some fatal_dump()'s.  Now use
	  debug_trap for non-fatal errors.  If -C option is set,
	  then debug_trap is the same as fatal_dump.

Changes to squid-1.1.alpha18:

	- Fixed storeCheckPurgeMem() to both 'purge' *and* 'release'
	  objects as needed. 
	- Fixed up RWStateCallbackAndFree() to prevent it from getting
	  called twice.
	- Added 'deny_info' support for redirecting denied requests to
	  a specific URL (maex@space.net).  
	- Fixed protoUnregister() to not abort objects being swapped in.
	- Fixed parent-stays-dead-bug by removing PING_WAITING
	  check in icpHandleIcpV?().
	- Changed debug log timestamp format.
	- Fixed coredump-causing bugs in icpHandleIMSReply().
	- Fixed FMR bug in neighborsUdpAck() for UDP_HIT_OBJ replies.
	- Fixed up InvokeHandlers() to clear handler before calling.
	- Added -k signal option to signal a running Squid (Markus Gyger).
	- Removed dynamic_array code.

Changes to squid-1.1.alpha17:

	- Added more IMS support.  Now Squid issues IMS requests for
	  expired objects in the cache.  Log type will be either
	  TCP_EXPIRED_HIT if the server sends "304 Not Modified" or
	  TCP_EXPIRED_MISS if the server send a new object.
	- Added Config.expireAge and 'expire_age' to config.
	- Fixed storeGetMemSpace() bug; need to check
	  storeCheckPurgeMem() instead of storeEntryLocked().
	- Renamed icp_hit_or_miss() to icpProcessRequest().
	- Changed mkrfc850() to use normal variable instaed of a
	  pointer.
	- Removed store_entry member from fd_table[] in comm.h.
	- Changed httpSendRequest to not tack Squid onto the 'User-Agent'
	  line, Use HTTP/1.1 'Forwarded' instead.
	- Removed icpProcessHIT() which only called icpSendMoreData().
	- Removed icpProcessIMS() which only called icpGetHeadersForIMS().
	- Removed some 'Reset header fields for reply' crap.
	- added old_entry member to icpStateData for handling IMS
	  requests.
	- Added 'locks' member to ipcache_entry; need to lock an
	  ipcache entry during ipcache_call_pending().
	- Removed ipcache_call_pending_badname().
	- Cleaned up setting/clearing IP_LOOKUP_PENDING bit.
	- Removed storeEntryLocked() trap in storePurgeMem().
	- Added storeCheckExpired().
	- Removed storeWalkThrough() and removeOldEntry(), changed
	  storePurgeOld() to do the walking through instead.
	- Added storeConfigure() so HUP signal affects store_swap size.
	- Replaced some parsing functions with parseMinutesLine().
	- Added StoreEntry flag bit ENTRY_NEGCACHED.
	- Added storeNegativeCache().

Changes to squid-1.1.alpha16:

	- Fixed ipcache TTL bug from new ipcache_parsebuffer().
	- Copied recent ipcache.c changes to fqdncache.c
	- Copied icpHandleIcpV2() fix to icpHandleIcpV3().
	- incorporate squid-1.0.12 changes.

Changes to squid-1.1.alpha15:

	- Removed 'bad swap_status' trap in icpHandleIcpV2.
	  Now skip ICP replies for StoreEntry's with ping_status
	  != PING_WAITING.
	- Fixed numerous compiler problems.

Changes to squid-1.1.alpha14:

	- Fixed ENTRY_DISPATCHED bug.  ENTRY_DISPATCHED was not always
	  getting set (e.g. for requests matching hierarchy_stoplist).
	  This could cause multiple calls to storeAbort() for the same
	  entry.
	- With ENTRY_DISPATCHED now fixed, call squid_error_entry()
	  from protoUnregister() for StoreEntries which have not
	  been dispatched.
	- Fixed 'quick_abort' parsing bug.
	- NULL terminate too-long URL strings in urlParse().  Still
	  need fix to somehow handle these.
	- Added shadow password patch from John Saunders
	  <johns@rd.scitec.com.au>
	- Added _dns_ttl_ hack from bne@CareNet.hu to get real TTL
	  values from DNS queries.  See Release-Notes-1.1.txt for more
	  info.
	- Added better '304 Not Modified' reply from Jaeyeon Jung
  	  <jyjung@cosmos.kaist.ac.kr>.
	- Rewrote ipcache_parsebuffer().
	- Fixed stupid clientProxyAuthCheck() bugs.
	- Made IP cache size configurable with 'ipcache_size'.
	- Fixed bug parsing 'cache_swap_low'.
	- Added -b option to ftpget to limit data transfer rate
	  (bytes/sec).  Specify on 'ftpget_options' in config file.
	- Miscellaneous filedescriptor management cleanup.
	- Renamed function getFromCache() to protoStart().
	- Added delays when forking dnsservers, redirectors, and
	  ftpget.
	- Includes 1.0 changes up to 1.0.11.

Changes to squid-1.1.alpha13:

	- oops, there was no alpha13.

Changes to squid-1.1.alpha12:

	- Rewrote storeGetMemSpace().
	- Fixed hot_vm accounting; only count objects which are added
	  to the IN_MEMORY table.
	- Changed protoUndispatch() to never call squid_error_entry().
	  Should fix storeSwapOutHandle() and 'HELP! Someone is
	  swapping out a bad entry' coredumps.
	- Report all error pages to the debug log.
	- Added -i option which forces IP cache entry to be invalidated
	  just after an object retrieval begins.
	- Includes all squid-1.0 changes up to squid-1.0.10.
	- Added patch from srb@cuci.nl (Stephen R. van den Berg) for
		- ttl_force_pattern
		- quick_abort min pct max
	- Added a proxy authentication patch from Jon Thackray
	  <jrmt@uk.gdscorp.com>.  Must add -DUSE_PROXY_AUTH=1 to src/Makefile.
	- Cleaned up calling maintenance functions from main().

Changes to squid-1.1.alpha11:

	- Fixed sscanf() bug in storeDirClean()
	- Fixed coredump in squid_error_entry() on Config.errHtmlText.
	- Added redirector stats entry to cachemgr.cgi.
	- Call ipcache_purgelru() during an idle timeout.
	- Changed fqdnFromAddr() to copy inet_ntoa() result into a 
	  static buffer.
	- Fixed storeDirClean() printf format.

Changes to squid-1.1.alpha10:

	- Fixed directory increment bug in storeDirClean().
	- Misc little changes trying to track town random coredumps.
	- Includes all squid-1.0 changes up to squid-1.0.8.

Changes to squid-1.1.alpha9:

	- Fixed parsing of redirected URLs.
	- Changed URL redirection to pass in client address, ident, and method.
	- Fixed NULL pointer coredump in log_append().
	- Don't swap negative-cache objects to disk (storeCheckSwappable())
	- Only purge MemObject if entry is swapped to disk.
	- Includes all squid-1.0 changes up to squid-1.0.7
	- Fixed purify free memory errors in clientAccessCheck().

Changes to squid-1.1.alpha8:

	- Removed all references to hierarchy.log.
	- Changed hierarchy_log_append() to hierarchyNote() and added
	  _hierarchyLogData structure.
	- Fixed "tty input" bug where a reverse lookup request was
	  written to stdout.
	- Cleaned up pointers in protoUnregister().
	- Includes all squid-1.0 changes up to squid-1.0.6.
	- cache_swap 0 is allowed (proxy only server, no swapping), mainly
	  intended for fast maintenance startups where the system already
	  has to be running, but the disk(s) have not been fsck'd yet.
	- quick_abort actually works now
	- quick_abort functionality made conditional
	- ttl_pattern storage wasn't being cleaned upon a reread of
	  the config file (the patterns were added only, got duplicates)
	- ttl_force_pattern a new config option to override the settings
	  of certain pages despite (or because) of enforced low expiry times

Changes to squid-1.1.alpha7:

	- Added 'tcp_recv_bufsize' option to config.
	- Changed NEIGHBOR to SIBLING where appropriate.
	- Split UDP_HIT_OBJ into {PARENT,SIBLING}_UDP_HIT_OBJ
	- Misc casts and cleanup from running Insight.
	- Replaced all get*() functions with direct references to
	  Config structure.
	- Removed 'http_stop', 'ftp_stop', and 'gopher_stop' from config.
	- Added 'ssl_proxy' config for forwarding all SSL requests to
	  another proxy.
	- Includes all squid-1.0 changes up to squid-1.0.5.

Changes to squid-1.1.alpha6:

	- Changed storage manager to use a two level directory
	  structure.  This makes squid-1.1 incompatible with squid-1.0!
	  (Mark Treacy).
	- Added last modification time to the StoreEntry structure, and
	  the swap log.
	- Changed how memory passed to comm_write() gets freed.  Now
	  pass in a free handler function which gets called when the
	  RWStateData structure is destroyed.
	- Other misc cleanup.
	- Added a reverse-address-lookup cache (``fqdncache'').
	- Added support for threaded ACLs for destination IP addresses
	  and source hostnames.
	- Use aclMatchDomainList() instead of aclMatchWord() for domain names.
	- Renamed cachemgr 'stats/general' to 'stats/ipcache'.
	- Added 'log_fqdn' option to config file.
	- Added 'client_netmask' to config file.

Changes to squid-1.1.alpha5:

	- Got Asynchronous I/O stuff to compile and run on IRIX 5.3
	- Cleaned up diskHandleWrite()
	- Added free() handler to struct dwrite_q so diskHandleWrite()
	  can free memory after its been written.
	- Changed file_open() to not allow files to be opened O_RDWR.
	- Changed file_open() to always set O_APPEND for O_WRONLY files.
	- Includes all squid-1.0 changes up to squid-1.0.2.

Changes to squid-1.1.alpha4:

	- Fixed Asynchronous Disk I/O routines to basically work.
	- Fixed memory write bugs when using the redirector.
	- Added support for non-anonymous FTP urls without needing a
	  password in the URL.

Changes to squid-1.1.alpha4:

	- Changed cachemgr detailed filedescriptor info to be a separate item.
	- 'no-cache' reload now discards bad IP cache entries too.
	- Added 'echo request' URL hack:  http://cachehost:3128/echo
	- Added URL redirector feature.
	- Addeed 'ident_lookup' option to config file
	- Fixed http to never rely on blocking IP cache lookups.
	- Removed need for locked IP cache entries.
	- Changed free page stacks to always free pages if more than
	  'max' are allocated.

Changes to squid-1.1.alpha3:

	- Added Asynchronous Disk I/O routines from Pete Bentley.
	  (NOTE, not yet working for IRIX 5.3).
	- Made squid native access log the default format.

Changes to squid-1.1.alpha2:

	- Added support for RFC931/ident

==============================================================================

Changes to squid-1.0.18 (October 7, 1996):

	- Added INADDR_NONE to cachemgr.c for Solaris.
	- Added checks to deal with Harvest Cached neighbors which don't
	  handle Squid's ICP version 2.

Changes to squid-1.0.17 (September 24, 1996):

	- Fixed cachemgr.cgi to handle an arbitrary IP address (Ron
	  Gomes)
	- Fixed syslog() calls to use syslog(X, "%s", buf) (Yoichi
	  Shinoda).
	- Copied ipcache locking stuff from v1.1.
	- Copied httpConnect() from v1.1 for non-blocking DNS lookups.
	- Fixed "\r\n\0" bug in gopherSendRequest();

Changes to squid-1.0.16 (September 16, 1996):

	- Fixed shadow passwd support (John Saunders).
	- Added checkFailureRatio() to detect high fail:success ratios
	  and go into ICP "hit only" mode for 5 minutes when the ratio
	  exceeds 1.
	- Added ip_acl_destroy() to reset 'local_ip' and 'firewall_ip'
	  on HUP signal.

Changes to squid-1.0.15 (September 13, 1996):

	- Fixed stupid bugs from moving icpState->flags to
	  request->flags.

Changes to squid-1.0.14 (September 13, 1996):

	- Added '#if DELAY_HACK' code for Mike Groeneweg
	  <mikeg@scorpion.murdoch.edu.au>.
	- Fixed debug bug in ttlSet().
	- Moved icpState->flags to request->flags.
	- Fixed edgeWouldBePinged() to skip SIBLINGS and NO-CACHE
	  requests.
	- Fixed bad SET/TEST in httpProcessReplyHeader() (Miguel A.L.
	  Paraz).

Changes to squid-1.0.13 (September 12, 1996):

	- Fixed ftpget parsing PASV reply bug (Carson Gaspar).
	- Forced include of <netinet/in_systm.h> for NeXT (Holger
	  Hoffstaette).
	- Promulgate tcp_outgoing_addr to ftpget with -o option (Edward
	  Moy).
	- add Date: header to Squid-generated Gopher objects (Geoffrey
	  Keating).
	- cachemgr.cgi HTML fixes (Cord Beermann).
	- Collapsed some config parsing functions to parseOnOff().
	- Added config option: memory_pools on|off
	- Added config option: udp_hit_obj on|off
	- Added config option: forwarded_for on|off
	- Copied better stmem.c and stack.c routines from v1.1 code.
	- Added support for HTTP/1.1 Cache-Controls 'private' and 
	  'no-cache'.
	- Copied dnsserver "hello/alive" test from v1.1 code.

Changes to squid-1.0.12 (September 3, 1996):

	- Fixed urlCheckRequest() to allow CONNECT/SSL requests.
	- Change default socket send/receive buffers to 16k (in
	  configure) instead of 8k, mainly for Solaris.
	- Fixed urlParse() to remove trailing dots from hostnames.
	- Added 'ttl_pattern/i' config tag for case-insensitive
	  regular expressions.
	- Fixed swapin_complete_handler FMW bug in storeSwapInHandle().
	- Removed 'Invalid object detected' trap in storeValidToSend().

Changes to squid-1.0.11 (August 30, 1996):

	- Fixed ENTRY_DISPATCHED bug.  Now set ENTRY_DISPATCHED
	  only in getFromCache().
	- Added missing newlines to a number of debug messages.
	- NULL-terminate long URL's in urlParse().
	- Changed configure to remove libmalloc for FreeBSD
	- Changed ftpget to assume a single space between date and 
	  filename in Unix sytle listings.
	- Added urlCheck() to check for supported method/protocol
	  combinations and return "501 Not Implemented" when
	  appropriate.
	- Added ftpget check for negative port numbers in PASV
	  reply.
	- Added shadow password support for cachemgr shutdown.

Changes to squid-1.0.10 (August 26, 1996):

	- Fixed INADDR_NONE not being set for ftpget.c.
	- Remove "Connection: Keep-Alive" lines from HTTP requests
	  since Squid doesn't support them.
	- Fixed IP Address/netmask bug.  Now 1.2.3.4/255.255.255.0 is
	  equivalent to 1.2.3.0/255.255.255.0.

Changes to squid-1.0.9 (August 22, 1996):

	- Cleaned up ipcache_purgerlu().
	- Fixed ipcache_gethostbyname() to release expired entries.
	- Added check for numeric addresses to ipcache_nbgethostbyname().
	- Added Date: field to ftpget's HTTP header output.
	- Added temporary hack to httpProcessReplyHeaders() to allow
	  caching of non-HTTP objects fetched from neighbors when
	  the header does not have Date, Expires, or Last-Modified.
	- Added a check for a valid ICP socket before sending ICP
	  queries.
	- Fixed SSL code to unregister DNS lookups if client aborts.
	- Removed lib/host_cache.c from distribution.
	- Made IP cache stats output sorted by last reference.
	- Added ICP internet-draft to docs directory.

Changes to squid-1.0.8 (August 19, 1996):

	- Added ftpget fixes from carson@lehman.com and moy@parc.xerox.com.
	- Fixed -s option to enable syslog logging.
	- Added 'err_html_text' for configurable error messages.
	- Fixed protoDispatchDNSHandle() to not try a direct fetch if
	  host is beyond firewall_ip list.
	- Changed storeDirClean() to handle one directory per call and
	  not keep the dirhandle open between calls.
	- Changed .zip MIME type to "application/x-zip-compressed".
	- Added new 'url_regex' ACL type, regular expression match over
	  the whole URL.
	- Removed xrealloc() call from storeClientListAdd().

Changes to squid-1.0.7 (August 14, 1996):

	- Added "store_clean" routines to periodically remove orphaned
	  swap files.
	- Increased StoreEntry->method_t from 3 to 4 bits, probably fixes
	  storeGenerate*Key() coredumps.
	- Added debugging to examine_select().
	- Added peer address to debugging for Ignored ICP packets.

Changes to squid-1.0.6 (August 12, 1996):

	- Fixed coredump in icpStateFree() for bad requests.
	- Fixed configure bug in determining FD_SETSIZE.
	- Fixed garbage collection to stop if SIGTERM received.
	- Fixed pid file to be written just before 'ready to serve requests'.
	- Fixed CheckQuickAbort() lock_count bug.
	- Fixed setting the hierarchy code for access.log when the 
	  hierarchy.log is disabled.
	- Fixed urlParse() to fail for URLs longer than MAX_URL bytes.
	- Fixed icpDetectClientClose() to detect TCP half-close and
	  not abort the connection.

Changes to squid-1.0.5 (July 25, 1996):

	- Added ICP_OP_RELOADING to be used instead of ICP_OP_DENIED
	  for -Y option.
	- Moved hierarchy_code for access.log from MemObject to
	  request_t so simultaneous client readers don't get the same
	  hierachy code.

Changes to squid-1.0.4 (July 24, 1996):

	- Fixed ftpget logic/precedence bug
	- Fixed ttlSet() to choose TTL as offset from when the object
	  was originally served, not the current time.
	- Fixed configure bug with setting GETTIMEOFDAY_NO_TZP.
	- Removed unnecessary call to ipcache_gethostbyname() in
	  sslConnect().
	- Fixed stupid memset() bug in gopher.c causing
	  a huge block of stack memory to be zeroed.

Changes to squid-1.0.3 (July 18, 1996):

	- Fixed FTP to send 'Ascii' or 'Binary' based on MIME encoding,
	  not content-type.
	- Changed icpHierarchical() to allow IMS requests to neighbors
	  if they all support Squid's private keys.
	- Fixed icpUdpSend() to not ask for a HIT_OBJ reply if the
	  HTTP request included 'Pragma: no-cache'.

Changes to squid-1.0.2 (July 16, 1996):

	- Fixed HTTP code in access.log for TCP_IFMODSINCE requests.
	- Fixed SSL to not read again until previous write is complete.
	- Added CPU usage percentage in cachemgr 'info' output.
	- Fixed bug when removing a neighbor.  Forgetting to decrement
	  friends->n causes a duplicate ICP query to be sent in
	  neighborsUdpPing().
	- Increased some MAX_URL sized character buffers to prevent
	  overflows.

Changes to squid-1.0.1 (July 8, 1996):

	- Fixed ftpget server looping on socket EOF condition.
	- Fixed SA_RESETHAND undefined bug.
	- Fixed half-hour timezone offset bug.
	- Fixed parse_rfc850() to return -1 instead of 0 upon error.
	- Added patch for Motorola systems from Tony Lorimer.
	- Added support for HTTP PUT method.
	- Added check for <netinet/tcp.h> for HP-UX.
	- Added GNU General Public License.
	- Changed ttlSet() to use Date field if Last-Modified is absent.
	- Changed http.c to not save objects from neighbors which do
	  not have Date, Last-Modified, or Expires values.
	- Changed some large local character arrays to static.

Changes to squid-1.0.0 (July 1, 1996):

	- Fixed beta17 "fd_lifetime" typo bug
	- Added 'firewall_ip_list' to configuration options
	- Set resolver options to disable searching default domains
	  and parent domains.
	- Added blocking-rebuild -F option.
	- Fixed storeMaintainSwapSpace to be called every 10 seconds.
	- Fixed ICP_HIT_OBJ bug causing objects to get stuck in VM.
	- Fixed matching the ends of domain names (e.g. bar.com no 
	  longer matches foobar.com).
	- Fixed checking return code from fprintf() while writing the
	  clean swap log.
	- Fixed fatal_dump from storeSwapoutHandle running out of disk
	  space.
	- Added disabling of a neighbor cache if 95% of replies are
	  UDP_DENIED.
	- Added accounting for misc memory/data structures
	- Added 'no-query' option for 'cache_host' config line
	- Added error reporting to SSL requests.
	- Fixed SSL bug, client abort was not closing the server
	  side connection.
	- Fixed checking hierarchy_stoplist bug.
	- Fixed ipcache error messages by giving each entry its
	  own string.
	- Use sigaction() instead of signal() if available.
	- Fixed ipcache bug causing some lookups to get stuck in
	  PENDING state if all dnsservers are busy.
	- Fixed domain name matching bug when using '.com' instead of
	  'com'.
	- Fixed close_handler coredump bug in comm.c.
	- Removed unnecessary DNS lookup of hostnames in WAIS URLs.

Changes to squid-1.0.beta17 (June 12, 1996):

	- Fixed another ipcache coredump problem where an entry could
	  be released between writing to and reading from dnsserver.
	- Fixed store.c bug of purging aborted objects.
	- Cleaned up checkLifetimes() function to make it simpler.
	- Added visible_hostname support to ftpget.
	- Fixed null edge dereferencing bug for UDP_HIT_OBJ.

Changes to squid-1.0.beta16 (June 10, 1996):

	- Fixed two coredump-causing bugs in ipcache_unregister().
	- Changed 'close_handler' to a linked list.
	- Changed freeing of protodispatch_data structures to use
	  new close_handler (attached to client FD).
	- Fixed URL handling to accomodate browswers which do not handle
	  relative URL parsing.

Changes to squid-1.0.beta15 (June 9, 1996):

	- Fixed storeSwapoutHandle coredump bug
	- Fixed DNS lookup failure of neighbor hosts after a few hours
	  of operation
	- Changed memcpy() to memmove() for overlapping memory copies
	- Changed store rebuidling to unlink the log-last-clean file
	  in case of a crash during rebuild
	- Added forwarding loop detection
	- Changed all memcpy to use xmemcpy which is memmove, bcopy, or
	  memcpy.
	- Fixed coredump bug from partial dnsserver reads, manifest on
	  FreeBSD and NetBSD.

Changes to squid-1.0.beta14 (June 7, 1996):

	- Fixed coredump bug in icp.c when generating ``Not Modified''
	  replies.
	- Fixed SSL bug which assumed the requested host name would
	  already be in the IP cache.
	- Fixed names of generated HTTP reply headers.

Changes to squid-1.0.beta13 (June 7, 1996):

	- Fixed coredump bug where StoreEntry key was free'd too soon.
	- Fixed UDP_HIT_OBJ bug: cancel the hierarchy timeout and set
	  the ping_status to DONE for UDP_HIT_OBJ replies.

Changes to squid-1.0.beta12 (June 6, 1996):

	- Fixed problem when using udp_outgoing_addr where no ICP
	  packets would be recieved because they were getting sent
	  to the "outgoing" instead of the "incoming" socket.
	- Fixed objects hanging around in cache after a keychange.
	- Added ability to restrict neighbor caches with ACLs.
	  ('cache_host_acl').
	- Fixed ssl FD mismatch bug.
	- Fixed INADDR_NONE bug on 64bit systems.
	- Fixed store rebuilding bug; temporary log file was not being
	  truncated.
	- Made all external processes communicate with TCP sockets
	  (no more Unix domain sockets).
	- Semi-major rewrite of ipcache implementation.
	- Fixed a couple memory bugs found by purify.
	- Fixed sending large (>8192 bytes) HTTP requests.
	- Added "lazy" server IP address ACL checks (type 'dst').
	- Changed handling of IMS requests.  Now will return "304
	  Not Modified" if the requested object is in the cache
	  and not expired.

Changes to squid-1.0.beta11 (June 1, 1996):

	- Fixed serious memory leak of MemObject->reply structures.


Changes to squid-1.0.beta10 (May 31, 1996):

	- Fixed bug when request arrives in fragmented IP packets.
	- Fixed ACL bug which denied cache manager access while in
 	  httpd_accel mode.
	- Changed ftpget to "fail nicely" for sites which do not allow
	  PORT requests (if compiled with PASVONLY).
	- Fixed Unix domain socket off-by-one bug in ftpget.
	- Fixed lingering sockets after shutdown by SIGTERM.
	- Added dnsserver use histogram to ipcache stats.
	- Changed domain ACL's to match only the end of the hostname, not
	  just anywhere in the string.
	- Fixed setuid bugs when pid_filename was not defined
	- Fixed zero-sized object getting stuck in VM.
	- Configure checks for working UNIX domain stream sockets
	- Rotate cache.log before the others
	- SIGUSR2 now toggles between full and normal debugging
	- Close and restart ftpget server during logfile rotation
	- Added memory pools for request_t and MemObject data structures.
	- Added new address binding options for more control

Changes to squid-1.0.beta9 (May 23, 1996):

	- Fixed storeToString() coredump bug on 'swap_buf'
	- Added back the CIDR notation functionality to decoding IP
	  address ACLs.
	- Fixed ftpget listing parsing coredump bug.
	- Fixed neighborsUdpAck() coredump for late-arriving ICP replies.

Changes to squid-1.0.beta8 (May 22, 1996):

	- More friendly CFLAGS and LDFLAGS for configure
	- ACL_ALLWEEK bugfix
	- Added missing increment of UDP connection counter.
	- Changed ftpget select to check for EWOULDBLOCK/EAGAIN
	  (workaround for broken Solaris select(2)).
	- Fixed MALLINFO calls for Linux
	- Fixed strerror() problems on SunOS 4.1.x
	- Fixed DefaultAnnounceRate; set to zero by defult.
	- Changed all port variables to u_short.
	- Created AF_UNIX versions of comm_open(), comm_connect().
	- Changed ftpget server to use UNIX domain socket.
	- Removed RESET_SIGNAL_HANDLER check--always reset the signal
	  handler.
	- Added instrumentation of basic IPCache stats.
	- Fixed calculation of neighbor average RTT.
	- Added 'outbound_addr_list' to config
	- Change getFirstParent() to getFirstUpParent().
	- Changed ftpget to use an additional pipe() for crash detection
	- Added ICP_OP_DENIED message type
	- Added patches for Nextstep port from Luke Howard
	  <lukeh@vurt.schnet.edu.au>
	- Added a lifetime to HTTP server connections being deferred.
	- Added IP address ranges in 'src' ACLs
	- Added FQDN's in 'src' ACLs
	- Fixed request structure free-memory-read/coredump bug.
	- Changed icp.c to select on client socket to detect aborts.
	- Better compliance with HTTP/1.1 *DRAFT* regarding which reply
	  codes can be cached.
	- Added 'hierarchy_stoplist' configuration option.
	- Changed mallopt option M_MXFAST to 512 bytes.
	- Added -Y option to only return UDP_HIT or UDP_DENIED during
	  store reload.
	- Added UDP_HIT_OBJ type.  Just like a UDP_HIT, but object data
	  is returned in the UDP packet if it will fit; saves a TCP
	  connection.  Not compiled in by default, add -DUDP_HIT_WITH_OBJ
	  to src/Makefile DEFINES.

Changes to squid-1.0.beta7:

	- Fixed comm_udp_sendto continuous loop bug
	- Fixed URLs-with-colon-but-no-port-number bug
	- Fixed sending ICP queries for HEAD requests
	- Changed 'server_list' output.  Added RTT, Fetches, Hits, Misses,
	  and percents.
	- Fixed setuid bug causing some logs to be owned by root.
	- Fixed virtual host mode (-V option)
	- Added read(2) instrumentation for HTTP and FTP.
	- Changed neighbor initialization to continue if DNS lookup fails.
	- Lint cleanup

Changes to squid-1.0.beta6:

	- Fixed null error message coredump in ftpget.
	- Added -m Method option to `client'.
	- Fixed ftpget server bug with missing trailing slash.
	- Removed 'connect_ports' from config, use general ACLs instead.
	- Changed requested listen queue length to 1/4 of getMaxFD().
	- Rewrote SSL/CONNECT handlers.  Now doesn't use a StoreEntry.
	- Fixed some aborted objects getting stuck in VM bug.
	- Fixed ftpget PASV reply sscanf to work for VMS ftpd.
	- Changed FTP URL parsing to use urlParse().
	- Changed ftpget to skip RETR command if URLs ends with '/'.
	- Changed ftpget to display README at the bottom if there are other
	  server messages.
	- Changed ftpget to not reopen a new data connection
  	  if one is already open.
	- Fixed handling of FTP URLs with spaces (and other unsafe characters)
	- Changed ftpget to only generate BASE HREF if the FTP URL does
	  not end with '/'.

Changes to squid-1.0.beta5:

	- Fixed cachemgr to send 'HTTP/1.0' on request so it works
	  with beta4 fixes to icp.c.

Changes to squid-1.0.beta4:

	- Added a handler to restart the ftpget server.
	- Fixed access checks for ICP by parsing the requested URL.
	- Added "magic marker" to ftpget-generated errors so they can
	  be negative-cached.
	- Added a small run-time check to configure to see if signal
	  handlers should be restarted after invocation (ala SYSV).
	- Determine Maximum filedescriptors in configure and change
	  FD_SETSIZE if needed.
	- Changed read stall algorithm for HTTP.  No don't wait until
	  the object is in DELETE_BEHIND mode to stall the server read
	  and wait for the client to catch up.  Also changed from 4k to
	  16k read buffer.
	- Fixed HTTP request parsing to check for blank line at the
	  end of all requests.  Symptoms were "connection reset"
	  messages.

Changes to squid-1.0.beta3:

	- Added ftpget '-C minport:maxport' option
	- Fixed PROTO_MAX fencepost bug in stat_init().
	- Fixed Fixed CheckQuickAbort() coredump.
	- Fixed disabling store.log and hierarchy.log when set to "none"
	- Fixed numerous problems related to setuid().
	- Fixed 'check_cache.pl' to use new swaplog format (without "FILE").
	- Fixed ACL coredumps when checking NULL words.
	- Changed pid_filename to be written and unlinked as root.
	- Added "-i seconds" option to 'client' for testing IMS GET.
	- Fixed a bug where an IMS request caused the valid object to
	  get ejected from the cache.
	- Fixed continual DEAD_PARENT/REVIVE bug
	- Fixed ERR_INVALID_URL bug for URLs with a password field.
	- Added to Release-Notes info about converting 'cache/log' and
	  difference between stoplists and ttl_pattern.

Changes to squid-1.0.beta2:

	- Fixed /bin/csh "$#argv" leftover in RunCache.
	- Fixed ACL day-of-week bitmask bug.
	- Fixed missing checks for WAIS in some places.
	- Fixed chdir(swappath(0)) bug; do chdir() after storeInit().
	- Changed enumerated structure members to be defined outside
	  of the structure itself (for AIX).
	- Changed ftpget to fork before reading the request and make
	  sure the entire request is read.

Changes to squid-1.0.beta1 (Apr 19, 1996) from Harvest cached-1.4.pl3:

	- Added a "server mode" to ftpget.  Now the (much smaller)
	  ftpget process forks for each FTP request.
	- Added support for If-Modified-Since GET requests.
	- Added support for SSL and https objects.
	- Added background processing for rebuilding the disk store
	  while serving requests.  Cache can now serve requests immediately.
	- Added a 'reconfigure' feature activated by SIGHUP.  The config
	  file is re-read and most changes will take effect.
	- Added an internal flag for using private keys with ICP queries
	  to neighbors.  If any neighbor returns a reqnum field of zero,
	  then disable using private keys.  But still use private
	  keys for things with bypass the ICP query step (such as POST
	  and IMS-GET).
	- Added a function to verify content-lengths.  Objects with
	  mismatched (but non-zero) content lenghts will be ejected.
	- Added clean shutdown mode.  On SIGTERM the incoming HTTP socket
	  is closed.  Active clients are given a lifetime of 30 seconds
	  (configurable).  Process exits when all sockets are closed.
	- Added support for large POST objects.
	- Added "store.log" which logs RELEASE/SWAPIN/SWAPOUT events.
	- Added announce feature to squid; no longer external program.
	  If enabled, a running cache will announce itself every 24 hrs.
	- Added support for FTP URLs with non-default ports.
	- Added new Access Control List scheme.
	- Added Forwarded: header to proxy HTTP requests (HTTP/1.1 feature).
	- Added weights neighbors.
	- Added urlParse() which strips off default ports and 
	  makes hostnames all lowercase.
	- Added (section,level) debugging and 'debug_options' config line.
	- Added 'pid_filename' to configuration file.
	- Added 'visible_hostname' to configuration file.
	- added 'ftp_user' to configuration file.
	- added 'dns_positive_ttl' to configuration file.
	- added 'dns_negative_ttl' to configuration file.
	- Added 'shutdown_lifetime' to configuration file.
	- Fixed bug where cache process would "spin" on large objects
	  being deferred.
	- Fixed byte order conversion bug on setting echo port.
	- Changed meaning of command line -b (buffered logs) option.
	  Now the default behaviour is unbuffered logs, use -b to make
	  them buffered.
	- Changed WAIS code to always be fully compiled in.
	- Changed the storage manager to use the notion of private and
	  public keys.  Requests are now private until the reply headers
	  have been read.
	- Changed access logging significantly.  Entries to "access.log"
	  are written when the client connection closes.  Every connection
	  is logged exactly once, always with a valid size.
	- Changed access log format (non-common) to include request
	  method and sub-second timestamps.
	- Changed handing of ECONNRESET (connection reset) errors.
	  Now treated like any other read error.
	- Changed 'rotate logs' to be activated by SIGUSR1.
	- Changed configure script to look specifically for tm_gmtoff
	  and set HAVE_TM_GMTOFF.
	- Changed configure script to look specifically extended mallinfo
	  structure and set HAVE_EXT_MALLINFO
	- Changed ICP reply code to use negative TTL value as UDP_HIT
	  threshold so we never return a HIT on neg-cached objects.
	- Changed ftpget to use select(2) on I/O for timeouts.  ftpget
	  now exits immediately if stdin goes away.
	- Changed handling of '-z' option.  Now only execute 'rm -rf ...' if
	  -U option also given.
	- Removed the command line -d (debug) option.  Use 'debug_options'
	  in config file.
	- Removed all code and references to binary port.
	- Removed dual logging to stderr/cache.log.
	- Removed old IP access controls ('proxy_allow', etc.)