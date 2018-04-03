# Greek messages for GNU wget.
# Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.
# Simos Xenitellis <simos@hellug.gr>, 1999, 2000, 2001, 2002, 2003, 2004.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.9.1\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2004-12-15 19:46+0000\n"
"Last-Translator: Simos Xenitellis <simos74@gmx.net>\n"
"Language-Team: Greek <nls@tux.hellug.gr>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=utf-8\n"
"Content-Transfer-Encoding: 8-bit\n"

#: lib/error.c:127
#, fuzzy
msgid "Unknown system error"
msgstr "Άγνωστο σφάλμα"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: η επιλογή `%s' είναι αόριστη\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: η επιλογή `--%s' δεν επιδέχεται όρισμα\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: η επιλογή `%c%s' δεν επιδέχεται όρισμα\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: η επιλογή `%s' απαιτεί όρισμα\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: μη αναγνωρίσημη επιλογή `--%s'\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: μη αναγνωρίσιμη επιλογή `%c%s'\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: μη αποδεκτή επιλογή -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, fuzzy, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: μη αποδεκτή επιλογή -- %c\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: η επιλογή απαιτεί μια παράμετρο -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, fuzzy, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: η επιλογή `%s' είναι αόριστη\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, fuzzy, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: η επιλογή `--%s' δεν επιδέχεται όρισμα\n"

#. TRANSLATORS:
#. Get translations for open and closing quotation marks.
#.
#. The message catalog should translate "`" to a left
#. quotation mark suitable for the locale, and similarly for
#. "'".  If the catalog has no translation,
#. locale_quoting_style quotes `like this', and
#. clocale_quoting_style quotes "like this".
#.
#. For example, an American English Unicode locale should
#. translate "`" to U+201C (LEFT DOUBLE QUOTATION MARK), and
#. should translate "'" to U+201D (RIGHT DOUBLE QUOTATION
#. MARK).  A British English Unicode locale should instead
#. translate these to U+2018 (LEFT SINGLE QUOTATION MARK)
#. and U+2019 (RIGHT SINGLE QUOTATION MARK), respectively.
#.
#. If you don't know what to put here, please see
#. <http://en.wikipedia.org/wiki/Quotation_mark#Glyphs>
#. and use glyphs suitable for your language.
#: lib/quotearg.c:272
msgid "`"
msgstr ""

#: lib/quotearg.c:273
msgid "'"
msgstr ""

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr ""

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr ""

#: src/connect.c:291
#, fuzzy, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Σύνδεση με %s[%s]:%hu... "

#: src/connect.c:298
#, fuzzy, c-format
msgid "Connecting to %s:%d... "
msgstr "Σύνδεση με %s:%hu... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "συνδέθηκε.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "απέτυχε: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr ""

#: src/convert.c:185
#, fuzzy, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Μετατράπηκαν %d αρχεία σε %.2f δευτερόλεπτα.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Μετατροπή του %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "τίποτα να κάνω.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Αδυναμία μετατροπής συνδέσμων στο %s: %s\n"

#: src/convert.c:249
#, fuzzy, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Αποτυχία διαγραφής του `%s': %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Αδύνατη η λήψη αντιγράγου ασφαλείας του %s ως %s: %s\n"

#: src/cookies.c:443
#, fuzzy, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Συντακτικό σφάλμα στο Set-Cookie: πρόωρο τέλος αλφαριθμητικού.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr ""

#: src/cookies.c:1134 src/cookies.c:1252
#, fuzzy, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Αδύνατο το άνοιγμα του αρχείου cookies `%s': %s\n"

#: src/cookies.c:1289
#, fuzzy, c-format
msgid "Error writing to %s: %s\n"
msgstr "Σφάλμα στην εγγραφή στο `%s': %s\n"

#: src/cookies.c:1292
#, fuzzy, c-format
msgid "Error closing %s: %s\n"
msgstr "Σφάλμα στο κλείσιμο του `%s': %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr ""
"Μη υποστηριζόμενος τύπος καταλόγου, δοκιμάζω να τον διαβάσω σαν Unix "
"κατάλογο.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Κατάλογος του /%s στο %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "ώρα άγνωστη        "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "Αρχείο      "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Κατάλογος   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "Σύνδεση     "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Όχι απόλυτα σίγουρος   "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s byte)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Μήκος: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ""

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ""

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (ανεπίσημο)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Αυθεντικοποίηση ως %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Σφάλμα στην απάντηση του διακομιστή, κλείνει η σύνδεση ελέγχου.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Σφάλμα στο μήνυμα αποδοχής του διακομιστή.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Αποτυχία στην εγγραφή δεδομένων, κλείνει η σύνδεση ελέγχου.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Ο διακομιστής απαγορεύει τη σύνδεση.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Σφάλμα στην αυθεντικοποίηση.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Επιτυχής σύνδεση!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Σφάλμα διακομιστή, δεν μπορώ να συμπεράνω τον τύπο του συστήματος.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "έγινε.    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "έγινε.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Άγνωστος τύπος `%c', διακοπή της σύνδεσης.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "έγινε.  "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD δεν απαιτήται.\n"

#: src/ftp.c:713
#, fuzzy, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr "Δεν υπάρχει τέτοιος κατάλογος `%s'.\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD δεν απαιτείται.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Δεν είναι δυνατή να ξεκινήσει μεταφορά τύπου PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Δεν είναι δυνατή η μετάφραση της απάντησης PASV.\n"

#: src/ftp.c:816
#, fuzzy, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "αδύνατη η σύνδεση στο %s:%hu: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Σφάλμα στη σύνδεση (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "Μη έγκυρη ΘΥΡΑ.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"Αποτυχία στην εντολή REST, εκκίνηση από την αρχή.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr ""

#: src/ftp.c:963
#, fuzzy, c-format
msgid "No such file %s.\n"
msgstr ""
"Δεν υπάρχει αρχείο `%s'.\n"
"\n"

#: src/ftp.c:1009
#, fuzzy, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Δεν υπάρχει αρχείο `%s'.\n"
"\n"

#: src/ftp.c:1056
#, fuzzy, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Δεν υπάρχει αρχείο ή κατάλογος `%s'.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr ""

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, κλείσιμο σύνδεσης ελέγχου.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Σύνδεση δεδομένων: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Η σύνδεση ελέγχου έκλεισε.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Η μεταφορά δεδομένων διακόπηκε ανώμαλα.\n"

