/* ./eusforeign.c :  entry=eusforeign */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "eusforeign.h"
#pragma init (register_eusforeign)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___eusforeign();
extern pointer build_quote_vector();
static int register_eusforeign()
  { add_module_initializer("___eusforeign", ___eusforeign);}

static pointer F63289make_foreign_code();
static pointer F63291load_foreign();
static pointer F63293byte_string();
static pointer F63295pod_address();
static pointer F63297byte_size();
static pointer F63334make_foreign_string();

/*:find*/
static pointer M63379load_module_find(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[0]); /*system::find-entry*/
	local[0]= w;
BLK63380:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M63419foreign_code_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT63424;}
	local[0]= NIL;
ENT63424:
	if (n>=5) { local[1]=(argv[4]); goto ENT63423;}
	local[1]= fqv[1];
ENT63423:
ENT63422:
	if (n>5) maerror();
	argv[0]->c.obj.iv[0] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[1] = NIL;
	w = argv[2];
	if (!iscons(w)) goto IF63454;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	goto IF63455;
IF63454:
	local[2]= argv[2];
IF63455:
	argv[0]->c.obj.iv[3] = local[2];
	w = argv[2];
	if (!iscons(w)) goto IF63467;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	goto IF63468;
IF63467:
	local[2]= NIL;
IF63468:
	argv[0]->c.obj.iv[4] = local[2];
	argv[0]->c.obj.iv[5] = local[0];
	argv[0]->c.obj.iv[6] = local[1];
	argv[0]->c.obj.iv[2] = makeint((eusinteger_t)0L);
	w = argv[0];
	local[0]= w;
BLK63420:
	ctx->vsp=local; return(local[0]);}

/*make-foreign-code*/
static pointer F63289make_foreign_code(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT63500;}
	local[0]= NIL;
ENT63500:
	if (n>=3) { local[1]=(argv[2]); goto ENT63499;}
	local[1]= fqv[1];
ENT63499:
	if (n>=4) { local[2]=(argv[3]); goto ENT63498;}
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,0,local+2,&ftab[1],fqv[2]); /*system::sysmod*/
	local[2]= w;
ENT63498:
ENT63497:
	if (n>4) maerror();
	w = argv[0];
	local[3]= (isnum(w)?T:NIL);
	if (local[3]!=NIL) goto CON63527;
CON63529:
	local[3]= argv[0];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(*ftab[0])(ctx,2,local+3,&ftab[0],fqv[0]); /*system::find-entry*/
	if (w==NIL) goto CON63536;
	local[3]= argv[0];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,2,local+3,&ftab[2],fqv[3]); /*system::find-entry2*/
	argv[0] = w;
	local[3]= argv[0];
	goto CON63527;
CON63536:
	local[3]= fqv[4];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,2,local+3); /*error*/
	local[3]= w;
	goto CON63527;
CON63554:
	local[3]= NIL;
CON63527:
	local[3]= loadglobal(fqv[5]);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,1,local+3); /*instantiate*/
	local[3]= w;
	local[4]= local[3];
	local[5]= fqv[6];
	local[6]= argv[0];
	local[7]= local[0];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,5,local+4); /*send*/
	w = local[3];
	local[0]= w;
BLK63495:
	ctx->vsp=local; return(local[0]);}

/*load-foreign*/
static pointer F63291load_foreign(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[7];
	local[2]= fqv[8];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,3,local+0,&ftab[3],fqv[9]); /*load*/
	local[0]= w;
BLK63591:
	ctx->vsp=local; return(local[0]);}

/*defforeign*/
static pointer F63608(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= fqv[10];
	local[1]= fqv[11];
	local[2]= fqv[12];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	local[2]= fqv[13];
	local[3]= argv[2];
	local[4]= fqv[12];
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[12];
	local[6]= argv[4];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= argv[1];
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
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK63609:
	ctx->vsp=local; return(local[0]);}

/*defvoidforeigns*/
static pointer F63682(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST63685:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[14];
	local[2]= fqv[15];
	local[3]= fqv[12];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[10];
	local[4]= fqv[11];
	local[5]= fqv[16];
	local[6]= fqv[17];
	local[7]= fqv[15];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[13];
	local[6]= fqv[15];
	local[7]= fqv[18];
	local[8]= fqv[1];
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
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
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK63683:
	ctx->vsp=local; return(local[0]);}

/*byte-string*/
static pointer F63293byte_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST63773:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= fqv[19];
	local[3]= fqv[20];
	local[4]= fqv[21];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,5,local+1,&ftab[4],fqv[22]); /*make-array*/
	local[0]= w;
BLK63771:
	ctx->vsp=local; return(local[0]);}

/*:pod-address*/
static pointer M63818foreign_pod_pod_address(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)16L);
	local[1]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+2;
	w=(pointer)ADDRESS(ctx,1,local+1); /*system:address*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)PLUS(ctx,2,local+0); /*+*/
	local[0]= w;
