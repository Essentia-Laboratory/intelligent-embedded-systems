/* ./packsym.c :  entry=packsym */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "packsym.h"
#pragma init (register_packsym)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___packsym();
extern pointer build_quote_vector();
static int register_packsym()
  { add_module_initializer("___packsym", ___packsym);}

static pointer F45930metaclass_name();
static pointer F45934symbol_plist();
static pointer F45937remprop();
static pointer F45940symbol_package();
static pointer F45943symbol_name();
static pointer F45946make_symbol();
static pointer F45949documentation();
static pointer F45953gentemp();
static pointer F45958package_name();
static pointer F45961package_nicknames();
static pointer F45964package_use_list();
static pointer F45967package_used_by_list();
static pointer F45970packagep();
static pointer F45973use_package();
static pointer F45976unuse_package();
static pointer F45979make_package();
static pointer F45983rename_package();
static pointer F45986shadow();
static pointer F45989import();
static pointer F45992symbol_string();
static pointer F45995unintern();
static pointer F45997package_stats();

/*metaclass-name*/
static pointer F45930metaclass_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = *(ovafptr(argv[0],fqv[0]));
	local[0]= w;
BLK46039:
	ctx->vsp=local; return(local[0]);}

/*:home-package*/
static pointer M46069symbol_home_package(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[5];
	local[0]= w;
BLK46070:
	ctx->vsp=local; return(local[0]);}

/*:pname*/
static pointer M46085symbol_pname(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK46086:
	ctx->vsp=local; return(local[0]);}

/*:func*/
static pointer M46101symbol_func(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK46102:
	ctx->vsp=local; return(local[0]);}

/*:value*/
static pointer M46117symbol_value(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	if (w==NIL) goto IF46132;
	local[0]= makeint((eusinteger_t)11L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,2,local+0); /*error*/
	local[0]= w;
	goto IF46133;
IF46132:
	local[0]= NIL;
IF46133:
	argv[0]->c.obj.iv[1] = argv[2];
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK46118:
	ctx->vsp=local; return(local[0]);}

/*:constant*/
static pointer M46150symbol_constant(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT46154;}
	local[0]= NIL;
ENT46154:
ENT46153:
	if (n>4) maerror();
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)NUMEQUAL(ctx,2,local+1); /*=*/
	if (w==NIL) goto IF46173;
	goto IF46174;
IF46173:
	local[-1]= NIL;
IF46174:
	if (local[0]==NIL) goto IF46188;
	local[-1]= argv[0];
	local[0]= local[0];
	local[1]= fqv[1];
	ctx->vsp=local+2;
	w=(pointer)PUTPROP(ctx,3,local+-1); /*putprop*/
	local[-1]= w;
	goto IF46189;
IF46188:
	local[-1]= NIL;
IF46189:
	argv[0]->c.obj.iv[2] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[1] = argv[2];
	w = argv[0];
	local[-2]= w;
BLK46151:
	ctx->vsp=local; return(local[0]);}

/*:special*/
static pointer M46213symbol_special(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT46217;}
	local[0]= NIL;
ENT46217:
ENT46216:
	if (n>4) maerror();
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)NUMEQUAL(ctx,2,local+1); /*=*/
	if (w==NIL) goto IF46235;
	local[1]= makeint((eusinteger_t)11L);
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,2,local+1); /*error*/
	local[1]= w;
	goto IF46236;
IF46235:
	local[1]= NIL;
IF46236:
	if (local[0]==NIL) goto IF46245;
	local[1]= argv[0];
	local[2]= local[0];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= w;
	goto IF46246;
IF46245:
	local[1]= NIL;
IF46246:
	ctx->vsp=local+1;
	w=(pointer)NEXT_SPECIAL_INDEX(ctx,0,local+1); /*system::next-special-index*/
	argv[0]->c.obj.iv[2] = w;
	local[1]= argv[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SETSPECIAL(ctx,2,local+1); /*set*/
	w = argv[0];
	local[0]= w;
BLK46214:
	ctx->vsp=local; return(local[0]);}

/*:global*/
static pointer M46274symbol_global(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT46278;}
	local[0]= NIL;
ENT46278:
ENT46277:
	if (n>4) maerror();
	argv[0]->c.obj.iv[2] = makeint((eusinteger_t)2L);
	argv[0]->c.obj.iv[1] = argv[2];
	if (local[0]==NIL) goto IF46309;
	local[1]= argv[0];
	local[2]= local[0];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= w;
	goto IF46310;
