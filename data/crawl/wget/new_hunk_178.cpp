2014-40-22  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Test-204.px: added file
	* tests/run-px: added Test-204.px
	* tests/Makefile.am: added Test-204.px

2014-12-11  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/Makefile.am: Support older versions of flex

2014-12-10  Tim Ruehsen <tim.ruehsen@gmx.de>

	* configure.ac: Check for pcre.h

2014-12-08  Giuseppe Scrivano  <gscrivan@redhat.com>

	* cfg.mk (local-checks-to-skip): Add sc_cast_of_argument_to_free.

2014-12-05  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/Makefile.am: Removed reference to cmpt.c

2014-12-05  Tim Ruehsen <tim.ruehsen@gmx.de>

	* configure.ac: Fix message for when GnuTLS has not been found.

2014-12-05  Tim Ruehsen <tim.ruehsen@gmx.de>

	* bootstrap.conf: Add modules fnmatch, memrchr, strcase, strptime,
	strtoll, timegm
	Remove module strcasecmp
	Use module spawn-pipe instead of deprecated module pipe

2014-12-04  Darshit Shah  <darnir@gmail.com>

	* src/wget.h: Define MIX and MAX macros globally for all files
	* src/gnutls.c, retr.c: Delete declaration of MIN macro
	* src/http.c, progress.c: Delete declaration of MIN and MAX macros

2014-12-04  Darshit Shah  <darnir@gmail.com>

	* src/ftp.c (getftp): Remove a call to assert(1) and replace with error message.
	Also fix indentation

2014-12-03  Jérémie Courrèges-Anglas  <jca@wxcvbn.org> (tiny change)

	* src/openssl.c (ssl_init): Allow pfs to be used with protocols other than
	TLSv1.

2014-12-03  Gisle Vanem  <gvanem@yahoo.no>

	* src/openssl.c (ssl_init): Fix C89 warning

2014-12-03  Gisle Vanem  <gvanem@yahoo.no>

	* src/mswindows.c (ws_cleanup): Fix compiler error

2014-12-01  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/connect.c, iri.c, url.c, warc.c: Fix issues reported
	by static code analysis tool 'parfait'.

	Closes: #41235
	Reported-by: Jiri Kukacka

2014-11-29  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/utils.h: xfree() sets argument to NULL after freeing,
	removed xfree_null()
	* src/connect.c, cookies.c, ftp-basic.c, ftp-ls.c, ftp.c hash.c,
	host.c, html-url.c, http.c, init.c, iri.c, log.c, main.c,
	mswindows.c, netrc.c, openssl.c, recur.c, res.c, retr.c,
	url.c, warc.c: Replaced xfree_null() by xfree()

2014-11-28  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/main.c: Fix length of program_argstring,
	fix regression introduced with commit
	9217b864d865cf1766e1589d138c8fc17d3d3d5c.

2014-11-28  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/gettext.h: Removed this file
	* src/wget.h: Do not include gettext.h, include libintl.h directly,
	define _() as gettext() shortcut.

	The header file gettext.h is simply not needed.

2014-11-28  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/Makefile.am: Removed gettext.h

2014-11-27  Darshit Shah  <darnir@gmail.com>

	* src/cookies.c, gettext.h, init.c, retr.c, url.c, warc.c: Replace usage of
	free() with xfree() macro.

2014-11-26  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/HTTPServer.pm: Substitue server port in HTTP headers

	This allows us to use references like
	  "Location" => "http://localhost:{{port}}/whatever
	in test cases.

2014-11-26  Tim Ruehsen <tim.ruehsen@gmx.de>

	* testenv/Makefile.am: Removed Test-auth-both.py from XFAIL_TESTS

2014-11-26  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/recur.c: Fix blacklisting of URLs to download

	Fixes a reported crash and prevents multiple downloads of the
	same file in case the URL is escaped in different ways.

	The crash has been
	Reported-by: Frédéric <vfrederix@gmail.com>

2014-11-26  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/recur.c: Add space after function names

2014-11-26  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/http.c: Select strongest challenge from WWW-Authenticate,
	support multiple challenges per header line.

2014-11-26  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_connect_wget): Implement missing code for
	--secure-protocol=TLSv1_1|TLSv1_2, print message before abort()
	for missing protocol implementations.
	* src/openssl.c (ssl_init): Print message before abort() for
	missing protocol implementations.

2014-11-26  Giuseppe Scrivano  <gscrivan@redhat.com>

	* testenv/Makefile.am (TESTS): Add Test-redirect-crash.py.
	* testenv/Test-redirect-crash.py: New File.

2014-11-25  Pär Karlsson <feinorgh@gmail.com>

	* src/Makefile.am: Added missing version.h to wget_SOURCES

2014-11-25  Darshit Shah  <darnir@gmail.com>

	* bootstrap.conf: Add flex as a prerequisite to building Wget from the
	repository sources

2014-11-24  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/wget.h, test.c, main.c: Make program_name and program_argstring const

2014-11-24  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/warc.c: Fix C89 compile errors using ./configure --without-libuuid

2014-11-24  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/warc.c, warc.h, http.c: Add size of buffer to warc_timestamp()

2014-11-24  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/retrc.c: Fix possibly uninitialized variable

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* src/wget.h: Make extern declaration for program_name

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* src/wget.h: Make extern declaration for program_argstring.
	* src/warc.c: Remove extern declaration
	* src/test.c: Make program_argstring a char *, instead of const char *.

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* src/version.h: New file. Add extern declarations for globally shared strings
	* src/Makefile.am: Have version.c import version.h
	* src/main.c: Import version.h and remove old extern declarations
	* src/http.c: Same
	* src/warc.c: Same

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* src/version.h: Add extern for compilation_string
	* src/main: Remove declaration for compilation_String

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* src/utils.c (abort_run_with_timeout): The sig parameter is not used. Mark it
	as such.
	(abort_run_with_timeout): One implementation of this function did not
	specify _Noreturn. Add it.

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* src/retr.h: Declare extern variable numurls
	* src/http.c: Remove extern declaration for numurls
	* src/ftp.c: Same

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* src/hosts.c (address_list_set_faulty): Add a helpful error message for when a
	logical assumption fails

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* src/cookies.c (discard_matching_cookie): Replace defensive assert with a
	logical check and error message

2014-11-22  Darshit Shah  <darnir@gmail.com>

	* build-aux/build_info.pl: Include version.h in the final C file generated
	by the script.

2014-11-21  Tim Ruehsen <tim.ruehsen@gmx.de>

	* testenv/server/http/http_server.py: Fixed typo Blackisted to Blacklisted

2014-11-21  Daniel Stenberg  <daniel@haxx.se>

	* src/iri.c (remote_to_utf8): Fix compiler warning

2014-11-20  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/progress.c: Fix code for undefined USE_NLS_PROGRESS_BAR

	Reported-by: Gisle Vanem

2014-11-20  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/cookies.c, ftp-basic.c, ftp-ls.c, ftp.c, html-url.c,
	http.c, init.c, iri.c, main.c, progress.c, res.c, url.c,
	utils.c, wget.h: Replaced strcasecmp and strncasecmp by
	c_strcasecmp and c_strncasecmp where only ASCII string
	comparison is wanted (instead of locale dependent).

	Fixes possible issues with Wget running in a turkish locale.

2014-11-20  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/Removed form feeds (\014) from *.c and *.h

2014-11-20  Tim Ruehsen <tim.ruehsen@gmx.de>

	* configure.ac: Fix libpsl<0.6.0 detection

2014-11-20  Tim Ruehsen <tim.ruehsen@gmx.de>

	* NEWS: remove form feeds

2014-11-20  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/cookies.c, ftp-basic.c, ftp.c, gnutls.c, host.c,
	html-url.c, http.c, main.c, progress.c, retr.c, warc.c:
	Trivial fixes for C89 compliancy.

2014-11-20  Gisle Vanem  <gvanem@yahoo.no>

	* src/http.c (parse_content_disposition): Fix C89 issue found by MSVC 16

2014-11-20  Gisle Vanem  <gvanem@yahoo.no>

	* src/build_info.c.in: Assume large file for WINDOWS

2014-11-20  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Use pkg-config for libpsl detection
	config status for libpsl is reflected by $with_libpsl

2014-11-20  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Use autoconf macros where available

2014-11-20  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Change option to --enable-assert. Assertions are disabled by
	default.
	* NEWS: Edit to reflect default option.
	* README.checkout: Document --enable-assert for developers

2014-11-20  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Add the -Wextra flag when no CFLAGS are set

2014-11-20  Darshit Shah  <darnir@gmail.com>

	* .gitignore: po/stamp-po should be ignored

2014-11-19  Tim Ruehsen <tim.ruehsen@gmx.de>

	* configure.ac: Check for random()

2014-11-19  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/utils.c (random_float, random_number): Use random() and
	srandom() if available.

	Reported-by: Coverity scanner

2014-11-19  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/openssl.c (ssl_check_certificate): Fix memory leak

2014-11-19  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_init): Report load failure of cert files from
	cert directory only with --debug. Fixes #41331.

2014-11-19  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/ftp-basic.c (ftp_epsv): Fix loop check

	Reported-by: Coverity scanner

2014-11-19  Darshit Shah  <darnir@gmail.com>

	* testenv/Test-504.py: Add new test case to show how Wget handles 504 Gateway
	Timeouts
	* testenv/Makefile.am: Add Test-504.py to TESTS

2014-11-19  Darshit Shah  <darnir@gmail.com>

	* src/utils.c (compile_posix_regex): Fix memory leak due to unfreed regex
	pointer

2014-11-19  Darshit Shah  <darnir@gmail.com>

	* src/progress.c (create_image): Do not scroll filename if amount of scrolling
	is less than MIN_SCROLL_TEXT
	* src/retr.c (fd_read_body): Do not print the directory prefix in the progress
	bar

2014-11-19  Darshit Shah  <darnir@gmail.com>

	* src/main.c (format_and_print_line): Fix potential memory leak

2014-11-19  Darshit Shah  <darnir@gmail.com>

	* src/exits.c (get_status_for_err): GATEWAYTIMEOUT is a Server Error and Wget's
	exit code should reflect that
	* src/wget.h: Add GATEWAYTIMEOUT as an error
	* src/http.c (http_loop): Gateway timeout errors should be non-fatal

2014-11-18  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/Fix warnings from clang-analyzer 3.6

	gnutls.c:457:3: warning: Value stored to 'err' is never read
	  err = 0;
	http-ntlm.c:477:5: warning: Value stored to 'size' is never read
	  size = (size_t) snprintf (ntlmbuf, sizeof(ntlmbuf),
	http.c:1479:3: warning: Attempt to free released memory
	  xfree_null (hs->error);

2014-11-17  Tim Ruehsen <tim.ruehsen@gmx.de>

	* testenv/server/http/http_server.py: allow case-insensitive auth-type,
	send BasIc and DIgest to provoke Wget failures with turkish locales

2014-11-17  Tim Ruehsen <tim.ruehsen@gmx.de>

	* bootstrap.conf (gnulib_modules): Add module c-strcase

2014-11-17  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/main.c: code cleanup for redirect_output_signal()

2014-11-17  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/http.c: use c_strncasecmp() in BEGINS_WITH macro
	and in STARTS macro

2014-11-17  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/ftp.h: removed unused variable ftp_last_respline
	* src/init.c, test.c, warc.c: removed 'make check'compiler warnings

2014-11-16  Tom Li  <biergaizi2009@gmail.com>

	* src/progress.c (create_image): Ensure that the last character of the filename
	is scrolled to

2014-11-16  Darshit Shah  <darnir@gmail.com>

	* po/stamp-po: Remove autogenerated file from checked  out sources

2014-11-16  Darshit Shah  <darnir@gmail.com>

	* gnulib: Update submodule
	* bootstrap: Update script from latest gnulib

2014-11-16  Darshit Shah  <darnir@gmail.com>

	* .gitignore: Sort gitignore file based on directories

2014-11-15  Darshit Shah  <darnir@gmail.com>

	* testenv/certs/README: Remove trailing whitespaces

2014-11-15  Darshit Shah  <darnir@gmail.com>

	* src/progress.c (create_image): Fix assertion that checks progress bar length
	Should fix bug #43593

2014-11-15  Darshit Shah  <darnir@gmail.com>
	* configure.ac: Add AC_HEADER_ASSERT. Enables --disable-assert option

2014-11-12  Witchakorn Kamolpornwijit <witchakk@mit.edu> (tiny change)

	* src/html-parse.c (map_html_tags): Fix range check

2014-11-12  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/openssl.c (ssl_init): Fix error handling for CRL loading

2014-11-11  Tim Ruehsen <tim.ruehsen@gmx.de>

	* testenv/recreated the certs and the CRL file, also amended certs/README

2014-11-11  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/openssl.c (ssl_init): Load CRL file given by --crl-file

2014-11-11  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/main.c: Fix missing _Noreturn declaration specifiers

	Reported-by: Gisle Vanem <gvanem@yahoo.no>

2014-11-11  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/http.c (gethttp): Always add Accept-Encoding: identity

	Fixes bug #40819
	Reported-by: Noël Köthe <noel@debian.org>

2014-11-10  Tim Ruehsen <tim.ruehsen@gmx.de>

	* testenv/removed certs/wget-cert.pem
	* testenv/added certs/ca-cert.pem, certs/ca-key.pem, certs/server-cert.pem,
	certs/server-key.pem and certs/server-crl.pem
	* testenv/added certs/README for description how to generate the certs and keys
	* testenv/server/http/http_server.py: amended to work with new certs/ files
	* testenv/added Test--https-crl.py to test --crl-file
	* testenv/Makefile.am: added Test--https-crl.py
	* testenv/Test--https.py: use --ca-certificate of --no-check-certificates

2014-11-10  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/openssl.c: Fix compile-time check for TLSv1.1 and TLSv1.2

	Reported-by: Velemas Vosak <velemas@gmail.com>

2014-11-09  Darshit Shah  <darnir@gmail.com>

	* src/http.c (gethttps): Honour keep-alive when server responds with a 416 Range
	not Satisfiable

2014-11-09  Darshit Shah  <darnir@gmail.com>

	* src/http.c (gethttp): Remove redundant condition evaluation

2014-11-06  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/init.c, main.c, options.h: added new option --crl-file
	 for specifying a CRL (Certificate Revocation List) file.
	* src/gnutls.c: load CRL file given by --crl-file

	Reported-by: Noël Köthe <noel@debian.org>

2014-11-06  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* doc/wget.texi: added description for --crl-file

2014-11-05  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Test-stdouterr.px: fix skip exit code to 77

2014-11-05  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Makefile.am: added $(LIB_CLOCK_GETTIME) to unit test linkage

	Reported-by: kdevel@vogtner.de

2014-11-05  Tim Ruehsen <tim.ruehsen@gmx.de>

	* configure.ac: check for python3
	* Makefile.am: only use python test suite if python3 found

2014-11-05  Giuseppe Scrivano  <gscrivan@redhat.com>

	* contrib/tsocked-wget (TSOCKS_CONF_FILE): Remove empty new-line.

2014-11-04  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/iri.c (do_conversion): fix quote() misuse
	* src/iri.c (remote_to_utf8): fix segfault on do_conversion() error

	Reported-by: Mikael Magnusson <mikachu@gmail.com>

2014-11-04  Darshit Shah  <darnir@gmail.com>

	* README.checkout: Bootstrap script is ./bootstrap not ./bootstrap.sh

2014-11-03  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/added new test Test-proxied-https-auth-keepalive.px

2014-11-03  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Test-proxied-https-auth.px: add valgrind support,
	sync parent / child (client / server)

2014-11-03  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/log.c: turn on automatic format check for log_vprintf_internal()

2014-11-03  Pär Karlsson <feinorgh@gmail.com>
	* tests/WgetFeature.pm: Fixed finding of WgetFeature.cfg when using separate
	build dirs.
	* tests/WgetFeature.pm: Fixed warning from BLOCK eval, made it indo EXPR eval

2014-11-03  Jakub Čajka  <jcajka@redhat.com>

	* src/iri.c (remote_to_utf8): Fixed assumption that char is signed. Fixes
	fellowing test case failures idn-cmd-utf8, idn-robots-utf8, if char is
	unsigned.

2014-11-01  Mike Frysinger <vapier@gentoo.org>

	* configure.ac: Use pkg-config to check for zlib presence and
	fallback to the previous code if that doesn't work.

	* configure.ac: Use pkg-config to check for libuuid presence and
	fallback to the previous code if that doesn't work.

	* configure.ac: Use pkg-config to check for pcre presence and
	fallback to the previous code if that doesn't work.

	* configure.ac: Use pkg-config to check for openssl presence and
	fallback to the previous code if that doesn't work.

	* configure.ac: Use pkg-config to check for gnutls presence and
	fallback to the previous code if that doesn't work.

2014-11-01  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/http.c (gethttp): Do not check for "Connection: close" header
	only when the Content-Length is specified.

2014-11-01  Darshit Shah  <darnir@gmail.com>

	* src/progress.c (create_image): Extra padding for size_grouped_diff has already
	been added. Do not add that again.
	(create_image): Assert that the progress bar being drawn is lesser than the
	size of the screen.

2014-11-01  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Fix check for libpsl

2014-10-31  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/openssl.c: make _get_rfc2253_formatted() static

2014-10-31  Pär Karlsson <feinorgh@gmail.com>
	* tests/WgetTests.pm: Proper conditional operators, tidied up code, idiomatic
	improvements as per modern Perl best practices.
	* tests/WgetFeature.pm: Tidied up code, idiomatic improvements for readability
	* tests/FTPServer.pm: Tidied up code (perltidy -gnu)
	* tests/FTPTest.pm: Likewise
	* tests/HTTPServer.pm: Likewise
	* tests/HTTPTest.pm: Likewise

2014-10-30  Mike Frysinger <vapier@gentoo.org>

	* tests/WgetFeature.pm: fix skip exit code to 77

2014-10-30  Mike Frysinger <vapier@gentoo.org>

	* src/openssl.c: fix implicit decl warning

2014-10-29  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/openssl.c: print cert subject and issuer RFC2253 compliant
	* src/openssl.c (ssl_check_certificate): removed memory leak

2014-10-29  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/http.c (gethttp): use CLOSE_INVALIDATE instead of fd_close

2014-10-29  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/http.c (gethttp): fix memory leak

2014-10-29  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/http.c (CLOSE_FINISH): always set fd invalid after close

2014-10-29  Peter Meiser <meiser@gmx-topmail.de> (tiny change)

	* src/openssl.c (ssl_init) [! OPENSSL_NO_SSL3]: Add guard for OpenSSL
	without SSLv3.

2014-10-28  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Test-proxied-https-auth.px: synchronize client and server

2014-10-28  Tim Ruehsen <tim.ruehsen@gmx.de>

	* configure.ac: check for strlcpy()

2014-10-28  Tim Ruehsen <tim.ruehsen@gmx.de>

	* configure.ac: add --enable-valgrind-tests

2014-10-28  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/utils.c: added strlcpy(), concat_strings() rewritten
	* src/utils.h: added strlcpy()

2014-10-28  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/ftp.c (ftp_loop_internal): Fix memory leak
	* src/http.c (gethttp): Fix two memory leaks
	* src/init.c (cleanup): Fix compile errors and warnings
	* src/init.c (cleanup): Free more opt variables
	* src/main.c (main): Fix two memory leaks
	* src/retr.c (retrieve_url): Fix two memory leaks
	* src/retr.c (retrieve_url): Add iri to call to url_parse()
	* src/url.c (url_parse): Fix memory leak

2014-10-28  Giuseppe Scrivano  <gscrivan@redhat.com>

	* tests/Makefile.am: Replace $FOO with @VAR@.

2014-10-28  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/Makefile.am: Replace $FOO with @VAR@.

2014-10-28  Giuseppe Scrivano  <gscrivan@redhat.com>

	* doc/Makefile.am: Replace $FOO with @VAR@.

2014-10-28  Giuseppe Scrivano  <gscrivan@redhat.com>

	* cfg.mk (local-checks-to-skip): Add sc_makefile_at_at_check.

	* Makefile.am: Replace $FOO with @VAR@.

2014-10-25  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/WgetTests.pm (run): generate valgrind command line if requested
	* tests/Makefile.am: set/export VALGRIND_TESTS

2014-10-25  Tim Ruehsen <tim.ruehsen@gmx.de>

	* testenv/test/base_test.py (gen_cmd_line): generate valgrind command line if requested
	* testenv/README: amend description of VALGRIND_TESTS
	* testenv/Makefile.am: set/export VALGRIND_TESTS

2014-10-22  Ángel González <keisial@gmail.com>

	* src/css-url.c (get_uri_string): Honor the specified length argument.

2014-10-21  Matthew Atkinson  <mutley456@ntlworld.com> (tiny change)

	* src/http.c (gethttp): Always send Content-Length header when method is POST,
	PUT, or PATCH even with no post body, as some servers will reject the
	request otherwise.

2014-10-16  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/url.c (url_parse): little code cleanup
	* src/html-url.c (get_urls_html): HTTP header Content-Type charset preceeds http-equiv
	* src/iri.c (do_conversion): moved iconv code completely into the function
	* src/iri.c (do_conversion): call url_unescape to fix charset conversion
	* src/iri.c (remote_to_utf8): use strcasecmp to compare encoding

	* src/gnutls.c (ssl_connect_wget): do not use SSLv3 except explicitely requested
	* src/openssl.c (ssl_init): do not use SSLv3 except explicitely requested

2014-10-16  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* doc/wget.texi (Download Options): update --secure-protocol description

2014-10-08 Nikolay Morozov <n.morozov@securitycode.ru>
	   Sergey Lvov <s.lvov@securitycode.ru>

	* src/init.c (cmd_spec_secure_protocol): Add support for
	TLS v1.1 and TLS v1.2 protocols
	* src/openssl.c (ssl_init): Add support for OpenSSL engines

2014-10-08  Darshit Shah  <darnir@gmail.com>

	* testenv/Makefile.am: Fix EXTRA_DIST variable for make distcheck
	* testenv/server/http/http_server.py (HTTPServer.__init__):  Fix how CERTFILE is
	found when running make dist / make distcheck.

2014-10-06  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Test-iri.px: fixed encodings
	* tests/Test-iri-forced-remote.px: fixed encodings
	* tests/Test-iri-percent.px: fixed encodings
	* tests/Test-idn-meta.px: fixed encodings

2014-10-02  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/tests/WgetTests.pm: use filename as default test name
	* tests/tests/Test-*.px: removed redundant 'name => ...'

2014-10-01  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/tests/Makefile.am: remove run-px, fixing dist-check

2014-10-01  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Test--post-file.px: name => "Test--post-file", fixing race
	condition.
	* tests/Test-N-no-info.px: name => "Test-N-no-info", fixing race
	condition.
	* tests/Test-N-smaller.px: name => "Test-N-smaller", fixing race
	condition.
	* tests/Test-c-shorter.px: name => "Test-c-shorter", fixing race
	condition.
	* tests/Test-proxy-auth-basic.px: name => "Test-proxy-auth-basic",
	fixing race condition.
	* tests/Test-proxied-https-auth.px: removed debug print line.

2014-10-01  Darshit Shah  <darnir@gmail.com>

	* testenv/Makefile.am: Run the tests in Python's Optimizedmode
	* testenv/conf/__init__.py (gen_hook): Use try..except instead of if..else
	* testenv/misc/color_terminal.py: System and check will not change while a test is
	run. Do not test for them on every invokation of printer()
	* testenv/server/http/http_server.py: The ssl and re modules are required by
	specific functions. Load them lazily
	(HTTPSServer.__init__): Lazy load ssl module here
	(_handler.parse_range_header): Lazy load re module here
	(_Handler.get_rule_list): get() can return a default value. Use it
	(_Handler.guess_type): Same
	(_Handler.is_authorized): Unused function artefact. Remove
	(_Handler.reject_headers): Unused function artefact. Remove

2014-09-30  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* testenv/test/base_test.py: Add --track-origins=yes to valgrind testing

2014-09-25  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Makefile.am: Modified to use parallel test harness
	* tests/Test-proxied-https-auth.px: get $top_srcdir from ENV
	* tests/run-px: removed
	* tests/WgetTest.pm.in: removed
	* tests/WgetTest.pm: get $top_srcdir from ENV

2014-09-25  Tim Ruehsen <tim.ruehsen@gmx.de>

	* configure.ac: removed WgetTest.pm.in
	* .gitignore: removed WgetTest.pm

2014-09-12  Darshit Shah  <darnir@gmail.com>

	* bootstrap.conf: Add GNULib module mbiter

2014-09-08  Darshit Shah  <darnir@gmail.com>

	* src/init.c (defaults): Set retr-symlinks to true by default. This changes a
	default setting of wget. Fixes security bug CVE-2014-4877

2014-09-08  Darshit Shah  <darnir@gmail.com>

	* src/ftp.c (ftp_retrieve_glob): Also check for invalid entries along with
	harmful filenames
	(is_valid_entry): New function. Check if the provided node is a valid entry
	in a listing file.

2014-09-08  Darshit Shah  <darnir@gmail.com>

	* doc/wget.texi (symbolic links): Update documentation of retr-symlinks to
	reflect the new default. Add warning about potential security issues with
	--retr-symlinks=yes.

2014-08-08  Darshit Shah  <darnir@gmail.com>

	* testenv/conf/__init__.py: Add extra newline according to PEP8
	* testenv/conf/{authentication,expect_header,expected_files,expected_ret_code,
	files_crawled,hook_sample,local_files,reject_header,response,send_header,
	server_files,urls,wget_commands}.py: Add docstrings explaining the conf file
	and how it should be used
	* testenv/server/http/http_server (InvalidRangeHeader): Clear TODO and eliminate
	this exception. Use ServerError for all such purposes.
	(_Handler): Remove reference to InvalidRangeHeader
	(_handler.parse_range_header): User ServerError instead of InvalidRangeHeader
	(_Handler.do_GET):  Add docstring
	(_Handler.do_POST): Add docstring. Also create an empty dict for rules if
	no rules are supplied. Send the Location header as suggested in RFC 7231
	(_Handler.do_PUT): Don't pop the server file already. Push it to later in ..
	(_Handler.send_put): .. Here. If the file exists respond with a 204 No
	Content message and pop the file for replacement. Do not send the
	Content-Length, Content-Type headers since PUT requests should not respond
	with data.
	(_Handler.parse_auth_header): Fit line within 80 chars
	(_Handler.check_response): Better visual indent
	(_Handler.authorize_digest): Better visual indent.
	(_Handler.expect_headers): Remove unused function
	(_Handler.guess_type): Fix indentation
	(HTTPd): Add newline according to PEP8 guidelines
	(HTTPSd): Fix indentation
	(StoppableHTTPServer): Add docstring
	(HTTPSServer): Fix indentation
	(WgetHTTPRequestHandler): Merge class into _handler.
	(_Handler): Add docstring
	(_Handler.parse_range_header): Fix indentation
	(ServerError): Split exception into separate file ...
	* testenv/exc/server_error.py: ... Here
	* testenv/misc/colour_terminal.py: Add docstring, fix indentation
	* testenv/test/base_test.py: Fix visual indent
	* testenv/test/http_test.py: Fit within 80 char lines

2014-08-04  Darshit Shah  <darnir@gmail.com>

	* testenv/conf/server_conf.py: Delete file. Server configuration is now done via the
	server_conf() method.
	* testenv/server/http/http_server.py (StppableHTTPServer.server_sett): Delete
	method required by the above hook
	(HTTPd.server_sett): Same

2014-08-03  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Download Options): Fix texinfo warning.

2014-07-28  Ángel González <keisial@gmail.com>
	* contrib: Created contrib folder.
	* contrib/tsocked-wget: Added wrapper for usage with socks proxy.

2014-07-26  Darshit Shah  <darnir@gmail.com>

	* testenv/Test-*.py: Remove the '-d' switch from WGET_OPTIONS.
	* testenv/test/base_test (BaseTest.gen_cmd_line): Add --debug and --no-config to the
	list of switches passed to wget unconditionally.

2014-07-25  Darshit Shah  <darnir@gmail.com>

	* .gitignore: Add a gitignore file for the project.

2014-07-23  Darshit Shah  <darnir@gmail.com>

	* testenv/test/base_test.py (BaseTest.gen_cmd_line): Add support for running all
	tests through valgrind if the relevant environment variable is set
	* testenv/conf/expected_ret_code (ExpectedRetCode.__call__): Valgrind returns error
	code 45 when it detects a memory leak.
	* testenv/Readme: Update with details about valgrind tests

2014-07-23  Darshit Shah  <darnir@gmail.com>

	* src/http.c (gethttp): Fix a memory leak when retrying authorization
	(gethttp): Fix memory leak when trying to parse content disposition headers
	(http_loop): Assigning a new value to *local)file without freeing the old
	one causes a memory leak
	(http_loop): Free the HTTP message and error strings before continuing loop

2014-07-22  Darshit Shah  <darnir@gmail.com>

	* testenv/(README): Remove old TODO and document SERVER_WAIT variable

2014-07-22  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Fix broken code for detecting libpsl

2014-07-21  Darshit Shah  <darnir@gmail.com>

	* src/cookies.c (check_domain_match): Fix a potential memory leak when checking
	cookie domain names

2014-07-21  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Fix check for Libpsl

2014-07-21  Daniel Stenberg  <daniel@haxx.se>

	* src/main.c (print_help): HTTP Method is a part of the Request not Header

2014-07-07  Tomas Hozza  <thozza@redhat.com>

	* src/iri.c (locale_to_utf8): Fix checking of iconv_open return code.

2014-07-05  Darshit Shah  <darnir@gmail.com>

	* src/http.c (gethttp): Fix indentation of conditional block
	(gethttp): Remove unneeded variable

2014-07-05  Darshit Shah  <darnir@gmail.com>

	* src/cookies.c (check_domain_match): Libpsl requires that all domain names
	passed to it be in utf8 lower case.

2014-07-03  Darshit Shah  <darnir@gmail.com>

	* src/wget.h (uerr_t): Remove unused error codes
	* src/http.c: (http_loop): Remove reference to unused error code

2014-06-30  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/convert.c (local_quote_string): Initialize newname.

2014-06-29  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/warc.c (warc_write_date_header): Avoid out-of-scope variable usage.

2014-06-28  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/Makefile.am (wget_SOURCES): Remove space-tab indentation.

2014-06-28  Giuseppe Scrivano  <gscrivan@redhat.com>

	* cfg.mk (local-checks-to-skip): Remove some checks.

2014-06-27  Giuseppe Scrivano  <gscrivan@redhat.com>

	* cfg.mk (VC_LIST_ALWAYS_EXCLUDE_REGEX): Ignore msdos/* and vms/* from
	syntax-check.

2014-06-22  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/warc.c [HAVE_UUID_CREATE]: Include <uuid.h>
	(warc_uuid_str) [HAVE_UUID_CREATE]: Use uuid_create and
	uuid_to_string to generate the UUID.
	Reported by: Alex Zimnitsky <aavzz@yandex.ru>

2014-06-22  Giuseppe Scrivano  <gscrivan@redhat.com>

	* configure.ac: Add check for uuid_create.

2014-06-22  Darshit Shah  <darnir@gmail.com> (tiny change)

	* src/progress.c (create_image): Align percentage download output better.

2014-06-22  Darshit Shah  <darnir@gmail.com>

	* testenv/(conf.files_crawled): diff is a set object and needs explicit str
	conversion.

2014-06-21  Nikita Vetrov  <admin@kanaria.ru> (tiny change)

	* src/openssl.c: Add one-time call OPENSSL_config in ssl_init.

2014-06-21  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/mswindows.c (fake_fork_child): Fix build error.
	Reported by: Gisle Vanem <gvanem@yahoo.no>.

2014-06-19  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/mswindows.c (fake_fork_child): Revert dinamic allocation of
	info->lfilename.
	Reported by: Gisle Vanem <gvanem@yahoo.no>.

2014-06-16  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/http.c (gethttp): Set "Connection: Keep-Alive" with keep-alive
	connections when using a proxy too.
	Reported by: Thorsten Schroeteler <Thorsten.Schroeteler@cassidian.com>.

2014-06-16  Darshit Shah  <darnir@gmail.com>

	* src/test.c: Include locale.h header for gettext.

2014-06-16  Darshit Shah  <darnir@gmail.com>

	* src/main.c (print_help, print_version): Mark as noreturn.
	* src/utils.c (memfatal, abort_run_with_timout): Same

2014-06-11  Giuseppe Scrivano  <gscrivan@redhat.com>

	* tests/Makefile.am: Remove @VAR@ with $FOO.

	* tests/FTPTest.pm: Remove terminating empty lines.
	* tests/HTTPServer.pm: Likewise.
	* tests/HTTPTest.pm: Likewise.
	* tests/Test--httpsonly-r.px: Likewise.
	* tests/Test--no-content-disposition-trivial.px: Likewise.
	* tests/Test--no-content-disposition.px: Likewise.
	* tests/Test--spider-fail.px: Likewise.
	* tests/Test--spider-r--no-content-disposition-trivial.px: Likewise.
	* tests/Test--spider-r--no-content-disposition.px: Likewise.
	* tests/Test--spider-r-HTTP-Content-Disposition.px: Likewise.
	* tests/Test--spider-r.px: Likewise.
	* tests/Test--spider.px: Likewise.
	* tests/Test--start-pos--continue.px: Likewise.
	* tests/Test--start-pos.px: Likewise.
	* tests/Test-E-k-K.px: Likewise.
	* tests/Test-E-k.px: Likewise.
	* tests/Test-HTTP-Content-Disposition-1.px: Likewise.
	* tests/Test-HTTP-Content-Disposition-2.px: Likewise.
	* tests/Test-HTTP-Content-Disposition.px: Likewise.
	* tests/Test-N--no-content-disposition-trivial.px: Likewise.
	* tests/Test-N--no-content-disposition.px: Likewise.
	* tests/Test-N-HTTP-Content-Disposition.px: Likewise.
	* tests/Test-N-current.px: Likewise.
	* tests/Test-N-no-info.px: Likewise.
	* tests/Test-N-old.px: Likewise.
	* tests/Test-N-smaller.px: Likewise.
	* tests/Test-N.px: Likewise.
	* tests/Test-O--no-content-disposition-trivial.px: Likewise.
	* tests/Test-O--no-content-disposition.px: Likewise.
	* tests/Test-O-HTTP-Content-Disposition.px: Likewise.
	* tests/Test-O-nc.px: Likewise.
	* tests/Test-O-nonexisting.px: Likewise.
	* tests/Test-O.px: Likewise.
	* tests/Test-Restrict-Lowercase.px: Likewise.
	* tests/Test-Restrict-Uppercase.px: Likewise.
	* tests/Test-auth-basic.px: Likewise.
	* tests/Test-auth-no-challenge-url.px: Likewise.
	* tests/Test-auth-no-challenge.px: Likewise.
	* tests/Test-auth-with-content-disposition.px: Likewise.
	* tests/Test-c-full.px: Likewise.
	* tests/Test-c-partial.px: Likewise.
	* tests/Test-c-shorter.px: Likewise.
	* tests/Test-c.px: Likewise.
	* tests/Test-cookies-401.px: Likewise.
	* tests/Test-cookies.px: Likewise.
	* tests/Test-ftp--start-pos.px: Likewise.
	* tests/Test-ftp-bad-list.px: Likewise.
	* tests/Test-ftp-iri-disabled.px: Likewise.
	* tests/Test-ftp-iri-fallback.px: Likewise.
	* tests/Test-ftp-iri-recursive.px: Likewise.
	* tests/Test-ftp-iri.px: Likewise.
	* tests/Test-ftp-list-Multinet.px: Likewise.
	* tests/Test-ftp-list-UNIX-hidden.px: Likewise.
	* tests/Test-ftp-list-Unknown-a.px: Likewise.
	* tests/Test-ftp-list-Unknown-hidden.px: Likewise.
	* tests/Test-ftp-list-Unknown-list-a-fails.px: Likewise.
	* tests/Test-ftp-list-Unknown.px: Likewise.
	* tests/Test-ftp-pasv-fail.px: Likewise.
	* tests/Test-ftp-recursive.px: Likewise.
	* tests/Test-ftp.px: Likewise.
	* tests/Test-i-ftp.px: Likewise.
	* tests/Test-i-http.px: Likewise.
	* tests/Test-idn-cmd-utf8.px: Likewise.
	* tests/Test-idn-cmd.px: Likewise.
	* tests/Test-idn-headers.px: Likewise.
	* tests/Test-idn-meta.px: Likewise.
	* tests/Test-idn-robots-utf8.px: Likewise.
	* tests/Test-idn-robots.px: Likewise.
	* tests/Test-iri-disabled.px: Likewise.
	* tests/Test-iri-forced-remote.px: Likewise.
	* tests/Test-iri-list.px: Likewise.
	* tests/Test-iri-percent.px: Likewise.
	* tests/Test-iri.px: Likewise.
	* tests/Test-k.px: Likewise.
	* tests/Test-meta-robots.px: Likewise.
	* tests/Test-nonexisting-quiet.px: Likewise.
	* tests/Test-noop.px: Likewise.
	* tests/Test-np.px: Likewise.
	* tests/Test-proxy-auth-basic.px: Likewise.
	* tests/Test-restrict-ascii.px: Likewise.
	* tests/Test-stdouterr.px: Likewise.
	* tests/WgetTest.pm.in: Likewise.

2014-06-11  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/ftp.c: Replace main() with main in comments.
	* src/http.c: Likewise.
	* src/init.c: Likewise.

	* src/cmpt.c (day_of_the_week): Remove repeated word in a comment.
	* src/utils.c: Remove repeated word in a comment.

	* src/gnutls.c: Do not include <assert.h>.

	* src/connect.c: Do not depend on always defined macros.
	* src/convert.c: Likewise.
	* src/css-url.c: Likewise.
	* src/hash.c: Likewise.
	* src/mswindows.h: Likewise.
	* src/netrc.c: Likewise.
	* src/progress.c: Likewise.
	* src/sysdep.h: Likewise.
	* src/utils.c: Likewise.
	* src/wget.h: Likewise.

	* src/Makefile.am: Remove @VAR@ with $FOO.

	* src/DESCRIP_MODS.MMS: Remove terminating empty lines.
	* src/DESCRIP_SRC.MMS: Likewise.
	* src/convert.c: Likewise.
	* src/exits.c: Likewise.
	* src/http.c: Likewise.
	* src/init.c: Likewise.
	* src/iri.c: Likewise.
	* src/res.c: Likewise.
	* src/spider.c: Likewise.
	* src/test.c: Likewise.
	* src/test.h
	* src/url.c: Likewise.
	* src/utils.c: Likewise.
	* src/vms.c: Likewise.

	* src/decc_ver.c (main): Ensure bindtextdomain is called.
	* src/hash.c (main): Likewise.
	* src/html-parse.c: Likewise.
	* src/netrc.c: Likewise.
	* src/test.c: Likewise.
	* src/trunc.c: Likewise.

2014-06-11  Giuseppe Scrivano  <gscrivan@redhat.com>

	* msdos/Makefile.DJ: Remove terminating empty lines.
	* msdos/Makefile.WC: Likewise.
	* msdos/msdos.c: Likewise.

2014-06-11  Giuseppe Scrivano  <gscrivan@redhat.com>

	* doc/Makefile.am: Remove @VAR@ with $FOO.

	* doc/fdl.texi: Remove terminating empty lines.

2014-06-11  Giuseppe Scrivano  <gscrivan@redhat.com>

	* NEWS: Remove repeated word.

	* po/POTFILES.in: Add lib/regcomp.c.

	* configure.ac: Do not depend on always defined macros.
	* vms/vms.h: Likewise.

	* Makefile.am: Remove @VAR@ with $FOO.
	* util/Makefile.am: Likewise.

	* ABOUT-NLS: Remove terminating empty lines.
	* MAILING-LIST: Likewise.
	* util/rmold.pl: Likewise.

	* util/trunc.c (main): Ensure bindtextdomain is called.

2014-06-10  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/wget.h: Remove trailing whitespaces.

	* src/retr.c (getproxy): Return a dinamically allocated string and...
	(retrieve_from_file, retrieve_url, url_uses_proxy): ...fix the caller
	to handle it.
	* src/init.c (home_dir): Replace strncpy with strdup.
	* src/mswindows.c (struct fake_fork_info): Make lfilename a pointer.
	(fake_fork_child): Replace strncpy with strdup.
	* src/http.c (ensure_extension): Replace strncpy with memcpy, not much
	better but make "make syntax-check" happy and we know the size.
	* src/ftp.c (getftp): Add parameter last_expected_bytes.
	(ftp_loop_internal): Pass parameter last_expected_bytes to getftp.
	* src/ftp-basic.c: Remove declaration of ftp_last_respline.
	(ftp_response): Do not set ftp_last_respline.
	* src/css-url.c (get_uri_string): Replace strncpy with strdup.
	* src/vms.c (set_vms_name): Replace strncpy with strdup.

	* src/exits.c: Move WGET_EXIT_* definitions to...
	* src/exits.h: ...here.  Add WGET_EXIT_GENERIC_ERROR, WGET_EXIT_PARSE_ERROR.
	Remove WGET_EXIT_MINIMUM.
	* src/init.c: Fix calls to exit().
	* src/log.c: Likewise.
	* src/main.c: Likewise.
	* src/mswindows.c: Likewise.
	* src/netrc.c: Likewise.
	* src/utils.c: Likewise.
	* src/warc.c: Likewise.
	* src/Test-stdouterr.px: Likewise.

2014-06-10  Giuseppe Scrivano  <gscrivan@redhat.com>

	* doc/wget.texi: Remove trailing whitespaces.

	* doc/fdl.texi: Copy from gnulib.

2014-06-10  Giuseppe Scrivano  <gscrivan@redhat.com>

	* build-aux/build_info.pl: Remove trailing whitespaces.
	* configure.ac: Likewise.

2014-06-08  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/main.c: Make `program_name' not static.

	* src/cookies.c [HAVE_PSL]: Include <libpsl.h> only when HAVE_PSL is defined.

2014-05-30  Darshit Shah  <darnir@gmail.com>

	* src/cookies.c (check_domain_match): Use libpsl to check if the cookie domain
	is valid. Also remove unneeded test for numeric addresses.

2014-05-30  Darshit Shah  <darnir@gmail.com>

	* src/connect.{c,h}, convert.{c,h}, cookies.{c,h}, ftp-ls.c, ftp.h, gettext.h,
	hash.h, host.h, html-parse.h, html-url.h, http.c, init.c, main.c, mswindows.c,
	netrc.h, openssl.c, options.h, ptimer.h, recur.c, retr.c, sysdep.h, url.h,
	vms.c, warc.c, wget.h: Whitespace and formatting changes only.

2014-05-30  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Allow compilation without libpsl.
	* README.checkout: Add libpsl as a dependency.

2014-05-24  Giuseppe Scrivano  <gscrivan@redhat.com>

	* gnulib: update module.

2014-05-24  Darshit Shah  <darnir@gmail.com>

	* doc/wget.texi: Document noscroll parameter to progress=bar

2014-05-20  Darshit Shah  <darnir@gmail.com>

	* src/utils.c (human_readable): Add new parameters, acc and decimals for the
	function. acc decides the number under which decimal values are shown for a
	certain value, while decimals decides the number of decimal digits displayed
	* src/utils.h (human_readable): Update declartion of the function
	* src/ftp.c (print_length): Update call to human_readable
	* src/http.c (gethttp): Same
	* src/init.c (defaults): Enable scrolling filenames by default
	* src/main.c (main): Update call to human_readable
	* src/options.h (options): Add new option noscroll
	* src/progress.c (create_image): Update the look of the progress bar. Human
	readable download size by default and add support for noscroll.
	(dot_set_params, bar_set_params): Change paramter to char * since strtok
	needs to modify the string.
	(bar_set_params): Add support for noscroll parameter to bar.

2014-05-03  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/retr.c (retrieve_url): fixed memory leak

2014-05-03  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/ftp-ls.c (ftp_parse_vms_ls): Explicitly typecast strlen's output
	* src/ftp.c (getftp): Prevent declaration of shadow variable
	* src/html-url.c (tag_handle_base, tag_handle_form, tag_handle_link,
	tag_handle_meta): Compiler directive to ignore unused variable
	* src/html-url.h (cleanup_html_url): Add function declaration
	* src/http-ntlm.c (ntlm_input, mkhash): Use ssize_t to declare variables that store
	sizes.
	(mkhash): Explicitly typecast output of c_toupper
	(short_pair): Add typecasts to prevent compiler warnings
	(ntlm-output): Fix datatypes of various variables
	* src/http.c (gethttp): Prevent declaration of shadow variable err
	(gethttp): remove unreachable code
	(test_parse_content_disposition): Fix variable declarations and use
	countof() macro
	* src/init.c (run_command): Prevent declaration of ghost variable
	(cmd_string, cmd_string_uppercase, cmd_file, cnd_vector,
	cmd_directory_vector, cmd_spec_dirstruct, cmd_spec_header,
	cmd_spec_warc_header, cmd_spec_htmlify, cmd_spec_mirror,
	cmd_spec_prefer_family, cmd_spec_progress, cmd_spec_recursive,
	cmd_spec_regex_type, cmd_spec_restrict_file_names, cmd_spec_report_speed,
	cmd_spec_timeout, cmd_spec_useragent, cmd_spec_verbose): Add compiler
	directive to ignore unused variable
	(cleanup_html_url, spider_cleanup): Remove declarations
	(test_commands_sorted): Cleanup code
	(test_cmd_spec_restrict_file_names): Use correct data types
	* src/iri.c (remote_to_utf8): Use more verbose variable name
	* src/main.c (init_switches): Prevent declaration of ghost variable
	* src/netrc.c (netrc_cleanup): Create cleanup function on common naming scheme
	* src/netrc.h (netrc_cleanup): Declare function
	* src/openssl.c (openssl_write, openssl_errstr): Compiler directive to ignore
	unused parameter
	(openssl_errstr): Explcicitly typecasr output of ASN1_STRING_length
	* src/options.h (struct options): Declare includes and excludes as const char **
	* src/progress.c (progress_interactive_p, progress_handle_sigwinch): Compiler
	directive to ignore unused parameter
	* src/res.c (test_is_robots_txt_url): Fix datatypes
	* src/retr.c (line_terminator): Add compiler directive for ignoring unused
	paramter. Remove unused variable.
	* src/spider.h (spider_cleanup): Declare function
	* src/test,c (main): declare unused paramter
	* src/test.h (test_*): Declare functions
	* src/url.c (url_string): Explicit typecast of password strings
	(run_test): Declare *test, struct tests and *expected_result as const
	(test_path_simplify, test_append_uri_pathl, test_are_urls_equal): Fix datatypes
	* src/utls.c (fork_to_background): Be more verbose when errors occur
	(dir_matches_p, test_dir_matches_p): Declare char * as const as required
	(base64_encode, base64_decode, get_max_length): Set correct return type
	(match_pcre_regex, match_posix_regex): Use correct datatypes and typecasts
	(test_subdir_p): static const struct
	* src/utils.h (base64_encode, base64_decode, get_max_length): Fix return type
	* src/warc.c (ward_write_cdx_record): unused parameter
	(struct hash_table *warc_cdx_dedup_table): Declare as static

2014-05-01  Darshit Shah  <darnir@gmail.com> (tiny change)

	* src/progress.c (dot_finish): Do not print extra newlines when not in verbose
	mode. (Purely aesthetic change)
	(get_eta): Add extra space when eta is printed.
	(create_image): Remove erroneous space from being added to progress bar when
	filename > MAX_FILENAME_LEN
	(create_image): Remove extra space before printed download speeds
	Make the filename a fixed width column.

2014-05-01  Darshit Shah  <darnir@gmail.com>

	* doc/wget.texi: Add documentation for --show-progress

2014-05-01  Benjamin Goose  <gans+wget@tngtech.com>

	* src/http.c: Fix small memory leak

2014-04-22  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/http.c (gethttp): Fix 204 response handling

2014-04-22  Giuseppe Scrivano  <gscrivan@redhat.com>

	* tests/Makefile.am (EXTRA_DIST): Add missing Test--start-pos.px,
	Test-ftp--start-pos.px and Test--start-pos--continue.px.

2014-04-19  Darshit Shah  <darnir@gmail.com>

	* src/log.h (log_options): Add new logging options, LOG_PROGRESS. All progress
	bar related output should use LOG_PROGRESS.
	* src/log.c (CHECK_VERBOSE): Implement LOG_PROGRESS output
	* src/progress.c (dot_create, print_row_stats, dot_update, dot_finish,
	bar_finish, display_image): Output progress information through LOG_PROGRESS
	(progress_implementation, dot_create, bar_create, progress_create): The
	progress bar create functions accept an extra paramter for the filename of the
	local file
	(bar_progress): Add new variable to store filename of currently downloading
	file
	(bar_finish): Aesthetic change. Print two newlines if in verbose mode, else
	only one.
	(MACRO): Define new macro, MIN
	(create_image): Implement displaying filename in progress bar output
	Filename tick implementation copied from Giuseppe's patch on parallel-wget
	* src/progress.h (progress_create): Accept another parameter for filename
	* src/http.c (gethttp): Remove unnecessary conditional
	(read_response_body): Send local filename to fd_read_body so that it can be
	printed on the progress bar
	* src/main.c (option_data): Add new switch, --show-progress
	(main): If in verbose output, show progress bar by default
	(main): Set progress implemetation when displaying progress bar
	(no_prefix): Increase buffer size to 2048 to prevent overflows
	* src/init.c (commands): Add new command, showprogress
	(defaults): By default initialize show_progress to false
	* src/options.h (options): Add new option, show_progress
	* src/retr.c (fd_read_body): Accept new parameter for filename of currently
	downlaoding file
	(fd_read_body): Create and update progress bar when opt.show_progress is set
	(fd_read_body): Display progress information in Windows console titlebars
	* src/retr.h (fd_read_body): Update declaration
	* src/ftp.c (getftp): Send filename of the local file so that it can be printed
	with the progress bar.

2014-03-26  Darshit Shah  <darnir@gmail.com>

	* src/ftp.c (getftp): Rearrange parameters to fix compiler warning
	* src/utils.c (get_dir_matches_p): Do not pass a const char** to a function that
	expects char**

2014-03-25  Daniel Stenberg  <daniel@haxx.se>

	* src/url.c (shorten_length): Remove unused function.

2014-03-19  Yousong Zhou  <yszhou4tech@gmail.com>

	* src/init.c, main.c, options.h: Add option --start-pos for specifying
	start position of a download.
	* src/http.c: Utilize opt.start_pos for HTTP download.
	* src/ftp.c: Utilize opt.start_pos for FTP retrieval.

2014-03-13  Zihang Chen  <chsc4698@gmail.com>

	* testenv/test: (new package) package for test case classes
	* testenv/WgetTest.py: Split into test/base_test.py and test/http_test.py.
	* testenv/Test-*.py: Optimize the imports according to changes of WgetTest.py

2014-03-13  Zihang Chen  <chsc4698@gmail.com>

	* testenv/server: (new package) package for the server classes
	* testenv/server.http: (new package) package for HTTP server
	* testenv/server.ftp: (new package) package for FTP server
	* testenv/HTTPServer.py: Move to server/http/http_server.py. Also change the
	CERTFILE to '../certs/wget-cert.pem'.
	* testenv/FTPServer.py: Move to server/ftp/ftp_server.py.
	* testenv/WgetTest.py: Optimize import respect to the server classes.

2014-03-13  Zihang Chen  <chsc4698@gmail.com>

	* testenv/misc: (new package) package for miscellaneous modules
	* testenv/ColourTerm.py: Move to package misc and rename to colour_terminal.py,
	add print_color functions to reduce the use of string literals like
	"BLUE", "RED" etc.
	* testenv/WgetTest.py:
	(CommonMethods.Server_setup): Change invocation to printer to print_blue.
	(CommonMethods.FilesCrawled): Change invocation to printer to print_red.
	(HTTPTest.__init__): Change invocations to printer to print_red and
	print_green respectively.

2014-03-13  Zihang Chen  <chsc4698@gmail.com>

	* testenv/exc: (new package) package for miscellaneous exceptions
	* testenv/WgetTest.py: Move TestFailed to exc/test_failed.py.

2014-03-13  Zihang Chen  <chsc4698@gmail.com>

	* testenv/conf: (new package) package for rule classes and hook methods
	* testenv/WgetTest.py:
	(CommonMethods.Authentication): Move to conf/authentication.py.
	(CommonMethods.ExpectHeader): Move to conf/expect_header.py.
	(CommonMethods.RejectHeader): Move to conf/reject_header.py.
	(CommonMethods.Response): Move to conf/response.py.
	(CommonMethods.SendHeader): Move to conf/send_header.py.
	(CommonMethods.ServerFiles): Move to conf/server_files.py.
	(CommonMethods.LocalFiles): Move to conf/local_files.py.
	(CommonMethods.ServerConf): Move to conf/server_conf.py.
	(CommonMethods.WgetCommands): Move to conf/wget_commands.py.
	(CommonMethods.Urls): Move to conf/urls.py.
	(CommonMethods.ExpectedRetcode): Move to conf/expected_retcode.py.
	(CommonMethods.ExpectedFiles): Move to conf/expected_files.py.
	(CommonMethods.FilesCrawled): Move to conf/files_crawled.py.
	(CommonMethods.__check_downloaded_files): Rename to
	_check_downloaded_files, so that the method is callable from outside the
	class.
	(CommomMethods.get_server_rules): Modify so that it utilizes the conf
	package.
	(HTTPTest): Add a method hook_call(configs, name) to reduce duplications
	in pre_hook_call, call_test and post_hook_call utilizing the conf package.
	* testenv/conf/hook_sample.py: (new file) sample for hooks
	* testenv/conf/rule_sample.py: (new file) sample for rules
	* testenv/REAMDE: Update sections about customizing rules and hooks.

2014-03-13  Zihang Chen  <chsc4698@gmail.com>

	* testenv/base_test.py:
	(CommonMethods): Rename to BaseTest.
	(BaseTest): Implement __init__ method where the class-wide variables are
	initialized. Also variable names like `xxx_list` is renamed to its plural
	form, e.g. `server_list` => `servers`.
	(BaseTest.init_test_env): Remove name argument due to its unnecessarity.
	(BaseTest.get_test_dir): Because the path of the test directory is needed
	in multiple methods, this method is implemented.
	(BaseTest.get_domain_addr): Rewrite the return statement utilizing str
	formatting (which is more Pythonic).
	(BaseTest.get_cmd_line): Rename to gen_cmd_line. Change the variables with
	capitcal characters to lower ones. Also, the nested for loop is rewritten
	to a plain loop using the zip function.
	(BaseTest.__gen_local_filesys): Rename to gen_local_fs_snapshot. Move to
	ExpectedFiles in conf/expected_files.py and is marked as a static
	method. Refactor to a less verbose implementation.
	(BaseTest._check_downloaded_files): Rename to __call__ to agree with the
	invocation in test case classes. Move to ExpectedFiles in
	conf/expected_files.py.
	(BaseTest.get_server_rules): Refactor to a more Pythonic form utilizing
	dict.items() and is marked static.
	(BaseTest.stop_server): (new method) an abstract method which should stop
	the currently using servers.
	(BaseTest.instantiate_server_by): (new method) an abstract method which
	should instantiate a server instance according to the given argument.
	(BaseTest.__enter__): (new method) method which initialize the context
	manager
	(BaseTest.__exit__): (new method) method that finilize the context manager
	and deal with the exceptions during the execution of the with statement,
	subclasses can override this method for extensibility
	* testenv/http_test.py:
	(HTTPTest.__init__): Add call to super.__init__. Default values of
	pre_hook, test_params, post_hook are set to None to avoid a subtle bug of
	Python. Argument servers is renamed to protocols.
	(HTTPTest.Server_setup): Move to BaseTest and rename to server_setup.
	Calls to pre_hook_call, call_test, post_hook_call are removed.
	(HTTPTest.hook_call, pre_hook_call, call_test, post_hook_call): Move to
	BaseTest for that both HTTP test cases and FTP test cases may use these
	methods.
	(HTTPTest.init_HTTP_Server, init_HTTPS_Server): Merge and rename to
	instantiate_server_by to implement the abstract method in BaseTest.
	(HTTPTest.stop_HTTP_Server): Rename to stop_server to implement the
	abstract method in BaseTest. Also, pull out the part where remaining
	requests are gathered into a new method request_remaining.
	(BaseTest.act_retcode): Rename to ret_code because ExpectedRetCode is
	moved out from BaseTest, so the name act_retcode is actually a bit
	verbose.
	* testenv/conf/expected_ret_code.py:
	(ExpectedRetCode.__call__): Rewrite the str into a more readable form.
	* testenv/conf/files_crawled.py:
	(FilesCrawled.__call__): Refactor this method into a more Pythonic form
	utilizing the zip function.
	* testenv/conf/local_files.py:
	(LocalFiles__call__): Rewrite this method with the recommended with
	statement.
	* testenv/conf/server_conf.py:
	(ServerConf.__call__): Rewrite this method due to BaseTest.server_list is
	renamed to BaseTest.servers.
	* testenv/conf/server_files.py:
	(ServerFiles.__call__): Refactor the nested for loop into a plain one
	utilizing the zip function.
	* testenv/conf/urls.py:
	(URLs): Rename url_list to urls.
	* testenv/conf/wget_commands.py:
	(WgetCommands): Rename command_list to commands, rename test_obj.options
	to test_obj.wget_options.
	* testenv/Test--https.py, Test-Proto.py, Test-Parallel-Proto.py: Argument servers
	is changed to protocols due to change in the signature of
	HTTPTest.__init__.

2014-03-13  Zihang Chen  <chsc4698@gmail.com>

	* testenv/WgetTest.py: Move WgetFile to package misc.
	* testenv/README: Modify documentation respect to WgetFile.
	* testenv/Test-*.py: Optimize imports about WgetFile.

2014-03-13  Zihang Chen  <chsc4698@gmail.com>

	* testenv/Test-Proto.py: Fix a typo (line 71: server to servers).

2014-03-04  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/http.c (modify_param_value, extract_param): Aesthetic change.

2014-02-24  Yousong Zhou  <yszhou4tech@gmail.com> (tiny change)

	* tests/tests/Test--httpsonly-r.px: Add feature constraint on https.

2014-02-24  Giuseppe Scrivano  <gscrivan@redhat.com>

	* gnulib: update module.
	Reported by: Darshit Shah  <darnir@gmail.com>.

2014-02-14  Vladimír Pýcha  <vpycha@gmail.com> (tiny change)

	* src/http.c (parse_content_disposition, extract_param)
	(append_value_to_filename, digest_authentication_encode): URL-decode the
	filename parameter of Content-Disposition HTTP header if it is encoded. This
	is related to --content-disposition.
	New parameter of extract_param(), "is_url_encoded".
	Add argument NULL to the call of extract_param() in
	digest_authentication_encode().
	* src/http.h: Add the new parameter to the declaration of extract_param().
	* src/cookies.c (parse_set_cookie, test_cookies): Add argument NULL to the calls
	of extract_param().
	* src/url.c (url_unescape): Remove "static" modifier.
	* src/url.h: Add declaration of url_unescape().

2014-02-13  Yousong Zhou  <yszhou4tech@gmail.com>

	* tests/Wget.pm.in: Exclude existing files from the check of unexpected
	  downloads.

2014-02-13  Yousong Zhou  <yszhou4tech@gmail.com>

	* tests/Test--start-pos.px: Test --start-pos for HTTP downloads.
	* tests/Test-ftp--start-pos.px: Test --start-pos for FTP downloads.
	* tests/Test--start-pos--continue.px: Test the case when --start-pos and
	  --continue were both specified.

2014-02-13  Yousong Zhou  <yszhou4tech@gmail.com>

	* tests/FTPServer.pm: Fix the handling of TYPE command and avoid endless
	loop when doing binary mode RETR.

2014-02-10  Yousong Zhou  <yszhou4tech@gmail.com>

	* doc/wget.texi: Add documentation for --start-pos.

2014-02-06  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/main.c (print_version): Move copyright year out of the localized
	string and update it.

2014-02-06  Giuseppe Scrivano  <gscrivan@redhat.com>

	* configure.ac: Update copyright years.

2014-01-29  Darshit Shah  <darnir@gmail.com>

	* src/main.c: Remove pre-processor variable WHEN_DEBUG
	(option_data[]): Do not fail on --debug even if debug support is not
	compiled in.
	(main): Explicitly set opt.debug to false in case debugging support was not
	compiled.
	* src/init.c (commands[]): Support --debug wven when support is not compiled in.
	* src/options.h: Same

2014-01-23  Lars Wendler  <polynomial-c@gentoo.org> (tiny change)

	* tests/Test--post-file.px: Do not fail when wget has no debug support.

2014-01-17  Darshit Shah  <darnir@gmail.com>

	* src/init.c (commands[]): Add --no-config.
	* src/options.h: Same.
	* src/main.c (option_data[]): Same.
	(print_help): Same.
	(main): If --no-config is set, then do not read the wgetrc files.

2014-01-05  Håkon Vågsether <hauk142@gmail.com> (tiny change)

	* src/http.c (http_loop): Fix checking the URL length when filename is
	specified.

2014-01-02  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py (CommonMentods.exec_wget): Wait for n seconds before calling
	the Wget executable.

2014-01-02  Darshit Shah  <darnir@gmail.com>
	* testenv/Makefile.am: Add new Test--https.py to list of tests and EXTRA_DIST.
	Also replace all tabs with spaces in file for conformity.
	* testenv/Test--https.py: New test to check if Wget works correctly with HTTPS
	servers
	* testenv/HTTPServer.py: Import new modules for use in HTTPS Servers
	(HTTPSServer): New class that generates a SSL-wrapped socket for use in a
	HTTPS Server.
	(HTTPSd): HTTPS daemon class. Analogous to the HTTPd class
	* testenv/WgetTest.py: Define global variables HTTP and HTTPS to reflect Server
	types
	(CommonMethods.exec_wget): Add the protocol information to the URL before
	passing it to wget
	(HTTPTest.__init__): Edit syntax. The servers variable now accepts a list of
	servers defined by their type. E.g. HTTP, HTTPS.
	(HTTPTest.Server_setup): Reflect change in type of variable servers.
	However, we maintin the value of self.servers to allow most of the code to
	remain unchanged.
	(HTTPTest.init_HTTPS_Server): Initialize a HTTPS Server
	* testenv/Test-Parallel-Proto.py: Edit to reflect slight change in Test Fiel Syntax.
	* testenv/Test-Proto.py: Same

2013-12-29  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/init.c (home_dir): Remove useless 'if'.
	* src/warc.c (warc_start_new_file): Likewise.
	(warc_process_cdx_line): Likewise.
	(warc_write_response_record): Likewise.

2013-12-29  Giuseppe Scrivano  <gscrivan@redhat.com>

	* doc/wget.texi: Update to GFDL 1.3.

2013-12-27  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py: Add modeline
	(CommonMethods.ServerConf): New pre-test hook that sets
	BaseHTTPRequestHandler class variables in all available servers
	* testenv/HTTPServer.py (HTTPd.ServerConf): Call the respective method in the Server
	to set the class variables
	(StoppableHTTPServer.server_sett): Set the handler class variables

2013-12-26  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_connect_wget): Fix connect timeout failure

2013-12-26  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py (HTTPTest.call_test): Correct the call to stop_HTTP_Server.

2013-12-25  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py (CommonMehtods.exec_wget): Catch and handle exception if the
	Wget executable is not found at src/wget
	(HTTPTest.call_test): In case of error during execution, remove all existing
	servers before quitting

2013-12-22  Mike Frysinger  <vapier@gentoo.org>

	* doc/sample.wgetrc: add links to the manual.

2013-12-22  Giuseppe Scrivano  <gscrivan@redhat.com>

	* gnulib: add git submodule.

2013-12-15  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py (HTTPTest.HTTP_setup): Rename to Server_setup so it can be
	easily reused for other non-HTTP servers.
	(HTTPTest.__init__): Call Server_setup instead of HTTP_setup
	(HTTPTest.Server_setup): Split into three more functions, that handle
	pre-hooks, test execution and post-hooks respectively.
	(HTTPTest.pre_hook_call): Set up and execute the pre-test hooks. Code split
	from HTTPTest.Server_setup
	(HTTPTest.call_test): Execute wget and log exit code. Code split from
	HTTPTest.Server_setup
	(HTTPTest.post_hook_call): Set up and execute post-test hooks. Code split
	from HTTPTest.Server_setup

2013-11-04  Darshit Shah  <darnir@gmail.com>

	* tests/Makefile.am: Add new tests introduced in last commit to
	EXTRA_DIST.
	Reported by: Andrea Urbani  <matfanjol@mail.com>

2013-11-02  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/progress.c (struct progress_implementation): New method draw.
	(bar_update): Split into...
	(bar_draw): ...this new function.
	(dot_update): Split into...
	(dot_draw): New function.
	(progress_update): Also invoke draw on `current_impl'.

2013-11-02  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/http.c (gethttp): Increase max header value length to 512.

2013-10-30  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/http.c (skip_short_body): Remove assert which is always true.
	Reported by: David Binderman <dcb314@hotmail.com>

2013-10-26  Bykov Aleksey <gnfalex@rambler.ru>

	* src/utils.c (match_tail): Fix cookies reject

	* src/ftp-ls.c (ftp_parse_unix_ls): Fix parsing month name in uppercase

2013-10-22  Ángel González <keisial@gmail.com>

	* bootstrap.conf (gnulib_modules): Add module xstrndup.

2013-10-17  Andrea Urbani  <matfanjol@mail.com>

	* tests/FTPServer.pm (GetBehavior): new routine.
	* tests/FTPServer.pm (get_list): new parameter to skip hidden files
	* tests/Test-ftp-list-Multinet.px: Test LIST on a "UNIX MultiNet
	  Unix Emulation" system that returns an empty content when
	  "LIST -a" is requested (probably because no "-a" files
	  exist)
	* tests/Test-ftp-list-Unknown.px: Test LIST on a "Unknown ftp
	  service" system that returns an empty content when
	  "LIST -a" is requested (probably because no "-a" files
	  exist)
	* tests/Test-ftp-list-Unknown-a.px: Test LIST on a "Unknown ftp
	  service" system that recognises "LIST -a" as "give me the
	  -a file" and there is a "-a" file + other two files.
	  "LIST -a" will return only "-a", "LIST" all the three files.
	* tests/Test-ftp-list-Unknown-hidden.px: Test LIST on a "Unknown ftp
	  service" system that recognises "LIST -a" as an "UNIX Type:
	  L8" system (show me also the hidden files) and there is an
	  hidden file.
	* tests/Test-ftp-list-Unknown-list-a-fails.px: Test LIST on a
	  "Unknown ftp service" system that raises an error on
	  "LIST -a" command.
	* tests/Test-ftp-list-UNIX-hidden.px: Test LIST on a "UNIX Type:
	  L8" system that recognises "LIST -a" as "show me also the
	  hidden files" and there is an hidden file.

2013-10-17  Andrea Urbani  <matfanjol@mail.com>

	* src/ftp.c (getftp): force "LIST" or "LIST -a"
	  according to the remote system type. If the remote
	  system is not known, it tries, only the first time,
	  "LIST -a", after "LIST" and decides which one to use.
	  For more information look for "__LIST_A_EXPLANATION__"
	* src/ftp.h (enum ustype): New ustype enum.
	* src/ftp.h (ftp_syst): New enum ustype *unix_type parameter.
	* src/ftp.h (ftp_list): Removed enum stype rs parameter, added.
	  bool avoid_list_a, bool avoid_list, bool *list_a_used
	  parameters.
	* src/ftp.h (wget_ftp_fstatus): New AVOID_LIST_A, AVOID_LIST,
	  LIST_AFTER_LIST_A_CHECK_DONE values.
	* src/ftp-basic.c (ftp_list): it handles the new avoid_list_a,
	  avoid_list and list_a_used parameters.
	* src/ftp.h (ftp_syst): it stores information about the "215 UNIX"
	  systems into the new unix_type parameter.

2013-10-14  Giuseppe Scrivano  <gscrivan@redhat.com>

	* testenv/Makefile.am (XFAIL_TESTS): Remove Test--spider-r.py.

2013-10-10  Giuseppe Scrivano  <gscrivan@redhat.com>

	* tests/Test-idn-robots-utf8.px: Remove -H.
	* tests/Test-idn-cmd.px: Likewise.
	* tests/Test-idn-cmd-utf8.px: Likewise.
	Suggested by: Tim Ruehsen <tim.ruehsen@gmx.de>

2013-10-10  Giuseppe Scrivano  <gscrivan@redhat.com>

	* src/url.c (url_parse): Try to convert UTF-8 URLs to IDN.
	* src/html-url.c (append_url): Parse URLs specifying an IRI structure.

2013-10-07  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Test-idn-robots.px: added punycoded and escaped URLs to follow
	  removed -H

2013-10-06  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* doc/wget.texi: add/explain quoting of wildcard patterns

2013-10-06  Giuseppe Scrivano  <gscrivan@redhat.com>

	* testenv/Makefile.am (EXTRA_DIST): Distribute test files.

2013-09-16  Darshit Shah  <darnir@gmail.com>

	* testenv/README: Update documentation

2013-09-14  Darshit Shah  <darnir@gmail.com>

	* testenv/HTTPServer.py (StoppableHTTPServer): Define object variable
	request_headers which stores a list of requests received by the server
	(StoppableHTTPServer.get_req_headers): Return the list of Request
	Headers stored by the server
	(_Handler.do_HEAD): Send the Request MEthod string for identification
	(_Handler.do_GET): Same
	(_Handler.__log_request): Log the request in Request_Headers list
	(_Handler.send_head): Make a call to __log_request
	* testenv/Test--spider-r.py: Add new list, Request_List, which contains all
	the requests that Wget is expected to send. This will allow for
	fine-grained tests on recursive downloading.
	* testenv/WgetTest.py (CommonMethods.FilesCrawled): New Post-Test Hook, that
	ensures that all the expected Files on the server were accessed as
	expected.
	(HTTPTest.stop_HTTP_server): On stopping server, asks it to respond
	with list of all requests it received.

2013-09-13  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/recur.c (download_child_p): fix compile error when
	  configured using --without-ssl.

2013-09-13  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* configure.ac: added a summary of build options
	  fixed some indentations
	  removed the unconditionally adding of libz with --with-ssl
	  removed -lgcrypt and -lgpg-error for gnutls

2013-09-13  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py (CommonMethods._replace_substring): New method that will
	replace a substring delimited by {{ }} characters by the value of
	self.<substring> variable
	(CommonMethods.WgetCommands): Use the _replace_substring () call to
	replace the substrings in the the command line.
	(CommonMethods.ServerFiles): Run the _replace_substring () method on
	the File contents too.

2013-09-13  Darshit Shah  <darnir@gmail.com>

	* testenv/Test--spider-r.py: Test retrieval in recursive spider mode.
	* testenv/Makefile.am: add new file

2013-09-13  Darshit Shah  <darnir@gmail.com>

	* testenv/HTTPServer.py (_Handler.do_HEAD): If requested path is /, respond
	with /index.html
	(_Handler.do_HEAD): Smartly guess value of Content-Type Header from
	file extension
	(_Handler.guess_type): Use a preset list of extensions and
	Content-Type strings. If the extension matches one in the list, use
	that string, else default to "text/plain"

2013-09-11  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py (CommonMethods.exec_wget): Expect domain_list instead of
	domain.
	(CommonMethods.get_cmd_line): Same. Generate command line by
	prepending to each file it's respective domain string
	(CommonMethods.ServerFiles): Generate file_list and server_rules for
	each Server and set the config details
	(HTTPTest): New named parameter, servers which signifies number of
	servers to spawn
	(HTTPTest.HTTP_setup): This method now takes servers as a new
	parameter. Instead of storing server and domain, we now store
	server_list and domain_list. Each server must be initialized through a
	loop.
	(HTTPTest.stop_HTTP_server): Stop all servers in a loop.
	* testenv/Test-Parallel-Proto.py: Prototype test file for multiple servers.

2013-09-10  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py (HTTPTest.stop_HTTP_server): With the threaded servers,
	we can simply use the socketserver.shutdown() method to close the
	server instead of sending a QUIT command
	* testenv/HTTPServer.py (StoppabelHTTPServer.serve_forever): Delete method. No
	need to override this method anymore.
	(WgetHTTPRequestHandler.do_QUIT): No longer required
	(HTTPd): Rename self.server to self.server_inst to reduce ambiguity
	when referenced from WgetTest

2013-09-09  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_connect_wget): changed checking of option "PFS"
	  to be better prepared for some kinds of backports.
	  Reported by: Daniel Kahn Gillmor <dkg@fifthhorseman.net>

2013-09-08  Darshit Shah  <darnir@gmail.com>

	* testenv/README (File Structure): Add explanation about various variables
	used consistently across all tests.

2013-09-07  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_connect_wget): use gnutls_check_version()
	  to check if option "PFS" is available
	  Reported by: Daniel Kahn Gillmor <dkg@fifthhorseman.net>

2013-09-07  Darshit Shah  <darnir@gmail.com>

	* testenv/Test-Post.py: Test basic functionality for sending HTTP POST
	requests using the --method command
	* testenv/Makefile.am: Add new test

2013-09-07  Darshit Shah  <darnir@gmail.com>

	* testenv/HTTPServer.py: Remove bunch of old code artefacts
	* testenv/WgetTest.py: Same

2013-09-07  Darshit Shah  <darnir@gmail.com>

	* testenv/HTTPServer.py (StoppableHTTPServer.server_conf): Change global
	variable fileSys to an object variable. This is good programming
	practice and required for parallel-wget support.
	(StoppableHTTPServer.server_forever): Edit overridden method to remove
	the global queue variable. No longer required under the new working
	(WgetHTTPRequestHandler.do_QUIT): Don't push fileSys through the queue
	(_Handler): Rename class __Handler to _Handler to match Python's
	encapsulation rules
	(_Handler.do_POST): fileSys is now an object variable of the server
	(_Handler.do_PUT): Same
	(_Handler.send_put): Same
	(_Handler.send_head): Same
	(HTTPd): New class that wraps around the server for Threading
	(create_server): Make new object of HTTPd.
	(spawn_server): Start the thread created through create_server
	(ret_fileSys): Removed method. No longer required.
	* testenv/WgetTest.py (HTTPTest.__init__): Don't explicitly set
	self.act_retcode. Instead toggle tests_passed boolean to set the
	correct return code.
	(HTTPTest.HTTP_setup): We no longer call HTTPServer.spawn_server to
	start a new instance of the server.
	(HTTPTest.init_HTTP_server): We no longer call the old
	create_server(), spawn_server() methods. Instead use the new HTTPd
	class interface to create new instances of the server
	(HTTPTest.stop_HTTP_server): Don't ask server to return fileSys.

2013-09-06  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py (CommonMethods.__check_downloaded_files): Print a
	unified diff in case there is a mismatch in the file contents

2013-09-06  Darshit Shah  <darnir@gmail.com>

	* testenv/README: New section on pending work. Will keep updating this to keep
	track of work that remains to be done on this implementation

2013-09-06  Darshit Shah  <darnir@gmail.com>

	* testenv/HTTPServer.py (WgetHTTPRequestHandler.test_cookies): Comment out the
	old test_cookies code. This is no longer used and was causing problems
	with expected cookies. The code will soon be removed anyways
	* testenv/Test-cookie.py: Add new test for basic cookie functionality
	* testenv/Test-cookie-401.py: Ensure cookies are saved during a 401 response
	* testenv/Test-cookie-expires.py: Ensure that the Expires field is correctly
	handled
	* testenv/Test-cookies-domain-mismatch.py: Ensure that mismatched domains are
	handled by Wget
	* testenv/Makefile.am: Add the new tests

2013-09-05  Darshit Shah  <darnir@gmail.com>

	* testenv/Test-auth-with-content-disposition.py: Add test that ensures Content
	Disposition works alongwith authentication
	* testenv/Makefile.am: Add new test

2013-09-04  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* doc/sample.wgetrc: added "secureprotocol" example
	* doc/wget.texi (HTTPS (SSL/TLS) Options): Document PFS.

2013-09-04  Darshit Shah  <darnir@gmail.com>

	* testenv/Test-c-full.py: Test Continue options
	* testenv/Makefile.am: Add Test-c-full.py and Test-O

2013-09-03  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/main.c: Add new value 'PFS' to --secure-protocol to
	  enforce the so-called Perfect Forward Security.
	* src/init.c (cmd_spec_secure_protocol): added secure_protocol_pfs
	* src/openssl.c, gnutls.c, options.h: likewise

2013-09-02  Darshit Shah  <darnir@gmail.com>

	* testenv/Makefile.am:	Add new Test
	* testenv/Test-Head.py: New Test to ensure HEAD requests are handled correctly

2013-08-31  Darshit Shah  <darnir@gmail.com>

	* testenv/WgetTest.py: Remove import module defaultdict.
	(CommonMethods.get_server_rules): server_rules should be a dict, not a
	defaultdict (list).
	* testenv/HTTPServer.py (WgetHTTPRequestHandler.get_rule_list): If rule does
	not exist, return None.	Not an emppty list.
	(WgetHTTPRequestHandler.test_cookies): Rule variable is not a list.
	(__Handler.send_cust_headers): Same.
	(__Handler.custom_response): Same.
	(__Handler.is_authorized): Same.
	(__Handler.expect_headers): Same.
	(__Handler.reject_headers): Same.

2013-08-31  Darshit Shah  <darnir@gmail.com>

	* testenv/README: Explain that TEST_NAME needs to be unique
	* testenv/Test-auth-no-challenge.py: Edit non-unique TEST_NAME

2013-08-31  Darshit Shah  <darnir@gmail.com>

	* testenv/README: (newfile) Simple help / instructions about using the Test
	Environment.
	* testenv/Makefile.am: (newfile) Makefile for the Test Environment. Uses the
	Automake Parallel Test Harness
	* testenv/WgetTest.py: (newfile) Base module that executes the Test.
	* testenv/HTTPServer.py: (newfile) Contains the custom HTTP Server for the
	Test Environment. Creates an instance of http.server in Python3.
	* testenv/FTPServer.py: (newfile) Overrides methods from pyftpdlib for use in
	the Test Environment. ** Work under progress **.
	* testenv/ColourTerm.py: (newfile) A custom module to output coloured text to
	the terminal. Known to work on POSIX shells.
	* testenv/Test-Proto.py: (newfile) A prototype Test File. This should be
	copied when writing a new Test Case.
	* testenv/Test-Content-disposition-2.py: Test Content Disposition clobbering
	* testenv/Test-Content-disposition.py: Test Content Disposition Headers
	* testenv/Test-O.py: Test Output filename command
	* testenv/Test-auth-basic-fail.py: Test returncode on auth failure
	* testenv/Test-auth-basic.py: Test Basic Auth negotiation
	* testenv/Test-auth-both.py: Test handling of Multiple auth providers. This
	test currently fails.
	* testenv/Test-auth-digest.py: Test Digest Auth Negotiation
	* testenv/Test-auth-no-challenge-url.py: Ensure --auth-no-challenge is handled
	when auth details are in-URL.
	* testenv/Test-auth-no-challenge.py: Ensure --auth-no-challenge is honoured
	* testenv/Test-auth-retcode.py: Ensure correct return code after 403 Forbidden
	response.
2013-08-31  Darshit Shah  <darnir@gmail.com>

	* testenv/HTTPTest.py (ServerError): Define new Exception for handling
	internal control flow.
	(StoppableHTTPServer.SendHeader): Simply pass. Do nothing. Adding
	functionality here seems to crash for no apparent reason.
	(stoppableHTTPServer.send_cust_headers): Minor optimization. No need
	for extra variable.
	(__Handler.Response): Handle explicit Response Code Rules
	(__Handler.Authentication): Handle Authentication rules
	(__Handler.handle_auth): Actual worker method for authentication
	(__Handler.ExpectHeader): Ensure Expected Headers are received
	(__Handler.RejectHeader): Ensure Blacklisted Headers are NOT received
	(__Handler.send_HEAD): Dynamically call server rule functions based on
	the self.rules list. This feature will later be added to POST/PUT, etc

2013-08-31  Darshit Shah  <darnir@gmail.com>

	* configure.ac: Add testenv/Makefile to	AC_CONFIG_FILES.
	* Makefile.am: Add testenv to SUBDIRS

2013-08-23  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* doc/sample.wgetrc: added "httpsonly" example

2013-08-22  Tim Ruehsen <tim.ruehsen@gmx.de>

	* tests/Makefile.am (EXTRA_DIST): Add Test--httpsonly-r.px.
	* tests/run-px (tests): Likewise.
	* tests/Test--httpsonly-r.px: New file.

2013-08-22  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/main.c: Add new option --https-only.
	* src/options.h: Likewise.
	* src/recur.c (download_child_p): add check for HTTPS.

2013-08-22  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* doc/wget.texi: added description for --https-only

2013-08-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Fix misspelling.

2013-08-09  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_init): Prevent CA files from being loaded twice
	  if possible.
	* src/gnutls.c (ssl_check_certificate): Added some error messages
	* src/gnutls.c: Fixed some compiler warnings

2013-08-08  Will Dietz  <w@wdtz.org> (tiny change):

	* src/main.c (format_and_print_line): Wrap correctly long tokens.

2013-07-23  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* configure.ac: Remove AM_CONDITIONAL HAVE_NETTLE.
	Reported by: Darshit Shah  <darnir@gmail.com>.

2013-07-16  Darshit Shah  <darnir@gmail.com>

	* src/wget.h (err_t): Added new errors, ATTRMISSING and UNKNOWNATTR to
	handle missing attributes and Unknown attribute values respectively in
	HTTP Headers.
	* src/exits.c (get_status_for_err): ATTRMISSING is a Protocol Error while
	UNKNOWNATTR is a general error, presumably because of a feature that
	is not yet implemented.
	* src/http.c (gethttp): Call create_authorization_line () separately. In
	case the auth_err flag has been set with an error, handle it and exit.
	* src/http.c (create_authorization_line): Pass a pointer, auth_err to set
	the flag for different kinds of errors encountered.
	* src/http.c (http_loop): Handle the errors raised by the authentication
	handlers.
	* src/http.c (digest_authentication_encode): Pass pointer auth_err to set
	the error flags.
	Set qop to NULL in case the value of the qop / algorithm attribute is
	unknown to Wget. Set an	appropriate error too.

2013-07-13  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/http.c (digest_authentication_encode): Fix a crash when the algorithm
	is not specified in the server response.  Free dynamic memory used by
	the function when the function exits.
	* src/http-ntlm.c [HAVE_NETTLE]: Include <nettle/md4.h> and <nettle/des.h>.
	(setup_des_key) [HAVE_NETTLE]: New function to deal with
	libnettle.
	(calc_resp) [HAVE_NETTLE]: Add support for libnettle.
	(mkhash) [HAVE_NETTLE]: Likewise.
	Reported by: Tim Ruehsen  <tim.ruehsen@gmx.de>.

2013-07-13  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* configure.ac: check for libnettle when GNU TLS is used.

2013-07-13  Steven M. Schweda <sms@antinode.info>

	* src/warc.c (warc_tempfile): Fix a portability issue on VMS.

2013-07-12  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (digest_authentication_encode): Set default value of
	`algorithm' to "MD5".  Check if `qop' is not-NULL before access it.

2013-07-11  Tomas Hozza  <thozza@redhat.com>

	* src/ftp.c (ftp_loop): Use ftp_retrieve_glob() also in case
	--preserve-permissions was specified.

2013-07-11  Tomas Hozza  <thozza@redhat.com>

	* doc/wget.texi: Document --regex-type and --preserve-permissions.

2013-07-11  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_connect_wget): respect connect timeout.

2013-07-11  Karsten Hopp  <karsten@redhat.com>

	* src/openssl.c (struct openssl_read_args, struct scwt_context): New struct.
	(openssl_read, ssl_connect_with_timeout_callback): New function.
	(ssl_connect_wget): respect connect timeout.

2013-07-10  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (read_response_body) [ALLOW_CLOBBER]: Move definition to..
	* src/options.h (struct options): Make `backups' an int.
	* src/url.h [ALLOW_CLOBBER]: .. Here.  Do not clobber when backups are used.
	* src/url.c (url_file_name): Use the ALLOW_CLOBBER macro instead of
	repeating the code.

2013-07-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Download Options): Add documentation for --backups.
	(Wgetrc Commands): Add documentation for backups.
	Reported by: Tomas Hozza <thozza@redhat.com>.

2013-07-08  Steven M. Schweda <sms@antinode.info>

	* src/retr.c (rotate_backups): Support for VMS files.

2013-06-26  Darshit Shah <darnir@gmail.com>

	* src/http.c (gethttp): Reverse change by commit 90896 that prevented
	downloading response body data to non-GET Request methods.

2013-06-22  Ángel González <keisial@gmail.com>

	* src/init.c (cmd_string_uppercase): Rewrite function.

2013-06-19 Ciprian Vieru <devel.php@gmail.com> (tiny change)

	* src/html-url.c: Define TAG_TD, TAG_TH, TAG_VIDEO, TAG_AUDIO, TAG_SOURCE.
	(tag_url_attributes, known_tags): Likewise.

2013-06-19  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/connect.c (socket_ip_address): zero out ip address structure to
	avoid access to uninitialized values by inet_ntop().
	* src/ftp.c (ftp_loop_internal): fix segfault caused by warc_tmp NULL pointer.

2013-06-17  Dave Reisner  <dreisner@archlinux.org> (tiny change)

	* doc/texi2pod.pl: Fix formatting error that causes build to fail with
	Perl 5.18

2013-06-17  Darshit Shah  <darnir@gmail.com>

	* doc/wget.texi (POST): Explain the new redirection rules.
	* doc/wget.texi (Other HTTP Methods): Same.
	* doc/wget.texi (body-data): Fix typo in description.

2013-06-13  Darshit Shah  <darnir@gmail.com>

	* src/http.c (gethttp): Follow RFC 2616 and httpbis specifications when
	handling redirections. Do not suspend the method on 301/302 redirects.
	(gethttp): If method if not GET, we do not intend to download
	anything.
	* src/main.c (main): Set spider mode when opt.method is HEAD. This will
	prevent Wget from downloading any file.
	* src/retr.c (SUSPEND_METHOD): Rename macro SUSPEND_POST_DATA to
	SUSPEND_METHOD to more accurately reflect its use. Similarly rename
	related variables.

2013-05-21  Ray Satiro  <raysatiro@yahoo.com>

	* src/url.c (url_file_name): Use MAX_PATH in Windows.

2013-05-17 Bykov Aleksey <gnfalex@rambler.ru>

	* bootstrap: Add `mkostemp'

2013-05-14 Bykov Aleksey <gnfalex@rambler.ru>

	* src/warc.c (warc_tempfile): For fix "Could not open temporary WARC manifest
	file." issue in Win system force to use `mkostemp(filename, O_TEMPORARY)'
	instead  of `mkstemp(filename)'. Thank to Angel Gonzalez for help.

2013-05-14  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/cookies.c (cookie_jar_load): Replaced read_whole_file() by getline().
	* src/init.c (run_wgetrc): Likewise.
	* src/netrc.c (parse_netrc): Likewise.
	* src/utils.c: Likewise.
	* src/ftp.c (getftp): Likewise.
	* src/ftp-ls.c (ftp_parse_unix_ls, ftp_parse_winnt_ls, ftp_parse_vms_ls): Likewise.
	* src/ftp-ls.c (clean_line): Accept the string length as parameter.
	* src/ftp-ls.c: Replaced indent tabs by spaces.
	* src/ftp.c: Likewise.
	* src/utils.c: Removed read_whole_file() definition.
	* src/netrc.c: Removed read_whole_file() definition for STANDALONE.
	* src/utils.h: Removed read_whole_file() declaration.

2013-05-10  Darshit Shah <darnir@gmail.com>  (tiny change)

	* doc/wget.texi (No of tries): Fix typo to make it clear that --tries
	option sets number of tries not retries.
	Reported by: Hauke Hoffman <haukebjoernhoffman@googlemail.com>

2013-05-09  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/utils.c (acceptable): use standard string functions instead of
	self-written code.
	(match_tail): Likewise.
	(suffix): Likewise.
	(has_wildcards_p): Likewise.
	(test_subdir_p): Fix some warnings.
	(test_dir_matches_p): Likewise.

2013-05-05  mancha  <mancha1@hush.com> (tiny change)

	* src/gnutls.c (ssl_connect_wget): Don't abort on non-fatal alerts
	received during handshake. For example, when connecting to servers
	using TSL-SNI that send warning-level unrecognized_name alerts.

2013-05-04  Darshit Shah <darnir@gmail.com>

	* src/init.c (cmd_string_uppercase): Fix issue that cased invalid headers
	when converting to uppercase.

2013-05-01  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/init.c: Declare `cmd_string_uppercase'.
	(commands): Now `method' uses cmd_string_uppercase.
	(cmd_string_uppercase): New method
	* src/http.c (gethttp): Do not transform opt.method to uppercase.
	Reported by: Stefano Lattarini <stefano.lattarini@gmail.com>

2013-05-01  Gijs van Tulder  <gvtulder@gmail.com>

	* src/retr.c (retrieve_url): New variable `saved_method'.
	(SUSPEND_POST_DATA): Save the method to `saved_method'.
	(RESTORE_POST_DATA): Restore the method from `saved_method'.

2013-04-28  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Types of Files...): Document --accept-regex,
	--reject-regex.
	Reported by: Tomas Hozza <thozza@redhat.com>.

2013-04-26  Tomas Hozza  <thozza@redhat.com> (tiny change)

	* src/log.c (redirect_output): Use DEFAULT_LOGFILE in diagnostic message
	when `logfile' is NULL.
	* src/utils.c (unique_create): Ensure `logfile' has always a value.

2013-04-24  Darshit Shah <darnir@gmail.com>

	* src/http.c (gethttp): Remove check for opt.post_data and
	opt.post_file_name.
	* src/main.c (main): Change location in code where --post-data and
	--post-file options are converted to --body-data --body-file.

2013-04-21  Gijs van Tulder  <gvtulder@gmail.com>

	* src/http.c: Copy opt.body_data to the WARC file, instead of
	opt.post_data (the old option).

2013-04-14  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Download Options): Document "mega" dot style.

2013-04-12  Gijs van Tulder  <gvtulder@gmail.com>

	* src/warc.c: Generate unique UUIDs for the manifest and the record
	holding the command-line arguments.
	Write the manifest to a "metadata" record to follow the WARC
	implementation guidelines.
	* src/warc.h: Declare new function warc_write_metadata_record.

2013-04-05  Darshit Shah <darnir@gmail.com>

	* doc/doc/wget.texi: Fix ambiguous wording in --post-data section. Make it
	clear that wget does not check for the format of the post-data.
	* doc/doc/wget.texi: Add documentation for --method, --body-data and
	--body-file.

2013-03-31  Gijs van Tulder  <gvtulder@gmail.com>

	* src/warc.c: Correctly write the field length in the skip length field
	of .warc.gz files. (Following the GZIP spec in RFC 1952.)

2013-03-20  Tomas Hozza  <thozza@redhat.com>

	* src/http.c (gethttp): Set "sock" to -1 if it's not and we have no
	persistent connection

2013-03-15  Darshit Shah <darnir@gmail.com>

	* src/http.c (post_file): Rename function to body_file_send to more
	accurately reflect its use.
	* src/http.c (gethttp): Add support for --method, --body-data and
	--body-file
	* src/init.c (commands): Same.
	* src/options.h (options): Same.
	* src/main.c (option_data): Same.
	* src/main.c (print_help): Add --method command.
	* src/main.c (main): Make old --post-{data,file} commands aliases to
	--method.
	Add sanity checks for --method, --body-data and --body-file.
	* src/retr.c (SUSPEND_POST_DATA): Edit Macro Definition to use body_data.
	* src/retr.c (RESTORE_POST_DATA): Same.

2013-03-12  Darshit Shah <darnir@gmail.com>

	* tests/Makefile.am (EXTRA_DIST): Add Test--post-file.px.
	* tests/run-px (tests): Likewise.
	* tests/Test--post-file.px: New file.

2013-03-12  Darshit Shah <darnir@gmail.com>

	* src/http.c (gethttp): Make wget return FILEBADFILE error and abort if
	post-file does not exist.

	* src/http.c (http_loop): Handle FILEBADFILE as a valid err.

	* src/exits.c (get_status_for_err): Mark FILEBADFILE as an IO error.

2013-02-15  Darshit Shah <darnir@gmail.com>

	* src/cookies.c (cookie_handle_set_cookie): Set cookie->discard_requested
	to true on domain mismatch.

2013-01-30  Pavel Mateja  <pavel@netsafe.cz> (tiny change)

	* src/http.c (gethttp): Specify "Host" for CONNECT method.

2012-12-20  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_connect_wget): added +VERS-SSL3.0 to fix
	--secure-protocol=SSLv2/SSLv3.

2012-12-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (main): Keep looking for "config" until there are
	arguments to parse.
	Reported by: Adrien Dumont <adr.dum@hotmail.fr>

	* src/test.c: Include "wget.h".

2012-12-08  Michael Stapelberg <michael@stapelberg.de> (tiny change)

	* src/retr.c (retrieve_url): Set iri->orig_url to NULL after it is
	freed.

2012-11-26  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/wget.h (MAX_INT_TO_STRING_LEN): Define macro.
	* src/warc.c (warc_write_block_from_file): Use `MAX_INT_TO_STRING_LEN'
	to find the buffer size.
	(warc_write_cdx_record): Likewise.

2012-11-24  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/warc.c (warc_write_block_from_file): Use `number_to_string' to
	convert the content-length to a string.

2012-11-24  Gijs van Tulder  <gvtulder@gmail.com>

	* src/warc.c (warc_write_cdx_record): Use `number_to_string' to
	convert the offset to a string.

2012-11-15  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/retr.c (write_data): Fix comment.

2012-11-14  Ángel González  <keisial@gmail.com>

	* src/warc.c (warc_sha1_stream_with_payload): Fix compilation under
	gcc -std=c89.

2012-11-13  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/retr.c (fd_read_body): Correctly check the return code from
	write_data.
	Reported by: Torsten Scheck <torsten.scheck@gmx.de>

2012-11-09  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* tests/HTTPServer.pm: added check for must-not-match request-header
	* tests/Test-cookies.px: check cookie deletion and cookie domain matching

2012-10-08  Stefano Lattarini <stefano.lattarini@gmail.com>  (tiny change)

	docs: fix errors and warnings with Texinfo 5
	Or rather, with the development version 4.13.90, which will
	eventually become Texinfo 5.0.
	* doc/wget.texi: Use '@item' instead of '@itemx' in several places,
	as Texinfo 5 refuses to process an '@itemx' that is not preceded
	by an '@item'.

2012-10-07  Tim Ruehsen  <tim.ruehsen@gmx.de>
	    Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/utils.c (get_max_length): If `pathconf' is not available
	fallback to PATH_MAX.

2012-10-07  Ray Satiro <raysatiro@yahoo.com>

	* src/url.c: Change the functions of a growable string object to null
	terminate the string.
	* src/url.c (append_null): New function to null terminate a growable
	string object.
	* src/url.c (shorten_length): New function to shorten the length of a
	growable string object.

2012-10-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Check for patchconf.

2012-10-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (http_loop): Send a HEAD request when -c and
	--content-disposition are used together.

2012-10-03 Merinov Nikolay <kim.roader@gmail.com>

	* src/ftp.c (ftp_loop_internal): Ignore --no-clobber option when
	receiving directory listing.

2012-09-29 Merinov Nikolay <kim.roader@gmail.com>

	* src/ftp-ls.c (ftp_parse_winnt_ls): Support filename extracting with
	new listing format.

2012-09-29  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/url.h (CHOMP_BUFFER): Add definition.
	* src/url.c (url_file_name): New local variables `fname_len_check' and
	`max_length'. Check that the length of the file name is acceptable.
	* src/utils.h (get_max_length): Declare function.
	* src/utils.c (get_max_length): New function.

2012-09-28  Steven Schubiger  <stsc@member.fsf.org>

	* src/src/recur.c (retrieve_tree): Combine duplicated code.

2012-09-23  Merinov Nikolay  <kim.roader@gmail.com>

	* m4/wget.m4 (WGET_FNMATCH): Add AC_LANG_SOURCE into
	AC_COMPILE_IFELSE in order to silence autoconf 2.68 warning.

2012-09-20  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap: Update from gnulib.

2012-09-03  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/http.c (digest_authentication_encode): Add support for RFC 2617
	MD5-sess authentication algorithm.
	Feature request and testing by: Avinash <pavinash@gmail.com>

2012-09-02  Nguyễn Thái Ngọc Duy  <pclouds@gmail.com> (tiny change)

	* src/src/main.c (main): mark more strings for translation.
	* src/src/mswindows.c (fork_to_background): Likewise.
	* src/src/recur.c (download_child_p): Likewise.

2012-09-02  Nguyễn Thái Ngọc Duy  <pclouds@gmail.com> (tiny change)

	* po/POTFILES.in: Add more files.

2012-08-29  Rohit Mathulla <rohit_mathulla@yahoo.com> (tiny change)

	* src/html-url.c (get_urls_file): Convert shorthand URLs.

2012-08-28  Tim Ruehsen <tim.ruehsen@gmx.de>

	* doc/wget.texi: remove -nv from --report-speed

2012-08-28  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (ssl_check_certificate): deinit gnutls_x509_crt_t.
	* src/gnutls.c (ssl_init): don't error if CA directory is empty.

2012-08-25  Hrvoje Niksic  <hniksic@gmail.com>

	* src/warc.c (warc_find_duplicate_cdx_record): Use hash_table_get
	instead of hash_table_get_pair.

2012-08-21  <y-iida@secom.co.jp> (tiny change)

	* src/connect.c (connect_to_ip) [ENABLE_IPV6]: Attempt to use IPv6.
	* src/http.c (gethttp): Likewise.

2012-08-04  mancha <mancha@mac.hush.com> (tiny change)

	* doc/wget.texi: Export ENVIRONMENT to the man page.

2012-07-08  Steven Schubiger  <stsc@member.fsf.org>

	* src/exits.h: Fix comment.
	* src/exits.c: Likewise.

2012-07-08  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap: Update from gnulib.
	* bootstrap.conf (gnulib_extra_files): Remove $build_aux/missing.
	* lib/Makefile.am: Delete file.

2012-07-07  Tim Ruehsen <tim.ruehsen@gmx.de>

	(digest_authentication_encode): Add support for RFC 2617 Digest
	Access Authentication.

2012-07-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (http_loop): Fix log message.
	* src/main.c (main): Likewise.
	Reported by: Petr Pisar <petr.pisar@atlas.cz>

2012-07-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/html-url.c (cleanup_html_url): Remove "static" modifier.
	* src/init.c (cleanup_html_url): Likewise.
	Reported by: Mike Frysinger <vapier@gentoo.org>.

2012-07-03  Steven Schubiger  <stsc@member.fsf.org>

	* src/init.c: Include warc.h for warc_close in cleanup function.

2012-06-17  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/wget.h: Define `CLOSEFAILED'.
	* src/init.c: Include "exits.h".
	(cleanup): Check `fclose' failure.
	* src/exits.c (get_status_for_err): Handle `CLOSEFAILED'.

2012-06-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Makefile.am (EXTRA_DIST): Add Test-stdouterr.px.
	* tests/run-px (tests): Likewise.
	* tests/Test-stdouterr.px: New file.

2012-06-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (main): Move some cleanup related function to...
	* src/init.c (cleanup): ...here.

	* src/main.c: Do not include "stdout.h".
	(main): Do not register `close_stdout' at exit.
	Reported by: Micah Cowan  <micah@cowan.name>.

2012-06-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Remove `closeout'.
	Reported by: Micah Cowan  <micah@cowan.name>.

2012-06-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (print_help): Move --report-speed under the section
	"Logging and input file".

2012-06-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Logging and Input File Options): Document "--report-speed".
	(HTTPS (SSL/TLS) Options): Document WARC.

	* doc/texi2pod.pl: Revert change from 2011-08-06.

2012-06-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (print_help): Rename --bits to --report-bps.
	(cmdline_options): Likewise.
	* src/init.c (commands): Rename --report-bps to --report-speed.
	(cmd_spec_report_speed): New function.

	* src/options.h (struct options): Rename `bits_fmt' to `report_bps'.
	* src/main.c (print_help): Rename --bits to --report-bps.
	(cmdline_options): Likewise.
	* src/init.c (commands): Likewise

	* src/progress.c (create_image): Adjust caller.
	* src/retr.c (retr_rate): Likewise.
	* src/utils.c (convert_to_bits): Likewise.

2012-06-04  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/main.c (main): Check for filename != NULL.
	* src/warc.c (warc_process_cdx_line): Fix memory leak.
	* src/utils.c (match_posix_regex, compile_posix_regex): Remove dead assignment.
	* src/openssl.c (ssl_init): Fix old-style function definition.

2012-06-02  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/connect.c: Include <sys/socket.h> and <sys/select.h>.

2012-05-31  Ángel González <keisial@gmail.com>

	* convert.c: fix segfault on wrong urls (bug 36570)

2012-05-30  Gijs van Tulder  <gvtulder@gmail.com>

	* src/warc.c: Fix segfault if CDX record is not found.

2012-05-26  Mike Frysinger <vapier@gentoo.org>

	* src/warc.c: Change type of `warc_current_gzfile' to gzFile.

2012-05-26  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/warc.c (warc_load_cdx_dedup_file): Change type of `line_length' to
	ssize_t.
	Suggested by: Ángel González <keisial@gmail.com>

2012-05-19  illusionoflife  <illusion.of.life92@gmail.com> (tiny change)

	* src/convert.c (register_html,register_css): Fixed functions signature to
	not accept unused argument
	* src/retr.c (retrieve_url): Changed register_{css,html} usage according
	new signature.

2012-05-18  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (wgnutls_poll): Honor the specified `timeout' value.
	(wgnutls_peek): Likewise.

2012-05-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/warc.h: Cut length lines to 80 columns.
	* src/warc.c: Likewise.

2012-05-14  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (wgnutls_read_timeout): removed warnings, moved fcntl stuff
	outside loop.

	* src/hash.h (hash_table_put): Make argument "value" const.
	* src/hash.c (hash_table_put): Make argument value const.  Cast `value' to
	void.
	* src/http.c (request_set_header): Make argument `name' const.  Cast `value'
	and `name' to void*.
	(request_remove_header): Make argument `name' const.
	* src/url.c (url_file_name): Make `index_filename' static.
	* src/warc.h (warc_write_cdx_record): Make `url', `timestamp', `mime_type',
	`payload_digest', `redirect_location', `warc_filename', response_uuid'
	arguments const. Make `checksum' const.
	* src/warc.c (warc_write_date_header): Make the `timestamp' argument const.
	Make `extension' const.
	(warc_write_cdx_record): Make `url', `timestamp', `mime_type',
	`payload_digest', `redirect_location', `warc_filename', response_uuid'
	arguments const. Make `checksum' const.

2012-05-13  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/gnutls.c (credentials): Change type to
	gnutls_certificate_credentials_t.
	(ssl_init): Do not use deprecated types.
	(ssl_connect_wget): Likewise.

2012-05-13  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Types of Files): Document --accept-regex and
	--reject-regex.

2012-05-13  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add `git-version-gen'.
	* build-aux/bzr-version-gen: Remove file.
	* configure.ac: Invoke `build-aux/git-version-gen' to get the dist
	version.
	* Makefile.am (EXTRA_DIST): Distribute build-aux/git-version-gen instead
	of build-aux/bzr-version-gen.

2012-04-22  Tim Ruehsen <tim.ruehsen@gmx.de>

	* src/main.c (main): Dynamically allocate `opt.progress_type'.

2012-04-21  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/ftp-basic.c (ftp_pasv): Fix memory leak.

	* src/http.c (gethttp): Fix memory leak.

	* src/ftp.c (getftp): Silent compiler warning.

2012-04-13  Tim Ruehsen  <tim.ruehsen@gmx.de> (tiny change)

	* src/warc.c (warc_load_cdx_dedup_file): Fix a memory leak by freeing
	`lineptr'.

2012-04-11  Gijs van Tulder  <gvtulder@gmail.com>

	* src/init.c: Add --accept-regex, --reject-regex and --regex-type.
	* src/main.c: Likewise.
	* src/options.c: Likewise.
	* src/recur.c: Likewise.
	* src/utils.c: Add regex-related functions.
	* src/utils.h: Add regex-related functions.

2012-04-11  Gijs van Tulder  <gvtulder@gmail.com>

	* bootstrap.conf (gnulib_modules): Include module `regex'.
	* configure.ac: Check for PCRE library.

2012-04-07  Daniel Kahn Gillmor <dkg@fifthhorseman.net> (tiny change)

	* src/gnutls.c (key_type_to_gnutls_type): New function.
	(ssl_init): Use correctly the specified gnutls certificate.

2012-04-01  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (wgnutls_read_timeout): Ensure timer is freed.

	* src/gnutls.c (wgnutls_read_timeout): Do not use timer if it is not
	allocated.
	Reported by: Xu Zhongxing <xu_zhong_xing@163.com>

2012-04-01  Gijs van Tulder  <gvtulder@gmail.com>

	* src/html-url.c: Prevent crash on incomplete STYLE tag.

2012-03-30  Tim Ruehsen  <tim.ruehsen@gmx.de> (tiny change)

	* src/warc.c: make warc_uuid_str() implementation depend on HAVE_LIBUUID.

2012-03-30  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/url.c: Use empty query in local filenames.

2012-03-30  Tim Ruehsen  <tim.ruehsen@gmx.de>

	* src/convert.c (convert_links_in_hashtable): Mmake it static.
	* src/cookies.c (parse_set_cookie): Remove empty else branches.
	* src/css-url.c: Include "css-url.h".
	(get_uri_string): Make it static.
	* src/css-url.h (get_urls_css): Add protoype.
	* src/gnutls.c (ssl_init): Add prototype.
	* src/html-parse.c (tagstack_push): Make it static.
	* src/html-parse.c (tagstack_pop): Make it static.
	* src/html-parse.c (tagstack_find): Make it static.
	* src/html-url.c (cleanup_html_url): Make it static.
	* src/progress.c (count_cols): Make it static.
	* src/progress.c (get_eta): Make it static.
	* src/retr.h (convert_to_bits): Remove prototype.
	* src/util.h (convert_to_bits): Add prototype.
	* src/spider.c (spider_cleanup): Make it static.
	* src/warc.c (warc_write_start_record): Add prototype.
	* src/warc.c (warc_write_end_record): Add prototype.
	* src/warc.c (warc_start_cdx_file): Add prototype.
	* src/warc.c (warc_init): Add prototype.
	* src/warc.c (warc_load_cdx_dedup_file): Add prototype.
	* src/warc.c (warc_write_metadata): Add prototype.
	* src/warc.c (warc_close): Add prototype.
	* src/warc.c (warc_tempfile): Add prototype.
	* src/warc.c (warc_write_warcinfo_record): Make it static.
	* src/warc.c (warc_load_cdx_dedup_file): Make it static.
	* src/warc.c (warc_write_metadata): Make it static.
	* src/warc.h (warc_init): Fix prototype.
	* src/warc.h (warc_close): Fix prototype.
	* src/warc.h (warc_tempfile): Fix prototype.

2012-03-29  Tim Ruehsen <tim.ruehsen@gmx.de> (tiny change)

	* src/utils.c (library): Include <sys/time.h>.

2012-03-25 Ray Satiro <raysatiro@yahoo.com>

	* src/build_info.c.in: Check that HAVE_LIBSSL32 is defined when OpenSSL
	is used.

2012-03-25 Ray Satiro <raysatiro@yahoo.com>

	* configure.ac: Fix build under mingw when OpenSSL is used.

2012-03-25  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/utils.c: Include <sys/ioctl.h>.

	* src/ptimer.c: Include <sys/time.h>.

	* src/connect.c: Include <sys/socket.h>, <sys/select.h>, <sys/time.h>.
	Reported by: Ray Satiro <raysatiro@yahoo.com>.

2012-03-20  Ángel González <keisial@gmail.com>

	* bootstrap.conf (gnulib_modules): Add modules `ftello',
	`mkstemp' and `strtok_r'.

2012-03-07  Steven Schubiger  <stsc@member.fsf.org>

	* src/init.c (wgetrc_user_file_name): Correct typo.

2012-03-06   Sasikantha Babu   <sasikanth.v19@gmail.com>

	* src/utils.c (convert_to_bits): Added new function convert_to_bits to
	convert bytes to bits.
	* src/retr.c (calc_rate): Modified the function to handle --bits
	option and download rate calculated as bits per sec (SI-prefix)
	for --bits otherwise bytes (IEC-prefix).
	(retr_rate): Rates will display in bits per sec for --bits.
	* src/options.h (struct opt): Added --bit option bool variable bits_fmt.
	* src/main.c (print_help) : Added help for --bit.
	* src/init.c: Defined command for --bit option.
	* src/retr.h: Added function prototype.

2012-02-26  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c: Include "closeout.h"
	(main): Register close_stdout at exit.

2012-02-26  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add module `closeout'.

2012-02-23  Giuseppe Scrivano  <giuseppe@southpole.se>

	* src/main.c (main): Write diagnostic messages to `stderr' not to `stdout'.

	* src/main.c (main): Fail gracefully if `malloc' fails.

	* src/gnutls.c (wgnutls_read): Remove unused variables `timer' and `flags'.

2012-02-17  Steven Schubiger  <stsc@member.fsf.org>

	* src/warc.c: Add license header.

2012-02-01  Gijs van Tulder  <gvtulder@gmail.com>

	* src/warc.c: Fix large file support with ftello, fseeko.
	* src/warc.h: Fix large file support.
	* src/http.c: Fix large file support.

2012-01-27  Gijs van Tulder  <gvtulder@gmail.com>

	* src/retr.c (fd_read_body): If the response is chunked, the chunk
	headers are now written to the WARC file, making the WARC file
	an exact copy of the HTTP response.

2012-01-27  Gijs van Tulder  <gvtulder@gmail.com>

	* src/retr.c (fd_read_body): Fix a memory leak with chunked responses.
	* src/http.c (skip_short_body): Fix the same memory leak.

2012-01-09  Sasikantha Babu   <sasikanth.v19@gmail.com> (tiny change)
	* src/connect.c (connect_to_ip): properly formatted ipv6 address display.
	(socket_family): New function - returns socket family type.
	* src/http.c (gethttp): properly formatted ipv6 address display.

2012-01-09  Gijs van Tulder  <gvtulder@gmail.com>

	* src/init.c: Disable WARC compression if zlib is disabled.
	* src/main.c: Do not show the 'no-warc-compression' option if zlib is
	disabled.
	* src/warc.c: Do not compress WARC files if zlib is disabled.

2012-01-09  Gijs van Tulder  <gvtulder@gmail.com>

	* configure.ac: Always try to use libz, even without SSL.

2011-12-12  Giuseppe Scrivano  <gscrivano@gnu.org>

	* Makefile.am (EXTRA_DIST): Add build-aux/bzr-version-gen.
	Reported by: Elan Ruusamäe <glen@pld-linux.org>.

2011-12-11  Giuseppe Scrivano  <gscrivano@gnu.org>

	* util/trunc.c (main): Call `close' on the fd and check for errors.
	Reported by: <dga@cs.cmu.edu>.

2011-11-09  Gijs van Tulder  <address@hidden>

	* src/warc.c: Call gzdopen() with wb9 instead of wb+9, which fails on
	zlib version >= 1.2.4.

2011-11-04  Steven Schweda  <address@hidden>

	* src/warc.c [! WINDOWS]: Include <libgen.h>.
	(warc_write_warcinfo_record): Assign a new allocated buffer and
	free it on errors.

2011-11-01  Steven Schweda  <address@hidden>

	* src/gnutls.c (ssl_init): Ensure GNU TLS is loaded only once.

2011-10-23  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Include module `vsnprintf'.

2011-10-16  Steven Schubiger  <stsc@member.fsf.org>

	* util/paramcheck.pl: Match 1 or more times where applicable.
	(extract_entries): Return a copy instead of reference.

2011-10-07  Steven Schweda  <address@hidden>

	* src/connect.c: Add HAVE_SYS_SELECT_H and HAVE_SYS_SOCKET_H conditions
	on includes of <sys/select.h> and <sys/socket.h>, respectively.
	* src/ftp.c (getftp): Move BIN_TYPE_TRANSFER macro into VMS-specific
	section.  On VMS, use Stream_LF attributes for listing files.  Pass
	BIN_TYPE_FILE to fopen_excl() instead of constant-everywhere "true".
	* src/ftp.c (ftp_retrieve_list): Restore lost test of opt.preserve_perm
	(--preserve-permissions) on the chmod() operation.
	* src/init.c, main.c: Remove "deprecated" from opt.preserve_perm
	(--preserve-permissions).
	* src/init.c (initialize): Use distinct messages for errors in C macro
	SYSTEM_WGETRC and environment-variable SYSTEM_WGETRC.  Avoid use of
	C macro SYSTEM_WGETRC when it's not defined.
	* src/log.c (log_close): Avoid closing logfp when it's stderr.
	* src/main.c (print_help):  Restore --preserve-permissions.
	* src/main.c (main): Avoid using a negative value of longindex as a
	subscript (for long_options[]) when searching for "--config".
	* src/main.c (main): Exit the program using exit() instead of "return".
	(VMS handles these differently, and exit() is better.)
	* src/openssl.c (ssl_init): Add type cast (SSL_METHOD *) to newly "const"
	"meth" argument to accommodate OpenSSL version 0.9.8, where that
	argument is not "const" in the OpenSSL function (SSL_CTX_new).
	* src/test.c: Declare "program_argstring".
	* src/utils.c (fopen_excl): Comment typography.
	* src/warc.h: New file.
	* src/warc.c: New file.

2011-10-02  Henrik Holst <henrik.holst@millistream.com> (tiny change)

	* doc/wget.texi (HTTP Options): Document option --content-on-error.

2011-10-02  Henrik Holst <henrik.holst@millistream.com> (tiny change)
	* src/http.c (gethttp): If 'contentonerror' is used then do not
	skip the http body on 4xx and 5xx errors.

	* src/init.c (commands): Add 'contentonerror'.

	* src/main.c (print_help, option_data): Add new option 'contentonerror'
	to make wget not skip the http content on 4xx and 5xx errors.

	* src/options.h: New variable 'content_on_error'.

2011-09-27  Karl Berry <karl@freefriends.org> (tiny change)

	* doc/wget.texi: Make dir entry consistent with others.

2011-09-19  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (print_version): Update copyright year.
	(print_version): Fix typo.

2011-09-13  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/ftp.c (ftp_retrieve_glob): Propagate correctly the `res' error
	code.

2011-09-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (gethttp): Don't inhibit arest request if opt.timestamping is
	set.
	Reported by <natrio@list.ru>

2011-09-06  Jakob Matthes <jakob.matthes@gmail.com> (tiny change)

	* src/main.c (print_version): Do not exit prematurely when --help is passed.

2011-09-04  Christian Jullien <eligis@orange.fr> (tiny change)

	* src/gnutls.c: Include <sys/fcntl.h>.

2011-09-04  Alan Hourihane <alanh@fairlite.co.uk> (tiny change)

	* configure.ac: Check for libz when gnutls is used.

2011-09-02  Mojca Miklavec <mojca.miklavec.lists@gmail.com> (tiny change)

	* src/main.c (print_version): Do not exit prematurely when --version is passed.

2011-08-30  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (wgnutls_read_timeout): Use the non blocking socket only for
	`gnutls_record_recv'.  Set errno to ETIMEDOUT on a read timeout.

2011-08-29  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (wgnutls_read_timeout): New function.
	(wgnutls_read): Use wgnutls_read_timeout.
	(wgnutls_peek): Likewise.

2011-08-27  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (print_help): Exit with an error status if print to stdout
	fails.
	(print_usage): Change method signature and return a status code.
	(print_version): Likewise.

2011-08-26  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c: Include "ptimer.h".
	(wgnutls_read): Honor read timeout.

	* src/openssl.c (ssl_init): Make `meth' const.

2011-08-26  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Under mingw don't check for static OpenSSL
	libraries if the shared version was already found.
	Suggested by: Ray Satiro <raysatiro@yahoo.com>.

2011-08-25  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/utils.c [HAVE_UTIME && HAVE_UTIME_H]: Include <utime.h>.
	[HAVE_UTIME && HAVE_SYS_UTIME_H]: Include <sys/utime.h>.
	(touch) [HAVE_UTIME: Prefers utime over futimens when it is available.
	It was reported that Cygwin has a not working futimens.

2011-08-25  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Check for `utime'.

2011-08-19  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/init.c (home_dir) [MSDOS]: Move local variable `len' here.

2011-08-18  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/texi2pod.pl: Don't assume the perl executable is under /usr/bin/.

2011-08-18  Giuseppe Scrivano  <giuseppe@southpole.se>

	* src/http.c (gethttp): Fix a memory leak on some errors.  Free the head
	buffer.

	* src/Makefile.am: Use an additional file "css_.c" which in turn includes
	"wget.h" and immediately "css.c".

	* src/http.c (gethttp): Reset chunked_transfer_encoding on redirections.

2011-08-13  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/retr.c (fd_read_body): Ensure max is not already defined.

	* src/mswindows.h (snprintf): Remove definition.
	(vsnprintf): Likewise.

2011-08-12  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/css.l: Remove include "wget.h".
	Reported by: Perry Smith <pedzsan@gmail.com>.

2011-08-11  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/utils.c (abort_run_with_timeout): Use sigprocmask instead of
	sigsetmask.

	* src/gnutls.c (ssl_connect_wget): Remove call to deprecated function
	`gnutls_certificate_type_set_priority'.

	* src/Makefile.am (version.c): Don't invoke hg to set version string.

2011-08-11  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add `sigprocmask'.

	* configure.ac: Do not hardcode GNU TLS and OpenSSL libraries.

	* bootstrap.conf (gnulib_modules): Include module iconv.

	* configure.ac: Allow --with-libgnutls-prefix and
	--with-libssl-prefix
	Suggested by: Karl Berry <karl@freefriends.org>

	* build-aux/bzr-version-gen (TAG): Consider only the last tag.

2011-08-10  Giuseppe Scrivano  <gscrivano@gnu.org>

	Fix a linker error on systems with an older gnutls version.
	* src/gnutls.c (ssl_connect_wget)
	[HAVE_GNUTLS_PRIORITY_SET_DIRECT]:  Use gnutls_priority_set_direct.
	[! HAVE_GNUTLS_PRIORITY_SET_DIRECT]:  Use gnutls_protocol_set_priority.
	Reported by: Karl Berry <karl@freefriends.org>

2011-08-10  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Print usage string for --with-ssl.
	Reported by: Karl Berry <karl@freefriends.org>

	* configure.ac: Check for `gnutls_priority_set_direct' when gnutls is
	used.
	Reported by: Karl Berry <karl@freefriends.org>

2011-08-09  Giuseppe Scrivano  <gscrivano@southpole.se>

	* build-aux/bzr-version-gen: Fix some portability issues.

2011-08-06  Jochen Roderburg <Roderburg@Uni-Koeln.DE>

	* src/host.c (lookup_host): Ensure it doesn't print more IPs than available
	ones.

2011-08-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/init.c (defaults): Set default value for show_all_dns_entries.

	* src/host.c (lookup_host): If `showalldnsentries' is used then print all
	the IP corresponding to a DNS entry.
	* src/init.c (commands): Add `showalldnsentries'.
	Suggested by: Witold Baryluk <baryluk@smp.if.uj.edu.pl>

	* src/http.c (gethttp): Add the Cache-Control HTTP header when --no-cache
	is specified.
	Reported by: Коренберг Марк <socketpair@gmail.com>.

2011-08-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Wgetrc Commands): Document show_all_dns_entries.

	* doc/Makefile.am (wget.pod): Pass the VERSION value to texi2pod.

	* doc/texi2pod.pl: Update from GCC.

2011-08-05  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/utils.c (acceptable): Accept always the file if it is the specified
	output destination.
	Reported by: Shai Berger <shai@platonix.com>

2011-08-05  Giuseppe Scrivano  <giuseppe@southpole.se>

	* src/gnutls.c (ssl_connect_wget): Use `gnutls_priority_set_direct' instead
	of the deprecated `gnutls_protocol_set_priority'.

2011-08-02  Giuseppe Scrivano  <giuseppe@southpole.se>

	* src/cookies.c (parse_set_cookie): If the value is quoted, do not modify
	it.
	Reported by: Nirgal Vourgère <jmv_deb@nirgal.com>

2011-07-29  Giuseppe Scrivano  <giuseppe@southpole.se>

	* src/log.c (logprintf): Exit immediately on a SIGPIPE error.
	Reported by: Noèl Köthe  <noel@debian.org>.

2011-07-28  Noèl Köthe  <noel@debian.org> (tiny change)

	* doc/wget.texi (HTTP Options): Fix typo.

2011-07-26  Giuseppe Scrivano  <giuseppe@southpole.se>

	* src/retr.c (retrieve_url): Do not register redirects when in spider mode.

2011-07-26  Giuseppe Scrivano  <giuseppe@southpole.se>

	* doc/wget.info (cookies): Remove reference to --cookies.
	Reported by: Noèl Köthe.

2011-07-26  Carlos Martín Nieto  <carlos@cmartin.tk>  (tiny change)

	* src/init.c (home_dir): Allocate path buffer dinamically.

2011-07-20 Merinov Nikolay <kim.roader@gmail.com>

	* src/iri.c (remote_to_utf8): Add test for non-ASCII symbols with
	UTF-8 URI encoding.
	* src/res.c (res_retrieve_file): Fix url_parse call.

2011-07-05  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Recursive Retrieval Options): Make clearer that recursion,
	by default, uses 5 levels.
	Reported by: Marc Deop <damnshock@gmail.com>.

2011-06-08  Giuseppe Scrivano  <giuseppe@southpole.se>

	* src/retr.c (retrieve_from_file): Parse the url careless if IRI is enabled.
	Reported by: Volker Kuhlmann <list0570@paradise.net.nz>.

2011-06-03  Merinov Nikolay  <kim.roader@gmail.com>

	* tests/Test-idn-cmd-utf8.px: Added test for idn with utf-8 local encoding.
	* tests/Test-idn-robots-utf8.px: Added test for idn with utf-8 local encoding
	and robots.txt file.
	* tests/Makefile.am, run-px: Add new tests.
2011-05-26  Steven Schweda  <sms@antinode.info>
	* src/connect.c [HAVE_SYS_SOCKET_H]: Include <sys/socket.h>.
	[HAVE_SYS_SELECT_H]: Include <sys/select.h>.

2011-05-25  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add `strerror_r-posix'.

2011-05-24  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/retr.c (fd_read_body): Define max.

2011-05-23  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/retr.c (fd_read_body): Be sure the buffer size is at least 8Kb.
	BUFSIZ may assume very small values with a negative impact on the
	performances.

	* src/mswindows.h [NEED_GAI_STRERROR]: remove definition for gai_strerror.

2011-05-19  Giuseppe Scrivano  <gscrivano@gnu.org>

	* COPYING: Fix the copyright years.
	Reported by: Brett Smith <brett@fsf.org>.

2011-05-15  Ray Satiro <raysatiro@yahoo.com>

	* src/connect.c (select_fd) [WINDOWS]: Ensure the socket is blocking.
	* src/mswindows.h: Add declaration for set_windows_fd_as_blocking_socket.
	* src/mswindows.c (set_windows_fd_as_blocking_socket): New function.

	* src/openssl.c (openssl_read): Prevent loops on read errors.

2011-04-24  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/html-url.c: Include "exists.h".
	* src/gnutls.c (wgnutls_peek): Remove local variable `ret'.

2011-04-21  Daniel Manrique <roadmr@tomechangosubanana.com> (tiny change)
	* src/main.c (main): Set exit status when invalid host name given in
	command line.
	* src/html-url.c (get_urls_file): Set exit status when invalid host
	name given in input file.

2011-04-19  Ray Satiro <raysatiro@yahoo.com>

	* configure.ac: Adjust indentation.

2011-04-19  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Makefile.am (LIBS): Add $(LIB_CLOCK_GETTIME).

2011-04-19  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c: Do not include <fcntl.h>.
	* src/gnutls.c (wgnutls_peek): Ensure there is data available before attempt
	a read on the blocking socket.

	* src/Makefile.am (LIBS): Add $(LIB_CLOCK_GETTIME)
	* src/utils.c: Include <sys/stat.h>.  Do not include <sys/time.h>.
	(touch): Use `futimens' instead of `utimes'.

	* src/mswindows.h: Do not include <direct.h>.  Remove macro definition for
	mkdir.

2011-04-19  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add `mkdir'.

2011-04-18  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/utils.c: Include <sys/time.h>.  Do not include <sys/utime.h>.
	(touch): Use `utimes' instead of `utime'.

	* src/openssl.c (openssl_read): Fix build error.

2011-04-17  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/wget.h [HAVE_LIBSSL32]: Define HAVE_SSL.

	* src/gnutls.c (wgnutls_peek): Use correctly FIONBIO codes under Mingw32.
	Reported by: Ray Satiro <raysatiro@yahoo.com>

2011-04-17  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Do not check the host_os twice and if windres is
	available.
	Reported by: Ray Satiro <raysatiro@yahoo.com>

2011-04-16  Ray Satiro <raysatiro@yahoo.com>
2011-04-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Detect dynamically linked OpenSSL libraries under
	mingw32.

2011-04-14  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap: Update from gnulib.

	* bootstrap.conf (gnulib_modules): Add `pipe' and `sigpipe'.

	* .cvsignore: Remove file.
	* .hgignore: Likewise.
	* .symlinks: Likewise.

	* bootstrap.conf (gnulib_modules): Add `mbtowc and `unlocked-io'.

2011-04-13  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/openssl.c (openssl_poll): Check if the specified timeout is zero after
	SSL_pending.
	(openssl_peek): Make the call non-blocking.

2011-04-11  Cristian Rodríguez  <crrodriguez@opensuse.org> (tiny change)

	* src/openssl.c (ssl_init) [! OPENSSL_NO_SSL2]: Use SSLv2 only when
	available.

2011-04-07  Ray Satiro  <raysatiro@yahoo.com> (tiny change)

	(wgnutls_read): Check for the GNUTLS_E_AGAIN return code in the recv
	tight loop.
	(wgnutls_write): Likewise.
	(wgnutls_peek): Likewise.

2011-04-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (wgnutls_peek): New local variable `read'.
	Use `read' instead of `ret' to store the number of read bytes.
	Reported by: Ray Satiro <raysatiro@yahoo.com>

2011-04-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (ssl_init): Allow X509 v1 certificates.
	Suggested by: Ray Satiro <raysatiro@yahoo.com>

	(wgnutls_peek): Remove tight loop around gnutls_record_recv.

2011-04-04  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Makefile.am (LIBS): Remove  @LIBSSL@ @W32LIBS@

2011-04-04  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/openssl.c [WINDOWS]: Include <w32sock.h>.
	(openssl_read): Retry the read on SSL_ERROR_WANT_READ.

	* src/host.c [WINDOWS]: Include <winsock2.h> and <ws2tcpip.h>.
	Suggested by: Ray Satiro <raysatiro@yahoo.com>.

	* src/Makefile.am (LIBS): Remove  @LIBSSL@ @W32LIBS@

2011-04-04  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Use AC_CHECK_LIB to look for the openssl library.

2011-04-03  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c: Include <fcntl.h>.
	(wgnutls_peek): Make the socket non blocking before attempt a read.

	* src/gnutls.c: Include <sys/ioctl.h>.
	(wgnutls_peek) [F_GETFL]: Use fcntl.
	(wgnutls_peek) [! F_GETFL]: Use ioctl.


2011-04-03  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add `fcntl'.

	(gnulib_modules): Add `ioctl'.

2011-03-31  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/recur.c (download_child_p): When --no-parent is used, check that the
	ports are the same only in case the same protocol is used.
	Reported by: Karl Berry <karl@freefriends.org>

	* src/res.c (res_parse): Add new line to debug messages.

2011-03-26  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Fix the gnutls detection.

2011-03-21  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/iri.h (parse_charset) [!ENABLE_IRI]: Use the parameter to avoid a
	compiler warning.

	* src/iri.h: Declare `dummy_iri' as extern not static.
	* src/main.c [!ENABLE_IRI]: Define `dummy_iri'.
	(main) [!ENABLE_IRI]: Initialize `dummy_iri'.

2011-03-21  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi: Do not cite the current maintainer.
	Reported by: Micah Cowan <micah@cowan.name>.

2011-03-21  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap: Update from gnulib.

2011-03-19  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (buildreq): Update build prerequisites list.

2011-03-11  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/ftp.c (getftp): Fix some memory leaks.
	* src/ftp-ls.c (ftp_parse_winnt_ls): Likewise.
	Reported by: Zhenbo Xu <zhenbo1987@gmail.com>.

2011-03-02  Tomasz Buchert <tomek.buchert@gmail.com> (tiny change)

	* src/http.c (ensure_extension): Do not adjust the extension if the file
	ends in .htm.

2011-02-22  Steven Schubiger  <stsc@member.fsf.org>

	* src/http.c (gethttp, http_loop): Move duplicated code which is run
	when an existing file is not to be clobbered to a function.
	(get_file_flags): New static function.

2011-02-22  Gilles Carry  <gilles.carry@st.com>

	* src/main.c (prompt_for_password): Use stderr instead of stdout
	to prompt password. This allows to use --output-document=- and
	--ask-password simultaneously. Without this, redirecting stdout
	makes password prompt invisible and mucks up payload such as in
	this example:
	wget --output-document=- --ask-password -user=foo \
		http://foo.com/tarball.tgz | tar zxf -

2010-12-28  Adrien Nader  <adrien@notk.org> (tiny change)

	* src/main.c [WINDOWS]: Include <io.h> and <fcntl.h>.
	(main) [WINDOWS]: Set the stdout file mode to binary.
	Submitted also by: Martin Panter <vadmium@gmail.com>

2010-12-22  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (HTTP Options): Remove sentence which doesn't reflect
	the wget behaviour when -k -K are used with -E.
	Reported by: pike-wget@kw.nl.

2010-12-10  Evgeniy Philippov <egphilippov@googlemail.com> (tiny change)

	* src/main.c (main): Initialize `total_downloaded_bytes'.

2010-12-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (main): If --no-clobber and --convert-links are used at the
	same time, use only the latter.
	Reported by: Romain Vimont <rom@rom1v.com>

2010-12-07  Jessica McKellar <jesstess@mit.edu> (tiny change)

	* vms/WGET.HLP: Make help message clearer.

2010-12-07  Jessica McKellar <jesstess@mit.edu> (tiny change)

	* src/main.c: Make help message clearer.

2010-12-02  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/build_info.c.in: Do not list md5.

2010-12-01  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/cmpt.c: Include <unistd.h> inconditionally.
	* src/connect.c: Likewise.
	* src/convert.c: Likewise.
	* src/ftp-basic.c: Likewise.
	* src/ftp-ls.c: Likewise.
	* src/ftp.c: Likewise.
	* src/gnutls.c: Likewise.
	* src/http.c: Likewise.
	* src/init.c: Likewise.
	* src/log.c: Likewise.
	* src/main.c: Likewise.
	* src/openssl.c: Likewise.
	* src/progress.c: Likewise.
	* src/ptimer.c: Likewise.
	* src/recur.c: Likewise.
	* src/retr.c: Likewise.
	* src/url.c: Likewise.
	* src/utils.c: Likewise.

	* src/retr.c (fd_read_body): Dinamically allocate `dlbuf'.

2010-11-27  Reza Snowdon  <vivi@mage.me.uk>

	* src/init.c (initialize): If 'ok' is not zero; exit, as this
	indicates there was a problem parsing 'SYSTEM_WGETRC'.
	Fixes bug #20370.

2010-11-22  Giuseppe Scrivano  <gscrivano@gnu.org>

	Revert last commit.
	* src/ftp.c (getftp): When count > 0, don't append to the existing file.
	* src/http.c (gethttp): Likewise.

2010-11-21  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/ftp.c (getftp): If `count' is bigger than zero, try to resume the
	download, not restart it.
	* src/http.c (gethttp): Likewise.
	Suggested by: Evgeny Kapun <abacabadabacaba@gmail.com>.

2010-11-20  Filipe Brandenburger <filbranden@gmail.com> (tiny change)

	* src/http.c (gethttp): Repeat a POST request on a 307 response.
	* src/retr.c (retrieve_url): Use NEWLOCATION_KEEP_POST.
	* src/wget.h: Define NEWLOCATION_KEEP_POST.

2010-11-19  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/ftp.c (getftp): Accept new argument `count'.  When `count' is
	bigger than zero, assume the file can be overwritten.
	(ftp_loop_internal): Pass new argument `count' to `getftp'.

	* src/http.c (gethttp): Accept new argument `count'.  When `count' is
	bigger than zero, assume the file can be overwritten.
	(http_loop): Pass new argument `count' to `gethttp'.
	Reported by: Evgeny Kapun <abacabadabacaba@gmail.com>.

2010-10-26  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Download Options): Remove unclear statement about the
	--waitretry option.
	Reported by: Manfred Koizar <mkoi-pg@aon.at>.

2010-10-24  Jessica McKellar <jesstess@mit.edu> (tiny change)

	* src/main.c (main): Print the total download time as part of the
	summary for downloads using the recursive or page requisites
	options. Fixes bug #21359.

2010-10-24  Jessica McKellar <jesstess@mit.edu> (tiny change)

	* NEWS: Mention the change to the the summary for recursive downloads.

2010-10-24  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (wgnutls_peek): Do not return an error when
	`gnutls_record_recv' fails but some data is already available.

2010-10-23  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Makefile.am (LIBS): Remove @LIBGNUTLS@ and use @W32LIBS@ as last
	component.

2010-10-23  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/Makefile.am (LIBS): Remove @LIBGNUTLS@ and use @W32LIBS@ as last
	component.

	* src/gnutls.c (wgnutls_peek): Block until data is available.

2010-10-23  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Add check for libgpg-error and libgcrypt.

2010-10-21  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/retr.c (retrieve_url): Do not register HTML files twice.
	Reported by: Manfred Koizar <mkoi-pg@aon.at>.

2010-10-18  Manfred Koizar <mkoi-pg@aon.at> (tiny change)

	* src/html-url.c (tag_handle_link): Do not assume external links type
	to be always "text/html".

2010-10-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/connect.c (socket_ip_address): Initialize `sockaddr' to zero.
	* src/ftp-basic.c (ftp_epsv): Remove dead assignment to `s'.
	* src/ftp-ls.c (ftp_parse_vms_ls): Remove dead assignment to `len'.
	* src/http.c (skip_short_body): Remove dead assignment to `ret'.
	* src/init.c (wgetrc_user_file_name): Remove dead assignment to `home'.
	* src/main.c (main): Silent warning reported by clang.
	(http_loop): Silent warning reported by clang.
	* src/retr.c (retrieve_url): Likewise.
	* src/url.c (init_seps): Remove dead assignment to `p'.

2010-10-11  Steven Schubiger <stsc@member.fsf.org>

	* src/ftp.c (getftp): Initialize `targ'.

2010-10-11  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/ftp.c (getftp): Fix indentation.

2010-10-08  Ivanov Anton <x86mail@gmail.com> (tiny change)

	* src/html-url.c (check_style_attr): Skip quotes when they are present.

2010-10-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (main): Remove unused variable `status'.

2010-09-25  Merinov Nikolay  <kim.roader@gmail.com>

	* src/init.c: Add "unlink" command into command list.
	* src/main.c: Add "unlink" option into option_data list.
	* src/options.h: Adding unlink field into struct options.
	* src/wget.h: Addind UNLINKERR error into uerr_t enum.
	* src/exits.c (get_status_for_err): define status for UNLINKERR.
	* src/ftp.c (getftp): unlink file if exists, instead clobbering.
	(ftp_loop_internal): processing UNLINKERR.
	* src/http.c (gethttp): unlink file if exists, instead clobbering.
	(http_loop): processing UNLINKERR.

2010-09-25  Merinov Nikolay  <kim.roader@gmail.com>

	* doc/wget.texi (Download Options): Document --unlink option.

2010-09-24  Dennis, CHENG Renquan <crquan@fedoraproject.org>

	Fix problem when content-disposition is used with recursive downloading.
	* src/url.h (url_file_name): Add a new argument `replaced_filename'.
	* src/url.c (url_file_name): Likewise.
	* src/http.c (parse_content_disposition): Do not add a prefix to the return
	value.
	(test_parse_content_disposition): Adjust tests.
	(gethttp): Pass additional parameter to `url_file_name'.
	(http_loop): Likewise.
	* src/ftp.c (ftp_loop_internal, ftp_get_listing, ftp_retrieve_list)
	(ftp_loop): Likewise.

2010-09-14  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/convert.c (local_quote_string): Accept new parameter `no_html_quote'.
	Inhibit HTML quoting when `no_html_quote'.
	(convert_links): Disable HTML quoting in CSS files.
	Reported by: Manuel Reinhardt <reinhardt@syslab.com>.

2010-09-13  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Recursive Accept/Reject Options): Remove superfluous dot.
	Reported by: Snader_LB.

2010-09-12  Mike Frysinger  <vapier@gentoo.org>

	Fix some tests failures.
	* tests/Test-iri-forced-remote.px: Use --trust-server-names to the cmdline
	variable.
	* tests/Test-iri-list.px: Likewise.
	* tests/Test-iri.px: Likewise.

2010-09-12  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (print_help): Align --trust-server-names help text with
	the rest of the text.
	Suggested by: Mike Frysinger  <vapier@gentoo.org>.

2010-09-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* lib/Makefile.am: Fix typo.

2010-08-20  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/convert.c: Include "iri.h".
	(convert_links_in_hashtable): Parse the url, if
	necessary, before check if it is present in the dowloaded url
	map.
	Reported by: <sk.random@gmail.com>.

2010-08-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	Fix a problem with HTTP/1.0 proxies.
	* src/http.c (gethttp): Specify the connection header when keep alive
	connections are not used.

	Use persistent connections with proxies supporting them.
	* src/http.c (gethttp): Specify Proxy-Connection to the HTTP proxy.

2010-08-08  Reza Snowdon <vivi@mage.me.uk>

	* src/main.c (main): inserted 'defaults'.
	  Added additional 'getopt_long' while loop to search and apply a
	  user specified config file before any other options.
	  New variables 'retconf', 'use_userconfig',
	  'confval', 'userrc_ret', 'config_opt'.
	* src/init.c: Include stdbool.h.
	(commands): Added config details.
	  (defaults): Removed static.
	  (wgetrc): Removed static.
	  (initialize): Removed 'defaults ()',
	changed 'int ok' to 'bool ok'.
	* src/options.h: New variable 'choose_config'.
	* src/init.h (defaults): exported function.
	  (run_wgetrc): exported function.

2010-08-08  Reza Snowdon <vivi@mage.me.uk>
	* doc/wget.texi: Added information about the config option to the
	'Overview' section and a description of the option in
	'Logging and Input File Options'.

2010-08-08  Giuseppe Scrivano  <gscrivano@gnu.org>

	* Makefile.am (EXTRA_DIST): Remove configure.bat.

2010-08-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/css-url.c (get_uri_string): Skip empty urls.

2010-07-30  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/html-url.h (struct map_context): Remove member `tail'.

	* src/html-url.c (append_url): Append the new url ordered by `position'.
	(get_urls_html): Do not initialize `ctx.tail'.

	* src/css-url.c (get_urls_css_file): Do not initialize `ctx.tail'.

2010-07-29  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (wgnutls_peek): Don't read more data if the buffered peek
	data is sufficient.

2010-07-28  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.h (http_loop): Add new argument `original_url'
	* src/http.c (http_loop): Add new argument `original_url'.  Use
	`original_url' to get a filename if `trustservernames' is false.

	* src/init.c (commands): Add "trustservernames".

	* src/options.h (library): Add variable `trustservernames'.

	* src/main.c (option_data): Add trust-server-names.
	(print_help): Describe --trust-server-names.

	* src/retr.c (retrieve_url): Pass new argument to `http_loop'.

2010-07-28  Alon Bar-Lev <alon.barlev@gmail.com> (tiny change)

	* doc/texi2pod.pl: Use the warnings module only when it is available.

2010-07-25  John Trengrove  <jtrengrove@gmail.com> (tiny change)

	* src/ftp.h: Added enum `parsetype'.  Modified struct to hold parsetype.

	* src/ftp-ls.c (ftp_parse_unix_ls): Default to TT_DAY. Change to TT_HOUR_MIN
	if hours/minutes parsed.
	(ftp_parse_winnt_ls): Default to TT_HOUR_MIN.
	(ftp_parse_vms_ls): Default to TT_HOUR_MIN.
	(ftp_index): Print only if fileinfo struct value ttype set to TT_HOUR_MIN.

2010-07-24  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.bat: Remove file.

2010-07-20  Leonid Petrov <nouser@lpetrov.net>

	* src/ftp.c (getftp): Don't attempt to retrieve the file if it is already
	completely.
	(ftp_loop_internal): Force the length to be zero for symlinks.

2010-07-20  Alan Jenkins <alan-jenkins@tuffmail.co.uk> (tiny change)

	* src/http.c (gethttp): Check content-length was set before trying to
	compare it with the already downloded filesize.

2010-07-18  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (gethttp): If -N is used, don't exit immediately if the content
	length is less or equal than the existing file size.  Specify "Range"
	only if -N is not used.
	Reported by: Caleb Cushing <xenoterracide@gmail.com>.

2010-07-14  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/ftp.c (max): Remove definition.
	(getftp): New variable `got_expected_bytes'.  Let `expected_bytes' be
	the value SIZE returns, otherwise use the bytes count returned by RETR.
	Suggested by Daniel Stenberg <daniel@haxx.se>.

2010-07-14  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/ftp.c (max): Add definition.
	(getftp): Consider for `expected_bytes' the greatest value between the
	bytes count returned by SIZE and the bytes count returned by RETR.
	Reported by: Jozua <jozua@sparky.za.net>.

2010-07-11  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (http_loop): New variable `force_full_retrieve'.  If the remote
	file is newer that the local one then inhibit -c.
	Reported by: Caleb Cushing <xenoterracide@gmail.com>.

2010-07-11  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac (AC_CHECK_SIZEOF): Quote argument.
	Reported by: Jochen Roderburg <Roderburg@Uni-Koeln.DE>.

2010-07-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/css-url.c (get_urls_css_file): Use `wget_read_file' instead of
	`read_file'.  Use `wget_read_file_free' instead of `read_file_free'.
	* src/convert.c (convert_links): Likewise.
	* src/html-url.c (get_urls_html, get_urls_file): Likewise.
	* src/res.c (res_parse_from_file): Likewise.

	* src/utils.h: Rename `read_file' to `wget_read_file'.  Rename
	`read_file_free' to `wget_read_file_free'.

	* src/utils.c (wget_read_file): Renamed from `read_file'.
	(wget_read_file_free): Renamed from `read_file_free'.

2010-07-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add `vasprintf'.  Remove `asprintf'.

2010-07-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (buildreq): Relax gettext version to 0.17.

2010-07-05  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (ssl_init): New local variables `ca_directory' and `dir'.
	Load default root certificates under the `ca_directory' directory.

2010-07-05  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add `asprintf'.

2010-07-03  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (ssl_connect_wget): New local variable `allowed_protocols'.
	Honor the --secure-protocol flag.

2010-06-22  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: By default use GNU TLS not OpenSSL.

2010-06-20  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (print_help): Fix help string for --random-wait.  Its range is
	[0.5*wait, 1.5*wait) not [0, 2*wait).
	Reported by: Tom Mizutani <gombei1970@gmail.com>.

2010-06-17  Giuseppe Scrivano  <gscrivano@gnu.org>

	* windows: Remove directory.
	* Makefile.am (SUBDIRS): Remove windows.
	* configure.ac: Don't generate windows/Makefile.

2010-06-15  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c [WIN32]: Include "w32sock.h".
	(FD_TO_SOCKET): Add definition.
	(ssl_connect_wget): Get the real socket handle by FD_TO_SOCKET.
	Define FD_TO_SOCKET if it is not yet defined.

2010-06-15  Giuseppe Scrivano  <gscrivano@gnu.org>

	* m4/wget.m4 (WGET_STRUCT_SOCKADDR_STORAGE): Guard header inclusions.
	(TYPE_STRUCT_SOCKADDR_IN6): Likewise.
	(MEMBER_SIN6_SCOPE_ID): Likewise.
	(PROTO_INET6): Likewise.

	* configure.ac: Don't check for `getaddrinfo'.

	* bootstrap.conf (gnulib_modules): Add `getaddrinfo' module.

2010-06-14  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c: Include <stdlib.h>.
	(struct wgnutls_transport_context): Remove `peekstart'.
	(ssl_connect_wget): Renamed from `ssl_connect'.
	(wgnutls_poll): New variable `ctx'.
	(wgnutls_read): Don't use `ctx->peekstart'.
	(wgnutls_peek): Likewise.  Don't attempt to read if there is not
	ready data.

2010-06-14  Giuseppe Scrivano  <gscrivano@gnu.org>
	* src/http.c (http_loop): Always send a HEAD request when -N is used
	together with --content-disposition.
	Reported by: Jochen Roderburg <Roderburg@Uni-Koeln.DE>.

2010-06-10  Muthu Subramanian K <muthusuba@gmail.com> (tiny change)

	* src/http.c (http_loop): Increase `total_downloaded_bytes' by
	`hstat.rd_size', not `hstat.len'.

2010-06-10  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (print_version): Drop the current maintainer line.

2010-06-10  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/Makefile.am (build_info.c): Generate the `build_info.c' file under
	the build directory.
	Patch by: Daniel Stenberg <daniel@haxx.se>.

2010-06-10  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac (AM_INIT_AUTOMAKE): Remove dist-bzip2 dist-lzma from
	automake options.
	Reported by: Daniel Stenberg <daniel@haxx.se>.

2010-06-10  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (buildreq): Add definition.

2010-06-04  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Test--no-content-disposition-trivial.px: Use /usr/bin/env to find the
	perl interpreter.
	* tests/Test--no-content-disposition.px: Likewise.
	* tests/Test--spider-fail.px: Likewise.
	* tests/Test--spider-r--no-content-disposition-trivial.px: Likewise.
	* tests/Test--spider-r--no-content-disposition.px: Likewise.
	* tests/Test--spider-r-HTTP-Content-Disposition.px: Likewise.
	* tests/Test--spider-r.px: Likewise.
	* tests/Test--spider.px: Likewise.
	* tests/Test-E-k-K.px: Likewise.
	* tests/Test-E-k.px: Likewise.
	* tests/Test-HTTP-Content-Disposition-1.px: Likewise.
	* tests/Test-HTTP-Content-Disposition-2.px: Likewise.
	* tests/Test-HTTP-Content-Disposition.px: Likewise.
	* tests/Test-N--no-content-disposition-trivial.px: Likewise.
	* tests/Test-N--no-content-disposition.px: Likewise.
	* tests/Test-N-HTTP-Content-Disposition.px: Likewise.
	* tests/Test-N-current.px: Likewise.
	* tests/Test-N-no-info.px: Likewise.
	* tests/Test-N-old.px: Likewise.
	* tests/Test-N-smaller.px: Likewise.
	* tests/Test-N.px: Likewise.
	* tests/Test-O--no-content-disposition-trivial.px: Likewise.
	* tests/Test-O--no-content-disposition.px: Likewise.
	* tests/Test-O-HTTP-Content-Disposition.px: Likewise.
	* tests/Test-O-nc.px: Likewise.
	* tests/Test-O-nonexisting.px: Likewise.
	* tests/Test-O.px: Likewise.
	* tests/Test-Restrict-Lowercase.px: Likewise.
	* tests/Test-Restrict-Uppercase.px: Likewise.
	* tests/Test-auth-basic.px: Likewise.
	* tests/Test-auth-no-challenge-url.px: Likewise.
	* tests/Test-auth-no-challenge.px: Likewise.
	* tests/Test-auth-retcode.px: Likewise.
	* tests/Test-auth-with-content-disposition.px: Likewise.
	* tests/Test-c-full.px: Likewise.
	* tests/Test-c-partial.px: Likewise.
	* tests/Test-c-shorter.px: Likewise.
	* tests/Test-c.px: Likewise.
	* tests/Test-cookies-401.px: Likewise.
	* tests/Test-cookies.px: Likewise.
	* tests/Test-ftp-bad-list.px: Likewise.
	* tests/Test-ftp-iri-disabled.px: Likewise.
	* tests/Test-ftp-iri-fallback.px: Likewise.
	* tests/Test-ftp-iri-recursive.px: Likewise.
	* tests/Test-ftp-iri.px: Likewise.
	* tests/Test-ftp-pasv-fail.px: Likewise.
	* tests/Test-ftp-recursive.px: Likewise.
	* tests/Test-ftp.px: Likewise.
	* tests/Test-i-ftp.px: Likewise.
	* tests/Test-i-http.px: Likewise.
	* tests/Test-idn-cmd.px: Likewise.
	* tests/Test-idn-headers.px: Likewise.
	* tests/Test-idn-meta.px: Likewise.
	* tests/Test-idn-robots.px: Likewise.
	* tests/Test-iri-disabled.px: Likewise.
	* tests/Test-iri-forced-remote.px: Likewise.
	* tests/Test-iri-list.px: Likewise.
	* tests/Test-iri-percent.px: Likewise.
	* tests/Test-iri.px: Likewise.
	* tests/Test-k.px: Likewise.
	* tests/Test-meta-robots.px: Likewise.
	* tests/Test-nonexisting-quiet.px: Likewise.
	* tests/Test-noop.px: Likewise.
	* tests/Test-np.px: Likewise.
	* tests/Test-proxied-https-auth.px: Likewise.
	* tests/Test-proxy-auth-basic.px: Likewise.
	* tests/Test-restrict-ascii.px: Likewise.
	Reported by sci-fi@hush.ai.

2010-06-04  Giuseppe Scrivano  <gscrivano@gnu.org>

	* build-aux/build_info.pl: Use /usr/bin/env to find the perl
	interpreter.
	* util/paramcheck.pl: Likewise.
	* util/rmold.pl: Likewise.
	Reported by sci-fi@hush.ai.

2010-06-03  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (http_loop): Do not send a HEAD request before the GET request
	when --content-disposition is used.
	Reported by: alex_wh@mail.ru.

2010-06-03  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac (W32LIBS): Remove -lwsock32.

2010-06-03  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add iconv-h.

2010-05-31  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/sysdep.h (_SVID_SOURCE): Remove definition.
	(_BSD_SOURCE): Remove definition.

2010-05-31  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/recur.c (retrieve_tree): Remove variable `up_error_code'.

	* src/iri.c (open_locale_to_utf8): Remove function.

2010-05-31  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/html-parse.c (map_html_tags): Fix condition for closed tag.  Handle
	the case '>' is not specified after '/'.

2010-05-31  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/css.l: Use option "nounput".
	(YY_NO_INPUT): Add macro definition.

2010-05-30  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/html-parse.c (NAME_CHAR_P): Consider '<' an invalid character.
	(advance_declaration): Close the tag if '<' is found.
	(map_html_tags): Likewise.

2010-05-29  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Makefile.am (EXTRA_DIST): Add Test-auth-retcode.px.

	* tests/run-px (tests): Likewise.

	* tests/Test-auth-retcode.px: New file.

2010-05-27  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (print_usage): Accept a new parameter `error'.
	(main): Print diagnostic messages to stderr, not stdout.

2010-05-27  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/main.c (main): Exit with failure when -k is specified and -O is not
	a regular file.

2010-05-27  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (gethttp): Consider new cookies retrieved when the
	authorization fails.

2010-05-27  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/Makefile.am (wget_SOURCES): Remove `snprintf.c'.

	* src/snprintf.c: Remove file.

2010-05-27  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/wget.texi (Download Options): Document that -k can be used with -O
	only with regular files.

2010-05-27  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add `snprintf' module.

	* configure.ac: Remove check for the `snprintf' function.

2010-05-25  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/host.c (sufmatch): Do not consider zero length entries.

	* src/http.c (H_10X): New macro.
	(gethttp): Silently ignore 1xx responses.

2010-05-24  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/iri.h (dummy_iri): Define static.

	* src/css-tokens.h (css_tokens): Remove variable.

2010-05-23  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (http_atotm): Count the NUL character when copying the locale
	string.
	Reported by: Florian Weimer <fw@deneb.enyo.de>

2010-05-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Makefile.am (../md5/libmd5.a): Remove rule.
	(LDADD):  Remove MD5_LDADD.

2010-05-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/Makefile.am (LDADD): Remove MD5_LDADD.
	(MD5_LDADD): Remove definition.
	(AM_CPPFLAGS): Remove MD5_CPPFLAGS.
	(version.c): Remove dependency from MD5_LDADD.
	(../md5/libmd5.a): Remove rule.

	* src/ftp-opie.c: Include "md5.h".  Do not include "gen-md5.h".
	(skey_response): New variable ctx.  Use md5 functions from the gnulib
	module instead of functions defined previously in the "gen-md5.h" file.

	* src/gen-md5.h: Remove file.
	* src/gen-md5.c: Likewise.

	* src/http.c: Include "md5.h".  Do not include "gen-md5.h".
	(digest_authentication_encode): New variable ctx.  Use md5 functions
	from the gnulib module instead of functions defined previously in the
	"gen-md5.h" file.

2010-05-16  Giuseppe Scrivano  <gscrivano@gnu.org>

	* md5: Remove directory.

	* bootstrap.conf (gnulib_modules): Add crypto/md5.

	* configure.ac: Remove any check for md5 libraries.

	* Makefile.am (ACLOCAL_AMFLAGS): Remove -I md5/m4.
	(SUBDIRS): Remove md5.

2010-05-15  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/Makefile.am: Quote any path using $(top_srcdir) or $(top_builddir).
	(version.c): Remove dependency from configure.ac and Makefile.am.

	* src/css.l: Include "wget.h".

2010-05-15  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap.conf (gnulib_modules): Add "getopt-gnu".  Remove "getopt".

2010-05-14  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap (gnulib_path): Default to "gnulib" if it doesn't have a
	value.  Redirect "git clone" stderr to stdout.

2010-05-09  Giuseppe Scrivano  <gscrivano@gnu.org>

	* build-aux/bzr-version-gen: New file.

	* Makefile.am (EXTRA_DIST): Add .version.
	(BUILT_SOURCES): New defition.
	(.version): New rule.
	(dist-hook): Likewise.

	* configure.ac (AC_INIT): Use build-aux/bzr-version-gen to generate the
	version string.

2010-05-08  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Makefile.am: Update copyright years.

2010-05-08  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/Makefile.am: Update copyright years.
	* src/cmpt.c: Likewise.
	* src/connect.h: Likewise.
	* src/convert.c: Likewise.
	* src/convert.h: Likewise.
	* src/cookies.c: Likewise.
	* src/cookies.h: Likewise.
	* src/css-tokens.h: Likewise.
	* src/css-url.c: Likewise.
	* src/css-url.h: Likewise.
	* src/css.l: Likewise.
	* src/exits.c: Likewise.
	* src/exits.h: Likewise.
	* src/ftp-basic.c: Likewise.
	* src/ftp-ls.c: Likewise.
	* src/ftp-opie.c: Likewise.
	* src/ftp.c: Likewise.
	* src/ftp.h: Likewise.
	* src/gen-md5.c: Likewise.
	* src/gen-md5.h: Likewise.
	* src/gettext.h: Likewise.
	* src/gnutls.c: Likewise.
	* src/hash.c: Likewise.
	* src/hash.h: Likewise.
	* src/host.c: Likewise.
	* src/host.h: Likewise.
	* src/html-parse.c: Likewise.
	* src/html-parse.h: Likewise.
	* src/html-url.c: Likewise.
	* src/html-url.h: Likewise.
	* src/http-ntlm.c: Likewise.
	* src/http-ntlm.h: Likewise.
	* src/http.c: Likewise.
	* src/http.h: Likewise.
	* src/init.c: Likewise.
	* src/init.h: Likewise.
	* src/iri.c: Likewise.
	* src/iri.h: Likewise.
	* src/log.c: Likewise.
	* src/log.h: Likewise.
	* src/main.c: Likewise.
	* src/mswindows.c: Likewise.
	* src/mswindows.h: Likewise.
	* src/netrc.c: Likewise.
	* src/netrc.h: Likewise.
	* src/openssl.c: Likewise.
	* src/options.h: Likewise.
	* src/progress.c: Likewise.
	* src/progress.h: Likewise.
	* src/ptimer.c: Likewise.
	* src/ptimer.h: Likewise.
	* src/recur.c: Likewise.
	* src/recur.h: Likewise.
	* src/res.c: Likewise.
	* src/res.h: Likewise.
	* src/retr.c: Likewise.
	* src/retr.h: Likewise.
	* src/spider.c: Likewise.
	* src/spider.h: Likewise.
	* src/ssl.h: Likewise.
	* src/sysdep.h: Likewise.
	* src/test.c: Likewise.
	* src/test.h: Likewise.
	* src/url.c: Likewise.
	* src/url.h: Likewise.
	* src/utils.c: Likewise.
	* src/utils.h: Likewise.
	* src/wget.h: Likewise.

2010-05-08  Giuseppe Scrivano  <gscrivano@gnu.org>

	* doc/Makefile.am: Update copyright years.

	* doc/fdl.texi: Likewise.

	* doc/texi2pod.pl: Likewise.

	* doc/wget.texi: Likewise.

2010-05-08  Giuseppe Scrivano  <gscrivano@gnu.org>

	* Makefile.am: Update copyright years.

	* build-aux/build_info.pl: Likewise.

	* configure.ac: Likewise.

	* configure.bat: Likewise.

	* doc/Makefile.am: Likewise.

	* doc/fdl.texi: Likewise.

	* doc/texi2pod.pl: Likewise.

	* doc/wget.texi: Likewise.

	* m4/exitfail.m4: Likewise.

	* m4/getpagesize.m4: Likewise.

	* m4/wchar.m4: Likewise.

	* m4/wctype.m4: Likewise.

	* m4/wget.m4: Likewise.

	* md5/Makefile.am: Likewise.

	* md5/dummy.c: Likewise.

	* md5/m4/00gnulib.m4: Likewise.

	* md5/m4/gnulib-cache.m4: Likewise.

	* md5/m4/gnulib-common.m4: Likewise.

	* md5/m4/gnulib-comp.m4: Likewise.

	* md5/m4/gnulib-tool.m4: Likewise.

	* md5/m4/include_next.m4: Likewise.

	* md5/m4/longlong.m4: Likewise.

	* md5/m4/md5.m4: Likewise.

	* md5/m4/multiarch.m4: Likewise.

	* md5/m4/stddef_h.m4: Likewise.

	* md5/m4/stdint.m4: Likewise.

	* md5/m4/wchar.m4: Likewise.

	* md5/m4/wchar_t.m4: Likewise.

	* md5/m4/wint_t.m4: Likewise.

	* md5/md5.h: Likewise.

	* md5/stddef.in.h: Likewise.

	* md5/stdint.in.h: Likewise.

	* md5/wchar.in.h: Likewise.

	* msdos/config.h: Likewise.

	* msdos/msdos.c: Likewise.

	* po/POTFILES.in: Likewise.

	* util/Makefile.am: Likewise.

	* util/paramcheck.pl: Likewise.

	* util/rmold.pl: Likewise.

2010-05-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* tests/Makefile.am (LIBS): Add definition.
	(LDADD): Add LIBS.

2010-05-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/gnutls.c (wgnutls_close): Use always `close', not `closesocket'.
	* src/openssl.c (openssl_close): Use always `close', not `closesocket'.
	(ssl_connect_wget): Get the real socket handle by FD_TO_SOCKET.
	Define FD_TO_SOCKET if it is not yet defined.
	* src/Makefile.am (libunittest_a_CPPFLAGS): Add -I$(top_builddir)/lib.
	* src/mswindows.h: Always include <winsock2.h> and <ws2tcpip.h>.  Do not
	include <winsock.h>.
	[! INHIBIT_WRAP]: Remove macro's socket, bind, connect, accept, recv,
	send, select, getsockname, getpeername, setsockopt, closesocket.
	Remove wrapped_socket, wrapped_bind, wrapped_connect, wrapped_listen,
	wrapped_accept, wrapped_recv, wrapped_send, wrapped_select,
	wrapped_getsockname, wrapped_getpeername, wrapped_setsockopt,
	wrapped_closesocket prototypes.
	* src/mswindows.c:	Remove wrapped_socket, wrapped_bind, wrapped_connect,
	wrapped_listen,	wrapped_accept, wrapped_recv, wrapped_send,
	wrapped_select, wrapped_getsockname, wrapped_getpeername,
	wrapped_setsockopt, wrapped_closesocket functions.  Remove WRAP macro.
	* src/host.h [WINDOWS]: Include <winsock2.h> not <winsock.h>.
	* src/connect.c: Include <sys/socket.h> and <sys/select.h> on any platform,
	gnulib ensures they exist.  Remove `read', `write', `close' macros.
	* src/Makefile.am: Copy build_info.c.in only if we are working in a VPATH.
	(AM_CPPFLAGS): Add directory with generated gnulib files.

2010-05-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Don't call macro WGET_SOCKLEN_T.
	(W32LIBS): Add -lws2_32.

	* Makefile.am (EXTRA_DIST): Remove autogen.sh.

	* bootstrap.conf (gnulib_modules): Use new modules from gnulib: accept,
	bind, close, connect, getpeername, getsockname, listen, setsockopt.

	* m4/wget.m4 (WGET_SOCKLEN_T): Remove macro.

	* po/wget.pot: Remove.

2010-05-07  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac (ALL_LINGUAS): Remove.

2010-05-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/Makefile.am (build_info.c): Generate build_info.c in the builddir,
	not srcdir.

2010-05-06  Giuseppe Scrivano  <gscrivano@gnu.org>

	* bootstrap: New file.
	* bootstrap.conf: New file.
	* lib/Makefile.am: include gnulib.mk.
	* autogen.sh: Removed.
	* GNUmakefile: Likewise.
	* INSTALL: Likewise.
	* build-aux/announce-gen: Likewise.
	* build-aux/compile: Likewise.
	* build-aux/config.guess: Likewise.
	* build-aux/config.rpath: Likewise.
	* build-aux/config.sub: Likewise.
	* build-aux/depcomp: Likewise.
	* build-aux/gnupload: Likewise.
	* build-aux/install-sh: Likewise.
	* build-aux/mdate-sh: Likewise.
	* build-aux/missing: Likewise.
	* build-aux/mkinstalldirs: Likewise.
	* build-aux/texinfo.tex: Likewise.
	* build-aux/update-copyright: Likewise.
	* build-aux/useless-if-before-free: Likewise.
	* build-aux/vc-list-files: Likewise.
	* build-aux/ylwrap: Likewise.
	* lib/DESCRIP_DEPS.MMS: Likewise.
	* lib/DESCRIP_MODS.MMS: Likewise.
	* lib/DESCRIP_SRC.MMS: Likewise.
	* lib/alloca.c: Likewise.
	* lib/alloca.in.h: Likewise.
	* lib/c-ctype.c: Likewise.
	* lib/c-ctype.h: Likewise.
	* lib/config.charset: Likewise.
	* lib/errno.in.h: Likewise.
	* lib/error.c: Likewise.
	* lib/error.h: Likewise.
	* lib/exitfail.c: Likewise.
	* lib/exitfail.h: Likewise.
	* lib/fseeko.c: Likewise.
	* lib/getdelim.c: Likewise.
	* lib/getline.c: Likewise.
	* lib/getopt.c: Likewise.
	* lib/getopt.in.h: Likewise.
	* lib/getopt1.c: Likewise.
	* lib/getopt_int.h: Likewise.
	* lib/getpagesize.c: Likewise.
	* lib/getpass.c: Likewise.
	* lib/getpass.h: Likewise.
	* lib/gettext.h: Likewise.
	* lib/intprops.h: Likewise.
	* lib/localcharset.c: Likewise.
	* lib/localcharset.h: Likewise.
	* lib/lseek.c: Likewise.
	* lib/mbrtowc.c: Likewise.
	* lib/mbsinit.c: Likewise.
	* lib/memchr.c: Likewise.
	* lib/memchr.valgrind: Likewise.
	* lib/quote.c: Likewise.
	* lib/quote.h: Likewise.
	* lib/quotearg.c: Likewise.
	* lib/quotearg.h: Likewise.
	* lib/realloc.c: Likewise.
	* lib/ref-add.sin: Likewise.
	* lib/ref-del.sin: Likewise.
	* lib/stdbool.in.h: Likewise.
	* lib/stddef.in.h: Likewise.
	* lib/stdint.in.h: Likewise.
	* lib/stdio-impl.h: Likewise.
	* lib/stdio-write.c: Likewise.
	* lib/stdio.in.h: Likewise.
	* lib/stdlib.in.h: Likewise.
	* lib/str-two-way.h: Likewise.
	* lib/strcasecmp.c: Likewise.
	* lib/strcasestr.c: Likewise.
	* lib/streq.h: Likewise.
	* lib/strerror.c: Likewise.
	* lib/string.in.h: Likewise.
	* lib/strings.in.h: Likewise.
	* lib/strncasecmp.c: Likewise.
	* lib/unistd.in.h: Likewise.
	* lib/verify.h: Likewise.
	* lib/wchar.in.h: Likewise.
	* lib/wctype.in.h: Likewise.
	* lib/xalloc-die.c: Likewise.
	* lib/xalloc.h: Likewise.
	* lib/xmalloc.c: Likewise.
	* m4/00gnulib.m4: Likewise.
	* m4/alloca.m4: Likewise.
	* m4/codeset.m4: Likewise.
	* m4/errno_h.m4: Likewise.
	* m4/error.m4: Likewise.
	* m4/extensions.m4: Likewise.
	* m4/fseeko.m4: Likewise.
	* m4/getdelim.m4: Likewise.
	* m4/getline.m4: Likewise.
	* m4/getopt.m4: Likewise.
	* m4/getpass.m4: Likewise.
	* m4/gettext.m4: Likewise.
	* m4/glibc21.m4: Likewise.
	* m4/gnulib-cache.m4: Likewise.
	* m4/gnulib-common.m4: Likewise.
	* m4/gnulib-comp.m4: Likewise.
	* m4/gnulib-tool.m4: Likewise.
	* m4/iconv.m4: Likewise.
	* m4/include_next.m4: Likewise.
	* m4/inline.m4: Likewise.
	* m4/lib-ld.m4: Likewise.
	* m4/lib-link.m4: Likewise.
	* m4/lib-prefix.m4: Likewise.
	* m4/localcharset.m4: Likewise.
	* m4/locale-fr.m4: Likewise.
	* m4/locale-ja.m4: Likewise.
	* m4/locale-zh.m4: Likewise.
	* m4/longlong.m4: Likewise.
	* m4/lseek.m4: Likewise.
	* m4/malloc.m4: Likewise.
	* m4/mbrtowc.m4: Likewise.
	* m4/mbsinit.m4: Likewise.
	* m4/mbstate_t.m4: Likewise.
	* m4/memchr.m4: Likewise.
	* m4/mmap-anon.m4: Likewise.
	* m4/multiarch.m4: Likewise.
	* m4/nls.m4: Likewise.
	* m4/po.m4: Likewise.
	* m4/progtest.m4: Likewise.
	* m4/quote.m4: Likewise.
	* m4/quotearg.m4: Likewise.
	* m4/realloc.m4: Likewise.
	* m4/stdbool.m4: Likewise.
	* m4/stddef_h.m4: Likewise.
	* m4/stdint.m4: Likewise.
	* m4/stdio_h.m4: Likewise.
	* m4/stdlib_h.m4: Likewise.
	* m4/strcase.m4: Likewise.
	* m4/strcasestr.m4: Likewise.
	* m4/strerror.m4: Likewise.
	* m4/string_h.m4: Likewise.
	* m4/strings_h.m4: Likewise.
	* m4/unistd_h.m4: Likewise.
	* m4/wchar_t.m4: Likewise.
	* m4/wint_t.m4: Likewise.
	* m4/xalloc.m4: Likewise.
	* maint.mk: Likewise.
	* po/Makefile.in.in: Likewise.
	* po/Makevars: Likewise.
	* po/Rules-quot: Likewise.
	* po/be.po: Likewise.
	* po/bg.po: Likewise.
	* po/boldquot.sed: Likewise.
	* po/ca.po: Likewise.
	* po/cs.po: Likewise.
	* po/da.po: Likewise.
	* po/de.po: Likewise.
	* po/el.po: Likewise.
	* po/en_GB.po: Likewise.
	* po/eo.po: Likewise.
	* po/es.po: Likewise.
	* po/et.po: Likewise.
	* po/eu.po: Likewise.
	* po/fi.po: Likewise.
	* po/fr.po: Likewise.
	* po/ga.po: Likewise.
	* po/gl.po: Likewise.
	* po/he.po: Likewise.
	* po/hr.po: Likewise.
	* po/hu.po: Likewise.
	* po/id.po: Likewise.
	* po/it.po: Likewise.
	* po/ja.po: Likewise.
	* po/lt.po: Likewise.
	* po/nb.po: Likewise.
	* po/nl.po: Likewise.
	* po/pl.po: Likewise.
	* po/pt.po: Likewise.
	* po/pt_BR.po: Likewise.
	* po/quot.sed: Likewise.
	* po/ro.po: Likewise.
	* po/ru.po: Likewise.
	* po/sk.po: Likewise.
	* po/sl.po: Likewise.
	* po/sr.po: Likewise.
	* po/sv.po: Likewise.
	* po/tr.po: Likewise.
	* po/uk.po: Likewise.
	* po/vi.po: Likewise.
	* po/zh_CN.po: Likewise.
	* po/zh_TW.po: Likewise.

2010-05-05  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (gethttp): Give a nicer message on a malformed status line.

2010-05-04  Giuseppe Scrivano  <gscrivano@gnu.org>

	* src/http.c (gethttp): Check `resp_status' return code and handle
	errors.

2010-05-04  Giuseppe Scrivano  <gscrivano@gnu.org>

	* AUTHORS: Added myself.

2010-05-03  Giuseppe Scrivano  <gscrivano@gnu.org>

	* configure.ac: Fix a sanity check by the AC_CONFIG_SRCDIR macro.

2010-05-01  Giuseppe Scrivano <gscrivano@gnu.org>

	* src/http.c (request_send): Specify 1.1 as HTTP version for requests.
	(skip_short_body): Accept new parameter `chunked'.  New variable
	`remaining_chunk_size'.  Handle the chunked transfer encoding.
	(gethttp): New variable `chunked_transfer_encoding`.  Set `keepalive'
	by default to true.  Check if the server is using the chunked transfer
	encoding.

	* src/retr.h: Define `rb_chunked_transfer_encoding'.

	* src/retr.c (fd_read_body): New variable `chunked'.  New variable
	`remaining_chunk_size'.  Handle the chunked transfer encoding.

2010-05-01  Giuseppe Scrivano  <gscrivano@gnu.org>

	* NEWS: Mention support for HTTP/1.1.

2010-03-04  Steven Schubiger  <stsc@member.fsf.org>

	* src/ftp.c (ftp_loop_internal): Omit input file from being
	deleted after retrieval.

	* src/retr.c (input_file_url): New function.

	* src/retr.h: Add declaration for input_file_url.

2010-03-02  Steven Schubiger  <stsc@member.fsf.org>

	* src/retr.c (retrieve_from_file): Improve checking for a URL
	by invoking url_valid_scheme instead of url_has_scheme.

	* src/url.c (url_valid_scheme): New function.

	* src/url.h: Add declaration for url_valid_scheme.

2010-03-02  Steven Schubiger  <stsc@member.fsf.org>

	* src/retr.c (retrieve_from_file): Free memory of input file.

2010-03-01  Steven Schubiger  <stsc@member.fsf.org>

	* tests/Test-i-ftp.px: Test --input-file in conjunction with FTP.
	* tests/run-px, Makefile.am (EXTRA_DIST): Added Test-i-ftp.px.

2010-03-01  Steven Schubiger  <stsc@member.fsf.org>

	* src/retr.c (retrieve_url): Retrieve the local filename from ftp_loop.
	(retrieve_from_file): Return if there's no input file.

	* src/ftp.c (ftp_loop_internal): Duplicate the local filename into
	retrieve_url's scope when a valid reference is being passed.
	(ftp_loop): Call ftp_loop_internal here with passing a
	reference to the local filename, elsewhere with NULL.

	* src/ftp.h: Adjust declaration of ftp_loop.

2010-02-26  Steven Schubiger  <stsc@member.fsf.org>

	* tests/Test-i-http.px: Test --input-file in conjunction with HTTP.
	* tests/run-px, Makefile.am (EXTRA_DIST): Added Test-i-http.px.

2010-02-25  Steven Schubiger  <stsc@member.fsf.org>

	* tests/FTPServer.pm (FTPServer::new): Substitute port placeholders
	in content of files to be retrieved via FTP.

2010-01-27  Paul Townsend  <aab@purdue.edu>  (tiny change)

	* src/retr.c (fd_read_body): Be sure to measure timer when time has
	elapsed, too, not just when we've made progress.

2010-01-13  Micah Cowan  <micah@cowan.name>

	* src/openssl.c: Fixed some mixed declarations-and-code.

2010-01-09  Micah Cowan  <micah@cowan.name>

	* src/init.c, main.c, http.c, ftp.c, options.h: Renamed
	--no-match-server-timestamps to --no-use-server-timestamps, and
	add it to print_help.

2010-01-09  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Download Options): Documented
	--no-use-server-timestamps.

2010-01-09  Jeremy Olexa  <darkside@gentoo.org>  (tiny change)

	* src/init.c: Deal with systems which provide PATH_MAX in
	sys/param.h rather than limits.h.

2010-01-09  David Holman  <holman.david@gmail.com>  (tiny change)

	* src/init.c, main.c, http.c, ftp.c, options.h: Added support for
	--no-match-server-timestamps.

2009-12-03  Peter Rosin  <peda@lysator.liu.se>

	* src/snprintf.c (dopr): Output %p as unsigned.

2009-10-24  Petr Pisar  <petr.pisar@atlas.cz>

	* src/openssl.c: Implement support for (multiple) subjectAltNames in
	X509 certificates, not just the commonName.

2009-10-14  Steven Schubiger  <stsc@member.fsf.org>

	* tests/Test-E-k-K.px, Test-cookies-401.px, Test-ftp-bad-list.px,
	Test-iri-list.px, Test-iri.px: Removed -d from invocation.
	Patch by Mike Frysinger.

2009-10-09  Steven Schweda  <sms@antinode.info>

	* src/utils.c: Added characters " : \ | to the list of normal
	caret-escaped (ODS5) characters in the char_prop[] table.

2009-10-09  Steven Schweda  <sms@antinode.info>

	* New VMS MMS/MMK builders, to accommodate the new source tree
	structure:
	lib/DESCRIP_DEPS.MMS	  Dependencies (lib)
	lib/DESCRIP_MODS.MMS	  Modules (lib)
	lib/DESCRIP_SRC.MMS	   Main (lib)
	md5/DESCRIP_DEPS.MMS	  Dependencies (md5)
	md5/DESCRIP_MODS.MMS	  Modules (md5)
	md5/DESCRIP_SRC.MMS	   Main (md5)
	src/DESCRIP_DEPS.MMS	  Dependencies (src)
	src/DESCRIP_MODS.MMS	  Modules (src)
	src/DESCRIP_SRC.MMS	   Main (src)
	vms/DESCRIP.MMS	       Main (global)
	vms/DESCRIP_MKDEPS.MMS	Dependency generator
	vms/DESCRIP_SRC.MMS	   Main (main)
	vms/DESCRIP_SRC_CMN.MMS         Main (common)
	vms/DESCRIP_SRC_FLAGS.MMS       Compiler and linker flags
	vms/COLLECT_DEPS.COM	  Dependency processor
	vms/CONFIG_EXTRACT.COM	Extract AC_INIT from configure.ac
	vms/WGET_MULTINET.OPT	 Link options for (old) MultiNet
	vms/WGET_SSL_HP.OPT	   Link options for HP SSL
	vms/WGET_SSL_O.OPT	    Link options for OpenSSL

	* Other VMS-specific files:
	vms/alloca.h		Dummy alloca.h.
	vms/config.h_vms	      Manually crafted config.h
	vms/stdint.h		Dummy stdint.h
	vms/vms.h		   Declarations, prototypes for vms.c
	vms/vms_ip.h		Helper for netdb.h
	vms/VMS_NOTES.TXT	     Instructions, notes
	vms/WGET.HLP		Basic VMS HELP

2009-10-09  Micah Cowan  <micah@cowan.name>

	* src/main.c: Fix declaration of compiled_features.

	* src/build_info.c.in: Adapt to new input format. Added a check for
	large-file support. Replaced the "openssl" and "gnutls"
	advertisements with a single "ssl/foo" advertisement.

2009-10-09  Micah Cowan  <micah@cowan.name>

	* build_aux/build_info.pl: Reworked the input format. Eliminated
	support, and need, for arbitrary #if blocks. Introduced
	"choices", and explicitly open the .c file rather than print to
	STDOUT, so we avoid creating the file if we find problems with
	the input. Options are advertised in alphabetical order.

2009-09-30  Micah Cowan  <micah@cowan.name>

	* src/sysdep.h: Unconditionally include stdbool.h (gnulib has it for
	systems that don't supply it.)

	* src/vms.c: Added functions vms_basename(), used to extract the
	bare executable name from argv[0], and vms_getpass(), a
	VMS-specific replacement for GNU getpass().

	 vms.c: Added global string constants: compilation_string
	(NULL), link_string (NULL), and version_string (real).

2009-09-27  Micah Cowan  <micah@cowan.name>

	* tests/Test-idn-cmd.px, Test-idn-headers.px, Test-idn-meta.px,
	Test-idn-robots.px, Test-proxy-auth-basic.px: Removed --debug from
	invocation (in case it wasn't built with --debug support).

2009-09-24  Steven Schweda  <sms@antinode.info>

	* src/main.c (print_version): Remove VMS-conditional build info
	string; the new VMS builders use OS_TYPE.

	* src/ftp.c (getftp): Fix accidental use of target -> targ.

2009-09-24  Micah Cowan  <micah@cowan.name>

	* vms/vms.c: Moved to src/src.c.

2009-09-24  Micah Cowan  <micah@cowan.name>

	* tests/Test-ftp-iri-disabled.px: Fix name "Test-ftp-iri" ->
	"test-ftp-iri-disabled"

	* tests/Test-ftp-iri-fallback.px: Fix name "Test-ftp-iri" ->
	"test-ftp-iri-fallback"

2009-09-24  Micah Cowan  <micah@cowan.name>

	* src/vms.c: Moved from vms/vms.c.

	* src/sysdep.h: Use proper prototypes for snprintf, vsnprintf (thanks
	to Steven Schweda).

2009-09-24  Micah Cowan  <micah@cowan.name>

	* src/host.c (host_errstr): host_errstr should return const char *.

2009-09-22  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am (version.c): Explicitly tell Mercurial where the
	top-source repository should be, so it doesn't accidentally use
	the repository for a containing directory (for instance, if the
	user's home directory is managed by a Mercurial repo). Also
	ensures we find the repository, even if the build directory is
	outside the source directory.

	* src/wget.h: define WINDOWS if _WIN32 or __WIN32__ is defined, but
	not __CYGWIN__.

	* src/mswindows.c (xsleep): Check for availability of the sleep
	function, in addition to the usleep function.
	(get_winsock_error, windows_strerror): Removed (gnulib already
	supplies this functionality).

	* src/mswindows.h [NEED_GAI_STRERROR]: define gai_strerror
	to (gnulib's) strerror, rather than windows_strerror. Removed
	error macro definitions provided by gnulib.
	(windows_strerror): Removed (gnulib already supplies this
	functionality).

	* src/host.c: Don't declare h_errno when building on Windows.

	* src/Makefile.am (LIBS): Added @W32LIBS@.
	(EXTRA_wget_SOURCES): Removed (it's in LIBOBJ now).
	(version.c): Removed dependency on $(LDADD), since it may include
	dependencies that are not part of the Wget sources (-lwsock32, for
	instance).

	* src/openssl.c (ssl_check_certificate): Avoid reusing the same buffer
	space for successive quoted arguments. Thanks to Steven Schweda
	for pointing out the problem.

2009-09-22  Micah Cowan  <micah@cowan.name>

	* configure.ac: Added "sleep" and "symlink" to AC_CHECK_FUNCS,
	removing the hard-coded definition of HAVE_SYMLINK. When running
	on MinGW, compile mswindows.c, and link against libwsock32.

2009-09-22  Arvind Jamuna Dixit  <ardsrk@gmail.com>

	* src/http.c (extract_param, parse_content_disposition): Support
	RFC 2231 while parsing Content-Disposition header

2009-09-21  Micah Cowan  <micah@cowan.name>

	* vms/VMS-WGET.COM: "the the" -> "the".

	* po/POTFILES.in: Removed some files that are not using gettext.

	* po/*.po: Updated from translationproject.org.

2009-09-21  Micah Cowan  <micah@cowan.name>

	* src/progress.c (update_speed_ring): "the the" -> "the".

	* src/css-url.c, iri.c, mswindows.c: Removed assert.h inclusion (not
	using it).

2009-09-20  Micah Cowan  <micah@cowan.name>

	* INSTALL: Various minor adjustments to bring it up to date.

2009-09-11  Steven Schweda  <sms@antinode.info>

	* src/utils.c, utils.h (fopen_excl): Make second argument an int,
	rather than a bool (so it can handle the appropriate VMS version
	of the flag).

	* src/main.c (print_version): Don't print LOCALEDIR unless NLS is
	enabled.

	* src/http.c (gethttp): Pass FOPEN_BIN_FLAG, instead of true.

	* src/ftp.c (ftp_retrieve_glob): Cast strcmp to assign to cmp, for a
	silly HP build environment.

2009-09-09  Micah Cowan  <micah@cowan.name>

	* configure.ac: Add bz2 and lzma dists.

2009-09-08  Steven Schubiger  <stsc@member.fsf.org>

	* src/main.c, init.c: Mark the --preserve-permissions and
	--html-extension option as deprecated.

2009-09-08  Micah Cowan  <micah@cowan.name>

	* po/*.po: Updated from translationproject.org.

2009-09-07  Micah Cowan  <micah@cowan.name>

	* tests/run-px: Exit with a failure if there were any tests with
	"unknown" exit statuses.

	* tests/Test-auth-with-content-disposition.px: New. Test Content-Disposition
	support when HTTP authentication is required.
	* tests/run-px, Makefile.am (EXTRA_DIST): Added
	Test-auth-with-content-disposition.px.

	* tests/FTPServer.pm (FTPServer::run): Pass "server behavior" information to
	newly-constructed FTPPaths object.
	(FTPPaths::initialize): Accept "server behavior" hash.
	(FTPPaths::_format_for_list): If server behavior has "bad_list"
	set, then always report 0 for the size.
	* tests/Test-ftp-bad-list.px: Added. Attempts to reproduce bug
	22403... but doesn't.
	* tests/run-px, Makefile.am (EXTRA_DIST): Added Test-ftp-bad-list.px.

2009-09-07  Micah Cowan  <micah@cowan.name>

	* Makefile.am (distuninstallcheck_listfiles): Don't complain if
	/usr/share/info/dir and /etc/wgetrc are left behind after an
	uninstall.

	* po/Rules-quot (mostlyclean-quot): Add en_US.po for remvoal by
	mostlyclean.
	(en_US.po-update): Behave properly for VPATH builds.

2009-09-06  Micah Cowan  <micah@cowan.name>

	* tests/WgetTest.pm.in (_setup): Don't expect error codes from
	_setup_server; none are returned.
	(quotechar, _show_diff): Added facilities for expounding on where
	output didn't match expectations.
	(_verify_download): Use _show_diff.

	* tests/FTPTest.pm (_setup_server): Pass value of server_behavior to
	FTPServer initialization.

	* tests/Test-ftp-pasv-fail.px: Added.
	* tests/run-px, Makefile.am (EXTRA_DIST): Added Test-ftp-pasv-fail.px.

	* tests/WgetTest.pm.in: Added "server_behavior" to the set of accepted
	initialization values.
	* tests/FTPServer.pm (__open_data_connection): Add "server_behavior" to
	the set of accepted initialization values.
	(run): Honor the 'fail_on_pasv' server behavior setting, to
	trigger the Wget getftp glitch.

2009-09-06  Micah Cowan  <micah@cowan.name>

	* src/ftp.c (getftp, ftp_loop_internal): Separate "len" input/output
	parameter (with different meanings for input and output), into two
	separate parameters, one input (passed_expected_bytes) and one
	output (qtyread). Fixes bug #26870.

2009-09-06  Gisle Vanem  <gvanem@broadpark.no>

	* msdos/Makefile.WC: Added compilation of new file msdos.c.
	Simplified; no need to have explicit rules for files in ./lib and
	./md5. Just use the suffix search path mechanism in wmake.

2009-09-06  Gisle Vanem  <gvanem@broadpark.no>

	* msdos/Makefile.DJ: Added compilation of new file msdos.c.

2009-09-05  Steven Schubiger  <stsc@member.fsf.org>

	* tests/run-px: Introduce two new diagnostics: Skip and Unknown.

	* tests/WgetFeature.pm (import): Parse the version output of Wget
	and assert the availability of a feature.

	* tests/WgetFeature.cfg: Messages to be printed in absence of a
	required feature.

	* tests/Test-ftp-iri-disabled.px, Test-ftp-iri-fallback.px,
	Test-ftp-iri-recursive.px, Test-ftp-iri.px, Test-idn-cmd.px,
	Test-idn-headers.px, Test-idn-meta.px, Test-idn-robots.px,
	Test-iri-forced-remote.px, Test-iri-list.px,
	Test-iri-percent.px, Test-iri.px: Use WgetFeature.pm to
	check for the presence of the IDN/IRI feature.

	* tests/Test-proxied-https-auth.px: Replace grepping for a feature
	with loading WgetFeature.pm at compile-time.

	* tests/Makefile.am: Add WgetFeature.pm and WgetFeature.cfg
	to EXTRA_DIST.

2009-09-05  Steven Schubiger  <stsc@member.fsf.org>

	* src/retr.h: Declare set_local_file() to avoid build warnings.

2009-09-05  Micah Cowan  <micah@cowan.name>

	* tests/Test-ftp-recursive.px: Added.
	* tests/run-px, Makefile.am (EXTRA_DIST): Added Test-ftp-recursive.px.

	* tests/FTPTest.pm (_setup_server): Don't construct the "input"
	directory's contents, just pass the URLs structure to
	FTPServer->new.
	* tests/FTPServer.pm: Rewrote portions, so that the server now uses the
	information from the %urls hash directly, rather than reading from
	real files. Added an FTPPaths package to the file.

2009-09-05  Micah Cowan  <micah@cowan.name>

	* configure.ac: If we can't find idna.h, check to see if it's
	because we need to add /usr/include/idn to the inclusion
	path (for OpenSolaris).

2009-09-05  Gisle Vanem  <gvanem@broadpark.no>

	* src/connect.c, init.c, main.c, openssl.c, options.h:  Replace
	"ifdef MSDOS" with "ifdef USE_WATT32" since DOS-targets in fact
	use the Watt-32 tcp/ip stack.

2009-09-05  Gisle Vanem  <gvanem@broadpark.no>

	* msdos/config.h: Added 'HAVE_ALLOCA_H' for Watcom 1.5+.  Added
	'USE_WATT32' since all DOS-targets use the Watt-32 tcp/ip stack.
	Added meaningless dummy LOCALEDIR.

	* msdos/Makefile.WC: A much needed update. Added rules for many files
	in ./lib, css.c and version.c.

	* msdos/Makefile.DJ: A much needed update. Added rules for css.c and
	version.c.

2009-09-04  Steven Schubiger  <stsc@member.fsf.org>

	* configure.ac: Place gl_EARLY and md5_EARLY before the gettext
	macros in order to silence autoconf warnings.

2009-09-04  Micah Cowan  <micah@cowan.name>

	* tests/WgetTest.pm.in (run): Error-checking improvements.

2009-09-04  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am: Move build_info.c to wget_SOURCES from
	nodist_wget_SOURCES, reduce dependencies, and invoke build_info.pl
	in its new home, $(top_srcdir)/build-aux.

2009-09-04  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Time-Stamping): "older" -> "not newer".

	* doc/Makefile.am (install.man, install.wgetrc): Use $(mkinstalldirs),
	not $(top_srcdir)/mkinstalldirs.

2009-09-04  Micah Cowan  <micah@cowan.name>

	* Makefile.am (EXTRA_DIST): build_info.pl ->
	build-aux/build_info.pl

	* build-aux/build_info.pl: Moved from top directory.

	* md5/*: Updated md5 from gnulib.

	* configure.ac: Configured build-aux/ as auxiliarry directory.

	* build-aux/compile, build-aux/config.guess,
	build-aux/config.rpath, build-aux/config.sub, build-aux/depcomp,
	build-aux/install-sh, build-aux/link-warning.h,
	build-aux/mdate-sh, build-aux/missing, build-aux/mkinstalldirs,
	build-aux/texinfo.tex, build-aux/useless-if-before-free,
	build-aux/vc-list-files, build-aux/ylwrap: Moved from top
	directory.

	* build-aux/announce-gen: Imported from gnulib.
	* build-aux/update-copyright: Imported from gnulib.
	* build-aux/gnupload: Imported from gnulib.
	* lib/Makefile.am, m4/gnulib-cache.m4, m4/gnulib-comp.m4: Adjusted
	for announce-gen, update-copyright, and gnupload.

2009-09-03  gettextize  <bug-gnu-gettext@gnu.org>

	* m4/gettext.m4: Upgrade to gettext-0.17.
	* m4/iconv.m4: Upgrade to gettext-0.17.
	* m4/lib-link.m4: Upgrade to gettext-0.17.
	* m4/po.m4: Upgrade to gettext-0.17.

	* po/Makefile.in.in: Upgrade to gettext-0.17.

	* configure.ac (AM_GNU_GETTEXT_VERSION): Bump to 0.17.

2009-09-03  Micah Cowan  <micah@cowan.name>

	* src/ftp-ls.c (ftp_parse_vms_ls): Replace use of localtime_r with
	localtime, as not all platforms have localtime_r.

	* src/Makefile.am (wget_SOURCES): Rearranged some of the file order,
	so .c files and .h files are apart. Added gettext.h, so that it
	shows up in the dist.

2009-09-03  Micah Cowan  <micah@cowan.name>

	* NEWS: Give credit to jff for SSL security fix, call attention to
	IRI support's dependence on libidn and libiconv, and note that
	--html-extension is still accepted, though deprecated.

	* lib/*, m4/*: Updated gnulib.
	* lib/getpagesize.c, lib/memchr.c, lib/memchr.valgrind,
	lib/stddef.in.h, lib/str-two-way.h, lib/strcasecmp.c,
	lib/strcasestr.c, lib/strings.in.h, lib/strncasecmp.c,
	m4/getpagesize.m4, m4/memchr.m4, m4/mmap-anon.m4,
	m4/stddef_h.m3, m4/strcase.m4, m4/strcasestr.m4,
	m4/strings_h.m4, m4/wchar_t.m4: Added, via gnulib --import
	strcasestr.

	* configure.ac: Move AM_GNU_GETTEXT below AC_AIX, to shut up
	autoconf warnings.

2009-09-02  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am (unit-tests): explicit dependency is
	unnecessary (and harmful, as it overrides the automatic one).

2009-09-02  Micah Cowan  <micah@cowan.name>

	* src/gettext.h: Refreshed from gettext 0.17.

	* src/test.c: Added definition of program_name variable, required by
	lib/error.c (libgnu.a). Doesn't cause problems until you try to
	build on a non-GNU system...

	* src/build_info.c.in: Removed useless "+gettext" feature ad.

2009-09-02  Micah Cowan  <micah@cowan.name>

	* po/Rules-quot (en_US.po-update): Remove use of GNU make's
	non-portable $^ variable.

2009-09-01  Steven Schubiger  <stsc@member.fsf.org>

	* tests/Makefile.am: Add Test-cookies.px, Test-cookies-401.px
	and Test-restrict-ascii.px to EXTRA_DIST.

2009-09-01  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am (../src/libunittest.a): Make it a phony target,
	so we always make sure to get up-to-date unit-test runs.

2009-08-31  Steven Schubiger  <stsc@member.fsf.org>

	* tests/Makefile.am: Add Test-k.px to EXTRA_DIST.

2009-08-29  Steven Schubiger  <stsc@member.fsf.org>

	* tests/run-px: Add Test-k.px to the list.

	* tests/Test-k.px: Test escaping of semicolons in local file strings.

2009-08-29  Steven Schubiger  <stsc@member.fsf.org>

	* src/convert.c (local_quote_string): Percent-encode semicolons
	in local file strings.

2009-08-27  Micah Cowan  <micah@cowan.name>

	* tests/run-px: Added Test-cookies.px, Test-cookies-401.px

	* tests/Test-cookies.px: Basic testing to make sure Wget doesn't send
	cookies; no path/domain checking.

	* tests/Test-cookies.px: Test to make sure Wget heeds cookies when they
	are sent with a 401 response (#26775).

	* tests/HTTPServer.pm (send_response): Don't try to substitute port in
	response body, if there isn't one.
	(verify_request_headers): Avoid uninitialized warning when an
	expected header isn't provided by Wget.

2009-08-27  Micah Cowan  <micah@cowan.name>

	* tests/WgetTest.pm.in (run): Shift the errcode right by 8 binary places.

	* tests/Test--spider-fail.px, Test--spider-r--no-content-disposition.px,
	Test--spider-r--no-content-disposition-trivial.px,
	Test--spider-r-HTTP-Content-Disposition.px, Test--spider-r.px,
	Test-O-nonexisting.px, Test-cookies-401.px,
	Test-nonexisting-quiet.px: Adjusted "expected error code"; Wget's
	exit codes have changed.

2009-08-27  Micah Cowan  <micah@cowan.name>

	* src/wget.h (uerr_t): added new VERIFCERTERR code for SSL certificate
	problems. Marked exit codes that are defined but never used (at
	least, the ones I could find).

	* src/retr.c, retr.h (retrieve_url): Added a new boolean argument to
	determine whether an exit status should be recorded.
	(retrieve_from_file): Adjust to new retrieve_url signature.

	* src/res.c (res_retrieve_file): Don't have retrieve_url record an
	exit status for robots.txt.

	* src/recur.c (retrieve_tree): Adjust to new retrieve_url signature.

	* src/main.c (main): Use the exit status stored by retrieve_url.

	* src/http.c (gethttp): Distinguish certificate verification problems
	from SSL connection issues.
	(http_loop): Handle newly-created VERIFCERTERR error code.

	* src/exits.c, exits.h: Newly added.

	* src/Makefile.am (wget_SOURCES): Add exits.c and exits.h.

2009-08-27  Micah Cowan  <micah@cowan.name>

	* src/http.c (gethttp): Make sure Wget heeds cookies when they
	are sent with a 401 response; or any other sort of response for
	that matter (#26775).

2009-08-27  Micah Cowan  <micah@cowan.name>

	* doc/texi2pod.pl: Handle @asis in table-element formatting.

	* doc/wget.texi (Exit Status): Document new exit codes.

2009-08-27  Micah Cowan  <micah@cowan.name>

	* NEWS: Mention the changes to exit codes.

2009-08-27  Micah Cowan  <micah@cowan.name>

	* NEWS: Add mention of the NUL characters SSL security fix.

2009-08-19  Micah Cowan  <micah@cowan.name>

	* src/openssl.c (ssl_check_certificate): Only warn about an attack if
	the hostname would otherwise have matched. Also some formatting
	cleanup.

2009-08-19  Joao Ferreira  <joao@joaoff.com>

	* src/openssl.c (ssl_check_certificate): Detect embedded NUL
	characters in the SSL certificate common name.

2009-08-17  Tony Lewis  <tlewis@exelana.com>

	* src/http.c (gethttp): Ensure that we parse Content-Length before we
	attempt to refer to its value. Without this fix, NTLM support was
	completely buggered. #27192

2009-08-09  Michael Baeuerle  <michael.baeuerle@gmx.net>

	* src/ftp.c: #include <strings.h> for strcasecmp.

2009-08-02  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Option Syntax): "This is a complete equivalent of" ->
	"This is completely equivalent to". Thanks to Reuben Thomas for
	catching this.

2009-07-28  Micah Cowan  <micah@cowan.name>

	* src/main.c (option_data): Rename --html-extension to
	--adjust-extension.
	(print_help): Ditto.

	* src/options.h (struct option): Rename html_extension to
	adjust_extension.
	* src/http.c (gethttp): Ditto.
	* src/convert.c (local_quote_string): Ditto.

	* src/init.c (commands): Add "adjustextension", and reflect rename
	change for opt.adjust_extension, for both "adjustextension" and
	"htmlextension".

2009-07-28  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Download Options): Document "lowercase", "uppercase",
	and the new "ascii" specifier for --restrict-file-names.
	(HTTP Options): Rename --html-extension to --adjust-extension.
	(Wgetrc Commands): Rename html_extension to adjust_extension.

2009-07-28  Micah Cowan  <micah@cowan.name>

	* NEWS: Mention some more previously undocumented items, the
	new "ascii" specifer for --restrict-file-names, and the renaming
	of --html-extension to --adjust-extension.

2009-07-27  Petr Pisar  <petr.pisar@atlas.cz>

	* src/main.c (print_help): Fixed a couple typos.

2009-07-27  Petr Pisar  <petr.pisar@atlas.cz>

	* po/Makevars (MSGID_BUGS_ADDRESS): Fixed.

2009-07-27  Micah Cowan  <micah@cowan.name>

	* tests/Test-restrict-ascii.px: New.

	* tests/run-px: Added Test-restrict-ascii.px.

2009-07-27  Micah Cowan  <micah@cowan.name>

	* src/options.h (struct options): Added restrict_files_nonascii
	boolean field.

	* src/url.c (FILE_CHAR_TEST): Add check for chars outside the ASCII
	range.

	* src/init.c (defaults): Add restrict_files_nonascii to initialization.
	(cmd_spec_restrict_file_names): Allow parsing of "ascii" keyword.

2009-07-27  Marcel Telka  <marcel@telka.sk>

	* src/iri.c (do_conversion): Typo: invalide -> invalid

2009-07-26  Micah Cowan  <micah@cowan.name>

	* tests/Test-ftp-iri.px, Test-ftp-iri-fallback.px,
	Test-ftp-iri-recursive.px, Test-ftp-iri-disabled.px,
	Test-idn-cmd.px, Test-idn-robots.px: Adjust wget invocations,
	replacing --locale with --local-encoding.

2009-07-26  Micah Cowan  <micah@cowan.name>

	* src/main.c (option_data): Rename --locale option to --local-encoding
	(print_help): Document --no-iri, --local-encoding, and
	--remote-encoding, within usage message. Remove defunct
	--preserve-permissions.

2009-07-26  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Download Options): Change --iri item to --no-iri;
	rename --locale to --local-encoding.
	(Wgetrc Commands): Document iri, local_encoding, remote_encoding,
	ask_password, auth_no_challenge, and keep_session_cookies.

2009-07-23  Micah Cowan  <micah@cowan.name>

	* src/progress.c (get_eta): Change "Translation note" in comment to
	"TRANSLATORS", so it actually appears in wget.pot.

2009-07-10  Micah Cowan  <micah@cowan.name>

	* util/paramcheck.pl (find_documentation): Added.
	(emit_undocumented_opts): Check for documentation in both TexInfo
	and --help string.

2009-07-07  Steven Schubiger  <stsc@member.fsf.org>

	* tests/Makefile.am: Add IDN/IRI test files and Test-meta-robots.px
	to EXTRA_DIST.

2009-07-06  Micah Cowan  <micah@cowan.name>

	* src/main.c (print_help): Improve documentation of --base.

2009-07-06  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Logging and Input File Options): Alter description of
	--input-file, implying that --force-html isn't necessary when the
	input is in HTML file. Improve accuracy of --base description.
	(Wgetrc Commands): Improve accuracy of "base" description.
	(HTTP Options): Clarify operation of --post-file.

2009-07-05  Petr Pisar  <petr.pisar@atlas.cz>

	* src/main.c (print_version): Mark initial line for translation, along
	with (env), (user), and (system). Change copyright year to 2009.

	* src/http.c (http_loop): Space after colon.

	* src/gnutls.c (ssl_check_certificate): Use quote function, rather
	than explicit quotes.

2009-07-05  Micah Cowan  <micah@cowan.name>

	* tests/Test-meta-robots.px: Added.

	* tests/run-px: Add Test-meta-robots.px to the list.

2009-07-05  Micah Cowan  <micah@cowan.name>

	* src/html-url.c (tag_handle_meta): Handle meta name="robots"
	properly: deal with whitespace, commas after...

	* src/netrc.c (parse_netrc): Rename local-scope variable "quote" to
	"qmark", to avoid conflict with the function name.

2009-07-05  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am (version.c): Add dependency on configure.ac.

	* src/iri.c: Mark some strings for translation.

2009-07-05  Micah Cowan  <micah@cowan.name>

	* po/Rules-quot: Added targets to build en@{quot,boldquot}.po

	* po/POTFILES.in: Added src/gnutls.c, src/iri.c.

	* po/*.po: Updated translations from TP. New translation:
	Lithuanian.

	* lib/*, md5/*: Updated gnulib.

2009-07-04  Steven Schweda  <sms@antinode.info>

	* vms/COLLECT_DEPS.COM, vms/config.h_vms, vms/decc_ver.c,
	vms/DESCRIP_CONFIG.MMS, vms/DESCRIP_DEPS.MMS,
	vms/DESCRIP_MKDEPS.MMS, vms/DESCRIP.MMS, vms/DESCRIP_SRC.MMS,
	vms/vms.c, vms/vms.h, vms/vms_ip.h, vms/vms_name_fix.sh,
	vms/VMS_NOTES.TXT, vms/VMS-WGET.COM, vms/WGET.HLP,
	vms/WGET_MULTINET.OPT, vms/WGET.OPT, vms/WGET_SSL_HP.OPT,
	vms/WGET_SSL.OPT: Added.

2009-07-04  Steven Schweda  <sms@antinode.info>

	* src/wget.h (ORIG_SFX): Macro added, to supply an alternative "_orig"
	suffix on VMS.

	* src/connect.c, host.c, host.h, main.c: Include "vms_ip.h" rather
	than <netdb.h> on VMS systems.

	* src/convert.c (write_backup_file): Use "_orig" rather than ".orig"
	on VMS.

	* src/ftp-basic.c (ftp_list): Don't use LIST -a on VMS servers.

	* src/ftp.c [__VMS]: Include "vms.h"
	* src/ftp.c (getftp): Disable some unhelpful "for VMS" code. Pass the
	OS type to ftp_list.
	(getftp) [__VMS]: Alter the filename as required, and invoke fopen
	with extra optional arguments.
	(ftp_retrieve_list): Set permissions before setting the times.

	* src/ftp-ls.c [__VMS]: Various improvements.

	* src/http.c (SET_USER_AGENT): Added. Include operating-system info in
	the User-Agent header.
	(gethttp): Use ORIG_SFX macro.
	(gethttp) [__VMS]: invoke fopen with extra arguments to
	communicate file type.
	(http_loop): Add cast to time_t.

	* src/init.c (wgetrc_user_file_name) [__VMS]: Adjustments for where to
	find the .wgetrc.

	* src/log.c: Adjustments to improve handling of log files on VMS.

	* src/main.c [__VMS]: Added --ftp-stmlf option (and associated
	documentation). Adjust description of backup-suffixes, as they now
	differ for VMS.
	(print_help, print_version): Include OS type in version
	information.
	(main) [__VMS]: Invoke fopen with extra options, to specify file
	type information.

	* src/netrc.c (search_netrc) [__VMS]: Fix .netrc-finding.

	* src/openssl.c, openssl.h (ssl_connect_wget): Renamed from ssl_connect.

	* src/options.h (struct options): Add ftp_stmlf field.

	* src/retr.c (write_data) [__VMS]: Avoid fflush.

	* src/url.c [__VMS]: Include vms.h.
	* src/url.c (url_file_name) [__VMS]: Handle naming as required for VMS.

	* src/utils.c [__VMS]: Include vms.h. Various added facilities for VMS
	needs.

2009-07-04  Steven Schubiger  <stsc@member.fsf.org>

	* src/url.c (url_parse): If an URL scheme is invalid, distinguish
	between an unsupported or missing scheme.

	* src/url.c: Add a "missing scheme" entry to parse_errors.

2009-07-04  Micah Cowan  <micah@cowan.name>

	* src/main.c (print_version): Allow localization of the version-info
	labels, eschew attempts at alignment (which is complicated when
	handling translated strings), and avoid using printf() with
	variable-stored format strings that lack conversion
	specifications.
	(format_and_print_line): For similar reasons, don't calculate
	line-continuation tabulation based on the number of bytes in a
	string.

2009-07-03  Micah Cowan  <micah@cowan.name>

	* tests/Test-ftp-iri-disabled.px, Test-iri-disabled.px:
	--iri=no --> --no-iri

2009-07-03  Micah Cowan  <micah@cowan.name>

	* src/iri.h (iri_dup): Provide macro definition for when IRIs are
	disabled.

	* src/Makefile.am (LIBS): Added @LIBICONV@.
	(wget_SOURCES): Added iri.h.
	(EXTRA_wget_SOURCES): Added iri.c, so it gets packaged even if IRI
	support was disabled.

2009-07-03  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Download Options): --iri=no --> --no-iri
	(Contributors): Add Saint Xavier.

2009-07-03  Micah Cowan  <micah@cowan.name>

	* configure.ac: Ensure LIBICONV is empty if IRIs are disabled.

	* AUTHORS: Added Ted Mielczarek and Saint Xavier.

	* NEWS: Added items for IRI support, new --version information.

2009-07-02  Micah Cowan  <micah@cowan.name>

	* src/recur.c (url_enqueue): Quote enqueue/dequeue debug messages.

	* src/html-url.c (append_url): Change "merge()" quoting style from
	locale_quoting_style to escape_quoting_style.

2009-07-01  Steven Schubiger  <stsc@member.fsf.org>

	* src/Makefile.am: Add a rule to generate build_info.c and list
	the build_info.c.in file in EXTRA_DIST. Adjust elsewhere
	where needed.

	* src/build_info.c: Remove this static source file.

	* src/build_info.c.in: Data for generation of build_info.c.

2009-07-01  Steven Schubiger  <stsc@member.fsf.org>

	* Makefile.am: Add build_info.pl to EXTRA_DIST.

	* build_info.pl: Generate build_info.c from data.

2009-07-01  Micah Cowan  <micah@cowan.name>

	* tests/HTTPServer.pm (send_response): Invocation of
	verify_request_headers, to support testing of Wget-sent header
	values.
	(verify_request_headers): Added.

	* tests/Test-iri.px: Added verification checks for Referer values.

2009-07-01  Micah Cowan  <micah@cowan.name>

	* src/retr.c (retrieve_url): Use the existing "redirect" label,
	instead of superfluous "second_try". Removed no-longer-accurate
	debug statement. Use the "newloc" parameter to store the fallback
	URL, when IRI version was rejected.

	* src/recur.c (retrieve_tree): Always use the parsed URL for tracking
	the Referer, since that's the one we actually requested (if
	there's a difference in terms of percent-encodings and such).

2009-06-29  Micah Cowan  <micah@cowan.name>

	* tests/WgetTest.pm.in (_cleanup): Allow cleanup of test directories to
	be skipped at user discretion.

	* tests/run-px, Test-iri-percent.px, Test-ftp-iri-recursive.px: Added
	test for percent-coded value preservation, FTP recursion when IRI
	support's on.

2009-06-29  Micah Cowan  <micah@cowan.name>

	* src/html-url.c (append_url): Quote some more arguments that might
	contain characters that are inappropriate to display for the
	current locale.

	* src/retr.c (retrieve_from_file): Be sure to pass iri information
	when parsing an input-fle url, and be sure to hand a clean iri
	struct, off to retrieve_tree and retrieve_url.

	* src/iri.c, iri.h (iri_dup): Added.

	* src/retr.c (retrieve_url): Re-parse for IRI fallback.

	* src/main.c (main): Set up iri before the url_parse invocation (so we
	can use it).

2009-06-20  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Contributors): Added Jay Krell.

2009-06-20  Jay Krell  <jay.krell@cornell.edu>

	* src/sysdep.h (_ALL_SOURCE): (small change) Define the _ALL_SOURCE
	macro on INTERIX systems. (I switched the location from ftp.c to
	sysdep.h --mjc)

2009-06-15  Micah Cowan  <micah@cowan.name>

	* src/ftp.c (getftp): If we can't accept the connection, return
	CONERROR, not whatever the contents of err happens to be. Fixes
	bug #25015.

	* src/retr.c (fd_read_body): Make both args to progress_create
	consistent, resulting in an accurate progress display. Fixes bug
	#24948.

2009-06-14  Phil Pennock  <mutt-dev@spodhuis.org> (tiny change)
	* src/host.h: Declare `is_valid_ip_address'.
	* src/host.c (is_valid_ip_address): New function.
	* src/http.c (gethttp): Specify the hostname to ssl_connect_wget.
	* src/gnutls.c (ssl_connect_wget): Specify the server name.
	* src/openssl.c (ssl_connect_wget): Likewise.
	* src/ssl.h: Change method signature for ssl_connect_wget.

2009-06-14  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am (EXTRA_DIST): Include all the tests, run-px, and
	certs/, to make distcheck happy.

2009-06-14  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am (wget_SOURCES): css-tokens.h needs to ship with
	dist, too.

2009-06-14  Micah Cowan  <micah@cowan.name>

	* po/Makefile.in.in (distclean): remove en_US.po, too.

	* Makefile.am: Include md5 as a subdir unconditionally.
	It may result in useless compilation, and additional risk of
	breaking a build of something that isn't actually needed, but
	otherwise it's too much of a hassle to manage a failure-free
	distcheck.

2009-06-14  Micah Cowan  <micah@cowan.name>

	* doc/Makefile.am (wget.pod): $(srcdir)/version.texi -> version.texi

2009-06-13  Micah Cowan  <micah@cowan.name>

	* src/init.c: Rename setval_internal_wrapper to setval_internal_tilde,
	ensure we don't "replace" the tilde unless it's actually
	present. Clean up some minor GNU style issues.

2009-06-13  Julien Pichon  <julienpichon7@gmail.com>

	* src/init.c: Handle tilde-expansion in wgetrc commands, without
	resorting to setting/unsetting globals to change behavior in one
	call location.

2009-06-12  Micah Cowan  <micah@cowan.name>

	* src/host.c: Include <sys/types.h> before <sys/socket.h>. Not
	required by POSIX any more, but some older systems (such as
	FreeBSD 4.1) still need it, and it doesn't seem like it could
	hurt...

	* src/build_info.c (library): Handle "https" as a feature in its own
	right, apart from "gnutls" and "openssl".

	* src/host.c: Declare h_errno if no declaration is provided. Idea
	thanks to Maciej W. Rozycki.

2009-06-12  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Download Options): More accuracy on what happens when
	-nd is used with -r or -p.

2009-06-12  Micah Cowan  <micah@cowan.name>

	* configure.ac: Check for h_errno declaration. Idea thanks to
	Maciej W. Rozycki.

2009-06-11  Xin Zou  <zouxin2008@gmail.com>

	* src/http.c (gethttp): Fix some memory leaks.

2009-06-11  Micah Cowan  <micah@cowan.name>

	* src/http.c (http_atotm): Handle potential for setlocale's return
	value to be static storage. Thanks to Benjamin Wolsey
	<bwy@benjaminwolsey.de>.

	* src/sysdep.h: Need NAMESPACE_TWEAKS on non-Linux glibc-based
	systems, too. Thanks to Robert Millan.

2009-06-11  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Contributors): Added Xin Zou, Benjamin Wolsley, and
	Robert Millan.

2009-06-11  Joao Ferreira  <joao@joaoff.com>

	* doc/wget.texi (Option Syntax): Fixed contradictory and confusing
	explanation of --folow-ftp and negation.

2009-06-11  Benjamin Wolsey <bwy@benjaminwolsey.de>

	* tests/Test-proxied-https-auth.px: Take an optional argument for the
	top source directory, so we can find the cert and key.

	* tests/run-px: Provide the top source directory as an argument, so
	scripts can find their way around.

2009-06-10  Micah Cowan  <micah@cowan.name>

	* doc/sample.wgetrc: Add "https_proxy" to the proxy examples. Thanks
	to Martin Paul <martin@par.univie.ac.at> for the suggestion.

2009-05-28  Steven Schubiger  <stsc@member.fsf.org>

	* src/ftp.c (ftp_get_listing): Update the "listing file"
	string after calling ftp_loop_internal().

2009-05-27  Steven Schubiger  <stsc@member.fsf.org>

	* src/ftp.c (ftp_get_listing): Duplicate the "listing file"
	string to avoid memory corruption when FOPEN_EXCL_ERR is
	encountered.

2009-05-17  Steven Schubiger  <stsc@member.fsf.org>

	* src/progress.c (eta_to_human_short): Fix the remaining hours
	to be displayed. Spotted by Tadeu Martins (#26411).

2009-04-24  Micah Cowan  <micah@cowan.name>

	* src/hash.c: Change stdint.h inclusion to use HAVE_STDINT_H, not C99
	check.

	* src/connect.c: stdint.h inclusion added.

	Thanks to Markus Duft <mduft@gentoo.org> for a similar patch.

2009-04-20  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am (version.c): Fix unportable use of "echo -n".

2009-04-13  Steven Schubiger  <stsc@member.fsf.org>

	* src/ftp.c (ftp_retrieve_list): Move the duplicated code that
	determines the local file to a function.

	* src/http.c (http_loop): Likewise.

	* src/retr.c (set_local_file): New function.

2009-04-11  Steven Schubiger  <stsc@member.fsf.org>

	* tests/run-px: Skip testing with real rc files by setting
	SYSTEM_WGETRC and WGETRC to /dev/null.

2009-04-11  Steven Schubiger  <stsc@member.fsf.org>

	* src/init.c (initialize): Run a custom SYSTEM_WGETRC when
	provided as an environment variable.

2009-03-03  Steven Schubiger  <stsc@member.fsf.org>

	* src/ftp.c, src/http.c, src/main.c, src/recur.h,
	tests/Makefile.am: Update the copyright years.

2009-02-27  Steven Schubiger  <stsc@member.fsf.org>

	* src/ftp.c (ftp_loop_internal): Don't claim for FTP retrievals
	when writing to standard output either that the document
	has been saved. Addresses bug #20520 again.

2009-02-27  Gisle Vanem  <gvanem@broadpark.no>

	* src/main.c (main): "freopen (NULL,.." causes an assertion in MSVC
	debug-mode.  I.e. NULL isn't legal. But the "CONOUT$" device works
	fine.

2009-02-25  Benjamin Wolsey  <bwy@benjaminwolsey.de>

	* tests/Makefile.am (run-px-tests): Ensure run-px is run from srcdir.

	* tests/run-px: Include modules from srcdir.

2009-02-21  Steven Schubiger  <stsc@member.fsf.org>

	* src/http.c (http_loop): When a document is written to
	standard output, don't claim it has been saved to a file.
	Addresses bug #20520.

2009-02-18  Steven Schubiger  <stsc@members.fsf.org>

	* src/recur.h: Remove the dangling declaration for recursive_cleanup().

2009-02-01  Gerardo E. Gidoni  <gerel@gnu.org>

	* src/main.c, recur.c, recur.h, res.c, retr.c, retr.h: restructured code to
	avoid multiple 'url_parse' calls.

2009-01-23  Steven Schubiger  <stsc@members.fsf.org>

	* util/freeopts, util/rmold.pl, util/trunc.c: Remove
	unnecessary whitespace.

2008-12-04  Micah Cowan  <micah@cowan.name> (not copyrightable)

	* tests/run-px, Test-idn-robots.px: Added test for robots-file
	downloads.

	* tests/Test-idn-cmd.px, Test-idn-meta.px, Test-idn-headers.px:
	Fix test names.

2008-11-27  Saint Xavier  <wget@sxav.eu>

	* src/http.c (gethttp): Move authentication code before filename
	allocation avoiding fallbacking on default filename because
	"Content-Disposition" header wasn't present before authentcation
	has been completed. Fixes bug #24862.

2008-11-26  Micah Cowan  <micah@cowan.name>  (not copyrightable)

	* tests/Test-ftp-iri-disabled.px, Test-ftp-iri-fallback.px,
	Test-ftp-iri.px, Test-idn-cmd.px, Test-idn-headers.px,
	Test-idn-meta.px, Test-iri-disabled.px,
	Test-iri-forced-remote.px, Test-iri-list.px, Test-iri.px: More
	module-scope warnings.

2008-11-25  Steven Schubiger  <stsc@members.fsf.org>

	* tests/WgetTest.pm.in: Remove the magic interpreter line;
	replace -w with lexical warnings.

2008-11-16  Steven Schubiger  <stsc@members.fsf.org>

	* src/main.c: Declare and initialize the numurls counter.

	* src/ftp.c, http.c: Make the counter visible here and use it.

	* src/options.h: Remove old declaration from options struct.

2008-11-15  Steven Schubiger  <stsc@members.fsf.org>

	* src/init.c (defaults): Set default waitretry value.

2008-11-15  Steven Schubiger  <stsc@members.fsf.org>

	* doc/sample.wgetrc: Comment the waitretry "default" value,
	because there is a global one now.

	* doc/wget.texi (Download Options): Mention the global
	default value.

2008-11-14  Steven Schubiger  <stsc@members.fsf.org>

	* src/main.c (format_and_print_line): Use a custom format
	string for printing leading spaces.

2008-11-13  Steven Schubiger  <stsc@members.fsf.org>

	* tests/FTPServer.pm, FTPTest.pm, HTTPServer.pm, HTTPTest.pm,
	WgetTest.pm.in: Clean up leftover whitespace.

2008-11-13  Micah Cowan  <micah@cowan.name>

	* src/http.c (gethttp): Don't do anything when content-length >= our
	requested range.

2008-11-12  Steven Schubiger  <stsc@members.fsf.org>

	* tests/Test-auth-basic.px, Test-auth-no-challenge.px,
	Test-auth-no-challenge-url.px, Test-c-full.px,
	Test-c-partial.px, Test-c.px, Test-c-shorter.px,
	Test-E-k-K.px, Test-E-k.px, Test-ftp.px,
	Test-HTTP-Content-Disposition-1.px,
	Test-HTTP-Content-Disposition-2.px,
	Test-HTTP-Content-Disposition.px, Test-N-current.px,
	Test-N-HTTP-Content-Disposition.px,
	Test-N--no-content-disposition.px,
	Test-N--no-content-disposition-trivial.px,
	Test-N-no-info.px, Test--no-content-disposition.px,
	Test--no-content-disposition-trivial.px, Test-N-old.px,
	Test-nonexisting-quiet.px, Test-noop.px, Test-np.px,
	Test-N.px, Test-N-smaller.px,
	Test-O-HTTP-Content-Disposition.px, Test-O-nc.px,
	Test-O--no-content-disposition.px,
	Test-O--no-content-disposition-trivial.px,
	Test-O-nonexisting.px, Test-O.px,
	Test-proxy-auth-basic.px, Test-Restrict-Lowercase.px,
	Test-Restrict-Uppercase.px,
	Test--spider-fail.pxm, Test--spider.px,
	Test--spider-r-HTTP-Content-Disposition.px,
	Test--spider-r--no-content-disposition.px,
	Test--spider-r--no-content-disposition-trivial.px,
	Test--spider-r.px: Enforce lexically scoped warnings.

	* tests/Test-proxied-https-auth.px, run-px: Place use strict
	before use warnings.

2008-11-12  Steven Schubiger  <stsc@members.fsf.org>

	* tests/FTPServer.pm, FTPTest.pm, HTTPServer.pm, HTTPTest.pm:
	Remove the magic interpreter line, because it cannot be
	used fully. Substitute -w with use warnings.

2008-11-12  Steven Schubiger  <stsc@members.fsf.org>

	* src/main.c (print_version): Hand the relevant
	xstrdup/xfree calls back to format_and_print_line().

2008-11-12  Micah Cowan  <micah@cowan.name>

	* src/ftp-ls.c (ftp_index): HTML-escape dir name in title, h1, a:href.

2008-11-12  Alexander Belopolsky  <alexander.belopolsky@gmail.com>

	* src/url.c, url.h (url_escape_unsafe_and_reserved): Added.

	* src/ftp-ls.c (ftp_index): URL-escape, rather than HTML-escape, the
	filename appearing in the link.

2008-11-11  Steven Schubiger  <stsc@members.fsf.org>

	* src/main.c (format_and_print_line): Move both the memory
	allocating and freeing bits upwards to print_version().

2008-11-11  Micah Cowan  <micah@cowan.name>

	* tests/HTTPServer.pm (handle_auth): Allow testing of
	--auth-no-challenge.

	* tests/Test-auth-no-challenge.px, Test-auth-no-challenge-url.px:
	Added.

	* tests/run-px: Add Test-auth-no-challenge.px,
	Test-auth-no-challenge-url.px.

2008-11-10  Saint Xavier  <wget@sxav.eu>

	* src/http.c: Make --auth-no-challenge works with user:pass@ in URLs.

2008-11-10  Micah Cowan  <micah@cowan.name>

	* doc/Makefile.am (EXTRA_DIST): Removed no-longer-present
	README.maint (shouldn't have been there in the first place).

	* doc/wget.texi (Mailing Lists): Added information aboug Gmane portal,
	added subsection headings.

	Update node pointers.

2008-11-10  Micah Cowan  <micah@cowan.name>

	* MAILING-LIST: Mention Gmane, introduce subsections.

2008-11-07  Steven Schubiger  <stsc@members.fsf.org>

	* tests/run-px: Use some colors for the summary part of the test
	output to strengthen the distinction between a successful
	or failing run.

2008-11-06  Steven Schubiger  <stsc@members.fsf.org>

	* tests/run-px: When executing test scripts, invoke them with the
	current perl executable name as determined by env.

2008-11-06  Micah Cowan  <micah@cowan.name>

	* tests/run-px: Use strict (thanks Steven Schubiger!).

2008-11-05  Micah Cowan  <micah@cowan.name>

	* src/ftp.c (print_length): Should print humanized "size remaining"
	only when it's at least 1k.

2008-11-05  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Move --no-http-keep-alive from FTP Options to HTTP
	Options.
	(Mailing List): Mention moderation for unsubscribed posts, and
	archive location.

2008-11-05  Micah Cowan  <micah@cowan.name>

	* MAILING-LIST: Mention moderation for unsubscribed posts, and
	archive location.

2008-11-04  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi, fdl.texi: Updated to FDL version 1.3.

2008-10-31  Micah Cowan  <micah@cowan.name>

	* src/main.c (print_version): Add information about the mailing list.

2008-10-31  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Mailing List): Update info to reflect change to
	bug-wget@gnu.org.

2008-10-31  Micah Cowan  <micah@cowan.name>

	* MAILING-LIST: Update information.

	* NEWS: Add mention of mailing list move.

2008-10-31  Alexander Drozdov  <dzal_mail@mtu-net.ru>

	* src/retr.c (fd_read_hunk): Make assert deal with maxsize == 0.

	* src/ftp-ls.c (clean_line): Prevent underflow on empty lines.

2008-10-26  Gisle Vanem  <gvanem@broadpark.no>

	* src/main.c (format_and_print_line): Put variables on top of
	blocks (not all compilers are C99). Add an extra '\n' if
	SYSTEM_WGETRC isn't defined and printed.

2008-09-30  Steven Schubiger  <stsc@members.fsf.org>

	* doc/wget.texi (Wgetrc Commands): Add default_page, save_headers,
	spider and user_agent to the list of recognized commands.

2008-09-10  Michael Kessler  <kessler.michael@aon.at>

	* doc/wget.texi (Robot Exclusion): Fixed typo "downloads" ->
	"download"

2008-09-09  Micah Cowan  <micah@cowan.name>

	* tests/Test-idn-cmd.px: Added.

	* tests/run-px: Added Test-idn-cmd.px.

2008-09-09  Micah Cowan  <micah@cowan.name>

	* src/init.c (home_dir): Save the calculated value for home,
	to avoid duplicated work on repeated calls.
	(wgetrc_file_name) [WINDOWS]: Define and initialize home var.

	* src/build_info.c, main.c: Remove unnecessary extern vars
	system_wgetrc and locale_dir.

	* src/main.c: Define program_name for lib/error.c.

2008-09-09  Gisle Vanem  <gvanem@broadpark.no>

	* src/url.c (url_error): Use aprintf, not asprintf.

2008-09-02  Gisle Vanem  <gvanem@broadpark.no>

	* src/mswindows.h: Must ensure <stdio.h> is included before
	we redefine ?vsnprintf().

2008-08-28  Micah Cowan  <micah@cowan.name>

	* tests/HTTPServer.pm (run): Allow distinguishing between hostnames,
	when used as a proxy.

	* tests/Test-idn-headers.px, Test-idn-meta.px: Added.

	* tests/run-px: Added Test-idn-headers.px, Test-idn-meta.px.

	* tests/Test-proxy-auth-basic.px: Use the full URL, rather than just the
	path (made necessary by the accompanying change to HTTPServer.pm).

2008-08-14  Xavier Saint <wget@sxav.eu>

	* tests/Test-iri-list.px : Fetch files from a remote list.

2008-08-08  Steven Schubiger  <stsc@members.fsf.org>

	* src/main.c, utils.h: Removed some dead conditional DEBUG_MALLOC code.

2008-08-03  Xavier Saint <wget@sxav.eu>

	* tests/Test-iri.px : HTTP recursive fetch for testing IRI support and
	fallback.

	* tests/Test-iri-disabled.px : Same file structure as Test-iri.px but with
	IRI support disabled

	* tests/Test-iri-forced-remote.px : There's a difference between ISO-8859-1
	and ISO-8859-15 for character 0xA4 (respectively currency sign and
	euro sign). So with a forced ISO-8859-1 remote encoding, wget should
	see 0xA4 as a currency sign and transcode it correctly in UTF-8 instead
	of using the ISO-8859-15 given by the server.

	* tests/Test-ftp-iri.px : Give a file to fetch via FTP in a specific locale
	and expect wget to fetch the file UTF-8 encoded.

	* tests/Test-ftp-iri-fallback.px : Same as above but wget should fallback on
	locale encoding to fetch the file.

	* tests/Test-ftp-iri.px : Same as Test-ftp-iri.px but with IRI support
	disabled. The UTF-8 encoded file should not be retrieved.

2008-08-03  Xavier Saint  <wget@sxav.eu>

	* doc/wget.texi : Add option descriptions for the three new
	options --iri, --locale and --remote-encoding related to
	IRI support.

	* doc/sample.wgetrc : Add commented lines for the three new
	command iri, locale and encoding related to IRI support.

2008-08-03  Steven Schubiger  <stsc@members.fsf.org>

	* src/url.c, url.h (url_error): Better messages for unsupported
	schemes, especially https.

	* src/html-url.c, recur.c, retr.c: Adjust to new url_error
	invocation, and free result.

2008-08-03  Micah Cowan  <micah@cowan.name>

	* src/main.c (print_help): Added --default-page.

2008-08-03  Micah Cowan  <micah@cowan.name>

	* src/build_info.c, css-url.c: #include wget.h, not config.h.

2008-08-03  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Don't set UPDATED; already set by version.texi.
	(HTTP Options): Add --default-page option.

2008-08-01  Joao Ferreira  <joao@joaoff.com>

	* src/init.c, main.c, options.h, url.c: Added option --default-page
	to support alternative default names for index.html

2008-08-01  Joao Ferreira  <joao@joaoff.com>

	* NEWS: Added option --default-page to support alternative
	default names for index.html

2008-07-17  Steven Schubiger  <stsc@members.fsf.org>

	* src/retr.c (retrieve_from_file): When given an URL as input file,
	use it as baseref if none was specified and treat the input file
	as HTML if its content type is text/html.

	* src/init.c (cleanup): Free the memory associated with the base
	option (when DEBUG_MALLOC is defined).

2008-07-17  Steven Schubiger  <stsc@members.fsf.org>

	* doc/wget.texi (Logging and Input File Options): Document
	for --input-file and according remote input file URLs, the
	implicit enforcement of treating a document as HTML and
	the possible baseref assumption.

2008-07-02  Xavier Saint  <wget@sxav.eu>

	* src/iri.c, iri.h  : New function idn_decode() to decode ASCII
	encoded hostname to the locale.

	* src/host.c : Show hostname to be resolved both in locale and
	ASCII encoded.

2008-06-30  Micah Cowan  <micah@cowan.name>

	* NEWS: Entries for 1.11.4.

	* AUTHORS: Added Steven Schubiger.

2008-06-29  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <Contributors>: Added Joao Ferreira, Mike Frysinger,
	Alain, Guibert, Madhusudan Hosaagrahara, Jim Paris, Kenny
	Parnell, Benno Schulenberg, and Pranab Shenoy. Added Steven
	Schubiger to the "Special Thanks" section.

2008-06-28  Steven Schubiger  <stsc@members.fsf.org>

	* src/retr.c (retrieve_from_file): Allow for reading the links from
	an external file (HTTP/FTP).

2008-06-26  Xavier Saint  <wget@sxav.eu>

	* src/iri.c, iri.h : New functions locale_to_utf8() and
	idn_encode() adding basic capabilities of IRI/IDN.

	* src/url.c : Convert URLs from locale to UTF-8 allowing a basic
	support of IRI/IDN

2008-06-26  Xavier Saint  <wget@sxav.eu>

	* configure.ac : IRIs support required libiconv, check it.

2008-06-25  Steven Schubiger  <stsc@members.fsf.org>

	* src/ftp.c (getftp): When spidering a FTP URL, emit a diagnostic
	message if the remote file exists.

2008-06-24  Steven Schubiger  <stsc@members.fsf.org>

	* src/http.c (http_loop): Replace escnonprint() occurence with
	a quotearg_style() call.

2008-06-24  Micah Cowan  <micah@cowan.name>

	* src/ftp-ls.c (ftp_index): Don't assume time_t* is compatible with
	long*. Fixes crash on Windows, and probably other systems.

2008-06-22  Steven Schubiger  <stsc@members.fsf.org>

	* src/http.c: Explicitly initialize and deallocate the message
	string used by the -nv --spider functionality.

2008-06-22  Steven Schubiger  <schubiger@gmail.com>

	* src/http.c: Make -nv --spider include the file's name when it
	exists.

2008-06-22  Micah Cowan  <micah@cowan.name>

	* tests/Test-proxied-https-auth.px: Shift exit code so it falls in the
	lower bits, and actually fails when it should. Use dynamic port,
	instead of static port. Only run the test if our Wget was built
	with HTTPS support.

	* tests/certs/server-cert.pem, certs/server-key.pem: Apparently failed
	to add these from 1.11.x repo. Fixed.

2008-06-22  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am (version.c): Fixed version string invocation so it
	once again can't result in unterminated strings, made all the
	string vars pointers-to-const, and moved line lengths
	below 80 (in Makefile.am, not in version.c).

2008-06-19  Xavier Saint  <wget@sxav.eu>

	* src/iri.c, iri.h : New function check_encoding_name() as
	a preliminary encoding name check.

	* src/main.c, iri.c : Make use of check_encoding_name().

2008-06-19  Xavier Saint  <wget@sxav.eu>

	* src/iri.c, iri.h : Add a new function find_locale() to find
	out the local system encoding.

	* src/main.c : Make use of find_locale().

2008-06-19  Xavier Saint  <wget@sxav.eu>

	* src/iri.c : Include missing stringprep.h file and add a
	cast.

	* src/init.c : set a default initial value for opt.enable_iri,
	opt.locale and opt.encoding_remote.

2008-06-19  Xavier Saint  <wget@sxav.eu>

	* src/html-url.c : Add "content-type" meta tag parsing for
	retrieving page encoding.

	* src/iri.h : Make no-op version of parse_charset() return
	NULL.

2008-06-16  Micah Cowan  <micah@cowan.name>

	* src/http.c (http_loop): When hstat.len is higher than the
	successfully completed content's length, but it's because we
	_set_ it that way, don't abort.

2008-06-14  Xavier Saint  <wget@sxav.eu>

	* src/iri.c, iri.h : New files.

	* src/Makefile.am : Add files iri.h and conditional iri.c.

	* src/build_info.c : Add compiled feature "iri".

	* src/http.c : include iri.h and parse charset from Content-Type
	header.

	* src/init.c, main.c, options.h : if an options isn't supported
	at compiled time, don't get rid off it and show a dummy
	message instead if they are used.

2008-06-14  Xavier Saint  <wget@sxav.eu>

	* configure.ac: Add support for IRIs

2008-06-13  Micah Cowan  <micah@cowan.name>

	* src/build_info.c: ENABLE_NTLM, not HAVE_NTLM; distinguish OpenSSL
	from "ssl".

2008-06-13  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Mailing List): The wget-notify mailing list no longer
	receives commit notifications from the source repository.
	(Internet Relay Chat): Activity isn't quite so low any more,
	remove notice to that effect.

2008-06-13  Madhusudan Hosaagrahara <com.gmail.hrmadhu>

	* src/Makefile.am, main.c, init.c, init.h, build_info.c: Adds build
	information to the --version command line option. Fixes bug
	#20636.

2008-06-12  Micah Cowan  <micah@cowan.name>

	* tests/FTPServer.pm, FTPTest.pm, HTTPServer.pm, HTTPTest.pm,
	Test--no-content-disposition-trivial.px,
	Test--no-content-disposition.px, Test--spider-fail.px,
	Test--spider-r--no-content-disposition-trivial.px,
	Test--spider-r--no-content-disposition.px,
	Test--spider-r-HTTP-Content-Disposition.px, Test--spider-r.px,
	Test--spider.px, Test-E-k-K.px, Test-E-k.px,
	Test-HTTP-Content-Disposition-1.px,
	Test-HTTP-Content-Disposition-2.px,
	Test-HTTP-Content-Disposition.px,
	Test-N--no-content-disposition-trivial.px,
	Test-N--no-content-disposition.px,
	Test-N-HTTP-Content-Disposition.px, Test-N-current.px,
	Test-N-no-info.px, Test-N-old.px, Test-N-smaller.px, Test-N.px,
	Test-O--no-content-disposition-trivial.px,
	Test-O--no-content-disposition.px,
	Test-O-HTTP-Content-Disposition.px, Test-O-nonexisting.px,
	Test-O.px, Test-Restrict-Lowercase.px,
	Test-Restrict-Uppercase.px, Test-auth-basic.px, Test-c-full.px,
	Test-c-partial.px, Test-c.px, Test-ftp.px,
	Test-nonexisting-quiet.px, Test-noop.px, Test-np.px,
	Test-proxied-https-auth.px, Test-proxy-auth-basic.px,
	WgetTest.pm.in: Use whatever ports are available, rather than
	hard-coded ones.

	* tests/run-px: More summary info, explicit exit code.

	* tests/Makefile.am: Reinstate "run-px-tests" as a dependency for the
	"check" target.

	* tests/WgetTest.pm.in: Draw more attention to the fact that
	WgetTest.pm is a generated file.

	* tests/Test-proxied-https-auth.px: Better cleanup, so next test can
	open the port.

2008-06-01  Micah Cowan  <micah@cowan.name>

	* src/main.c [WINDOWS]: Reopen stdout in binary mode, when -O - is
	given.

2008-05-31 Micah Cowan  <micah@cowan.name>

	* src/html-url.c, http.c: Avoid casts in a couple spots.

2008-05-31  Micah Cowan  <micah@cowan.name>

	* tests/Test-N-current.px: Ensure we catch failures.

	* tests/Test-N-old.px: Make it test only the timestamp, and not the
	content length in addition.

	* tests/Test-N-smaller.px, Test-N-no-info.px: added.

	* tests/Test-c-partial.px: Improve checking that the file was
	partially retrieved, rather than overwritten.

	* tests/run-px: Added Test-N-smaller.px, Test-N-no-info.px.

	* tests/HTTPServer.pm: Return 416 for fully-retrieved content, rather
	than 206 with a zero content-length.

2008-05-30 Henri Häkkinen  <henux@users.sourceforge.net>

	* src/cookies.c, ftp-basic.c, hash.c, html-url.c, http-ntlm.c, http.c,
	init.c, log.c, main.c, progress.c, ptimer.c, spider.c, url.c,
	utils.c: Minor changes to silence warnings when using -Wall.

2008-05-29  Micah Cowan  <micah@cowan.name>

	* po/*.po: Updated from TP (the 1.11.3 set).

	* po/POTFILES.in: Added some more files from lib/, remove
	src/xmalloc.c.

	* po/quot.sed, po/boldquot.sed: Automatic handling of quotearg's `
	and '.

2008-05-26  Steven Schubiger  <schubiger@gmail.com>

	* src/ftp.c (getftp): Replace last remaining invocation of escnonprint
	with gnulib quote.

2008-05-23  Micah Cowan  <micah@cowan.name>

	* tests/Test--spider.px: Make test expect 0 return code.

2008-05-22  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am (run-px-tests): Replaced ugly list of tests with
	run-px Perl script to manage running them.

	* tests/run-px: Added.

	* tests/FTPServer.pm (run): Avoid re-forking. Fixes bug #20458.

2008-05-19  Micah Cowan  <micah@cowan.name>

	* src/main.c (main): Password prompt should be done only once (not
	once per argument), and should be done prior to the background
	fork.

2008-05-17  Steven Schubiger  <stsc@members.fsf.org>

	* doc/wget.texi (Download Options): Change documentation to reflect
	the new default value for --prefer-family.
	(Wgetrc Commands): Same, for prefer_family wgetrc command.

2008-05-17  Steven Schubiger  <schubiger@gmail.com>

	* src/init.c (defaults): Set the preferred IP family to `none' by
	default.

2008-05-17  Micah Cowan  <micah@cowan.name>

	* src/main.c (main): Handle Ctrl-D on command-line.

2008-05-17  Kenny Parnell  <k.parnell@gmail.com>

	(cmd_spec_prefer_family): Initialize prefer_family to prefer_none.

2008-05-15  Steven Schubiger  <schubiger@gmail.com>

	* src/ftp.c (getftp): Verify that the file actually exists in FTP, by
	checking it against the listing.

2008-05-15  Micah Cowan  <micah@cowan.name>

	* src/main.c (prompt_for_password): Use the quote module.

2008-05-15  Micah Cowan  <micah@cowan.name>

	* NEWS: Entry for --ask-password.

2008-05-14  Micah Cowan  <micah@cowan.name>

	* src/ftp.c (ftp_retrieve_list): Symlinks and other filenames
	should be fully quoted.

2008-05-14  Joao Ferreira  <joao@joaoff.com>

	* src/main.c, src/http.c, src/ftp.c: -nc is now working in
	conjunction with '-O file'.

2008-05-12  Micah Cowan  <micah@cowan.name>

	* src/main.c (main): Downgrade "-N with -O" to a warning, and switch
	it off to avoid confusing messages.

2008-05-12  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Download Options): -N with -O downgraded to a
	warning.

2008-05-12  Micah Cowan  <micah@cowan.name>

	* NEWS: Translations and -N/-O.

2008-04-30  Steven Schubiger  <stsc@members.fsf.org>

	* src/main.c (main): New code that handles prompting for passwords
	when specified explicitly via command-line option (using gnulib's
	getpass-gnu module).
	(main): Include the getpass header.

	* src/init.c: Add "ask-password" to the list of recognized commands.

	* src/options.h: Add an according boolean member to the options
	struct.

	* src/sysdep.h: Comment the defines __EXTENSIONS__ and _GNU_SOURCE
	out, because they're now defined independently by config.h.

2008-04-30  Steven Schubiger  <stsc@members.fsf.org>

	* lib/getdelim.c, lib/getline.c, lib/getpass.c,
	lib/getpass.h, lib/realloc.c, lib/stdio.h,
	lib/stdio.in.h, lib/stdlib.h, lib/stdlib.in.h: Imported
	from gnulib.
	* m4/eoverflow.m4, m4/extensions.m4, m4/getdelim.m4,
	m4/getline.m4, m4/getpass.m4, m4/malloc.m4, m4/realloc.m4,
	m4/stdio_h.m4, m4/stdlib_h.m4: Imported from gnulib.
	* md5/stdint.h: Imported from gnulib.

	* GNUmakefile: Updated from gnulib.
	* lib/Makefile.am, lib/getopt.c, lib/unistd.in.h: Updated
	from gnulib.
	* m4/gnulib-cache.m4, m4/gnulib-common.m4, m4/gnulib-comp.m4,
	m4/include_next.m4, m4/unistd_h.m4: Updated from gnulib.
	* md5/Makefile.am, md5/m4/gnulib-cache.m4, md5/m4/gnulib-common.m4,
	md5/m4/gnulib-comp.m4, md5/m4/include_next.m4, md5/m4/md5.m4,
	md5/m4/stdint.m4, md5/md5.c, md5/md5.h, md5/stdint.in.h,
	md5/wchar.in.h: Updated from gnulib.

2008-04-30  Steven Schubiger  <stsc@members.fsf.org>

	* doc/wget.texi <Download Options>: Document the --ask-password
	option.

2008-04-30  Micah Cowan  <micah@cowan.name>

	* src/progress.c (create_image): Fix glitch where too many spaces are
	printed on lines that don't display the ETA, in multibyte
	locales.

2008-04-30  Micah Cowan  <micah@cowan.name>

	* NEWS: Added documentation for changes made in 1.11.2.

2008-04-27  Rabin Vincent  <rabin@rab.in>

	* src/http.c (http_loop): Fix return for the case where we don't
	download a file because of -nc.

2008-04-27  Micah Cowan  <micah@cowan.name>

	* src/url.c (path_simplify): Go back to allowing leading ".." in
	paths, but only for FTP URLs.
	(test_path_simplify): Add scheme-specificness to tests, adapt for
	mu_run_test.

	* src/test.c (all_tests): Add test_path_simplify.

	* src/main.c (main): Downgrade -r, -p with -O to a warning rather than
	an error; elaborate just a bit more for other -O combination
	cases.

2008-04-27  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi (Download Options) <-O>: Elaborate on why certain
	options make poor combinations with -O.

2008-04-26  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am, Test-proxied-https-auth.px: Added a test for
	accessing password-protected HTTPS URLs through a proxy (via
	CONNECT).

2008-04-26  Micah Cowan  <micah@cowan.name>

	* src/http.c (gethttp): Move proxy CONNECT handling to below the
	retry_with_auth label, to deal with properly reconnecting to
	proxies when we need to authenticate.

2008-04-25  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am: -I foo -> -Ifoo.

2008-04-24  Micah Cowan  <micah@cowan.name>

	* src/main.c: Revised usage description of --convert-links to apply
	to CSS as well as to HTML.

2008-04-24  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Adjusted documentation to account for CSS support;
	added Ted Mielczarek to contributors.

2008-04-24  Micah Cowan  <micah@cowan.name>

	* NEWS: Removed info about move to Automake, Gnulib. Added item
	about the addition of CSS support.

2008-04-23  Micah Cowan  <micah@cowan.name>

	* src/utils.c (test_dir_matches_p): Added a test for the case
	described in issue #20518.

2008-04-22  Ted Mielczarek  <ted.mielczarek@gmail.com>

	* src/css.lex, css-url.c, css-url.h: Added to implement support for
	parsing CSS in Wget.
	* src/convert.c: Convert links in CSS files, too.
	* src/convert.h (convert_options): Added for options link_css_p,
	link_expect_css.
	* src/convert.h: Added prototype for new register_css function.
	* src/html-parse.c: Added support for parsing element content, in
	addition to tag starts and ends.
	* src/html-parse.h (taginfo): Added delimiter fields for element
	content.
	* src/html-url.h: Added.
	* src/html-url.c (append_url): No longer internal-linkage only. Now
	takes position and size as explicit parameters.
	* src/html-url.c: Use new html-url.h header, add support for
	handling of "style" HTML attributes. Mark URIs obtained from
	link tags with rel="stylesheet" with link_expect_css. Adapt
	uses of append_url to supply the newly-added parameters for
	position and size.
	* src/http.c: Add detection for when the content-type is text/css;
	and ensure that such files have the ".css" filename extension,
	when --convert-links is active.
	* src/recur.h: Remove declarations for functions found in
	html-url.c (moved to html-url.h).
	* src/recur.c: Add support for culling links from CSS files, too,
	and tracking for when we're expecting the file to be CSS (even
	when its content type isn't text/css).
	* src/retr.c (retrieve_url): Add registration of CSS files.
	* src/wget.h: Added TEXTCSS to dt flags enum.
	* src/Makefile.am: Added css.lex, css-url.c, css-url.h, html-url.h
	to wget_SOURCES.

2008-04-22  Ted Mielczarek  <ted.mielczarek@gmail.com>

	* configure.ac: Added check for lex.

2008-04-22  Steven Schubiger  <schubiger@gmail.com>

	* src/http.c (print_response_line): Changed to make responses always
	be logged, even in --quiet mode, if --server-response was
	specified. This is to bring http.c's handling of the situation
	in line with ftp.c's.

2008-04-22  Rabin Vincent  <rabin@rab.in>

	* src/ftp.c (ftp_get_listing): Only remove .listing if it has been
	created.

2008-04-22  Pranab Shenoy  <pranab.loosinit.shenoy@gmail.com>

	* src/init.c: Added test_commands_sorted unit test to check is
	commands are sorted.  Fixes bug #21245.

	* src/test.c: Added test_commands_sorted to the test suite.

2008-04-22  Mike Frysinger  <vapier@gentoo.org>

	* src/Makefile.am: Move @LIBS@ after other libraries, for better
	static-linking support. Fixes bug #22143.

2008-04-22  Mike Frysinger  <vapier@gentoo.org>

	* doc/sample.wgetrc: Added prefer_family example. Resolves bug
	#22142.

2008-04-22  Micah Cowan  <micah@cowan.name>

	* ylwrap: Added via automake -ac.

2008-04-22  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am, css.lex, css.l: Renamed css.lex to css.l.
	* src/recur.c (retrieve_tree): Fix typo to allow text/css files to
	be parsed.

2008-04-22  Jim Paris  <jim@jtan.com>

	* src/openssl.c (ssl_init): Enable combined certificate/key in
	single file (apparent regression from ~1.9). Resolves issue
	#22767.

2008-04-22  Alain Guibert  <alguibert+bts@free.fr>

	* src/test.h (mu_run_test): Move declaration before statements, for
	C90 conformance. Fixes bug #22789.

2008-04-16  Steven Schubiger  <schubiger@gmail.com>

	* src/sysdep.h: Comment the defines __EXTENSIONS__ and _GNU_SOURCE
	out, because they're now defined independently by config.h.

2008-04-16  Steven Schubiger  <schubiger@gmail.com>

	* src/ftp.c: Use Gnulib's quote function for printing filenames and
	such.
	* src/connect.c: Likewise.
	* src/convert.c: Likewise.
	* src/cookies.c: Likewise.
	* src/ftp-opie.c: Likewise.
	* src/gnutls.c: Likewise.
	* src/init.c: Likewise.
	* src/log.c: Likewise.
	* src/mswindows.c: Likewise.
	* src/openssl.c: Likewise.
	* src/progress.c: Likewise.
	* src/recur.c: Likewise.
	* src/res.c: Likewise.
	* src/utils.c: Likewise.

2008-04-14  Steven Schubiger  <schubiger@gmail.com>

	* src/http.c: Use Gnulib's quote function for printing filenames and
	such.
	* src/wget.h: #include "quote.h".

2008-04-14  Micah Cowan  <micah@cowan.name>

	* GNUmakefile, lib/Makefile.am, lib/error.c, lib/error.h,
	lib/exitfail.c, lib/exitfail.h, lib/getopt.c, lib/intprops.h,
	lib/quote.c, lib/quote.h, lib/quotearg.c, lib/quotearg.h,
	lib/stdlib.in.h, lib/strerror.c, lib/string.in.h,
	lib/unistd.in.h, lib/wchar.in.h, lib/wctype.in.h,
	lib/xalloc-die.c, lib/xalloc.h, lib/xmalloc.c, m4/error.m4,
	m4/exitfail.m4, m4/extensions.m4, m4/gnulib-cache.m4,
	m4/gnulib-comp.m4, m4/include_next.m4, m4/inline.m4,
	m4/mbrtowc.m4, m4/mbstate_t.m4, m4/quote.m4, m4/quotearg.m4,
	m4/stdlib_h.m4, m4/strerror.m4, m4/string_h.m4, m4/unistd_h.m4,
	m4/wchar.m4, m4/wctype.m4, m4/wint_t.m4, m4/xalloc.m4,
	md5/Makefile.am, md5/m4/gnulib-cache.m4, md5/m4/gnulib-comp.m4,
	md5/m4/include_next.m4, md5/m4/md5.m4, md5/m4/stdint.m4,
	md5/md5.c, md5/md5.h, md5/stdint.in.h, md5/wchar.in.h: Update
	from Gnulib, and add the "quote" module.

2008-04-12  Rabin Vincent  <rabin@rab.in>

	* src/mswindows.c (fake_fork_child): Don't create a logfile for
	--background when --quiet is used, but not --server-response.
	Fixes bug #20917.

	* src/utils.c (fork_to_background): Likewise.

2008-04-12  Micah Cowan  <micah@cowan.name>

	* src/utils.c (aprintf): Minor formatting changes to Alex's code (80-
	column limit, concatenated string literals, avoiding nesting
	levels), and removed invocation of free (since we're aborting
	anyway).

2008-04-11  Micah Cowan  <micah@cowan.name>

	* src/ftp.c (getftp, ftp_loop_internal): Don't append to an existing
	.listing when --continue is used.  Fixes bug #22825. Thanks to
	Rabin Vincent <rabin@rab.in> for pointing the way with a
	suggested fix!

2008-04-11  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <Contributors>: Added Julien Buty, Alexander
	Dergachev, and Rabin Vincent.

2008-04-11  Alexander Dergachev  <cy6erbr4in@gmail.com>

	* src/utils.c (aprintf): Now we are setting limits (1 Mb) for text
	buffer when we use non-C99 vsnprintf.

2008-04-10  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am, Test-proxy-auth-basic.px: Added a test for
	accessing password-protected URLs through a proxy.

2008-04-10  Alexander Dergachev  <cy6erbr4in@gmail.com>

	* src/xmalloc.c, xmalloc.h (memfatal): Now exported; accepts an
	"unknown" value for the attempted allocation size.
	* src/utils.c (aprintf): Now calls memfatal, instead of aborting.

2008-03-24  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <Types of Fields>: Mentioned various caveats in the
	behavior of accept/reject lists, deprecate current
	always-download-HTML feature. Added @noindent to a couple of
	appropriate spots.

2008-03-24  Micah Cowan  <micah@cowan.name>

	* NEWS: Added documentation change re: --no-parents, and various
	caveats on accept/reject lists behavior. Rearranged some items in
	order of priority.

2008-03-20  Micah Cowan  <micah@cowan.name>

	* ABOUT-NLS: Reinstated, but with a message mentioning that
	gettext is not included.
	* Makefile.am: Removed "test" target; "check" should be used
	instead (and "test" was mildly broken, anyway).

2008-03-19  Micah Cowan  <micah@cowan.name>

	* src/utils.c (test_dir_matches_p): More tests related for
	dir_matches_p.

2008-03-17  Micah Cowan  <micah@cowan.name>

	* src/connect.c: Include sys/time.h to support use of the select
	function on older systems.

2008-03-17  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <Directory-Based Limits>: Mention importance of
	trailing slashes to --no-parents.

2008-02-14  Micah Cowan  <micah@cowan.name>

	* ABOUT-NLS: Removed.

2008-02-11  Benno Schulenberg  <bensberg@justemail.net>

	* src/http.c: More accurate and descriptive messages for when a file
	won't be retrieved during spider-mode.

2008-02-10  Micah Cowan  <micah@cowan.name>

	* src/http.c: Added existence_checked member to the http_stat
	struct.
	(gethttp): Mark hs->existence_checked when we've checked whether
	a file-to-download exists; so we don't check it again if the
	connection gets lost (and potentially pick a new "unique" name).
	This fixes bug 22251.
	* src/progress.c (create_image): Add space for an extra column in
	the "eta" portion of the progress bar image; to deal with
	too-long Czech translation.
	* src/main.c, http.c, init.c: Added --auth-no-challenge option, to
	bring back 1.10.2 unsafe auth behavior when needed. This fixes
	bug #22242.

2008-02-10  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <HTTP Options>: Added documentation of
	--auth-no-challenge.

2008-02-10  Micah Cowan  <micah@cowan.name>

	* NEWS: Added note re interrupted files resulting in renames,
	and new --auth-no-challenge option.

2008-02-07  Micah Cowan  <micah@cowan.name>

	* src/progress.c (create_image): Remove assertion on exceeding
	screen width, which given the less-than-robust code there, can
	be broken by a number of factors (such as large file downloads).

2008-02-06  Micah Cowan  <micah@cowan.name>

	* src/progress.c (countcols): Use strlen() when mbtowc or wcwidth
	not available (or not using NLS).
	* src/utils.c: Ensure we use single-byte separators when not doing
	NLS progress-bars.
	* src/wget.h: Determine whether to use NLS for progress-bars, based
	on whether wcwidth and mbtowc are available.

2008-02-06  Micah Cowan  <micah@cowan.name>

	* doc/wget.ṫexi <Overview>: Remove references to no-longer-supported
	socks library.

2008-02-06  Micah Cowan  <micah@cowan.name>

	* configure.ac (AC_CHECK_FUNCS): Added check for mbtowc.
	* NEWS: Added notes regarding fixes for the localized progress
	bar and --no-clobber wasted GET request.
	* po/be.po: Added from the TP.

2008-02-03  Micah Cowan  <micah@cowan.name>

	* src/progress.c (create_image): Use number of characters/columns
	consumed, rather than number of bytes, to determine how much of
	a line we've used. Fixes assertion errors and field alignment
	bugs (#22161, #20481)
	(get_eta, count_cols): Added to support the changes for
	create_image.
	* src/http.c (http_loop): Put no-clobber logic back into http_loop,
	before starting to fetch, for when we're not doing
	content-disposition.

2008-02-03  Micah Cowan  <micah@cowan.name>

	* configure.in: Add checks for wchar.h, wcwidth function (to
	support column-counting in progress.c).
	* NEWS: Added line for 1.11.1.
	* util/README, util/Makefile.am, util/trunc.c: Added a small
	utility program to create files of arbitrary size (useful for
	testing certain situations with --continue).

2008-01-31  Micah Cowan  <micah@cowan.name>

	* util/README, util/dist-wget, util/download-netscape.html,
	util/download.html, util/update_po_files.sh, util/wget.spec:
	Removed (obsolete and/or incomplete).
	* Makefile.am: Removed no-longer-existant util stuff from
	extra_DIST (but added the README).

2008-01-31  Micah Cowan  <micah@cowan.name>

	* src/http.c (gethttp): Don't derive hs->contlen from possibly
	invalid/missing Content-Length; instead, get the appropriate
	value from the Content-Range header values.
	(parse_content_range): Handle '*' instance-length field.

2008-01-31  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Ensure that license info appears in the info
	version of the manual.

2008-01-28  Micah Cowan  <micah@cowan.name>

	* po/en@quot.po, po/en@boldquot.po, po/en_US.po: Updated
	translations for copyright year in --version.
	* po/Rules-quot: Make en@*-update should create wget.pot.
	* configure.ac: Ensure that en_US appears in ALL_LINGUAS exactly
	once.

2008-01-25  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am: Updated copyright year.

2008-01-25  Micah Cowan  <micah@cowan.name>

	* src/main.c: Added notes to translators regarding (C), diacritics
	in names.
	* src/Makefile.am, cmpt.c, connect.c, connect.h, convert.c,
	cookies.c, cookies.h, ftp-basic.c, ftp-ls.c, ftp-opie.c, ftp.c,
	ftp.h, gen-md5.c, gen-md5.h, gnutls.c, hash.c, hash.h, host.c,
	host.h, html-parse.c, html-parse.h, html-url.c, http-ntlm.c,
	http-ntlm.h, http.c, http.h, init.c, init.h, log.c, log.h,
	main.c, mswindows.c, mswindows.h, netrc.c, netrc.h, openssl.c,
	options.h, progress.c, progress.h, ptimer.c, ptimer.h, recur.c,
	recur.h, res.c, res.h, retr.c, retr.h, spider.c, spider.h,
	ssl.h, sysdep.h, test.c, test.h, url.c, url.h, utils.c,
	utils.h, wget.h, xmalloc.c, xmalloc.h: Updated copyright year.

2008-01-25  Micah Cowan  <micah@cowan.name>

	* msdos/config.h: Updated copyright year.

2008-01-25  Micah Cowan  <micah@cowan.name>

	* Makefile.am, NEWS, README, configure.ac, configure.bat,
	m4/wget.m4, po/POTFILES.in, util/Makefile.am, util/dist-wget,
	util/rmold.pl, files: Updated copyright year.

2008-01-25  Micah Cowan  <micah@cowan.name>
	* doc/Makefile.am, wget.texi: Updated copyright year.

2008-01-24  Micah Cowan  <micah@cowan.name>

	* configure.ac: Added en_US LINGUA (generated).
	* po/Rules-quot: Added rule to copy en_US.po from en@quot.po.
	* po/boldquot.sed, po/quot.sed: Translate _all_ apostrophes we
	find, not just the ones used for quotes; and add rules to use
	the copyight symbol, and write Hrvoje's last name properly. ^_^
	* po/en@quot.po, po/en@boldquot.po: Updated by new rules.
	* po/en_US.po: Added.

2008-01-23  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am: Add libmd5 to unit-tests.

2007-12-10  Micah Cowan  <micah@cowan.name>

	* src/main.c: The option is --content-disposition, not
	--no-content-disposition (at the moment).

2007-12-10  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Document the --content-disposition option (and not
	just the .wgetrc setting).

2007-12-10  Micah Cowan  <micah@cowan.name>

	* NEWS: Removed developer-only notices (Autoconf, TODO, PATCHES,
	GNUTLS).

2007-12-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (ftp_retrieve_glob): Print both arguments of fnmatch in
	fnmatch error message.
	(ftp_retrieve_glob): Don't match with fnmatch if we're only
	supposed to get one file.

2007-12-07  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am: Plug in vars to include stuff from
	$(top_srcdir)/md5 when appropriate.

2007-12-07  Micah Cowan  <micah@cowan.name>

	* lib/Makefile.am, lib/c-ctype.c, lib/c-ctype.h, lib/gettext.h,
	lib/stdbool.in.h, lib/unistd.in.h, m4/gnulib-cache.m4,
	m4/gnulib-common.m4, m4/gnulib-comp.m4, m4/unistd_h.m4:
	Updated from gnulib.
	* Makefile.am, configure.ac: Plugged in the md5/ stuff.
	* lib/md5.c, lib/md5.h, lib/stdint.in.h, lib/wchar.in.h,
	m4/longlong.m4, m4/md5.m4, m4/stdint.m4, m4/wchar.m4: Moved to
	md5/.
	* md5/Makefile.am, md5/dummy.c, md5/m4/gnulib-cache.m4,
	md5/m4/gnulib-common.m4, md5/m4/gnulib-comp.m4,
	md5/m4/gnulib-tool.m4, md5/m4/include_next.m4,
	md5/m4/longlong.m4, md5/m4/md5.m4, md5/m4/stdint.m4,
	md5/m4/wchar.m4, md5/md5.c, md5/md5.h, md5/stdint.in.h,
	md5/wchar.in.h: Moved/copied from lib/, m4/; updated from
	gnulib.
	* m4/ulonglong.m4: Removed (via update from gnulib).

2007-12-06  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: "the the" -> "the"

2007-12-05  Micah Cowan  <micah@cowan.name>

	* src/utils.c (subdir_p): Handle the case where d1 is "".
	* src/convert.c (convert_all_links): Don't return without
	deallocating timer.

2007-12-05  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <Wgetrc Commands>: Explicitly mention that
	--content-disposition has known issues.

2007-12-05  Micah Cowan  <micah@cowan.name>

	* NEWS: Reword warnings regarding --content-disposition.

2007-11-28  Micah Cowan <micah@cowan.name>

	* tests/Makefile.am: Updated license exception for OpenSSL, per the
	SFLC.

2007-11-28  Micah Cowan <micah@cowan.name>

	* msdos/config.h: Updated license exception for OpenSSL, per the SFLC.

2007-11-28  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am, cmpt.c, connect.c, connect.h, convert.c,
	convert.h, cookies.c, cookies.h, ftp-basic.c, ftp-ls.c,
	ftp-opie.c, ftp.c, ftp.h, gen-md5.c, gen-md5.h, gnutls.c,
	hash.c, hash.h, host.c, host.h, html-parse.c, html-parse.h,
	html-url.c, http-ntlm.c, http-ntlm.h, http.c, http.h, init.c,
	init.h, log.c, log.h, main.c, mswindows.c, mswindows.h,
	netrc.c, netrc.h, openssl.c, options.h, progress.c, progress.h,
	ptimer.c, ptimer.h, recur.c, recur.h, res.c, res.h, retr.c,
	retr.h, safe-ctype.c, safe-ctype.h, spider.c, spider.h, ssl.h,
	sysdep.h, test.c, test.h, url.c, url.h, utils.c, utils.h,
	wget.h, xmalloc.c, xmalloc.h: Updated license exception for
	OpenSSL, per the SFLC.

2007-11-28  Micah Cowan  <micah@cowan.name>

	* Makefile.am, README, autogen.sh, configure.bat, configure.in,
	m4/wget.m4, util/Makefile.am, util/dist-wget: Updated license
	exception for OpenSSL, per the SFLC.

2007-10-30  Micah Cowan  <micah@cowan.name>

	* src/main.c (main): Declare argv parameter as char **argv, rather
	than char *const *argv. This fixes usage of getopt_long,
	regardless of whether getopt_long has a constified argv or not.

2007-10-23  Micah Cowan  <micah@schmendrick>

	* lib/stdbool.in.h, lib/stdint.in.h: gnulib-tool --update.
	Includes fix for broken stdbool.h on Tru64.

2007-10-22  Micah Cowan  <micah@cowan.name>

	* po/*.po: Refresh from TP and update-po.
	* lib/Makefile.am, m4/gnulib-cache.m4, m4/longlong.m4,
	m4/ulonglong.m4, maint.mk:  gnulib-tool --update. Includes fix
	for maint.mk with old versions of gzip.

2007-10-22  Gisle Vanem  <gvanem@broadpark.no>

	* src/mswindows.c: Move INHIBIT_WRAP macro definition up with wget.h
	inclusion.

2007-10-18  Steven Schweda  <sms@antinode.org>

	* src/sysdep.h: #include <stdint.h> as well as <inttypes.h>, to work
	around a glitch on Tru64 systems.

2007-10-18  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.am: Add dependency for unit_tests on libgnu.a.

2007-10-18  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am: version.c should not be distributed. Removed
	config-post.h. Add version.c dependency and gnulib include path
	for libunittest.a.
	* src/sysdep.h: Got contents of config-post.h
	* src/config-post.h: Removed.
	* src/wget.h: #include "config.h".
	* src/alloca.c, cmpt.c, connect.c, convert.c, cookies.c,
	ftp-basic.c, ftp-ls.c, ftp-opie.c, ftp.c, gen-md5.c, gnutls.c,
	hash.c, host.c, html-parse.c, html-url.c, http-ntlm.c, http.c,
	init.c, log.c, main.c, mswindows.c, netrc.c, openssl.c,
	progress.c, ptimer.c, recur.c, res.c, retr.c, spider.c, url.c,
	utils.c, xmalloc.c: Use wget.h at very top, and instead of
	config.h.

2007-10-18  Micah Cowan  <micah@cowan.name>

	* po/POTFILES.in: Removed no-longer-existing or generated files.
	* autogen.sh: Reinstated, in case we have to do something at
	some point other than autoreconf.
	* Makefile.am: Put autogen.sh back in EXTRA_DIST. Just in case
	someone needs to rebuild configure.
	* configure.ac: Removed config-post.h inclusion from bottom of
	generated config.h.

2007-10-16  Micah Cowan  <micah@cowan.name>

	* README: Draw attention to wiki:PatchGuidelines.

2007-10-15  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am: Remove intermediary hg-id file generation, make
	version.c-generation more portable.

2007-10-15  Gisle Vanem  <gvanem@broadpark.no>

	* msdos/config.h: Added some HAVE_* for djgpp 2.04 and Watcom 1.7+.

	* msdos/Makefile.DJ: rewritten for including some files from ../lib.

	* msdos/Makefile.WC: Ditto. Handling source-files out-of current
	directory makes compliation a bit more painfull. AFAICS, one
	must use explicit rules.

2007-10-14  Micah Cowan  <micah@cowan.name>

	* src/cmpt.c, cookies.c, ftp-basic.c, ftp-ls.c, ftp.c, hash.c,
	host.c, html-parse.c, html-url.c, http-ntlm.c, http.c, init.c,
	log.c, main.c, netrc.c, openssl.c, res.c, url.c, utils.c,
	wget.h: Replace uses of ISSPACE, etc with c_isspace, etc.
	* src/gnu-md5.c, gnu-md5.h: Removed, in deference to gnulib.
	* src/Makefile.am: Removed gnu-md5.h from wget_SOURCES.
	* src/gen-md5.c: Changed #inclusion of gnu-md5.h to md5.h (gnulib's).
	* src/recur.c (download_child_p): Print error if unlink of
	robots.txt fails.
	* src/main.c (main): --spider or --delete-after now implies
	--no-directories (thanks, Josh Williams).

2007-10-14  Micah Cowan  <micah@cowan.name>

	* configure.ac: Let gnulib handle builtin MD5 functionality.
	* NEWS: Mention gnulib.

2007-10-14  Joshua David Williams  <yurimxpxman@gmail.com>

	* src/recur.c (download_child_p): Remove robots.txt if
	--delete-after or --spider is on.

2007-10-13  Micah Cowan  <micah@cowan.name>

	* src/Makefile.am: Make version.c depend on Wget dependencies (source
	files, plus such things as LIBOBJS so we get things like
	http-ntlm.c). Removed getopt.[ch], as we're now using gnulib for
	these.

2007-10-13  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <Mailing Lists>: Replaced mention of no-longer
	included PATCHES file with link to relevant Wgiki page.
	* doc/wget.texi <Internet Relay Chat>: Added new section.

2007-10-13  Micah Cowan  <micah@cowan.name>

	* GNUMakefile, maint.mk: Added as part of the gnulib-ization.
	* Makefile.am: gnulib-ized.
	* configure.ac: gnulib-ized. Removed built-in getopt checks.

2007-10-12  Micah Cowan  <micah@cowan.name>

	* PATCHES: Removed.
	* NEWS: Updated info about source repositories, removal of
	PATCHES file.

2007-10-10  Micah Cowan  <micah@cowan.name>

	* src/http-ntlm.c: Include openssl/opensslv.h explicitly, instead of
	hoping it'll be included by accident in openssl/des.h.

2007-10-10  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <Wgetrc Commands>: Fixed "doewnloads" typo.

2007-10-09  gettextize  <bug-gnu-gettext@gnu.org>

	* m4/gettext.m4: New file, from gettext-0.16.1.
	* m4/iconv.m4: New file, from gettext-0.16.1.
	* m4/lib-ld.m4: Upgrade to gettext-0.16.1.
	* m4/lib-link.m4: Upgrade to gettext-0.16.1.
	* m4/lib-prefix.m4: Upgrade to gettext-0.16.1.
	* m4/nls.m4: New file, from gettext-0.16.1.
	* m4/po.m4: New file, from gettext-0.16.1.
	* m4/progtest.m4: New file, from gettext-0.16.1.
	* po/Makefile.in.in: Upgrade to gettext-0.16.1.
	* po/Rules-quot: New file, from gettext-0.16.1.
	* po/boldquot.sed: New file, from gettext-0.16.1.
	* po/en@boldquot.header: New file, from gettext-0.16.1.
	* po/en@quot.header: New file, from gettext-0.16.1.
	* po/insert-header.sin: New file, from gettext-0.16.1.
	* po/quot.sed: New file, from gettext-0.16.1.
	* po/remove-potcdate.sin: New file, from gettext-0.16.1.

2007-10-09  Micah Cowan  <micah@cowan.name>

	* src/gettext.h: Imported from /usr/share/gettext, fuller handling
	of --disable-nls.
	* src/wget.h: Remove logic for handling lack of NLS (now in
	gettext.h).
	* src/main.c: Use gettext's ENABLE_NLS rather than HAVE_NLS.
	* src/Makefile.am: added @LIBINTL@ to LIBS (though it probably
	belongs in LDADD, along with everything else currently assigned
	to LIBS).

2007-10-09  Micah Cowan  <micah@cowan.name>

	* configure.in: Renamed to configure.ac
	* configure.ac: Renamed from configure.in. Added invocations of
	AM_GNU_GETTEXT, etc. Added en@quot and en@boldquot pseudo-LINGUA
	support.
	* ABOUT-NLS: Added back in (required by autoreconf :\).
	* Makefile.am: Added ABOUT-NLS and msdos/Makefile.WC to EXTRA_DIST.
	* m4/wget.m4: Removed no-longer-used NLS stuff.
	* Makefile.in.in: Restore previous policy of not updating .po's
	unless explicitly asked (via update-po).

2007-10-09  Gisle Vanem  <gvanem@broadpark.no>

	* src/mswindows.c: 'argc' and 'argv' in 'windows_main()' are no longer
	needed.  Hence simply the prototype. Free 'exec_name' at exit.

2007-10-08  Micah Cowan  <micah@cowan.name>

	* src/http.c (http_loop): Add send_head_first conditional back
	around code that needs it, but not around the last-modified
	header-parsing stuff this time. Removed no-longer-useful (was it
	ever?) restart_loop boolean, continuing unconditionally at end
	of send_head_first conditional block (if we haven't jumped out).

2007-10-08  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Credit to Ralf Wildenhues for automakifying patches.

2007-10-08  Micah Cowan  <micah@cowan.name>

	* AUTHORS: Credit to Ralf Wildenhues for automakifying patches.

2007-10-05  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

	* tests/WgetTest.pm.in: wget is built in the build tree.  Use an
	absolute path to the binary.
	* tests/Makefile.in: Removed, replaced by Makefile.am.
	* tests/Makefile.am: Converted from Makefile.in.

2007-10-05  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

	* po/Makefile.in.in: Since `distdir' is used now, adjust
	DISTFILES to the missing ChangeLog file.
	Add trivial targets ps, pdf, html.
	* Makefile.in: Removed, replaced by Makefile.am.
	* Makefile.am: Converted from Makefile.in.
	* util/Makefile.in: Removed, replaced by Makefile.am.
	* util/Makefile.am: Converted from Makefile.in.
	* configure.in: Adjust for automake support.

2007-10-05  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

	* doc/Makefile.in: Removed, replaced by Makefile.am.
	* doc/Makefile.am: Converted from Makefile.in.

2007-10-05  Micah Cowan  <micah@cowan.name>

	* config.guess, config.sub, install-sh: Update from versions
	found in /usr/share/automake/.
	* autogen.sh: Removed, in favor of just running autoreconf.

2007-10-04  Micah Cowan  <micah@cowan.name>

	* src/http.c (http_loop): We've got_name if content_disposition
	support isn't on; make sure we continue properly in that case,
	even though we're not sending HEAD.
	* src/Makefile.in: Removed, replaced by Makefile.am.
	* src/Makefile.am: Converted from Makefile.in.

2007-10-03  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <Wgetrc Commands>: Cleaned up alphabetization,
	more consistent use of underscores. Added a description of the
	content_disposition wgetrc command.

2007-10-03  Micah Cowan  <micah@cowan.name>

	* NEWS: Note missing functionality from GnuTLS support. Call out
	attention to content_disposition's experimental status.

2007-10-02  Stephen Gildea  <stepheng+wget@gildea.com>

	* src/connect.c (connect_to_host): Warn about host lookup failures.

2007-10-02  Micah Cowan  <micah@cowan.name>

	* src/ftp.c (getftp, ftp_loop_internal), http.c (http_loop), main
	(main): Use datetime_str instead of time_str, for those who have
	potentially long-running sessions. Based on suggestions by Saso
	Tomat <miskox@hotmail.com> and Steven M. Schweda
	<sms@antinode.org>.
	* src/http.c (gethttp): Warn about host lookup failures. Adjusted
	from Stephen Gildea's patch.

2007-10-02  Gisle Vanem  <gvanem@broadpark.no>

	* src/ftp.c: Use "_listing" for MSDOS (".listing" is illegal).

	* src/url.c: Update comment for 'filechr_not_windows'.

	* src/utils.c: Include <process.h> for 'getpid()' on Watcom.

2007-10-02  Gisle Vanem  <gvanem@broadpark.no>

	* msdos/config.h: Removed unused defines, added needed 'HAVE_*' defines.

	* msdos/Makefile.DJ: rewritten to be used from './src' directory.
	Added '-DOPENSSL_NO_KRB5' for OpenSSL build. Target is
	now wget.exe.

	* msdos/Makefile.WC: Added for building with OpenWatcom targeting
	32-bit DOS (DOS32A extender).

2007-10-01  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Updated information in Mailing Lists, Reporting
	Bugs. Added Web Site section, and add information about Mac OS
	X, MS-DOS, and VMS in Portability.

2007-09-27  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Removed "for more details" from parenthesese
	enclosing @pxref{}s, so that texi2pod.pl knows to remove the
	whole reference. Made some gramattical improvements, and
	strengthened the recommendation to use the info manual instead.
	* doc/texi2pod.pl: Brought in some updates from the GCC version. Not
	an entire update, since a couple "fixes" there breaks stuff
	here.

2007-09-25  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.in: Use EXEEXT instead of exeext.

2007-09-25  Micah Cowan  <micah@cowan.name>

	* src/Makefile.in: Use EXEEXT instead of exeext.

2007-09-25  Micah Cowan  <micah@cowan.name>

	* configure.in: Remove unnecessary heuristic to generate exeext
	variable, since AC_PROG_CC and others automatically set EXEEXT.
	Pointed out by Steve Kenton <skenton@ou.edu>.

2007-09-24  Jochen Roderburg  <roderburg@uni-koeln.de>

	* src/http.c (http_zero): Remove no-longer-used local_size variable.
	Fixes bug #21057.

2007-09-24  Gisle Vanem  <giva@bgnett.no>

	* src/connect.c, init.c, main.c, openssl.c, options.h, sysdep.h,
	url.c, utils.c: Added support for building on MS-DOS.

2007-09-24  Gisle Vanem  <giva@bgnett.no>

	* msdos/Makefile.DJ, config.h: Added to support building on MS-DOS via
	DJGPP.

2007-09-12  Micah Cowan  <micah@cowan.name>

	* src/http.c (http_loop): Remove send_head_first from condition for
	parsing timestamp.

2007-09-12  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi: Expanded the description of -O. Clarified the
	detection of elements as "patterns" versus "suffixes" in -A,
	-R. Describe -p in relation to -nc.

2007-09-12  Micah Cowan  <micah@cowan.name>

	* AUTHORS: Added... me...
	* TODO: file removed, bugtracker is authoritative source for
	planned changes.

2007-08-29  Micah Cowan  <micah@cowan.name>

	* src/openssl.c (ssl_init): Re un-const-ified the meth local
	variable, to match current versions of openssl.
	* src/spider.c: Removed visited_url function, as it may be very
	inefficient.
	(print_broken_links): Removed traversal of referrers, until such
	time as a more efficient implementation can be written.
	* src/spider.h: Replaced declaration of visited_url with an
	empty-bodied, function-like macro.

2007-08-27  Micah Cowan  <micah@cowan.name>

	* src/wget.h: Added macro replacement for ngettext, for environs
	that lack NLS.

2007-08-27  Gisle Vanem	 <giva@bgnett.no>

	* src/mswindows.c (run_with_timeout): Ensure that the correct
	conversion specification is used for the return result of
	the GetLastError function.
	* src/getopt.c: Fix missing (but, accidentally, legal) comment
	delimiter after licensing text.
	* src/recur.c (retrieve_tree): Inserted missing cast for strip_auth.
	Includes adjustment by Ralf Wildenhues.
	* src/openssl.c (ssl_init): const-ified the meth local variable.
	* src/main.c: Include all the static function definitions in the
	"#ifndef TESTING" clause, leaving just the definitions for
	exec_name (not set), and opt.
	* src/utils.c (run_with_timeout): Now returns bool, to align with
	declaration in utils.h.

2007-08-26  Micah Cowan  <micah@cowan.name>

	* src/spider.c (print_broken_links): Fixed incorrect plurals msgid
	usage, switched to use ngettext function.

2007-08-26  Micah Cowan  <micah@cowan.name>

	* po/POTFILES.in: Added spider.c.

2007-08-24  Micah Cowan  <micah@cowan.name>

	* src/http.c (http_loop): Introduced time_came_from_head boolean
	flag, to help avoid parsing the same Last-Modified header twice.
	Replaced spidering returns of RETRUNNEEDED for some situations,
	to RETROK, as otherwise it will be interpreted as an error.
	RETRUNNEEDED appears never to be referenced outside of
	http.c (and wget.h), and, when returned by gethttp, is
	translated by http_loop to RETROK.
	* src/url.c (are_urls_equal): Don't call getchar_from_escaped_string
	if u2 is shorter than u1.
	(getchar_from_escaped_string): Don't decode reserved characters.
	Handle illegally appearing '%'s as literal '%'s. Ensure hex
	digits before attempting to decode.
	(test_are_urls_equal): Added tests to handle u2 shorter than u1,
	and %2f not treated the same as /.
	* src/spider.c (in_url_list_p): Don't call are_urls_equal if one of
	them is NULL.

2007-08-24  Micah Cowan  <micah@cowan.name>

	* po/no.po: removed; replaced by nb.po (per the translation
	project coordinator, Benno Schulenberg).

2007-08-23  Joshua David Williams  <yurimxpxman@gmail.com>

	* src/spider.c (in_url_list_p): Removed the bool verbose argument

2007-08-22  Micah Cowan  <micah@cowan.name>

	* Makefile.in: Exclude .svn directories and below from
	distribution.

2007-08-22  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c (http_loop): Fall back to GET if HEAD fails with a 500 or 501
	error code.

2007-08-21  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/WgetTest.pm.in: Added support for timestamping of pre-existing
	files.

	* tests/Test-N-current.px: Fixed broken test logic.

	* tests/Makefile.in: Updated list of automatically run tests.

	* tests/Test-HTTP-Content-Disposition.px: Added -e contentdisposition=on
	option, since now HTTP Content-Disposition header support is turned
	off by default.

	* tests/Test-HTTP-Content-Disposition-1.px: Ditto.

2007-08-21  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c (http_loop): Send preliminary HEAD request if -N is given and
	the destination file exists already.

2007-08-10  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

	* src/url.c (append_uri_pathel): Do not assume dest string to be
	zero-terminated.
	(test_append_uri_pathel): Terminate string to fix test failure.

2007-08-10  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/Test--spider--no-content-disposition-trivial.px: Added new tests for
	validation of HTTP Content-Disposition header support logic. In
	particular, these tests check wget's behavior for every combination of
	--spider [-r] and -e contentdisposition=on/off options.

	* tests/Test--spider-r-HTTP-Content-Disposition.px: Ditto.

	* tests/Test--spider-HTTP-Content-Disposition.px: Ditto.

	* tests/Test--spider--no-content-disposition.px: Ditto.

	* tests/Test--spider-r--no-content-disposition-trivial.px: Ditto.

	* tests/Test--spider-r--no-content-disposition.px: Ditto.

2007-08-10  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c (http_loop): Fixed HTTP HEAD requests logic when --spider is
	given.

2007-08-09  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

	* src/url.c (url_string): Use comparison, not assignment, in
	check for auth_mode == URL_AUTH_HIDE_PASSWD.

2007-08-09  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

	* m4/wget.m4 (WGET_PROCESS_PO, AM_PATH_PROG_WITH_TEST): Add
	missing M4 quotation.  Delete serial number.

2007-08-09  Micah Cowan  <micah@cowan.name>

	* src/http.c (http_loop): If we got a HEAD and then a GET, and the
	GET had a timestamp, use that one, not any we may have gotten
	from the HEAD.

2007-08-09  Micah Cowan  <micah@cowan.name>

	* NEWS: Timestamping from most recent response.

2007-08-08  Micah Cowan  <micah@cowan.name>

	* src/init.c (defaults): Content disposition will not be default,
	since it currently results in extra round-trips.

2007-08-08  Micah Cowan  <micah@cowan.name>

	* NEWS: Call attention to the fact that Content-Disposition is
	not enabled by default.

2007-08-07  Micah Cowan  <micah@cowan.name>

	* configure.in: Fix --with-libssl-prefix failure by replacing
	usage of sh "if" statement with "AS_IF" macros, to force
	AC_REQUIRE'd macros to be expanded before the conditional
	statement body.
	* NEWS: Note that configure.in now requires autoconf >= 2.61,
	to support AS_IF and its expansion of AC_REQUIREs.

2007-07-31  Micah Cowan  <micah@cowan.name>

	* src/http.c (gethttp): Set contlen = -1 when we encounter a
	negative-valued Content-Length header, so we don't consider it
	an internal error later on and call abort().

2007-07-29  Micah Cowan  <micah@cowan.name>

	* src/url.h, url.c (url_string): Replaced bool arg of the url_string
	function with enum url_auth_mode, with added option to
	completely remove user/pass auth information.
	* src/http.c, ftp.c, url.c, recur.c: Adapted call to url_string
	function to fit new usage.
	* src/recur.c (retrieve_tree): Remove auth info from Referer header.

2007-07-29  Micah Cowan  <micah@cowan.name>

	* NEWS: No more auth before challenge. No more auth info in
	Referer. New --max-redirect option.

2007-07-28  Micah Cowan  <micah@cowan.name>

	* src/options.h, init.c, retr.c, main.c: renamed opt maxredirect
	field to max_redirect, for improved consistency.
	* src/init.c: changed max_redirect parser from cmd_number_inf to
	cmd_number, as infinite redirects may not be appropriate.
	Alternatively, if cmd_number_inf should be used, then
	opt.max_redirect's value should be checked a bit differently in
	retr.c, to allow for the "infinite" meaning of zero.

2007-07-28  Micah Cowan  <micah@cowan.name>

	* doc/wget.texi <HTTP Options>: Added --max-redirect option.

2007-07-25  Micah Cowan  <micah@cowan.name>

	* tests/HTTPServer.pm (run, send_response): Farmed out some logic from
	the run method into a separate one named send_response, which
	was then modified to handle simple authentication testing.
	(handle_auth): Added to handle simple authentication testing.
	(verify_auth_basic): Checks to make sure Basic credentials are
	valid.
	(verify_auth_digest): Stub added; always fails test.
	* tests/Makefile.in: Added Test-auth-basic.px to list of automatically
	run tests.
	* tests/Test-auth-basic: Simple basic authentication test; mainly just
	lets the server do its testing. Its current purpose is just to
	ensure that correct basic creds are sent, but never until a
	challenge has been sent.

2007-07-25  Micah Cowan  <micah@cowan.name>

	* src/http.c (create_authorization_line)
	(basic_authentication_encode, known_authentication_scheme_p)
	(load_cookies): Moved declarations up.
	(basic_authed_hosts): Added. Tracks what hosts have issued Basic
	challenge and been given the global username, password.
	(maybe_send_basic_creds): Added. Sends Basic creds for hosts that
	have issued Basic challenges.
	(register_basic_auth_host): Added. Instantiates
	basic_authed_hosts if necessary, then registers the host that
	has issued a challenge.
	(gethttp) <auth>: Only send authentication credentials after
	we've received a challenge from that host. This is a stop-gap
	fix until a proper fix can be implemented; still isn't quite
	right, as we should only be sending credentials automatically
	for authenticated paths and below, and not for the entire host.

2007-07-16  Joshua David Williams  <yurimxpxman@gmail.com>

	* src/test.h: tests made more verbose; now displays the name
	of each test run.

2007-07-16  Joshua David Williams  <yurimxpxman@gmail.com>

	* src/options.h: added maxredirect to options struct
	* src/init.c: added maxredirect to list of variables
	* src/retr.c (retrieve_url): replaced MAX_REDIRECTIONS with opt.maxredirect
	* src/main.c: added option --max-redirect

2007-07-10  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/Test--no-content-disposition.px: Added new tests for validation of
	HTTP Content-Disposition header support logic. In particular, these
	tests check wget's behavior for every combination of -N/-O and -e
	contentdisposition=on/off options.

	* tests/Test--no-content-disposition-trivial.px: Ditto.

	* tests/Test-N-HTTP-Content-Disposition.px: Ditto.

	* tests/Test-N--no-content-disposition.px: Ditto.

	* tests/Test-N--no-content-disposition-trivial.px: Ditto.

	* tests/Test-O-HTTP-Content-Disposition.px: Ditto.

	* tests/Test-O--no-content-disposition.px: Ditto.

	* tests/Test-O--no-content-disposition-trivial.px: Ditto.

2007-07-10  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c (http_loop): Fixed the HTTP requests logic. Now it skips the
	preliminary HEAD request if either -O or --no-content-disposition are
	given, and neither --spider and -N are given.

2007-07-09  Micah Cowan  <micah@cowan.name>

	* README, util/wget.spec: Removed references to wget.sunsite.dk.

2007-07-05  Micah Cowan  <micah@cowan.name>

	* tests/Makefile.in:
	Updated GPL reference to version 3 or later, removed FSF
	address.

2007-07-05  Micah Cowan  <micah@cowan.name>

	* src/cmpt.c, connect.c, connect.h, convert.c, convert.h:
	* src/cookies.c, cookies.h, ftp-basic.c, ftp.c, ftp.h, ftp-ls.c:
	* src/ftp-opie.c, gen-md5.c, gen-md5.h, getopt.c, getopt.h, gnu-md5.c:
	* src/gnu-md5.h, gnutls.c, hash.c, hash.h, host.c, host.h:
	* src/html-parse.c, html-parse.h, html-url.c, http.c, http.h:
	* src/http-ntlm.c, http-ntlm.h, init.c, init.h, log.c, log.h, main.c:
	* src/Makefile.in, mswindows.c, mswindows.h, netrc.c, netrc.h:
	* src/openssl.c, options.h, progress.c, progress.h, ptimer.c:
	* src/ptimer.h, recur.c, recur.h, res.c, res.h, retr.c, retr.h:
	* src/safe-ctype.c, safe-ctype.h, spider.c, spider.h, ssl.h, sysdep.h:
	* src/test.c, test.h, url.c, url.h, utils.c, utils.h, wget.h:
	* src/xmalloc.c, xmalloc.h:
	Updated GPL reference to version 3 or later, removed FSF
	address.

2007-07-05  Micah Cowan  <micah@cowan.name>

	* doc/fdl.texi:
	Changed to match the version in gnulib.

	* doc/Makefile.in:
	* doc/texi2pod.pl:
	* doc/texinfo.tex:
	Updated GPL reference to version 3 or later, removed FSF
	address.

	* doc/wget.texi:
	Slightly reworded the FDL license invocation. Replaced the
	maintainer reference. Removed the GPL text from the manual.

	* doc/gpl.texi:
	Removed due to discontinuation of reference in Wget manual.

2007-07-05  Micah Cowan  <micah@cowan.name>

	* AUTHORS:
	Draw attention to previous maintainers.

	* autogen.sh, config.guess, config.sub, configure.bat:
	* configure.in, m4/wget.m4, Makefile.in, util/dist-wget:
	* util/Makefile.in, util/rmold.pl:
	Updated GPL reference to version 3 or later, removed FSF
	address.

	* README:
	Updated reference to maintainer, and updated GPL reference to
	version 3 or later.

	* COPYING:
	Replaced with verson 3.

2007-07-04  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c (http_loop): Skip HEAD request and start immediately with GET
	if -O is given.

2007-06-14  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/FTPServer.pm: Added FTP testing support.

	* tests/FTPTest.pm: Ditto.

	* tests/Test-ftp.px: Ditto.

2007-02-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/netrc.c: Don't make netrc_list static, as it prevents
	compilation with DEBUG_MALLOC.

	* src/utils.c (aprintf): Don't use vasprintf when DEBUG_MALLOC is
	requested because, in that case, we want the calls to malloc to be
	coming from us.

2007-02-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (print_server_response): Escape non-printable characters
	in server respone.

2007-01-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (create_image): Check for ETA overflow.
	(print_row_stats): Ditto.

2007-01-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (parse_set_cookie): Would erroneously discard cookies
	with unparsable expiry time.

2007-01-09  Steven M. Schweda  <sms@antinode.org>

	* src/ftp-basic.c (ftp_syst): Fixed segfault if response text is missing.

2007-01-09  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/init.c (cmd_spec_prefer_family): Small fix to get rid of a gcc
	warning about strict-aliasing violation.

2006-12-29  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.c: Avoid a warning if 'ws_hangup()' is unused.

2006-12-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c (parse_content_disposition): Consider directory prefix, if
	specified.

2006-12-22  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/HTTPTest.pm: Don't ignore initial '/' character in requested URLs.

2006-11-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (retrieve_from_file): Ditto.
	(url_uses_proxy): New function.

	* src/main.c (main): Don't check for opt.use_proxy when deciding
	whether to call retrieve_url or retrieve_tree; check whether the
	proxy would be used for *this* URL.

2006-11-10  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/Test-np.px: Added test for -np.

	* tests/HTTPTest.pm: Ignore initial '/' character in requested URLs.

2006-10-17  Mike Grant  <mggr@pml.ac.uk>

	* src/ftp.c (ftp_loop_internal): Would incorrectly skip changing
	working directory when retrying after a failed FTP attempt.
	Originally reported by Nate Eldredge.

2006-10-12  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/Test1.px: Renamed to Test-noop.px.

	* tests/Test-noop.px: Ditto.

	* tests/Test2.px: Renamed to Test-N.px.

	* tests/Test-N.px: Ditto.

	* tests/Test3.px: Renamed to Test-nonexisting-quiet.px.

	* tests/Test-nonexisting-quiet.px: Ditto.

	* tests/Test4.px: Renamed to Test-O-nonexisting.px.

	* tests/Test-O-nonexisting.px: Ditto.

	* tests/Test5.px: Renamed to Test-HTTP-Content-Disposition.px.

	* tests/Test-HTTP-Content-Disposition.px: Ditto.

	* tests/Test6.px: Renamed to Test-HTTP-Content-Disposition-1.px.

	* tests/Test-HTTP-Content-Disposition-1.px: Ditto.

	* tests/Test7.px: Renamed to Test-HTTP-Content-Disposition-2.px.

	* tests/Test-HTTP-Content-Disposition-2.px: Ditto.

	* tests/Test8.px: Replaced by Test--spider-r.px.

	* tests/Test9.px: Renamed to Test-Restrict-Lowercase.px.

	* tests/Test-Restrict-Lowercase.px: Ditto.

	* tests/Test10.px: Renamed to Test-Restrict-Uppercase.px.

	* tests/Test-Restrict-Uppercase.px: Ditto.

	* tests/Test--spider.px: Added test for spider mode.

	* tests/Test--spider-fail.px: Added failing test for spider mode.

	* tests/Test--spider-r.px: Added test for recursive spider mode.

	* tests/Test-c.px: Added test for --continue mode.

	* tests/Test-c-full.px: Added test for --continue mode.

	* tests/Test-c-partial.px: Added test for --continue mode.

	* tests/Test-O.px: Added test for -O.

	* tests/Test-N-current.px: Added test for -N.

	* tests/Test-N-old.px: Added test for -N.

	* tests/Test-E-k.px: Added test for -E -k.

	* tests/Test-E-k-K.px: Added test for -E -k -K.

2006-10-12  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/convert.c (downloaded_file): Fixed bug which used to break -E -k -K
	mode.

2006-08-28  Noèl Köthe <noel@debian.org>

	* Makefile.in: Fixed a DESTDIR-related bug.

2006-08-28  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c: #include'd spider.h to get rid of compiler warnings.

	* src/main.c: Ditto.

	* src/recur.c: Ditto.

2006-08-24  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/Makefile.in: Added spider.c to the list of files to compile and
	spider.h to the list of header files. Updated copyright information.

	* src/http.c: Major changes to recursive spider mode. Now for every
	resource we are supposed to check, we send a HEAD request to find out
	if it exists. If the resource is a HTML file, we retrieve it and parse
	it to discover links to other resources.

	* src/recur.c: Ditto.

	* src/res.c (res_retrieve_file): Disable opt.timestamping and opt.spider
	when retrieving robots.txt. Updated copyright information.

	* src/convert.c: Moved code tracking broken links to spider.c.

	* src/convert.h: Ditto.

	* src/spider.c: Created new file to keep track of visited URLs in spider
	mode.

	* src/spider.h: Ditto.

2006-08-21  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c: Fixed timestamping-related bug.

2006-08-17  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/HTTPServer.pm: Added support for Range header.

2006-08-16  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c: Fixed bug which broke --continue feature. Now if -c is
	given, http_loop sends a HEAD request to find out the destination
	filename before resuming download.

2006-08-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (datetime_str): Avoid code repetition with time_str.

2006-07-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (commands): Correctly place "contentdisposition".

2006-07-17  Daniel Richard G.  <skunk@iSKUNK.ORG>

	* Makefile.in: Added DESTDIR='$(DESTDIR)' to MAKEDEFS.

2006-07-14  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/Test4.px: Fixed wrong expected behaviour.

2006-07-14  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/sysdep.h: If intptr_t isn't defined, simply typedef it to long.

	* src/http.c: Added explicit cast to int in logprintf call to remove
	compiler warnings on 64-bit platforms.

	* src/connect.c: Added a few casts to intptr_t to remove compiler warnings
	on 64-bit platforms.

	* src/main.c: Disable -r, -p and -N when -O is used. Disable -k when -O is
	used and multiple URLs are given. Update maintainer information.

	* src/all: Update copyright information.

2006-07-14  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* configure.in: Check for intptr_t.

2006-07-10  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* doc/wget.texi: Fixed rendering of --no-proxy description in the man
	page. Added information about current maintainer.

2006-07-10  KJKHyperion  <hackbunny@reactos.com>

	* src/url.c (filechr_table): Mark DEL (0x7f) as a control character
	and | as a character Windows can't handle.

2006-06-28  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/res.c: Implemented is_robots_txt_url function for detection of
	robots.txt URLs and related test routine.

	* src/res.h: Ditto.

	* src/url.c: Implemented are_urls_equal function for URL comparison and
	related testing routine.

	* src/url.h: Ditto.

	* src/convert.c: Fixes for recursive spider mode: don't consider
	non-existing robots.txt as a broken link, and use are_urls_equal
	instead of strcasecmp for referrer URLs comparison.

	* src/test.c: Call tests routines for are_urls_equal and
	is_robots_txt_url.

2006-06-28  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* doc/wget.texi: Removed invariant status to the GPL and GFDL sections.
	Changed UPDATED to Jun 2006. Updated copyright notice to include 2006.

2006-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: We're no longer using strtoimax.

2006-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (wgint): Typedef to any 64-bit (or larger) type we can
	find, not necessarily off_t or long.

2006-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (strtoll): Check for overflow and underflow without
	relying on (technically) undefined behavior.  Don't assume that
	strtoll_type is 64 bits wide.

2006-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Recursive Accept/Reject Options): Document
	--ignore-case.

2006-06-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (base64_encode): Cast void pointer to char * before
	doing arithmetic.

2006-06-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (base64_encode): Made TBL const.
	(base64_decode): Made the base64_char_to_value table const.

2006-06-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Add missing word.
	Reported by Adrian Knoth.

2006-06-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (base64_encode): Would read past end of STR.
	Reported by rick@eckle.org.

2006-06-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (base64_encode): Made the DATA pointer void * so the
	callers can pass it any kind of pointer (including both signed and
	unsigned char pointers).
	(base64_decode): Ditto for DEST.

2006-06-13  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/Test9.px: Added test for --restrict-file-names=lowercase option.

	* tests/Test10.px: Added test for --restrict-file-names=uppercase option.

2006-06-13  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/options.h (struct options): Introduced member restrict_files_case to
	keep track of preferences on character case restrictions for
	filenames.

	* src/init.c: Modified defaults and cmd_spec_restrict_file_names to
	support character case restrictions for filenames. Added
	test_cmd_spec_restrict_file_names unit test.

	* src/url.c: Modified append_uri_pathel to support character case
	restrictions for filenames. Added test_append_uri_pathel unit test.

	* src/test.c: Added test_cmd_spec_restrict_file_names and
	test_append_uri_pathel to the list of unit tests to run.

2006-06-12  Tony Lewis  <tlewis@exelana.com>

	* src/main.c: Improved CHEN Peng's patch by proposing a simpler logic.

2006-06-12  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/retr.c (retrieve_from_file): Use retrieve_tree and automatically
	turn on opt.follow_ftp in case of recursive FTP retrieval through HTTP
	proxy.

	* src/main.c: Automatically turn on opt.follow_ftp in case of recursive
	FTP retrieval through HTTP proxy.

2006-06-12  CHEN Peng  <chenpeng@alumni.nus.edu.sg>

	* src/main.c: Use retrieve_tree in case of recursive FTP retrieval through
	HTTP proxy.

2006-05-26  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/HTTPServer.pm: Fixed bug when returning 404. Improved logging.

	* tests/Test.pm: Added support for command lines which use an absolute path
	for the Wget binary.

2006-05-26  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/HTTPServer.pm: Added synchronization between client and server
	processes to prevent the test to start before the server is ready.

	* tests/HTTPTest.pm: Ditto.

	* tests/Test.pm: Ditto.

	* tests/Test1.px: Removed unneeded ../src/ from command line.

	* tests/Test2.px: Ditto.

	* tests/Test3.px: Ditto.

	* tests/Test4.px: Ditto.

	* tests/Test5.px: Ditto.

	* tests/Test6.px: Ditto.

	* tests/Test7.px: Ditto.

	* tests/Test8.px: Added test for recursive spider mode.

2006-05-25  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/convert.c: Added mechanisms to keep track broken links.

	* src/convert.h: Ditto.

	* src/wget.h: Reordered and enumerated uerr_t constants.

	* src/recur.c: Fixes to support recursive spider mode.

	* src/http.c: Ditto.

	* src/main.c: Print broken links in case of recursive spider mode.

	* src/retr.c: Changed interface of retrieve_url.

	* src/retr.h: Ditto.

	* src/ftp.c: Changed interface of ftp_loop.

	* src/ftp.h: Ditto.

	* src/res.c: Minor change to reflect changes in interface of retrieve_url.

2006-05-18  Lawrence Jones  <lawrence.jones@ugs.com>

	* src/ftp-ls.c (ftp_parse_unix_ls): Correct size parsing, add size
	and filename debugging output.

2006-04-28  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/Test5.px: Added test for HTTP Content-Disposition support.

	* tests/Test6.px: Ditto.

	* tests/Test7.px: Ditto.

2006-04-28  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c: If Content-Disposition header is present, allow unique
	filename generation unless -nc is given. Permit to disable parsing of
	Content-Disposition header.

	* src/options.h: Added option --no-content-disposition to disable parsing
	of HTTP Content-Disposition header.

	* src/init.c: Ditto.

	* src/main.c: Ditto.

2006-04-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/HTTPServer.pm: Serve index.html if no filename is given.

	* tests/Test.pm: Added support for pre-existing files.

2006-04-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (TOLOWER): Wrap macro arg in parentheses.

2006-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (parse_content_disposition): Doc fix.

2006-03-15  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/utils.c: Restricted operational semantics of frontcmp and proclist
	from generic strings to directory names and them to subdir_p and
	dir_matches_p respectively.  Applied George Ogata's one line patch to
	restrict algorithm of subdir_p to full directory name matching.  Added
	testcases for subdir_p and dir_matches_p.

	* src/utils.h: Changed all frontcmp occurrences to subdir_p.

	* src/recur.c: Ditto.

	* src/test.c: Changed type returned by test functions from char * to const
	char *.  Added test_subdir_p and test_dir_matches_p to the list of
	tests to run.

	* src/http.c (test_parse_content_disposition): Changed return type from
	char * to const char *.

2006-03-14  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/recur.c (struct queue_element): Changed type of html_allowed member
	to bool.

2006-03-09  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/ftp.c (ftp_list): Try `LIST -a' command first and revert to `LIST'
	in case of failure.

2006-03-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (TOLOWER): Fix definition when STANDALONE.
	Reported by Beni Serfaty.

2006-03-02  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c (http_loop): Fixed recursive HTTP retrieval.

2006-02-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (find_last_char): Define in terms of memrchr.

	* src/cmpt.c (memrchr): Define it on systems that don't have it.

	* src/http.c (extract_param): New function for parsing header values
	with parameters.
	(parse_content_disposition): Use it.  Don't allow slashes and
	backslashes in the file name.

2006-02-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (extract_param): Declare extern so it can be used from
	other files.
	(extract_param): Return error for empty name.

2006-02-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for memrchr.

2006-02-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (path_simplify): Don't preserve ".." at beginning of path.
	Suggested by Frank McCown.

2006-02-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Only use FILE.N.html if FILE.html exists.

2006-02-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.c (run_with_timeout): Made thread_hnd non-static.

2006-02-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (sleep_between_retrievals): Sleep at a minimum of 1/2 of
	the specified wait period.

2006-02-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Document the modified meaning of
	--random-wait.

2006-02-05  Hrvoje Niksic  <hniksic@xemacs.org>

	(Download Options): Changed "a recent article" to "a 2001 article"
	in the description of --random-wait, since the article in question
	is not really recent.

2006-02-03  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c: Fixed support for Content-Disposition header.

	* src/test.c: Added test_parse_content_disposition to the list of unit
	tests to run.

2006-02-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (number_to_string): Don't use sprintf for printing
	WGINT_MIN; simply divide n by 10 and defer printing the last
	digit.
	(number_to_string): Removed the SPRINTF_WGINT macro.

2006-02-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c: Don't define countof if it's already defined.

	* src/hash.c: Obtain the definition of uintptr_t when standalone.

2006-01-30  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c: Changed output format. Removed excessively verbose debugging
	output.

2006-01-24  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/HTTPServer.pm: Enhanced logging support.

	* tests/HTTPTest.pm: Updated to new test format.

	* tests/Test.pm: Improved test setup, verification and cleanup. Major
	refactoring.

	* tests/Test1.px: Updated to new test format.

	* tests/Test2.px: Updated to new test format.

	* tests/Test3.px: Added new test for quiet download of nonexistent URL.

	* tests/Test4.px: Added new test for quiet download of nonexistent URL with
	--output-document option.

2005-12-07  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c: Fixed pre-download verbose output which was broken by
	HTTP code refactoring.

2005-12-05  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/HTTPServer.pm: Refactored as a subclass of HTTP::Daemon.
	Removed the old run method and renamed the old run_daemon
	method to run.  Added support for partial

	* tests/Testing.pm: Renamed to HTTPTest.pm.

	* tests/HTTPTest.pm: Refactored as a subclass of Test.  Renamed
	Run_HTTP_Test to run, verify_download to _verify_download
	and added support for timestamp checking.

	* tests/Test.pm: Added Test class as the super class of every
	testcase.

	* tests/test1: Renamed to Test1.px.

	* tests/Test1.px: Refactored as an instance of the HTTPTest class.

	* tests/Test2.px: Added -N HTTP test.

2005-11-23  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/http.c: Refactored HTTP code.  If -O is not used, the new code
	delays the choice of the file name where the downloaded resource
	will be saved until the HTTP headers have been retrieved.
	Added support for Content-Disposition header.

2005-11-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (INVALID_PTR): Use uintptr_t instead of unsigned long.
	(hash_pointer): Don't assume a pointer fits in `unsigned long'.

2005-11-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for uintptr_t.

2005-11-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Document https_proxy.

2005-11-02  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* tests/HTTPServer.pm: Added basic support for HTTP testing.

	* tests/Testing.pm: Added basic support for feature testing (only HTTP
	testing is supported at the moment).

	* tests/test1: Added basic HTTP test.

2005-11-02  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/Makefile.in: Removed support for unit testing (now it is in
	tests/Makefile.in).

2005-11-02  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* Makefile.in: Improved support for unit testing.

	* configure.in: Ditto.

2005-10-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/Makefile.in: Added basic support for unit testing.

	* src/test.c: Ditto.

	* src/test.h: Ditto.

2005-10-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* Makefile.in: Added basic support for unit testing.

2005-10-13  Daniel Stenberg  <daniel@haxx.se>

	* src/http-ntlm.c (ntlm_output): Fixed buffer overflow vulnerability.

2005-10-09  Russ Allbery  <rra@stanford.edu>

	* src/snprintf.c: Remove round to round_int and pow10 to pow10_int, to
	avoid warnings from GCC 4.0.

2005-10-05  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/retr.c: Changed semantics of no_proxy_match.

2005-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (retr_rate): Rename parameter from MSECS to SECS since it
	no longer holds milliseconds.

2005-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): Don't print the summary if nothing has been downloaded.

2005-09-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/sample.wgetrc: Rewrite the "passive FTP" paragraph to better
	reflect reality.

2005-09-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c: Introduce symbolic constants for "magic" values of
	0.2 and 0.9, REFRESH_INTERVAL and ETA_REFRESH_INTERVAL.

2005-08-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (hash_table_map): Rename to hash_table_for_each and
	update callers.
	Document the meaning of the callback's return value.
	(hash_table_iterate): New function.
	(hash_table_iter_next): Likewise.
	Update most places that used hash_table_for_each to use the
	iteration, which doesn't require a temporary function with
	explicit state management.

2005-08-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (strtoll): Correctly handle strtoll("0x", ptr, 0) and
	strtoll("0x<nonhexchar>", ptr, 0) -- in both cases *ptr must be
	set to the position of 'x', not after it.

2005-08-26  Stepan Kasal  <kasal@ucw.cz>

	* configure.in: Abort configure if --with-ssl given but SSL
	unavailable.  Use HAVE_LIBSSL and HAVE_LIBGNUTLS symbols provided
	by AC_LIB_HAVE_LINKFLAGS instead of inventing new ones.

2005-08-26  Jeremy Shapiro  <jnshapiro@gmail.com>

	* src/openssl.c (ssl_init): Set SSL_MODE_AUTO_RETRY.

2005-08-26  Albert Chin  <wget@mlists.thewrittenword.com>

	* src/Makefile.in: Use @datadir@.  Define localedir as $(datadir)/locale.

2005-08-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (address_list_from_ipv4_addresses): Use IP_INADDR_DATA.

2005-08-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h: Renamed strtoll_return to strtoll_type.

2005-08-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (eta_to_human_short): Switch to days when printing
	more than 48h rather than 100h.  (It's not immediately apparent
	how many days there are in 83h.)

2005-08-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (strtoll): Define it if missing on the system and if Wget
	needs it.

	* src/mswindows.c (str_to_int64): Move to cmpt.c and rename to strtoll.

2005-08-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for strtoll and strtoimax.

2005-08-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (print_address): Always use inet_ntop when IPv6 is
	enabled.

	* src/host.h (ip_address): Simplify the data union.

2005-08-09  Vasil Dimov  <vd@datamax.bg>

	* src/ftp.c (getftp): Don't free RESPLINE if ftp_response returns a
	status other than FTPOK.

2005-08-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.c (inet_ntop): Also handle IPv4 addresses for
	completeness.

2005-08-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Don't read more than the amount of data
	specified by the content-length header.

2005-08-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Wgetrc Commands): Removed documentation for the now
	deleted command "kill_longer".

2005-08-04  Giuseppe Bonacci  <g.bonacci@libero.it>

	* src/ftp-ls.c (ftp_parse_unix_ls): Remember the position of the
	previous token instead of backtracking back to it.

2005-07-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (aprintf): Use vasprintf where available.

2005-07-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (rewrite_shorthand_url): Simplify code using aprintf and
	strspn.

2005-07-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Remove -Wno-implicit from default GCC warning
	flags.

2005-07-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't check for symlink, which is expected to
	exist.  Check for asprintf.

2005-07-08  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.h: Include process.h to get getpid() declaration.

2005-07-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (ssl_check_certificate): Print custom error messages
	for frequent X509 certificate problems.

2005-07-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.h: Define an alias for stat and fstat, as requested by
	config-compiler.h.
	(gai_strerror): Define to windows_strerror if NEED_GAI_STRERROR is
	defined.

2005-07-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/gnutls.c (ssl_check_certificate): Check for the validity of the
	presented X509 certificate.

2005-07-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.bat: Copy the common config.h and config-compiler.h.

2005-07-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c: Unconditionally include <setjmp.h>.

2005-07-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (fnmatch_nocase): New function.
	(proclist): Use it instead of fnmatch when opt.ignore_case is
	requested.
	(in_acclist): Respect opt.ignore_case.
	(frontcmp): Respect opt.ignore_case.

	* src/options.h (struct options): New flag opt.ignore_case.

2005-07-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h: Add a full declaration of fnmatch.h.

2005-07-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c: Measure time in seconds rather than milliseconds.
	Adjusted all callers.

2005-07-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.h: Use strtoll where available.

2005-07-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): When freeing MESSAGE, take into account that
	it can be NULL.

2005-07-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't check for setjmp.h.

2005-07-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in: Also use @LIBGNUTLS@ to build LIBS.

2005-07-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (or): Define HAVE_SSL when either HAVE_OPENSSL or
	HAVE_GNUTLS are defined.

	* src/gnutls.c: New file.

2005-07-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Don't print the request write error message
	twice.

2005-07-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (timegm): Remove unused variable.

2005-07-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (timegm): Handle years after 2099.

2005-07-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (timegm): Don't call mktime; simply count the seconds
	between 1970-01-01 and the specified date.

2005-07-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Add check for GnuTLS if --with-ssl=gnutls is used.

2005-07-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/xmalloc.c (debugging_free): Prefix hex pointer value with "0x"
	when printing.

2005-07-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (base64_decode): Don't silently tolerate non-base64
	non-white-space characters in the base64 stream.

2005-07-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (NEXT_BASE64_CHAR): Rename to NEXT_CHAR and simplify to
	get the next non-whitespace character.

2005-07-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (openssl_errstr): Separate error messages with "; ".

2005-07-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (openssl_errstr): Instead of always using a large
	static buffer, only allocate the error string when there is an
	actual error.

2005-07-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (LAZY_RETRIEVE_INFO): Make last_tick unsigned to match
	transport_map_modified_tick.

2005-07-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config-post.h (alloca): Updated declaration to not enumerate all
	Windows compilers.

2005-07-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (path_end): Skip separators appropriate for the scheme.
	(strpbrk_or_eos): Remove gcc-specific version, as the optimization
	it tried to perform no longer applies.

2005-07-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.h: Also wrap accept() and listen().

2005-07-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): Use fd_errstr.

	* src/connect.c (fd_register_transport): Restructure parameters to
	include only a single structure that describes transport
	implementation.

	* src/openssl.c (openssl_errstr): New function: dump SSL error strings
	into a static buffer and return a pointer to the buffer.

	* src/connect.c (fd_errstr): New function; returns transport-specific
	error message, or strerror(errno) if transport doesn't supply one.

2005-07-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/POTFILES.in: Include src/ptimer.c.

2005-07-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/version.c: Don't use "cvs" in version name, since we're not
	using CVS anymore.

2005-07-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_parse): Would crash when parsing fragments.  Support
	fragments for FTP URLs too.

2005-07-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (create_image): Ditto.

	* src/retr.c (retr_rate): Display smaller rate numbers with greater
	precision.

2005-07-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (response_head_terminator): Minor optimization.

	* src/retr.c (fd_read_hunk): Call terminator with pointer to the start
	of the data and the pointer to the current data.  Changed all
	callers.

2005-07-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Skip error message body in the keep-alive
	case.

2005-07-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c: Remove extraneous definition of netdb.h.

2005-07-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c: Don't include "connect.h" now that we no longer have
	socket_has_inet6.

2005-07-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_parse): Make sure u->params is not initialized for
	http/https URLs.
	(url_parse): Don't crash on garbage following []-delimited IPv6
	addresses.

2005-07-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (print_help): Don't refer to the non-existent -nr in
	description of --mirror.

2005-07-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Mention in message that the "GNU" md5
	implementation is in fact built-in to Wget.

2005-06-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Explicitly document the different cases when
	generating the Host header.

2005-06-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (pretty_print_address): Renamed to just print_address.
	Clarify documentation.

2005-06-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (pretty_print_address): Handle error result from
	inet_ntop.

2005-06-30  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.c (inet_ntop): New function.  Print IPv6 addresses
	using WSAAddressToString.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h: Remove obsolete definition of with_thousand_seps_sum.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c: Unconditionally include locale.h.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (random_number): Use lrand48 if available.
	(random_float): Use drand48 if available.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c: Include sys/time.h to get struct timeval.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c: Check for both SIGHUP and SIGUSR1 before using them.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (secs_to_human_time): Use print_decimal when printing
	total download time in seconds.

	* src/progress.c (print_row_stats): Use it to print total download
	time at the end of the download.
	(create_image): Ditto.

	* src/utils.c (print_decimal): New function; print small decimal
	numbers with more precision than large ones.

	* src/progress.c (print_row_stats): New function.  Print ETA after the
	download rate at the end of each row.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/gnu-md5.h: Unconditionally include limits.h.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* m4/wget.m4 (WGET_WITH_NLS): Don't check for locale.h.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Test for $LIBSSL instead of the old $ssl_success
	when deciding which MD5 to use.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Require Autoconf 2.59.

2005-06-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for drand48.

2005-06-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (parse_line): Check for alphanumerics.

2005-06-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (getftp): Delete trailing newlines from LIST output so
	lines don't come out with trailing \015\012 with -S.

2005-06-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/(dot_create): Remove unnecessary casts.

2005-06-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Logging and Input File Options): Don't claim that
	--base requires --force-html to work.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (PTR_FORMAT): Cast the result of sizeof to int before
	passing it to printf's %*.

	* src/retr.h: Declare output_stream and output_stream_regular.

	* src/ftp.h: Declare ftp_last_respline.

	* src/convert.h: Declare dl_url_file_map.

	* src/http.h: New file.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (with_thousand_seps): Handle negative numbers.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (human_readable): Remove intermediary cast to long; MSVC
	has problems casting *unsigned* __int64 to double.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (get_grouping_data): Force the use of separators in C
	locale.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (get_grouping_data): Force separator to "." rather than
	" " when "," is taken.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h: Use the system-provided fnmatch by default.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (set_progress_implementation): Type COLON as const
	char *.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (dot_update): Remove unused variable row_qty.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.h: Remove superfluous includes.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (i18n_initialize): Set all locale categories.

	* src/http.c (http_atotm): Temporarily set locale to "C".

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (mktime_from_utc): Renamed to timegm and moved to cmpt.c.
	Don't compile it if GNU timegm is available.
	(http_atotm): Use timegm.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (http_atotm): Correctly query the old locale value.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Improve "POST data file missing" error
	message.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c: Make cookies_now static.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config-post.h (alloca): Don't #define alloca under MinGW32,
	which defines it in malloc.h, included from mswindows.h.

2005-06-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config-post.h (alloca): Amend alloca declaration to take care of
	all Win32 compilers, not just MSVC and MinGW.

2005-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (with_thousand_seps): Correctly implement thousand seps
	consisting of more than one character.

2005-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (create_image): Mark the "eta" string for translation.

2005-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (secs_to_human_time): Ditto.

	* src/progress.c (create_image): Print more exact duration of very
	short downloads.

	* src/main.c (secs_to_human_time): Don't translate time suffixes "h",
	"m", and "s", which are not strictly SI, but are "accepted for use
	with SI".
	(secs_to_human_time): Print really small intervals as 0s, not
	0.00s.

2005-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): Print the downloaded and quota amounts with the
	"human_readable" function.

	* src/ftp.c (print_length): Ditto.

	* src/http.c (gethttp): Don't display thousand separators.

	* src/utils.c (with_thousand_seps): Rewritten to respect locale
	settings and to be type size agnostic.

2005-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-url.c (get_urls_file): Don't explicitly set entry->next to
	NULL since entry is already zeroed out.

2005-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (getftp): Always invoke SIZE, not only when continuing a
	download.

	* src/main.c (main): Ditto here.

	* src/progress.c (create_image): When the download is finished, print
	how long it took.

2005-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config-post.h: Replace the alloca declaration with the one from
	the latest Autoconf manual.  This should remove a warning with GCC
	on AIX.

2005-06-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* m4/wget.m4: Use proper GPL header.

2005-06-26  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.h: Define gai_strerror under MinGW.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (with_thousand_seps_sum): Now defined only if
	SUM_SIZE_INT is double.

	* src/wget.h (SUM_SIZE_INT): Instead of bothering with long, long
	long, __int64, and friends, simply either use wgint or double, end
	of story.  Since we know how to print either, we no longer need
	LARGE_INT_FMT.

	* src/sysdeps.h (LARGE_INT): Renamed to SUM_SIZE_INT to better reflect
	its intent, and moved to wget.h.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (with_thousand_seps_sum): Decrease buffer size so it
	cannot overrun add_thousand_seps's buffer.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (human_readable): Divide with 1024 instead of shifting
	so the operation can work with non-integer N.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (SPRINTF_WGINT): The correct format is %I64d, not just
	%I64.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (eta_to_human): New logic for more human-readable
	ETA.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (http_loop): Don't warn about wildcards in HTTP URLs if
	globbing isn't requested in the first place.

	* src/retr.c (retrieve_url): Temporarily turn off globbing when
	processing HTTP->FTP redirects.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (parse_set_cookies): Cast pointer subtraction to int
	before using it with %d; AIX compiler warns on this.
	Reported by Jens Schleusener.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/Makefile.in: No need to clean .libs.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Update -4/-6 documentation to
	reflect the fact that we no longer use AI_ADDRCONFIG.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in: No need to clean .libs.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in: Instead of creating configure.bat from
	configure.bat.in, simply make sure the correct EOL style in
	checked out of the repository.

2005-06-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in (DISTFILES): Don't split the sed invocation across
	several lines, Solaris make passes the backslashes to sed literally.

2005-06-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c: opt.verbose must be declared as int.

2005-06-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Don't prepend / here.

	* src/cookies.c (cookie_handle_set_cookie): Prepend / to PATH.
	(cookie_header): Ditto.

2005-06-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/gpl.texi (GNU General Public License): Split GPL text into a
	separate file and include it from wget.texi.  Used the latest
	template from gnu.org with the updated address of the FSF.

2005-06-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Use AC_LIB_HAVE_LINKFLAGS instead of
	AC_LIB_LINKFLAGS when checking for library functions.

	* configure.in: Don't waste time checking for headers and
	functions we know must be there.  But manually AC_DEFINE the
	functions that might be missing from non-Unix systems.

2005-06-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Move the large file check further up.  Only check
	for endianness if GNU md5 is used (it being the only file that
	needs endianness information).

2005-06-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Include m4/*.m4.

	* aclocal.m4: Renamed to m4/wget.m4.

2005-06-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Enable the user to turn off SSL autodetection and
	disable SSL using --without-ssl.

	* Makefile.in ($(srcdir)/stamp-h.in): Remove the aclocal.m4
	dependencies.

2005-06-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't indent #include lines.

2005-06-23  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* libtool.m4, ltmain.sh: Deleted.

	* configure.in: Replaced ugly libtool-based check for OpenSSL libs
	with a simpler config.rpath-based approach.

	* Makefile.in, src/Makefile.in: Removed libtool support.

	* m4/lib-link.m4, m4/lib-prefix.m4, m4/lib-ld.m4, config.rpath:
	config.rpath macros taken from gettext 0.14.5.

2005-06-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* util/dist-wget: Port to subversion.

2005-06-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (read_file): Ditto.

	* src/main.c (main): Use struct_fstat.

	* src/mswindows.h (struct_fstat): Define a struct_fstat to deal with
	the fact that Borland 5.5 has 64-bit stat, but not 64-bit fstat!

2005-06-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h: Remove code that deals with Watcom.

2005-06-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (strpbrk): Removed.
	(mktime): Removed.
	Include <time.h>.

2005-06-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Contributors): Updated list of principal
	contributors.

2005-06-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't check for strpbrk and mktime.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h: Include the stdbool.h/_Bool/bool blurb from Autoconf.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c, connect.c, host.c: Replace instances of #ifdef
	ENABLE_DEBUG if (opt.debug) {...} #endif with IF_DEBUG {...}.

	* src/main.c: Rename the IF_DEBUG defined here to WHEN_DEBUG.

	* src/wget.h (IF_DEBUG): New macro.
	(DEBUGP): Define in terms of IF_DEBUG.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_lockable_boolean): Removed.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Only handle --set-cookies (and assert that
	cookie jar exists) if opt.cookies is true.  Failure to do so
	triggered the assert when --no-cookies was used and the server
	sent a Set-Cookie header.  Ouch!

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (struct cookie): Use 1-bit bitfields for booleans
	which makes the structure takes less space at no cost in
	complexity.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (select_fd): Expect select() to exist.

	* src/utils.c (xsleep): Always use select() as sleep fallback on
	non-Windows platforms.

	* src/ptimer.c: Delete the implementation of PTIMER_TIME.

	* src/main.c: Assume existence of signal(), test for different signal
	names instead.

	* src/cmpt.c: Better document reasons why certain functions are
	included.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/all: Use bool instead of int and false/true instead of 0/non-0
	for boolean variables and values.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/Makefile.in: Remove the manually maintained dependency list;
	make all object files depend on every header.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/Makefile.in ($(OBJ)): Add the config.h dependency.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Use the more standard authorship phrase "and others".

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Wgetrc Commands): Remove the "lockable boolean"
	feature.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Overview): Remove explicit vertical spacing.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Mailing List): Remove reference to the wget-cvs list,
	which no longer exists.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/texinfo.tex: Update with a non-prehistoric version.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/texi2pod.pl: Locate perl using the "env" program, so we don't
	need to modify texi2pod.

	* doc/Makefile.in (wget.pod): Work with texi2pod.pl directly instead
	of generating it from texi2pod.pl.in.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't check for signal.h.  Remove the
	AC_HEADER_TIME check.  Remove the test for ANSI C prototypes.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for C99 conformant stdbool.h.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Assume existence of gettimeofday and select.
	gettimeofday exists on all platforms we care about (except for
	Windows where Windows-specific functions are used instead), and
	select exists virtually everywhere.

	* configure.in: Assume existence of strerror, signal, strstr, and
	memmove, which are all required by ANSI C.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* config.sub, config.guess: Updated from canonical location.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* autogen.sh: New file.

	* Makefile.svn: Deleted, replaced with the even simpler (and more
	standard) `autogen.sh' script.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* README.svn: Renamed to README.checkout.  Edited to mention the
	autogen.sh script.

2005-06-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* MAILING-LIST: Remove reference to the obsolete `wget-cvs'
	mailing list.

2005-06-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.cvs: Renamed to Makefile.svn.

	* README.cvs: Renamed to README.svn.

2005-06-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c, ptimer.c, sysdep.h, utils.c: Use #elif to simplify reading of
	chained if-else-else-else-... statements.

2005-06-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c: Rename "mapping" to "cell" to avoid confusion with the
	term "mapping" (or "map") sometimes being used for the entire hash
	table.  Also rename "non-empty" to "occupied" for easier reading
	of if (!NON_EMPTY (...)) ... .

2005-06-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/all: Return type of signal handlers is `void'.  Include signal.h
	unconditionally.

	* src/all: Don't explicitly cast values returned by malloc.  We no
	longer support ancient compilers that don't declare malloc, and we
	never supported C++ builds.

2005-06-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/ansi2knr.1: Removed.

2005-06-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't check for the return type of signal
	handlers; C89 requires it to be void.

2005-06-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_lockable_boolean): Don't recognize literal "2" and
	"-1" values; unlike 0 and 1, those should never be exposed to the
	user.  Update the error message to be more self-consistent, as
	proposed by Benno Schulenberg.

2005-06-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/all: Don't declare errno.  Include both time.h and sys/time.h,
	as long as sys/time.h exists.  Don't dereference function pointers
	when invoking the functions they point to.

	* src/cmpt.c (memmove): Remove function mandated by C89.
	(strerror): Ditto.
	(strstr): Ditto.

	* src/all: Undo the K&R-ization changes from 2005-05-03.

	* src/all: Remove support for K&R compilers: use C89 function
	declarations, remove definition of PARAMS, remove support for
	varargs, and remove ansi2knr.  Assume the presence of time.h,
	string.h, and other headers mandated by C89.

2005-06-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* aclocal.m4: Remove support for K&R compilers.

2005-06-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): When -E is in use, check for file existence
	after appending ".html" to the name and modify the file name if
	necessary.

2005-06-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Don't free "head" before using it to save
	headers.

2005-06-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (socket_has_inet6): Removed.

	* src/host.c (lookup_host): Don't use the AI_ADDRCONFIG getaddrinfo
	hint.

2005-06-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_lockable_boolean): Improve the error message so it
	lists the more useful values first.

2005-06-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Logging and Input File Options): It's --no-verbose,
	not --non-verbose.

2005-06-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Also report the system error when the POST
	data file is missing.

2005-06-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.h (ip_address): Remove the trailing comma from the type
	enum in the no-IPv6 case.

	* src/main.c (struct cmdline_option): Remove the trailing comma from
	the enum.

	Reported by Jens Schleusener.

2005-06-15  Benno Schulenberg  <benno@nietvergeten.nl>

	* src/ftp.c, http.c, connect.c, cookies.c, html-url.c, init.c, res.c:
	Gettext-ize messages that were previously missed.

2005-06-06  Keith Moore  <keithmo@exmsft.com>

	* doc/Makefile.in: Fix a harmless (but annoying) installation warning.

2005-05-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (strpbrk_or_eos): Check for a recent GCC version before
	using the statement-as-expression extension.

2005-05-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_spec_header): Don't split the string along the
	commas using cmd_vector; just append the new value using
	vec_append instead.

	* src/utils.c (vec_append): New function.

2005-05-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Don't attempt to "skip short body" if we're
	issuing a HEAD request (in which case the response head is not
	followed by a body).

2005-05-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (HTTP Options): Removed statement that redirect in
	response to POST is "technically disallowed", which I cannot find
	in rfc2616 nor in rfc1945.  Even if that were technically the
	case, the widespreadedness of such responses would make the
	prohibition irrelevant.

2005-05-27  Andreas Beckmann  <debian@abeckmann.de>

	* src/html-url.c (tag_handle_link): Mark the content from the <link
	src="..."> tag as expecting HTML.

2005-05-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (http_atotm): Document the origin of the "cookie date"
	format.

2005-05-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (setval_internal): Report exact command name alongside
	the "display name".

2005-05-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (update_cookie_field): Explicitly cast -1 to time_t to
	cope with systems where time_t is unsigned.

	* src/cookies.c: Remove unnecessary casts to time_t from values
	already of that type.

2005-05-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (ftp_loop_internal): Same here.

	* src/http.c (http_loop): Don't clobber the file when -c is specified
	and the first attempt to retrieve the file fails.

2005-05-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (ssl_check_certificate): Print all issues with a
	certificate.

2005-05-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cleanup): Don't free the non-existent opt.ftp_acc.  Free
	the SSL-related stuff.

2005-05-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (print_length): Consistently print \n at end of the
	"Length" line.

2005-05-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-basic.c: Don't xfree() the line returned by ftp_response if
	the returned code is not FTPOK.

2005-05-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (ssl_connect): Announce the beginning and the end of
	the SSL handshake when in debug mode.

	* src/wget.h (PTR_FORMAT): New macro for easier printing of pointer
	values.  Use %0*lx along with PTR_FORMAT instead of %p.

2005-05-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Would forget to close the connection when
	keep_alive was not used.

2005-05-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Overview): Document --[no-]proxy as primarily being
	used to turn *off* the use of proxies.

2005-05-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (pattern_match): Document the code that decides
	whether "*" matches ".".

2005-05-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (rewrite_shorthand_url): Don't rewrite "https://host" to
	"ftp://https//host" when SSL is not used.

2005-05-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-ls.c (ftp_index): Use %d to print the port number, which is
	now int.
	From Steven M. Schweda's VMS patches.

2005-05-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (ssl_init): Always use SSL_VERIFY_NONE, so that the
	handshake finishes even if the certificate is invalid.  That way
	ssl_check_server_identity can provide better diagnostics on why
	the verification failed.

2005-05-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (ssl_check_server_identity): Renamed to
	ssl_check_certificate because it does more than just checking the
	server's identity.
	(ssl_check_certificate): Tell the user about
	--no-check-certificate.

2005-05-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (pattern_match): New function.
	(ssl_check_server_identity): Treat peer certificate common name as
	wildcard.

2005-05-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (HTTPS (SSL/TLS) Options): Explain certificate
	checking in more detail.

2005-05-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/res.c (res_register_specs): Correctly pass pointers to
	hash_table_get_pair.

2005-05-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (ssl_check_server_identity): Print certificate subject
	and issuer.

2005-05-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Call ssl_check_server_identity.

	* src/openssl.c (ssl_check_server_identity): New function, verifies
	that the host name in the certificate matches the actual host
	name.
	(verify_cert_callback): Removed, since it didn't do anything
	except returning the preverify_ok argument.

	* src/connect.c (fd_transport_context): Allow retrieval of the context
	pointer registered with fd_register_transport.

2005-05-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Test for OpenSSL includes we actually need.

2005-05-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (verify_cert_callback): Renamed from verify_callback.
	Always return the received "ok" value.  Print the X509 name in
	debug mode.
	(ssl_init): Enable partial writes in SSL context.

2005-05-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/netrc.c (parse_netrc): Explicitly check for assignment != NULL
	to silence warning from Borland C.

	* src/url.c (sync_path): Don't unnecessarily increment p.
	(url_parse): Don't unnecessarily set url_encode to NULL just
	prior to return from the function.

2005-05-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/log.c (escnonprint_internal): Place variable declarations
	before other statements.

2005-05-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (run_command): Correctly interpret the return value of
	parse_line.
	(commands): Re-alphabetize.

2005-05-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (http_loop): Check for wildcards in the URL path
	component, not in the whole URL.

	* src/ftp.c (ftp_loop): Check for wildcards in URL path before
	unescaping, so the users can escape globbing metacharacters with %
	escapes.

2005-05-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-url.c: Include recur.h.

	* src/http.c (request_new): Define as accepting no args.

2005-05-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/texi2pod.pl.in: Allow an "EXAMPLES" section.

2005-05-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (strpbrk_or_eos): Made inline.  Use strchr(s, '\0') for
	finding the NUL char position.

2005-05-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (decide_copy_method): Renamed to char_needs_escaping.
	Since it now returns only two possible values, change it to return
	boolean (int).

2005-05-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (decide_copy_method): Never cause reencode_escapes to
	decode % escapes; it is too intrusive and breaks some servers.

2005-05-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): When tunnelling SSL traffic over proxy with
	CONNECT, we're really talking to the remote server directly.
	Because of this, the request-line argument must be the URL path
	rather than the whole URL, as it would be when using regular
	proxies.
	Reported by Charles Lane.

2005-05-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-basic.c (ftp_request): Prevent newlines in VALUE causing
	inadvertent sending of multiple FTP commands.

2005-05-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (print_help): Fix wording of --secure-protocol help text.

2005-05-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_spec_useragent): Allow empty User-Agent.

	* src/http.c (gethttp): Don't print "unknown authentication scheme"
	for failed Basic authentication.
	(SET_USER_AGENT): Don't set user-agent if opt.useragent is empty.
	(gethttp): Use alloca for allocation of www_authenticate.

2005-05-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (strstr): Updated from glibc 2.3.5.

2005-05-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (HTTP Options): Document empty user-agent.

2005-05-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Explain that the read timeout
	really refers to idle timeout.
	(Download Options): Mention that decimal and subsecond values may
	be used for timeouts.

2005-05-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Set MAKEINFO to "true" so build doesn't fail for
	users without either makeinfo or the pre-packaged info files.

2005-05-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in ($(srcdir)/stamp-h.in): Don't print the line with
	the comment about running autoheader.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (touch): Set access time to current time.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_unescape): Don't unescape %00, it effectively
	truncates the string.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (limit_bandwidth_reset): Reset sleep_adjust.
	(limit_bandwidth): Don't allow huge "adjustment" values that
	result from being suspended for a while.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): Propagate option name to setoptval.

	* src/init.c (setoptval): Accept another argument, OPTNAME.  Propagate
	that argument as the option name independently of the actual
	command, determined by command_by_name(com).

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/log.c (copy_and_escape): Slightly reduce code repetition between
	the two loops.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/log.c (copy_and_escape): Replace the FOR_URI argument with a
	slightly more general mechanism for specifying different kinds of
	escape.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (parse_line): Make the return value indicate whether
	there was a syntax error or a setter failed.
	(run_wgetrc): Return an indication on whether an error has been
	encountered.
	(initialize): Abort if there have been errors running either
	.wgetrc file.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (http_atotm): Zero out the whole struct tm being passed
	to strptime.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-basic.c (ftp_response): Fix printing FTP server response.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: We're using GFDL 1.2, not 1.1.

2005-05-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Contributors): Updated.

2005-05-05  Charles C.Fu  <ccwf@bacchus.com>

	* src/utils.c (proclist): Strip leading slash when calling fnmatch
	too, otherwise wildcard comparisons always fail.

2005-05-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h: If gettext was found but libtintl.h wasn't, declare
	gettext's return type to avoid type mismatches.

2005-05-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_parse): Rename label `error' to avoid conflict with
	identifier.

	* src/retr.c (fd_read_body): Rename label `out' to avoid conflict with
	identifier.
	(fd_read_hunk): Use explicit double constant.
	(retrieve_from_file): Don't use string concatenation.
	(sleep_between_retrievals): Make sure xsleep is called with a
	`double' argument.
	(no_proxy_match): Define as static, like it is declared.

	* src/progress.c (bar_create): Use 0.0 instead of 0 because K&R
	compilers can't automatically promote it.

	* src/http-ntlm.c (ntlm_output): Replace \xHH sequences with \OOO for
	the sake of old compilers.

	* src/ftp.c (ftp_loop_internal): Don't use string concatenation.

	* src/http.c (request_send): Use explicit double constants when
	calling fd_read and fd_write.
	(post_file): Ditto.
	(gethttp): Ditto.
	(skip_short_body): Ditto.

	* src/ftp-basic.c: When calling fd_write, specify the last argument as
	a `double' constant for the sake of K&R compilers which don't see
	the prototype and therefore can't promote it to double
	automatically.

	* src/cookies.c (cookie_jar_load): Rename abort label to abort_cookie
	to avoid name conflict in K&R compilers.

2005-05-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* INSTALL: Document environment variables affecting configure,
	especially $CC.

	* INSTALL: Mention that make install requires root.

2005-04-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c (posix_init): Since we allow _POSIX_MONOTONIC_CLOCK==0,
	it is not enough to check for _POSIX_MONOTONIC_CLOCK-0, we must
	also check for defined(_POSIX_MONOTONIC_CLOCK).

2005-04-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't set ipv6 to yes only because struct
	sockaddr_in6 was found.  Stop the rest of the IPv6 checks when one
	check fails.  Abort if IPv6 was explicitly requested, but not
	found.

2005-04-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/Makefile.top.bor: Use MAKEDIR for make clean too.

2005-04-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/Makefile.src.bor: Don't suppress unreachable code
	warning.

2005-04-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/Makefile.src.bor: Don't delete executables other than
	wget.exe.  Delete various auxilliary files created by the Borland
	build process.

2005-04-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (commands): Wrap the use of opt.random_file in #ifdef
	HAVE_SSL.

2005-04-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Correctly set the user agent.

2005-04-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c, hash.c, connect.c, host.c, http.c: Remove unreached code,
	such as "break" following return or abort.

2005-04-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* NEWS: Advertise new-style syntax for --no-dns-cache instead
	of --dns-cache=off.

2005-04-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* INSTALL: Mention --disable-ntlm.

2005-04-28  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/wget.dep: Rename gen_sslfunc.c to openssl.c.

2005-04-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/main.c: Map --ftp-password, --http-password and --proxy-password to
	the new ftppassword, httppassword and proxypassword commands
	respectively.  Document the --user and --password options in the help
	string.

2005-04-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/ftp.c: Add support for --user and --password.

	* src/http.c: Add support for --user and --password.

	* src/init.c: Deprecated ftppasswd, httppasswd, login, passwd and
	proxypasswd commands.  Added ftppassword, ftpuser, httppassword,
	password, proxypassword and user commands.

	* src/main.c: Renamed --ftp-passwd to --ftp-password.  Added --ftp-user,
	--http-password, --password, --proxy-password and --user.  Deprecated
	--http-passwd and --proxy-passwd.  Added documentation for new options
	and removed documentation for deprecated options in the help string.

	* src/options.h (struct options): Added user and passwd members to handle
	--user and --password respectively.  Renamed ftp_acc and ftp_pass
	members to ftp_user and ftp_passwd for consistency.

2005-04-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* doc/wget.texi: Fixed a broken reference to Security Considerations
	section in tex-generated documents (like the man page).

2005-04-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* doc/wget.texi: Document --user, --password, --ftp-user and the
	corresponding Wgetrc command. Renamed --ftp-passwd to --ftp-password,
	--http-passwd to --http-passwd and --proxy-passwd to proxy_password.
	Renamed ftp_passwd to ftp_password, http_passwd to http_passwd and
	proxy_passwd to proxy_password. Removed documentation for the
	deprecated login command.

2005-04-27  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* NEWS: Mention the new --ftp-user, --ftp-password, --user and
	--password options, the name changes for --http-passwd and
	--proxy-passwd and the deprecation of login and passwd commands.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (ssl_init): Ditto.

	* src/options.h (struct options): Allow separate specification of key
	type and certificate type.

	* src/init.c (cmd_spec_cert_type): Provide a "der" synonym for "asn1"
	certificate encoding.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c (init_prng): Disable the weak random seed by default.

	* src/http.c (gethttp): Simplify SSL initialization; disable SSL when
	anything goes wrong with the initialization.

	* src/options.h (struct options): New option opt.random_file.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (print_help): Advertise "DER", not "ASN1".

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c: Wrap private key commands in IF_SSL.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_spec_useragent): Free the old value of
	opt.useragent before setting the new one.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Improve wording of command descriptions.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Document the new form of SSL/TLS options.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (HTTPS (SSL/TLS) Options): Document --random-file.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (HTTP Options): Mention --keep-session-cookies when
	documenting --post-data.

2005-04-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Fix bind address cindex entry that
	broke concept index generation.

2005-04-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/openssl.c: Renamed "gen_sslfunc.c" to "openssl.c" and
	"gen_sslfunc.h" to "openssl.h".  This reflects the intent of
	openssl.c encapsulating the OpenSSL-specific code.

2005-04-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c: Renamed "closure" (a synonym for context in some
	cultures) to "place", which more accurately reflects the usage.

2005-04-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Call skip_short_body only if keep_alive is in
	use.
	(gethttp): Send the User-Agent header with the CONNECT request as
	well.

2005-04-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/gen_sslfunc.c (ssl_init): Use default locations for loading the
	certificate bundles.
	(ssl_init_prng): Disable the cryptographically weak PRNG
	initialization fallback.

	* src/init.c: Renamed SSL command-line arguments and wgetrc commands.
	(defaults): Check the server certificate by default.

2005-04-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (cookie_handle_set_cookie): Delete the part of the
	path after the trailing slash.

	* src/http.c (gethttp): Call cookie_handle_set_cookie with path that
	begins with '/'.

2005-04-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Option Syntax): Document boolean options.  Include
	the option syntax in the man page.
	(Directory Options): Removed stray text after --protocol-directories.

2005-04-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (HTTP Options): Improved entry on
	--keep-session-cookies.

2005-04-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Directory Options): Removed stray text after
	--protocol-directories.

2005-04-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (option_data): Removed support for the undocumented flag
	--use-proxy.

2005-04-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (option_data): Don't treat -Y as a boolean switch; treat
	it as a value switch instead, so "-Y off" continues to work.

2005-04-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Document --retry-connrefused.

2005-04-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Advanced Usage): Don't advertise the non-existent
	`-s' option.

2005-04-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/Makefile.in (wget.info): Depend on version.texi as well.

	* doc/wget.texi: Simplify copyright.  Replace remaining instances of
	--OPTION=off with --no-OPTION.

2005-04-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (aprintf): Delete unreachable statement.

2005-04-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (cmp_prefer_ipv4): New function.
	(cmp_prefer_ipv6): New function.
	(lookup_host): Use the appropriate comparator according to
	opt.prefer_family.

	* src/init.c: New option prefer_family.

	* src/host.c (is_valid_ipv6_address): Spell NS_* constants in lower
	case to avoid clash with system headers.
	(lookup_host): Reorder the addresses so that IPv4 ones come first.

	* src/utils.c (stable_sort): New function.

2005-04-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (retryable_socket_connect_error): Return 0 for
	ENETUNREACH and EHOSTUNREACH.

2005-04-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Don't claim that -6 accepts mapped
	IPv4 addresses.

2005-04-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Document --prefer-family.

2005-04-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (base64_encode): Treat input as unsigned chars.
	Required for correct encoding of binary stuff.

2005-04-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http-ntlm.c: Format the function definitions in an
	ansi2knr-friendly fashion.

2005-04-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c: Reenable the memmove implementation for systems that
	lack it.

	* src/http.c (gethttp): Store the "authorized" state of the persistent
	connection.
	(request_remove_header): New function.
	(gethttp): Don't send the "Basic" authentication if the connection
	is already authorized.

2005-04-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Documented the SSL command-line options.

2005-04-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Wgetrc Commands): Document ftp_passwd.
	(FTP Options): Document --ftp-passwd.

2005-04-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/texi2pod.pl.in: First process @@ then @}, so @samp{-wget@@} is
	interpreted correctly.

2005-04-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Handle multiple WWW-Authentication headers,
	only one of which is recognized.  Those are sent by IIS with NTLM
	authorization.
	(create_authorization_line): Propagate information whether
	authorization is finished.
	(gethttp): Only stop authorization when it's really finished, not
	after fixed two steps.

2005-04-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/eo.po: Added Esperanto translation.

2005-04-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (print_help): Print the EGD option outside the cluster of
	SSL options.

2005-04-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http-ntlm.c (ntlm_output): Fix setting the domain.
	Suggested by Sami Krank.

2005-04-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/gen_sslfunc.c (ssl_init): Fix warning message text; mark the
	message as translatable.

2005-04-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/vi.po: Added Vietnamese translation.

2005-04-20  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/connect.c: Set IPV6_V6ONLY socket option when -6 switch is used.

2005-04-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Document behavior of -6 wrt mapped IPv4 addresses.

2005-04-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Document IPv6 related options.

2005-04-20  FUJISHIMA Satsuki  <sf@FreeBSD.org>

	* src/http.c (request_set_header): Fix the check whether a new header
	needs to be allocated.

2005-04-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (base64_encode): Use the parameter order that makes more
	sense.  Return the length of the base64 written.  Updated all
	callers.

2005-04-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Update mailing list information.

2005-04-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Don't claim that --no-dns-cache is
	necessary for dyndns servers -- it's not.

2005-04-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* MACHINES: Removed.

2005-04-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/snprintf.c (fmtstr): Declare VALUE as const char *.
	Based on patch by Russ Allbery.

2005-04-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/snprintf.c (fmtfp): More correct handling of significant digit
	count with %g -- 0.002 has one significant digit, not three.

2005-04-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (request_set_header): Free NAME when VALUE is NULL and
	freeing the header name is requested.

2005-04-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/snprintf.c: Use the PARAMS macro to handle prototypes.  Write
	function definitions in the ansi2knr-friendly way.
	(fmtstr): If string precision is specified, don't read VALUE past
	it.
	(dopr): Actually print %g and %e formats.
	(fmtfp): Fix a bug that caused 0.01 to be printed as 0.1.
	(fmtfp): Use LLONG in floating point conversions to be able to
	convert more digits.
	(fmtfp): Interpret precision as number of significant digits with
	%g.
	(fmtfp): Omit trailing decimal zeros with %g.

	* src/snprintf.c: Don't include <ctype.h> because none of it is used.
	Include strings.h/string.h, as per Autoconf.

2005-04-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (fd_read_body): Respect read timeout with non-interactive
	or no progress gauge -- treat ETIMEDOUT specially only when
	progress_interactive.
	Reported by FUJISHIMA Satsuki.

2005-04-16  FUJISHIMA Satsuki  <sf@FreeBSD.org>

	* src/http.c (gethttp): Don't use HTTP/1.0 persistent connections over
	proxy.

2005-04-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c: Use _POSIX_TIMERS - 0 > 0, which handles the case when
	_POSIX_TIMERS is defined but empty, as well as the case when it is
	undefined.  Do the same with the check for _POSIX_MONOTONIC_CLOCK.
	Suggested by Larry Jones.

2005-04-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c: Check that _POSIX_TIMERS is defined as well as > 0.
	Problem reported by Steven M. Schweda.

2005-04-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (skip_short_body): Print the skipped body data in debug
	mode.
	(skip_short_body): Don't skip more than 4k of body data.
	(skip_short_body): Return whether the skipping was successful.
	(gethttp): If skip_short_body failed, invalidate the connection.

2005-04-12  Gisle Vanem  <giva@bgnett.no>

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): Open the output file in binary mode.

2005-04-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/xmalloc.c (register_ptr): Warn the user to increase SZ prior to
	aborting.

2005-04-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c: Conditionalize including config.h on HAVE_CONFIG_H
	instead of on STANDALONE.

2005-04-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/gen_sslfunc.c (ssl_print_errors): Made static.
	(ssl_print_errors): Eliminate potentially dangerous fixed-size
	error buffer.  Passing NULL to ERR_error_string causes it to use
	its own static buffer, which is fine for our purposes.

	* src/gen_sslfunc.c: Include gen_sslfunc.h.  Make the declarations of
	ssl_init and ssl_conect match the actual definitions.
	(ssl_connect): Simply return a boolean, the SSL context is no
	longer useful as a return value.

	* src/retr.c: Don't include SSL headers; we don't need them.

2005-04-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/convert.c (convert_cleanup): Free converted_files.

2005-04-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config-post.h: Don't define _VA_LIST under Solaris; it breaks
	compilation with GCC 3.4 under Solaris 10.  (It was defined to
	avoid a warning with previous versions of GCC.)

2005-04-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (DEBUGP): Use __builtin_expect to give a hint to GCC that
	opt.debug is false in the vast majority of cases.

2005-04-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config-post.h: Declare alloca as void *, not char *.

2005-04-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c: Use "static const" in preference to "const static".
	Sun's cc warns that "storage class after type is obsolescent".

	* src/url.c (urlchr_table): Don't mark ~ as unsafe, too many broken
	web sites are confused when ~ is changed to %7E.  Their servers
	redirect /%7Efoo/ to /~foo/, which Wget again accesses using %7E,
	causing further redirections, therefore looping infinitely.  See
	Debian bug #301624 for an example.

2005-04-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/recur.c (download_child_p): When -p is used, (temporarily)
	ignore accept/reject rules for HTMLs, even when they are at the
	maximum recursion depth.  That is because with -p we are, if
	necessary, overstepping the max. depth to get the requisites.

2005-04-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http-ntlm.c (ntlm_output): Use "char", not "unsigned char" for
	ntlmbuf.  Our base64 functions accept char anyway.
	(ntlm_output): Join up the format string, since we nominally
	support K&R compilers.
	(ntlm_output): Ditto.

2005-04-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/alloca.c: Include wget.h to be able to use xmalloc.  In addition
	to defining malloc to xmalloc, also define free to xfree.

2005-04-08  Larry Jones  <lawrence.jones@ugsplm.com>

	* doc/Makefile.in (wget.info): Don't use $< in an explicit rule.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/Makefile.src: Compile ptimer.c and http-ntlm.c.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c: Use Windows timers under Cygwin, whose POSIX timer
	implementation is incomplete.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c (struct ptimer): Remove the unused initialized field.

	* src/ptimer.c: Renamed function parameters from WT (which used to
	stand for wget_timer or wtimer) to PT.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c (ptimer_init): In fact, _POSIX_MONOTONIC_CLOCK needs to
	be >= 0.

	* src/ptimer.c (ptimer_init): Check whether _POSIX_MONOTONIC_CLOCK is
	defined instead of whether it's greater than 0.  glibc defines it
	to 0, but still makes it available via sysconf.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c (ptimer_init): Explicitly check that
	_POSIX_MONOTONIC_CLOCK is *both* defined and >=0.  (Undefined
	symbols are >=0.)

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c (ptimer_diff): Fix typo affecting Windows build.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c (posix_init): Be smarter about choosing clocks.  In
	decreasing order of preference, use CLOCK_MONOTONIC,
	CLOCK_HIGHRES, and CLOCK_REALTIME.
	(ptimer_allocate): Removed.

	* src/ptimer.c: Refactor the code by cleanly separating the
	architecture-dependent code from the architecture-independent
	code.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.c (str_to_int64): Rename OVERFLOW and UNDERFLOW to
	INT64_OVERFLOW and INT64_UNDERFLOW, since those names are used.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: When checking for OpenSSL headers, check for all
	the ones that Wget is using.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Use it.

	* aclocal.m4 (WGET_POSIX_CLOCK): Check whether -lrt is needed to
	use POSIX clock functions like clock_gettime.

2005-04-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in ($(srcdir)/stamp-h.in): Don't attempt to run
	autoheader automatically; it breaks things with fresh CVS builds.

2005-04-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ptimer.c: New file.  Move the "wtimer" functions from utils.c to
	this file and rename them to ptimer_.

2005-04-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (NO_ADDRESS): Define NO_ADDRESS only after the system
	headers have been included.

2005-04-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (pconn): Include NTLM data, which is per-connection.
	(known_authentication_scheme_p): Recognize NTLM authorization.
	(create_authorization_line): Call ntlm_input and ntlm_output.

	* src/http-ntlm.c: New file, donated by Daniel Stenberg and originally
	written for curl, heavily modified for Wget.

	* src/utils.c (base64_encode): Relocated from http.c, since it is now
	used by http-ntlm.c, and will possibly be used elsewhere.
	(base64_decode): New function, originally based on code from GNU
	recode.

2005-04-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Allow the user to disable NTLM authorization.
	Make sure NTLM is disabled if OpenSSL is unavailable.  If NTLM is
	*explicitly* requested and OpenSSL is unavailable, abort.

	* configure.in: Renamed USE_* to ENABLE_*.

2005-04-05  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/Makefile.in: removed string_t.c from list of source files.

2005-04-04  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* src/string_t.c: Removed.

	* src/string_t.h: Removed.

2005-04-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (rewrite_shorthand_url): Only accept recognized schemes.
	That way "foo:80" will correctly be rewritten to "http://foo:80"
	instead of left unchanged and ultimately rejected because of
	"unsupported scheme foo".

2005-04-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (ftp_loop): Ditto.

	* src/ftp-basic.c (ftp_pasv): Use the xzero shorthand for memset(0).
	(ftp_lpsv): Ditto.

2005-03-31  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (number_to_string): Avoid explicit 64-bit constants;
	construct them by multiplication at compile-time.

	* src/utils.c, elsewhere: Don't append "L" to 32-bit integer
	constants; we aren't really compilable on 16-bit systems anyway.

	* src/hash.c (prime_size): Remove primes larger than 2^31, but include
	2^31-1, which is prime.

2005-03-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (string_set_to_array): New function.

	* src/convert.c: Replace the use of "slists" with sets/hash-tables,
	which in fact suit the intended purpose much better.
	downloaded_html_list is removed altogether.

2005-03-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (numdigit): More correct handling of negative numbers.

2005-03-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.h (enum): Rename GLOBALL, GETALL, and GETONE to
	GLOB_GLOBALL, GLOB_GETALL, and GLOB_GETONE to avoid conflict with
	Linux headers.

2005-03-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/POTFILES.in: Removed headers.c and rbuf.c.

2005-03-22  Joseph Caretto  <jcaretto@pitt.edu>

	* doc/texi2pod.pl.in: Handle asis again.  It used to work (see the
	2001-12-11 entry), but the local change was lost in the upgrade
	to 1.4.

2005-03-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Print the human-readable size.

	* src/ftp.c (getftp): Print the human-readable size of the file to be
	downloaded.

	* src/utils.c (human_readable): New function.

	* src/utils.c: Renamed "legible" to "with_thousand_seps",
	"legible_large_int" to "with_thousand_seps_large", and "legible_1"
	to "add_thousand_seps".

2005-03-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Inhibit persistent connections when talking to
	proxies, as mandated by RFC 2068.

2005-03-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (unescape_single_char): New function.
	(url_escape_dir): Use it to unescape slashes in directory
	components.
	(url_string): Escape unsafe chars in host name, except for the ':'
	charaters, which can appear in IPv6 addresses.

	* src/main.c (main): Don't access the cookie jar directly.

	* src/log.c (escnonprint_internal): Correctly calculate the needed
	string size.  Don't forget the buffer's new size after having
	reallocated it.
	(log_cleanup): New function.  Free the escnonprint ring data.

	* src/init.c (cleanup): Don't free the cookie jar explicitly, it is
	now done by http_cleanup.
	(cleanup): opt.user_headers is now a vector, free it with
	free_vec.

	* src/http.c (gethttp): Make sure to free the request data, the status
	message, and the response data before returning from the function.
	(save_cookies): New function.
	(http_cleanup): Free the cookie jar here.

	* src/hash.c: Renamed string_hash to hash_string and ptrhash to
	hash_pointer.  Exported hash_pointer.

	* src/xmalloc.c: Organized malloc_table (previously malloc_debug) as a
	simple EQ hash table.  register_ptr and unregister_ptr are now of
	O(1) complexity.

	* src/xmalloc.c: Renamed "*_debug" to debugging_* and "*_real" to
	checking_*.

2005-03-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_file): Use concat_strings.

	* src/http.c (basic_authentication_encode): Use concat_strings.

	* src/ftp-ls.c (ftp_index): Use concat_strings.

	* src/ftp-basic.c (ftp_request): Use concat_strings.

	* src/utils.c (concat_strings): New function.

2005-03-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-basic.c (ftp_login): Don't free the string if ftp_response
	returned an error status because the line didn't get allocated in
	the first place.

2005-03-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (fd_read_body): Undo the 2004-11-18 change.  Instead,
	always be "exact".

2005-03-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (read_http_response_head): Limit the response size to 64k
	bytes.

	* src/retr.c (fd_read_hunk): Accept a MAXSIZE argument that limits the
	number of bytes the function is allowed to allocate.
	(fd_read_line): Limit the line to 4096 bytes.

2005-03-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h: Include options.h after wgint has been defined.

	* src/options.h (struct options): Declare options processed with
	cmd_bytes as wgint, not long.

2005-03-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (debug_test_md5): Moved to gen-md5.c.

	* src/mswindows.h: Don't declare inet_ntop, since we don't use it.

	* src/mswindows.h: For consistency, also wrap closesocket, it being
	a Winsock call.

	* src/mswindows.h: Don't declare sleep and usleep; we're defining
	xsleep now.

	* src/mswindows.h (mkdir): Don't special-case Borland C, _mkdir
	works there as well.

	* src/host.c: Don't include winsock header files; the correct ones
	are already included by mswindows.h.

	* src/mswindows.c (xsleep): Round toward the nearest millisecond
	in an attempt to avoid average short sleeps.

	* src/utils.c (wtimer_granularity): Report correct values for
	Windows timers and for high-resolution timers.

	* src/utils.c (wtimer_initialize_once): New function, called to
	initialize the timer frequency.

	* src/utils.c: Replace the use of GetSystemTime with high-resolution
	counters under Windows.  When high-resolution counters are
	unavailable, use GetTickCount().

2005-03-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (simple_atof): Handle negative numbers; skip whitespace
	before the number.
	(simple_atoi): Ditto.  Also, check for overflow and underflow.
	(cmd_number): Bail out on negative numbers.
	(parse_bytes_helper): Ditto.

2005-03-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/Makefile.src.bor: Reenable warnings under Borland C,
	disabling only specific warnings.  Generate Pentium Pro code by
	default.

2005-03-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (read_file): Don't use wgint for file size; LFS won't
	work since the file is mmap'ed as a whole.

	* src/options.h: Don't include stdio.h.

	* src/log.c: Ditto.

	* src/init.c: Disambiguate assignment from non-zero test to avoid
	Borland C warning.

	* src/http.c (response_new): Don't needlessly post-increment count.

	* src/hash.c: Include stdio.h.

	* src/gnu-md5.h: Don't include stdio.h.

	* src/getopt.h (struct option): Always use const.

	* src/ftp.c (getftp): Avoid unnecessary assignment to RES to avoid
	Borland C warning.

	* src/ftp-ls.c: Disambiguate assignment from non-zero test to avoid
	Borland C warning.

	* src/cmpt.c (strptime_internal): Don't initialize rp_backup when
	!_NL_CURRENT to avoid Borland C warning.

2005-03-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (fopen_excl): Fix parse error when O_BINARY is
	available.

2005-03-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_parse): Reject port numbers larger than 65535.  We
	also check for overflow while parsing port numbers.

2005-03-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.c: Provide wrappers to Winsock functions that set
	errno to WSAGetLastError() in case of failure.  Also provide a
	Windows-specific version of strerror.

	* src/mswindows.h: Wrap calls to socket, bind, connect, recv, send,
	select, getsockname, getpeername, and setsockopt.

2005-03-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (defaults): Use passive FTP by default.

2005-03-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Handle multiple Set-Cookie headers sent by
	remote server.

2005-03-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_file_name): Don't allow hosts named ".." to be
	appended as path elements.

2005-03-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (retrieve_url): Escape location header.

	* src/http.c (print_server_response_1): Escape server response when
	printing it.
	(gethttp): Escape host name, status message, location header, and
	content type.
	(http_loop): Escape error message from server.

	* src/host.c (lookup_host): Escape host name when printing it.

	* src/ftp.c (getftp): Escape user name when printing it.
	(getftp): Escape remote file and directory for printing.
	(getftp): Escape server listing when printing it.
	(ftp_retrieve_list): Escape link name and file name.
	(ftp_retrieve_glob): Escape file name.

	* src/ftp-basic.c (ftp_response): Escape server response when printing
	it.

	* src/cookies.c (parse_set_cookies): Escape the cookie field when
	printing it.
	(parse_set_cookies): Escape contents of remote header.
	(cookie_handle_set_cookie): Escape host name and cookie domain.

	* src/connect.c (connect_to_ip): Escape the host name.

	* src/log.c (escnonprint): New function, used for printing strings
	coming from the server that possibly contain non-ASCII characters.
	(escnonprint_uri): Ditto.

2005-02-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c: Use the nnnI64 syntax for __int64 constants under all
	Windows compilers.
	(SPRINTF_WGINT): Use "%I64" under all Windows compilers.

	* src/mswindows.h (WGINT_MAX): Use the nnnI64 syntax for
	__int64 constants under all Windows compilers.
	(struct_stat): Use `struct stati64' under Borland C.
	(fstat): Don't redefine to _fstati64 under Borland.

	* src/mswindows.c: Define str_to_int64 under Borland C as well as
	under (older) Visual C.

2005-02-26  Gisle Vanem  <giva@bgnett.no>

	* src/utils.c: Use the nnnLL syntax under GCC.  Define struct_stat to
	struct _stati64 under __MINGW32__ as well as under MS VC.

2005-02-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (getftp): Initialize err to suppress compiler warning.

2005-02-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.c (wget_ftello): Removed.

	* src/mswindows.h: Remove bogus definition of stat.
	(wget_ftello): Remove the leftover ftello replacement.

2005-02-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (lookup_host): Test for AI_ADDRCONFIG directly, instead
	of checking for HAVE_GETADDRINFO_AI_ADDRCONFIG.

2005-02-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): When we're not supposed to overwrite files,
	use fopen_excl to open the file and recompute the file name.

	* src/log.c (redirect_output): Use unique_create to avoid a race
	condition.

	* src/mswindows.c (fake_fork_child): Use unique_create.

	* src/utils.c (fopen_excl): New function that opens a stdio stream
	with the O_EXCL flag (where available).
	(unique_create): New function, like unique_name, but also creating
	the file and returning a file pointer.
	(fork_to_background): Use unique_create to create the file
	immediately to avoid race condition with multiple instances of
	wget -b.

2005-02-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (ftp_expected_bytes): Fix bug that caused infloop because
	of not correctly skipping the '(' character.

2005-02-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (is_valid_ipv6_address): Move here from url.c.
	(lookup_host): If the address is numeric, don't print the
	"resolving..." line, don't set up DNS timeouts, and set the
	AI_NUMERICHOST hint, where available.

2005-02-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/mswindows.c (wget_ftello): Wget's replacement for ftello.

	* src/utils.c (file_size): Use ftello where available.

	* src/ftp-ls.c (ftp_parse_unix_ls): Use str_to_wgint to parse the file
	size.
	(ftp_parse_winnt_ls): Ditto.

	* src/ftp-basic.c (ftp_size): Use str_to_wgint to convert number to
	wgint; pass 10 instead of 0 as the BASE argument.

	* src/ftp.c (ftp_expected_bytes): Use str_to_wgint to parse the file
	size.

	* src/sysdep.h (LARGE_INT_FMT): Use __int64 as LARGE_INT on
	MSVC/Windows; print it with "%I64".

	* src/wget.h: Define a `wgint' type, normally aliased to (the possibly
	64-bit variant of) off_t.

	* src/all: Use `wgint' instead of `long' for numeric variables that
	can hold file sizes.

	* src/utils.c (number_to_string): Support printing of `wgint'
	argument.
	(number_to_static_string): New function.

	* src/all: Replace printf("%ld", long_value) with printf("%s",
	number_to_static_string(wgint_value)).

2005-02-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for LFS.  Determine SIZEOF_OFF_T.
	Check for ftello.

2005-02-18  Mauro Tortonesi <mauro@ferrara.linux.it>

	* src/main.c: Added the --ftp-passwd command line option.

	* src/init.c: Renamed command passwd to ftppasswd.

2005-02-18  Marco Colombo  <m.colombo@ed.ac.uk>

	* po/it.po: Updated Italian translation.

2005-02-11  Mauro Tortonesi <mauro@ferrara.linux.it>

	* src/string_t.c: Fixed a bug in do_escape and triggered escape of
	backslashes in string_escape to avoid ambiguities in the result
	string.

2005-02-11  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* doc/wget.texi: Added Simone Piunno as new contributor.

2005-02-10  Mauro Tortonesi <mauro@ferrara.linux.it>

	* src/string.h: Renamed to string_t.h to fix a compilation conflict
	with the string.h header in the standard C library.

	* src/string.c: Renamed to string_t.c for consistency with string.h.

	* src/string_t.c: Ditto.

	* src/string_t.h: Ditto.

2005-01-01  Mauro Tortonesi  <mauro@ferrara.linux.it>

	* doc/wget.texi: Updated copyright information, added new contributors.

2004-12-31  Mauro Tortonesi <mauro@ferrara.linux.it>

	* src/string.c: New file.

	* src/string.h: New file.

	* src/Makefile.in: Added string.c to the list of modules to compile.

	* src/main.c: Updated copyright.

2004-11-20  Hans-Andreas Engel  <engel@node.ch>

	* doc/wget.texi: Describe limitations of combining `-O' with `-k'.

2004-11-18  Ulf Harnhammar <ulf.harnhammar.9485@student.uu.se>

	* src/ftp-ls.c: Fixed a problem in ftp_parse_winnt_ls that could allow a
	malicious remote FTP server to crash wget.

2004-11-18  Mauro Tortonesi <mauro@deepspace6.net>

	* src/connect.c: Minor correction to the comment in front of fd_peek.

2004-11-18  Leonid Petrov <nouser@lpetrov.net>

	* src/retr.c: Fix a timeout problem in fd_read_body when using http_proxy.

2004-11-18  Hans-Andreas Engel <engel@node.ch>

	* src/http.c: Enable --convert-links (-k) when a single page is downloaded
	via --output-document (-O).

2004-11-15  YAMAZAKI Makoto <Yamazaki.Makoto@fujixerox.co.jp>

	* src/netrc.c: Fix termination by assertion bug in netrc parsing.

2004-06-12  Larry Jones <lawrence.jones@ugsplm.com>

	* src/recur.c (download_child_p): Correct the logic in check number 6:
	test opt.reclevel (not DEPTH) against INFINITE_RECURSION.

2004-05-13  Nico R.  <n-roeser@gmx.net>

	* doc/Makefile.in: Allow building in a separate tree with source tree
	write-protected.

2004-05-09  David Fritz  <zeroxdf@att.net>

	* windows/Makefile.src.bor: Fix broken build rule.  Add clean target.

	* windows/Makefile.top.bor: Use tabs instead of spaces.  Ignore
	errors in clean rules.  Use lowercase filenames when building
	distribution .zip archive.

	* windows/config.h.bor:  Don't define HAVE_UINT32_T.

	* windows/Makefile.doc: Fix remaining instance of build rules
	indented with spaces instead of tabs.

	* windows/Makefile.src: Update copyright year.

	* windows/Makefile.top: Update copyright year.

	* windows/config.h.mingw (WGET_USE_STDARG, HAVE_SIG_ATOMIC_T): Define.

	* windows/config.h.ms (HAVE_STRPBRK, HAVE_LIMITS_H)
	(HAVE_LOCALE_H): Define.

	* windows/Makefile.watcom: Add /I. to CFLAGS.  Remove reference to
	specific Wget version from linker flags.  Add missing
	dependencies.

2004-05-09  David Fritz  <zeroxdf@att.net>

	* src/mswindows.c (fake_fork): Pass entire command line to the child
	process.

2004-03-31  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Fix typo: SCHEME_SSL -> SCHEME_HTTPS.

2004-03-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Send the Proxy-Authorization header over
	non-SSL connections too.

2004-03-25  David Fritz  <zeroxdf@att.net>

	* src/mswindows.c (fake_fork_child): Ignore error code when
	OpenFileMapping() fails; assume it failed because the object does
	not exist.

2004-03-24  David Fritz  <zeroxdf@att.net>

	* src/mswindows.c (fake_fork): New function.

	* src/mswindows.c (fork_to_background): Use it.

2004-03-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_parse): Decode %HH sequences in host name.

2004-03-19  David Fritz  <zeroxdf@att.net>

	* src/mswindows.c (ws_hangup): Incorporate old fork_to_background()
	code.  Add event name argument.
	(fork_to_backgorund): Now a simple wrapper around ws_hangup().
	(ws_handler): Correctly handle the case when neither CTRLC_BACKGND
	nor CTRLBREAK_BACKGND are defined.  Don't bother handling close,
	logoff, or shutdown events.  Call ws_hangup() with the correct
	event name; don't assume it was CTRL+Break.

2004-03-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/convert.c (local_quote_string): Quote "#" as "%23" and "%" as
	"%25" when creating links to local files.

2004-03-04  Gisle Vanem  <giva@bgnett.no>

	* src/retr.c (fd_read_body): Don't change console title if quiet.

2004-03-02  David Fritz  <zeroxdf@att.net>

	* src/mswindows.c (ws_percenttitle): Guard against future changes by
	doing nothing if the proper variables have not been initialized.
	Clamp percentage value.

2004-02-25  David Fritz  <zeroxdf@att.net>

	* src/mswindows.c (set_sleep_mode): Remove argument and return value.
	Call GetModuleHandle() instead of LoadLibrary()/FreeLibrary() for
	kernel32.dll.  Use typedef for function-pointer.  Don't cast
	l-value.  Don't use dereference operator when calling through
	function-pointer.
	(ws_startup): Update call to set_sleep_mode().
	(ws_cleanup): Remove call to set_sleep_mode().

2004-02-23  David Fritz  <zeroxdf@att.net>

	* src/mswindows.h: Ditto.

	* src/mswindows.c: Misc. formatting/comment tweaks throughout.

2004-02-23  David Fritz  <zeroxdf@att.net>

	* src/http.c (http_loop): Ditto.

	* src/ftp.c (ftp_loop_internal): Update call to ws_changetitle().

	* src/main.c (main): Don't bother calling ws_changetitle().

	* src/mswindows.h (ws_changetitle): Update prototype.

	* src/mswindows.c (ws_changetitle): Remove second argument.  Use
	xfree_null().
	(ws_percenttitle): Only update title when percentage has changed.

2004-02-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Contributors): Updated.

2004-02-20  David Fritz  <zeroxdf@att.net>

	* src/main.c (print_help): Remove call to ws_help().

	* src/mswindows.c (ws_help): Remove.

	* src/mswindows.h (ws_help): Remove.

2004-02-16  David Fritz  <zeroxdf@att.net>

	* src/init.c (home_dir): Use aprintf() instead of xmalloc()/sprintf().
	Under Windows, if $HOME is not defined, use the directory that
	contains the Wget binary instead of hard-coded `C:\'.
	(wgetrc_file_name): Under Windows, look for $HOME/.wgetrc then, if
	not found, look for wget.ini in the directory of the Wget binary.

	* src/mswindows.c (ws_mypath): Employ slightly more robust methodology.
	Strip trailing path separator.

2004-02-12  Jens Roesner  <jens.roesner@gmx.de>

	* doc/wget.texi (Wgetrc Commands): Document `-e' here.

2004-02-09  David Fritz  <zeroxdf@att.net>

	* configure.bat.in: Don't clear the screen.

	* windows/README: Add introductory paragraph.  Re-word a few
	sentences.  Correct minor typographical errors.  Use consistent
	capitalization of Wget, SSL, and OpenSSL.  Refer to Microsoft
	Visual C++ as MSVC instead of VC++.  Mention the --msvc option to
	configure.bat.  Reflow paragraphs.

	* windows/Makefile.top: Use tabs instead of spaces.  Ignore errors
	in clean rules.  Use lowercase filenames when building distribution
	.zip archive.

	* windows/Makefile.doc: Use tabs instead of spaces.  Ignore errors
	in clean rules.

	* windows/Makefile.src: Clean-up clean rules.  Use tabs instead of
	spaces.  Link against gdi32.lib.  Don't define SYSTEM_WGETRC.
	Remove unused macros.  Remove anachronistic and superfluous linker
	flags.  Don't rename wget.exe to all upper-case.  Add
	`preprocessor' conditionals for SSL and newer MSVC options.  Use
	batch rules.  Don't suppress all warnings.

2004-02-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Security Considerations): Put @item contents on a
	separate line.
	Reported by Ted Rodriguez-Bell.

2004-02-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Respect --ignore-length.
	(gethttp): Inhibit keep-alive if --ignore-length is specified.

2004-02-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (sockaddr_set_data): Zero out
	sockaddr_in/sockaddr_in6.  Apparently BSD-derived stacks need this
	when binding a socket to local address.

2004-02-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Wgetrc Commands): Document --no-http-keep-alive and
	the corresponding Wgetrc command.

2004-02-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c: Make the file compilable outside Wget source tree when
	-DSTANDALONE is used.

2004-01-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (determine_screen_width): Return 0 if not running on
	Windows or on a TIOCGWINSZ-capable system.

2004-01-28  David Fritz  <zeroxdf@att.net>

	* src/utils.c (determine_screen_width): Correctly determine console
	width under Windows.

2004-01-28  Christian Biere  <christianbiere@gmx.de>

	* src/progress.c (bar_set_params): Fixed syntax error when HAVE_ISATTY
	was undefined.

	* src/ftp.c (ftp_loop_internal): Allocate a larger buffer in case
	"try" gets translated to something large.  Ditto in http_loop in
	http.c.

	* src/http.c (response_header_copy): Don't write to buf[BUFSIZE].

	* src/ftp-opie.c (skey_response): Eliminate unnecessary string
	concatenation; just call gen_md5_update twice.

2004-01-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (xsleep): Don't call usleep with values larger than
	1,000,000.

2003-12-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Fix generation of `Content-Length'.

2003-12-15  Gisle Vanem  <giva@bgnett.no>

	* src/url.c (url_skip_credentials): Fixed return value; 'url' if no
	credentials.

2003-12-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_skip_credentials): Return a pointer directly.

2003-12-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_file_name): Ditto.
	(parse_errors): Ditto.

	* src/retr.c (retr_rate): Ditto.

	* src/progress.c (create_image): Ditto.

	* src/netrc.c (parse_netrc): Ditto.

	* src/main.c (struct cmdline_option): Ditto.
	(redirect_output_signal): Ditto.

	* src/init.c (commands): Ditto.

	* src/ftp-ls.c (ftp_index): Ditto.

	* src/cookies.c (check_domain_match): Declare the pointer to a literal
	string as `const'.

2003-12-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (fd_read_body): Pass total size to progress_create, not
	the remaining amount.

2003-12-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (fd_read_body): Don't fiddle with "interactive timeout"
	if read timeout is unset.

2003-12-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (bind_local): Don't set the IPV6_V6ONLY option on the
	socket.

2003-12-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_file_name): Respect the setting of
	opt.protocol_directories.

	* src/main.c (main): Only check for ret=='?' when longindex is unset.
	(option_data): New option --protocol-directories.

2003-12-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): Correctly calculate bandwidth as total data
	read divided with download time.

	* src/retr.c (fd_read_body): Separate the return values for data
	written and read.

2003-12-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Document the new option `--protocol-directories'.

2003-12-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Don't incorrectly claim that `-O'
	sets the number of retries to 1.

2003-12-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (H_REDIRECTED): Respect the HTTP/1.1 "303 See Other"
	response code.
	Suggested by Dan Razzell.

2003-11-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (fd_read_body): Sanitize arguments and document them
	better.  Make sure the timer is created and updated only if
	necessary.  Updated callers.

2003-11-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (fd_read_body): Report the amount of data *written* as
	amount_read.  This is not entirely logical, but that's what the
	callers expect, and it's not easy to change.

	* src/ftp.c (ftp_loop_internal): Ditto.

	* src/http.c (http_loop): Be smarter about assigning restval; if we're
	in the nth pass of a download, simply use the information we have
	about how much data has been retrieved as restval.

	* src/ftp.c (getftp): Ditto for FTP "REST" command.

	* src/http.c (gethttp): When the server doesn't respect range, skip
	the first RESTVAL bytes of the read body.  Never truncate the
	output file.

	* src/retr.c (fd_read_body): Support skipping initial STARTPOS octets.

2003-11-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (skip_short_body): Renamed skip_body to skip_short_body;
	don't bother calling fd_read_body.

2003-11-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (skip_body): New function.
	(gethttp): Use it to skip the body of the responses we don't care
	to download.  That allows us to reuse the connection.
	(gethttp): Trust that the HEAD requests will not generate body
	data.

	* src/retr.c (fd_read_body): Don't write to OUT if it's NULL.

2003-11-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Initialize SSL only the first time when SSL
	URL is downloaded.

2003-11-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (cookie_header): Only generate the contents of the
	header, not the leading "Cookie: " or the trailing "\r\n".

	* src/http.c (gethttp): When adding headers specified with `--header',
	allow them to override the headers generated by Wget.

	* src/init.c (cmd_spec_header): Made opt.user_headers a vector.

	* src/http.c (request_new): New function.  Returns a request structure
	which can be modified in various ways, most notably by adding HTTP
	headers to the request.
	(request_set_header): New function for adding the header to the
	request.  If the header is already available, it gets replaced.
	(request_send): Construct and send the request.
	(gethttp): Use the request_* functions to generate the request.

2003-11-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c: Don't #include netinet/Winsock stuff.

2003-11-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c: Deleted the old functions header_process,
	header_extract_number, header_exists, header_strdup,
	http_process_range, http_process_none, http_process_type, and
	http_process_connection.

	* src/http.c (response_new): New function.
	(response_header_bounds): Ditto.
	(response_header_copy): Ditto.
	(response_header_strdup): Ditto.
	(response_status): Ditto.
	(gethttp): Use the new response_* functions to parse the response.
	Support HTTP/0.9 responses.

2003-11-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Use the CONNECT handle to establish SSL
	passthrough through non-SSL proxies.

2003-11-28  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Don't include the Proxy-Authorization header
	in the request tunneled through proxy.

2003-11-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (create_image): Don't calculate ETA if nothing has
	been downloaded yet, because it causes division by zero.

2003-11-27  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (bind_local): Rename sa_len to addrlen because IRIX
	headers define sa_len as a macro.

2003-11-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-parse.c (convert_and_copy): Remove embedded newlines when
	AP_TRIM_BLANKS is specified.

2003-11-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c: Set con->csock to -1 where rbuf_uninitialize was
	previously used.

2003-11-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/Makefile.in (http$o): Added the trailing backslash that was
	missing.

2003-11-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* aclocal.m4: Don't check for AI_V4MAPPED and for AI_ALL, since
	Wget doesn't need them.

	* configure.in: Check for struct sockaddr_storage.

2003-11-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/rbuf.c: Removed.

	* src/ftp-basic.c (ftp_response): Use fd_read_line.  No longer use
	struct rbuf.  Updated all callers.

	* src/http.c (gethttp): Use fd_read_head to read all the headers in
	one go.
	(next_header): New function.

	* src/retr.c (fd_read_line): New function: reads a line from FD,
	leaving the rest of the data unread.
	(fd_read_head): New function.

	* src/connect.c (fd_peek): New function, implements peeking.
	(poll_internal): New function.
	(fd_read): Use it.
	(fd_write): Ditto.
	(fd_peek): Ditto.
	(fd_register_transport): Allow registering a "peeker" callback.

2003-11-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/headers.c: Removed.  The file is no longer relevant, now that no
	special handling of headers is done by the rbuf code.  Moved
	portions to http.c.

2003-11-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c: Renamed xread/xwrite/xclose to
	fd_read/fd_write/fd_close.  The "x" prefix is not appropriate
	because the semantics have diverged from read/write/close too
	significantly.  Updated all callers.

2003-11-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (sock_write): It's not necessary to initialize RES.

2003-11-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): Don't reference opt.ipv4_only and opt.ipv6_only
	if IPv6 is disabled.

2003-11-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (socket_has_inet6): Only compile it if IPv6 is enabled
	and AI_ADDRCONFIG is missing.

2003-11-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (address_list_contains): Renamed address_list_find to
	address_list_contains because its result is boolean.

2003-11-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/gen_sslfunc.c (ssl_init_prng): Warn the user when using a weak
	random seed.

2003-11-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (select_fd): Return 1 if select is not available.

2003-11-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (print_help): Fix alignment of FTP options output.

2003-11-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (lookup_host): Check for the ability to create IPv6
	sockets here.

	* src/init.c (defaults): Don't auto-set --inet4-only on IPv6-less
	systems.

2003-11-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (connect_to_host): Don't reference address list after
	releasing it.

2003-11-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (print_help): Fix typo in `-O' help message.  Fix docs of
	-Y/--proxy.  Fix docs of `--cookies' and `--glob'.  Improve docs
	of --convert-links.  Fix docs of SSL options.

2003-11-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): Don't allow setting of both opt.ipv4_only and
	opt.ipv6_only.

	* src/init.c (defaults): Mark opt.ipv4_only specially when set
	automatically.

2003-11-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-basic.c: Don't include <arpa/inet.h> and others because
	they're no longer needed.

2003-11-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c: Make sure the options are in alphabetic order!

	* src/host.c (lookup_host): Merge lookup_host_passive and lookup_host
	after all -- having both would result in some code duplication.
	(lookup_host): Set hints.ai_family to AF_INET if ipv4_only is
	requested.  Likewise, set it to AF_INET6 for ipv6_only.  Specify
	AI_ADDRCONFIG where available.
	(lookup_host): New flag LH_REFRESH that specifies that a cached
	entry for HOST should be refreshed.
	(cache_query): New function.
	(cache_store): Ditto.
	(cache_remove): Ditto.
	(forget_host_lookup): No longer necessary, replaced with static
	function cache_remove.

2003-11-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (persistent_available_p): Correctly specify the endpoint
	argument to socket_ip_address.
	(gethttp): When printing the "reusing connection to..." message,
	specify the host name of the reused connection, not the current
	host name.  That makes more sense because it provides a useful
	piece of information -- we know to which host we're supposed to
	connect anyway!

2003-11-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c: Don't refer to the now-removed function
	forget_host_lookup in the documentation of lookup_host.

2003-11-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (lookup_host): Use AI_ADDRCONFIG only if the family is
	unspecified.  This ensures that specifying `--no-inet4' on systems
	where IPv6 resolves, but doesn't work behaves the same regardless
	of the availability of AI_ADDRCONFIG.

2003-11-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Documented that --dont-remove-listing is now
	--no-remove-listing.

2003-11-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Portability): Update slightly.

2003-11-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (uri_merge): Merging "foo" and "bar" should result in
	"bar", not in "foo/bar".
	(path_simplify): Don't remove empty path elements; don't
	special-case leading slash.
	(path_simplify): Don't swallow ".."'s at the beginning of string.
	E.g. simplify "foo/../../bar" as "../bar", not as "bar".
	(append_uri_pathel): Defang ".." path element upon encountering
	it.

2003-11-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c: Enable -4 and -6 only if IPv6 is enabled.

2003-11-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (register_transport): Renamed from register_extended.
	Explain the intended usage.

2003-11-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/fdl.texi: New file.

	* doc/wget.texi: Upgrade to GNU Free Documentation License 1.2.

2003-11-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (CONNECT_ERROR): Use it.

	* src/connect.c (unsupported_socket_family_error): New function.

2003-11-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (defaults): Turn on opt.ipv4_only if we're compiling with
	IPv6, and AI_ADDRINFO is not available, and AF_INET6 sockets can't
	be created.

2003-11-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (persistent_available_p): Don't attempt to talk to two
	different SSL sites over the same secure connection.

2003-11-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (gethttp): Ditto.

	* src/ftp.c (getftp): Use retryable_socket_connect_error instead of
	CONNECT_ERROR.

	* src/wget.h (CONNECT_ERROR): Removed.

	* src/connect.c (retryable_socket_connect_error): New function instead
	of unsupported_socket_family_error.

2003-11-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (lookup_host): Document the fact that the addresses are
	returned in order.

2003-11-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (bind_local): Renamed bindport to bind_local; return
	the socket directly.  Updated callers.
	(accept_connection): Renamed acceptport to accept_connection;
	return the created socket directly.  Updated callers.

2003-11-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c: Use limits.h only where available.

	* src/hash.c: Use INVALID_PTR and INVALID_PTR_BYTE.  Include limits.h.

2003-11-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Use a more standard checking message when checking
	for md5.h.

2003-11-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Tweak ansi2knr test, use : instead of true.

2003-11-12  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for limits.h.

2003-11-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c: Added options --inet4-only and --inet6-only.

2003-11-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (host_errstr): Use the more standard message "Unknown
	host".

2003-11-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (lookup_host): Special-case the numeric addresses only in
	the non-IPv6 case.

2003-11-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (resolve_bind_address): Call lookup_host_passive.
	Make sure that opt.bind_address is resolved only once.

	* src/host.c (lookup_host_passive): New function, handles "passive"
	lookups.
	(lookup_host): Remove the passive flags.  Remove the
	family-related flags -- use ip_default_family instead.

2003-11-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (connect_to_host): Use that flag to decide whether to
	re-resolve the host name.

	* src/host.c (struct address_list): Added a flag that maintains
	whether the connection worked at some point.

2003-11-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* aclocal.m4 (WGET_STRUCT_UTIMBUF): Use AC_CHECK_TYPES instead of
	AC_EGREP_CPP to check for struct utimbuf.

2003-11-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* aclocal.m4 (WGET_SOCKLEN_T): Use AC_COMPILE_IFELSE instead of
	AC_TRY_COMPILE.

2003-11-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (option_data): Specify the command to use for --mirror.

2003-11-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-url.c: Get URLs from <object data="...">.

2003-11-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Remove next/previous/up node links.  Makeinfo doesn't
	require them, and they make the document harder to modify.

2003-11-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: No longer document options -s, -C, -g, and -G.
	(Contributors): Update my email address.

2003-11-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't attempt to use Emacs as a makeinfo
	substitute.

2003-11-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* aclocal.m4 (WGET_WITH_NLS): Respect the user's setting of
	LINGUAS, e.g. `LINGUAS="en bg ja" ./configure'.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (wtimer_allocate): Bless the use of wtimer_read on a
	timer that has merely been allocated because get_contents() does
	that.
	(wtimer_update): Abort if the timer is not initialized.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (get_contents): Pass the timer to limit_bandwidth().

	* src/utils.c (wtimer_update): New function instead of wget_elapsed;
	just update the timer, but don't return anything.
	(wtimer_read): Read and return the last known value of the timer.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (update_speed_ring): Clear the speed ring when the
	download stalls.

	* src/retr.c (get_contents): Specify 0.95s read timeout, so that the
	progress gauge can be updated even when data arrives very slowly
	or stalls.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): Removed one-letter options `-C', `-g', `-G', and
	`-s'.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): Add --dont-remove-listing for backward
	compatibility with previous versions.
	(print_help): Fix typo, spotted by Dennis Smit.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (persistent_available_p): No reason for the host lookup
	to be silent -- it's a lookup like any other.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (persistent_available_p): Instead of matching all the
	addresses of HOST and last host, determine the peer's IP address
	with socket_ip_address and see if that address is one of those
	HOST resolves to.

	* src/host.c (address_list_match_all): Removed.
	(address_list_find): New function, finds an IP address in the
	address list.

	* src/ftp.c (ftp_do_pasv): Get the peer's address here, and pass it to
	ftp_epsv so it doesn't need to call getpeername.

	* src/ftp-basic.c (ftp_port): Use socket_ip_address instead of
	getpeername.
	(ftp_lprt): Ditto.

	* src/connect.c (socket_ip_address): Replaces conaddr, generalized to
	either get peer's or local address.
	(sockaddr_get_data): Made local to this file.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (HASH_POSITION): Explicitly accept the hash function.
	(grow_hash_table): Extract ht->hash_function outside the loop.
	(hash_table_remove): Ditto.
	(hash_table_clear): Fill entries with 0xff to clear them.
	(hash_table_remove): Mark entries as deleted with the correct
	marker.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (cookie_handle_set_cookie): Specify exact match for
	unspecified domains.

2003-11-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (register_extended): Check that fd >= 0.

2003-11-08  Gisle Vanem  <giva@bgnett.no>

	* src/ftp-basic.c: Support Windows-2000 ftp servers. Win-2000 *is*
	Win-NT 5.0 so calling it ST_WINNT is okay I guess.

2003-11-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_parse): Allow empty ports.

2003-11-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (print_help): Break the help string into multiple chunks.
	(cmdline_option): New option handler OPT_FUNCALL.  Generalized
	HANDLE_CMD to generic DATA.
	(option_data): Use the new OPT_FUNCALL feature.

2003-11-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (NON_EMPTY): Use the all-bit-set value as the marker that
	the field is empty.  This allows NULL pointer and 0 value to be
	used as keys, which is necessary for the connect.c code to work
	when fd==0.
	(hash_table_new): Fill mappings with 0xff.
	(grow_hash_table): Ditto.

2003-11-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (LAZY_RETRIEVE_INFO): Set LAST_INFO.

2003-11-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* README: Remove explicit version reference, so that the file
	doesn't have to be updated for each new release.

2003-11-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (init_switches): New function.  Convert option_data to
	long_options and short_options, which can be fed to getopt_long.
	(main): Execute command-line options by consulting option_data.

2003-11-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/log.h: Declare log_init, log_close, and
	log_request_redirect_output here.

2003-11-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/gen_sslfunc.c (ssl_read): Implement a more correct check for
	EINTR.
	(ssl_write): Ditto.
	(init_ssl): Use a global SSL context.

2003-11-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c: Updated all callers of
	iread/ssl_iread/iwrite/ssl_iwrite to use xread and xwrite instead.

	* src/rbuf.h (struct rbuf): Removed the SSL member because SSL is
	handled automatically by xread.

	* src/hash.c (ptrhash): Made private.
	(ptrcmp): Ditto.
	(inthash): Removed.

	* src/connect.c (select_fd): Don't set errno, leave it to the caller.

	* src/gen_sslfunc.c (connect_ssl): Use register_extended to register
	SSL callbacks for communication with SSL-enabled endpoints.
	(ssl_read): New function.
	(ssl_write): Ditto.
	(ssl_poll): Ditto.
	(ssl_close): Ditto.

	* src/connect.c (register_extended): New function -- register
	callbacks for basic socket operations.
	(xread): Ditto.
	(xwrite): Ditto.
	(xclose): Ditto.
	(sock_read): New function, default implementation for reading.
	(sock_write): Ditto for writing.
	(sock_poll): Ditto for polling.
	(sock_close): Ditto for closing.

2003-11-06  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (xclose): Free INFO even if it doesn't provide a
	closer.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/config.h.ms: MSVC doesn't have uint32_t.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (save_cookies_mapper): Respect the setting of
	keep-session-cookies.
	(cookie_jar_load): Import session cookies.
	Based on code submitted by Nicolas Schodet.

	* src/utils.c (datetime_str): Use information in TM when it's
	non-NULL.

	* src/main.c (main): New option `--keep-session-cookies'.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (resolve_bind_address): Use a more accurate error
	message -- we're not binding to ANY, we're disabling bind
	altogether.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (connect_to_ip): More compact error checking.
	(bindport): Don't treat failed setsockopt as a fatal error.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (bindport): Fix compilation under pre-C99 compilers.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* libtool.m4, ltmain.sh, config.sub, config.guess: Upgrade to
	libtool 1.5.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (HTTP Options): Document `--keep-session-cookies'.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Use the Autoconf macro AC_C_PROTOTYPES instead of
	the old AM_C_PROTOTYPES.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Substitute ANSI2KNR and U, so we can compile.

2003-11-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Remove the broken check for socks.

2003-11-05  Dennis Smit  <ds@nerds-incorporated.org>

	* src/main.c: (main): added --preserve-permissions option.

	* src/ftp.c (ftp_retrieve_list): added support for
	--preserve-permissions option.

	* src/init.c: added support for --preserve-permission option.

	* src/option.h: added support for --preserve-permission option.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (progress_handle_sigwinch): Don't call
	determine_screen_width() from the signal handler.  Instead, just
	set a volatile variable.
	(bar_create): Check whether SIGWINCH was received.
	(bar_update): Ditto.

	* src/sysdep.h: Define SYSTEM_FNMATCH only if HAVE_FNMATCH_H is true.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config-post.h: New file, included from now autogenerated
	config.h.in.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/Makefile.in (realclean): Delete config.h.in.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Use the new form of AC_OUTPUT.

	* Makefile.cvs (prep): Invoke autoheader.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Require Autoconf 2.57.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Move some checks into aclocal.m4.  Check whether
	fnmatch.h is includable.

	* configure.in: Also check whether #include <md5.h> works before
	deciding to use Solaris libmd5.

	* configure.in: Use AC_MSG_NOTICE instead of echo.  Use
	AC_MSG_ERROR for fatal errors.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't misuse AC_MSG_RESULT.  Use AC_MSG_NOTICE
	where appropriate.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check whether volatile is supported.  Don't check
	for gethostname and uname, which are not used.

2003-11-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* aclocal.m4: Ditto.

	* configure.in: Add description annotations to AC_DEFINE.

	* Makefile.in: Update maintenance targets, preparing them for the
	use of `autoheader'.

2003-11-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (N_): Don't parenthesize argument.

2003-11-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (xsleep): New function.  Uses nanosleep where available,
	resuming sleeps interrupted by signals.  Updated callers of sleep
	and usleep to use xsleep.

2003-11-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/log.c (logvprintf): Documented better.  Renamed to
	log_vprintf_internal to avoid confusion with the public API
	functions logprintf and logputs.

2003-11-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.h (ADDRESS_IPV4_DATA): Don't take the address of in.s_addr
	because that doesn't work on machines that define it as bitfield.

2003-11-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-basic.c (ftp_login): Remove shadowing (and bogus)
	declaration of SEED.

2003-11-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (select_fd): Generalize the third argument into WAIT,
	so that the caller can request waiting for both read and write.
	Updated callers.

2003-11-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Look for nanosleep in -lrt and -lposix4, which is
	where Solaris has them.

2003-11-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for nanosleep.

2003-11-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h: Retired the `boolean' type.  Moved the DEFAULT_LOGFILE
	define to log.h.  Moved the INFINITE_RECURSION define to recur.h.

	* src/xmalloc.h: Renamed FREE_MAYBE to xfree_null and moved the
	definition from wget.h to xmalloc.h.

2003-11-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-url.c (cleanup_html_url): Destroy the hash tables, don't
	just call free on them.
	(init_interesting): Use hash_table_put instead of string_set_add
	because we don't need the strdup that the latter function
	performs.

	* src/init.c (cleanup): Don't pass NULL to cookie_jar_delete.

	* src/xmalloc.c (xfree_real): Abort when passed a NULL pointer.
	(xfree_debug): Print at the file and line of the offending call to
	free.

2003-11-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-parse.c (decode_entity): New function; split the decoding
	of entities here.
	(convert_and_copy): Use it to decode entities.
	(decode_entity): Handle the &apos entity.
	(decode_entity): Don't decode Latin 1 numeric entities.  Don't
	decode &#0.

2003-11-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c: Removed the ip_default_family global variable.

	* src/host.c (lookup_host): Document the function.  Fixed declaration
	of VEC.

2003-11-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-opie.c (calculate_skey_response): Use uint32_t instead of
	`unsigned long' for the cheksum array.  Document the function.

2003-11-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (acceptport): Don't call select_fd when timeout is not
	requested.

2003-10-31  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h: Move declarations of malloc and logging code to
	xmalloc.h and log.h respectively to unclutter this file.
	(STRDUP_ALLOCA): Made it side-effect free.

	* src/xmalloc.h: New files.  Define macros xnew, xnew0, xnew_array,
	and xnew0_array.

	* src/xmalloc.c: New file.  Move the xmalloc routines here.

2003-10-31  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/various: Use new macros xnew, xnew0, xnew_array, and xnew0_array
	in various places.

2003-10-31  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h (CLOSE): Don't call close on file descriptors less than
	0, i.e. on uncreated sockets.

	* src/connect.c (resolve_bind_address): Work on struct sockaddr
	directly.
	(connect_to_host): Replacement for connect_to_many.  Resolve HOST
	and connect to any of its addresses.  If we can't connect and the
	host name lookup was cached, try to resolve it again.  This should
	fix problems with hosts behind dynamic DNS.  Updated all callers.
	(connect_to_ip): Replacement for connect_to_one.  Removed SILENT;
	added the argument PRINT instead.  Updated all callers.
	(set_connection_host_name): Removed.

	* src/host.c (address_list_address_at): New function instead of
	address_list_copy_one. It returns a pointer to ip_address *, so
	it's not necessary to copy the data.
	(address_list_cached_p): New function.
	(forget_host_lookup): Ditto.

	* src/connect.c: Got rid of the MSOCK global variable.  Made bindport
	return the local socket it creates.  Added a new argument to
	acceptport, the socket to call accept on.  Updated callers.
	(closeport): Removed.

	* src/connect.c: Moved the sockaddr code from host.c to this file,
	because most of that stuff is used for connecting, and has nothing
	to do with host names anyway.
	(sockaddr_set_data, sockaddr_get_data): New functions, replace the
	old sockaddr_set_address, sockaddr_set_port, sockaddr_get_address,
	and sockaddr_get_port.

2003-10-31  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (address_list_from_single): Removed.
	(address_list_from_ipv4_addresses): Renamed from
	address_list_from_vector.

2003-10-31  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (sockaddr_set_data): Remove the broken code that
	checked for NULL address.

2003-10-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (append_uri_pathel): New argument ESCAPED_P that says
	whether [B, E) is to be treated as URL-escaped or not.  If
	ESCAPED_P is false, don't unescape the region.
	(url_file_name): u->file is not URL-escaped.

2003-10-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h: Use `S >= 8' rather than `S == 8' when looking for
	large integers.

2003-10-30  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (retrieve_from_file): Use retrieve_tree for
	page-requisites.

	* src/main.c (main): Don't define opt.recursive when -p is used.
	Instead, make sure that recursion is used for HTTP in that case.

2003-10-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.h: Defined accessors for elements of ip_address.  Updated
	all callers.
	(address_list_match_all): Use memcmp in the non-IPv6 case.

	* src/wget.h (CONNECT_ERROR): Don't retry connecting if connect()
	returned EAFNOSUPPORT.

2003-10-29  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Reenable IPv6 autodetection.

2003-10-27  Mauro Tortonesi <mauro@deepspace6.net>

	* src/connect.h: changed bindport prototype and added the related
	BIND_ON_IPV4_ONLY and BIND_ON_IPV6_ONLY flags.

	* src/connect.c: changed bindport and resolve_bind_address to allow
	protocol-version specific DNS resolution. modified conaddr,
	acceptport and connect_to_one to make use of struct
	sockaddr_storage and of the new ip_address structure.

	* src/ftp-basic.c: added LPRT/LPSV (RFC1639) support, refactored
	PORT/PASV (RFC959) and EPRT/EPSV (RFC2428) support code.

	* src/ftp.c: added the ftp_do_port and ftp_do_pasv functions to
	handle FTP over IPv6.

	* src/ftp.h: changed prototype of ftp_epsv and added prototypes for
	ftp_lpsv, ftp_lprt and ftp_eprt.

	* src/host.c: renamed the
	wget_sockaddr_set_address and wget_sockaddr_get_addr, and
	wget_sockaddr_{s,g}et_port couples to sockaddr_{s,g}et_address and
	sockaddr_{g,s}et_port respectively.  changed
	address_list_match_all, address_list_from_addrinfo sockaddr_len,
	pretty_print_address, lookup_host, sockaddr_{s,g}et_address and
	sockaddr_{g,s}et_port to make use of struct sockaddr_storage and
	of the new ip_address structure.  removed map_ipv4_to_ip and
	map_ip_to_ipv4.

	* src/host.h: redefined structure ip_address and removed structure
	wget_sockaddr.

2003-10-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/config.h.mingw: Ditto.

	* windows/Makefile.top.mingw: Ditto.

	* windows/Makefile.src.mingw: New file.

	* windows/wget.dep: Support convert.o.

	* configure.bat.in: New option `--mingw'.
	From Chin-yuan Kuo.

2003-10-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/config.h.bor: DEBUG is now ENABLE_DEBUG.  Borland has
	snprintf, but not u_int32_t.

	* windows/Makefile.src.bor (OBJS): Use convert.c.

	From Chin-yuan Kuo.

2003-10-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* windows/Makefile.src.watcom (OBJS): Use convert.c.
	From Chin-yuan Kuo.

2003-10-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h: Include inttypes.h where available.

	* src/host.c: Switch from u_int32_t to uint32_t.

2003-10-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/netrc.c (parse_netrc): Reset the QUOTE flag after the closing
	quote.

2003-10-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Wgetrc Commands): Fixed typo.
	From DervishD <raul@pleyades.net>.

2003-10-26  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Switch from u_int32_t to uint32_t.  Check for
	inttypes.h so it's used to get the definition of uint32_t where
	available.

2003-10-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (is_valid_ipv6_address): Reformat to GNU coding style.
	Use enums for NS_IN* constants.  Use ISXDIGIT.

	* src/convert.c (construct_relative): Document better how the function
	works.

2003-10-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/Makefile.in (install.info): Handle the case when only wget.info
	is generated from wget.texi.  In that case, wget.info-*[0-9]
	doesn't match anything and therefore ends up as a bogus value of
	FILE in the loop.  Fix this by not calling INSTALL_DATA on
	nonexistent files.

2003-10-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/version.c: Bump version.

2003-10-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c: Ditto.

	* src/html-parse.c (advance_declaration): Don't use trailing comma in
	enum because older compilers don't support it.

	* src/utils.c: Don't redefine HAVE_SIGSETJMP.

2003-10-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config.h.in: Deploy preprocessor magic to avoid Ultrix's
	<netdb.h> include <bitypes.h> which defines its own u_int32_t.
	Reported by Bernhard Simon.

2003-10-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in (dist): Depend on configure.bat.
	(realclean-top): Delete configure.bat.

2003-10-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in (distclean-top): Remove the libtool script, because
	it's generated by configure.

2003-10-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/convert.c (construct_relative): Don't handle absolute files
	specially -- for example, -P/tmp/foo shouldn't imply that
	converted files must refer to "/tmp/foo/..."!

2003-10-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't check for int32_t because we're not really
	using it.

2003-10-15  Philip Stadermann  <philip.stadermann@credativ.de>

	* src/ftp.c (ftp_retrieve_glob): Correctly loop through the list whose
	elements might have been deleted.

2003-10-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c: Consider status 307 a valid redirect.

2003-10-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h: Only define u_int32_t.

2003-10-13  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-url.c (tag_handle_meta): Set the Refresh link to expect
	HTML.
	(append_one_url): Renamed to append_url.

2003-10-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (large_int_to_string): Use snprintf() to print the
	number.  This will work even on systems where libc doesn't
	understand %lld, but the compiler does, because it will use our
	snprintf replacement.

	* src/init.c (parse_bytes_helper): New function.
	(cmd_bytes): Use it to parse bytes, but cast the result to long.
	(cmd_bytes_large): Ditto, but store the result to LARGE_INT.  Used
	for --quota so that --quota=10G works even on machines without
	long long.

	* src/options.h (struct options): Declare quota as LARGE_INT.

	* src/retr.c (downloaded_exceeds_quota): Removed.
	(downloaded_increase): Ditto.
	(total_downloaded_bytes): New variable, replaces opt.downloaded,
	which was the wrong place for it anyway.  Updated callers of
	downloaded_exceeds_quota and downloaded_increase to check this
	variable directly.

	* src/sysdep.h: Get rid of VERY_LONG_TYPE.  Use LARGE_INT for the same
	purpose, defined as `long', `long long' or `double', depending on
	size of long and whether long long is available.

2003-10-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/sysdep.h: Also check size of short for int32_t.

2003-10-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (lookup_host): Use u_int32_t to store the result of
	inet_addr().  That removes the need for offset fiddling, caring
	about endian-ness, etc.

	* src/sysdep.h: Define int32_t and u_int32_t if not available.

2003-10-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp-basic.c (ftp_epsv): Use socklen_t * as the third argument to
	getpeername.

	* src/config.h.in: Define socklen_t stub.

	* src/host.c (sockaddr_len): Return socklen_t.

	* src/connect.c (conaddr): Use socklen_t as the third argument to
	accept, getsockname, and connect.

2003-10-11  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Check for int32_t and u_int32_t.  Check for
	SIZEOF_INT.

2003-10-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/recur.c (retrieve_tree): Don't descend into documents that are
	not expected to contain HTML, regardless of their content-type.

	* src/html-url.c (tag_url_attributes): Record which attributes are
	supposed to yield HTML links that can be followed.
	(tag_find_urls): Propagate that information to the caller through
	struct urlpos.

2003-10-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (hash_table_new): Slightly change the meaning of the
	first parameter.  Instead of being the minimum initial size, it is
	now the minimum number of items that the hash table can take
	without needing to resize.

2003-10-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (find_mapping): Return the next available mapping when
	the key is not found, not NULL.
	(hash_table_put): Use find_mapping to find the storage for the new
	data.
	(hash_table_put): Grow the table before exceeding maximum
	fullness, not afterwards.

2003-10-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/tr.po: Ditto.

	* po/sv.po: Updated from TP.

2003-10-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* aclocal.m4 (WGET_WITH_NLS): First check for gettext in libintl,
	then use the libc version.  That way systems that get libintl.h
	from /usr/local/include will get the matching gettext.

2003-10-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-url.c (init_interesting): Initialize interesting_tags and
	interesting_attributes as hash tables.  This simplifies the code
	immensely because hash tables handle allocation and remove
	duplicates automatically.
	(find_tag): Removed.
	(collect_tags_mapper): Instead of calling find_tag, simply get the
	entry from interesting_tags hash table, which is both simpler and
	faster.

2003-10-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/hash.c (hash_table_get): Declare hash-table argument as const.
	(find_mapping): Ditto.
	(hash_table_get_pair): Ditto.
	(hash_table_contains): Ditto.
	(hash_table_count): Ditto.

2003-10-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/ft.po, po/sk.po, po/ja.po: Updated from the TP.

2003-10-09  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/Makefile.watcom (OBJS): Ditto.

	* windows/Makefile.src.bor: Ditto.

	* windows/wget.dep: Ditto.

	* windows/Makefile.src: Removed references to fnmatch.c and
	fnmatch.o.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (print_help): Fix typo; stured -> stored.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-url.c (get_urls_html): Parse the appropriate flags to
	html-parse.c.

	* src/html-parse.c (map_html_tags): Accept FLAGS from the caller
	instead of examining OPT.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-url.c (find_tag): Switch to binary search.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/getopt.c: Newer version, imported from Free libit.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/getopt.c: Add definitions of getopt_long and getopt_long_only.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (has_insecure_name_p): Define it here.

	* src/utils.c (has_wildcards_p): Define it here.

	* src/sysdep.h: Declare fnmatch-related macros here, if not using
	system fnmatch().  Update .c files to not declare fnmatch.h
	directly.

	* src/cmpt.c (fnmatch): Moved here.  Use it only under non-GNU libc.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config.h.in: Renamed DEBUG to ENABLE_DEBUG.  ENABLE_DEBUG is, I
	think, a better name, because it implies that debugging output is
	merely possible, not "on by default", as might be construed from
	just DEBUG.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/wget.pot: Recreated.

2003-10-08  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Renamed DEBUG to ENABLE_DEBUG.

2003-10-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (struct cookie): Remove unused backpointer to cookie
	jar.

2003-10-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cmpt.c (memmove): Comment out, since it's no longer used.

	* src/cookies.c (cookie_jar_generate_cookie_header): Allocate room for
	chains in one pass.
	(find_chains_of_host): Assume that the caller has allocated DEST
	to be sufficiently large to take all the data.
	(eliminate_dups): Run through the array and eliminate dups on the
	fly instead of using memmove.
	(cookie_jar_process_set_cookie): Free cookie->domain before
	re-setting it.

2003-10-07  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (HTTP Options): Documented --post-file and
	--post-data.

2003-10-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (file_size): Return -1 if fopen() returns NULL.  Prior
	to this patch, wget --post-file=nosuchfile dumped core.

2003-10-05  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.c (set_sleep_mode): Fix type of
	_SetThreadExecutionState.

2003-10-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/log.c: Use `...' in function definitions; ansi2knr will convert
	them to va_dcl.  This allowed removal of the ugly VA_START_1 and
	VA_START_2 macros.

2003-10-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* libtool.m4: New file with contents imported from libtool.

	* aclocal.m4: Move libtool stuff into a separate file.  That
	leaves this file only with Wget-specific stuff.

2003-10-04  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.c (run_with_timeout): Use WaitForSingleObject to wait
	for thread termination.

2003-10-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-parse.c (convert_and_copy): Move variable declarations
	before statements.

2003-10-03  Gisle Vanem  <giva@bgnett.no>

	* src/connect.c: And don't include them here.

	* src/mswindows.h: Include winsock headers here.

2003-10-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (XMALLOC_ARRAY): Removed.
	(ALLOCA_ARRAY): Ditto.

	* src/html-parse.c: Renamed alloca_p to resized.
	(GROW_ARRAY): Renamed DO_REALLOC_FROM_ALLOCA to GROW_ARRAY and
	returned it to html-parse.c, since nothing else was using it.

2003-10-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (alarm_set): New function; use either setitimer or alarm
	to set up the alarm.
	(alarm_cancel): New function; cancel the alarm set up by
	alarm_set.
	(run_with_timeout): Use them.

2003-10-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (retrieve_url): Initialize DUMMY storage for DT.  Caught
	by valgrind.

2003-10-02  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/html-parse.c (convert_and_copy): Handle numeric entities in
	hexadecimal, &#xHH.
	(convert_and_copy): Copy the contents directly to the pool without
	a stack-allocated intermediary.

2003-10-02  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.c (run_with_timeout): For Windows: Run the 'fun' in a
	thread via a helper function. Continually query the thread's
	exit-code until finished or timed out.

2003-10-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_parse): Don't leak memory when a reencoded URL turns
	out to be invalid.

	* src/url.c (parse_errors): Mark error messages for translation.
	(url_error): Translate error messages returned to the caller.

2003-10-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/ftp.c (ftp_loop_internal): Initialize TMRATE to NULL to shut up
	the compiler.

2003-10-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/hu.po: Updated from the TP.

	* po/et.po: Updated from the TP.

	* po/ro.po: New file from the TP.

2003-10-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/hr.po: Updated.

2003-10-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* po/POTFILES.in: Added src/convert.c.

2003-10-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Renamed prep.ai.mit.edu to ftp.gnu.org.

2003-10-01  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Contributors): Updated from ChangeLog entries.

2003-09-30  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/Makefile.src (OBJ): Fix typo.

2003-09-29  Aaron Hawley <Aaron.Hawley@uvm.edu>

	* src/ftp.c (getftp): --spider option should now work with FTP
	downloads.
	(ftp_loop_internal): quiet reports and calculations of downloads
	when --spider option set, nor try deleting when --delete-after
	also set.
	(ftp_loop): --spider will skip HTML-ification of .listing file.

2003-09-26  Gisle Vanem  <giva@bgnett.no>

	* windows/config.h.ms: Don't declare alloca under compilers that
	support it.

	* windows/config.h.ms: Define HAVE_SNPRINTF, HAVE_VSNPRINTF, and
	HAVE_MEMMOVE.

2003-09-26  Gisle Vanem  <giva@bgnett.no>

	* src/src/mswindows.c: Added ws_percenttitle() showing progress in the
	window titlebar. Called from retr.c. Secured ws_mypath().

	* src/windows/config.h.ms: alloca() prototype not needed.  Removed
	"#undef ENABLE_NLS"; should be in Makefile IMHO. Moved
	WGET_USE_STDARG from mswindows.h to config.ms.h because of #ifdef
	in log.c. (MSVC's vararg.h and stdarg.h are incompatible).

2003-09-26  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.c (read_registry): Removed.
	(set_sleep_mode): New function.
	(windows_main_junk): Call it.

2003-09-26  Gisle Vanem  <giva@bgnett.no>

	* src/mswindows.c (read_registry): Fix invocation of registry
	functions.

	* src/mswindows.c (read_registry): Condition definitions of sleep and
	usleep with not HAVE_SLEEP and HAVE_USLEEP respectively.  Define
	HAVE_SLEEP and HAVE_USLEEP under __DMC__.

2003-09-25  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/Makefile.src: Updated OBJ list.

2003-09-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_escape_1): Revert unintentional change to lowercase
	xdigit escapes.
	(url_escape_dir): Document that this function depends on the
	output of url_escape_1.

2003-09-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (create_image): Print the current ETA if we're done
	with the download.
	(create_image): Change '-' display char to '+' in the progress bar.

	* src/Makefile.in (clean): Remove .libs.

2003-09-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (struct cookie): New flag domain_exact.
	(update_cookie_field): Skip leading dot in domain.
	(find_matching_chains): Match numeric addresses exactly; don't
	needlessly copy HOST to the stack.
	(matching_cookie): Added argument HOST.  If cookie->domain_exact
	is set, check that HOST is equal to cookie->domain.
	(cookie_jar_load): Only use TAB as delimiter.  Document the
	meaning of DOMAIN-FLAG.  Skip leading dot in domain.
	(cookie_jar_load): Don't ignore DOMAIN-FLAG -- instead, set
	domain_exact to true if DOMAIN-FLAG is false.
	(save_cookies_mapper): If domain_exact is false, prepend the
	domain with dot, like Mozilla does.

2003-09-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in (distclean-top): Remove autom4te.cache.

2003-09-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in (clean-top): Remove .libs.

2003-09-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (path_simplify): Instead of calls to memmove, handle "./"
	and "../" by advancing pointers.

2003-09-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/safe-ctype.h (_sch_test): The cast of BIT to unsigned char was
	broken -- _sch_istable bitmasks are 16-bit, not 8-bit!  Cast BIT
	to unsigned short instead.

2003-09-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (getproxy): Moved from url.c.

	* src/convert.c: Split off link conversion from url.c into separate
	file.  Also included the book-keeping stuff from recur.c.

2003-09-22  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (create_image): Print the initial part of the
	download with '-' characters, analogous to how dot progress prints
	the initial part with ','.

	* src/hash.c (ptrhash): New function.
	(ptrcmp): Ditto.
	(hash_table_new): Default to identity hash table.

2003-09-21  Matthew J. Mellon  <mellon@tymenet.com>

	* src/http.c (gethttp): Recognize content-type "application/xhtml+xml"
	as what Wget considers "text/html".

2003-09-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): Use setoptval() for setting the options.  Use
	run_command for `-e'.

	* src/init.c (parse_line): Rewritten to return COMIND right away.
	Changed linkage to static.
	(run_wgetrc): Use the available comind when calling setval, so it
	doesn't have to be computed twice.
	(setval_internal): New function, runs the command's action without
	any error checking.
	(setoptval): New function, does what setval used to do, but exits
	in case of error.
	(run_command): New function.

2003-09-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c: Improved documentation of functions.
	(cmd_boolean): Attempt to make code that tries to avoid calling
	strcmp for "speed" a bit more readable.

	* src/init.c (simple_atof): Report error on encountering non-digit,
	non-"." character.
	(simple_atoi): Replacement for myatoi(), calling interface
	compatible with simple_atof.  Updated myatoi's callers.

2003-09-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (simple_atof): New function.
	(cmd_time): Use it.
	(cmd_bytes): Accept things like "1.5k" and such.  Use simple_atof
	to parse decimals.

	* src/retr.c (limit_bandwidth): Adjust each sleep by the error of the
	previous one.

2003-09-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (select_fd): Change MAXTIME's type to double.  Handle
	its decimal part.

	* src/retr.c (sleep_between_retrievals): In the random-wait case, use
	random_float() to wait between 0 and 2*opt.wait seconds.

	* src/utils.c (run_with_timeout): Accept `double' timeouts.  Correctly
	handle timeout values in (0, 1) range.
	(random_float): New function.

	* src/options.h (struct options): Change the types of wait, waitretry,
	and timeout to double.

	* src/init.c (cmd_time): Accept floating point time.

2003-09-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/connect.c (connect_with_timeout): Made timeout type double.

	* src/options.h (struct options): New members read_timeout,
	dns_timeout, and connect_timeout.
	Use them.

2003-09-21  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Documented the new timeout options.

2003-09-21  Bertrand Demiddelaer  <bert@b3rt.org>

	* src/url.c (path_simplify): Would read two bytes past the end of the
	string in the "./" case.

2003-09-21  Aaron S. Hawley  <Aaron.Hawley@uvm.edu>

	* doc/wget.texi: Split version to version.texi.  Tweak documentation's
	phrasing and markup.

2003-09-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (uri_merge): Get rid of uri_merge_1.
	(uri_merge): Merge "foo//", "bar" as "foo//bar", not "foo///bar",
	i.e. don't add an extra slash merely because BASE ends with two
	slashes.
	(parse_credentials): Renamed from parse_uname.  Rewrittern in
	standard [beg, end) calling style.
	(url_skip_credentials): Renamed from url_skip_uname.  Made static.
	(url_skip_credentials): Include # and ; as terminators.  Old code
	would mistakenly consider "http://foo.com#hniksic@iskon.hr" to
	contain a username.
	(url_skip_scheme): Removed because it was unused.
	(url_has_scheme): Require "scheme" to be at least one char long.

2003-09-20  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (get_contents): Cosmetic fixes.

2003-09-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (BOUNDED_TO_ALLOCA): Evaluate PLACE only once.
	(ARRAY_SIZE): Renamed to countof.  All callers updated.

2003-09-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_file_name): Expect NULL dir_prefix.

	* src/init.c (cmd_file): Use a macro to prevent multiple #ifdef
	WINDOWS.
	(defaults): Set dir_prefix to NULL by default.

2003-09-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/safe-ctype.h (_sch_test): Cast BIT to unsigned char, like latest
	gcc does.

2003-09-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/main.c (main): New option --strict-comments.

	* src/html-parse.c (find_comment_end): New function: simple BM search
	for "-->".
	(map_html_tags): Use it if looking at a comment and not in strict
	comments mode.

2003-09-19  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Changed @itemx not preceded by @item to @item.

2003-09-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/safe-ctype.h: Don't #define ctype.h macros to errors because
	that loses when someone #include's ctype.h after safe-ctype.h.

2003-09-18  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (get_contents): Pass the correct argument to ssl_iread.

2003-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c: Undef U, W, C after use.

2003-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_escape_1): New function.
	(url_escape): Use it.
	(sync_path): Handle pathological cases where u->file and u->dir
	contain really strange characters.
	(ENCODE): Deleted.
	(REENCODE): Deleted.

2003-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_spec_restrict_file_names): Allow the OS setting to
	be augmented by ",nocontrol" which means don't escape the control
	characters, but otherwise keep OS settings.

	* src/url.c (file_unsafe_char): Deleted.
	(append_uri_pathel): Query filechr_table directly.
	(filechr_table): Separated Unix, Windows, and control-unsafe
	characters.

2003-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* ltmain.sh, aclocal.m4: Upgrade to libtool 1.4.3.  Libtool 1.5
	has been out for a while now, but it can wait until after Wget 1.9
	is released.

2003-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* install-sh, mkinstalldirs: Updated from Autoconf 2.57.

2003-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Explain new --restrict-file-names
	semantics.

2003-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Explain how --tries works by
	default.

2003-09-17  Hrvoje Niksic  <hniksic@xemacs.org>

	* config.sub: Ditto.

	* config.guess: Updated from Autoconf 2.57.

2003-09-17  Aurelien Marchand  <artaxerxes@users.sf.net>

	* src/ftp.h: Added OS400 system in enum
	* src/ftp-basic.c: recognize OS400 systems
	* src/ftp.c: don't prepend the CWD if talking to OS400, since it
	breaks the change in library

2003-09-16  Noel Kothe  <noel@debian.org>

	* doc/wget.texi (Download Options): Fix misspelling.

2003-09-16  Mauro Tortonesi <mauro@deepspace6.net>

	* configure.in, aclocal.m4: Added proper IPv6 detection.

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* util/dist-wget: Fixed portable echo checking under Bash.

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (wtimer_sys_diff): Convert the time difference to signed
	__int64, then to double.  This works around MS VC++ 6 which can't
	convert unsigned __int64 to double directly.

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_file_name): Don't reallocate FNAME if the file
	doesn't exist, as is usually the case.

	* src/utils.c (unique_name): New flag allow_passthrough.

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/http.c (post_file): Don't pad the file if it's not large
	enough.  Bail out instead.

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/Makefile.in (clean): Also remove the core.<number> files
	produced by recent Linux systems.

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi: Set the man page title to a string more descriptive
	than "Wget manual".

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/Makefile.in ($(TEXI2POD)): Update only the #! line.

	* doc/texi2pod.pl: New version from Gcc.

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Change AC_CHECK_FUNC(getaddrinfo...) to
	AC_CHECK_FUNCS, which automatically defines HAVE_GETADDRINFO.

2003-09-16  Hrvoje Niksic  <hniksic@xemacs.org>

	* Makefile.in (all): Don't build configure.bat by default.

2003-09-15  Nicolas Schodet  <schodet@efrei.fr>

	* doc/wget.texi (Download Options): Add link to Proxies.

2003-09-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/wget.h (XDIGIT_TO_XCHAR): Implement as index into a literal
	string.
	(XDIGIT_TO_xchar): Ditto.

2003-09-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c: Change the type of timer-related functions from long to
	double, for better precision.  On machines supporting gettimeofday
	the timers now work with granularity of less than one millisecond.

2003-09-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (strpbrk_or_eos): Implement as a macro under Gcc.

2003-09-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/retr.c (get_contents): Reduce the buffer size to the amount of
	data that may pass through for one second.  This prevents long
	sleeps when limiting bandwidth.

	* src/connect.c (connect_to_one): Reduce the socket's RCVBUF when
	bandwidth limitation to small values is requested.

2003-09-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/progress.c (update_speed_ring): Moved the speed ring update to a
	separate function and documented it better.

	* src/progress.c: Use `double' for most timers to support granularity
	smaller than 1ms.

2003-09-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (parse_set_cookies): Fixed the parser to handle more
	edge conditions.
	(test_cookies): New function, contains a test suite for
	parse_set_cookies.

2003-09-15  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/cookies.c (parse_set_cookies): Allow trailing space in
	set-cookies header.  Also, allow any amount of whitespace, not
	only one character.  Allow empty set-cookies header without
	spewing an error.

2003-09-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/utils.c (wtimer_sys_set): Extracted the code that sets the
	current time here.
	(wtimer_reset): Call it.
	(wtimer_sys_diff): Extracted the code that calculates the
	difference between two system times here.
	(wtimer_elapsed): Call it.
	(wtimer_elapsed): Don't return a value smaller than the previous
	one, which could previously happen when system time is set back.
	Instead, reset start time to current time and note the elapsed
	offset for future calculations.  The returned times are now
	guaranteed to be monotonically nondecreasing.

2003-09-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (append_uri_pathel): Use opt.restrict_file_names when
	calling file_unsafe_char.

	* src/init.c: New command restrict_file_names.

	* src/main.c (main): New option --restrict-file-names[=windows,unix].

	* src/url.c (url_file_name): Renamed from url_filename.
	(url_file_name): Add directory and hostdir prefix here, not in
	mkstruct.
	(append_dir_structure): New function, does part of the work that
	used to be in mkstruct.  Iterates over path elements in u->path,
	calling append_uri_pathel on each one to append it to the file
	name.
	(append_uri_pathel): URL-unescape a path element and reencode it
	with a different set of rules, more appropriate for handling of
	files.
	(file_unsafe_char): New function, uses a lookup table to decide
	whether a character should be escaped for use in file name.
	(append_string): New utility function.
	(append_char): Ditto.
	(file_unsafe_char): New argument restrict_for_windows, decide
	whether Windows file names should be escaped in run-time.

	* src/connect.c: Include <stdlib.h> to get prototype for abort().

2003-09-14  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Document the new option
	--restrict-file-names and the corresponding wgetrc command.

2003-09-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c: New command dns_cache.

	* src/main.c (main): New option --dns-cache[=off].

2003-09-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_boolean): Accept yes/no along with on/off.
	(cmd_lockable_boolean): Ditto.

2003-09-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/host.c (lookup_host): Print the result of the DNS lookup.

2003-09-10  Hrvoje Niksic  <hniksic@xemacs.org>

	* doc/wget.texi (Download Options): Documented new option --dns-cache.

2003-09-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (url_parse): Return an error if the URL contains a [...]
	IPv6 numeric address and we don't support IPv6.

2003-09-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/config.h.in: Initialize HAVE_GETADDRINFO and ENABLE_IPV6.

	* src/all: Use #ifdef ENABLE_IPV6 instead of the older INET6.  Use
	HAVE_GETADDRINFO for getaddrinfo-related stuff.

2003-09-09  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in, aclocal.m4: Added configure check for IPv6 and
	getaddrinfo.  From Daniel Stenberg.

2003-09-05  Mauro Tortonesi <mauro@deepspace6.net>

	src/url.c: added RFC 2732 compliance for URL parsing. The
	functions is_*_address valid are a modified version of
	glibc 2.3.2 inet_pton's code.

2003-09-05  Maciej W. Rozycki  <macro@ds2.pg.gda.pl>

	* configure.in: Additional M4 quoting.

2003-09-05  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/url.c (is_valid_ipv6_address): Modified to not require
	zero-terminated strings.
	(is_valid_ipv4_address): Ditto.

2003-09-04  Hrvoje Niksic  <hniksic@xemacs.org>

	* aclocal.m4, configure.in: Made them work under Autoconf 2.5x.

2003-09-03  Ahmon Dancy  <dancy@dancysoft.com>

	* src/main.c init.c options.h: Added --retry-connrefused option so
	that Connection Refused failures are treated as non-fatal (when
	trying to retrieve from busy servers).

	* src/wget.h: New CONNECT_ERROR macro for encapsulating this
	modification.

	* src/ftp.c http.c : Use CONNECT_ERROR macro in places where
	ECONNREFUSED was checked.

2003-03-09  Nicolas Schodet  <contact@ni.fr.eu.org>

	* Makefile.in: Fixed bad configure.bat scrdir.

2003-02-25  Hrvoje Niksic  <hniksic@xemacs.org>

	* libtool.m4, ltmain.sh, config.sub, config.guess: Upgrade to
	libtool 1.5.14.

2003-02-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* configure.in: Don't check for AI_ADDRCONFIG here, it is checked
	for in the source directly.

2003-02-23  Hrvoje Niksic  <hniksic@xemacs.org>

	* libtool.m4, ltmain.sh, config.sub, config.guess: Upgrade to
	libtool 1.5.8.

2003-01-11  Ian Abbott	<abbotti@mev.co.uk>

	* src/ftp.c (ftp_retrieve_glob): Reject insecure filenames as determined
	by calling new function has_insecure_name_p.  This is based on a
	patch by Red Hat.

	* src/fnmatch.c (has_insecure_name_p): New function: returns non-zero
	if filename starts with `/' or contains `../' and is therefore
	considered insecure.

	* src/fnmatch.h: Declare has_insecure_name_p().

2002-08-03  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/init.c (cmd_file): Allocate RESULT correctly.

2002-07-24  Hrvoje Niksic  <hniksic@xemacs.org>

	* src/recur.c (retrieve_tree): Check whether downloaded_html_set is
	non-NULL before using it.

2002-05-27  Ian Abbott  <abbotti@mev.co.uk>

	* windows/config.h.bor: Do #define WGET_USE_STDARG.

2002-05-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-parse.c (NAME_CHAR_P): Allow almost any character here.

2002-05-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_set_params): Fall back to dot progress if the
	terminal type is "emacs".

2002-05-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* windows/config.h.ms: Ditto.

	* windows/config.h.bor: Don't #define __STDC__.

2002-05-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/log.c: Don't #undef WGET_USE_STDARG.

2002-05-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* ALL: Update the license to reflect the OpenSSL exception.

2002-05-16  Ian Abbott  <abbotti@mev.co.uk>

	* src/url.c (schemes_are_similar_p): New function to test enumerated
	scheme codes for similarity.

	* src/url.h: Declare it.

	* src/recur.c (download_child_p): Use it to compare schemes.  This
	also fixes a bug that allows hosts to be spanned (without the
	-H option) when the parent scheme is https and the child's is
	http or vice versa.

2002-05-16  Ian Abbott  <abbotti@mev.co.uk>

	* src/recur.c (download_child_p): Minor optimization to avoid an
	unnecessary additional call to schemes_are_similar_p function.

2002-05-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/hash.c (prime_size): Store the offset of the prime number in the
	prime table.  When searching, start with the given offset.
	(hash_table_new): Pass the pointer to ht->prime_offset to
	prime_size.
	(grow_hash_table): Ditto.
	(prime_size): Make 13 the first prime to make empty hash tables
	slightly smaller.

2002-05-14  Bill Richardson  <bill@riverstonenet.com>

	* src/ftp.c (getftp): Don't ftruncate stdout.

	* src/http.c (gethttp): Don't ftruncate stdout.

2002-05-09  Ian Abbott  <abbotti@mev.co.uk>

	* src/cmpt.c (strptime_internal): Synched with glibc-2.1.3.
	(get_number): Ditto.
	(get_alt_number): Ditto.
	(__isleap): New function-like macro used by strptime.
	(day_of_the_week): New function used by strptime.
	(day_of_the_year): Ditto.
	(__mon_yday): Now shared by mktime and strptime implementations.

2002-05-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (check_domain_match): Use match_tail in case
	insensitive mode.

	* src/utils.c (match_tail): Allow the caller to specify case
	insensitive mode.

	* src/cookies.c (store_cookie): When expiry_time is 0, print it as
	undefined, not indefinite.

2002-05-07  Ian Abbott  <abbotti@mev.co.uk>

	* src/cookies.c (cookie_jar_process_set_cookie): Do not store
	discarded cookie.

2002-04012  Ian Abbott  <abbotti@mev.co.uk>

	* src/http.c (http_loop): Compensate for MS Windows two-second
	granularity of file modification time when comparing timestamps.

	* src/ftp.c (ftp_retrieve_list): Ditto.

2002-04-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Robot Exclusion): Explain how to turn off the robot
	exclusion support from the command line.
	(Wgetrc Commands): Explain that the `robots' variable also takes
	effect on the "nofollow" matching.

2002-04-23  Ian Abbott  <abbotti@mev.co.uk>

	* windows/config.h.ms: Accounted for MSVC not defining `__STDC__' when
	Microsoft's extensions are enabled and define it anyway (set to `1').
	Defined some things that broke as a result of this.

2002-04-21  Thomas Lussnig  <thomas.lussnig@bewegungsmelder.de>

	* src/gen_ssl.c:
	- allow checking of server cert
	- allow defining client cert type
	- allow limit of ssl protocol
	- check more return values
	- added debug message on break

2002-04-21  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (download_child_p): Revert order of items in check
	number 6 for clarity.

2002-04-21  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (check_domain_match): Allow cookies to be set for
	subdomains of unknown top-level domains under some circumstances.

2002-04-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c: Ditto.

	* src/main.c: Ditto.

	* src/http.c: Use the new interface.

	* src/cookies.c: Provide an OO-style "cookie jar" interface to enable
	separate cookie jars.

	* src/http.c (http_atotm): Declare argument as const.

2002-04-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (cookie_new): Default to PORT_ANY.
	(find_cookie_chain_exact): Only search by DOMAIN.
	(find_matching_cookie): Also check that PORT matches.
	(store_cookie): Only match the domain.
	(set_cookie_header_cb): When a cookie "fakes" a domain, assume it
	is valid for that host rather than discarding it completely.
	(find_matching_chains): Don't search by PORT.
	(matching_cookie): Also match PORT.
	(load_cookies): Set the port if specified, otherwise leave it as
	ANY.
	(save_cookies_mapper): Save the port if specified, otherwise leave
	it empty.

2002-04-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/de.po: Updated from the TP.

2002-04-19  Thomas Lussnig  <thomas.lussnig@bewegungsmelder.de>

	* src/init.c: The option `egdfile' was not in sort order.

2002-04-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): If Content-Type is not given, assume
	text/html.

2002-04-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (getftp): Treat directories that begin with <letter>: as
	absolute.
	(getftp): Strip trailing slashes from con->id before merging it
	with TARGET.

2002-04-15  Ian Abbott  <abbotti@mev.co.uk>

	Makefile.in: Updated several dependencies for object files to take
	account of nested include files.

2002-04-15  Ian Abbott  <abbotti@mev.co.uk>

	Makefile.in: The target `connect$o' (connect.o) now depends on
	`utils.h'

2002-04-15  Ian Abbott  <abbotti@mev.co.uk>

	* src/host.c (SET_H_ERRNO): New function-like macro to set `h_errno'.
	(gethostbyname_with_timeout): Use it.

	* src/utils.c: Don't define `SETJMP()', `run_with_timeout_env' or
	`abort_run_with_timeout()' when `USE_SIGNAL_TIMEOUT' is undefined.

2002-04-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (download_child_p): Don't ignore rejection of HTML
	documents that are themselves leaves of recursion.

2002-04-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/host.c (getaddrinfo_with_timeout): New function.
	(gethostbyname_with_timeout): Ditto.
	(lookup_host): Use them.

2002-04-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/hr.po: Editing the Project-Id-Version to say "wget" rather
	than "GNU Wget".

2002-04-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Download Options): Fix the documentation of
	`--progress'.

2002-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (number_to_string): Handle the case when n < -INT_MAX.

2002-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): Make sure that POST is not honored for
	redirections.

	* src/http.c (gethttp): Send the POST data when requested.
	(post_file): New function.
	(gethttp): Use it.

	* src/main.c (main): Ditto.

	* src/init.c: Add new options.

	* src/options.h (struct options): New options post_data and
	post_file_name.

2002-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (print_help): Document `--post-data' and `--post-file'.

2002-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c (comind): Use a marginally faster implementation of
	binary search.  To quote Martin Buchholz, "a nanosecond saved is a
	nanosecond earned."

2002-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Ditto.

	* src/retr.c (retrieve_url): Initialize variables to appease the
	compiler.

	* src/gen_sslfunc.c (ssl_iread): Don't handle EINTR when calling
	select_fd.
	(ssl_iwrite): Ditto.

	* src/connect.c (select_fd): Rewrite to handle EINTR.  Set errno to
	ETIMEDOUT in case of timeout.
	(iread): No need to handle EINTR when calling select_fd.
	(iwrite): Ditto.

2002-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/connect.c (connect_with_timeout): Firing SIGALRM can result in
	connect() exiting with EINTR.  Treat EINTR the same as ETIMEDOUT.

2002-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Wgetrc Commands): Document `--limit-rate'.

2002-04-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (getproxy): Accept a struct url argument.  This obviates
	the need for USE_PROXY_P.

	* src/retr.c (retrieve_url): Allow proxy to be a non-FTP URL.

	* src/ftp.c (getftp): Recognize FWTK-style proxy.

2002-04-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/connect.c (connect_with_timeout): Use it.

	* src/utils.c (run_with_timeout): New function.

2002-04-12  Ian Abbott  <abbotti@mev.co.uk>

	* windows/config.h.bor: Account for Borland not defining `__STDC__'
	when Borland's extensions enabled, and define it anyway.

2002-04-12  Ian Abbott  <abbotti@mev.co.uk>

	* windows/Makefile.src.bor: Removed pre-compiled header options as
	they increase build time (on my machine).

2002-04-12  Ian Abbott  <abbotti@mev.co.uk>

	* src/utils.c (has_html_suffix_p): New function to test filename for
	common html extensions.

	* src/utils.h: Declare it.

	* src/http.c (http_loop): Use it instead of previous test.

	* src/retr.c (retrieve_url): Ditto.

	* src/recur.c (download_child_p): Ditto.

2002-04-12  Ian Abbott  <abbotti@mev.co.uk>

	* src/Makefile.in: Specify libtool mode explicitly when linking.

2002-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/connect.c (connect_with_timeout): New function.
	(connect_to_one): Use it.

	* src/config.h.in: Add stubs for HAVE_SIGSETJMP, HAVE_SIGBLOCK, and
	HAVE_SETJMP_H.

2002-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/config.h.in: Only define _VA_LIST when compiled with gcc.

2002-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/config.h.in: Define _VA_LIST on Solaris to prevent stdio.h from
	declaring va_list.
	From Kevin Rodgers <kevinr@ihs.com>.

2002-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for <setjmp.h>.  Check for sigsetjmp and
	sigblock.

2002-04-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (url_filename): Use compose_file_name regardless of
	whether opt.dirstruct is set.
	(mkstruct): Don't handle the query and the reencoding of DIR; that
	is done in compose_file_name.

2002-04-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (struct progress_implementation): Use PARAMS when
	declaring the parameters of *create, *update, *finish, and
	*set_params.

	* src/netrc.c: Ditto.

	* src/http.c: Reformat some function definitions so that ansi2knr can
	read them.

	* src/hash.c (struct hash_table): Use the PARAMS macro around
	parameters in the declaration of hash_function and test_function.
	(prime_size): Spell 2580823717UL and 3355070839UL as (unsigned
	long)0x99d43ea5 and (unsigned long)0xc7fa5177 respectively, so
	that pre-ANSI compilers can read them.
	(find_mapping): Use PARAMS when declaring EQUALS.
	(hash_table_put): Ditto.

	* src/ftp.h: Wrap the parameters of ftp_index declaration in PARAMS.

	* src/cookies.c (cookie_new): Use (unsigned long)0 instead of 0UL,
	which was unsupported by pre-ANSI compilers.

	From Nelson H. F. Beebe <beebe@math.utah.edu>, for the most part.

2002-04-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_create): If INITIAL is larger than TOTAL, fix
	TOTAL.
	(bar_finish): Likewise.

2002-04-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/log.c: Set WGET_USE_STDARG if __STDC__ is defined and stdarg.h
	is present.

2002-04-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-url.c (tag_handle_form): New function.  Pick up form
	actions and mark them for conversion only.

2002-04-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/wget.h: Ditto for extern char *exec_name.

	* src/options.h: Don't guard against OPTIONS_DEFINED_HERE -- it is
	perfectly legal to follow an `extern' with a non-`extern' ones,
	provided the types match.

	* src/main.c: Don't define OPTIONS_DEFINED_HERE.

2002-04-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (create_image): Revert to calculating ETA based on
	average download speed.
	(create_image): Don't print ETA until the download has been active
	for at least 3 seconds.
	(create_image): When ETA is not available, don't print anything.
	The previous version would print --:--.

2002-04-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_update): Keep updating a subinterval until it
	reaches or exceeds a watermark.  That way the measurement will be
	guaranteed to span a configurable minimum of time.  The current
	default is 3s in 30 100ms intervals.

2002-04-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Warn about the dangers of specifying passwords on the
	command line and in unencrypted files.

2002-04-09  Ian Abbott  <abbotti@mev.co.uk>

	* windows/config.h.bor: define `HACK_BCC_UTIME_BUG'. Define `utime'
	as `borland_utime' if `HACK_BCC_UTIME_BUG' is defined.

2002-04-09  Ian Abbott  <abbotti@mev.co.uk>

	* src/mswindows.c (borland_utime): New function conditionally defined
	when `HACK_BCC_UTIME_BUG' is defined.  A reimplementation of
	`utime()' as Borland's `utime()' function is broken on Windows 9x
	systems.  (Original patch by Chin-yuan Kuo <sr1111111@yahoo.com.tw>.)

2002-04-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_update): Maintain an array of the time it took
	to perform previous 30 network reads.
	(create_image): Calculate the download speed and ETA based on the
	last 30 reads, not the entire download.
	(create_image): Make sure that the ETA is not changed more than
	once per second.

2002-04-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_loop): Propagate the result of ftp_retrieve_glob.

2002-03-26  Ian Abbott  <abbotti@mev.co.uk>

	* windows/wget.dep: Updated several dependencies for object files.

2002-03-26  Ian Abbott  <abbotti@mev.co.uk>

	* src/Makefile.in: Updated several dependencies for object files.

2002-03-20  Ian Abbott  <abbotti@mev.co.uk>

	* windows/config.h.bor:
	* windows/config.h.ms:
	Removed conditional cruft that was there for Unix-like systems.

2002-03-20  Ian Abbott  <abbotti@mev.co.uk>

	* src/mswindows.c: Include "utils.h".

2002-03-20  Ian Abbott  <abbotti@mev.co.uk>

	* * windows/wget.dep: Fix dependencies for target mswindows$o
	(mswindows.obj)

2002-03-19  Chin-yuan Kuo  <sr1111111@yahoo.com.tw>

	* configure.bat.in: Do not check %BORPATH% as C++Builder compiler
	does not use it.

	* windows/Makefile.src.bor:
	* windows/config.h.bor:
	Migrated to free (as in beer) C++Builder compiler.

2002-03-18  Ian Abbott  <abbotti@mev.co.uk>

	* src/host.h: Don't include netdb.h on windows.

2002-03-13  Ian Abbott  <abbotti@mev.co.uk>

	* configure.bat: Removed (renamed to configure.bat.ini).

	* configure.bat.in: New (renamed from configure.bat).

	* Makefile.in: Add rule to copy configure.bat.in to configure.bat,
	converting line endings to MS-DOS format in the process.

2002-02-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (url_parse): Don't treat '?' as query string separator
	when parsing FTP URLs.

2002-02-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (retrieve_tree): Handle the case when start_url doesn't
	parse.

2002-02-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/host.h: Include Unix-specific includes #ifndef WINDOWS.
	Patch originally provided by Christian Lackas.

2002-02-19  Andreas Damm  <andreas-sourceforge@radab.org>

	* src/wget.h (DO_REALLOC_FROM_ALLOCA): Multiply with sizeof(type) when
	calling xmalloc and memcpy.

2002-02-19  Alan Eldridge  <alane@geeksrus.net>

	* src/host.h: Also include <netinet/in.h> and <sys/socket.h>.

	* src/ftp-basic.c: Also include <netinet/in.h>.

2002-02-11  Christian Lackas  <delta@lackas.net>

	* src/recur.c: recurive downloading for https fixed.

2002-02-05  Ian Abbott  <abbotti@mev.co.uk>

	* src/http.c (gethttp): when -c used, mark already fully retrieved
	file as successfully retrieved.

2002-02-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-url.c (tag_handle_meta): Don't crash on <meta
	http-equiv=refresh> where content is missing.

2002-01-31  Herold Heiko  <Heiko.Herold@previnet.it>

	* src/ftp-basic.c, host.c: don't include sys/socket.h, arpa/inet.h,
	netdb.h on windows.

2002-01-30  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): Remove redirection cycle detection.  This
	is because some sites legitimately redirect the user back to the
	same location, e.g. after an authorization check performed by
	another page.  MAX_REDIRECTIONS is still used to prevent infinite
	redirection loops.

2002-01-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (urlchr_table): Make square braces reserved, so we can
	parse http://[::1]/.
	(url_parse): Handle host in braces.
	(url_string): If url->host contains colons, wrap it in braces.

2002-01-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (url_parse): Allow all hex digits, not only decimal ones,
	to form an IP address.

2002-01-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Wrap host name in square brackets if it
	contains a colon.

2002-01-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/source: Integrated IPv6 support.
	Written by Thomas Lussnig <thomas.lussnig@bewegungsmelder.de>.

2002-01-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/host.c (lookup_host): Use sizeof(ip4_address) to calculate the
	offset.
	(address_list_new): Use map_ipv4_to_ip.
	(wget_sockaddr_set_address): Convert ADDR to IPv4 before using it
	in IPv4 context.

2002-01-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/connect.c (resolve_bind_address): New function.
	(connect_to_one): Use it.
	(bindport): Ditto.

	* src/init.c: Don't resolve bind-address here.

	* src/host.c (wget_sockaddr_set_address): Would bug out with ADDR == NULL.

2002-01-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/netrc.c (parse_netrc): Skip leading whitespace before testing
	whether the line is empty.  Empty lines still contain the line
	terminator.

2002-01-15  Ian Abbott  <abbotti@mev.co.uk>

	* src/init.c (cmd_file): Change `\' to `/' for Windows (yes, really!)
	(cmd_directory): New function. Like cmd_file(), but strips
	trailing directory separators.
	(commands): Change action for "dirprefix" from `cmd_file' to
	`cmd_directory'.

	* src/utils.c (make_directory): Allow intermediate `mkdir' calls to
	fail, as not all path components that do not exist should be
	directory components, especially under Windows.

2002-01-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/gen_sslfunc.c (ssl_iread): Call select on the file descriptor
	only if no data is pending in SSL buffers.
	From tony@bluetail.com.

2002-01-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* MACHINES: OS X entry by Jonathan Davis.

2002-01-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (parse_uname): URL-decode *USER and *PASSWD.

2002-01-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Invalidate SOCK if get_contents encountered an
	error.

2002-01-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/headers.c (header_get): Strip trailing whitespace from the
	header.

2002-01-07  Ian Abbott <abbotti@mev.co.uk>

	* src/url.c (uri_merge_1): Deal with "net path" relative URL (one that
	starts with "//").

2001-12-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8.1 is released.

2001-12-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8.1-pre3 is released.

2001-12-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (retrieve_tree): Enqueue the canonical representation of
	start_url, so that the test against dl_url_file_map works.

2001-12-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/log.c (logputs): Check for requested verbosity before printing
	anything.

2001-12-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-url.c (tag_handle_link): Treat the "shortcut icon" link as
	inline.

2001-12-19  Csaba Raduly  <csaba.raduly@sophos.com>

	* windows/Makefile.watcom: add gen-md5.obj and progress.obj to the
	list of "sources"

	* configure.bat: add section for Watcom

2001-12-18  Ian Abbott  <abbotti@mev.co.uk>

	* src/recur.c (retrieve_tree): Pass on referring URL when retrieving
	recursed URL.

2001-12-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (retrieve_tree): Make a copy of file obtained from
	dl_url_file_map because the code calls xfree(file) later.

2001-12-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (register_html): Maintain a hash table of HTML files
	along with the list.  Disallow duplicates.
	(retrieve_tree): Use downloaded_html_set to check whether the file
	found in dl_url_file_map is an HTML file, and descend into it if
	so.
	(convert_all_links): Don't guard against duplicates in
	downloaded_html_list, since they are no longer possible.

2001-12-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8.1-pre2 is released.

2001-12-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (sleep_between_retrievals): Simplify indentation.

2001-12-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/gen_sslfunc.c (ssl_init_prng): Use random_number to get a byte
	of "randomness" at a time.
	(ssl_init_prng): Don't seed the PRNG; random_number will do that.

	* src/retr.c (sleep_between_retrievals): Use it.  Make sure that the
	random amount averages in opt.wait.
	(sleep_between_retrievals): Don't seed the PRNG; random_number
	will do that.

	* src/utils.c (random_number): New function.

2001-12-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Wgetrc Commands): Undocument simple_host_check.

2001-12-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (path_simplify): Move here from utils.c, and make static.

2001-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8.1-pre1 is released.

2001-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/res.c (matches): Fix broken URL in the docstring.

2001-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (register_download): Don't abort when one URL references
	two different files.

2001-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c (wgetrc_file_name): Print correct message when loading
	getenv("WGETRC") fails.

2001-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Check for conn->scheme, not u->scheme, before
	calling ssl_iwrite.

2001-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-url.c (tag_url_attributes): Mark <embed href=...> as
	external.

2001-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/ja.po: Ditto.

	* po/sv.po: Ditto.

	* po/de.po: Ditto.

	* po/es.po: Ditto.

	* po/fr.po: Ditto.

	* po/et.po: Ditto.

	* po/tr.po: Ditto.

	* po/ru.po: Update from TP.

2001-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Robots): Fix broken URLs that point to the webcrawler
	web site.

2001-12-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (get_urls_file): Cosmetic changes.

2001-12-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-url.c (collect_tags_mapper): Break into several functions.
	(tag_url_attributes): Collect <embed href=...>.

2001-12-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-url.c (append_one_url): Resurrect warning when unable to
	resolve a relative link.

2001-12-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Autodetect SSL.  Check for SSL includes too.

2001-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/host.c: New type ipv4_address.  Use it consistently instead of
	`unsigned char[4]' and `unsigned char *'.
	(pretty_print_address): Accept a `const void *', to require even
	less casting.

2001-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp-ls.c (ftp_parse_vms_ls): Fix obvious memory leaks.

2001-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (HTTP Options): Explain how to make IE produce a
	`cookies.txt'-compatible file.
	Reported by Herold Heiko.

2001-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/texi2pod.pl.in: Handle @asis in table.

2001-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for md5_calc rather than MD5Update when
	looking for Solaris md5.

2001-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* config.sub: Ditto.

	* config.guess: Ditto.

	* aclocal.m4: Ditto.

	* ltmain.sh: Upgrade to libtool 1.4.2.

2001-12-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (path_simplify): Rewrite, with better comments, and
	without the use of strcpy to move overlapping blocks.

2001-12-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (path_simplify): Correctly handle the unlikely case that
	b starts out as path + 1.

2001-12-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (long_to_string): Return a pointer after where the
	number ends.
	(long_to_string): Rename to number_to_string.

2001-12-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (main): Initialize progress after fork_to_background, so
	that it knows when to use dots.

	* src/mswindows.c (ws_hangup): Call log_request_redirect_output.

	* src/utils.c (fork_to_background): Print the PID of the child
	process.

	* src/log.c (log_request_redirect_output): Set a flag that output
	redirection has been requested.  Doing anything else in a signal
	handler is unsafe.
	(check_redirect_output): New function: check whether redirection
	has been requested and, if so, call redirect_output().
	(logputs): Call check_redirect_output.
	(logprintf): Ditto.
	(debug_logprintf): Ditto.
	(redirect_output): Print clearer messages.

	* src/main.c (redirect_output_signal): Don't call
	redirect_output_signal directly.  Instead, call
	log_request_redirect_output.

	* src/utils.c (memfatal): Ditto.

	* src/progress.c (display_image): Use it.

	* src/log.c (log_set_save_context): New function: allow the caller to
	turn off saving log context lines.

2001-12-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/host.c (address_list_set_faulty): Uncomment a sanity check.

2001-12-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8 is released.

2001-12-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (reencode_string): Declare static.

	* src/res.c (registered_specs): Declare static.

	* src/progress.c (current_impl_locked): Declare static.

	* src/log.c (flush_log_p): Declare static.
	(needs_flushing): Ditto.

	* src/http.c (digest_authentication_encode): Declare static.

	* src/html-url.c (init_interesting): Declare static.

	* src/host.c (host_name_addresses_map): Declare static.

	* src/cookies.c (find_matching_chains): Declare static.

	* src/ftp-ls.c (ftp_parse_vms_ls): Warn about the memory leak
	indicated by lint.

	* src/utils.c (path_simplify): Remove unused variable STUB_CHAR.

	* src/host.c (address_list_set_faulty): Document that INDEX is
	currently unused.

	* src/url.c (rewrite_shorthand_url): Remove unused variable PATH.

2001-12-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (create_image): Fix ETA padding when hours are prined.

2001-12-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (main): Remove stray debugging message.

2001-12-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c (cmd_spec_progress): Resurrect.  Check whether VAL is a
	valid progress type before setting it.

2001-12-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Bump version to 1.8.

2001-12-08  R.I.P. Deaddog  <maddog@linuxhall.org>

	* po/zh_TW.po: Updated for 1.8.

2001-12-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8-pre2 is released.

2001-12-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/tr.po: Ditto.

	* po/sv.po: Ditto.

	* po/ru.po: Ditto.

	* po/fr.po: Ditto.

	* po/es.po: Ditto.

	* po/de.po: Update from TP.

2001-12-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (HTTP Options): Provide more specific information
	about how --load-cookies is meant to be used.

2001-12-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/texi2pod.pl: Include the EXAMPLES section.

	* doc/wget.texi (Overview): Shorten the man page DESCRIPTION.
	(Examples): Redo the Examples chapter.  Include it in the man
	page.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8-pre1 is released.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (read_whole_line): Handle lines beginning with \0.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (scheme_disable): New function.

	* src/main.c (main): Call ssl_init_prng from here rather than from
	init_ssl, so that it has a chance to disable support for https
	before a URL has been resolved.

	* src/gen_sslfunc.c (ssl_init_prng): Seed with rand() if all else
	failed.
	(ssl_init_prng): Disable support for https if seeding the PRNG
	fails.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (progress_handle_sigwinch): Set up the signal again.

	* src/utils.c: Include <sys/termios.h>, where Solaris defines
	TIOCGWINSZ.

	* src/progress.c (bar_create): Don't use the last column on the screen.
	(create_image): Pad ETA to constant size.  Pad SIZE to nine digits
	only until it exceeded them.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (progress_create): Make sure that, when the output is
	redirected, the progress implementation gets changed to the
	fallback one.
	(bar_set_params): Set current_impl_locked to 1 when "force" is
	specified.
	(progress_create): Don't change the progress implementation if
	current_impl_locked is non-zero.

	* src/main.c (redirect_output_signal): Call
	progress_schedule_redirect.

	* src/progress.c (progress_schedule_redirect): New function.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/log.c (logvprintf): Restructure to allow being called multiple
	times.
	(logprintf): Call logvprintf in a loop.
	(debug_logprintf): Ditto.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/gen_sslfunc.c (ssl_init_prng): Make the printed message
	translatable.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/gen_sslfunc.c (ssl_init_prng): Allow the user to disable EGD by
	setting egd_file it to empty string.

	* src/main.c (main): Change the option name from --sslegdsock to
	--egd-file.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/et.po: Update from the TP.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/de.po: Ditto.

	* po/fr.po: Ditto.

	* po/tr.po: Ditto.

	* po/sv.po: Ditto.

	* po/et.po: Update from TP.

	* po/hu.po: New file from TP.

2001-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for <termios.h>

2001-12-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (path_simplify): Document with test cases.

2001-12-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (convert_all_links): Guard against duplicates in
	downloaded_html_files.
	(register_download): Don't invalidate similar-looking URLs.
	(match_except_index): New function.

2001-12-04  Ian Abbott <abbotti@mev.co.uk>

	* src/snprintf.c (dopr): Use `unsigned int' as the second argument to
	va_arg when casting to `unsigned short' is intended.

2001-12-04  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (local_quote_string): Reenable quoting of question marks,
	but only when `--html-extension' is used.

2001-12-04  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (retrieve_tree): Check whether the URL was already
	downloaded before downloading it again.
	(descend_child_p): Renamed to download_child_p.
	(register_download): When one URL is downloaded to a file already
	"owned" by another URL, delete all references that map any URL to
	that file.
	(register_delete_file): New function.
	(retrieve_tree): Use it after deleting a file.

	* src/url.c (url_parse): Re-canonicalize the URL also if the path is
	empty, so that e.g. "http://www.server.com" ->
	"http://www.server.com/".
	(lowercase_str): Use ISUPPER instead of !ISLOWER.

	* src/retr.c (retrieve_url): Use the canonical URL form when calling
	register_download().

2001-12-04  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/gen_sslfunc.c: Ditto.

	* src/rbuf.c: Include <string.h>.

2001-12-04  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows\Makefile.src: add gen_sslfunc.c

	* windows\Makefile.src.bor: ditto.

2001-12-04  Herold Heiko  <Heiko.Herold@previnet.it>

	* src/gen_sslfunc.c: on windows provide ssl crypto random
	  initialization through RAND_screen(); could possibly
	  be not enough for strong ssl communication (see the
	  relevant manual page from the openssl package).

2001-12-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8-beta3 is released.

2001-12-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/snprintf.c (dopr): Replace `short int' and `unsigned short int'
	with `int' when using it as the second argument to `va_arg'.

2001-12-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/snprintf.c (dopr): Cast the result of va_arg to short int and
	short unsigned int where these types are expected to be used.

2001-12-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/host.c (address_list_new_one): New function.
	(lookup_host): Use it.

2001-12-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp-basic.c (ftp_port): Don't return HOSTERR if we fail getting
	the socket data.

	* src/ftp.c: Ditto.

	* src/http.c: No need to declare h_errno.

	* src/host.c: Declare h_errno.

2001-12-03  Andre Majorel  <amajorel@teaser.fr>

	* src/host.c (lookup_host): Don't initialize TMPSTORE directly because
	it's not legal C.

2001-12-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8-beta2 is released.

2001-12-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (file_merge): If BASE doesn't contain a slash, just
	return a copy of FILE.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.8-beta1 is released.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (url_full_path): Document better.

	* src/http.c (gethttp): Use the full path when creating digest
	authorization.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (replace_attr_refresh_hack): New function.
	(convert_links): Call replace_attr_refresh_hack for Refresh
	links.  It will add the "TMOUT; URL=" junk before the link.

	* src/html-url.c (collect_tags_mapper): Set ID to the ID of the
	"content" attribute, not "http-equiv".
	(collect_tags_mapper): Don't use OFFSET to hack the raw_* values;
	instead, store the information that this entry belongs to a
	"refresh" link.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (get_urls_file): If opt.base_href is specified, merge each
	URL with the base.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (retrieve_tree): Allow -p retrievals to exceed maximum
	depth by more than one.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (print_help): Don't document the removed `-nh'.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (getftp): When PWD fails, assume "/".

	* src/ftp-basic.c (ftp_syst): Fix indentation.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (path_matches): Return 0 if PREFIX doesn't begin with
	'/'.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (path_matches): FULL_PATH doesn't begin with '/', but
	PREFIX does.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (check_domain_match): Reimplement to match Netscape's
	"preliminary specification" for cookies.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/hr.po: Updated Croatian translation.

2001-12-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Update the manual with the new recursive retrieval
	stuff.

2001-11-30  T. Bharath  <TBharath@responsenetworks.com>

	* src/http.c (persistent_available_p): Call SHUTDOWN_SSL if
	test_socket_open fails.

2001-11-30  Ingo T. Storm  <tux-sparc@computerbild.de>

	* doc/sample.wgetrc: Document ftp_proxy, too.

2001-11-30  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): Don't allow more than 20 redirections.

2001-11-30  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (retrieve_tree): Skip the non-inline entries when
	enqueuing the children of a leaf HTML node in -p mode.
	(descend_url_p): Ignore opt.no_parent when in -p mode and UPOS is
	"inline".

	* src/html-url.c (get_urls_html): Don't accept dash_p_leaf_HTML.
	(collect_tags_mapper): When an entry is "inline", mark it as such.

	* src/recur.c (descend_url_p): Fix test when checking for
	acceptance/rejection rules.

2001-11-30  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (display_image): Just print one CR to reset the
	cursor position.

2001-11-30  Christian Fraenkel  <c.fraenkel@gmx.net>

	* src/init.c: New command `ssl_egd_sock'.

	* src/main.c (main): New option `--sslegdsock'.

	* src/gen_sslfunc.c (ssl_init_prng): Seed the RNG using EGD.

2001-11-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (descend_url_p): When resolving no_parent, compare with
	start_url, not parent url.  Otherwise link from /a/b/ to /a/c/
	wouldn't be followed, although the download started from /a/.

2001-11-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_process_range): Accept the broken output of
	"JavaWebServer/1.1.1".

2001-11-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/host.c (address_list_new): Initialize al->faulty.

2001-11-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/headers: Guard against header files being included twice.

2001-11-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/gen-md5.c: Use unsigned char * as the buffer argument to
	gen_md5_update.

2001-11-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/connect.h: Declare select_fd.

2001-11-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cmpt.c (memmove): Include a simple memmove implementation.

2001-11-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Use SSL's MD5 if we're compiling with SSL anyway.

2001-11-28  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (dot_set_params): If PARAMS is unspecified, use
	dot_style, if available.

	* src/init.c: Ditto.

	* src/main.c (main): Resurect --dot-style.

	* src/progress.c (dot_finish): Print the quantity if we're left at the
	beginning of a row.

2001-11-27  Ian Abbott <abbotti@mev.co.uk>

	* src/retr.c (retrieve_from_file): Initialize `new_file' to NULL to
	prevent seg fault.

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (convert_links): Don't translate %d-%d.

	* src/main.c (print_help): Remove stray HAVE_RANDOM code.

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c: Change the default progress implementation to "bar".

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_create): Print two newlines.

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (getftp): Improve output after sending PASV.  Don't
	attempt to "look up" the IP address we already know; call
	connect_to_one directly.

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/connect.c (connect_to_many): Use address_list_set_faulty to
	prevent the faulty address from being reused.

	* src/host.c (address_list_set_faulty): New function.
	(address_list_get_bounds): New function, instead of
	address_list_count.

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cmpt.c (random): Removed.

	* src/retr.c (sleep_between_retrievals): Use the more portable rand()
	instead of random().

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cmpt.c (random): New function, a simple-minded replacement for
	random() on systems that don't have it.

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/hr.po: Updated.

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Don't check for random.

2001-11-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for random.

2001-11-26  Ian Abbott <abbotti@mev.co.uk>

	* src/http.c (gethttp): fix undeclared variable 'err' when compiled
	with HAVE_SSL.

2001-11-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (retrieve_tree): In case of followed redirection,
	blacklist the pre-redirection URL.

2001-11-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (descend_redirect_p): New function.
	(retrieve_tree): Make sure redirections are not blindly followed.

2001-11-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c: Don't allocate new timers; use the timing data
	propagated from the caller.

	* src/retr.c (get_contents): Allocate and use a timer.

2001-11-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (last_host_ip): Made into an address_list.
	(invalidate_persistent): Release pc_last_host_ip.
	(register_persistent): Use lookup_host.
	(persistent_available_p): Check for equality of hosts using
	address_list_match_all.  Call address_list_release.
	(http_cleanup): New function.

	* src/ftp.c (getftp): Use lookup_host and connect_to_many.

	* src/http.c (gethttp): Use lookup_host and connect_to_many.

	* src/connect.c (make_connection): Removed.
	(connect_to_one): New function.
	(connect_to_many): Ditto.
	(set_connection_host_name): Ditto.

	* src/host.c (lookup_host): New function; new return type.
	(address_list_new): New function.
	(address_list_count): Ditto.
	(address_list_copy_one): Ditto.
	(address_list_delete): Ditto.
	(address_list_release): Ditto.
	(pretty_print_address): Ditto.

2001-11-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/config.h.in: Put a HAVE_USLEEP stub.

	* src/cmpt.c (usleep): Replacement implementation of usleep using
	select.

	* src/init.c: New option init_rate.

	* src/main.c (main): New option --limit-rate.

	* src/retr.c (limit_bandwidth): New function.
	(get_contents): Call it to limit the bandwidth used when
	downloading.

	* src/progress.c (dot_update): Would print the wrong download speed on
	rows other than the first one when the download was continued.
	(dot_finish): Ditto.

2001-11-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for usleep.

2001-11-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* util/dist-wget: New file: the script used for building Wget.

2001-11-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (reencode_string): Use unsigned char, not char --
	otherwise the hex digits come out wrong for 8-bit chars such as
	nbsp.
	(lowercase_str): New function.
	(url_parse): Canonicalize u->url if needed.
	(get_urls_file): Parse each URL, and return only the valid ones.
	(free_urlpos): Call url_free.
	(mkstruct): Add :port if the port is non-standard.
	(mkstruct): Append the query string to the file name, if any.
	(urlpath_length): Use strpbrk_or_eos.
	(uri_merge_1): Handle the cases where LINK is an empty string,
	where LINK consists only of query, and where LINK consists only of
	fragment.
	(convert_links): Count and report both kinds of conversion.
	(downloaded_file): Use a hash table, not a list.
	(downloaded_files_free): Free the hash table.

	* src/retr.c (retrieve_from_file): Ditto.

	* src/main.c (main): Call either retrieve_url or retrieve_tree
	for each URL, not both.

	* src/retr.c (register_all_redirections): New function.
	(register_redirections_mapper): Ditto.
	(retrieve_url): Register the redirections.
	(retrieve_url): Make the string "Error parsing proxy ..."
	translatable.

	* src/res.c (add_path): Strip leading slash from robots.txt paths so
	that the path representations are "compatible".
	(free_specs): Free each individual path, too.
	(res_cleanup): New function.
	(cleanup_hash_table_mapper): Ditto.

	* src/recur.c (url_queue_new): New function.
	(url_queue_delete): Ditto.
	(url_enqueue): Ditto.
	(url_dequeue): Ditto.
	(retrieve_tree): New function, replacement for recursive_retrieve.
	(descend_url_p): New function.
	(register_redirection): New function.

	* src/progress.c (create_image): Cosmetic changes.

	* src/init.c (cleanup): Do all those complex cleanups only if
	DEBUG_MALLOC is defined.

	* src/main.c: Removed --simple-check and the corresponding
	simple_host_check in init.c.

	* src/html-url.c (handle_link): Parse the URL here, and propagate the
	parsed URL to the caller, who would otherwise have to parse it
	again.

	* src/host.c (xstrdup_lower): Moved to utils.c.
	(realhost): Removed.
	(same_host): Ditto.

2001-11-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (convert_links): Handle CO_NULLIFY_BASE.

	* src/recur.c (retrieve_tree): Ignore download-ignorable children.
	(convert_all_links): Specify CO_NULLIFY_BASE when link_base_p.

	* src/html-url.c (handle_link): Return the newly created urlpos.
	(collect_tags_mapper): When dealing with BASE, store the base
	reference and mark it as download-ignorable.

2001-11-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (convert_links): Attempt to quote '?' as "%3F" when
	linking to local files.  Given up on the attempt, as it breaks
	local browsing.

2001-11-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (descend_url_p): Be more conservative with blacklisting
	URLs.
	(convert_all_links): Print how many files have been converted, and
	how long it took.

	* src/progress.c (create_image): Place the number of downloaded bytes
	right after the progress bar.

	* src/utils.c (suffix): Return a pointer into the string.

2001-11-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (dot_create): Align the "[ skipping ... ]" string
	with the dots.

	* src/retr.c (rate): Split into two functions: calc_rate and
	retr_rate.

	* src/progress.c (create_image): Draw a dummy progress bar even when
	total size is unknown.
	(display_image): Place the text cursor at the end of the "image".

2001-11-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (private_initialize): Removed.
	(main): Don't call private_initialize.

	* src/http.c: Call lookup_host.

	* src/host.c (host_init): Removed.
	(add_host_to_cache): Initialize host_name_address_map here, on
	demand.
	(ngethostbyname): Commented out.

	* src/connect.c (make_connection): Remove dead code; use lookup_host.

	* src/host.c (store_hostaddress): Renamed to lookup_host and reversed
	the args.
	Removed host_address_name_map and host_slave_master_map.

2001-11-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (path_simplify): Preserver the (non-)existence of
	leading slash.  Return non-zero if changes were made.

2001-11-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): When the redirection URL doesn't parse,
	print the correct error message rather than "UNKNOWN".

2001-11-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (recursive_retrieve): Fix typo.

2001-11-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_update): Don't modify bp->total_length if it is
	zero.

2001-11-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_finish): If the timer didn't record any time
	since the download beginning, fake 1ms.

2001-11-23  Lemble Gregory  <gregory.lemble@st.com>

	* src/gen_sslfunc.c (ssl_init_prng): New function; seed the SSL RNG.

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (determine_screen_width): New function.

	* src/main.c (main): New option `--progress=TYPE'.
	(main): Implement compatibility with the old option `--dot-style'.

	* src/init.c: Removed cmd_spec_dotstyle -- that logic is now in
	dp_set_params.
	(cmd_spec_progress): New function.

	* src/retr.c (get_contents): Use the progress_* functions instead of
	the old show_progress().
	(show_progress): Removed.
	(rate): Print "xxxx.xx K/s" instead of "KB/s".  Ditto for MB/s,
	etc.

	* src/progress.c (set_progress_implementation): New function.
	(valid_progress_implementation_p): Ditto.
	(progress_create): Ditto.
	(progress_update): Ditto.
	(progress_finish): Ditto.
	(dp_create): Ditto.
	(dp_update): Ditto.
	(dp_finish): Ditto.
	(dp_set_params): Ditto.
	(print_elapsed): Ditto.

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c: Renamed dp_* functions to dot_* for greater clarity
	and consistency with bar_*.
	(print_download_speed): Get rid of the unneeded '@' character.
	(create_image): Fix download rate geometry.

	* src/progress.c (print_elapsed): Remove spurious space.
	(print_elapsed): Renamed to print_download_speed, since that's
	what it does.

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (create_image): Don't translate "%ld ".

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_update): If the downloaded amount becomes larger
	than the expected amount, adjust the expected amount accordingly.

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/progress.c (bar_set_params): Allow the user to force the use of
	the bar.

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/wget.pot: Rebuild.

	* po/POTFILES.in: Update with the new source files.

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/hr.po: A major overhaul.

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Download Options): Document the new `--progress'
	option.

2001-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for sys/ioctl.h.

2001-11-22  Jochen Hein  <jochen@jochen.org>

	* src/main.c (main): Split the copyright notice for easier
	translation.

2001-11-22  Hrvoje Niksic  <hniksic@arsdigita.com>

	* windows/Makefile.doc: Update docs generation.

2001-11-22  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (path_simplify): Don't remove trailing slashes.

	* src/ftp.c (ftp_get_listing): Use it.

	* src/utils.c (file_merge): New function.

	* src/url.c (opt_url): Removed.

	* src/recur.c (recursive_retrieve): Inline "opt_url" logic.

	* src/main.c (main): Use xfree(), not free().

	* src/url.c (rewrite_url_maybe): Renamed to rewrite_shorthand_url.

	* src/ftp.c (ccon): Move `ccon' typedef here, since it's only used
	internally.

	* src/config.h.in: Include a stub for HAVE_STRPBRK.

	* src/cmpt.c (strpbrk): Include a replacement for systems without
	strpbrk().

	* src/ftp.c: Use url_set_dir and url_set_file when modifying the URL.

	* src/url.c (url_set_dir): New function.
	(url_set_file): Ditto.

	* src/ftp-basic.c (ftp_process_type): Process FTP type here; the URL
	parser makes the URL "params" available, so we can do that in this
	function.

	* src/retr.c: Ditto.

	* src/ftp.c: Ditto; pass the local file information in `ccon'.

	* src/http.c: Get rid of the ugly kludge that had URL being replaced
	with the proxy URL when proxy retrieval was requested.  Use a
	separate parameter to http_loop and gethttp for the proxy URL.

	* src/http.c: Changed to reflect the fact that local file, proxy, and
	referer information are no longer stored in struct url.  The local
	file information is passed in `struct hstat' now.

	* src/url.c: Reworked URL parsing to be more regular.  Reencode the
	URL using reencode_string.
	Removed non-URL-related information from struct url.  This
	includes fields `proxy', `local', and `referer'.

2001-11-22  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (show_progress): Use it.

	* src/log.c (log_set_flush): New function.

2001-11-22  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Proxies): Fix typo.
	(Proxies): Sync the text with the example.
	(Wgetrc Commands): There is no -f option.  It's --follow-ftp.
	Reported by Wojtek Kotwica.

2001-11-22  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for strpbrk().

2001-11-22  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/Readme
	* windows/Makefile.doc
	Windows documentation update.
	* windows/Makefile.src
	Cleanup config.h

2001-11-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (parseurl): Don't depend on the now-obsolete TYPE.

2001-11-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c: Clean up handling of URL schemes.

2001-11-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (getproxy): Handle URL shorthands.

2001-11-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c: Remove --wait / --waitretry backwards compatibility
	code.

2001-11-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (main): Use it.

	* src/url.c (rewrite_url_maybe): New function.

2001-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.7.1 is released.

2001-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/res.c (res_register_specs): Initialize OLD and HP_OLD to appease
	the compiler.

2001-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/md5.h: Renamed to gnu-md5.h.

	* src/md5.c: Renamed to gnu-md5.c.

	* src/http.c: Ditto.

	* src/ftp-opie.c: Use the new macros.

	* src/sysdep.h: Define md5-related macros.

	* src/config.h.in: Define HAVE_SOLARIS_MD5 or HAVE_BUILTIN_MD5
	depending on which md5 implementation is used.

2001-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Print the whole response line when printing
	headers is requested.

2001-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/Makefile.in: Conditionally compile getopt.o.

2001-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/: Installed ja.po, et.po, he.po, fr.po, da.po, uk.po, es.po,
	sl.po, nl.po from the Translation Project.

2001-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for getopt_long in libc.

2001-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for Solaris libmd5.

2001-11-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/Makefile.in (install.info): If info files from the build
	directory are not available, use the ones from $(srcdir).

2001-11-16  Peter Farmer  <peter.farmer@zveno.com>

	* doc/Makefile.in: Use $? instead of $<.  Use TEXI2POD more
	consistently.

2001-11-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-parse.c (map_html_tags): Support XML-style empty tags.

2001-11-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-parse.c (advance_declaration): Use 0x22 instead of '"' or
	'\"'.  Different compilers' assert macros are broken in different
	ways.

2001-11-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/headers.c (header_extract_number): Ignore trailing whitespace.

2001-11-16  Chris Seawood  <cls@seawood.org>

	* src/init.c: Ditto.

	* src/host.c: Ditto.

	* src/connect.c: Ditto.

	* src/sysdep.h: Support compilation under BEOS.

2001-11-04  Alan Eldridge  <alane@geeksrus.net>

	* src/config.h.in: added HAVE_RANDOM.

	* src/options.h: added random_wait to struct options.

	* src/main.c (print_help [HAVE_RANDOM], main): added arg parsing, help
	for --random-wait.

	* src/retr.c (sleep_between_retrievals) [HAVE_RANDOM]: added
	implementation of random wait times.

	* src/init.c (commands): added "randomwait" keyword.

2001-11-04  Alan Eldridge  <alane@geeksrus.net>

	* doc/wget.texi: Document --random-wait, randomwait=on/off.

2001-10-31 Daniel BODEA <dali@dali-designs.com>

	* src/netrc.c (search_netrc): When slack_default is 0, still look for
	an account with matching password, just not the "default account".
	HTTP Authorization using .netrc should now work as expected.

2001-09-29  Christian Fraenkel  <c.fraenkel@gmx.net>

	* src/http.c (gethttp): print debug output for errors occuring during
	the ssl handshake.

2001-08-24  Ian Abbott  <abbotti@mev.co.uk>

	* src/html-url.c (collect_tags_mapper): Fix bug converting links
	with -k option for tags with multiple link attributes by
	handling links in the order they appear.

2001-08-21  Dave Turner <dct25@hermes.cam.ac.uk>

	* src/ftp-basic.c (ftp_size): New function to send non-standard SIZE
	  command to server to request file size.
	* src/ftp.h (ftp_size): Export it.
	* src/ftp.c (getftp): Use new ftp_size function if restoring
	  transfer of a file with unknown size.

2001-08-15  Ian Abbott  <abbotti@mev.co.uk>

	* src/ftp.c (ftp_loop_internal): Avoid a potential buffer overflow in
	  the call to the 'rate' function by moving it past the error
	  checking for the 'getftp' function return value.

2001-06-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/wget.h (DO_REALLOC_FROM_ALLOCA): Set SIZEVAR after the memcpy()
	call because it needs the old value.

2001-06-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/wget.h (DO_REALLOC_FROM_ALLOCA): Check for do_realloc_newsize in
	loop condition because we're no longer setting SIZEVAR here.

2001-06-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (url_filename): Make sure that slashes that sneak in to
	u->file via query string get protected.
	(file_name_protect_query_string): New function.

2001-06-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (ATTR_NAME_CHAR): Allow almost any character to be in
	an attribute name.

2001-06-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Updated version to 1.7.1.

2001-06-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* MACHINES: Added mips-sgi-irix6.5, as reported by Edward
	J. Sabol.

2001-06-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/da.po: New version from TP.

2001-06-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/Makefile.in (install.wgetrc): Use $(DESTDIR) when testing
	whether $(WGETRC) exists.

2001-06-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/Makefile.in (install.wgetrc): Take $(DESTDIR) into account when
	running mkinstalldirs.

2001-06-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* config.sub: New version from libtool 1.4.

	* config.guess: New version from libtool 1.4.

	* ltmain.sh: New version from libtool 1.4.

	* aclocal.m4: Imported `libtool.m4' from libtool 1.4.

	* ltconfig: Removed.

	* configure.in: First check the compiler, then invoke libtool.

2001-06-15  Adam J. Richter  <adam@yggdrasil.com>

	* doc/Makefile.in (install.wgetrc): Make `make install'
	non-interactive in all cases.

2001-06-14  Maciej W. Rozycki  <macro@ds2.pg.gda.pl>

	* configure.in: Use `libtool' to test linking of external
	libraries.

2001-06-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/sysdep.h (MAP_FAILED): Provide MAP_FAILED for systems that don't
	define it.

2001-06-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (recursive_retrieve): Also check undesirable_urls with
	canonicalized URL.

2001-06-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Search `.netrc' with real host, not the proxy
	one.

2001-06-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/: Install new files from the TP: sv.po, cs.po, et.po, tr.po,
	es.po, de.po, gl.po, sk.po, ru.po, fr.po.

2001-06-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for both gethostbyname and inet_ntoa before
	concluding that -lnsl is not needed.

2001-06-09  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftp.h: Provide correct prototype for ftp_parse_ls().

2001-06-08  Edward J. Sabol  <sabol@alderaan.gsfc.nasa.gov>

	* src/url.c (url_equal): Fix a memory leak when parseurl returns an
	error on the second URL. Also, since url_equal is not used at the
	moment, do not compile it.

	* src/url.h: Ditto for the prototype of url_equal.

2001-06-05  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* po/cs.po: Updated to match the 1.7 POT.

2001-06-05  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* doc/Makefile.in (wget.info): Added -I$(srcdir) to support compilation
	outside the source tree.
	(install.man): Replaced $(srcdir)$(MAN) with $(MAN). The former
	did not work when compiling outside the source tree.

2001-06-04  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.7 is released.

2001-06-04  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/: New versions of de.po and gl.po from the TP.

2001-06-03  Karl Eichwalder  <ke@suse.de>

	* src/ftp-ls.c (ftp_parse_ls): Fix typo.

2001-06-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/wget.pot: Updated.

2001-06-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/hr.po: Updated to match the new POT.

2001-06-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/es.po: Use the version from TP.

2001-06-02  R.I.P. Deaddog  <maddog@linuxhall.org>

	* po/zh_TW.po: Updated for 1.7.

2001-06-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/pl.po: Use iso-8859-1 as charset.

	* po/hr.po: Update.

2001-06-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/: Updated ru.po, et.po, and sv.po.  Added tr.po.

2001-05-31  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Mailing List): Fix the mailing list address.

2001-05-28  Maciej W. Rozycki  <macro@ds2.pg.gda.pl>

	* configure.in: Use $host_os instead of non-existent "$opsys" when
	deciding based on host type.

	* configure.in: Print "cross" when cross-compiling.

2001-05-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/all: Update copyright information.

2001-05-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Copying): Clarify.  Link to
	"free-software-for-freedom.html".

2001-05-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Wget 1.7-pre1 is released.

2001-05-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Updated version to 1.7-pre1.

2001-05-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Indicate that the continued download failed
	for *this* file.

2001-05-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/hr.po: Updated.

	* po/wget.pot: Regenerated from sources.

	* README: Updated copyright statement.

	* INSTALL: Document the new OpenSSL autodetector.

2001-05-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Updated version to 1.7.

2001-05-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Updated version to 1.7-pre1.

2001-05-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Contributors): Updated list of contributors.

2001-05-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Provide a default for AC_TRY_RUN when
	cross-compiling.  Effectively, assume that when cross-compiling,
	working linkage implies working executable.

2001-05-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Rewrote OpenSSL library detection.  Now the code
	loops over system locations where libssl/libcrypto might be
	located.  Aside from linking, it actually tries to run the
	executable before concluding that the linking "worked".

2001-05-16  Csaba Raduly  <csaba.raduly@sophos.com>

	* windows/Makefile.watcom: Make linker accept space-separated list
	of object files.

2001-05-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Use real URL data for cookies, not the proxy
	stuff.

2001-05-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/gen_sslfunc.c: Don't include <sys/time.h> directly.

2001-05-14  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/Makefile.src: Update for SSL.

2001-05-14  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/Makefile.src:
	* windows/Makefile.src.bor:
	* windows/Makefile.watcom:
	* windows/config.h.bor:
	* windows/config.h.ms:
	* windows/wget.dep:
	Windows update.

2001-05-14  Csaba Raduly  <csaba.raduly@sophos.com>

	* windows/Makefile.watcom: Updated.

2001-05-14  Csaba Raduly  <csaba.raduly@sophos.com>

	* windows/Makefile.watcom: Rewritten.

2001-05-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c: Get rid of `protostrings'.
	(skip_proto): Don't use protostrings.
	(has_proto): Ditto.

2001-05-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/res.c: New file.  Implement all RES-related code here.

2001-05-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (print_help): Document `--no-http-keep-alive'.

	* src/utils.c (numdigit): Handle negative numbers *correctly*.

	* src/hash.c (make_nocase_string_hash_table): Use term "nocase" rather
	than the confusing "unsigned".

	* src/utils.c (string_set_contains): Renamed from string_set_exists.

	* src/hash.c (hash_table_contains): Renamed from hash_table_exists.

	* src/cookies.c: Move case-insensitive hash tables to hash.c.

2001-05-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Before concluding that the file is already
	fully retrieved, make sure that the file existed and `Range' was
	actually requested.

2001-05-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (eliminate_dups): New function.
	(build_cookies_request): Use it.
	(build_cookies_request): Set chain_store_size after reallocating
	all_chains.
	(check_domain_match): Annotated for easier future debugging.
	(store_cookie): In the debug message, print whether the cookie is
	permanent.

2001-05-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_loop): Reset no_truncate before deciding whether to
	set it.
	(gethttp): Further clarify "-c conflicts with existing file" error
	message, based on input from Herold Heiko.

2001-05-07  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_loop): If restval is set, set no_truncate to 1
	unconditionally.

2001-05-02  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftp-ls.c (ftp_parse_winnt_ls): Assure months are being correctly
	converted. Pointed out by <Stefan.Weil@de.heidelberg.com>.
	(ftp_parse_vms_ls): Ditto.

2001-04-30  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c (cmd_address): Zero SIN before using it; apparently
	needed on *BSD.

2001-04-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (main): Make `--cookies' respect its argument.

2001-04-29  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_loop_internal): Don't set NO_TRUNCATE if the file is
	empty.

2001-04-28  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (main): Removed undocumented option `--email-address'.

	* src/netrc.c: Use the latest read_whole_line.

	* src/init.c (defaults): Set opt.ftp_pass to "-wget@".

	* src/mswindows.c (pwd_cuserid): Ditto.

	* src/utils.c (pwd_cuserid): Removed.

	* src/host.c (ftp_getaddress): Removed.

2001-04-28  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Return RETRUNNEEDED when the retrieval is
	unneeded because the file is already there and fully downloaded,
	and -c is specified.
	(http_loop): Handle RETRUNNEEDED.

	* src/wget.h (uerr_t): New value RETRUNNEEDED.

	* src/http.c (http_loop): Set no_truncate for files that both exist
	and are non-empty.
	(gethttp): Consider the download finished when restval >= contlen,
	not only when restval==contlen.
	(gethttp): Handle redirection before giving up due to -c.
	(gethttp): Clarify error message which explains that -c will not
	truncate the file.
	(gethttp): When returning CONTNOTSUPPORTED, don't forget to free
	the stuff that needs freeing and release the socket.

2001-04-28  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Wgetrc Commands): Update docs for `continue'.

2001-04-28  Hrvoje Niksic  <hniksic@arsdigita.com>

	(http_loop): Allocate space for filename_plus_orig_suffix with
	alloca; this is more efficient and removes the need to free it
	before each and every return.

2001-04-28  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/wget.dep: Update.

	* windows/Makefile.src: Update.

	* windows/config.h.ms: Define inline to __inline.
	Define ftruncate to chsize.

2001-04-28  Csaba Raduly  <csaba.raduly@sophos.com>

	* windows/Makefile.watcom: Update.

2001-04-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/safe-ctype.h: Instead of throwing #error when isalpha is
	defined, redefine it to something that will throw a compile-time
	error if actually *used*.  Do the same for the rest of the
	standard C macros.

2001-04-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (print_help): Wget booleans accept "off", not "no".

2001-04-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (mktime_from_utc): Improve documentation.
	(http_atotm): Put format strings into a separate array.

2001-04-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_loop): If allow_cache is zero, always disable
	caching, not only when retrieving through proxy.

	* src/init.c: Ditto.

	* src/options.h (struct options): Rename proxy_cache to allow_cache.

2001-04-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/ja.po: New update by Hiroshi Takekawa.

2001-04-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/hr.po: Updated.

2001-04-27  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (HTTP Options): Document cookie options.

2001-04-26  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (getproxy): Ignore empty proxy vars.

2001-04-25  Roger L. Beeman  <beeman@cisco.com>

	* src/http.c (http_atotm): Initialize t.tm_isdst to 0.
	(mktime_from_utc): Prevent mktime() from having discontinuities at
	DST transition points.

2001-04-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c: Document timer functions.

	* src/retr.c (rate): Use it.
	(rate): Print in GB/s if transfer rate exceeds 1 GB/s.

	* src/utils.c (wtimer_granularity): New function.

2001-04-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c: Define each DIGITS_* in one line.

2001-04-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (UNSAFE_CHAR): Reimplement using a static table.
	(url_init): Removed.
	(init_unsafe_char_table): Removed.

2001-04-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/snprintf.c (dopr): Replace ISDIGIT with '0' <= ch && ch <= '9'.

2001-04-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_loop): Would load cookies every time.

	* src/cookies.c (load_cookies): Handle cookies whose values contain
	embedded spaces.

2001-04-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-url.c (get_urls_html): Fix documentation.

2001-04-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/POTFILES.in: Add src/cookies.c.

2001-04-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (numdigit): Handle negative numbers.

2001-04-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (long_to_string): New, faster version.  Favors smaller
	numbers; much of the calculation is now done at compile-time.

2001-04-24  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (show_progress): Ditto.

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): Use new timer functions.

	* src/utils.c (wtimer_allocate): New function.
	(wtimer_new): Ditto.
	(wtimer_delete): Ditto.
	(wtimer_reset): Ditto.
	(wtimer_elapsed): Ditto.

2001-04-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (show_progress): Print the download rate even when the
	percentages are not available.

2001-04-21  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (getftp): Adjust expected_bytes if the length is
	authoritative.

2001-04-15  Ian Abbott  <abbotti@mev.co.uk>

	windows/wget.dep: The target `connect$o' (connect.obj) now depends on
	`utils.h'.

2001-04-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/da.po: Ditto.

	* po/de.po: Ditto.

	* po/el.po: Ditto.

	* po/es.po: Ditto.

	* po/et.po: Ditto.

	* po/fr.po: Ditto.

	* po/gl.po: Ditto.

	* po/he.po: Ditto.

	* po/ja.po: Ditto.

	* po/pl.po: Ditto.

	* po/sk.po: Ditto.

	* po/sl.po: Ditto.

	* po/sv.po: Ditto.

	* po/tr.po: Ditto.

	* po/zh_TW.po: Update from TP.

	* po/ca.po: Ditto.

	* po/bg.po: New file from TP.

2001-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c: Don't declare `construct'.

	* src/hash.c (grow_hash_table): Speed up rehashing; inline storing of
	mappings to new locations.
	(hash_table_new): Make resize_threshold a field in the hash table,
	so we don't have to recalculate it in each hash_table_put.
	(grow_hash_table): Update resize_threshold.
	(MAX): Remove unused macro.
	(prime_size): Made static.

2001-04-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): Call uri_merge, not url_concat.

	* src/html-url.c (collect_tags_mapper): Call uri_merge, not
	url_concat.

	* src/url.c (mkstruct): Use encode_string instead of xstrdup followed
	by URL_CLEANSE.
	(path_simplify_with_kludge): Deleted.
	(contains_unsafe): Deleted.
	(construct): Renamed to uri_merge_1.
	(url_concat): Renamed to uri_merge.

2001-04-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/wget.h (XDIGIT_TO_xchar): Define here.

	* src/url.c (decode_string): Use new name.
	(encode_string): Ditto.

	* src/http.c (XDIGIT_TO_xchar): Rename HEXD2asc to XDIGIT_TO_xchar.
	(dump_hash): Use new name.

	* src/wget.h: Rename ASC2HEXD and HEXD2ASC to XCHAR_TO_XDIGIT and
	XDIGIT_TO_XCHAR respectively.

2001-04-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (str_url): Use encode_string instead of the unnecessary
	CLEANDUP.
	(encode_string_maybe): New function, returns input string if no
	encoding is needed.
	(encode_string): Call encode_string_maybe to do the dirty work,
	xstrdup if no work needed.

2001-04-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c: Include cookies.h.

	* src/cookies.h: Declare cookies_cleanup.

	* src/cookies.c (check_domain_match): Remove unused variable.
	(save_cookies): Remove extraneous argument from debug statement.

	* src/host.c (same_host): Don't call skip_url.

	* src/url.c (skip_url): Removed.  Removed its calls from various
	functions in url.c.

2001-04-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (unsigned_string_hash): Use the new code in
	string_hash as reference.

	* src/hash.c (hash_table_map): Allow deletion and change of the
	element processed by MAPFUN.
	(string_hash): Use the function from glib.

2001-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/hash.h: Declare hash_table_get_pair and hash_table_count.

2001-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp-ls.c (ftp_parse_vms_ls): Make seconds optional in time
	specification.

2001-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp-ls.c (ftp_parse_unix_ls): Use octal constants for
	permissions.  A compiler that doesn't accept octal constants is
	seriously broken and shouldn't be used -- octal constants were
	present in K&R C!

2001-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c: Declare http_atotm.

2001-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/config.h.in: Include #undef stub.

	* src/hash.c (hash_table_remove): Rewrite to actually clear deleted
	entries instead of just marking them as deleted.

2001-04-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for inline.

2001-04-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (parseurl): Don't strip trailing slash when u->dir is "/"
	because that strips the *leading* slash, thus forcing relative
	FTP retrieval.

2001-04-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/zh_TW.po: Reinstated, after an update by Abel Cheung.

	* po/zh_TW.Big5.po: Removed.

2001-04-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/zh_TW.Big5.po: New file, submitted by Abel Cheung.

	* po/zh.po: Removed outdated file.

2001-04-10  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftp.c (getftp): Convert initial FTP directory from VMS to UNIX
	notation for VMS servers.
	(ftp_retrieve_dirs): Do not prepend '/' to f->name when
	odir is an empty string.

2001-04-10  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftp-ls.c (ftp_parse_winnt_ls): Made the fix for AM/PM more
	effective. Suggested by Edward J. Sabol.

2001-04-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/cookies.c (build_cookies_request): Use and sort cookies from all
	matching domains.
	(build_cookies_request): Check for duplicates before generating
	the `Cookies' header.

	* src/main.c (main): Don't load cookies here.
	(main): Make loadcookies and savecookies call the correct command.

	* src/http.c (http_loop): Load cookies on-demand.

2001-04-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c (cmd_file): New function.
	(enable_tilde_expansion): New variable.
	(run_wgetrc): Use it.
	(cmd_file): Use it.

2001-04-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Fix indentation of SSL ifdef.

2001-04-09  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_retrieve_dirs): Don't forcibly prepend "/" to u->dir;
	that hack is no longer necessary.
	(getftp): Prepend initial directory to *non*-absolute u->dir's.

2001-04-08  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftp-ls.c (ftp_parse_winnt_ls): The AM/PM change did assume
	12:01PM == 00:01, which was obviously wrong. Taken care of this
	anomaly.

	* src/ChangeLog: Removed an excess conflict marker. Reformatted the
	entry by Philipp Thomas from 2001-03-09.

	* src/ftp-ls.c (ftp_parse_winnt_ls): Ensure that adjusted PM hours lay
	between 0 and 23. Elminate unused variable `sec'.

2001-04-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (datetime_str): New function.

2001-04-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c: Include cookie-related options.

	* src/main.c (main): Include cookie-specific options.
	(main): Load cookies before download is finished.
	(main): Save cookies when done.

	* src/http.c (gethttp): Process the `Set-Cookie' header.
	(gethttp): Include cookies in the response.

	* src/cookies.c: New file.

2001-04-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/hash.c (hash_table_count): New function.

2001-04-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (read_file): Cast MAP_FAILED to char *.  Enforced by
	Digital Unix cc.

2001-04-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/sysdep.h: Don't define VERY_LONG_FORMAT.

	* src/utils.c (very_long_to_string): New function.
	(legible_very_long): Use it; don't use VERY_LONG_FORMAT.

2001-04-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Prepend literal newline with `\n\'.

2001-04-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/hash.c: Include <string.h>.

2001-04-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/config.h.in: Oops, do the namespace tweaks only on systems we
	know about.

2001-04-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/config.h.in: Define "compilation environment" options that work
	under Linux and Solaris.  To be reviewed on other OS'es.

2001-04-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* aclocal.m4 (AM_PROG_CC_STDC): Don't use -Xc under SYSV.  It
	forces strict ANSI mode, which means we lose `long long'.
	Generally, don't require __STDC__ to be defined to 1 because that
	signifies strict ANSI.

2001-04-04  Hrvoje Niksic  <hniksic@arsdigita.com>

	* NEWS: Cosmetic changes.

2001-04-04  Christian Fraenkel  <christian.fraenkel@gmx.net>

	* src/url.c (parse_uname): Would run past the end of the string if the
	username was present, but the URL did not contain a slash, e.g.
	http://foo:bar@myhost.

2001-04-03  Trond Eivind Glomsrod  <teg@redhat.com>

	* po/da.po: Ditto.

	* po/no.po: The charset is iso-8859-1, not iso-8859-2.

2001-04-03  Paul Bludov  <paul@ozero.net>

	* src/mswindows.c (sleep): Use SleepEx() instead of Sleep().
	(ws_changetitle): Use alloca() instead of malloc() to avoid memory
	leak.
	(ws_mypath): Use GetModuleFileName instead of argv[0].
	(ws_startup): Use data.wVersion for comparison.

2001-04-03  KOJIMA Hajime  <kjm@rins.ryukoku.ac.jp>

	* src/http.c (http_atotm): Use %A instead of %a to match full
	weekday.  (On most systems there is no difference.)

2001-04-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): New variable global_download_count used
	to identify first retrieval.

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): Rewind opt.dfp only on first retrieval.

2001-04-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/netrc.c (parse_netrc): Don't trim the line endings explicitly;
	they will be handled as whitespace.
	(parse_netrc): Correctly handle lines that end with whitespace.

2001-04-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c (cmd_address): Heap-allocate the address that gets stored
	to CLOSURE.  Old code would simply assign an address on the stack.

2001-04-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_loop): Ditto.

	* src/ftp.c (ftp_loop_internal): Made the check whether to continue
	retrieval `-O'-friendly.

2001-04-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/et.po: New version by Toomas Soome.

2001-04-01  Nicolas Lichtmaier <nick@debian.org>

	* src/main.c (main): Add -C to the string that is the third arg to
	getopt_long().

2001-04-01  Nicolas Lichtmaier <nick@debian.org>

	* src/ftp.c (ftp_get_listing): Propagate error status.
	(ftp_retrieve_glob): Use it.
	(ftp_loop): Ditto.

2001-04-01  Nicolas Lichtmaier  <nick@debian.org>

	* po/es.po: New file.

2001-04-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (getftp): Don't start the download from scratch if `-c'
	was specified, but the file is already fully downloaded.

	* src/http.c (gethttp): Don't truncate a pre-existing file if `-c' was
	specified and the server doesn't support continued download.
	(gethttp): Don't start the download from scratch if `-c' was
	specified, but the file is already fully downloaded.

2001-04-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Recursive Retrieval Options): Document more
	accurately what --convert-links does.

2001-03-31  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): Call register_download() for downloaded
	files and register_html() for downloaded HTML files.

	* src/recur.c (register_download): New function; register here that a
	file has been downloaded, rather than in recursive_retrieve().
	(register_html): New function; enqueue the location of HTML files
	here rather than in recursive_retrieve().

2001-03-31  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (recursive_retrieve): Clear the hash tables only when
	they are defined.

2001-03-31  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (print_help): Use multiple fputs instead of a single ugly
	printf().
	(main): Consistently assign numbers >128 to options without a
	corresponding character.

2001-03-31  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Make sure the socket is closed with
	CLOSE_INVALIDATE before we have drained the body.

2001-03-31  Hrvoje Niksic  <hniksic@arsdigita.com>

	(recursive_retrieve): Don't clear the hash tables at this point at
	all; it interferes with the normal operation of register_download.

2001-03-27  Dan Harkless  <wget@harkless.org>

	* src/Makefile.in: Moved top_builddir out of "User configuration
	section" of top Makefile and analogous spot in this one.

2001-03-27  Dan Harkless  <wget@harkless.org>

	* doc/Makefile.in: Moved top_builddir out of "User configuration
	section" of top Makefile and analogous spot in this one.

2001-03-27  Dan Harkless  <wget@harkless.org>

	* INSTALL: Updated to reflect --with-ssl's new optional parameter.

	* configure.in: Christian Fraenkel's tests for -lcrypto and -lssl
	were in the wrong order, causing a link failure if you're using
	libcrypto.a and libssl.a rather than shared libraries.  Also put
	in checks for -ldl, necessary since the libcrypto shared library
	doesn't record its dependency on libdl.

	* {.,util,windows}/Makefile.in: Moved top_builddir out of "User
	configuration section" of top Makefile and analogous spot in others.

	* po/Makefile.in.in: Previous addition of top_builddir to
	po/Makefile.in was bogus -- it's generated from po/Makefile.in.in.

2001-03-26  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Recursive Retrieval Options): Explained that you need
	to use -r -l1 -p to get the two levels of requisites for a
	<FRAMESET> page.  Also made a few other wording improvements.

2001-03-26  Dan Harkless  <wget@harkless.org>

	* TODO: -p should probably go "_two_ more hops" on <FRAMESET> pages.

2001-03-22  Dan Harkless  <wget@harkless.org>

	* MACHINES: Added rs6000-ibm-aix4.3.3.0.

2001-03-21  Dan Harkless  <wget@harkless.org>

	* MACHINES: Added armv4l-unknown-linux-gnu.

2001-03-20  Dan Harkless  <wget@harkless.org>

	* TODO: Oops.  Hostless absolute link conversion _is_ working.  My
	test that led me to believe it wasn't was exposing a different bug
	-- URLs specified on the commandline as opposed to being recursed
	to don't always get re-converted at the end of the Wget run.

2001-03-17  Dan Harkless  <wget@harkless.org>

	* src/Makefile.in: Include @SSL_INCLUDES@ substition in INCLUDES.
	Define top_builddir.  Link wget with libtool so the user doesn't
	have to supply a bunch of custom environment variables to
	correctly link with the OpenSSL shared libraries.

2001-03-17  Dan Harkless  <wget@harkless.org>

	* doc/Makefile.in: Using '^' in the sed call caused a weird failure on
	Solaris 2.6.  Changed it to a ','.  Defined top_builddir.

2001-03-17  Dan Harkless  <wget@harkless.org>

	* aclocal.m4: Appended libtool 1.3.5's libtool.m4 to it.

	* configure.in: Use AM_PROG_LIBTOOL macro (now defined in our
	aclocal.m4) to create a libtool script from ltconfig and ltmain.sh.
	If --with-ssl specified, look in /usr/local/ssl/lib by default for
	OpenSSL libs.  Allow override with --with-ssl=<OpenSSL_root_dir>.
	Set up -I<OpenSSL_root_dir>/include and -R<OpenSSL_root_dir>/lib
	(possibly rewritten by libtool) as well.  Don't appear to be
	looking for a function main() in -lcrypto.  If the OpenSSL lib
	checks fail, don't just silently build a wget without https
	support -- issue a warning.  Define top_builddir.

	* ltconfig: New file from libtool 1.3.5 distribution.

	* ltmain.sh: New file from libtool 1.3.5 distribution.

	* {.,po,util,windows}/Makefile.in: Define top_builddir.

2001-03-16  Dan Harkless  <wget@harkless.org>

	* TODO: For some reason on 2000-11-19, Hrvoje removed the item
	about converting hostless absolute links.  That isn't working yet,
	so I've put the item back, with a modified wording.

	* config.guess: Hadn't been updated since 1996 -- didn't work for recent
	machines and OSes, such as NetWinder ARM Linux.  Updated to latest
	version (2001-03-16) from <ftp://ftp.gnu.org/pub/gnu/config/>.

	* config.sub: Ditto -- updated to latest version (2001-03-12).

2001-03-12  Dan Harkless  <wget@harkless.org>

	* TODO: Only normal recursion should respect -np -- page-requisite
	recursion should not.

2001-03-09  Philipp Thomas  <pthomas@suse.de>

	* src/safe-ctype.h: New file. Locale independent ctype.h replacement
	taken from libiberty.

	* src/safe-ctype.c: New file. Tables for above.

	* src/Makefile.in: Add safe-ctype$o to OBJS.  Add dependencies for
	safe-ctype$o.

	* src/cmpt.c: Remove include of ctype.h. Use ISSPACE instead of
	isspace.

	* src/ftp-basic.c: Don't include ctype.h.

	* src/ftp-ls.c: Likewise.

	* src/ftp.c: Likewise.

	* src/headers.c: Likewise.

	* src/host.c: Likewise.

	* src/html-parse.c: Likewise.

	* src/html-url.c: Likewise.

	* src/http.c: Likewise.

	* src/init.c: Likewise.

	* src/main.c: Likewise. Set LC_CTYPE along with LC_MESSAGES.

	* src/netrc.c: Likewise.

	* src/recur.c: Likewise.

	* src/retr.c: Likewise.

	* src/snprintf.c: Replace ctype.h with safe-ctype.h. Use ISDIGIT
	instead of isdigit.

	* src/sysdep.h: Remove defines of ctype macros as they aren't needed
	for safe-ctype-h.

	* src/url.c: Don't include ctype.h.

	* src/utils.c: Likewise.

	* src/wget.h: Include safe-ctype.h.

2001-03-07  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* TODO: Removed an obsolete item about adding VMS and MS FTP
	server support.

2001-03-06  Hack Kampbjorn  <hack@hackdata.com>

	* src/http.c (gethttp): skip :port in host header if it is the
	DEFAULT_HTTPS_PORT when using SSL.

	* src/url.c: move the #define of DEFAULT_HTTP_PORT, DEFAULT_FTP_PORT
	and DEFAULT_HTTPS_PORT to the header file so it can be use in the
	rest of the code.
	* src/url.h: Ditto

2001-03-05  Dan Harkless  <wget@harkless.org>

	* TODO: Add a --range option to download only a given byte range.

2001-03-01  Jonas Jensen  <bones@huleboer.dk>

	* src/retr.c (show_progress): Correctly calculate the number of bytes
	in the first line of the download that have been actually
	downloaded in this run.

2001-03-01  Dan Harkless  <wget@harkless.org>

	* ChangeLog.README: Renamed from README.branches and added a note
	that Wget has multiple ChangeLog files (currently ./ChangeLog,
	doc/ChangeLog, and src/ChangeLog), since this is unusual and
	people have complained their patches hadn't been applied after
	checking only the top-level ChangeLog.

2001-02-28  Dan Harkless  <wget@harkless.org>

	* MACHINES: Explicitly tell people to send us config.guess output.

2001-02-27  Dan Harkless  <wget@harkless.org>

	* TODO: Re-use FTP connection if multiple URLs on one host
	specified.  Make "ftp://<host>/%2F<file>" cause an initial "CWD /".

2001-02-23  Dan Harkless  <wget@harkless.org>

	* src/main.c (print_help): --help documentation for -N said it would
	re-download files if they had the _same_ timestamp on server.
	(print_help): -nr belongs in "FTP options" section of --help
	output, not "Recursive retrieval" section.  Alphabetized FTP
	options by long option name.

2001-02-23  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi: Corrections, clarifications, and English fixes to
	time-stamping documentation.  Also moved -nr from "Recursive
	Retrieval Options" to "FTP Options" and gave it a @cindex entry.
	Alphabetized FTP options by long option name.  Mentioned that
	.listing symlinked to /etc/passwd is not a security hole, but that
	other files could be, so root shouldn't run wget in user dirs.

2001-02-23  Dan Harkless  <wget@harkless.org>

	* NEWS: Note that Wget now has a man page again.

	* po/*.po*: Updated after changing --help's description of -N and
	moving -nr to a different category.

	* TODO: "Timestamps are sometimes not copied over on files
	retrieved by FTP." removed.  Hopefully all the failures I was
	seeing were due to the fact that it wasn't documented that
	non-globbing, non-recursive FTP downloads need -N to get the
	remote timestamp to be preserved.

2001-02-22  Dan Harkless  <wget@harkless.org>

	* doc/Makefile.in: Make wget man page and install it if we have
	pod2man.  Added some missing '$(srcdir)/'s.  Added missing
	dependencies on install targets (allowing you to just do `make
	install' rather than forcing you to do `make && make install').
	Also, Makefile rules should always use output file parameters if
	available rather than redirecting stdout with '>', or you falsely
	satisfy dependencies if the tool you're running is missing or
	fails -- fixed call of texi2pod.pl that did this wrong.

	* doc/texi2pod.pl: Removed from CVS.  Now automatically generated.

	* doc/texi2pod.pl.in: This new file is processed into texi2pod.pl,
	getting the appropriate path to the Perl 5+ executable on this
	system and becoming executable (CVS files, by contrast, don't
	arrive executable).

2001-02-22  Dan Harkless  <wget@harkless.org>

	* TODO: Remove empty directories created due to --accept/--reject.

	* configure.in: Look for perl and pod2man and make substitutions.

	* Makefile.in (install): Do install.man if we have pod2man.

2001-02-19  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Download Options): Further improvement to --continue
	documentation -- explain interaction with -r and -N, mention
	usefulness for downloading new sections of appended-to files, etc.

2001-02-16  Dan Harkless  <wget@harkless.org>

	* src/init.c (commands): Hack Kampbjørn <hack@hackdata.com> discovered
	that "httpsproxy" had been inserted into commands[] out of
	alphabetical order, causing "BUG: unknown command `httpuser'".

2001-02-13  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* windows/Makefile.src: Removed references to ftpparse sources.

	* windows/wget.dep: Ditto.

	* windows/Makefile.watcom: Ditto.

2001-02-13  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftp-ls.c (ftp_parse_ls): Added support of ST_MACOS (Unix-like
	listing without correct permissons).

	* src/ftp.h (stype): Added ST_MACOS to identify the NetPresenz MacOS
	FTP server.

	* src/ftp.c (ftp_retrieve_list): New mirroring logic: A remote file
	shall be donwloaded only when it's newer than the local copy or
	when it has the same timeestamp but its size is different. ST_VMS
	and ST_MACOS as special cases that lie about file size.

	* src/ftp-ls.c (ftp_parse_ls): Support for ST_MACOS.

	* src/Makefile.in: Removed dependency on ftpparse library due to unclear
	copyright issues and absence of any feedback to our queries.

	* src/ftp-ls.c: Removed dependency on ftpparse library due to unclear
	copyright issues and absence of any feedback to our queries.
	(ftp_parse_ls): Added a warning message when remote server system
	does not seem to be suported by wget.
	(ftp_parse_vms_ls): New function for parsing VMS ftp
	server listing output.
	(clean_line): New function responsible for removing
	end-of-line characters from FTP listing texts.

	* src/ftp.c (getftp): Global variables pwd and host_type are now
	member of the ccon structure under names ccon.id and ccon.rs.

	* src/ftp.h (struct ccon): Added formed global variables from ftp.c,
	enum stype rs (remote system identification) and char *id (initial
	working directory), as suggested by Hrvoje.

	* src/url.c (parse_uname): Added support for passwords containing '@'
	characters.
	(skip_uname): Ditto.

2001-02-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_loop_internal): Disable padding.
	(getftp): Ditto.

	* src/http.c (http_loop): Disable padding.

	* src/retr.c (show_progress): Use it to enable padding.

	* src/retr.c (rate): Optional parameter PAD for padding the rate.

2001-02-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_loop): Reset con.

2001-02-11  Hack Kampbjørn  <hack@hackdata.com>

	* src/url.c (parseurl): Debug-print u->ftp_type.

2001-02-10  Tim Mooney  <mooney@dogbert.cc.ndsu.NoDak.edu>

	* src/ftp.h: Rename enums `command' to `wget_ftp_command' and
	`fstatus' to `wget_ftp_status' because old names clash with Tru64
	net/if.h.

2001-02-10  Jonas Jensen  <bones@huleboer.dk>

	* src/retr.c (show_progress): Print the download rate along with the
	percentages.
	Along with Anders Thorsby <anders@thorsby.dk>.

2001-02-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (show_progress): Make sure that the last output line
	includes progress.

2001-02-08  Christian Fraenkel <christian.fraenkel@gmx.net>

	* src/gen_sslfunc.c: verify_callback is now static

	* src/gen_sslfunc.c (init_ssl): load certificate if specified

	* src/gen_sslfunc.c (ssl_printerr): new function

	* src/init.c: added new --sslcertfile and --sslcertkey switches

	* src/main.c: ditto

	* src/options.h: ditto

	* src/http.c (gethttp): abort when init_ssl fails

2001-01-23  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/Makefile.src: Don't attempt to compile in alloca.c; it
	doesn't work and it's not needed.

2001-01-23  Herold Heiko  <Heiko.Herold@previnet.it>

	* src/mswindows.h: Include <malloc.h>; it's needed for alloca().

2001-01-23  Herold Heiko  <Heiko.Herold@previnet.it>

	* src/config.h.ms, mswindows.h: defined HAVE_ISATTY, use _isatty for
	MS VC; somebody with Borland compiler please check and provide
	patch if possible;

	* src/cmpt.c: provided a usleep emulation.

2001-01-20  Karl Eichwalder  <ke@suse.de>

	* src/Makefile.in: Provide and use DESTDIR according to the Coding
	Standards.

2001-01-20  Karl Eichwalder  <ke@suse.de>

	* doc/Makefile.in: Provide and use DESTDIR according to the Coding
	Standards.

2001-01-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* NEWS: Added more NEWS items.

2001-01-15  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* util/wget.spec: Updated to 1.7, merged with the spec file from
	RedHat.

	* po/Makefile.in.in: `make realclean' equal to `make
	maintainer-clean'.

	* Makefile.in (realclean-top): Remove 'configure' as well.

2001-01-15  Dan Harkless  <wget@harkless.org>

	* NEWS: Was not being maintained.  Added some significant 1.7-dev stuff.

2001-01-11  Dan Harkless  <wget@harkless.org>

	* TODO: If -c used with -N, check to make sure a file hasn't
	changed on the server before "continuing" to download it.

2001-01-11  Adrian Aichner  <Adrian.Aichner@t-online.de>

	* windows/Makefile.src: Updated.

	* windows/wget.dep: Ditto.

2001-01-10  Dan Harkless  <wget@harkless.org>

	* src/url.c (str_url): Clarified this function's comment header after
	Hrvoje answered my question on the list as to when hide != 1.
	Also Hrvoje pointed out I need to use xstrdup() on the string literal.

2001-01-09  Dan Harkless  <wget@harkless.org>

	* src/html-url.c: A bunch of fixup of `--page-requisites'-related
	comments to reflect Hrvoje's changes to my code when transplanting
	it into this new file, to fix spelling mistakes, to clarify, etc.

	* src/url.c (write_backup_file): Clarified a comment.
	(str_url): Henrik van Ginhoven pointed out on the list that we
	shouldn't give away the number of characters in the password by
	replacing each character with a 'x'.  Use "<password>" instead.

	* src/ftp.c (ftp_retrieve_dirs): The bug where recursion into FTP
	directories didn't work if logging in put you in a directory other
	than "/" is fixed now.  Removed the comment here warning of the bug.

	* src/main.c (print_help): --continue's description was misleading.
	We don't "restart", we "resume".  Also, better to say
	"partially-downloaded file" rather than just "existing file".

2001-01-09  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Download Options): Did a bunch of clarification and
	correction to the description of --continue.

2001-01-09  Dan Harkless  <wget@harkless.org>

	* TODO: If -c is on, don't re-download a 100%-downloaded file.

	* TODO: The bug where you couldn't recurse into ftp directories if
	logging in put you somewhere else besides the server's "/"
	directory got fixed without the TODO entry for it being removed.

	* TODO: Add a "rollback" option to have --continue throw away X
	corrupted (e.g. by proxy) bytes from end of file before resuming.

	* po/*.po*: Updated after changing --help's description of -c.

2001-01-06  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/url.c (parse_uname): Added support for passwords containing '@'
	characters.
	(skip_uname): Ditto.

2001-01-06  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* doc/wget.texi (Reporting Bugs): Deleted the setence about Cc-ing the
	bug report to Wget mailing list as the bug report address is an
	alias for the mailing ist anyway.
	(Mailing List): Added URL for the alternate archive.

	* doc/wget.texi: Bunch of cosmetical changes.

	* doc/Makefile.in: Added targets for manpage generation using
	texi2pod.pl and pod2man (comes with Perl5). As we cannot rely on
	Perl5 being available on the system, manpage is not being built
	automatically. Updated '*clean' targets to remove
	'sample.wgetrc.munged...', 'wget.pod', and 'wget.man'.

	* doc/texi2pod.pl: New file copied from GCC distribution to facilitate
	automatic manpage generation.

2001-01-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/connect.c (bindport): Declare addrlen as int.  Diagnosed by
	Drazen Kacar <dave@arsdigita.com>.
	(conaddr): Ditto.

2001-01-06  Dan Harkless  <wget@harkless.org>

	* src/ChangeLog: The '[Not in 1.6 branch.]'s were decided not to be
	the best way to go about my aim.  Removed them in favor of:

	* src/ChangeLog-branches/1.6_branch.ChangeLog: New file.

2001-01-06  Dan Harkless  <wget@harkless.org>

	* doc/ChangeLog: The '[Not in 1.6 branch.]'s were decided not to be
	the best way to go about my aim.  Removed them in favor of:

	* doc/ChangeLog-branches/1.6_branch.ChangeLog: New file.

2001-01-06  Dan Harkless  <wget@harkless.org>

	* ChangeLog: The '[Not in 1.6 branch.]'s were decided not to be
	the best way to go about my aim.  Removed them in favor of:

	* ChangeLog-branches/1.6_branch.ChangeLog: New file.

	* README.branches: Explains the 1.6_branch.ChangeLog files.

	* README.cvs: Falsely claimed you only needed GNU autoconf to
	build from the CVS sources.  You also need GNU gettext and
	texinfo.  I also did a bunch of general re-writing of this file.

2001-01-04  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (replace_attr): New function, to be used by both
	TO_COMPLETE and TO_RELATIVE case in convert_links.
	(find_fragment): New function for finding URL fragments.
	(replace_attr): Better handle the case where the original string
	is not quoted.  Use find_fragment.
	(convert_links): Use replace_attr().

2001-01-03  Dan Harkless  <wget@harkless.org>

	* TODO: We should make a simple man page referring to info doco.

2000-12-31  Dan Harkless  <wget@harkless.org>

	* src/ChangeLog: Since this flat file doesn't have multiple branches,
	looking at the dates would make you think that things went into
	1.6 that actually just went into the 1.7-dev branch.  Added "[Not
	in 1.6 branch.]" where appropriate to clarify.

2000-12-31  Dan Harkless  <wget@harkless.org>

	* doc/Makefile.in (distclean): sample.wgetrc.munged_for_texi_inclusion
	needs to be included in the distribution or it'll get regenerated
	due to the wget.info dependency, and then that file will get
	regenerated, forcing people to have makeinfo installed
	unnecessarily.	We could use a kludge of a 0-length file in the
	distro, but the file isn't that big and should compress very well.

	* doc/wget.texi: Changed "VERSION 1.5.3+dev" to "VERSION 1.7-dev" and
	"UPDATED Feb 2000" to "UPDATED Dec 2000".  Like the comment in the
	file says, it'd be nice if these were handled automatically...

	* doc/ChangeLog: Since this flat file doesn't have multiple branches,
	looking at the dates would make you think that things went into
	1.6 that actually just went into the 1.7-dev branch.  Added "[Not
	in 1.6 branch.]" where appropriate to clarify.

2000-12-31  Dan Harkless  <wget@harkless.org>

	* README: Changed 1.5.3 in the FTP URL to 1.6.

	* NEWS: Released Wget version 1.6.

	* po/*.po: 'Project-Id-Version's were very haphazard, saying
	either "wget" or "GNU wget", and with versions of 1.5.2-b[124],
	1.5.3, the nonexistent 1.5.4, and 1.6-pre.  Standardized all to
	"GNU Wget 1.7-dev".  Perhaps this is wrong to do because some of
	the translations haven't been updated since the versions they
	state, but I know some of the files were updated specifically for
	1.6, and none of them used this version (unless you count the sole
	"1.6-pre" guy).  In any case, the 'POT-Creation-Date's and
	'PO-Revision-Date's remain the best indicator of whether a
	translation's out of date.

	* ChangeLog: Since this flat file doesn't have multiple branches,
	looking at the dates would make you think that things went into
	1.6 that actually just went into the 1.7-dev branch.  Added "[Not
	in 1.6 branch.]" where appropriate to clarify.

2000-12-30  Dan Harkless  <wget@harkless.org>

	* src/ftp.c, http.c:  Applied Hack Kampbjørn <hack@hackdata.com>'s
	patch to deal with h_errno not being defined in netdb.h under Cygwin.

2000-12-18  Csaba Raduly  <csaba.raduly@sophos.com>

	* windows/Makefile.watcom: Updated.

2000-12-18  Csaba Raduly  <csaba.raduly@sophos.com>

	* src/sysdep.h: Include <malloc.h> and <io.h> under Watcom.

2000-12-17  Igor Khristophorov  <igor@atdot.org>

	* src/http.c (check_end): Fix test for '+' or '-'.

2000-12-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (parseurl): Rename inner loop var from i to ind to avoid
	clash with the function top-level-declared variable i.
	(str_url): Likewise, rename inner-loop i to j.

	* src/recur.c (parse_robots): Don't declare LEN at top of function.
	(robots_match): Renamed parameter FORBIDDEN to avoid hiding of
	global variable.

	* src/main.c (main): Change erroneous use of bitwise and to logical.

	* src/init.c (cmd_address): Don't heap-allocate `sin'; it can be on
	the stack because it will be copied to closure.

	Thanks to Csaba Raduly's run of PC-LINT over the sources.

2000-12-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/mswindows.c: Include <errno.h>.

	* src/gen_sslfunc.c: Include <errno.h>.

	* src/ftp-basic.c: Don't attempt to declare errno or h_errno because
	they're not used.

	* src/main.c: Include <errno.h> because errno is used.

	* src/ftp.c: Ditto.

	* src/http.c: Include <netdb.h> for h_errno.

2000-12-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (basic_authentication_encode): Use xmalloc(), not
	malloc().  Thanks to Csaba Raduly's run of PC-LINT over the
	sources.

2000-12-17  Csaba Raduly  <csaba.raduly@sophos.com>

	* src/sysdep.h: Test for __EMX__ rather than for EMXOS2 for OS/2
	compilation.

2000-12-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-parse.c (advance_declaration): MSVC assert() chokes on
	'\"'.  Use '"' instead.

2000-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (xfree_real): Removed.
	(xfree_debug): Just call free().

	* src/wget.h (xfree): Make it an alias for free.

2000-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_loop): Furthermore, touch output_document only if
	it is known to be an existing regular file.

2000-12-11  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_retrieve_list): Ditto.

	* src/http.c (http_loop): Touch output_document if that is used for
	output.

2000-12-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* po/POTFILES.in: Updated.

2000-12-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/Makefile.in (install.info): Info files are *not* in $(srcdir),
	but in the current build dir.

2000-12-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Add windows/Makefile to the output block.

	* windows/Makefile.in: New file.

	* README.cvs: New file.

2000-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/rbuf.h: Implement only a single version of RBUF_READCHAR, using
	rbuf_read_bufferful when the buffer is depleted.

	* src/rbuf.c (rbuf_read_bufferful): New function.

2000-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c: Include gen_sslfunc.h after including Wget's headers.
	(persistent_available_p): Needed coma before `int ssl'.

2000-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/gen_sslfunc.h: Use ansi2knr style function declarations.

	* src/gen_sslfunc.c: Reformat according to the GNU coding standards.
	More should be done.

	* src/http.c (persistent_available_p): Place the cheap SSL test nearer
	the top of the function.
	(CLOSE_FINISH, CLOSE_INVALIDATE): Define only one version of each.

2000-12-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_loop_internal): Ditto.

	* src/http.c (http_loop): Use it.

	* src/retr.c (sleep_between_retrievals): New function that handles the
	logic of opt.wait and opt.waitretry.

2000-12-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (init_unsafe_char_table): Reinstate space as an unsafe
	char.

2000-12-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Don't unconditionally define HAVE_SSL, even when
	--with-ssl is given.

2000-12-03  Christian Fraenkel <christian.fraenkel@gmx.net>

	* src/Makefile.in: added gen_sslfunc object
	* src/config.h.in: added HAVE_SSL define
	* src/connect.c: changed select_fd from static int to int
	* src/connect.h: ditto
	* src/gen_sslfunc.h: New file
	* src/gen_sslfunc.c: ditto
	* src/http.c: added HTTPS fuctionality
	* src/retrc.c: ditto
	* src/url.c: ditto
	* src/init.c: added opt.httpsproxy
	* src/options.h: ditto
	* src/rbuf.h: added alternate rbuf struct
	* src/wget.h: added CONSSLERR
	* src/rbuf.c: ditto

	* src/http.c: Added HTTPS fuctionality.

	* src/retrc.c: Ditto.

	* src/url.c: Ditto.

	* src/init.c: Added opt.httpsproxy.

	* src/options.h: Ditto.

	* src/rbuf.h: Added alternate rbuf struct.

	* src/wget.h: Added CONSSLERR.

	* src/rbuf.c: Ditto.

2000-12-03  Christian Fraenkel  <christian.fraenkel@gmx.net>

	* INSTALL: Added the --with-ssl switch.

	* configure.in: Ditto.

	* TODO: Removed the corresponding entry.

2000-11-30  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftp-ls.c (ftp_parse_unix_ls): Added second parameter
	"ignore_perms" to ignore file and directory permissions for
	Windows NT FTP server listings.
	(ftp_parse_winnt_ls): New function.
	(ftp_parse_ls): Parses UNIX and Windows NT listings
	separately. Simple heuristics for distinguishing between UNIX and
	MS-DOS-like FTP listing provided by Windows NT FTP service.

2000-11-30  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftp-ls.c (ftp_parse_unix_ls): Added second parameter
	"ignore_perms" to ignore file and directory permissions for
	Windows NT FTP server listings.
	(ftp_parse_winnt_ls): New function.
	(ftp_parse_ls): Parses UNIX and Windows NT listings
	separately. Simple heuristics for distinguishing between UNIX
	and MS-DOS-like FTP listing provided by Windows NT FTP service.

2000-11-29  John Summerfield  <summer@OS2.ami.com.au>

	* src/netrc.c (parse_netrc): Get rid of line ending.

2000-11-25  Karl Eichwalder  <ke@suse.de>

	* Makefile.in (SUBDIRS): Add 'windows'.
	(dist, DISTFILES): Don't distribute CVS directories.

2000-11-25  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_retrieve_list): Undo typo "fix" until resolution by
	Dan.

2000-11-24  Karl Eichwalder  <ke@suse.de>

	* src/main.c (print_help): Untabify.

2000-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (xrealloc_debug): Do the unregister/register thing only
	if the pointer has actually changed.
	(xmalloc_real): Declare `static' in DEBUG_MALLOC builds.
	(xfree_real): Ditto.
	(xrealloc_real): Ditto.
	(xstrdup_real): Ditto.

2000-11-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Build ALL_LINGUAS dynamically.

2000-11-22  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (getftp): ftp_getaddress() returns a malloc'ed copy of the
	string; no need to strdup() it.
	(getftp): Make pwd_len a local variable.
	(ftp_loop): Free PWD before returning.

	* src/init.c (cleanup): Free opt.ftp_pass only if it's non-NULL.

2000-11-22  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/all: Use xfree() instead of free.

	* src/utils.c (xfree): New function.

2000-11-21  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (convert_links): HTML-quote the converted string.

	* src/utils.c (html_quote_string): Move here from ftp-ls.c
	(html_quote_string): Make non-static; declare in utils.h.
	(html_quote_string): Convert SP to &#32;.

2000-11-21  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/hash.c (hash_table_put): Don't overwrite deleted mappings.

2000-11-21  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/hash.c (find_mapping): New function.
	(hash_table_get): Use it.
	(hash_table_get_pair): Ditto.
	(hash_table_exists): Ditto.
	(hash_table_remove): Ditto.
	(hash_table_remove): Really delete the entry if the mapping
	following LOCATION is empty.

	* src/utils.c (string_set_add): Check whether the element has existed
	before.

	* src/hash.c (hash_table_get_pair): New function.

2000-11-21  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (getftp): Reformat Jan's code according to GNU coding
	standards; remove (debugging?) printf's; use '\0' for the ASCII
	zero character.  Use alloca() instead of malloc() for
	inter-function temporary allocations.

2000-11-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/version.c: Bump version from 1.5.3+dev to 1.7-dev.

2000-11-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/recur.c (recursive_retrieve): Print the "so we don't load"
	debugging message only if we really don't load.

	* src/http.c (gethttp): Inhibit keep-alive if proxy is being used.
	(gethttp): Don't request keep-alive if keep-alive is inhibited.

2000-11-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_process_type): Ignore trailing whitespace; use
	strdupdelim().

	* src/recur.c (recursive_retrieve): Use the new `convert' field.
	(convert_all_links): Ditto.
	(convert_all_links): Don't respect meta_disallow_follow.

	* src/html-url.c (handle_link): Fill out link_relative_p and
	link_complete_p.

	* src/url.h (struct _urlpos): Make elements more readable.

	* src/recur.c (recursive_retrieve): Call slist_prepend instead of
	slist_append.
	(convert_all_links): Call slist_nreverse before iterating through
	urls_html.

	* src/utils.c (slist_prepend): New function.
	(slist_nreverse): Ditto.

2000-11-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (http_loop): If username and password are known, try the
	`Basic' authentication scheme by default.

	* src/connect.h: Declare test_socket_open.

2000-11-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Don't use the return value of sprintf().
	(gethttp): Inhibit keep-alive if opt.http_keep_alive is 0.

2000-11-20  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (check_end): Constify.

2000-11-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (convert_links): Handle UREL2ABS case.

	* src/recur.c (recursive_retrieve): Instead of the list
	urls_downloaded, use hash tables dl_file_url_map and
	dl_url_file_map.
	(convert_all_links): Use them to retrieve data.

	* src/host.c (clean_hosts): Free the hash tables.

	* src/main.c (private_initialize): Call host_init().

	* src/host.c (store_hostaddress): Use a saner, hash table-based data
	model.
	(realhost): Ditto.
	(host_init): Initialize the hash tables.

2000-11-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (get_contents): If use_expected, make sure that the
	appropriate amount of data is being read.

	* src/http.c (gethttp): Check for both `Keep-Alive: ...' and
	`Connection: Keep-Alive'.

	* src/wget.h (DEBUGP): Call debug_logprintf only if opt.debug is
	turned on.

2000-11-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (gethttp): Make the HTTP persistent connections more
	robust.

2000-11-19  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/http.c (connection_available_p): Use it.

	* src/connect.c (test_socket_open): New function.

	* src/http.c (gethttp): Support persistent connections.  Based on the
	ideas, and partly on code, by Sam Horrocks <sam@daemoninc.com>.
	(register_persistent): New function.
	(connection_available_p): Ditto.
	(invalidate_connection): Ditto.

2000-11-18  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftpparse.c, ftpparse.h: New files.

	* src/ftp-ls.c (ftp_parse_ls): Use ftp_parse_unix_ls for UNIX servers
	only. Use ftp_parse_nonunix_ls otherwise.
	(ftp_parse_nonunix_ls): Stub to the ftpparse library handling all
	exotic FTP servers.

	* src/ftp.h (stype): New enum, distinguishes UNIX, VMS, and "other"
	FTP servers.

	* src/ftp.c: New static wariables host_type, pwd, and pwd_len.
	(getftp): Support for VMS. Support for FTP servers that do not
	place you in the root directory after login.
	(ftp_retrieve_list): VMS is silent about the real file size, issue
	a more appropriate message.
	(ftp_get_listing): Pass host_type to ftp_parse_ls.

	* src/ftp-basic.c (ftp_pwd, ftp_syst): New functions.

2000-11-18  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/ftpparse.c, ftpparse.h: New files.

	* src/ftp-ls.c (ftp_parse_ls): Use ftp_parse_unix_ls for UNIX servers
	only. Use ftp_parse_nonunix_ls otherwise.
	(ftp_parse_nonunix_ls): Stub to the ftpparse library handling all
	exotic FTP servers.

	* src/ftp.h (stype): New enum, distinguishes UNIX, VMS, and "other"
	FTP servers.

	* src/ftp.c: New static wariables host_type, pwd, and pwd_len.
	(getftp): Support for VMS. Support for FTP servers that do not
	place you in the root directory after login.
	(ftp_retrieve_list): VMS is silent about the real file size, issue
	a more appropriate message.
	(ftp_get_listing): Pass host_type to ftp_parse_ls.

	* src/ftp-basic.c (ftp_pwd, ftp_syst): New functions.

2000-11-18  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (slist_append): Eviscerate NOSORT.  Hash tables are now
	used for what the sorted slists used to be used for.
	(slist_contains): Don't rely on the list being sorted.
	(slist_append): Simplify the code.

	* src/recur.c (recursive_cleanup): Use free_string_set.

	* src/utils.c (string_set_add, string_set_exists, string_set_free):
	New functions for easier freeing of hash tables whose keys are
	strdup'ed strings.

	* src/recur.c (recursive_retrieve): Use the hash table functions for
	storing undesirable URLs.

	* src/hash.c: New file.

2000-11-17  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (private_initialize): Call url_init.
	(main): Call private_initialize.

	* src/url.c (unsafe_char_table): New table.
	(UNSAFE_CHAR): Use it.
	(init_unsafe_char_table): New function.
	(url_init): New function; call init_unsafe_char_table.

2000-11-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* windows/config.h.ms: snprintf and vsnprintf exist under Windows.

	* windows/Makefile.src: Back out previous change.

2000-11-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/mswindows.h: Define snprintf and vsnprintf to _snprintf and
	_vsnprintf respectively.

2000-11-16  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Use --- consistently.
	Spell "Wget" with starting capital letter consistently.
	Use ``...'' or @dfn{} instead of simple double quotes where
	appropriate.
	Use double space as separator between sentences consistently.

2000-11-16  Herold Heiko  <Heiko.Herold@previnet.it>

	* windows/Makefile.src: Compile in vsnprintf.c.

2000-11-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html-url.c (handle_link): Handle HTML fragment identifiers.

	* src/recur.c (recursive_retrieve): If norobot info is respected and
	the file is specified not to be followed by robots, respect that.

	* src/html-url.c (collect_tags_mapper): Handle <meta name=robots
	content=X>.  For us the important cases are where X is NONE or
	where X contains NOFOLLOW.
	(get_urls_html): Propagate that information to the caller.

2000-11-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/config.h.in: Do the _XOPEN_SOURCE and _SVID_SOURCE things only
	on Linux.

2000-11-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Robots): Rearrange text.  Mention the meta tag.

2000-11-15  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (Robots): Document that we now support the meta tag
	exclusion.

2000-11-14  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Add GFDL; remove norobots specification.

	* doc/wget.texi (Sample Wgetrc): Remove warnings with lateish
	makeinfo, mostly by changing xref{} to pxref{} when inside
	parentheses.

2000-11-13  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (convert_links): Unlink the file we might be reading from
	before writing to it.
	(convert_links): Use alloca instead of malloc for
	filename_plus_orig_suffix.

2000-11-12  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/host.c (realhost): Add HOST to the list with quality==0 only if
	it wasn't already there.
	Based on analysis by Lu Guohan <feng@public.bjnet.edu.cn>.

2000-11-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (get_urls_file): Ditto.
	(convert_links): Ditto.

	* src/html-url.c (get_urls_html): Use read_file() instead of
	load_file().

	* src/utils.c (read_file): New function, instead of the old
	load_file().
	(read_file_free): Ditto.

	* src/url.c (findurl): Search only for the supported protocols.
	(convert_links): Use fwrite() when writing out a region of
	characters.

2000-11-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c (run_wgetrc): Don't bother killing off '\r' since
	pars_line() skips whitespace at end of line anyway.
	(parse_line): Oops, it didn't.  Now it does.

	* src/recur.c (parse_robots): Ditto here.

	* src/ftp-ls.c (ftp_parse_unix_ls): Kill off the newline character
	manually because read_whole_line no longer does.

	* src/utils.c (read_whole_line): Rewrite to: a) use less memory
	(reallocates to needed size after work), b) work faster -->
	fgets() instead of getc, c) be more correct --> doesn't kill the
	newline character at the end of line.

2000-11-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c (comind): Initialize MAX to array size - 1.

2000-11-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp-ls.c: Move html_quote_string and ftp_index here.

	* src/url.c: Remove get_urls_html, since that's now in html-url.c.

	* src/html-url.c: New file.

	* src/html-parse.c: New file.

2000-11-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: cc.fer.hr -> srk.fer.hr.

2000-11-10  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Test for MMAP.

2000-11-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (construct): Handle the case where host name is not
	followed by a slash.

2000-11-08  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (construct): Changed last_slash[-1] to *(last_slash - 1).
	Suggested by Edward J. Sabol.

2000-11-06  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/init.c: commands[] need to be sorted!  ("base" wasn't.)

2000-11-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/wget.h (DO_REALLOC_FROM_ALLOCA): Use braces to disambiguate
	`if'.

2000-11-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (construct): Insert unneeded initialization for the
	compiler to shut up.

	* src/config.h.in: Define _XOPEN_SOURCE to 500 to get the prototype
	for strptime() (*duh*).  Define _SVID_SOURCE to get S_IFLNK which
	otherwise gets lost when you define _XOPEN_SOURCE.

	* src/utils.c (touch): Include the file name in the error message.
	From Debian.

2000-11-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (construct): Fix comment.
	(find_last_char): Document.

2000-11-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/log.c (logvprintf): Use vsnprintf() in all cases.  If necessary,
	resize the buffer to fit the formated message.  That way, messages
	of arbitrary size may be printed.
	(logvprintf): Use saved_append() to optionally log the last
	several lines of output.
	(logputs): Ditto.
	(log_close): Adapt to new data structures.
	(log_dump): Ditto.
	(redirect_output): Print messages to stderr, not to stdout.

	* src/log.c (saved_append_1): New function.  Replaces the old logging
	system ("log all output until 10M characters") with a new, much
	more reasonable one ("log last screenful of text").
	(saved_append): New function; call saved_append_1.
	(free_log_line): New function.

2000-11-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi: Updated names of contributors.

2000-11-05  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/Makefile.in (sample.wgetrc.munged_for_texi_inclusion): Use $(srcdir).

2000-11-04  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/snprintf.c: New file.

2000-11-03  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/wget.h: If HAVE_STDARG_H is not defined, don't declare argument
	types to logprintf() and debug_logprintf().

2000-11-02  Tyler Riddle  <triddle@liquidmarket.com>

	* src/http.c (known_authentication_scheme_p): Recognize NTML
	authentication.
	(create_authorization_line): Treat NTML the same as `Basic'.

2000-11-02  Matthew Seaman  <m.seaman@inpharmatica.co.uk>

	* util/rmold.pl: Various fixes.

2000-11-02  Junio Hamano  <junio@twinsun.com>

	* src/ftp-basic.c (ftp_login): Make comparison case-insensitive.

2000-11-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (parseurl): Remove possible reading past the end of
	sup_protos[].  Spotted by Mark A. Mankins <Mankins_Mark@prc.com>.

2000-11-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): Free url before returning.
	(retrieve_url): Free mynewloc before returning.
	Spotted by Mark A. Mankins <Mankins_Mark@prc.com>.

2000-11-02  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (ftp_loop_internal): Hide the password from the URL when
	printing non-verbose.  Problem spotted by Dariusz Mlynarczyk
	<darekm@bydg.lomac.com.pl>.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/wget.h (enum): Remove extra space after last enumeration.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/utils.c (long_to_string): Update with a later, better version.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (path_simplify_with_kludge): New function.
	(path_simplify_with_kludge): Disable it.  Instead...
	(parse_dir): ...make sure that at this point the right thing is
	done, i.e. that "query" part of the URL (?...) is always assigned
	to the file, never to the directory portion of the path.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (get_urls_html): Decode HTML entities using
	html_decode_entities.

	* src/html.c (htmlfindurl): Don't count the `#' in numeric entities
	(&#NNN;) as an HTML fragemnt.
	(html_decode_entities): New function.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/url.c (construct): Rewritten for clarity.  Avoids the
	unnecessary copying and stack-allocation the old version
	performed.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): Detect redirection cycles.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (main): Use legible_very_long() for printing
	opt.downloaded.

	* src/utils.c (legible_1): New function that operates on strings and
	does the brunt of legible()'s work.
	(legible): Use legible_1().
	(legible_very_long): New function; dump the argument with
	sprintf(), and call legible_1().

	* src/options.h (struct options): Use VERY_LONG_TYPE for
	opt.downloaded.

	* src/sysdep.h (VERY_LONG_TYPE): Define it to have a 64-bit or greater
	type.

	* src/config.h.in: Make sure that SIZEOF_LONG and SIZEOF_LONG_LONG get
	defined.  Define HAVE_LONG_LONG if long long is available.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/main.c (main): In case of opt.downloaded overflowing, print
	<overflow> instead of a totally bogus random value.

	* src/retr.c (retrieve_from_file): Ditto.

	* src/recur.c (recursive_retrieve): Ditto.

	* src/main.c (main): Ditto.

	* src/http.c (http_loop): Ditto.

	* src/ftp.c (ftp_loop_internal): Use downloaded_increase() instead of
	`+=', and downloaded_exceeds_quota() instead of the simple-minded
	check.
	(ftp_retrieve_list): Ditto.
	(ftp_retrieve_dirs): Ditto.
	(ftp_retrieve_glob): Ditto.

	* src/retr.c (downloaded_increase): New function.  Notice overflows of
	opt.downloaded.
	(downloaded_exceeds_quota): Make sure that opt.downloaded is not
	used if it overflowed.

	* src/options.h (struct options): New member downloaded_overflow.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/html.c (htmlfindurl): Fix recognition of # HTML fragments.

2000-11-01  Hrvoje Niksic  <hniksic@arsdigita.com>

	* configure.in: Check for size of long and long long.

2000-10-31  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/retr.c (retrieve_url): Use url_concat() to handle relative
	redirections instead of /ad hoc/ code.

	* src/url.c (url_concat): New function encapsulating weird
	construct().
	(urllen_http_hack): New function.
	(construct): When constructing new URLs, recognize that `?' does
	not form part of the file name in HTTP.

2000-10-31  Hrvoje Niksic  <hniksic@arsdigita.com>

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): Rewind the stream when retrying from scratch.

2000-10-30  Dan Harkless  <wget@harkless.org>

	* NEWS: Hrvoje pointed out that relative URL grokking deserves mention.

2000-10-27  Dan Harkless  <wget@harkless.org>

	* src/retr.c (retrieve_url): Manually applied T. Bharath
	<TBharath@responsenetworks.com>'s patch to get wget to grok
	illegal relative URL redirects.  Reformatted and re-commented it.

2000-10-27  Dan Harkless  <wget@harkless.org>

	* TODO: wget now groks illegal relative URL HTTP redirects.

2000-10-24  Dan Harkless  <wget@harkless.org>

	* NEWS: Forgot to update regarding new --bind-address option.

2000-10-23  Hrvoje Niksic  <hniksic@arsdigita.com>

	* doc/wget.texi (HTTP Options): Remove Netscape bullying.

2000-10-23  Dan Harkless  <wget@harkless.org>

	* src/connect.c (make_connection and bindport): Manually applied Rob
	Mayoff <mayoff@dqd.com>'s 1.5.3 patch to add --bind-address,
	changing coding style to GNU's.

	* src/ftp.c (ftp_loop_internal): --delete-after wasn't implemented for
	files downloaded via FTP.  Per a comment, .listing files were not
	counted towards number of bytes and files downloaded because they're
	deleted anyway.  Well, they aren't under -nr, so count them then.

	* src/init.c: Manually applied Rob Mayoff's 1.5.3 patch to add
	--bind-address, alphabetizing, changing coding style to GNU's,
	commenting, and renaming cmd_ip_address() to cmd_address() to
	imply hostnames also okay.

	* src/main.c (main): --delete-after didn't delete the root of the
	tree.  Ignore --convert-links if --delete-after was specified.
	Manually applied Rob Mayoff's 1.5.3 patch to add --bind-address,
	fixing duplicate use of added-since-1.5.3 case value.
	(print_help): Clarified that --delete-after deletes local files.
	Rob forgot to add a line for his new --bind-address option.

	* src/options.h (struct options): Manually applied Rob Mayoff's patch
	to add --bind-address (bind_address structure member).

	* src/recur.c (recursive_retrieve): Improved comment; added DEBUGP().
	Ignore --convert-links if --delete-after was specified.

	* src/retr.c (retrieve_from_file): Just added a DEBUGP().

2000-10-23  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Recursive Retrieval Options): Improved --delete-after docs.
	(Download Options): Documented Rob Mayoff's new --bind-address option.
	(Wgetrc Commands): Documented Rob Mayoff's new bind_address command.

2000-10-20  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Recursive Retrieval Options): Sugg. -E on 1-page download.

2000-10-20  Dan Harkless  <wget@harkless.org>

	* TODO: -k needs to convert '?' to "%3F" in links to saved files
	containing the '?' character (e.g. CGI output).  Also, we need to
	check the HTTP spec w.r.t. simplification of absolute URLs.
	Generalize --html-extension to something like --mime-extension.

	* MAILING-LIST: I didn't realize <wget@sunsite.auc.dk> allowed posting
	by non-subscribers.  <bug-wget@gnu.org> soon to be an alias for it.

	* NEWS: Always forget to update this file when making user-vis. changes.

2000-10-19  Dan Harkless  <wget@harkless.org>

	* src/ftp.c (ftp_loop_internal): downloaded_file() enumerators changed.
	(getftp): Applied Piotr Sulecki <Piotr.Sulecki@ios.krakow.pl>'s
	patch to work around FTP servers that incorrectly respond to the
	"REST" command with the remaining size rather than the total file size.

	* src/http.c (gethttp): Improved a comment and added code to tack on
	".html" to text/html files without that extension when -E specified.
	(http_loop): Use new downloaded_file() enumerators and deal with
	the case of gethttp() called xrealloc() on u->local.

	* src/init.c (commands): Added new "htmlextension" command.
	Also renamed John Daily's cmd_quad() to the more descriptive
	cmd_lockable_boolean(), alpha-sorted the CMD_DECLARE()s and
	removed duplicate cmd_boolean() declaration.

	* src/main.c (print_help): Added my new -E / --html-extension option.
	(main): Undocumented --email-address option previously used -E synonym.
	Stole it away for the much more deserving --html-extension's use.

	* src/options.h (struct options): Added html_extension field.

	* src/url.c (convert_links): URL X that we saved as X.html locally due
	to -E needs to be backed up as X.orig, not X.html.orig.  Added comments.
	(downloaded_file): Now remembers if we added .html extension to a file.

	* src/url.h (downloaded_file_t): Added extra enumerators to support above.
	(downloaded_file): Now takes and returns a downloaded_file_t.

	* src/wget.h (unnamed "dt" enum): Added ADDED_HTML_EXTENSION enumerator.

2000-10-19  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (HTTP Options): Documented my new -E / --html-extension.
	(Wgetrc Commands): Documented my new html_extension option and
	John Daily's "quad" values (which I renamed to "lockable
	Boolean").  When I documented Damir Dzeko's --referer, I forgot to
	add the .wgetrc equivalent; mentioned the "referrer" spelling issue.

2000-10-19  Dan Harkless  <wget@harkless.org>

	* TODO: -E / --html-extension / html_extension has been implemented.
	Make -I and -X allow an optional hostname before the directory name?
	When simplifying paths, wget needs to stop at any '?' character.

	* configure.in: Put "it" language in proper alphabetical order and
	added new languages "pl" and "ru".

	* po/pl.{gmo,po}: Added Grzegorz Kowal <g_kowal@poczta.onet.pl>'s
	Polish message translation file.

	* po/ru.{gmo,po}: Added Const Kaplinsky <const@ce.cctpu.edu.ru>'s
	Russian message translation file.

2000-10-16  Dan Harkless  <wget@harkless.org>

	* TODO: Add option to save local filenames without extra %-encoding.

2000-10-13  Adrian Aichner  <adrian@xemacs.org>

	* src/retr.c: Add msec timing support for WINDOWS.
	* src/retr.c (reset_timer): GetSystemTime() on WINDOWS.
	* src/retr.c (elapsed_time): Calculate delta time to msec on WINDOWS.

2000-10-09  Dan Harkless  <wget@harkless.org>

	* src/html.c (htmlfindurl): Added unneeded initialization to quiet warning.

	* src/main.c (print_help): Clarified what --retr-symlinks does.

2000-10-09  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (FTP Options): --retr-symlinks wasn't documented properly.

2000-10-09  Dan Harkless  <wget@harkless.org>

	* TODO: --retr-symlinks should cause wget to traverse links to dirs too.

2000-09-25  Dan Harkless  <wget@harkless.org>

	* TODO: Make wget return nonzero in situations like bad HTTP
	auth.  Make wget follow (illegal) relative URL HTTP redirects.

2000-09-15  John Daily  <jdaily@cyberdude.com>

	* src/init.c: Add support for "always" and "never" values to allow
	.wgetrc to override commandline (useful e.g. with .pm files
	calling `wget --passive-ftp' when your firewall doesn't allow that).

	* src/ftp.c (getftp): passive_ftp is first option to support always/never.

2000-08-30  Dan Harkless  <wget@harkless.org>

	* src/ftp.c (ftp_retrieve_list): Use new INFINITE_RECURSION #define.

	* src/html.c: htmlfindurl() now takes final `dash_p_leaf_HTML' parameter.
	Wrapped some > 80-column lines.  When -p is specified and we're at a
	leaf node, do not traverse <A>, <AREA>, or <LINK> tags other than
	<LINK REL="stylesheet">.

	* src/html.h (htmlfindurl): Now takes final `dash_p_leaf_HTML' parameter.

	* src/init.c: Added new -p / --page-requisites / page_requisites option.

	* src/main.c (print_help): Clarified that -l inf and -l 0 both allow
	infinite recursion.  Changed the unhelpful --mirrior description
	to simply give the options it's equivalent to.  Added new -p option.
	(main): Added some comments; handle new -p / --page-requisites.

	* src/options.h (struct options): Added new page_requisites field.

	* src/recur.c: Changed "URL-s" to "URLs" and "HTML-s" to "HTMLs".
	Calculate and pass down new `dash_p_leaf_HTML' parameter to
	get_urls_html().  Use new INFINITE_RECURSION #define.

	* src/retr.c: Changed "URL-s" to "URLs".  get_urls_html() now takes
	final `dash_p_leaf_HTML' parameter.

	* src/url.c: get_urls_html() and htmlfindurl() now take final
	`dash_p_leaf_HTML' parameter.

	* src/url.h (get_urls_html): Now takes final `dash_p_leaf_HTML' parameter.

	* src/wget.h: Added some comments and new INFINITE_RECURSION #define.

2000-08-30  Dan Harkless  <wget@harkless.org>

	* po/*.{gmo,po,pot}: Regenerated after modifying wget --help output.

	* MACHINES: Previously said to send updates to "me" (Hrvoje) --
	now says to email the mailing list or bug-wget@gnu.org.

	* MAILING-LIST: Added mention of bug-wget@gnu.org.

	* NEWS: Added --waitretry and --page-requisites.

2000-08-30  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Recursive Retrieval Options): Documented new -p option.
	(Wgetrc Commands): Documented -p's equvialent, page_requisites.

2000-08-25  Dan Harkless  <wget@harkless.org>

	* MACHINES: Alphabetized, changed "architectures" to "OSes and
	architectures", added missing company names, removed needless ^L,
	made AIX and FreeBSD entries more general to reflect successful
	use on those platforms by myself and others, removed the
	non-factual "this version of", and fixed some grammatical errors.

2000-08-23  Dan Harkless  <wget@harkless.org>

	* src/main.c (print_help): -B / --base was not mentioned.

2000-08-23  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Download Options): Using -c on a file that's already fully
	downloaded results in an unchanged file and no second ".1" copy.

	* doc/wget.texi (Logging and Input File Options): -B / --base was not
	documented as a separate item, and the .wgetrc version was misleading.

	* doc/wget.texi (Wgetrc Commands): Changed all instances of
	", the same as" to the more grammatical " -- the same as".

2000-08-22  Dan Harkless  <wget@harkless.org>

	* src/main.c (print_help): Modified -nc description to mention that it
	also prevents the creation of multiple versions of the same file
	with ".<number>" suffixes.

2000-08-22  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Download Options): --no-clobber's documentation was
	severely lacking -- ameliorated the situation.  Some of the
	previously-undocumented stuff (like the multiple-file-version
	numeric-suffixing) that's now mentioned for the first (and only)
	time in the -nc documentation should probably be mentioned
	elsewhere, but due to the way that wget.texi's hierarchy is laid
	out, I had a hard time finding anywhere else appropriate.

2000-07-21  Dan Harkless  <wget@harkless.org>

	* TODO: But Brian McMahon <bm@iucr.org> wants old behavior as an option.

2000-07-19  Dan Harkless  <wget@harkless.org>

	* TODO: -k should convert "hostless absolute" URLs, like "/index.html".

2000-07-17  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (HTTP Options): Minor clarification in "download a
	single HTML page and all files necessary to display it" example.

2000-07-14  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* src/retr.c (retrieve_url): Consistently strdup opt.referer when
	setting u->referer.

2000-06-09  Hrvoje Niksic  <hniksic@iskon.hr>

	* src/url.c (encode_string): Fix comment.
	Suggested by Herold Heiko <Heiko.Herold@previnet.it>.

2000-06-09  Dan Harkless  <wget@harkless.org>

	* src/main.c (print_help): --help output for --waitretry was over 80 cols.

2000-06-01  Hrvoje Niksic  <hniksic@iskon.hr>

	* src/url.c (str_url): Print the port number only if it's different
	from the default port number for that protocol.

2000-06-01  Const Kaplinsky  <const@ce.cctpu.edu.ru>

	* src/ftp.c (ftp_retrieve_list): Change permissions only on plain
	files.

2000-05-24  Dan Harkless  <wget@harkless.org>

	* TODO: Timestamps sometimes not copied over on files retrieved by FTP.

2000-05-22  Dan Harkless  <wget@harkless.org>

	* src/main.c (print_help): Added --help line for Damir Dzeko
	<ddzeko@zesoi.fer.hr>'s until-now-undocumented --referer option.
	Removed comments that --referer and --waitretry were undocumented.
	Changed "`.wgetrc' command" to "`.wgetrc'-style command" on --help
	line for --execute.

2000-05-22  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (HTTP Options): Damir Dzeko <ddzeko@zesoi.fer.hr> did
	not document his new --referer option.  Did so.

2000-05-22  Dan Harkless  <wget@harkless.org>

	* AUTHORS: Added myself to this file, as Hrvoje got confirmation
	of my FSF copyright assignment.

	* TODO: Added note that fragment identifiers don't work properly.

	* po/*.{gmo,po,pot}: Regenerated after modifying wget --help output.

2000-05-18  Hrvoje Niksic  <hniksic@iskon.hr>

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): Check for return value of fclose/fflush.

2000-05-17  Dan Harkless  <wget@harkless.org>

	* TODO: Make `-k' check for files that were downloaded in the past
	and convert links to them in newly-downloaded documents.

2000-04-18  Dan Harkless  <wget@harkless.org>

	* doc/sample.wgetrc: Realized I put a global setting in the local section.

2000-04-13  Dan Harkless  <wget@harkless.org>

	* doc/Makefile.in (sample.wgetrc.munged_for_texi_inclusion): Added
	build, dependencies, and distclean cleanup of this new file.

	* doc/sample.wgetrc: Uncommented waitretry and set it to 10, clarified
	some wording, and re-wrapped some text to 71 columns due to
	@sample indentation in wget.texi.

	* doc/wget.texi: Herold further expounded on the behavior of waitretry
	-- reworded docs again.  Changed note saying _all_ lines in
	sample.wgetrc are commented out.  Don't have an entire hand-
	cut-and-pasted copy of sample.wgetrc in this file -- use @include.

2000-04-12  Hrvoje Niksic  <hniksic@iskon.hr>

	* src/http.c (gethttp): Don't free REQUEST -- it was allocated with
	alloca().
	Pointed out by Gisle Vanem <gvanem@eunet.no>.

2000-04-12  Hrvoje Niksic  <hniksic@iskon.hr>

	* src/host.c (store_hostaddress): Instead of shifting ADDR, start
	copying from the correct address.

2000-04-12  Dan Harkless  <wget@harkless.org>

	* doc/Makefile.in (install.wgetrc): I completely missed the message
	that the new wgetrc wasn't being installed the first couple of
	times I ran `make install' after changing sample.wgetrc.  Added
	blank lines around the message and a "<Hit RETURN to
	acknowledge>", and reworded the message to be a bit more clear.

	* doc/sample.wgetrc: Added entries for backup_converted and waitretry.

	* doc/wget.texi (Download Options and Wgetrc Commands): Herold Heiko
	<Heiko.Herold@previnet.it>'s new --waitretry option was
	undocumented until now.  Reworded the suggested documentation he
	sent to the list.

2000-04-05  Dan Harkless  <wget@harkless.org>

	* TODO: Make -K only leave .orig files around when different.  Add
	an option to save all text/html files with .html extension.  Allow
	mirroring of FTP URLs where logging in puts you somewhere else
	besides '/'.

2000-04-04  Dan Harkless  <wget@harkless.org>

	* src/host.c (store_hostaddress): R. K. Owen's patch introduces a
	"left shift count >= width of type" warning on 32-bit
	architectures.  Got rid of it by tricking the compiler w/ a variable.

	* src/url.c (UNSAFE_CHAR): The macro didn't include all the illegal
	characters per RFC1738, namely everything above '~'.  It also
	generated a warning on OSes where char =~ unsigned char.  Fixed.

2000-04-04  Dan Harkless  <wget@harkless.org>

	* NEWS (--follow-tags, -G / --ignore-tags): Forgot to mention
	these new options when I added them.

2000-03-31  Hrvoje Niksic  <hniksic@srce.hr>

	* src/Use TOUPPER/TOLOWER.

2000-03-21  Hrvoje Niksic  <hniksic@iskon.hr>

	* src/wget.h (DO_REALLOC_FROM_ALLOCA): Ditto.

	* src/sysdep.h (ISALNUM): New macro.
	(TOLOWER): Ditto.
	(TOUPPER): Ditto.

2000-03-10  Dan Harkless  <wget@harkless.org>

	* src/html.c (idmatch): Implemented checking of my new --follow-tags
	and --ignore-tags options.

	* src/init.c (commands): Added comment reminding people adding new
	entries doing allocation to add corresponding freeing in cleanup().
	(commands): Added new followtags and ignoretags commands.
	(cleanup): Free storage for new followtags and ignoretags.

	* src/main.c: Use of "comma-separated list" was random -- normalized
	it.  Did some alphabetization.  Added comments pointing out
	"Options without arguments" and "Options accepting an argument"
	sections of long_options[].  Added new options --follow-tags and
	-G / --ignore-tags.  Added comment that Damir's --referer is
	currently undocumented.  Added comment that Heiko's --waitretry is
	partially undocumented (mentioned in --help but not in
	wget.texi).  Moved improperly sorted 24, 129, and 'G' cases.

	* src/options.h (struct options): Added new fields follow_tags and
	ignore_tags.

	* src/wget.h: Added "#define EQ 0" so we can say "strcmp(a, b) == EQ".

2000-03-10  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Recursive Retrieval Options): In -K description,
	added a link to the discussion of interaction with -N.
	(Recursive Accept/Reject Options): Did some alphabetizing and added
	descriptions of new --follow-tags and -G / --ignore-tags options.
	(Following Links): Changed "the loads of" to "loads of".
	(Wgetrc Commands): Added descriptions of new follow_tags and
	ignore_tags commands.

2000-03-10  Dan Harkless  <wget@harkless.org>

	* TODO: Removed done item: we now have an option (-G) that makes
	it easy to download a single HTML document and all its constituents.

	* po/*.{gmo,po,pot}: Regenerated after adding new options.

	* po/hr.po: Hrvoje forgot '\n's on his translations of my altered
	messages, causing msgfmt to balk and `make install' to fail.

2000-03-02  Hrvoje Niksic  <hniksic@iskon.hr>

	* doc/wget.texi (Contributors): Update contributors list.

2000-03-02  HIROSE Masaaki  <hirose31@t3.rim.or.jp>

	* src/html.c (html_allow): Add <link href=...> and <script src=...>.

2000-03-02  Daniel S. Lewart  <d-lewart@uiuc.edu>

	* doc/wget.texi: Fix spelling and grammatical mistakes.

2000-03-02  Dan Harkless  <wget@harkless.org>

	* src/ftp.c (ftp_loop_internal): Heiko introduced "suggest explicit
	braces to avoid ambiguous `else'" warnings.  Eliminated them.

	* src/http.c (gethttp): Dan Berger's query string patch is totally
	bogus.  If you have two different URLs, gen_page.cgi?page1 and
	get_page.cgi?page2, they'll both be saved as get_page.cgi and the
	second will overwrite the first.  Also, parameters to implicit
	CGIs, like "http://www.host.com/db/?2000-03-02" cause the URLs to
	be printed with trailing garbage characters, and could seg fault.
	Backing out the patch, which Dan B. informed me by email was just
	a kludge to download StarOffice from Sun made necessary due to
	wget's unconditional escaping of certain characters (room for an
	option there?).
	(http_loop): Heiko introduced "suggest explicit braces to avoid
	ambiguous `else'" warnings.  Eliminated them.

	* src/main.c: Heiko's --wait / --waitretry backwards compatibility
	code looks to have been totally untested -- automatic variable
	'wr' was used without being initialized, and a long int was passed
	into setval()'s char* val parameter.

	* src/recur.c (parse_robots): Applied Edward J. Sabol
	<sabol@alderaan.gsfc.nasa.gov>'s patch for Guan Yang's reported
	problem with "User-agent:<space>*<space>" lines in robots.txt.

	* src/url.c (parseurl, str_url): Removing Dan Berger's code (see
	http.c above for explanation).

2000-03-01  Dan Harkless  <wget@harkless.org>

	* src/ftp.c (ftp_loop_internal): Call new downloaded_file() function,
	even though we don't do conversion on HTML files retrieved via
	FTP, so _current_ usage of downloaded_file() makes this call unneeded.
	(ftp_retrieve_list): Added a comment saying where we need to
	stat() a .orig file if FTP'd HTML file conversion is ever implemented.
	(ftp_retrieve_list): "Local file '%s' is more recent," is sometimes
	a lie -- reworded as "Server file no newer than local file '%s' --".

	* src/http.c (http_loop): Fixed a typo and clarified a comment.
	(http_loop): When -K and -N are specified together, compare size
	and timestamp of server file X against local file X.orig (if
	extant) rather than converted local file X.
	(http_loop): "Local file '%s' is more recent," is sometimes a lie
	-- reworded as "Server file no newer than local file '%s' --".
	(http_loop): Call new downloaded_file() function to prevent
	wrongful overwriting of .orig file when -N is specified.

	* src/url.c (convert_links): When -K specified, only rename X to
	X.orig if downloaded_file() returns TRUE.  Otherwise when we skip
	file X due to -N, we clobber an X.orig from a previous invocation.
	(convert_links): Call the failsafe xstrdup(), not the real strdup().
	(convert_links): Added a note asking anyone who understands how
	multiple URLs can correspond to a single file to comment it.
	(downloaded_file): Added this new function.

	* src/url.h (downloaded_file): Added prototype for this new function
	as well as its downloaded_file_t enum type.

	* src/wget.h (boolean): Added this new typedef and TRUE and FALSE #defines.

2000-03-01  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (HTTP Time-Stamping Internals): Added a note about my
	newly-implemented interaction between -K and -N.

2000-03-01  Dan Harkless  <wget@harkless.org>

	* NEWS (-K): Now possible to use -N with -k thanks to this option.

	* TODO: Removed the -K / -N interaction item.

2000-02-29  Dan Harkless  <wget@harkless.org>

	* src/version.c: Upped version to developer-only "1.5.3+dev".

2000-02-29  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi: Updated version to 1.5.3+dev, updated copyrights to
	2000, changed Hrvoje's old, invalid email address to his new one,
	and added " and the developers" to the .texi file's byline.

2000-02-29  Dan Harkless  <wget@harkless.org>

	* NEWS (-K / --backup-converted): Mentioned this new option.

2000-02-18  Dan Harkless  <wget@harkless.org>

	* src/init.c (backup_converted): Added this new option.

	* src/main.c (-K / --backup-converted): Added this new option.

	* src/options.h (backup_converted): Added this new option.

	* src/url.c (convert_links): When backup_converted is specified, save
	file X as X.orig before converting.

	* src/url.h (urlpos): Fixed typo -- said "Rekative" instead of "Relative".

2000-02-18  Dan Harkless  <wget@harkless.org>

	* doc/wget.texi (Recursive Retrieval Options): Documented my new -K /
	--backup-converted option.
	(Wgetrc Commands): Documented backup_converted equivalent.

2000-02-18  Dan Harkless  <wget@harkless.org>

	* TODO: When -K is used with -N, check local X.orig against server X.

2000-01-30  Damir Dzeko  <ddzeko@zesoi.fer.hr>

	* src/http.c (gethttp): Send custom Referer, if required.

1999-09-24  Charles G Waldman  <cgw@fnal.gov>

	* src/netrc.c (parse_netrc): Allow passwords to contain spaces.

	* src/netrc.c (parse_netrc): New function.

1999-09-17  Dan Berger  <dberger@ix.netcom.com>

	* src/http.c (gethttp): Send it.

	* src/url.c (parseurl): Detect query string in HTTP URL-s.
	(str_url): Print it.

1999-08-25  Heiko Herold  <Heiko.Herold@previnet.it>

	* src/ftp.c: Respect new option waitretry.

1999-05-02  andrew deryabin  <djsf@softhome.net>

	* src/http.c (gethttp): Specify port in `Host' header only if it's
	different from 80.

1998-12-22  Alexander V. Lukyanov  <lav@yars.free.net>

	* src/ftp-opie.c (btoe): Zero-terminate OSTORE.

1998-12-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (UNSAFE_CHAR): New macro.
	(contains_unsafe): Use it.
	(encode_string): Ditto.

1998-12-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/main.c (i18n_initialize): Use LC_MESSAGES only if available.

1998-12-01  "R. K. Owen"  <rkowen@Nersc.GOV>

	* src/host.c (store_hostaddress): Fix for big endian 64-bit machines.

1998-11-03  Edward J. Sabol  <sabol@alderaan.gsfc.nasa.gov>

	* src/recur.c (recursive_retrieve): If a finite maximum depth is
	specified, and we're are already at that depth, don't download the
	HTML file for parsing.

1998-10-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_process_type): Removed needless strdup(), a memory
	leak.

1998-09-25  Simon Munton  <simonm@m4data.co.uk>

	* src/init.c (wgetrc_file_name): Don't free HOME under Windows.

1998-09-25  Hrvoje Niksic  <hniksic@srce.hr>

	* src/html.c (htmlfindurl): Set PH to the first occurrence of `#'.

1998-09-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5.3 is released.

1998-09-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/host.c (ftp_getaddress): Don't warn when reverse-lookup of local
	address doesn't yield FQDN.

1998-09-21  Andreas Schwab  <schwab@issan.informatik.uni-dortmund.de>

	* src/cmpt.c (strerror): Fix declaration of sys_errlist.

1998-09-11  Szakacsits Szabolcs  <szaka@sienet.hu>

	* src/html.c (htmlfindurl): Download table background.

1998-09-11  Hrvoje Niksic  <hniksic@srce.hr>

	* src/main.c (main): Don't use an array subscript as the first
	argument to STRDUP_ALLOCA.
	From Kaveh R. Ghazi.

1998-09-11  Hans Grobler  <grobh@conde.ee.sun.ac.za>

	* src/init.c (parse_line): Would free *com before allocating it.
	(parse_line): Would free com instead of *com.

1998-09-10  Kaveh R. Ghazi  <ghazi@caip.rutgers.edu>

	* src/log.c: Use <stdarg.h> only when __STDC__.

1998-09-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_loop): Don't print status code if quiet.

1998-09-10  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (HTTP Options): Warn against masquerading as Mozilla.

1998-09-10  Howard Gayle  <howard@fjst.com>

	* src/url.c (get_urls_html): Would drop the last character of the
	link.

1998-09-10  Howard Gayle  <howard@fjst.com>

	* src/ftp.c (ftp_retrieve_list): Don't update the time stamp of a file
	not retrieved.

1998-09-10  Adam D. Moss  <adam@foxbox.org>

	* src/html.c (htmlfindurl): Download <layer src=...>.

1998-06-27  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c: Include <libc.h> on NeXT.

1998-06-26  Heinz Salzmann  <heinz.salzmann@intermetall.de>

	* src/url.c (get_urls_html): Fix calculation of URL position.

1998-06-23  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5.2 is released.

1998-06-23  Dave Love  <d.love@dl.ac.uk>

	* src/ftp.c, init.c, netrc.c: Include errno.h.

	* src/http.c: Include errno.h and time header.

	* src/Makefile.in (exext): Define.
	(install.bin, uninstall.bin): Use it.

1998-06-23  Dave Love  <d.love@dl.ac.uk>

	* configure.in (exext): Define.

1998-06-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_loop): Don't attempt to compare local and remote
	sizes if the remote size is unknown.

1998-06-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (get_urls_html): Use malloc() instead of alloca in the
	loop.

1998-06-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5.2-b4 is released.

1998-06-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (get_urls_html): Ignore spaces before and after the URI.

1998-06-08  Wanderlei Antonio Cavassin  <cavassin@conectiva.com.br>

	* src/ftp.c (getftp): Translate `done'.

1998-06-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5.2-b3 is released.

1998-06-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (make_directory): Twiddle.

	* src/config.h.in: Added template for access().

1998-06-06  Hrvoje Niksic  <hniksic@srce.hr>

	* configure.in: Check for access().

1998-06-06  Alexander Kourakos  <awk@bnt.com>

	* src/init.c (cleanup): Close dfp, don't free it.

1998-06-05  Mathieu Guillaume  <mat@cythere.com>

	* src/html.c (htmlfindurl): Download <input src=...>

1998-06-03  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (file_exists_p): Use access() with two arguments.

1998-05-27  Martin Kraemer  <Martin.Kraemer@mch.sni.de>

	* src/netrc.c (parse_netrc): Correct logic.

1998-05-27  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Added `break'; suggested by Lin Zhe Min
	<ljm@ljm.wownet.net>.

1998-05-24  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5.2-b2 is released.

1998-05-24  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/Makefile.in (clean): Remove HTML files.

1998-05-20  Hrvoje Niksic  <hniksic@srce.hr>

	* po/hr.po: Some fixes, as per suggestions by Francois Pinard.

1998-05-19  Toomas Soome  <tsoome@ut.ee>

	* po/et.po: Updated.

1998-05-19  Dominique Delamarre  <dominique.delamarre@hol.fr>

	* po/fr.po: New file.

1998-05-18  Juan Jose Rodriguez  <jcnsoft@jal1.telmex.net.mx>

	* src/mswindows.h: Don't translate mkdir to _mkdir under Borland.

1998-05-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (elapsed_time): Return correct value when
	HAVE_GETTIMEOFDAY is undefined.

1998-05-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5.2-b1 is released.

1998-05-13  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi: Various updates.
	(Proxies): New node.

1998-05-11  Simos KSenitellis  <simos@teiath.gr>

	* po/el.po: New file.

1998-05-09  Toomas Soome  <tsoome@ut.ee>

	* po/et.po: New file.

1998-05-09  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/texinfo.tex: New file.

1998-05-09  Hrvoje Niksic  <hniksic@srce.hr>

	* aclocal.m4 (WGET_WITH_NLS): Print available catalogs.

1998-05-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/getopt.c (_getopt_internal): Use exec_name instead of argv[0].
	(_getopt_internal): Don't translate `#if 0'-ed strings.

1998-05-08  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/Makefile.in (dvi): New target.

1998-05-06  Douglas E. Wegscheid  <wegscd@whirlpool.com>

	* windows/makefile.bor: Updated.

	* windows/Makefile.src: Ditto.

1998-05-06  Douglas E. Wegscheid  <wegscd@whirlpool.com>

	* src/mswindows.c (ws_handler): Use fork_to_background().

1998-05-06  Douglas E. Wegscheid  <wegscd@whirlpool.com>

	* configure.bat: set up for either Borland or Visual C

	* windows/wget.dep: new file

	* windows/Makefile.*: use wget.dep

	* rename windows/Makefile.bor to Makefile.src.bor

1998-05-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5.1 is released.

1998-05-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (parse_http_status_line): Avoid `minor' and `major'
	names.

1998-05-02  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (mkdirhier): Renamed to make_directory.

1998-05-02  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Recursive Retrieval): Fix typo.  Suggested by
	Francois Pinard.

1998-05-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/mswindows.c (fork_to_background): Define under Windows.

	* src/utils.c (fork_to_background): New function.

	* src/html.c (htmlfindurl): Removed rerdundant casts.

1998-05-01  Douglas E. Wegscheid  <wegscd@whirlpool.com>

	* src/mswindows.c (ws_mypath): Cache the path.

1998-04-30  Douglas E. Wegscheid  <wegscd@whirlpool.com>

	* windows/config.h.bor: New file.

	* windows/makefile.bor: New file.

1998-04-30  Douglas E. Wegscheid  <wegscd@whirlpool.com>

	* src/ftp.h: Prefix enum ftype members with FT_.

	* src/ftp-ls.c, ftp.c, html.h: Adjust accordingly.

	* src/mswindows.h: Use stat under Borland, _stat under MSVC.

1998-04-28  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (known_authentication_scheme_p): New function.
	(gethttp): Handle authorization more correctly.

	* src/ftp-basic.h: Removed.

	* src/cmpt.h: Removed.

	* src/utils.c: Include <unistd.h> before <pwd.h>; needed under SunOS
	with gcc 2.8.
	(numdigit): Use `while' loop.

	* src/http.c (create_authorization_line): Detect authentication
	schemes case-insensitively.

	* src/http.c (extract_header_attr): Use strdupdelim().
	(digest_authentication_encode): Move declaration of local
	variables to smaller scope.
	(digest_authentication_encode): Reset REALM, OPAQUE and NONCE.
	(create_authorization_line): Detect authentication schemes
	case-insensitively.

	* src/utils.c (touch): Constify.

	* src/http.c (gethttp): Report a nicer error when no data is received.

	* src/rbuf.h (RBUF_READCHAR): Ditto.

	* src/ftp-basic.c (ftp_response): Use sizeof.

1998-04-27  John Burden  <john@futuresguide.com>

	* windows/Makefile.*: Cleanup.

1998-04-27  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (print_percentage): EXPECTED is long, not int.
	(print_percentage): Use floating-point arithmetic to avoid
	overflow with large files' sizes multiplied with 100.

1998-04-27  Gregor Hoffleit  <flight@mathi.uni-heidelberg.de>

	* src/config.h.in: Added pid_t stub.

	* src/sysdep.h (S_ISREG): Moved here from mswindows.h (NeXT doesn't
	define it).

1998-04-27  Gregor Hoffleit  <flight@mathi.uni-heidelberg.de>

	* configure.in: Check for PID_T.

1998-04-20  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5.0 is released.

1998-04-19  Wanderlei Cavassin  <cavassin@conectiva.com.br>

	* po/pt_BR.po: Updated.

1998-04-19  Jan Prikryl  <prikryl@cg.tuwien.ac.at>

	* po/cs.po: Updated.

1998-04-19  Giovanni Bortolozzo  <borto@dei.unipd.it>

	* po/it.po: Updated.

1998-04-18  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (str_url): Ditto.

	* src/ftp-basic.c (ftp_rest): Use new name.

	* src/utils.c (long_to_string): Renamed from prnum().

1998-04-18  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi: Fixed @dircategory, courtesy Karl Eichwalder.

1998-04-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b17 is released.

1998-04-08  Wanderlei Cavassin  <cavassin@conectiva.com.br>

	* po/pt_BR.po: Updated.

1998-04-08  Stefan Hornburg  <racke@gundel.han.de>

	* Makefile (dist): New target.

1998-04-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b16 is released.

1998-04-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (commands): Renamed `always_rest' to `continue'.

1998-04-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/headers.c (header_get): New argument FLAGS.

	* src/http.c (gethttp): If request is malformed, bail out of the
	header loop.
	(gethttp): Check for empty header *after* the status line checks.
	(gethttp): Disallow continuations for status line.

1998-04-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/all: Use it.

	* src/log.c (logputs): New argument.
	(logvprintf): Ditto.
	(logprintf): Ditto.

1998-04-04  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b15 is released.

1998-04-04  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.h: Declare file_non_directory_p().

1998-04-04  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_atotm): Update comment.

	* src/main.c (i18n_initialize): Set LC_MESSAGES, not LC_ALL.

	* src/wget.h: Renamed ENABLED_NLS to HAVE_NLS.

	* src/main.c (i18n_initialize): New function.
	(main): Use it.

	* src/log.c: Include <unistd.h>.

	* src/retr.c (show_progress): Cast alloca to char *.

1998-04-04  Hrvoje Niksic  <hniksic@srce.hr>

	* aclocal.m4 (WGET_WITH_NLS): Renamed USE_NLS to HAVE_NLS.

	* ABOUT-NLS: Removed.

	* Makefile.in (stamp-h): Clean up stamp-h-related dependencies.
	Don't attempt to write to stamp-h.in.

	* aclocal.m4 (WGET_PROCESS_PO): Reset srcdir to ac_given_srcdir.

1998-04-03  Hrvoje Niksic  <hniksic@srce.hr>

	* src/main.c (main): It's `tries', not `numtries' now.

1998-04-03  Hrvoje Niksic  <hniksic@srce.hr>

	* Makefile.in (distclean-top): Remove stamp-h.

1998-04-02  Robert Schmidt  <rsc@vingmed.no>

	* po/no.po: New file.

1998-04-01  Tim Charron  <tcharron@interlog.com>

	* src/log.c (logvprintf): Don't use ARGS twice.

1998-04-01  Junio Hamano  <junio@twinsun.com>

	* src/http.c: Document all the Digest functions.

1998-04-01  John  <john@futuresguide.com>

	* src/mswindows.c: Cleaned up.

1998-04-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b14 is released.

1998-04-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (file_non_directory_p): Renamed from isfile().

	* src/mswindows.h (S_ISREG): New macro, suggested by Tim Adam.

1998-04-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (getperms): Removed.

1998-04-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp-opie.c (STRLEN4): New macro.
	(btoe): Use it.

1998-04-01  Hrvoje Niksic  <hniksic@srce.hr>

	* configure.in: New option `--disable-debug'.

1998-03-31  Junio Hamano  <junio@twinsun.com>

	* src/http.c (HEXD2asc): New macro.
	(dump_hash): Use it.

1998-03-31  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b13 is released.

1998-03-31  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (mkdirhier): Use 0777 instead of opt.dirmode.

	* src/init.c (cmd_spec_dotstyle): Use 48 dots per line for binary
	style.
	(cmd_permissions): Removed.

	* src/config.h.in: Add template for WORDS_BIGENDIAN.

1998-03-31  Hrvoje Niksic  <hniksic@srce.hr>

	* src/main.c (main): Don't try to use `com'.

1998-03-31  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/Makefile.in: Don't attempt to (un)install the man-page.

1998-03-31  Hrvoje Niksic  <hniksic@srce.hr>

	* configure.in: Check for endianness.

1998-03-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b12 is released.

1998-03-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (commands): Renamed `numtries' to `tries'.
	(cmd_spec_debug): Removed.
	(home_dir): Under Windows, return `C:\' if HOME is undefined.

1998-03-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (cmd_permissions): New function.

1998-03-30  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.1: Removed it.

1998-03-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b11 is released.

1998-03-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/config.h.in: Define _XOPEN_SOURCE.

	* src/init.c (check_user_specified_header): New function.
	(cmd_spec_header): Use it.
	(cmd_spec_useragent): New function.

1998-03-29  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Invoking): Split into more sections, analogous to
	output of `wget --help'.
	(HTTP Options): Document --user-agent.

1998-03-29  Hrvoje Niksic  <hniksic@srce.hr>

	* aclocal.m4 (WGET_PROCESS_PO): Use echo instead of AC_MSG_RESULT.

1998-03-28  Hrvoje Niksic  <hniksic@srce.hr>

	* src/wget.h: Include <libintl.h> only if NLS is enabled.

1998-03-28  Hrvoje Niksic  <hniksic@srce.hr>

	* aclocal.m4 (WGET_WITH_NLS): Disable USE_NLS if gettext is
	unavailable.

	* aclocal.m4: Renamed AM_STRUCT_UTIMBUF to WGET_STRUCT_UTIMBUF;
	renamed AM_WITH_NLS to WGET_WITH_NLS.

	* aclocal.m4: Eliminate POSUBS.

1998-03-26  Hrvoje Niksic  <hniksic@srce.hr>

	* src/options.h (struct options): Made `wait' a long.
	(struct options): Ditto for `timeout'.

1998-03-19  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (exists): Renamed to file_exists_p.
	(file_exists_p): Use access() if available.

1998-03-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (memfatal): Set save_log_p to 0 to avoid potential
	infloop.

	* src/log.c: do_logging -> save_log_p.

	* src/config.h.in: Added template for HAVE_VSNPRINTF.

1998-03-17  Hrvoje Niksic  <hniksic@srce.hr>

	* Makefile.in: config.h* -> src/config.h*

	* configure.in: Check for vsnprintf().

	* po/POTFILES.in: Updated.

1998-03-16  Jan Prikryl <prikryl@cg.tuwien.ac.at>

	* po/cs.po: New file.

1998-03-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b10 is released.

1998-03-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c: Ditto.

	* src/http.c: Protect declaration against non-ANSI compiler.

	* src/log.c (logvprintf): Use vsnprintf() if available.

	* src/getopt.c (main): Don't translate test stuff.

1998-03-16  Hrvoje Niksic  <hniksic@srce.hr>

	* po/POTFILES.in: Removed extraneous newline at end of line, which
	caused an error in `Makefile' which Sun make choked on.

1998-03-16  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Contributors): Updated with oodles of new names.

1998-03-12  Wanderlei Cavassin  <cavassin@conectiva.com.br>

	* po/pt_BR.po: New file.

1998-03-11  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Don't translate "CWD %s".

	* src/wget.h (GCC_FORMAT_ATTR): Renamed from FORMAT_ATTR.

1998-03-07  Tim Adam  <tma@osa.com.au>

	* src/recur.c (parse_robots): Correctly reset `entries' on empty
	disallow.

1998-03-07  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (cmd_spec_debug): Use cmd_boolean().

1998-03-07  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp-opie.c (btoe): Use memcpy() instead of strncat().

	* src/log.c (logputs): New function.
	(logvprintf): Renamed from vlogmsg; use logputs().

	* src/retr.c (show_progress): Print `[100%]' when the retrieval is
	finished.

	* src/init.c (run_wgetrc): Use FILE, not PATH.
	(wgetrc_file_name): Ditto.

1998-03-07  Hrvoje Niksic  <hniksic@srce.hr>

	* PROBLEMS: New file.

1998-02-23  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (gethttp): Create proxy-authorization correctly.

1998-02-22  Karl Eichwalder  <ke@suse.de>

	* po/Makefile.in.in (install-data-yes): Fix creation of
	directories for LC_MESSAGE files.

1998-02-22  Karl Eichwalder  <ke@suse.de>

	* doc/Makefile.in (install.info): only info files (no *info.orig,
	etc.).

1998-02-22  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b9 is released.

1998-02-22  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (recursive_retrieve): Reset `first_time'.

	* src/ftp.c (getftp): Added `default' clause to switches of uerr_t.

	* src/rbuf.c (rbuf_peek): Simplified.
	(rbuf_flush): Use MINVAL.

	* src/wget.h (MINVAL): Moved from url.h.

	* src/rbuf.h (RBUF_FD): New macro.

	* src/url.c (add_url): Add to the head of the list.

	* src/ftp.c (ftp_retrieve_list): Set the permissions to downloaded
	file.
	(getftp): Set the default permissions to 0600.

1998-02-22  Hrvoje Niksic  <hniksic@srce.hr>

	* src/md5.c: Ditto.

	* src/getopt.c: Use ANSI function definitions.

	* src/ftp-opie.c: New file.

	* src/options.h: Don't redefine EXTERN.

	* src/init.c: Sort it correctly.

1998-02-22  Hrvoje Niksic  <hniksic@srce.hr>

	* configure.in: Removed `-Wno-switch' for gcc.

	* po/Makefile.in.in (install-data-yes): Use mkinstalldirs to
	create the directory first.

1998-02-21  Karl Eichwalder  <karl@suse.de>

	* po/de.po: Updated.

1998-02-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (get_urls_html): Ditto.
	(convert_links): Ditto.

	* src/recur.c (parse_robots): Ditto.

	* src/html.c (ftp_index): Ditto.

	* src/ftp-ls.c (ftp_parse_unix_ls): Open file as binary.

	* src/init.c (defaults): Initialize `opt' to zero via memset.

	* src/http.c (digest_authentication_encode): goto considered harmful.

1998-02-19  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (delelement): Simplify and fix leak.

1998-02-19  Hrvoje Niksic  <hniksic@srce.hr>

	* Makefile.in (check): New empty target.

1998-02-18  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (dump_hash): Use HEXD2ASC instead of home-grown stuff.

	* src/url.h (HEXD2ASC): Removed warning.

	* src/init.c (comind): Use binary search.
	(commands): Reorganized.
	(setval): Ditto.
	(cmd_boolean): New function.
	(cmd_number): Ditto.
	(cmd_number_inf): Ditto.
	(cmd_string): Ditto.
	(cmd_vector): Ditto.
	(cmd_directory_vector): Ditto.
	(cmd_bytes): Ditto.
	(cmd_time): Ditto.
	(cmd_spec_debug): Ditto.
	(cmd_spec_dirmode): Ditto.
	(cmd_spec_dirstruct): Ditto.
	(cmd_spec_dotstyle): Ditto.
	(cmd_spec_header): Ditto.
	(cmd_spec_htmlify): Ditto.
	(cmd_spec_mirror): Ditto.
	(cmd_spec_outputdocument): Ditto.
	(cmd_spec_recursive): Ditto.
	(settime): Merged with cmd_time().
	(setbytes): Merged with cmd_bytes().
	(setonoff): Merged with cmd_boolean().
	(onoff): Ditto.

1998-02-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b8 is released.

1998-02-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (digest_authentication_encode): New function.
	(create_authorization_line): Use it.
	(dump_hash): New function.
	(digest_authentication_encode): Use it.

	* src/fnmatch.c: Renamed from `mtch.c'.

1998-02-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/Makefile.in (distclean): Remove `config.h'.

1998-02-15  Karl Eichwalder  <ke@suse.de>

	* src/main.c (main): Tag "Written by..." string as translatable.

1998-02-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/wget.h (FREE_MAYBE): New macro.

	* src/http.c (create_authorization_line): Don't use ANSI C string
	concatenation feature.
	(basic_authentication_encode): Use alloca() for temporary
	variables.

	* src/recur.h: Ditto.

	* src/http.c: Ditto.

	* src/headers.h: Ditto.

	* src/ftp-basic.c: Protect declaration against non-ANSI compiler.

	* src/http.c (create_authorization_line): Cast `unsigned char *' to
	`char *' for sprintf, to shut up the noisy Digital Unix cc.

1998-02-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b7 is released.

1998-02-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/cmpt.c (strstr): Synched with glibc-2.0.6.

	* src/ftp-basic.c (calculate_skey_response): Ditto.
	(calculate_skey_response): Use alloca().

	* src/http.c (create_authorization_line): Work with FSF's version of
	md5.c.

	* src/md5.c: New file, from GNU libc.

1998-02-14  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.h (URL_CLEANSE): Name the temporary variable more carefully.

1998-02-13  Junio Hamano  <junio@twinsun.com>

	* src/http.c: Add HTTP-DA support.
	* src/ftp-basic.c: Add Opie/S-key support.
	* src/config.h.in, Makefile.in: Add HTTP-DA and Opie/S-key support.
	* src/md5.c, md5.h: New files.

1998-02-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_process_range): Renamed from hprocrange().
	(http_process_range): Parse the whole header.

	* src/headers.c: New file.
	(header_process): New function.
	(header_get): Renamed from fetch_next_header.

	* src/all: Include utils.h only where necessary.

	* src/wget.h: Declare xmalloc(), xrealloc() and xstrdup() here.

	* src/wget.h: Add provisions for dmalloc.

1998-02-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (basic_authentication_encode): New function, instead of
	the macro.

1998-02-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b6 is released.

1998-02-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_loop): Determine `filename' more precisely.

	* src/init.c (setval): Don't set `opt.quiet' if output-document is
	`-'.

	* src/log.c (log_init): Print to STDERR instead of STDOUT.
	(vlogmsg): Use STDERR by default.
	(logflush): Ditto.

1998-02-11  Simon Josefsson  <jas@pdc.kth.se>

	* src/host.c: Use addr_in again.

1998-02-11  Hrvoje Niksic  <hniksic@srce.hr>

	* po/it.po: New file, by Antonio Rosella.

1998-02-08  Karl Eichwalder  <karl@suse.de>

	* src/http.c (gethttp): Fixed typo.

1998-02-08  Karl Eichwalder  <karl@suse.de>

	* po/de.po: Updated.

1998-02-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b5 is released.

1998-02-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (show_progress): Use it.

	* src/log.c (logflush): New function.

	* src/wget.h: Utilize __attribute__ if on gcc.

1998-02-08  Hrvoje Niksic  <hniksic@srce.hr>

	* aclocal.m4: Cleaned up.

	* po/hr.po: Updated.

	* configure.in: Removed check for POSIXized ISC.

1998-02-07  Karl Eichwalder  <ke@suse.de>

	* Makefile.in (install.info uninstall.info install.man
	uninstall.man install.wgetrc): Use it.

	* Makefile.in (install.mo): New target.

1998-02-07  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (base64_encode_line): New argument LENGTH.
	(BASIC_AUTHENTICATION_ENCODE): Use it.
	(BASIC_AUTHENTICATION_ENCODE): Take length of HEADER into account.

	* src/main.c (main): Fixed fprintf() format mismatch.

1998-02-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b4 is released.

1998-02-04  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (cleanup): Use it.

	* src/recur.c (recursive_cleanup): New function.

	* src/retr.c (retrieve_from_file): Ditto.

	* src/main.c (main): Use it.

	* src/recur.c (recursive_reset): New function.

	* src/retr.c (retrieve_from_file): Ditto.

	* src/main.c (main): Simplify call to recursive_retrieve().

	* src/recur.c (recursive_retrieve): Removed FLAGS argument.

	* src/http.c (gethttp): Changed call to iwrite().

1998-02-03  Simon Josefsson  <jas@pdc.kth.se>

	* src/host.c: use sockaddr_in instead of addr_in.

1998-02-03  Karl Eichwalder  <ke@suse.de>

	* po/POTFILES.in: Touch it (needed for NLS); add src/ftp.c,
	src/getopt.c, src/host.c, src/html.c, src/http.c, src/init.c,
	src/main.c, src/mswindows.c, src/netrc.c, src/recur.c, src/retr.c,
	src/url.c, and src/utils.c.

	* intl/po2tbl.sed.in: Add from gettext-0.10.32 (needed for NLS).

	* po/Makefile.in.in: Add from gettext-0.10.32.

	* Makefile.in (SUBDIRS): Add po/.

	* configure.in (ALL_LINGUAS): New variable.  Add "de" and "hr".
	(AM_GNU_GETTEXT): Add.
	(AC_OUTPUT): Add po/Makefile.in; run the sed command.

	* aclocal.m4 (AM_WITH_NLS, AM_GNU_GETTEXT, AM_LC_MESSAGES,
	AM_PATH_PROG_WITH_TEST): from gettext-0.10.32.

1998-02-03  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b3 is released.

	* src/host.c (ftp_getaddress): Don't print to stderr directly.

	* src/init.c (setbytes): Support `g' for gigabytes.
	(cmdtype): New specification CTIME.
	(setval): Use it with settime().
	(commands): Use it for WAIT and TIMEOUT.

1998-02-03  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (get_urls_html): Ditto.
	(free_urlpos): Ditto.
	(mkstruct): Ditto.
	(construct): Ditto.

	* src/retr.c (retrieve_url): Move declaration of local variables to
	smaller scope.

	* src/url.c (urlproto): Use it.
	(parseurl): Ditto.
	(str_url): Ditto.
	(get_urls_html): Ditto.

	* src/utils.h (ARRAY_SIZE): New macro.

	* src/url.c (proto): Moved from url.h.

	* src/url.h (URL_CLEANSE): Reformatted.
	(USE_PROXY_P): Renamed from USE_PROXY.

	* src/ftp-basic.c: Adjust to the new interface of iwrite().

	* src/ftp-basic.c (ftp_port): Use alloca().

1998-02-02  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (BASIC_AUTHENTICATION_ENCODE): New macro.
	(gethttp): Use it.

	* src/utils.c (unique_name_1): Moved from url.c.
	(unique_name): Ditto.

	* src/url.c (url_filename): Ditto.

	* src/log.c (redirect_output): Changed call to unique_name().

	* src/url.c (unique_name_1): Renamed from unique_name().
	(unique_name): Changed interface.

	* src/init.c (enum cmdid): Moved from init.h.
	(cmdtype): Ditto.
	(struct cmd): Ditto.

	* src/main.c (main): Use it.
	(main): Moved `--backups' to not have a short option.

	* src/options.h (struct options): New member BACKGROUND.

	* src/main.c (print_help): Rearranged.
	(main): New long options for -n* short options: --no-directories,
	--no-host-directories, --non-verbose, --no-host-lookup and
	--dont-remove-listing.

1998-02-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/main.c (main): Use log_close().

	* src/log.c: New variable LOGFP.
	(vlogmsg): Use it.
	(redirect_output): Don't open /dev/null; set LOGFP to stdin
	instead.
	(log_close): New function.

	* src/options.h (struct options): Removed LFILE.

	* src/log.c (log_enable): Removed.

	* src/main.c (main): Use it.

	* src/log.c (log_init): New function.

	* src/url.c (get_urls_html): Removed needless assignment to BASE.

	* src/host.c (add_hlist): Don't set CMP needlessly.

	* src/utils.c (match_backwards): Ditto.
	(in_acclist): Ditto.

	* src/url.c (findurl): Ditto.

	* src/netrc.c (parse_netrc): Ditto.

	* src/log.c (log_dump): Ditto.

	* src/html.c (html_quote_string): Ditto.

	* src/ftp-basic.c (ftp_request): Made static.

	* src/connect.c: Made global variables static.

	* src/url.c (construct): Ditto.

	* src/init.c (init_path): Avoid assignment inside `if'-condition.

	* src/ftp.c: Don't include in.h or winsock.h.

	* src/ftp.c (ftp_loop): Use SZ.

	* src/connect.c (bindport): Cast &addrlen to int *.
	(conaddr): Ditto.

	* src/init.c (initialize): Don't use SYSTEM_WGETRC unconditionally.

1998-01-31  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget 1.5-b2 is released.

	* src/netrc.c (NETRC_FILE_NAME): Moved from netrc.h.

	* src/utils.c (proclist): Pass FNM_PATHNAME to fnmatch().

	* src/ftp-basic.c (ftp_pasv): Avoid unnecessary casting to unsigned
	char.

	* src/log.c: Don't attempt to hide arguments from ansi2knr.

	* src/cmpt.c: Synched strptime() and mktime() with glibc-2.0.6.

	* src/ansi2knr.c: Use a later version, from fileutils-3.16l alpha.

	* src/ftp.c (getftp): Ditto.

	* src/http.c (gethttp): Use it.

	* src/retr.c (get_contents): New argument EXPECTED; pass it to
	show_progress().
	(show_progress): New argument EXPECTED; use it to display
	percentages.

	* src/init.c (setval): Ditto.

	* src/http.c (gethttp): Ditto.
	(http_loop): Ditto.

	* src/ftp.c (getftp): Ditto.
	(ftp_loop_internal): Ditto.

	* src/ftp-ls.c (ftp_parse_unix_ls): Use abort() instead of assert(0).

	* src/sysdep.h (CLOSE): Simplify; use DEBUGP.

	* src/netrc.c (search_netrc): Use alloca().

	* src/init.c (defaults): Initialize no_flush.

	* src/log.c (vlogmsg): Don't flush if no_flush.

	* src/options.h (struct options): New variable no_flush.

	* src/main.c (main): Don't play games with buffering.

	* src/log.c (vlogmsg): Flush the output after every message.

1998-01-31  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (parse_robots): Check for comments more correctly.

	* src/host.c (ftp_getaddress): Use STRDUP_ALLOCA.
	(ftp_getaddress): Add diagnostics when reverse-lookup yields only
	hostname.

1998-01-31  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (parse_line): Ditto.

	* src/url.c (get_urls_html): Ditto.

	* src/main.c (main): Don't cast to unsigned char.

	* src/init.c (run_wgetrc): Don't cast to unsigned char.
	(parse_line): Accept char instead of unsigned char.

	* src/html.c (htmlfindurl): Use char instead of unsigned char.

	* src/all: Use them.

	* src/sysdep.h: Add wrappers to ctype macros to make them
	eight-bit-clean:

1998-01-31  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Initialize opt.ftp_pass here.
	(ftp_retrieve_dirs): Use alloca().

	* src/init.c (defaults): Don't initialize opt.ftp_pass.

	* src/sysdep.h (S_ISLNK): Declare for OS/2; ditto for lstat.
	From Ivan F. Martinez <ivanfm@ecodigit.com.br>.

1998-01-31  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/Makefile.in (install.wgetrc): Don't use `!'.

1998-01-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (gethttp): Cosmetic changes.

	* src/http.c (check_end): Allow `+D...' instead of `GMT'.
	From Fabrizio Pollastri <pollastri@cstv.to.cnr.it>.

	* src/url.c (process_ftp_type): New function.
	(parseurl): Use it.

	* src/connect.c (iwrite): Allow writing in a few chunks.
	(bindport): Made SRV static, so addr can point to it.
	(select_fd): Removed HPUX kludge.

	* src/host.c (free_hlist): Incorporated into clean_hosts().

1998-01-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/html.c (htmlfindurl): Download <img lowsrc=...>

	* src/main.c (main): Ignore SIGPIPE.

	* src/connect.c (select_fd): New argument WRITEP.
	(iwrite): Call select_fd().

1998-01-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget v1.5-b1 is released.

	* src/http.c (hgetlen): Use sizeof() to get the header length.
	(hgetrange): Ditto.
	(hgettype): Ditto.
	(hgetlocation): Ditto.
	(hgetmodified): Ditto.
	(haccepts_none): Ditto.

	* src/main.c (main): Updated `--version' and `--help' output, as per
	Francois Pinard's suggestions.

	* src/main.c: Include locale.h; call setlocale(), bindtextdomain() and
	textdomain().

	* src/config.h.in: Define stubs for I18N3.

	* src/wget.h: Include libintl.h.

1998-01-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/host.c (hlist): Made static.
	(search_address): Cosmetic change.

1998-01-28  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (mkstruct): Check for opt.cut_dirs.
	(mkstruct): alloca()-te more, xmalloc() less.

	* src/utils.c (load_file): Check for ferror().

	* src/url.c (get_urls_file): Close only the files we opened.
	(get_urls_html): Ditto.
	(count_slashes): New function.

	* src/http.h: Removed.

	* src/http.c (gethttp): Respect username and password provided by
	proxy URL.
	(base64_encode_line): Write into an existing buffer instead of
	malloc-ing a new one.
	(struct http_stat): Moved from http.h

	* src/retr.c (retrieve_url): Free SUF.

	* src/all: Removed lots of unnecessary .h dependencies.

	* src/html.c (global_state): Made static.

	* src/utils.h (ALLOCA_ARRAY): New macro.

	* src/main.c (main): New option `--cut-dirs'.

	* src/url.c (construct): Use alloca() for T.

	* src/utils.c (mkdirhier): Use STRDUP_ALLOCA.

	* src/host.c (_host_t): Moved from host.h.
	(struct host): Renamed from _host_t.
	(store_hostaddress): Use STRDUP_ALLOCA for INET_S.
	(realhost): Ditto.

	* src/host.h: Don't include url.h.

	* src/ftp.c (LIST_FILENAME): Moved from ftp.h.

	* src/init.c (DEFAULT_FTP_ACCT): Moved from ftp.h.

	* src/main.c (main): Enable log if the output goes to a TTY.

	* src/connect.h: Removed unused constant `BACKLOG'.

	* src/config.h.in: Check for isatty().

	* src/Makefile.in (LINK): Use CFLAGS when linking.

1998-01-28  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Expanded.

1998-01-27  Hrvoje Niksic  <hniksic@srce.hr>

	* src/mswindows.c (ws_hangup): Use redirect_output().

	* src/main.c (redirect_output_signal): New function; use
	redirect_output().

	* src/log.c (redirect_output): New function, based on hangup(), which
	is deleted.

	* src/log.c (vlogmsg): New function.

	* src/wget.h (DEBUGP): Use debug_logmsg().

	* src/main.c (hangup): Use it.

	* src/log.c (log_dump): New function.

	* src/utils.h (DO_REALLOC): Use `long' for various sizes.

	* src/http.c (hskip_lws): Use `while', for clarity.
	(HTTP_DYNAMIC_LINE_BUFFER): New constant.
	(fetch_next_header): Use it instead of DYNAMIC_LINE_BUFFER.

	* src/ftp-basic.c (FTP_DYNAMIC_LINE_BUFFER): New constant.
	(ftp_response): Use it instead of DYNAMIC_LINE_BUFFER.

	* src/utils.c (DYNAMIC_LINE_BUFFER): Moved from utils.c.
	(LEGIBLE_SEPARATOR): Ditto.
	(FILE_BUFFER_SIZE): Ditto.

	* src/retr.c (BUFFER_SIZE): Moved from retr.h.

	* src/log.c: New file.
	(logmsg): Moved from utils.c.
	(debug_logmsg): New function.

	* src/mswindows.h: Include it here.

	* src/init.c: Ditto.

	* src/utils.c: Don't include <windows.h>.

1998-01-25  Hrvoje Niksic  <hniksic@srce.hr>

	* src/host.c (ftp_getaddress): Ditto.

	* src/main.c (main): Use it.

	* src/utils.h (STRDUP_ALLOCA): New macro.

	* src/init.c: Prepend `wget: ' to error messages printed on stderr.

	* src/utils.c (mkdirhier): Renamed from mymkdir.
	(touch): Renamed from my_touch.
	(pwd_cuserid): Renamed from my_cuserid().

1998-01-25  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Document `--cache'.
	(Contributors): Added Brian.

1998-01-24  Karl Heuer  <kwzh@gnu.org>

	* src/netrc.c (search_netrc): Initialize `l' only after processing
	netrc.

	* src/main.c (main): Don't trap SIGHUP if it's being ignored.

1998-01-24  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (parse_robots): Respect opt.useragent; use alloca().

	* src/http.c (gethttp): Construct useragent accordingly.

	* src/version.c: Changed version string to numbers-only.

	* src/main.c (print_help): List all the options.

	* src/mswindows.c (windows_main_junk): Initialize argv0 here.

1998-01-24  Hrvoje Niksic  <hniksic@srce.hr>

	* src/all: Use logmsg().

	* src/utils.c (time_str): Moved from retr.c.
	(logmsg): New function.
	(logmsg_noflush): Ditto.

	* src/rbuf.c: New file, moved buf_* functions here.

	* src/ftp.c (ftp_expected_bytes): Moved from ftp-basic.c.

	* src/ftp-basic.c (ftp_rest): Use prnum().

	* src/ftp-basic.c: Ditto.

	* src/ftp.c: Use the new reading functions and macros.

	* src/retr.c (buf_initialize): New function.
	(buf_initialized_p): Ditto.
	(buf_uninitialize): Ditto.
	(buf_fd): Ditto.

	* src/http.c (fetch_next_header): Use the BUF_READCHAR macro for
	efficiency.
	(gethttp): Use alloca() where appropriate.

	* src/retr.c (buf_readchar): Use it.
	(buf_peek): Use rstreams.

	* src/retr.h (BUF_READCHAR): New macro.

	* src/init.c (home_dir): Rewritten for clarity.
	(init_path): Ditto.

	* src/mswindows.c (ws_backgnd): Made static.
	(read_registry): Ditto.
	(ws_cleanup): Ditto.
	(ws_handler): Ditto.

1998-01-24  Andy Eskilsson  <andy.eskilsson@telelogic.se>

	* src/utils.c (accdir): Process wildcards.
	(proclist): New function.
	(accdir): Use it to avoid code repetition.

1998-01-23  Karl Heuer  <kwzh@gnu.org>

	* doc/wget.texi (Advanced Options): Updated.

1998-01-23  Hrvoje Niksic  <hniksic@srce.hr>

	* src/alloca.c: New file.

	* src/Makefile.in (ALLOCA): Define.

	* src/mswindows.c (ws_help): Constify.
	(ws_help): Use alloca.

	* src/mswindows.c: Reformat.

	* src/all: Added _(...) annotations for I18N snarfing and translation.

	* src/host.c (ftp_getaddress): Nuke SYSINFO.
	(ftp_getaddress): Don't use getdomainname().
	(ftp_getaddress): Use uname(), where available.

	* src/http.c (gethttp): Protect a stray fprintf().

	* src/init.c (settime): New function.
	(setval): Treat WAIT specially, allowing suffixes like `m' for
	minutes, etc.

1998-01-23  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/Makefile.in: Use `test ...' rather than `[ ... ]'.

	* doc/wget.texi (Advanced Options): Explained suffices.

1998-01-21  Jordan Mendelson  <jordy@wserv.com>

	* src/url.c (rotate_backups): New function.

	* src/http.c (gethttp): Ditto.

	* src/ftp.c (getftp): Rotate backups.

1998-01-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (get_urls_html): Use alloca() for TEMP.

1997-12-18  Hrvoje Niksic  <hniksic@srce.hr>

	* src/all: Renamed nmalloc(), nrealloc() and nstrdup() to xmalloc(),
	xrealloc() and xstrdup().  Use the new functions.

	* src/url.c (decode_string): Made static.
	(has_proto): Ditto.
	(parse_dir): Ditto.
	(parse_uname): Ditto.
	(mkstruct): Ditto.
	(construct): Ditto.
	(construct_relative): Ditto.

	* src/retr.c (show_progress): Made static.

	* src/recur.c (robots_url): Made static.
	(retrieve_robots): Ditto.
	(parse_robots): Ditto.
	(robots_match): Ditto.

	* src/main.h: Removed.

	* src/main.c (printhelp): Made static.
	(hangup): Ditto.

	* src/init.c (comind): Made static.
	(defaults): Ditto.
	(init_path): Ditto.
	(run_wgetrc): Ditto.
	(onoff): Ditto.
	(setonoff): Ditto.
	(setnum): Ditto.
	(myatoi): Ditto.
	(getperms): Ditto.
	(setbytes): Ditto.

	* src/http.c (fetch_next_header): Made static.
	(hparsestatline): Ditto.
	(hskip_lws): Ditto.
	(hgetlen): Ditto.
	(hgetrange): Ditto.
	(hgettype): Ditto.
	(hgetlocation): Ditto.
	(hgetmodified): Ditto.
	(haccepts_none): Ditto.
	(gethttp): Ditto.
	(base64_encode_line): Ditto.
	(mktime_from_utc): Ditto.
	(http_atotm): Ditto.

	* src/html.c (idmatch): Made static.

	* src/host.c (search_host): Made static.
	(search_address): Ditto.
	(free_hlist): Ditto.

	* src/ftp.c (getftp): Made static.
	(ftp_loop_internal): Ditto.
	(ftp_get_listing): Ditto.
	(ftp_retrieve_list): Ditto.
	(ftp_retrieve_dirs): Ditto.
	(ftp_retrieve_glob): Ditto.
	(freefileinfo): Ditto.
	(delelement): Ditto.

	* src/ftp-ls.c (symperms): Made static.
	(ftp_parse_unix_ls): Ditto.

	* src/connect.c (select_fd): Made static.

	* src/utils.c (xmalloc): Renamed from nmalloc.
	(xrealloc): Renamed from nrealloc.
	(xstrdup): Renamed from nstrdup.

	* src/getopt.c (exchange): Use alloca.

	* src/mswindows.c (mycuserid): Use strncpy.

	* src/New files mswindows.c, mswindows.h, sysdep.h.  winjunk.c,
	systhings.h, windecl.h and winjunk.h removed.

	* src/mswindows.c (sleep): New function.

	* src/utils.c: Include <windows.h> under Windows.

1997-12-18  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Mailing List): Update.

1997-07-26  Francois Pinard  <pinard@iro.umontreal.ca>

	* doc/Makefile.in (install.wgetrc): Print the sample.wgetrc warning
	only if the files actually differ.

1997-06-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/cmpt.c (strptime_internal): Handle years more correctly for
	`%y'.

1997-06-12  Darko Budor  <dbudor@zesoi.fer.hr>

	* src/url.h (URL_UNSAFE): Change default under Windows.

	* src/retr.c (retrieve_from_file): Respect opt.delete_after.

	* src/main.c (main): Call ws_help on Windows.

	* src/winjunk.c (windows_main_junk): New function.

	* src/main.c (main): Junk-process argv[0].

	* src/http.c (mktime_from_utc): Return -1 if mktime failed.

	* src/http.c (http_loop): Ditto.

	* src/ftp.c (ftp_loop_internal): Change title on Windows when using a
	new URL.

	* src/winjunk.c (getdomainname): Lots of functions.

1997-06-09  Mike Thomas <mthomas@reality.ctron.com>

	* src/http.c (gethttp): Allocate enough space for
	`Proxy-Authorization' header.

1997-05-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Wget/1.4.5 is released.

1997-05-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (get_contents): Check return value of fwrite more
	carefully.

1997-04-23  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Document `--follow-ftp'.

1997-03-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (isfile): Use `lstat' instead of `stat'.

1997-03-30  Andreas Schwab  <schwab@issan.informatik.uni-dortmund.de>

	* src/cmpt.c (strptime_internal) [case 'Y']: Always subtract 1900 from
	year, regardless of century.

1997-03-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (numdigit): Use explicit test.

1997-03-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_loop): Always use `url_filename' to get u->local.

1997-03-20  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c: Recognize https.

1997-03-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (recursive_retrieve): Lowercase just the host name.

1997-03-09  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (get_urls_file): Use the correct test.
	(get_urls_html): Ditto.

1997-03-07  Hrvoje Niksic  <hniksic@srce.hr>

	* src/connect.c: Reverted addrlen to int.

	* src/init.c (parse_line): Check for -1 instead of NONE.

	* src/version.c: Changed version to 1.4.5.

1997-02-27  Fila Kolodny <fila@ibi.com>

	* src/ftp.c (ftp_retrieve_list): If retrieving symlink and the proper
	one already exists, just skip it.

1997-02-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c: New option netrc.
	(initialize): Don't parse .netrc.

	* src/cmpt.c (recursive): Return rp.
	(strptime_internal): Match the long strings first, the abbreviated
	second.

1997-02-17  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Document --proxy-user and
	--proxy-passwd.

1997-02-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (check_end): New function.
	(http_atotm): Use it.

1997-02-14  Karl Eichwalder  <ke@ke.Central.DE>

	* doc/Makefile.in (install.wgetrc): Never ever nuke an existing rc file.

1997-02-14  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_retrieve_list): Create links even if not relative.

1997-02-13  gilles Cedoc  <gilles@cedocar.fr>

	* src/http.c (gethttp): Use them.

	* src/init.c: New options proxy_user and proxy_passwd.

1997-02-10  Marin Purgar  <pmc@asgard.hr>

	* src/connect.c: Make addrlen size_t instead of int.
	(conaddr): Ditto.

1997-02-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (recursive_retrieve): Lowercase the host name, if the
	URL is not "optimized".

	* src/host.c (realhost): Return l->hostname, even if it matches with
	host.

1997-02-09  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Released 1.4.3.

	* src/url.c: Futher update to list of protostrings.
	(skip_proto): Skip `//' correctly for FTP and HTTP.

	* src/url.c (get_urls_html): Handle bogus `http:' things a little
	different.

	* src/main.c (main): Removed `follow-ftp' from `f'.
	(main): Dumped the `prefix-files' and `file-prefix' options and
	features; old and bogus.
	(main): Exit on failed setval() in `-e'.

	* src/http.c (fetch_next_header): Use it to detect header continuation
	correctly.

	* src/retr.c (buf_peek): New function.

1997-02-09  Gregor Hoffleit  <flight@mathi.uni-heidelberg.DE>

	* src/systhings.h: Define S_ISLNK on NeXT too.

1997-02-08  Roger Beeman  <beeman@cisco.com>

	* src/ftp.c: Include <time.h>

1997-02-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/wget.h: Include time.h and stuff.

1997-02-07  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (findurl): Would read over buffer limits.

1997-02-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp-ls.c (ftp_parse_unix_ls): Allow spaces in file names.

1997-02-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_atotm): Initialize tm.is_dst.

1997-02-02  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (gethttp): Don't print the number of retrieved headers.

	* src/main.c (main): New option `--no-clobber', alias for `-nc'.

	* src/url.c: Recognize `https://'.

1997-02-02  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi: Updated and revised.

	* doc/wget.texi (Contributors): Update.
	(Advanced Options): Removed bogus **/* example.

	* doc/wget.texi: Use ``...'' instead of "...".

1997-02-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/host.c (herrmsg): Don't use h_errno.

1997-02-01  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Domain Acceptance): Document --exclude-domains.

1997-01-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/host.c (accept_domain): Use it.

	* src/main.c (main): New option `--exclude-domains'.

	* src/retr.c (retrieve_url): Use it.
	(retrieve_url): Bail out when an URL is redirecting to itself.

	* src/url.c (url_equal): New function.

1997-01-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/connect.c: Include arpa/inet.h instead of arpa/nameser.h.

	* src/http.c (mk_utc_time): New function.
	(http_atotm): Use it; handle time zones correctly.

1997-01-28  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c: Ditto.

	* src/ftp-basic.c: Use it instead of WRITE.

	* src/connect.c (iwrite): New function.

1997-01-27  Hrvoje Niksic  <hniksic@srce.hr>

	* src/cmpt.c (mktime): New function.

	* src/netrc.c: Include <sys/types.h>.

	* src/main.c (main): Wouldn't recognize --spider.

	* src/retr.c (rate): Use `B', `KB' and `MB'.
	(reset_timer,elapsed_time): Moved from utils.c.

	* src/ftp.c (ftp_retrieve_list): Ditto.

	* src/http.c (http_loop): Don't touch the file if opt.dfp.

1997-01-24  Hrvoje Niksic  <hniksic@srce.hr>

	* src/cmpt.c: New file.

	* src/ftp.c (ftp_retrieve_glob): New argument semantics.
	(ftp_retrieve_dirs): Use it.
	(ftp_loop): Ditto.

	* src/html.c (htmlfindurl): Recognize `'' as the quote char.

1997-01-23  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_loop_internal): Use it.

	* src/utils.c (remove_link): New function.

1997-01-22  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (retrieve_url): Require STRICT redirection URL.

	* src/url.c (parseurl): New argument STRICT.

	* src/http.c (hparsestatline): Be a little-bit less strict about
	status line format.

1997-01-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (gethttp): Use it.

	* src/main.c (main): Don't use '<digit>' as options.

	* src/init.c: New option ignore_length.

	* src/http.c (gethttp): Ditto.
	(http_loop): Check for redirection without Location:.
	(gethttp): Don't print Length unless RETROKF.

	* src/ftp.c (getftp): Use it.

	* src/url.c (mkalldirs): New function.

	* src/utils.c (mymkdir): Don't check for existing non-directory.

	* src/url.c (mkstruct): Don't create the directory.

1997-01-21  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Document --ignore-length.

1997-01-20  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (setval): Removed NO_RECURSION checks.

1997-01-20  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Time-Stamping): New node.

1997-01-19  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4.3-pre2.

	* src/recur.c (recursive_retrieve): Bypass host checking only if URL
	is ftp AND parent URL is not ftp.

	* src/ftp-basic.c (ftp_request): Print out Turtle Power.

	* src/ftp.c (ftp_loop): Call ftp_retrieve_glob with 0 if there's no
	wildcard.
	(ftp_retrieve_glob): Call ftp_loop_internal even on empty list, if
	not glob.

	* src/http.c (gethttp): Be a little bit smarter about status codes.

	* src/recur.c (recursive_retrieve): Always reset opt.recursive when
	dealing with FTP.

1997-01-18  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (retrieve_url): New variable location_changed; use it for
	tests instead of mynewloc.
	(retrieve_url): Allow heuristic adding of html.

	* src/url.c (url_filename): Don't use the `%' in Windows file names.

	* src/http.c (http_loop): Always time-stamp the local file.

	* src/http.c (http_loop): Ditto.

	* src/ftp.c (ftp_retrieve_list): Use it.

	* src/utils.c (my_touch): New function.

	* src/ftp.c (ftp_retrieve_list): Use #ifdef HAVE_STRUCT_UTIMBUF
	instead of #ifndef NeXT.

	* src/utils.c (strptime): New version, by Ulrich Drepper.

1997-01-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (haccepts_none): Renamed from `haccepts_bytes'.
	(gethttp): If haccepts_none(), disable ACCEPTRANGES.
	(http_loop): Would remove ACCEPTRANGES.

	* src/ftp.c (getftp): Call ftp_list with NULL.

1997-01-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/html.c (ftp_index): Don't print minutes and seconds if we don't
	know them; beautify the output.

	* src/ftp.c (getftp): Don't close the socket on FTPNSFOD.

1997-01-14  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (strptime): New function.
	(strptime): Don't use get_alt_number.
	(strptime): Don't use locale.
	(match_string): Made it a function.

1997-01-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_atotm): New function.
	(http_loop): Use it.

	* src/atotm.c: Removed from the distribution.

	* src/http.c (base64_encode_line): Rewrite.

1997-01-12  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/Makefile.in (distclean): Don't remove wget.info*.

1997-01-09  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Use ftp_expected_bytes; print size.

	* src/ftp-basic.c (ftp_response): Use ftp_last_respline.
	(ftp_expected_bytes): New function.

	* src/ftp.c (getftp): Print the unauthoritative file length.

	* src/ftp-ls.c: Renamed from ftp-unix.c.
	(ftp_parse_ls): Moved from ftp.c.
	(ftp_parse_unix_ls): Recognize seconds in time spec.
	(ftp_parse_unix_ls): Recognize year-less dates of the previous
	year.

1997-01-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp-basic.c: Don't declare errno if #defined.

	* src/host.c (ftp_getaddress): Check for sysinfo legally.

1997-01-08  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Mailing List): Update archive.
	(Portability): Update the Windows port by Budor.

1997-01-08  Darko Budor  <dbudor@diana.zems.fer.hr>

	* src/connect.c (iread): Use READ.

1996-12-26  Darko Budor <dbudor@zems.fer.hr>

	* src/wget.h: READ and WRITE macros for use instead of read and write
	on sockets, grep READ *.c, grep WRITE *.c

	* src/wsstartup.c: new file - startup for winsock

	* src/wsstartup.h: new file

	* src/win32decl.h: new file - fixup for <errno.h> and winsock trouble

	* src/configure.bat: Configure utility for MSVC

	* src/src/Makefile.ms,config.h.ms: new files for use with MSVC 4.x

1996-12-23  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c: Recognize finger, rlogin, tn3270, mid and cid as valid
	schemes.

1996-12-22  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Released 1.4.3-pre.

	* src/utils.c (prnum): Accept long.
	(legible): Use prnum().

	* src/connect.c (make_connection): Accept port as short.
	(bindport): Ditto.

	* src/http.c (gethttp): Use search_netrc.

1996-12-22  Hrvoje Niksic  <hniksic@srce.hr>

	* src/host.c (ftp_getaddress): Allow `.' in hostname.

1996-12-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Use search_netrc.

	* src/netrc.c (free_netrc): New function.

	* src/init.c (home_dir): New function.

	* src/url.c (convert_links): Allow REL2ABS changes.

1996-12-21  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Security Considerations): New node.

1996-12-21  Gordon Matzigkeit  <gord@gnu.ai.mit.edu>

	* src/netrc.c: New file.
	(parse_netrc, maybe_add_to_list): New functions.

1996-12-19  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Document --passive.

1996-12-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (retrieve_url): Reset opt.recursion before calling
	ftp_loop if it is reached through newloc.

	* src/init.c (run_wgetrc): Print the wgetrc path too, when reporting
	error; don't use "Syntax error", since we don't know if it is
	really a syntax error.

1996-12-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (acceptable): Extract the filename part of the path.

	* src/recur.c (recursive_retrieve): Call acceptable() with the right
	argument; would bug out on wildcards.

	* src/init.c (parse_line): Likewise.

	* src/html.c (htmlfindurl): Cast to char * when calling stuff.

1996-12-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (parseurl): Debug output.

	* src/utils.c (path_simplify): New one, adapted from bash's
	canonicalize_pathname().

1996-12-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Use ftp_pasv.

	* src/ftp-basic.c (ftp_request): Accept NULL value.
	(ftp_pasv): New function.

	* src/options.h (struct options): Add passive FTP option.

1996-12-14  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Don't discard the buffer.

	* src/retr.c (get_contents): New parameter nobuf.

1996-12-13  Shawn McHorse  <riffraff@txdirect.net>

	* src/url.c (get_urls_html): Skip "http:".

1996-12-13  Shawn McHorse  <riffraff@txdirect.net>

	* src/html.c (htmlfindurl): Recognize <meta contents="d; URL=...".

	* src/init.c (setval): Strip the trailing slashes on CVECDIR.

1996-12-13  Kaveh R. Ghazi  <ghazi@caip.rutgers.edu>

	* src/(configure.in, config.h.in, src/Makefile.in, src/*.[ch]): Add
	ansi2knr support for compilers which don't support ANSI style
	function prototypes and signatures.

	* src/(aclocal.m4, src/ansi2knr.c, src/ansi2knr.1): New files.

1996-12-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (strcasecmp): From glibc.
	(strncasecmp): Also.
	(strstr): Also.

	* src/url.c: Added javascript: to the list of URLs prefixes.

1996-12-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c: Make excludes and includes under CVECDIR instead of
	CVEC.

1996-12-12  Shawn McHorse  <riffraff@txdirect.net>

	* src/recur.c (retrieve_robots): Print the warning message only if
	verbose.

1996-12-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/systhings.h: New file.

	* src/../configure.in: Check for utime.h

	* src/ftp.c: Check whether we have unistd.h.

1996-12-12  Gregor Hoffleit  <flight@mathi.uni-heidelberg.DE>

	* src/ftp.c (ftp_retrieve_list): Use NeXT old utime interface.

1996-12-12  Dieter Baron <dillo@danbala.tuwien.ac.at>

	* doc/wget.texi (Advanced Usage): Would reference prep instead of
	wuarchive.

1996-11-27  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (recursive_retrieve): Send the canonical URL as referer.
	(recursive_retrieve): Call get_urls_html with the canonical URL.

1996-11-26  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c: Use it; Recognize paths ending with "." and ".." as
	directories.
	(url_filename): Append .n whenever file exists and could be a
	directory.

	* src/url.h (ISDDOT): New macro.

	* src/init.c (parse_line): Use unsigned char.

	* src/url.c (get_urls_html): Cast to unsigned char * when calling
	htmlfindurl.

	* src/html.c (htmlfindurl): Use unsigned char.

	* src/version.c: Changed version to 1.4.3.

1996-11-25  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Released 1.4.2.

	* src/ftp.c (getftp): Simplified assertion.
	(ftp_loop_internal): Remove symlink before downloading.
	(ftp_retrieve_list): Unlink the symlink name before attempting to
	create a symlink!

	* src/options.h (struct options): Renamed print_server_response to
	server_response.

	* src/ftp.c (rel_constr): Removed.
	(ftp_retrieve_list): Don't use it.
	(ftp_retrieve_list): Use opt.retr_symlinks.

1996-11-25  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Documented --retr-symlinks.

1996-11-24  Hrvoje Niksic  <hniksic@srce.hr>

	* src/main.c (main): New option retr_symlinks.

	* src/url.c (convert_links): Print verbose message.

1996-11-24  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_loop): Reset newloc in the beginning of function;
	would cause FMR in retrieve_url.

1996-11-23  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (convert_all_links): Find the URL of each HTML document,
	and feed it to get_urls_html; would bug out.
	(convert_all_links): Check for l2 instead of dl; removed dl.

	* src/url.c (convert_links): Don't refer to freed newname.

	* src/recur.c (recursive_retrieve): Add this_url to urls_downloaded.

	* src/main.c (main): Print the OS_TYPE in the debug output, too.

	* src/recur.c (recursive_retrieve): Check for opt.delete_after.

	* src/main.c (main): New option delete-after.

	* src/init.c (setval): Cleaned up.

1996-11-23  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Document --delete-after.

1996-11-22  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Portability): Add IRIX and FreeBSD as the "regular"
	platforms.

1996-11-21  Shawn McHorse  <riffraff@txdirect.net>

	* src/html.c (htmlfindurl): Reset s->in_quote after getting out of
	quotes.

1996-11-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/Makefile.in (wget): Make `wget' the default target.

	* src/ftp.c (ftp_loop_internal): Move noclobber checking out of the
	loop.
	(ftp_retrieve_list): Warn about non-matching sizes.

	* src/http.c (http_loop): Made -nc non-dependent on opt.recursive.

	* src/init.c (setnum): Renamed from setnuminf; New argument flags.
	(setval): Use it.

	* src/main.c (main): Sorted the options.
	(main): New option --wait.

1996-11-20  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Released 1.4.1.

	* src/html.c (html_quote_string): New function.
	(ftp_index): Use it.
	(htmlfindurl): A more gentle ending debug message.

	* src/ftp.c (ftp_loop): Check for opt.htmlify.

	* src/init.c: New command htmlify.

	* src/ftp.c (getftp): Nicer error messages, with `'-encapsulated
	strings.
	(ftp_loop): Print size of index.html.

	* src/init.c (setval): Implement "styles".

	* src/main.c (main): New option dotstyle.

1996-11-20  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Changed version to 1.4.2.

1996-11-20  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Usage): Document dot-style.

1996-11-19  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Close the master socket in case of errors, after
	bindport().

	* src/connect.c (bindport): Initialize msock to -1.

	* src/ftp.c (getftp): Initialize dtsock to -1.

	* src/connect.c (closeport): Don't close sock if sock == -1.

1996-11-18  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (setnuminf): Nuked default value -- just leave unchanged.
	(setval): Don't send default values.
	(defaults): Use DEFAULT_TIMEOUT -- aaargh.

	* src/options.h (struct options): Use long for dot_bytes.

	* src/init.c (setquota): Renamed to setbytes.
	(setval): Use setbytes on DOTBYTES.

1996-11-18  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Usage): Dot customization example.
	(Sample Wgetrc): Likewise.

1996-11-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Initialize con->dltime.

	* src/recur.c (recursive_retrieve): Use same_host instead of
	try_robots; simply load robots_txt whenever the host is changed.
	(recursive_retrieve): Free forbidden before calling parse_robots.

1996-11-16  Mark Boyns  <boyns@sdsu.edu>

	* src/recur.c (recursive_retrieve): Retrieve directories regardless of
	acc/rej rules; check for empty u->file.

1996-11-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (show_progress): Use them.

	* src/options.h (struct options): New options dot_bytes, dots_on_line
	and dot_spacing.

1996-11-16  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Wgetrc Syntax): Explained emptying lists.

1996-11-14  Shawn McHorse  <riffraff@txdirect.net>

	* src/recur.c (recursive_retrieve): Use base_url instead of this_url
	for no_parent.

1996-11-14  Shawn McHorse  <riffraff@txdirect.net>

	* src/html.c (htmlfindurl): Reset s->in_quote after exiting the quote.

1996-11-14  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (setval): Use it.

	* src/utils.c (merge_vecs): New function.

	* src/init.c (setval): Reset the list-type functions when encountering
	"".

1996-11-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c (sepstring): Rewrote; don't use strtok.

	* src/recur.c (recursive_retrieve): Enter assorted this_url to slist
	when running the first time.
	(retrieve_robots): Warn to ignore errors when robots are loaded.

	* src/utils.c (load_file): Moved from url.c.

	* src/http.c: Made static variables const too in h* functions.

	* src/main.c (main): Renamed --continue-ftp to --continue.

	* src/recur.c (recursive_retrieve): Use it.

	* src/utils.c (frontcmp): New function.

	* src/url.c (accdir): New function.

	* src/html.c (htmlfindurl): Recognize <area href=...>.

	* src/ftp.c (ftp_retrieve_dirs): Implemented opt.includes.

	* src/init.c (setval): Free the existing opt.excludes and
	opt.includes, if available.

	* src/main.c (main): New option -I.

1996-11-13  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Document includes/excludes.
	(Wgetrc Commands): Likewise.

1996-11-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_retrieve_glob): Do not weed out directories.

	* src/version.c: Changed version to 1.4.1.

1996-11-11  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Released 1.4.0.

1996-11-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/main.c (main): Free com and val after parse_line.
	(printhelp): Reorder the listing.

	* src/http.c: More robust header parsing.

	* src/http.c: Allow any number of spaces, or no spaces, precede ':'.
	(hskip_lws): New function.
	(haccepts_bytes): New function.
	(gethttp): Use it.

	* src/init.c (setval): Check header sanity.
	(setval): Allow resetting of headers.

1996-11-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_loop): Don't use has_wildcards.

	* src/http.c (gethttp): Free all_headers -- would leak.

	* src/recur.c (recursive_retrieve): Initialize depth to 1 instead of
	0 -- this fixes a long-standing bug in -rl.

1996-11-10  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Options): Document headers.

1996-11-09  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c: Use -1 as "impossible" value for con->fd.

	* src/url.h (URL_SEPARATOR): Don't treat `*' and `+' as separators.

	* src/init.c (parse_line): Use isalpha.

	* src/ftp-unix.c: Use HAVE_UNISTD_H.

	* src/mtch.c (has_wildcards): Don't match \.

	* src/http.c (http_loop): Warn on HTTP wildcard usage.

1996-11-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (url_filename): Do not create numbered suffixes if
	opt.noclobber -- would bug out on -nc.

1996-11-07  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (parse_robots): Don't chuck out the commands without
	arguments (`Disallow:<empty>' didn't work).
	(parse_robots): Compare versions lowercase.
	(parse_robots): Match on base_version, not version_string!
	(parse_robots): Handle comments properly.
	(parse_robots): Match versions in a sane way.

	* src/init.c: Print nicer error messages.

	* src/version.c: Changed version to 1.4.0.

1996-11-07  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/sample.wgetrc: Added header examples.

1996-11-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Released 1.4.0-test2.

	* src/init.c (run_wgetrc): Close fp.

	* src/ftp.c (ftp_retrieve_dirs): Allocate the correct length for
	u->dir.

1996-11-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c (setquota): Allow inf as quota specification.

1996-11-06  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi: Docfixes.

1996-11-06  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/sample.wgetrc: Rewritten.

	* doc/Makefile.in (install.wgetrc): Install sample.wgetrc.
	(uninstall.info): Use $(RM).

1996-11-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_retrieve_dirs): Return QUOTEXC if quota exceeded.
	(ftp_retrieve_glob): Return QUOTEXC on quota exceeded.

	* src/main.c (main): Check for quota by comparison with downloaded
	stuff, not from status.

	* src/connect.c (select_fd): Should compile on HPUX without warnings now.

	* src/ftp.c (ftp_get_listing): Check whether ftp_loop_internal
	returned RETROK.

1996-11-04  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_retrieve_glob): Print the pattern nicely.
	(getftp): Return FTPRETRINT on control connection error.

	* src/html.c (htmlfindurl): Recognize <embed src=...> and
	<bgsound src=...>.
	(ftp_index): Handle username and password correctly.

	* src/main.c (main): Made `-np' a synonim for --no-parent.

1996-11-03  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi: Proofread; *many* docfixes.

1996-11-02  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Released 1.4.0-test1.

	* src/url.c (str_url): Don't use sprintf when creating %2F-prefixed
	directory.
	(convert_links): Removed definition of make_backup.

	* src/http.h: Removed definition of MAX_ERROR_LENGTH.

	* src/host.c (ftp_getaddress): Check for "(none)" domains.

	* src/ftp.c (ftp_retrieve_dirs): Docfix.

	* src/http.c (gethttp): Use ou->referer instead of u->referer.

	* src/retr.c (retrieve_url): Reset u to avoid freeing pointers twice;
	this was known to cause coredumps on Linux.

	* src/html.c (ftp_index): Cast the argument to local_time to time_t *.

1996-11-02  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_loop): Check for opt.ftp_glob too before calling
	ftp_retrieve_glob.

	* src/version.c: Changed version to 1.4.0-test2.

1996-11-02  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Introduction): Updated robots mailing list address.

1996-11-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/connect.c (select_fd): Use exceptfds -- once and for all.

	* src/retr.c (retrieve_from_file): Free filename after
	recursive_retrieve.
	(retrieve_from_file): Send RFIRST_TIME to recursive_retrieve on
	first-time retrieval.
	(retrieve_from_file): Return uerr_t; new argument, count.
	(retrieve_from_file): Break on QUOTEXC.

	* src/init.c (setquota): Fixed a bug that caused rejection of
	non-postfixed values..

1996-11-01  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi: Minor docfixes.

1996-10-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Changed name to wget.

	* src/connect.c (iread): Smarter use of select.
	(select_fd): Set errno on timeout.  If not timeout, return 1
	instead of 0.

1996-10-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_loop_internal): Don't use con->cmd before
	establishing it.

1996-10-26  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (gethttp): Send correct referer when using proxy.
	(gethttp): Use struct urlinfo ou to access the relevant data; send
	correct authorization in all cases.

	* src/host.c (same_host): Use skip_uname to skip username and
	password.

	* src/url.c (skip_uname): New function.
	(parseurl): Use it.

	* src/host.c (same_host): Do not assume HTTP -- same_host should now
	be totally foolproof.

	* src/url.c (skip_proto): New function.
	(parse_uname): Use it.

	* src/http.c (gethttp): Create local user and passwd from what is
	given.

	* src/url.c (parseurl): Check for HTTP username and password too.

1996-10-26  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/wget.texi (Advanced Usage): Document passwords better.

	* doc/Makefile.in (distclean): Remove wget.1 on make distclean.

	* doc/wget.texi (Option Syntax): Explain --.

1996-10-25  Hrvoje Niksic  <hniksic@srce.hr>

	* src/config.h.in: Removed #define gethostbyname R...

1996-10-22  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Changed version to 1.4.0-test1.

1996-10-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b29.

	* src/recur.c (recursive_retrieve): Check for no_parent.

	* src/init.c (setval): Option update.

	* src/main.c (main): New option no-parent.

	* src/options.h (struct options): New variable no_parent.

	* src/recur.c (recursive_retrieve): Only files are checked for
	opt.accepts and opt.rejects.
	(recursive_retrieve): Check directories for opt.excludes.
	(recursive_retrieve): Make the dir absolute when checking
	opt.excludes.

	* src/html.c (htmlfindurl): Recognize <applet code=...> and <script
	src=...>

1996-10-21  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/fetch.texi (No Parent): update.

1996-10-18  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b28.

	* src/ftp.c (ftp_loop_internal): Check whether f->size == len and
	don't continue the loop if it is.
	(ftp_get_listing): Remove list_filename on unsuccesful loop.

1996-10-18  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (getftp): Do not line-break assert entries at all.
	(ftp_retrieve_dirs): docfix.

	* src/connect.c (select_fd): Use fd + 1 as nfds.

	* src/version.c: Changed version to 1.4b29.

1996-10-18  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/fetch.texi (Advanced Options): Docfix.

1996-10-17  Tage Stabell-Kulo <tage@acm.org>

	* doc/geturl.texi (Advanced Options): Sort alphabetically.

1996-10-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (parse_robots): Fixed an off-by-one bug when looking for
	':'.

	* src/html.c (htmlfindurl): Fixed several possible off-by-one bugs by
	moving `bufsize &&' to the beginning of each check in for-loops.

	* src/recur.c (parse_robots): Close fp on exit.

	* src/url.c (mymkdir): Check for each directory before creating.

1996-10-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_loop_internal): Use strcpy to initialize tmp.
	(getftp): Do not use multiline assert.

	* src/http.c (hparsestatline): Use mjr and mnr instead of major and
	minor, which don't compile on Ultrix.
	(http_loop): Use strcpy() to initialize tmp.

	* src/all: Geturl -> Fetch

1996-10-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Changed version to 1.4b28.

1996-10-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b27.

	* src/init.c (parse_line): Use isspace.
	(parse_line): Free *com on all errors.

	* src/ftp.c (ftp_loop): Change FTPOK to RETROK before exiting.
	(delelement): Use next instead of f->next and prev instead of
	f->prev.
	(delelement): Free the members of the deleted element.

	* src/http.c (http_loop): Do not return RETROK on code != 20x.

	* src/init.c (cleanup): Free opt.user_header.
	(cleanup): Free opt.domains.

	* src/url.c (freelists): Moved to cleanup().

	* src/http.c (hparsestatline): Docfix.

	* src/main.c (main): Return with error status on unsuccesful
	retrieval.

	* src/init.c (setval): Do not remove listing when mirroring.

	* src/url.c (url_filename): Use opt.fileprefix.

	* src/ftp.c (ftp_get_listing): Use url_filename to get filename for
	.listing.

	* src/main.c (main): New option: -rn.

1996-10-16  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/geturl.texi (Advanced Options): Describe -nr.
	(Advanced Usage): Moved -O pipelines to Guru Usage.
	(Simple Usage): Update.
	(Advanced Options): Docfix.

	* doc/Makefile.in (RM): RM = rm -f.

1996-10-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/Makefile.in (RM): Added RM = rm -f.

	* src/host.c (clean_hosts): New function.
	(free_hlist): Just free the list, no reset.

	* src/version.c: Changed version to 1.4b27.

1996-10-15  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/geturl.texi (Guru Usage): Add proxy-filling example.

1996-10-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b26.

	* src/retr.c (retrieve_from_file): If call get_urls_html with
	opt.spider to make it silent in spider mode.

	* src/url.c (str_url): Use CLEANDUP instead of URL_CLEANSE.

	* src/url.h (CLEANDUP): New macro.

	* src/http.c (gethttp): Fixed a bug that freed location only when it
	was NULL.

	* src/retr.c (retrieve_url): Free url if it will not be stored,
	i.e. newloc is NULL.

	* src/html.c (htmlfindurl): Handle exiting from quotes correctly; the
	old version would bug out on <a href="x#a"href="y">.

	* src/html.h (state_t): New member in_quote.

	* src/html.c (htmlfindurl): Free s->attr at the beginning of
	attr-loop.

	* src/recur.c (recursive_retrieve): Recognize RCLEANUP.
	(tried_robots): Make hosts a global variable.
	(recursive_retrieve): Free constr after URL host optimization.
	(tried_robots): Free urlinfo before exiting.

	* src/utils.c (free_slist): New function.

	* src/recur.c (recursive_retrieve): Use flags to add cleanup
	possibility.

	* src/main.c (main): Free filename after recursive_retrieve.

	* src/http.c (gethttp): Store successful responses too.

1996-10-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/all: Constified the whole source.  This required some minor
	changes in many functions in url.c, possibly introducing bugs -- I
	hope not.

	* src/ftp-basic.c: Removed last_respline.

	* src/http.c (gethttp): Free type.

	* src/host.c (same_host): Free real1 and real2.

	* src/main.c (main): New option --spider.

	* src/retr.c (get_contents): Don't reset errno.

	* src/main.c (main): Sorted the options.

	* src/connect.c (iread): Set errno to ETIMEDOUT only if it was left
	uninitialized by select().

	* src/http.c (http_loop): Print the time when the connection is
	closed.
	(gethttp): Debug-print the HTTP request.

1996-10-12  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/geturl.texi (Advanced Options): Added --spider.

1996-10-11  Hrvoje Niksic  <hniksic@srce.hr>

	* src/connect.c (iread): Do not try reading after timeout.

	* src/main.c (main): Would bug out on -T.

	* src/connect.c (select_fd): Do not use exceptfds.
	(iread): Set ETIMEDOUT on select_fd <= 0.

	* src/version.c: Changed version to 1.4b26.

1996-10-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b25.

	* src/ftp-unix.c (ftp_parse_unix_ls): Ignore lines without file name
	or link name.

	* src/http.c (gethttp): Add errcode to struct hstat.
	(http_loop): Use it.

	* src/url.c (no_proxy_match): Simplify using char** for no_proxy.

	* src/options.h (struct options): Make opt.no_proxy a vector.

	* src/utils.c (sepstring): Use !*s instead of !strlen(s).

	* src/init.c (setval): Set opt.maxreclevel to 0 on --mirror.
	(getperms): Use ISODIGIT instead of isdigit.

	* src/ftp.c (getftp): Print time.

	* src/main.c (main): Use legible output of downloaded quantity.

	* src/ftp.c (getftp): Use elapsed_time().
	(ftp_loop_internal): Use rate().

	* src/http.c (http_loop): Add download ratio output; Use rate().

	* src/utils.c (rate): New function.

1996-10-09  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_loop): Use timer.

	* src/ftp.c: Split to ftp-basic.c and ftp.c

	* src/utils.c (reset_timer): New function.
	(elapsed_time): New function.

	* src/retr.c (show_progress): Make bytes_in_line and offs long; should
	work on 16-bit machines.

1996-10-08  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (in_acclist): New argument backward.

	* src/ftp.c (ftp_retrieve_glob): Use acceptable() to determine whether
	a file should be retrieved according to suffix.
	(ftp_get_listing): Check the return value of unlink; Do not call
	ftp_retrieve_dirs if depth reached maxreclevel.
	(ftp_retrieve_dirs): Check whether the directory is in
	exclude-list.

	* src/main.c (main): Print the version number at the beginning of
	DEBUG output.
	(main): Use strrchr when creating exec_name.

	* src/ftp.c (ftp_retrieve_glob): Do not close control connection.

	* src/version.c: Changed version to 1.4b25.

1996-10-08  Hrvoje Niksic  <hniksic@srce.hr>

	* doc/geturl.texi (Advanced Options): Added -X.

	* doc/Makefile.in: Added $(srcdir) where appropriate (I hope).

1996-10-07  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b24.

	* src/Makefile.in: Rewrite.

	* src/ftp.c (ftp_loop_internal): Likewise.

	* src/retr.c (time_str): Check for failed time().

	* src/html.c (htmlfindurl): Recognize <fig src> and <overlay src> from
	HTML3.0.

	* src/retr.c (time_str): Return time_t *.

	* src/connect.c (bindport): Close msock on unsuccesful bind.
	(bindport): The same for getsockname and listen.

	* src/retr.c (retrieve_url): Allow any number of retries on
	proxy.

	* src/http.c (gethttp): Do not treat errno == 0 as timeout.
	(http_loop): Likewise.
	(http_loop): Cosmetic changes.

	* src/connect.c (iread): Set errno to ETIMEDOUT in case of timeout.

	* src/retr.c (get_contents): Reset errno.

	* src/ftp.c (getftp): Minor fixes.

1996-10-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b23.

	* src/ftp.c (ftp_loop_internal): Get the time after getftp.

	* src/Makefile.in (install.info): New target.
	(install): Use it.

	* src/http.c (http_loop): Fix output when doing -O.

1996-10-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c: Do not use backups.

	* src/geturl.1 (WARNING): Warn that man-page could be obsolete.

	* src/getopt.c (getopt_long): Moved to getopt.c

	* src/geturl.texi: Enhanced.

	* src/main.c (main): Use it.

	* src/recur.c (convert_all_links): New function.

	* src/utils.c (add_slist): New argument flags.

	* src/recur.c (recursive_retrieve): Update a list of downloaded URLs.
	(parse_robots): Do not chuck out empty value fields.
	(parse_robots): Make yourself welcome on empty Disallow.

	* src/version.c: Changed version to 1.4b24.

1996-10-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/geturl.texi: New file.

	* src/main.c (main): Do not print the warnings and download summary if
	opt.quiet is set.

	* src/version.c: Changed version to 1.4b23.

1996-10-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/"Released" 1.4b22.

	* src/atotm.c (atotm): Use True and False instead of TRUE and FALSE,
	to avoid redefinition warnings.

	* src/host.c (store_hostaddress): Use memcpy() to copy the address
	returned by inet_addr.

	* src/version.c: Changed version to 1.4b22.

1996-10-04  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b21.

	* src/ftp-unix.c (ftp_parse_ls): Renamed to ftp_parse_unix_ls.

	* src/ftp.c (ftp_port): Use conaddr.
	(getftp): Print the file length.
	(ftp_retrieve_list): Check the stamps of plain files only.

	* src/connect.c (closeport): Do not call shutdown().
	(conaddr): New function.

	* src/html.c (ftp_index): Made it dfp-aware.

	* src/init.c (cleanup): New name of freemem. Close opt.dfp.

	* src/ftp.c (getftp): Use opt.dfp if it is set.

	* src/ftp-unix.c (ftp_parse_ls): Recognize time in h:mm format.

	* src/ftp.c (ftp_retrieve_dirs): Fixed a bug that caused incorrect
	CWDs to be sent with recursive FTP retrievals.

1996-10-03  Hrvoje Niksic  <hniksic@srce.hr>

	* src/recur.c (parse_robots): Made it more compliant with "official"
	specifications.

	* src/http.c: New function.

	* src/ftp-unix.c (ftp_parse_ls): Added better debug output.

	* src/ftp.c (getftp): Print out the LIST in case of
	opt.print_server_response.

	* src/version.c: Changed version to 1.4b21.

1996-10-01  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b20.

	* src/README: Update.

	* src/http.c (gethttp): Preset lengths of various headers instead of
	calculating them dynamically.
	(gethttp): Check for 206 partial contents.

1996-09-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/configure.in: Set SYSTEM_GETURLRC to $libdir/geturlrc

	* src/http.c (gethttp): Send the port number in the Host: header.

1996-09-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (gethttp): Send host: header.
	(gethttp): Add the possibility of user-defined headers.
	(gethttp): Move decision about pragma: no-cache to http_loop,
	where it belongs.
	(gethttp): Pass a struct instead of enormous argument list.
	(http_loop): Use a new, fancier display format.
	(ftp_loop): Likewise.

	* src/main.c: (hangup): Turn off buffering of the new log file.

	* src/install-sh: Likewise.

	* src/config.sub: Replace with the one in autoconf-2.10

	* src/geturl.1: Update.

	* src/init.c: New options httpuser and httppasswd.

	* src/http.c: (base64_encode_line): New function.
	(gethttp): Send authentication.

	* src/connect.c (make_connection): Use store_hostaddress.

1996-09-28  Hrvoje Niksic  <hniksic@srce.hr>

	* src/host.c (store_hostaddress): New function.

	* src/NEWS: Update.

	* src/http.c (hgetrange): New function.
	(gethttp): Use ranges.

	* src/utils.c (numdigit): Accept long instead of int.

	* src/http.c (http_loop): Add restart capabilities.

	* src/ftp.c (ftp_retrieve_glob): Fixed a bug that could cause matchres
	being used uninitialized.
	(ftp_retrieve_list): Similar fix.

	* src/host.c (add_hlist): Fixed a bug that could cause cmp being used
	uninitialized.

	* src/url.c (construct_relative): New function.

	* src/recur.c (recursive_retrieve): Use it.

	* src/retr.c (convert_links): New function.

1996-09-27  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (free_urlpos): New function.

	* src/recur.c (recursive_retrieve): Adapt.

	* src/url.c (get_urls_html): Return a linked list instead of a vector.

	* src/url.c (get_urls_file): Return a linked list instead of a vector.

	* src/geturl.1: Update.

	* src/http.c (gethttp): Implement it.

	* src/init.c (setval): New option: SAVEHEADERS

	* src/ftp.c (ftp_loop_internal): Do not set restval if listing is to
	be retrieved. Lack of this test caused bugs when the connection
	was lost during listing.

	* src/retr.c (retrieve_url): Fixed a bug that caused
	coredumps. *newloc is now reset by default.
	(retrieve_url): Lift the twenty-tries limit on proxies.

	* src/version.c: Changed version to 1.4b20.

1996-09-20  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b19.

1996-09-19  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_loop_internal): Renamed from ftp_1fl_loop.
	(getftp): Changed prototype to accept ccon *.

1996-09-17  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_retrieve_list): Fixed a bug that caused setting
	incorrect values to files pointed to by symbolic links.
	(ftp_1fl_loop): Do not count listings among the downloaded URL-s.

1996-09-16  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (mkstruct): Do not prepend "./" in front of a pathname.

	* src/main.c (main): New option: --user-agent.

	* src/geturl.1: Ditto.

	* src/init.h: Ditto.

	* src/init.c (setval): Ditto.

	* src/main.c (main): Rename "server-headers" to "server-response".

	* src/ftp-unix.c (ftp_parse_ls): Check for asterisks at the end of
	executables in 'ls -F' listings.

1996-09-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (parseurl): Remove realloc() and sprintf().
	(str_url): Get rid of sprintf().

	* src/recur.c (recursive_retrieve): Enable FTP recursion through proxy
	servers.

	* src/url.h (URL_CLEANSE): Made it else-resistant.
	(USE_PROXY): New macro.

1996-09-14  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b18.

	* src/url.c: Made it reallocate space exponentially.

1996-09-14  Hrvoje Niksic  <hniksic@srce.hr>

	* src/NEWS: Update.

	* src/version.c: Changed version to 1.4b19.

1996-09-14  Drazen Kacar  <dave@fly.cc.fer.hr>

	* src/html.c (htmlfindurl): Added <frame src> and <iframe src> among
	the list of stuff to fetch.

1996-09-13  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (get_urls_html): Fixed a bug that caused SIGSEGV's with
	-Fi.

	* src/html.c (htmlfindurl): Rewrite.

	* src/http.c (gethttp): Use opt.proxy_cache.

	* src/main.c (main): Added --cache option.

	* src/ftp.c (ftp_response): Print server response if opt.print_server
	response is set.
	(getftp): Print newlines after each request if the server response
	is to be printed.
	(ftp_response): Copy the last response line to last_respline.

	* src/http.c (gethttp): Add Pragma: nocache for retried
	proxy-retrievals.

	* src/ftp.c (getftp): Use it.

	* src/retr.c (buf_discard): New function.

	* src/ftp.c (ftp_response): Use buf_readchar().
	(getftp): Flush the control connection buffer before calling
	get_contents().

	* src/retr.c (buf_readchar): New function.
	(buf_flush): New function.
	(get_contents): Use buf_readchar() instead of read(x, x, 1).
	(get_contents): Use buf_flush.

1996-09-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (hgetlen): Compute the header length the first time only.
	(hgettype): Ditto.
	(hgetlocation): Ditto.
	(hgetmodified): Ditto.

1996-09-12  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c: Incorporate changes to ftp_response.

	* src/ftp.c (ftp_response): Allocate the server response dynamically,
	as in read_whole_line and fetch_next_header.

	* src/utils.c (read_whole_line): Fixed a bug that prevented reading
	the last line if it is not \n-terminated. Also fixed a possible
	memory overflow.

	* src/http.c (fetch_next_header): Return malloc-ed string as large as
	needed.
	(gethttp): Use new fetch_next_header.

1996-09-11  Hrvoje Niksic  <hniksic@srce.hr>

	* src/sample.geturlrc: Update.

1996-09-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b17.

	* src/ftp-unix.c (ftp_parse_ls): If unable to open file, return NULL
	instead of failed assertion.

1996-09-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_loop): Ditto.

	* src/ftp.c (getftp): Open the output file as binary.

	* src/version.c: Changed version to 1.4b18.

1996-09-09  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_get_listing): Add a numbered suffix to LIST_FILENAME
	if a file of that name already exists.

1996-09-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_1fl_loop): Handler FTPPORTERR and FOPENERR correctly.

	* src/config.h.in: Define gethostbyname as Rgethostbyname when using
	Socks.

	* src/configure.in: Check for -lresolv if using Socks.

	* src/version.c: Changed version to 1.4b17.

1996-07-15  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b16.

	* src/http.c (gethttp): More intelligent check for first line of HTTP
	response.
	(gethttp): Would bug out on time-stamping.

	* src/version.c: Changed version to 1.4b16.

1996-07-11  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Released 1.4b15.

	* src/http.c (http_loop): Print \n after the loop entry, not before.

	* src/url.c (url_filename): Use ISDOT.

	* src/url.h (ISDOT): New macro.

	* src/recur.c (recursive_retrieve): Change only opt.recursive for
	following FTP.

1996-07-11  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (url_filename): Check for opt.dirstruct instead for
	opt.recursive && opt.dirstruct.

	* src/init.c (defaults): Ditto.
	(defaults): Reset dirstruct by default.
	(setval): Set opt.dirstruct whenever setting recursive.

	* src/init.h: Removed FORCEDIRHIER.

	* src/INSTALL: Added -L to socks-description.

	* src/version.c: Changed version to 1.4b15.

1996-07-11  Antonio Rosella <antonio.rosella@agip.it>

	* src/socks/geturl.cgi: Fixed version No.

	* src/socks/download-netscape.html: Ditto.

	* src/socks/download.html: Changed socks.html to download.html.

1996-07-10  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b14.

	* src/geturl.1: Update AUTHOR to include Rosella as contributor.

	* src/NEWS: Update.

	* src/socks/geturl.cgi: Simplified command creation, nuked <blink>.

	* src/socks/geturl.cgi: Wrap nutscape extensions within if $netscape.
	(cal_time): Fix == to eq.

	* src/socks/geturl.cgi: GPL-ized with permission of A. Rosella.

	* src/geturl.1 (hostname): Moved URL CONVENTIONS to the beginning.

	* src/Makefile.in: Use @VERSION@.

	* src/configure.in: Check version from version.c.

	* src/socks/geturl.cgi: Changed /pub/bin/perl to /usr/bin/perl.

	* src/socks/download.html: Created from download-netscape.html, made
	HTML-2.0 compliant.

	* src/recur.c (recursive_retrieve): Set opt.force_dir_hier when
	following FTP links from recursions.

1996-07-09  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b13.

	* src/url.c (make_backup): New function.

	* src/http.c (http_loop): Make a backup copy of the local file (using
	rename(2)) before opening it.

	* src/main.c (main): Added --backups.

	* src/host.c (ftp_getaddress): Bail out on failed mycuserid().
	(ftp_getaddress): Check for leading dot on MY_DOMAIN.
	(ftp_getaddress): Check for empty, null or (null) domain.

	* src/url.c (get_urls_html): If this_url is NULL, the base must have a
	protocol.
	(parseurl): Use has_proto.

	* src/retr.c (retrieve_url): Warn when proxy is used with more than 20
	retries.

	* src/url.c (mkstruct): Create the directory (calling mymkdir()) only
	if it is not already there.
	(has_proto): New function.
	(get_urls_html): Eliminate the remaining call to findurl -- use
	has_proto.

	* src/geturl.1: Ditto.

	* src/main.c: Change -X to -x.

	* src/url.c (url_filename): Simplify creation of filename if
	prefix_files is set.
	(url_filename): Simplify everything. And I do mean *everything*.
	(mkstruct): Add dir_prefix before hostname.
	(path_simplify): Fixed a bug that caused writing outside the path
	string in case of "." and ".." path strings.

1996-07-09  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (mymkdir): Fixed a bug that prevented mymkdir() to create
	absolute directories correctly.

	* src/version.c: Changed version to 1.4b14.

1996-07-06  Hrvoje Niksic  <hniksic@srce.hr>

	* src/init.c: Added --mirror.

	* src/main.c (main): Added -X to force saving of directory hierarchy.

	* src/ftp.c (ftp_retrieve_list): Added recursion depth counter.
	(ftp_retrieve_list): Check whether quota is exceeded.

	* src/url.c (get_urls_html): Skip leading blanks for absolute URIs.

	* src/http.c (gethttp): Use referer if present.

	* src/recur.c (recursive_retrieve): Set u->referer before calling
	retrieve_url.

	* src/url.c (newurl): Use memset to nullify the struct members.
	(freeurl): Free the referer field too.

	* src/url.h: Added referer to urlinfo.

	* src/geturl.1: Updated the manual to document some of the new features.

	* src/utils.c (numdigit): Moved from url.c.

	* src/README: Rewritten.

	* src/config.h.in: Add the support for socks.

	* src/configure.in: Add the support for socks.

	* src/url.c (url_filename): If the dir_prefix is ".", work with just
	the file name.
	(url_filename): Do not look for .n extensions if timestamping if
	turned on.

	* src/retr.c (show_progress): Skip the over-abundant restval data, and
	print the rest of it with ',' instead of '.'.

1996-07-05  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (show_progress): Changed second arg. to long (as it
	should be).
	(show_progress): Moved to retr.c.
	(get_contents): Moved to retr.c.

	* src/version.c: Change version to 1.4b13.

1996-07-05  Hrvoje Lacko <hlacko@fly.cc.fer.hr>

	* src/url.c (in_acclist): Would return after the first suffix.

1996-07-04  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: "Released" 1.4b12.

	* src/url.c (path_simplify): More kludgifications.
	(get_urls_html): Use new parameters for htmlfindurl.

	* src/html.c: Removed memorizing "parser states", since the new
	organization does not require them.

	* src/init.c (run_geturlrc): Use read_whole_line.

	* src/ftp-unix.c (ftp_parse_ls): Use read_whole_line.

	* src/recur.c (parse_robots): Use read_whole_line.

	* src/utils.c (read_whole_line): New function.

	* src/recur.c (tried_robots): Use add_slist/in_slist, *much* cleaner.

	* src/host.c (ngethostbyname): Call inet_addr just once. Yet to be
	tested on OSF and Ultrix.
	(add_hlist): New function.
	(free_hlist): New function.
	(search_host): New function.
	(search_address): New function.
	(realhost): Use search_host, search_address and add_hlist.
	(same_host): Replaced realloc() with strdupdelim(), made
	case-insensitive, fixed a memory leak.

	* src/html.c (ftp_index): Fixed tm_min and tm_sec to be tm_hour and
	tm_min, like intended.

	* src/version.c: Change user agent information to
	Geturl/version.

1996-07-03  Hrvoje Niksic  <hniksic@srce.hr>

	* src/utils.c: Renamed nmalloc.c to utils.c, .h likewise.

	* src/url.c (acceptable): Always accept directories.

	* src/ftp-unix.c (ftp_parse_ls): Support brain-damaged "ls -F"-loving
	servers by stripping trailing @ from symlinks and trailing / from
	directories.

	* src/ftp.c (ftp_loop): Debugged the "enhanced" heuristics. :-)

	* src/url.c (skip_url): Use toupper instead of UCASE.

	* src/host.c (sufmatch): Made it case-insensitive.

	* src/url.c (match_backwards_or_pattern): Fixed i == -1 to j == -1.
	(match_backwards): New function, instead of
	match_backwards_or_pattern.

	* src/recur.c (recursive_retrieve): Increased performance by
	introducing inl, which reduces number of calls to in_slist to only
	one.

	* src/ftp.c (ftp_loop): Enhanced the heuristics that decides which
	routine to use.

	* src/main.c (printhelp): Removed the warranty stuff.

1996-07-02  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (add_slist): Simplify.
	(match_backwards_or_pattern): New function.
	(in_acclist): Use match_backwards_or_pattern.
	(matches): Remove.

1996-06-30  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (ftp_loop): Call ftp_index on empty file names, if not
	recursive.

	* src/html.c (ftp_index): Fixed to work. Beautified the output.

	* src/ftp.c (ftp_retrieve_glob): Another argument to control whether
	globbing is to be used.
	(ftp_retrieve_list): Compare the time-stamps of local and remote
	files to determine whether to download.

1996-06-29  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (rel_constr): New function.

	* src/retr.c (retrieve_from_file): Check for text/html before
	retrieving recursively.

	* src/main.c (main): Check whether the file is HTML before going into
	recursive HTML retrieving.

	* src/ftp.c (ftp_retrieve_list): Manage directories.
	(ftp_retrieve_glob): Pass all the file-types to ftp_retrieve_list.
	(ftp_1fl_loop): Fixed a bug that caused con->com to be incorrectly
	initialized, causing bugchecks in getftp to fail.

	* src/configure.in: Check for symlink.

	* src/ftp.c (ftp_retrieve_list): Added support for symlinks.

	* src/version.c: "Released" 1.4b10.

	* src/atotm.c (atotm): Redeclared as time_t.

	* src/init.c: New variable "timestamping".

	* src/main.c (main): New option 'N'.

	* src/http.c (hgetlocation): Case-insensitive match.
	(hgetmodified): New function.
	(http_loop): Implement time-stamping.

1996-06-28  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: Changed version to 1.4b10

	* src/atotm.c: New file, from phttpd.

	* src/options.h (struct options): New parameter timestamping.

	* src/version.c: 1.4b9 "released".

	* src/recur.c (recursive_retrieve): Used linked list (ulist) for
	faster storing of URLs.

	* src/url.c (get_urls_html): Removed the old kludge with comparing the
	outputs of htmlfindurl and findurl.
	(get_urls_html): Added better protocol support here.
	(create_hash): Removed, as well as add_hash and in_hash.
	(addslist): New function.
	(in_slist): ditto

	* src/version.c: Released 1.4b8, changed version to b9.

1996-06-27  Hrvoje Niksic  <hniksic@srce.hr>

	* src/ftp.c (freefileinfo): New function.
	(delelement): New function.

	* src/everywhere: GPL!

	* src/ftp.c (ftp_loop): Use ccon.
	(ftp_retrieve_glob): Likewise.

	* src/ftp.h: Define ccon, to define status of control connection.

	* src/ftp.c (ftp_get_listing): New function.
	(ftp_retrieve_more): New function.
	(ftp_retrieve_glob): New function.

1996-06-25  Hrvoje Niksic  <hniksic@srce.hr>

	* src/configure.in: Removed the search for cuserid().

	* src/init.c (getmode): Renamed to getperms.

1996-06-24  Hrvoje Niksic  <hniksic@srce.hr>

	* src/version.c: New version.

	* src/main.c (hangup): New function, that handles hangup. Hangup
	signal now causes geturl to stop writing on stdout, and to write
	to a log file.

	* src/ftp.c (getftp): "Released" 1.4b7.

	* src/html.c (htmlfindurl): Ignore everything inside <head>...</head>.
	(ftp_index): Use fileinfo/urlinfo.

	* src/ftp-unix.c (ftp_parse_ls): New function.
	(symperms): New function.

	* src/ftp.c (ftp_1fl_loop): New function, to handle 1-file loops.

	* src/retr.c (retrieve_url): Added FTP support.

1996-06-23  Hrvoje Niksic  <hniksic@srce.hr>

	* src/geturl.h: Removed NOTFTP2HTML enum.
	Added DO_LOGIN, DO_CWD and DO_LIST. LIST_ONLY is obsolete.

	* src/ftp.c (getftp): Resynched with urlinfo.
	(getftp): Removed HMTL-ization of index.html from getftp.

	* src/version.c: 1.4b6 "released".

	* src/options.h (options): New struct, to keep options in.

	* src/http.c (http_loop,gethttp): Synched with proxy.

	* src/retr.c (retrieve_url): Implemented proxy retrieval.

	* src/main.c (main): Use retrieve_from_file.

1996-06-22  Hrvoje Niksic  <hniksic@srce.hr>

	* src/retr.c (retrieve_from_file): New function.

	* src/url.c (parseurl): Modified to return URLOK if all OK. Protocol
	can be found in u->proto.

	* src/ftp.c (ftp_response): Fixed to accept multi-line responses as
	per RFC 959.

	* src/recr.c (recursive_retrieve): Take newloc from retrieve_url.

	* src/url.c (mymkdir): Removed the file of the same name, if one
	exists.
	(isfile): New function.
	(mkstruct): Fixed the '/' glitches.
	(path_simplify): Hacked to treat something/.. correctly.

1996-06-21  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (gethttp): Close the socket after error in headers.
	(http_loop): HEOF no longer a fatal header.

	* src/loop.c (retrieve_url): When dt is NULL, do not modify it. This
	simplifies the syntax of calling retrieve_url.

	* src/recr.c (recursive_retrieve): Modified to use get_urls_html.

	* src/url.c (get_urls_file): New function.
	(get_urls_html): New function.

	* src/recr.c (recursive_retrieve): Patched up to conform to the
	standards.

	* src/http.c (gethttp): Synched with the rest...
	(gethttp): Treat only CONREFUSED specially, with connection
	errors.

	* src/init.c,geturl.1,http.c (http_loop): Removed kill_error.

1996-06-20  Hrvoje Niksic  <hniksic@srce.hr>

	* src/http.c (http_loop): New function.

	* src/loop.c: Removed *lots* of stuff from retrieve_url.

	* src/url.c (parseurl): Changed to work with urlinfo. Integrated
	username finding and path parsing.
	(newurl): New function.
	(freeurl): New function.
	(mkstruct): Removed the old bogosities, made it urlinfo-compliant.
	(url_filename): Likewise.
	(path_simplify): Accept relative paths too.
	(opt_url): Made urlinfo-compliant, removed bogosities.
	(path_simplify): Expanded to accept relative paths.
	(str_url): A replacement for hide_url
	(decode_string): Fixed a bug that caused malfunctioning when
	encountering an illegal %.. combination.
	(opt_url): Removed the argument. Dot-optimizations are now default.

	* src/nmalloc.c (strdupdelim): New function.

	* src/url.h: Added the urlinfo structure

1996-06-19  Hrvoje Niksic  <hniksic@srce.hr>

	* src/url.c (hide_url): Thrown out the protocol assertion. Do not
	change the URL if the protocol if not recognized.
	(findurl): Put continue instead of break.

1996-06-18  Hrvoje Niksic  <hniksic@srce.hr>

	* src/sample.geturlrc: Changed the defaults to be commented out and
	harmless (previous defaults caused pains if copied to
	~/.geturlrc).

	* src/http.c (gethttp): Print the HTTP request in debug mode.

	* src/connect.c (iread): Added EINTR check loop to select-ing
	too. EINTR is now correctly handled with select().

	* src/TODO: new file

1996-05-07  Hrvoje Niksic  <hniksic@srce.hr>

	* src/host.c (same_host): Made the function a little bit more
	intelligent regarding diversified URL syntaxes.

	* src/url.c (skip_url): Spaces are now skipped after URL:

	* src/Released 1.3.1 with the patch to prevent crashing when sending
	NULL to robot* functions and the patch to compile "out of the box"
	on AIX.

	* src/recr.c (recursive_retrieve): Added checking whether this_url is
	NULL when calling the robot functions.

	* src/ChangeLog: New file.
