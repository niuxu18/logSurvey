#! /bin/sh
# Attempt to guess a canonical system name.
#   Copyright (C) 1992, 93, 94, 95, 1996 Free Software Foundation, Inc.
#
# This file is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
#
# As a special exception to the GNU General Public License, if you
# distribute this file as part of a program that contains a
# configuration script generated by Autoconf, you may include it under
# the same distribution terms that you use for the rest of that program.

# Written by Per Bothner <bothner@cygnus.com>.
# The master version of this file is at the FSF in /home/gd/gnu/lib.
#
# This script attempts to guess a canonical system name similar to
# config.sub.  If it succeeds, it prints the system name on stdout, and
# exits with 0.  Otherwise, it exits with 1.
#
# The plan is that this can be called by configure scripts if you
# don't specify an explicit system type (host/target name).
#
# Only a few systems have been added to this list; please add others
# (but try to keep the structure clean).
#

# This is needed to find uname on a Pyramid OSx when run in the BSD universe.
# (ghazi@noc.rutgers.edu 8/24/94.)
if (test -f /.attbin/uname) >/dev/null 2>&1 ; then
	PATH=$PATH:/.attbin ; export PATH
fi

UNAME_MACHINE=`(uname -m) 2>/dev/null` || UNAME_MACHINE=unknown
UNAME_RELEASE=`(uname -r) 2>/dev/null` || UNAME_RELEASE=unknown
UNAME_SYSTEM=`(uname -s) 2>/dev/null` || UNAME_SYSTEM=unknown
UNAME_VERSION=`(uname -v) 2>/dev/null` || UNAME_VERSION=unknown

trap 'rm -f dummy.c dummy.o dummy; exit 1' 1 2 15

# Note: order is significant - the case branches are not exclusive.