IF46309:
	local[1]= NIL;
IF46310:
	w = argv[2];
	local[0]= w;
BLK46275:
	ctx->vsp=local; return(local[0]);}

/*:vtype*/
static pointer M46325symbol_vtype(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT46329;}
	local[0]= NIL;
ENT46329:
ENT46328:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF46345;
	argv[0]->c.obj.iv[2] = local[0];
	local[1]= argv[0]->c.obj.iv[2];
	goto IF46346;
IF46345:
	local[1]= NIL;
IF46346:
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK46326:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M46361symbol_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT46365;}
	local[0]= makeint((eusinteger_t)1L);
ENT46365:
ENT46364:
	if (n>4) maerror();
	argv[0]->c.obj.iv[4] = argv[2];
	argv[0]->c.obj.iv[2] = local[0];
	w = argv[0];
	local[0]= w;
BLK46362:
	ctx->vsp=local; return(local[0]);}

/*symbol-plist*/
static pointer F45934symbol_plist(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[2];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK46399:
	ctx->vsp=local; return(local[0]);}

/*remprop*/
static pointer F45937remprop(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[3];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK46416:
	ctx->vsp=local; return(local[0]);}

/*symbol-package*/
static pointer F45940symbol_package(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[4];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK46436:
	ctx->vsp=local; return(local[0]);}

/*symbol-name*/
static pointer F45943symbol_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!issymbol(w)) goto IF46469;
	local[0]= argv[0]->c.obj.iv[4];
	goto IF46470;
IF46469:
	local[0]= fqv[5];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF46470:
	w = local[0];
	local[0]= w;
BLK46453:
	ctx->vsp=local; return(local[0]);}

/*make-symbol*/
static pointer F45946make_symbol(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT46484;}
	local[0]= loadglobal(fqv[6]);
ENT46484:
ENT46483:
	if (n>2) maerror();
	w = argv[0];
	if (isstring(w)) goto IF46500;
	local[1]= fqv[7];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
	goto IF46501;
IF46500:
	local[1]= NIL;
IF46501:
	local[1]= loadglobal(fqv[8]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= argv[0];
	w = local[1];
	w->c.obj.iv[4] = local[2];
	local[2]= makeint((eusinteger_t)1L);
	w = local[1];
	w->c.obj.iv[2] = local[2];
	local[2]= local[0];
	local[3]= local[2];
	w = local[1];
	w->c.obj.iv[5] = local[3];
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)MAKUNBOUND(ctx,1,local+2); /*makunbound*/
	w = local[1];
	local[0]= w;
BLK46481:
	ctx->vsp=local; return(local[0]);}

/*documentation*/
static pointer F45949documentation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT46552;}
	local[0]= NIL;
ENT46552:
ENT46551:
	if (n>2) maerror();
	local[1]= local[0];
	local[2]= local[1];
	w = fqv[9];
	if (memq(local[2],w)==NIL) goto IF46579;
	local[2]= argv[0];
	local[3]= fqv[10];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	goto IF46580;
IF46579:
	local[2]= local[1];
	w = fqv[11];
	if (memq(local[2],w)==NIL) goto IF46595;
	local[2]= argv[0];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	goto IF46596;
IF46595:
	local[2]= local[1];
	w = fqv[12];
	if (memq(local[2],w)==NIL) goto IF46611;
	local[2]= argv[0];
	local[3]= fqv[13];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	goto IF46612;
IF46611:
	local[2]= local[1];
	w = fqv[14];
	if (memq(local[2],w)==NIL) goto IF46627;
	local[2]= argv[0];
	local[3]= fqv[15];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	goto IF46628;
IF46627:
	if (T==NIL) goto IF46643;
	local[2]= argv[0];
	local[3]= fqv[10];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	if (w!=NIL) goto CON46648;
CON46650:
	local[2]= argv[0];
	local[3]= fqv[15];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	if (w!=NIL) goto CON46648;
CON46658:
	local[2]= argv[0];
	local[3]= fqv[13];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	if (w!=NIL) goto CON46648;
CON46666:
	local[2]= argv[0];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	if (w!=NIL) goto CON46648;
CON46674:
	local[2]= NIL;
CON46648:
	goto IF46644;
IF46643:
	local[2]= NIL;
