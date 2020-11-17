/* ./eusdebug.c :  entry=eusdebug */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "eusdebug.h"
#pragma init (register_eusdebug)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___eusdebug();
extern pointer build_quote_vector();
static int register_eusdebug()
  { add_module_initializer("___eusdebug", ___eusdebug);}

static pointer F34547warning_message();
static pointer F34551warn();
static pointer F34554describe();
static pointer F34557describe_list();
static pointer F34561apropos();
static pointer F34564apropos_list();
static pointer F34568dump_string();
static pointer F34572break();
static pointer F34575setbreak();
static pointer F34578unbreak();
static pointer F34582btrace();
static pointer F34586eval_dynamic();
static pointer F34589step_hook();
static pointer F34594tracex();
static pointer F34597trace1();
static pointer F34603inspect1();
static pointer F34606time_func();
static pointer F34608list_symbols();
static pointer F34610functions();
static pointer F34612special_variables();
static pointer F34614global_variables();
static pointer F34616variables();
static pointer F34618constants();
static pointer F34620methods();
static pointer F34622method_list();
static pointer F34624y_or_n_p();
static pointer F34626yes_or_no_p();
static pointer F34628bell();
static pointer F34630check_methods();
static pointer F34632pfuncs();
static pointer F34634class_hierarchy();
static pointer F34636classdef();
static pointer F34638classdefs();
static pointer F34640remote_error();
static pointer F34642reval();
static pointer F34644install_remote_function();
static pointer F34646open_server();

/*assert*/
static pointer F34706(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT34710;}
	local[0]= fqv[0];
ENT34710:
ENT34709:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-2);
	local[2]= fqv[1];
	local[3]= fqv[2];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[3];
	local[5]= fqv[4];
	local[6]= local[0];
	local[7]= local[1];
	local[8]= NIL;
	ctx->vsp=local+9;
	w=(pointer)APPEND(ctx,2,local+7); /*append*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[5];
	local[6]= fqv[4];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[6];
	local[7]= fqv[7];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK34707:
	ctx->vsp=local; return(local[0]);}

/*warning-message*/
static pointer F34547warning_message(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST34784:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= loadglobal(fqv[4]);
	local[2]= fqv[8];
	local[3]= makeint((eusinteger_t)27L);
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)48L);
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,4,local+1); /*format*/
	local[1]= (pointer)get_sym_func(fqv[3]);
	local[2]= loadglobal(fqv[4]);
	local[3]= argv[1];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[1]= loadglobal(fqv[4]);
	local[2]= fqv[9];
	local[3]= makeint((eusinteger_t)27L);
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[1]= loadglobal(fqv[4]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[0]= w;
BLK34782:
	ctx->vsp=local; return(local[0]);}

/*warn*/
static pointer F34551warn(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST34828:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= (pointer)get_sym_func(fqv[3]);
	local[2]= loadglobal(fqv[4]);
	local[3]= argv[0];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[1]= loadglobal(fqv[4]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	if (loadglobal(fqv[10])==NIL) goto IF34851;
	local[1]= fqv[11];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,1,local+1,&ftab[0],fqv[6]); /*reploop*/
	local[1]= w;
	goto IF34852;
IF34851:
	local[1]= NIL;
IF34852:
	w = local[1];
	local[0]= w;
BLK34826:
	ctx->vsp=local; return(local[0]);}

/*describe*/
static pointer F34554describe(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT34868;}
	local[0]= loadglobal(fqv[12]);
ENT34868:
	if (n>=3) { local[1]=(argv[2]); goto ENT34867;}
	local[1]= NIL;
ENT34867:
	w = local[1];
	ctx->vsp=local+1;
	bindspecial(ctx,fqv[13],w);
	if (n>=4) { local[4]=(argv[3]); goto ENT34866;}
	local[4]= NIL;
ENT34866:
	w = local[4];
	ctx->vsp=local+4;
	bindspecial(ctx,fqv[14],w);
ENT34865:
	if (n>4) maerror();
	w = argv[0];
	if (!isnum(w)) goto IF34895;
	local[7]= argv[0];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)PRINT(ctx,2,local+7); /*print*/
	w = NIL;
	ctx->vsp=local+7;
	unwind(ctx,local+0);
	local[0]=w;
	goto BLK34863;
	goto IF34896;
IF34895:
	local[7]= NIL;
IF34896:
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)GETCLASS(ctx,1,local+7); /*class*/
	local[7]= w;
	local[8]= NIL;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	local[8] = local[7]->c.obj.iv[4];
	local[11]= local[8];
	ctx->vsp=local+12;
	w=(pointer)LENGTH(ctx,1,local+11); /*length*/
	local[9] = w;
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)VECTORP(ctx,1,local+11); /*vectorp*/
	if (w==NIL) goto IF34953;
	local[11]= argv[0];
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(*ftab[1])(ctx,2,local+11,&ftab[1],fqv[15]); /*pprint*/
	local[11]= w;
	goto IF34954;
IF34953:
	local[11]= makeint((eusinteger_t)0L);
	local[12]= local[9];
WHL34989:
	local[13]= local[11];
	w = local[12];
	if ((eusinteger_t)local[13] >= (eusinteger_t)w) goto WHX34990;
	local[13]= local[0];
	local[14]= fqv[16];
	local[15]= local[8];
	{ register eusinteger_t i=intval(local[11]);
	  w=(local[15]->c.vec.v[i]);}
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)XFORMAT(ctx,3,local+13); /*format*/
	local[13]= local[8];
	{ register eusinteger_t i=intval(local[11]);
	  w=(local[13]->c.vec.v[i]);}
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)PRNTSIZE(ctx,1,local+13); /*print-size*/
	local[10] = w;
	local[13]= local[10];
	local[14]= makeint((eusinteger_t)20L);
	ctx->vsp=local+15;
	w=(pointer)GREATERP(ctx,2,local+13); /*>*/
	if (w==NIL) goto IF35021;
	local[10] = makeint((eusinteger_t)5L);
	local[13]= local[0];
	ctx->vsp=local+14;
	w=(pointer)TERPRI(ctx,1,local+13); /*terpri*/
	local[13]= w;
	goto IF35022;
IF35021:
	local[13]= NIL;
IF35022:
	if (loadglobal(fqv[13])==NIL) goto IF35040;
	local[13]= argv[0];
	local[14]= local[7];
	local[15]= local[11];
	ctx->vsp=local+16;
	w=(pointer)SLOT(ctx,3,local+13); /*slot*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)PRINT(ctx,1,local+13); /*print*/
	local[13]= w;
	goto IF35041;
IF35040:
	local[13]= argv[0];
	local[14]= local[7];
	local[15]= local[11];
	ctx->vsp=local+16;
	w=(pointer)SLOT(ctx,3,local+13); /*slot*/
	local[13]= w;
	local[14]= local[0];
	local[15]= local[10];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[15]= w;
	local[16]= makeint((eusinteger_t)78L);
	ctx->vsp=local+17;
	w=(*ftab[1])(ctx,4,local+13,&ftab[1],fqv[15]); /*pprint*/
	local[13]= w;
IF35041:
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(pointer)ADD1(ctx,1,local+13); /*1+*/
	local[11] = w;
	goto WHL34989;
WHX34990:
	local[13]= NIL;
BLK34991:
	w = NIL;
	local[11]= w;
IF34954:
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)FINOUT(ctx,1,local+11); /*finish-output*/
	local[7]= w;
	ctx->vsp=local+8;
	unbindx(ctx,2);
	w = local[7];
	local[0]= w;
BLK34863:
	ctx->vsp=local; return(local[0]);}

/*describe-list*/
static pointer F34557describe_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT35086;}
	local[0]= loadglobal(fqv[12]);
ENT35086:
ENT35085:
	if (n>2) maerror();
	local[1]= local[0];
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,FLET35114,env,argv,local);
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)STREAMP(ctx,1,local+3); /*streamp*/
	if (w!=NIL) goto IF35118;
	local[3]= local[0];
	local[4]= fqv[17];
	local[5]= fqv[18];
	local[6]= fqv[19];
	local[7]= fqv[20];
	local[8]= fqv[21];
	local[9]= fqv[22];
	ctx->vsp=local+10;
	w=(*ftab[2])(ctx,7,local+3,&ftab[2],fqv[23]); /*open*/
	local[1] = w;
	local[3]= local[1];
	goto IF35119;
IF35118:
	local[3]= NIL;
IF35119:
	local[3]= argv[0];
	w = local[2];
	ctx->vsp=local+4;
	w=FLET35114(ctx,1,local+3,w);
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)STREAMP(ctx,1,local+3); /*streamp*/
	if (w!=NIL) goto IF35154;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)CLOSE(ctx,1,local+3); /*close*/
	local[3]= w;
	goto IF35155;
IF35154:
	local[3]= NIL;
IF35155:
	w = local[3];
	local[0]= w;
BLK35083:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET35114(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LISTP(ctx,1,local+0); /*listp*/
	if (w==NIL) goto CON35178;
	local[0]= NIL;
	local[1]= argv[0];
WHL35203:
	if (local[1]==NIL) goto WHX35204;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	w = env->c.clo.env2[2];
	ctx->vsp=local+3;
	w=FLET35114(ctx,1,local+2,w);
	goto WHL35203;
WHX35204:
	local[2]= NIL;
BLK35205:
	w = NIL;
	local[0]= w;
	goto CON35176;
CON35178:
	local[0]= env->c.clo.env2[1];
	local[1]= fqv[24];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= argv[0];
	local[1]= env->c.clo.env2[1];
	ctx->vsp=local+2;
	w=(pointer)F34554describe(ctx,2,local+0); /*describe*/
	local[0]= env->c.clo.env2[1];
	ctx->vsp=local+1;
	w=(pointer)TERPRI(ctx,1,local+0); /*terpri*/
	local[0]= env->c.clo.env2[1];
	ctx->vsp=local+1;
	w=(pointer)TERPRI(ctx,1,local+0); /*terpri*/
	local[0]= w;
	goto CON35176;
CON35259:
	local[0]= NIL;
CON35176:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*apropos*/
static pointer F34561apropos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT35286;}
	local[0]= NIL;
ENT35286:
ENT35285:
	if (n>2) maerror();
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[25]); /*string*/
	argv[0] = w;
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,FLET35312,env,argv,local);
	if (local[0]==NIL) goto CON35318;
	local[2]= NIL;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)FINDPACKAGE(ctx,1,local+3); /*find-package*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= *(ovafptr(local[3],fqv[26]));
	local[6]= local[5];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
WHL35354:
	local[7]= local[4];
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)LESSP(ctx,2,local+7); /*<*/
	if (w==NIL) goto WHX35355;
	local[7]= local[5];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[2] = w;
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[4] = w;
	w = local[2];
	if (!issymbol(w)) goto IF35384;
	local[7]= argv[0];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(*ftab[3])(ctx,1,local+8,&ftab[3],fqv[25]); /*string*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,2,local+7,&ftab[4],fqv[27]); /*substringp*/
	if (w==NIL) goto IF35394;
	local[7]= local[2];
	w = local[1];
	ctx->vsp=local+8;
	w=FLET35312(ctx,1,local+7,w);
	local[7]= w;
	goto IF35395;
IF35394:
	local[7]= NIL;
IF35395:
	goto IF35385;
IF35384:
	local[7]= NIL;
IF35385:
	goto WHL35354;
WHX35355:
	local[7]= NIL;
BLK35356:
	w = NIL;
	local[2]= w;
	goto CON35316;
CON35318:
	local[2]= NIL;
	ctx->vsp=local+3;
	w=(pointer)ALLPACKAGES(ctx,0,local+3); /*list-all-packages*/
	local[3]= w;
