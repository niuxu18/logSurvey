# Pesan Bahasa Indonesia untuk GNU wget
# Copyright (C) 2006, 2008 Free Software Foundation, Inc.
# This file is distributed under the same license as the wget package.
# Permission is granted to freely copy and distribute
# this file and modified versions, provided that this
# header is not removed and modified versions are marked
# as such.
# Arif E. Nugroho <arif_endro@yahoo.com>, 2006, 2008, 2009.
#
msgid ""
msgstr ""
"Project-Id-Version: GNU wget 1.12-pre6\n"
"Report-Msgid-Bugs-To: bug-wget@gnu.org\n"
"POT-Creation-Date: 2009-09-21 10:00-0700\n"
"PO-Revision-Date: 2009-09-10 08:00+0700\n"
"Last-Translator: Arif E. Nugroho <arif_endro@yahoo.com>\n"
"Language-Team: Indonesian <translation-team-id@lists.sourceforge.net>\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=ISO-8859-1\n"
"Content-Transfer-Encoding: 8bit\n"
"Plural-Forms: nplurals=2; plural=n == 1 ? 0 : 1;\n"

#: lib/error.c:127
msgid "Unknown system error"
msgstr "Error sistem tidak diketahui"

#: lib/getopt.c:526 lib/getopt.c:542
#, c-format
msgid "%s: option `%s' is ambiguous\n"
msgstr "%s: pilihan `%s' adalah pilihan yang ambigu\n"

#: lib/getopt.c:575 lib/getopt.c:579
#, c-format
msgid "%s: option `--%s' doesn't allow an argument\n"
msgstr "%s: pilihan `--%s' tidak memperbolehkan sebuah argumen\n"

#: lib/getopt.c:588 lib/getopt.c:593
#, c-format
msgid "%s: option `%c%s' doesn't allow an argument\n"
msgstr "%s: pilihan `%c%s' tidak memperbolehkan sebuah argumen\n"

#: lib/getopt.c:636 lib/getopt.c:655 lib/getopt.c:971 lib/getopt.c:990
#, c-format
msgid "%s: option `%s' requires an argument\n"
msgstr "%s: pilihan `%s' membutuhkan sebuah argumen\n"

#: lib/getopt.c:693 lib/getopt.c:696
#, c-format
msgid "%s: unrecognized option `--%s'\n"
msgstr "%s: pilihan `--%s' tidak diketahui\n"

#: lib/getopt.c:704 lib/getopt.c:707
#, c-format
msgid "%s: unrecognized option `%c%s'\n"
msgstr "%s: pilihan `%c%s' tidak diketahui\n"

#: lib/getopt.c:759 lib/getopt.c:762
#, c-format
msgid "%s: illegal option -- %c\n"
msgstr "%s: pilihan illegal -- %c\n"

#: lib/getopt.c:768 lib/getopt.c:771
#, c-format
msgid "%s: invalid option -- %c\n"
msgstr "%s: pilihan -- %c tidak valid\n"

#: lib/getopt.c:823 lib/getopt.c:839 lib/getopt.c:1043 lib/getopt.c:1061
#, c-format
msgid "%s: option requires an argument -- %c\n"
msgstr "%s: pilihan membutuhkan sebuah argumen -- %c\n"

#: lib/getopt.c:892 lib/getopt.c:908
#, c-format
msgid "%s: option `-W %s' is ambiguous\n"
msgstr "%s: pilihan `-W %s' adalah sebuah ambigu\n"

#: lib/getopt.c:932 lib/getopt.c:950
#, c-format
msgid "%s: option `-W %s' doesn't allow an argument\n"
msgstr "%s: pilihan `-W %s' tidak memperbolehkan sebuah argumen\n"

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
msgstr "`"

#: lib/quotearg.c:273
msgid "'"
msgstr "'"

#: lib/xalloc-die.c:34
msgid "memory exhausted"
msgstr "kehabisan memori"

#: src/connect.c:207
#, c-format
msgid "%s: unable to resolve bind address %s; disabling bind.\n"
msgstr "%s: tidak dapat menemukan alamat bind %s; menonaktifkan bind.\n"

#: src/connect.c:291
#, c-format
msgid "Connecting to %s|%s|:%d... "
msgstr "Menghubungi %s|%s|:%d... "

#: src/connect.c:298
#, c-format
msgid "Connecting to %s:%d... "
msgstr "Menghubungi %s:%d... "

#: src/connect.c:358
msgid "connected.\n"
msgstr "terhubung.\n"

#: src/connect.c:370 src/host.c:780 src/host.c:809
#, c-format
msgid "failed: %s.\n"
msgstr "gagal: %s.\n"

#: src/connect.c:394 src/http.c:1674
#, c-format
msgid "%s: unable to resolve host address %s\n"
msgstr "%s: tidak dapat menemukan alamat dari %s\n"

#: src/convert.c:185
#, c-format
msgid "Converted %d files in %s seconds.\n"
msgstr "Mengubah %d files dalam %s detik.\n"

#: src/convert.c:213
#, c-format
msgid "Converting %s... "
msgstr "Mengubah %s... "

#: src/convert.c:226
msgid "nothing to do.\n"
msgstr "tidak ada yang bisa dilakukan.\n"

#: src/convert.c:234 src/convert.c:258
#, c-format
msgid "Cannot convert links in %s: %s\n"
msgstr "Tidak dapat mengubah links dalam %s: %s\n"

#: src/convert.c:249
#, c-format
msgid "Unable to delete %s: %s\n"
msgstr "Tidak dapat menghapus %s: %s\n"

#: src/convert.c:464
#, c-format
msgid "Cannot back up %s as %s: %s\n"
msgstr "Tidak dapat membackup %s sebagai %s: %s\n"

#: src/cookies.c:443
#, c-format
msgid "Syntax error in Set-Cookie: %s at position %d.\n"
msgstr "Syntax error dalam Set-Cookie: %s pada posisi %d.\n"

#: src/cookies.c:686
#, c-format
msgid "Cookie coming from %s attempted to set domain to %s\n"
msgstr "Cookie datang dari %s mencoba untuk menset domain menjadi %s\n"

#: src/cookies.c:1134 src/cookies.c:1252
#, c-format
msgid "Cannot open cookies file %s: %s\n"
msgstr "Tidak dapat membuka berkas cookies %s: %s\n"

#: src/cookies.c:1289
#, c-format
msgid "Error writing to %s: %s\n"
msgstr "Error menulis ke %s: %s\n"

#: src/cookies.c:1292
#, c-format
msgid "Error closing %s: %s\n"
msgstr "Error menutup %s: %s\n"

#: src/ftp-ls.c:1065
msgid "Unsupported listing type, trying Unix listing parser.\n"
msgstr "Tipe listing tidak disupport, mencoba listing Unix parser.\n"

#: src/ftp-ls.c:1116 src/ftp-ls.c:1118
#, c-format
msgid "Index of /%s on %s:%d"
msgstr "Index dari/%s pada %s:%d"

#: src/ftp-ls.c:1143
#, c-format
msgid "time unknown       "
msgstr "waktu tidak diketahui       "

#: src/ftp-ls.c:1147
#, c-format
msgid "File        "
msgstr "File        "

#: src/ftp-ls.c:1150
#, c-format
msgid "Directory   "
msgstr "Direktori   "

#: src/ftp-ls.c:1153
#, c-format
msgid "Link        "
msgstr "LInk        "

#: src/ftp-ls.c:1156
#, c-format
msgid "Not sure    "
msgstr "Tidak yakin    "

#: src/ftp-ls.c:1179
#, c-format
msgid " (%s bytes)"
msgstr " (%s bytes)"

#: src/ftp.c:221
#, c-format
msgid "Length: %s"
msgstr "Besar: %s"

#: src/ftp.c:227 src/http.c:2253
#, c-format
msgid ", %s (%s) remaining"
msgstr ", %s (%s) tersisa"

#: src/ftp.c:231 src/http.c:2257
#, c-format
msgid ", %s remaining"
msgstr ", %s tersisa"

#: src/ftp.c:234
msgid " (unauthoritative)\n"
msgstr " (unauthoritative)\n"

#: src/ftp.c:315
#, c-format
msgid "Logging in as %s ... "
msgstr "Masuk sebagai %s ... "

#: src/ftp.c:329 src/ftp.c:375 src/ftp.c:404 src/ftp.c:469 src/ftp.c:699
#: src/ftp.c:752 src/ftp.c:781 src/ftp.c:838 src/ftp.c:899 src/ftp.c:991
#: src/ftp.c:1038
msgid "Error in server response, closing control connection.\n"
msgstr "Error dalam balasan server, menutup kontrol koneksi.\n"

#: src/ftp.c:336
msgid "Error in server greeting.\n"
msgstr "Error dalam salam server.\n"

#: src/ftp.c:343 src/ftp.c:477 src/ftp.c:707 src/ftp.c:789 src/ftp.c:848
#: src/ftp.c:909 src/ftp.c:1001 src/ftp.c:1048
msgid "Write failed, closing control connection.\n"
msgstr "Gagal menulis, menutup kontrol koneksi.\n"

#: src/ftp.c:349
msgid "The server refuses login.\n"
msgstr "Server menolak untuk login.\n"

#: src/ftp.c:355
msgid "Login incorrect.\n"
msgstr "Login tidak benar.\n"

#: src/ftp.c:361
msgid "Logged in!\n"
msgstr "Logged in!\n"

