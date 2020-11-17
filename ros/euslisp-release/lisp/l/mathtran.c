/* ./mathtran.c :  entry=mathtran */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "mathtran.h"
#pragma init (register_mathtran)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___mathtran();
extern pointer build_quote_vector();
static int register_mathtran()
  { add_module_initializer("___mathtran", ___mathtran);}

static pointer F68000expression();
static pointer F68002infix2prefix();
static pointer F68004read_aref();

/*expression*/
static pointer F68000expression(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT68028;}
	local[0]= NIL;
ENT68028:
ENT68027:
	if (n>2) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,FLET68050,env,argv,local);
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,FLET68052,env,argv,local);
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,FLET68054,env,argv,local);
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,FLET68056,env,argv,local);
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,FLET68058,env,argv,local);
	ctx->vsp=local+9;
	local[9]= makeclosure(codevec,quotevec,FLET68060,env,argv,local);
	ctx->vsp=local+10;
	local[10]= makeclosure(codevec,quotevec,FLET68062,env,argv,local);
	ctx->vsp=local+11;
	local[11]= makeclosure(codevec,quotevec,FLET68064,env,argv,local);
	local[12]= argv[0];
	w = local[10];
	ctx->vsp=local+13;
	w=FLET68062(ctx,1,local+12,w);
	local[12]= w;
	w=local[12];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[12];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.car;
	w = local[2];
	if (argv[0]==NIL) goto IF68110;
	local[12]= fqv[0];
	ctx->vsp=local+13;
	w=(pointer)SIGERROR(ctx,1,local+12); /*error*/
	local[12]= w;
	goto IF68111;
IF68110:
	local[12]= NIL;
IF68111:
	local[12]= local[2];
	w = local[11];
	ctx->vsp=local+13;
	w=FLET68064(ctx,1,local+12,w);
	local[0]= w;
BLK68025:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET68050(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[3];
	local[2]= fqv[1];
	local[3]= (pointer)get_sym_func(fqv[2]);
	ctx->vsp=local+4;
	w=(*ftab[0])(ctx,4,local+0,&ftab[0],fqv[3]); /*assoc*/
	local[0]= w;
	if (local[0]==NIL) goto CON68155;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)RPLACA2(ctx,2,local+1); /*rplaca2*/
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	goto CON68153;
CON68155:
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[0] = w;
	local[1]= argv[0];
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[1]= w;
	w = env->c.clo.env2[3];
	ctx->vsp=local+2;
	env->c.clo.env2[3] = cons(ctx,local[1],w);
	local[1]= local[0];
	goto CON68153;
CON68189:
	local[1]= NIL;