WHL35439:
	if (local[3]==NIL) goto WHX35440;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= NIL;
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)FINDPACKAGE(ctx,1,local+5); /*find-package*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= *(ovafptr(local[5],fqv[26]));
	local[8]= local[7];
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
WHL35518:
	local[9]= local[6];
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)LESSP(ctx,2,local+9); /*<*/
	if (w==NIL) goto WHX35519;
	local[9]= local[7];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[4] = w;
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[6] = w;
	w = local[4];
	if (!issymbol(w)) goto IF35548;
	local[9]= argv[0];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,1,local+10,&ftab[3],fqv[25]); /*string*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[4])(ctx,2,local+9,&ftab[4],fqv[27]); /*substringp*/
	if (w==NIL) goto IF35558;
	local[9]= local[4];
	w = local[1];
	ctx->vsp=local+10;
	w=FLET35312(ctx,1,local+9,w);
	local[9]= w;
	goto IF35559;
IF35558:
	local[9]= NIL;
IF35559:
	goto IF35549;
IF35548:
	local[9]= NIL;
IF35549:
	goto WHL35518;
WHX35519:
	local[9]= NIL;
BLK35520:
	w = NIL;
	goto WHL35439;
WHX35440:
	local[4]= NIL;
BLK35441:
	w = NIL;
	local[2]= w;
	goto CON35316;
CON35416:
	local[2]= NIL;
CON35316:
	w = NIL;
	local[0]= w;
BLK35283:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET35312(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= T;
	local[1]= fqv[28];
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)FBOUNDP(ctx,1,local+3); /*fboundp*/
	if (w==NIL) goto IF35597;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[5])(ctx,1,local+3,&ftab[5],fqv[29]); /*special-form-p*/
	if (w==NIL) goto IF35605;
	local[3]= fqv[30];
	goto IF35606;
IF35605:
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,1,local+3,&ftab[6],fqv[31]); /*macro-function*/
	if (w==NIL) goto IF35614;
	local[3]= fqv[32];
	goto IF35615;
IF35614:
	local[3]= fqv[33];
IF35615:
IF35606:
	goto IF35598;
IF35597:
	local[3]= fqv[34];
IF35598:
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)BOUNDP(ctx,1,local+4); /*boundp*/
	if (w==NIL) goto IF35623;
	local[4]= argv[0];
	local[5]= fqv[35];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[4];
	if (fqv[36]!=local[5]) goto IF35648;
	local[5]= fqv[37];
	goto IF35649;
IF35648:
	local[5]= local[4];
	if (fqv[38]!=local[5]) goto IF35656;
	local[5]= fqv[39];
	goto IF35657;
IF35656:
	local[5]= local[4];
	if (fqv[40]!=local[5]) goto IF35664;
	local[5]= fqv[41];
	goto IF35665;
IF35664:
	if (T==NIL) goto IF35672;
	local[5]= fqv[42];
	goto IF35673;
IF35672:
	local[5]= NIL;
IF35673:
IF35665:
IF35657:
IF35649:
	w = local[5];
	local[4]= w;
	goto IF35624;
IF35623:
	local[4]= fqv[43];
IF35624:
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)BOUNDP(ctx,1,local+5); /*boundp*/
	if (w==NIL) goto IF35678;
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)SYMBNDVALUE(ctx,1,local+5); /*symbol-bound-value*/
	local[5]= w;
	goto IF35679;
IF35678:
	local[5]= fqv[44];
IF35679:
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,6,local+0); /*format*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*apropos-list*/
static pointer F34564apropos_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT35695;}
	local[0]= NIL;
ENT35695:
ENT35694:
	if (n>2) maerror();
	local[1]= NIL;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[25]); /*string*/
	argv[0] = w;
	if (local[0]==NIL) goto CON35729;
	local[2]= NIL;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)FINDPACKAGE(ctx,1,local+3); /*find-package*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= *(ovafptr(local[3],fqv[26]));
	local[6]= local[5];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
WHL35765:
	local[7]= local[4];
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)LESSP(ctx,2,local+7); /*<*/
	if (w==NIL) goto WHX35766;
	local[7]= local[5];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[2] = w;
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[4] = w;
	w = local[2];
	if (!issymbol(w)) goto IF35795;
	local[7]= argv[0];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(*ftab[3])(ctx,1,local+8,&ftab[3],fqv[25]); /*string*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,2,local+7,&ftab[4],fqv[27]); /*substringp*/
	if (w==NIL) goto IF35805;
	local[7]= local[2];
	w = local[1];
	ctx->vsp=local+8;
	local[1] = cons(ctx,local[7],w);
	local[7]= local[1];
	goto IF35806;
IF35805:
	local[7]= NIL;
IF35806:
	goto IF35796;
IF35795:
	local[7]= NIL;
IF35796:
	goto WHL35765;
WHX35766:
	local[7]= NIL;
BLK35767:
	w = NIL;
	local[2]= w;
	goto CON35727;
CON35729:
	local[2]= NIL;
	ctx->vsp=local+3;
	w=(pointer)ALLPACKAGES(ctx,0,local+3); /*list-all-packages*/
	local[3]= w;
WHL35854:
	if (local[3]==NIL) goto WHX35855;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= NIL;
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)FINDPACKAGE(ctx,1,local+5); /*find-package*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= *(ovafptr(local[5],fqv[26]));
	local[8]= local[7];
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
WHL35933:
	local[9]= local[6];
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)LESSP(ctx,2,local+9); /*<*/
	if (w==NIL) goto WHX35934;
	local[9]= local[7];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[4] = w;
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[6] = w;
	w = local[4];
	if (!issymbol(w)) goto IF35963;
	local[9]= argv[0];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,1,local+10,&ftab[3],fqv[25]); /*string*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[4])(ctx,2,local+9,&ftab[4],fqv[27]); /*substringp*/
	if (w==NIL) goto IF35973;
	local[9]= local[4];
	w = local[1];
	ctx->vsp=local+10;
	local[1] = cons(ctx,local[9],w);
	local[9]= local[1];
	goto IF35974;
IF35973:
	local[9]= NIL;
IF35974:
	goto IF35964;
IF35963:
	local[9]= NIL;
IF35964:
	goto WHL35933;
WHX35934:
	local[9]= NIL;
BLK35935:
	w = NIL;
	goto WHL35854;
WHX35855:
	local[4]= NIL;
BLK35856:
	w = NIL;
	local[2]= w;
	goto CON35727;
CON35831:
	local[2]= NIL;
CON35727:
	w = local[1];
	local[0]= w;
BLK35692:
	ctx->vsp=local; return(local[0]);}

/*dump-string*/
static pointer F34568dump_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT36015;}
	local[0]= loadglobal(fqv[12]);
ENT36015:
	if (n>=3) { local[1]=(argv[2]); goto ENT36014;}
	local[1]= fqv[45];
ENT36014:
	if (n>=4) { local[2]=(argv[3]); goto ENT36013;}
	local[2]= makeint((eusinteger_t)16L);
ENT36013:
ENT36012:
	if (n>4) maerror();
	local[3]= makeint((eusinteger_t)0L);
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	local[5]= NIL;
	local[6]= local[1];
	local[7]= fqv[46];
	local[8]= fqv[47];
	local[9]= (pointer)get_sym_func(fqv[48]);
	ctx->vsp=local+10;
	w=(*ftab[7])(ctx,4,local+6,&ftab[7],fqv[49]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.car;
WHL36081:
	local[6]= local[3];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)LESSP(ctx,2,local+6); /*<*/
	if (w==NIL) goto WHX36082;
	local[6]= local[3];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)MOD(ctx,2,local+6); /*mod*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)NUMEQUAL(ctx,2,local+6); /*=*/
	if (w==NIL) goto IF36090;
	local[6]= local[0];
	local[7]= fqv[50];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	goto IF36091;
IF36090:
	local[6]= NIL;
IF36091:
	local[6]= local[5];
	local[7]= local[6];
	if (fqv[51]!=local[7]) goto IF36117;
	local[7]= local[0];
	local[8]= fqv[52];
	local[9]= argv[0];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,3,local+7); /*format*/
	local[7]= w;
	goto IF36118;
IF36117:
	local[7]= local[6];
	if (fqv[53]!=local[7]) goto IF36132;
	local[7]= local[0];
	local[8]= fqv[54];
	local[9]= makeint((eusinteger_t)65535L);
	local[10]= argv[0];
	local[11]= local[3];
	local[12]= fqv[55];
	ctx->vsp=local+13;
	w=(pointer)PEEK(ctx,3,local+10); /*system:peek*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)LOGAND(ctx,2,local+9); /*logand*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,3,local+7); /*format*/
	local[7]= w;
	goto IF36133;
IF36132:
	local[7]= local[6];
	if (fqv[56]!=local[7]) goto IF36154;
	local[7]= local[0];
	local[8]= fqv[57];
	local[9]= argv[0];
	local[10]= local[3];
	local[11]= fqv[58];
	ctx->vsp=local+12;
	w=(pointer)PEEK(ctx,3,local+9); /*system:peek*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,3,local+7); /*format*/
	local[7]= w;
	goto IF36155;
IF36154:
	local[7]= NIL;
IF36155:
IF36133:
IF36118:
	w = local[7];
	local[6]= local[3];
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)PLUS(ctx,2,local+6); /*+*/
	local[3] = w;
	local[6]= local[3];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)MOD(ctx,2,local+6); /*mod*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)NUMEQUAL(ctx,2,local+6); /*=*/
	if (w==NIL) goto IF36186;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)TERPRI(ctx,1,local+6); /*terpri*/
	local[6]= w;
	goto IF36187;
IF36186:
	local[6]= NIL;
IF36187:
	goto WHL36081;
WHX36082:
	local[6]= NIL;
BLK36083:
	w = local[6];
	local[0]= w;
BLK36010:
	ctx->vsp=local; return(local[0]);}

/*break*/
static pointer F34572break(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT36205;}
	local[0]= NIL;
	local[1]= fqv[59];
	local[2]= loadglobal(fqv[60]);
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
ENT36205:
ENT36204:
	if (n>1) maerror();
	local[1]= loadglobal(fqv[60]);
	ctx->vsp=local+2;
	w=(pointer)ADD1(ctx,1,local+1); /*1+*/
	local[1]= w;
	w = local[1];
	ctx->vsp=local+2;
	bindspecial(ctx,fqv[60],w);
	{jmp_buf jb;
	w = loadglobal(fqv[60]);
	ctx->vsp=local+5;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT36239;}
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(*ftab[0])(ctx,1,local+11,&ftab[0],fqv[6]); /*reploop*/
CAT36239:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[5]= w;
	ctx->vsp=local+6;
	unbindx(ctx,1);
	w = local[5];
	local[0]= w;
BLK36202:
	ctx->vsp=local; return(local[0]);}

/*setbreak*/
static pointer F34575setbreak(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FBOUNDP(ctx,1,local+0); /*fboundp*/
	if (w!=NIL) goto IF36263;
	local[0]= fqv[61];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
	goto IF36264;
IF36263:
	local[0]= NIL;
IF36264:
	local[0]= argv[0];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)GETPROP(ctx,2,local+0); /*get*/
	if (w!=NIL) goto IF36278;
	local[0]= argv[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)SYMFUNC(ctx,1,local+1); /*symbol-function*/
	local[1]= w;
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= argv[0];
	local[1]= fqv[63];
	local[2]= fqv[64];
	local[3]= fqv[65];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[66];
	local[4]= fqv[67];
	local[5]= fqv[68];
	local[6]= fqv[69];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[69];
	local[8]= fqv[62];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[65];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[70];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	ctx->vsp=local+2;
	w=(pointer)SETFUNC(ctx,2,local+0); /*setfunc*/
	local[0]= argv[0];
	goto IF36279;