#: src/ftp.c:1381
#, fuzzy, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Το αρχείο `%s' υπάρχει ήδη, δεν επανακτάται.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(προσπάθεια:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""

#: src/ftp.c:1523 src/http.c:2874
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' αποθηκεύτηκε [%ld]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Διαγραφή του %s.\n"

#: src/ftp.c:1610
#, fuzzy, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Χρήση του `%s' για προσωρινό αρχείο περιεχομένων καταλόγου.\n"

#: src/ftp.c:1627
#, fuzzy, c-format
msgid "Removed %s.\n"
msgstr "Διαγραφή του `%s'.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Το επίπεδο αναδρομής %d ξεπέρασε το μέγιστο επίπεδο αναδρομής %d.\n"

#: src/ftp.c:1734
#, fuzzy, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Το αρχείο στο διακομιστή δεν είναι νεώτερο του τοπικού `%s' -- δε γίνεται "
"ανάκτηση.\n"
"\n"

#: src/ftp.c:1741
#, fuzzy, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Το αρχείο στο διακομιστή είναι νεώτερο του τοπικού `%s' -- γίνεται "
"ανάκτηση.\n"
"\n"

#: src/ftp.c:1748
#, fuzzy, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr "Τα μεγέθη δεν είναι ίσα (τοπικό %ld) -- γίνεται ανάκτηση.\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Μη έγκυρο όνομα συμβολικού συνδέσμου, παρακάμπτεται.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Υπάρχει ήδη ο ορθός σύνδεσμος %s -> %s\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Δημιουργία συνδέσμου %s -> %s\n"

#: src/ftp.c:1802
#, fuzzy, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Δεν υποστηρίζονται σύνδεσμοι, παράκαμψη συνδέσμου `%s'.\n"

#: src/ftp.c:1814
#, fuzzy, c-format
msgid "Skipping directory %s.\n"
msgstr "Παράκαμψη καταλόγου `%s'.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: άγνωστο/μη υποστηριζόμενο είδος αρχείου.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: εσφαλμένη ημερομηνία αρχείου.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Δεν θα ανακτηθούν κατάλογοι διότι το βάθος είναι %d (μέγιστο %d).\n"

#: src/ftp.c:1932
#, fuzzy, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr ""
"Δεν επεκτεινόμαστε στο `%s' διότι είναι εξαιρούμενο/μη-συμπεριλαμβανόμενο\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, fuzzy, c-format
msgid "Rejecting %s.\n"
msgstr "Απόρριψη του `%s'.\n"

#: src/ftp.c:2035
#, fuzzy, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Σφάλμα στην εγγραφή στο `%s': %s\n"

#: src/ftp.c:2091
#, fuzzy, c-format
msgid "No matches on pattern %s.\n"
msgstr "Δεν βρέθηκαν ταιριάσματα στη μορφή `%s'.\n"

#: src/ftp.c:2162
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Γράφτηκε αρχείο καταλόγου σε HTML στο `%s' [%ld].\n"

#: src/ftp.c:2167
#, fuzzy, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Γράφτηκε αρχείο καταλόγου σε HTML στο `%s'.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr ""

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr ""

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr ""

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr ""

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr ""

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr ""

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr ""

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr ""

#: src/gnutls.c:276
#, fuzzy, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Σφάλμα στην ανάλυση του URL του διαμεσολαβητή %s: %s.\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr ""

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr ""

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr ""

#: src/host.c:358
#, fuzzy
msgid "Unknown host"
msgstr "Άγνωστο σφάλμα"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr ""

#: src/host.c:364
msgid "Unknown error"
msgstr "Άγνωστο σφάλμα"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Εύρεση του %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr ""

#: src/host.c:812
#, fuzzy
msgid "failed: timed out.\n"
msgstr "απέτυχε: %s.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Αδύνατη η ανάλυση μη ολοκληρωμένου συνδέσμου %s.\n"

#: src/html-url.c:772
#, fuzzy, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Σφάλμα στην εγγραφή της αίτησης HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr ""

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr ""

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr ""

#: src/http.c:1660
#, fuzzy, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Χρήση ξανά της σύνδεσης στο %s:%hu.\n"

#: src/http.c:1729
#, fuzzy, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Σφάλμα στην εγγραφή της αίτησης HTTP: %s.\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr ""

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Η αίτηση για %s στάλθηκε, αναμονή απάντησης... "

#: src/http.c:1811
#, fuzzy
msgid "No data received.\n"
msgstr "Δεν ελήφθησαν δεδομένα"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Σφάλμα ανάγνωσης (%s) στις κεφαλίδες.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Άγνωστο σχήμα αυθεντικοποίησης.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Η αυθεντικοποίηση απέτυχε.\n"

#: src/http.c:2004 src/http.c:2471
#, fuzzy, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr "Το αρχείο `%s' υπάρχει ήδη, δεν επανακτάται.\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Εσφαλμένη γραμμή κατάστασης"

#: src/http.c:2095
msgid "(no description)"
msgstr "(χωρίς περιγραφή)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Τοποθεσία: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "μη ορισμένο"

#: src/http.c:2156
msgid " [following]"
msgstr " [ακολουθεί]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Το αρχείο έχει ήδη ανακτηθεί πλήρως· τίποτα να κάνω.\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Μήκος: "

#: src/http.c:2263
msgid "ignored"
msgstr "αγνοείται"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr ""

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr ""
"Προειδοποίηση: μεταχαρακτήρες (wildcards) δεν υποστηρίζονται στο HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr ""

#: src/http.c:2603
#, fuzzy, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Αδυναμία στην εγγραφή στο `%s' (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Αδύνατη η σύσταση σύνδεσης SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ΣΦΑΛΜΑ: Μετάσταση (%d) χωρίς τοποθεσία.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr ""

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ΣΦΑΛΜΑ %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr ""
"Κεφαλίδα Last-modified δεν υπάρχει -- χρονικές αναφορές απενεργοποιήθηκαν.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"Κεφαλίδα Last-modified δεν είναι έγκυρη -- χρονικές αναφορές αγνοούνται.\n"

