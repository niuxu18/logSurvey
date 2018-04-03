# Greek messages for GNU wget.
# Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.
# Simos Xenitellis <simos@hellug.gr>, 1999, 2000, 2001, 2002, 2003, 2004.
#
msgid ""
msgstr ""
"Project-Id-Version: wget 1.9.1\n"
"Report-Msgid-Bugs-To: \n"
"POT-Creation-Date: 2003-10-11 16:21+0200\n"
"PO-Revision-Date: 2004-12-15 19:46+0000\n"
"Last-Translator: Simos Xenitellis <simos74@gmx.net>\n"
"Language-Team: Greek <nls@tux.hellug.gr>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=utf-8\n"
"Content-Transfer-Encoding: 8-bit\n"

#: src/connect.c:88
#, c-format
msgid "Unable to convert `%s' to a bind address.  Reverting to ANY.\n"
msgstr ""

#: src/connect.c:165
#, c-format
msgid "Connecting to %s[%s]:%hu... "
msgstr "Σύνδεση με %s[%s]:%hu... "

#: src/connect.c:168
#, c-format
msgid "Connecting to %s:%hu... "
msgstr "Σύνδεση με %s:%hu... "

#: src/connect.c:222
msgid "connected.\n"
msgstr "συνδέθηκε.\n"

#: src/convert.c:171
#, c-format
msgid "Converted %d files in %.2f seconds.\n"
msgstr "Μετατράπηκαν %d αρχεία σε %.2f δευτερόλεπτα.\n"

#: src/convert.c:197
#, c-format
msgid "Converting %s... "
msgstr "Μετατροπή του %s... "

#: src/convert.c:210
msgid "nothing to do.\n"
msgstr "τίποτα να κάνω.\n"

#: src/convert.c:218 src/convert.c:242
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Αδυναμία μετατροπής συνδέσμων στο %s: %s\n"

#: src/convert.c:233
#, c-format
msgid "Unable to delete `%s': %s\n"
msgstr "Αποτυχία διαγραφής του `%s': %s\n"

#: src/convert.c:439
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Αδύνατη η λήψη αντιγράγου ασφαλείας του %s ως %s: %s\n"

#: src/cookies.c:606
#, c-format
msgid "Error in Set-Cookie, field `%s'"
msgstr "Σφάλμα στο Set-Cookie, πεδίο `%s'"

#: src/cookies.c:629
#, fuzzy, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Συντακτικό σφάλμα στο Set-Cookie: πρόωρο τέλος αλφαριθμητικού.\n"

#: src/cookies.c:1426
#, c-format
msgid "Cannot open cookies file `%s': %s\n"
msgstr "Αδύνατο το άνοιγμα του αρχείου cookies `%s': %s\n"

#: src/cookies.c:1438
#, c-format
msgid "Error writing to `%s': %s\n"
msgstr "Σφάλμα στην εγγραφή στο `%s': %s\n"

#: src/cookies.c:1442
#, c-format
msgid "Error closing `%s': %s\n"
msgstr "Σφάλμα στο κλείσιμο του `%s': %s\n"

#: src/ftp-ls.c:812
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Μη υποστηριζόμενος τύπος καταλόγου, δοκιμάζω να τον διαβάσω σαν Unix κατάλογο.\n"

#: src/ftp-ls.c:857 src/ftp-ls.c:859
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Κατάλογος του /%s στο %s:%d"

#: src/ftp-ls.c:882
msgid "time unknown       "
msgstr "ώρα άγνωστη        "

#: src/ftp-ls.c:886
msgid "File        "
msgstr "Αρχείο      "

#: src/ftp-ls.c:889
msgid "Directory   "
msgstr "Κατάλογος   "

#: src/ftp-ls.c:892
msgid "Link        "
msgstr "Σύνδεση     "

#: src/ftp-ls.c:895
msgid "Not sure    "
msgstr "Όχι απόλυτα σίγουρος   "

#: src/ftp-ls.c:913
#, c-format
msgid " (%s bytes)"
msgstr " (%s byte)"

#. Second: Login with proper USER/PASS sequence.
#: src/ftp.c:202
#, c-format
msgid "Logging in as %s ... "
msgstr "Αυθεντικοποίηση ως %s ... "

#: src/ftp.c:215 src/ftp.c:268 src/ftp.c:299 src/ftp.c:353 src/ftp.c:468
#: src/ftp.c:519 src/ftp.c:551 src/ftp.c:611 src/ftp.c:675 src/ftp.c:748
#: src/ftp.c:796
msgid "Error in server response, closing control connection.\n"
msgstr "Σφάλμα στην απάντηση του διακομιστή, κλείνει η σύνδεση ελέγχου.\n"

#: src/ftp.c:223
msgid "Error in server greeting.\n"
msgstr "Σφάλμα στο μήνυμα αποδοχής του διακομιστή.\n"

#: src/ftp.c:231 src/ftp.c:362 src/ftp.c:477 src/ftp.c:560 src/ftp.c:621
#: src/ftp.c:685 src/ftp.c:758 src/ftp.c:806
msgid "Write failed, closing control connection.\n"
msgstr "Αποτυχία στην εγγραφή δεδομένων, κλείνει η σύνδεση ελέγχου.\n"

#: src/ftp.c:238
msgid "The server refuses login.\n"
msgstr "Ο διακομιστής απαγορεύει τη σύνδεση.\n"

#: src/ftp.c:245
msgid "Login incorrect.\n"
msgstr "Σφάλμα στην αυθεντικοποίηση.\n"

#: src/ftp.c:252
msgid "Logged in!\n"
msgstr "Επιτυχής σύνδεση!\n"

#: src/ftp.c:277
msgid "Server error, can't determine system type.\n"
msgstr "Σφάλμα διακομιστή, δεν μπορώ να συμπεράνω τον τύπο του συστήματος.\n"

#: src/ftp.c:287 src/ftp.c:596 src/ftp.c:659 src/ftp.c:716
msgid "done.    "
msgstr "έγινε.    "