IF36278:
	local[0]= NIL;
IF36279:
	w = local[0];
	local[0]= w;
BLK36252:
	ctx->vsp=local; return(local[0]);}

/*unbreak*/
static pointer F34578unbreak(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)GETPROP(ctx,2,local+0); /*get*/
	if (w==NIL) goto IF36385;
	local[0]= argv[0];
	local[1]= argv[0];
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)SETFUNC(ctx,2,local+0); /*setfunc*/
	local[0]= argv[0];
	local[1]= NIL;
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= w;
	goto IF36386;
IF36385:
	local[0]= NIL;
IF36386:
	w = local[0];
	local[0]= w;
BLK36374:
	ctx->vsp=local; return(local[0]);}

/*timing*/
static pointer F36418(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST36421:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[71];
	local[2]= fqv[72];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[73];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[74];
	local[5]= fqv[75];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[76];
	local[6]= fqv[77];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[78];
	local[7]= fqv[79];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[1];
	local[4]= fqv[80];
	local[5]= fqv[72];
	local[6]= fqv[81];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[82];
	local[6]= fqv[72];
	local[7]= fqv[83];
	local[8]= fqv[72];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	w = local[0];
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[82];
	local[5]= fqv[78];
	local[6]= fqv[75];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[1];
	local[6]= fqv[80];
	local[7]= fqv[73];
	local[8]= fqv[84];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[82];
	local[8]= fqv[73];
	local[9]= fqv[83];
	local[10]= fqv[73];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[82];
	local[7]= fqv[76];
	local[8]= fqv[85];
	local[9]= fqv[75];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	local[9]= w;
	local[10]= fqv[78];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[3];
	local[8]= fqv[86];
	local[9]= fqv[87];
	local[10]= fqv[88];
	local[11]= fqv[89];
	local[12]= fqv[88];
	local[13]= fqv[90];
	local[14]= fqv[91];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[85];
	local[14]= fqv[78];
	local[15]= fqv[74];
	local[16]= fqv[76];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK36419:
	ctx->vsp=local; return(local[0]);}

/*btrace*/
static pointer F34582btrace(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT36704;}
	local[0]= makeint((eusinteger_t)10L);
ENT36704:
ENT36703:
	if (n>1) maerror();
	local[1]= (pointer)get_sym_func(fqv[92]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)BKTRACE(ctx,1,local+2); /*system::bktrace*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	ctx->vsp=local+3;
	w=(pointer)MAPC(ctx,2,local+1); /*mapc*/
	w = T;
	local[0]= w;
BLK36701:
	ctx->vsp=local; return(local[0]);}

/*eval-dynamic*/
static pointer F34586eval_dynamic(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT36736;}
	ctx->vsp=local+0;
	w=(pointer)LISTBINDINGS(ctx,0,local+0); /*system:list-all-bindings*/
	local[0]= w;
ENT36736:
ENT36735:
	if (n>2) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= local[0];
WHL36778:
	if (local[3]==NIL) goto WHX36779;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= argv[0];
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car!=local[4]) goto IF36827;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+4;
	local[0]=w;
	goto BLK36733;
	goto IF36828;
IF36827:
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)VECTORP(ctx,1,local+4); /*vectorp*/
	if (w==NIL) goto IF36846;
	local[4]= argv[0];
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	ctx->vsp=local+6;
	w=(*ftab[8])(ctx,2,local+4,&ftab[8],fqv[93]); /*position*/
	local[1] = w;
	if (local[1]==NIL) goto IF36846;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.cdr;
	ctx->vsp=local+6;
	w=(pointer)GETCLASS(ctx,1,local+5); /*class*/
	local[5]= w;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)SLOT(ctx,3,local+4); /*slot*/
	ctx->vsp=local+4;
	local[0]=w;
	goto BLK36733;
	goto IF36847;
IF36846:
	local[4]= NIL;
IF36847:
IF36828:
	goto WHL36778;
WHX36779:
	local[4]= NIL;
BLK36780:
	w = NIL;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)BOUNDP(ctx,1,local+2); /*boundp*/
	if (w==NIL) goto IF36896;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SYMVALUE(ctx,1,local+2); /*symbol-value*/
	local[2]= w;
	goto IF36897;
IF36896:
	local[2]= fqv[94];
IF36897:
	w = local[2];
	local[0]= w;
BLK36733:
	ctx->vsp=local; return(local[0]);}

/*step-hook*/
static pointer F34589step_hook(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= T;
	local[3]= makeint((eusinteger_t)10L);
	local[4]= makeint((eusinteger_t)5L);
	w = local[4];
	ctx->vsp=local+5;
	bindspecial(ctx,fqv[13],w);
	w = local[3];
	ctx->vsp=local+8;
	bindspecial(ctx,fqv[14],w);
	local[11]= loadglobal(fqv[95]);
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[11]= w;
	storeglobal(fqv[95],w);
	local[11]= loadglobal(fqv[95]);
	ctx->vsp=local+12;
	w=(*ftab[9])(ctx,1,local+11,&ftab[9],fqv[96]); /*spaces*/
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)PRINT(ctx,1,local+11); /*print*/
WHL36971:
	if (local[2]==NIL) goto WHX36972;
	local[11]= T;
	local[12]= fqv[97];
	local[13]= loadglobal(fqv[95]);
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,3,local+11); /*format*/
	ctx->vsp=local+11;
	w=(pointer)FINOUT(ctx,0,local+11); /*finish-output*/
	local[11]= loadglobal(fqv[98]);
	w = local[11];
	ctx->vsp=local+12;
	bindspecial(ctx,fqv[99],w);
	ctx->vsp=local+15;
	w=(pointer)READ(ctx,0,local+15); /*read*/
	local[15]= w;
	ctx->vsp=local+16;
	unbindx(ctx,1);
	w = local[15];
	local[0] = w;
	local[11]= local[0];
	local[12]= local[11];
	w = fqv[100];
	if (memq(local[12],w)==NIL) goto IF37023;
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(*ftab[1])(ctx,1,local+12,&ftab[1],fqv[15]); /*pprint*/
	local[12]= w;
	goto IF37024;
IF37023:
	local[12]= local[11];
	w = fqv[101];
	if (memq(local[12],w)==NIL) goto IF37037;
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(pointer)PRINT(ctx,1,local+12); /*print*/
	local[12]= w;
	goto IF37038;
IF37037:
	local[12]= local[11];
	w = fqv[102];
	if (memq(local[12],w)==NIL) goto IF37051;
	local[12]= argv[0];
	local[13]= argv[1];
	ctx->vsp=local+14;
	w=(pointer)EVAL(ctx,2,local+12); /*eval*/
	local[1] = w;
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(pointer)PRINT(ctx,1,local+12); /*print*/
	local[12]= T;
	local[13]= fqv[103];
	local[14]= local[1];
	ctx->vsp=local+15;
	w=(pointer)XFORMAT(ctx,3,local+12); /*format*/
	local[2] = NIL;
	local[12]= local[2];
	goto IF37052;
IF37051:
	local[12]= local[11];
	w = fqv[104];
	if (memq(local[12],w)==NIL) goto IF37088;
	local[12]= argv[0];
	local[13]= (pointer)get_sym_func(fqv[66]);
	local[14]= argv[1];
	ctx->vsp=local+15;
	w=(pointer)EVALHOOK(ctx,3,local+12); /*evalhook*/
	local[1] = w;
	local[12]= T;
	local[13]= fqv[105];
	local[14]= argv[0];
	local[15]= local[1];
	ctx->vsp=local+16;
	w=(pointer)XFORMAT(ctx,4,local+12); /*format*/
	local[2] = NIL;
	local[12]= local[2];
	goto IF37089;
IF37088:
	local[12]= local[11];
	w = fqv[106];
	if (memq(local[12],w)==NIL) goto IF37124;
	local[12]= fqv[107];
	w = fqv[108];
	ctx->vsp=local+13;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	goto IF37125;
IF37124:
	local[12]= local[11];
	w = fqv[109];
	if (memq(local[12],w)==NIL) goto IF37142;
	local[12]= T;
	local[13]= fqv[110];
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,2,local+12); /*format*/
	local[12]= T;
	local[13]= fqv[111];
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,2,local+12); /*format*/
	local[12]= T;
	local[13]= fqv[112];
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,2,local+12); /*format*/
	local[12]= T;
	local[13]= fqv[113];
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,2,local+12); /*format*/
	local[12]= T;
	local[13]= fqv[114];
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,2,local+12); /*format*/
	local[12]= w;
	goto IF37143;
IF37142:
	local[12]= local[11];
	if (fqv[115]!=local[12]) goto IF37170;
	ctx->vsp=local+12;
	w=(pointer)READ(ctx,0,local+12); /*read*/
	local[0] = w;
	w = local[0];
	if (!issymbol(w)) goto CON37191;
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)F34586eval_dynamic(ctx,1,local+12); /*eval-dynamic*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)PRINT(ctx,1,local+12); /*print*/
	local[12]= w;
	goto CON37189;
CON37191:
	{jmp_buf jb;
	w = fqv[116];
	ctx->vsp=local+12;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT37205;}
	local[18]= fqv[117];
	w = local[18];
	ctx->vsp=local+19;
	bindspecial(ctx,fqv[118],w);
	local[22]= local[0];
	ctx->vsp=local+23;
	w=(pointer)EVAL(ctx,1,local+22); /*eval*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)PRINT(ctx,1,local+22); /*print*/
	local[22]= w;
	ctx->vsp=local+23;
	unbindx(ctx,1);
	w = local[22];
CAT37205:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[12]= w;
	goto CON37189;
CON37201:
	local[12]= NIL;
CON37189:
	goto IF37171;
IF37170:
	if (T==NIL) goto IF37234;
	local[12]= T;
	local[13]= fqv[119];
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,2,local+12); /*format*/
	local[12]= w;
	goto IF37235;
IF37234:
	local[12]= NIL;
IF37235:
IF37171:
IF37143:
IF37125:
IF37089:
IF37052:
IF37038:
IF37024:
	w = local[12];
	goto WHL36971;
WHX36972:
	local[11]= NIL;
BLK36973:
	local[11]= loadglobal(fqv[95]);
	ctx->vsp=local+12;
	w=(pointer)SUB1(ctx,1,local+11); /*1-*/
	local[11]= w;
	storeglobal(fqv[95],w);
	local[11]= local[1];
	ctx->vsp=local+12;
	unbindx(ctx,2);
	w = local[11];
	local[0]= w;
BLK36912:
	ctx->vsp=local; return(local[0]);}

/*step*/
static pointer F37256(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[120];
	local[1]= fqv[82];
	local[2]= fqv[95];
	local[3]= fqv[121];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	local[2]= fqv[122];
	local[3]= fqv[69];
	local[4]= fqv[107];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[123];
	local[5]= fqv[69];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[124];
	local[7]= fqv[69];
	local[8]= fqv[66];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK37257:
	ctx->vsp=local; return(local[0]);}