#: src/http.c:2728
#, fuzzy, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Το αρχείο του διακομιστή δεν είναι νεώτερο από το τοπικό αρχείο `%s' -- δε "
"γίνεται ανάκτηση.\n"
"\n"

#: src/http.c:2736
#, fuzzy, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Τα μεγέθη δεν είναι ίσα (τοπικό %ld) -- γίνεται ανάκτηση ξανά.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "Απομακρυσμένο αρχείο είναι νεότερο, έναρξη ανάκτησης.\n"

#: src/http.c:2760
#, fuzzy
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Το αρχείο στο διακομιστή είναι νεώτερο του τοπικού `%s' -- γίνεται "
"ανάκτηση.\n"
"\n"

#: src/http.c:2766
#, fuzzy
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Το αρχείο στο διακομιστή δεν είναι νεώτερο του τοπικού `%s' -- δε γίνεται "
"ανάκτηση.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""

#: src/http.c:2781
#, fuzzy
msgid ""
"Remote file exists.\n"
"\n"
msgstr "Απομακρυσμένο αρχείο είναι νεότερο, έναρξη ανάκτησης.\n"

#: src/http.c:2790
#, fuzzy, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s ΣΦΑΛΜΑ %d: %s.\n"

#: src/http.c:2837
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""

#: src/http.c:2838
#, fuzzy, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - `%s' αποθηκεύτηκε [%ld/%ld]\n"
"\n"

#: src/http.c:2899
#, fuzzy, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Η σύνδεση διακόπηκε στο byte %ld. "

#: src/http.c:2922
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Σφάλμα ανάγνωσης στο byte %ld (%s)."

#: src/http.c:2931
#, fuzzy, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Σφάλμα ανάγνωσης στο byte %ld/%ld (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr ""

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Αδυναμία ανάγνωσης %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Σφάλμα στο %s στη γραμμή %d.\n"

#: src/init.c:533
#, fuzzy, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Σφάλμα στο %s στη γραμμή %d.\n"

#: src/init.c:538
#, fuzzy, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: ΣΦΑΛΜΑ: Άγνωστη εντολή `%s', τιμή `%s'.\n"

#: src/init.c:587
#, fuzzy, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr ""
"%s: Προειδοποίηση: Το wgetrc του συστήματος και του χρήστη δείχνουν στο ίδιο "
"αρχείο `%s'.\n"

#: src/init.c:777
#, fuzzy, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:822
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Παρακαλώ ορίστε on ή off.\n"

#: src/init.c:839
#, fuzzy, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:1044 src/init.c:1063
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Μη έγκυρος τύπος προόδου `%s'.\n"

#: src/init.c:1088
#, fuzzy, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, fuzzy, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:1179
#, fuzzy, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:1245
#, fuzzy, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Μη έγκυρος τύπος προόδου `%s'.\n"

#: src/init.c:1306
#, fuzzy, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr ""

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr ""

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr ""

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr ""

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr ""

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr ""

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr ""

#: src/log.c:809
#, fuzzy, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s λήφθηκε, ανακατεύθυνση εξόδου στο `%s'.\n"

#: src/log.c:819
#, fuzzy, c-format
msgid ""
"\n"
"%s received.\n"
msgstr "Δεν ελήφθησαν δεδομένα"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; απενεργοποίηση λήψης καταγραφών.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Χρήση: %s [ΕΠΙΛΟΓΗ]... [URL]...\n"

#: src/main.c:398
#, fuzzy
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"\n"
"Οι υποχρεωτικοί παράμετροι στα λεκτικά ορίσματα είναι υποχρεωτικοί και για "
"τα σύντομα ορίσματα.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr ""

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr ""

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr ""

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr ""

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr ""

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr ""

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr ""

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr ""

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr ""

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr ""

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr ""

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr ""

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""

#: src/main.c:441
msgid "Download:\n"
msgstr ""

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr ""

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr ""

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr ""

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr ""

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr ""

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr ""

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr ""

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr ""

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr ""

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr ""

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr ""

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr ""

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr ""

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr ""

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr ""

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""

#: src/main.c:514
#, fuzzy
msgid "Directories:\n"
msgstr "Κατάλογος   "

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr ""

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr ""

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr ""

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr ""

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""

#: src/main.c:530
msgid "HTTP options:\n"
msgstr ""

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr ""

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr ""

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr ""

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr ""

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr ""

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr ""

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr ""

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr ""

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr ""

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr ""

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr ""

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr ""

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr ""

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""

#: src/main.c:609
msgid "FTP options:\n"
msgstr ""

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr ""

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr ""

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr ""

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr ""

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr ""

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""

#: src/main.c:629
msgid "Recursive download:\n"
msgstr ""

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr ""

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr ""

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr ""

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Στείλτε αναφορές σφαλμάτων και προτάσεις στο <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, ένα μη-διαλογικό δικτυακό πρόγραμμα ανάκτησης αρχείων.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr ""

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr ""

#: src/main.c:780
msgid "Wgetrc: "
msgstr ""

#: src/main.c:781
msgid "Locale: "
msgstr ""

#: src/main.c:782
msgid "Compile: "
msgstr ""

#: src/main.c:783
msgid "Link: "
msgstr ""

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr ""

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr ""

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr ""

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
#, fuzzy
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr ""
"Πνευματικά Δικαιώματα (C) 1995, 1996, 1997, 1998, 2000, 2001 Free Software "
"Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
#, fuzzy
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Γράφτηκε αρχικά από τον Hrvoje Niksic <hniksic@arsdigita.com>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr ""

#: src/main.c:858
#, fuzzy
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr "Στείλτε αναφορές σφαλμάτων και προτάσεις στο <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Δοκιμάστε `%s --help' για περισσότερες επιλογές ρυθμίσεων.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: μη αποδεκτή επιλογή -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Δεν μπορώ να είμαι επεξηγηματικός και ταυτόχρονα σιωπηλός.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Δεν μπορώ να χρησιμοποιώ χρονικές αναφορές και ταυτόχρονα να μην υποκαθιστώ "
"τα αρχεία βάση των αναφορών.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr ""

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""

#: src/main.c:1079
#, fuzzy, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "Το αρχείο `%s' υπάρχει ήδη, δεν επανακτάται.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr ""

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: παραλείφθηκε το URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr ""

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Δεν βρέθηκαν URL στο %s.\n"

