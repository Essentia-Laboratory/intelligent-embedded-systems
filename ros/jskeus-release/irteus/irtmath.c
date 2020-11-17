/* ./irtmath.c :  entry=irtmath */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtmath.h"
#pragma init (register_irtmath)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtmath();
extern pointer build_quote_vector();
static int register_irtmath()
  { add_module_initializer("___irtmath", ___irtmath);}

static pointer F69inverse_matrix();
static pointer F70diagonal();
static pointer F71minor_matrix();
static pointer F72atan2();
static pointer F73outer_product_matrix();
static pointer F74matrix2quaternion();
static pointer F75quaternion2matrix();
static pointer F76matrix_log();
static pointer F77matrix_exponent();
static pointer F78midrot();
static pointer F79pseudo_inverse();
static pointer F80pseudo_inverse_org();
static pointer F81sr_inverse();
static pointer F82sr_inverse_org();
static pointer F83manipulability();
static pointer F84random_gauss();
static pointer F85gaussian_random();
static pointer F86eigen_decompose();
static pointer F87lms();
static pointer F88lms_estimate();
static pointer F89lms_error();
static pointer F90lmeds();
static pointer F91lmeds_error();
static pointer F92lmeds_error_mat();
static pointer F93concatenate_matrix_column();
static pointer F94concatenate_matrix_row();
static pointer F95concatenate_matrix_diagonal();
static pointer F96vector_variance();
static pointer F97covariance_matrix();
static pointer F98normalize_vector();

/*inverse-matrix*/
static pointer F69inverse_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[0]); /*array-dimension*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,1,local+1,&ftab[1],fqv[1]); /*unit-matrix*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[2])(ctx,2,local+2,&ftab[2],fqv[2]); /*lu-decompose2*/
	local[2]= w;
	local[3]= NIL;
	local[4]= local[0];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[3])(ctx,2,local+4,&ftab[3],fqv[3]); /*make-matrix*/
	local[4]= w;
	local[5]= loadglobal(fqv[4]);
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,2,local+5); /*instantiate*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	if (local[2]!=NIL) goto IF100;
	local[7]= fqv[5];
	ctx->vsp=local+8;
	w=(*ftab[4])(ctx,1,local+7,&ftab[4],fqv[6]); /*warn*/
	w = local[1];
	ctx->vsp=local+7;
	local[0]=w;
	goto BLK99;
	goto IF101;
IF100:
	local[7]= NIL;
IF101:
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[0];
WHL103:
	local[9]= local[7];
	w = local[8];
	if ((eusinteger_t)local[9] >= (eusinteger_t)w) goto WHX104;
	local[9]= argv[0];
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(*ftab[2])(ctx,2,local+9,&ftab[2],fqv[2]); /*lu-decompose2*/
	local[2] = w;
	local[9]= local[5];
	local[10]= local[7];
	local[11]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+12;
	w=(pointer)ASET(ctx,3,local+9); /*aset*/
	local[9]= local[1];
	local[10]= local[2];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(*ftab[5])(ctx,3,local+9,&ftab[5],fqv[7]); /*lu-solve2*/
	local[3] = w;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[0];
WHL107:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX108;
	local[11]= local[4];
	local[12]= local[9];
	local[13]= local[7];
	local[14]= local[3];
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)AREF(ctx,2,local+14); /*aref*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)ASET(ctx,4,local+11); /*aset*/
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL107;
WHX108:
	local[11]= NIL;
BLK109:
	w = NIL;
	local[9]= local[5];
	local[10]= local[7];
	local[11]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+12;
	w=(pointer)ASET(ctx,3,local+9); /*aset*/
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[7] = w;
	goto WHL103;
WHX104:
	local[9]= NIL;
BLK105:
	w = NIL;
	w = local[4];
	local[0]= w;
BLK99:
	ctx->vsp=local; return(local[0]);}

/*diagonal*/
static pointer F70diagonal(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	local[1]= local[0];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,2,local+1,&ftab[3],fqv[3]); /*make-matrix*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= local[0];
WHL112:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX113;
	local[4]= local[1];
	local[5]= local[2];
	local[6]= local[2];
	local[7]= argv[0];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)ASET(ctx,4,local+4); /*aset*/
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL112;
WHX113:
	local[4]= NIL;
BLK114:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK110:
	ctx->vsp=local; return(local[0]);}

/*minor-matrix*/
static pointer F71minor_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[0]); /*array-dimension*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)SUB1(ctx,1,local+0); /*1-*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,2,local+1,&ftab[0],fqv[0]); /*array-dimension*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)SUB1(ctx,1,local+1); /*1-*/
	local[1]= w;
	local[2]= local[0];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,2,local+2,&ftab[3],fqv[3]); /*make-matrix*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
TAG118:
	local[5]= local[3];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)NUMEQUAL(ctx,2,local+5); /*=*/
	if (w==NIL) goto IF119;
	w = NIL;
	ctx->vsp=local+5;
	local[3]=w;
	goto BLK117;
	goto IF120;
IF119:
	local[5]= NIL;
IF120:
	local[5]= local[4];
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)NUMEQUAL(ctx,2,local+5); /*=*/
	if (w==NIL) goto IF121;
	local[5]= local[4];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[4] = w;
	local[5]= local[4];
	goto IF122;
IF121:
	local[5]= NIL;
IF122:
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
TAG125:
	local[7]= local[5];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)NUMEQUAL(ctx,2,local+7); /*=*/
	if (w==NIL) goto IF126;
	w = NIL;
	ctx->vsp=local+7;
	local[5]=w;
	goto BLK124;
	goto IF127;
IF126:
	local[7]= NIL;
IF127:
	local[7]= local[6];
	local[8]= argv[2];
	ctx->vsp=local+9;
	w=(pointer)NUMEQUAL(ctx,2,local+7); /*=*/
	if (w==NIL) goto IF128;
	local[7]= local[6];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[6] = w;
	local[7]= local[6];
	goto IF129;
IF128:
	local[7]= NIL;
IF129:
	local[7]= local[2];
	local[8]= local[3];
	local[9]= local[5];
	local[10]= argv[0];
	local[11]= local[4];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)ASET(ctx,4,local+7); /*aset*/
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[7]= w;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[8]= w;
	local[5] = local[7];
	local[6] = local[8];
	w = NIL;
	ctx->vsp=local+7;
	goto TAG125;
	w = NIL;
	local[5]= w;
BLK124:
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[5]= w;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[6]= w;
	local[3] = local[5];
	local[4] = local[6];
	w = NIL;
	ctx->vsp=local+5;
	goto TAG118;
	w = NIL;
	local[3]= w;
BLK117:
	w = local[2];
	local[0]= w;
BLK115:
	ctx->vsp=local; return(local[0]);}

/*atan2*/
static pointer F72atan2(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeflt(9.9999999999999964869129e-11);
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,1,local+1); /*-*/
	local[1]= w;
	local[2]= argv[1];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)GREATERP(ctx,2,local+2); /*>*/
	if (w==NIL) goto IF135;
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)ATAN(ctx,1,local+2); /*atan*/
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK134;
	goto IF136;
IF135:
	local[2]= NIL;
IF136:
	local[2]= argv[1];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,2,local+2); /*<*/
	if (w==NIL) goto IF137;
	local[2]= argv[0];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)GREATERP(ctx,2,local+2); /*>*/
	if (w==NIL) goto IF139;
	local[2]= makeflt(3.1415926535897931159980e+00);
	local[3]= argv[0];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)QUOTIENT(ctx,2,local+3); /*/*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)ATAN(ctx,1,local+3); /*atan*/
	{ double x,y;
		y=fltval(w); x=fltval(local[2]);
		local[2]=(makeflt(x + y));}
	w = local[2];
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK134;
	goto IF140;
IF139:
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)ATAN(ctx,1,local+2); /*atan*/
	local[2]= w;
	{ double x,y;
		y=fltval(makeflt(3.1415926535897931159980e+00)); x=fltval(local[2]);
		local[2]=(makeflt(x - y));}
	w = local[2];
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK134;
IF140:
	goto IF138;
IF137:
	local[2]= NIL;
IF138:
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)ABS(ctx,1,local+2); /*abs*/
	local[2]= w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,2,local+2); /*<*/
	if (w==NIL) goto IF141;
	w = makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK134;
	goto IF142;
IF141:
	local[2]= NIL;
IF142:
	local[2]= argv[0];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)GREATERP(ctx,2,local+2); /*>*/
	if (w==NIL) goto IF143;
	local[2]= makeflt(1.5707963267948965579990e+00);
	goto IF144;
IF143:
	local[2]= makeflt(-1.5707963267948965579990e+00);
IF144:
	w = local[2];
	local[0]= w;
BLK134:
	ctx->vsp=local; return(local[0]);}

/*outer-product-matrix*/
static pointer F73outer_product_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT147;}
	local[0]= makeint((eusinteger_t)3L);
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[1]); /*unit-matrix*/
	local[0]= w;