#: src/ftp.c:341 src/ftp.c:498 src/ftp.c:533 src/ftp.c:779 src/ftp.c:827
msgid "done.\n"
msgstr "έγινε.\n"

#: src/ftp.c:370
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Άγνωστος τύπος `%c', διακοπή της σύνδεσης.\n"

#: src/ftp.c:383
msgid "done.  "
msgstr "έγινε.  "

#: src/ftp.c:389
msgid "==> CWD not needed.\n"
msgstr "==> CWD δεν απαιτήται.\n"

#: src/ftp.c:484
#, c-format
msgid ""
"No such directory `%s'.\n"
"\n"
msgstr "Δεν υπάρχει τέτοιος κατάλογος `%s'.\n"

#. do not CWD
#: src/ftp.c:502
msgid "==> CWD not required.\n"
msgstr "==> CWD δεν απαιτείται.\n"

#: src/ftp.c:567
msgid "Cannot initiate PASV transfer.\n"
msgstr "Δεν είναι δυνατή να ξεκινήσει μεταφορά τύπου PASV.\n"

#: src/ftp.c:571
msgid "Cannot parse PASV response.\n"
msgstr "Δεν είναι δυνατή η μετάφραση της απάντησης PASV.\n"

#: src/ftp.c:588
#, c-format
msgid "couldn't connect to %s:%hu: %s\n"
msgstr "αδύνατη η σύνδεση στο %s:%hu: %s\n"

#: src/ftp.c:638
#, c-format
msgid "Bind error (%s).\n"
msgstr "Σφάλμα στη σύνδεση (%s).\n"

#: src/ftp.c:645
msgid "Invalid PORT.\n"
msgstr "Μη έγκυρη ΘΥΡΑ.\n"

#: src/ftp.c:698
#, c-format
msgid ""
"\n"
"REST failed; will not truncate `%s'.\n"
msgstr ""
"\n"
"Αποτυχία της REST· δε θα επανακτηθεί το `%s'.\n"

#: src/ftp.c:705
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"Αποτυχία στην εντολή REST, εκκίνηση από την αρχή.\n"

#: src/ftp.c:766
#, c-format
msgid ""
"No such file `%s'.\n"
"\n"
msgstr ""
"Δεν υπάρχει αρχείο `%s'.\n"
"\n"

#: src/ftp.c:814
#, c-format
msgid ""
"No such file or directory `%s'.\n"
"\n"
msgstr ""
"Δεν υπάρχει αρχείο ή κατάλογος `%s'.\n"
"\n"

#: src/ftp.c:898 src/ftp.c:906
#, c-format
msgid "Length: %s"
msgstr "Μήκος: %s"

#: src/ftp.c:900 src/ftp.c:908
#, c-format
msgid " [%s to go]"
msgstr " [%s για πέρας]"

#: src/ftp.c:910
msgid " (unauthoritative)\n"
msgstr " (ανεπίσημο)\n"

#: src/ftp.c:936
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, κλείσιμο σύνδεσης ελέγχου.\n"

#: src/ftp.c:944
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Σύνδεση δεδομένων: %s; "

#: src/ftp.c:961
msgid "Control connection closed.\n"
msgstr "Η σύνδεση ελέγχου έκλεισε.\n"

#: src/ftp.c:979
msgid "Data transfer aborted.\n"
msgstr "Η μεταφορά δεδομένων διακόπηκε ανώμαλα.\n"

#: src/ftp.c:1044
#, c-format
msgid "File `%s' already there, not retrieving.\n"
msgstr "Το αρχείο `%s' υπάρχει ήδη, δεν επανακτάται.\n"

#: src/ftp.c:1114 src/http.c:1716
#, c-format
msgid "(try:%2d)"
msgstr "(προσπάθεια:%2d)"

#: src/ftp.c:1180 src/http.c:1975
#, c-format
msgid ""
"%s (%s) - `%s' saved [%ld]\n"
"\n"
msgstr ""
"%s (%s) - `%s' αποθηκεύτηκε [%ld]\n"
"\n"

#: src/ftp.c:1222 src/main.c:890 src/recur.c:377 src/retr.c:596
#, c-format
msgid "Removing %s.\n"
msgstr "Διαγραφή του %s.\n"

#: src/ftp.c:1264
#, c-format
msgid "Using `%s' as listing tmp file.\n"
msgstr "Χρήση του `%s' για προσωρινό αρχείο περιεχομένων καταλόγου.\n"

#: src/ftp.c:1279
#, c-format
msgid "Removed `%s'.\n"
msgstr "Διαγραφή του `%s'.\n"

#: src/ftp.c:1314
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Το επίπεδο αναδρομής %d ξεπέρασε το μέγιστο επίπεδο αναδρομής %d.\n"

#. Remote file is older, file sizes can be compared and
#. are both equal.
#: src/ftp.c:1384
#, c-format
msgid "Remote file no newer than local file `%s' -- not retrieving.\n"
msgstr ""
"Το αρχείο στο διακομιστή δεν είναι νεώτερο του τοπικού `%s' -- δε γίνεται ανάκτηση.\n"
"\n"

#. Remote file is newer or sizes cannot be matched
#: src/ftp.c:1391
#, c-format
msgid ""
"Remote file is newer than local file `%s' -- retrieving.\n"
"\n"
msgstr ""
"Το αρχείο στο διακομιστή είναι νεώτερο του τοπικού `%s' -- γίνεται ανάκτηση.\n"
"\n"

#. Sizes do not match
#: src/ftp.c:1398
#, c-format
msgid ""
"The sizes do not match (local %ld) -- retrieving.\n"
"\n"
msgstr "Τα μεγέθη δεν είναι ίσα (τοπικό %ld) -- γίνεται ανάκτηση.\n"

#: src/ftp.c:1415
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Μη έγκυρο όνομα συμβολικού συνδέσμου, παρακάμπτεται.\n"

