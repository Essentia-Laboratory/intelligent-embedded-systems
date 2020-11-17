/* ./eushelp.c :  entry=eushelp */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "eushelp.h"
#pragma init (register_eushelp)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___eushelp();
extern pointer build_quote_vector();
static int register_eushelp()
  { add_module_initializer("___eushelp", ___eushelp);}

static pointer F78423help();
static pointer F78425print_item();
static pointer F78427print_item2();
static pointer F78429print_class();
static pointer F78431help_method();
static pointer F78433help_usage();
static pointer F78435help_method_list();
static pointer F78437load_help();

/*:init*/
static pointer M78579help_item_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<6) maerror();
	if (n>=7) { local[0]=(argv[6]); goto ENT78583;}
	local[0]= NIL;
ENT78583:
ENT78582:
	if (n>7) maerror();
	argv[0]->c.obj.iv[0] = argv[2];
	argv[0]->c.obj.iv[1] = argv[3];
	argv[0]->c.obj.iv[2] = argv[4];
	argv[0]->c.obj.iv[3] = argv[5];
	local[1]= argv[2];
	if (makeint((eusinteger_t)1L)!=local[1]) goto IF78639;
	argv[0]->c.obj.iv[4] = local[0];
	local[1]= argv[0]->c.obj.iv[4];
	goto IF78640;
IF78639:
	local[1]= NIL;
IF78640:
	local[1]= argv[2];
	if (makeint((eusinteger_t)0L)!=local[1]) goto IF78653;
	local[1]= fqv[0];
	local[2]= (pointer)get_sym_func(fqv[1]);
	local[3]= fqv[2];
	local[4]= makeflt(1.3999999999999994670929e+00);
	ctx->vsp=local+5;
	w=(*ftab[0])(ctx,4,local+1,&ftab[0],fqv[3]); /*make-hash-table*/
	argv[0]->c.obj.iv[5] = w;
	local[1]= argv[0]->c.obj.iv[5];
	w = loadglobal(fqv[4]);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	storeglobal(fqv[4],local[1]);
	goto IF78654;
IF78653:
	local[1]= NIL;
IF78654:
	w = local[1];
	local[0]= w;
BLK78580:
	ctx->vsp=local; return(local[0]);}

/*:read-help*/
static pointer M78689help_item_read_help(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[5];
	local[1]= loadglobal(fqv[6]);
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,1,local+1,&ftab[1],fqv[7]); /*pathname*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,1,local+1,&ftab[2],fqv[8]); /*pathname-directory*/
	local[1]= w;
	local[2]= fqv[9];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= fqv[10];
	local[5]= fqv[11];
	ctx->vsp=local+6;
	w=(*ftab[3])(ctx,6,local+0,&ftab[3],fqv[12]); /*make-pathname*/
	local[0]= w;
	local[1]= fqv[13];
	local[2]= fqv[14];
	ctx->vsp=local+3;
	w=(*ftab[4])(ctx,3,local+0,&ftab[4],fqv[15]); /*open*/
	local[0]= w;
	local[1]= fqv[16];
	local[2]= fqv[17];
	local[3]= fqv[18];
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+6;
	w=(*ftab[5])(ctx,2,local+4,&ftab[5],fqv[19]); /*read-tex*/
	local[1] = w;
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)GREATERP(ctx,2,local+4); /*>*/
	if (w==NIL) goto IF78758;
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+6;
	w=(*ftab[5])(ctx,2,local+4,&ftab[5],fqv[19]); /*read-tex*/
	local[2] = w;
	local[4]= local[2];
	goto IF78759;
IF78758:
	local[4]= NIL;
IF78759:
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= makeint((eusinteger_t)3L);
	ctx->vsp=local+6;
	w=(pointer)GREATERP(ctx,2,local+4); /*>*/
	if (w==NIL) goto IF78774;
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+6;
	w=(*ftab[5])(ctx,2,local+4,&ftab[5],fqv[19]); /*read-tex*/
	local[3] = w;
	local[4]= local[3];
	goto IF78775;
