#! /bin/sh

# Guess values for system-dependent variables and create Makefiles.
# Generated automatically using autoconf version 2.13 
# Copyright (C) 1992, 93, 94, 95, 96 Free Software Foundation, Inc.
#
# This configure script is free software; the Free Software Foundation
# gives unlimited permission to copy, distribute and modify it.

# Defaults:
ac_help=
ac_default_prefix=/usr/local
# Any additions from configure.in:
ac_help="$ac_help
  --with-socks            use the socks library"
ac_help="$ac_help
  --with-ssl              use the openssl library"
ac_help="$ac_help
  --disable-opie          disable support for opie or s/key FTP login"
ac_help="$ac_help
  --disable-digest        disable support for HTTP digest authorization"
ac_help="$ac_help
  --disable-debug         disable support for debugging output"
ac_help="$ac_help
  --disable-nls           do not use Native Language Support"

# Initialize some variables set by options.
# The variables have the same names as the options, with
# dashes changed to underlines.
build=NONE
cache_file=./config.cache
exec_prefix=NONE
host=NONE
no_create=
nonopt=NONE
no_recursion=
prefix=NONE
program_prefix=NONE
program_suffix=NONE
program_transform_name=s,x,x,
silent=
site=
srcdir=
target=NONE
verbose=
x_includes=NONE
x_libraries=NONE
bindir='${exec_prefix}/bin'
sbindir='${exec_prefix}/sbin'
libexecdir='${exec_prefix}/libexec'
datadir='${prefix}/share'
sysconfdir='${prefix}/etc'
sharedstatedir='${prefix}/com'
localstatedir='${prefix}/var'
libdir='${exec_prefix}/lib'
includedir='${prefix}/include'
oldincludedir='/usr/include'
infodir='${prefix}/info'
mandir='${prefix}/man'

# Initialize some other variables.
subdirs=
MFLAGS= MAKEFLAGS=
SHELL=${CONFIG_SHELL-/bin/sh}
# Maximum number of lines to put in a shell here document.
ac_max_here_lines=12

ac_prev=
for ac_option
do

  # If the previous option needs an argument, assign it.
  if test -n "$ac_prev"; then
    eval "$ac_prev=\$ac_option"
    ac_prev=
    continue
  fi

  case "$ac_option" in
  -*=*) ac_optarg=`echo "$ac_option" | sed 's/[-_a-zA-Z0-9]*=//'` ;;
  *) ac_optarg= ;;
  esac

  # Accept the important Cygnus configure options, so we can diagnose typos.

  case "$ac_option" in

  -bindir | --bindir | --bindi | --bind | --bin | --bi)
    ac_prev=bindir ;;
  -bindir=* | --bindir=* | --bindi=* | --bind=* | --bin=* | --bi=*)
    bindir="$ac_optarg" ;;

  -build | --build | --buil | --bui | --bu)
    ac_prev=build ;;
  -build=* | --build=* | --buil=* | --bui=* | --bu=*)
    build="$ac_optarg" ;;

  -cache-file | --cache-file | --cache-fil | --cache-fi \
  | --cache-f | --cache- | --cache | --cach | --cac | --ca | --c)
    ac_prev=cache_file ;;
  -cache-file=* | --cache-file=* | --cache-fil=* | --cache-fi=* \
  | --cache-f=* | --cache-=* | --cache=* | --cach=* | --cac=* | --ca=* | --c=*)
    cache_file="$ac_optarg" ;;

  -datadir | --datadir | --datadi | --datad | --data | --dat | --da)
    ac_prev=datadir ;;
  -datadir=* | --datadir=* | --datadi=* | --datad=* | --data=* | --dat=* \
  | --da=*)
    datadir="$ac_optarg" ;;

  -disable-* | --disable-*)
    ac_feature=`echo $ac_option|sed -e 's/-*disable-//'`
    # Reject names that are not valid shell variable names.
    if test -n "`echo $ac_feature| sed 's/[-a-zA-Z0-9_]//g'`"; then
      { echo "configure: error: $ac_feature: invalid feature name" 1>&2; exit 1; }
    fi
    ac_feature=`echo $ac_feature| sed 's/-/_/g'`
    eval "enable_${ac_feature}=no" ;;

  -enable-* | --enable-*)
    ac_feature=`echo $ac_option|sed -e 's/-*enable-//' -e 's/=.*//'`
    # Reject names that are not valid shell variable names.
    if test -n "`echo $ac_feature| sed 's/[-_a-zA-Z0-9]//g'`"; then
      { echo "configure: error: $ac_feature: invalid feature name" 1>&2; exit 1; }
    fi
    ac_feature=`echo $ac_feature| sed 's/-/_/g'`
    case "$ac_option" in
      *=*) ;;
      *) ac_optarg=yes ;;
    esac
    eval "enable_${ac_feature}='$ac_optarg'" ;;

  -exec-prefix | --exec_prefix | --exec-prefix | --exec-prefi \
  | --exec-pref | --exec-pre | --exec-pr | --exec-p | --exec- \
  | --exec | --exe | --ex)
    ac_prev=exec_prefix ;;
  -exec-prefix=* | --exec_prefix=* | --exec-prefix=* | --exec-prefi=* \
  | --exec-pref=* | --exec-pre=* | --exec-pr=* | --exec-p=* | --exec-=* \
  | --exec=* | --exe=* | --ex=*)
    exec_prefix="$ac_optarg" ;;

  -gas | --gas | --ga | --g)
    # Obsolete; use --with-gas.
    with_gas=yes ;;

  -help | --help | --hel | --he)
    # Omit some internal or obsolete options to make the list less imposing.
    # This message is too long to be a string in the A/UX 3.1 sh.
    cat << EOF
Usage: configure [options] [host]
Options: [defaults in brackets after descriptions]
Configuration:
  --cache-file=FILE       cache test results in FILE
  --help                  print this message
  --no-create             do not create output files
  --quiet, --silent       do not print \`checking...' messages
  --version               print the version of autoconf that created configure
Directory and file names:
  --prefix=PREFIX         install architecture-independent files in PREFIX
                          [$ac_default_prefix]
  --exec-prefix=EPREFIX   install architecture-dependent files in EPREFIX
                          [same as prefix]
  --bindir=DIR            user executables in DIR [EPREFIX/bin]
  --sbindir=DIR           system admin executables in DIR [EPREFIX/sbin]
  --libexecdir=DIR        program executables in DIR [EPREFIX/libexec]
  --datadir=DIR           read-only architecture-independent data in DIR
                          [PREFIX/share]
  --sysconfdir=DIR        read-only single-machine data in DIR [PREFIX/etc]
  --sharedstatedir=DIR    modifiable architecture-independent data in DIR
                          [PREFIX/com]
  --localstatedir=DIR     modifiable single-machine data in DIR [PREFIX/var]
  --libdir=DIR            object code libraries in DIR [EPREFIX/lib]
  --includedir=DIR        C header files in DIR [PREFIX/include]
  --oldincludedir=DIR     C header files for non-gcc in DIR [/usr/include]
  --infodir=DIR           info documentation in DIR [PREFIX/info]
  --mandir=DIR            man documentation in DIR [PREFIX/man]
  --srcdir=DIR            find the sources in DIR [configure dir or ..]
  --program-prefix=PREFIX prepend PREFIX to installed program names
  --program-suffix=SUFFIX append SUFFIX to installed program names
  --program-transform-name=PROGRAM
                          run sed PROGRAM on installed program names
EOF
    cat << EOF
Host type:
  --build=BUILD           configure for building on BUILD [BUILD=HOST]
  --host=HOST             configure for HOST [guessed]
  --target=TARGET         configure for TARGET [TARGET=HOST]
Features and packages:
  --disable-FEATURE       do not include FEATURE (same as --enable-FEATURE=no)
  --enable-FEATURE[=ARG]  include FEATURE [ARG=yes]
  --with-PACKAGE[=ARG]    use PACKAGE [ARG=yes]
  --without-PACKAGE       do not use PACKAGE (same as --with-PACKAGE=no)
  --x-includes=DIR        X include files are in DIR
  --x-libraries=DIR       X library files are in DIR
EOF
    if test -n "$ac_help"; then
      echo "--enable and --with options recognized:$ac_help"
    fi
    exit 0 ;;

  -host | --host | --hos | --ho)
    ac_prev=host ;;
  -host=* | --host=* | --hos=* | --ho=*)
    host="$ac_optarg" ;;

  -includedir | --includedir | --includedi | --included | --include \
  | --includ | --inclu | --incl | --inc)
    ac_prev=includedir ;;
  -includedir=* | --includedir=* | --includedi=* | --included=* | --include=* \
  | --includ=* | --inclu=* | --incl=* | --inc=*)
    includedir="$ac_optarg" ;;

  -infodir | --infodir | --infodi | --infod | --info | --inf)
    ac_prev=infodir ;;
  -infodir=* | --infodir=* | --infodi=* | --infod=* | --info=* | --inf=*)
    infodir="$ac_optarg" ;;

  -libdir | --libdir | --libdi | --libd)
    ac_prev=libdir ;;
  -libdir=* | --libdir=* | --libdi=* | --libd=*)
    libdir="$ac_optarg" ;;

  -libexecdir | --libexecdir | --libexecdi | --libexecd | --libexec \
  | --libexe | --libex | --libe)
    ac_prev=libexecdir ;;
  -libexecdir=* | --libexecdir=* | --libexecdi=* | --libexecd=* | --libexec=* \
  | --libexe=* | --libex=* | --libe=*)
    libexecdir="$ac_optarg" ;;

  -localstatedir | --localstatedir | --localstatedi | --localstated \
  | --localstate | --localstat | --localsta | --localst \
  | --locals | --local | --loca | --loc | --lo)
    ac_prev=localstatedir ;;
  -localstatedir=* | --localstatedir=* | --localstatedi=* | --localstated=* \
  | --localstate=* | --localstat=* | --localsta=* | --localst=* \
  | --locals=* | --local=* | --loca=* | --loc=* | --lo=*)
    localstatedir="$ac_optarg" ;;

  -mandir | --mandir | --mandi | --mand | --man | --ma | --m)
    ac_prev=mandir ;;
  -mandir=* | --mandir=* | --mandi=* | --mand=* | --man=* | --ma=* | --m=*)
    mandir="$ac_optarg" ;;

  -nfp | --nfp | --nf)
    # Obsolete; use --without-fp.
    with_fp=no ;;

  -no-create | --no-create | --no-creat | --no-crea | --no-cre \
  | --no-cr | --no-c)
    no_create=yes ;;

  -no-recursion | --no-recursion | --no-recursio | --no-recursi \
  | --no-recurs | --no-recur | --no-recu | --no-rec | --no-re | --no-r)
    no_recursion=yes ;;

  -oldincludedir | --oldincludedir | --oldincludedi | --oldincluded \
  | --oldinclude | --oldinclud | --oldinclu | --oldincl | --oldinc \
  | --oldin | --oldi | --old | --ol | --o)
    ac_prev=oldincludedir ;;
  -oldincludedir=* | --oldincludedir=* | --oldincludedi=* | --oldincluded=* \
  | --oldinclude=* | --oldinclud=* | --oldinclu=* | --oldincl=* | --oldinc=* \
  | --oldin=* | --oldi=* | --old=* | --ol=* | --o=*)
    oldincludedir="$ac_optarg" ;;

  -prefix | --prefix | --prefi | --pref | --pre | --pr | --p)
    ac_prev=prefix ;;
  -prefix=* | --prefix=* | --prefi=* | --pref=* | --pre=* | --pr=* | --p=*)
    prefix="$ac_optarg" ;;

  -program-prefix | --program-prefix | --program-prefi | --program-pref \
  | --program-pre | --program-pr | --program-p)
    ac_prev=program_prefix ;;
  -program-prefix=* | --program-prefix=* | --program-prefi=* \
  | --program-pref=* | --program-pre=* | --program-pr=* | --program-p=*)
    program_prefix="$ac_optarg" ;;

  -program-suffix | --program-suffix | --program-suffi | --program-suff \
  | --program-suf | --program-su | --program-s)
    ac_prev=program_suffix ;;
  -program-suffix=* | --program-suffix=* | --program-suffi=* \
  | --program-suff=* | --program-suf=* | --program-su=* | --program-s=*)
    program_suffix="$ac_optarg" ;;

  -program-transform-name | --program-transform-name \
  | --program-transform-nam | --program-transform-na \
  | --program-transform-n | --program-transform- \
  | --program-transform | --program-transfor \
  | --program-transfo | --program-transf \
  | --program-trans | --program-tran \
  | --progr-tra | --program-tr | --program-t)
    ac_prev=program_transform_name ;;
  -program-transform-name=* | --program-transform-name=* \
  | --program-transform-nam=* | --program-transform-na=* \
  | --program-transform-n=* | --program-transform-=* \
  | --program-transform=* | --program-transfor=* \
  | --program-transfo=* | --program-transf=* \
  | --program-trans=* | --program-tran=* \
  | --progr-tra=* | --program-tr=* | --program-t=*)
    program_transform_name="$ac_optarg" ;;

  -q | -quiet | --quiet | --quie | --qui | --qu | --q \
  | -silent | --silent | --silen | --sile | --sil)
    silent=yes ;;

  -sbindir | --sbindir | --sbindi | --sbind | --sbin | --sbi | --sb)
    ac_prev=sbindir ;;
  -sbindir=* | --sbindir=* | --sbindi=* | --sbind=* | --sbin=* \
  | --sbi=* | --sb=*)
    sbindir="$ac_optarg" ;;

  -sharedstatedir | --sharedstatedir | --sharedstatedi \
  | --sharedstated | --sharedstate | --sharedstat | --sharedsta \
  | --sharedst | --shareds | --shared | --share | --shar \
  | --sha | --sh)
    ac_prev=sharedstatedir ;;
  -sharedstatedir=* | --sharedstatedir=* | --sharedstatedi=* \
  | --sharedstated=* | --sharedstate=* | --sharedstat=* | --sharedsta=* \
  | --sharedst=* | --shareds=* | --shared=* | --share=* | --shar=* \
  | --sha=* | --sh=*)
    sharedstatedir="$ac_optarg" ;;

  -site | --site | --sit)
    ac_prev=site ;;
  -site=* | --site=* | --sit=*)
    site="$ac_optarg" ;;

  -srcdir | --srcdir | --srcdi | --srcd | --src | --sr)
    ac_prev=srcdir ;;
  -srcdir=* | --srcdir=* | --srcdi=* | --srcd=* | --src=* | --sr=*)
    srcdir="$ac_optarg" ;;

  -sysconfdir | --sysconfdir | --sysconfdi | --sysconfd | --sysconf \
  | --syscon | --sysco | --sysc | --sys | --sy)
    ac_prev=sysconfdir ;;
  -sysconfdir=* | --sysconfdir=* | --sysconfdi=* | --sysconfd=* | --sysconf=* \
  | --syscon=* | --sysco=* | --sysc=* | --sys=* | --sy=*)
    sysconfdir="$ac_optarg" ;;

  -target | --target | --targe | --targ | --tar | --ta | --t)
    ac_prev=target ;;
  -target=* | --target=* | --targe=* | --targ=* | --tar=* | --ta=* | --t=*)
    target="$ac_optarg" ;;

  -v | -verbose | --verbose | --verbos | --verbo | --verb)
    verbose=yes ;;

  -version | --version | --versio | --versi | --vers)
    echo "configure generated by autoconf version 2.13"
    exit 0 ;;

  -with-* | --with-*)
    ac_package=`echo $ac_option|sed -e 's/-*with-//' -e 's/=.*//'`
    # Reject names that are not valid shell variable names.
    if test -n "`echo $ac_package| sed 's/[-_a-zA-Z0-9]//g'`"; then
      { echo "configure: error: $ac_package: invalid package name" 1>&2; exit 1; }
    fi
    ac_package=`echo $ac_package| sed 's/-/_/g'`
    case "$ac_option" in
      *=*) ;;
      *) ac_optarg=yes ;;
    esac
    eval "with_${ac_package}='$ac_optarg'" ;;

  -without-* | --without-*)
    ac_package=`echo $ac_option|sed -e 's/-*without-//'`
    # Reject names that are not valid shell variable names.
    if test -n "`echo $ac_package| sed 's/[-a-zA-Z0-9_]//g'`"; then
      { echo "configure: error: $ac_package: invalid package name" 1>&2; exit 1; }
    fi
    ac_package=`echo $ac_package| sed 's/-/_/g'`
    eval "with_${ac_package}=no" ;;

  --x)
    # Obsolete; use --with-x.
    with_x=yes ;;

  -x-includes | --x-includes | --x-include | --x-includ | --x-inclu \
  | --x-incl | --x-inc | --x-in | --x-i)
    ac_prev=x_includes ;;
  -x-includes=* | --x-includes=* | --x-include=* | --x-includ=* | --x-inclu=* \
  | --x-incl=* | --x-inc=* | --x-in=* | --x-i=*)
    x_includes="$ac_optarg" ;;

  -x-libraries | --x-libraries | --x-librarie | --x-librari \
  | --x-librar | --x-libra | --x-libr | --x-lib | --x-li | --x-l)
    ac_prev=x_libraries ;;
  -x-libraries=* | --x-libraries=* | --x-librarie=* | --x-librari=* \
  | --x-librar=* | --x-libra=* | --x-libr=* | --x-lib=* | --x-li=* | --x-l=*)
    x_libraries="$ac_optarg" ;;

  -*) { echo "configure: error: $ac_option: invalid option; use --help to show usage" 1>&2; exit 1; }
    ;;

  *)
    if test -n "`echo $ac_option| sed 's/[-a-z0-9.]//g'`"; then
      echo "configure: warning: $ac_option: invalid host type" 1>&2
    fi
    if test "x$nonopt" != xNONE; then
      { echo "configure: error: can only configure for one host and one target at a time" 1>&2; exit 1; }
    fi
    nonopt="$ac_option"
    ;;

  esac
done

if test -n "$ac_prev"; then
  { echo "configure: error: missing argument to --`echo $ac_prev | sed 's/_/-/g'`" 1>&2; exit 1; }
fi

trap 'rm -fr conftest* confdefs* core core.* *.core $ac_clean_files; exit 1' 1 2 15

# File descriptor usage:
# 0 standard input
# 1 file creation
# 2 errors and warnings
# 3 some systems may open it to /dev/tty
# 4 used on the Kubota Titan
# 6 checking for... messages and results
# 5 compiler messages saved in config.log
if test "$silent" = yes; then
  exec 6>/dev/null
else
  exec 6>&1
fi
exec 5>./config.log

echo "\
This file contains any messages produced by compilers while
running configure, to aid debugging if configure makes a mistake.
" 1>&5

# Strip out --no-create and --no-recursion so they do not pile up.
# Also quote any args containing shell metacharacters.
ac_configure_args=
for ac_arg
do
  case "$ac_arg" in
  -no-create | --no-create | --no-creat | --no-crea | --no-cre \
  | --no-cr | --no-c) ;;
  -no-recursion | --no-recursion | --no-recursio | --no-recursi \
  | --no-recurs | --no-recur | --no-recu | --no-rec | --no-re | --no-r) ;;
  *" "*|*"	"*|*[\[\]\~\#\$\^\&\*\(\)\{\}\\\|\;\<\>\?]*)
  ac_configure_args="$ac_configure_args '$ac_arg'" ;;
  *) ac_configure_args="$ac_configure_args $ac_arg" ;;
  esac
done

# NLS nuisances.
# Only set these to C if already set.  These must not be set unconditionally
# because not all systems understand e.g. LANG=C (notably SCO).
# Fixing LC_MESSAGES prevents Solaris sh from translating var values in `set'!
# Non-C LC_CTYPE values break the ctype check.
if test "${LANG+set}"   = set; then LANG=C;   export LANG;   fi
if test "${LC_ALL+set}" = set; then LC_ALL=C; export LC_ALL; fi
if test "${LC_MESSAGES+set}" = set; then LC_MESSAGES=C; export LC_MESSAGES; fi
if test "${LC_CTYPE+set}"    = set; then LC_CTYPE=C;    export LC_CTYPE;    fi