IF46644:
IF46628:
IF46612:
IF46596:
IF46580:
	w = local[2];
	local[0]= w;
BLK46549:
	ctx->vsp=local; return(local[0]);}

/*gentemp*/
static pointer F45953gentemp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT46692;}
	local[0]= fqv[16];
ENT46692:
	if (n>=2) { local[1]=(argv[1]); goto ENT46691;}
	local[1]= loadglobal(fqv[6]);
ENT46691:
ENT46690:
	if (n>2) maerror();
	local[2]= NIL;
WHL46718:
	local[3]= loadglobal(fqv[17]);
	local[4]= local[0];
	local[5]= loadglobal(fqv[18]);
	ctx->vsp=local+6;
	w=(*ftab[0])(ctx,1,local+5,&ftab[0],fqv[17]); /*string*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)CONCATENATE(ctx,3,local+3); /*concatenate*/
	local[2] = w;
	local[3]= local[2];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)FINDSYMBOL(ctx,2,local+3); /*find-symbol*/
	if (w==NIL) goto WHX46719;
	local[3]= loadglobal(fqv[18]);
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[3]= w;
	storeglobal(fqv[18],w);
	goto WHL46718;
WHX46719:
	local[3]= NIL;
BLK46720:
	local[3]= local[2];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)INTERN(ctx,2,local+3); /*intern*/
	local[0]= w;
BLK46688:
	ctx->vsp=local; return(local[0]);}

/*:use-list*/
static pointer M46781package_use_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK46782:
	ctx->vsp=local; return(local[0]);}

/*:used-by-list*/
static pointer M46797package_used_by_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK46798:
	ctx->vsp=local; return(local[0]);}

/*:used-by*/
static pointer M46813package_used_by(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,2,local+0,&ftab[1],fqv[19]); /*adjoin*/
	argv[0]->c.obj.iv[8] = w;
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK46814:
	ctx->vsp=local; return(local[0]);}

/*:use*/
static pointer M46840package_use(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)LISTP(ctx,1,local+0); /*listp*/
	if (w==NIL) goto IF46855;
WHL46866:
	if (argv[2]==NIL) goto WHX46867;
	local[0]= argv[0];
	local[1]= fqv[20];
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[2] = (w)->c.cons.cdr;
	goto WHL46866;
WHX46867:
	local[0]= NIL;
BLK46868:
	local[0]= argv[0]->c.obj.iv[2];
	goto IF46856;
IF46855:
	local[0]= NIL;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)FINDPACKAGE(ctx,1,local+1); /*find-package*/
	argv[2] = w;
	local[1]= argv[2];
	if (argv[0]==local[1]) goto IF46917;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)F45970packagep(ctx,1,local+1); /*packagep*/
	if (w==NIL) goto IF46917;
	local[1]= NIL;
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)FINDPACKAGE(ctx,1,local+2); /*find-package*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= *(ovafptr(local[2],fqv[21]));
	local[5]= local[4];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
WHL46963:
	local[6]= local[3];
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)LESSP(ctx,2,local+6); /*<*/
	if (w==NIL) goto WHX46964;
	local[6]= local[4];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[1] = w;
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[3] = w;
	w = local[1];
	if (!issymbol(w)) goto IF46993;
	local[6]= argv[0];
	local[7]= fqv[22];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[0] = w;
	if (local[0]==NIL) goto IF47014;
	local[6]= argv[0]->c.obj.iv[5];
	{ register eusinteger_t i=intval(local[0]);
	  w=(local[6]->c.vec.v[i]);}
	local[6]= w;
	if (local[1]==local[6]) goto IF47014;
	local[6]= fqv[23];
	local[7]= local[1];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)SIGERROR(ctx,3,local+6); /*error*/
	local[6]= w;
	goto IF47015;
IF47014:
	local[6]= NIL;
IF47015:
	goto IF46994;
IF46993:
	local[6]= NIL;
IF46994:
	goto WHL46963;
WHX46964:
	local[6]= NIL;
BLK46965:
	w = NIL;
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[19]); /*adjoin*/
	argv[0]->c.obj.iv[2] = w;
	local[1]= argv[2];
	local[2]= fqv[24];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF46918;
IF46917:
	local[1]= NIL;
IF46918:
	w = local[1];
	local[0]= w;
IF46856:
	w = local[0];
	local[0]= w;