IF78774:
	local[4]= NIL;
IF78775:
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)CLOSE(ctx,1,local+4); /*close*/
	local[4]= local[1];
	local[5]= local[2];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,3,local+4); /*list*/
	local[0]= w;
BLK78690:
	ctx->vsp=local; return(local[0]);}

/*help*/
static pointer F78423help(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT78807;}
	local[0]= NIL;
ENT78807:
	if (n>=2) { local[1]=(argv[1]); goto ENT78806;}
	local[1]= NIL;
ENT78806:
	if (n>=3) { local[2]=(argv[2]); goto ENT78805;}
	local[2]= T;
ENT78805:
ENT78804:
	if (n>3) maerror();
	if (loadglobal(fqv[20])!=NIL) goto IF78828;
	local[3]= fqv[0];
	local[4]= (pointer)get_sym_func(fqv[1]);
	local[5]= fqv[21];
	local[6]= makeint((eusinteger_t)1000L);
	local[7]= fqv[2];
	local[8]= makeflt(1.5999999999999996447286e+00);
	ctx->vsp=local+9;
	w=(*ftab[0])(ctx,6,local+3,&ftab[0],fqv[3]); /*make-hash-table*/
	local[3]= w;
	storeglobal(fqv[20],w);
	local[3]= NIL;
	local[4]= fqv[22];
	local[5]= loadglobal(fqv[6]);
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,3,local+3); /*format*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)F78437load_help(ctx,1,local+3); /*load-help*/
	local[3]= w;
	goto IF78829;
IF78828:
	local[3]= NIL;
IF78829:
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= fqv[23];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[0] = w;
	local[6]= local[0];
	local[7]= fqv[24];
	ctx->vsp=local+8;
	w=(*ftab[6])(ctx,2,local+6,&ftab[6],fqv[1]); /*string-equal*/
	if (w!=NIL) goto OR78884;
	local[6]= local[0];
	local[7]= fqv[25];
	ctx->vsp=local+8;
	w=(*ftab[6])(ctx,2,local+6,&ftab[6],fqv[1]); /*string-equal*/
	if (w!=NIL) goto OR78884;
	goto IF78882;
OR78884:
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F78433help_usage(ctx,1,local+6); /*help-usage*/
	local[6]= w;
	goto IF78883;
IF78882:
	local[6]= local[1];
	if (NIL!=local[6]) goto IF78901;
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,2,local+6); /*aref*/
	local[6]= w;
	if (makeint((eusinteger_t)58L)!=local[6]) goto IF78907;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)F78435help_method_list(ctx,1,local+6); /*help-method-list*/
	local[6]= w;
	goto IF78908;
IF78907:
	local[6]= local[0];
	local[7]= loadglobal(fqv[20]);
	ctx->vsp=local+8;
	w=(*ftab[7])(ctx,2,local+6,&ftab[7],fqv[26]); /*gethash*/
	local[4] = w;
	local[6]= local[4];
	if (NIL!=local[6]) goto IF78918;
	local[6]= local[2];
	local[7]= fqv[27];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(*ftab[8])(ctx,1,local+6,&ftab[8],fqv[28]); /*apropos-list*/
	local[6]= w;
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(*ftab[9])(ctx,2,local+6,&ftab[9],fqv[29]); /*pprint*/
	local[6]= w;
	goto IF78919;
IF78918:
	local[6]= local[2];
	local[7]= fqv[30];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= local[4];
	local[7]= fqv[31];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[3] = w;
	local[6]= local[4]->c.obj.iv[0];
	local[7]= local[6];
	if (fqv[32]!=local[7]) goto IF78987;
	local[7]= local[2];
	local[8]= fqv[33];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,2,local+7); /*format*/
	local[7]= local[4];
	local[8]= local[3];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)F78429print_class(ctx,3,local+7); /*print-class*/
	local[7]= w;
	goto IF78988;