BLK63819:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M63840foreign_pod_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)ADDRESS(ctx,1,local+0); /*system:address*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)72L);
	local[3]= makeint((eusinteger_t)131L);
	local[4]= makeint((eusinteger_t)236L);
	local[5]= makeint((eusinteger_t)120L);
	local[6]= makeint((eusinteger_t)72L);
	local[7]= makeint((eusinteger_t)137L);
	local[8]= makeint((eusinteger_t)60L);
	local[9]= makeint((eusinteger_t)36L);
	local[10]= makeint((eusinteger_t)72L);
	local[11]= makeint((eusinteger_t)137L);
	local[12]= makeint((eusinteger_t)116L);
	local[13]= makeint((eusinteger_t)36L);
	local[14]= makeint((eusinteger_t)8L);
	local[15]= makeint((eusinteger_t)72L);
	local[16]= makeint((eusinteger_t)137L);
	local[17]= makeint((eusinteger_t)84L);
	local[18]= makeint((eusinteger_t)36L);
	local[19]= makeint((eusinteger_t)16L);
	local[20]= makeint((eusinteger_t)72L);
	local[21]= makeint((eusinteger_t)137L);
	local[22]= makeint((eusinteger_t)76L);
	local[23]= makeint((eusinteger_t)36L);
	local[24]= makeint((eusinteger_t)24L);
	local[25]= makeint((eusinteger_t)76L);
	local[26]= makeint((eusinteger_t)137L);
	local[27]= makeint((eusinteger_t)68L);
	local[28]= makeint((eusinteger_t)36L);
	local[29]= makeint((eusinteger_t)32L);
	local[30]= makeint((eusinteger_t)76L);
	local[31]= makeint((eusinteger_t)137L);
	local[32]= makeint((eusinteger_t)76L);
	local[33]= makeint((eusinteger_t)36L);
	local[34]= makeint((eusinteger_t)40L);
	local[35]= makeint((eusinteger_t)242L);
	local[36]= makeint((eusinteger_t)15L);
	local[37]= makeint((eusinteger_t)17L);
	local[38]= makeint((eusinteger_t)68L);
	local[39]= makeint((eusinteger_t)36L);
	local[40]= makeint((eusinteger_t)48L);
	local[41]= makeint((eusinteger_t)242L);
	local[42]= makeint((eusinteger_t)15L);
	local[43]= makeint((eusinteger_t)17L);
	local[44]= makeint((eusinteger_t)76L);
	local[45]= makeint((eusinteger_t)36L);
	local[46]= makeint((eusinteger_t)56L);
	local[47]= makeint((eusinteger_t)242L);
	local[48]= makeint((eusinteger_t)15L);
	local[49]= makeint((eusinteger_t)17L);
	local[50]= makeint((eusinteger_t)84L);
	local[51]= makeint((eusinteger_t)36L);
	local[52]= makeint((eusinteger_t)64L);
	local[53]= makeint((eusinteger_t)242L);
	local[54]= makeint((eusinteger_t)15L);
	local[55]= makeint((eusinteger_t)17L);
	local[56]= makeint((eusinteger_t)92L);
	local[57]= makeint((eusinteger_t)36L);
	local[58]= makeint((eusinteger_t)72L);
	local[59]= makeint((eusinteger_t)242L);
	local[60]= makeint((eusinteger_t)15L);
	local[61]= makeint((eusinteger_t)17L);
	local[62]= makeint((eusinteger_t)100L);
	local[63]= makeint((eusinteger_t)36L);
	local[64]= makeint((eusinteger_t)80L);
	local[65]= makeint((eusinteger_t)242L);
	local[66]= makeint((eusinteger_t)15L);
	local[67]= makeint((eusinteger_t)17L);
	local[68]= makeint((eusinteger_t)108L);
	local[69]= makeint((eusinteger_t)36L);
	local[70]= makeint((eusinteger_t)88L);
	local[71]= makeint((eusinteger_t)242L);
	local[72]= makeint((eusinteger_t)15L);
	local[73]= makeint((eusinteger_t)17L);
	local[74]= makeint((eusinteger_t)116L);
	local[75]= makeint((eusinteger_t)36L);
	local[76]= makeint((eusinteger_t)96L);
	local[77]= makeint((eusinteger_t)242L);
	local[78]= makeint((eusinteger_t)15L);
	local[79]= makeint((eusinteger_t)17L);
	local[80]= makeint((eusinteger_t)124L);
	local[81]= makeint((eusinteger_t)36L);
	local[82]= makeint((eusinteger_t)104L);
	local[83]= makeint((eusinteger_t)72L);
	local[84]= makeint((eusinteger_t)191L);
	local[85]= local[0];
	local[86]= makeint((eusinteger_t)0L);
	local[87]= makeint((eusinteger_t)8L);
	ctx->vsp=local+88;
	w=(pointer)LDB(ctx,3,local+85); /*ldb*/
	local[85]= w;
	local[86]= local[0];
	local[87]= makeint((eusinteger_t)8L);
	local[88]= makeint((eusinteger_t)8L);
	ctx->vsp=local+89;
	w=(pointer)LDB(ctx,3,local+86); /*ldb*/
	local[86]= w;
	local[87]= local[0];
	local[88]= makeint((eusinteger_t)16L);
	local[89]= makeint((eusinteger_t)8L);
	ctx->vsp=local+90;
	w=(pointer)LDB(ctx,3,local+87); /*ldb*/
	local[87]= w;
	local[88]= local[0];
	local[89]= makeint((eusinteger_t)24L);
	local[90]= makeint((eusinteger_t)8L);
	ctx->vsp=local+91;
	w=(pointer)LDB(ctx,3,local+88); /*ldb*/
	local[88]= w;
	local[89]= local[0];
	local[90]= makeint((eusinteger_t)32L);
	local[91]= makeint((eusinteger_t)8L);
	ctx->vsp=local+92;
	w=(pointer)LDB(ctx,3,local+89); /*ldb*/
	local[89]= w;
	local[90]= local[0];
	local[91]= makeint((eusinteger_t)40L);
	local[92]= makeint((eusinteger_t)8L);
	ctx->vsp=local+93;
	w=(pointer)LDB(ctx,3,local+90); /*ldb*/
	local[90]= w;
	local[91]= local[0];
	local[92]= makeint((eusinteger_t)48L);
	local[93]= makeint((eusinteger_t)8L);
	ctx->vsp=local+94;
	w=(pointer)LDB(ctx,3,local+91); /*ldb*/
	local[91]= w;
	local[92]= local[0];
	local[93]= makeint((eusinteger_t)56L);
	local[94]= makeint((eusinteger_t)8L);
	ctx->vsp=local+95;
	w=(pointer)LDB(ctx,3,local+92); /*ldb*/
	local[92]= w;
	local[93]= makeint((eusinteger_t)72L);
	local[94]= makeint((eusinteger_t)137L);
	local[95]= makeint((eusinteger_t)230L);
	local[96]= makeint((eusinteger_t)184L);
	local[97]= makeint((eusinteger_t)0L);
	local[98]= makeint((eusinteger_t)0L);
	local[99]= makeint((eusinteger_t)0L);
	local[100]= makeint((eusinteger_t)0L);
	local[101]= makeint((eusinteger_t)232L);
	local[102]= makeint((eusinteger_t)0L);
	local[103]= makeint((eusinteger_t)0L);
	local[104]= makeint((eusinteger_t)0L);
	local[105]= makeint((eusinteger_t)0L);
	local[106]= makeint((eusinteger_t)72L);
	local[107]= makeint((eusinteger_t)131L);
	local[108]= makeint((eusinteger_t)196L);
	local[109]= makeint((eusinteger_t)120L);
	local[110]= makeint((eusinteger_t)195L);
	local[111]= makeint((eusinteger_t)144L);
	local[112]= makeint((eusinteger_t)144L);
	local[113]= makeint((eusinteger_t)144L);
	local[114]= makeint((eusinteger_t)144L);
	local[115]= makeint((eusinteger_t)144L);
	local[116]= makeint((eusinteger_t)144L);
	local[117]= makeint((eusinteger_t)144L);
	local[118]= makeint((eusinteger_t)144L);
	local[119]= makeint((eusinteger_t)144L);
	ctx->vsp=local+120;
	w=(pointer)F63293byte_string(ctx,118,local+2); /*byte-string*/
	argv[0]->c.obj.iv[6] = w;
	local[2]= fqv[23];
	if (argv[3]==local[2]) goto OR63916;
	local[2]= fqv[24];
	if (argv[3]==local[2]) goto OR63916;
	goto IF63914;
OR63916:
	local[2]= argv[0]->c.obj.iv[6];
	local[3]= makeint((eusinteger_t)72L);
	local[4]= makeint((eusinteger_t)137L);
	local[5]= makeint((eusinteger_t)4L);
	local[6]= makeint((eusinteger_t)36L);
	local[7]= makeint((eusinteger_t)242L);
	local[8]= makeint((eusinteger_t)15L);
	local[9]= makeint((eusinteger_t)16L);
	local[10]= makeint((eusinteger_t)4L);
	local[11]= makeint((eusinteger_t)36L);
	local[12]= makeint((eusinteger_t)72L);
	local[13]= makeint((eusinteger_t)131L);
	local[14]= makeint((eusinteger_t)196L);
	local[15]= makeint((eusinteger_t)120L);
	local[16]= makeint((eusinteger_t)195L);
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,14,local+3); /*list*/
	local[3]= w;
	local[4]= fqv[25];
	local[5]= makeint((eusinteger_t)104L);
	ctx->vsp=local+6;
	w=(*ftab[5])(ctx,4,local+2,&ftab[5],fqv[26]); /*replace*/
	local[2]= w;
	goto IF63915;