BLK46841:
	ctx->vsp=local; return(local[0]);}

/*:unuse*/
static pointer M47055package_unuse(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	argv[2] = w;
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)F45970packagep(ctx,1,local+0); /*packagep*/
	if (w==NIL) goto IF47080;
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[25]); /*delete*/
	argv[0]->c.obj.iv[2] = w;
	local[0]= argv[2];
	local[1]= fqv[26];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF47081;
IF47080:
	local[0]= NIL;
IF47081:
	w = local[0];
	local[0]= w;
BLK47056:
	ctx->vsp=local; return(local[0]);}

/*:unused*/
static pointer M47109package_unused(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[25]); /*delete*/
	argv[0]->c.obj.iv[8] = w;
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK47110:
	ctx->vsp=local; return(local[0]);}

/*:name*/
static pointer M47135package_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK47136:
	ctx->vsp=local; return(local[0]);}

/*:rename*/
static pointer M47155package_rename(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[17]); /*string*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK47156:
	ctx->vsp=local; return(local[0]);}

/*:nicknames*/
static pointer M47182package_nicknames(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT47186;}
	local[0]= NIL;
ENT47186:
ENT47185:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF47202;
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= (pointer)get_sym_func(fqv[17]);
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[2]= w;
	local[3]= fqv[27];
	local[4]= (pointer)get_sym_func(fqv[28]);
	ctx->vsp=local+5;
	w=(*ftab[3])(ctx,4,local+1,&ftab[3],fqv[29]); /*union*/
	argv[0]->c.obj.iv[1] = w;
	local[1]= argv[0]->c.obj.iv[1];
	goto IF47203;
IF47202:
	local[1]= NIL;
IF47203:
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK47183:
	ctx->vsp=local; return(local[0]);}

/*:hash*/
static pointer M47230package_hash(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[17]); /*string*/
	argv[2] = w;
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)SXHASH(ctx,1,local+0); /*sxhash*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MOD(ctx,2,local+0); /*mod*/
	local[0]= w;
BLK47231:
	ctx->vsp=local; return(local[0]);}

/*:enter*/
static pointer M47263package_enter(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	if (issymbol(w)) goto IF47278;
	w = NIL;
	ctx->vsp=local+0;
	local[0]=w;
	goto BLK47264;
	goto IF47279;
IF47278:
	local[0]= NIL;
IF47279:
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)SXHASH(ctx,1,local+0); /*sxhash*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MOD(ctx,2,local+0); /*mod*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= argv[0]->c.obj.iv[6];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)GREQP(ctx,2,local+2); /*>=*/
	if (w==NIL) goto IF47312;
	local[2]= fqv[30];
	local[3]= argv[2];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,3,local+2); /*error*/
	local[2]= w;
	goto IF47313;
IF47312:
	local[2]= NIL;
IF47313:
WHL47324:
	local[2]= argv[0]->c.obj.iv[5];
	{ register eusinteger_t i=intval(local[0]);
	  w=(local[2]->c.vec.v[i]);}
	if (!issymbol(w)) goto WHX47325;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	local[2]= local[0];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)GREQP(ctx,2,local+2); /*>=*/
	if (w==NIL) goto IF47335;
	local[0] = makeint((eusinteger_t)0L);
	local[2]= local[0];
	goto IF47336;
IF47335:
	local[2]= NIL;
IF47336:
	goto WHL47324;
WHX47325:
	local[2]= NIL;
BLK47326:
	local[2]= argv[0]->c.obj.iv[5];
	local[3]= local[0];
	w = argv[2];
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[3]); v=local[2];
	  v->c.vec.v[i]=w;}
	local[2]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	argv[0]->c.obj.iv[6] = w;
	w = argv[2];
	local[0]= w;
BLK47264:
	ctx->vsp=local; return(local[0]);}

/*:find*/
static pointer M47375package_find(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	if (issymbol(w)) goto IF47396;
	local[0]= fqv[31];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
	goto IF47397;
IF47396:
	local[0]= NIL;
IF47397:
	local[0]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)SXHASH(ctx,1,local+1); /*sxhash*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)MOD(ctx,2,local+1); /*mod*/
	local[1]= w;
	local[2]= NIL;