#: src/ftp.c:383
msgid "Server error, can't determine system type.\n"
msgstr "Server error, tidak dapat menentukan tipe sistem.\n"

#: src/ftp.c:392 src/ftp.c:825 src/ftp.c:882 src/ftp.c:925
msgid "done.    "
msgstr "selesai.    "

#: src/ftp.c:457 src/ftp.c:724 src/ftp.c:764 src/ftp.c:1021 src/ftp.c:1067
msgid "done.\n"
msgstr "selesai.\n"

#: src/ftp.c:484
#, c-format
msgid "Unknown type `%c', closing control connection.\n"
msgstr "Tipe `%c' tidak diketahui, menutup kontrol koneksi.\n"

#: src/ftp.c:496
msgid "done.  "
msgstr "selesai.   "

#: src/ftp.c:502
msgid "==> CWD not needed.\n"
msgstr "==> CWD tidak dibutuhkan.\n"

#: src/ftp.c:713
#, c-format
msgid ""
"No such directory %s.\n"
"\n"
msgstr ""
"Tidak ada direktori %s.\n"
"\n"

#: src/ftp.c:734
msgid "==> CWD not required.\n"
msgstr "==> CWD tidak diperlukan.\n"

#: src/ftp.c:795
msgid "Cannot initiate PASV transfer.\n"
msgstr "Tidak dapat menginitialisasi transfer PASV.\n"

#: src/ftp.c:799
msgid "Cannot parse PASV response.\n"
msgstr "Tidak dapat parse PASV balasan.\n"

#: src/ftp.c:816
#, c-format
msgid "couldn't connect to %s port %d: %s\n"
msgstr "tidak dapat menghubungi %s port %d: %s\n"

#: src/ftp.c:864
#, c-format
msgid "Bind error (%s).\n"
msgstr "Bind error (%s).\n"

#: src/ftp.c:870
msgid "Invalid PORT.\n"
msgstr "PORT tidak valid.\n"

#: src/ftp.c:916
msgid ""
"\n"
"REST failed, starting from scratch.\n"
msgstr ""
"\n"
"REST gagal, memulai dari awal.\n"

#: src/ftp.c:957
#, c-format
msgid "File %s exists.\n"
msgstr "Berkas %s ada.\n"

#: src/ftp.c:963
#, c-format
msgid "No such file %s.\n"
msgstr "Tidak ada berkas seperti itu %s.\n"

#: src/ftp.c:1009
#, c-format
msgid ""
"No such file %s.\n"
"\n"
msgstr ""
"Tidak ada berkas %s.\n"
"\n"

#: src/ftp.c:1056
#, c-format
msgid ""
"No such file or directory %s.\n"
"\n"
msgstr ""
"Tidak ada berkas atau direktori %s.\n"
"\n"

#: src/ftp.c:1187 src/http.c:2344
#, c-format
msgid "%s has sprung into existence.\n"
msgstr "%s memiliki sprung kedalam eksistensi.\n"

#: src/ftp.c:1239
#, c-format
msgid "%s: %s, closing control connection.\n"
msgstr "%s: %s, menutup kontrol koneksi.\n"

#: src/ftp.c:1248
#, c-format
msgid "%s (%s) - Data connection: %s; "
msgstr "%s (%s) - Data koneksi: %s; "

#: src/ftp.c:1263
msgid "Control connection closed.\n"
msgstr "Koneksi kontrol ditutup.\n"

#: src/ftp.c:1281
msgid "Data transfer aborted.\n"
msgstr "Data transfer dibatalkan.\n"

#: src/ftp.c:1381
#, c-format
msgid "File %s already there; not retrieving.\n"
msgstr "Berkas %s sudah ada disana; tidak diambil.\n"

#: src/ftp.c:1447 src/http.c:2529
#, c-format
msgid "(try:%2d)"
msgstr "(coba:%2d)"

#: src/ftp.c:1522 src/http.c:2873
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s]\n"
"\n"
msgstr ""
"%s (%s) - ditulis ke stdout %s[%s]\n"
"\n"

#: src/ftp.c:1523 src/http.c:2874
#, c-format
msgid ""
"%s (%s) - %s saved [%s]\n"
"\n"
msgstr ""
"%s (%s) - %s disimpan [%s]\n"
"\n"

#: src/ftp.c:1568 src/main.c:1301 src/recur.c:438 src/retr.c:990
#, c-format
msgid "Removing %s.\n"
msgstr "Menghapus %s.\n"

#: src/ftp.c:1610
#, c-format
msgid "Using %s as listing tmp file.\n"
msgstr "Menggunakan %s sebagai berkas listing sementara.\n"

#: src/ftp.c:1627
#, c-format
msgid "Removed %s.\n"
msgstr "Menghapus %s.\n"

#: src/ftp.c:1664
#, c-format
msgid "Recursion depth %d exceeded max. depth %d.\n"
msgstr "Kedalaman recursion %d melebihi maksimum kedalaman %d.\n"

#: src/ftp.c:1734
#, c-format
msgid "Remote file no newer than local file %s -- not retrieving.\n"
msgstr ""
"Berkas remote tidak ada yang lebih baru dari berkas lokal %s -- tidak "
"diambil.\n"

#: src/ftp.c:1741
#, c-format
msgid ""
"Remote file is newer than local file %s -- retrieving.\n"
"\n"
msgstr ""
"Berkas remote lebih baru dari berkas lokal %s -- diambil.\n"
"\n"

#: src/ftp.c:1748
#, c-format
msgid ""
"The sizes do not match (local %s) -- retrieving.\n"
"\n"
msgstr ""
"Besar tidak cocok dengan (local %s) -- diambil.\n"
"\n"

#: src/ftp.c:1766
msgid "Invalid name of the symlink, skipping.\n"
msgstr "Nama symlink tidak valid, dilewati.\n"

#: src/ftp.c:1783
#, c-format
msgid ""
"Already have correct symlink %s -> %s\n"
"\n"
msgstr ""
"Sudah memiliki symlink %s -> %s yang benar\n"
"\n"

#: src/ftp.c:1792
#, c-format
msgid "Creating symlink %s -> %s\n"
msgstr "Membuat symlink %s -> %s\n"

#: src/ftp.c:1802
#, c-format
msgid "Symlinks not supported, skipping symlink %s.\n"
msgstr "Symlink tidak didukung, melewatkan symlink %s.\n"

#: src/ftp.c:1814
#, c-format
msgid "Skipping directory %s.\n"
msgstr "Melewati direktori %s.\n"

#: src/ftp.c:1823
#, c-format
msgid "%s: unknown/unsupported file type.\n"
msgstr "%s: tidak diketahui/tidak disupport tipe file.\n"

#: src/ftp.c:1860
#, c-format
msgid "%s: corrupt time-stamp.\n"
msgstr "%s: time-stamp corrupt/rusak.\n"

#: src/ftp.c:1882
#, c-format
msgid "Will not retrieve dirs since depth is %d (max %d).\n"
msgstr "Tidak akan mengambil dir karena kedalamannya %d (maksimal %d).\n"

#: src/ftp.c:1932
#, c-format
msgid "Not descending to %s as it is excluded/not-included.\n"
msgstr "Tidak turun ke %s karena ini di excluded/tidak termasuk.\n"

#: src/ftp.c:1998 src/ftp.c:2012
#, c-format
msgid "Rejecting %s.\n"
msgstr "Menolak %s.\n"

#: src/ftp.c:2035
#, c-format
msgid "Error matching %s against %s: %s\n"
msgstr "Gagal mencocokan %s dengan %s: %s\n"

#: src/ftp.c:2091
#, c-format
msgid "No matches on pattern %s.\n"
msgstr "Tidak ada pola %s yang cocok.\n"

#: src/ftp.c:2162
#, c-format
msgid "Wrote HTML-ized index to %s [%s].\n"
msgstr "Menulis HTML-ized indeks ke %s [%s].\n"

#: src/ftp.c:2167
#, c-format
msgid "Wrote HTML-ized index to %s.\n"
msgstr "Menulis HTML-ized indeks ke %s.\n"

#: src/gnutls.c:220 src/openssl.c:495
msgid "ERROR"
msgstr "ERROR"

#: src/gnutls.c:220 src/openssl.c:495
msgid "WARNING"
msgstr "PERINGATAN"

#: src/gnutls.c:226 src/openssl.c:504
#, c-format
msgid "%s: No certificate presented by %s.\n"
msgstr "%s: Tidak ada certificate yang di berikan oleh %s.\n"

#: src/gnutls.c:234
#, c-format
msgid "%s: The certificate of %s is not trusted.\n"
msgstr "%s: Sertifikat dari %s tidak dipercaya.\n"

#: src/gnutls.c:240
#, c-format
msgid "%s: The certificate of %s hasn't got a known issuer.\n"
msgstr "%s: Sertifikat dari %s belum memperoleh penerbit yang dikenal.\n"

#: src/gnutls.c:246
#, c-format
msgid "%s: The certificate of %s has been revoked.\n"
msgstr "%s: Sertifikat dari %s telah dicabut.\n"

#: src/gnutls.c:260
#, c-format
msgid "Error initializing X509 certificate: %s\n"
msgstr "Error menginisialisasi sertifikat X509: %s\n"

#: src/gnutls.c:269
msgid "No certificate found\n"
msgstr "Tidak ada sertifikat yang ditemukan\n"