ENT147:
ENT146:
	if (n>2) maerror();
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)1L);
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MINUS(ctx,1,local+4); /*-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)2L);
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)1L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)1L);
	local[3]= makeint((eusinteger_t)1L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)1L);
	local[3]= makeint((eusinteger_t)2L);
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MINUS(ctx,1,local+4); /*-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MINUS(ctx,1,local+4); /*-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= makeint((eusinteger_t)1L);
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= makeint((eusinteger_t)2L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	w = local[0];
	local[0]= w;
BLK145:
	ctx->vsp=local; return(local[0]);}

/*matrix2quaternion*/
static pointer F74matrix2quaternion(ctx,n,argv,env)
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
	local[5]= makeint((eusinteger_t)1L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)PLUS(ctx,4,local+5); /*+*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)1L);
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,1,local+8); /*-*/
	local[8]= w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)2L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,1,local+9); /*-*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,4,local+6); /*+*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)4L);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)1L);
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,1,local+8); /*-*/
	local[8]= w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)2L);
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,1,local+10); /*-*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,4,local+7); /*+*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)4L);
	ctx->vsp=local+9;
	w=(pointer)QUOTIENT(ctx,2,local+7); /*/*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)1L);
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,1,local+9); /*-*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)1L);
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,1,local+10); /*-*/
	local[10]= w;
	local[11]= argv[0];
	local[12]= makeint((eusinteger_t)2L);
	local[13]= makeint((eusinteger_t)2L);
	ctx->vsp=local+14;
	w=(pointer)AREF(ctx,3,local+11); /*aref*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,4,local+8); /*+*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)4L);
	ctx->vsp=local+10;
	w=(pointer)QUOTIENT(ctx,2,local+8); /*/*/
	local[8]= w;
	local[9]= local[5];
	local[10]= local[6];
	local[11]= local[7];
	local[12]= local[8];
	ctx->vsp=local+13;
	w=(pointer)MAX(ctx,4,local+9); /*max*/
	local[4] = w;
	local[9]= local[4];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[6])(ctx,2,local+9,&ftab[6],fqv[8]); /*eps=*/
	if (w==NIL) goto CON150;
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SQRT(ctx,1,local+9); /*sqrt*/
	local[0] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)2L);
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)1L);
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[1] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)2L);
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[2] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)0L);
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[3] = w;
	local[9]= local[3];
	goto CON149;
CON150:
	local[9]= local[4];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(*ftab[6])(ctx,2,local+9,&ftab[6],fqv[8]); /*eps=*/
	if (w==NIL) goto CON151;
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)SQRT(ctx,1,local+9); /*sqrt*/
	local[1] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)2L);
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)1L);
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[0] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)1L);
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[2] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)2L);
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[3] = w;
	local[9]= local[3];
	goto CON149;
CON151:
	local[9]= local[4];
	local[10]= local[7];
	ctx->vsp=local+11;
	w=(*ftab[6])(ctx,2,local+9,&ftab[6],fqv[8]); /*eps=*/
	if (w==NIL) goto CON152;
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)SQRT(ctx,1,local+9); /*sqrt*/
	local[2] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)2L);
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[0] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)1L);
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[1] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)2L);
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[3] = w;
	local[9]= local[3];
	goto CON149;
CON152:
	local[9]= local[4];
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(*ftab[6])(ctx,2,local+9,&ftab[6],fqv[8]); /*eps=*/
	if (w==NIL) goto CON153;
	local[9]= local[8];
	ctx->vsp=local+10;
	w=(pointer)SQRT(ctx,1,local+9); /*sqrt*/
	local[3] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)0L);
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[0] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)2L);
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[1] = w;
	local[9]= argv[0];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= makeint((eusinteger_t)2L);
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[2] = w;
	local[9]= local[2];
	goto CON149;
CON153:
	local[9]= fqv[9];
	ctx->vsp=local+10;
	w=(*ftab[4])(ctx,1,local+9,&ftab[4],fqv[6]); /*warn*/
	local[9]= w;
	goto CON149;
CON154:
	local[9]= NIL;
CON149:
	local[9]= local[0];
	local[10]= local[1];
	local[11]= local[2];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)MKFLTVEC(ctx,4,local+9); /*float-vector*/
	local[0]= w;
BLK148:
	ctx->vsp=local; return(local[0]);}

/*quaternion2matrix*/
static pointer F75quaternion2matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)VINNERPRODUCT(ctx,2,local+4); /*v.*/
	local[4]= w;
	local[5]= makeflt(1.0000000000000000000000e+00);
	local[6]= makeflt(9.9999999999999950039964e-03);
	ctx->vsp=local+7;
	w=(*ftab[6])(ctx,3,local+4,&ftab[6],fqv[8]); /*eps=*/
	if (w!=NIL) goto IF156;
	local[4]= makeint((eusinteger_t)1L);
	local[5]= fqv[10];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(*ftab[7])(ctx,3,local+4,&ftab[7],fqv[11]); /*warning-message*/
	local[4]= w;
	goto IF157;
IF156:
	local[4]= NIL;
IF157:
	local[4]= makeint((eusinteger_t)3L);
	local[5]= makeint((eusinteger_t)3L);
	local[6]= local[0];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)TIMES(ctx,2,local+6); /***/
	local[6]= w;
	local[7]= local[1];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	local[8]= local[2];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,1,local+8); /*-*/
	local[8]= w;
	local[9]= local[3];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,1,local+9); /*-*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,4,local+6); /*+*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	local[8]= local[1];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	local[9]= local[0];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	local[8]= makeint((eusinteger_t)2L);
	local[9]= local[1];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	local[10]= local[0];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	local[8]= local[1];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	local[9]= local[0];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	local[8]= local[0];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	local[9]= local[1];
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,1,local+9); /*-*/
	local[9]= w;
	local[10]= local[2];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	local[11]= local[3];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)MINUS(ctx,1,local+11); /*-*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,4,local+8); /*+*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)2L);
	local[10]= local[2];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	local[11]= local[0];
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)MINUS(ctx,2,local+10); /*-*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)2L);
	local[9]= local[1];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	local[10]= local[0];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	local[9]= makeint((eusinteger_t)2L);
	local[10]= local[2];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	local[11]= local[0];
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	local[10]= local[0];
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	local[11]= local[1];
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)MINUS(ctx,1,local+11); /*-*/
	local[11]= w;
	local[12]= local[2];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,1,local+12); /*-*/
	local[12]= w;
	local[13]= local[3];
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,2,local+13); /***/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,4,local+10); /*+*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MKFLTVEC(ctx,3,local+8); /*float-vector*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,3,local+6); /*list*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[3])(ctx,3,local+4,&ftab[3],fqv[3]); /*make-matrix*/
	local[0]= w;
BLK155:
	ctx->vsp=local; return(local[0]);}

/*matrix-log*/
static pointer F76matrix_log(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F74matrix2quaternion(ctx,1,local+0); /*matrix2quaternion*/
	local[0]= w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)1L);
	local[4]= makeint((eusinteger_t)4L);
	ctx->vsp=local+5;
	w=(pointer)SUBSEQ(ctx,3,local+2); /*subseq*/
	local[2]= w;
	local[3]= makeflt(2.0000000000000000000000e+00);
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)VNORM(ctx,1,local+4); /*norm*/
	local[4]= w;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)ATAN(ctx,2,local+4); /*atan*/
	{ double x,y;
		y=fltval(w); x=fltval(local[3]);
		local[3]=(makeflt(x * y));}
	local[4]= local[3];
	local[5]= makeflt(3.1415926535897931159980e+00);
	ctx->vsp=local+6;
	w=(pointer)GREATERP(ctx,2,local+4); /*>*/
	if (w==NIL) goto CON160;
	local[4]= local[3];
	local[5]= makeflt(6.2831853071795862319959e+00);
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[3] = w;
	local[4]= local[3];
	goto CON159;
CON160:
	local[4]= local[3];
	local[5]= makeflt(-3.1415926535897931159980e+00);
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,2,local+4); /*<*/
	if (w==NIL) goto CON161;
	local[4]= local[3];
	local[5]= makeflt(6.2831853071795862319959e+00);
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[3] = w;
	local[4]= local[3];
	goto CON159;
CON161:
	local[4]= NIL;
CON159:
	local[4]= local[3];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)F98normalize_vector(ctx,1,local+5); /*normalize-vector*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SCALEVEC(ctx,2,local+4); /*scale*/
	local[0]= w;
BLK158:
	ctx->vsp=local; return(local[0]);}

/*matrix-exponent*/
static pointer F77matrix_exponent(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT164;}
	local[0]= makeflt(1.0000000000000000000000e+00);
ENT164:
ENT163:
	if (n>2) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)VNORM(ctx,1,local+3); /*norm*/
	local[1] = w;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F98normalize_vector(ctx,1,local+3); /*normalize-vector*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)F73outer_product_matrix(ctx,1,local+3); /*outer-product-matrix*/
	local[2] = w;
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,0,local+3,&ftab[1],fqv[1]); /*unit-matrix*/
	local[3]= w;
	local[4]= local[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SIN(ctx,1,local+4); /*sin*/
	local[4]= w;
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(*ftab[8])(ctx,2,local+4,&ftab[8],fqv[12]); /*scale-matrix*/
	local[4]= w;
	local[5]= makeflt(1.0000000000000000000000e+00);
	local[6]= local[1];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)TIMES(ctx,2,local+6); /***/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)COS(ctx,1,local+6); /*cos*/
	{ double x,y;
		y=fltval(w); x=fltval(local[5]);
		local[5]=(makeflt(x - y));}
	local[6]= local[2];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)MATTIMES(ctx,2,local+6); /*m**/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[8])(ctx,2,local+5,&ftab[8],fqv[12]); /*scale-matrix*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[9])(ctx,2,local+4,&ftab[9],fqv[13]); /*m+*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[9])(ctx,2,local+3,&ftab[9],fqv[13]); /*m+*/
	local[0]= w;
BLK162:
	ctx->vsp=local; return(local[0]);}

/*midrot*/
static pointer F78midrot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)TRANSPOSE(ctx,1,local+2); /*transpose*/
	local[2]= w;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)MATTIMES(ctx,2,local+2); /*m**/
	local[0] = w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F76matrix_log(ctx,1,local+2); /*matrix-log*/
	local[1] = w;
	local[2]= local[1];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F77matrix_exponent(ctx,2,local+2); /*matrix-exponent*/
	local[0] = w;
	local[2]= argv[1];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)MATTIMES(ctx,2,local+2); /*m**/
	local[0]= w;
BLK165:
	ctx->vsp=local; return(local[0]);}

/*pseudo-inverse*/
static pointer F79pseudo_inverse(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT171;}
	local[0]= NIL;
ENT171:
	if (n>=3) { local[1]=(argv[2]); goto ENT170;}
	local[1]= NIL;
ENT170:
	if (n>=4) { local[2]=(argv[3]); goto ENT169;}
	local[2]= NIL;