IF63914:
	local[2]= NIL;
IF63915:
	local[2]= loadglobal(fqv[27]);
	local[3]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+4;
	w=(pointer)ADDRESS(ctx,1,local+3); /*system:address*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)16L);
	local[5]= makeint((eusinteger_t)100L);
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,4,local+3); /*+*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)MINUS(ctx,2,local+2); /*-*/
	local[1] = w;
	local[2]= argv[0]->c.obj.iv[6];
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)8L);
	ctx->vsp=local+6;
	w=(pointer)LDB(ctx,3,local+3); /*ldb*/
	local[3]= w;
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)8L);
	local[6]= makeint((eusinteger_t)8L);
	ctx->vsp=local+7;
	w=(pointer)LDB(ctx,3,local+4); /*ldb*/
	local[4]= w;
	local[5]= local[1];
	local[6]= makeint((eusinteger_t)16L);
	local[7]= makeint((eusinteger_t)8L);
	ctx->vsp=local+8;
	w=(pointer)LDB(ctx,3,local+5); /*ldb*/
	local[5]= w;
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)24L);
	local[8]= makeint((eusinteger_t)8L);
	ctx->vsp=local+9;
	w=(pointer)LDB(ctx,3,local+6); /*ldb*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,4,local+3); /*list*/
	local[3]= w;
	local[4]= fqv[25];
	local[5]= makeint((eusinteger_t)100L);
	ctx->vsp=local+6;
	w=(*ftab[5])(ctx,4,local+2,&ftab[5],fqv[26]); /*replace*/
	if (loadglobal(fqv[28])==NIL) goto IF63977;
	local[2]= T;
	local[3]= fqv[29];
	local[4]= makeint((eusinteger_t)16L);
	local[5]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+6;
	w=(pointer)ADDRESS(ctx,1,local+5); /*system:address*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,3,local+2); /*format*/
	local[2]= w;
	goto IF63978;
IF63977:
	local[2]= NIL;
IF63978:
	w = argv[0]->c.obj.iv[6];
	local[1]= argv[4];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w==NIL) goto CON64001;
	w=argv[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	if (fqv[30]!=local[1]) goto IF64009;
	local[1]= fqv[31];
	local[2]= makeint((eusinteger_t)4L);
	local[3]= argv[4];
	ctx->vsp=local+4;
	w=(pointer)NTHCDR(ctx,2,local+2); /*nthcdr*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)APPEND(ctx,2,local+1); /*append*/
	argv[4] = w;
	local[1]= argv[4];
	goto IF64010;
IF64009:
	local[1]= NIL;
IF64010:
	goto CON63999;
CON64001:
	local[1]= argv[4];
	local[2]= loadglobal(fqv[32]);
	ctx->vsp=local+3;
	w=(pointer)DERIVEDP(ctx,2,local+1); /*derivedp*/
	if (w==NIL) goto CON64032;
	local[1]= loadglobal(fqv[33]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	*(ovafptr(local[1],fqv[34])) = local[2];
	local[2]= *(ovafptr(argv[4],fqv[35]));
	*(ovafptr(local[1],fqv[35])) = local[2];
	local[2]= *(ovafptr(argv[4],fqv[36]));
	*(ovafptr(local[1],fqv[36])) = local[2];
	local[2]= *(ovafptr(argv[4],fqv[37]));
	local[3]= local[2];
	*(ovafptr(local[1],fqv[37])) = local[3];
	w = local[1];
	argv[4] = w;
	local[1]= argv[4];
	goto CON63999;
CON64032:
	local[1]= NIL;
CON63999:
	argv[0]->c.obj.iv[3] = argv[4];
	argv[0]->c.obj.iv[7] = argv[2];
	argv[0]->c.obj.iv[8] = argv[3];
	w = argv[0];
	local[0]= w;
BLK63841:
	ctx->vsp=local; return(local[0]);}

/*defun-c-callable*/
static pointer F64102(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST64105:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO64126,env,argv,local);
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[1]= w;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO64135,env,argv,local);
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[2]= w;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,1,local+3,&ftab[6],fqv[38]); /*keywordp*/
	if (w==NIL) goto IF64143;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	goto IF64144;
IF64143:
	local[3]= fqv[1];
IF64144:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(*ftab[6])(ctx,1,local+4,&ftab[6],fqv[38]); /*keywordp*/
	if (w==NIL) goto IF64166;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
	goto IF64167;
IF64166:
	local[4]= local[0];
IF64167:
	local[5]= fqv[39];
	local[6]= fqv[40];
	local[7]= fqv[12];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[41];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[42];
	local[8]= fqv[43];
	local[9]= fqv[44];
	local[10]= fqv[45];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	local[9]= w;
	local[10]= fqv[16];
	local[11]= fqv[12];
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(*ftab[7])(ctx,1,local+12,&ftab[7],fqv[46]); /*string*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[41];
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
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[6];
	local[10]= fqv[12];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[12];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[47];
	local[13]= fqv[48];
	local[14]= local[2];
	w = local[4];
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
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
	local[0]= w;
BLK64103:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO64126(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!!iscons(w)) goto IF64316;
	local[0]= fqv[1];
	goto IF64317;
IF64316:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
IF64317:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO64135(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!!iscons(w)) goto IF64341;
	local[0]= argv[0];
	goto IF64342;
IF64341:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
IF64342:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*pod-address*/
static pointer F63295pod_address(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[49];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK64354:
	ctx->vsp=local; return(local[0]);}

/*byte-size*/
static pointer F63297byte_size(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[50]);
	ctx->vsp=local+2;
	w=(pointer)ASSQ(ctx,2,local+0); /*assq*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK64371:
	ctx->vsp=local; return(local[0]);}

/*:slotlist*/
static pointer M64439cstructclass_slotlist(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT64443;}
	local[0]= NIL;
ENT64443:
ENT64442:
	if (n>3) maerror();
	if (local[0]!=NIL) goto IF64459;
	w = argv[0]->c.obj.iv[10];
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK64440;
	goto IF64460;
IF64459:
	local[1]= NIL;
IF64460:
	argv[0]->c.obj.iv[10] = NIL;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= NIL;
	local[5]= makeint((eusinteger_t)1L);
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= NIL;
	local[10]= local[0];
WHL64523:
	if (local[10]==NIL) goto WHX64524;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10] = (w)->c.cons.cdr;
	w = local[11];
	local[9] = w;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.car;
	w = local[3];
	if (!issymbol(w)) goto CON64587;
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(*ftab[6])(ctx,1,local+11,&ftab[6],fqv[38]); /*keywordp*/
	if (w!=NIL) goto CON64587;
	local[11]= NIL;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	ctx->vsp=local+13;
	w=(pointer)SYMVALUE(ctx,1,local+12); /*symbol-value*/
	local[12]= w;
	local[13]= fqv[51];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