# confdefs.h avoids OS command line length limits that DEFS can exceed.
rm -rf conftest* confdefs.h
# AIX cpp loses on an empty file, so make sure it contains at least a newline.
echo > confdefs.h

# A filename unique to this package, relative to the directory that
# configure is in, which we can look for to find out if srcdir is correct.
ac_unique_file=src/version.c

# Find the source files, if location was not specified.
if test -z "$srcdir"; then
  ac_srcdir_defaulted=yes
  # Try the directory containing this script, then its parent.
  ac_prog=$0
  ac_confdir=`echo $ac_prog|sed 's%/[^/][^/]*$%%'`
  test "x$ac_confdir" = "x$ac_prog" && ac_confdir=.
  srcdir=$ac_confdir
  if test ! -r $srcdir/$ac_unique_file; then
    srcdir=..
  fi
else
  ac_srcdir_defaulted=no
fi
if test ! -r $srcdir/$ac_unique_file; then
  if test "$ac_srcdir_defaulted" = yes; then
    { echo "configure: error: can not find sources in $ac_confdir or .." 1>&2; exit 1; }
  else
    { echo "configure: error: can not find sources in $srcdir" 1>&2; exit 1; }
  fi
fi
srcdir=`echo "${srcdir}" | sed 's%\([^/]\)/*$%\1%'`

# Prefer explicitly selected file to automatically selected ones.
if test -z "$CONFIG_SITE"; then
  if test "x$prefix" != xNONE; then
    CONFIG_SITE="$prefix/share/config.site $prefix/etc/config.site"
  else
    CONFIG_SITE="$ac_default_prefix/share/config.site $ac_default_prefix/etc/config.site"
  fi
fi
for ac_site_file in $CONFIG_SITE; do
  if test -r "$ac_site_file"; then
    echo "loading site script $ac_site_file"
    . "$ac_site_file"
  fi
done

if test -r "$cache_file"; then
  echo "loading cache $cache_file"
  . $cache_file
else
  echo "creating cache $cache_file"
  > $cache_file
fi

ac_ext=c
# CFLAGS is not in ac_cpp because -g, -O, etc. are not valid cpp options.
ac_cpp='$CPP $CPPFLAGS'
ac_compile='${CC-cc} -c $CFLAGS $CPPFLAGS conftest.$ac_ext 1>&5'
ac_link='${CC-cc} -o conftest${ac_exeext} $CFLAGS $CPPFLAGS $LDFLAGS conftest.$ac_ext $LIBS 1>&5'
cross_compiling=$ac_cv_prog_cc_cross

ac_exeext=
ac_objext=o
if (echo "testing\c"; echo 1,2,3) | grep c >/dev/null; then
  # Stardent Vistra SVR4 grep lacks -e, says ghazi@caip.rutgers.edu.
  if (echo -n testing; echo 1,2,3) | sed s/-n/xn/ | grep xn >/dev/null; then
    ac_n= ac_c='
' ac_t='	'
  else
    ac_n=-n ac_c= ac_t=
  fi
else
  ac_n= ac_c='\c' ac_t=
fi





VERSION=`sed -e 's/^.*"\(.*\)";$/\1/' ${srcdir}/src/version.c`
echo "configuring for GNU Wget $VERSION"

PACKAGE=wget


ac_aux_dir=
for ac_dir in $srcdir $srcdir/.. $srcdir/../..; do
  if test -f $ac_dir/install-sh; then
    ac_aux_dir=$ac_dir
    ac_install_sh="$ac_aux_dir/install-sh -c"
    break
  elif test -f $ac_dir/install.sh; then
    ac_aux_dir=$ac_dir
    ac_install_sh="$ac_aux_dir/install.sh -c"
    break
  fi
done
if test -z "$ac_aux_dir"; then
  { echo "configure: error: can not find install-sh or install.sh in $srcdir $srcdir/.. $srcdir/../.." 1>&2; exit 1; }
fi
ac_config_guess=$ac_aux_dir/config.guess
ac_config_sub=$ac_aux_dir/config.sub
ac_configure=$ac_aux_dir/configure # This should be Cygnus configure.


# Make sure we can run config.sub.
if ${CONFIG_SHELL-/bin/sh} $ac_config_sub sun4 >/dev/null 2>&1; then :
else { echo "configure: error: can not run $ac_config_sub" 1>&2; exit 1; }
fi

echo $ac_n "checking host system type""... $ac_c" 1>&6
echo "configure:572: checking host system type" >&5

host_alias=$host
case "$host_alias" in
NONE)
  case $nonopt in
  NONE)
    if host_alias=`${CONFIG_SHELL-/bin/sh} $ac_config_guess`; then :
    else { echo "configure: error: can not guess host type; you must specify one" 1>&2; exit 1; }
    fi ;;
  *) host_alias=$nonopt ;;
  esac ;;
esac

host=`${CONFIG_SHELL-/bin/sh} $ac_config_sub $host_alias`
host_cpu=`echo $host | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\1/'`
host_vendor=`echo $host | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\2/'`
host_os=`echo $host | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\3/'`
echo "$ac_t""$host" 1>&6

cat >> confdefs.h <<EOF
#define OS_TYPE "$host_os"
EOF


# Check whether --with-socks or --without-socks was given.
if test "${with_socks+set}" = set; then
  withval="$with_socks"
  cat >> confdefs.h <<\EOF
#define HAVE_SOCKS 1
EOF

fi


# Check whether --with-ssl or --without-ssl was given.
if test "${with_ssl+set}" = set; then
  withval="$with_ssl"
  :
fi


# Check whether --enable-opie or --disable-opie was given.
if test "${enable_opie+set}" = set; then
  enableval="$enable_opie"
  USE_OPIE=$enableval
else
  USE_OPIE=yes
fi

test x"${USE_OPIE}" = xyes && cat >> confdefs.h <<\EOF
#define USE_OPIE 1
EOF


# Check whether --enable-digest or --disable-digest was given.
if test "${enable_digest+set}" = set; then
  enableval="$enable_digest"
  USE_DIGEST=$enableval
else
  USE_DIGEST=yes
fi

test x"${USE_DIGEST}" = xyes && cat >> confdefs.h <<\EOF
#define USE_DIGEST 1
EOF


# Check whether --enable-debug or --disable-debug was given.
if test "${enable_debug+set}" = set; then
  enableval="$enable_debug"
  DEBUG=$enableval
else
  DEBUG=yes
fi

test x"${DEBUG}" = xyes && cat >> confdefs.h <<\EOF
#define DEBUG 1
EOF


case "${USE_OPIE}${USE_DIGEST}" in
*yes*)
	MD5_OBJ='md5$o'
esac
if test x"$USE_OPIE" = xyes; then
  OPIE_OBJ='ftp-opie$o'
fi



echo $ac_n "checking whether ${MAKE-make} sets \${MAKE}""... $ac_c" 1>&6
echo "configure:664: checking whether ${MAKE-make} sets \${MAKE}" >&5
set dummy ${MAKE-make}; ac_make=`echo "$2" | sed 'y%./+-%__p_%'`
if eval "test \"`echo '$''{'ac_cv_prog_make_${ac_make}_set'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftestmake <<\EOF
all:
	@echo 'ac_maketemp="${MAKE}"'
EOF
# GNU make sometimes prints "make[1]: Entering...", which would confuse us.
eval `${MAKE-make} -f conftestmake 2>/dev/null | grep temp=`
if test -n "$ac_maketemp"; then
  eval ac_cv_prog_make_${ac_make}_set=yes
else
  eval ac_cv_prog_make_${ac_make}_set=no
fi
rm -f conftestmake
fi
if eval "test \"`echo '$ac_cv_prog_make_'${ac_make}_set`\" = yes"; then
  echo "$ac_t""yes" 1>&6
  SET_MAKE=
else
  echo "$ac_t""no" 1>&6
  SET_MAKE="MAKE=${MAKE-make}"
fi