ENT169:
	if (n>=5) { local[3]=(argv[4]); goto ENT168;}
	local[3]= NIL;
ENT168:
ENT167:
	if (n>5) maerror();
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(*ftab[0])(ctx,2,local+4,&ftab[0],fqv[0]); /*array-dimension*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(*ftab[0])(ctx,2,local+5,&ftab[0],fqv[0]); /*array-dimension*/
	local[5]= w;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	if (local[1]!=NIL) goto IF172;
	local[9]= local[5];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,2,local+9,&ftab[3],fqv[3]); /*make-matrix*/
	local[1] = w;
	local[9]= local[1];
	goto IF173;
IF172:
	local[9]= NIL;
IF173:
	if (local[0]!=NIL) goto IF174;
	local[9]= argv[0];
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(*ftab[10])(ctx,2,local+9,&ftab[10],fqv[14]); /*pseudo-inverse2*/
	ctx->vsp=local+9;
	local[0]=w;
	goto BLK166;
	goto IF175;
IF174:
	local[9]= NIL;
IF175:
	local[9]= local[4];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)MAX(ctx,2,local+9); /*max*/
	local[6] = w;
	if (local[2]!=NIL) goto IF176;
	local[9]= local[6];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,2,local+9,&ftab[3],fqv[3]); /*make-matrix*/
	local[2] = w;
	local[9]= local[2];
	goto IF177;
IF176:
	local[9]= NIL;
IF177:
	if (local[3]!=NIL) goto IF178;
	local[9]= local[4];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,2,local+9,&ftab[3],fqv[3]); /*make-matrix*/
	local[3] = w;
	local[9]= local[3];
	goto IF179;
IF178:
	local[9]= NIL;
IF179:
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[6];
WHL181:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX182;
	local[11]= local[2];
	local[12]= local[9];
	local[13]= local[9];
	local[14]= local[0];
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)AREF(ctx,2,local+14); /*aref*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SQRT(ctx,1,local+14); /*sqrt*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)ASET(ctx,4,local+11); /*aset*/
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL181;
WHX182:
	local[11]= NIL;
BLK183:
	w = NIL;
	local[9]= local[4];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)LSEQP(ctx,2,local+9); /*<=*/
	if (w==NIL) goto IF184;
	local[9]= argv[0];
	local[10]= local[2];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)MATTIMES(ctx,3,local+9); /*m**/
	local[9]= w;
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(*ftab[10])(ctx,2,local+9,&ftab[10],fqv[14]); /*pseudo-inverse2*/
	local[7] = w;
	if (local[7]==NIL) goto IF186;
	local[9]= local[2];
	local[10]= local[7];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)MATTIMES(ctx,3,local+9); /*m**/
	local[9]= w;
	goto IF187;
IF186:
	local[9]= NIL;
IF187:
	goto IF185;
IF184:
	local[9]= local[2];
	local[10]= argv[0];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)MATTIMES(ctx,3,local+9); /*m**/
	local[9]= w;
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(*ftab[10])(ctx,2,local+9,&ftab[10],fqv[14]); /*pseudo-inverse2*/
	local[7] = w;
	if (local[7]==NIL) goto IF188;
	local[9]= local[7];
	local[10]= local[2];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)MATTIMES(ctx,3,local+9); /*m**/
	local[9]= w;
	goto IF189;
IF188:
	local[9]= NIL;
IF189:
IF185:
	w = local[9];
	local[0]= w;
BLK166:
	ctx->vsp=local; return(local[0]);}

/*pseudo-inverse-org*/
static pointer F80pseudo_inverse_org(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT194;}
	local[0]= NIL;
ENT194:
	if (n>=3) { local[1]=(argv[2]); goto ENT193;}
	local[1]= NIL;
ENT193:
	if (n>=4) { local[2]=(argv[3]); goto ENT192;}
	local[2]= NIL;
ENT192:
ENT191:
	if (n>4) maerror();
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(*ftab[11])(ctx,1,local+9,&ftab[11],fqv[15]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.car;
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(*ftab[12])(ctx,1,local+9,&ftab[12],fqv[16]); /*sv-decompose*/
	local[4] = w;
	if (local[4]!=NIL) goto IF195;
	local[9]= fqv[17];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[4])(ctx,2,local+9,&ftab[4],fqv[6]); /*warn*/
	w = NIL;
	ctx->vsp=local+9;
	local[0]=w;
	goto BLK190;
	goto IF196;
IF195:
	local[9]= NIL;
IF196:
	local[9]= local[4];
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[5] = w;
	local[9]= local[4];
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[6] = w;
	local[9]= local[4];
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[7] = w;
	if (local[1]!=NIL) goto IF197;
	local[9]= local[3];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,2,local+9,&ftab[3],fqv[3]); /*make-matrix*/
	local[1] = w;
	local[9]= local[1];
	goto IF198;
IF197:
	local[9]= NIL;
IF198:
	if (local[2]!=NIL) goto IF199;
	local[9]= local[3];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[11])(ctx,1,local+10,&ftab[11],fqv[15]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,2,local+9,&ftab[3],fqv[3]); /*make-matrix*/
	local[2] = w;
	local[9]= local[2];
	goto IF200;
IF199:
	local[9]= NIL;
IF200:
	if (local[0]!=NIL) goto IF201;
	local[9]= local[3];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[11])(ctx,1,local+10,&ftab[11],fqv[15]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,2,local+9,&ftab[3],fqv[3]); /*make-matrix*/
	local[0] = w;
	local[9]= local[0];
	goto IF202;
IF201:
	local[9]= NIL;
IF202:
	local[9]= local[1]->c.obj.iv[1];
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(*ftab[13])(ctx,2,local+9,&ftab[13],fqv[18]); /*fill*/
	local[9]= local[6];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[8] = w;
	local[9]= local[8];
	local[10]= makeflt(9.9999999999999991239646e-05);
	ctx->vsp=local+11;
	w=(pointer)GREATERP(ctx,2,local+9); /*>*/
	if (w==NIL) goto IF203;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[3];
WHL206:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX207;
	local[11]= local[6];
	local[12]= local[9];
	local[13]= local[9];
	ctx->vsp=local+14;
	w=(pointer)AREF(ctx,3,local+11); /*aref*/
	local[11]= w;
	local[12]= local[8];
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	local[12]= makeflt(9.9999999999999991239646e-05);
	ctx->vsp=local+13;
	w=(pointer)GREATERP(ctx,2,local+11); /*>*/
	if (w==NIL) goto IF209;
	local[11]= local[1];
	local[12]= local[9];
	local[13]= local[9];
	local[14]= makeflt(1.0000000000000000000000e+00);
	local[15]= local[6];
	local[16]= local[9];
	local[17]= local[9];
	ctx->vsp=local+18;
	w=(pointer)AREF(ctx,3,local+15); /*aref*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)QUOTIENT(ctx,2,local+14); /*/*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)ASET(ctx,4,local+11); /*aset*/
	local[11]= w;
	goto IF210;
IF209:
	local[11]= NIL;
IF210:
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL206;
WHX207:
	local[11]= NIL;
BLK208:
	w = NIL;
	local[9]= w;
	goto IF204;
IF203:
	local[9]= NIL;
IF204:
	local[9]= local[7];
	local[10]= local[1];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)MATTIMES(ctx,3,local+9); /*m**/
	local[9]= w;
	local[10]= local[5];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)TRANSPOSE(ctx,2,local+10); /*transpose*/
	local[10]= w;
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)MATTIMES(ctx,3,local+9); /*m**/
	local[0] = w;
	w = local[0];
	local[0]= w;
BLK190:
	ctx->vsp=local; return(local[0]);}

/*sr-inverse*/
static pointer F81sr_inverse(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT223;}
	local[0]= makeflt(1.0000000000000000000000e+00);
ENT223:
	if (n>=3) { local[1]=(argv[2]); goto ENT222;}
	local[1]= NIL;
ENT222:
	if (n>=4) { local[2]=(argv[3]); goto ENT221;}
	local[2]= NIL;
ENT221:
	if (n>=5) { local[3]=(argv[4]); goto ENT220;}
	local[3]= NIL;
ENT220:
	if (n>=6) { local[4]=(argv[5]); goto ENT219;}
	local[4]= NIL;
ENT219:
	if (n>=7) { local[5]=(argv[6]); goto ENT218;}
	local[5]= NIL;
ENT218:
	if (n>=8) { local[6]=(argv[7]); goto ENT217;}
	local[6]= NIL;
ENT217:
	if (n>=9) { local[7]=(argv[8]); goto ENT216;}
	local[7]= NIL;
ENT216:
	if (n>=10) { local[8]=(argv[9]); goto ENT215;}
	local[8]= NIL;
ENT215:
	if (n>=11) { local[9]=(argv[10]); goto ENT214;}
	local[9]= NIL;
ENT214:
	if (n>=12) { local[10]=(argv[11]); goto ENT213;}
	local[10]= NIL;
ENT213:
ENT212:
	if (n>12) maerror();
	local[11]= argv[0];
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(*ftab[0])(ctx,2,local+11,&ftab[0],fqv[0]); /*array-dimension*/
	local[11]= w;
	local[12]= argv[0];
	local[13]= makeint((eusinteger_t)1L);
	ctx->vsp=local+14;
	w=(*ftab[0])(ctx,2,local+12,&ftab[0],fqv[0]); /*array-dimension*/
	local[12]= w;
	if (local[4]!=NIL) goto IF224;
	local[13]= local[12];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,2,local+13,&ftab[3],fqv[3]); /*make-matrix*/
	local[4] = w;
	local[13]= local[4];
	goto IF225;
IF224:
	local[13]= NIL;
IF225:
	if (local[1]!=NIL) goto IF226;
	if (local[9]!=NIL) goto IF228;
	local[13]= local[11];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,2,local+13,&ftab[3],fqv[3]); /*make-matrix*/
	local[9] = w;
	local[13]= local[9];
	goto IF229;
IF228:
	local[13]= NIL;