WHL64628:
	if (local[12]==NIL) goto WHX64629;
	w=local[12];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	w=local[12];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12] = (w)->c.cons.cdr;
	w = local[13];
	local[11] = w;
	local[13]= loadglobal(fqv[46]);
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(*ftab[7])(ctx,1,local+14,&ftab[7],fqv[46]); /*string*/
	local[14]= w;
	local[15]= fqv[52];
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	ctx->vsp=local+17;
	w=(*ftab[7])(ctx,1,local+16,&ftab[7],fqv[46]); /*string*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)CONCATENATE(ctx,4,local+13); /*concatenate*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)INTERN(ctx,1,local+13); /*intern*/
	local[13]= w;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	w = local[8];
	ctx->vsp=local+14;
	local[8] = cons(ctx,local[13],w);
	goto WHL64628;
WHX64629:
	local[13]= NIL;
BLK64630:
	w = NIL;
	local[11]= w;
	goto CON64585;
CON64587:
	local[11]= local[9];
	w = local[8];
	ctx->vsp=local+12;
	local[8] = cons(ctx,local[11],w);
	local[11]= local[8];
	goto CON64585;
CON64717:
	local[11]= NIL;
CON64585:
	goto WHL64523;
WHX64524:
	local[11]= NIL;
BLK64525:
	w = NIL;
	local[9]= local[8];
	ctx->vsp=local+10;
	w=(pointer)NREVERSE(ctx,1,local+9); /*nreverse*/
	local[8] = w;
	local[9]= NIL;
	local[10]= local[8];
WHL64762:
	if (local[10]==NIL) goto WHX64763;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10] = (w)->c.cons.cdr;
	w = local[11];
	local[9] = w;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)F63297byte_size(ctx,1,local+11); /*byte-size*/
	local[4] = w;
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(*ftab[6])(ctx,1,local+11,&ftab[6],fqv[38]); /*keywordp*/
	if (w!=NIL) goto IF64846;
	local[11]= fqv[53];
	ctx->vsp=local+12;
	w=(pointer)SIGERROR(ctx,1,local+11); /*error*/
	local[11]= w;
	goto IF64847;
IF64846:
	local[11]= NIL;
IF64847:
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	if (fqv[54]!=local[11]) goto IF64861;
	local[3] = fqv[55];
	local[4] = makeint((eusinteger_t)8L);
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[11];
	local[11]= w;
	goto IF64862;
IF64861:
	local[11]= NIL;
IF64862:
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car==NIL) goto IF64924;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	goto IF64925;
IF64924:
	local[11]= makeint((eusinteger_t)1L);
IF64925:
	local[5] = local[11];
	local[11]= local[4];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[2] = w;
	local[11]= local[1];
	local[12]= local[4];
	local[13]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,3,local+11); /*+*/
	local[11]= w;
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[1] = w;
	local[11]= local[7];
	local[12]= local[3];
	local[13]= local[5];
	local[14]= local[4];
	local[15]= local[1];
	local[16]= local[2];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,6,local+11); /*list*/
	local[11]= w;
	w = argv[0]->c.obj.iv[10];
	ctx->vsp=local+12;
	argv[0]->c.obj.iv[10] = cons(ctx,local[11],w);
	local[11]= local[1];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[1] = w;
	goto WHL64762;
WHX64763:
	local[11]= NIL;
BLK64764:
	w = NIL;
	local[9]= argv[0]->c.obj.iv[10];
	ctx->vsp=local+10;
	w=(pointer)NREVERSE(ctx,1,local+9); /*nreverse*/
	argv[0]->c.obj.iv[10] = w;
	argv[0]->c.obj.iv[9] = local[1];
	w = argv[0]->c.obj.iv[10];
	local[0]= w;
BLK64440:
	ctx->vsp=local; return(local[0]);}

/*:size*/
static pointer M65029cstructclass_size(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[9];
	local[0]= w;
BLK65030:
	ctx->vsp=local; return(local[0]);}

/*:slot*/
static pointer M65045cstructclass_slot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[2]==NIL) goto IF65060;
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[10];
	ctx->vsp=local+2;
	w=(pointer)ASSQ(ctx,2,local+0); /*assq*/
	local[0]= w;
	goto IF65061;
IF65060:
	w=argv[0]->c.obj.iv[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
IF65061:
	w = local[0];
	local[0]= w;
BLK65046:
	ctx->vsp=local; return(local[0]);}

/*:offset*/
static pointer M65076cstructclass_offset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT65080;}
	local[0]= NIL;
ENT65080:
ENT65079:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[56];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	if (local[1]!=NIL) goto IF65115;
	local[2]= fqv[57];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,2,local+2); /*error*/
	local[2]= w;
	goto IF65116;
IF65115:
	local[2]= NIL;
IF65116:
	if (local[0]==NIL) goto CON65130;
	local[2]= local[0];
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)GREQP(ctx,2,local+2); /*>=*/
	if (w==NIL) goto IF65136;
	local[2]= fqv[58];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto IF65137;
IF65136:
	local[2]= NIL;
IF65137:
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)4L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	local[3]= local[0];
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)3L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)TIMES(ctx,2,local+3); /***/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	goto CON65128;
CON65130:
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)4L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	goto CON65128;
CON65162:
	local[2]= NIL;
CON65128:
	w = local[2];
	local[0]= w;
BLK65077:
	ctx->vsp=local; return(local[0]);}

/*:access*/
static pointer M65171cstructclass_access(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT65175;}
	local[0]= NIL;
ENT65175:
ENT65174:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[56];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= NIL;
	if (local[1]!=NIL) goto IF65213;
	local[3]= fqv[59];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF65214;
IF65213:
	local[3]= NIL;
IF65214:
	if (local[0]==NIL) goto CON65227;
	local[3]= local[0];
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)GREQP(ctx,2,local+3); /*>=*/
	if (w==NIL) goto IF65233;
	local[3]= fqv[60];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF65234;
IF65233:
	local[3]= NIL;
IF65234:
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)4L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= local[0];
	local[5]= local[1];
	local[6]= makeint((eusinteger_t)3L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	local[2] = w;
	local[3]= local[2];
	goto CON65225;
CON65227:
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)4L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[2] = w;
	local[3]= local[2];
	goto CON65225;
CON65264:
	local[3]= NIL;
CON65225:
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[0]= w;
BLK65172:
	ctx->vsp=local; return(local[0]);}

/*:get*/
static pointer M65300cstruct_get(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT65304;}
	local[0]= NIL;
ENT65304:
ENT65303:
	if (n>4) maerror();
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)GETCLASS(ctx,1,local+1); /*class*/
	local[1]= w;
	local[2]= fqv[61];
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)PEEK(ctx,3,local+2); /*system:peek*/
	local[0]= w;
BLK65301:
	ctx->vsp=local; return(local[0]);}

/*:set*/
static pointer M65358cstruct_set(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	if (n>=5) { local[0]=(argv[4]); goto ENT65362;}
	local[0]= NIL;
ENT65362:
ENT65361:
	if (n>5) maerror();
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)GETCLASS(ctx,1,local+1); /*class*/
	local[1]= w;
	local[2]= fqv[61];
	local[3]= argv[3];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	local[2]= argv[2];
	local[3]= argv[0];
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	ctx->vsp=local+6;
	w=(pointer)POKE(ctx,4,local+2); /*system:poke*/
	local[0]= w;