#: src/ftp.c:1432
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Υπάρχει ήδη ο ορθός σύνδεσμος %s -> %s\n"
"\n"

#: src/ftp.c:1440
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Δημιουργία συνδέσμου %s -> %s\n"

#: src/ftp.c:1451
#, c-format
msgid "Symlinks not supported, skipping symlink `%s'.\n"
msgstr "Δεν υποστηρίζονται σύνδεσμοι, παράκαμψη συνδέσμου `%s'.\n"

#: src/ftp.c:1463
#, c-format
msgid "Skipping directory `%s'.\n"
msgstr "Παράκαμψη καταλόγου `%s'.\n"

#: src/ftp.c:1472
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: άγνωστο/μη υποστηριζόμενο είδος αρχείου.\n"

#: src/ftp.c:1499
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: εσφαλμένη ημερομηνία αρχείου.\n"

#: src/ftp.c:1524
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Δεν θα ανακτηθούν κατάλογοι διότι το βάθος είναι %d (μέγιστο %d).\n"

#: src/ftp.c:1574
#, c-format
msgid "Not descending to `%s' as it is excluded/not-included.\n"
msgstr "Δεν επεκτεινόμαστε στο `%s' διότι είναι εξαιρούμενο/μη-συμπεριλαμβανόμενο\n"

#: src/ftp.c:1639 src/ftp.c:1652
#, c-format
msgid "Rejecting `%s'.\n"
msgstr "Απόρριψη του `%s'.\n"

#. No luck.
#. #### This message SUCKS.  We should see what was the
#. reason that nothing was retrieved.
#: src/ftp.c:1698
#, c-format
msgid "No matches on pattern `%s'.\n"
msgstr "Δεν βρέθηκαν ταιριάσματα στη μορφή `%s'.\n"

#: src/ftp.c:1764
#, c-format
msgid "Wrote HTML-ized index to `%s' [%ld].\n"
msgstr "Γράφτηκε αρχείο καταλόγου σε HTML στο `%s' [%ld].\n"

#: src/ftp.c:1769
#, c-format
msgid "Wrote HTML-ized index to `%s'.\n"
msgstr "Γράφτηκε αρχείο καταλόγου σε HTML στο `%s'.\n"

#: src/gen_sslfunc.c:117
msgid "Could not seed OpenSSL PRNG; disabling SSL.\n"
msgstr "Αδύνατη η αρχικοποίηση της PRNG της OpenSSL· απενεργοποίηση του SSL.\n"

#: src/getopt.c:675
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: η επιλογή `%s' είναι αόριστη\n"

#: src/getopt.c:700
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: η επιλογή `--%s' δεν επιδέχεται όρισμα\n"

#: src/getopt.c:705
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: η επιλογή `%c%s' δεν επιδέχεται όρισμα\n"

#: src/getopt.c:723 src/getopt.c:896
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: η επιλογή `%s' απαιτεί όρισμα\n"

#. --option
#: src/getopt.c:752
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: μη αναγνωρίσημη επιλογή `--%s'\n"

#. +option or -option
#: src/getopt.c:756
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: μη αναγνωρίσιμη επιλογή `%c%s'\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:782
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: μη αποδεκτή επιλογή -- %c\n"

#: src/getopt.c:785
#, fuzzy, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: μη αποδεκτή επιλογή -- %c\n"

#. 1003.2 specifies the format of this message.
#: src/getopt.c:815 src/getopt.c:945
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: η επιλογή απαιτεί μια παράμετρο -- %c\n"

#: src/getopt.c:862
#, fuzzy, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: η επιλογή `%s' είναι αόριστη\n"

#: src/getopt.c:880
#, fuzzy, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: η επιλογή `--%s' δεν επιδέχεται όρισμα\n"

#: src/host.c:636
#, c-format
msgid "Resolving %s... "
msgstr "Εύρεση του %s... "

#: src/host.c:656 src/host.c:672
#, c-format
msgid "failed: %s.\n"
msgstr "απέτυχε: %s.\n"

#: src/host.c:674
#, fuzzy
msgid "failed: timed out.\n"
msgstr "απέτυχε: %s.\n"

#: src/host.c:762
msgid "Host not found"
msgstr "Ο διακομιστής δε βρέθηκε"

#: src/host.c:764
msgid "Unknown error"
msgstr "Άγνωστο σφάλμα"

#: src/html-url.c:293
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Αδύνατη η ανάλυση μη ολοκληρωμένου συνδέσμου %s.\n"

#. this is fatal
#: src/http.c:674
msgid "Failed to set up an SSL context\n"
msgstr "Αποτυχία δημιουργίας περιβάλλοντος SSL\n"

#: src/http.c:680
#, c-format
msgid "Failed to load certificates from %s\n"
msgstr "Αποτυχία φόρτωσης πιστοποιητικών από %s\n"

#: src/http.c:684 src/http.c:692
msgid "Trying without the specified certificate\n"
msgstr "Προσπάθεια χωρίς το καθορισμένο πιστοποιητικό\n"

#: src/http.c:688
#, c-format
msgid "Failed to get certificate key from %s\n"
msgstr "Αποτυχία λήψης κλειδιού πιστοποιητικού από %s\n"

#: src/http.c:761 src/http.c:1809
msgid "Unable to establish SSL connection.\n"
msgstr "Αδύνατη η σύσταση σύνδεσης SSL.\n"

#: src/http.c:770
#, c-format
msgid "Reusing connection to %s:%hu.\n"
msgstr "Χρήση ξανά της σύνδεσης στο %s:%hu.\n"

#: src/http.c:1034
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Σφάλμα στην εγγραφή της αίτησης HTTP: %s.\n"

#: src/http.c:1039
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Η αίτηση για %s στάλθηκε, αναμονή απάντησης... "

#: src/http.c:1083
msgid "End of file while parsing headers.\n"
msgstr "Τέλος αρχείου ενώ γινόταν επεξεργασία των κεφαλίδων.\n"