# Find a good install program.  We prefer a C program (faster),
# so one script is as good as another.  But avoid the broken or
# incompatible versions:
# SysV /etc/install, /usr/sbin/install
# SunOS /usr/etc/install
# IRIX /sbin/install
# AIX /bin/install
# AIX 4 /usr/bin/installbsd, which doesn't work without a -g flag
# AFS /usr/afsws/bin/install, which mishandles nonexistent args
# SVR4 /usr/ucb/install, which tries to use the nonexistent group "staff"
# ./install, which can be erroneously created by make from ./install.sh.
echo $ac_n "checking for a BSD compatible install""... $ac_c" 1>&6
echo "configure:703: checking for a BSD compatible install" >&5
if test -z "$INSTALL"; then
if eval "test \"`echo '$''{'ac_cv_path_install'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
    IFS="${IFS= 	}"; ac_save_IFS="$IFS"; IFS=":"
  for ac_dir in $PATH; do
    # Account for people who put trailing slashes in PATH elements.
    case "$ac_dir/" in
    /|./|.//|/etc/*|/usr/sbin/*|/usr/etc/*|/sbin/*|/usr/afsws/bin/*|/usr/ucb/*) ;;
    *)
      # OSF1 and SCO ODT 3.0 have their own names for install.
      # Don't use installbsd from OSF since it installs stuff as root
      # by default.
      for ac_prog in ginstall scoinst install; do
        if test -f $ac_dir/$ac_prog; then
	  if test $ac_prog = install &&
            grep dspmsg $ac_dir/$ac_prog >/dev/null 2>&1; then
	    # AIX install.  It has an incompatible calling convention.
	    :
	  else
	    ac_cv_path_install="$ac_dir/$ac_prog -c"
	    break 2
	  fi
	fi
      done
      ;;
    esac
  done
  IFS="$ac_save_IFS"

fi
  if test "${ac_cv_path_install+set}" = set; then
    INSTALL="$ac_cv_path_install"
  else
    # As a last resort, use the slow shell script.  We don't cache a
    # path for INSTALL within a source directory, because that will
    # break other packages using the cache if that directory is
    # removed, or if the path is relative.
    INSTALL="$ac_install_sh"
  fi
fi
echo "$ac_t""$INSTALL" 1>&6

# Use test -z because SunOS4 sh mishandles braces in ${var-val}.
# It thinks the first close brace ends the variable substitution.
test -z "$INSTALL_PROGRAM" && INSTALL_PROGRAM='${INSTALL}'

test -z "$INSTALL_SCRIPT" && INSTALL_SCRIPT='${INSTALL_PROGRAM}'

test -z "$INSTALL_DATA" && INSTALL_DATA='${INSTALL} -m 644'



test -z "$CFLAGS"  && CFLAGS= auto_cflags=1
test -z "$CC" && cc_specified=yes

# Extract the first word of "gcc", so it can be a program name with args.
set dummy gcc; ac_word=$2
echo $ac_n "checking for $ac_word""... $ac_c" 1>&6
echo "configure:763: checking for $ac_word" >&5
if eval "test \"`echo '$''{'ac_cv_prog_CC'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  if test -n "$CC"; then
  ac_cv_prog_CC="$CC" # Let the user override the test.
else
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS=":"
  ac_dummy="$PATH"
  for ac_dir in $ac_dummy; do
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/$ac_word; then
      ac_cv_prog_CC="gcc"
      break
    fi
  done
  IFS="$ac_save_ifs"
fi
fi
CC="$ac_cv_prog_CC"
if test -n "$CC"; then
  echo "$ac_t""$CC" 1>&6
else
  echo "$ac_t""no" 1>&6
fi

if test -z "$CC"; then
  # Extract the first word of "cc", so it can be a program name with args.
set dummy cc; ac_word=$2
echo $ac_n "checking for $ac_word""... $ac_c" 1>&6
echo "configure:793: checking for $ac_word" >&5
if eval "test \"`echo '$''{'ac_cv_prog_CC'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  if test -n "$CC"; then
  ac_cv_prog_CC="$CC" # Let the user override the test.
else
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS=":"
  ac_prog_rejected=no
  ac_dummy="$PATH"
  for ac_dir in $ac_dummy; do
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/$ac_word; then
      if test "$ac_dir/$ac_word" = "/usr/ucb/cc"; then
        ac_prog_rejected=yes
	continue
      fi
      ac_cv_prog_CC="cc"
      break
    fi
  done
  IFS="$ac_save_ifs"
if test $ac_prog_rejected = yes; then
  # We found a bogon in the path, so make sure we never use it.
  set dummy $ac_cv_prog_CC
  shift
  if test $# -gt 0; then
    # We chose a different compiler from the bogus one.
    # However, it has the same basename, so the bogon will be chosen
    # first if we set CC to just the basename; use the full file name.
    shift
    set dummy "$ac_dir/$ac_word" "$@"
    shift
    ac_cv_prog_CC="$@"
  fi
fi
fi
fi
CC="$ac_cv_prog_CC"
if test -n "$CC"; then
  echo "$ac_t""$CC" 1>&6
else
  echo "$ac_t""no" 1>&6
fi

  if test -z "$CC"; then
    case "`uname -s`" in
    *win32* | *WIN32*)
      # Extract the first word of "cl", so it can be a program name with args.
set dummy cl; ac_word=$2
echo $ac_n "checking for $ac_word""... $ac_c" 1>&6
echo "configure:844: checking for $ac_word" >&5
if eval "test \"`echo '$''{'ac_cv_prog_CC'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  if test -n "$CC"; then
  ac_cv_prog_CC="$CC" # Let the user override the test.
else
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS=":"
  ac_dummy="$PATH"
  for ac_dir in $ac_dummy; do
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/$ac_word; then
      ac_cv_prog_CC="cl"
      break
    fi
  done
  IFS="$ac_save_ifs"
fi
fi
CC="$ac_cv_prog_CC"
if test -n "$CC"; then
  echo "$ac_t""$CC" 1>&6
else
  echo "$ac_t""no" 1>&6
fi
 ;;
    esac
  fi
  test -z "$CC" && { echo "configure: error: no acceptable cc found in \$PATH" 1>&2; exit 1; }
fi

echo $ac_n "checking whether the C compiler ($CC $CFLAGS $LDFLAGS) works""... $ac_c" 1>&6
echo "configure:876: checking whether the C compiler ($CC $CFLAGS $LDFLAGS) works" >&5

ac_ext=c
# CFLAGS is not in ac_cpp because -g, -O, etc. are not valid cpp options.
ac_cpp='$CPP $CPPFLAGS'
ac_compile='${CC-cc} -c $CFLAGS $CPPFLAGS conftest.$ac_ext 1>&5'
ac_link='${CC-cc} -o conftest${ac_exeext} $CFLAGS $CPPFLAGS $LDFLAGS conftest.$ac_ext $LIBS 1>&5'
cross_compiling=$ac_cv_prog_cc_cross

cat > conftest.$ac_ext << EOF

#line 887 "configure"
#include "confdefs.h"

main(){return(0);}
EOF
if { (eval echo configure:892: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  ac_cv_prog_cc_works=yes
  # If we can't run a trivial program, we are probably using a cross compiler.
  if (./conftest; exit) 2>/dev/null; then
    ac_cv_prog_cc_cross=no
  else
    ac_cv_prog_cc_cross=yes
  fi
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  ac_cv_prog_cc_works=no
fi
rm -fr conftest*
ac_ext=c
# CFLAGS is not in ac_cpp because -g, -O, etc. are not valid cpp options.
ac_cpp='$CPP $CPPFLAGS'
ac_compile='${CC-cc} -c $CFLAGS $CPPFLAGS conftest.$ac_ext 1>&5'
ac_link='${CC-cc} -o conftest${ac_exeext} $CFLAGS $CPPFLAGS $LDFLAGS conftest.$ac_ext $LIBS 1>&5'
cross_compiling=$ac_cv_prog_cc_cross

echo "$ac_t""$ac_cv_prog_cc_works" 1>&6
if test $ac_cv_prog_cc_works = no; then
  { echo "configure: error: installation or configuration problem: C compiler cannot create executables." 1>&2; exit 1; }
fi
echo $ac_n "checking whether the C compiler ($CC $CFLAGS $LDFLAGS) is a cross-compiler""... $ac_c" 1>&6
echo "configure:918: checking whether the C compiler ($CC $CFLAGS $LDFLAGS) is a cross-compiler" >&5
echo "$ac_t""$ac_cv_prog_cc_cross" 1>&6
cross_compiling=$ac_cv_prog_cc_cross

echo $ac_n "checking whether we are using GNU C""... $ac_c" 1>&6
echo "configure:923: checking whether we are using GNU C" >&5
if eval "test \"`echo '$''{'ac_cv_prog_gcc'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.c <<EOF
#ifdef __GNUC__
  yes;
#endif
EOF
if { ac_try='${CC-cc} -E conftest.c'; { (eval echo configure:932: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }; } | egrep yes >/dev/null 2>&1; then
  ac_cv_prog_gcc=yes
else
  ac_cv_prog_gcc=no
fi
fi

echo "$ac_t""$ac_cv_prog_gcc" 1>&6

if test $ac_cv_prog_gcc = yes; then
  GCC=yes
else
  GCC=
fi

ac_test_CFLAGS="${CFLAGS+set}"
ac_save_CFLAGS="$CFLAGS"
CFLAGS=
echo $ac_n "checking whether ${CC-cc} accepts -g""... $ac_c" 1>&6
echo "configure:951: checking whether ${CC-cc} accepts -g" >&5
if eval "test \"`echo '$''{'ac_cv_prog_cc_g'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  echo 'void f(){}' > conftest.c
if test -z "`${CC-cc} -g -c conftest.c 2>&1`"; then
  ac_cv_prog_cc_g=yes
else
  ac_cv_prog_cc_g=no
fi
rm -f conftest*

fi

echo "$ac_t""$ac_cv_prog_cc_g" 1>&6
if test "$ac_test_CFLAGS" = set; then
  CFLAGS="$ac_save_CFLAGS"
elif test $ac_cv_prog_cc_g = yes; then
  if test "$GCC" = yes; then
    CFLAGS="-g -O2"
  else
    CFLAGS="-g"
  fi
else
  if test "$GCC" = yes; then
    CFLAGS="-O2"
  else
    CFLAGS=
  fi
fi


if test -n "$auto_cflags"; then
  if test -n "$GCC"; then
    CFLAGS="$CFLAGS -O2 -Wall -Wno-implicit"
  else
    case "$host_os" in
      *hpux*)  CFLAGS="$CFLAGS +O3"                      ;;
      *ultrix* | *osf*) CFLAGS="$CFLAGS -O -Olimit 2000" ;;
      *)       CFLAGS="$CFLAGS -O" ;;
    esac
  fi
fi

echo $ac_n "checking how to run the C preprocessor""... $ac_c" 1>&6
echo "configure:996: checking how to run the C preprocessor" >&5
# On Suns, sometimes $CPP names a directory.
if test -n "$CPP" && test -d "$CPP"; then
  CPP=
fi
if test -z "$CPP"; then
if eval "test \"`echo '$''{'ac_cv_prog_CPP'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
    # This must be in double quotes, not single quotes, because CPP may get
  # substituted into the Makefile and "${CC-cc}" will confuse make.
  CPP="${CC-cc} -E"
  # On the NeXT, cc -E runs the code through the compiler's parser,
  # not just through cpp.
  cat > conftest.$ac_ext <<EOF
#line 1011 "configure"
#include "confdefs.h"
#include <assert.h>
Syntax Error
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:1017: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  :
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  CPP="${CC-cc} -E -traditional-cpp"
  cat > conftest.$ac_ext <<EOF
#line 1028 "configure"
#include "confdefs.h"
#include <assert.h>
Syntax Error
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:1034: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  :
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  CPP="${CC-cc} -nologo -E"
  cat > conftest.$ac_ext <<EOF
#line 1045 "configure"
#include "confdefs.h"
#include <assert.h>
Syntax Error
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:1051: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  :
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  CPP=/lib/cpp
fi
rm -f conftest*
fi
rm -f conftest*
fi
rm -f conftest*
  ac_cv_prog_CPP="$CPP"
fi
  CPP="$ac_cv_prog_CPP"
else
  ac_cv_prog_CPP="$CPP"
fi
echo "$ac_t""$CPP" 1>&6

echo $ac_n "checking for AIX""... $ac_c" 1>&6
echo "configure:1076: checking for AIX" >&5
cat > conftest.$ac_ext <<EOF
#line 1078 "configure"
#include "confdefs.h"
#ifdef _AIX
  yes
#endif

EOF
if (eval "$ac_cpp conftest.$ac_ext") 2>&5 |
  egrep "yes" >/dev/null 2>&1; then
  rm -rf conftest*
  echo "$ac_t""yes" 1>&6; cat >> confdefs.h <<\EOF
#define _ALL_SOURCE 1
EOF

else
  rm -rf conftest*
  echo "$ac_t""no" 1>&6
fi
rm -f conftest*



case "$host_os" in
  *win32) exeext='.exe';;
  *) exeext='';;
esac



echo $ac_n "checking for ${CC-cc} option to accept ANSI C""... $ac_c" 1>&6
echo "configure:1108: checking for ${CC-cc} option to accept ANSI C" >&5
if eval "test \"`echo '$''{'am_cv_prog_cc_stdc'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  am_cv_prog_cc_stdc=no
ac_save_CC="$CC"
# Don't try gcc -ansi; that turns off useful extensions and
# breaks some systems' header files.
# AIX			-qlanglvl=ansi
# Ultrix and OSF/1	-std1
# HP-UX			-Aa -D_HPUX_SOURCE
# SVR4			-Xc -D__EXTENSIONS__
for ac_arg in "" -qlanglvl=ansi -std1 "-Aa -D_HPUX_SOURCE" "-Xc -D__EXTENSIONS__"
do
  CC="$ac_save_CC $ac_arg"
  cat > conftest.$ac_ext <<EOF
#line 1124 "configure"
#include "confdefs.h"
#if !defined(__STDC__) || __STDC__ != 1
choke me
#endif
/* DYNIX/ptx V4.1.3 can't compile sys/stat.h with -Xc -D__EXTENSIONS__. */
#ifdef _SEQUENT_
# include <sys/types.h>
# include <sys/stat.h>
#endif