BLK65359:
	ctx->vsp=local; return(local[0]);}

/*defcstruct*/
static pointer F65420(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST65423:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= NIL;
	local[9]= NIL;
	local[10]= NIL;
	local[11]= NIL;
	local[12]= NIL;
	local[13]= NIL;
	local[14]= NIL;
	local[15]= NIL;
	local[16]= NIL;
	local[17]= argv[0];
	ctx->vsp=local+18;
	w=(*ftab[7])(ctx,1,local+17,&ftab[7],fqv[46]); /*string*/
	local[17]= w;
	local[18]= fqv[62];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.car;
	if (fqv[63]!=local[19]) goto IF65486;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18] = (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	local[19]= local[0];
	goto IF65487;
IF65486:
	local[19]= NIL;
IF65487:
	local[19]= NIL;
	local[20]= local[0];
WHL65544:
	if (local[20]==NIL) goto WHX65545;
	w=local[20];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	w=local[20];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20] = (w)->c.cons.cdr;
	w = local[21];
	local[19] = w;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.car;
	w = local[6];
	if (!issymbol(w)) goto IF65606;
	local[21]= local[6];
	ctx->vsp=local+22;
	w=(*ftab[6])(ctx,1,local+21,&ftab[6],fqv[38]); /*keywordp*/
	if (w!=NIL) goto IF65606;
	local[21]= NIL;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22]= (w)->c.cons.car;
	ctx->vsp=local+23;
	w=(pointer)SYMVALUE(ctx,1,local+22); /*symbol-value*/
	local[22]= w;
	local[23]= fqv[51];
	ctx->vsp=local+24;
	w=(pointer)SEND(ctx,2,local+22); /*send*/
	local[22]= w;
WHL65647:
	if (local[22]==NIL) goto WHX65648;
	w=local[22];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[23]= (w)->c.cons.car;
	w=local[22];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22] = (w)->c.cons.cdr;
	w = local[23];
	local[21] = w;
	local[23]= loadglobal(fqv[46]);
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[24]= (w)->c.cons.car;
	ctx->vsp=local+25;
	w=(*ftab[7])(ctx,1,local+24,&ftab[7],fqv[46]); /*string*/
	local[24]= w;
	local[25]= fqv[64];
	w=local[21];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[26]= (w)->c.cons.car;
	ctx->vsp=local+27;
	w=(*ftab[7])(ctx,1,local+26,&ftab[7],fqv[46]); /*string*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)CONCATENATE(ctx,4,local+23); /*concatenate*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)INTERN(ctx,1,local+23); /*intern*/
	local[23]= w;
	w=local[21];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[24]= (w)->c.cons.car;
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,2,local+23); /*list*/
	local[23]= w;
	w = local[11];
	ctx->vsp=local+24;
	local[11] = cons(ctx,local[23],w);
	goto WHL65647;
WHX65648:
	local[23]= NIL;
BLK65649:
	w = NIL;
	local[21]= w;
	goto IF65607;
IF65606:
	local[21]= local[19];
	w = local[11];
	ctx->vsp=local+22;
	local[11] = cons(ctx,local[21],w);
	local[21]= local[11];
IF65607:
	goto WHL65544;
WHX65545:
	local[21]= NIL;
BLK65546:
	w = NIL;
	local[19]= NIL;
	local[20]= local[11];
	ctx->vsp=local+21;
	w=(pointer)NREVERSE(ctx,1,local+20); /*nreverse*/
	local[20]= w;
WHL65771:
	if (local[20]==NIL) goto WHX65772;
	w=local[20];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	w=local[20];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20] = (w)->c.cons.cdr;
	w = local[21];
	local[19] = w;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	ctx->vsp=local+22;
	w=(*ftab[7])(ctx,1,local+21,&ftab[7],fqv[46]); /*string*/
	local[2] = w;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.car;
	local[21]= loadglobal(fqv[46]);
	local[22]= local[17];
	local[23]= fqv[65];
	local[24]= local[2];
	ctx->vsp=local+25;
	w=(pointer)CONCATENATE(ctx,4,local+21); /*concatenate*/
	local[16] = w;
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)INTERN(ctx,1,local+21); /*intern*/
	local[14] = w;
	local[21]= loadglobal(fqv[46]);
	local[22]= fqv[66];
	local[23]= local[16];
	ctx->vsp=local+24;
	w=(pointer)CONCATENATE(ctx,3,local+21); /*concatenate*/
	local[21]= w;
	ctx->vsp=local+22;
	w=(pointer)INTERN(ctx,1,local+21); /*intern*/
	local[15] = w;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19] = (w)->c.cons.cdr;
	if (local[19]!=NIL) goto CON65873;
	local[21]= local[6];
	ctx->vsp=local+22;
	w=(pointer)F63297byte_size(ctx,1,local+21); /*byte-size*/
	local[9] = w;
	local[21]= local[7];
	local[22]= local[9];
	local[23]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+24;
	w=(pointer)PLUS(ctx,3,local+21); /*+*/
	local[21]= w;
	local[22]= local[9];
	ctx->vsp=local+23;
	w=(pointer)QUOTIENT(ctx,2,local+21); /*/*/
	local[21]= w;
	local[22]= local[9];
	ctx->vsp=local+23;
	w=(pointer)TIMES(ctx,2,local+21); /***/
	local[7] = w;
	local[21]= fqv[67];
	local[22]= local[14];
	local[23]= fqv[68];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	local[23]= w;
	local[24]= fqv[69];
	local[25]= fqv[68];
	local[26]= local[7];
	local[27]= local[6];
	ctx->vsp=local+28;
	w=(pointer)LIST(ctx,1,local+27); /*list*/
	ctx->vsp=local+27;
	w = cons(ctx,local[26],w);
	ctx->vsp=local+26;
	w = cons(ctx,local[25],w);
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[3] = cons(ctx,local[21],w);
	local[21]= fqv[70];
	local[22]= local[14];
	local[23]= local[15];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[4] = cons(ctx,local[21],w);
	local[21]= fqv[67];
	local[22]= local[15];
	local[23]= fqv[68];
	local[24]= fqv[71];
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	local[23]= cons(ctx,local[23],w);
	local[24]= fqv[72];
	local[25]= fqv[71];
	local[26]= fqv[68];
	local[27]= local[7];
	local[28]= local[6];
	ctx->vsp=local+29;
	w=(pointer)LIST(ctx,1,local+28); /*list*/
	ctx->vsp=local+28;
	w = cons(ctx,local[27],w);
	ctx->vsp=local+27;
	w = cons(ctx,local[26],w);
	ctx->vsp=local+26;
	w = cons(ctx,local[25],w);
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[5] = cons(ctx,local[21],w);
	local[21]= local[5];
	goto CON65871;
CON65873:
	local[12] = local[6];
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	if (fqv[54]!=local[21]) goto IF66006;
	local[12] = fqv[73];
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19] = (w)->c.cons.cdr;
	w = local[21];
	local[21]= w;
	goto IF66007;
IF66006:
	local[21]= NIL;
IF66007:
	local[21]= local[12];
	ctx->vsp=local+22;
	w=(pointer)F63297byte_size(ctx,1,local+21); /*byte-size*/
	local[13] = w;
	local[21]= local[13];
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car==NIL) goto IF66074;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22]= (w)->c.cons.car;
	goto IF66075;