CON68153:
	w = local[1];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET68052(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[0];
	local[0]= w;
	local[1]= NIL;
	local[2]= NIL;
	w = local[0];
	if (!iscons(w)) goto CON68278;
	local[3]= local[0];
	w = env->c.clo.env2[8];
	ctx->vsp=local+4;
	w=FLET68058(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.car;
	w = local[0];
	if (local[2]==NIL) goto IF68326;
	local[3]= fqv[4];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF68327;
IF68326:
	local[3]= NIL;
IF68327:
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68276;
CON68278:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!iscons(w)) goto CON68339;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	if (fqv[6]!=local[3]) goto CON68393;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	w = env->c.clo.env2[9];
	ctx->vsp=local+4;
	w=FLET68060(ctx,1,local+3,w);
	local[1] = w;
	local[3]= fqv[6];
	local[4]= local[0];
	w = local[1];
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[2] = cons(ctx,local[3],w);
	if (env->c.clo.env2[0]!=NIL) goto IF68439;
	local[3]= local[2];
	w = env->c.clo.env2[4];
	ctx->vsp=local+4;
	w=FLET68050(ctx,1,local+3,w);
	local[2] = w;
	local[3]= local[2];
	goto IF68440;
IF68439:
	local[3]= NIL;
IF68440:
	local[3]= local[2];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68391;
CON68393:
	local[3]= local[0];
	local[4]= local[1];
	w = env->c.clo.env2[9];
	ctx->vsp=local+5;
	w=FLET68060(ctx,1,local+4,w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	w = env->c.clo.env2[4];
	ctx->vsp=local+4;
	w=FLET68050(ctx,1,local+3,w);
	local[3]= w;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68391;
CON68463:
	local[3]= NIL;
CON68391:
	goto CON68276;
CON68339:
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68276;
CON68481:
	local[3]= NIL;
CON68276:
	w = local[3];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET68054(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	w = env->c.clo.env2[5];
	ctx->vsp=local+4;
	w=FLET68052(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.car;
	w = local[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	if (fqv[7]!=local[3]) goto CON68556;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	w = env->c.clo.env2[5];
	ctx->vsp=local+4;
	w=FLET68052(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.car;
	w = local[1];
	w = local[1];
	if (!isint(w)) goto CON68616;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)10L);
	ctx->vsp=local+5;
	w=(pointer)LESSP(ctx,2,local+3); /*<*/
	if (w==NIL) goto CON68616;
	local[3]= fqv[8];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[2] = w;
	w = local[0];
	if (!!iscons(w)) goto CON68639;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[1];
WHL68668:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX68669;
	local[5]= local[2];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)NCONC(ctx,2,local+5); /*nconc*/
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL68668;
WHX68669:
	local[5]= NIL;
BLK68670:
	w = NIL;
	local[3]= local[2];
	w = env->c.clo.env2[4];
	ctx->vsp=local+4;
	w=FLET68050(ctx,1,local+3,w);
	local[3]= w;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68637;
CON68639:
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[1];
WHL68730:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX68731;
	local[5]= local[2];
	local[6]= fqv[9];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)NCONC(ctx,2,local+5); /*nconc*/
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL68730;
WHX68731:
	local[5]= NIL;
BLK68732:
	w = NIL;
	local[3]= fqv[10];
	local[4]= fqv[9];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68637;
CON68703:
	local[3]= NIL;
CON68637:
	goto CON68614;
CON68616:
	local[3]= fqv[11];
	local[4]= local[0];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,3,local+3); /*list*/
	local[3]= w;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68614;
CON68780:
	local[3]= NIL;
CON68614:
	goto CON68554;
CON68556:
	w = local[0];
	if (!isnum(w)) goto CON68792;
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68554;
CON68792:
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68554;
CON68801:
	local[3]= NIL;
CON68554:
	w = local[3];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET68056(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	w = env->c.clo.env2[6];
	ctx->vsp=local+4;
	w=FLET68054(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.car;
	w = local[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.car;
	local[3]= local[1];
	w = fqv[12];
	if (memq(local[3],w)==NIL) goto CON68888;
WHL68899:
	local[3]= local[1];
	w = fqv[13];
	if (memq(local[3],w)==NIL) goto WHX68900;
	local[3]= local[1];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[0] = w;
WHL68923:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	if (local[1]!=local[3]) goto WHX68924;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	w = env->c.clo.env2[6];
	ctx->vsp=local+4;
	w=FLET68054(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.car;
	w = local[2];
	local[3]= local[0];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)NCONC(ctx,2,local+3); /*nconc*/
	goto WHL68923;
WHX68924:
	local[3]= NIL;
BLK68925:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.car;
	goto WHL68899;
WHX68900:
	local[3]= NIL;
BLK68901:
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68886;
CON68888:
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[3]= w;
	goto CON68886;
CON69004:
	local[3]= NIL;
CON68886:
	w = local[3];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET68058(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= local[0];
	w = fqv[14];
	if (memq(local[3],w)==NIL) goto IF69040;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	local[3]= argv[0];
	goto IF69041;
IF69040:
	local[3]= NIL;
IF69041:
	local[3]= argv[0];
	w = env->c.clo.env2[7];
	ctx->vsp=local+4;
	w=FLET68056(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.car;
	w = local[1];
	local[3]= local[0];
	if (fqv[15]!=local[3]) goto IF69105;
	local[3]= local[0];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[1] = w;
	local[3]= local[1];
	goto IF69106;
IF69105:
	local[3]= NIL;
IF69106:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w = fqv[16];
	if (memq(local[3],w)==NIL) goto IF69125;
	local[3]= fqv[17];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[1] = w;
WHL69155:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.car;
	local[3]= local[0];
	w = fqv[18];
	if (memq(local[3],w)==NIL) goto WHX69156;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	w = env->c.clo.env2[7];
	ctx->vsp=local+4;
	w=FLET68056(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.car;
	w = local[2];
	local[3]= local[0];
	if (fqv[15]!=local[3]) goto IF69224;
	local[3]= fqv[15];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[2] = w;
	local[3]= local[2];
	goto IF69225;
IF69224:
	local[3]= NIL;
IF69225:
	local[3]= local[1];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)NCONC(ctx,2,local+3); /*nconc*/
	goto WHL69155;
WHX69156:
	local[3]= NIL;
BLK69157:
	goto IF69126;
IF69125:
	local[3]= NIL;
IF69126:
	local[3]= local[1];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET68060(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
WHL69277:
	if (argv[0]==NIL) goto WHX69278;
	local[2]= argv[0];
	w = env->c.clo.env2[8];
	ctx->vsp=local+3;
	w=FLET68058(ctx,1,local+2,w);
	local[2]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.car;
	w = local[0];
	local[2]= local[0];
	w = local[1];
	ctx->vsp=local+3;
	local[1] = cons(ctx,local[2],w);
	goto WHL69277;
WHX69278:
	local[2]= NIL;
BLK69279:
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)NREVERSE(ctx,1,local+2); /*nreverse*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET68062(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	w = env->c.clo.env2[8];
	ctx->vsp=local+4;
	w=FLET68058(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.car;
	w = local[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[1];
	w = fqv[19];
	if (memq(local[3],w)==NIL) goto IF69454;
	local[3]= argv[0];
	w = env->c.clo.env2[8];
	ctx->vsp=local+4;
	w=FLET68058(ctx,1,local+3,w);
	local[3]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.car;
	w = local[2];
	local[3]= local[1];
	local[4]= fqv[20];
	ctx->vsp=local+5;
	w=(*ftab[0])(ctx,2,local+3,&ftab[0],fqv[3]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= local[0];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,3,local+3); /*list*/
	local[0] = w;
	local[3]= local[0];
	goto IF69455;
IF69454:
	local[3]= NIL;
IF69455:
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[5]); /*values*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET68064(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	argv[0] = w;
	local[0]= NIL;
	local[1]= NIL;
	local[2]= env->c.clo.env2[3];
WHL69584:
	if (local[2]==NIL) goto WHX69585;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)GREATERP(ctx,2,local+3); /*>*/
	if (w==NIL) goto IF69633;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[3]= w;
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[0];
	goto IF69634;
IF69633:
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)NSUBST(ctx,3,local+3); /*nsubst*/
	local[3]= w;
IF69634:
	goto WHL69584;
WHX69585:
	local[3]= NIL;
BLK69586:
	w = NIL;
	if (local[0]==NIL) goto IF69690;
	local[1]= fqv[21];
	local[2]= local[0];
	w = argv[0];
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto IF69691;
IF69690:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
IF69691:
	w = local[1];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*infix2prefix*/
static pointer F68002infix2prefix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT69716;}
	local[0]= NIL;
ENT69716:
ENT69715:
	if (n>2) maerror();
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)READ(ctx,1,local+1); /*read*/
	local[1]= w;
	w = local[1];
	if (!issymbol(w)) goto CON69745;
	local[2]= local[1];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)READ(ctx,1,local+3); /*read*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[2]= w;
	local[3]= T;
	ctx->vsp=local+4;
	w=(pointer)F68000expression(ctx,2,local+2); /*expression*/
	local[2]= w;
	goto CON69743;
CON69745:
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	if (fqv[22]!=local[2]) goto CON69758;
	local[2]= fqv[23];
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
	local[5]= NIL;
	ctx->vsp=local+6;
	w=(pointer)F68000expression(ctx,2,local+4); /*expression*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,3,local+2); /*list*/
	local[2]= w;
	goto CON69743;
CON69758:
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	if (fqv[22]!=local[2]) goto CON69789;
	local[2]= fqv[24];
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[3]= w;
	local[4]= T;
	ctx->vsp=local+5;
	w=(pointer)F68000expression(ctx,2,local+3); /*expression*/
	local[3]= w;
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,1,local+4,&ftab[2],fqv[25]); /*cdddr*/
	local[4]= w;
	local[5]= NIL;
	ctx->vsp=local+6;
	w=(pointer)F68000expression(ctx,2,local+4); /*expression*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,3,local+2); /*list*/
	local[2]= w;
	goto CON69743;
