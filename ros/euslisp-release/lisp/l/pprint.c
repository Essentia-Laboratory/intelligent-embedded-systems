/* ./pprint.c :  entry=pprint */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "pprint.h"
#pragma init (register_pprint)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___pprint();
extern pointer build_quote_vector();
static int register_pprint()
  { add_module_initializer("___pprint", ___pprint);}

static pointer F20108spaces();
static pointer F20112px();
static pointer F20116pp_method();
static pointer F20119pprint();
static pointer F20122pprint_file();
static pointer F20125pprint1();
static pointer F20128pparg();
static pointer F20130pprint_array();
static pointer F20134tprint();

/*spaces*/
static pointer F20108spaces(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT20165;}
	local[0]= T;
ENT20165:
ENT20164:
	if (n>2) maerror();
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0];
WHL20202:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX20203;
	local[3]= fqv[0];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)PRINC(ctx,2,local+3); /*princ*/
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL20202;
WHX20203:
	local[3]= NIL;
BLK20204:
	w = NIL;
	local[0]= w;
BLK20162:
	ctx->vsp=local; return(local[0]);}

/*px*/
static pointer F20112px(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT20232;}
	local[0]= T;
ENT20232:
ENT20231:
	if (n>2) maerror();
	local[1]= local[0];
	local[2]= fqv[1];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[0]= w;
BLK20229:
	ctx->vsp=local; return(local[0]);}

/*pf*/
static pointer F20252(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT20256;}
	local[0]= loadglobal(fqv[2]);
ENT20256:
ENT20255:
	if (n>2) maerror();
	local[1]= fqv[3];
	local[2]= fqv[4];
	local[3]= fqv[5];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[6];
	local[4]= fqv[7];
	local[5]= fqv[5];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[5];
	local[5]= fqv[8];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK20253:
	ctx->vsp=local; return(local[0]);}

/*pp-method*/
static pointer F20116pp_method(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT20334;}
	local[0]= loadglobal(fqv[2]);
ENT20334:
ENT20333:
	if (n>3) maerror();
	local[1]= argv[1];
	local[2]= *(ovafptr(argv[0],fqv[9]));
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,2,local+1,&ftab[0],fqv[10]); /*assoc*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F20119pprint(ctx,2,local+1); /*pprint*/
	local[0]= w;
BLK20331:
	ctx->vsp=local; return(local[0]);}

/*pprint*/
static pointer F20119pprint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT20367;}
	local[0]= loadglobal(fqv[2]);
ENT20367:
	if (n>=3) { local[1]=(argv[2]); goto ENT20366;}
	local[1]= makeint((eusinteger_t)0L);
ENT20366:
	if (n>=4) { local[2]=(argv[3]); goto ENT20365;}
	local[2]= makeint((eusinteger_t)75L);
ENT20365:
ENT20364:
	if (n>4) maerror();
	local[3]= argv[0];
	local[4]= local[0];
	local[5]= local[1];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F20125pprint1(ctx,4,local+3); /*pprint1*/
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)TERPRI(ctx,1,local+3); /*terpri*/
	local[0]= w;
BLK20362:
	ctx->vsp=local; return(local[0]);}