#: src/gnutls.c:276
#, c-format
msgid "Error parsing certificate: %s\n"
msgstr "Error dalam membaca sertifikat: %s.\n"

#: src/gnutls.c:283
msgid "The certificate has not yet been activated\n"
msgstr "Sertifikat belum diaktifkan.\n"

#: src/gnutls.c:288
msgid "The certificate has expired\n"
msgstr "Sertifikat telah habis masa berlakunya.\n"

#: src/gnutls.c:294
#, c-format
msgid "The certificate's owner does not match hostname %s\n"
msgstr "Pemilik sertifikat tidak cocok dengan nama host %s.\n"

#: src/host.c:358
msgid "Unknown host"
msgstr "Host tidak diketahui"

#: src/host.c:362
msgid "Temporary failure in name resolution"
msgstr "Resolusi nama untuk sementara gagal"

#: src/host.c:364
msgid "Unknown error"
msgstr "Kesalahan tidak diketahui"

#: src/host.c:737
#, c-format
msgid "Resolving %s... "
msgstr "Resolving %s... "

#: src/host.c:789
msgid "failed: No IPv4/IPv6 addresses for host.\n"
msgstr "gagal: Tidak ada alamat IPv4/IPv6 untuk host.\n"

#: src/host.c:812
msgid "failed: timed out.\n"
msgstr "gagal: waktu habis.\n"

#: src/html-url.c:286
#, c-format
msgid "%s: Cannot resolve incomplete link %s.\n"
msgstr "%s: Tidak dapat menresolve link yang tidak komplit %s.\n"

#: src/html-url.c:772
#, c-format
msgid "%s: Invalid URL %s: %s\n"
msgstr "%s: URL tidak valid %s: %s\n"

#: src/http.c:377
#, c-format
msgid "Failed writing HTTP request: %s.\n"
msgstr "Gagal menulis permintaan HTTP: %s.\n"

#: src/http.c:754
msgid "No headers, assuming HTTP/0.9"
msgstr "Tidak ada headers, mengasumsikan HTTP/0.9"

#: src/http.c:1456
msgid "Disabling SSL due to encountered errors.\n"
msgstr "Menonaktifkan SSL karena adanya errors.\n"

#: src/http.c:1576
#, c-format
msgid "POST data file %s missing: %s\n"
msgstr "POST data berkas %s hilang: %s\n"

#: src/http.c:1660
#, c-format
msgid "Reusing existing connection to %s:%d.\n"
msgstr "Menggunakan koneksi yang sudah ada ke %s:%d.\n"

#: src/http.c:1729
#, c-format
msgid "Failed reading proxy response: %s\n"
msgstr "Gagal membaca balasan proxy: %s\n"

#: src/http.c:1750
#, c-format
msgid "Proxy tunneling failed: %s"
msgstr "Proxy tunneling gagal: %s"

#: src/http.c:1800
#, c-format
msgid "%s request sent, awaiting response... "
msgstr "Permintaan %s dikirimkan, menunggu balasan... "

#: src/http.c:1811
msgid "No data received.\n"
msgstr "Tidak ada data yang diterima.\n"

#: src/http.c:1818
#, c-format
msgid "Read error (%s) in headers.\n"
msgstr "Read error (%s) dalam headers.\n"

#: src/http.c:1932
msgid "Unknown authentication scheme.\n"
msgstr "Skema authentifikasi tidak diketahui.\n"

#: src/http.c:1966
msgid "Authorization failed.\n"
msgstr "Authorisasi gagal.\n"

#: src/http.c:2004 src/http.c:2471
#, c-format
msgid ""
"File %s already there; not retrieving.\n"
"\n"
msgstr ""
"Berkas %s sudah ada; tidak diambil.\n"
"\n"

#: src/http.c:2093
msgid "Malformed status line"
msgstr "Status line salah format"

#: src/http.c:2095
msgid "(no description)"
msgstr "(tidak ada deskripsi)"

#: src/http.c:2154
#, c-format
msgid "Location: %s%s\n"
msgstr "Lokasi: %s%s\n"

#: src/http.c:2155 src/http.c:2263
msgid "unspecified"
msgstr "tidak dispesifikasikan"

#: src/http.c:2156
msgid " [following]"
msgstr " [mengikuti]"

#: src/http.c:2208
msgid ""
"\n"
"    The file is already fully retrieved; nothing to do.\n"
"\n"
msgstr ""
"\n"
"     File sudah secara penuh diterima; tidak ada yang harus dilakukan lagi.\n"
"\n"

#: src/http.c:2243
msgid "Length: "
msgstr "Besar: "

#: src/http.c:2263
msgid "ignored"
msgstr "diabaikan"

#: src/http.c:2365
#, c-format
msgid "Saving to: %s\n"
msgstr "Simpan ke: %s\n"

#: src/http.c:2447
msgid "Warning: wildcards not supported in HTTP.\n"
msgstr "Peringatan: wildcards tidak disupport dalam HTTP.\n"

#: src/http.c:2518
msgid "Spider mode enabled. Check if remote file exists.\n"
msgstr "Mode laba-laba diaktifkan. Check jika berkas tujuan ada.\n"

#: src/http.c:2603
#, c-format
msgid "Cannot write to %s (%s).\n"
msgstr "Tidak dapat menulis ke %s (%s).\n"

#: src/http.c:2612
msgid "Unable to establish SSL connection.\n"
msgstr "Tidak dapat membuat koneksi SSL.\n"

#: src/http.c:2620
#, c-format
msgid "ERROR: Redirection (%d) without location.\n"
msgstr "ERROR: Redireksi (%d) tanpa lokasi.\n"

#: src/http.c:2668
msgid "Remote file does not exist -- broken link!!!\n"
msgstr "Berkas tidak ada -- link rusak!!!\n"

#: src/http.c:2673
#, c-format
msgid "%s ERROR %d: %s.\n"
msgstr "%s ERROR %d: %s.\n"

#: src/http.c:2690
msgid "Last-modified header missing -- time-stamps turned off.\n"
msgstr ""
"Header yang paling akhir dimodifikasi hilang -- time-stamps dimatikan.\n"

#: src/http.c:2698
msgid "Last-modified header invalid -- time-stamp ignored.\n"
msgstr ""
"header yang paling akhir dimodifikasi tidak valid -- time-stamp diabaikan.\n"

#: src/http.c:2728
#, c-format
msgid ""
"Server file no newer than local file %s -- not retrieving.\n"
"\n"
msgstr ""
"Berkas server tidak ada yang lebih baru dari lokal berkas %s -- tidak "
"diambil.\n"
"\n"

#: src/http.c:2736
#, c-format
msgid "The sizes do not match (local %s) -- retrieving.\n"
msgstr "Besar tidak cocok (local %s) -- diambil.\n"

#: src/http.c:2743
msgid "Remote file is newer, retrieving.\n"
msgstr "File remote lebih baru, diambil.\n"

#: src/http.c:2760
msgid ""
"Remote file exists and could contain links to other resources -- "
"retrieving.\n"
"\n"
msgstr ""
"Berkas tujuan telah ada dan mungkin bisa berisi link ke sumber lain -- "
"mengambil.\n"
"\n"

#: src/http.c:2766
msgid ""
"Remote file exists but does not contain any link -- not retrieving.\n"
"\n"
msgstr ""
"Berkas tujuan ada tapi tidak berisi sumber lain -- tidak diambil.\n"
"\n"

#: src/http.c:2775
msgid ""
"Remote file exists and could contain further links,\n"
"but recursion is disabled -- not retrieving.\n"
"\n"
msgstr ""
"Berkas tujuan ada dan dapat berisi link, tetap\n"
"recursion dinonaktifkan -- tidak mencoba.\n"
"\n"

#: src/http.c:2781
msgid ""
"Remote file exists.\n"
"\n"
msgstr ""
"Berkas tujuan ada.\n"
"\n"

#: src/http.c:2790
#, c-format
msgid "%s URL: %s %2d %s\n"
msgstr "%s: URL: %s %2d %s\n"

#: src/http.c:2837
#, c-format
msgid ""
"%s (%s) - written to stdout %s[%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - disimpan ke stdout %s[%s/%s]\n"
"\n"

#: src/http.c:2838
#, c-format
msgid ""
"%s (%s) - %s saved [%s/%s]\n"
"\n"
msgstr ""
"%s (%s) - %s disimpan [%s/%s]\n"
"\n"

#: src/http.c:2899
#, c-format
msgid "%s (%s) - Connection closed at byte %s. "
msgstr "%s (%s) - Hubungan ditutup pada byte %s. "

#: src/http.c:2922
#, c-format
msgid "%s (%s) - Read error at byte %s (%s)."
msgstr "%s (%s) - Read error pada byte %s (%s)."

#: src/http.c:2931
#, c-format
msgid "%s (%s) - Read error at byte %s/%s (%s). "
msgstr "%s (%s) - Read error pada byte %s/%s (%s). "

#: src/init.c:406
#, c-format
msgid "%s: WGETRC points to %s, which doesn't exist.\n"
msgstr "%s: WGETRC menunjuk ke %s, dimana itu tidak ada.\n"

#: src/init.c:510 src/netrc.c:282
#, c-format
msgid "%s: Cannot read %s (%s).\n"
msgstr "%s: Tidak dapat membaca %s (%s).\n"

#: src/init.c:527
#, c-format
msgid "%s: Error in %s at line %d.\n"
msgstr "%s: Error dalam %s pada baris %d.\n"