case "${UNAME_MACHINE}:${UNAME_SYSTEM}:${UNAME_RELEASE}:${UNAME_VERSION}" in
    alpha:OSF1:*:*)
	# A Vn.n version is a released version.
	# A Tn.n version is a released field test version.
	# A Xn.n version is an unreleased experimental baselevel.
	# 1.2 uses "1.2" for uname -r.
	echo alpha-dec-osf`echo ${UNAME_RELEASE} | sed -e 's/^[VTX]//'`
	exit 0 ;;
    21064:Windows_NT:50:3)
	echo alpha-dec-winnt3.5
	exit 0 ;;
    Amiga*:UNIX_System_V:4.0:*)
	echo m68k-cbm-sysv4
	exit 0;;
    amiga:NetBSD:*:*)
      echo m68k-cbm-netbsd${UNAME_RELEASE}
      exit 0 ;;
    amiga:OpenBSD:*:*)
      echo m68k-cbm-openbsd${UNAME_RELEASE}
      exit 0 ;;
    arm:RISC*:1.[012]*:*|arm:riscix:1.[012]*:*)
	echo arm-acorn-riscix${UNAME_RELEASE}
	exit 0;;
    Pyramid*:OSx*:*:*|MIS*:OSx*:*:*)
	# akee@wpdis03.wpafb.af.mil (Earle F. Ake) contributed MIS and NILE.
	if test "`(/bin/universe) 2>/dev/null`" = att ; then
		echo pyramid-pyramid-sysv3
	else
		echo pyramid-pyramid-bsd
	fi
	exit 0 ;;
    NILE:*:*:dcosx)
	echo pyramid-pyramid-svr4
	exit 0 ;;
    sun4*:SunOS:5.*:* | tadpole*:SunOS:5.*:*)
	echo sparc-sun-solaris2`echo ${UNAME_RELEASE}|sed -e 's/[^.]*//'`
	exit 0 ;;
    i86pc:SunOS:5.*:*)
	echo i386-pc-solaris2`echo ${UNAME_RELEASE}|sed -e 's/[^.]*//'`
	exit 0 ;;
    sun4*:SunOS:6*:*)
	# According to config.sub, this is the proper way to canonicalize
	# SunOS6.  Hard to guess exactly what SunOS6 will be like, but
	# it's likely to be more like Solaris than SunOS4.
	echo sparc-sun-solaris3`echo ${UNAME_RELEASE}|sed -e 's/[^.]*//'`
	exit 0 ;;
    sun4*:SunOS:*:*)
	case "`/usr/bin/arch -k`" in
	    Series*|S4*)
		UNAME_RELEASE=`uname -v`
		;;
	esac
	# Japanese Language versions have a version number like `4.1.3-JL'.
	echo sparc-sun-sunos`echo ${UNAME_RELEASE}|sed -e 's/-/_/'`
	exit 0 ;;
    sun3*:SunOS:*:*)
	echo m68k-sun-sunos${UNAME_RELEASE}
	exit 0 ;;
    aushp:SunOS:*:*)
	echo sparc-auspex-sunos${UNAME_RELEASE}
	exit 0 ;;
    atari*:NetBSD:*:*)
	echo m68k-atari-netbsd${UNAME_RELEASE}
	exit 0 ;;
    atari*:OpenBSD:*:*)
	echo m68k-atari-openbsd${UNAME_RELEASE}
	exit 0 ;;
    sun3*:NetBSD:*:*)
	echo m68k-sun-netbsd${UNAME_RELEASE}
	exit 0 ;;
    sun3*:OpenBSD:*:*)
	echo m68k-sun-openbsd${UNAME_RELEASE}
	exit 0 ;;
    mac68k:NetBSD:*:*)
	echo m68k-apple-netbsd${UNAME_RELEASE}
	exit 0 ;;
    mac68k:OpenBSD:*:*)
	echo m68k-apple-openbsd${UNAME_RELEASE}
	exit 0 ;;
    powerpc:machten:*:*)
	echo powerpc-apple-machten${UNAME_RELEASE}
	exit 0 ;;
    RISC*:Mach:*:*)
	echo mips-dec-mach_bsd4.3
	exit 0 ;;
    RISC*:ULTRIX:*:*)
	echo mips-dec-ultrix${UNAME_RELEASE}
	exit 0 ;;
    VAX*:ULTRIX*:*:*)
	echo vax-dec-ultrix${UNAME_RELEASE}
	exit 0 ;;
    mips:*:*:UMIPS | mips:*:*:RISCos)
	sed 's/^	//' << EOF >dummy.c
	int main (argc, argv) int argc; char **argv; {
	#if defined (host_mips) && defined (MIPSEB)
	#if defined (SYSTYPE_SYSV)
	  printf ("mips-mips-riscos%ssysv\n", argv[1]); exit (0);
	#endif
	#if defined (SYSTYPE_SVR4)
	  printf ("mips-mips-riscos%ssvr4\n", argv[1]); exit (0);
	#endif
	#if defined (SYSTYPE_BSD43) || defined(SYSTYPE_BSD)
	  printf ("mips-mips-riscos%sbsd\n", argv[1]); exit (0);
	#endif
	#endif
	  exit (-1);
	}