#: src/http.c:1093
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Σφάλμα ανάγνωσης (%s) στις κεφαλίδες.\n"

#: src/http.c:1128
msgid "No data received"
msgstr "Δεν ελήφθησαν δεδομένα"

#: src/http.c:1130
msgid "Malformed status line"
msgstr "Εσφαλμένη γραμμή κατάστασης"

#: src/http.c:1135
msgid "(no description)"
msgstr "(χωρίς περιγραφή)"

#: src/http.c:1267
msgid "Authorization failed.\n"
msgstr "Η αυθεντικοποίηση απέτυχε.\n"

#: src/http.c:1274
msgid "Unknown authentication scheme.\n"
msgstr "Άγνωστο σχήμα αυθεντικοποίησης.\n"

#: src/http.c:1314
#, c-format
msgid "Location: %s%s\n"
msgstr "Τοποθεσία: %s%s\n"

#: src/http.c:1315 src/http.c:1454
msgid "unspecified"
msgstr "μη ορισμένο"

#: src/http.c:1316
msgid " [following]"
msgstr " [ακολουθεί]"

#: src/http.c:1383
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"    Το αρχείο έχει ήδη ανακτηθεί πλήρως· τίποτα να κάνω.\n"

#: src/http.c:1401
#, c-format
msgid ""
"\n"
"Continued download failed on this file, which conflicts with `-c'.\n"
"Refusing to truncate existing file `%s'.\n"
"\n"
msgstr ""
"\n"
"Η συνέχιση της ανάκτησης απέτυχε για αυτό το αρχείο, που συγκρούεται με το `-c'.\n"
"Άρνηση εγγραφής πάνω στο υπάρχο αρχείο `%s'.\n"

#. No need to print this output if the body won't be
#. downloaded at all, or if the original server response is
#. printed.
#: src/http.c:1444
msgid "Length: "
msgstr "Μήκος: "

#: src/http.c:1449
#, c-format
msgid " (%s to go)"
msgstr " (%s μέχρι πέρας)"

#: src/http.c:1454
msgid "ignored"
msgstr "αγνοείται"

#: src/http.c:1598
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Προειδοποίηση: μεταχαρακτήρες (wildcards) δεν υποστηρίζονται στο HTTP.\n"

#. If opt.noclobber is turned on and file already exists, do not
#. retrieve the file
#: src/http.c:1628
#, c-format
msgid "File `%s' already there, will not retrieve.\n"
msgstr "Το αρχείο `%s' είναι ήδη εδώ, δε θα ανακτηθεί.\n"

#: src/http.c:1800
#, c-format
msgid "Cannot write to `%s' (%s).\n"
msgstr "Αδυναμία στην εγγραφή στο `%s' (%s).\n"

#: src/http.c:1819
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ΣΦΑΛΜΑ: Μετάσταση (%d) χωρίς τοποθεσία.\n"

#: src/http.c:1851
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ΣΦΑΛΜΑ %d: %s.\n"

#: src/http.c:1864
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr "Κεφαλίδα Last-modified δεν υπάρχει -- χρονικές αναφορές απενεργοποιήθηκαν.\n"

#: src/http.c:1872
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr "Κεφαλίδα Last-modified δεν είναι έγκυρη -- χρονικές αναφορές αγνοούνται.\n"

#: src/http.c:1895
#, c-format
msgid ""
"Server file no newer than local file `%s' -- not retrieving.\n"
"\n"
msgstr ""
"Το αρχείο του διακομιστή δεν είναι νεώτερο από το τοπικό αρχείο `%s' -- δε γίνεται ανάκτηση.\n"
"\n"

#: src/http.c:1903
#, c-format
msgid "The sizes do not match (local %ld) -- retrieving.\n"
msgstr "Τα μεγέθη δεν είναι ίσα (τοπικό %ld) -- γίνεται ανάκτηση ξανά.\n"

#: src/http.c:1907
msgid "Remote file is newer, retrieving.\n"
msgstr "Απομακρυσμένο αρχείο είναι νεότερο, έναρξη ανάκτησης.\n"

#: src/http.c:1948
#, c-format
msgid ""
"%s (%s) - `%s' saved [%ld/%ld]\n"
"\n"
msgstr ""
"%s (%s) - `%s' αποθηκεύτηκε [%ld/%ld]\n"
"\n"

#: src/http.c:1998
#, c-format
msgid "%s (%s) - Connection closed at byte %ld. "
msgstr "%s (%s) - Η σύνδεση διακόπηκε στο byte %ld. "

#: src/http.c:2007
#, c-format
msgid ""
"%s (%s) - `%s' saved [%ld/%ld])\n"
"\n"
msgstr ""
"%s (%s) - `%s' αποθηκεύτηκε [%ld/%ld])\n"
"\n"

#: src/http.c:2028
#, c-format
msgid "%s (%s) - Connection closed at byte %ld/%ld. "
msgstr "%s (%s) - Η σύνδεση διακόπηκε στο byte %ld/%ld. "

#: src/http.c:2040
#, c-format
msgid "%s (%s) - Read error at byte %ld (%s)."
msgstr "%s (%s) - Σφάλμα ανάγνωσης στο byte %ld (%s)."

#: src/http.c:2049
#, c-format
msgid "%s (%s) - Read error at byte %ld/%ld (%s). "
msgstr "%s (%s) - Σφάλμα ανάγνωσης στο byte %ld/%ld (%s). "

#: src/init.c:342
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr ""

#: src/init.c:398 src/netrc.c:276
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Αδυναμία ανάγνωσης %s (%s).\n"

#: src/init.c:416 src/init.c:422
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Σφάλμα στο %s στη γραμμή %d.\n"

#: src/init.c:454
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to `%s'.\n"
msgstr "%s: Προειδοποίηση: Το wgetrc του συστήματος και του χρήστη δείχνουν στο ίδιο αρχείο `%s'.\n"