/*pprint-file*/
static pointer F20122pprint_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= fqv[11];
	local[2]= fqv[12];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,3,local+0,&ftab[1],fqv[13]); /*open*/
	local[0]= w;
	ctx->vsp=local+1;
	w = makeclosure(codevec,quotevec,UWP20433,env,argv,local);
	local[1]=(pointer)(ctx->protfp); local[2]=w;
	ctx->protfp=(struct protectframe *)(local+1);
	local[3]= argv[0];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)F20119pprint(ctx,2,local+3); /*pprint*/
	ctx->vsp=local+3;
	UWP20433(ctx,0,local+3,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK20402:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP20433(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[0];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*pprint1*/
static pointer F20125pprint1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	w = argv[0];
	if (issymbol(w)) goto OR20478;
	w = argv[0];
	if (isnum(w)) goto OR20478;
	w = argv[0];
	if (isstring(w)) goto OR20478;
	local[0]= argv[0];
	local[1]= argv[3];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)PRNTSIZE(ctx,2,local+0); /*print-size*/
	local[0]= w;
	local[1]= argv[3];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LESSP(ctx,2,local+0); /*<*/
	if (w!=NIL) goto OR20478;
	goto CON20477;
OR20478:
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PRIN1(ctx,2,local+0); /*prin1*/
	local[0]= w;
	goto CON20475;
CON20477:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LISTP(ctx,1,local+0); /*listp*/
	if (w==NIL) goto CON20511;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	if (fqv[5]!=local[0]) goto CON20511;
	local[0]= fqv[14];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PRINC(ctx,2,local+0); /*princ*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	local[0]= argv[0];
	local[1]= argv[1];
	local[2]= argv[2];
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)F20125pprint1(ctx,4,local+0); /*pprint1*/
	local[0]= w;
	goto CON20475;
CON20511:
	local[0]= argv[0];
	local[1]= loadglobal(fqv[15]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	if (w==NIL) goto CON20551;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[2])(ctx,1,local+0,&ftab[2],fqv[16]); /*array-rank*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)2L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	if (w==NIL) goto CON20551;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[3])(ctx,1,local+0,&ftab[3],fqv[17]); /*array-total-size*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)100L);
	ctx->vsp=local+2;
	w=(pointer)LESSP(ctx,2,local+0); /*<*/
	if (w==NIL) goto CON20551;
	local[0]= argv[0];
	local[1]= argv[1];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)F20130pprint_array(ctx,3,local+0); /*pprint-array*/
	local[0]= w;
	goto CON20475;
CON20551:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)VECTORP(ctx,1,local+0); /*vectorp*/
	if (w==NIL) goto CON20578;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[4])(ctx,1,local+0,&ftab[4],fqv[18]); /*float-vector-p*/
	if (w==NIL) goto CON20588;
	local[0]= fqv[19];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PRINC(ctx,2,local+0); /*princ*/
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)3L);
	ctx->vsp=local+2;
	w=(pointer)PLUS(ctx,2,local+0); /*+*/
	argv[2] = w;
	local[0]= argv[2];
	goto CON20586;
CON20588:
	local[0]= fqv[20];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PRINC(ctx,2,local+0); /*princ*/
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)2L);
	ctx->vsp=local+2;
	w=(pointer)PLUS(ctx,2,local+0); /*+*/
	argv[2] = w;
	local[0]= argv[2];
	goto CON20586;
CON20611:
	local[0]= NIL;
CON20586:
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
WHL20654:
	local[2]= local[0];
	w = local[1];
	if ((eusinteger_t)local[2] >= (eusinteger_t)w) goto WHX20655;
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)AREF(ctx,2,local+2); /*aref*/
	local[2]= w;
	local[3]= argv[1];
	local[4]= argv[2];
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)F20125pprint1(ctx,4,local+2); /*pprint1*/
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)TERPRI(ctx,1,local+2); /*terpri*/
	local[2]= argv[2];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)F20108spaces(ctx,2,local+2); /*spaces*/
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	goto WHL20654;
WHX20655:
	local[2]= NIL;
BLK20656:
	local[2]= fqv[21];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)PRINC(ctx,2,local+2); /*princ*/
	local[0]= w;
	goto CON20475;
CON20578:
	w = argv[0];
	if (!!iscons(w)) goto CON20695;
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PRIN1(ctx,2,local+0); /*prin1*/
	local[0]= w;
	goto CON20475;
CON20695:
	local[0]= fqv[22];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PRINC(ctx,2,local+0); /*princ*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= argv[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)LISTP(ctx,1,local+2); /*listp*/
	if (w==NIL) goto IF20719;
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[2]= w;
	goto IF20720;
IF20719:
	local[2]= argv[2];