IF229:
	if (local[10]!=NIL) goto IF230;
	local[13]= local[11];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,2,local+13,&ftab[3],fqv[3]); /*make-matrix*/
	local[10] = w;
	local[13]= local[10];
	goto IF231;
IF230:
	local[13]= NIL;
IF231:
	local[13]= argv[0];
	local[14]= local[0];
	local[15]= local[9];
	local[16]= local[4];
	local[17]= local[10];
	ctx->vsp=local+18;
	w=(pointer)F82sr_inverse_org(ctx,5,local+13); /*sr-inverse-org*/
	ctx->vsp=local+13;
	local[0]=w;
	goto BLK211;
	goto IF227;
IF226:
	local[13]= NIL;
IF227:
	if (local[2]!=NIL) goto IF232;
	local[13]= local[12];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,2,local+13,&ftab[3],fqv[3]); /*make-matrix*/
	local[2] = w;
	local[13]= local[2];
	goto IF233;
IF232:
	local[13]= NIL;
IF233:
	if (local[3]!=NIL) goto IF234;
	local[13]= local[12];
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,2,local+13,&ftab[3],fqv[3]); /*make-matrix*/
	local[3] = w;
	local[13]= local[3];
	goto IF235;
IF234:
	local[13]= NIL;
IF235:
	if (local[8]!=NIL) goto IF236;
	local[13]= local[11];
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,2,local+13,&ftab[3],fqv[3]); /*make-matrix*/
	local[8] = w;
	local[13]= local[8];
	goto IF237;
IF236:
	local[13]= NIL;
IF237:
	local[13]= local[0];
	local[14]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+15;
	w=(pointer)NUMEQUAL(ctx,2,local+13); /*=*/
	if (w==NIL) goto IF238;
	local[13]= argv[0];
	local[14]= local[1];
	local[15]= local[2];
	local[16]= local[3];
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(pointer)F79pseudo_inverse(ctx,5,local+13); /*pseudo-inverse*/
	ctx->vsp=local+13;
	local[0]=w;
	goto BLK211;
	goto IF239;
IF238:
	local[13]= NIL;
IF239:
	if (local[5]!=NIL) goto IF240;
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(*ftab[1])(ctx,1,local+13,&ftab[1],fqv[1]); /*unit-matrix*/
	local[5] = w;
	local[13]= local[5];
	goto IF241;
IF240:
	local[13]= local[5]->c.obj.iv[1];
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(*ftab[13])(ctx,2,local+13,&ftab[13],fqv[18]); /*fill*/
	local[13]= makeint((eusinteger_t)0L);
	local[14]= local[11];
WHL243:
	local[15]= local[13];
	w = local[14];
	if ((eusinteger_t)local[15] >= (eusinteger_t)w) goto WHX244;
	local[15]= local[5];
	local[16]= local[13];
	local[17]= local[13];
	local[18]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+19;
	w=(pointer)ASET(ctx,4,local+15); /*aset*/
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[13] = w;
	goto WHL243;
WHX244:
	local[15]= NIL;
BLK245:
	w = NIL;
	local[13]= w;
IF241:
	if (local[6]!=NIL) goto IF246;
	local[13]= local[11];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,2,local+13,&ftab[3],fqv[3]); /*make-matrix*/
	local[6] = w;
	local[13]= local[6];
	goto IF247;
IF246:
	local[13]= NIL;
IF247:
	if (local[7]!=NIL) goto IF248;
	local[13]= local[12];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(*ftab[3])(ctx,2,local+13,&ftab[3],fqv[3]); /*make-matrix*/
	local[7] = w;
	local[13]= local[7];
	goto IF249;
IF248:
	local[13]= NIL;
IF249:
	local[13]= makeint((eusinteger_t)0L);
	local[14]= local[12];
WHL251:
	local[15]= local[13];
	w = local[14];
	if ((eusinteger_t)local[15] >= (eusinteger_t)w) goto WHX252;
	local[15]= local[3];
	local[16]= local[13];
	local[17]= local[13];
	local[18]= local[1];
	local[19]= local[13];
	ctx->vsp=local+20;
	w=(pointer)AREF(ctx,2,local+18); /*aref*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)ASET(ctx,4,local+15); /*aset*/
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[13] = w;
	goto WHL251;
WHX252:
	local[15]= NIL;
BLK253:
	w = NIL;
	local[13]= local[3];
	local[14]= argv[0];
	local[15]= local[4];
	ctx->vsp=local+16;
	w=(pointer)TRANSPOSE(ctx,2,local+14); /*transpose*/
	local[14]= w;
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)MATTIMES(ctx,3,local+13); /*m**/
	local[13]= w;
	local[14]= argv[0];
	local[15]= local[7];
	local[16]= local[6];
	ctx->vsp=local+17;
	w=(pointer)MATTIMES(ctx,3,local+14); /*m**/
	local[14]= w;
	local[15]= local[0];
	local[16]= local[5];
	local[17]= local[5];
	ctx->vsp=local+18;
	w=(*ftab[8])(ctx,3,local+15,&ftab[8],fqv[12]); /*scale-matrix*/
	local[15]= w;
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(*ftab[9])(ctx,3,local+14,&ftab[9],fqv[13]); /*m+*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)F69inverse_matrix(ctx,1,local+14); /*inverse-matrix*/
	local[14]= w;
	local[15]= local[2];
	ctx->vsp=local+16;
	w=(pointer)MATTIMES(ctx,3,local+13); /*m**/
	w = local[2];
	local[0]= w;
BLK211:
	ctx->vsp=local; return(local[0]);}

/*sr-inverse-org*/
static pointer F82sr_inverse_org(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT259;}
	local[0]= makeint((eusinteger_t)1L);
ENT259:
	if (n>=3) { local[1]=(argv[2]); goto ENT258;}
	local[1]= NIL;
ENT258:
	if (n>=4) { local[2]=(argv[3]); goto ENT257;}
	local[2]= NIL;
ENT257:
	if (n>=5) { local[3]=(argv[4]); goto ENT256;}
	local[3]= NIL;
ENT256:
ENT255:
	if (n>5) maerror();
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[11])(ctx,1,local+4,&ftab[11],fqv[15]); /*array-dimensions*/
	local[4]= w;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	if (local[1]!=NIL) goto IF260;
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(*ftab[1])(ctx,1,local+7,&ftab[1],fqv[1]); /*unit-matrix*/
	local[1] = w;
	local[7]= local[1];
	goto IF261;
IF260:
	local[7]= local[1]->c.obj.iv[1];
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(*ftab[13])(ctx,2,local+7,&ftab[13],fqv[18]); /*fill*/
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[5];
WHL263:
	local[9]= local[7];
	w = local[8];
	if ((eusinteger_t)local[9] >= (eusinteger_t)w) goto WHX264;
	local[9]= local[1];
	local[10]= local[7];
	local[11]= local[7];
	local[12]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+13;
	w=(pointer)ASET(ctx,4,local+9); /*aset*/
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[7] = w;
	goto WHL263;
WHX264:
	local[9]= NIL;
BLK265:
	w = NIL;
	local[7]= w;
IF261:
	if (local[2]!=NIL) goto IF266;
	local[7]= local[6];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(*ftab[3])(ctx,2,local+7,&ftab[3],fqv[3]); /*make-matrix*/
	local[2] = w;
	local[7]= local[2];
	goto IF267;
IF266:
	local[7]= NIL;
IF267:
	if (local[3]!=NIL) goto IF268;
	local[7]= local[5];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(*ftab[3])(ctx,2,local+7,&ftab[3],fqv[3]); /*make-matrix*/
	local[3] = w;
	local[7]= local[3];
	goto IF269;
IF268:
	local[7]= NIL;
IF269:
	local[7]= argv[0];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)TRANSPOSE(ctx,2,local+7); /*transpose*/
	local[2] = w;
	local[7]= local[2];
	local[8]= argv[0];
	local[9]= local[2];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)MATTIMES(ctx,3,local+8); /*m**/
	local[8]= w;
	local[9]= local[0];
	local[10]= local[1];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(*ftab[8])(ctx,3,local+9,&ftab[8],fqv[12]); /*scale-matrix*/
	local[9]= w;
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(*ftab[9])(ctx,3,local+8,&ftab[9],fqv[13]); /*m+*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)F69inverse_matrix(ctx,1,local+8); /*inverse-matrix*/
	local[8]= w;
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)MATTIMES(ctx,3,local+7); /*m**/
	local[0]= w;
BLK254:
	ctx->vsp=local; return(local[0]);}

/*manipulability*/
static pointer F83manipulability(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT273;}
	local[0]= NIL;
ENT273:
	if (n>=3) { local[1]=(argv[2]); goto ENT272;}
	local[1]= NIL;
ENT272:
ENT271:
	if (n>3) maerror();
	local[2]= argv[0];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(*ftab[0])(ctx,2,local+2,&ftab[0],fqv[0]); /*array-dimension*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(*ftab[0])(ctx,2,local+3,&ftab[0],fqv[0]); /*array-dimension*/
	local[3]= w;
	if (local[0]!=NIL) goto IF274;
	local[4]= local[2];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(*ftab[3])(ctx,2,local+4,&ftab[3],fqv[3]); /*make-matrix*/
	local[0] = w;
	local[4]= local[0];
	goto IF275;
IF274:
	local[4]= NIL;
IF275:
	if (local[1]!=NIL) goto IF276;
	local[4]= local[3];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(*ftab[3])(ctx,2,local+4,&ftab[3],fqv[3]); /*make-matrix*/
	local[1] = w;
	local[4]= local[1];
	goto IF277;
IF276:
	local[4]= NIL;
IF277:
	local[4]= makeflt(0.0000000000000000000000e+00);
	local[5]= argv[0];
	local[6]= argv[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)TRANSPOSE(ctx,2,local+6); /*transpose*/
	local[6]= w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)MATTIMES(ctx,3,local+5); /*m**/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[14])(ctx,1,local+5,&ftab[14],fqv[19]); /*matrix-determinant*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MAX(ctx,2,local+4); /*max*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SQRT(ctx,1,local+4); /*sqrt*/
	local[0]= w;