#: src/init.c:594
#, fuzzy, c-format
msgid "%s: Invalid --execute command `%s'\n"
msgstr "%s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:630
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean `%s', use `on' or `off'.\n"
msgstr "%s: %s: Παρακαλώ ορίστε on ή off.\n"

#: src/init.c:673
#, fuzzy, c-format
msgid "%s: %s: Invalid boolean `%s', use always, on, off, or never.\n"
msgstr "%s: %s: Παρακαλώ καθορίστε πάντα(always), ενεργό(on), ανενεργό(off) ή ποτέ(never).\n"

#: src/init.c:691
#, fuzzy, c-format
msgid "%s: %s: Invalid number `%s'.\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:930 src/init.c:949
#, fuzzy, c-format
msgid "%s: %s: Invalid byte value `%s'\n"
msgstr "%s: %s: Μη έγκυρος τύπος προόδου `%s'.\n"

#: src/init.c:974
#, fuzzy, c-format
msgid "%s: %s: Invalid time period `%s'\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:1051
#, fuzzy, c-format
msgid "%s: %s: Invalid header `%s'.\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:1106
#, c-format
msgid "%s: %s: Invalid progress type `%s'.\n"
msgstr "%s: %s: Μη έγκυρος τύπος προόδου `%s'.\n"

#: src/init.c:1157
#, fuzzy, c-format
msgid "%s: %s: Invalid restriction `%s', use `unix' or `windows'.\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/init.c:1198
#, fuzzy, c-format
msgid "%s: %s: Invalid value `%s'.\n"
msgstr "%s: %s: Μη έγκυρη ρύθμιση `%s'.\n"

#: src/log.c:636
#, c-format
msgid ""
"\n"
"%s received, redirecting output to `%s'.\n"
msgstr ""
"\n"
"%s λήφθηκε, ανακατεύθυνση εξόδου στο `%s'.\n"

#. Eek!  Opening the alternate log file has failed.  Nothing we
#. can do but disable printing completely.
#: src/log.c:643
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; απενεργοποίηση λήψης καταγραφών.\n"

#: src/main.c:127
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Χρήση: %s [ΕΠΙΛΟΓΗ]... [URL]...\n"

#: src/main.c:135
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, ένα μη-διαλογικό δικτυακό πρόγραμμα ανάκτησης αρχείων.\n"

#. Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
#. don't bitch.  Also, it makes translation much easier.
#: src/main.c:140
msgid ""
"\n"
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"\n"
"Οι υποχρεωτικοί παράμετροι στα λεκτικά ορίσματα είναι υποχρεωτικοί και για τα σύντομα ορίσματα.\n"
"\n"

#: src/main.c:144
msgid ""
"Startup:\n"
"  -V,  --version           display the version of Wget and exit.\n"
"  -h,  --help              print this help.\n"
"  -b,  --background        go to background after startup.\n"
"  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
"\n"
msgstr ""
"Έναρξη:\n"
"  -V,  --version           εμφάνιση της έκδοσης του Wget και έξοδος.\n"
"  -h,  --help              εμφάνιση της βοήθειας αυτής.\n"
"  -b,  --background        αποστολή στο παρασκήνιο μετά την έναρξη.\n"
"  -e,  --execute=ΕΝΤΟΛΗ    εκτέλεση μιας εντολής μορφής `.wgetrc'.\n"
"\n"

#: src/main.c:151
#, fuzzy
msgid ""
"Logging and input file:\n"
"  -o,  --output-file=FILE     log messages to FILE.\n"
"  -a,  --append-output=FILE   append messages to FILE.\n"
"  -d,  --debug                print debug output.\n"
"  -q,  --quiet                quiet (no output).\n"
"  -v,  --verbose              be verbose (this is the default).\n"
"  -nv, --non-verbose          turn off verboseness, without being quiet.\n"
"  -i,  --input-file=FILE      download URLs found in FILE.\n"
"  -F,  --force-html           treat input file as HTML.\n"
"  -B,  --base=URL             prepends URL to relative links in -F -i file.\n"
"\n"
msgstr ""
"Καταγραφή·και·αρχείο·εισόδου:\n"
"  -o,  --output-file=ΑΡΧΕΙΟ   καταγραφή·μηνυμάτων·στο·ΑΡΧΕΙΟ.\n"
"  -a,  --append-output=ΑΡΧΕΙΟ προσθήκη·μηνυμάτων·στο·ΑΡΧΕΙΟ.\n"
"  -d,  --debug                εμφάνιση·πληροφοριών·εκσφαλμάτωσης.\n"
"  -q,  --quiet                σιωπηλά·(χωρίς·έξοδο).\n"
"  -v,  --verbose              περιφραστικά·(εξ'·ορισμού·ρύθμιση).\n"
"  -nv, --non-verbose          απενεργοποίηση·περιφραστικότητας,·χωρίς·να·είναι·και·σιωπηλό.\n"
"  -i,  --input-file=ΑΡΧΕΙΟ    ανάγνωση·URL·από·το·ΑΡΧΕΙΟ.\n"
"  -F,  --force-html           μεταχείριση·αρχείου·εισόδου·ως·αρχείο·HTML.\n"
"  -B,  --base=URL             προσθέτει·το·URL·στους·σχετικούς·συνδέσμους·στο·-F·-i·αρχείο.\n"
"       --sslcertfile=ΑΡΧΕΙΟ   προαιρετικό·πιστοποιητικό·πελάτη.\n"
"       --sslcertkey=ΑΡΧΕΙΟ    προαιρετικό αρχείο κλειδιού για αυτό το πιστοποιητικό.\n"
"       --egd-file=ΑΡΧΕΙΟ      όνομα αρχείου για τον υποδοχέα EGD.\n"
"\n"