/*tracex*/
static pointer F34594tracex(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= loadglobal(fqv[95]);
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[2]= w;
	w = local[2];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[95],w);
	local[6]= T;
	local[7]= fqv[125];
	local[8]= loadglobal(fqv[95]);
	local[9]= argv[0];
	local[10]= argv[1];
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,5,local+6); /*format*/
	local[6]= argv[0];
	local[7]= fqv[126];
	ctx->vsp=local+8;
	w=(pointer)GETPROP(ctx,2,local+6); /*get*/
	local[6]= w;
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,2,local+6); /*apply*/
	local[0] = w;
	local[6]= T;
	local[7]= fqv[127];
	local[8]= loadglobal(fqv[95]);
	local[9]= local[0];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,5,local+6); /*format*/
	local[6]= loadglobal(fqv[95]);
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)EQUAL(ctx,2,local+6); /*equal*/
	local[6]= w;
	if (w==NIL) goto AND37399;
	ctx->vsp=local+6;
	w=(pointer)TERPRI(ctx,0,local+6); /*terpri*/
	local[6]= w;
AND37399:
	local[6]= local[0];
	ctx->vsp=local+7;
	unbindx(ctx,1);
	w = local[6];
	local[0]= w;
BLK37341:
	ctx->vsp=local; return(local[0]);}

/*trace1*/
static pointer F34597trace1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)SYMFUNC(ctx,1,local+0); /*symbol-function*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[10])(ctx,1,local+1,&ftab[10],fqv[128]); /*functionp*/
	if (w!=NIL) goto IF37435;
	w = NIL;
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK37414;
	goto IF37436;
IF37435:
	local[1]= NIL;
IF37436:
	local[1]= argv[0];
	local[2]= local[0];
	local[3]= fqv[126];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= argv[0];
	local[2]= fqv[63];
	local[3]= fqv[129];
	local[4]= fqv[130];
	local[5]= fqv[69];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[131];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,3,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*setfunc*/
	w = argv[0];
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK37414;
	w = local[1];
	local[0]= w;
BLK37414:
	ctx->vsp=local; return(local[0]);}

/*trace*/
static pointer F37491(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST37494:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[132];
	local[2]= fqv[133];
	local[3]= fqv[69];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[134];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[135];
	local[4]= fqv[48];
	local[5]= fqv[133];
	local[6]= fqv[134];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[136];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[137];
	local[6]= fqv[138];
	local[7]= fqv[133];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[139];
	local[7]= fqv[140];
	local[8]= fqv[133];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[86];
	local[7]= fqv[141];
	local[8]= fqv[133];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[142];
	local[9]= fqv[133];
	local[10]= fqv[134];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK37492:
	ctx->vsp=local; return(local[0]);}

/*untrace*/
static pointer F37625(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST37628:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	if (local[0]!=NIL) goto IF37638;
	local[0] = loadglobal(fqv[134]);
	local[1]= local[0];
	goto IF37639;
IF37638:
	local[1]= NIL;
IF37639:
	local[1]= fqv[132];
	local[2]= fqv[133];
	local[3]= fqv[69];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[134];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[135];
	local[4]= fqv[48];
	local[5]= fqv[133];
	local[6]= fqv[134];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[143];
	local[6]= fqv[124];
	local[7]= fqv[133];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[68];
	local[8]= fqv[133];
	local[9]= fqv[69];
	local[10]= fqv[126];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[82];
	local[7]= fqv[134];
	local[8]= fqv[144];
	local[9]= fqv[133];
	local[10]= fqv[134];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
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
	local[0]= w;
BLK37626:
	ctx->vsp=local; return(local[0]);}

/*inspect1*/
static pointer F34603inspect1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT37775;}
	local[0]= NIL;
ENT37775:
ENT37774:
	if (n>2) maerror();
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,FLET37791,env,argv,local);
	local[2]= local[0];
	w = local[1];
	ctx->vsp=local+3;
	w=FLET37791(ctx,1,local+2,w);
	local[2]= w;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)GETCLASS(ctx,1,local+3); /*class*/
	local[3]= *(ovafptr(w,fqv[145]));
	local[4]= NIL;
TAG37823:
	if (NIL==NIL) goto IF37828;
	w = NIL;
	ctx->vsp=local+5;
	local[2]=w;
	goto BLK37797;
	goto IF37829;
IF37828:
	local[5]= NIL;
IF37829:
	w = local[2];
	if (!issymbol(w)) goto IF37849;
	local[5]= local[2]->c.obj.iv[4];
	{ register eusinteger_t i=intval(makeint((eusinteger_t)0L));
	  w=makeint(local[5]->c.str.chars[i]);}
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)CHUPCASE(ctx,1,local+5); /*char-upcase*/
	local[5]= w;
	goto IF37850;
IF37849:
	local[5]= local[2];
IF37850:
	local[6]= local[5];
	if (fqv[146]!=local[6]) goto IF37869;
	local[6]= argv[0];
	local[7]= loadglobal(fqv[147]);
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)3L);
	ctx->vsp=local+10;
	w=(pointer)F34554describe(ctx,4,local+6); /*describe*/
	local[6]= w;
	goto IF37870;
IF37869:
	local[6]= local[5];
	if (fqv[148]!=local[6]) goto IF37882;
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(*ftab[1])(ctx,1,local+6,&ftab[1],fqv[15]); /*pprint*/
	local[6]= w;
	goto IF37883;
IF37882:
	local[6]= local[5];
	if (fqv[149]!=local[6]) goto IF37893;
	ctx->vsp=local+6;
	w=(pointer)READ(ctx,0,local+6); /*read*/
	local[2] = w;
	local[6]= loadglobal(fqv[25]);
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(*ftab[3])(ctx,1,local+7,&ftab[3],fqv[25]); /*string*/
	local[7]= w;
	local[8]= fqv[150];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(*ftab[3])(ctx,1,local+9,&ftab[3],fqv[25]); /*string*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)CONCATENATE(ctx,4,local+6); /*concatenate*/
	local[4] = w;
	local[6]= local[2];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(*ftab[11])(ctx,2,local+6,&ftab[11],fqv[151]); /*find*/
	if (w!=NIL) goto OR37930;
	w = local[2];
	if (!isint(w)) goto AND37939;
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)ARRAYP(ctx,1,local+6); /*arrayp*/
	if (w!=NIL) goto OR37944;
	w = argv[0];
	if (iscons(w)) goto OR37944;
	goto AND37939;
OR37944:
	local[6]= local[2];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LESSP(ctx,2,local+6); /*<*/
	if (w==NIL) goto AND37939;
	goto OR37930;
AND37939:
	goto IF37928;
OR37930:
	w = local[2];
	if (!isint(w)) goto IF37962;
	local[6]= argv[0];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	goto IF37963;
IF37962:
	local[6]= argv[0];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)GETCLASS(ctx,1,local+7); /*class*/
	local[7]= w;
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)SLOT(ctx,3,local+6); /*slot*/
	local[6]= w;
IF37963:
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)F34603inspect1(ctx,2,local+6); /*inspect1*/
	local[6]= w;
	goto IF37929;
IF37928:
	local[6]= makeint((eusinteger_t)4L);
	local[7]= fqv[152];
	ctx->vsp=local+8;
	w=(pointer)F34547warning_message(ctx,2,local+6); /*warning-message*/
	local[6]= w;
IF37929:
	goto IF37894;
IF37893:
	local[6]= local[5];
	if (fqv[153]!=local[6]) goto IF37983;
	w = NIL;
	ctx->vsp=local+6;
	local[0]=w;
	goto BLK37772;
	goto IF37984;
IF37983:
	local[6]= local[5];
	if (fqv[154]!=local[6]) goto IF37994;
	local[6]= fqv[155];
	w = NIL;
	ctx->vsp=local+7;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	goto IF37995;
IF37994:
	local[6]= local[5];
	if (fqv[156]!=local[6]) goto IF38007;
	ctx->vsp=local+6;
	w=(pointer)READ(ctx,0,local+6); /*read*/
	local[2] = w;
	ctx->vsp=local+6;
	w=(pointer)READ(ctx,0,local+6); /*read*/
	local[4] = w;
	w = local[2];
	if (!isint(w)) goto IF38030;
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)ARRAYP(ctx,1,local+6); /*arrayp*/
	if (w!=NIL) goto OR38036;
	w = argv[0];
	if (iscons(w)) goto OR38036;
	goto IF38030;
OR38036:
	local[6]= local[2];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LESSP(ctx,2,local+6); /*<*/
	if (w==NIL) goto IF38030;
	local[6]= argv[0];
	local[7]= local[2];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)SETELT(ctx,3,local+6); /*setelt*/
	local[6]= w;
	goto IF38031;
IF38030:
	local[6]= local[2];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(*ftab[11])(ctx,2,local+6,&ftab[11],fqv[151]); /*find*/
	if (w==NIL) goto IF38059;
	local[6]= argv[0];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)GETCLASS(ctx,1,local+7); /*class*/
	local[7]= w;
	local[8]= local[2];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)SETSLOT(ctx,4,local+6); /*setslot*/
	local[6]= w;
	goto IF38060;
IF38059:
	local[6]= NIL;
IF38060:
IF38031:
	goto IF38008;
IF38007:
	local[6]= local[5];
	w = fqv[157];
	if (memq(local[6],w)==NIL) goto IF38077;
	local[6]= T;
	local[7]= fqv[158];
	ctx->vsp=local+8;
	w=(pointer)XFORMAT(ctx,2,local+6); /*format*/
	local[6]= w;
	goto IF38078;
IF38077:
	if (T==NIL) goto IF38090;
	local[6]= local[2];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(*ftab[11])(ctx,2,local+6,&ftab[11],fqv[151]); /*find*/
	if (w==NIL) goto CON38097;
	local[6]= argv[0];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)GETCLASS(ctx,1,local+7); /*class*/
	local[7]= w;
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)SLOT(ctx,3,local+6); /*slot*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)F34554describe(ctx,1,local+6); /*describe*/
	local[6]= w;
	goto CON38095;
CON38097:
	w = local[2];
	if (!isint(w)) goto CON38114;
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)ARRAYP(ctx,1,local+6); /*arrayp*/
	if (w!=NIL) goto OR38119;
	w = argv[0];
	if (iscons(w)) goto OR38119;
	goto CON38114;
OR38119:
	local[6]= local[2];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LESSP(ctx,2,local+6); /*<*/
	if (w==NIL) goto CON38114;
	local[6]= argv[0];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)PRINT(ctx,1,local+6); /*print*/
	local[6]= w;
	goto CON38095;
CON38114:
	{jmp_buf jb;
	w = fqv[159];
	ctx->vsp=local+6;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT38146;}
	local[12]= fqv[160];
	w = local[12];
	ctx->vsp=local+13;
	bindspecial(ctx,fqv[118],w);
	local[16]= local[2];
	ctx->vsp=local+17;
	w=(pointer)EVAL(ctx,1,local+16); /*eval*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)PRINT(ctx,1,local+16); /*print*/
	local[16]= w;
	ctx->vsp=local+17;
	unbindx(ctx,1);
	w = local[16];
CAT38146:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[6]= w;
	goto CON38095;
CON38142:
	local[6]= NIL;
CON38095:
	goto IF38091;
IF38090:
	local[6]= NIL;
IF38091:
IF38078:
IF38008:
IF37995:
IF37984:
IF37894:
IF37883:
IF37870:
	w = local[6];
	local[5]= local[0];
	w = local[1];
	ctx->vsp=local+6;
	w=FLET37791(ctx,1,local+5,w);
	local[2] = w;
	local[4] = NIL;
	ctx->vsp=local+5;
	goto TAG37823;
	w = NIL;
	local[2]= w;
BLK37797:
	w = local[2];
	local[0]= w;