EOF
	${CC-cc} dummy.c -o dummy \
	  && ./dummy `echo "${UNAME_RELEASE}" | sed -n 's/\([0-9]*\).*/\1/p'` \
	  && rm dummy.c dummy && exit 0
	rm -f dummy.c dummy
	echo mips-mips-riscos${UNAME_RELEASE}
	exit 0 ;;
    Night_Hawk:Power_UNIX:*:*)
	echo powerpc-harris-powerunix
	exit 0 ;;
    m88k:CX/UX:7*:*)
	echo m88k-harris-cxux7
	exit 0 ;;
    m88k:*:4*:R4*)
	echo m88k-motorola-sysv4
	exit 0 ;;
    m88k:*:3*:R3*)
	echo m88k-motorola-sysv3
	exit 0 ;;
    AViiON:dgux:*:*)
        # DG/UX returns AViiON for all architectures
        UNAME_PROCESSOR=`/usr/bin/uname -p`
        if [ $UNAME_PROCESSOR = mc88100 -o $UNAME_PROCESSOR = mc88110 ] ; then
	if [ ${TARGET_BINARY_INTERFACE}x = m88kdguxelfx \
	     -o ${TARGET_BINARY_INTERFACE}x = x ] ; then
		echo m88k-dg-dgux${UNAME_RELEASE}
	else
		echo m88k-dg-dguxbcs${UNAME_RELEASE}
	fi
        else echo i586-dg-dgux${UNAME_RELEASE}
        fi
 	exit 0 ;;
    M88*:DolphinOS:*:*)	# DolphinOS (SVR3)
	echo m88k-dolphin-sysv3
	exit 0 ;;
    M88*:*:R3*:*)
	# Delta 88k system running SVR3
	echo m88k-motorola-sysv3
	exit 0 ;;
    XD88*:*:*:*) # Tektronix XD88 system running UTekV (SVR3)
	echo m88k-tektronix-sysv3
	exit 0 ;;
    Tek43[0-9][0-9]:UTek:*:*) # Tektronix 4300 system running UTek (BSD)
	echo m68k-tektronix-bsd
	exit 0 ;;
    *:IRIX*:*:*)
	echo mips-sgi-irix`echo ${UNAME_RELEASE}|sed -e 's/-/_/g'`
	exit 0 ;;
    ????????:AIX?:[12].1:2)   # AIX 2.2.1 or AIX 2.1.1 is RT/PC AIX.
	echo romp-ibm-aix      # uname -m gives an 8 hex-code CPU id
	exit 0 ;;              # Note that: echo "'`uname -s`'" gives 'AIX '
    i?86:AIX:*:*)
	echo i386-ibm-aix
	exit 0 ;;
    *:AIX:2:3)
	if grep bos325 /usr/include/stdio.h >/dev/null 2>&1; then
		sed 's/^		//' << EOF >dummy.c
		#include <sys/systemcfg.h>

		main()
			{
			if (!__power_pc())
				exit(1);
			puts("powerpc-ibm-aix3.2.5");
			exit(0);
			}
