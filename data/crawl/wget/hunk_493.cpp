+# SOME DESCRIPTIVE TITLE.
+# Copyright (C) YEAR Free Software Foundation, Inc.
+# This file is distributed under the same license as the PACKAGE package.
+# FIRST AUTHOR <EMAIL@ADDRESS>, YEAR.
+#
+#, fuzzy
+msgid ""
+msgstr ""
+"Project-Id-Version: PACKAGE VERSION\n"
+"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
+"POT-Creation-Date: 2009-09-02 01:15-0700\n"
+"PO-Revision-Date: YEAR-MO-DA HO:MI+ZONE\n"
+"Last-Translator: FULL NAME <EMAIL@ADDRESS>\n"
+"Language-Team: LANGUAGE <LL@li.org>\n"
+"MIME-Version: 1.0\n"
+"Content-Type: text/plain; charset=CHARSET\n"
+"Content-Transfer-Encoding: 8bit\n"
+"Plural-Forms: nplurals=INTEGER; plural=EXPRESSION;\n"
+
+#: lib/error.c:125
+msgid "Unknown system error"
+msgstr ""
+
+#: lib/getopt.c:526 lib/getopt.c:542
+#, c-format
+msgid "%s: option `%s' is ambiguous\n"
+msgstr ""
+
+#: lib/getopt.c:575 lib/getopt.c:579
+#, c-format
+msgid "%s: option `--%s' doesn't allow an argument\n"
+msgstr ""
+
+#: lib/getopt.c:588 lib/getopt.c:593
+#, c-format
+msgid "%s: option `%c%s' doesn't allow an argument\n"
+msgstr ""
+
+#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
+#, c-format
+msgid "%s: option `%s' requires an argument\n"
+msgstr ""
+
+#: lib/getopt.c:693 lib/getopt.c:696
+#, c-format
+msgid "%s: unrecognized option `--%s'\n"
+msgstr ""
+
+#: lib/getopt.c:704 lib/getopt.c:707
+#, c-format
+msgid "%s: unrecognized option `%c%s'\n"
+msgstr ""
+
+#: lib/getopt.c:759 lib/getopt.c:762
+#, c-format
+msgid "%s: illegal option -- %c\n"
+msgstr ""
+
+#: lib/getopt.c:768 lib/getopt.c:771
+#, c-format
+msgid "%s: invalid option -- %c\n"
+msgstr ""
+
+#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
+#, c-format
+msgid "%s: option requires an argument -- %c\n"
+msgstr ""
+
+#: lib/getopt.c:892 lib/getopt.c:908
+#, c-format
+msgid "%s: option `-W %s' is ambiguous\n"
+msgstr ""
+
+#: lib/getopt.c:932 lib/getopt.c:950
+#, c-format
+msgid "%s: option `-W %s' doesn't allow an argument\n"
+msgstr ""
+
+#. TRANSLATORS:
+#. Get translations for open and closing quotation marks.
+#.
+#. The message catalog should translate "`" to a left
+#. quotation mark suitable for the locale, and similarly for
+#. "'".  If the catalog has no translation,
+#. locale_quoting_style quotes `like this', and
+#. clocale_quoting_style quotes "like this".
+#.
+#. For example, an American English Unicode locale should
+#. translate "`" to U+201C (LEFT DOUBLE QUOTATION MARK), and
+#. should translate "'" to U+201D (RIGHT DOUBLE QUOTATION
+#. MARK).  A British English Unicode locale should instead
+#. translate these to U+2018 (LEFT SINGLE QUOTATION MARK) and
+#. U+2019 (RIGHT SINGLE QUOTATION MARK), respectively.
+#.
+#. If you don't know what to put here, please see
+#. <http://en.wikipedia.org/wiki/Quotation_mark#Glyphs>
+#. and use glyphs suitable for your language.
+#: lib/quotearg.c:249
+msgid "`"
+msgstr ""
+
+#: lib/quotearg.c:250
+msgid "'"
+msgstr ""
+
+#: lib/xalloc-die.c:34
+msgid "memory exhausted"
+msgstr ""
+
+#: src/connect.c:207
+#, c-format
+msgid "%s: unable to resolve bind address %s; disabling bind.\n"
+msgstr ""
+
+#: src/connect.c:291
+#, c-format
+msgid "Connecting to %s|%s|:%d... "
+msgstr ""
+
+#: src/connect.c:298
+#, c-format
+msgid "Connecting to %s:%d... "
+msgstr ""
+
+#: src/connect.c:358
+msgid "connected.\n"
+msgstr ""
+
+#: src/connect.c:370 src/host.c:780 src/host.c:809
+#, c-format
+msgid "failed: %s.\n"
+msgstr ""
+
+#: src/connect.c:394 src/http.c:1674
+#, c-format
+msgid "%s: unable to resolve host address %s\n"
+msgstr ""
+
+#: src/convert.c:185
+#, c-format
+msgid "Converted %d files in %s seconds.\n"
+msgstr ""
+
+#: src/convert.c:213
+#, c-format
+msgid "Converting %s... "
+msgstr ""
+
+#: src/convert.c:226
+msgid "nothing to do.\n"
+msgstr ""
+
+#: src/convert.c:234 src/convert.c:258
+#, c-format
+msgid "Cannot convert links in %s: %s\n"
+msgstr ""
+
+#: src/convert.c:249
+#, c-format
+msgid "Unable to delete %s: %s\n"
+msgstr ""
+
+#: src/convert.c:464
+#, c-format
+msgid "Cannot back up %s as %s: %s\n"
+msgstr ""
+
+#: src/cookies.c:443
+#, c-format
+msgid "Syntax error in Set-Cookie: %s at position %d.\n"
+msgstr ""
+
+#: src/cookies.c:686
+#, c-format
+msgid "Cookie coming from %s attempted to set domain to %s\n"
+msgstr ""
+
+#: src/cookies.c:1134 src/cookies.c:1252
+#, c-format
+msgid "Cannot open cookies file %s: %s\n"
+msgstr ""
+
+#: src/cookies.c:1289
+#, c-format
+msgid "Error writing to %s: %s\n"
+msgstr ""
+
+#: src/cookies.c:1292
+#, c-format
+msgid "Error closing %s: %s\n"
+msgstr ""
+
+#: src/ftp-ls.c:1065
+msgid "Unsupported listing type, trying Unix listing parser.\n"
+msgstr ""
+
+#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
+#, c-format
+msgid "Index of /%s on %s:%d"
+msgstr ""
+
+#: src/ftp-ls.c:1143
+#, c-format
+msgid "time unknown       "
+msgstr ""
+
+#: src/ftp-ls.c:1147
+#, c-format
+msgid "File        "
+msgstr ""
+
+#: src/ftp-ls.c:1150
+#, c-format
+msgid "Directory   "
+msgstr ""
+
+#: src/ftp-ls.c:1153
+#, c-format
+msgid "Link        "
+msgstr ""
+
+#: src/ftp-ls.c:1156
+#, c-format
+msgid "Not sure    "
+msgstr ""
+
+#: src/ftp-ls.c:1179
+#, c-format
+msgid " (%s bytes)"
+msgstr ""
+
+#: src/ftp.c:221
+#, c-format
+msgid "Length: %s"
+msgstr ""
+
+#: src/ftp.c:227 src/http.c:2253
+#, c-format
+msgid ", %s (%s) remaining"
+msgstr ""
+
+#: src/ftp.c:231 src/http.c:2257
+#, c-format
+msgid ", %s remaining"
+msgstr ""
+
+#: src/ftp.c:234
+msgid " (unauthoritative)\n"
+msgstr ""
+
+#: src/ftp.c:312
+#, c-format
+msgid "Logging in as %s ... "
+msgstr ""
+
+#: src/ftp.c:326 src/ftp.c:372 src/ftp.c:401 src/ftp.c:466 src/ftp.c:696
+#: src/ftp.c:749 src/ftp.c:778 src/ftp.c:835 src/ftp.c:896 src/ftp.c:988
+#: src/ftp.c:1035
+msgid "Error in server response, closing control connection.\n"
+msgstr ""
+
+#: src/ftp.c:333
+msgid "Error in server greeting.\n"
+msgstr ""
+
+#: src/ftp.c:340 src/ftp.c:474 src/ftp.c:704 src/ftp.c:786 src/ftp.c:845
+#: src/ftp.c:906 src/ftp.c:998 src/ftp.c:1045
+msgid "Write failed, closing control connection.\n"
+msgstr ""
+
+#: src/ftp.c:346
+msgid "The server refuses login.\n"
+msgstr ""
+
+#: src/ftp.c:352
+msgid "Login incorrect.\n"
+msgstr ""
+
+#: src/ftp.c:358
+msgid "Logged in!\n"
+msgstr ""
+
+#: src/ftp.c:380
+msgid "Server error, can't determine system type.\n"
+msgstr ""
+
+#: src/ftp.c:389 src/ftp.c:822 src/ftp.c:879 src/ftp.c:922
+msgid "done.    "
+msgstr ""
+
+#: src/ftp.c:454 src/ftp.c:721 src/ftp.c:761 src/ftp.c:1018 src/ftp.c:1064
+msgid "done.\n"
+msgstr ""
+
+#: src/ftp.c:481
+#, c-format
+msgid "Unknown type `%c', closing control connection.\n"
+msgstr ""
+
+#: src/ftp.c:493
+msgid "done.  "
+msgstr ""
+
+#: src/ftp.c:499
+msgid "==> CWD not needed.\n"
+msgstr ""
+
+#: src/ftp.c:710
+#, c-format
+msgid ""
+"No such directory %s.\n"
+"\n"
+msgstr ""
+
+#: src/ftp.c:731
+msgid "==> CWD not required.\n"
+msgstr ""
+
+#: src/ftp.c:792
+msgid "Cannot initiate PASV transfer.\n"
+msgstr ""
+
+#: src/ftp.c:796
+msgid "Cannot parse PASV response.\n"
+msgstr ""
+
+#: src/ftp.c:813
+#, c-format
+msgid "couldn't connect to %s port %d: %s\n"
+msgstr ""
+
+#: src/ftp.c:861
+#, c-format
+msgid "Bind error (%s).\n"
+msgstr ""
+
+#: src/ftp.c:867
+msgid "Invalid PORT.\n"
+msgstr ""
+
+#: src/ftp.c:913
+msgid ""
+"\n"
+"REST failed, starting from scratch.\n"
+msgstr ""
+
+#: src/ftp.c:954
+#, c-format
+msgid "File %s exists.\n"
+msgstr ""
+
+#: src/ftp.c:960
+#, c-format
+msgid "No such file %s.\n"
+msgstr ""
+
+#: src/ftp.c:1006
+#, c-format
+msgid ""
+"No such file %s.\n"
+"\n"
+msgstr ""
+
+#: src/ftp.c:1053
+#, c-format
+msgid ""
+"No such file or directory %s.\n"
+"\n"
+msgstr ""
+
+#: src/ftp.c:1184 src/http.c:2344
+#, c-format
+msgid "%s has sprung into existence.\n"
+msgstr ""
+
+#: src/ftp.c:1236
+#, c-format
+msgid "%s: %s, closing control connection.\n"
+msgstr ""
+
+#: src/ftp.c:1245
+#, c-format
+msgid "%s (%s) - Data connection: %s; "
+msgstr ""
+
+#: src/ftp.c:1260
+msgid "Control connection closed.\n"
+msgstr ""
+
+#: src/ftp.c:1278
+msgid "Data transfer aborted.\n"
+msgstr ""
+
+#: src/ftp.c:1378
+#, c-format
+msgid "File %s already there; not retrieving.\n"
+msgstr ""
+
+#: src/ftp.c:1444 src/http.c:2529
+#, c-format
+msgid "(try:%2d)"
+msgstr ""
+
+#: src/ftp.c:1519 src/http.c:2873
+#, c-format
+msgid ""
+"%s (%s) - written to stdout %s[%s]\n"
+"\n"
+msgstr ""
+
+#: src/ftp.c:1520 src/http.c:2874
+#, c-format
+msgid ""
+"%s (%s) - %s saved [%s]\n"
+"\n"
+msgstr ""
+
+#: src/ftp.c:1565 src/main.c:1299 src/recur.c:438 src/retr.c:990
+#, c-format
+msgid "Removing %s.\n"
+msgstr ""
+
+#: src/ftp.c:1607
+#, c-format
+msgid "Using %s as listing tmp file.\n"
+msgstr ""
+
+#: src/ftp.c:1624
+#, c-format
+msgid "Removed %s.\n"
+msgstr ""
+
+#: src/ftp.c:1661
+#, c-format
+msgid "Recursion depth %d exceeded max. depth %d.\n"
+msgstr ""
+
+#: src/ftp.c:1731
+#, c-format
+msgid "Remote file no newer than local file %s -- not retrieving.\n"
+msgstr ""
+
+#: src/ftp.c:1738
+#, c-format
+msgid ""
+"Remote file is newer than local file %s -- retrieving.\n"
+"\n"
+msgstr ""
+
+#: src/ftp.c:1745
+#, c-format
+msgid ""
+"The sizes do not match (local %s) -- retrieving.\n"
+"\n"
+msgstr ""
+
+#: src/ftp.c:1763
+msgid "Invalid name of the symlink, skipping.\n"
+msgstr ""
+
+#: src/ftp.c:1780
+#, c-format
+msgid ""
+"Already have correct symlink %s -> %s\n"
+"\n"
+msgstr ""
+
+#: src/ftp.c:1789
+#, c-format
+msgid "Creating symlink %s -> %s\n"
+msgstr ""
+
+#: src/ftp.c:1799
+#, c-format
+msgid "Symlinks not supported, skipping symlink %s.\n"
+msgstr ""
+
+#: src/ftp.c:1811
+#, c-format
+msgid "Skipping directory %s.\n"
+msgstr ""
+
+#: src/ftp.c:1820
+#, c-format
+msgid "%s: unknown/unsupported file type.\n"
+msgstr ""
+
+#: src/ftp.c:1857
+#, c-format
+msgid "%s: corrupt time-stamp.\n"
+msgstr ""
+
+#: src/ftp.c:1879
+#, c-format
+msgid "Will not retrieve dirs since depth is %d (max %d).\n"
+msgstr ""
+
+#: src/ftp.c:1929
+#, c-format
+msgid "Not descending to %s as it is excluded/not-included.\n"
+msgstr ""
+
+#: src/ftp.c:1995 src/ftp.c:2009
+#, c-format
+msgid "Rejecting %s.\n"
+msgstr ""
+
+#: src/ftp.c:2032
+#, c-format
+msgid "Error matching %s against %s: %s\n"
+msgstr ""
+
+#: src/ftp.c:2074
+#, c-format
+msgid "No matches on pattern %s.\n"
+msgstr ""
+
+#: src/ftp.c:2145
+#, c-format
+msgid "Wrote HTML-ized index to %s [%s].\n"
+msgstr ""
+
+#: src/ftp.c:2150
+#, c-format
+msgid "Wrote HTML-ized index to %s.\n"
+msgstr ""
+
+#: src/gnutls.c:219 src/openssl.c:495
+msgid "ERROR"
+msgstr ""
+
+#: src/gnutls.c:219 src/openssl.c:495
+msgid "WARNING"
+msgstr ""
+
+#: src/gnutls.c:225 src/openssl.c:504
+#, c-format
+msgid "%s: No certificate presented by %s.\n"
+msgstr ""
+
+#: src/gnutls.c:233
+#, c-format
+msgid "%s: The certificate of %s is not trusted.\n"
+msgstr ""
+
+#: src/gnutls.c:239
+#, c-format
+msgid "%s: The certificate of %s hasn't got a known issuer.\n"
+msgstr ""
+
+#: src/gnutls.c:245
+#, c-format
+msgid "%s: The certificate of %s has been revoked.\n"
+msgstr ""
+
+#: src/gnutls.c:259
+#, c-format
+msgid "Error initializing X509 certificate: %s\n"
+msgstr ""
+
+#: src/gnutls.c:268
+msgid "No certificate found\n"
+msgstr ""
+
+#: src/gnutls.c:275
+#, c-format
+msgid "Error parsing certificate: %s\n"
+msgstr ""
+
+#: src/gnutls.c:282
+msgid "The certificate has not yet been activated\n"
+msgstr ""
+
+#: src/gnutls.c:287
+msgid "The certificate has expired\n"
+msgstr ""
+
+#: src/gnutls.c:293
+#, c-format
+msgid "The certificate's owner does not match hostname %s\n"
+msgstr ""
+
+#: src/host.c:358
+msgid "Unknown host"
+msgstr ""
+
+#: src/host.c:362
+msgid "Temporary failure in name resolution"
+msgstr ""
+
+#: src/host.c:364
+msgid "Unknown error"
+msgstr ""
+
+#: src/host.c:737
+#, c-format
+msgid "Resolving %s... "
+msgstr ""
+
+#: src/host.c:789
+msgid "failed: No IPv4/IPv6 addresses for host.\n"
+msgstr ""
+
+#: src/host.c:812
+msgid "failed: timed out.\n"
+msgstr ""
+
+#: src/html-url.c:286
+#, c-format
+msgid "%s: Cannot resolve incomplete link %s.\n"
+msgstr ""
+
+#: src/html-url.c:772
+#, c-format
+msgid "%s: Invalid URL %s: %s\n"
+msgstr ""
+
+#: src/http.c:377
+#, c-format
+msgid "Failed writing HTTP request: %s.\n"
+msgstr ""
+
+#: src/http.c:754
+msgid "No headers, assuming HTTP/0.9"
+msgstr ""
+
+#: src/http.c:1456
+msgid "Disabling SSL due to encountered errors.\n"
+msgstr ""
+
+#: src/http.c:1576
+#, c-format
+msgid "POST data file %s missing: %s\n"
+msgstr ""
+
+#: src/http.c:1660
+#, c-format
+msgid "Reusing existing connection to %s:%d.\n"
+msgstr ""
+
+#: src/http.c:1729
+#, c-format
+msgid "Failed reading proxy response: %s\n"
+msgstr ""
+
+#: src/http.c:1750
+#, c-format
+msgid "Proxy tunneling failed: %s"
+msgstr ""
+
+#: src/http.c:1800
+#, c-format
+msgid "%s request sent, awaiting response... "
+msgstr ""
+
+#: src/http.c:1811
+msgid "No data received.\n"
+msgstr ""
+
+#: src/http.c:1818
+#, c-format
+msgid "Read error (%s) in headers.\n"
+msgstr ""
+
+#: src/http.c:1932
+msgid "Unknown authentication scheme.\n"
+msgstr ""
+
+#: src/http.c:1966
+msgid "Authorization failed.\n"
+msgstr ""
+
+#: src/http.c:2004 src/http.c:2471
+#, c-format
+msgid ""
+"File %s already there; not retrieving.\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2093
+msgid "Malformed status line"
+msgstr ""
+
+#: src/http.c:2095
+msgid "(no description)"
+msgstr ""
+
+#: src/http.c:2154
+#, c-format
+msgid "Location: %s%s\n"
+msgstr ""
+
+#: src/http.c:2155 src/http.c:2263
+msgid "unspecified"
+msgstr ""
+
+#: src/http.c:2156
+msgid " [following]"
+msgstr ""
+
+#: src/http.c:2208
+msgid ""
+"\n"
+"    The file is already fully retrieved; nothing to do.\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2243
+msgid "Length: "
+msgstr ""
+
+#: src/http.c:2263
+msgid "ignored"
+msgstr ""
+
+#: src/http.c:2365
+#, c-format
+msgid "Saving to: %s\n"
+msgstr ""
+
+#: src/http.c:2447
+msgid "Warning: wildcards not supported in HTTP.\n"
+msgstr ""
+
+#: src/http.c:2518
+msgid "Spider mode enabled. Check if remote file exists.\n"
+msgstr ""
+
+#: src/http.c:2603
+#, c-format
+msgid "Cannot write to %s (%s).\n"
+msgstr ""
+
+#: src/http.c:2612
+msgid "Unable to establish SSL connection.\n"
+msgstr ""
+
+#: src/http.c:2620
+#, c-format
+msgid "ERROR: Redirection (%d) without location.\n"
+msgstr ""
+
+#: src/http.c:2668
+msgid "Remote file does not exist -- broken link!!!\n"
+msgstr ""
+
+#: src/http.c:2673
+#, c-format
+msgid "%s ERROR %d: %s.\n"
+msgstr ""
+
+#: src/http.c:2690
+msgid "Last-modified header missing -- time-stamps turned off.\n"
+msgstr ""
+
+#: src/http.c:2698
+msgid "Last-modified header invalid -- time-stamp ignored.\n"
+msgstr ""
+
+#: src/http.c:2728
+#, c-format
+msgid ""
+"Server file no newer than local file %s -- not retrieving.\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2736
+#, c-format
+msgid "The sizes do not match (local %s) -- retrieving.\n"
+msgstr ""
+
+#: src/http.c:2743
+msgid "Remote file is newer, retrieving.\n"
+msgstr ""
+
+#: src/http.c:2760
+msgid ""
+"Remote file exists and could contain links to other resources -- "
+"retrieving.\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2766
+msgid ""
+"Remote file exists but does not contain any link -- not retrieving.\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2775
+msgid ""
+"Remote file exists and could contain further links,\n"
+"but recursion is disabled -- not retrieving.\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2781
+msgid ""
+"Remote file exists.\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2790
+#, c-format
+msgid "%s URL: %s %2d %s\n"
+msgstr ""
+
+#: src/http.c:2837
+#, c-format
+msgid ""
+"%s (%s) - written to stdout %s[%s/%s]\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2838
+#, c-format
+msgid ""
+"%s (%s) - %s saved [%s/%s]\n"
+"\n"
+msgstr ""
+
+#: src/http.c:2899
+#, c-format
+msgid "%s (%s) - Connection closed at byte %s. "
+msgstr ""
+
+#: src/http.c:2922
+#, c-format
+msgid "%s (%s) - Read error at byte %s (%s)."
+msgstr ""
+
+#: src/http.c:2931
+#, c-format
+msgid "%s (%s) - Read error at byte %s/%s (%s). "
+msgstr ""
+
+#: src/init.c:406
+#, c-format
+msgid "%s: WGETRC points to %s, which doesn't exist.\n"
+msgstr ""
+
+#: src/init.c:510 src/netrc.c:282
+#, c-format
+msgid "%s: Cannot read %s (%s).\n"
+msgstr ""
+
+#: src/init.c:527
+#, c-format
+msgid "%s: Error in %s at line %d.\n"
+msgstr ""
+
+#: src/init.c:533
+#, c-format
+msgid "%s: Syntax error in %s at line %d.\n"
+msgstr ""
+
+#: src/init.c:538
+#, c-format
+msgid "%s: Unknown command %s in %s at line %d.\n"
+msgstr ""
+
+#: src/init.c:587
+#, c-format
+msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
+msgstr ""
+
+#: src/init.c:777
+#, c-format
+msgid "%s: Invalid --execute command %s\n"
+msgstr ""
+
+#: src/init.c:822
+#, c-format
+msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
+msgstr ""
+
+#: src/init.c:839
+#, c-format
+msgid "%s: %s: Invalid number %s.\n"
+msgstr ""
+
+#: src/init.c:1044 src/init.c:1063
+#, c-format
+msgid "%s: %s: Invalid byte value %s\n"
+msgstr ""
+
+#: src/init.c:1088
+#, c-format
+msgid "%s: %s: Invalid time period %s\n"
+msgstr ""
+
+#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
+#, c-format
+msgid "%s: %s: Invalid value %s.\n"
+msgstr ""
+
+#: src/init.c:1179
+#, c-format
+msgid "%s: %s: Invalid header %s.\n"
+msgstr ""
+
+#: src/init.c:1245
+#, c-format
+msgid "%s: %s: Invalid progress type %s.\n"
+msgstr ""
+
+#: src/init.c:1306
+#, c-format
+msgid ""
+"%s: %s: Invalid restriction %s,\n"
+"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
+msgstr ""
+
+#: src/iri.c:104
+#, c-format
+msgid "Encoding %s isn't valid\n"
+msgstr ""
+
+#: src/iri.c:132
+msgid "locale_to_utf8: locale is unset\n"
+msgstr ""
+
+#: src/iri.c:142
+#, c-format
+msgid "Conversion from %s to %s isn't supported\n"
+msgstr ""
+
+#: src/iri.c:183
+msgid "Incomplete or invalid multibyte sequence encountered\n"
+msgstr ""
+
+#: src/iri.c:208
+#, c-format
+msgid "Unhandled errno %d\n"
+msgstr ""
+
+#: src/iri.c:237
+#, c-format
+msgid "idn_encode failed (%d): %s\n"
+msgstr ""
+
+#: src/iri.c:256
+#, c-format
+msgid "idn_decode failed (%d): %s\n"
+msgstr ""
+
+#: src/log.c:809
+#, c-format
+msgid ""
+"\n"
+"%s received, redirecting output to %s.\n"
+msgstr ""
+
+#: src/log.c:819
+#, c-format
+msgid ""
+"\n"
+"%s received.\n"
+msgstr ""
+
+#: src/log.c:820
+#, c-format
+msgid "%s: %s; disabling logging.\n"
+msgstr ""
+
+#: src/main.c:386
+#, c-format
+msgid "Usage: %s [OPTION]... [URL]...\n"
+msgstr ""
+
+#: src/main.c:398
+msgid ""
+"Mandatory arguments to long options are mandatory for short options too.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:400
+msgid "Startup:\n"
+msgstr ""
+
+#: src/main.c:402
+msgid "  -V,  --version           display the version of Wget and exit.\n"
+msgstr ""
+
+#: src/main.c:404
+msgid "  -h,  --help              print this help.\n"
+msgstr ""
+
+#: src/main.c:406
+msgid "  -b,  --background        go to background after startup.\n"
+msgstr ""
+
+#: src/main.c:408
+msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
+msgstr ""
+
+#: src/main.c:412
+msgid "Logging and input file:\n"
+msgstr ""
+
+#: src/main.c:414
+msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
+msgstr ""
+
+#: src/main.c:416
+msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
+msgstr ""
+
+#: src/main.c:419
+msgid "  -d,  --debug               print lots of debugging information.\n"
+msgstr ""
+
+#: src/main.c:423
+msgid "       --wdebug              print Watt-32 debug output.\n"
+msgstr ""
+
+#: src/main.c:426
+msgid "  -q,  --quiet               quiet (no output).\n"
+msgstr ""
+
+#: src/main.c:428
+msgid "  -v,  --verbose             be verbose (this is the default).\n"
+msgstr ""
+
+#: src/main.c:430
+msgid ""
+"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
+msgstr ""
+
+#: src/main.c:432
+msgid ""
+"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
+msgstr ""
+
+#: src/main.c:434
+msgid "  -F,  --force-html          treat input file as HTML.\n"
+msgstr ""
+
+#: src/main.c:436
+msgid ""
+"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
+"                             relative to URL.\n"
+msgstr ""
+
+#: src/main.c:441
+msgid "Download:\n"
+msgstr ""
+
+#: src/main.c:443
+msgid ""
+"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
+"unlimits).\n"
+msgstr ""
+
+#: src/main.c:445
+msgid "       --retry-connrefused       retry even if connection is refused.\n"
+msgstr ""
+
+#: src/main.c:447
+msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
+msgstr ""
+
+#: src/main.c:449
+msgid ""
+"  -nc, --no-clobber              skip downloads that would download to\n"
+"                                 existing files.\n"
+msgstr ""
+
+#: src/main.c:452
+msgid ""
+"  -c,  --continue                resume getting a partially-downloaded "
+"file.\n"
+msgstr ""
+
+#: src/main.c:454
+msgid "       --progress=TYPE           select progress gauge type.\n"
+msgstr ""
+
+#: src/main.c:456
+msgid ""
+"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
+"                                 local.\n"
+msgstr ""
+
+#: src/main.c:459
+msgid "  -S,  --server-response         print server response.\n"
+msgstr ""
+
+#: src/main.c:461
+msgid "       --spider                  don't download anything.\n"
+msgstr ""
+
+#: src/main.c:463
+msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
+msgstr ""
+
+#: src/main.c:465
+msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
+msgstr ""
+
+#: src/main.c:467
+msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
+msgstr ""
+
+#: src/main.c:469
+msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
+msgstr ""
+
+#: src/main.c:471
+msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
+msgstr ""
+
+#: src/main.c:473
+msgid ""
+"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
+"retrieval.\n"
+msgstr ""
+
+#: src/main.c:475
+msgid ""
+"       --random-wait             wait from 0...2*WAIT secs between "
+"retrievals.\n"
+msgstr ""
+
+#: src/main.c:477
+msgid "       --no-proxy                explicitly turn off proxy.\n"
+msgstr ""
+
+#: src/main.c:479
+msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
+msgstr ""
+
+#: src/main.c:481
+msgid ""
+"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
+"host.\n"
+msgstr ""
+
+#: src/main.c:483
+msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
+msgstr ""
+
+#: src/main.c:485
+msgid "       --no-dns-cache            disable caching DNS lookups.\n"
+msgstr ""
+
+#: src/main.c:487
+msgid ""
+"       --restrict-file-names=OS  restrict chars in file names to ones OS "
+"allows.\n"
+msgstr ""
+
+#: src/main.c:489
+msgid ""
+"       --ignore-case             ignore case when matching files/"
+"directories.\n"
+msgstr ""
+
+#: src/main.c:492
+msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
+msgstr ""
+
+#: src/main.c:494
+msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
+msgstr ""
+
+#: src/main.c:496
+msgid ""
+"       --prefer-family=FAMILY    connect first to addresses of specified "
+"family,\n"
+"                                 one of IPv6, IPv4, or none.\n"
+msgstr ""
+
+#: src/main.c:500
+msgid "       --user=USER               set both ftp and http user to USER.\n"
+msgstr ""
+
+#: src/main.c:502
+msgid ""
+"       --password=PASS           set both ftp and http password to PASS.\n"
+msgstr ""
+
+#: src/main.c:504
+msgid "       --ask-password            prompt for passwords.\n"
+msgstr ""
+
+#: src/main.c:506
+msgid "       --no-iri                  turn off IRI support.\n"
+msgstr ""
+
+#: src/main.c:508
+msgid ""
+"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
+msgstr ""
+
+#: src/main.c:510
+msgid ""
+"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
+msgstr ""
+
+#: src/main.c:514
+msgid "Directories:\n"
+msgstr ""
+
+#: src/main.c:516
+msgid "  -nd, --no-directories           don't create directories.\n"
+msgstr ""
+
+#: src/main.c:518
+msgid "  -x,  --force-directories        force creation of directories.\n"
+msgstr ""
+
+#: src/main.c:520
+msgid "  -nH, --no-host-directories      don't create host directories.\n"
+msgstr ""
+
+#: src/main.c:522
+msgid "       --protocol-directories     use protocol name in directories.\n"
+msgstr ""
+
+#: src/main.c:524
+msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
+msgstr ""
+
+#: src/main.c:526
+msgid ""
+"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
+"components.\n"
+msgstr ""
+
+#: src/main.c:530
+msgid "HTTP options:\n"
+msgstr ""
+
+#: src/main.c:532
+msgid "       --http-user=USER        set http user to USER.\n"
+msgstr ""
+
+#: src/main.c:534
+msgid "       --http-password=PASS    set http password to PASS.\n"
+msgstr ""
+
+#: src/main.c:536
+msgid "       --no-cache              disallow server-cached data.\n"
+msgstr ""
+
+#: src/main.c:538
+msgid ""
+"       --default-page=NAME     Change the default page name (normally\n"
+"                               this is `index.html'.).\n"
+msgstr ""
+
+#: src/main.c:541
+msgid ""
+"  -E,  --adjust-extension      save HTML/CSS documents with proper "
+"extensions.\n"
+msgstr ""
+
+#: src/main.c:543
+msgid "       --ignore-length         ignore `Content-Length' header field.\n"
+msgstr ""
+
+#: src/main.c:545
+msgid "       --header=STRING         insert STRING among the headers.\n"
+msgstr ""
+
+#: src/main.c:547
+msgid "       --max-redirect          maximum redirections allowed per page.\n"
+msgstr ""
+
+#: src/main.c:549
+msgid "       --proxy-user=USER       set USER as proxy username.\n"
+msgstr ""
+
+#: src/main.c:551
+msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
+msgstr ""
+
+#: src/main.c:553
+msgid ""
+"       --referer=URL           include `Referer: URL' header in HTTP "
+"request.\n"
+msgstr ""
+
+#: src/main.c:555
+msgid "       --save-headers          save the HTTP headers to file.\n"
+msgstr ""
+
+#: src/main.c:557
+msgid ""
+"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
+msgstr ""
+
+#: src/main.c:559
+msgid ""
+"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
+"connections).\n"
+msgstr ""
+
+#: src/main.c:561
+msgid "       --no-cookies            don't use cookies.\n"
+msgstr ""
+
+#: src/main.c:563
+msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
+msgstr ""
+
+#: src/main.c:565
+msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
+msgstr ""
+
+#: src/main.c:567
+msgid ""
+"       --keep-session-cookies  load and save session (non-permanent) "
+"cookies.\n"
+msgstr ""
+
+#: src/main.c:569
+msgid ""
+"       --post-data=STRING      use the POST method; send STRING as the "
+"data.\n"
+msgstr ""
+
+#: src/main.c:571
+msgid ""
+"       --post-file=FILE        use the POST method; send contents of FILE.\n"
+msgstr ""
+
+#: src/main.c:573
+msgid ""
+"       --content-disposition   honor the Content-Disposition header when\n"
+"                               choosing local file names (EXPERIMENTAL).\n"
+msgstr ""
+
+#: src/main.c:576
+msgid ""
+"       --auth-no-challenge     send Basic HTTP authentication information\n"
+"                               without first waiting for the server's\n"
+"                               challenge.\n"
+msgstr ""
+
+#: src/main.c:583
+msgid "HTTPS (SSL/TLS) options:\n"
+msgstr ""
+
+#: src/main.c:585
+msgid ""
+"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
+"                                SSLv3, and TLSv1.\n"
+msgstr ""
+
+#: src/main.c:588
+msgid ""
+"       --no-check-certificate   don't validate the server's certificate.\n"
+msgstr ""
+
+#: src/main.c:590
+msgid "       --certificate=FILE       client certificate file.\n"
+msgstr ""
+
+#: src/main.c:592
+msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
+msgstr ""
+
+#: src/main.c:594
+msgid "       --private-key=FILE       private key file.\n"
+msgstr ""
+
+#: src/main.c:596
+msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
+msgstr ""
+
+#: src/main.c:598
+msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
+msgstr ""
+
+#: src/main.c:600
+msgid ""
+"       --ca-directory=DIR       directory where hash list of CA's is "
+"stored.\n"
+msgstr ""
+
+#: src/main.c:602
+msgid ""
+"       --random-file=FILE       file with random data for seeding the SSL "
+"PRNG.\n"
+msgstr ""
+
+#: src/main.c:604
+msgid ""
+"       --egd-file=FILE          file naming the EGD socket with random "
+"data.\n"
+msgstr ""
+
+#: src/main.c:609
+msgid "FTP options:\n"
+msgstr ""
+
+#: src/main.c:612
+msgid ""
+"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
+"files.\n"
+msgstr ""
+
+#: src/main.c:615
+msgid "       --ftp-user=USER         set ftp user to USER.\n"
+msgstr ""
+
+#: src/main.c:617
+msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
+msgstr ""
+
+#: src/main.c:619
+msgid "       --no-remove-listing     don't remove `.listing' files.\n"
+msgstr ""
+
+#: src/main.c:621
+msgid "       --no-glob               turn off FTP file name globbing.\n"
+msgstr ""
+
+#: src/main.c:623
+msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
+msgstr ""
+
+#: src/main.c:625
+msgid ""
+"       --retr-symlinks         when recursing, get linked-to files (not "
+"dir).\n"
+msgstr ""
+
+#: src/main.c:629
+msgid "Recursive download:\n"
+msgstr ""
+
+#: src/main.c:631
+msgid "  -r,  --recursive          specify recursive download.\n"
+msgstr ""
+
+#: src/main.c:633
+msgid ""
+"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
+"infinite).\n"
+msgstr ""
+
+#: src/main.c:635
+msgid ""
+"       --delete-after       delete files locally after downloading them.\n"
+msgstr ""
+
+#: src/main.c:637
+msgid ""
+"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
+"                            local files.\n"
+msgstr ""
+
+#: src/main.c:641
+msgid ""
+"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
+msgstr ""
+
+#: src/main.c:644
+msgid ""
+"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
+msgstr ""
+
+#: src/main.c:647
+msgid ""
+"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
+msgstr ""
+
+#: src/main.c:649
+msgid ""
+"  -p,  --page-requisites    get all images, etc. needed to display HTML "
+"page.\n"
+msgstr ""
+
+#: src/main.c:651
+msgid ""
+"       --strict-comments    turn on strict (SGML) handling of HTML "
+"comments.\n"
+msgstr ""
+
+#: src/main.c:655
+msgid "Recursive accept/reject:\n"
+msgstr ""
+
+#: src/main.c:657
+msgid ""
+"  -A,  --accept=LIST               comma-separated list of accepted "
+"extensions.\n"
+msgstr ""
+
+#: src/main.c:659
+msgid ""
+"  -R,  --reject=LIST               comma-separated list of rejected "
+"extensions.\n"
+msgstr ""
+
+#: src/main.c:661
+msgid ""
+"  -D,  --domains=LIST              comma-separated list of accepted "
+"domains.\n"
+msgstr ""
+
+#: src/main.c:663
+msgid ""
+"       --exclude-domains=LIST      comma-separated list of rejected "
+"domains.\n"
+msgstr ""
+
+#: src/main.c:665
+msgid ""
+"       --follow-ftp                follow FTP links from HTML documents.\n"
+msgstr ""
+
+#: src/main.c:667
+msgid ""
+"       --follow-tags=LIST          comma-separated list of followed HTML "
+"tags.\n"
+msgstr ""
+
+#: src/main.c:669
+msgid ""
+"       --ignore-tags=LIST          comma-separated list of ignored HTML "
+"tags.\n"
+msgstr ""
+
+#: src/main.c:671
+msgid ""
+"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
+msgstr ""
+
+#: src/main.c:673
+msgid "  -L,  --relative                  follow relative links only.\n"
+msgstr ""
+
+#: src/main.c:675
+msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
+msgstr ""
+
+#: src/main.c:677
+msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
+msgstr ""
+
+#: src/main.c:679
+msgid ""
+"  -np, --no-parent                 don't ascend to the parent directory.\n"
+msgstr ""
+
+#: src/main.c:683
+msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
+msgstr ""
+
+#: src/main.c:688
+#, c-format
+msgid "GNU Wget %s, a non-interactive network retriever.\n"
+msgstr ""
+
+#: src/main.c:728
+#, c-format
+msgid "Password for user %s: "
+msgstr ""
+
+#: src/main.c:730
+#, c-format
+msgid "Password: "
+msgstr ""
+
+#: src/main.c:780
+msgid "Wgetrc: "
+msgstr ""
+
+#: src/main.c:781
+msgid "Locale: "
+msgstr ""
+
+#: src/main.c:782
+msgid "Compile: "
+msgstr ""
+
+#: src/main.c:783
+msgid "Link: "
+msgstr ""
+
+#: src/main.c:789
+#, c-format
+msgid ""
+"GNU Wget %s built on VMS %s %s.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:792
+#, c-format
+msgid ""
+"GNU Wget %s built on %s.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:815
+#, c-format
+msgid "    %s (env)\n"
+msgstr ""
+
+#: src/main.c:821
+#, c-format
+msgid "    %s (user)\n"
+msgstr ""
+
+#: src/main.c:825
+#, c-format
+msgid "    %s (system)\n"
+msgstr ""
+
+#. TRANSLATORS: When available, an actual copyright character
+#. (cirle-c) should be used in preference to "(C)".
+#: src/main.c:843
+msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
+msgstr ""
+
+#: src/main.c:845
+msgid ""
+"License GPLv3+: GNU GPL version 3 or later\n"
+"<http://www.gnu.org/licenses/gpl.html>.\n"
+"This is free software: you are free to change and redistribute it.\n"
+"There is NO WARRANTY, to the extent permitted by law.\n"
+msgstr ""
+
+#. TRANSLATORS: When available, please use the proper diacritics for
+#. names such as this one. See en_US.po for reference.
+#: src/main.c:852
+msgid ""
+"\n"
+"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
+msgstr ""
+
+#: src/main.c:854
+msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
+msgstr ""
+
+#: src/main.c:856
+msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
+msgstr ""
+
+#: src/main.c:906 src/main.c:975 src/main.c:1097
+#, c-format
+msgid "Try `%s --help' for more options.\n"
+msgstr ""
+
+#: src/main.c:972
+#, c-format
+msgid "%s: illegal option -- `-n%c'\n"
+msgstr ""
+
+#: src/main.c:1030
+#, c-format
+msgid "Can't be verbose and quiet at the same time.\n"
+msgstr ""
+
+#: src/main.c:1036
+#, c-format
+msgid "Can't timestamp and not clobber old files at the same time.\n"
+msgstr ""
+
+#: src/main.c:1044
+#, c-format
+msgid "Cannot specify both --inet4-only and --inet6-only.\n"
+msgstr ""
+
+#: src/main.c:1054
+msgid ""
+"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
+"with -p or -r. See the manual for details.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:1063
+msgid ""
+"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
+"will be placed in the single file you specified.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:1069
+msgid ""
+"WARNING: timestamping does nothing in combination with -O. See the manual\n"
+"for details.\n"
+"\n"
+msgstr ""
+
+#: src/main.c:1077
+#, c-format
+msgid "File `%s' already there; not retrieving.\n"
+msgstr ""
+
+#: src/main.c:1084
+#, c-format
+msgid "Cannot specify both --ask-password and --password.\n"
+msgstr ""
+
+#: src/main.c:1092
+#, c-format
+msgid "%s: missing URL\n"
+msgstr ""
+
+#: src/main.c:1117
+#, c-format
+msgid "This version does not have support for IRIs\n"
+msgstr ""
+
+#: src/main.c:1181
+msgid ""
+"WARNING: Can't reopen standard output in binary mode;\n"
+"         downloaded file may contain inappropriate line endings.\n"
+msgstr ""
+
+#: src/main.c:1316
+#, c-format
+msgid "No URLs found in %s.\n"
+msgstr ""
+
+#: src/main.c:1334
+#, c-format
+msgid ""
+"FINISHED --%s--\n"
+"Downloaded: %d files, %s in %s (%s)\n"
+msgstr ""
+
+#: src/main.c:1343
+#, c-format
+msgid "Download quota of %s EXCEEDED!\n"
+msgstr ""
+
+#: src/mswindows.c:99
+#, c-format
+msgid "Continuing in background.\n"
+msgstr ""
+
+#: src/mswindows.c:292
+#, c-format
+msgid "Continuing in background, pid %lu.\n"
+msgstr ""
+
+#: src/mswindows.c:294 src/utils.c:472
+#, c-format
+msgid "Output will be written to %s.\n"
+msgstr ""
+
+#: src/mswindows.c:462 src/mswindows.c:469
+#, c-format
+msgid "%s: Couldn't find usable socket driver.\n"
+msgstr ""
+
+#: src/netrc.c:390
+#, c-format
+msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
+msgstr ""
+
+#: src/netrc.c:421
+#, c-format
+msgid "%s: %s:%d: unknown token \"%s\"\n"
+msgstr ""
+
+#: src/netrc.c:485
+#, c-format
+msgid "Usage: %s NETRC [HOSTNAME]\n"
+msgstr ""
+
+#: src/netrc.c:495
+#, c-format
+msgid "%s: cannot stat %s: %s\n"
+msgstr ""
+
+#: src/openssl.c:113
+msgid "WARNING: using a weak random seed.\n"
+msgstr ""
+
+#: src/openssl.c:173
+msgid "Could not seed PRNG; consider using --random-file.\n"
+msgstr ""
+
+#: src/openssl.c:526
+#, c-format
+msgid "%s: cannot verify %s's certificate, issued by %s:\n"
+msgstr ""
+
+#: src/openssl.c:535
+msgid "  Unable to locally verify the issuer's authority.\n"
+msgstr ""
+
+#: src/openssl.c:539
+msgid "  Self-signed certificate encountered.\n"
+msgstr ""
+
+#: src/openssl.c:542
+msgid "  Issued certificate not yet valid.\n"
+msgstr ""
+
+#: src/openssl.c:545
+msgid "  Issued certificate has expired.\n"
+msgstr ""
+
+#: src/openssl.c:579
+#, c-format
+msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
+msgstr ""
+
+#: src/openssl.c:610
+#, c-format
+msgid ""
+"%s: certificate common name is invalid (contains a NUL character).\n"
+"This may be an indication that the host is not who it claims to be\n"
+"(that is, it is not the real %s).\n"
+msgstr ""
+
+#: src/openssl.c:627
+#, c-format
+msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
+msgstr ""
+
+#: src/progress.c:242
+#, c-format
+msgid ""
+"\n"
+"%*s[ skipping %sK ]"
+msgstr ""
+
+#: src/progress.c:456
+#, c-format
+msgid "Invalid dot style specification %s; leaving unchanged.\n"
+msgstr ""
+
+#. TRANSLATORS: "ETA" is English-centric, but this must
+#. be short, ideally 3 chars.  Abbreviate if necessary.
+#: src/progress.c:805
+#, c-format
+msgid "  eta %s"
+msgstr ""
+
+#: src/progress.c:1050
+msgid "   in "
+msgstr ""
+
+#: src/ptimer.c:161
+#, c-format
+msgid "Cannot get REALTIME clock frequency: %s\n"
+msgstr ""
+
+#: src/recur.c:439
+#, c-format
+msgid "Removing %s since it should be rejected.\n"
+msgstr ""
+
+#: src/res.c:390
+#, c-format
+msgid "Cannot open %s: %s"
+msgstr ""
+
+#: src/res.c:549
+msgid "Loading robots.txt; please ignore errors.\n"
+msgstr ""
+
+#: src/retr.c:667
+#, c-format
+msgid "Error parsing proxy URL %s: %s.\n"
+msgstr ""
+
+#: src/retr.c:677
+#, c-format
+msgid "Error in proxy URL %s: Must be HTTP.\n"
+msgstr ""
+
+#: src/retr.c:775
+#, c-format
+msgid "%d redirections exceeded.\n"
+msgstr ""
+
+#: src/retr.c:1014
+msgid ""
+"Giving up.\n"
+"\n"
+msgstr ""
+
+#: src/retr.c:1014
+msgid ""
+"Retrying.\n"
+"\n"
+msgstr ""
+
+#: src/spider.c:74
+msgid ""
+"Found no broken links.\n"
+"\n"
+msgstr ""
+
+#: src/spider.c:81
+#, c-format
+msgid ""
+"Found %d broken link.\n"
+"\n"
+msgid_plural ""
+"Found %d broken links.\n"
+"\n"
+msgstr[0] ""
+msgstr[1] ""
+
+#: src/spider.c:91
+#, c-format
+msgid "%s\n"
+msgstr ""
+
+#: src/url.c:633
+msgid "No error"
+msgstr ""
+
+#: src/url.c:635
+#, c-format
+msgid "Unsupported scheme %s"
+msgstr ""
+
+#: src/url.c:637
+msgid "Scheme missing"
+msgstr ""
+
+#: src/url.c:639
+msgid "Invalid host name"
+msgstr ""
+
+#: src/url.c:641
+msgid "Bad port number"
+msgstr ""
+
+#: src/url.c:643
+msgid "Invalid user name"
+msgstr ""
+
+#: src/url.c:645
+msgid "Unterminated IPv6 numeric address"
+msgstr ""
+
+#: src/url.c:647
+msgid "IPv6 addresses not supported"
+msgstr ""
+
+#: src/url.c:649
+msgid "Invalid IPv6 numeric address"
+msgstr ""
+
+#: src/url.c:951
+msgid "HTTPS support not compiled in"
+msgstr ""
+
+#: src/utils.c:108
+#, c-format
+msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
+msgstr ""
+
+#: src/utils.c:114
+#, c-format
+msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
+msgstr ""
+
+#: src/utils.c:327
+#, c-format
+msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
+msgstr ""
+
+#: src/utils.c:470
+#, c-format
+msgid "Continuing in background, pid %d.\n"
+msgstr ""
+
+#: src/utils.c:521
+#, c-format
+msgid "Failed to unlink symlink %s: %s\n"
+msgstr ""