IF20720:
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)F20125pprint1(ctx,4,local+0); /*pprint1*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= local[0];
	w = fqv[23];
	if (memq(local[1],w)==NIL) goto IF20755;
	local[1]= makeint((eusinteger_t)1L);
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)F20108spaces(ctx,2,local+1); /*spaces*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)PRINC(ctx,2,local+1); /*princ*/
	local[1]= makeint((eusinteger_t)1L);
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)F20108spaces(ctx,2,local+1); /*spaces*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)3L);
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	argv[2] = w;
	local[2]= argv[2];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)PRNTSIZE(ctx,1,local+3); /*print-size*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	local[3]= argv[3];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)F20128pparg(ctx,4,local+1); /*pparg*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	local[1]= argv[0];
	goto IF20756;
IF20755:
	local[1]= local[0];
	w = fqv[24];
	if (memq(local[1],w)==NIL) goto IF20837;
	local[1]= makeint((eusinteger_t)1L);
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)F20108spaces(ctx,2,local+1); /*spaces*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)3L);
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	argv[2] = w;
	local[2]= argv[2];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)PRNTSIZE(ctx,1,local+3); /*print-size*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	local[3]= argv[3];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)F20128pparg(ctx,4,local+1); /*pparg*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	local[1]= argv[0];
	goto IF20838;
IF20837:
	local[1]= local[0];
	w = fqv[25];
	if (memq(local[1],w)==NIL) goto IF20898;
WHL20912:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	if (argv[0]==NIL) goto WHX20913;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.cdr==NIL) goto WHX20913;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)TERPRI(ctx,1,local+1); /*terpri*/
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(pointer)PLUS(ctx,2,local+1); /*+*/
	local[1]= w;
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)F20108spaces(ctx,2,local+1); /*spaces*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)PRINC(ctx,2,local+1); /*princ*/
	local[1]= makeint((eusinteger_t)1L);
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)F20108spaces(ctx,2,local+1); /*spaces*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= argv[1];
	local[3]= argv[2];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)PRNTSIZE(ctx,1,local+4); /*print-size*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)4L);
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,3,local+3); /*+*/
	local[3]= w;
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)F20125pprint1(ctx,4,local+1); /*pprint1*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	goto WHL20912;
WHX20913:
	local[1]= NIL;
BLK20914:
	argv[0] = fqv[26];
	local[1]= argv[0];
	goto IF20899;
IF20898:
	if (T==NIL) goto IF21005;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!issymbol(w)) goto IF21010;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)FBOUNDP(ctx,1,local+1); /*fboundp*/
	if (w==NIL) goto IF21010;
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(pointer)PLUS(ctx,2,local+1); /*+*/
	argv[2] = w;
	local[1]= argv[2];
	goto IF21011;
IF21010:
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)ADD1(ctx,1,local+1); /*1+*/
	argv[2] = w;
	local[1]= argv[2];
IF21011:
	goto IF21006;
IF21005:
	local[1]= NIL;
IF21006:
IF20899:
IF20838:
IF20756:
	w = local[1];
WHL21051:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LISTP(ctx,1,local+0); /*listp*/
	if (w==NIL) goto WHX21052;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	if (argv[0]==NIL) goto WHX21052;
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)TERPRI(ctx,1,local+0); /*terpri*/
	local[0]= argv[2];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)F20108spaces(ctx,2,local+0); /*spaces*/
	w = argv[0];
	if (!!iscons(w)) goto CON21085;
	local[0]= fqv[27];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PRINC(ctx,2,local+0); /*princ*/
	local[0]= argv[0];
	local[1]= argv[1];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)F20125pprint1(ctx,4,local+0); /*pprint1*/
	local[0]= w;
	goto CON21083;
CON21085:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= argv[1];
	local[2]= argv[2];
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)F20125pprint1(ctx,4,local+0); /*pprint1*/
	local[0]= w;
	goto CON21083;
CON21105:
	local[0]= NIL;
CON21083:
	goto WHL21051;
WHX21052:
	local[0]= NIL;