BLK270:
	ctx->vsp=local; return(local[0]);}

/*random-gauss*/
static pointer F84random_gauss(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT281;}
	local[0]= makeint((eusinteger_t)0L);
ENT281:
	if (n>=2) { local[1]=(argv[1]); goto ENT280;}
	local[1]= makeint((eusinteger_t)1L);
ENT280:
ENT279:
	if (n>2) maerror();
	local[2]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+3;
	w=(pointer)RANDOM(ctx,1,local+2); /*random*/
	local[2]= w;
	local[3]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+4;
	w=(pointer)RANDOM(ctx,1,local+3); /*random*/
	local[3]= w;
	local[4]= makeflt(-2.0000000000000000000000e+00);
	local[5]= local[1];
	local[6]= local[1];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)LOG(ctx,1,local+7); /*log*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)TIMES(ctx,4,local+4); /***/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SQRT(ctx,1,local+4); /*sqrt*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)2L);
	local[6]= makeflt(3.1415926535897931159980e+00);
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)TIMES(ctx,3,local+5); /***/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)COS(ctx,1,local+5); /*cos*/
	{ double x,y;
		y=fltval(w); x=fltval(local[4]);
		local[4]=(makeflt(x * y));}
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[0]= w;
BLK278:
	ctx->vsp=local; return(local[0]);}

/*gaussian-random*/
static pointer F85gaussian_random(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT285;}
	local[0]= makeint((eusinteger_t)0L);
ENT285:
	if (n>=3) { local[1]=(argv[2]); goto ENT284;}
	local[1]= makeint((eusinteger_t)1L);
ENT284:
ENT283:
	if (n>3) maerror();
	local[2]= loadglobal(fqv[4]);
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
	w = local[0];
	if (!isnum(w)) goto IF286;
	local[3]= argv[0];
	local[4]= fqv[20];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[15])(ctx,3,local+3,&ftab[15],fqv[21]); /*make-list*/
	local[0] = w;
	local[3]= local[0];
	goto IF287;
IF286:
	local[3]= NIL;
IF287:
	w = local[1];
	if (!isnum(w)) goto IF288;
	local[3]= argv[0];
	local[4]= fqv[20];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(*ftab[15])(ctx,3,local+3,&ftab[15],fqv[21]); /*make-list*/
	local[1] = w;
	local[3]= local[1];
	goto IF289;
IF288:
	local[3]= NIL;
IF289:
	local[3]= makeint((eusinteger_t)0L);
	local[4]= argv[0];
WHL291:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX292;
	local[5]= local[2];
	local[6]= local[3];
	local[7]= local[0];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	local[8]= local[1];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)F84random_gauss(ctx,2,local+7); /*random-gauss*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)ASET(ctx,3,local+5); /*aset*/
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL291;
WHX292:
	local[5]= NIL;
BLK293:
	w = NIL;
	w = local[2];
	local[0]= w;
BLK282:
	ctx->vsp=local; return(local[0]);}

/*eigen-decompose*/
static pointer F86eigen_decompose(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[16])(ctx,1,local+0,&ftab[16],fqv[22]); /*qr-decompose*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= local[1];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,2,local+2,&ftab[3],fqv[3]); /*make-matrix*/
	local[2]= w;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= NIL;
	local[10]= NIL;
	local[11]= makeint((eusinteger_t)10L);
	local[12]= NIL;
	local[13]= NIL;
	local[14]= local[0];
	local[15]= (pointer)get_sym_func(fqv[23]);
	ctx->vsp=local+16;
	w=(pointer)SORT(ctx,2,local+14); /*sort*/
	local[0] = w;
	local[14]= makeint((eusinteger_t)0L);
	local[15]= local[1];
WHL296:
	local[16]= local[14];
	w = local[15];
	if ((eusinteger_t)local[16] >= (eusinteger_t)w) goto WHX297;
	local[16]= argv[0];
	local[17]= local[0];
	local[18]= local[14];
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,1,local+17); /*-*/
	local[17]= w;
	local[18]= local[1];
	ctx->vsp=local+19;
	w=(*ftab[1])(ctx,1,local+18,&ftab[1],fqv[1]); /*unit-matrix*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[8])(ctx,2,local+17,&ftab[8],fqv[12]); /*scale-matrix*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(*ftab[9])(ctx,2,local+16,&ftab[9],fqv[13]); /*m+*/
	local[3] = w;
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(*ftab[17])(ctx,1,local+16,&ftab[17],fqv[24]); /*copy-matrix*/
	local[4] = w;
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(pointer)LU_DECOMPOSE(ctx,1,local+16); /*lu-decompose*/
	local[7] = w;
	if (local[7]==NIL) goto IF299;
	local[16]= loadglobal(fqv[4]);
	local[17]= local[1];
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,2,local+16); /*instantiate*/
	local[5] = w;
WHL301:
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(pointer)VNORM(ctx,1,local+16); /*norm*/
	local[16]= w;
	local[17]= makeint((eusinteger_t)0L);
	ctx->vsp=local+18;
	w=(*ftab[6])(ctx,2,local+16,&ftab[6],fqv[8]); /*eps=*/
	if (w==NIL) goto WHX302;
	local[16]= makeint((eusinteger_t)0L);
	local[17]= local[1];
WHL305:
	local[18]= local[16];
	w = local[17];
	if ((eusinteger_t)local[18] >= (eusinteger_t)w) goto WHX306;
	local[18]= local[5];
	local[19]= local[16];
	local[20]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+21;
	w=(pointer)RANDOM(ctx,1,local+20); /*random*/
	local[20]= w;
	local[21]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+22;
	w=(pointer)MINUS(ctx,2,local+20); /*-*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)SETELT(ctx,3,local+18); /*setelt*/
	local[18]= local[16];
	ctx->vsp=local+19;
	w=(pointer)ADD1(ctx,1,local+18); /*1+*/
	local[16] = w;
	goto WHL305;
WHX306:
	local[18]= NIL;
BLK307:
	w = NIL;
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(pointer)F98normalize_vector(ctx,1,local+16); /*normalize-vector*/
	local[5] = w;
	goto WHL301;
WHX302:
	local[16]= NIL;
BLK303:
	local[6] = local[5];
	local[10] = makeint((eusinteger_t)0L);
TAG310:
	local[16]= local[3];
	local[17]= local[7];
	local[18]= local[5];
	ctx->vsp=local+19;
	w=(pointer)LU_SOLVE(ctx,3,local+16); /*lu-solve*/
	local[5] = w;
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(pointer)F98normalize_vector(ctx,1,local+16); /*normalize-vector*/
	local[5] = w;
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(pointer)ADD1(ctx,1,local+16); /*1+*/
	local[10] = w;
	local[16]= local[10];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)GREQP(ctx,2,local+16); /*>=*/
	if (w!=NIL) goto OR313;
	local[16]= local[6];
	local[17]= local[5];
	ctx->vsp=local+18;
	w=(pointer)VDISTANCE(ctx,2,local+16); /*distance*/
	local[16]= w;
	local[17]= makeint((eusinteger_t)0L);
	ctx->vsp=local+18;
	w=(*ftab[6])(ctx,2,local+16,&ftab[6],fqv[8]); /*eps=*/
	if (w!=NIL) goto OR313;
	goto IF311;
OR313:
	w = NIL;
	ctx->vsp=local+16;
	local[16]=w;
	goto BLK309;
	goto IF312;
IF311:
	local[16]= NIL;
IF312:
	local[16]= local[10];
	local[17]= local[11];
	local[18]= makeint((eusinteger_t)2L);
	ctx->vsp=local+19;
	w=(pointer)QUOTIENT(ctx,2,local+17); /*/*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)GREATERP(ctx,2,local+16); /*>*/
	if (w==NIL) goto IF314;
	local[16]= makeflt(1.0000000000000000000000e+00);
	local[17]= local[7];
	local[18]= loadglobal(fqv[4]);
	ctx->vsp=local+19;
	w=(pointer)COERCE(ctx,2,local+17); /*coerce*/
	local[17]= w;
	local[18]= local[3];
	local[19]= local[7];
	local[20]= local[5];
	ctx->vsp=local+21;
	w=(pointer)LU_SOLVE(ctx,3,local+18); /*lu-solve*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)VINNERPRODUCT(ctx,2,local+17); /*v.*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)QUOTIENT(ctx,2,local+16); /*/*/
	local[13] = w;
	local[16]= local[0];
	local[17]= local[14];
	local[18]= local[0];
	local[19]= local[14];
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	local[19]= local[13];
	ctx->vsp=local+20;
	w=(pointer)PLUS(ctx,2,local+18); /*+*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)SETELT(ctx,3,local+16); /*setelt*/
	local[16]= argv[0];
	local[17]= local[0];
	local[18]= local[14];
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,1,local+17); /*-*/
	local[17]= w;
	local[18]= local[1];
	ctx->vsp=local+19;
	w=(*ftab[1])(ctx,1,local+18,&ftab[1],fqv[1]); /*unit-matrix*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[8])(ctx,2,local+17,&ftab[8],fqv[12]); /*scale-matrix*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(*ftab[9])(ctx,2,local+16,&ftab[9],fqv[13]); /*m+*/
	local[3] = w;
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(pointer)LU_DECOMPOSE(ctx,1,local+16); /*lu-decompose*/
	local[7] = w;
	if (local[7]!=NIL) goto IF316;
	w = NIL;
	ctx->vsp=local+16;
	local[16]=w;
	goto BLK309;
	goto IF317;
IF316:
	local[16]= NIL;
IF317:
	goto IF315;
IF314:
	local[16]= NIL;
IF315:
	local[6] = local[5];
	ctx->vsp=local+16;
	goto TAG310;
	local[16]= NIL;