#: src/main.c:1336
#, fuzzy, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"\n"
"ΤΕΡΜΑΤΙΣΜΟΣ  --%s--\n"
"Μεταφορτώθηκαν: %s byte σε %d αρχεία\n"

#: src/main.c:1345
#, fuzzy, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr ""
"Το όριο χώρου στο δίσκο για αρχεία από μεταφορτώσεις (%s bytes) έχει "
"ΞΕΠΕΡΑΣΤΕΪ!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Εκτέλεση στο παρασκήνιο.\n"

#: src/mswindows.c:292
#, fuzzy, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr ""
"Συνέχιση στο παρασκήνιο, ταυτότητα διεργασίας (pid) %d.\n"
"\n"

#: src/mswindows.c:294 src/utils.c:472
#, fuzzy, c-format
msgid "Output will be written to %s.\n"
msgstr "Η έξοδος θα γραφτεί στο `%s'.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Αδυναμία εύρεσης έγκυρου οδηγού δικτύου.\n"

#: src/netrc.c:390
#, fuzzy, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr ""
"%s: %s:%d: προειδοποίηση: το τμήμα \"%s\" εμφανίζεται πριν από τα ονόματα "
"των μηχανημάτων\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: άγνωστος τελεσταίος \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Χρήση: %s NETRC [ΟΝΟΜΑ ΜΗΧΑΝΗΜΑΤΟΣ]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: αδυναμία πρόσβασης στο %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr ""

#: src/openssl.c:173
#, fuzzy
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Αδύνατη η αρχικοποίηση της PRNG της OpenSSL· απενεργοποίηση του SSL.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr ""

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr ""

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr ""

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr ""

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr ""

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""

#: src/progress.c:242
#, fuzzy, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ παράκαμψη %dK ]"

#: src/progress.c:456
#, fuzzy, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr "Μη έγκυρη ρύθμιση στυλ τελείας `%s'· παραμένει χωρίς αλλαγή.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr ""

#: src/progress.c:1050
msgid "   in "
msgstr ""

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr ""

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Διαγραφή του %s αφού θα έπρεπε να απορριφθεί.\n"

#: src/res.c:391
#, fuzzy, c-format
msgid "Cannot open %s: %s"
msgstr "Αδυναμία μετατροπής συνδέσμων στο %s: %s\n"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr ""
"Ανάγνωση του robots.txt; παρακαλώ αγνοείστε τυχόν μηνύματα σφαλμάτων.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Σφάλμα στην ανάλυση του URL του διαμεσολαβητή %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Σφάλμα στο URL διαμεσολαβητή %s: Πρέπει να είναι HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "Υπέρβαση %d επανακατευθύνσεων.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Εγκαταλείπω.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Προσπάθεια ξανά.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] ""
msgstr[1] ""

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr ""

#: src/url.c:633
#, fuzzy
msgid "No error"
msgstr "Άγνωστο σφάλμα"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr ""

#: src/url.c:637
msgid "Scheme missing"
msgstr ""

#: src/url.c:639
#, fuzzy
msgid "Invalid host name"
msgstr "Μη έγκυρο όνομα εξυπηρετητή"

#: src/url.c:641
msgid "Bad port number"
msgstr ""

#: src/url.c:643
#, fuzzy
msgid "Invalid user name"
msgstr "Μη έγκυρο όνομα εξυπηρετητή"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr ""

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr ""

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr ""

#: src/url.c:951
#, fuzzy
msgid "HTTPS support not compiled in"
msgstr ""
"%s: η υποστήριξη εκσφαλμάτωσης δεν έχει συμπεριληφθεί στη μεταγλώττιση.\n"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr ""

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr ""

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr ""

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr ""
"Συνέχιση στο παρασκήνιο, ταυτότητα διεργασίας (pid) %d.\n"
"\n"

#: src/utils.c:521
#, fuzzy, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Αποτυχία διαγραφής συμβολικού συνδέσμου `%s': %s\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Σφάλμα στο Set-Cookie, πεδίο `%s'"

#~ msgid ""
#~ "\n"
#~ "REST failed; will not truncate `%s'.\n"
#~ msgstr ""
#~ "\n"
#~ "Αποτυχία της REST· δε θα επανακτηθεί το `%s'.\n"

#~ msgid " [%s to go]"
#~ msgstr " [%s για πέρας]"

#~ msgid "Host not found"
#~ msgstr "Ο διακομιστής δε βρέθηκε"

#~ msgid "Failed to set up an SSL context\n"
#~ msgstr "Αποτυχία δημιουργίας περιβάλλοντος SSL\n"

#~ msgid "Failed to load certificates from %s\n"
#~ msgstr "Αποτυχία φόρτωσης πιστοποιητικών από %s\n"

#~ msgid "Trying without the specified certificate\n"
#~ msgstr "Προσπάθεια χωρίς το καθορισμένο πιστοποιητικό\n"

#~ msgid "Failed to get certificate key from %s\n"
#~ msgstr "Αποτυχία λήψης κλειδιού πιστοποιητικού από %s\n"

#~ msgid "End of file while parsing headers.\n"
#~ msgstr "Τέλος αρχείου ενώ γινόταν επεξεργασία των κεφαλίδων.\n"

#~ msgid ""
#~ "\n"
#~ "Continued download failed on this file, which conflicts with `-c'.\n"
#~ "Refusing to truncate existing file `%s'.\n"
#~ "\n"
#~ msgstr ""
#~ "\n"
#~ "Η συνέχιση της ανάκτησης απέτυχε για αυτό το αρχείο, που συγκρούεται με "
#~ "το `-c'.\n"
#~ "Άρνηση εγγραφής πάνω στο υπάρχο αρχείο `%s'.\n"

#~ msgid " (%s to go)"
#~ msgstr " (%s μέχρι πέρας)"

#~ msgid "File `%s' already there, will not retrieve.\n"
#~ msgstr "Το αρχείο `%s' είναι ήδη εδώ, δε θα ανακτηθεί.\n"

#~ msgid ""
#~ "%s (%s) - `%s' saved [%ld/%ld])\n"
#~ "\n"
#~ msgstr ""
#~ "%s (%s) - `%s' αποθηκεύτηκε [%ld/%ld])\n"
#~ "\n"