EOF
		${CC-cc} dummy.c -o dummy && ./dummy && rm dummy.c dummy && exit 0
		rm -f dummy.c dummy
		echo rs6000-ibm-aix3.2.5
	elif grep bos324 /usr/include/stdio.h >/dev/null 2>&1; then
		echo rs6000-ibm-aix3.2.4
	else
		echo rs6000-ibm-aix3.2
	fi
	exit 0 ;;
    *:AIX:*:4)
	if /usr/sbin/lsattr -EHl proc0 | grep POWER >/dev/null 2>&1; then
		IBM_ARCH=rs6000
	else
		IBM_ARCH=powerpc
	fi
	if [ -x /usr/bin/oslevel ] ; then
		IBM_REV=`/usr/bin/oslevel`
	else
		IBM_REV=4.${UNAME_RELEASE}
	fi
	echo ${IBM_ARCH}-ibm-aix${IBM_REV}
	exit 0 ;;
    *:AIX:*:*)
	echo rs6000-ibm-aix
	exit 0 ;;
    ibmrt:4.4BSD:*|romp-ibm:BSD:*)
	echo romp-ibm-bsd4.4
	exit 0 ;;
    ibmrt:*BSD:*|romp-ibm:BSD:*)            # covers RT/PC NetBSD and
	echo romp-ibm-bsd${UNAME_RELEASE}   # 4.3 with uname added to
	exit 0 ;;                           # report: romp-ibm BSD 4.3
    *:BOSX:*:*)
	echo rs6000-bull-bosx
	exit 0 ;;
    DPX/2?00:B.O.S.:*:*)
	echo m68k-bull-sysv3
	exit 0 ;;
    9000/[34]??:4.3bsd:1.*:*)
	echo m68k-hp-bsd
	exit 0 ;;
    hp300:4.4BSD:*:* | 9000/[34]??:4.3bsd:2.*:*)
	echo m68k-hp-bsd4.4
	exit 0 ;;
    9000/[3478]??:HP-UX:*:*)
	case "${UNAME_MACHINE}" in
	    9000/31? )            HP_ARCH=m68000 ;;
	    9000/[34]?? )         HP_ARCH=m68k ;;
	    9000/7?? | 9000/8?[1679] ) HP_ARCH=hppa1.1 ;;
	    9000/8?? )            HP_ARCH=hppa1.0 ;;
	esac
	HPUX_REV=`echo ${UNAME_RELEASE}|sed -e 's/[^.]*.[0B]*//'`
	echo ${HP_ARCH}-hp-hpux${HPUX_REV}
	exit 0 ;;
    3050*:HI-UX:*:*)
	sed 's/^	//' << EOF >dummy.c
	#include <unistd.h>
	int
	main ()
	{
	  long cpu = sysconf (_SC_CPU_VERSION);
	  /* The order matters, because CPU_IS_HP_MC68K erroneously returns
	     true for CPU_PA_RISC1_0.  CPU_IS_PA_RISC returns correct
	     results, however.  */
	  if (CPU_IS_PA_RISC (cpu))
	    {
	      switch (cpu)
		{
		  case CPU_PA_RISC1_0: puts ("hppa1.0-hitachi-hiuxwe2"); break;
		  case CPU_PA_RISC1_1: puts ("hppa1.1-hitachi-hiuxwe2"); break;
		  case CPU_PA_RISC2_0: puts ("hppa2.0-hitachi-hiuxwe2"); break;
		  default: puts ("hppa-hitachi-hiuxwe2"); break;
		}
	    }
	  else if (CPU_IS_HP_MC68K (cpu))
	    puts ("m68k-hitachi-hiuxwe2");
	  else puts ("unknown-hitachi-hiuxwe2");
	  exit (0);
	}
