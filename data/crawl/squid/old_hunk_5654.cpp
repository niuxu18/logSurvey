    i*86:XTS-300:*:STOP)
	echo ${UNAME_MACHINE}-unknown-stop
	exit 0 ;;
esac

#echo '(No uname command or uname output not recognized.)' 1>&2
#echo "${UNAME_MACHINE}:${UNAME_SYSTEM}:${UNAME_RELEASE}:${UNAME_VERSION}" 1>&2

cat >$dummy.c <<EOF
#ifdef _SEQUENT_
# include <sys/types.h>