BLK21053:
	local[0]= fqv[28];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PRINC(ctx,2,local+0); /*princ*/
	local[0]= w;
	goto CON20475;
CON20704:
	local[0]= NIL;
CON20475:
	w = local[0];
	local[0]= w;
BLK20459:
	ctx->vsp=local; return(local[0]);}

/*pparg*/
static pointer F20128pparg(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	w = argv[0];
	if (!iscons(w)) goto OR21144;
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)PRNTSIZE(ctx,2,local+0); /*print-size*/
	local[0]= w;
	local[1]= argv[2];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LESSP(ctx,2,local+0); /*<*/
	if (w!=NIL) goto OR21144;
	goto CON21143;
OR21144:
	local[0]= argv[0];
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(pointer)PRIN1(ctx,2,local+0); /*prin1*/
	local[0]= w;
	goto CON21141;
CON21143:
	local[0]= NIL;
	local[1]= fqv[29];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)PRINC(ctx,2,local+1); /*princ*/
	local[0] = argv[1];
WHL21196:
	if (argv[0]==NIL) goto WHX21197;
	local[1]= local[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)PRNTSIZE(ctx,1,local+2); /*print-size*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,3,local+1); /*+*/
	local[0] = w;
	local[1]= local[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)LESSP(ctx,2,local+1); /*<*/
	if (w==NIL) goto CON21206;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)PRIN1(ctx,2,local+1); /*prin1*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	local[1]= argv[0];
	if (local[1]==NIL) goto AND21238;
	local[1]= fqv[30];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)PRINC(ctx,2,local+1); /*princ*/
	local[1]= w;
AND21238:
	goto CON21204;
CON21206:
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(pointer)TERPRI(ctx,1,local+1); /*terpri*/
	local[1]= argv[1];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)F20108spaces(ctx,2,local+1); /*spaces*/
	local[0] = argv[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= argv[3];
	local[3]= local[0];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F20125pprint1(ctx,4,local+1); /*pprint1*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	local[1]= argv[0];
	if (local[1]==NIL) goto AND21286;
	local[1]= fqv[31];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)PRINC(ctx,2,local+1); /*princ*/
	local[1]= w;
AND21286:
	goto CON21204;
CON21255:
	local[1]= NIL;
CON21204:
	goto WHL21196;
WHX21197:
	local[1]= NIL;
BLK21198:
	local[1]= fqv[32];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)PRINC(ctx,2,local+1); /*princ*/
	local[0]= w;
	goto CON21141;
CON21171:
	local[0]= NIL;
CON21141:
	w = local[0];
	local[0]= w;
BLK21125:
	ctx->vsp=local; return(local[0]);}

/*pprint-array*/
static pointer F20130pprint_array(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[33];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[34];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[10]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(*ftab[5])(ctx,2,local+1,&ftab[5],fqv[35]); /*array-dimension*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(*ftab[5])(ctx,2,local+2,&ftab[5],fqv[35]); /*array-dimension*/
	local[2]= w;
	if (local[0]!=NIL) goto IF21361;
	local[0] = fqv[36];
	local[3]= local[0];
	goto IF21362;
IF21361:
	local[3]= NIL;
IF21362:
	local[3]= argv[1];
	local[4]= fqv[37];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,3,local+3); /*format*/
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[1];
WHL21404:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX21405;
	local[5]= argv[1];
	local[6]= fqv[38];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,2,local+5); /*format*/
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[2];
WHL21440:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX21441;
	local[7]= argv[1];
	local[8]= fqv[39];
	local[9]= argv[0];
	local[10]= local[3];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,3,local+7); /*format*/
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[7]= w;
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)LESSP(ctx,2,local+7); /*<*/
	if (w==NIL) goto CON21460;
	local[7]= argv[1];
	local[8]= fqv[40];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,2,local+7); /*format*/
	local[7]= w;
	goto CON21458;
CON21460:
	local[7]= argv[1];
	local[8]= fqv[41];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,2,local+7); /*format*/
	local[7]= w;
	goto CON21458;
CON21471:
	local[7]= NIL;