EOF
	${CC-cc} dummy.c -o dummy && ./dummy && rm dummy.c dummy && exit 0
	rm -f dummy.c dummy
	echo unknown-hitachi-hiuxwe2
	exit 0 ;;
    9000/7??:4.3bsd:*:* | 9000/8?[79]:4.3bsd:*:* )
	echo hppa1.1-hp-bsd
	exit 0 ;;
    9000/8??:4.3bsd:*:*)
	echo hppa1.0-hp-bsd
	exit 0 ;;
    hp7??:OSF1:*:* | hp8?[79]:OSF1:*:* )
	echo hppa1.1-hp-osf
	exit 0 ;;
    hp8??:OSF1:*:*)
	echo hppa1.0-hp-osf
	exit 0 ;;
    i?86:OSF1:*:*)
	if [ -x /usr/sbin/sysversion ] ; then
	    echo ${UNAME_MACHINE}-unknown-osf1mk
	else
	    echo ${UNAME_MACHINE}-unknown-osf1
	fi
	exit 0 ;;
    parisc*:Lites*:*:*)
	echo hppa1.1-hp-lites
	exit 0 ;;
    C1*:ConvexOS:*:* | convex:ConvexOS:C1*:*)
	echo c1-convex-bsd
        exit 0 ;;
    C2*:ConvexOS:*:* | convex:ConvexOS:C2*:*)
	if getsysinfo -f scalar_acc
	then echo c32-convex-bsd
	else echo c2-convex-bsd
	fi
        exit 0 ;;
    C34*:ConvexOS:*:* | convex:ConvexOS:C34*:*)
	echo c34-convex-bsd
        exit 0 ;;
    C38*:ConvexOS:*:* | convex:ConvexOS:C38*:*)
	echo c38-convex-bsd
        exit 0 ;;
    C4*:ConvexOS:*:* | convex:ConvexOS:C4*:*)
	echo c4-convex-bsd
        exit 0 ;;
    CRAY*X-MP:*:*:*)
	echo xmp-cray-unicos
        exit 0 ;;
    CRAY*Y-MP:*:*:*)
	echo ymp-cray-unicos${UNAME_RELEASE}
	exit 0 ;;
    CRAY*[A-Z]90:*:*:*)
	echo ${UNAME_MACHINE}-cray-unicos${UNAME_RELEASE} \
	| sed -e 's/CRAY.*\([A-Z]90\)/\1/' \
	      -e y/ABCDEFGHIJKLMNOPQRSTUVWXYZ/abcdefghijklmnopqrstuvwxyz/
	exit 0 ;;
    CRAY*TS:*:*:*)
	echo t90-cray-unicos${UNAME_RELEASE}
	exit 0 ;;
    CRAY-2:*:*:*)
	echo cray2-cray-unicos
        exit 0 ;;
    F300:UNIX_System_V:*:*)
        FUJITSU_SYS=`uname -p | tr [A-Z] [a-z] | sed -e 's/\///'`
        FUJITSU_REL=`echo ${UNAME_RELEASE} | sed -e 's/ /_/'`
        echo "f300-fujitsu-${FUJITSU_SYS}${FUJITSU_REL}"
        exit 0 ;;
    F301:UNIX_System_V:*:*)
       echo f301-fujitsu-uxpv`echo $UNAME_RELEASE | sed 's/ .*//'`
       exit 0 ;;
    hp3[0-9][05]:NetBSD:*:*)
	echo m68k-hp-netbsd${UNAME_RELEASE}
	exit 0 ;;
    hp3[0-9][05]:OpenBSD:*:*)
	echo m68k-hp-openbsd${UNAME_RELEASE}
	exit 0 ;;
    i?86:BSD/386:*:* | *:BSD/OS:*:*)
	echo ${UNAME_MACHINE}-pc-bsdi${UNAME_RELEASE}
	exit 0 ;;
    *:FreeBSD:*:*)
	echo ${UNAME_MACHINE}-unknown-freebsd`echo ${UNAME_RELEASE}|sed -e 's/[-(].*//'`
	exit 0 ;;
    *:NetBSD:*:*)
	echo ${UNAME_MACHINE}-unknown-netbsd`echo ${UNAME_RELEASE}|sed -e 's/[-_].*/\./'`
	exit 0 ;;
    *:OpenBSD:*:*)
	echo ${UNAME_MACHINE}-unknown-openbsd`echo ${UNAME_RELEASE}|sed -e 's/[-_].*/\./'`
	exit 0 ;;
    i*:CYGWIN*:*)
	echo i386-pc-cygwin32
	exit 0 ;;
    p*:CYGWIN*:*)
	echo powerpcle-unknown-cygwin32
	exit 0 ;;
    prep*:SunOS:5.*:*)
	echo powerpcle-unknown-solaris2`echo ${UNAME_RELEASE}|sed -e 's/[^.]*//'`
	exit 0 ;;
    *:GNU:*:*)
	echo `echo ${UNAME_MACHINE}|sed -e 's,/.*$,,'`-unknown-gnu`echo ${UNAME_RELEASE}|sed -e 's,/.*$,,'`
	exit 0 ;;
    *:Linux:*:*)
	# The BFD linker knows what the default object file format is, so
	# first see if it will tell us.
	ld_help_string=`ld --help 2>&1`
	if echo "$ld_help_string" | grep >/dev/null 2>&1 "supported emulations: elf_i.86"; then
	  echo "${UNAME_MACHINE}-pc-linux-gnu" ; exit 0
	elif echo "$ld_help_string" | grep >/dev/null 2>&1 "supported emulations: i.86linux"; then
	  echo "${UNAME_MACHINE}-pc-linux-gnuaout" ; exit 0
	elif echo "$ld_help_string" | grep >/dev/null 2>&1 "supported emulations: i.86coff"; then
	  echo "${UNAME_MACHINE}-pc-linux-gnucoff" ; exit 0
	elif echo "$ld_help_string" | grep >/dev/null 2>&1 "supported emulations: m68kelf"; then
	  echo "${UNAME_MACHINE}-unknown-linux-gnu" ; exit 0
	elif echo "$ld_help_string" | grep >/dev/null 2>&1 "supported emulations: m68klinux"; then
	  echo "${UNAME_MACHINE}-unknown-linux-gnuaout" ; exit 0
	elif echo "$ld_help_string" | grep >/dev/null 2>&1 "supported emulations: elf32ppc"; then
	  echo "powerpc-unknown-linux-gnu" ; exit 0
	elif test "${UNAME_MACHINE}" = "alpha" ; then
	  echo alpha-unknown-linux-gnu ; exit 0
	elif test "${UNAME_MACHINE}" = "sparc" ; then
	  echo sparc-unknown-linux-gnu ; exit 0
	else
	  # Either a pre-BFD a.out linker (linux-gnuoldld) or one that does not give us
	  # useful --help.  Gcc wants to distinguish between linux-gnuoldld and linux-gnuaout.
	  test ! -d /usr/lib/ldscripts/. \
	    && echo "${UNAME_MACHINE}-pc-linux-gnuoldld" && exit 0
	  # Determine whether the default compiler is a.out or elf
	  cat >dummy.c <<EOF