int main() {

int test (int i, double x);
struct s1 {int (*f) (int a);};
struct s2 {int (*f) (double a);};
; return 0; }
EOF
if { (eval echo configure:1142: \"$ac_compile\") 1>&5; (eval $ac_compile) 2>&5; }; then
  rm -rf conftest*
  am_cv_prog_cc_stdc="$ac_arg"; break
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
fi
rm -f conftest*
done
CC="$ac_save_CC"

fi

echo "$ac_t""$am_cv_prog_cc_stdc" 1>&6
case "x$am_cv_prog_cc_stdc" in
  x|xno) ;;
  *) CC="$CC $am_cv_prog_cc_stdc" ;;
esac



echo $ac_n "checking for function prototypes""... $ac_c" 1>&6
echo "configure:1164: checking for function prototypes" >&5
if test "$am_cv_prog_cc_stdc" != no; then
  echo "$ac_t""yes" 1>&6
  cat >> confdefs.h <<\EOF
#define PROTOTYPES 1
EOF

  U= ANSI2KNR=
else
  echo "$ac_t""no" 1>&6
  U=_ ANSI2KNR=./ansi2knr
  # Ensure some checks needed by ansi2knr itself.
  echo $ac_n "checking for ANSI C header files""... $ac_c" 1>&6
echo "configure:1177: checking for ANSI C header files" >&5
if eval "test \"`echo '$''{'ac_cv_header_stdc'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1182 "configure"
#include "confdefs.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <float.h>
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:1190: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  rm -rf conftest*
  ac_cv_header_stdc=yes
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  ac_cv_header_stdc=no
fi
rm -f conftest*

if test $ac_cv_header_stdc = yes; then
  # SunOS 4.x string.h does not declare mem*, contrary to ANSI.
cat > conftest.$ac_ext <<EOF
#line 1207 "configure"
#include "confdefs.h"
#include <string.h>
EOF
if (eval "$ac_cpp conftest.$ac_ext") 2>&5 |
  egrep "memchr" >/dev/null 2>&1; then
  :
else
  rm -rf conftest*
  ac_cv_header_stdc=no
fi
rm -f conftest*

fi

if test $ac_cv_header_stdc = yes; then
  # ISC 2.0.2 stdlib.h does not declare free, contrary to ANSI.
cat > conftest.$ac_ext <<EOF
#line 1225 "configure"
#include "confdefs.h"
#include <stdlib.h>
EOF
if (eval "$ac_cpp conftest.$ac_ext") 2>&5 |
  egrep "free" >/dev/null 2>&1; then
  :
else
  rm -rf conftest*
  ac_cv_header_stdc=no
fi
rm -f conftest*

fi

if test $ac_cv_header_stdc = yes; then
  # /bin/cc in Irix-4.0.5 gets non-ANSI ctype macros unless using -ansi.
if test "$cross_compiling" = yes; then
  :
else
  cat > conftest.$ac_ext <<EOF
#line 1246 "configure"
#include "confdefs.h"
#include <ctype.h>
#define ISLOWER(c) ('a' <= (c) && (c) <= 'z')
#define TOUPPER(c) (ISLOWER(c) ? 'A' + ((c) - 'a') : (c))
#define XOR(e, f) (((e) && !(f)) || (!(e) && (f)))
int main () { int i; for (i = 0; i < 256; i++)
if (XOR (islower (i), ISLOWER (i)) || toupper (i) != TOUPPER (i)) exit(2);
exit (0); }