#: src/init.c:533
#, c-format
msgid "%s: Syntax error in %s at line %d.\n"
msgstr "%s: Syntax error dalam %s pada baris %d.\n"

#: src/init.c:538
#, c-format
msgid "%s: Unknown command %s in %s at line %d.\n"
msgstr "%s: Perintah tidak diketahui %s dalam %s pada baris %d.\n"

#: src/init.c:587
#, c-format
msgid "%s: Warning: Both system and user wgetrc point to %s.\n"
msgstr "%s: Peringatan: Kedua sistem dan pengguna wgetrc menunjuk ke %s.\n"

#: src/init.c:777
#, c-format
msgid "%s: Invalid --execute command %s\n"
msgstr "%s: Tidak valid --execute perintah %s\n"

#: src/init.c:822
#, c-format
msgid "%s: %s: Invalid boolean %s; use `on' or `off'.\n"
msgstr "%s: %s: Boolean tidak valid %s; gunakan `on' atau `off'.\n"

#: src/init.c:839
#, c-format
msgid "%s: %s: Invalid number %s.\n"
msgstr "%s: %s: Nomor tidak valid %s.\n"

#: src/init.c:1044 src/init.c:1063
#, c-format
msgid "%s: %s: Invalid byte value %s\n"
msgstr "%s: %s: Nilai byte tidak valid %s\n"

#: src/init.c:1088
#, c-format
msgid "%s: %s: Invalid time period %s\n"
msgstr "%s: %s: Perioda waktu tidak valid %s\n"

#: src/init.c:1142 src/init.c:1232 src/init.c:1340 src/init.c:1365
#, c-format
msgid "%s: %s: Invalid value %s.\n"
msgstr "%s: %s: Nilai tidak valid %s.\n"

#: src/init.c:1179
#, c-format
msgid "%s: %s: Invalid header %s.\n"
msgstr "%s: %s: Header tidak valid %s.\n"

#: src/init.c:1245
#, c-format
msgid "%s: %s: Invalid progress type %s.\n"
msgstr "%s: %s: Tipe progress tidak valid %s.\n"

#: src/init.c:1306
#, c-format
msgid ""
"%s: %s: Invalid restriction %s,\n"
"    use [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"
msgstr ""
"%s: %s: Pembatasan tidak benar %s, \n"
"    gunakan [unix|windows],[lowercase|uppercase],[nocontrol],[ascii].\n"

#: src/iri.c:104
#, c-format
msgid "Encoding %s isn't valid\n"
msgstr "Pengkodean %s tidak valid\n"

#: src/iri.c:132
msgid "locale_to_utf8: locale is unset\n"
msgstr "local_to_utf8: lokal tidak diset\n"

#: src/iri.c:142
#, c-format
msgid "Conversion from %s to %s isn't supported\n"
msgstr "Konversi dari %s ke %s belum didukung\n"

#: src/iri.c:183
msgid "Incomplete or invalid multibyte sequence encountered\n"
msgstr "Tidak lengkap atau tidak valid urutan multibyte ditemui\n"

#: src/iri.c:208
#, c-format
msgid "Unhandled errno %d\n"
msgstr "Errno tidak tertangani %d\n"

#: src/iri.c:237
#, c-format
msgid "idn_encode failed (%d): %s\n"
msgstr "idn_encode gagal (%d): %s\n"

#: src/iri.c:256
#, c-format
msgid "idn_decode failed (%d): %s\n"
msgstr "idn_decode gagal (%d):%s\n"

#: src/log.c:809
#, c-format
msgid ""
"\n"
"%s received, redirecting output to %s.\n"
msgstr ""
"\n"
"%s diterima, meneruskan output ke %s.\n"

#: src/log.c:819
#, c-format
msgid ""
"\n"
"%s received.\n"
msgstr ""
"\n"
"%s diterima.\n"

#: src/log.c:820
#, c-format
msgid "%s: %s; disabling logging.\n"
msgstr "%s: %s; mematikan logging.\n"

#: src/main.c:386
#, c-format
msgid "Usage: %s [OPTION]... [URL]...\n"
msgstr "Penggunaan: %s [PILIHAN]... [URL]...\n"

#: src/main.c:398
msgid ""
"Mandatory arguments to long options are mandatory for short options too.\n"
"\n"
msgstr ""
"Argumen yang wajib untuk pilihan panjang juga wajib untuk pilihan yang "
"pendek.\n"
"\n"

#: src/main.c:400
msgid "Startup:\n"
msgstr "Memulai:\n"

#: src/main.c:402
msgid "  -V,  --version           display the version of Wget and exit.\n"
msgstr "  -V,  --version           menampilkan versi dari Wget dan keluar.\n"

#: src/main.c:404
msgid "  -h,  --help              print this help.\n"
msgstr "  -h,  --help              menampilkan bantuan ini.\n"

#: src/main.c:406
msgid "  -b,  --background        go to background after startup.\n"
msgstr "  -b,  --background        pergi ke background setelah memulai.\n"

#: src/main.c:408
msgid "  -e,  --execute=COMMAND   execute a `.wgetrc'-style command.\n"
msgstr ""
"  -e,  --execute=COMMAND   menjalankan sebuah perintah `.wgetrc'-style.\n"

#: src/main.c:412
msgid "Logging and input file:\n"
msgstr "Mencatat dan memasukan berkas:\n"

#: src/main.c:414
msgid "  -o,  --output-file=FILE    log messages to FILE.\n"
msgstr "  -o,  --output-file=FILE     pesan log pada FILE.\n"

#: src/main.c:416
msgid "  -a,  --append-output=FILE  append messages to FILE.\n"
msgstr "  -a,  --append-output=FILE  tambahkan pesan pada FILE.\n"

#: src/main.c:419
msgid "  -d,  --debug               print lots of debugging information.\n"
msgstr "  -d,  --debug               tampilkan banyak informasi debugging.\n"

#: src/main.c:423
msgid "       --wdebug              print Watt-32 debug output.\n"
msgstr "       --wdebug               tampilkan keluaran Watt-32 debug.\n"

#: src/main.c:426
msgid "  -q,  --quiet               quiet (no output).\n"
msgstr "  -q,  --quiet               diam (tidak ada output).\n"

#: src/main.c:428
msgid "  -v,  --verbose             be verbose (this is the default).\n"
msgstr "  -v,  --verbose             jadi verbose (ini yang default).\n"

#: src/main.c:430
msgid ""
"  -nv, --no-verbose          turn off verboseness, without being quiet.\n"
msgstr ""
"   -nv, --no-verbose          matikan verboseness, tanpa menjadi quiet.\n"

#: src/main.c:432
msgid ""
"  -i,  --input-file=FILE     download URLs found in local or external FILE.\n"
msgstr ""
"  -i,  --input-file=BERKAS    download URLs ditemukan dalam lokal atau "
"BERKAS eksternal.\n"

#: src/main.c:434
msgid "  -F,  --force-html          treat input file as HTML.\n"
msgstr "  -F,  --force-html          perlakukan input file sebagai HTML.\n"

#: src/main.c:436
msgid ""
"  -B,  --base=URL            resolves HTML input-file links (-i -F)\n"
"                             relative to URL.\n"
msgstr ""
"  -B,  --base=URL            telusuri berkas masukan HTML (-i -F)\n"
"                             relatif ke URL.\n"

#: src/main.c:441
msgid "Download:\n"
msgstr "Download:\n"

#: src/main.c:443
msgid ""
"  -t,  --tries=NUMBER            set number of retries to NUMBER (0 "
"unlimits).\n"
msgstr ""
"  -t,  --tries=NUMBER            set nomor mencoba ke NUMBER (0 untuk tidak "
"terbatas).\n"

#: src/main.c:445
msgid "       --retry-connrefused       retry even if connection is refused.\n"
msgstr "       --retry-connrefused       coba lagi walaupun koneksi ditolak.\n"

#: src/main.c:447
msgid "  -O,  --output-document=FILE    write documents to FILE.\n"
msgstr "  -O,  --output-document=FILE    tulis document pada FILE.\n"

#: src/main.c:449
msgid ""
"  -nc, --no-clobber              skip downloads that would download to\n"
"                                 existing files.\n"
msgstr ""
"  -nc, --no-clobber              skip downloads yang akan mendownload ke\n"
"                                 file yang sudah ada.\n"

#: src/main.c:452
msgid ""
"  -c,  --continue                resume getting a partially-downloaded "
"file.\n"
msgstr ""
"  -c,  --continue                lanjutkan mengambil file yang terdownload  "
"sebagian.\n"

#: src/main.c:454
msgid "       --progress=TYPE           select progress gauge type.\n"
msgstr "       --progress=TYPE           pilih tipe gauge progress.\n"

#: src/main.c:456
msgid ""
"  -N,  --timestamping            don't re-retrieve files unless newer than\n"
"                                 local.\n"
msgstr ""
"  -N,  --timestamping            jangan mengambil kembali file kecuali file\n"
"                                 lebih baru dari file local.\n"

#: src/main.c:459
msgid "  -S,  --server-response         print server response.\n"
msgstr "  -S,  --server-response         tampilkan balasan server.\n"

#: src/main.c:461
msgid "       --spider                  don't download anything.\n"
msgstr "       --spider                  jangan mendownload apapun.\n"

#: src/main.c:463
msgid "  -T,  --timeout=SECONDS         set all timeout values to SECONDS.\n"
msgstr ""
"  -T,  --timeout=SECONDS         set semua nilai timeout pada SECONDS.\n"