WHL47432:
	if (T==NIL) goto WHX47433;
	local[3]= argv[0]->c.obj.iv[5];
	local[4]= local[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)MOD(ctx,2,local+4); /*mod*/
	{ register eusinteger_t i=intval(w);
	  w=(local[3]->c.vec.v[i]);}
	local[2] = w;
	local[3]= local[2];
	if (makeint((eusinteger_t)0L)!=local[3]) goto CON47455;
	w = NIL;
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK47376;
	goto CON47453;
CON47455:
	local[3]= local[2];
	local[3]= ((makeint((eusinteger_t)1L))==(local[3])?T:NIL);
	if (local[3]!=NIL) goto CON47453;
CON47463:
	local[3]= local[2]->c.obj.iv[4];
	local[4]= argv[2]->c.obj.iv[4];
	ctx->vsp=local+5;
	w=(pointer)EQUAL(ctx,2,local+3); /*equal*/
	if (w==NIL) goto CON47470;
	local[3]= local[1];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)MOD(ctx,2,local+3); /*mod*/
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK47376;
	goto CON47453;
CON47470:
	local[3]= NIL;
CON47453:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)2L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)GREQP(ctx,2,local+3); /*>=*/
	if (w==NIL) goto IF47488;
	local[3]= fqv[32];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,2,local+3); /*error*/
	local[3]= w;
	goto IF47489;
IF47488:
	local[3]= NIL;
IF47489:
	goto WHL47432;
WHX47433:
	local[3]= NIL;
BLK47434:
	w = NIL;
	local[0]= w;
BLK47376:
	ctx->vsp=local; return(local[0]);}

/*:shadow*/
static pointer M47514package_shadow(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[22];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	if (w!=NIL) goto IF47530;
	local[0]= argv[0];
	local[1]= fqv[33];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,1,local+2,&ftab[0],fqv[17]); /*string*/
	local[2]= w;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F45946make_symbol(ctx,2,local+2); /*make-symbol*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF47531;
IF47530:
	local[0]= NIL;
IF47531:
	w = local[0];
	local[0]= w;
BLK47515:
	ctx->vsp=local; return(local[0]);}

/*:import*/
static pointer M47556package_import(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[22];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	if (local[0]==NIL) goto IF47587;
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[5];
	{ register eusinteger_t i=intval(local[0]);
	  w=(local[2]->c.vec.v[i]);}
	if (w==local[1]) goto IF47587;
	local[1]= fqv[34];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,2,local+1); /*error*/
	local[1]= w;
	goto IF47588;
IF47587:
	local[1]= argv[0];
	local[2]= fqv[33];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
IF47588:
	w = local[1];
	local[0]= w;
BLK47557:
	ctx->vsp=local; return(local[0]);}

/*:unintern*/
static pointer M47613package_unintern(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= *(ovafptr(argv[2],fqv[35]));
	if (argv[0]!=local[1]) goto IF47638;
	local[1]= NIL;
	local[2]= local[1];
	*(ovafptr(argv[2],fqv[35])) = local[2];
	goto IF47639;
IF47638:
	local[1]= NIL;
IF47639:
	local[1]= argv[0];
	local[2]= fqv[22];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0] = w;
	if (local[0]==NIL) goto IF47664;
	local[1]= argv[0]->c.obj.iv[5];
	local[2]= local[0];
	w = makeint((eusinteger_t)1L);
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[2]); v=local[1];
	  v->c.vec.v[i]=w;}
	local[1]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+2;
	w=(pointer)SUB1(ctx,1,local+1); /*1-*/
	argv[0]->c.obj.iv[6] = w;
	local[1]= argv[0]->c.obj.iv[6];
	goto IF47665;
IF47664:
	local[1]= NIL;
IF47665:
	local[1]= argv[0];
	local[2]= fqv[36];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0] = w;
	if (local[0]==NIL) goto IF47701;
	local[1]= argv[0]->c.obj.iv[3];
	local[2]= local[0];
	w = makeint((eusinteger_t)1L);
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[2]); v=local[1];
	  v->c.vec.v[i]=w;}
	local[1]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+2;
	w=(pointer)SUB1(ctx,1,local+1); /*1-*/
	argv[0]->c.obj.iv[4] = w;
	local[1]= argv[0]->c.obj.iv[4];
	goto IF47702;
IF47701:
	local[1]= NIL;
IF47702:
	w = local[1];
	local[0]= w;
BLK47614:
	ctx->vsp=local; return(local[0]);}