BLK309:
	local[16]= local[10];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)GREQP(ctx,2,local+16); /*>=*/
	if (w==NIL) goto IF318;
	local[7] = NIL;
	local[16]= local[7];
	goto IF319;
IF318:
	local[16]= NIL;
IF319:
	goto IF300;
IF299:
	local[16]= NIL;
IF300:
	if (local[7]!=NIL) goto IF320;
	local[16]= local[4];
	ctx->vsp=local+17;
	w=(*ftab[12])(ctx,1,local+16,&ftab[12],fqv[16]); /*sv-decompose*/
	local[8] = w;
	local[16]= local[8];
	local[17]= makeint((eusinteger_t)1L);
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[9] = w;
	local[16]= makeint((eusinteger_t)0L);
	local[17]= local[9];
	ctx->vsp=local+18;
	w=(pointer)LENGTH(ctx,1,local+17); /*length*/
	local[17]= w;
WHL323:
	local[18]= local[16];
	w = local[17];
	if ((eusinteger_t)local[18] >= (eusinteger_t)w) goto WHX324;
	local[18]= local[9];
	local[19]= local[16];
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)ABS(ctx,1,local+18); /*abs*/
	local[18]= w;
	local[19]= makeflt(9.9999999999999991239646e-05);
	ctx->vsp=local+20;
	w=(pointer)LESSP(ctx,2,local+18); /*<*/
	if (w==NIL) goto IF326;
	local[18]= local[8];
	local[19]= makeint((eusinteger_t)2L);
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	local[19]= local[16];
	ctx->vsp=local+20;
	w=(*ftab[18])(ctx,2,local+18,&ftab[18],fqv[25]); /*matrix-column*/
	local[5] = w;
	local[18]= local[5];
	goto IF327;
IF326:
	local[18]= NIL;
IF327:
	local[18]= local[16];
	ctx->vsp=local+19;
	w=(pointer)ADD1(ctx,1,local+18); /*1+*/
	local[16] = w;
	goto WHL323;
WHX324:
	local[18]= NIL;
BLK325:
	w = NIL;
	local[16]= w;
	goto IF321;
IF320:
	local[16]= NIL;
IF321:
	local[16]= local[2];
	local[17]= local[14];
	local[18]= local[5];
	ctx->vsp=local+19;
	w=(*ftab[19])(ctx,3,local+16,&ftab[19],fqv[26]); /*set-matrix-column*/
	local[16]= local[14];
	ctx->vsp=local+17;
	w=(pointer)ADD1(ctx,1,local+16); /*1+*/
	local[14] = w;
	goto WHL296;
WHX297:
	local[16]= NIL;
BLK298:
	w = NIL;
	local[14]= local[0];
	local[15]= local[2];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,2,local+14); /*list*/
	local[0]= w;
BLK294:
	ctx->vsp=local; return(local[0]);}

/*lms*/
static pointer F87lms(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[20])(ctx,1,local+0,&ftab[20],fqv[27]); /*vector-mean*/
	local[0]= w;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= NIL;
	local[10]= local[1];
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)LENGTH(ctx,1,local+11); /*length*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[3])(ctx,2,local+10,&ftab[3],fqv[3]); /*make-matrix*/
	local[3] = w;
	local[10]= makeint((eusinteger_t)0L);
	local[11]= local[1];
WHL330:
	local[12]= local[10];
	w = local[11];
	if ((eusinteger_t)local[12] >= (eusinteger_t)w) goto WHX331;
	local[12]= local[3];
	local[13]= local[10];
	local[14]= argv[0];
	local[15]= local[10];
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[14]= w;
	local[15]= local[0];
	ctx->vsp=local+16;
	w=(pointer)VMINUS(ctx,2,local+14); /*v-*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(*ftab[21])(ctx,3,local+12,&ftab[21],fqv[28]); /*set-matrix-row*/
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[10] = w;
	goto WHL330;
WHX331:
	local[12]= NIL;
BLK332:
	w = NIL;
	local[10]= makeflt(1.0000000000000000000000e+00);
	local[11]= local[1];
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)TRANSPOSE(ctx,1,local+11); /*transpose*/
	local[11]= w;
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)MATTIMES(ctx,2,local+11); /*m**/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[8])(ctx,2,local+10,&ftab[8],fqv[12]); /*scale-matrix*/
	local[4] = w;
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)F86eigen_decompose(ctx,1,local+10); /*eigen-decompose*/
	local[5] = w;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.car;
	local[10]= local[6];
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[8] = w;
	local[10]= local[7];
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(*ftab[18])(ctx,2,local+10,&ftab[18],fqv[25]); /*matrix-column*/
	local[9] = w;
	local[10]= makeint((eusinteger_t)0L);
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)LENGTH(ctx,1,local+11); /*length*/
	local[11]= w;
WHL334:
	local[12]= local[10];
	w = local[11];
	if ((eusinteger_t)local[12] >= (eusinteger_t)w) goto WHX335;
	local[12]= local[8];
	local[13]= local[6];
	local[14]= local[10];
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)GREATERP(ctx,2,local+12); /*>*/
	if (w==NIL) goto IF337;
	local[12]= local[6];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[8] = w;
	local[12]= local[7];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(*ftab[18])(ctx,2,local+12,&ftab[18],fqv[25]); /*matrix-column*/
	local[9] = w;
	local[12]= local[9];
	goto IF338;
IF337:
	local[12]= NIL;
IF338:
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[10] = w;
	goto WHL334;
WHX335:
	local[12]= NIL;
BLK336:
	w = NIL;
	local[10]= local[9];
	local[11]= local[0];
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)VINNERPRODUCT(ctx,2,local+11); /*v.*/
	local[11]= makeflt(-(fltval(w)));
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,2,local+10); /*list*/
	local[0]= w;
BLK328:
	ctx->vsp=local; return(local[0]);}

/*lms-estimate*/
static pointer F88lms_estimate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)VINNERPRODUCT(ctx,2,local+0); /*v.*/
	local[0]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)PLUS(ctx,2,local+0); /*+*/
	local[0]= w;
BLK339:
	ctx->vsp=local; return(local[0]);}

/*lms-error*/
static pointer F89lms_error(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[1];
WHL342:
	if (local[3]==NIL) goto WHX343;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= argv[0];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)F88lms_estimate(ctx,2,local+4); /*lms-estimate*/
	local[1] = w;
	local[4]= local[0];
	local[5]= local[1];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)TIMES(ctx,2,local+5); /***/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[0] = w;
	goto WHL342;
WHX343:
	local[4]= NIL;
BLK344:
	w = NIL;
	local[2]= local[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[0]= w;
BLK340:
	ctx->vsp=local; return(local[0]);}

/*lmeds*/
static pointer F90lmeds(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[29], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY347;
	local[0] = makeint((eusinteger_t)5L);
KEY347:
	if (n & (1<<1)) goto KEY348;
	local[1] = makeflt(2.9999999999999982236432e-01);
KEY348:
	if (n & (1<<2)) goto KEY349;
	local[2] = NIL;
KEY349:
	if (n & (1<<3)) goto KEY350;
	local[3] = NIL;
KEY350:
	if (n & (1<<4)) goto KEY351;
	local[4] = (pointer)get_sym_func(fqv[30]);
KEY351:
	if (n & (1<<5)) goto KEY352;
	local[5] = (pointer)get_sym_func(fqv[31]);
KEY352:
	if (n & (1<<6)) goto KEY353;
	local[6] = (pointer)get_sym_func(fqv[32]);
KEY353:
	local[7]= NIL;
	local[8]= NIL;
	local[9]= NIL;
	local[10]= NIL;
	local[11]= NIL;
	local[12]= NIL;
	local[13]= NIL;
	local[14]= NIL;
	local[15]= NIL;
	local[16]= argv[0];
	ctx->vsp=local+17;
	w=(pointer)LENGTH(ctx,1,local+16); /*length*/
	local[7] = w;
	local[16]= makeint((eusinteger_t)2L);
	local[17]= local[0];
	ctx->vsp=local+18;
	w=(pointer)MAX(ctx,2,local+16); /*max*/
	local[16]= w;
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(pointer)MIN(ctx,2,local+16); /*min*/
	local[0] = w;
	local[10] = NIL;
	local[11] = NIL;
	local[15] = NIL;
	if (local[2]==NIL) goto IF354;
	local[12] = local[2];
	local[16]= local[12];
	goto IF355;
IF354:
	local[16]= makeflt(9.9999999999999950039964e-03);
	ctx->vsp=local+17;
	w=(pointer)LOG(ctx,1,local+16); /*log*/
	local[16]= w;
	local[17]= makeint((eusinteger_t)1L);
	local[18]= makeint((eusinteger_t)1L);
	local[19]= local[1];
	ctx->vsp=local+20;
	w=(pointer)MINUS(ctx,2,local+18); /*-*/
	local[18]= w;
	local[19]= local[0];
	ctx->vsp=local+20;
	w=(*ftab[22])(ctx,2,local+18,&ftab[22],fqv[33]); /*expt*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)MINUS(ctx,2,local+17); /*-*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)LOG(ctx,1,local+17); /*log*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)QUOTIENT(ctx,2,local+16); /*/*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)CEILING(ctx,1,local+16); /*ceiling*/
	local[12] = w;
	local[16]= local[12];
IF355:
	local[16]= makeint((eusinteger_t)0L);
	local[17]= local[12];
WHL357:
	local[18]= local[16];
	w = local[17];
	if ((eusinteger_t)local[18] >= (eusinteger_t)w) goto WHX358;
	local[13] = NIL;
	local[18]= makeint((eusinteger_t)0L);
	local[19]= local[0];
WHL361:
	local[20]= local[18];
	w = local[19];
	if ((eusinteger_t)local[20] >= (eusinteger_t)w) goto WHX362;
	local[20]= local[7];
	ctx->vsp=local+21;
	w=(pointer)RANDOM(ctx,1,local+20); /*random*/
	local[8] = w;