CON21458:
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL21440;
WHX21441:
	local[7]= NIL;
BLK21442:
	w = NIL;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(*ftab[5])(ctx,2,local+6,&ftab[5],fqv[35]); /*array-dimension*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LESSP(ctx,2,local+5); /*<*/
	if (w==NIL) goto IF21492;
	local[5]= argv[1];
	local[6]= fqv[42];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,2,local+5); /*format*/
	local[5]= argv[2];
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)F20108spaces(ctx,2,local+5); /*spaces*/
	local[5]= w;
	goto IF21493;
IF21492:
	local[5]= NIL;
IF21493:
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL21404;
WHX21405:
	local[5]= NIL;
BLK21406:
	w = NIL;
	local[3]= argv[1];
	local[4]= fqv[43];
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,2,local+3); /*format*/
	local[0]= w;
BLK21310:
	ctx->vsp=local; return(local[0]);}

/*tprint*/
static pointer F20134tprint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT21544;}
	local[0]= makeint((eusinteger_t)0L);
ENT21544:
	if (n>=4) { local[1]=(argv[3]); goto ENT21543;}
	local[1]= makeint((eusinteger_t)79L);
ENT21543:
	if (n>=5) { local[2]=(argv[4]); goto ENT21542;}
	local[2]= makeint((eusinteger_t)0L);
ENT21542:
ENT21541:
	if (n>5) maerror();
	local[3]= local[2];
	local[4]= NIL;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[1];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[0];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)F20108spaces(ctx,1,local+8); /*spaces*/
WHL21606:
	if (argv[0]==NIL) goto WHX21607;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.car;
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)PRNTSIZE(ctx,1,local+8); /*print-size*/
	local[7] = w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	local[8]= argv[1];
	local[9]= local[7];
	local[10]= argv[1];
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[5] = w;
	local[8]= local[5];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)GREATERP(ctx,2,local+8); /*>*/
	if (w==NIL) goto CON21664;
	ctx->vsp=local+8;
	w=(pointer)TERPRI(ctx,0,local+8); /*terpri*/
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)F20108spaces(ctx,1,local+8); /*spaces*/
	local[3] = local[0];
	local[8]= local[1];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[6] = w;
	local[8]= local[6];
	goto CON21662;
CON21664:
	local[8]= NIL;
CON21662:
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)PRINC(ctx,1,local+8); /*princ*/
	local[8]= local[5];
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)F20108spaces(ctx,1,local+8); /*spaces*/
	local[8]= local[6];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[6] = w;
	local[8]= local[3];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[3] = w;
	goto WHL21606;
WHX21607:
	local[8]= NIL;
BLK21608:
	w = local[8];
	local[0]= w;
BLK21539:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___pprint(ctx,n,argv,env)
register context *ctx; int n; pointer *argv; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv;
  register int i;
  numunion nu;
  module=argv[0];
  quotevec=build_quote_vector(ctx,QUOTE_STRINGS_SIZE, quote_strings);
  module->c.code.quotevec=quotevec;
  codevec=module->c.code.codevec;
  fqv=qv=quotevec->c.vec.v;
  init_ftab();
	local[0]= fqv[44];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF21732;
	local[0]= fqv[45];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[46],w);
	goto IF21733;
IF21732:
	local[0]= fqv[47];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF21733:
	local[0]= fqv[48];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[49],module,F20108spaces,fqv[50]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[51],module,F20112px,fqv[52]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[53],module,F20252,fqv[54]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[55],module,F20116pp_method,fqv[56]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[6],module,F20119pprint,fqv[57]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[58],module,F20122pprint_file,fqv[59]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[60],module,F20125pprint1,fqv[61]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[62],module,F20128pparg,fqv[63]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[64],module,F20130pprint_array,fqv[65]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[66],module,F20134tprint,fqv[67]);
	local[0]= fqv[68];
	local[1]= fqv[69];
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,2,local+0,&ftab[6],fqv[70]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<7; i++) ftab[i]=fcallx;
}