/*:find-external*/
static pointer M47726package_find_external(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	if (issymbol(w)) goto IF47747;
	local[0]= fqv[37];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
	goto IF47748;
IF47747:
	local[0]= NIL;
IF47748:
	local[0]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)SXHASH(ctx,1,local+1); /*sxhash*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)MOD(ctx,2,local+1); /*mod*/
	local[1]= w;
	local[2]= NIL;
WHL47783:
	if (T==NIL) goto WHX47784;
	local[3]= argv[0]->c.obj.iv[3];
	{ register eusinteger_t i=intval(local[1]);
	  w=(local[3]->c.vec.v[i]);}
	local[2] = w;
	local[3]= local[2];
	if (makeint((eusinteger_t)0L)!=local[3]) goto CON47803;
	w = NIL;
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK47727;
	goto CON47801;
CON47803:
	local[3]= local[2];
	local[3]= ((makeint((eusinteger_t)1L))==(local[3])?T:NIL);
	if (local[3]!=NIL) goto CON47801;
CON47811:
	local[3]= local[2]->c.obj.iv[4];
	local[4]= argv[2]->c.obj.iv[4];
	ctx->vsp=local+5;
	w=(pointer)EQUAL(ctx,2,local+3); /*equal*/
	if (w==NIL) goto CON47818;
	w = local[1];
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK47727;
	goto CON47801;
CON47818:
	local[3]= NIL;
CON47801:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	local[3]= local[1];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)GREQP(ctx,2,local+3); /*>=*/
	if (w==NIL) goto IF47834;
	local[1] = makeint((eusinteger_t)0L);
	local[3]= local[1];
	goto IF47835;
IF47834:
	local[3]= NIL;
IF47835:
	goto WHL47783;
WHX47784:
	local[3]= NIL;
BLK47785:
	w = NIL;
	local[0]= w;
BLK47727:
	ctx->vsp=local; return(local[0]);}

/*:unexport*/
static pointer M47857package_unexport(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[36];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	if (local[0]==NIL) goto IF47888;
	local[1]= argv[0]->c.obj.iv[3];
	local[2]= local[0];
	w = makeint((eusinteger_t)0L);
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[2]); v=local[1];
	  v->c.vec.v[i]=w;}
	local[1]= w;
	goto IF47889;
IF47888:
	local[1]= NIL;
IF47889:
	w = local[1];
	local[0]= w;
BLK47858:
	ctx->vsp=local; return(local[0]);}

/*package-name*/
static pointer F45958package_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	argv[0] = w;
	local[0]= argv[0];
	local[1]= fqv[38];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK47903:
	ctx->vsp=local; return(local[0]);}

/*package-nicknames*/
static pointer F45961package_nicknames(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	local[1]= fqv[39];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK47929:
	ctx->vsp=local; return(local[0]);}

/*package-use-list*/
static pointer F45964package_use_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	local[1]= fqv[40];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK47948:
	ctx->vsp=local; return(local[0]);}

/*package-used-by-list*/
static pointer F45967package_used_by_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	local[1]= fqv[41];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK47967:
	ctx->vsp=local; return(local[0]);}

/*packagep*/
static pointer F45970packagep(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)GETCLASS(ctx,1,local+0); /*class*/
	local[0]= w;
	w = ((loadglobal(fqv[42]))==(local[0])?T:NIL);
	local[0]= w;
BLK47986:
	ctx->vsp=local; return(local[0]);}

/*use-package*/
static pointer F45973use_package(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT48010;}
	local[0]= loadglobal(fqv[6]);
ENT48010:
ENT48009:
	if (n>2) maerror();
	local[1]= local[0];
	local[2]= fqv[20];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = T;
	local[0]= w;
BLK48007:
	ctx->vsp=local; return(local[0]);}

/*unuse-package*/
static pointer F45976unuse_package(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT48038;}
	local[0]= loadglobal(fqv[6]);
ENT48038:
ENT48037:
	if (n>2) maerror();
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)FINDPACKAGE(ctx,1,local+1); /*find-package*/
	local[1]= w;
	local[2]= fqv[43];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
BLK48035:
	ctx->vsp=local; return(local[0]);}