IF66074:
	local[22]= makeint((eusinteger_t)1L);
IF66075:
	ctx->vsp=local+23;
	w=(pointer)TIMES(ctx,2,local+21); /***/
	local[9] = w;
	local[21]= local[7];
	local[22]= local[13];
	local[23]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+24;
	w=(pointer)PLUS(ctx,3,local+21); /*+*/
	local[21]= w;
	local[22]= local[13];
	ctx->vsp=local+23;
	w=(pointer)QUOTIENT(ctx,2,local+21); /*/*/
	local[21]= w;
	local[22]= local[13];
	ctx->vsp=local+23;
	w=(pointer)TIMES(ctx,2,local+21); /***/
	local[7] = w;
	local[21]= local[12];
	w = fqv[74];
	if (memq(local[21],w)==NIL) goto CON66114;
	local[21]= fqv[67];
	local[22]= local[14];
	local[23]= fqv[68];
	local[24]= fqv[75];
	local[25]= fqv[76];
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,1,local+25); /*list*/
	ctx->vsp=local+25;
	w = cons(ctx,local[24],w);
	ctx->vsp=local+24;
	local[23]= cons(ctx,local[23],w);
	local[24]= fqv[77];
	local[25]= fqv[76];
	local[26]= fqv[69];
	local[27]= fqv[68];
	local[28]= fqv[78];
	local[29]= local[7];
	local[30]= fqv[76];
	ctx->vsp=local+31;
	w=(pointer)LIST(ctx,1,local+30); /*list*/
	ctx->vsp=local+30;
	w = cons(ctx,local[29],w);
	ctx->vsp=local+29;
	local[28]= cons(ctx,local[28],w);
	local[29]= fqv[79];
	ctx->vsp=local+30;
	w=(pointer)LIST(ctx,1,local+29); /*list*/
	ctx->vsp=local+29;
	w = cons(ctx,local[28],w);
	ctx->vsp=local+28;
	w = cons(ctx,local[27],w);
	ctx->vsp=local+27;
	local[26]= cons(ctx,local[26],w);
	local[27]= fqv[80];
	local[28]= fqv[68];
	local[29]= local[7];
	local[30]= fqv[78];
	local[31]= local[7];
	local[32]= local[9];
	ctx->vsp=local+33;
	w=(pointer)LIST(ctx,1,local+32); /*list*/
	ctx->vsp=local+32;
	w = cons(ctx,local[31],w);
	ctx->vsp=local+31;
	local[30]= cons(ctx,local[30],w);
	ctx->vsp=local+31;
	w=(pointer)LIST(ctx,1,local+30); /*list*/
	ctx->vsp=local+30;
	w = cons(ctx,local[29],w);
	ctx->vsp=local+29;
	w = cons(ctx,local[28],w);
	ctx->vsp=local+28;
	local[27]= cons(ctx,local[27],w);
	ctx->vsp=local+28;
	w=(pointer)LIST(ctx,1,local+27); /*list*/
	ctx->vsp=local+27;
	w = cons(ctx,local[26],w);
	ctx->vsp=local+26;
	w = cons(ctx,local[25],w);
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[3] = cons(ctx,local[21],w);
	local[21]= fqv[70];
	local[22]= local[14];
	local[23]= local[15];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[4] = cons(ctx,local[21],w);
	local[21]= fqv[67];
	local[22]= local[15];
	local[23]= fqv[68];
	local[24]= fqv[76];
	local[25]= fqv[81];
	local[26]= fqv[71];
	ctx->vsp=local+27;
	w=(pointer)LIST(ctx,1,local+26); /*list*/
	ctx->vsp=local+26;
	w = cons(ctx,local[25],w);
	ctx->vsp=local+25;
	w = cons(ctx,local[24],w);
	ctx->vsp=local+24;
	local[23]= cons(ctx,local[23],w);
	local[24]= fqv[77];
	local[25]= fqv[71];
	local[26]= fqv[72];
	local[27]= fqv[82];
	local[28]= fqv[71];
	ctx->vsp=local+29;
	w=(pointer)LIST(ctx,1,local+28); /*list*/
	ctx->vsp=local+28;
	local[27]= cons(ctx,local[27],w);
	local[28]= fqv[78];
	local[29]= local[7];
	local[30]= fqv[76];
	ctx->vsp=local+31;
	w=(pointer)LIST(ctx,1,local+30); /*list*/
	ctx->vsp=local+30;
	w = cons(ctx,local[29],w);
	ctx->vsp=local+29;
	local[28]= cons(ctx,local[28],w);
	local[29]= fqv[79];
	ctx->vsp=local+30;
	w=(pointer)LIST(ctx,1,local+29); /*list*/
	ctx->vsp=local+29;
	w = cons(ctx,local[28],w);
	ctx->vsp=local+28;
	w = cons(ctx,local[27],w);
	ctx->vsp=local+27;
	local[26]= cons(ctx,local[26],w);
	local[27]= fqv[26];
	local[28]= fqv[68];
	local[29]= fqv[76];
	local[30]= fqv[25];
	local[31]= local[7];
	local[32]= fqv[83];
	local[33]= fqv[84];
	local[34]= fqv[76];
	ctx->vsp=local+35;
	w=(pointer)LIST(ctx,1,local+34); /*list*/
	ctx->vsp=local+34;
	local[33]= cons(ctx,local[33],w);
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	ctx->vsp=local+33;
	w = cons(ctx,local[32],w);
	ctx->vsp=local+32;
	w = cons(ctx,local[31],w);
	ctx->vsp=local+31;
	w = cons(ctx,local[30],w);
	ctx->vsp=local+30;
	w = cons(ctx,local[29],w);
	ctx->vsp=local+29;
	w = cons(ctx,local[28],w);
	ctx->vsp=local+28;
	local[27]= cons(ctx,local[27],w);
	ctx->vsp=local+28;
	w=(pointer)LIST(ctx,1,local+27); /*list*/
	ctx->vsp=local+27;
	w = cons(ctx,local[26],w);
	ctx->vsp=local+26;
	w = cons(ctx,local[25],w);
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[5] = cons(ctx,local[21],w);
	local[21]= local[5];
	goto CON66112;
