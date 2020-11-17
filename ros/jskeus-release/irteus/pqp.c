/* ./pqp.c :  entry=pqp */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "pqp.h"
#pragma init (register_pqp)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___pqp();
extern pointer build_quote_vector();
static int register_pqp()
  { add_module_initializer("___pqp", ___pqp);}

static pointer F578pqp_collision_check();
static pointer F579pqp_collision_distance();
static pointer F580pqp_collision_check_objects();

/*:make-pqpmodel*/
static pointer M581cascaded_coords_make_pqpmodel(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[0], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY583;
	local[0] = makeint((eusinteger_t)0L);
KEY583:
	if (n & (1<<1)) goto KEY584;
	local[2]= argv[0];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[1] = w;
KEY584:
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,0,local+2,&ftab[0],fqv[2]); /*pqpmakemodel*/
	local[2]= w;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= argv[0];
	local[9]= local[2];
	local[10]= fqv[3];
	ctx->vsp=local+11;
	w=(pointer)PUTPROP(ctx,3,local+8); /*putprop*/
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(*ftab[1])(ctx,1,local+8,&ftab[1],fqv[4]); /*pqpbeginmodel*/
	local[8]= NIL;
	local[9]= local[1];
WHL586:
	if (local[9]==NIL) goto WHX587;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9] = (w)->c.cons.cdr;
	w = local[10];
	local[8] = w;
	local[10]= NIL;
	local[11]= local[8];
	ctx->vsp=local+12;
	w=(*ftab[2])(ctx,1,local+11,&ftab[2],fqv[5]); /*face-to-triangle-aux*/
	local[11]= w;
WHL591:
	if (local[11]==NIL) goto WHX592;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11] = (w)->c.cons.cdr;
	w = local[12];
	local[10] = w;
	local[12]= local[10];
	local[13]= fqv[6];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[3] = w;
	local[12]= argv[0];
	local[13]= fqv[7];
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[4] = w;
	local[12]= argv[0];
	local[13]= fqv[7];
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[5] = w;
	local[12]= argv[0];
	local[13]= fqv[7];
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[6] = w;
	local[12]= local[0];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)NUMEQUAL(ctx,2,local+12); /*=*/
	if (w!=NIL) goto IF595;
	local[12]= local[4];
	local[13]= local[0];
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,1,local+14,&ftab[3],fqv[8]); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)VPLUS(ctx,2,local+12); /*v+*/
	local[4] = w;
	local[12]= local[5];
	local[13]= local[0];
	local[14]= local[5];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,1,local+14,&ftab[3],fqv[8]); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)VPLUS(ctx,2,local+12); /*v+*/
	local[5] = w;
	local[12]= local[6];
	local[13]= local[0];
	local[14]= local[6];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,1,local+14,&ftab[3],fqv[8]); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)VPLUS(ctx,2,local+12); /*v+*/
	local[6] = w;
	local[12]= local[6];
	goto IF596;
IF595:
	local[12]= NIL;
IF596:
	local[12]= local[2];
	local[13]= local[4];
	local[14]= local[5];
	local[15]= local[6];
	local[16]= local[7];
	ctx->vsp=local+17;
	w=(*ftab[4])(ctx,5,local+12,&ftab[4],fqv[9]); /*pqpaddtri*/
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[7] = w;
	goto WHL591;
WHX592:
	local[12]= NIL;
BLK593:
	w = NIL;
	goto WHL586;
WHX587:
	local[10]= NIL;
BLK588:
	w = NIL;
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(*ftab[5])(ctx,1,local+8,&ftab[5],fqv[10]); /*pqpendmodel*/
	w = local[2];
	local[0]= w;
BLK582:
	ctx->vsp=local; return(local[0]);}

/*pqp-collision-check*/
static pointer F578pqp_collision_check(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT599;}
	local[0]= makeint((eusinteger_t)2L);
ENT599:
ENT598:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[11], &argv[3], n-3, local+1, 0);
	if (n & (1<<0)) goto KEY600;
	local[1] = makeint((eusinteger_t)0L);
KEY600:
	if (n & (1<<1)) goto KEY601;
	local[2] = NIL;
KEY601:
	local[3]= argv[0];
	local[4]= fqv[3];
	ctx->vsp=local+5;
	w=(pointer)GETPROP(ctx,2,local+3); /*get*/
	local[3]= w;
	local[4]= argv[1];
	local[5]= fqv[3];
	ctx->vsp=local+6;
	w=(pointer)GETPROP(ctx,2,local+4); /*get*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[12];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[13];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= argv[1];
	local[8]= fqv[12];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	local[8]= argv[1];
	local[9]= fqv[13];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	if (local[2]!=NIL) goto IF602;
	local[2] = local[1];
	local[9]= local[2];
	goto IF603;
IF602:
	local[9]= NIL;
IF603:
	if (local[3]!=NIL) goto IF604;
	local[9]= argv[0];
	local[10]= fqv[14];
	local[11]= fqv[15];
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	local[3] = w;
	local[9]= local[3];
	goto IF605;
IF604:
	local[9]= NIL;
IF605:
	if (local[4]!=NIL) goto IF606;
	local[9]= argv[1];
	local[10]= fqv[14];
	local[11]= fqv[15];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	local[4] = w;
	local[9]= local[4];
	goto IF607;
IF606:
	local[9]= NIL;
IF607:
	local[9]= local[5];
	local[10]= local[6];
	local[11]= local[3];
	local[12]= local[7];
	local[13]= local[8];
	local[14]= local[4];
	local[15]= local[0];
	ctx->vsp=local+16;
	w=(*ftab[6])(ctx,7,local+9,&ftab[6],fqv[16]); /*pqpcollide*/
	local[0]= w;