BLK37772:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET37791(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= T;
	local[1]= fqv[161];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= T;
	ctx->vsp=local+1;
	w=(pointer)FINOUT(ctx,1,local+0); /*finish-output*/
	local[0]= loadglobal(fqv[162]);
	local[1]= NIL;
	local[2]= fqv[163];
	ctx->vsp=local+3;
	w=(pointer)READ(ctx,3,local+0); /*read*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*inspect*/
static pointer F38219(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[122];
	local[1]= fqv[69];
	local[2]= fqv[155];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	local[2]= fqv[164];
	local[3]= argv[0];
	local[4]= fqv[3];
	local[5]= fqv[136];
	local[6]= fqv[165];
	local[7]= fqv[69];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK38220:
	ctx->vsp=local; return(local[0]);}

/*time-func*/
static pointer F34606time_func(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[63];
	local[1]= fqv[64];
	local[2]= fqv[65];
	local[3]= fqv[166];
	local[4]= fqv[167];
	local[5]= fqv[168];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	local[2]= fqv[169];
	local[3]= fqv[68];
	local[4]= fqv[69];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[170];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[82];
	local[4]= fqv[167];
	local[5]= fqv[171];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	local[5]= w;
	local[6]= fqv[168];
	local[7]= fqv[172];
	local[8]= fqv[68];
	local[9]= fqv[69];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[173];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[65];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[169];
	local[5]= fqv[68];
	local[6]= fqv[69];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[174];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[85];
	local[7]= fqv[171];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[7]= w;
	local[8]= fqv[167];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[168];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK38283:
	ctx->vsp=local; return(local[0]);}

/*time*/
static pointer F38456(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT38460;}
	local[0]= NIL;
ENT38460:
ENT38459:
	if (n>2) maerror();
	local[1]= fqv[120];
	local[2]= fqv[135];
	local[3]= fqv[68];
	local[4]= fqv[69];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[173];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[175];
	local[5]= fqv[176];
	local[6]= fqv[69];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[69];
	local[8]= fqv[177];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[69];
	local[9]= fqv[178];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[68];
	local[10]= fqv[69];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[170];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[69];
	local[11]= fqv[179];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[69];
	local[12]= fqv[180];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[69];
	local[13]= fqv[181];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[89];
	local[14]= fqv[182];
	local[15]= fqv[68];
	local[16]= fqv[69];
	local[17]= argv[0];
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	local[17]= fqv[174];
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[69];
	local[15]= fqv[183];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[184];
	local[7]= local[0];
	local[8]= fqv[143];
	local[9]= fqv[68];
	local[10]= fqv[69];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[170];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[185];
	local[11]= fqv[68];
	local[12]= fqv[69];
	local[13]= argv[0];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[174];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[186];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[187];
	local[5]= fqv[2];
	local[6]= fqv[138];
	local[7]= fqv[69];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[31];
	local[7]= fqv[69];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[188];
	local[6]= fqv[189];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[86];
	local[6]= fqv[71];
	local[7]= fqv[190];
	local[8]= fqv[124];
	local[9]= fqv[69];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[7]= w;
	local[8]= fqv[143];
	local[9]= fqv[68];
	local[10]= fqv[69];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[170];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[191];
	local[11]= fqv[68];
	local[12]= fqv[69];
	local[13]= argv[0];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[174];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[192];
	local[13]= fqv[68];
	local[14]= fqv[69];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	local[15]= fqv[173];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[190];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[193];
	local[10]= fqv[69];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[194];
	local[12]= fqv[69];
	local[13]= argv[0];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[142];
	local[11]= fqv[69];
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[195];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[176];
	local[12]= fqv[69];
	local[13]= argv[0];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[69];
	local[14]= fqv[177];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[69];
	local[15]= fqv[196];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	local[15]= fqv[69];
	local[16]= fqv[197];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK38457:
	ctx->vsp=local; return(local[0]);}

/*untime*/
static pointer F38994(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[120];
	local[1]= fqv[198];
	local[2]= fqv[68];
	local[3]= fqv[69];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[173];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[82];
	local[4]= fqv[195];
	local[5]= fqv[144];
	local[6]= fqv[69];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[195];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[193];
	local[5]= fqv[69];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[68];
	local[7]= fqv[69];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[173];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[69];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK38995:
	ctx->vsp=local; return(local[0]);}

/*list-symbols*/
static pointer F34608list_symbols(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[1];
WHL39154:
	if (local[2]==NIL) goto WHX39155;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= NIL;
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)FINDPACKAGE(ctx,1,local+4); /*find-package*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= *(ovafptr(local[4],fqv[26]));
	local[7]= local[6];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
WHL39233:
	local[8]= local[5];
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)LESSP(ctx,2,local+8); /*<*/
	if (w==NIL) goto WHX39234;
	local[8]= local[6];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[3] = w;
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[5] = w;
	w = local[3];
	if (!issymbol(w)) goto IF39263;
	local[8]= argv[0];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,2,local+8); /*funcall*/
	if (w==NIL) goto IF39272;
	local[8]= local[3];
	w = local[0];
	ctx->vsp=local+9;
	local[0] = cons(ctx,local[8],w);
	local[8]= local[0];
	goto IF39273;
IF39272:
	local[8]= NIL;
IF39273:
	goto IF39264;
IF39263:
	local[8]= NIL;
IF39264:
	goto WHL39233;
WHX39234:
	local[8]= NIL;
BLK39235:
	w = NIL;
	goto WHL39154;
WHX39155:
	local[3]= NIL;
BLK39156:
	w = NIL;
	local[1]= local[0];
	local[2]= (pointer)get_sym_func(fqv[199]);
	ctx->vsp=local+3;
	w=(pointer)SORT(ctx,2,local+1); /*sort*/
	local[0]= w;
BLK39116:
	ctx->vsp=local; return(local[0]);}

/*functions*/
static pointer F34610functions(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT39310;}
	local[0]= fqv[200];
ENT39310:
ENT39309:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-1);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[25]); /*string*/
	local[0] = w;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO39333,env,argv,local);
	if (local[1]==NIL) goto IF39336;
	local[3]= local[1];
	goto IF39337;
IF39336:
	ctx->vsp=local+3;
	w=(pointer)ALLPACKAGES(ctx,0,local+3); /*list-all-packages*/
	local[3]= w;
IF39337:
	ctx->vsp=local+4;
	w=(pointer)F34608list_symbols(ctx,2,local+2); /*list-symbols*/
	local[0]= w;
BLK39307:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO39333(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FBOUNDP(ctx,1,local+0); /*fboundp*/
	local[0]= w;
	if (w==NIL) goto AND39356;
	local[0]= env->c.clo.env2[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[25]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[27]); /*substringp*/
	local[0]= w;
AND39356:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*special-variables*/
static pointer F34612special_variables(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT39375;}
	local[0]= fqv[201];
ENT39375:
ENT39374:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-1);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[25]); /*string*/
	local[0] = w;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO39398,env,argv,local);
	if (local[1]==NIL) goto IF39401;
	local[3]= local[1];
	goto IF39402;
IF39401:
	ctx->vsp=local+3;
	w=(pointer)ALLPACKAGES(ctx,0,local+3); /*list-all-packages*/
	local[3]= w;
IF39402:
	ctx->vsp=local+4;
	w=(pointer)F34608list_symbols(ctx,2,local+2); /*list-symbols*/
	local[0]= w;
BLK39372:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO39398(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	local[0]= w;
	if (w==NIL) goto AND39421;
	local[0]= argv[0];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)3L);
	ctx->vsp=local+2;
	w=(pointer)GREQP(ctx,2,local+0); /*>=*/
	local[0]= w;
	if (w==NIL) goto AND39421;
	local[0]= env->c.clo.env2[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[25]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[27]); /*substringp*/
	local[0]= w;
AND39421:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*global-variables*/
static pointer F34614global_variables(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT39449;}
	local[0]= fqv[202];
ENT39449:
ENT39448:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-1);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[25]); /*string*/
	local[0] = w;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO39472,env,argv,local);
	if (local[1]==NIL) goto IF39475;
	local[3]= local[1];
	goto IF39476;
IF39475:
	ctx->vsp=local+3;
	w=(pointer)ALLPACKAGES(ctx,0,local+3); /*list-all-packages*/
	local[3]= w;
IF39476:
	ctx->vsp=local+4;
	w=(pointer)F34608list_symbols(ctx,2,local+2); /*list-symbols*/
	local[0]= w;
BLK39446:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO39472(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	local[0]= w;
	if (w==NIL) goto AND39495;
	local[0]= argv[0];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)2L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	local[0]= w;
	if (w==NIL) goto AND39495;
	local[0]= env->c.clo.env2[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[25]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[27]); /*substringp*/
	local[0]= w;
AND39495:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*variables*/
static pointer F34616variables(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT39523;}
	local[0]= fqv[203];
ENT39523:
ENT39522:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-1);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[25]); /*string*/
	local[0] = w;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO39546,env,argv,local);
	if (local[1]==NIL) goto IF39549;
	local[3]= local[1];
	goto IF39550;
IF39549:
	ctx->vsp=local+3;
	w=(pointer)ALLPACKAGES(ctx,0,local+3); /*list-all-packages*/
	local[3]= w;
IF39550:
	ctx->vsp=local+4;
	w=(pointer)F34608list_symbols(ctx,2,local+2); /*list-symbols*/
	local[0]= w;
BLK39520:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO39546(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	local[0]= w;
	if (w==NIL) goto AND39569;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[12])(ctx,1,local+0,&ftab[12],fqv[204]); /*constantp*/
	local[0]= ((w)==NIL?T:NIL);
	if (local[0]==NIL) goto AND39569;
	local[0]= env->c.clo.env2[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[25]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[27]); /*substringp*/
	local[0]= w;
AND39569:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*constants*/
static pointer F34618constants(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT39596;}
	local[0]= fqv[205];
ENT39596:
ENT39595:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO39610,env,argv,local);
	if (local[1]==NIL) goto IF39613;
	local[3]= local[1];
	goto IF39614;
IF39613:
	ctx->vsp=local+3;
	w=(pointer)ALLPACKAGES(ctx,0,local+3); /*list-all-packages*/
	local[3]= w;
IF39614:
	ctx->vsp=local+4;
	w=(pointer)F34608list_symbols(ctx,2,local+2); /*list-symbols*/
	local[0]= w;
BLK39593:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO39610(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[12])(ctx,1,local+0,&ftab[12],fqv[204]); /*constantp*/
	local[0]= w;
	if (w==NIL) goto AND39633;
	local[0]= env->c.clo.env2[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[25]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[27]); /*substringp*/
	local[0]= w;
AND39633:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*methods*/
static pointer F34620methods(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT39653;}
	local[0]= fqv[206];
ENT39653:
	if (n>=2) { local[1]=(argv[1]); goto ENT39652;}
	local[1]= fqv[207];
	ctx->vsp=local+2;
	w=(pointer)FINDPACKAGE(ctx,1,local+1); /*find-package*/
	local[1]= w;
ENT39652:
ENT39651:
	if (n>2) maerror();
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO39672,env,argv,local);
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO39676,env,argv,local);
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)F34608list_symbols(ctx,2,local+3); /*list-symbols*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[0]= w;
BLK39649:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO39672(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= argv[0];
	local[2]= fqv[208];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[1]= w;
	local[2]= fqv[209];
	ctx->vsp=local+3;
	w=(*ftab[13])(ctx,2,local+1,&ftab[13],fqv[210]); /*send-all*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO39676(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env2[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[25]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[27]); /*substringp*/
	local[0]= w;
	if (w==NIL) goto AND39718;
	local[0]= argv[0];
	local[1]= fqv[208];
	ctx->vsp=local+2;
	w=(pointer)GETPROP(ctx,2,local+0); /*get*/
	local[0]= w;
