#else
/* no gcc, no debugging. varargs macros are a gcc extension */
#define SEND2(X,Y) debug("sending '" X "' to squid\n",Y); printf(X "\n",Y);
#define SEND4(X,Y,Z,W) debug("sending '" X "' to squid\n",Y,Z); printf(X "\n",Y,Z);
#endif

const char *authenticate_ntlm_domain = "WORKGROUP";