/*make-package*/
static pointer F45979make_package(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[44], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY48073;
	local[0] = NIL;
KEY48073:
	if (n & (1<<1)) goto KEY48078;
	local[2]= fqv[45];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[1] = w;
KEY48078:
	local[2]= argv[0];
	local[3]= local[0];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)MAKEPACKAGE(ctx,3,local+2); /*system::makepackage*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[20];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	w = local[2];
	local[0]= w;
BLK48063:
	ctx->vsp=local; return(local[0]);}

/*in-package*/
static pointer F48116(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[46];
	local[1]= fqv[47];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	local[2]= fqv[48];
	local[3]= fqv[6];
	local[4]= fqv[47];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[49];
	local[4]= fqv[50];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK48117:
	ctx->vsp=local; return(local[0]);}

/*rename-package*/
static pointer F45983rename_package(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT48178;}
	local[0]= NIL;
ENT48178:
ENT48177:
	if (n>3) maerror();
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)FINDPACKAGE(ctx,1,local+1); /*find-package*/
	argv[0] = w;
	local[1]= argv[0];
	local[2]= fqv[51];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	if (local[0]==NIL) goto IF48210;
	local[1]= argv[0];
	local[2]= fqv[39];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF48211;
IF48210:
	local[1]= NIL;
IF48211:
	w = local[1];
	local[0]= w;
BLK48175:
	ctx->vsp=local; return(local[0]);}

/*shadow*/
static pointer F45986shadow(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT48227;}
	local[0]= loadglobal(fqv[6]);
ENT48227:
ENT48226:
	if (n>2) maerror();
	w = argv[0];
	if (!issymbol(w)) goto IF48242;
	local[1]= local[0];
	local[2]= fqv[52];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF48243;
IF48242:
WHL48254:
	if (argv[0]==NIL) goto WHX48255;
	local[1]= local[0];
	local[2]= fqv[52];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	goto WHL48254;
WHX48255:
	local[1]= NIL;
BLK48256:
IF48243:
	w = local[1];
	local[0]= w;
BLK48224:
	ctx->vsp=local; return(local[0]);}

/*import*/
static pointer F45989import(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT48288;}
	local[0]= loadglobal(fqv[6]);
ENT48288:
ENT48287:
	if (n>2) maerror();
	w = argv[0];
	if (!issymbol(w)) goto IF48303;
	local[1]= local[0];
	local[2]= fqv[53];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF48304;
IF48303:
WHL48315:
	if (argv[0]==NIL) goto WHX48316;
	local[1]= local[0];
	local[2]= fqv[53];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	goto WHL48315;
WHX48316:
	local[1]= NIL;
BLK48317:
IF48304:
	w = T;
	local[0]= w;
BLK48285:
	ctx->vsp=local; return(local[0]);}

/*symbol-string*/
static pointer F45992symbol_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!issymbol(w)) goto IF48358;
	local[0]= *(ovafptr(argv[0],fqv[54]));
	goto IF48359;
IF48358:
	local[0]= fqv[55];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF48359:
	w = local[0];
	local[0]= w;
BLK48348:
	ctx->vsp=local; return(local[0]);}

/*unintern*/
static pointer F45995unintern(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT48373;}
	local[0]= loadglobal(fqv[6]);
ENT48373:
ENT48372:
	if (n>2) maerror();
	w = argv[0];
	if (!issymbol(w)) goto IF48388;
	local[1]= local[0];
	local[2]= fqv[56];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF48389;
IF48388:
	local[1]= fqv[57];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
IF48389:
	w = local[1];
	local[0]= w;
BLK48370:
	ctx->vsp=local; return(local[0]);}

/*package-stats*/
static pointer F45997package_stats(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT48406;}
	local[0]= T;
ENT48406:
ENT48405:
	if (n>1) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)ALLPACKAGES(ctx,0,local+5); /*list-all-packages*/
	local[5]= w;
WHL48442:
	if (local[5]==NIL) goto WHX48443;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= (pointer)get_sym_func(fqv[58]);
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)F45964package_use_list(ctx,1,local+7); /*package-use-list*/
	local[7]= w;
	local[8]= fqv[39];
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,2,local+7,&ftab[4],fqv[59]); /*send-all*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MAPCAR(ctx,2,local+6); /*mapcar*/
	local[2] = w;
	local[6]= (pointer)get_sym_func(fqv[58]);
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)F45967package_used_by_list(ctx,1,local+7); /*package-used-by-list*/
	local[7]= w;
	local[8]= fqv[39];
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,2,local+7,&ftab[4],fqv[59]); /*send-all*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MAPCAR(ctx,2,local+6); /*mapcar*/
	local[3] = w;
	local[6]= local[0];
	local[7]= fqv[60];
	local[8]= local[4];
	local[9]= fqv[39];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= local[4];
	local[10]= fqv[39];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.cdr==NIL) goto IF48537;
	local[9]= local[4];
	local[10]= fqv[39];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.cdr;
	goto IF48538;