#~ msgid "%s (%s) - Connection closed at byte %ld/%ld. "
#~ msgstr "%s (%s) - Η σύνδεση διακόπηκε στο byte %ld/%ld. "

#, fuzzy
#~ msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
#~ msgstr ""
#~ "%s: %s: Παρακαλώ καθορίστε πάντα(always), ενεργό(on), ανενεργό(off) ή ποτέ"
#~ "(never).\n"

#~ msgid ""
#~ "Startup:\n"
#~ "  -V,  --version           display the version of Wget and exit.\n"
#~ "  -h,  --help              print this help.\n"
#~ "  -b,  --background        go to background after startup.\n"
#~ "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
#~ "\n"
#~ msgstr ""
#~ "Έναρξη:\n"
#~ "  -V,  --version           εμφάνιση της έκδοσης του Wget και έξοδος.\n"
#~ "  -h,  --help              εμφάνιση της βοήθειας αυτής.\n"
#~ "  -b,  --background        αποστολή στο παρασκήνιο μετά την έναρξη.\n"
#~ "  -e,  --execute=ΕΝΤΟΛΗ    εκτέλεση μιας εντολής μορφής `.wgetrc'.\n"
#~ "\n"

#, fuzzy
#~ msgid ""
#~ "Logging and input file:\n"
#~ "  -o,  --output-file=FILE     log messages to FILE.\n"
#~ "  -a,  --append-output=FILE   append messages to FILE.\n"
#~ "  -d,  --debug                print debug output.\n"
#~ "  -q,  --quiet                quiet (no output).\n"
#~ "  -v,  --verbose              be verbose (this is the default).\n"
#~ "  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
#~ "  -i,  --input-file=FILE      download URLs found in FILE.\n"
#~ "  -F,  --force-html           treat input file as HTML.\n"
#~ "  -B,  --base=URL             prepends URL to relative links in -F -i "
#~ "file.\n"
#~ "\n"
#~ msgstr ""
#~ "Καταγραφή·και·αρχείο·εισόδου:\n"
#~ "  -o,  --output-file=ΑΡΧΕΙΟ   καταγραφή·μηνυμάτων·στο·ΑΡΧΕΙΟ.\n"
#~ "  -a,  --append-output=ΑΡΧΕΙΟ προσθήκη·μηνυμάτων·στο·ΑΡΧΕΙΟ.\n"
#~ "  -d,  --debug                εμφάνιση·πληροφοριών·εκσφαλμάτωσης.\n"
#~ "  -q,  --quiet                σιωπηλά·(χωρίς·έξοδο).\n"
#~ "  -v,  --verbose              περιφραστικά·(εξ'·ορισμού·ρύθμιση).\n"
#~ "  -nv, --non-verbose          απενεργοποίηση·περιφραστικότητας,"
#~ "·χωρίς·να·είναι·και·σιωπηλό.\n"
#~ "  -i,  --input-file=ΑΡΧΕΙΟ    ανάγνωση·URL·από·το·ΑΡΧΕΙΟ.\n"
#~ "  -F,  --force-html           "
#~ "μεταχείριση·αρχείου·εισόδου·ως·αρχείο·HTML.\n"
#~ "  -B,  --base=URL             "
#~ "προσθέτει·το·URL·στους·σχετικούς·συνδέσμους·στο·-F·-i·αρχείο.\n"
#~ "       --sslcertfile=ΑΡΧΕΙΟ   προαιρετικό·πιστοποιητικό·πελάτη.\n"
#~ "       --sslcertkey=ΑΡΧΕΙΟ    προαιρετικό αρχείο κλειδιού για αυτό το "
#~ "πιστοποιητικό.\n"
#~ "       --egd-file=ΑΡΧΕΙΟ      όνομα αρχείου για τον υποδοχέα EGD.\n"
#~ "\n"

#, fuzzy
#~ msgid ""
#~ "Download:\n"
#~ "  -t,  --tries=NUMBER           set number of retries to NUMBER (0 "
#~ "unlimits).\n"
#~ "       --retry-connrefused      retry even if connection is refused.\n"
#~ "  -O   --output-document=FILE   write documents to FILE.\n"
#~ "  -nc, --no-clobber             don't clobber existing files or use .# "
#~ "suffixes.\n"
#~ "  -c,  --continue               resume getting a partially-downloaded "
#~ "file.\n"
#~ "       --progress=TYPE          select progress gauge type.\n"
#~ "  -N,  --timestamping           don't re-retrieve files unless newer than "
#~ "local.\n"
#~ "  -S,  --server-response        print server response.\n"
#~ "       --spider                 don't download anything.\n"
#~ "  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
#~ "       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
#~ "       --connect-timeout=SECS   set the connect timeout to SECS.\n"
#~ "       --read-timeout=SECS      set the read timeout to SECS.\n"
#~ "  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
#~ "       --waitretry=SECONDS      wait 1...SECONDS between retries of a "
#~ "retrieval.\n"
#~ "       --random-wait            wait from 0...2*WAIT secs between "
#~ "retrievals.\n"
#~ "  -Y,  --proxy=on/off           turn proxy on or off.\n"
#~ "  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
#~ "       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local "
#~ "host.\n"
#~ "       --limit-rate=RATE        limit download rate to RATE.\n"
#~ "       --dns-cache=off          disable caching DNS lookups.\n"
#~ "       --restrict-file-names=OS restrict chars in file names to ones OS "
#~ "allows.\n"
#~ "\n"
#~ msgstr ""
#~ "Μεταφόρτωση:\n"
#~ "       --bind-address=ΔΙΕΥΘΥΝΣΗ σύνδεση στη ΔΙΕΥΘΥΝΣΗ (όνομα συστήματος ή "
#~ "IP) στο τοπικό σύστημα.\n"
#~ "  -t,  --tries=ΑΡΙΘΜΟΣ          ορισμός του αριθμού των προσπαθειών σε "
#~ "ΑΡΙΘΜΟΣ (0 για χωρίς όριο).\n"
#~ "  -O   --output-document=ΑΡΧΕΙΟ εγγραφή εγγράφων στο ΑΡΧΕΙΟ.\n"
#~ "  -nc, --no-clobber             να μην αλλαχτούν τα ονόματα υπαρχόντων "
#~ "αρχείων ή να δοθούν καταλήξεις .#.\n"
#~ "  -c,  --continue               συνέχιση ανάκτησης υπάρχοντος αρχείου.\n"
#~ "       --progress=ΜΟΡΦΗ         επιλογή της μορφής εμφάνισης της προόδου "
#~ "ανάκτησης.\n"
#~ "  -N,  --timestamping           αποφυγή ανάκτησης αρχείων παλαιότερων των "
#~ "τοπικών.\n"
#~ "  -S,  --server-response        εμφάνιση αποκρίσεων του διακομιστή.\n"
#~ "       --spider                 αποφυγή ανάκτησης οποιουδήποτε αρχείου.\n"
#~ "  -T,  --timeout=ΔΕΥΤΕΡΟΛΕΠΤΑ   ορισμός χρονικού ορίου ανάκτησης σε "
#~ "ΔΕΥΤΕΡΟΛΕΠΤΑ.\n"
#~ "  -w,  --wait=ΔΕΥΤΕΡΟΛΕΠΤΑ      αναμονή ΔΕΥΤΕΡΟΛΕΠΤΑ μεταξύ ανακτήσεων.\n"
#~ "       --waitretry=ΔΕΥΤΕΡΟΛΕΠΤΑ αναμονή 1...ΔΕΥΤΕΡΟΛΕΠΤΑ μεταξύ "
#~ "προσπαθειών ανάκτησης.\n"
#~ "       --random-wait            αναμονή από 0...2*ΚΑΘΥΣΤΕΡΗΣΗ "
#~ "δευτερόλεπτα μεταξύ ανακτήσεων.\n"
#~ "  -Y,  --proxy=on/off           ρύθμιση χρήσης διαμεσολαβητή σε ενεργό "
#~ "(on) ή ανενεργό (off).\n"
#~ "  -Q,  --quota=ΑΡΙΘΜΟΣ          ορισμός ορίου συνολικού μεγέθους αρχείων "
#~ "προς ανάκτηση σε ΑΡΙΘΜΟ.\n"
#~ "       --limit-rate=ΡΥΘΜΟΣ      περιορισμός του ρυθμού ανάκτησης σε "
#~ "ΡΥΘΜΟΣ.\n"
#~ "\n"