#: src/main.c:163
#, fuzzy
msgid ""
"Download:\n"
"  -t,  --tries=NUMBER           set number of retries to NUMBER (0 unlimits).\n"
"       --retry-connrefused      retry even if connection is refused.\n"
"  -O   --output-document=FILE   write documents to FILE.\n"
"  -nc, --no-clobber             don't clobber existing files or use .# suffixes.\n"
"  -c,  --continue               resume getting a partially-downloaded file.\n"
"       --progress=TYPE          select progress gauge type.\n"
"  -N,  --timestamping           don't re-retrieve files unless newer than local.\n"
"  -S,  --server-response        print server response.\n"
"       --spider                 don't download anything.\n"
"  -T,  --timeout=SECONDS        set all timeout values to SECONDS.\n"
"       --dns-timeout=SECS       set the DNS lookup timeout to SECS.\n"
"       --connect-timeout=SECS   set the connect timeout to SECS.\n"
"       --read-timeout=SECS      set the read timeout to SECS.\n"
"  -w,  --wait=SECONDS           wait SECONDS between retrievals.\n"
"       --waitretry=SECONDS      wait 1...SECONDS between retries of a retrieval.\n"
"       --random-wait            wait from 0...2*WAIT secs between retrievals.\n"
"  -Y,  --proxy=on/off           turn proxy on or off.\n"
"  -Q,  --quota=NUMBER           set retrieval quota to NUMBER.\n"
"       --bind-address=ADDRESS   bind to ADDRESS (hostname or IP) on local host.\n"
"       --limit-rate=RATE        limit download rate to RATE.\n"
"       --dns-cache=off          disable caching DNS lookups.\n"
"       --restrict-file-names=OS restrict chars in file names to ones OS allows.\n"
"\n"
msgstr ""
"Μεταφόρτωση:\n"
"       --bind-address=ΔΙΕΥΘΥΝΣΗ σύνδεση στη ΔΙΕΥΘΥΝΣΗ (όνομα συστήματος ή IP) στο τοπικό σύστημα.\n"
"  -t,  --tries=ΑΡΙΘΜΟΣ          ορισμός του αριθμού των προσπαθειών σε ΑΡΙΘΜΟΣ (0 για χωρίς όριο).\n"
"  -O   --output-document=ΑΡΧΕΙΟ εγγραφή εγγράφων στο ΑΡΧΕΙΟ.\n"
"  -nc, --no-clobber             να μην αλλαχτούν τα ονόματα υπαρχόντων αρχείων ή να δοθούν καταλήξεις .#.\n"
"  -c,  --continue               συνέχιση ανάκτησης υπάρχοντος αρχείου.\n"
"       --progress=ΜΟΡΦΗ         επιλογή της μορφής εμφάνισης της προόδου ανάκτησης.\n"
"  -N,  --timestamping           αποφυγή ανάκτησης αρχείων παλαιότερων των τοπικών.\n"
"  -S,  --server-response        εμφάνιση αποκρίσεων του διακομιστή.\n"
"       --spider                 αποφυγή ανάκτησης οποιουδήποτε αρχείου.\n"
"  -T,  --timeout=ΔΕΥΤΕΡΟΛΕΠΤΑ   ορισμός χρονικού ορίου ανάκτησης σε ΔΕΥΤΕΡΟΛΕΠΤΑ.\n"
"  -w,  --wait=ΔΕΥΤΕΡΟΛΕΠΤΑ      αναμονή ΔΕΥΤΕΡΟΛΕΠΤΑ μεταξύ ανακτήσεων.\n"
"       --waitretry=ΔΕΥΤΕΡΟΛΕΠΤΑ αναμονή 1...ΔΕΥΤΕΡΟΛΕΠΤΑ μεταξύ προσπαθειών ανάκτησης.\n"
"       --random-wait            αναμονή από 0...2*ΚΑΘΥΣΤΕΡΗΣΗ δευτερόλεπτα μεταξύ ανακτήσεων.\n"
"  -Y,  --proxy=on/off           ρύθμιση χρήσης διαμεσολαβητή σε ενεργό (on) ή ανενεργό (off).\n"
"  -Q,  --quota=ΑΡΙΘΜΟΣ          ορισμός ορίου συνολικού μεγέθους αρχείων προς ανάκτηση σε ΑΡΙΘΜΟ.\n"
"       --limit-rate=ΡΥΘΜΟΣ      περιορισμός του ρυθμού ανάκτησης σε ΡΥΘΜΟΣ.\n"
"\n"

#: src/main.c:188
#, fuzzy
msgid ""
"Directories:\n"
"  -nd, --no-directories            don't create directories.\n"
"  -x,  --force-directories         force creation of directories.\n"
"  -nH, --no-host-directories       don't create host directories.\n"
"  -P,  --directory-prefix=PREFIX   save files to PREFIX/...\n"
"       --cut-dirs=NUMBER           ignore NUMBER remote directory components.\n"
"\n"
msgstr ""
"Κατάλογοι:\n"
"  -nd  --no-directories            αποφυγή δημιουργίας καταλόγων.\n"
"  -x,  --force-directories         υποχρεωτική δημιουργία καταλόγων.\n"
"  -nH, --no-host-directories       αποφυγή δημιουργίας host directories.\n"
"  -P,  --directory-prefix=ΠΡΟΘΕΜΑ  αποθήκευση αρχείων στο ΠΡΟΘΕΜΑ/...\n"
"       --cut-dirs=ΑΡΙΘΜΟΣ          αγνόηση ΑΡΙΘΜΟΣ στοιχείων απομακρυσμένων καταλόγων\n"
"\n"

