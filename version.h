/* $OpenBSD: version.h,v 1.75 2015/08/21 03:45:26 djm Exp $ */

#ifdef GSI
#define GSI_VERSION	" GSI"
#else
#define GSI_VERSION	""
#endif

#ifdef KRB5
#define KRB5_VERSION	" KRB5"
#else
#define KRB5_VERSION	""
#endif

#ifdef MECHGLUE
#define MGLUE_VERSION	" MECHGLUE"
#else
#define MGLUE_VERSION	""
#endif

#ifdef NERSC_MOD
#define SSH_AUDITING	"NMOD_3.12"
#else
#define SSH_AUDITING	""
#endif /* NERSC_MOD */

#define NCSA_VERSION	" GSI_GSSAPI_20150813"
#define SSH_HPN			"-hpn14"

#define SSH_VERSION	"OpenSSH_7.1"

#define SSH_PORTABLE	"p1"

#define SSH_RELEASE	SSH_VERSION SSH_PORTABLE SSH_AUDITING SSH_HPN \
            NCSA_VERSION GSI_VERSION KRB5_VERSION MGLUE_VERSION