AND39718:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*method-list*/
static pointer F34622method_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT39739;}
	local[0]= T;
ENT39739:
	if (n>=2) { local[1]=(argv[1]); goto ENT39738;}
	local[1]= NIL;
ENT39738:
ENT39737:
	ctx->vsp=local+2;
	local[2]= minilist(ctx,&argv[n],n-2);
	if (local[2]!=NIL) goto IF39757;
	ctx->vsp=local+3;
	w=(pointer)LISTALLCLASSES(ctx,0,local+3); /*system:list-all-classes*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)NREVERSE(ctx,1,local+3); /*nreverse*/
	local[2] = w;
	local[3]= local[2];
	goto IF39758;
IF39757:
	local[3]= NIL;
IF39758:
	local[3]= NIL;
	local[4]= local[2];
WHL39793:
	if (local[4]==NIL) goto WHX39794;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[0];
	local[8]= fqv[211];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(*ftab[14])(ctx,1,local+9,&ftab[14],fqv[212]); /*metaclass-name*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,3,local+7); /*format*/
	local[7]= (pointer)get_sym_func(fqv[213]);
	local[8]= local[3]->c.obj.iv[7];
	ctx->vsp=local+9;
	w=(pointer)MAPCAR(ctx,2,local+7); /*mapcar*/
	local[6] = w;
	local[7]= NIL;
	local[8]= local[6];
	local[9]= (pointer)get_sym_func(fqv[199]);
	ctx->vsp=local+10;
	w=(pointer)SORT(ctx,2,local+8); /*sort*/
	local[8]= w;
WHL39899:
	if (local[8]==NIL) goto WHX39900;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8] = (w)->c.cons.cdr;
	w = local[9];
	local[7] = w;
	local[9]= local[3];
	local[10]= local[7];
	local[11]= fqv[214];
	ctx->vsp=local+12;
	w=(*ftab[15])(ctx,2,local+10,&ftab[15],fqv[215]); /*documentation*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[7])(ctx,2,local+9,&ftab[7],fqv[49]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	if (local[5]==NIL) goto IF39968;
	local[9]= local[5];
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,2,local+9); /*aref*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)40L);
	ctx->vsp=local+11;
	w=(pointer)EQUAL(ctx,2,local+9); /*equal*/
	if (w==NIL) goto IF39968;
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[16])(ctx,1,local+9,&ftab[16],fqv[216]); /*read-from-string*/
	local[5] = w;
	w = local[5];
	if (!iscons(w)) goto IF39996;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	if (fqv[217]!=local[9]) goto IF40005;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[9];
	local[9]= w;
	goto IF40006;
IF40005:
	local[9]= NIL;
IF40006:
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	if (fqv[218]!=local[9]) goto IF40053;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[9];
	local[9]= w;
	goto IF40054;
IF40053:
	local[9]= NIL;
IF40054:
	goto IF39997;
IF39996:
	local[9]= NIL;
IF39997:
	goto IF39969;
IF39968:
	local[9]= NIL;
IF39969:
	local[9]= local[0];
	local[10]= fqv[219];
	local[11]= makeint((eusinteger_t)9L);
	local[12]= local[7];
	if (local[1]==NIL) goto IF40104;
	if (local[5]==NIL) goto IF40104;
	local[13]= local[5];
	goto IF40105;
IF40104:
	local[13]= fqv[220];
IF40105:
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,5,local+9); /*format*/
	goto WHL39899;
WHX39900:
	local[9]= NIL;
BLK39901:
	w = NIL;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)TERPRI(ctx,1,local+7); /*terpri*/
	goto WHL39793;
WHX39794:
	local[5]= NIL;
BLK39795:
	w = NIL;
	local[0]= w;
BLK39735:
	ctx->vsp=local; return(local[0]);}

/*more*/
static pointer F40128(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= fqv[221];
	ctx->vsp=local+2;
	w=(pointer)GETPID(ctx,0,local+2); /*unix:getpid*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	local[1]= NIL;
	local[2]= fqv[222];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[1]= w;
	local[2]= fqv[223];
	local[3]= fqv[120];
	local[4]= fqv[224];
	local[5]= fqv[12];
	local[6]= local[0];
	local[7]= fqv[17];
	local[8]= fqv[18];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[225];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[226];
	local[5]= local[0];
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
	local[0]= w;
BLK40129:
	ctx->vsp=local; return(local[0]);}

/*y-or-n-p*/
static pointer F34624y_or_n_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT40221;}
	local[0]= NIL;
ENT40221:
ENT40220:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-1);
	local[2]= NIL;
	local[3]= NIL;
TAG40238:
	if (local[0]==NIL) goto IF40244;
	local[4]= (pointer)get_sym_func(fqv[3]);
	local[5]= T;
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,4,local+4); /*apply*/
	local[4]= w;
	goto IF40245;
IF40244:
	local[4]= NIL;
IF40245:
	local[4]= T;
	local[5]= fqv[227];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,2,local+4); /*format*/
	local[4]= T;
	ctx->vsp=local+5;
	w=(pointer)FINOUT(ctx,1,local+4); /*finish-output*/
	local[4]= T;
	ctx->vsp=local+5;
	w=(pointer)READLINE(ctx,1,local+4); /*read-line*/
	local[3] = w;
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	if (makeint((eusinteger_t)0L)!=local[4]) goto IF40274;
	ctx->vsp=local+4;
	goto TAG40238;
	goto IF40275;
IF40274:
	local[4]= NIL;
IF40275:
	local[4]= local[3];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)CHUPCASE(ctx,1,local+4); /*char-upcase*/
	local[4]= w;
	local[5]= local[4];
	if (fqv[228]!=local[5]) goto IF40302;
	w = T;
	ctx->vsp=local+5;
	local[0]=w;
	goto BLK40218;
	goto IF40303;
IF40302:
	local[5]= local[4];
	if (fqv[229]!=local[5]) goto IF40313;
	w = NIL;
	ctx->vsp=local+5;
	local[0]=w;
	goto BLK40218;
	goto IF40314;
IF40313:
	if (T==NIL) goto IF40324;
	ctx->vsp=local+5;
	goto TAG40238;
	goto IF40325;
IF40324:
	local[5]= NIL;
IF40325:
IF40314:
IF40303:
	w = local[5];
	w = NIL;
	local[0]= w;
BLK40218:
	ctx->vsp=local; return(local[0]);}

/*yes-or-no-p*/
static pointer F34626yes_or_no_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT40337;}
	local[0]= NIL;
ENT40337:
ENT40336:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-1);
	local[2]= NIL;
	local[3]= NIL;
TAG40354:
	if (local[0]==NIL) goto IF40360;
	local[4]= (pointer)get_sym_func(fqv[3]);
	local[5]= T;
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,4,local+4); /*apply*/
	local[4]= w;
	goto IF40361;
IF40360:
	local[4]= NIL;
IF40361:
	local[4]= T;
	local[5]= fqv[230];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,2,local+4); /*format*/
	local[4]= T;
	ctx->vsp=local+5;
	w=(pointer)FINOUT(ctx,1,local+4); /*finish-output*/
	local[4]= T;
	ctx->vsp=local+5;
	w=(pointer)READLINE(ctx,1,local+4); /*read-line*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[17])(ctx,1,local+4,&ftab[17],fqv[231]); /*string-upcase*/
	local[3] = w;
	local[4]= local[3];
	local[5]= fqv[232];
	ctx->vsp=local+6;
	w=(*ftab[18])(ctx,2,local+4,&ftab[18],fqv[233]); /*string=*/
	if (w==NIL) goto CON40395;
	w = T;
	ctx->vsp=local+4;
	local[0]=w;
	goto BLK40334;
	goto CON40393;
CON40395:
	local[4]= local[3];
	local[5]= fqv[234];
	ctx->vsp=local+6;
	w=(*ftab[18])(ctx,2,local+4,&ftab[18],fqv[233]); /*string=*/
	if (w==NIL) goto CON40406;
	w = NIL;
	ctx->vsp=local+4;
	local[0]=w;
	goto BLK40334;
	goto CON40393;
CON40406:
	ctx->vsp=local+4;
	goto TAG40354;
	goto CON40393;
CON40416:
	local[4]= NIL;
CON40393:
	w = NIL;
	local[0]= w;
BLK40334:
	ctx->vsp=local; return(local[0]);}

/*bell*/
static pointer F34628bell(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT40427;}
	local[0]= T;
ENT40427:
ENT40426:
	if (n>2) maerror();
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0];
WHL40464:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX40465;
	local[3]= local[0];
	local[4]= fqv[235];
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,2,local+3); /*format*/
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL40464;
WHX40465:
	local[3]= NIL;
BLK40466:
	w = NIL;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[0]= w;
BLK40424:
	ctx->vsp=local; return(local[0]);}

/*:type*/
static pointer M40505compiled_code_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	local[1]= local[0];
	if (fqv[236]!=local[1]) goto IF40531;
	local[1]= fqv[237];
	goto IF40532;
IF40531:
	local[1]= local[0];
	if (fqv[238]!=local[1]) goto IF40541;
	local[1]= fqv[239];
	goto IF40542;
IF40541:
	local[1]= local[0];
	if (fqv[240]!=local[1]) goto IF40551;
	local[1]= fqv[241];
	goto IF40552;
IF40551:
	local[1]= local[0];
	if (fqv[242]!=local[1]) goto IF40561;
	local[1]= fqv[243];
	goto IF40562;
IF40561:
	local[1]= NIL;
IF40562:
IF40552:
IF40542:
IF40532:
	w = local[1];
	local[0]= w;
BLK40506:
	ctx->vsp=local; return(local[0]);}

/*check-methods*/
static pointer F34630check_methods(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	ctx->vsp=local+0;
	w=(pointer)LISTALLCLASSES(ctx,0,local+0); /*system:list-all-classes*/
	local[0]= w;
	local[1]= (pointer)get_sym_func(fqv[244]);
	local[2]= local[0];
	local[3]= fqv[245];
	ctx->vsp=local+4;
	w=(*ftab[13])(ctx,2,local+2,&ftab[13],fqv[210]); /*send-all*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,2,local+1); /*apply*/
	local[1]= w;
	local[2]= (pointer)get_sym_func(fqv[246]);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[2]= w;
	local[3]= (pointer)get_sym_func(fqv[213]);
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,2,local+3); /*mapcar*/
	local[3]= w;
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(*ftab[19])(ctx,1,local+4,&ftab[19],fqv[247]); /*remove-duplicates*/
	local[4]= w;
	local[5]= T;
	local[6]= fqv[248];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)LENGTH(ctx,1,local+9); /*length*/
	local[9]= w;
	local[10]= (pointer)get_sym_func(fqv[249]);
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(*ftab[20])(ctx,2,local+10,&ftab[20],fqv[250]); /*count-if*/
	local[10]= w;
	local[11]= (pointer)get_sym_func(fqv[249]);
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(*ftab[21])(ctx,2,local+11,&ftab[21],fqv[251]); /*count-if-not*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)XFORMAT(ctx,7,local+5); /*format*/
	local[0]= w;
BLK40574:
	ctx->vsp=local; return(local[0]);}

/*pfuncs*/
static pointer F34632pfuncs(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT40652;}
	ctx->vsp=local+0;
	w=(pointer)F34610functions(ctx,0,local+0); /*functions*/
	local[0]= w;
ENT40652:
	if (n>=3) { local[1]=(argv[2]); goto ENT40651;}
	local[1]= NIL;