main(argc, argv)
int argc;
char *argv[];
{
#ifdef __ELF__
  printf ("%s-pc-linux-gnu\n", argv[1]);
#else
  printf ("%s-pc-linux-gnuaout\n", argv[1]);
#endif
  return 0;
}
EOF
	  ${CC-cc} dummy.c -o dummy 2>/dev/null && ./dummy "${UNAME_MACHINE}" && rm dummy.c dummy && exit 0
	  rm -f dummy.c dummy
	fi ;;
# ptx 4.0 does uname -s correctly, with DYNIX/ptx in there.  earlier versions
# are messed up and put the nodename in both sysname and nodename.
    i?86:DYNIX/ptx:4*:*)
	echo i386-sequent-sysv4
	exit 0 ;;
    i?86:*:4.*:* | i?86:SYSTEM_V:4.*:*)
	if grep Novell /usr/include/link.h >/dev/null 2>/dev/null; then
		echo ${UNAME_MACHINE}-univel-sysv${UNAME_RELEASE}
	else
		echo ${UNAME_MACHINE}-pc-sysv${UNAME_RELEASE}
	fi
	exit 0 ;;
    i?86:*:3.2:*)
	if test -f /usr/options/cb.name; then
		UNAME_REL=`sed -n 's/.*Version //p' </usr/options/cb.name`
		echo ${UNAME_MACHINE}-pc-isc$UNAME_REL
	elif /bin/uname -X 2>/dev/null >/dev/null ; then
		UNAME_REL=`(/bin/uname -X|egrep Release|sed -e 's/.*= //')`
		(/bin/uname -X|egrep i80486 >/dev/null) && UNAME_MACHINE=i486
		(/bin/uname -X|egrep '^Machine.*Pentium' >/dev/null) \
			&& UNAME_MACHINE=i586
		echo ${UNAME_MACHINE}-pc-sco$UNAME_REL
	else
		echo ${UNAME_MACHINE}-pc-sysv32
	fi
	exit 0 ;;
    Intel:Mach:3*:*)
	echo i386-pc-mach3
	exit 0 ;;
    paragon:*:*:*)
	echo i860-intel-osf1
	exit 0 ;;
    i860:*:4.*:*) # i860-SVR4
	if grep Stardent /usr/include/sys/uadmin.h >/dev/null 2>&1 ; then
	  echo i860-stardent-sysv${UNAME_RELEASE} # Stardent Vistra i860-SVR4
	else # Add other i860-SVR4 vendors below as they are discovered.
	  echo i860-unknown-sysv${UNAME_RELEASE}  # Unknown i860-SVR4
	fi
	exit 0 ;;
    mini*:CTIX:SYS*5:*)
	# "miniframe"
	echo m68010-convergent-sysv
	exit 0 ;;
    M68*:*:R3V[567]*:*)
	test -r /sysV68 && echo 'm68k-motorola-sysv' && exit 0 ;;
    3[34]??:*:4.0:3.0 | 3[34]??,*:*:4.0:3.0 | 4850:*:4.0:3.0)
	OS_REL=''
	test -r /etc/.relid \
	&& OS_REL=.`sed -n 's/[^ ]* [^ ]* \([0-9][0-9]\).*/\1/p' < /etc/.relid`
	/bin/uname -p 2>/dev/null | grep 86 >/dev/null \
	  && echo i486-ncr-sysv4.3${OS_REL} && exit 0
	/bin/uname -p 2>/dev/null | /bin/grep entium >/dev/null \
	  && echo i586-ncr-sysv4.3${OS_REL} && exit 0 ;;
    3[34]??:*:4.0:* | 3[34]??,*:*:4.0:*)
        /bin/uname -p 2>/dev/null | grep 86 >/dev/null \
          && echo i486-ncr-sysv4 && exit 0 ;;
    m68*:LynxOS:2.*:*)
	echo m68k-unknown-lynxos${UNAME_RELEASE}
	exit 0 ;;
    mc68030:UNIX_System_V:4.*:*)
	echo m68k-atari-sysv4
	exit 0 ;;
    i?86:LynxOS:2.*:*)
	echo i386-unknown-lynxos${UNAME_RELEASE}
	exit 0 ;;
    TSUNAMI:LynxOS:2.*:*)
	echo sparc-unknown-lynxos${UNAME_RELEASE}
	exit 0 ;;
    rs6000:LynxOS:2.*:* | PowerPC:LynxOS:2.*:*)
	echo rs6000-unknown-lynxos${UNAME_RELEASE}
	exit 0 ;;
    SM[BE]S:UNIX_SV:*:*)
	echo mips-dde-sysv${UNAME_RELEASE}
	exit 0 ;;
    RM*:SINIX-*:*:*)
	echo mips-sni-sysv4
	exit 0 ;;
    *:SINIX-*:*:*)
	if uname -p 2>/dev/null >/dev/null ; then
		UNAME_MACHINE=`(uname -p) 2>/dev/null`
		echo ${UNAME_MACHINE}-sni-sysv4
	else
		echo ns32k-sni-sysv
	fi
	exit 0 ;;
    *:UNIX_System_V:4*:FTX*)
	# From Gerald Hewes <hewes@openmarket.com>.
	# How about differentiating between stratus architectures? -djm
	echo hppa1.1-stratus-sysv4
	exit 0 ;;
    *:*:*:FTX*)
	# From seanf@swdc.stratus.com.
	echo i860-stratus-sysv4
	exit 0 ;;
    mc68*:A/UX:*:*)
	echo m68k-apple-aux${UNAME_RELEASE}
	exit 0 ;;
    R3000:*System_V*:*:* | R4000:UNIX_SYSV:*:*)
	if [ -d /usr/nec ]; then
	        echo mips-nec-sysv${UNAME_RELEASE}
	else
	        echo mips-unknown-sysv${UNAME_RELEASE}
	fi
        exit 0 ;;
    PENTIUM:CPunix:4.0*:*) # Unisys `ClearPath HMP IX 4000' SVR4/MP effort
                           # says <Richard.M.Bartel@ccMail.Census.GOV>
        echo i586-unisys-sysv4
        exit 0 ;;