IF78987:
	local[7]= local[6];
	if (fqv[34]!=local[7]) goto IF79007;
	local[7]= local[2];
	local[8]= fqv[35];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,2,local+7); /*format*/
	local[7]= local[0];
	local[8]= local[4];
	local[9]= local[3];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)F78425print_item(ctx,4,local+7); /*print-item*/
	local[7]= w;
	goto IF79008;
IF79007:
	local[7]= local[6];
	if (fqv[36]!=local[7]) goto IF79028;
	local[7]= local[2];
	local[8]= fqv[37];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,2,local+7); /*format*/
	local[7]= local[0];
	local[8]= local[4];
	local[9]= local[3];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)F78425print_item(ctx,4,local+7); /*print-item*/
	local[7]= w;
	goto IF79029;
IF79028:
	local[7]= local[6];
	if (fqv[38]!=local[7]) goto IF79049;
	local[7]= local[2];
	local[8]= fqv[39];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,2,local+7); /*format*/
	local[7]= local[0];
	local[8]= local[4];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)F78427print_item2(ctx,3,local+7); /*print-item2*/
	local[7]= w;
	goto IF79050;
IF79049:
	local[7]= local[6];
	if (fqv[40]!=local[7]) goto IF79069;
	local[7]= local[2];
	local[8]= fqv[41];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,2,local+7); /*format*/
	local[7]= local[0];
	local[8]= local[4];
	local[9]= local[3];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)F78427print_item2(ctx,4,local+7); /*print-item2*/
	local[7]= w;
	goto IF79070;
IF79069:
	local[7]= local[6];
	if (fqv[42]!=local[7]) goto IF79090;
	local[7]= local[2];
	local[8]= fqv[43];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,2,local+7); /*format*/
	local[7]= local[0];
	local[8]= local[4];
	local[9]= local[3];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)F78425print_item(ctx,4,local+7); /*print-item*/
	local[7]= w;
	goto IF79091;
IF79090:
	local[7]= NIL;
IF79091:
IF79070:
IF79050:
IF79029:
IF79008:
IF78988:
	w = local[7];
	local[6]= w;
IF78919:
IF78908:
	goto IF78902;
IF78901:
	local[6]= NIL;
	local[7]= fqv[44];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	local[7]= loadglobal(fqv[20]);
	ctx->vsp=local+8;
	w=(*ftab[7])(ctx,2,local+6,&ftab[7],fqv[26]); /*gethash*/
	local[5] = w;
	local[6]= local[5];
	if (NIL!=local[6]) goto IF79112;
	local[6]= local[2];
	local[7]= fqv[45];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	goto IF79113;
IF79112:
	local[6]= local[0];
	local[7]= local[5]->c.obj.iv[5];
	ctx->vsp=local+8;
	w=(*ftab[7])(ctx,2,local+6,&ftab[7],fqv[26]); /*gethash*/
	local[4] = w;
	local[6]= local[4];
	if (NIL!=local[6]) goto IF79133;
	local[6]= local[2];
	local[7]= fqv[46];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	goto IF79134;
IF79133:
	local[6]= local[2];
	local[7]= fqv[47];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= local[2];
	local[7]= fqv[48];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= local[4];
	local[7]= fqv[31];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[3] = w;
	local[6]= local[0];
	local[7]= local[4];
	local[8]= local[3];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)F78425print_item(ctx,4,local+6); /*print-item*/
	local[6]= w;
IF79134:
IF79113:
IF78902:
IF78883:
	w = local[6];
	local[0]= w;
BLK78802:
	ctx->vsp=local; return(local[0]);}

/*print-item*/
static pointer F78425print_item(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	local[1]= fqv[49];
	local[2]= argv[0];
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,4,local+0); /*format*/
	local[0]= argv[3];
	local[1]= fqv[50];
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
BLK79189:
	ctx->vsp=local; return(local[0]);}