#: src/main.c:196
#, fuzzy
msgid ""
"HTTP options:\n"
"       --http-user=USER      set http user to USER.\n"
"       --http-passwd=PASS    set http password to PASS.\n"
"  -C,  --cache=on/off        (dis)allow server-cached data (normally allowed).\n"
"  -E,  --html-extension      save all text/html documents with .html extension.\n"
"       --ignore-length       ignore `Content-Length' header field.\n"
"       --header=STRING       insert STRING among the headers.\n"
"       --proxy-user=USER     set USER as proxy username.\n"
"       --proxy-passwd=PASS   set PASS as proxy password.\n"
"       --referer=URL         include `Referer: URL' header in HTTP request.\n"
"  -s,  --save-headers        save the HTTP headers to file.\n"
"  -U,  --user-agent=AGENT    identify as AGENT instead of Wget/VERSION.\n"
"       --no-http-keep-alive  disable HTTP keep-alive (persistent connections).\n"
"       --cookies=off         don't use cookies.\n"
"       --load-cookies=FILE   load cookies from FILE before session.\n"
"       --save-cookies=FILE   save cookies to FILE after session.\n"
"       --post-data=STRING    use the POST method; send STRING as the data.\n"
"       --post-file=FILE      use the POST method; send contents of FILE.\n"
"\n"
msgstr ""
"Επιλογές HTTP:\n"
"       --http-user=ΧΡΗΣΤΗΣ   ορισμός χρήστη http σε ΧΡΗΣΤΗ.\n"
"       --http-passwd=ΚΩΔΙΚΟΣ ορισμός κωδικού χρήστη http σε ΚΩΔΙΚΟΣ.\n"
"  -C,  --cache=on/off        αποτροπή/χρήση δεδομένων του διαμεσολαβητή (κανονικά επιτρέπεται).\n"
"  -E,  --html-extension      αποθήκευση όλων των εγγράφων text/html με κατάληξη .html.\n"
"       --ignore-length       αγνόηση του πεδίου `Content-Length' της κεφαλίδας.\n"
"       --header=ΑΛΦΑΡΙΘΜΗΤΙΚΟ  εισαγωγή του ΑΛΦΑΡΙΘΜΗΤΙΚΟ στην κεφαλίδα.\n"
"       --proxy-user=ΧΡΗΣΤΗΣ  ορισμός του ΧΡΗΣΤΗΣ για χρήστη του διαμεσολαβητή.\n"
"       --proxy-passwd=ΚΩΔΙΚΟΣ  ορισμός του ΚΩΔΙΚΟΣ για κωδικός στο διαμεσολαβητή.\n"
"       --referer=URL         χρήση κεφαλίδας `Referer: URL' στην αίτηση HTTP.\n"
"  -s,  --save-headers        αποθήκευση των HTTP κεφαλίδων σε αρχείο.\n"
"  -U,  --user-agent=ΠΡΑΚΤΟΡΑΣ χρήση του ΠΡΑΚΤΟΡΑΣ αντί του Wget/ΕΚΔΟΣΗ.\n"
"       --no-http-keep-alive  απενεργοποίηση του HTTP keep-alive (συνδέσεις διαρκείας).\n"
"       --cookies=off         να μη γίνει χρήση των cookies.\n"
"       --load-cookies=ΑΡΧΕΙΟ φόρτωση cookies από το ΑΡΧΕΙΟ πριν τη συνεδρία.\n"
"       --save-cookies=ΑΡΧΕΙΟ αποθήκευση των cookies στο ΑΡΧΕΙΟ μετά τη συνεδρία.\n"
"\n"

#: src/main.c:217
msgid ""
"HTTPS (SSL) options:\n"
"       --sslcertfile=FILE     optional client certificate.\n"
"       --sslcertkey=KEYFILE   optional keyfile for this certificate.\n"
"       --egd-file=FILE        file name of the EGD socket.\n"
"       --sslcadir=DIR         dir where hash list of CA's are stored.\n"
"       --sslcafile=FILE       file with bundle of CA's\n"
"       --sslcerttype=0/1      Client-Cert type 0=PEM (default) / 1=ASN1 (DER)\n"
"       --sslcheckcert=0/1     Check the server cert agenst given CA\n"
"       --sslprotocol=0-3      choose SSL protocol; 0=automatic,\n"
"                              1=SSLv2 2=SSLv3 3=TLSv1\n"
"\n"
msgstr ""

#: src/main.c:230
msgid ""
"FTP options:\n"
"  -nr, --dont-remove-listing   don't remove `.listing' files.\n"
"  -g,  --glob=on/off           turn file name globbing on or off.\n"
"       --passive-ftp           use the \"passive\" transfer mode.\n"
"       --retr-symlinks         when recursing, get linked-to files (not dirs).\n"
"\n"
msgstr ""
"Επιλογές FTP:\n"
"  -nr, --dont-remove-listing να μη διαγραφούν τα αρχεία `.listing'.\n"
"  -g,  --glob=on/off         (απ)ενεργοποίηση ταιριάσματος ονομάτων αρχείων.\n"
"       --passive-ftp         χρήση κατάστασης μεταφοράς \"passive\" για το FTP.\n"
"       --retr-symlinks       κατά την αναδρομική ανάκτηση, λήψη αναφερόμενων αρχείων (όχι κατάλογοι).\n"
"\n"

#: src/main.c:237
#, fuzzy
msgid ""
"Recursive retrieval:\n"
"  -r,  --recursive          recursive download.\n"
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for infinite).\n"
"       --delete-after       delete files locally after downloading them.\n"
"  -k,  --convert-links      convert non-relative links to relative.\n"
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
"  -m,  --mirror             shortcut option equivalent to -r -N -l inf -nr.\n"
"  -p,  --page-requisites    get all images, etc. needed to display HTML page.\n"
"       --strict-comments    turn on strict (SGML) handling of HTML comments.\n"
"\n"
msgstr ""
"Αναδρομική ανάκτηση:\n"
"  -r,  --recursive             αναδρομική ανάκτηση -- χρήση με σύνεση!\n"
"  -l,  --level=ΑΡΙΘΜΟΣ         μέγιστο βάθος αναδρομής (`inf' ή 0 για απεριόριστο).\n"
"       --delete-after          διαγραφή αρχείων τοπικά μετά τη μεταφόρτωσή τους.\n"
"  -k,  --convert-links         μετατροπή μη-σχετικών συνδέσμων σε σχετικούς.\n"
"  -K,  --backup-converted      πριν τη μετατροπή του αρχείου Χ, διατήρηση αντιγράφου ασφαλείας X.orig.\n"
"  -m,  --mirror                σύντομη επιλογή, ισοδύναμη με -r -N -l inf -nr.\n"
"  -p,  --page-requisites       λήψη όλων των εικόνων, κλπ. που απαιτούνται για την εμφάνιση σελίδας HTML.\n"
"\n"