ENT40651:
ENT40650:
	if (n>3) maerror();
	local[2]= argv[0];
	local[3]= fqv[17];
	local[4]= fqv[18];
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,3,local+2,&ftab[2],fqv[23]); /*open*/
	local[2]= w;
	ctx->vsp=local+3;
	w = makeclosure(codevec,quotevec,UWP40690,env,argv,local);
	local[3]=(pointer)(ctx->protfp); local[4]=w;
	ctx->protfp=(struct protectframe *)(local+3);
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[0];
WHL40723:
	if (local[7]==NIL) goto WHX40724;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)SYMFUNC(ctx,1,local+8); /*symbol-function*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[22])(ctx,1,local+8,&ftab[22],fqv[249]); /*compiled-function-p*/
	if (w!=NIL) goto OR40775;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(*ftab[6])(ctx,1,local+8,&ftab[6],fqv[31]); /*macro-function*/
	if (w==NIL) goto OR40775;
	goto IF40773;
OR40775:
	local[8]= local[2];
	local[9]= fqv[252];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(*ftab[23])(ctx,1,local+10,&ftab[23],fqv[253]); /*symbol-name*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[24])(ctx,1,local+10,&ftab[24],fqv[254]); /*string-downcase*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,3,local+8); /*format*/
	local[8]= makeint((eusinteger_t)40L);
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)PRNTSIZE(ctx,1,local+9); /*print-size*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(*ftab[9])(ctx,2,local+8,&ftab[9],fqv[96]); /*spaces*/
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(*ftab[25])(ctx,1,local+8,&ftab[25],fqv[255]); /*symbol-package*/
	local[5] = w;
	local[8]= local[2];
	local[9]= fqv[256];
	local[10]= local[5];
	local[11]= fqv[257];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	if (w==NIL) goto IF40829;
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[26])(ctx,1,local+10,&ftab[26],fqv[258]); /*package-name*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[24])(ctx,1,local+10,&ftab[24],fqv[254]); /*string-downcase*/
	local[10]= w;
	goto IF40830;
IF40829:
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[26])(ctx,1,local+10,&ftab[26],fqv[258]); /*package-name*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[17])(ctx,1,local+10,&ftab[17],fqv[231]); /*string-upcase*/
	local[10]= w;
IF40830:
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)SYMFUNC(ctx,1,local+11); /*symbol-function*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[22])(ctx,1,local+11,&ftab[22],fqv[249]); /*compiled-function-p*/
	if (w==NIL) goto IF40851;
	local[11]= fqv[259];
	goto IF40852;
IF40851:
	local[11]= fqv[260];
IF40852:
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(*ftab[6])(ctx,1,local+12,&ftab[6],fqv[31]); /*macro-function*/
	if (w==NIL) goto IF40861;
	local[12]= fqv[261];
	goto IF40862;
IF40861:
	local[12]= fqv[262];
IF40862:
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,5,local+8); /*format*/
	if (local[1]==NIL) goto IF40871;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(*ftab[15])(ctx,1,local+8,&ftab[15],fqv[215]); /*documentation*/
	if (w==NIL) goto IF40871;
	local[8]= local[2];
	local[9]= fqv[263];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(*ftab[15])(ctx,1,local+10,&ftab[15],fqv[215]); /*documentation*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,3,local+8); /*format*/
	local[8]= w;
	goto IF40872;
IF40871:
	local[8]= NIL;
IF40872:
	goto IF40774;
IF40773:
	local[8]= NIL;
IF40774:
	goto WHL40723;
WHX40724:
	local[8]= NIL;
BLK40725:
	w = NIL;
	ctx->vsp=local+5;
	UWP40690(ctx,0,local+5,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK40648:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP40690(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[2];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*class-hierarchy*/
static pointer F34634class_hierarchy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT40912;}
	local[0]= loadglobal(fqv[264]);
ENT40912:
	if (n>=2) { local[1]=(argv[1]); goto ENT40911;}
	local[1]= T;
ENT40911:
	if (n>=3) { local[2]=(argv[2]); goto ENT40910;}
	local[2]= NIL;
ENT40910:
ENT40909:
	if (n>3) maerror();
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,FLET40936,env,argv,local);
	local[4]= local[0];
	local[5]= fqv[265];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)0L);
	w = local[3];
	ctx->vsp=local+6;
	w=FLET40936(ctx,2,local+4,w);
	local[0]= w;
BLK40907:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET40936(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	local[1]= argv[1];
	local[2]= env->c.clo.env2[1];
	ctx->vsp=local+3;
	w=(*ftab[9])(ctx,2,local+1,&ftab[9],fqv[96]); /*spaces*/
	local[1]= env->c.clo.env2[1];
	local[2]= fqv[266];
	local[3]= local[0];
	local[4]= fqv[209];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[24])(ctx,1,local+3,&ftab[24],fqv[254]); /*string-downcase*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	if (env->c.clo.env2[2]==NIL) goto IF41004;
	local[1]= local[0]->c.obj.iv[2];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[27])(ctx,1,local+2,&ftab[27],fqv[267]); /*metaclass-vars*/
	local[2]= w;
	local[3]= loadglobal(fqv[67]);
	ctx->vsp=local+4;
	w=(pointer)COERCE(ctx,2,local+2); /*coerce*/
	local[2]= w;
	if (local[1]==NIL) goto IF41033;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[27])(ctx,1,local+3,&ftab[27],fqv[267]); /*metaclass-vars*/
	local[3]= w;
	local[4]= loadglobal(fqv[67]);
	ctx->vsp=local+5;
	w=(pointer)COERCE(ctx,2,local+3); /*coerce*/
	local[3]= w;
	goto IF41034;
IF41033:
	local[3]= NIL;
IF41034:
	local[4]= local[2];
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(*ftab[28])(ctx,2,local+4,&ftab[28],fqv[268]); /*set-difference*/
	local[2] = w;
	local[4]= (pointer)get_sym_func(fqv[254]);
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)MAPCAR(ctx,2,local+4); /*mapcar*/
	local[2] = w;
	local[4]= env->c.clo.env2[1];
	local[5]= fqv[269];
	if (local[2]==NIL) goto IF41071;
	local[6]= local[2];
	goto IF41072;
IF41071:
	local[6]= fqv[270];
IF41072:
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,3,local+4); /*format*/
	local[1]= w;
	goto IF41005;
IF41004:
	local[1]= env->c.clo.env2[1];
	ctx->vsp=local+2;
	w=(pointer)TERPRI(ctx,1,local+1); /*terpri*/
	local[1]= w;
IF41005:
	w = local[1];
	local[0]= NIL;
	local[1]= argv[0];
WHL41102:
	if (local[1]==NIL) goto WHX41103;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	local[3]= argv[1];
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	local[3]= w;
	w = env->c.clo.env2[3];
	ctx->vsp=local+4;
	w=FLET40936(ctx,2,local+2,w);
	goto WHL41102;
WHX41103:
	local[2]= NIL;
BLK41104:
	w = NIL;
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*classdef*/
static pointer F34636classdef(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[271];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= fqv[272];
	local[4]= argv[0];
	local[5]= fqv[209];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[271];
	if (local[0]==NIL) goto IF41208;
	local[6]= local[0];
	local[7]= fqv[209];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	goto IF41209;
IF41208:
	local[6]= NIL;
IF41209:
	local[7]= fqv[273];
	local[8]= argv[0];
	local[9]= fqv[273];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= loadglobal(fqv[67]);
	ctx->vsp=local+10;
	w=(pointer)COERCE(ctx,2,local+8); /*coerce*/
	local[8]= w;
	if (local[0]==NIL) goto IF41234;
	local[9]= local[0];
	local[10]= fqv[273];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	goto IF41235;
IF41234:
	local[9]= NIL;
IF41235:
	local[10]= loadglobal(fqv[67]);
	ctx->vsp=local+11;
	w=(pointer)COERCE(ctx,2,local+9); /*coerce*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[28])(ctx,2,local+8,&ftab[28],fqv[268]); /*set-difference*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	local[0]= w;
BLK41166:
	ctx->vsp=local; return(local[0]);}

/*classdefs*/
static pointer F34638classdefs(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT41265;}
	local[0]= loadglobal(fqv[264]);
ENT41265:
	if (n>=2) { local[1]=(argv[1]); goto ENT41264;}
	local[1]= T;
ENT41264:
ENT41263:
	if (n>2) maerror();
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F34636classdef(ctx,1,local+2); /*classdef*/
	local[2]= w;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[1])(ctx,2,local+2,&ftab[1],fqv[15]); /*pprint*/
	local[2]= NIL;
	local[3]= local[0];
	local[4]= fqv[274];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
WHL41310:
	if (local[3]==NIL) goto WHX41311;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= local[2];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)F34638classdefs(ctx,2,local+4); /*classdefs*/
	goto WHL41310;
WHX41311:
	local[4]= NIL;
BLK41312:
	w = NIL;
	local[0]= w;
BLK41261:
	ctx->vsp=local; return(local[0]);}

/*remote-error*/
static pointer F34640remote_error(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT41371;}
	local[0]= NIL;
ENT41371:
ENT41370:
	if (n>4) maerror();
	local[1]= loadglobal(fqv[4]);
	local[2]= fqv[275];
	local[3]= loadglobal(fqv[276]);
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,4,local+1); /*format*/
	if (local[0]==NIL) goto IF41396;
	local[1]= loadglobal(fqv[4]);
	local[2]= fqv[277];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[1]= w;
	goto IF41397;
IF41396:
	local[1]= NIL;
IF41397:
	if (argv[2]==NIL) goto IF41407;
	local[1]= loadglobal(fqv[4]);
	local[2]= fqv[278];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[1]= w;
	goto IF41408;
IF41407:
	local[1]= NIL;
IF41408:
	local[1]= loadglobal(fqv[4]);
	ctx->vsp=local+2;
	w=(pointer)TERPRI(ctx,1,local+1); /*terpri*/
	local[1]= fqv[279];
	w = NIL;
	ctx->vsp=local+2;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	w = local[1];
	local[0]= w;
BLK41368:
	ctx->vsp=local; return(local[0]);}

/*reval*/
static pointer F34642reval(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[280];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	w = local[0];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[162],w);
	local[3]= argv[0];
	local[4]= fqv[281];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	w = local[3];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[12],w);
	local[6]= loadglobal(fqv[12]);
	w = local[6];
	ctx->vsp=local+6;
	bindspecial(ctx,fqv[4],w);
	local[9]= fqv[282];
	w = local[9];
	ctx->vsp=local+9;
	bindspecial(ctx,fqv[118],w);
	{jmp_buf jb;
	w = fqv[279];
	ctx->vsp=local+12;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT41469;}
	local[18]= argv[0];
	ctx->vsp=local+19;
	w=(pointer)READ(ctx,1,local+18); /*read*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)EVAL(ctx,1,local+18); /*eval*/
	local[18]= w;
	local[19]= argv[0];
	ctx->vsp=local+20;
	w=(pointer)PRINT(ctx,2,local+18); /*print*/
CAT41469:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[12]= w;
	ctx->vsp=local+13;
	unbindx(ctx,4);
	w = local[12];
	local[0]= w;
BLK41428:
	ctx->vsp=local; return(local[0]);}

/*install-remote-function*/
static pointer F34644install_remote_function(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= T;
	local[1]= fqv[283];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= T;
	local[1]= fqv[284];
	local[2]= loadglobal(fqv[285]);
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[29])(ctx,1,local+0,&ftab[29],fqv[286]); /*make-server-socket-stream*/
	local[0]= w;
	local[1]= local[0];
	w = loadglobal(fqv[287]);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	storeglobal(fqv[287],local[1]);
	local[1]= local[0];
	local[2]= loadglobal(fqv[288]);
	local[3]= fqv[47];
	local[4]= NIL;
	local[5]= fqv[289];
	local[6]= NIL;
	local[7]= fqv[290];
	local[8]= NIL;
	ctx->vsp=local+9;
	w=(*ftab[30])(ctx,8,local+1,&ftab[30],fqv[48]); /*member*/
	if (w!=NIL) goto IF41541;
	local[1]= local[0];
	w = loadglobal(fqv[288]);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	storeglobal(fqv[288],local[1]);
	goto IF41542;