/*print-item2*/
static pointer F78427print_item2(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	local[1]= fqv[51];
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
BLK79226:
	ctx->vsp=local; return(local[0]);}

/*print-class*/
static pointer F78429print_class(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= fqv[52];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= argv[2];
	local[1]= fqv[53];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= argv[2];
	local[1]= fqv[54];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
BLK79251:
	ctx->vsp=local; return(local[0]);}

/*help-method*/
static pointer F78431help_method(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= fqv[55];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	local[7]= loadglobal(fqv[20]);
	ctx->vsp=local+8;
	w=(*ftab[7])(ctx,2,local+6,&ftab[7],fqv[26]); /*gethash*/
	local[1] = w;
	local[6]= local[1];
	if (NIL!=local[6]) goto IF79329;
	local[6]= argv[1];
	local[7]= fqv[56];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	goto IF79330;
IF79329:
	local[6]= local[1]->c.obj.iv[0];
	if (makeint((eusinteger_t)0L)!=local[6]) goto IF79350;
	local[6]= argv[1];
	local[7]= fqv[57];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[2] = local[1]->c.obj.iv[5]->c.obj.iv[0];
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
WHL79409:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX79410;
	local[8]= local[2];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,2,local+8); /*aref*/
	local[3] = w;
	w = local[3];
	if (!isstring(w)) goto IF79429;
	local[8]= T;
	local[9]= fqv[58];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,3,local+8); /*format*/
	local[8]= w;
	goto IF79430;
IF79429:
	local[8]= NIL;
IF79430:
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL79409;
WHX79410:
	local[8]= NIL;
BLK79411:
	w = NIL;
	local[6]= w;
	goto IF79351;
IF79350:
	local[6]= argv[1];
	local[7]= fqv[59];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
IF79351:
IF79330:
	w = local[6];
	local[0]= w;
BLK79298:
	ctx->vsp=local; return(local[0]);}

/*help-usage*/
static pointer F78433help_usage(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[60];
	ctx->vsp=local+2;
	w=(pointer)XFORMAT(ctx,2,local+0); /*format*/
	local[0]= argv[0];
	local[1]= fqv[61];
	ctx->vsp=local+2;
	w=(pointer)XFORMAT(ctx,2,local+0); /*format*/
	local[0]= w;
BLK79456:
	ctx->vsp=local; return(local[0]);}

/*help-method-list*/
static pointer F78435help_method_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[1];
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	local[1]= makeint((eusinteger_t)0L);
	local[2]= loadglobal(fqv[4]);
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
WHL79524:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX79525;
	local[3]= argv[0];
	local[4]= local[1];
	local[5]= loadglobal(fqv[4]);
	ctx->vsp=local+6;
	w=(pointer)NTH(ctx,2,local+4); /*nth*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[7])(ctx,2,local+3,&ftab[7],fqv[26]); /*gethash*/
	local[0] = w;
	local[3]= local[0];
	if (NIL==local[3]) goto IF79533;
	local[3]= argv[1];
	local[4]= fqv[63];
	local[5]= local[0]->c.obj.iv[4];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,4,local+3); /*format*/
	local[3]= w;
	goto IF79534;
IF79533:
	local[3]= NIL;
IF79534:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL79524;
WHX79525:
	local[3]= NIL;
BLK79526:
	w = NIL;
	local[0]= w;
BLK79474:
	ctx->vsp=local; return(local[0]);}