BLK597:
	ctx->vsp=local; return(local[0]);}

/*pqp-collision-distance*/
static pointer F579pqp_collision_distance(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[17], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY609;
	local[0] = makeint((eusinteger_t)0L);
KEY609:
	if (n & (1<<1)) goto KEY610;
	local[1] = NIL;
KEY610:
	if (n & (1<<2)) goto KEY611;
	local[2] = makeint((eusinteger_t)2L);
KEY611:
	local[3]= argv[0];
	local[4]= fqv[3];
	ctx->vsp=local+5;
	w=(pointer)GETPROP(ctx,2,local+3); /*get*/
	local[3]= w;
	local[4]= argv[1];
	local[5]= fqv[3];
	ctx->vsp=local+6;
	w=(pointer)GETPROP(ctx,2,local+4); /*get*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[12];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[13];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= argv[1];
	local[8]= fqv[12];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	local[8]= argv[1];
	local[9]= fqv[13];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,3,local+9); /*float-vector*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)MKFLTVEC(ctx,3,local+10); /*float-vector*/
	local[10]= w;
	local[11]= NIL;
	if (local[1]!=NIL) goto IF612;
	local[1] = local[0];
	local[12]= local[1];
	goto IF613;
IF612:
	local[12]= NIL;
IF613:
	if (local[3]!=NIL) goto IF614;
	local[12]= argv[0];
	local[13]= fqv[14];
	local[14]= fqv[15];
	local[15]= local[0];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,4,local+12); /*send*/
	local[3] = w;
	local[12]= local[3];
	goto IF615;
IF614:
	local[12]= NIL;
IF615:
	if (local[4]!=NIL) goto IF616;
	local[12]= argv[1];
	local[13]= fqv[14];
	local[14]= fqv[15];
	local[15]= local[1];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,4,local+12); /*send*/
	local[4] = w;
	local[12]= local[4];
	goto IF617;
IF616:
	local[12]= NIL;
IF617:
	local[12]= local[5];
	local[13]= local[6];
	local[14]= local[3];
	local[15]= local[7];
	local[16]= local[8];
	local[17]= local[4];
	local[18]= local[9];
	local[19]= local[10];
	local[20]= local[2];
	ctx->vsp=local+21;
	w=(*ftab[7])(ctx,9,local+12,&ftab[7],fqv[18]); /*pqpdistance*/
	local[11] = w;
	local[12]= local[11];
	local[13]= local[9];
	local[14]= local[10];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,3,local+12); /*list*/
	local[0]= w;
BLK608:
	ctx->vsp=local; return(local[0]);}

/*pqp-collision-check-objects*/
static pointer F580pqp_collision_check_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[19], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY619;
	local[0] = makeflt(1.9999999999999995559108e-01);
KEY619:
	local[1]= NIL;
	local[2]= argv[0];
WHL621:
	if (local[2]==NIL) goto WHX622;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= NIL;
	local[4]= argv[1];
WHL626:
	if (local[4]==NIL) goto WHX627;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[1];
	local[6]= local[3];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= fqv[15];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)F578pqp_collision_check(ctx,5,local+5); /*pqp-collision-check*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)GREATERP(ctx,2,local+5); /*>*/
	if (w==NIL) goto IF630;
	w = T;
	ctx->vsp=local+5;
	local[0]=w;
	goto BLK618;
	goto IF631;
IF630:
	local[5]= NIL;
IF631:
	goto WHL626;
WHX627:
	local[5]= NIL;
BLK628:
	w = NIL;
	goto WHL621;
WHX622:
	local[3]= NIL;
BLK623:
	w = NIL;
	w = NIL;
	local[0]= w;
BLK618:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___pqp(ctx,n,argv,env)
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
	local[0]= fqv[20];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF632;
	local[0]= fqv[21];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[22],w);
	goto IF633;
IF632:
	local[0]= fqv[23];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF633:
	local[0]= fqv[24];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[25];
	local[1]= fqv[26];
	local[2]= makeint((eusinteger_t)1L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[27];
	local[1]= fqv[26];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M581cascaded_coords_make_pqpmodel,fqv[14],fqv[28],fqv[29]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[30],module,F578pqp_collision_check,fqv[31]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[32],module,F579pqp_collision_distance,fqv[33]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[34],module,F580pqp_collision_check_objects,fqv[35]);
	local[0]= fqv[36];
	local[1]= fqv[37];
	ctx->vsp=local+2;
	w=(*ftab[8])(ctx,2,local+0,&ftab[8],fqv[38]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<9; i++) ftab[i]=fcallx;
}