WHL364:
	local[20]= local[8];
	local[21]= local[13];
	ctx->vsp=local+22;
	w=(*ftab[23])(ctx,2,local+20,&ftab[23],fqv[34]); /*find*/
	if (w==NIL) goto WHX365;
	local[20]= local[7];
	ctx->vsp=local+21;
	w=(pointer)RANDOM(ctx,1,local+20); /*random*/
	local[8] = w;
	goto WHL364;
WHX365:
	local[20]= NIL;
BLK366:
	local[20]= local[8];
	w = local[13];
	ctx->vsp=local+21;
	local[13] = cons(ctx,local[20],w);
	local[20]= local[18];
	ctx->vsp=local+21;
	w=(pointer)ADD1(ctx,1,local+20); /*1+*/
	local[18] = w;
	goto WHL361;
WHX362:
	local[20]= NIL;
BLK363:
	w = NIL;
	local[18]= local[13];
	w = local[14];
	ctx->vsp=local+19;
	local[14] = cons(ctx,local[18],w);
	local[18]= local[16];
	ctx->vsp=local+19;
	w=(pointer)ADD1(ctx,1,local+18); /*1+*/
	local[16] = w;
	goto WHL357;
WHX358:
	local[18]= NIL;
BLK359:
	w = NIL;
	local[16]= NIL;
	local[17]= local[14];
WHL368:
	if (local[17]==NIL) goto WHX369;
	w=local[17];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.car;
	w=local[17];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17] = (w)->c.cons.cdr;
	w = local[18];
	local[16] = w;
	local[15] = NIL;
	local[18]= NIL;
	local[19]= local[16];
WHL373:
	if (local[19]==NIL) goto WHX374;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20]= (w)->c.cons.car;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19] = (w)->c.cons.cdr;
	w = local[20];
	local[18] = w;
	local[20]= argv[0];
	local[21]= local[18];
	ctx->vsp=local+22;
	w=(pointer)ELT(ctx,2,local+20); /*elt*/
	local[20]= w;
	w = local[15];
	ctx->vsp=local+21;
	local[15] = cons(ctx,local[20],w);
	goto WHL373;
WHX374:
	local[20]= NIL;
BLK375:
	w = NIL;
	local[18]= local[4];
	local[19]= local[15];
	ctx->vsp=local+20;
	w=(pointer)FUNCALL(ctx,2,local+18); /*funcall*/
	local[9] = w;
	local[18]= local[9];
	w = local[10];
	ctx->vsp=local+19;
	local[10] = cons(ctx,local[18],w);
	if (local[3]==NIL) goto IF377;
	local[18]= local[5];
	local[19]= local[9];
	local[20]= argv[0];
	local[21]= local[3];
	local[22]= fqv[35];
	local[23]= local[6];
	ctx->vsp=local+24;
	w=(pointer)FUNCALL(ctx,6,local+18); /*funcall*/
	local[18]= w;
	w = local[11];
	ctx->vsp=local+19;
	local[11] = cons(ctx,local[18],w);
	local[18]= local[11];
	goto IF378;
IF377:
	local[18]= local[5];
	local[19]= local[9];
	local[20]= argv[0];
	local[21]= fqv[35];
	local[22]= local[6];
	ctx->vsp=local+23;
	w=(pointer)FUNCALL(ctx,5,local+18); /*funcall*/
	local[18]= w;
	w = local[11];
	ctx->vsp=local+19;
	local[11] = cons(ctx,local[18],w);
	local[18]= local[11];
IF378:
	goto WHL368;
WHX369:
	local[18]= NIL;
BLK370:
	w = NIL;
	local[16]= local[10];
	local[17]= local[11];
	ctx->vsp=local+18;
	local[18]= makeclosure(codevec,quotevec,CLO379,env,argv,local);
	if (local[3]==NIL) goto IF380;
	local[19]= (pointer)get_sym_func(fqv[36]);
	goto IF381;
IF380:
	local[19]= (pointer)get_sym_func(fqv[37]);
IF381:
	ctx->vsp=local+20;
	w=(*ftab[24])(ctx,3,local+17,&ftab[24],fqv[38]); /*find-extream*/
	local[17]= w;
	local[18]= local[11];
	ctx->vsp=local+19;
	w=(*ftab[25])(ctx,2,local+17,&ftab[25],fqv[39]); /*position*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[0]= w;
BLK346:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO379(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*lmeds-error*/
static pointer F91lmeds_error(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[40], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY383;
	local[0] = (pointer)get_sym_func(fqv[32]);
KEY383:
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= argv[1];
WHL385:
	if (local[4]==NIL) goto WHX386;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[0];
	local[6]= argv[0];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,3,local+5); /*funcall*/
	local[1] = w;
	local[5]= local[1];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)TIMES(ctx,2,local+5); /***/
	local[5]= w;
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	goto WHL385;
WHX386:
	local[5]= NIL;
BLK387:
	w = NIL;
	local[3]= local[2];
	local[4]= (pointer)get_sym_func(fqv[37]);
	ctx->vsp=local+5;
	w=(pointer)SORT(ctx,2,local+3); /*sort*/
	local[3]= w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[0]= w;
BLK382:
	ctx->vsp=local; return(local[0]);}

/*lmeds-error-mat*/
static pointer F92lmeds_error_mat(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[41], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY390;
	local[0] = (pointer)get_sym_func(fqv[32]);
KEY390:
	local[1]= argv[1];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,2,local+1,&ftab[0],fqv[0]); /*array-dimension*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,3,local+2); /*float-vector*/
	local[2]= w;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[1];
WHL392:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX393;
	local[7]= argv[1];
	local[8]= local[5];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(*ftab[26])(ctx,3,local+7,&ftab[26],fqv[42]); /*c-matrix-row*/
	local[7]= local[0];
	local[8]= argv[0];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,3,local+7); /*funcall*/
	local[3] = w;
	local[7]= local[3];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	w = local[4];
	ctx->vsp=local+8;
	local[4] = cons(ctx,local[7],w);
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL392;
WHX393:
	local[7]= NIL;
BLK394:
	w = NIL;
	local[5]= local[4];
	local[6]= (pointer)get_sym_func(fqv[37]);
	ctx->vsp=local+7;
	w=(pointer)SORT(ctx,2,local+5); /*sort*/
	local[5]= w;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[0]= w;
BLK389:
	ctx->vsp=local; return(local[0]);}

/*concatenate-matrix-column*/
static pointer F93concatenate_matrix_column(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST396:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= NIL;
	local[2]= NIL;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(*ftab[0])(ctx,2,local+3,&ftab[0],fqv[0]); /*array-dimension*/
	local[3]= w;
	local[4]= NIL;
	local[5]= local[0];
WHL398:
	if (local[5]==NIL) goto WHX399;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(*ftab[0])(ctx,2,local+6,&ftab[0],fqv[0]); /*array-dimension*/
	local[6]= w;
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)NUMEQUAL(ctx,2,local+6); /*=*/
	if (w!=NIL) goto IF402;
	local[6]= fqv[43];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO404,env,argv,local);
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)MAPCAR(ctx,2,local+7); /*mapcar*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SIGERROR(ctx,2,local+6); /*error*/
	local[6]= w;
	goto IF403;
IF402:
	local[6]= NIL;
IF403:
	if (local[4]==NIL) goto IF405;
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(*ftab[18])(ctx,2,local+6,&ftab[18],fqv[25]); /*matrix-column*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	goto IF406;
IF405:
	local[6]= makeint((eusinteger_t)0L);
IF406:
	local[1] = local[6];
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[1];
WHL408:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX409;
	local[8]= local[4];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[27])(ctx,2,local+8,&ftab[27],fqv[44]); /*matrix-row*/
	local[8]= w;
	w = local[2];
	ctx->vsp=local+9;
	local[2] = cons(ctx,local[8],w);
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL408;
WHX409:
	local[8]= NIL;
BLK410:
	w = NIL;
	goto WHL398;
WHX399:
	local[6]= NIL;
BLK400:
	w = NIL;
	if (local[2]==NIL) goto IF411;
	local[4]= (pointer)get_sym_func(fqv[45]);
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)REVERSE(ctx,1,local+5); /*reverse*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,2,local+4); /*apply*/
	local[4]= w;
	goto IF412;
IF411:
	local[4]= NIL;
IF412:
	w = local[4];
	local[0]= w;
BLK395:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO404(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[0]); /*array-dimension*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*concatenate-matrix-row*/
static pointer F94concatenate_matrix_row(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST414:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= NIL;
	local[2]= NIL;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(*ftab[0])(ctx,2,local+3,&ftab[0],fqv[0]); /*array-dimension*/
	local[3]= w;
	local[4]= NIL;
	local[5]= local[0];
WHL416:
	if (local[5]==NIL) goto WHX417;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(*ftab[0])(ctx,2,local+6,&ftab[0],fqv[0]); /*array-dimension*/
	local[6]= w;
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)NUMEQUAL(ctx,2,local+6); /*=*/
	if (w!=NIL) goto IF420;
	local[6]= fqv[46];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO422,env,argv,local);
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)MAPCAR(ctx,2,local+7); /*mapcar*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SIGERROR(ctx,2,local+6); /*error*/
	local[6]= w;
	goto IF421;
IF420:
	local[6]= NIL;
IF421:
	if (local[4]==NIL) goto IF423;
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(*ftab[27])(ctx,2,local+6,&ftab[27],fqv[44]); /*matrix-row*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	goto IF424;
IF423:
	local[6]= makeint((eusinteger_t)0L);
IF424:
	local[1] = local[6];
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[1];
WHL426:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX427;
	local[8]= local[4];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[18])(ctx,2,local+8,&ftab[18],fqv[25]); /*matrix-column*/
	local[8]= w;
	w = local[2];
	ctx->vsp=local+9;
	local[2] = cons(ctx,local[8],w);
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL426;
WHX427:
	local[8]= NIL;
BLK428:
	w = NIL;
	goto WHL416;
WHX417:
	local[6]= NIL;