/*load-help*/
static pointer F78437load_help(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	if (loadglobal(fqv[20])!=NIL) goto IF79605;
	local[7]= fqv[0];
	local[8]= (pointer)get_sym_func(fqv[1]);
	local[9]= fqv[21];
	local[10]= makeint((eusinteger_t)1000L);
	local[11]= fqv[2];
	local[12]= makeflt(1.5999999999999996447286e+00);
	ctx->vsp=local+13;
	w=(*ftab[0])(ctx,6,local+7,&ftab[0],fqv[3]); /*make-hash-table*/
	local[7]= w;
	storeglobal(fqv[20],w);
	goto IF79606;
IF79605:
	local[7]= NIL;
IF79606:
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(*ftab[4])(ctx,1,local+7,&ftab[4],fqv[15]); /*open*/
	local[0] = w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)READ(ctx,1,local+7); /*read*/
TAG79648:
	local[7]= local[0];
	local[8]= NIL;
	ctx->vsp=local+9;
	w=(pointer)READ(ctx,2,local+7); /*read*/
	local[1] = w;
	local[7]= local[1];
	if (NIL!=local[7]) goto IF79662;
	w = NIL;
	ctx->vsp=local+7;
	local[7]=w;
	goto BLK79644;
	goto IF79663;
IF79662:
	local[7]= NIL;
IF79663:
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)READ(ctx,1,local+7); /*read*/
	local[2] = w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)READ(ctx,1,local+7); /*read*/
	local[3] = w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)READ(ctx,1,local+7); /*read*/
	local[4] = w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)READ(ctx,1,local+7); /*read*/
	local[5] = w;
	local[7]= local[2];
	if (makeint((eusinteger_t)0L)!=local[7]) goto IF79709;
	local[6] = local[1];
	local[7]= local[6];
	goto IF79710;
IF79709:
	local[7]= NIL;
IF79710:
	local[7]= local[2];
	if (makeint((eusinteger_t)1L)!=local[7]) goto IF79722;
	local[7]= local[1];
	local[8]= local[6];
	local[9]= loadglobal(fqv[20]);
	ctx->vsp=local+10;
	w=(*ftab[7])(ctx,2,local+8,&ftab[7],fqv[26]); /*gethash*/
	local[8]= w->c.obj.iv[5];
	local[9]= loadglobal(fqv[64]);
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,1,local+9); /*instantiate*/
	local[9]= w;
	local[10]= local[9];
	local[11]= fqv[65];
	local[12]= local[2];
	local[13]= local[3];
	local[14]= local[4];
	local[15]= local[5];
	local[16]= local[6];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,7,local+10); /*send*/
	w = local[9];
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[10])(ctx,3,local+7,&ftab[10],fqv[66]); /*sethash*/
	local[7]= w;
	goto IF79723;
IF79722:
	local[7]= local[1];
	local[8]= loadglobal(fqv[20]);
	local[9]= loadglobal(fqv[64]);
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,1,local+9); /*instantiate*/
	local[9]= w;
	local[10]= local[9];
	local[11]= fqv[65];
	local[12]= local[2];
	local[13]= local[3];
	local[14]= local[4];
	local[15]= local[5];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,6,local+10); /*send*/
	w = local[9];
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[10])(ctx,3,local+7,&ftab[10],fqv[66]); /*sethash*/
	local[7]= w;
IF79723:
	ctx->vsp=local+7;
	goto TAG79648;
	local[7]= NIL;
BLK79644:
	w = local[7];
	local[0]= w;
BLK79573:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___eushelp(ctx,n,argv,env)
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
	local[0]= fqv[67];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF79819;
	local[0]= fqv[68];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[69],w);
	goto IF79820;