esac

#echo '(No uname command or uname output not recognized.)' 1>&2
#echo "${UNAME_MACHINE}:${UNAME_SYSTEM}:${UNAME_RELEASE}:${UNAME_VERSION}" 1>&2

cat >dummy.c <<EOF
#ifdef _SEQUENT_
# include <sys/types.h>
# include <sys/utsname.h>
#endif
main ()
{
#if defined (sony)
#if defined (MIPSEB)
  /* BFD wants "bsd" instead of "newsos".  Perhaps BFD should be changed,
     I don't know....  */
  printf ("mips-sony-bsd\n"); exit (0);
#else
#include <sys/param.h>
  printf ("m68k-sony-newsos%s\n",
#ifdef NEWSOS4
          "4"
#else
	  ""
#endif
         ); exit (0);
#endif
#endif

#if defined (__arm) && defined (__acorn) && defined (__unix)
  printf ("arm-acorn-riscix"); exit (0);
#endif

#if defined (hp300) && !defined (hpux)
  printf ("m68k-hp-bsd\n"); exit (0);
#endif

#if defined (NeXT)
#if !defined (__ARCHITECTURE__)
#define __ARCHITECTURE__ "m68k"
#endif
  int version;
  version=`(hostinfo | sed -n 's/.*NeXT Mach \([0-9]*\).*/\1/p') 2>/dev/null`;
  printf ("%s-next-nextstep%d\n", __ARCHITECTURE__, version);
  exit (0);
#endif

#if defined (MULTIMAX) || defined (n16)
#if defined (UMAXV)
  printf ("ns32k-encore-sysv\n"); exit (0);
#else
#if defined (CMU)
  printf ("ns32k-encore-mach\n"); exit (0);
#else
  printf ("ns32k-encore-bsd\n"); exit (0);
#endif
#endif
#endif

#if defined (__386BSD__)
  printf ("i386-pc-bsd\n"); exit (0);
#endif

#if defined (sequent)
#if defined (i386)
  printf ("i386-sequent-dynix\n"); exit (0);
#endif
#if defined (ns32000)
  printf ("ns32k-sequent-dynix\n"); exit (0);
#endif
#endif

#if defined (_SEQUENT_)
    struct utsname un;

    uname(&un);

    if (strncmp(un.version, "V2", 2) == 0) {
	printf ("i386-sequent-ptx2\n"); exit (0);
    }
    if (strncmp(un.version, "V1", 2) == 0) { /* XXX is V1 correct? */
	printf ("i386-sequent-ptx1\n"); exit (0);
    }
    printf ("i386-sequent-ptx\n"); exit (0);

#endif

#if defined (vax)
#if !defined (ultrix)
  printf ("vax-dec-bsd\n"); exit (0);
#else
  printf ("vax-dec-ultrix\n"); exit (0);
#endif
#endif

#if defined (alliant) && defined (i860)
  printf ("i860-alliant-bsd\n"); exit (0);
#endif

  exit (1);
}
EOF

${CC-cc} dummy.c -o dummy 2>/dev/null && ./dummy && rm dummy.c dummy && exit 0
rm -f dummy.c dummy

# Apollos put the system type in the environment.

test -d /usr/apollo && { echo ${ISP}-apollo-${SYSTYPE}; exit 0; }

# Convex versions that predate uname can use getsysinfo(1)

if [ -x /usr/convex/getsysinfo ]
then
    case `getsysinfo -f cpu_type` in
    c1*)
	echo c1-convex-bsd
	exit 0 ;;
    c2*)
	if getsysinfo -f scalar_acc
	then echo c32-convex-bsd
	else echo c2-convex-bsd
	fi
	exit 0 ;;
    c34*)
	echo c34-convex-bsd
	exit 0 ;;
    c38*)
	echo c38-convex-bsd
	exit 0 ;;
    c4*)
	echo c4-convex-bsd
	exit 0 ;;
    esac
fi

#echo '(Unable to guess system type)' 1>&2

exit 1