IF48537:
	local[9]= fqv[61];
IF48538:
	local[10]= local[4]->c.obj.iv[4];
	if (local[2]==NIL) goto IF48565;
	local[11]= local[2];
	goto IF48566;
IF48565:
	local[11]= fqv[62];
IF48566:
	if (local[3]==NIL) goto IF48572;
	local[12]= local[3];
	goto IF48573;
IF48572:
	local[12]= fqv[63];
IF48573:
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,7,local+6); /*format*/
	goto WHL48442;
WHX48443:
	local[6]= NIL;
BLK48444:
	w = NIL;
	local[0]= w;
BLK48403:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___packsym(ctx,n,argv,env)
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
	local[0]= fqv[64];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= fqv[65];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF48592;
	local[0]= fqv[66];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[6],w);
	goto IF48593;
IF48592:
	local[0]= fqv[67];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF48593:
	local[0]= fqv[68];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[69],module,F45930metaclass_name,fqv[70]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46069symbol_home_package,fqv[4],fqv[8],fqv[71]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46085symbol_pname,fqv[72],fqv[8],fqv[73]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46101symbol_func,fqv[74],fqv[8],fqv[75]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46117symbol_value,fqv[76],fqv[8],fqv[77]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46150symbol_constant,fqv[78],fqv[8],fqv[79]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46213symbol_special,fqv[80],fqv[8],fqv[81]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46274symbol_global,fqv[82],fqv[8],fqv[83]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46325symbol_vtype,fqv[84],fqv[8],fqv[85]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46361symbol_init,fqv[86],fqv[8],fqv[87]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[88],module,F45934symbol_plist,fqv[89]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[90],module,F45937remprop,fqv[91]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[92],module,F45940symbol_package,fqv[93]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[94],module,F45943symbol_name,fqv[95]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[96],module,F45946make_symbol,fqv[97]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[98],module,F45949documentation,fqv[99]);
	local[0]= makeint((eusinteger_t)0L);
	storeglobal(fqv[18],local[0]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[100],module,F45953gentemp,fqv[101]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46781package_use_list,fqv[40],fqv[42],fqv[102]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46797package_used_by_list,fqv[41],fqv[42],fqv[103]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46813package_used_by,fqv[24],fqv[42],fqv[104]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M46840package_use,fqv[20],fqv[42],fqv[105]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47055package_unuse,fqv[43],fqv[42],fqv[106]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47109package_unused,fqv[26],fqv[42],fqv[107]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47135package_name,fqv[38],fqv[42],fqv[108]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47155package_rename,fqv[51],fqv[42],fqv[109]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47182package_nicknames,fqv[39],fqv[42],fqv[110]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47230package_hash,fqv[111],fqv[42],fqv[112]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47263package_enter,fqv[33],fqv[42],fqv[113]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47375package_find,fqv[22],fqv[42],fqv[114]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47514package_shadow,fqv[52],fqv[42],fqv[115]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47556package_import,fqv[53],fqv[42],fqv[116]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47613package_unintern,fqv[56],fqv[42],fqv[117]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47726package_find_external,fqv[36],fqv[42],fqv[118]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M47857package_unexport,fqv[119],fqv[42],fqv[120]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[121],module,F45958package_name,fqv[122]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[123],module,F45961package_nicknames,fqv[124]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[125],module,F45964package_use_list,fqv[126]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[127],module,F45967package_used_by_list,fqv[128]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[129],module,F45970packagep,fqv[130]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[131],module,F45973use_package,fqv[132]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[133],module,F45976unuse_package,fqv[134]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[135],module,F45979make_package,fqv[136]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[137],module,F48116,fqv[138]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[139],module,F45983rename_package,fqv[140]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[141],module,F45986shadow,fqv[142]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[143],module,F45989import,fqv[144]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[145],module,F45992symbol_string,fqv[146]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[147],module,F45995unintern,fqv[148]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[149],module,F45997package_stats,fqv[150]);
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<5; i++) ftab[i]=fcallx;
}