BLK418:
	w = NIL;
	if (local[2]==NIL) goto IF429;
	local[4]= (pointer)get_sym_func(fqv[45]);
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)REVERSE(ctx,1,local+5); /*reverse*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,2,local+4); /*apply*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)TRANSPOSE(ctx,1,local+4); /*transpose*/
	local[4]= w;
	goto IF430;
IF429:
	local[4]= NIL;
IF430:
	w = local[4];
	local[0]= w;
BLK413:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO422(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[0]); /*array-dimension*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*concatenate-matrix-diagonal*/
static pointer F95concatenate_matrix_diagonal(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST432:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[0];
WHL434:
	if (local[7]==NIL) goto WHX435;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	if (local[6]==NIL) goto IF438;
	local[8]= local[6];
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(*ftab[27])(ctx,2,local+8,&ftab[27],fqv[44]); /*matrix-row*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
	goto IF439;
IF438:
	local[8]= makeint((eusinteger_t)0L);
IF439:
	w = local[3];
	ctx->vsp=local+9;
	local[3] = cons(ctx,local[8],w);
	goto WHL434;
WHX435:
	local[8]= NIL;
BLK436:
	w = NIL;
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)REVERSE(ctx,1,local+6); /*reverse*/
	local[3] = w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
WHL441:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX442;
	local[8]= local[6];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)NTH(ctx,2,local+8); /*nth*/
	local[1] = w;
	if (local[1]==NIL) goto IF444;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(*ftab[18])(ctx,2,local+8,&ftab[18],fqv[25]); /*matrix-column*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
	goto IF445;
IF444:
	local[8]= makeint((eusinteger_t)0L);
IF445:
	local[2] = local[8];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= local[2];
WHL447:
	local[10]= local[8];
	w = local[9];
	if ((eusinteger_t)local[10] >= (eusinteger_t)w) goto WHX448;
	local[5] = NIL;
	local[10]= makeint((eusinteger_t)0L);
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)LENGTH(ctx,1,local+11); /*length*/
	local[11]= w;
WHL451:
	local[12]= local[10];
	w = local[11];
	if ((eusinteger_t)local[12] >= (eusinteger_t)w) goto WHX452;
	local[12]= local[6];
	if (local[10]!=local[12]) goto IF454;
	local[12]= local[1];
	local[13]= local[8];
	ctx->vsp=local+14;
	w=(*ftab[27])(ctx,2,local+12,&ftab[27],fqv[44]); /*matrix-row*/
	local[12]= w;
	w = local[5];
	ctx->vsp=local+13;
	local[5] = cons(ctx,local[12],w);
	local[12]= local[5];
	goto IF455;
IF454:
	local[12]= local[10];
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(pointer)NTH(ctx,2,local+12); /*nth*/
	local[12]= w;
	local[13]= fqv[47];
	local[14]= loadglobal(fqv[4]);
	local[15]= fqv[20];
	local[16]= makeint((eusinteger_t)0L);
	ctx->vsp=local+17;
	w=(*ftab[28])(ctx,5,local+12,&ftab[28],fqv[48]); /*make-array*/
	local[12]= w;
	w = local[5];
	ctx->vsp=local+13;
	local[5] = cons(ctx,local[12],w);
	local[12]= local[5];
IF455:
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[10] = w;
	goto WHL451;
WHX452:
	local[12]= NIL;
BLK453:
	w = NIL;
	local[10]= (pointer)get_sym_func(fqv[49]);
	local[11]= loadglobal(fqv[4]);
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)REVERSE(ctx,1,local+12); /*reverse*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)APPLY(ctx,2,local+10); /*apply*/
	local[10]= w;
	w = local[4];
	ctx->vsp=local+11;
	local[4] = cons(ctx,local[10],w);
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[8] = w;
	goto WHL447;
WHX448:
	local[10]= NIL;
BLK449:
	w = NIL;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL441;
WHX442:
	local[8]= NIL;
BLK443:
	w = NIL;
	if (local[4]==NIL) goto IF456;
	local[6]= (pointer)get_sym_func(fqv[45]);
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)REVERSE(ctx,1,local+7); /*reverse*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,2,local+6); /*apply*/
	local[6]= w;
	goto IF457;
IF456:
	local[6]= NIL;
IF457:
	w = local[6];
	local[0]= w;
BLK431:
	ctx->vsp=local; return(local[0]);}

/*vector-variance*/
static pointer F96vector_variance(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	local[1]= local[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,3,local+1,&ftab[3],fqv[3]); /*make-matrix*/
	local[1]= w;
	local[2]= loadglobal(fqv[4]);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
WHL460:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX461;
	local[5]= local[2];
	local[6]= local[3];
	local[7]= local[1];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[18])(ctx,2,local+7,&ftab[18],fqv[25]); /*matrix-column*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[29])(ctx,1,local+7,&ftab[29],fqv[50]); /*variance*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SETELT(ctx,3,local+5); /*setelt*/
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL460;
WHX461:
	local[5]= NIL;
BLK462:
	w = NIL;
	w = local[2];
	local[0]= w;
BLK458:
	ctx->vsp=local; return(local[0]);}

/*covariance-matrix*/
static pointer F97covariance_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[1] = w;
	local[2]= local[1];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,2,local+2,&ftab[3],fqv[3]); /*make-matrix*/
	local[0] = w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= local[1];
WHL465:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX466;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[1];
WHL469:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX470;
	local[6]= local[0];
	local[7]= local[2];
	local[8]= local[4];
	local[9]= argv[0];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	local[10]= argv[0];
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[30])(ctx,2,local+9,&ftab[30],fqv[51]); /*covariance*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ASET(ctx,4,local+6); /*aset*/
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL469;
WHX470:
	local[6]= NIL;
BLK471:
	w = NIL;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL465;
WHX466:
	local[4]= NIL;
BLK467:
	w = local[0];
	local[0]= w;
BLK463:
	ctx->vsp=local; return(local[0]);}

/*normalize-vector*/
static pointer F98normalize_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT475;}
	local[0]= NIL;
ENT475:
	if (n>=3) { local[1]=(argv[2]); goto ENT474;}
	local[1]= makeflt(9.9999999999999949376344e-21);
ENT474:
ENT473:
	if (n>3) maerror();
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)VNORM(ctx,1,local+2); /*norm*/
	local[2]= w;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,2,local+2); /*<*/
	if (w==NIL) goto IF476;
	if (local[0]==NIL) goto IF478;
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(*ftab[13])(ctx,2,local+2,&ftab[13],fqv[18]); /*fill*/
	local[2]= w;
	goto IF479;
IF478:
	local[2]= loadglobal(fqv[4]);
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
IF479:
	goto IF477;
IF476:
	if (local[0]==NIL) goto IF480;
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)VNORMALIZE(ctx,2,local+2); /*normalize-vector-org*/
	local[2]= w;
	goto IF481;
IF480:
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)VNORMALIZE(ctx,1,local+2); /*normalize-vector-org*/
	local[2]= w;
IF481:
IF477:
	w = local[2];
	local[0]= w;
BLK472:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtmath(ctx,n,argv,env)
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
	ctx->vsp=local+0;
	compfun(ctx,fqv[52],module,F69inverse_matrix,fqv[53]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[54],module,F70diagonal,fqv[55]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[56],module,F71minor_matrix,fqv[57]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[58],module,F72atan2,fqv[59]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[60],module,F73outer_product_matrix,fqv[61]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[62],module,F74matrix2quaternion,fqv[63]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[64],module,F75quaternion2matrix,fqv[65]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[66],module,F76matrix_log,fqv[67]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[68],module,F77matrix_exponent,fqv[69]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[70],module,F78midrot,fqv[71]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[72],module,F79pseudo_inverse,fqv[73]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[74],module,F80pseudo_inverse_org,fqv[75]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[76],module,F81sr_inverse,fqv[77]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[78],module,F82sr_inverse_org,fqv[79]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[80],module,F83manipulability,fqv[81]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[82],module,F84random_gauss,fqv[83]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[84],module,F85gaussian_random,fqv[85]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[86],module,F86eigen_decompose,fqv[87]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[30],module,F87lms,fqv[88]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[32],module,F88lms_estimate,fqv[89]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[90],module,F89lms_error,fqv[91]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[92],module,F90lmeds,fqv[93]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[31],module,F91lmeds_error,fqv[94]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[95],module,F92lmeds_error_mat,fqv[96]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[97],module,F93concatenate_matrix_column,fqv[98]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[99],module,F94concatenate_matrix_row,fqv[100]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[101],module,F95concatenate_matrix_diagonal,fqv[102]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[103],module,F96vector_variance,fqv[104]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[105],module,F97covariance_matrix,fqv[106]);
	local[0]= fqv[107];
	ctx->vsp=local+1;
	w=(pointer)FBOUNDP(ctx,1,local+0); /*fboundp*/
	if (w!=NIL) goto IF482;
	local[0]= fqv[108];
	local[1]= fqv[109];
	ctx->vsp=local+2;
	w=(*ftab[31])(ctx,2,local+0,&ftab[31],fqv[110]); /*remprop*/
	local[0]= fqv[107];
	local[1]= fqv[108];
	ctx->vsp=local+2;
	w=(pointer)SYMFUNC(ctx,1,local+1); /*symbol-function*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)SETFUNC(ctx,2,local+0); /*lisp::setfunc*/
	local[0]= fqv[107];
	local[1]= fqv[111];
	ctx->vsp=local+2;
	w=(*ftab[32])(ctx,2,local+0,&ftab[32],fqv[112]); /*compiler::def-builtin-entry*/
	local[0]= w;
	goto IF483;
IF482:
	local[0]= NIL;
IF483:
	ctx->vsp=local+0;
	compfun(ctx,fqv[108],module,F98normalize_vector,fqv[113]);
	local[0]= fqv[114];
	local[1]= fqv[115];
	ctx->vsp=local+2;
	w=(*ftab[33])(ctx,2,local+0,&ftab[33],fqv[116]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<34; i++) ftab[i]=fcallx;
}