#: src/main.c:465
msgid "       --dns-timeout=SECS        set the DNS lookup timeout to SECS.\n"
msgstr ""
"       --dns-timeout=SECS        set the DNS lookup timeout pada SECS.\n"

#: src/main.c:467
msgid "       --connect-timeout=SECS    set the connect timeout to SECS.\n"
msgstr "       --connect-timeout=SECS    set the connect timeout pada SECS.\n"

#: src/main.c:469
msgid "       --read-timeout=SECS       set the read timeout to SECS.\n"
msgstr "       --read-timeout=SECS       set the read timeout pada SECS.\n"

#: src/main.c:471
msgid "  -w,  --wait=SECONDS            wait SECONDS between retrievals.\n"
msgstr ""
"  -w,  --wait=SECONDS            tunggu SECONDS diantara pengambilan.\n"

#: src/main.c:473
msgid ""
"       --waitretry=SECONDS       wait 1..SECONDS between retries of a "
"retrieval.\n"
msgstr ""
"       --waitretry=SECONDS       tunggu 1..SECONDS diantara pencobaan dari "
"sebuah pengambilan.\n"

#: src/main.c:475
msgid ""
"       --random-wait             wait from 0...2*WAIT secs between "
"retrievals.\n"
msgstr ""
"       --random-wait             tunggu dari 0...2*WAIT secs diantara "
"pengambilan.\n"

#: src/main.c:477
msgid "       --no-proxy                explicitly turn off proxy.\n"
msgstr "       --no-proxy                secara eksplisit mematikan proxy.\n"

#: src/main.c:479
msgid "  -Q,  --quota=NUMBER            set retrieval quota to NUMBER.\n"
msgstr "  -Q,  --quota=NUMBER            set pengambilan quota pada NUMBER.\n"

#: src/main.c:481
msgid ""
"       --bind-address=ADDRESS    bind to ADDRESS (hostname or IP) on local "
"host.\n"
msgstr ""
"       --bind-address=ADDRESS    bind ke ADDRESS (hostname atau IP) pada "
"local host.\n"

#: src/main.c:483
msgid "       --limit-rate=RATE         limit download rate to RATE.\n"
msgstr "       --limit-rate=RATE         batasi kecepatan download ke RATE.\n"

#: src/main.c:485
msgid "       --no-dns-cache            disable caching DNS lookups.\n"
msgstr "       --no-dns-cache            matikan caching dari DNS lookups.\n"

#: src/main.c:487
msgid ""
"       --restrict-file-names=OS  restrict chars in file names to ones OS "
"allows.\n"
msgstr ""
"       --restrict-file-names=OS  restrict karakter dalam nama file ke salah "
"satu dari yang dibolehkan oleh OS.\n"

#: src/main.c:489
msgid ""
"       --ignore-case             ignore case when matching files/"
"directories.\n"
msgstr ""
"       --ignore-case             abaikan besar/kecil huruf ketika mencocokan "
"files/direktori..\n"

#: src/main.c:492
msgid "  -4,  --inet4-only              connect only to IPv4 addresses.\n"
msgstr ""
"  -4,  --inet4-only              hanya menghubungi ke alamat IPv4 saja.\n"

#: src/main.c:494
msgid "  -6,  --inet6-only              connect only to IPv6 addresses.\n"
msgstr ""
"  -6,  --inet6-only              hanya menghubungi ke alamat IPv6 saja.\n"

#: src/main.c:496
msgid ""
"       --prefer-family=FAMILY    connect first to addresses of specified "
"family,\n"
"                                 one of IPv6, IPv4, or none.\n"
msgstr ""
"       --prefer-family=FAMILY    hubungi terlebih dahulu alamat dari family  "
"yang dispesifikasikan,\n"
"                                 salah satu dari IPv6, IPv4 atau none.\n"

#: src/main.c:500
msgid "       --user=USER               set both ftp and http user to USER.\n"
msgstr ""
"       --user=USER               set kedua ftp dan http user pada USER.\n"

#: src/main.c:502
msgid ""
"       --password=PASS           set both ftp and http password to PASS.\n"
msgstr ""
"       --password=PASS           set kedua ftp dan http password pada PASS.\n"

#: src/main.c:504
msgid "       --ask-password            prompt for passwords.\n"
msgstr "       --ask-password            tanya untuk kata sandi.\n"

#: src/main.c:506
msgid "       --no-iri                  turn off IRI support.\n"
msgstr "       --no-iri                  non-aktifkan dukungan IRI.\n"

#: src/main.c:508
msgid ""
"       --local-encoding=ENC      use ENC as the local encoding for IRIs.\n"
msgstr ""
"       --local-encoding=ENC      gunakan ENC sebagai pengkodean lokal untuk "
"IRI.\n"

#: src/main.c:510
msgid ""
"       --remote-encoding=ENC     use ENC as the default remote encoding.\n"
msgstr ""
"       --remote-encoding=ENC     gunakan ENC sebagai pengkodean baku "
"remote.\n"

#: src/main.c:514
msgid "Directories:\n"
msgstr "Direktori:\n"

#: src/main.c:516
msgid "  -nd, --no-directories           don't create directories.\n"
msgstr "  -nd,  --no-directories          jangan membuat direktori.\n"

#: src/main.c:518
msgid "  -x,  --force-directories        force creation of directories.\n"
msgstr "  -x,  --force-directories        paksa pembuatan direktori.\n"

#: src/main.c:520
msgid "  -nH, --no-host-directories      don't create host directories.\n"
msgstr "  -nH, --no-host-directories      jangan buat host directories.\n"

#: src/main.c:522
msgid "       --protocol-directories     use protocol name in directories.\n"
msgstr ""
"       --protocol-directories     gunakan nama protocol dalam direktori.\n"

#: src/main.c:524
msgid "  -P,  --directory-prefix=PREFIX  save files to PREFIX/...\n"
msgstr "  -P,  --directory-prefix=PREFIX  simpan file pada PREFIX/...\n"

#: src/main.c:526
msgid ""
"       --cut-dirs=NUMBER          ignore NUMBER remote directory "
"components.\n"
msgstr ""
"       --cut-dirs=NUMBER           abaikan NUMBER remote komponen "
"direktori.\n"

#: src/main.c:530
msgid "HTTP options:\n"
msgstr "Pilihan HTTP:\n"

#: src/main.c:532
msgid "       --http-user=USER        set http user to USER.\n"
msgstr "       --http-user=USER        set http user pada USER.\n"

#: src/main.c:534
msgid "       --http-password=PASS    set http password to PASS.\n"
msgstr "       --http-password=PASS    set http password pada PASS.\n"

#: src/main.c:536
msgid "       --no-cache              disallow server-cached data.\n"
msgstr "       --nocache               dissallow server-cached data.\n"

#: src/main.c:538
msgid ""
"       --default-page=NAME     Change the default page name (normally\n"
"                               this is `index.html'.).\n"
msgstr ""
"       --default-page=NAMA     Ubah nama halaman baku (biasanya\n"
"                               ini `index.html'.).\n"

#: src/main.c:541
msgid ""
"  -E,  --adjust-extension      save HTML/CSS documents with proper "
"extensions.\n"
msgstr ""
"  -E,  --adjust-extension      simpan HTML/CSS dokumen dengan ekstensi yang "
"sesuai.\n"

#: src/main.c:543
msgid "       --ignore-length         ignore `Content-Length' header field.\n"
msgstr ""
"       --ignore-length         abaikan `Content-Length' bagian header.\n"

#: src/main.c:545
msgid "       --header=STRING         insert STRING among the headers.\n"
msgstr "       --header=STRING         masukkan STRING dalam headers.\n"

#: src/main.c:547
msgid "       --max-redirect          maximum redirections allowed per page.\n"
msgstr ""
"       --max-redirect          batas maksimal yang diperbolehkan untuk "
"redirection setiap halaman.\n"

#: src/main.c:549
msgid "       --proxy-user=USER       set USER as proxy username.\n"
msgstr "       --proxy-user=USER       set USER sebagai username proxy.\n"

#: src/main.c:551
msgid "       --proxy-password=PASS   set PASS as proxy password.\n"
msgstr "       --proxy-password=PASS   set PASS sebagai password proxy.\n"

#: src/main.c:553
msgid ""
"       --referer=URL           include `Referer: URL' header in HTTP "
"request.\n"
msgstr ""
"       --referer=URL           masukkan `Referer: URL' header dalam HTTP "
"request.\n"

#: src/main.c:555
msgid "       --save-headers          save the HTTP headers to file.\n"
msgstr "       --save-headers          simpan HTTP headers pada file.\n"

#: src/main.c:557
msgid ""
"  -U,  --user-agent=AGENT      identify as AGENT instead of Wget/VERSION.\n"
msgstr ""
"  -U,  --user-agent=AGENT      identifikasi sebagai AGEN daripada sebagai "
"Wget/VERSION.\n"

#: src/main.c:559
msgid ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"connections).\n"
msgstr ""
"       --no-http-keep-alive    disable HTTP keep-alive (persistent "
"koneksi).\n"

#: src/main.c:561
msgid "       --no-cookies            don't use cookies.\n"
msgstr "       --no-cookies            jangan menggunakan cookies.\n"

#: src/main.c:563
msgid "       --load-cookies=FILE     load cookies from FILE before session.\n"
msgstr ""
"       --load-cookies=FILE     load cookies dari FILE sebelum session.\n"