EOF
if { (eval echo configure:1257: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext} && (./conftest; exit) 2>/dev/null
then
  :
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -fr conftest*
  ac_cv_header_stdc=no
fi
rm -fr conftest*
fi

fi
fi

echo "$ac_t""$ac_cv_header_stdc" 1>&6
if test $ac_cv_header_stdc = yes; then
  cat >> confdefs.h <<\EOF
#define STDC_HEADERS 1
EOF

fi

  for ac_hdr in string.h
do
ac_safe=`echo "$ac_hdr" | sed 'y%./+-%__p_%'`
echo $ac_n "checking for $ac_hdr""... $ac_c" 1>&6
echo "configure:1284: checking for $ac_hdr" >&5
if eval "test \"`echo '$''{'ac_cv_header_$ac_safe'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1289 "configure"
#include "confdefs.h"
#include <$ac_hdr>
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:1294: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=yes"
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=no"
fi
rm -f conftest*
fi
if eval "test \"`echo '$ac_cv_header_'$ac_safe`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_hdr=HAVE_`echo $ac_hdr | sed 'y%abcdefghijklmnopqrstuvwxyz./-%ABCDEFGHIJKLMNOPQRSTUVWXYZ___%'`
  cat >> confdefs.h <<EOF
#define $ac_tr_hdr 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done

fi


echo $ac_n "checking for working const""... $ac_c" 1>&6
echo "configure:1324: checking for working const" >&5
if eval "test \"`echo '$''{'ac_cv_c_const'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1329 "configure"
#include "confdefs.h"

int main() {

/* Ultrix mips cc rejects this.  */
typedef int charset[2]; const charset x;
/* SunOS 4.1.1 cc rejects this.  */
char const *const *ccp;
char **p;
/* NEC SVR4.0.2 mips cc rejects this.  */
struct point {int x, y;};
static struct point const zero = {0,0};
/* AIX XL C 1.02.0.0 rejects this.
   It does not let you subtract one const X* pointer from another in an arm
   of an if-expression whose if-part is not a constant expression */
const char *g = "string";
ccp = &g + (g ? g-g : 0);
/* HPUX 7.0 cc rejects these. */
++ccp;
p = (char**) ccp;
ccp = (char const *const *) p;
{ /* SCO 3.2v4 cc rejects this.  */
  char *t;
  char const *s = 0 ? (char *) 0 : (char const *) 0;

  *t++ = 0;
}
{ /* Someone thinks the Sun supposedly-ANSI compiler will reject this.  */
  int x[] = {25, 17};
  const int *foo = &x[0];
  ++foo;
}
{ /* Sun SC1.0 ANSI compiler rejects this -- but not the above. */
  typedef const int *iptr;
  iptr p = 0;
  ++p;
}
{ /* AIX XL C 1.02.0.0 rejects this saying
     "k.c", line 2.27: 1506-025 (S) Operand must be a modifiable lvalue. */
  struct s { int j; const int *ap[3]; };
  struct s *b; b->j = 5;
}
{ /* ULTRIX-32 V3.1 (Rev 9) vcc rejects this */
  const int foo = 10;
}

; return 0; }
EOF
if { (eval echo configure:1378: \"$ac_compile\") 1>&5; (eval $ac_compile) 2>&5; }; then
  rm -rf conftest*
  ac_cv_c_const=yes
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  ac_cv_c_const=no
fi
rm -f conftest*
fi

echo "$ac_t""$ac_cv_c_const" 1>&6
if test $ac_cv_c_const = no; then
  cat >> confdefs.h <<\EOF
#define const 
EOF

fi

echo $ac_n "checking for size_t""... $ac_c" 1>&6
echo "configure:1399: checking for size_t" >&5
if eval "test \"`echo '$''{'ac_cv_type_size_t'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1404 "configure"
#include "confdefs.h"
#include <sys/types.h>
#if STDC_HEADERS
#include <stdlib.h>
#include <stddef.h>
#endif
EOF
if (eval "$ac_cpp conftest.$ac_ext") 2>&5 |
  egrep "(^|[^a-zA-Z_0-9])size_t[^a-zA-Z_0-9]" >/dev/null 2>&1; then
  rm -rf conftest*
  ac_cv_type_size_t=yes
else
  rm -rf conftest*
  ac_cv_type_size_t=no
fi
rm -f conftest*

fi
echo "$ac_t""$ac_cv_type_size_t" 1>&6
if test $ac_cv_type_size_t = no; then
  cat >> confdefs.h <<\EOF
#define size_t unsigned
EOF

fi

echo $ac_n "checking for pid_t""... $ac_c" 1>&6
echo "configure:1432: checking for pid_t" >&5
if eval "test \"`echo '$''{'ac_cv_type_pid_t'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1437 "configure"
#include "confdefs.h"
#include <sys/types.h>
#if STDC_HEADERS
#include <stdlib.h>
#include <stddef.h>
#endif
EOF
if (eval "$ac_cpp conftest.$ac_ext") 2>&5 |
  egrep "(^|[^a-zA-Z_0-9])pid_t[^a-zA-Z_0-9]" >/dev/null 2>&1; then
  rm -rf conftest*
  ac_cv_type_pid_t=yes
else
  rm -rf conftest*
  ac_cv_type_pid_t=no
fi
rm -f conftest*

fi
echo "$ac_t""$ac_cv_type_pid_t" 1>&6
if test $ac_cv_type_pid_t = no; then
  cat >> confdefs.h <<\EOF
#define pid_t int
EOF

fi

echo $ac_n "checking whether byte ordering is bigendian""... $ac_c" 1>&6
echo "configure:1465: checking whether byte ordering is bigendian" >&5
if eval "test \"`echo '$''{'ac_cv_c_bigendian'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  ac_cv_c_bigendian=unknown
# See if sys/param.h defines the BYTE_ORDER macro.
cat > conftest.$ac_ext <<EOF
#line 1472 "configure"
#include "confdefs.h"
#include <sys/types.h>
#include <sys/param.h>
int main() {

#if !BYTE_ORDER || !BIG_ENDIAN || !LITTLE_ENDIAN
 bogus endian macros
#endif
; return 0; }
EOF
if { (eval echo configure:1483: \"$ac_compile\") 1>&5; (eval $ac_compile) 2>&5; }; then
  rm -rf conftest*
  # It does; now see whether it defined to BIG_ENDIAN or not.
cat > conftest.$ac_ext <<EOF
#line 1487 "configure"
#include "confdefs.h"
#include <sys/types.h>
#include <sys/param.h>
int main() {

#if BYTE_ORDER != BIG_ENDIAN
 not big endian
#endif
; return 0; }
EOF
if { (eval echo configure:1498: \"$ac_compile\") 1>&5; (eval $ac_compile) 2>&5; }; then
  rm -rf conftest*
  ac_cv_c_bigendian=yes
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  ac_cv_c_bigendian=no
fi
rm -f conftest*
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
fi
rm -f conftest*
if test $ac_cv_c_bigendian = unknown; then
if test "$cross_compiling" = yes; then
    { echo "configure: error: can not run test program while cross compiling" 1>&2; exit 1; }
else
  cat > conftest.$ac_ext <<EOF
#line 1518 "configure"
#include "confdefs.h"
main () {
  /* Are we little or big endian?  From Harbison&Steele.  */
  union
  {
    long l;
    char c[sizeof (long)];
  } u;
  u.l = 1;
  exit (u.c[sizeof (long) - 1] == 1);
}
EOF
if { (eval echo configure:1531: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext} && (./conftest; exit) 2>/dev/null
then
  ac_cv_c_bigendian=no
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -fr conftest*
  ac_cv_c_bigendian=yes
fi
rm -fr conftest*
fi

fi
fi

echo "$ac_t""$ac_cv_c_bigendian" 1>&6
if test $ac_cv_c_bigendian = yes; then
  cat >> confdefs.h <<\EOF
#define WORDS_BIGENDIAN 1
EOF

fi


# Check size of long.
echo $ac_n "checking size of long""... $ac_c" 1>&6
echo "configure:1557: checking size of long" >&5
if eval "test \"`echo '$''{'ac_cv_sizeof_long'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  if test "$cross_compiling" = yes; then
    { echo "configure: error: can not run test program while cross compiling" 1>&2; exit 1; }
else
  cat > conftest.$ac_ext <<EOF
#line 1565 "configure"
#include "confdefs.h"
#include <stdio.h>
main()
{
  FILE *f=fopen("conftestval", "w");
  if (!f) exit(1);
  fprintf(f, "%d\n", sizeof(long));
  exit(0);
}
EOF
if { (eval echo configure:1576: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext} && (./conftest; exit) 2>/dev/null
then
  ac_cv_sizeof_long=`cat conftestval`
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -fr conftest*
  ac_cv_sizeof_long=0
fi
rm -fr conftest*
fi

fi
echo "$ac_t""$ac_cv_sizeof_long" 1>&6
cat >> confdefs.h <<EOF
#define SIZEOF_LONG $ac_cv_sizeof_long
EOF


echo $ac_n "checking size of long long""... $ac_c" 1>&6
echo "configure:1596: checking size of long long" >&5
if eval "test \"`echo '$''{'ac_cv_sizeof_long_long'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  if test "$cross_compiling" = yes; then
    { echo "configure: error: can not run test program while cross compiling" 1>&2; exit 1; }
else
  cat > conftest.$ac_ext <<EOF
#line 1604 "configure"
#include "confdefs.h"
#include <stdio.h>
main()
{
  FILE *f=fopen("conftestval", "w");
  if (!f) exit(1);
  fprintf(f, "%d\n", sizeof(long long));
  exit(0);
}
EOF
if { (eval echo configure:1615: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext} && (./conftest; exit) 2>/dev/null
then
  ac_cv_sizeof_long_long=`cat conftestval`
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -fr conftest*
  ac_cv_sizeof_long_long=0
fi
rm -fr conftest*
fi

fi
echo "$ac_t""$ac_cv_sizeof_long_long" 1>&6
cat >> confdefs.h <<EOF
#define SIZEOF_LONG_LONG $ac_cv_sizeof_long_long
EOF



for ac_hdr in string.h stdarg.h unistd.h sys/time.h utime.h sys/utime.h
do
ac_safe=`echo "$ac_hdr" | sed 'y%./+-%__p_%'`
echo $ac_n "checking for $ac_hdr""... $ac_c" 1>&6
echo "configure:1639: checking for $ac_hdr" >&5
if eval "test \"`echo '$''{'ac_cv_header_$ac_safe'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1644 "configure"
#include "confdefs.h"
#include <$ac_hdr>
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:1649: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=yes"
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=no"
fi
rm -f conftest*
fi
if eval "test \"`echo '$ac_cv_header_'$ac_safe`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_hdr=HAVE_`echo $ac_hdr | sed 'y%abcdefghijklmnopqrstuvwxyz./-%ABCDEFGHIJKLMNOPQRSTUVWXYZ___%'`
  cat >> confdefs.h <<EOF
#define $ac_tr_hdr 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done

for ac_hdr in sys/select.h sys/utsname.h pwd.h signal.h
do
ac_safe=`echo "$ac_hdr" | sed 'y%./+-%__p_%'`
echo $ac_n "checking for $ac_hdr""... $ac_c" 1>&6
echo "configure:1679: checking for $ac_hdr" >&5
if eval "test \"`echo '$''{'ac_cv_header_$ac_safe'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1684 "configure"
#include "confdefs.h"
#include <$ac_hdr>
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:1689: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=yes"
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=no"
fi
rm -f conftest*
fi
if eval "test \"`echo '$ac_cv_header_'$ac_safe`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_hdr=HAVE_`echo $ac_hdr | sed 'y%abcdefghijklmnopqrstuvwxyz./-%ABCDEFGHIJKLMNOPQRSTUVWXYZ___%'`
  cat >> confdefs.h <<EOF
#define $ac_tr_hdr 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done

echo $ac_n "checking whether time.h and sys/time.h may both be included""... $ac_c" 1>&6
echo "configure:1716: checking whether time.h and sys/time.h may both be included" >&5
if eval "test \"`echo '$''{'ac_cv_header_time'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1721 "configure"
#include "confdefs.h"
#include <sys/types.h>
#include <sys/time.h>
#include <time.h>
int main() {
struct tm *tp;
; return 0; }
EOF
if { (eval echo configure:1730: \"$ac_compile\") 1>&5; (eval $ac_compile) 2>&5; }; then
  rm -rf conftest*
  ac_cv_header_time=yes
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  ac_cv_header_time=no
fi
rm -f conftest*
fi

echo "$ac_t""$ac_cv_header_time" 1>&6
if test $ac_cv_header_time = yes; then
  cat >> confdefs.h <<\EOF
#define TIME_WITH_SYS_TIME 1
EOF

fi


echo $ac_n "checking return type of signal handlers""... $ac_c" 1>&6
echo "configure:1752: checking return type of signal handlers" >&5
if eval "test \"`echo '$''{'ac_cv_type_signal'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1757 "configure"
#include "confdefs.h"
#include <sys/types.h>
#include <signal.h>
#ifdef signal
#undef signal
#endif
#ifdef __cplusplus
extern "C" void (*signal (int, void (*)(int)))(int);
#else
void (*signal ()) ();
#endif

int main() {
int i;
; return 0; }
EOF
if { (eval echo configure:1774: \"$ac_compile\") 1>&5; (eval $ac_compile) 2>&5; }; then
  rm -rf conftest*
  ac_cv_type_signal=void
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  ac_cv_type_signal=int
fi
rm -f conftest*
fi

echo "$ac_t""$ac_cv_type_signal" 1>&6
cat >> confdefs.h <<EOF
#define RETSIGTYPE $ac_cv_type_signal
EOF



echo $ac_n "checking for struct utimbuf""... $ac_c" 1>&6
echo "configure:1794: checking for struct utimbuf" >&5
if test x"$ac_cv_header_utime_h" = xyes; then
  cat > conftest.$ac_ext <<EOF
#line 1797 "configure"
#include "confdefs.h"
#include <utime.h>
EOF
if (eval "$ac_cpp conftest.$ac_ext") 2>&5 |
  egrep "struct[ 	]+utimbuf" >/dev/null 2>&1; then
  rm -rf conftest*
  cat >> confdefs.h <<\EOF
#define HAVE_STRUCT_UTIMBUF 1
EOF

      echo "$ac_t""yes" 1>&6
else
  rm -rf conftest*
  echo "$ac_t""no" 1>&6
fi
rm -f conftest*

else
  echo "$ac_t""no" 1>&6
fi

# The Ultrix 4.2 mips builtin alloca declared by alloca.h only works
# for constant arguments.  Useless!
echo $ac_n "checking for working alloca.h""... $ac_c" 1>&6
echo "configure:1822: checking for working alloca.h" >&5
if eval "test \"`echo '$''{'ac_cv_header_alloca_h'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1827 "configure"
#include "confdefs.h"
#include <alloca.h>
int main() {
char *p = alloca(2 * sizeof(int));
; return 0; }
EOF
if { (eval echo configure:1834: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  ac_cv_header_alloca_h=yes
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  ac_cv_header_alloca_h=no
fi
rm -f conftest*
fi

echo "$ac_t""$ac_cv_header_alloca_h" 1>&6
if test $ac_cv_header_alloca_h = yes; then
  cat >> confdefs.h <<\EOF
#define HAVE_ALLOCA_H 1
EOF

fi

echo $ac_n "checking for alloca""... $ac_c" 1>&6
echo "configure:1855: checking for alloca" >&5
if eval "test \"`echo '$''{'ac_cv_func_alloca_works'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1860 "configure"
#include "confdefs.h"

#ifdef __GNUC__
# define alloca __builtin_alloca
#else
# ifdef _MSC_VER
#  include <malloc.h>
#  define alloca _alloca
# else
#  if HAVE_ALLOCA_H
#   include <alloca.h>
#  else
#   ifdef _AIX
 #pragma alloca
#   else
#    ifndef alloca /* predefined by HP cc +Olibcalls */
char *alloca ();
#    endif
#   endif
#  endif
# endif
#endif

int main() {
char *p = (char *) alloca(1);
; return 0; }
EOF
if { (eval echo configure:1888: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  ac_cv_func_alloca_works=yes
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  ac_cv_func_alloca_works=no
fi
rm -f conftest*
fi

echo "$ac_t""$ac_cv_func_alloca_works" 1>&6
if test $ac_cv_func_alloca_works = yes; then
  cat >> confdefs.h <<\EOF
#define HAVE_ALLOCA 1
EOF

fi

if test $ac_cv_func_alloca_works = no; then
  # The SVR3 libPW and SVR4 libucb both contain incompatible functions
  # that cause trouble.  Some versions do not even contain alloca or
  # contain a buggy version.  If you still want to use their alloca,
  # use ar to extract alloca.o from them instead of compiling alloca.c.
  ALLOCA=alloca.${ac_objext}
  cat >> confdefs.h <<\EOF
#define C_ALLOCA 1
EOF


echo $ac_n "checking whether alloca needs Cray hooks""... $ac_c" 1>&6
echo "configure:1920: checking whether alloca needs Cray hooks" >&5
if eval "test \"`echo '$''{'ac_cv_os_cray'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1925 "configure"
#include "confdefs.h"
#if defined(CRAY) && ! defined(CRAY2)
webecray
#else
wenotbecray
#endif

EOF
if (eval "$ac_cpp conftest.$ac_ext") 2>&5 |
  egrep "webecray" >/dev/null 2>&1; then
  rm -rf conftest*
  ac_cv_os_cray=yes
else
  rm -rf conftest*
  ac_cv_os_cray=no
fi
rm -f conftest*

fi

echo "$ac_t""$ac_cv_os_cray" 1>&6
if test $ac_cv_os_cray = yes; then
for ac_func in _getb67 GETB67 getb67; do
  echo $ac_n "checking for $ac_func""... $ac_c" 1>&6
echo "configure:1950: checking for $ac_func" >&5
if eval "test \"`echo '$''{'ac_cv_func_$ac_func'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 1955 "configure"
#include "confdefs.h"
/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char $ac_func(); below.  */
#include <assert.h>
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char $ac_func();

int main() {

/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined (__stub_$ac_func) || defined (__stub___$ac_func)
choke me
#else
$ac_func();
#endif

; return 0; }
EOF
if { (eval echo configure:1978: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=no"
fi
rm -f conftest*
fi

if eval "test \"`echo '$ac_cv_func_'$ac_func`\" = yes"; then
  echo "$ac_t""yes" 1>&6
  cat >> confdefs.h <<EOF
#define CRAY_STACKSEG_END $ac_func
EOF

  break
else
  echo "$ac_t""no" 1>&6
fi

done
fi

echo $ac_n "checking stack direction for C alloca""... $ac_c" 1>&6
echo "configure:2005: checking stack direction for C alloca" >&5
if eval "test \"`echo '$''{'ac_cv_c_stack_direction'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  if test "$cross_compiling" = yes; then
  ac_cv_c_stack_direction=0
else
  cat > conftest.$ac_ext <<EOF
#line 2013 "configure"
#include "confdefs.h"
find_stack_direction ()
{
  static char *addr = 0;
  auto char dummy;
  if (addr == 0)
    {
      addr = &dummy;
      return find_stack_direction ();
    }
  else
    return (&dummy > addr) ? 1 : -1;
}
main ()
{
  exit (find_stack_direction() < 0);
}
EOF
if { (eval echo configure:2032: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext} && (./conftest; exit) 2>/dev/null
then
  ac_cv_c_stack_direction=1
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -fr conftest*
  ac_cv_c_stack_direction=-1
fi
rm -fr conftest*
fi

fi

echo "$ac_t""$ac_cv_c_stack_direction" 1>&6
cat >> confdefs.h <<EOF
#define STACK_DIRECTION $ac_cv_c_stack_direction
EOF

fi

for ac_hdr in unistd.h
do
ac_safe=`echo "$ac_hdr" | sed 'y%./+-%__p_%'`
echo $ac_n "checking for $ac_hdr""... $ac_c" 1>&6
echo "configure:2057: checking for $ac_hdr" >&5
if eval "test \"`echo '$''{'ac_cv_header_$ac_safe'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 2062 "configure"
#include "confdefs.h"
#include <$ac_hdr>
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:2067: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=yes"
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=no"
fi
rm -f conftest*
fi
if eval "test \"`echo '$ac_cv_header_'$ac_safe`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_hdr=HAVE_`echo $ac_hdr | sed 'y%abcdefghijklmnopqrstuvwxyz./-%ABCDEFGHIJKLMNOPQRSTUVWXYZ___%'`
  cat >> confdefs.h <<EOF
#define $ac_tr_hdr 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done

for ac_func in getpagesize
do
echo $ac_n "checking for $ac_func""... $ac_c" 1>&6
echo "configure:2096: checking for $ac_func" >&5
if eval "test \"`echo '$''{'ac_cv_func_$ac_func'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 2101 "configure"
#include "confdefs.h"
/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char $ac_func(); below.  */
#include <assert.h>
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char $ac_func();

int main() {

/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined (__stub_$ac_func) || defined (__stub___$ac_func)
choke me
#else
$ac_func();
#endif

; return 0; }
EOF
if { (eval echo configure:2124: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=no"
fi
rm -f conftest*
fi

if eval "test \"`echo '$ac_cv_func_'$ac_func`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_func=HAVE_`echo $ac_func | tr 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'`
  cat >> confdefs.h <<EOF
#define $ac_tr_func 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done

echo $ac_n "checking for working mmap""... $ac_c" 1>&6
echo "configure:2149: checking for working mmap" >&5
if eval "test \"`echo '$''{'ac_cv_func_mmap_fixed_mapped'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  if test "$cross_compiling" = yes; then
  ac_cv_func_mmap_fixed_mapped=no
else
  cat > conftest.$ac_ext <<EOF
#line 2157 "configure"
#include "confdefs.h"

/* Thanks to Mike Haertel and Jim Avera for this test.
   Here is a matrix of mmap possibilities:
	mmap private not fixed
	mmap private fixed at somewhere currently unmapped
	mmap private fixed at somewhere already mapped
	mmap shared not fixed
	mmap shared fixed at somewhere currently unmapped
	mmap shared fixed at somewhere already mapped
   For private mappings, we should verify that changes cannot be read()
   back from the file, nor mmap's back from the file at a different
   address.  (There have been systems where private was not correctly
   implemented like the infamous i386 svr4.0, and systems where the
   VM page cache was not coherent with the filesystem buffer cache
   like early versions of FreeBSD and possibly contemporary NetBSD.)
   For shared mappings, we should conversely verify that changes get
   propogated back to all the places they're supposed to be.

   Grep wants private fixed already mapped.
   The main things grep needs to know about mmap are:
   * does it exist and is it safe to write into the mmap'd area
   * how to use it (BSD variants)  */
#include <sys/types.h>
#include <fcntl.h>
#include <sys/mman.h>

/* This mess was copied from the GNU getpagesize.h.  */
#ifndef HAVE_GETPAGESIZE
# ifdef HAVE_UNISTD_H
#  include <unistd.h>
# endif

/* Assume that all systems that can run configure have sys/param.h.  */
# ifndef HAVE_SYS_PARAM_H
#  define HAVE_SYS_PARAM_H 1
# endif

# ifdef _SC_PAGESIZE
#  define getpagesize() sysconf(_SC_PAGESIZE)
# else /* no _SC_PAGESIZE */
#  ifdef HAVE_SYS_PARAM_H
#   include <sys/param.h>
#   ifdef EXEC_PAGESIZE
#    define getpagesize() EXEC_PAGESIZE
#   else /* no EXEC_PAGESIZE */
#    ifdef NBPG
#     define getpagesize() NBPG * CLSIZE
#     ifndef CLSIZE
#      define CLSIZE 1
#     endif /* no CLSIZE */
#    else /* no NBPG */
#     ifdef NBPC
#      define getpagesize() NBPC
#     else /* no NBPC */
#      ifdef PAGESIZE
#       define getpagesize() PAGESIZE
#      endif /* PAGESIZE */
#     endif /* no NBPC */
#    endif /* no NBPG */
#   endif /* no EXEC_PAGESIZE */
#  else /* no HAVE_SYS_PARAM_H */
#   define getpagesize() 8192	/* punt totally */
#  endif /* no HAVE_SYS_PARAM_H */
# endif /* no _SC_PAGESIZE */

#endif /* no HAVE_GETPAGESIZE */

#ifdef __cplusplus
extern "C" { void *malloc(unsigned); }
#else
char *malloc();
#endif

int
main()
{
	char *data, *data2, *data3;
	int i, pagesize;
	int fd;

	pagesize = getpagesize();

	/*
	 * First, make a file with some known garbage in it.
	 */
	data = malloc(pagesize);
	if (!data)
		exit(1);
	for (i = 0; i < pagesize; ++i)
		*(data + i) = rand();
	umask(0);
	fd = creat("conftestmmap", 0600);
	if (fd < 0)
		exit(1);
	if (write(fd, data, pagesize) != pagesize)
		exit(1);
	close(fd);

	/*
	 * Next, try to mmap the file at a fixed address which
	 * already has something else allocated at it.  If we can,
	 * also make sure that we see the same garbage.
	 */
	fd = open("conftestmmap", O_RDWR);
	if (fd < 0)
		exit(1);
	data2 = malloc(2 * pagesize);
	if (!data2)
		exit(1);
	data2 += (pagesize - ((int) data2 & (pagesize - 1))) & (pagesize - 1);
	if (data2 != mmap(data2, pagesize, PROT_READ | PROT_WRITE,
	    MAP_PRIVATE | MAP_FIXED, fd, 0L))
		exit(1);
	for (i = 0; i < pagesize; ++i)
		if (*(data + i) != *(data2 + i))
			exit(1);

	/*
	 * Finally, make sure that changes to the mapped area
	 * do not percolate back to the file as seen by read().
	 * (This is a bug on some variants of i386 svr4.0.)
	 */
	for (i = 0; i < pagesize; ++i)
		*(data2 + i) = *(data2 + i) + 1;
	data3 = malloc(pagesize);
	if (!data3)
		exit(1);
	if (read(fd, data3, pagesize) != pagesize)
		exit(1);
	for (i = 0; i < pagesize; ++i)
		if (*(data + i) != *(data3 + i))
			exit(1);
	close(fd);
	unlink("conftestmmap");
	exit(0);
}

EOF
if { (eval echo configure:2297: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext} && (./conftest; exit) 2>/dev/null
then
  ac_cv_func_mmap_fixed_mapped=yes
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -fr conftest*
  ac_cv_func_mmap_fixed_mapped=no
fi
rm -fr conftest*
fi

fi

echo "$ac_t""$ac_cv_func_mmap_fixed_mapped" 1>&6
if test $ac_cv_func_mmap_fixed_mapped = yes; then
  cat >> confdefs.h <<\EOF
#define HAVE_MMAP 1
EOF

fi

for ac_func in strdup strstr strcasecmp strncasecmp
do
echo $ac_n "checking for $ac_func""... $ac_c" 1>&6
echo "configure:2322: checking for $ac_func" >&5
if eval "test \"`echo '$''{'ac_cv_func_$ac_func'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 2327 "configure"
#include "confdefs.h"
/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char $ac_func(); below.  */
#include <assert.h>
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char $ac_func();

int main() {

/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined (__stub_$ac_func) || defined (__stub___$ac_func)
choke me
#else
$ac_func();
#endif

; return 0; }
EOF
if { (eval echo configure:2350: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=no"
fi
rm -f conftest*
fi

if eval "test \"`echo '$ac_cv_func_'$ac_func`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_func=HAVE_`echo $ac_func | tr 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'`
  cat >> confdefs.h <<EOF
#define $ac_tr_func 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done

for ac_func in gettimeofday mktime strptime
do
echo $ac_n "checking for $ac_func""... $ac_c" 1>&6
echo "configure:2377: checking for $ac_func" >&5
if eval "test \"`echo '$''{'ac_cv_func_$ac_func'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 2382 "configure"
#include "confdefs.h"
/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char $ac_func(); below.  */
#include <assert.h>
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char $ac_func();

int main() {

/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined (__stub_$ac_func) || defined (__stub___$ac_func)
choke me
#else
$ac_func();
#endif

; return 0; }
EOF
if { (eval echo configure:2405: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=no"
fi
rm -f conftest*
fi

if eval "test \"`echo '$ac_cv_func_'$ac_func`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_func=HAVE_`echo $ac_func | tr 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'`
  cat >> confdefs.h <<EOF
#define $ac_tr_func 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done

for ac_func in strerror snprintf vsnprintf select signal symlink access isatty
do
echo $ac_n "checking for $ac_func""... $ac_c" 1>&6
echo "configure:2432: checking for $ac_func" >&5
if eval "test \"`echo '$''{'ac_cv_func_$ac_func'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 2437 "configure"
#include "confdefs.h"
/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char $ac_func(); below.  */
#include <assert.h>
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char $ac_func();

int main() {

/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined (__stub_$ac_func) || defined (__stub___$ac_func)
choke me
#else
$ac_func();
#endif

; return 0; }
EOF
if { (eval echo configure:2460: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=no"
fi
rm -f conftest*
fi

if eval "test \"`echo '$ac_cv_func_'$ac_func`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_func=HAVE_`echo $ac_func | tr 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'`
  cat >> confdefs.h <<EOF
#define $ac_tr_func 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done

for ac_func in uname gethostname
do
echo $ac_n "checking for $ac_func""... $ac_c" 1>&6
echo "configure:2487: checking for $ac_func" >&5
if eval "test \"`echo '$''{'ac_cv_func_$ac_func'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 2492 "configure"
#include "confdefs.h"
/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char $ac_func(); below.  */
#include <assert.h>
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char $ac_func();

int main() {

/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined (__stub_$ac_func) || defined (__stub___$ac_func)
choke me
#else
$ac_func();
#endif

; return 0; }
EOF
if { (eval echo configure:2515: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=no"
fi
rm -f conftest*
fi

if eval "test \"`echo '$ac_cv_func_'$ac_func`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_func=HAVE_`echo $ac_func | tr 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'`
  cat >> confdefs.h <<EOF
#define $ac_tr_func 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done


for ac_func in gethostbyname
do
echo $ac_n "checking for $ac_func""... $ac_c" 1>&6
echo "configure:2543: checking for $ac_func" >&5
if eval "test \"`echo '$''{'ac_cv_func_$ac_func'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 2548 "configure"
#include "confdefs.h"
/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char $ac_func(); below.  */
#include <assert.h>
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char $ac_func();

int main() {

/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined (__stub_$ac_func) || defined (__stub___$ac_func)
choke me
#else
$ac_func();
#endif

; return 0; }
EOF
if { (eval echo configure:2571: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=no"
fi
rm -f conftest*
fi

if eval "test \"`echo '$ac_cv_func_'$ac_func`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_func=HAVE_`echo $ac_func | tr 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'`
  cat >> confdefs.h <<EOF
#define $ac_tr_func 1
EOF
 
else
  echo "$ac_t""no" 1>&6
echo $ac_n "checking for gethostbyname in -lnsl""... $ac_c" 1>&6
echo "configure:2593: checking for gethostbyname in -lnsl" >&5
ac_lib_var=`echo nsl'_'gethostbyname | sed 'y%./+-%__p_%'`
if eval "test \"`echo '$''{'ac_cv_lib_$ac_lib_var'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  ac_save_LIBS="$LIBS"
LIBS="-lnsl  $LIBS"
cat > conftest.$ac_ext <<EOF
#line 2601 "configure"
#include "confdefs.h"
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char gethostbyname();

int main() {
gethostbyname()
; return 0; }
EOF
if { (eval echo configure:2612: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=no"
fi
rm -f conftest*
LIBS="$ac_save_LIBS"

fi
if eval "test \"`echo '$ac_cv_lib_'$ac_lib_var`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_lib=HAVE_LIB`echo nsl | sed -e 's/^a-zA-Z0-9_/_/g' \
    -e 'y/abcdefghijklmnopqrstuvwxyz/ABCDEFGHIJKLMNOPQRSTUVWXYZ/'`
  cat >> confdefs.h <<EOF
#define $ac_tr_lib 1
EOF

  LIBS="-lnsl $LIBS"

else
  echo "$ac_t""no" 1>&6
fi


fi
done



echo $ac_n "checking for socket in -lsocket""... $ac_c" 1>&6
echo "configure:2646: checking for socket in -lsocket" >&5
ac_lib_var=`echo socket'_'socket | sed 'y%./+-%__p_%'`
if eval "test \"`echo '$''{'ac_cv_lib_$ac_lib_var'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  ac_save_LIBS="$LIBS"
LIBS="-lsocket  $LIBS"
cat > conftest.$ac_ext <<EOF
#line 2654 "configure"
#include "confdefs.h"
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char socket();

int main() {
socket()
; return 0; }
EOF
if { (eval echo configure:2665: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=no"
fi
rm -f conftest*
LIBS="$ac_save_LIBS"

fi
if eval "test \"`echo '$ac_cv_lib_'$ac_lib_var`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_lib=HAVE_LIB`echo socket | sed -e 's/[^a-zA-Z0-9_]/_/g' \
    -e 'y/abcdefghijklmnopqrstuvwxyz/ABCDEFGHIJKLMNOPQRSTUVWXYZ/'`
  cat >> confdefs.h <<EOF
#define $ac_tr_lib 1
EOF

  LIBS="-lsocket $LIBS"

else
  echo "$ac_t""no" 1>&6
fi


if test "x${with_socks}" = xyes
then
  echo $ac_n "checking for main in -lresolv""... $ac_c" 1>&6
echo "configure:2696: checking for main in -lresolv" >&5
ac_lib_var=`echo resolv'_'main | sed 'y%./+-%__p_%'`
if eval "test \"`echo '$''{'ac_cv_lib_$ac_lib_var'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  ac_save_LIBS="$LIBS"
LIBS="-lresolv  $LIBS"
cat > conftest.$ac_ext <<EOF
#line 2704 "configure"
#include "confdefs.h"

int main() {
main()
; return 0; }
EOF
if { (eval echo configure:2711: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=no"
fi
rm -f conftest*
LIBS="$ac_save_LIBS"

fi
if eval "test \"`echo '$ac_cv_lib_'$ac_lib_var`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_lib=HAVE_LIB`echo resolv | sed -e 's/[^a-zA-Z0-9_]/_/g' \
    -e 'y/abcdefghijklmnopqrstuvwxyz/ABCDEFGHIJKLMNOPQRSTUVWXYZ/'`
  cat >> confdefs.h <<EOF
#define $ac_tr_lib 1
EOF

  LIBS="-lresolv $LIBS"

else
  echo "$ac_t""no" 1>&6
fi

  echo $ac_n "checking for Rconnect in -lsocks""... $ac_c" 1>&6
echo "configure:2739: checking for Rconnect in -lsocks" >&5
ac_lib_var=`echo socks'_'Rconnect | sed 'y%./+-%__p_%'`
if eval "test \"`echo '$''{'ac_cv_lib_$ac_lib_var'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  ac_save_LIBS="$LIBS"
LIBS="-lsocks  $LIBS"
cat > conftest.$ac_ext <<EOF
#line 2747 "configure"
#include "confdefs.h"
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char Rconnect();

int main() {
Rconnect()
; return 0; }
EOF
if { (eval echo configure:2758: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=no"
fi
rm -f conftest*
LIBS="$ac_save_LIBS"

fi
if eval "test \"`echo '$ac_cv_lib_'$ac_lib_var`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_lib=HAVE_LIB`echo socks | sed -e 's/[^a-zA-Z0-9_]/_/g' \
    -e 'y/abcdefghijklmnopqrstuvwxyz/ABCDEFGHIJKLMNOPQRSTUVWXYZ/'`
  cat >> confdefs.h <<EOF
#define $ac_tr_lib 1
EOF

  LIBS="-lsocks $LIBS"

else
  echo "$ac_t""no" 1>&6
fi

fi

if test "x${with_ssl}" = xyes
then
  ssl_lose=no
  echo $ac_n "checking for SSL_new in -lssl""... $ac_c" 1>&6
echo "configure:2791: checking for SSL_new in -lssl" >&5
ac_lib_var=`echo ssl'_'SSL_new | sed 'y%./+-%__p_%'`
if eval "test \"`echo '$''{'ac_cv_lib_$ac_lib_var'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  ac_save_LIBS="$LIBS"
LIBS="-lssl -lcrypto $LIBS"
cat > conftest.$ac_ext <<EOF
#line 2799 "configure"
#include "confdefs.h"
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char SSL_new();

int main() {
SSL_new()
; return 0; }
EOF
if { (eval echo configure:2810: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=no"
fi
rm -f conftest*
LIBS="$ac_save_LIBS"

fi
if eval "test \"`echo '$ac_cv_lib_'$ac_lib_var`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_lib=HAVE_LIB`echo ssl | sed -e 's/[^a-zA-Z0-9_]/_/g' \
    -e 'y/abcdefghijklmnopqrstuvwxyz/ABCDEFGHIJKLMNOPQRSTUVWXYZ/'`
  cat >> confdefs.h <<EOF
#define $ac_tr_lib 1
EOF

  LIBS="-lssl $LIBS"

else
  echo "$ac_t""no" 1>&6
ssl_lose=yes
fi

  echo $ac_n "checking for main in -lcrypto""... $ac_c" 1>&6
echo "configure:2839: checking for main in -lcrypto" >&5
ac_lib_var=`echo crypto'_'main | sed 'y%./+-%__p_%'`
if eval "test \"`echo '$''{'ac_cv_lib_$ac_lib_var'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  ac_save_LIBS="$LIBS"
LIBS="-lcrypto  $LIBS"
cat > conftest.$ac_ext <<EOF
#line 2847 "configure"
#include "confdefs.h"

int main() {
main()
; return 0; }
EOF
if { (eval echo configure:2854: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=no"
fi
rm -f conftest*
LIBS="$ac_save_LIBS"

fi
if eval "test \"`echo '$ac_cv_lib_'$ac_lib_var`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_lib=HAVE_LIB`echo crypto | sed -e 's/[^a-zA-Z0-9_]/_/g' \
    -e 'y/abcdefghijklmnopqrstuvwxyz/ABCDEFGHIJKLMNOPQRSTUVWXYZ/'`
  cat >> confdefs.h <<EOF
#define $ac_tr_lib 1
EOF

  LIBS="-lcrypto $LIBS"

else
  echo "$ac_t""no" 1>&6
ssl_lose=yes
fi

  if test "$ssl_lose" = no
  then
    cat >> confdefs.h <<\EOF
#define HAVE_SSL 1
EOF

    SSL_OBJ='gen_sslfunc$o'
    
  fi
fi

ALL_LINGUAS=`(cd ${srcdir}/po && ls *.po | sed -e 's/\.po$//')`


echo $ac_n "checking whether NLS is requested""... $ac_c" 1>&6
echo "configure:2897: checking whether NLS is requested" >&5
        # Check whether --enable-nls or --disable-nls was given.
if test "${enable_nls+set}" = set; then
  enableval="$enable_nls"
  HAVE_NLS=$enableval
else
  HAVE_NLS=yes
fi

    echo "$ac_t""$HAVE_NLS" 1>&6

            
    if test x"$HAVE_NLS" = xyes; then
      echo "$ac_t"""language catalogs: $ALL_LINGUAS"" 1>&6
      # Extract the first word of "msgfmt", so it can be a program name with args.
set dummy msgfmt; ac_word=$2
echo $ac_n "checking for $ac_word""... $ac_c" 1>&6
echo "configure:2914: checking for $ac_word" >&5
if eval "test \"`echo '$''{'ac_cv_path_MSGFMT'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  case "$MSGFMT" in
  /*)
  ac_cv_path_MSGFMT="$MSGFMT" # Let the user override the test with a path.
  ;;
  *)
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:"
  for ac_dir in $PATH; do
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/$ac_word; then
      if test -z "`$ac_dir/$ac_word -h 2>&1 | grep 'dv '`"; then
	ac_cv_path_MSGFMT="$ac_dir/$ac_word"
	break
      fi
    fi
  done
  IFS="$ac_save_ifs"
  test -z "$ac_cv_path_MSGFMT" && ac_cv_path_MSGFMT="msgfmt"
  ;;
esac
fi
MSGFMT="$ac_cv_path_MSGFMT"
if test -n "$MSGFMT"; then
  echo "$ac_t""$MSGFMT" 1>&6
else
  echo "$ac_t""no" 1>&6
fi

      # Extract the first word of "xgettext", so it can be a program name with args.
set dummy xgettext; ac_word=$2
echo $ac_n "checking for $ac_word""... $ac_c" 1>&6
echo "configure:2948: checking for $ac_word" >&5
if eval "test \"`echo '$''{'ac_cv_path_XGETTEXT'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  case "$XGETTEXT" in
  /*)
  ac_cv_path_XGETTEXT="$XGETTEXT" # Let the user override the test with a path.
  ;;
  *)
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS="${IFS}:"
  for ac_dir in $PATH; do
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/$ac_word; then
      if test -z "`$ac_dir/$ac_word -h 2>&1 | grep '(HELP)'`"; then
	ac_cv_path_XGETTEXT="$ac_dir/$ac_word"
	break
      fi
    fi
  done
  IFS="$ac_save_ifs"
  test -z "$ac_cv_path_XGETTEXT" && ac_cv_path_XGETTEXT=":"
  ;;
esac
fi
XGETTEXT="$ac_cv_path_XGETTEXT"
if test -n "$XGETTEXT"; then
  echo "$ac_t""$XGETTEXT" 1>&6
else
  echo "$ac_t""no" 1>&6
fi

      
      # Extract the first word of "gmsgfmt", so it can be a program name with args.
set dummy gmsgfmt; ac_word=$2
echo $ac_n "checking for $ac_word""... $ac_c" 1>&6
echo "configure:2983: checking for $ac_word" >&5
if eval "test \"`echo '$''{'ac_cv_path_GMSGFMT'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  case "$GMSGFMT" in
  /*)
  ac_cv_path_GMSGFMT="$GMSGFMT" # Let the user override the test with a path.
  ;;
  ?:/*)			 
  ac_cv_path_GMSGFMT="$GMSGFMT" # Let the user override the test with a dos path.
  ;;
  *)
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS=":"
  ac_dummy="$PATH"
  for ac_dir in $ac_dummy; do 
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/$ac_word; then
      ac_cv_path_GMSGFMT="$ac_dir/$ac_word"
      break
    fi
  done
  IFS="$ac_save_ifs"
  test -z "$ac_cv_path_GMSGFMT" && ac_cv_path_GMSGFMT="$MSGFMT"
  ;;
esac
fi
GMSGFMT="$ac_cv_path_GMSGFMT"
if test -n "$GMSGFMT"; then
  echo "$ac_t""$GMSGFMT" 1>&6
else
  echo "$ac_t""no" 1>&6
fi

      CATOBJEXT=.gmo
      INSTOBJEXT=.mo
      DATADIRNAME=share

            if test "$XGETTEXT" != ":"; then
			if $XGETTEXT --omit-header /dev/null 2> /dev/null; then
	  : ;
	else
	  echo "$ac_t""found xgettext programs is not GNU xgettext; ignore it" 1>&6
	  XGETTEXT=":"
	fi
      fi

      for ac_hdr in locale.h libintl.h
do
ac_safe=`echo "$ac_hdr" | sed 'y%./+-%__p_%'`
echo $ac_n "checking for $ac_hdr""... $ac_c" 1>&6
echo "configure:3033: checking for $ac_hdr" >&5
if eval "test \"`echo '$''{'ac_cv_header_$ac_safe'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 3038 "configure"
#include "confdefs.h"
#include <$ac_hdr>
EOF
ac_try="$ac_cpp conftest.$ac_ext >/dev/null 2>conftest.out"
{ (eval echo configure:3043: \"$ac_try\") 1>&5; (eval $ac_try) 2>&5; }
ac_err=`grep -v '^ *+' conftest.out | grep -v "^conftest.${ac_ext}\$"`
if test -z "$ac_err"; then
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=yes"
else
  echo "$ac_err" >&5
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_header_$ac_safe=no"
fi
rm -f conftest*
fi
if eval "test \"`echo '$ac_cv_header_'$ac_safe`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_hdr=HAVE_`echo $ac_hdr | sed 'y%abcdefghijklmnopqrstuvwxyz./-%ABCDEFGHIJKLMNOPQRSTUVWXYZ___%'`
  cat >> confdefs.h <<EOF
#define $ac_tr_hdr 1
EOF
 
else
  echo "$ac_t""no" 1>&6
fi
done


      for ac_func in gettext
do
echo $ac_n "checking for $ac_func""... $ac_c" 1>&6
echo "configure:3073: checking for $ac_func" >&5
if eval "test \"`echo '$''{'ac_cv_func_$ac_func'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  cat > conftest.$ac_ext <<EOF
#line 3078 "configure"
#include "confdefs.h"
/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char $ac_func(); below.  */
#include <assert.h>
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char $ac_func();

int main() {

/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined (__stub_$ac_func) || defined (__stub___$ac_func)
choke me
#else
$ac_func();
#endif

; return 0; }
EOF
if { (eval echo configure:3101: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_func_$ac_func=no"
fi
rm -f conftest*
fi

if eval "test \"`echo '$ac_cv_func_'$ac_func`\" = yes"; then
  echo "$ac_t""yes" 1>&6
    ac_tr_func=HAVE_`echo $ac_func | tr 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'`
  cat >> confdefs.h <<EOF
#define $ac_tr_func 1
EOF
 
else
  echo "$ac_t""no" 1>&6
echo $ac_n "checking for gettext in -lintl""... $ac_c" 1>&6
echo "configure:3123: checking for gettext in -lintl" >&5
ac_lib_var=`echo intl'_'gettext | sed 'y%./+-%__p_%'`
if eval "test \"`echo '$''{'ac_cv_lib_$ac_lib_var'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  ac_save_LIBS="$LIBS"
LIBS="-lintl  $LIBS"
cat > conftest.$ac_ext <<EOF
#line 3131 "configure"
#include "confdefs.h"
/* Override any gcc2 internal prototype to avoid an error.  */
/* We use char because int might match the return type of a gcc2
    builtin and then its argument prototype would still apply.  */
char gettext();

int main() {
gettext()
; return 0; }
EOF
if { (eval echo configure:3142: \"$ac_link\") 1>&5; (eval $ac_link) 2>&5; } && test -s conftest${ac_exeext}; then
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=yes"
else
  echo "configure: failed program was:" >&5
  cat conftest.$ac_ext >&5
  rm -rf conftest*
  eval "ac_cv_lib_$ac_lib_var=no"
fi
rm -f conftest*
LIBS="$ac_save_LIBS"

fi
if eval "test \"`echo '$ac_cv_lib_'$ac_lib_var`\" = yes"; then
  echo "$ac_t""yes" 1>&6
  
                    LIBS="-lintl $LIBS"
	  cat >> confdefs.h <<\EOF
#define HAVE_GETTEXT 1
EOF

        
else
  echo "$ac_t""no" 1>&6

	  echo "$ac_t""gettext not found; disabling NLS" 1>&6
          HAVE_NLS=no
        
fi

      
fi
done


                        for lang in $ALL_LINGUAS; do
	GMOFILES="$GMOFILES $lang.gmo"
	POFILES="$POFILES $lang.po"
      done
            for lang in $ALL_LINGUAS; do
        CATALOGS="$CATALOGS ${lang}${CATOBJEXT}"
      done

            
      
      
      
      
      
      
    fi
    
            USE_NLS=$HAVE_NLS
    
    if test "x$HAVE_NLS" = xyes; then
      cat >> confdefs.h <<\EOF
#define HAVE_NLS 1
EOF

    fi
  


for ac_prog in makeinfo emacs xemacs
do
# Extract the first word of "$ac_prog", so it can be a program name with args.
set dummy $ac_prog; ac_word=$2
echo $ac_n "checking for $ac_word""... $ac_c" 1>&6
echo "configure:3210: checking for $ac_word" >&5
if eval "test \"`echo '$''{'ac_cv_prog_MAKEINFO'+set}'`\" = set"; then
  echo $ac_n "(cached) $ac_c" 1>&6
else
  if test -n "$MAKEINFO"; then
  ac_cv_prog_MAKEINFO="$MAKEINFO" # Let the user override the test.
else
  IFS="${IFS= 	}"; ac_save_ifs="$IFS"; IFS=":"
  ac_dummy="$PATH"
  for ac_dir in $ac_dummy; do
    test -z "$ac_dir" && ac_dir=.
    if test -f $ac_dir/$ac_word; then
      ac_cv_prog_MAKEINFO="$ac_prog"
      break
    fi
  done
  IFS="$ac_save_ifs"
fi
fi
MAKEINFO="$ac_cv_prog_MAKEINFO"
if test -n "$MAKEINFO"; then
  echo "$ac_t""$MAKEINFO" 1>&6
else
  echo "$ac_t""no" 1>&6
fi

test -n "$MAKEINFO" && break
done


case "${MAKEINFO}" in
   *makeinfo) MAKEINFO="${MAKEINFO} \$(srcdir)/wget.texi"  ;;
   *emacs | *xemacs) MAKEINFO="${MAKEINFO} -batch -q -no-site-file -eval '(find-file \"\$(srcdir)/wget.texi\")' -l texinfmt -f texinfo-format-buffer -f save-buffer"  ;;
   *) MAKEINFO="makeinfo \$(srcdir)/wget.texi"            ;;
esac

trap '' 1 2 15
cat > confcache <<\EOF
# This file is a shell script that caches the results of configure
# tests run on this system so they can be shared between configure
# scripts and configure runs.  It is not useful on other systems.
# If it contains results you don't want to keep, you may remove or edit it.
#
# By default, configure uses ./config.cache as the cache file,
# creating it if it does not exist already.  You can give configure
# the --cache-file=FILE option to use a different cache file; that is
# what configure does when it calls configure scripts in
# subdirectories, so they share the cache.
# Giving --cache-file=/dev/null disables caching, for debugging configure.
# config.status only pays attention to the cache file if you give it the
# --recheck option to rerun configure.
#
EOF
# The following way of writing the cache mishandles newlines in values,
# but we know of no workaround that is simple, portable, and efficient.
# So, don't put newlines in cache variables' values.
# Ultrix sh set writes to stderr and can't be redirected directly,
# and sets the high bit in the cache file unless we assign to the vars.
(set) 2>&1 |
  case `(ac_space=' '; set | grep ac_space) 2>&1` in
  *ac_space=\ *)
    # `set' does not quote correctly, so add quotes (double-quote substitution
    # turns \\\\ into \\, and sed turns \\ into \).
    sed -n \
      -e "s/'/'\\\\''/g" \
      -e "s/^\\([a-zA-Z0-9_]*_cv_[a-zA-Z0-9_]*\\)=\\(.*\\)/\\1=\${\\1='\\2'}/p"
    ;;
  *)
    # `set' quotes correctly as required by POSIX, so do not add quotes.
    sed -n -e 's/^\([a-zA-Z0-9_]*_cv_[a-zA-Z0-9_]*\)=\(.*\)/\1=${\1=\2}/p'
    ;;
  esac >> confcache
if cmp -s $cache_file confcache; then
  :
else
  if test -w $cache_file; then
    echo "updating cache $cache_file"
    cat confcache > $cache_file
  else
    echo "not updating unwritable cache $cache_file"
  fi
fi
rm -f confcache

trap 'rm -fr conftest* confdefs* core core.* *.core $ac_clean_files; exit 1' 1 2 15

test "x$prefix" = xNONE && prefix=$ac_default_prefix
# Let make expand exec_prefix.
test "x$exec_prefix" = xNONE && exec_prefix='${prefix}'

# Any assignment to VPATH causes Sun make to only execute
# the first set of double-colon rules, so remove it if not needed.
# If there is a colon in the path, we need to keep it.
if test "x$srcdir" = x.; then
  ac_vpsub='/^[ 	]*VPATH[ 	]*=[^:]*$/d'
fi

trap 'rm -f $CONFIG_STATUS conftest*; exit 1' 1 2 15

DEFS=-DHAVE_CONFIG_H

# Without the "./", some shells look in PATH for config.status.
: ${CONFIG_STATUS=./config.status}

echo creating $CONFIG_STATUS
rm -f $CONFIG_STATUS
cat > $CONFIG_STATUS <<EOF
#! /bin/sh
# Generated automatically by configure.
# Run this file to recreate the current configuration.
# This directory was configured as follows,
# on host `(hostname || uname -n) 2>/dev/null | sed 1q`:
#
# $0 $ac_configure_args
#
# Compiler output produced by configure, useful for debugging
# configure, is in ./config.log if it exists.

ac_cs_usage="Usage: $CONFIG_STATUS [--recheck] [--version] [--help]"
for ac_option
do
  case "\$ac_option" in
  -recheck | --recheck | --rechec | --reche | --rech | --rec | --re | --r)
    echo "running \${CONFIG_SHELL-/bin/sh} $0 $ac_configure_args --no-create --no-recursion"
    exec \${CONFIG_SHELL-/bin/sh} $0 $ac_configure_args --no-create --no-recursion ;;
  -version | --version | --versio | --versi | --vers | --ver | --ve | --v)
    echo "$CONFIG_STATUS generated by autoconf version 2.13"
    exit 0 ;;
  -help | --help | --hel | --he | --h)
    echo "\$ac_cs_usage"; exit 0 ;;
  *) echo "\$ac_cs_usage"; exit 1 ;;
  esac
done

ac_given_srcdir=$srcdir
ac_given_INSTALL="$INSTALL"

trap 'rm -fr `echo "Makefile src/Makefile doc/Makefile util/Makefile po/Makefile.in
           windows/Makefile src/config.h" | sed "s/:[^ ]*//g"` conftest*; exit 1' 1 2 15
EOF
cat >> $CONFIG_STATUS <<EOF

# Protect against being on the right side of a sed subst in config.status.
sed 's/%@/@@/; s/@%/@@/; s/%g\$/@g/; /@g\$/s/[\\\\&%]/\\\\&/g;
 s/@@/%@/; s/@@/@%/; s/@g\$/%g/' > conftest.subs <<\\CEOF
$ac_vpsub
$extrasub
s%@SHELL@%$SHELL%g
s%@CFLAGS@%$CFLAGS%g
s%@CPPFLAGS@%$CPPFLAGS%g
s%@CXXFLAGS@%$CXXFLAGS%g
s%@FFLAGS@%$FFLAGS%g
s%@DEFS@%$DEFS%g
s%@LDFLAGS@%$LDFLAGS%g
s%@LIBS@%$LIBS%g
s%@exec_prefix@%$exec_prefix%g
s%@prefix@%$prefix%g
s%@program_transform_name@%$program_transform_name%g
s%@bindir@%$bindir%g
s%@sbindir@%$sbindir%g
s%@libexecdir@%$libexecdir%g
s%@datadir@%$datadir%g
s%@sysconfdir@%$sysconfdir%g
s%@sharedstatedir@%$sharedstatedir%g
s%@localstatedir@%$localstatedir%g
s%@libdir@%$libdir%g
s%@includedir@%$includedir%g
s%@oldincludedir@%$oldincludedir%g
s%@infodir@%$infodir%g
s%@mandir@%$mandir%g
s%@VERSION@%$VERSION%g
s%@PACKAGE@%$PACKAGE%g
s%@host@%$host%g
s%@host_alias@%$host_alias%g
s%@host_cpu@%$host_cpu%g
s%@host_vendor@%$host_vendor%g
s%@host_os@%$host_os%g
s%@MD5_OBJ@%$MD5_OBJ%g
s%@OPIE_OBJ@%$OPIE_OBJ%g
s%@SET_MAKE@%$SET_MAKE%g
s%@INSTALL_PROGRAM@%$INSTALL_PROGRAM%g
s%@INSTALL_SCRIPT@%$INSTALL_SCRIPT%g
s%@INSTALL_DATA@%$INSTALL_DATA%g
s%@CC@%$CC%g
s%@CPP@%$CPP%g
s%@exeext@%$exeext%g
s%@U@%$U%g
s%@ANSI2KNR@%$ANSI2KNR%g
s%@ALLOCA@%$ALLOCA%g
s%@SSL_OBJ@%$SSL_OBJ%g
s%@MSGFMT@%$MSGFMT%g
s%@XGETTEXT@%$XGETTEXT%g
s%@GMSGFMT@%$GMSGFMT%g
s%@CATALOGS@%$CATALOGS%g
s%@CATOBJEXT@%$CATOBJEXT%g
s%@DATADIRNAME@%$DATADIRNAME%g
s%@GMOFILES@%$GMOFILES%g
s%@INSTOBJEXT@%$INSTOBJEXT%g
s%@INTLLIBS@%$INTLLIBS%g
s%@POFILES@%$POFILES%g
s%@HAVE_NLS@%$HAVE_NLS%g
s%@USE_NLS@%$USE_NLS%g
s%@MAKEINFO@%$MAKEINFO%g

CEOF
EOF

cat >> $CONFIG_STATUS <<\EOF

# Split the substitutions into bite-sized pieces for seds with
# small command number limits, like on Digital OSF/1 and HP-UX.
ac_max_sed_cmds=90 # Maximum number of lines to put in a sed script.
ac_file=1 # Number of current file.
ac_beg=1 # First line for current file.
ac_end=$ac_max_sed_cmds # Line after last line for current file.
ac_more_lines=:
ac_sed_cmds=""
while $ac_more_lines; do
  if test $ac_beg -gt 1; then
    sed "1,${ac_beg}d; ${ac_end}q" conftest.subs > conftest.s$ac_file
  else
    sed "${ac_end}q" conftest.subs > conftest.s$ac_file
  fi
  if test ! -s conftest.s$ac_file; then
    ac_more_lines=false
    rm -f conftest.s$ac_file
  else
    if test -z "$ac_sed_cmds"; then
      ac_sed_cmds="sed -f conftest.s$ac_file"
    else
      ac_sed_cmds="$ac_sed_cmds | sed -f conftest.s$ac_file"
    fi
    ac_file=`expr $ac_file + 1`
    ac_beg=$ac_end
    ac_end=`expr $ac_end + $ac_max_sed_cmds`
  fi
done
if test -z "$ac_sed_cmds"; then
  ac_sed_cmds=cat
fi
EOF

cat >> $CONFIG_STATUS <<EOF

CONFIG_FILES=\${CONFIG_FILES-"Makefile src/Makefile doc/Makefile util/Makefile po/Makefile.in
           windows/Makefile"}
EOF
cat >> $CONFIG_STATUS <<\EOF
for ac_file in .. $CONFIG_FILES; do if test "x$ac_file" != x..; then
  # Support "outfile[:infile[:infile...]]", defaulting infile="outfile.in".
  case "$ac_file" in
  *:*) ac_file_in=`echo "$ac_file"|sed 's%[^:]*:%%'`
       ac_file=`echo "$ac_file"|sed 's%:.*%%'` ;;
  *) ac_file_in="${ac_file}.in" ;;
  esac

  # Adjust a relative srcdir, top_srcdir, and INSTALL for subdirectories.

  # Remove last slash and all that follows it.  Not all systems have dirname.
  ac_dir=`echo $ac_file|sed 's%/[^/][^/]*$%%'`
  if test "$ac_dir" != "$ac_file" && test "$ac_dir" != .; then
    # The file is in a subdirectory.
    test ! -d "$ac_dir" && mkdir "$ac_dir"
    ac_dir_suffix="/`echo $ac_dir|sed 's%^\./%%'`"
    # A "../" for each directory in $ac_dir_suffix.
    ac_dots=`echo $ac_dir_suffix|sed 's%/[^/]*%../%g'`
  else
    ac_dir_suffix= ac_dots=
  fi

  case "$ac_given_srcdir" in
  .)  srcdir=.
      if test -z "$ac_dots"; then top_srcdir=.
      else top_srcdir=`echo $ac_dots|sed 's%/$%%'`; fi ;;
  /*) srcdir="$ac_given_srcdir$ac_dir_suffix"; top_srcdir="$ac_given_srcdir" ;;
  *) # Relative path.
    srcdir="$ac_dots$ac_given_srcdir$ac_dir_suffix"
    top_srcdir="$ac_dots$ac_given_srcdir" ;;
  esac

  case "$ac_given_INSTALL" in
  [/$]*) INSTALL="$ac_given_INSTALL" ;;
  *) INSTALL="$ac_dots$ac_given_INSTALL" ;;
  esac

  echo creating "$ac_file"
  rm -f "$ac_file"
  configure_input="Generated automatically from `echo $ac_file_in|sed 's%.*/%%'` by configure."
  case "$ac_file" in
  *Makefile*) ac_comsub="1i\\
# $configure_input" ;;
  *) ac_comsub= ;;
  esac

  ac_file_inputs=`echo $ac_file_in|sed -e "s%^%$ac_given_srcdir/%" -e "s%:% $ac_given_srcdir/%g"`
  sed -e "$ac_comsub
s%@configure_input@%$configure_input%g
s%@srcdir@%$srcdir%g
s%@top_srcdir@%$top_srcdir%g
s%@INSTALL@%$INSTALL%g
" $ac_file_inputs | (eval "$ac_sed_cmds") > $ac_file
fi; done
rm -f conftest.s*

# These sed commands are passed to sed as "A NAME B NAME C VALUE D", where
# NAME is the cpp macro being defined and VALUE is the value it is being given.
#
# ac_d sets the value in "#define NAME VALUE" lines.
ac_dA='s%^\([ 	]*\)#\([ 	]*define[ 	][ 	]*\)'
ac_dB='\([ 	][ 	]*\)[^ 	]*%\1#\2'
ac_dC='\3'
ac_dD='%g'
# ac_u turns "#undef NAME" with trailing blanks into "#define NAME VALUE".
ac_uA='s%^\([ 	]*\)#\([ 	]*\)undef\([ 	][ 	]*\)'
ac_uB='\([ 	]\)%\1#\2define\3'
ac_uC=' '
ac_uD='\4%g'
# ac_e turns "#undef NAME" without trailing blanks into "#define NAME VALUE".
ac_eA='s%^\([ 	]*\)#\([ 	]*\)undef\([ 	][ 	]*\)'
ac_eB='$%\1#\2define\3'
ac_eC=' '
ac_eD='%g'

if test "${CONFIG_HEADERS+set}" != set; then
EOF
cat >> $CONFIG_STATUS <<EOF
  CONFIG_HEADERS="src/config.h"
EOF
cat >> $CONFIG_STATUS <<\EOF
fi
for ac_file in .. $CONFIG_HEADERS; do if test "x$ac_file" != x..; then
  # Support "outfile[:infile[:infile...]]", defaulting infile="outfile.in".
  case "$ac_file" in
  *:*) ac_file_in=`echo "$ac_file"|sed 's%[^:]*:%%'`
       ac_file=`echo "$ac_file"|sed 's%:.*%%'` ;;
  *) ac_file_in="${ac_file}.in" ;;
  esac

  echo creating $ac_file

  rm -f conftest.frag conftest.in conftest.out
  ac_file_inputs=`echo $ac_file_in|sed -e "s%^%$ac_given_srcdir/%" -e "s%:% $ac_given_srcdir/%g"`
  cat $ac_file_inputs > conftest.in

EOF

# Transform confdefs.h into a sed script conftest.vals that substitutes
# the proper values into config.h.in to produce config.h.  And first:
# Protect against being on the right side of a sed subst in config.status.
# Protect against being in an unquoted here document in config.status.
rm -f conftest.vals
cat > conftest.hdr <<\EOF
s/[\\&%]/\\&/g
s%[\\$`]%\\&%g
s%#define \([A-Za-z_][A-Za-z0-9_]*\) *\(.*\)%${ac_dA}\1${ac_dB}\1${ac_dC}\2${ac_dD}%gp
s%ac_d%ac_u%gp
s%ac_u%ac_e%gp
EOF
sed -n -f conftest.hdr confdefs.h > conftest.vals
rm -f conftest.hdr

# This sed command replaces #undef with comments.  This is necessary, for
# example, in the case of _POSIX_SOURCE, which is predefined and required
# on some systems where configure will not decide to define it.
cat >> conftest.vals <<\EOF
s%^[ 	]*#[ 	]*undef[ 	][ 	]*[a-zA-Z_][a-zA-Z_0-9]*%/* & */%
EOF

# Break up conftest.vals because some shells have a limit on
# the size of here documents, and old seds have small limits too.

rm -f conftest.tail
while :
do
  ac_lines=`grep -c . conftest.vals`
  # grep -c gives empty output for an empty file on some AIX systems.
  if test -z "$ac_lines" || test "$ac_lines" -eq 0; then break; fi
  # Write a limited-size here document to conftest.frag.
  echo '  cat > conftest.frag <<CEOF' >> $CONFIG_STATUS
  sed ${ac_max_here_lines}q conftest.vals >> $CONFIG_STATUS
  echo 'CEOF
  sed -f conftest.frag conftest.in > conftest.out
  rm -f conftest.in
  mv conftest.out conftest.in
' >> $CONFIG_STATUS
  sed 1,${ac_max_here_lines}d conftest.vals > conftest.tail
  rm -f conftest.vals
  mv conftest.tail conftest.vals
done
rm -f conftest.vals

cat >> $CONFIG_STATUS <<\EOF
  rm -f conftest.frag conftest.h
  echo "/* $ac_file.  Generated automatically by configure.  */" > conftest.h
  cat conftest.in >> conftest.h
  rm -f conftest.in
  if cmp -s $ac_file conftest.h 2>/dev/null; then
    echo "$ac_file is unchanged"
    rm -f conftest.h
  else
    # Remove last slash and all that follows it.  Not all systems have dirname.
      ac_dir=`echo $ac_file|sed 's%/[^/][^/]*$%%'`
      if test "$ac_dir" != "$ac_file" && test "$ac_dir" != .; then
      # The file is in a subdirectory.
      test ! -d "$ac_dir" && mkdir "$ac_dir"
    fi
    rm -f $ac_file
    mv conftest.h $ac_file
  fi
fi; done

EOF
cat >> $CONFIG_STATUS <<EOF

EOF
cat >> $CONFIG_STATUS <<\EOF
srcdir=$ac_given_srcdir # Advanced autoconf hackery
      if test "x$srcdir" != "x."; then
     if test "x`echo $srcdir | sed 's@/.*@@'`" = "x"; then
       posrcprefix="$srcdir/"
     else
       posrcprefix="../$srcdir/"
     fi
   else
     posrcprefix="../"
   fi
   rm -f po/POTFILES
         echo "generating po/POTFILES from $srcdir/po/POTFILES.in"
   sed -e "/^#/d" -e "/^\$/d" -e "s,.*,	$posrcprefix& \\\\,"  \
       -e "\$s/\(.*\) \\\\/\1/" \
        < $srcdir/po/POTFILES.in > po/POTFILES
   echo "creating po/Makefile"
   sed -e "/POTFILES =/r po/POTFILES" po/Makefile.in > po/Makefile
  
test -z "$CONFIG_HEADERS" || echo timestamp > stamp-h
exit 0
EOF
chmod +x $CONFIG_STATUS
rm -fr confdefs* $ac_clean_files
test "$no_create" = yes || ${CONFIG_SHELL-/bin/sh} $CONFIG_STATUS || exit 1