#: src/main.c:248
msgid ""
"Recursive accept/reject:\n"
"  -A,  --accept=LIST                comma-separated list of accepted extensions.\n"
"  -R,  --reject=LIST                comma-separated list of rejected extensions.\n"
"  -D,  --domains=LIST               comma-separated list of accepted domains.\n"
"       --exclude-domains=LIST       comma-separated list of rejected domains.\n"
"       --follow-ftp                 follow FTP links from HTML documents.\n"
"       --follow-tags=LIST           comma-separated list of followed HTML tags.\n"
"  -G,  --ignore-tags=LIST           comma-separated list of ignored HTML tags.\n"
"  -H,  --span-hosts                 go to foreign hosts when recursive.\n"
"  -L,  --relative                   follow relative links only.\n"
"  -I,  --include-directories=LIST   list of allowed directories.\n"
"  -X,  --exclude-directories=LIST   list of excluded directories.\n"
"  -np, --no-parent                  don't ascend to the parent directory.\n"
"\n"
msgstr ""
"Αναδρομική αποδοχή/απόρριψη:\n"
"  -A,  --accept=ΛΙΣΤΑ               λίστα διαχωριζόμενη με κόμμα από αποδεκτές καταλήξεις.\n"
"  -R,  --reject=ΛΙΣΤΑ               λίστα διαχωριζόμενη με κόμμα από μη-αποδεκτές καταλήξεις.\n"
"  -D,  --domains=ΛΙΣΤΑ              λίστα διαχωριζόμενη με κόμμα από αποδεκτά επιθήματα.\n"
"       --exclude-domains=ΛΙΣΤΑ      λίστα διαχωριζόμενη με κόμμα από μη-αποδεκτά επιθήματα.\n"
"       --follow-ftp                 ακολούθηση συνδέσμων FTP από έγγραφα HTML.\n"
"       --follow-tags=ΛΙΣΤΑ          λίστα διαχωριζόμενη με κόμμα με συνδέσμους που έχουν ακολουθηθεί.\n"
"  -G,  --ignore-tags=ΛΙΣΤΑ          λίστα διαχωριζόμενη με κόμμα με συνδέσμους που έχουν αγνοηθεί.\n"
"  -H,  --span-hosts                 επίσκεψη και ξένων διακομιστών κατά την αναδρομή.\n"
"  -L,  --relative                   ακολούθηση μόνο σχετικών URL.\n"
"  -I,  --include-directories=ΛΙΣΤΑ  λίστα επιτρεπτών καταλόγων.\n"
"  -X,  --exclude-directories=ΛΙΣΤΑ  λίστα μη-επιτρεπτών καταλόγων.\n"
"  -np, --no-parent                  απενεργοποίηση πρόσβασης και στο γονικό κατάλογο.\n"
"\n"

#: src/main.c:263
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Στείλτε αναφορές σφαλμάτων και προτάσεις στο <bug-wget@gnu.org>.\n"

#: src/main.c:465
#, c-format
msgid "%s: debug support not compiled in.\n"
msgstr "%s: η υποστήριξη εκσφαλμάτωσης δεν έχει συμπεριληφθεί στη μεταγλώττιση.\n"

#: src/main.c:517
#, fuzzy
msgid "Copyright (C) 2003 Free Software Foundation, Inc.\n"
msgstr "Πνευματικά Δικαιώματα (C) 1995, 1996, 1997, 1998, 2000, 2001 Free Software Foundation, Inc.\n"

#: src/main.c:519
msgid ""
"This program is distributed in the hope that it will be useful,\n"
"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"GNU General Public License for more details.\n"
msgstr ""
"Αυτό το πρόγραμμα διανέμεται με την ελπίδα ότι θα είναι χρήσιμο,\n"
"αλλά ΧΩΡΙΣ ΚΑΜΙΑ ΕΓΓΫΗΣΗ· χωρίς ούτε έμμεση εγγύηση\n"
"ΛΕΙΤΟΥΡΓΙΚΟΤΗΤΑΣ ή ΚΑΤΑΛΛΗΛΟΤΗΤΑΣ ΓΙΑ ΕΝΑ ΣΥΓΚΕΚΡΙΜΕΝΟ ΣΚΟΠΟ.\n"
"Αναφερθείτε στη Γενική Δημόσια Άδεια GNU για περισσότερες λεπτομέρειες.\n"

#: src/main.c:524
#, fuzzy
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Γράφτηκε αρχικά από τον Hrvoje Niksic <hniksic@arsdigita.com>.\n"

#: src/main.c:703
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: μη αποδεκτή επιλογή -- `-n%c'\n"

#. #### Something nicer should be printed here -- similar to the
#. pre-1.5 `--help' page.
#: src/main.c:706 src/main.c:748 src/main.c:794
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Δοκιμάστε `%s --help' για περισσότερες επιλογές ρυθμίσεων.\n"

#: src/main.c:774
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Δεν μπορώ να είμαι επεξηγηματικός και ταυτόχρονα σιωπηλός.\n"

#: src/main.c:780
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr "Δεν μπορώ να χρησιμοποιώ χρονικές αναφορές και ταυτόχρονα να μην υποκαθιστώ τα αρχεία βάση των αναφορών.\n"

#. No URL specified.
#: src/main.c:789
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: παραλείφθηκε το URL\n"

#: src/main.c:905
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Δεν βρέθηκαν URL στο %s.\n"

#: src/main.c:914
#, c-format
msgid ""
"\n"