#: src/main.c:565
msgid "       --save-cookies=FILE     save cookies to FILE after session.\n"
msgstr ""
"       --save-cookies=FILE     simpan cookies pada FILE sesudah session.\n"

#: src/main.c:567
msgid ""
"       --keep-session-cookies  load and save session (non-permanent) "
"cookies.\n"
msgstr ""
"       --keep-session-cookies  load dan simpan session (non-permanen) "
"cookies.\n"

#: src/main.c:569
msgid ""
"       --post-data=STRING      use the POST method; send STRING as the "
"data.\n"
msgstr ""
"       --post-data=STRING      gunakan metoda POST; kirim STRING sebagai "
"data.\n"

#: src/main.c:571
msgid ""
"       --post-file=FILE        use the POST method; send contents of FILE.\n"
msgstr ""
"       --post-file=FILE        gunakan metoda POST; kirim isi dari FILE.\n"

#: src/main.c:573
msgid ""
"       --content-disposition   honor the Content-Disposition header when\n"
"                               choosing local file names (EXPERIMENTAL).\n"
msgstr ""
"       --content-disposition   Lihat header Content-Disposition ketika "
"memilih\n"
"                               berkas lokal (EKSPERIMEN).\n"

#: src/main.c:576
msgid ""
"       --auth-no-challenge     send Basic HTTP authentication information\n"
"                               without first waiting for the server's\n"
"                               challenge.\n"
msgstr ""
"       --auth-no-challenge     Kirim informasi otentifikasi standar HTTP "
"tanpa\n"
"                               harus menunggu untuk ditanyai oleh server.\n"

#: src/main.c:583
msgid "HTTPS (SSL/TLS) options:\n"
msgstr "Pilihan HTTPS (SSL/TLS):\n"

#: src/main.c:585
msgid ""
"       --secure-protocol=PR     choose secure protocol, one of auto, SSLv2,\n"
"                                SSLv3, and TLSv1.\n"
msgstr ""
"       --secure-protocol=PR     pilih secure protocolm salah satu dari "
"auto,\n"
"                                SSLv2, SSLv3, dan TLSv1.\n"

#: src/main.c:588
msgid ""
"       --no-check-certificate   don't validate the server's certificate.\n"
msgstr ""
"       --no-check-certificate   jangan memvalidasi server certificate.\n"

#: src/main.c:590
msgid "       --certificate=FILE       client certificate file.\n"
msgstr "       --certificate=FILE       client certificate file.\n"

#: src/main.c:592
msgid "       --certificate-type=TYPE  client certificate type, PEM or DER.\n"
msgstr ""
"       --certificate-type=TYPE  tipe sertifikate client, PEM atau DER.\n"

#: src/main.c:594
msgid "       --private-key=FILE       private key file.\n"
msgstr "       --private-key=FILE       private key file.\n"

#: src/main.c:596
msgid "       --private-key-type=TYPE  private key type, PEM or DER.\n"
msgstr "       --private-key-type=TYPE  tipe private key, PEM atau DER.\n"

#: src/main.c:598
msgid "       --ca-certificate=FILE    file with the bundle of CA's.\n"
msgstr "       --ca-certificate=FILE    file yang berisi CA's.\n"

#: src/main.c:600
msgid ""
"       --ca-directory=DIR       directory where hash list of CA's is "
"stored.\n"
msgstr ""
"       --ca-directory=DIR       direktori dimana hash list dari CA's "
"disimpan\n"

#: src/main.c:602
msgid ""
"       --random-file=FILE       file with random data for seeding the SSL "
"PRNG.\n"
msgstr ""
"       --random-file=FILE       file dengan data acak untuk seeding SSL "
"PRNG.\n"

#: src/main.c:604
msgid ""
"       --egd-file=FILE          file naming the EGD socket with random "
"data.\n"
msgstr ""
"       --egd-file=FILE          penamaan file EGD socket dengan data "
"random.\n"

#: src/main.c:609
msgid "FTP options:\n"
msgstr "Pilihan FTP:\n"

#: src/main.c:612
msgid ""
"       --ftp-stmlf             Use Stream_LF format for all binary FTP "
"files.\n"
msgstr ""
"       --ftp-stmlf             Gunakan format Stream_LF untuk seluruh berkas "
"binari FTP.\n"

#: src/main.c:615
msgid "       --ftp-user=USER         set ftp user to USER.\n"
msgstr "       --ftp-user=USER         set ftp user pada USER.\n"

#: src/main.c:617
msgid "       --ftp-password=PASS     set ftp password to PASS.\n"
msgstr "       --ftp-password=PASS     set ftp password pada PASS.\n"

#: src/main.c:619
msgid "       --no-remove-listing     don't remove `.listing' files.\n"
msgstr "       --no-remove-listing     jangan hapus file `.listing'.\n"

#: src/main.c:621
msgid "       --no-glob               turn off FTP file name globbing.\n"
msgstr "       --no-glob               matikan FTP nama file globbing.\n"

#: src/main.c:623
msgid "       --no-passive-ftp        disable the \"passive\" transfer mode.\n"
msgstr "       --no-passive-ftp        disable the \"passive\" mode trasfer.\n"

#: src/main.c:625
msgid ""
"       --retr-symlinks         when recursing, get linked-to files (not "
"dir).\n"
msgstr ""
"       --retr-symlinks         ketika berekursif, ambil linked-to files "
"(bukan dir).\n"

#: src/main.c:629
msgid "Recursive download:\n"
msgstr "Recursive download:\n"

#: src/main.c:631
msgid "  -r,  --recursive          specify recursive download.\n"
msgstr ""
"  -r,  --recursive          spesifikasikan untuk mendownload rekursif.\n"

#: src/main.c:633
msgid ""
"  -l,  --level=NUMBER       maximum recursion depth (inf or 0 for "
"infinite).\n"
msgstr ""
"  -l,  --level=NUMBER      maksimum kedalaman rekursi (inf atau 0 untuk tak "
"terhingga).\n"

#: src/main.c:635
msgid ""
"       --delete-after       delete files locally after downloading them.\n"
msgstr ""
"       --delete-after       delete files locally sesudah mendownloadnya.\n"

#: src/main.c:637
msgid ""
"  -k,  --convert-links      make links in downloaded HTML or CSS point to\n"
"                            local files.\n"
msgstr ""
"  -k,  --convert-links      buat links dalam HTML yang didownload atau CSS "
"yang\n"
"                            menunjuk ke berkas lokal.\n"

#: src/main.c:641
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X_orig.\n"
msgstr ""
"  -K,  --backup-converted   sebelum mengubah berkas X, backup sebagai X."
"orig.\n"

#: src/main.c:644
msgid ""
"  -K,  --backup-converted   before converting file X, back up as X.orig.\n"
msgstr ""
"  -K,  --backup-converted   sebelum mengubah file X, backup sebagai X.orig.\n"

#: src/main.c:647
msgid ""
"  -m,  --mirror             shortcut for -N -r -l inf --no-remove-listing.\n"
msgstr ""
"  -m,  --mirror             shortcut untuk -N -r -l inf --no-remove-"
"listing.\n"

#: src/main.c:649
msgid ""
"  -p,  --page-requisites    get all images, etc. needed to display HTML "
"page.\n"
msgstr ""
"  -p,  --page-requisites    ambil semua gambar, dll. yang diperlukan untuk "
"menampilkan file HTML.\n"

#: src/main.c:651
msgid ""
"       --strict-comments    turn on strict (SGML) handling of HTML "
"comments.\n"
msgstr ""
"       --strict-comments    hidupkan strick (SGML) handling dari komentar "
"HTML.\n"

#: src/main.c:655
msgid "Recursive accept/reject:\n"
msgstr "Recursive diterima/ditolak:\n"

#: src/main.c:657
msgid ""
"  -A,  --accept=LIST               comma-separated list of accepted "
"extensions.\n"
msgstr ""
"  -A,  --accept=LIST               list yang dipisahkan oleh koma yang "
"berisiekstensi yang diterima.\n"

#: src/main.c:659
msgid ""
"  -R,  --reject=LIST               comma-separated list of rejected "
"extensions.\n"
msgstr ""
"  -R,  --reject=LIST               list yang dipisahkan oleh koma yang "
"berisiekstensi yang ditolak.\n"

#: src/main.c:661
msgid ""
"  -D,  --domains=LIST              comma-separated list of accepted "
"domains.\n"
msgstr ""
"  -D,  --domains=LIST              list yang dipisahkan oleh koma yang "
"berisidomains yang dibolehkan.\n"

#: src/main.c:663
msgid ""
"       --exclude-domains=LIST      comma-separated list of rejected "
"domains.\n"
msgstr ""
"       --exclude-domains=LIST      list yang dipisahkan oleh koma yang "
"berisidomains yang direject/tolak.\n"

#: src/main.c:665
msgid ""
"       --follow-ftp                follow FTP links from HTML documents.\n"
msgstr "       --follow-ftp                ikuti link FTP dari dokumen HTML.\n"

#: src/main.c:667
msgid ""
"       --follow-tags=LIST          comma-separated list of followed HTML "
"tags.\n"
msgstr ""
"       --follow-tags=LIST          list yang dipisahkan oleh koma yang "
"berisitag HTML yang diikuti\n"

#: src/main.c:669
msgid ""
"       --ignore-tags=LIST          comma-separated list of ignored HTML "
"tags.\n"
msgstr ""
"       --ignore-tags=LIST          list yang dipisahkan oleh koma yang "
"berisitag HTML yang diabaikan.\n"

