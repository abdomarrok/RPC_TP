/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TP1_H_RPCGEN
#define _TP1_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct threePar {
	int p1;
	int p2;
	int p3;
};
typedef struct threePar threePar;

struct twoPar {
	int p1;
	int p2;
};
typedef struct twoPar twoPar;

#define Prog 1
#define Prog_v 1

#if defined(__STDC__) || defined(__cplusplus)
#define surface 1
extern  int * surface_1(twoPar *, CLIENT *);
extern  int * surface_1_svc(twoPar *, struct svc_req *);
#define mult 2
extern  int * mult_1(threePar *, CLIENT *);
extern  int * mult_1_svc(threePar *, struct svc_req *);
extern int prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define surface 1
extern  int * surface_1();
extern  int * surface_1_svc();
#define mult 2
extern  int * mult_1();
extern  int * mult_1_svc();
extern int prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_threePar (XDR *, threePar*);
extern  bool_t xdr_twoPar (XDR *, twoPar*);

#else /* K&R C */
extern bool_t xdr_threePar ();
extern bool_t xdr_twoPar ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TP1_H_RPCGEN */