#, fuzzy
#~ msgid ""
#~ "Directories:\n"
#~ "  -nd, --no-directories            don't create directories.\n"
#~ "  -x,  --force-directories         force creation of directories.\n"
#~ "  -nH, --no-host-directories       don't create host directories.\n"
#~ "  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
#~ "       --cut-dirs=NUMBER           ignore NUMBER remote directory "
#~ "components.\n"
#~ "\n"
#~ msgstr ""
#~ "Κατάλογοι:\n"
#~ "  -nd  --no-directories            αποφυγή δημιουργίας καταλόγων.\n"
#~ "  -x,  --force-directories         υποχρεωτική δημιουργία καταλόγων.\n"
#~ "  -nH, --no-host-directories       αποφυγή δημιουργίας host directories.\n"
#~ "  -P,  --directory-prefix=ΠΡΟΘΕΜΑ  αποθήκευση αρχείων στο ΠΡΟΘΕΜΑ/...\n"
#~ "       --cut-dirs=ΑΡΙΘΜΟΣ          αγνόηση ΑΡΙΘΜΟΣ στοιχείων "
#~ "απομακρυσμένων καταλόγων\n"
#~ "\n"

#, fuzzy
#~ msgid ""
#~ "HTTP options:\n"
#~ "       --http-user=USER      set http user to USER.\n"
#~ "       --http-passwd=PASS    set http password to PASS.\n"
#~ "  -C,  --cache=on/off        (dis)allow server-cached data (normally "
#~ "allowed).\n"
#~ "  -E,  --html-extension      save all text/html documents with .html "
#~ "extension.\n"
#~ "       --ignore-length       ignore `Content-Length' header field.\n"
#~ "       --header=STRING       insert STRING among the headers.\n"
#~ "       --proxy-user=USER     set USER as proxy username.\n"
#~ "       --proxy-passwd=PASS   set PASS as proxy password.\n"
#~ "       --referer=URL         include `Referer: URL' header in HTTP "
#~ "request.\n"
#~ "  -s,  --save-headers        save the HTTP headers to file.\n"
#~ "  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
#~ "       --no-http-keep-alive  disable HTTP keep-alive (persistent "
#~ "connections).\n"
#~ "       --cookies=off         don't use cookies.\n"
#~ "       --load-cookies=FILE   load cookies from FILE before session.\n"
#~ "       --save-cookies=FILE   save cookies to FILE after session.\n"
#~ "       --post-data=STRING    use the POST method; send STRING as the "
#~ "data.\n"
#~ "       --post-file=FILE      use the POST method; send contents of FILE.\n"
#~ "\n"
#~ msgstr ""
#~ "Επιλογές HTTP:\n"
#~ "       --http-user=ΧΡΗΣΤΗΣ   ορισμός χρήστη http σε ΧΡΗΣΤΗ.\n"
#~ "       --http-passwd=ΚΩΔΙΚΟΣ ορισμός κωδικού χρήστη http σε ΚΩΔΙΚΟΣ.\n"
#~ "  -C,  --cache=on/off        αποτροπή/χρήση δεδομένων του διαμεσολαβητή "
#~ "(κανονικά επιτρέπεται).\n"
#~ "  -E,  --html-extension      αποθήκευση όλων των εγγράφων text/html με "
#~ "κατάληξη .html.\n"
#~ "       --ignore-length       αγνόηση του πεδίου `Content-Length' της "
#~ "κεφαλίδας.\n"
#~ "       --header=ΑΛΦΑΡΙΘΜΗΤΙΚΟ  εισαγωγή του ΑΛΦΑΡΙΘΜΗΤΙΚΟ στην κεφαλίδα.\n"
#~ "       --proxy-user=ΧΡΗΣΤΗΣ  ορισμός του ΧΡΗΣΤΗΣ για χρήστη του "
#~ "διαμεσολαβητή.\n"
#~ "       --proxy-passwd=ΚΩΔΙΚΟΣ  ορισμός του ΚΩΔΙΚΟΣ για κωδικός στο "
#~ "διαμεσολαβητή.\n"
#~ "       --referer=URL         χρήση κεφαλίδας `Referer: URL' στην αίτηση "
#~ "HTTP.\n"
#~ "  -s,  --save-headers        αποθήκευση των HTTP κεφαλίδων σε αρχείο.\n"
#~ "  -U,  --user-agent=ΠΡΑΚΤΟΡΑΣ χρήση του ΠΡΑΚΤΟΡΑΣ αντί του Wget/ΕΚΔΟΣΗ.\n"
#~ "       --no-http-keep-alive  απενεργοποίηση του HTTP keep-alive "
#~ "(συνδέσεις διαρκείας).\n"
#~ "       --cookies=off         να μη γίνει χρήση των cookies.\n"
#~ "       --load-cookies=ΑΡΧΕΙΟ φόρτωση cookies από το ΑΡΧΕΙΟ πριν τη "
#~ "συνεδρία.\n"
#~ "       --save-cookies=ΑΡΧΕΙΟ αποθήκευση των cookies στο ΑΡΧΕΙΟ μετά τη "
#~ "συνεδρία.\n"
#~ "\n"