CON69789:
	local[2]= local[1];
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)F68000expression(ctx,2,local+2); /*expression*/
	local[2]= w;
	goto CON69743;
CON69830:
	local[2]= NIL;
CON69743:
	w = local[2];
	local[0]= w;
BLK69713:
	ctx->vsp=local; return(local[0]);}

/*read-aref*/
static pointer F68004read_aref(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT69842;}
	local[0]= NIL;
ENT69842:
ENT69841:
	if (n>2) maerror();
	local[1]= fqv[6];
	local[2]= makeint((eusinteger_t)93L);
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,2,local+2,&ftab[3],fqv[26]); /*read-delimited-list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK69839:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___mathtran(ctx,n,argv,env)
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
	local[0]= fqv[27];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF69874;
	local[0]= fqv[28];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[29],w);
	goto IF69875;
IF69874:
	local[0]= fqv[30];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF69875:
	ctx->vsp=local+0;
	compfun(ctx,fqv[31],module,F68000expression,fqv[32]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[33],module,F68002infix2prefix,fqv[34]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[35],module,F68004read_aref,fqv[36]);
	local[0]= makeint((eusinteger_t)37L);
	local[1]= fqv[33];
	ctx->vsp=local+2;
	w=(pointer)SETMACROCH(ctx,2,local+0); /*set-macro-character*/
	local[0]= makeint((eusinteger_t)91L);
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SETMACROCH(ctx,2,local+0); /*set-macro-character*/
	local[0]= makeint((eusinteger_t)93L);
	local[1]= makeint((eusinteger_t)41L);
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[37]); /*set-syntax-from-char*/
	local[0]= fqv[38];
	local[1]= fqv[39];
	ctx->vsp=local+2;
	w=(*ftab[5])(ctx,2,local+0,&ftab[5],fqv[40]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<6; i++) ftab[i]=fcallx;
}