CON66114:
	local[21]= fqv[67];
	local[22]= local[14];
	local[23]= fqv[68];
	local[24]= fqv[76];
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	local[23]= cons(ctx,local[23],w);
	local[24]= fqv[85];
	local[25]= fqv[86];
	local[26]= fqv[76];
	ctx->vsp=local+27;
	w=(pointer)LIST(ctx,1,local+26); /*list*/
	ctx->vsp=local+26;
	local[25]= cons(ctx,local[25],w);
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,1,local+25); /*list*/
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	local[25]= fqv[69];
	local[26]= fqv[68];
	local[27]= fqv[78];
	local[28]= local[7];
	local[29]= fqv[54];
	local[30]= fqv[76];
	local[31]= local[13];
	ctx->vsp=local+32;
	w=(pointer)LIST(ctx,1,local+31); /*list*/
	ctx->vsp=local+31;
	w = cons(ctx,local[30],w);
	ctx->vsp=local+30;
	local[29]= cons(ctx,local[29],w);
	ctx->vsp=local+30;
	w=(pointer)LIST(ctx,1,local+29); /*list*/
	ctx->vsp=local+29;
	w = cons(ctx,local[28],w);
	ctx->vsp=local+28;
	local[27]= cons(ctx,local[27],w);
	local[28]= local[12];
	ctx->vsp=local+29;
	w=(pointer)LIST(ctx,1,local+28); /*list*/
	ctx->vsp=local+28;
	w = cons(ctx,local[27],w);
	ctx->vsp=local+27;
	w = cons(ctx,local[26],w);
	ctx->vsp=local+26;
	local[25]= cons(ctx,local[25],w);
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,1,local+25); /*list*/
	ctx->vsp=local+25;
	w = cons(ctx,local[24],w);
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[3] = cons(ctx,local[21],w);
	local[21]= fqv[70];
	local[22]= local[14];
	local[23]= local[15];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[4] = cons(ctx,local[21],w);
	local[21]= fqv[67];
	local[22]= local[15];
	local[23]= fqv[68];
	local[24]= fqv[76];
	local[25]= fqv[71];
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,1,local+25); /*list*/
	ctx->vsp=local+25;
	w = cons(ctx,local[24],w);
	ctx->vsp=local+24;
	local[23]= cons(ctx,local[23],w);
	local[24]= fqv[85];
	local[25]= fqv[86];
	local[26]= fqv[76];
	ctx->vsp=local+27;
	w=(pointer)LIST(ctx,1,local+26); /*list*/
	ctx->vsp=local+26;
	local[25]= cons(ctx,local[25],w);
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,1,local+25); /*list*/
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	local[25]= fqv[72];
	local[26]= fqv[71];
	local[27]= fqv[68];
	local[28]= fqv[78];
	local[29]= local[7];
	local[30]= fqv[54];
	local[31]= fqv[76];
	local[32]= local[13];
	ctx->vsp=local+33;
	w=(pointer)LIST(ctx,1,local+32); /*list*/
	ctx->vsp=local+32;
	w = cons(ctx,local[31],w);
	ctx->vsp=local+31;
	local[30]= cons(ctx,local[30],w);
	ctx->vsp=local+31;
	w=(pointer)LIST(ctx,1,local+30); /*list*/
	ctx->vsp=local+30;
	w = cons(ctx,local[29],w);
	ctx->vsp=local+29;
	local[28]= cons(ctx,local[28],w);
	local[29]= local[12];
	ctx->vsp=local+30;
	w=(pointer)LIST(ctx,1,local+29); /*list*/
	ctx->vsp=local+29;
	w = cons(ctx,local[28],w);
	ctx->vsp=local+28;
	w = cons(ctx,local[27],w);
	ctx->vsp=local+27;
	w = cons(ctx,local[26],w);
	ctx->vsp=local+26;
	local[25]= cons(ctx,local[25],w);
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,1,local+25); /*list*/
	ctx->vsp=local+25;
	w = cons(ctx,local[24],w);
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[5] = cons(ctx,local[21],w);
	local[21]= local[5];
	goto CON66112;
CON66359:
	local[21]= NIL;
CON66112:
	goto CON65871;
CON65994:
	local[21]= fqv[87];
	ctx->vsp=local+22;
	w=(pointer)SIGERROR(ctx,1,local+21); /*error*/
	local[21]= w;
	goto CON65871;
CON66546:
	local[21]= NIL;
CON65871:
	local[21]= local[3];
	w = local[1];
	ctx->vsp=local+22;
	local[1] = cons(ctx,local[21],w);
	local[21]= local[4];
	w = local[1];
	ctx->vsp=local+22;
	local[1] = cons(ctx,local[21],w);
	local[21]= local[5];
	w = local[1];
	ctx->vsp=local+22;
	local[1] = cons(ctx,local[21],w);
	local[21]= local[7];
	local[22]= local[9];
	ctx->vsp=local+23;
	w=(pointer)PLUS(ctx,2,local+21); /*+*/
	local[7] = w;
	goto WHL65771;
WHX65772:
	local[21]= NIL;
BLK65773:
	w = NIL;
	local[19]= fqv[39];
	local[20]= fqv[88];
	local[21]= argv[0];
	local[22]= fqv[63];
	local[23]= local[18];
	local[24]= fqv[19];
	local[25]= fqv[79];
	local[26]= fqv[89];
	local[27]= fqv[90];
	ctx->vsp=local+28;
	w=(pointer)LIST(ctx,1,local+27); /*list*/
	ctx->vsp=local+27;
	w = cons(ctx,local[26],w);
	ctx->vsp=local+26;
	w = cons(ctx,local[25],w);
	ctx->vsp=local+25;
	w = cons(ctx,local[24],w);
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	w = cons(ctx,local[21],w);
	ctx->vsp=local+21;
	local[20]= cons(ctx,local[20],w);
	local[21]= fqv[42];
	local[22]= argv[0];
	local[23]= fqv[51];
	local[24]= fqv[12];
	local[25]= local[0];
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,1,local+25); /*list*/
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[21]= cons(ctx,local[21],w);
	local[22]= local[1];
	ctx->vsp=local+23;
	w=(pointer)NREVERSE(ctx,1,local+22); /*nreverse*/
	local[22]= w;
	local[23]= fqv[12];
	local[24]= argv[0];
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	local[23]= cons(ctx,local[23],w);
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)APPEND(ctx,2,local+22); /*append*/
	ctx->vsp=local+22;
	w = cons(ctx,local[21],w);
	ctx->vsp=local+21;
	w = cons(ctx,local[20],w);
	ctx->vsp=local+20;
	w = cons(ctx,local[19],w);
	local[0]= w;
BLK65421:
	ctx->vsp=local; return(local[0]);}

/*:get*/
static pointer M66704carray_get(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT66708;}
	local[0]= makeint((eusinteger_t)0L);
ENT66708:
ENT66707:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= *(ovafptr(argv[1],fqv[91]));
	local[3]= fqv[92];
	local[4]= NIL;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SENDMESSAGE(ctx,5,local+1); /*send-message*/
	local[0]= w;
BLK66705:
	ctx->vsp=local; return(local[0]);}

/*:set*/
static pointer M66734carray_set(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT66738;}
	local[0]= makeint((eusinteger_t)0L);
ENT66738:
ENT66737:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= *(ovafptr(argv[1],fqv[91]));
	local[3]= fqv[93];
	local[4]= argv[2];
	local[5]= NIL;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)SENDMESSAGE(ctx,6,local+1); /*send-message*/
	local[0]= w;
BLK66735:
	ctx->vsp=local; return(local[0]);}

/*defcarray*/
static pointer F66768(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT66772;}
	local[0]= makeint((eusinteger_t)1L);