IF79819:
	local[0]= fqv[70];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF79820:
	local[0]= fqv[71];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[72];
	local[1]= fqv[73];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[74];
	local[1]= fqv[73];
	local[2]= makeint((eusinteger_t)1L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[75];
	local[1]= fqv[73];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[76];
	local[1]= fqv[73];
	local[2]= makeint((eusinteger_t)3L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[77];
	local[1]= fqv[73];
	local[2]= makeint((eusinteger_t)4L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[78];
	local[1]= fqv[73];
	local[2]= makeint((eusinteger_t)5L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[79];
	local[1]= fqv[73];
	local[2]= makeint((eusinteger_t)6L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[20];
	local[1]= fqv[80];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF79899;
	local[0]= fqv[20];
	local[1]= fqv[80];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[20];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF79922;
	local[0]= fqv[20];
	local[1]= fqv[81];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF79923;
IF79922:
	local[0]= NIL;
IF79923:
	local[0]= fqv[20];
	goto IF79900;
IF79899:
	local[0]= NIL;
IF79900:
	local[0]= fqv[82];
	local[1]= fqv[80];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF79942;
	local[0]= fqv[82];
	local[1]= fqv[80];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[82];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF79965;
	local[0]= fqv[82];
	local[1]= fqv[81];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF79966;
IF79965:
	local[0]= NIL;
IF79966:
	local[0]= fqv[82];
	goto IF79943;
IF79942:
	local[0]= NIL;
IF79943:
	local[0]= fqv[6];
	local[1]= fqv[81];
	local[2]= NIL;
	local[3]= fqv[83];
	local[4]= loadglobal(fqv[84]);
	local[5]= fqv[85];
	local[6]= fqv[86];
	ctx->vsp=local+7;
	w=(pointer)GETENV(ctx,1,local+6); /*unix:getenv*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[11])(ctx,2,local+5,&ftab[11],fqv[87]); /*substringp*/
	if (w!=NIL) goto OR79995;
	local[5]= fqv[88];
	local[6]= fqv[89];
	ctx->vsp=local+7;
	w=(pointer)GETENV(ctx,1,local+6); /*unix:getenv*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[11])(ctx,2,local+5,&ftab[11],fqv[87]); /*substringp*/
	if (w!=NIL) goto OR79995;
	goto IF79993;
OR79995:
	local[5]= fqv[90];
	goto IF79994;
IF79993:
	local[5]= fqv[91];
IF79994:
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,4,local+2); /*format*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[4];
	local[1]= fqv[80];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF80015;
	local[0]= fqv[4];
	local[1]= fqv[80];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[4];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF80038;
	local[0]= fqv[4];
	local[1]= fqv[81];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF80039;
IF80038:
	local[0]= NIL;
IF80039:
	local[0]= fqv[4];
	goto IF80016;
IF80015:
	local[0]= NIL;
IF80016:
	local[0]= fqv[64];
	local[1]= fqv[81];
	local[2]= fqv[64];
	local[3]= fqv[92];
	local[4]= loadglobal(fqv[93]);
	local[5]= fqv[94];
	local[6]= fqv[95];
	local[7]= fqv[96];
	local[8]= NIL;
	local[9]= fqv[97];
	local[10]= NIL;
	local[11]= fqv[21];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[98];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[12])(ctx,13,local+2,&ftab[12],fqv[99]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M78579help_item_init,fqv[65],fqv[64],fqv[100]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M78689help_item_read_help,fqv[31],fqv[64],fqv[101]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[102],module,F78423help,fqv[103]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[104],module,F78425print_item,fqv[105]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[106],module,F78427print_item2,fqv[107]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[108],module,F78429print_class,fqv[109]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[110],module,F78431help_method,fqv[111]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[112],module,F78433help_usage,fqv[113]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[114],module,F78435help_method_list,fqv[115]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[116],module,F78437load_help,fqv[117]);
	local[0]= fqv[118];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF80107;
	local[0]= fqv[119];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[69],w);
	goto IF80108;
IF80107:
	local[0]= fqv[120];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF80108:
	local[0]= fqv[121];
	ctx->vsp=local+1;
	w=(*ftab[13])(ctx,1,local+0,&ftab[13],fqv[122]); /*use-package*/
	local[0]= fqv[123];
	local[1]= fqv[124];
	ctx->vsp=local+2;
	w=(*ftab[14])(ctx,2,local+0,&ftab[14],fqv[125]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<15; i++) ftab[i]=fcallx;
}