IF41541:
	local[1]= NIL;
IF41542:
	local[1]= makeint((eusinteger_t)29L);
	local[2]= fqv[291];
	ctx->vsp=local+3;
	w=(pointer)SIGNAL(ctx,2,local+1); /*unix:signal*/
	w = local[0];
	if (!isint(w)) goto IF41575;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)4L);
	local[3]= local[0];
	local[4]= makeint((eusinteger_t)3L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)FCNTL(ctx,3,local+3); /*unix:fcntl*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)8192L);
	ctx->vsp=local+5;
	w=(pointer)LOGIOR(ctx,2,local+3); /*logior*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)FCNTL(ctx,3,local+1); /*unix:fcntl*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)8L);
	ctx->vsp=local+3;
	w=(pointer)GETPID(ctx,0,local+3); /*unix:getpid*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)FCNTL(ctx,3,local+1); /*unix:fcntl*/
	local[1]= w;
	goto IF41576;
IF41575:
	local[1]= local[0];
	local[2]= fqv[292];
	local[3]= T;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
IF41576:
	local[1]= loadglobal(fqv[293]);
	w = local[0];
	if (!isint(w)) goto IF41610;
	local[2]= local[0];
	goto IF41611;
IF41610:
	local[2]= local[0];
	local[3]= fqv[294];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
IF41611:
	local[3]= loadglobal(fqv[285]);
	ctx->vsp=local+4;
	w=(pointer)ASET(ctx,3,local+1); /*aset*/
	local[0]= w;
BLK41488:
	ctx->vsp=local; return(local[0]);}

/*open-server*/
static pointer F34646open_server(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT41630;}
	local[0]= makeint((eusinteger_t)2048L);
ENT41630:
	if (n>=2) { local[1]=(argv[1]); goto ENT41629;}
	local[1]= (pointer)get_sym_func(fqv[279]);
ENT41629:
ENT41628:
	if (n>2) maerror();
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)2L);
	local[4]= fqv[296];
	ctx->vsp=local+5;
	w=(pointer)GETHOSTNAME(ctx,0,local+5); /*unix:gethostname*/
	local[5]= w;
	local[6]= fqv[297];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,6,local+2,&ftab[31],fqv[298]); /*make-socket-address*/
	local[2]= w;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(*ftab[32])(ctx,1,local+3,&ftab[32],fqv[299]); /*make-socket-port*/
	local[3]= w;
	storeglobal(fqv[300],w);
	local[3]= loadglobal(fqv[300]);
	local[4]= loadglobal(fqv[301]);
	ctx->vsp=local+5;
	w=(pointer)DERIVEDP(ctx,2,local+3); /*derivedp*/
	if (w==NIL) goto CON41680;
	local[3]= fqv[302];
	ctx->vsp=local+4;
	w=(pointer)GETHOSTNAME(ctx,0,local+4); /*unix:gethostname*/
	local[4]= w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F34551warn(ctx,3,local+3); /*warn*/
	local[3]= w;
	goto CON41678;
CON41680:
	local[3]= loadglobal(fqv[300]);
	ctx->vsp=local+4;
	w=(pointer)MINUS(ctx,1,local+3); /*-*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SYSERRLIST(ctx,1,local+3); /*unix:syserrlist*/
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK41626;
	goto CON41678;
CON41694:
	local[3]= NIL;
CON41678:
	local[3]= local[1];
	storeglobal(fqv[285],local[3]);
	local[3]= loadglobal(fqv[300]);
	local[4]= loadglobal(fqv[288]);
	local[5]= fqv[47];
	local[6]= NIL;
	local[7]= fqv[289];
	local[8]= NIL;
	local[9]= fqv[290];
	local[10]= NIL;
	ctx->vsp=local+11;
	w=(*ftab[30])(ctx,8,local+3,&ftab[30],fqv[48]); /*member*/
	if (w!=NIL) goto IF41723;
	local[3]= loadglobal(fqv[300]);
	w = loadglobal(fqv[288]);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	storeglobal(fqv[288],local[3]);
	goto IF41724;
IF41723:
	local[3]= NIL;
IF41724:
	local[3]= makeint((eusinteger_t)29L);
	local[4]= fqv[291];
	ctx->vsp=local+5;
	w=(pointer)SIGNAL(ctx,2,local+3); /*unix:signal*/
	w = loadglobal(fqv[300]);
	if (!isint(w)) goto IF41755;
	local[3]= loadglobal(fqv[300]);
	local[4]= makeint((eusinteger_t)4L);
	local[5]= loadglobal(fqv[300]);
	local[6]= makeint((eusinteger_t)3L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)FCNTL(ctx,3,local+5); /*unix:fcntl*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)8192L);
	ctx->vsp=local+7;
	w=(pointer)LOGIOR(ctx,2,local+5); /*logior*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)FCNTL(ctx,3,local+3); /*unix:fcntl*/
	local[3]= loadglobal(fqv[300]);
	local[4]= makeint((eusinteger_t)8L);
	ctx->vsp=local+5;
	w=(pointer)GETPID(ctx,0,local+5); /*unix:getpid*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)FCNTL(ctx,3,local+3); /*unix:fcntl*/
	local[3]= w;
	goto IF41756;
IF41755:
	local[3]= loadglobal(fqv[300]);
	local[4]= fqv[292];
	local[5]= T;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
IF41756:
	local[3]= loadglobal(fqv[293]);
	w = loadglobal(fqv[300]);
	if (!isint(w)) goto IF41789;
	local[4]= loadglobal(fqv[300]);
	goto IF41790;
IF41789:
	local[4]= loadglobal(fqv[300]);
	local[5]= fqv[294];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
IF41790:
	local[5]= fqv[303];
	ctx->vsp=local+6;
	w=(pointer)ASET(ctx,3,local+3); /*aset*/
	local[0]= w;
BLK41626:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___eusdebug(ctx,n,argv,env)
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
	local[0]= fqv[304];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF41811;
	local[0]= fqv[305];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[99],w);
	goto IF41812;
IF41811:
	local[0]= fqv[306];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF41812:
	local[0]= fqv[307];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compmacro(ctx,fqv[308],module,F34706,fqv[309]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[310],module,F34547warning_message,fqv[311]);
	local[0]= fqv[10];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF41839;
	local[0]= fqv[10];
	local[1]= fqv[35];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[10];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF41862;
	local[0]= fqv[10];
	local[1]= fqv[312];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF41863;
IF41862:
	local[0]= NIL;
IF41863:
	local[0]= fqv[10];
	goto IF41840;
IF41839:
	local[0]= NIL;
IF41840:
	ctx->vsp=local+0;
	compfun(ctx,fqv[139],module,F34551warn,fqv[313]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[314],module,F34554describe,fqv[315]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[316],module,F34557describe_list,fqv[317]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[318],module,F34561apropos,fqv[319]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[320],module,F34564apropos_list,fqv[321]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[322],module,F34568dump_string,fqv[323]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[324],module,F34572break,fqv[325]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[326],module,F34575setbreak,fqv[327]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[328],module,F34578unbreak,fqv[329]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[330],module,F36418,fqv[331]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[332],module,F34582btrace,fqv[333]);
	local[0]= fqv[95];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF41904;
	local[0]= fqv[95];
	local[1]= fqv[35];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[95];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF41927;
	local[0]= fqv[95];
	local[1]= fqv[312];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF41928;
IF41927:
	local[0]= NIL;
IF41928:
	local[0]= fqv[95];
	goto IF41905;
IF41904:
	local[0]= NIL;
IF41905:
	ctx->vsp=local+0;
	compfun(ctx,fqv[334],module,F34586eval_dynamic,fqv[335]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[66],module,F34589step_hook,fqv[336]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[337],module,F37256,fqv[338]);
	local[0]= fqv[134];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF41953;
	local[0]= fqv[134];
	local[1]= fqv[35];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[134];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF41976;
	local[0]= fqv[134];
	local[1]= fqv[312];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF41977;
IF41976:
	local[0]= NIL;
IF41977:
	local[0]= fqv[134];
	goto IF41954;
IF41953:
	local[0]= NIL;
IF41954:
	ctx->vsp=local+0;
	compfun(ctx,fqv[130],module,F34594tracex,fqv[339]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[141],module,F34597trace1,fqv[340]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[341],module,F37491,fqv[342]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[343],module,F37625,fqv[344]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[164],module,F34603inspect1,fqv[345]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[155],module,F38219,fqv[346]);
	local[0]= fqv[195];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF42008;
	local[0]= fqv[195];
	local[1]= fqv[35];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[195];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF42031;
	local[0]= fqv[195];
	local[1]= fqv[312];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF42032;
IF42031:
	local[0]= NIL;
IF42032:
	local[0]= fqv[195];
	goto IF42009;
IF42008:
	local[0]= NIL;
IF42009:
	ctx->vsp=local+0;
	compfun(ctx,fqv[194],module,F34606time_func,fqv[347]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[348],module,F38456,fqv[349]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[350],module,F38994,fqv[351]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[352],module,F34608list_symbols,fqv[353]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[354],module,F34610functions,fqv[355]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[356],module,F34612special_variables,fqv[357]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[358],module,F34614global_variables,fqv[359]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[360],module,F34616variables,fqv[361]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[362],module,F34618constants,fqv[363]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[364],module,F34620methods,fqv[365]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[366],module,F34622method_list,fqv[367]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[368],module,F40128,fqv[369]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[370],module,F34624y_or_n_p,fqv[371]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[372],module,F34626yes_or_no_p,fqv[373]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[374],module,F34628bell,fqv[375]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M40505compiled_code_type,fqv[376],fqv[377],fqv[378]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[379],module,F34630check_methods,fqv[380]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[381],module,F34632pfuncs,fqv[382]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[383],module,F34634class_hierarchy,fqv[384]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[385],module,F34636classdef,fqv[386]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[387],module,F34638classdefs,fqv[388]);
	local[0]= fqv[300];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF42093;
	local[0]= fqv[300];
	local[1]= fqv[35];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[300];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF42116;
	local[0]= fqv[300];
	local[1]= fqv[312];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF42117;
IF42116:
	local[0]= NIL;
IF42117:
	local[0]= fqv[300];
	goto IF42094;
IF42093:
	local[0]= NIL;
IF42094:
	ctx->vsp=local+0;
	compfun(ctx,fqv[282],module,F34640remote_error,fqv[389]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[279],module,F34642reval,fqv[390]);
	local[0]= fqv[287];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF42140;
	local[0]= fqv[287];
	local[1]= fqv[35];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[287];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF42163;
	local[0]= fqv[287];
	local[1]= fqv[312];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF42164;
IF42163:
	local[0]= NIL;
IF42164:
	local[0]= fqv[287];
	goto IF42141;
IF42140:
	local[0]= NIL;
IF42141:
	ctx->vsp=local+0;
	compfun(ctx,fqv[303],module,F34644install_remote_function,fqv[391]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[392],module,F34646open_server,fqv[393]);
	local[0]= fqv[394];
	local[1]= fqv[395];
	ctx->vsp=local+2;
	w=(*ftab[33])(ctx,2,local+0,&ftab[33],fqv[396]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<34; i++) ftab[i]=fcallx;
}