#: src/main.c:671
msgid ""
"  -H,  --span-hosts                go to foreign hosts when recursive.\n"
msgstr ""
"  -H,  --span-hosts                pergi ke host asing ketika recursive.\n"

#: src/main.c:673
msgid "  -L,  --relative                  follow relative links only.\n"
msgstr ""
"  -L,  --relative                  hanya mengikuti links relative saja.\n"

#: src/main.c:675
msgid "  -I,  --include-directories=LIST  list of allowed directories.\n"
msgstr ""
"  -I,  --include-directories=LIST  list dari direktori yang dibolehkan.\n"

#: src/main.c:677
msgid "  -X,  --exclude-directories=LIST  list of excluded directories.\n"
msgstr ""
"  -X,  --exclude-directories=LIST   list dari direktori yang diabaikan.\n"

#: src/main.c:679
msgid ""
"  -np, --no-parent                 don't ascend to the parent directory.\n"
msgstr ""
"  -np, --no-parent                 jangan merambah direktori atasnya.\n"

#: src/main.c:683
msgid "Mail bug reports and suggestions to <bug-wget@gnu.org>.\n"
msgstr "Laporkan bug dan saran kepada <bug-wget@gnu.org>.\n"

#: src/main.c:688
#, c-format
msgid "GNU Wget %s, a non-interactive network retriever.\n"
msgstr "GNU Wget %s, adalah sebuah non-interaktif network retriever.\n"

#: src/main.c:728
#, c-format
msgid "Password for user %s: "
msgstr "Kata sandi untuk pengguna %s: "

#: src/main.c:730
#, c-format
msgid "Password: "
msgstr "Kata sandi: "

#: src/main.c:780
msgid "Wgetrc: "
msgstr "Wgetrc: "

#: src/main.c:781
msgid "Locale: "
msgstr "Lokal: "

#: src/main.c:782
msgid "Compile: "
msgstr "Kompilasi: "

#: src/main.c:783
msgid "Link: "
msgstr "Sambungkan: "

#: src/main.c:789
#, c-format
msgid ""
"GNU Wget %s built on VMS %s %s.\n"
"\n"
msgstr ""
"GNU Wget %s dibuat di VMS %s %s.\n"
"\n"

#: src/main.c:792
#, c-format
msgid ""
"GNU Wget %s built on %s.\n"
"\n"
msgstr ""
"GNU Wget %s dibuat di %s.\n"
"\n"

#: src/main.c:815
#, c-format
msgid "    %s (env)\n"
msgstr "    %s (lingkungan)\n"

#: src/main.c:821
#, c-format
msgid "    %s (user)\n"
msgstr "    %s (pengguna)\n"

#: src/main.c:825
#, c-format
msgid "    %s (system)\n"
msgstr "    %s (sistem)\n"

#. TRANSLATORS: When available, an actual copyright character
#. (cirle-c) should be used in preference to "(C)".
#: src/main.c:845
msgid "Copyright (C) 2009 Free Software Foundation, Inc.\n"
msgstr "Hak Cipta (C) 2009 Free Software Foundation, Inc.\n"

#: src/main.c:847
msgid ""
"License GPLv3+: GNU GPL version 3 or later\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"This is free software: you are free to change and redistribute it.\n"
"There is NO WARRANTY, to the extent permitted by law.\n"
msgstr ""
"Lisensi GPLv3+: GNU GPL versi 3 atau lebih\n"
"<http://www.gnu.org/licenses/gpl.html>.\n"
"Ini adalah free software; Anda bebas untuk mengubah dan "
"mendistribusikannya.\n"
"Tidak ada GARANSI, selama masih diijinkan oleh hukum yang berlaku.\n"

#. TRANSLATORS: When available, please use the proper diacritics for
#. names such as this one. See en_US.po for reference.
#: src/main.c:854
msgid ""
"\n"
"Originally written by Hrvoje Niksic <hniksic@xemacs.org>.\n"
msgstr ""
"\n"
"Originalnya ditulis oleh Hrvoje Niksic <hniksic@xemacs.org>.\n"

#: src/main.c:856
msgid "Currently maintained by Micah Cowan <micah@cowan.name>.\n"
msgstr "Saat ini dipelihara oleh Micah Cowan <micah@cowan.name>.\n"

#: src/main.c:858
msgid "Please send bug reports and questions to <bug-wget@gnu.org>.\n"
msgstr ""
"Mohon kirimkan laporan kesalahan dan pertanyaan ke <bug-wget@gnu.org>.\n"

#: src/main.c:908 src/main.c:977 src/main.c:1099
#, c-format
msgid "Try `%s --help' for more options.\n"
msgstr "Coba `%s --help' untuk informasi lebih lanjut.\n"

#: src/main.c:974
#, c-format
msgid "%s: illegal option -- `-n%c'\n"
msgstr "%s: illegal pilihan -- `-n%c'\n"

#: src/main.c:1032
#, c-format
msgid "Can't be verbose and quiet at the same time.\n"
msgstr "Tidak dapat verbose dan quiet pada waktu bersamaan.\n"

#: src/main.c:1038
#, c-format
msgid "Can't timestamp and not clobber old files at the same time.\n"
msgstr ""
"Tidak dapat timestamp dan tidak menclobber file lama pada waktu bersamaan.\n"

#: src/main.c:1046
#, c-format
msgid "Cannot specify both --inet4-only and --inet6-only.\n"
msgstr "Tidak dapat menspesifikasikan berdua --inet4-only dan --inet6-only.\n"

#: src/main.c:1056
msgid ""
"Cannot specify both -k and -O if multiple URLs are given, or in combination\n"
"with -p or -r. See the manual for details.\n"
"\n"
msgstr ""
"Tidak dapat menspesifikasikan kedua duanya -k dan -O jika multiple URL "
"diberikan, atau dalam kombinasi\n"
"dengan -p atau -r. Lihat manual untuk informasi lebih details.\n"
"\n"

#: src/main.c:1065
msgid ""
"WARNING: combining -O with -r or -p will mean that all downloaded content\n"
"will be placed in the single file you specified.\n"
"\n"
msgstr ""
"PERINGATAN: mengkombinasikan -O dengan -r atau -p berarti bahwa semua yang\n"
"akan diambil akan diletakan dalam sebuah berkas yang anda spesifikasikan.\n"
"\n"

#: src/main.c:1071
msgid ""
"WARNING: timestamping does nothing in combination with -O. See the manual\n"
"for details.\n"
"\n"
msgstr ""
"PERINGATAN: penandawaktu tidak berfungsi dengan pilihan -O. Lihat manual\n"
"untuk informasi lebih lengkap.\n"
"\n"

#: src/main.c:1079
#, c-format
msgid "File `%s' already there; not retrieving.\n"
msgstr "File `%s' sudah ada disana; tidak diambil.\n"

#: src/main.c:1086
#, c-format
msgid "Cannot specify both --ask-password and --password.\n"
msgstr "Tidak dapat menspesifikasikan baik --ask-password dan --password.\n"

#: src/main.c:1094
#, c-format
msgid "%s: missing URL\n"
msgstr "%s: hilang URL\n"

#: src/main.c:1119
#, c-format
msgid "This version does not have support for IRIs\n"
msgstr "Versi ini tidak mendukung untuk IRI\n"

#: src/main.c:1183
msgid ""
"WARNING: Can't reopen standard output in binary mode;\n"
"         downloaded file may contain inappropriate line endings.\n"
msgstr ""
"PERINGATAN: Tidak dapat membuka keluaran standar dalam mode binari;\n"
"            berkas yang diunduh mungkin berisi akhir baris yang tidak "
"sesuai.\n"

#: src/main.c:1318
#, c-format
msgid "No URLs found in %s.\n"
msgstr "Tidak ada URLs yang ditemukan dalam %s.\n"

#: src/main.c:1336
#, c-format
msgid ""
"FINISHED --%s--\n"
"Downloaded: %d files, %s in %s (%s)\n"
msgstr ""
"SELESAI --%s--\n"
"Terambil: %d berkas, %s dalam %s (%s)\n"

#: src/main.c:1345
#, c-format
msgid "Download quota of %s EXCEEDED!\n"
msgstr "Download quota dari %s TERLEWATI!\n"

#: src/mswindows.c:99
#, c-format
msgid "Continuing in background.\n"
msgstr "Melanjutkan di background.\n"

#: src/mswindows.c:292
#, c-format
msgid "Continuing in background, pid %lu.\n"
msgstr "Melanjutkan di background, pid %lu.\n"

#: src/mswindows.c:294 src/utils.c:472
#, c-format
msgid "Output will be written to %s.\n"
msgstr "Keluaran akan ditulis ke %s.\n"

#: src/mswindows.c:462 src/mswindows.c:469
#, c-format
msgid "%s: Couldn't find usable socket driver.\n"
msgstr "%s: Tidak dapat mencari driver socket yang berguna.\n"

#: src/netrc.c:390
#, c-format
msgid "%s: %s:%d: warning: %s token appears before any machine name\n"
msgstr "%s: %s:%d: peringatan: %s token terlihat sebelum nama mesin lainnya\n"

#: src/netrc.c:421
#, c-format
msgid "%s: %s:%d: unknown token \"%s\"\n"
msgstr "%s: %s:%d: token tidak diketahui \"%s\"\n"