#~ msgid ""
#~ "FTP options:\n"
#~ "  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
#~ "  -g,  --glob=on/off           turn file name globbing on or off.\n"
#~ "       --passive-ftp           use the \"passive\" transfer mode.\n"
#~ "       --retr-symlinks         when recursing, get linked-to files (not "
#~ "dirs).\n"
#~ "\n"
#~ msgstr ""
#~ "Επιλογές FTP:\n"
#~ "  -nr, --dont-remove-listing να μη διαγραφούν τα αρχεία `.listing'.\n"
#~ "  -g,  --glob=on/off         (απ)ενεργοποίηση ταιριάσματος ονομάτων "
#~ "αρχείων.\n"
#~ "       --passive-ftp         χρήση κατάστασης μεταφοράς \"passive\" για "
#~ "το FTP.\n"
#~ "       --retr-symlinks       κατά την αναδρομική ανάκτηση, λήψη "
#~ "αναφερόμενων αρχείων (όχι κατάλογοι).\n"
#~ "\n"

#, fuzzy
#~ msgid ""
#~ "Recursive retrieval:\n"
#~ "  -r,  --recursive          recursive download.\n"
#~ "  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
#~ "infinite).\n"
#~ "       --delete-after       delete files locally after downloading them.\n"
#~ "  -k,  --convert-links      convert non-relative links to relative.\n"
#~ "  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
#~ "  -m,  --mirror             shortcut option equivalent to -r -N -l inf -"
#~ "nr.\n"
#~ "  -p,  --page-requisites    get all images, etc. needed to display HTML "
#~ "page.\n"
#~ "       --strict-comments    turn on strict (SGML) handling of HTML "
#~ "comments.\n"
#~ "\n"
#~ msgstr ""
#~ "Αναδρομική ανάκτηση:\n"
#~ "  -r,  --recursive             αναδρομική ανάκτηση -- χρήση με σύνεση!\n"
#~ "  -l,  --level=ΑΡΙΘΜΟΣ         μέγιστο βάθος αναδρομής (`inf' ή 0 για "
#~ "απεριόριστο).\n"
#~ "       --delete-after          διαγραφή αρχείων τοπικά μετά τη "
#~ "μεταφόρτωσή τους.\n"
#~ "  -k,  --convert-links         μετατροπή μη-σχετικών συνδέσμων σε "
#~ "σχετικούς.\n"
#~ "  -K,  --backup-converted      πριν τη μετατροπή του αρχείου Χ, διατήρηση "
#~ "αντιγράφου ασφαλείας X.orig.\n"
#~ "  -m,  --mirror                σύντομη επιλογή, ισοδύναμη με -r -N -l inf "
#~ "-nr.\n"
#~ "  -p,  --page-requisites       λήψη όλων των εικόνων, κλπ. που "
#~ "απαιτούνται για την εμφάνιση σελίδας HTML.\n"
#~ "\n"

#~ msgid ""
#~ "Recursive accept/reject:\n"
#~ "  -A,  --accept=LIST                comma-separated list of accepted "
#~ "extensions.\n"
#~ "  -R,  --reject=LIST                comma-separated list of rejected "
#~ "extensions.\n"
#~ "  -D,  --domains=LIST               comma-separated list of accepted "
#~ "domains.\n"
#~ "       --exclude-domains=LIST       comma-separated list of rejected "
#~ "domains.\n"
#~ "       --follow-ftp                 follow FTP links from HTML "
#~ "documents.\n"
#~ "       --follow-tags=LIST           comma-separated list of followed HTML "
#~ "tags.\n"
#~ "  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML "
#~ "tags.\n"
#~ "  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
#~ "  -L,  --relative                   follow relative links only.\n"
#~ "  -I,  --include-directories=LIST   list of allowed directories.\n"
#~ "  -X,  --exclude-directories=LIST   list of excluded directories.\n"
#~ "  -np, --no-parent                  don't ascend to the parent "
#~ "directory.\n"
#~ "\n"
#~ msgstr ""
#~ "Αναδρομική αποδοχή/απόρριψη:\n"
#~ "  -A,  --accept=ΛΙΣΤΑ               λίστα διαχωριζόμενη με κόμμα από "
#~ "αποδεκτές καταλήξεις.\n"
#~ "  -R,  --reject=ΛΙΣΤΑ               λίστα διαχωριζόμενη με κόμμα από μη-"
#~ "αποδεκτές καταλήξεις.\n"
#~ "  -D,  --domains=ΛΙΣΤΑ              λίστα διαχωριζόμενη με κόμμα από "
#~ "αποδεκτά επιθήματα.\n"
#~ "       --exclude-domains=ΛΙΣΤΑ      λίστα διαχωριζόμενη με κόμμα από μη-"
#~ "αποδεκτά επιθήματα.\n"
#~ "       --follow-ftp                 ακολούθηση συνδέσμων FTP από έγγραφα "
#~ "HTML.\n"
#~ "       --follow-tags=ΛΙΣΤΑ          λίστα διαχωριζόμενη με κόμμα με "
#~ "συνδέσμους που έχουν ακολουθηθεί.\n"
#~ "  -G,  --ignore-tags=ΛΙΣΤΑ          λίστα διαχωριζόμενη με κόμμα με "
#~ "συνδέσμους που έχουν αγνοηθεί.\n"
#~ "  -H,  --span-hosts                 επίσκεψη και ξένων διακομιστών κατά "
#~ "την αναδρομή.\n"
#~ "  -L,  --relative                   ακολούθηση μόνο σχετικών URL.\n"
#~ "  -I,  --include-directories=ΛΙΣΤΑ  λίστα επιτρεπτών καταλόγων.\n"
#~ "  -X,  --exclude-directories=ΛΙΣΤΑ  λίστα μη-επιτρεπτών καταλόγων.\n"
#~ "  -np, --no-parent                  απενεργοποίηση πρόσβασης και στο "
#~ "γονικό κατάλογο.\n"
#~ "\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Αυτό το πρόγραμμα διανέμεται με την ελπίδα ότι θα είναι χρήσιμο,\n"
#~ "αλλά ΧΩΡΙΣ ΚΑΜΙΑ ΕΓΓΫΗΣΗ· χωρίς ούτε έμμεση εγγύηση\n"
#~ "ΛΕΙΤΟΥΡΓΙΚΟΤΗΤΑΣ ή ΚΑΤΑΛΛΗΛΟΤΗΤΑΣ ΓΙΑ ΕΝΑ ΣΥΓΚΕΚΡΙΜΕΝΟ ΣΚΟΠΟ.\n"
#~ "Αναφερθείτε στη Γενική Δημόσια Άδεια GNU για περισσότερες λεπτομέρειες.\n"