ENT66772:
ENT66771:
	if (n>3) maerror();
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(*ftab[8])(ctx,1,local+1,&ftab[8],fqv[94]); /*symbol-name*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,1,local+2,&ftab[8],fqv[94]); /*symbol-name*/
	local[2]= w;
	local[3]= loadglobal(fqv[46]);
	local[4]= local[2];
	local[5]= fqv[95];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(*ftab[8])(ctx,1,local+6,&ftab[8],fqv[94]); /*symbol-name*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)CONCATENATE(ctx,4,local+3); /*concatenate*/
	local[3]= w;
	local[4]= loadglobal(fqv[46]);
	local[5]= fqv[96];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)CONCATENATE(ctx,3,local+4); /*concatenate*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)INTERN(ctx,1,local+4); /*intern*/
	local[4]= w;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)INTERN(ctx,1,local+5); /*intern*/
	local[5]= w;
	local[6]= loadglobal(fqv[46]);
	local[7]= fqv[97];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)CONCATENATE(ctx,3,local+6); /*concatenate*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)INTERN(ctx,1,local+6); /*intern*/
	local[6]= w;
	local[7]= fqv[39];
	local[8]= fqv[98];
	local[9]= argv[0];
	local[10]= fqv[63];
	local[11]= fqv[99];
	local[12]= local[1];
	local[13]= argv[1];
	local[14]= local[0];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
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
	local[9]= fqv[67];
	local[10]= argv[0];
	local[11]= fqv[68];
	local[12]= fqv[75];
	local[13]= fqv[76];
	local[14]= fqv[100];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= local[5];
	local[13]= fqv[68];
	local[14]= fqv[76];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[67];
	local[11]= local[4];
	local[12]= fqv[68];
	local[13]= fqv[76];
	local[14]= fqv[75];
	local[15]= fqv[71];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[77];
	local[14]= fqv[71];
	local[15]= local[6];
	local[16]= fqv[68];
	local[17]= fqv[76];
	local[18]= fqv[71];
	ctx->vsp=local+19;
	w=(pointer)LIST(ctx,1,local+18); /*list*/
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	local[16]= local[6];
	local[17]= fqv[68];
	local[18]= fqv[101];
	local[19]= fqv[76];
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
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
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[70];
	local[12]= argv[0];
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[12];
	local[13]= argv[0];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
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
	local[0]= w;
BLK66769:
	ctx->vsp=local; return(local[0]);}

/*make-foreign-string*/
static pointer F63334make_foreign_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= loadglobal(fqv[102]);
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,2,local+0); /*instantiate*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)2L);
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)8L)); i=intval(local[2]);
		local[2]=(makeint(i * j));}
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)ADDRESS(ctx,1,local+3); /*system:address*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	local[3]= fqv[73];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,3,local+1); /*system:poke*/
	w = local[0];
	local[0]= w;
BLK67037:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___eusforeign(ctx,n,argv,env)
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
	local[0]= fqv[103];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF67090;
	local[0]= fqv[104];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[41],w);
	goto IF67091;
IF67090:
	local[0]= fqv[105];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF67091:
	local[0]= fqv[106];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M63379load_module_find,fqv[107],fqv[108],fqv[109]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M63419foreign_code_init,fqv[6],fqv[5],fqv[110]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[13],module,F63289make_foreign_code,fqv[111]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[112],module,F63291load_foreign,fqv[113]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[114],module,F63608,fqv[115]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[116],module,F63682,fqv[117]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[118],module,F63293byte_string,fqv[119]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M63818foreign_pod_pod_address,fqv[49],fqv[45],fqv[120]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M63840foreign_pod_init,fqv[6],fqv[45],fqv[121]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[122],module,F64102,fqv[123]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[124],module,F63295pod_address,fqv[125]);
	local[0]= fqv[50];
	local[1]= fqv[126];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF67136;
	local[0]= fqv[50];
	local[1]= fqv[126];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[50];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF67159;
	local[0]= fqv[50];
	local[1]= fqv[127];
	local[2]= fqv[55];
	local[3]= makeint((eusinteger_t)8L);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[73];
	local[4]= makeint((eusinteger_t)8L);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[128];
	local[5]= makeint((eusinteger_t)4L);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[1];
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[129];
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[20];
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[130];
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[23];
	local[10]= makeint((eusinteger_t)4L);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[131];
	local[11]= makeint((eusinteger_t)8L);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[132];
	local[12]= fqv[133];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[79];
	local[13]= fqv[134];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
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
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF67160;
IF67159:
	local[0]= NIL;
IF67160:
	local[0]= fqv[50];
	goto IF67137;
IF67136:
	local[0]= NIL;
IF67137:
	ctx->vsp=local+0;
	compfun(ctx,fqv[135],module,F63297byte_size,fqv[136]);
	local[0]= fqv[90];
	local[1]= fqv[127];
	local[2]= fqv[90];
	local[3]= fqv[63];
	local[4]= loadglobal(fqv[137]);
	local[5]= fqv[138];
	local[6]= fqv[139];
	local[7]= fqv[89];
	local[8]= NIL;
	local[9]= fqv[19];
	local[10]= NIL;
	local[11]= fqv[140];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[141];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[9])(ctx,13,local+2,&ftab[9],fqv[142]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M64439cstructclass_slotlist,fqv[51],fqv[90],fqv[143]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M65029cstructclass_size,fqv[140],fqv[90],fqv[144]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M65045cstructclass_slot,fqv[56],fqv[90],fqv[145]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M65076cstructclass_offset,fqv[146],fqv[90],fqv[147]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M65171cstructclass_access,fqv[61],fqv[90],fqv[148]);
	local[0]= fqv[62];
	local[1]= fqv[127];
	local[2]= fqv[62];
	local[3]= fqv[63];
	local[4]= loadglobal(fqv[46]);
	local[5]= fqv[138];
	local[6]= fqv[18];
	local[7]= fqv[89];
	local[8]= NIL;
	local[9]= fqv[19];
	local[10]= fqv[79];
	local[11]= fqv[140];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[141];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[9])(ctx,13,local+2,&ftab[9],fqv[142]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M65300cstruct_get,fqv[92],fqv[62],fqv[149]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M65358cstruct_set,fqv[93],fqv[62],fqv[150]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[98],module,F65420,fqv[151]);
	local[0]= fqv[99];
	local[1]= fqv[127];
	local[2]= fqv[99];
	local[3]= fqv[63];
	local[4]= loadglobal(fqv[62]);
	local[5]= fqv[138];
	local[6]= fqv[18];
	local[7]= fqv[89];
	local[8]= NIL;
	local[9]= fqv[19];
	local[10]= NIL;
	local[11]= fqv[140];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[141];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[9])(ctx,13,local+2,&ftab[9],fqv[142]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M66704carray_get,fqv[92],fqv[99],fqv[152]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M66734carray_set,fqv[93],fqv[99],fqv[153]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[154],module,F66768,fqv[155]);
	local[0]= fqv[102];
	local[1]= fqv[127];
	local[2]= fqv[102];
	local[3]= fqv[63];
	local[4]= loadglobal(fqv[156]);
	local[5]= fqv[138];
	local[6]= fqv[18];
	local[7]= fqv[89];
	local[8]= NIL;
	local[9]= fqv[19];
	local[10]= fqv[157];
	local[11]= fqv[140];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[141];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[9])(ctx,13,local+2,&ftab[9],fqv[142]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[158],module,F63334make_foreign_string,fqv[159]);
	local[0]= fqv[160];
	local[1]= fqv[161];
	ctx->vsp=local+2;
	w=(*ftab[10])(ctx,2,local+0,&ftab[10],fqv[162]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<11; i++) ftab[i]=fcallx;
}