#: src/netrc.c:485
#, c-format
msgid "Usage: %s NETRC [HOSTNAME]\n"
msgstr "Penggunaan: %s NETRC [HOSTNAME]\n"

#: src/netrc.c:495
#, c-format
msgid "%s: cannot stat %s: %s\n"
msgstr "%s: tidak dapat melihat statistik %s: %s\n"

#: src/openssl.c:113
msgid "WARNING: using a weak random seed.\n"
msgstr "PERINGATAN: menggunakan nilai random yang lemah.\n"

#: src/openssl.c:173
msgid "Could not seed PRNG; consider using --random-file.\n"
msgstr "Tidak dapat seed PRNG; pertimbangkan menggunakan --random-file.\n"

#: src/openssl.c:526
#, c-format
msgid "%s: cannot verify %s's certificate, issued by %s:\n"
msgstr ""
"%s: Tidak dapat memverifikasi sertifikat %s, yang diterbitkan oleh %s:\n"

#: src/openssl.c:535
msgid "  Unable to locally verify the issuer's authority.\n"
msgstr "  Tidak dapat untuk memverifikasi atoritas penerbit secara lokal.\n"

#: src/openssl.c:539
msgid "  Self-signed certificate encountered.\n"
msgstr "  Selft-signed sertifikat ditemukan.\n"

#: src/openssl.c:542
msgid "  Issued certificate not yet valid.\n"
msgstr "  Sertifikat yang diterbitkan tidak sah.\n"

#: src/openssl.c:545
msgid "  Issued certificate has expired.\n"
msgstr "  Sertifikat yang diterbikan telah expired.\n"

#: src/openssl.c:579
#, c-format
msgid "%s: certificate common name %s doesn't match requested host name %s.\n"
msgstr ""
"%s: nama pengguna sertifikat %s tidak cocok dengan yang diberikan oleh "
"hostname %s.\n"

#: src/openssl.c:610
#, c-format
msgid ""
"%s: certificate common name is invalid (contains a NUL character).\n"
"This may be an indication that the host is not who it claims to be\n"
"(that is, it is not the real %s).\n"
msgstr ""
"%s: nama umum sertifikat tidak valid (berisi sebuah karakter KOSONG).\n"
"Ini mungkin merupakan indikasi bahwa host bukan yang dimaksud\n"
"(mungkin ini bukan %s sesungguhnya).\n"

#: src/openssl.c:627
#, c-format
msgid "To connect to %s insecurely, use `--no-check-certificate'.\n"
msgstr ""
"Untuk menghubungi %s secara tidak secure, gunakan `--no-check-certificate'.\n"

#: src/progress.c:242
#, c-format
msgid ""
"\n"
"%*s[ skipping %sK ]"
msgstr ""
"\n"
"%*s[ melewatkan %sK ]"

#: src/progress.c:456
#, c-format
msgid "Invalid dot style specification %s; leaving unchanged.\n"
msgstr ""
"Spesifikasi dot style %s tidak valid; membiarkan untuk tidak mengubahnya.\n"

#. TRANSLATORS: "ETA" is English-centric, but this must
#. be short, ideally 3 chars.  Abbreviate if necessary.
#: src/progress.c:805
#, c-format
msgid "  eta %s"
msgstr "  akan selesai pada %s"

#: src/progress.c:1050
msgid "   in "
msgstr "   dalam "

#: src/ptimer.c:162
#, c-format
msgid "Cannot get REALTIME clock frequency: %s\n"
msgstr "Tidak dapat memperoleh REALTIME clock frequency: %s\n"

#: src/recur.c:439
#, c-format
msgid "Removing %s since it should be rejected.\n"
msgstr "Menghapus %s karena ini seharusnya direject.\n"

#: src/res.c:391
#, c-format
msgid "Cannot open %s: %s"
msgstr "Tidak dapat membuka %s: %s"

#: src/res.c:550
msgid "Loading robots.txt; please ignore errors.\n"
msgstr "Menload file robot.txt; tolong hiraukan kesalahan.\n"

#: src/retr.c:667
#, c-format
msgid "Error parsing proxy URL %s: %s.\n"
msgstr "Salah dalam parsing proxy URL %s: %s.\n"

#: src/retr.c:677
#, c-format
msgid "Error in proxy URL %s: Must be HTTP.\n"
msgstr "Salah dalam proxy URL %s: Harus berupa HTTP.\n"

#: src/retr.c:775
#, c-format
msgid "%d redirections exceeded.\n"
msgstr "%d redirections exceeded.\n"

#: src/retr.c:1014
msgid ""
"Giving up.\n"
"\n"
msgstr ""
"Menyerah.\n"
"\n"

#: src/retr.c:1014
msgid ""
"Retrying.\n"
"\n"
msgstr ""
"Mencoba lagi.\n"
"\n"

#: src/spider.c:74
msgid ""
"Found no broken links.\n"
"\n"
msgstr ""
"Tidak ditemukan link yang rusak.\n"
"\n"

#: src/spider.c:81
#, c-format
msgid ""
"Found %d broken link.\n"
"\n"
msgid_plural ""
"Found %d broken links.\n"
"\n"
msgstr[0] ""
"Ditemukan %d link rusak.\n"
"\n"
msgstr[1] ""
"Ditemukan %d link rusak.\n"
"\n"

#: src/spider.c:91
#, c-format
msgid "%s\n"
msgstr "%s\n"

#: src/url.c:633
msgid "No error"
msgstr "Tidak ada kesalahan"

#: src/url.c:635
#, c-format
msgid "Unsupported scheme %s"
msgstr "Skema tidak didukung %s"

#: src/url.c:637
msgid "Scheme missing"
msgstr "Skema hilang"

#: src/url.c:639
msgid "Invalid host name"
msgstr "Host name tidak valid"

#: src/url.c:641
msgid "Bad port number"
msgstr "Nomor port tidak baik"

#: src/url.c:643
msgid "Invalid user name"
msgstr "User name tidak valid"

#: src/url.c:645
msgid "Unterminated IPv6 numeric address"
msgstr "Alamat numerik IPv6 tidak diselesaikan"

#: src/url.c:647
msgid "IPv6 addresses not supported"
msgstr "Pengalamatan IPv6 tidak disupport"

#: src/url.c:649
msgid "Invalid IPv6 numeric address"
msgstr "Alamat numerik IPv6 tidak valid"

#: src/url.c:951
msgid "HTTPS support not compiled in"
msgstr "dukungan HTTPS tidak dikompilasi dalam versi ini"

#: src/utils.c:108
#, c-format
msgid "%s: %s: Failed to allocate enough memory; memory exhausted.\n"
msgstr ""
"%s: %s: Gagal untuk mengalokasikan memori yang mencukupi; kehabisan memori.\n"

#: src/utils.c:114
#, c-format
msgid "%s: %s: Failed to allocate %ld bytes; memory exhausted.\n"
msgstr "%s: %s: Gagal untuk mengalokasikan %ld bytes; kehabisan memori.\n"

#: src/utils.c:327
#, c-format
msgid "%s: aprintf: text buffer is too big (%ld bytes), aborting.\n"
msgstr "%s: aprintf: penyangga teks terlalu besar (%ld bytes), membatalkan.\n"

#: src/utils.c:470
#, c-format
msgid "Continuing in background, pid %d.\n"
msgstr "Melanjutkan di background, pid %d.\n"

#: src/utils.c:521
#, c-format
msgid "Failed to unlink symlink %s: %s\n"
msgstr "Gagal untuk meng-unlink symlink %s: %s\n"

#~ msgid ""
#~ "  -B,  --base=URL            prepends URL to relative links in -F -i "
#~ "file.\n"
#~ msgstr ""
#~ "  -B,  --base=URL            prepends URL pada link relatif dalam file -F "
#~ "-i.\n"

#~ msgid "       --preserve-permissions  preserve remote file permissions.\n"
#~ msgstr "       --preserve-permissions  preserver remote file permissions.\n"

#~ msgid "Error in Set-Cookie, field `%s'"
#~ msgstr "Error dalam Set-Cookie, bagian `%s'"

#~ msgid ""
#~ "%s: %s: Invalid extended boolean `%s';\n"
#~ "use one of `on', `off', `always', or `never'.\n"
#~ msgstr ""
#~ "%s: %s: Tidak valid extended boolean `%s';\n"
#~ "gunakan salah satu dari `on', `off', `always', atau `newer'.\n"

#~ msgid "  -Y,  --proxy                   explicitly turn on proxy.\n"
#~ msgstr ""
#~ "  -Y,  --proxy                   secara eksplisit menggunakan proxy.\n"

#~ msgid ""
#~ "This program is distributed in the hope that it will be useful,\n"
#~ "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
#~ "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
#~ "GNU General Public License for more details.\n"
#~ msgstr ""
#~ "Program ini didistribusikan dengan harapan akan berguna,\n"
#~ "TIDAK TERDAPAT GARANSI; bahkan untuk PENJUALAN atau \n"
#~ "KESESUIAN UNTUK TUJUAN TERTENTU. Lihat GNU General Public Licence\n"
#~ "untuk informasi selengkapnya.\n"

#~ msgid "%s: Certificate verification error for %s: %s\n"
#~ msgstr "%s: Verifikasi Certificate salah untuk %s: %s\n"

#~ msgid "%s (%s) - Connection closed at byte %s/%s. "
#~ msgstr "%s (%s) - Hubungan ditutup pada byte %s/%s. "
