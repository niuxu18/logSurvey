-/*
- * $Id$
- *
- * DEBUG: section 28    Access Control
- * AUTHOR: Robert Collins
- *
- * SQUID Web Proxy Cache          http://www.squid-cache.org/
- * ----------------------------------------------------------
- *
- *  Squid is the result of efforts by numerous individuals from
- *  the Internet community; see the CONTRIBUTORS file for full
- *  details.   Many organizations have provided support for Squid's
- *  development; see the SPONSORS file for full details.  Squid is
- *  Copyrighted (C) 2001 by the Regents of the University of
- *  California; see the COPYRIGHT file for full details.  Squid
- *  incorporates software developed and/or copyrighted by other
- *  sources; see the CREDITS file for full details.
- *
- *  This program is free software; you can redistribute it and/or modify
- *  it under the terms of the GNU General Public License as published by
- *  the Free Software Foundation; either version 2 of the License, or
- *  (at your option) any later version.
- *
- *  This program is distributed in the hope that it will be useful,
- *  but WITHOUT ANY WARRANTY; without even the implied warranty of
- *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
- *  GNU General Public License for more details.
- *
- *  You should have received a copy of the GNU General Public License
- *  along with this program; if not, write to the Free Software
- *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
- *
- */
-
 #include "config.h"
 #include "errorpage.h"
 
-err_type
-errorReservePageId(const char *page_name)
-{
-    fatal("Not implemented");
-    return err_type();
-}
-
-void
-errorAppendEntry(StoreEntry * entry, ErrorState * err)
-{
-    fatal("Not implemented");
-}
-
-bool
-strHdrAcptLangGetItem(const String &hdr, char *lang, int langLen, size_t &pos)
-{
-    fatal("Not implemented");
-    return false;
-}
-
-bool
-TemplateFile::loadDefault()
-{
-    fatal("Not implemented");
-    return false;
-}
-
-TemplateFile::TemplateFile(char const*)
-{
-    fatal("Not implemented");
-}
-
-bool
-TemplateFile::loadFor(HttpRequest*)
-{
-    fatal("Not implemented");
-    return false;
-}
+#define STUB_API "errorpage.cc"
+#include "tests/STUB.h"
 
-/*
- * DO NOT MODIFY:
- * arch-tag: e4c72cfd-0b31-4497-90e6-0e3cda3b92b4
- */
+err_type errorReservePageId(const char *page_name) STUB_RETVAL(err_type())
+void errorAppendEntry(StoreEntry * entry, ErrorState * err) STUB
+bool strHdrAcptLangGetItem(const String &hdr, char *lang, int langLen, size_t &pos) STUB_RETVAL(false)
+bool TemplateFile::loadDefault() STUB_RETVAL(false)
+TemplateFile::TemplateFile(char const*) STUB
+bool TemplateFile::loadFor(HttpRequest*) STUB_RETVAL(false)