#~ msgid "Starting WinHelp %s\n"
#~ msgstr "Εκκίνηση του WinHelp %s\n"

#~ msgid "%s: %s: Not enough memory.\n"
#~ msgstr "%s: %s: Δεν υπάρχει αρκετή μνήμη.\n"

#~ msgid "Syntax error in Set-Cookie at character `%c'.\n"
#~ msgstr "Συνακτικό σφάλμα στο Set-Cookie στο χαρακτήρα `%c'.\n"

#~ msgid "%s: %s: Cannot convert `%s' to an IP address.\n"
#~ msgstr "%s: %s: Δεν είναι δυνατή η μετατροπή του `%s' σε διεύθυνση IP.\n"

#~ msgid "%s: %s: invalid command\n"
#~ msgstr "%s: %s: μη έγκυρη εντολή\n"

#~ msgid "Could not find proxy host.\n"
#~ msgstr "Αδυναμία εύρεσης διαμεσολαβητή.\n"

#~ msgid "%s: Redirection cycle detected.\n"
#~ msgstr "%s: Ανιχνεύτηκε κυκλική επανακατεύθυνση.\n"

#~ msgid "Connection to %s:%hu refused.\n"
#~ msgstr "Σύνδεση με %s:%hu δεν επετράπει.\n"

#~ msgid "%s: Cannot determine user-id.\n"
#~ msgstr "%s: Δεν είναι δυνατή η αναγνώριση της ταυτότητας χρήστη.\n"

#~ msgid "%s: Warning: uname failed: %s\n"
#~ msgstr "%s: Προειδοποίηση: η uname απέτυχε: %s\n"

#~ msgid "%s: Warning: gethostname failed\n"
#~ msgstr "%s: Προειδοποίηση: η gethostname απέτυχε\n"

#~ msgid "%s: Warning: cannot determine local IP address.\n"
#~ msgstr ""
#~ "%s: Προειδοποίηση: δεν είναι δυνατή η ανάγνωση της τοπικής διεύθυνσης "
#~ "IP.\n"

#~ msgid "%s: Warning: cannot reverse-lookup local IP address.\n"
#~ msgstr ""
#~ "%s: Προειδοποίηση: δεν είναι δυνατή η ανάγνωση της τοπικής διεύθυνσης "
#~ "IP.\n"

#~ msgid "%s: Warning: reverse-lookup of local address did not yield FQDN!\n"
#~ msgstr ""
#~ "%s: Προειδοποίηση: η ανάστροφη αναζήτηση της τοπικής διεύθυνσης δεν "
#~ "παρήγαγε το FDQN!\n"

#~ msgid "%s: Out of memory.\n"
#~ msgstr "%s: Η μνήμη εξαντλήθηκε.\n"

#~ msgid ""
#~ "\n"
#~ "CTRL+Break received, redirecting output to `%s'.\n"
#~ "Execution continued in background.\n"
#~ "You may stop Wget by pressing CTRL+ALT+DELETE.\n"
#~ msgstr ""
#~ "\n"
#~ "CTRL+Break πατήθηκε, ανακατεύθυνση εξόδου στο `%s'.\n"
#~ "Η εκτέλεση συνεχίζεται στο παρασκήνιο.\n"
#~ "Μπορείτε να διακόψετε το Wget πατώντας CTRL+ALT+DELETE.\n"

#~ msgid "%s: Redirection to itself.\n"
#~ msgstr "%s: Ανακατεύθυνση στον εαυτό του.\n"

#~ msgid "Error (%s): Link %s without a base provided.\n"
#~ msgstr "Σφάλμα (%s): Δόθηκε τοποθεσία %s χωρίς βάση.\n"

#~ msgid "Error (%s): Base %s relative, without referer URL.\n"
#~ msgstr "Σφάλμα (%s): Η βάση %s είναι σχετική, χωρίς URL αναφοράς.\n"

#~ msgid "Unknown/unsupported protocol"
#~ msgstr "Άγνωστο/μη υποστηριζόμενο πρωτόκολλο"

#~ msgid "Invalid port specification"
#~ msgstr "Μη έγκυρη ρύθμιση θύρας (port)"

#~ msgid ""
#~ "Local file `%s' is more recent, not retrieving.\n"
#~ "\n"
#~ msgstr ""
#~ "Το τοπικό αρχείο `%s' είναι πιο πρόσφατο, αποφεύγεται η ανάκτηση.\n"
#~ "\n"

#~ msgid "%s: unrecognized option, character code 0%o\n"
#~ msgstr "%s: μη αναγνωρίσιμη επιλογή, κωδικός χαρακτήρα 0%o\n"

#~ msgid "%s: unrecognized option `-%c'\n"
#~ msgstr "%s: μη αναγνωρίσημη επιλογή `-%c'\n"

#~ msgid "%s: option `-%c' requires an argument\n"
#~ msgstr "%s: η επιλογή `-%c' απαιτεί ένα όρισμα\n"