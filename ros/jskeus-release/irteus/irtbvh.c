/* ./irtbvh.c :  entry=irtbvh */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtbvh.h"
#pragma init (register_irtbvh)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtbvh();
extern pointer build_quote_vector();
static int register_irtbvh()
  { add_module_initializer("___irtbvh", ___irtbvh);}

static pointer F4803parse_bvh_sexp();
static pointer F4804read_bvh();
static pointer F4805make_bvh_robot_model();
static pointer F4806bvh2eus();
static pointer F4807load_mcd();
static pointer F4808rikiya_bvh2eus();
static pointer F4809cmu_bvh2eus();
static pointer F4810tum_bvh2eus();
static pointer F4811rikiya_file();
static pointer F4812tum_kitchen_file();
static pointer F4813cmu_mocap_file();

/*:init*/
static pointer M4814bvh_link_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=8) maerror();
	local[0]= makeint((eusinteger_t)30L);
	local[1]= NIL;
	argv[0]->c.obj.iv[29] = argv[3];
	argv[0]->c.obj.iv[30] = argv[4];
	argv[0]->c.obj.iv[31] = argv[5];
	local[2]= local[0];
	local[3]= local[0];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[0])(ctx,3,local+2,&ftab[0],fqv[0]); /*make-cube*/
	local[2]= w;
	local[3]= makeflt(9.9999999999999977795540e-02);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)TIMES(ctx,2,local+3); /***/
	local[3]= w;
	local[4]= makeflt(5.0000000000000000000000e-01);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	local[5]= makeflt(5.0000000000000000000000e-01);
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)TIMES(ctx,2,local+5); /***/
	local[5]= w;
	local[6]= fqv[1];
	local[7]= makeflt(5.9999999999999964472863e-01);
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[0])(ctx,5,local+3,&ftab[0],fqv[0]); /*make-cube*/
	local[3]= w;
	local[4]= makeflt(5.0000000000000000000000e-01);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	local[5]= makeflt(5.9999999999999964472863e-01);
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)TIMES(ctx,2,local+5); /***/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[1])(ctx,2,local+4,&ftab[1],fqv[2]); /*make-cylinder*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,3,local+2); /*list*/
	local[1] = w;
	local[2]= NIL;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
WHL4817:
	if (local[3]==NIL) goto WHX4818;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	local[5]= fqv[3];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	goto WHL4817;
WHX4818:
	local[4]= NIL;
BLK4819:
	w = NIL;
	local[2]= NIL;
	local[3]= argv[7];
WHL4822:
	if (local[3]==NIL) goto WHX4823;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,1,local+4,&ftab[2],fqv[4]); /*normalize-vector*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)VMINUS(ctx,1,local+4); /*v-*/
	local[4]= w;
	local[5]= local[0];
	local[6]= makeflt(3.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)VNORM(ctx,1,local+6); /*norm*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[1])(ctx,2,local+5,&ftab[1],fqv[2]); /*make-cylinder*/
	local[5]= w;
	local[6]= local[4];
	local[7]= fqv[5];
	ctx->vsp=local+8;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+6); /*v**/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[2])(ctx,1,local+6,&ftab[2],fqv[4]); /*normalize-vector*/
	local[6]= w;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)VNORM(ctx,1,local+9); /*norm*/
	local[9]= w;
	local[10]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+11;
	w=(*ftab[3])(ctx,2,local+9,&ftab[3],fqv[6]); /*eps=*/
	if (w==NIL) goto IF4826;
	local[6] = fqv[7];
	local[9]= local[6];
	goto IF4827;
IF4826:
	local[9]= NIL;
IF4827:
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,0,local+9,&ftab[4],fqv[8]); /*make-coords*/
	local[9]= w;
	local[10]= fqv[9];
	local[11]= local[4];
	local[12]= fqv[10];
	ctx->vsp=local+13;
	w=(pointer)VINNERPRODUCT(ctx,2,local+11); /*v.*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[5])(ctx,1,local+11,&ftab[5],fqv[11]); /*acos*/
	local[11]= w;
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	local[9]= w;
	local[10]= fqv[12];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[7] = w;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)12L);
WHL4829:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX4830;
	local[11]= local[7];
	local[12]= local[0];
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	local[13]= makeflt(-6.2831853071795862319959e+00);
	local[14]= local[9];
	local[15]= makeflt(1.2000000000000000000000e+01);
	ctx->vsp=local+16;
	w=(pointer)QUOTIENT(ctx,2,local+14); /*/*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,2,local+13); /***/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SIN(ctx,1,local+13); /*sin*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	local[13]= local[0];
	local[14]= makeint((eusinteger_t)3L);
	ctx->vsp=local+15;
	w=(pointer)QUOTIENT(ctx,2,local+13); /*/*/
	local[13]= w;
	local[14]= makeflt(-6.2831853071795862319959e+00);
	local[15]= local[9];
	local[16]= makeflt(1.2000000000000000000000e+01);
	ctx->vsp=local+17;
	w=(pointer)QUOTIENT(ctx,2,local+15); /*/*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)TIMES(ctx,2,local+14); /***/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)COS(ctx,1,local+14); /*cos*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,2,local+13); /***/
	local[13]= w;
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(pointer)MKFLTVEC(ctx,3,local+12); /*float-vector*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)TRANSFORM(ctx,2,local+11); /*transform*/
	local[11]= w;
	w = local[8];
	ctx->vsp=local+12;
	local[8] = cons(ctx,local[11],w);
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL4829;
WHX4830:
	local[11]= NIL;
BLK4831:
	w = NIL;
	local[9]= local[8];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(*ftab[6])(ctx,2,local+9,&ftab[6],fqv[13]); /*make-prism*/
	local[5] = w;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= fqv[3];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= local[1];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)NCONC(ctx,2,local+9); /*nconc*/
	local[1] = w;
	w = local[1];
	goto WHL4822;
WHX4823:
	local[4]= NIL;
BLK4824:
	w = NIL;
	local[2]= argv[0];
	local[3]= *(ovafptr(argv[1],fqv[14]));
	local[4]= fqv[15];
	ctx->vsp=local+5;
	w=(*ftab[7])(ctx,0,local+5,&ftab[7],fqv[16]); /*make-cascoords*/
	local[5]= w;
	local[6]= fqv[17];
	local[7]= local[1];
	local[8]= fqv[18];
	local[9]= argv[2];
	ctx->vsp=local+10;
	w=(pointer)SENDMESSAGE(ctx,8,local+2); /*send-message*/
	local[2]= argv[0]->c.obj.iv[29];
	local[3]= local[2];
	w = fqv[19];
	if (memq(local[3],w)==NIL) goto IF4833;
	local[3]= argv[0];
	local[4]= fqv[17];
	local[5]= fqv[20];
	local[6]= fqv[21];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= w;
	goto IF4834;
IF4833:
	local[3]= local[2];
	w = fqv[22];
	if (memq(local[3],w)==NIL) goto IF4835;
	local[3]= argv[0];
	local[4]= fqv[17];
	local[5]= fqv[20];
	local[6]= fqv[23];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= w;
	goto IF4836;
IF4835:
	if (T==NIL) goto IF4837;
	local[3]= argv[0];
	local[4]= fqv[17];
	local[5]= fqv[20];
	local[6]= fqv[24];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= w;
	goto IF4838;
IF4837:
	local[3]= NIL;
IF4838:
IF4836:
IF4834:
	w = local[3];
	local[2]= argv[0];
	local[3]= fqv[25];
	if (argv[6]==NIL) goto IF4839;
	local[4]= argv[6];
	local[5]= fqv[26];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[30];
	ctx->vsp=local+6;
	w=(pointer)VPLUS(ctx,2,local+4); /*v+*/
	local[4]= w;
	goto IF4840;
IF4839:
	local[4]= argv[0]->c.obj.iv[30];
IF4840:
	local[5]= fqv[27];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	if (argv[6]==NIL) goto IF4841;
	local[2]= argv[6];
	local[3]= fqv[3];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto IF4842;
IF4841:
	local[2]= NIL;
IF4842:
	local[2]= argv[0];
	local[3]= fqv[28];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	w = argv[0];
	local[0]= w;
BLK4815:
	ctx->vsp=local; return(local[0]);}

/*:type*/
static pointer M4843bvh_link_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[29];
	local[0]= w;
BLK4844:
	ctx->vsp=local; return(local[0]);}

/*:offset*/
static pointer M4845bvh_link_offset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[30];
	local[0]= w;
BLK4846:
	ctx->vsp=local; return(local[0]);}

/*:channels*/
static pointer M4847bvh_link_channels(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[31];
	local[0]= w;
BLK4848:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M4849bvh_sphere_joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST4851:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[29], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY4852;
	local[3]= fqv[30];
	local[4]= fqv[31];
	local[5]= fqv[32];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,3,local+3); /*list*/
	local[1] = w;
KEY4852:
	if (n & (1<<1)) goto KEY4853;
	local[3]= makeint((eusinteger_t)3L);
	ctx->vsp=local+4;
	w=(*ftab[8])(ctx,1,local+3,&ftab[8],fqv[33]); /*unit-matrix*/
	local[2] = w;
KEY4853:
	argv[0]->c.obj.iv[15] = local[1];
	argv[0]->c.obj.iv[16] = local[2];
	local[3]= (pointer)get_sym_func(fqv[34]);
	local[4]= argv[0];
	local[5]= *(ovafptr(argv[1],fqv[14]));
	local[6]= fqv[15];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,5,local+3); /*apply*/
	local[0]= w;
BLK4850:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle-bvh*/
static pointer M4854bvh_sphere_joint_joint_angle_bvh(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT4857;}
	local[0]= NIL;
ENT4857:
ENT4856:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[35];
	local[3]= local[0];
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(*ftab[8])(ctx,1,local+4,&ftab[8],fqv[33]); /*unit-matrix*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK4855:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle-bvh-offset*/
static pointer M4858bvh_sphere_joint_joint_angle_bvh_offset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT4861;}
	local[0]= NIL;
ENT4861:
ENT4860:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[35];
	local[3]= local[0];
	local[4]= argv[0]->c.obj.iv[16];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK4859:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle-bvh-impl*/
static pointer M4862bvh_sphere_joint_joint_angle_bvh_impl(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= NIL;
	local[1]= NIL;
	if (argv[2]==NIL) goto IF4864;
	local[2]= loadglobal(fqv[36]);
	local[3]= (pointer)get_sym_func(fqv[37]);
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[0] = w;
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[15];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+2); /*rotation-matrix*/
	local[1] = w;
	local[2]= local[1];
	local[3]= local[0];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= argv[0]->c.obj.iv[15];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= T;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)ROTMAT(ctx,5,local+2); /*rotate-matrix*/
	local[2]= local[1];
	local[3]= local[0];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= argv[0]->c.obj.iv[15];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= T;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)ROTMAT(ctx,5,local+2); /*rotate-matrix*/
	local[2]= argv[0];
	local[3]= fqv[38];
	local[4]= loadglobal(fqv[36]);
	local[5]= (pointer)get_sym_func(fqv[39]);
	local[6]= argv[3];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)MATTIMES(ctx,2,local+6); /*m**/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[9])(ctx,1,local+6,&ftab[9],fqv[40]); /*matrix-log*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MAP(ctx,3,local+4); /*map*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto IF4865;
IF4864:
	local[2]= NIL;
IF4865:
	local[2]= loadglobal(fqv[41]);
	local[3]= (pointer)get_sym_func(fqv[39]);
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)TRANSPOSE(ctx,1,local+4); /*transpose*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[2];
	local[6]= fqv[12];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,2,local+4); /*m**/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[15];
	ctx->vsp=local+6;
	w=(*ftab[10])(ctx,2,local+4,&ftab[10],fqv[42]); /*matrix-to-euler-angle*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[0]= w;
BLK4863:
	ctx->vsp=local; return(local[0]);}

/*:axis-order*/
static pointer M4866bvh_sphere_joint_axis_order(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[15];
	local[0]= w;
BLK4867:
	ctx->vsp=local; return(local[0]);}

/*:bvh-offset-rotation*/
static pointer M4868bvh_sphere_joint_bvh_offset_rotation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[16];
	local[0]= w;
BLK4869:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M4870bvh_6dof_joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST4872:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[43], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY4873;
	local[4]= fqv[31];
	local[5]= fqv[32];
	local[6]= fqv[30];
	local[7]= fqv[30];
	local[8]= fqv[31];
	local[9]= fqv[32];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,6,local+4); /*list*/
	local[1] = w;
KEY4873:
	if (n & (1<<1)) goto KEY4874;
	local[2] = NIL;
KEY4874:
	if (n & (1<<2)) goto KEY4875;
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(*ftab[8])(ctx,1,local+4,&ftab[8],fqv[33]); /*unit-matrix*/
	local[3] = w;
KEY4875:
	argv[0]->c.obj.iv[16] = local[1];
	if (local[2]==NIL) goto IF4876;
	local[4]= local[2];
	goto IF4877;
IF4876:
	local[4]= makeflt(1.0000000000000000000000e+00);
IF4877:
	argv[0]->c.obj.iv[15] = local[4];
	argv[0]->c.obj.iv[17] = local[3];
	local[4]= (pointer)get_sym_func(fqv[34]);
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[14]));
	local[7]= fqv[15];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,5,local+4); /*apply*/
	local[0]= w;
BLK4871:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle-bvh*/
static pointer M4878bvh_6dof_joint_joint_angle_bvh(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT4881;}
	local[0]= NIL;
ENT4881:
ENT4880:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[35];
	local[3]= local[0];
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(*ftab[8])(ctx,1,local+4,&ftab[8],fqv[33]); /*unit-matrix*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK4879:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle-bvh-offset*/
static pointer M4882bvh_6dof_joint_joint_angle_bvh_offset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT4885;}
	local[0]= NIL;
ENT4885:
ENT4884:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[35];
	local[3]= local[0];
	local[4]= argv[0]->c.obj.iv[17];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK4883:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle-bvh-impl*/
static pointer M4886bvh_6dof_joint_joint_angle_bvh_impl(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	if (argv[2]==NIL) goto IF4888;
	local[3]= loadglobal(fqv[36]);
	local[4]= (pointer)get_sym_func(fqv[37]);
	local[5]= argv[2];
	local[6]= makeint((eusinteger_t)3L);
	local[7]= makeint((eusinteger_t)6L);
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,3,local+5); /*subseq*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MAP(ctx,3,local+3); /*map*/
	local[1] = w;
	local[3]= argv[0]->c.obj.iv[15];
	local[4]= argv[2];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)3L);
	ctx->vsp=local+7;
	w=(pointer)SUBSEQ(ctx,3,local+4); /*subseq*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SCALEVEC(ctx,2,local+3); /*scale*/
	local[2] = w;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= argv[0]->c.obj.iv[16];
	local[5]= makeint((eusinteger_t)5L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+3); /*rotation-matrix*/
	local[0] = w;
	local[3]= local[0];
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[16];
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= T;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)ROTMAT(ctx,5,local+3); /*rotate-matrix*/
	local[3]= local[0];
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[16];
	local[6]= makeint((eusinteger_t)3L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= T;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)ROTMAT(ctx,5,local+3); /*rotate-matrix*/
	local[3]= argv[0];
	local[4]= fqv[38];
	local[5]= loadglobal(fqv[36]);
	local[6]= argv[3];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)TRANSFORM(ctx,2,local+6); /*transform*/
	local[6]= w;
	local[7]= loadglobal(fqv[41]);
	local[8]= (pointer)get_sym_func(fqv[39]);
	local[9]= argv[0]->c.obj.iv[17];
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(pointer)MATTIMES(ctx,2,local+9); /*m**/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[9])(ctx,1,local+9,&ftab[9],fqv[40]); /*matrix-log*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MAP(ctx,3,local+7); /*map*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)CONCATENATE(ctx,3,local+5); /*concatenate*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto IF4889;
IF4888:
	local[3]= NIL;
IF4889:
	local[3]= loadglobal(fqv[41]);
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)TRANSPOSE(ctx,1,local+4); /*transpose*/
	local[4]= w;
	local[5]= makeflt(1.0000000000000000208167e-03);
	local[6]= argv[0]->c.obj.iv[2];
	local[7]= fqv[1];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SCALEVEC(ctx,2,local+5); /*scale*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)TRANSFORM(ctx,2,local+4); /*transform*/
	local[4]= w;
	local[5]= loadglobal(fqv[41]);
	local[6]= (pointer)get_sym_func(fqv[39]);
	local[7]= argv[3];
	ctx->vsp=local+8;
	w=(pointer)TRANSPOSE(ctx,1,local+7); /*transpose*/
	local[7]= w;
	local[8]= argv[0]->c.obj.iv[2];
	local[9]= fqv[12];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MATTIMES(ctx,2,local+7); /*m**/
	local[7]= w;
	local[8]= argv[0]->c.obj.iv[16];
	local[9]= makeint((eusinteger_t)3L);
	local[10]= makeint((eusinteger_t)6L);
	ctx->vsp=local+11;
	w=(pointer)SUBSEQ(ctx,3,local+8); /*subseq*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[10])(ctx,2,local+7,&ftab[10],fqv[42]); /*matrix-to-euler-angle*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MAP(ctx,3,local+5); /*map*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)CONCATENATE(ctx,3,local+3); /*concatenate*/
	local[0]= w;
BLK4887:
	ctx->vsp=local; return(local[0]);}

/*:axis-order*/
static pointer M4890bvh_6dof_joint_axis_order(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[16];
	local[0]= w;
BLK4891:
	ctx->vsp=local; return(local[0]);}

/*:bvh-offset-rotation*/
static pointer M4892bvh_6dof_joint_bvh_offset_rotation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[17];
	local[0]= w;
BLK4893:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M4894bvh_robot_model_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST4896:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[44], &argv[2], n-2, local+1, 0);
	if (n & (1<<0)) goto KEY4897;
	local[1] = NIL;
KEY4897:
	if (n & (1<<1)) goto KEY4898;
	local[2] = NIL;
KEY4898:
	if (n & (1<<2)) goto KEY4899;
	local[3] = NIL;
KEY4899:
	local[4]= (pointer)get_sym_func(fqv[34]);
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[14]));
	local[7]= fqv[15];
	local[8]= fqv[45];
	ctx->vsp=local+9;
	w=(*ftab[7])(ctx,0,local+9,&ftab[7],fqv[16]); /*make-cascoords*/
	local[9]= w;
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,7,local+4); /*apply*/
	local[4]= argv[0];
	local[5]= fqv[46];
	local[6]= local[1];
	local[7]= fqv[47];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,5,local+4); /*send*/
	if (local[2]==NIL) goto IF4900;
	local[4]= argv[0];
	local[5]= fqv[48];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	goto IF4901;
IF4900:
	local[4]= NIL;
IF4901:
	local[4]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+5;
	w=(pointer)REVERSE(ctx,1,local+4); /*reverse*/
	argv[0]->c.obj.iv[8] = w;
	local[4]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+5;
	w=(pointer)REVERSE(ctx,1,local+4); /*reverse*/
	argv[0]->c.obj.iv[9] = w;
	local[4]= argv[0];
	local[5]= fqv[49];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	w = argv[0];
	local[0]= w;
BLK4895:
	ctx->vsp=local; return(local[0]);}

/*:make-bvh-link*/
static pointer M4902bvh_robot_model_make_bvh_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[50], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY4904;
	local[0] = NIL;
KEY4904:
	if (n & (1<<1)) goto KEY4905;
	local[1] = NIL;
KEY4905:
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= NIL;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.car;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[2] = (w)->c.cons.cdr;
	w = local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.car;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[2] = (w)->c.cons.cdr;
	w = local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.car;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[2] = (w)->c.cons.cdr;
	w = local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	if (local[1]!=NIL) goto IF4909;
	local[1] = makeflt(1.0000000000000000000000e+00);
	local[8]= local[1];
	goto IF4910;
IF4909:
	local[8]= NIL;
IF4910:
	local[8]= loadglobal(fqv[51]);
	ctx->vsp=local+9;
	w=(pointer)INSTANTIATE(ctx,1,local+8); /*instantiate*/
	local[8]= w;
	local[9]= local[8];
	local[10]= fqv[15];
	local[11]= local[3];
	local[12]= local[2];
	local[13]= local[4];
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	local[15]= local[0];
	ctx->vsp=local+16;
	local[16]= makeclosure(codevec,quotevec,CLO4912,env,argv,local);
	local[17]= argv[2];
	ctx->vsp=local+18;
	w=(pointer)MAPCAR(ctx,2,local+16); /*mapcar*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,8,local+9); /*send*/
	w = local[8];
	local[6] = w;
	local[8]= local[6];
	w = argv[0]->c.obj.iv[8];
	ctx->vsp=local+9;
	argv[0]->c.obj.iv[8] = cons(ctx,local[8],w);
	local[8]= local[2];
	local[9]= fqv[52];
	ctx->vsp=local+10;
	w=(pointer)EQ(ctx,2,local+8); /*eql*/
	if (w!=NIL) goto IF4913;
	local[8]= NIL;
	local[9]= local[2];
	local[10]= fqv[53];
	ctx->vsp=local+11;
	w=(pointer)EQ(ctx,2,local+9); /*eql*/
	if (w==NIL) goto IF4915;
	local[9]= loadglobal(fqv[54]);
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,1,local+9); /*instantiate*/
	local[9]= w;
	local[10]= local[9];
	local[11]= fqv[15];
	ctx->vsp=local+12;
	w=(*ftab[7])(ctx,0,local+12,&ftab[7],fqv[16]); /*make-cascoords*/
	local[12]= w;
	local[13]= fqv[18];
	local[14]= fqv[55];
	local[15]= fqv[17];
	local[16]= makeint((eusinteger_t)10L);
	local[17]= makeint((eusinteger_t)10L);
	local[18]= makeint((eusinteger_t)10L);
	ctx->vsp=local+19;
	w=(*ftab[0])(ctx,3,local+16,&ftab[0],fqv[0]); /*make-cube*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,7,local+10); /*send*/
	w = local[9];
	local[0] = w;
	local[9]= local[0];
	local[10]= fqv[3];
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= argv[0];
	local[10]= fqv[3];
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= w;
	goto IF4916;
IF4915:
	local[9]= NIL;
IF4916:
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= local[9];
	if (fqv[56]!=local[10]) goto IF4919;
	local[8] = loadglobal(fqv[57]);
	local[10]= local[8];
	goto IF4920;
IF4919:
	local[10]= local[9];
	if (fqv[58]!=local[10]) goto IF4921;
	local[8] = loadglobal(fqv[59]);
	local[10]= local[8];
	goto IF4922;
IF4921:
	if (T==NIL) goto IF4923;
	local[10]= makeint((eusinteger_t)1L);
	local[11]= fqv[60];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(*ftab[11])(ctx,3,local+10,&ftab[11],fqv[61]); /*warning-message*/
	local[10]= w;
	goto IF4924;
IF4923:
	local[10]= NIL;
IF4924:
IF4922:
IF4920:
	w = local[10];
	local[9]= local[8];
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,1,local+9); /*instantiate*/
	local[9]= w;
	local[10]= local[9];
	local[11]= fqv[15];
	local[12]= fqv[18];
	local[13]= local[3];
	local[14]= fqv[62];
	local[15]= local[6];
	local[16]= fqv[63];
	local[17]= local[0];
	local[18]= fqv[64];
	local[19]= argv[0];
	local[20]= fqv[65];
	local[21]= local[3];
	ctx->vsp=local+22;
	w=(pointer)SEND(ctx,3,local+19); /*send*/
	local[19]= w;
	local[20]= fqv[66];
	ctx->vsp=local+21;
	local[21]= makeclosure(codevec,quotevec,CLO4926,env,argv,local);
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22]= (w)->c.cons.cdr;
	local[23]= fqv[31];
	w = fqv[67];
	ctx->vsp=local+24;
	local[23]= cons(ctx,local[23],w);
	local[24]= fqv[32];
	w = fqv[68];
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	local[25]= fqv[30];
	w = fqv[69];
	ctx->vsp=local+26;
	local[25]= cons(ctx,local[25],w);
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,4,local+22); /*list*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(*ftab[12])(ctx,2,local+21,&ftab[12],fqv[70]); /*reduce*/
	local[21]= w;
	local[22]= fqv[47];
	local[23]= local[1];
	ctx->vsp=local+24;
	w=(pointer)SEND(ctx,14,local+10); /*send*/
	w = local[9];
	local[7] = w;
	local[9]= local[7];
	w = argv[0]->c.obj.iv[9];
	ctx->vsp=local+10;
	argv[0]->c.obj.iv[9] = cons(ctx,local[9],w);
	w = argv[0]->c.obj.iv[9];
	local[8]= w;
	goto IF4914;
IF4913:
	local[8]= NIL;
IF4914:
	local[8]= NIL;
	local[9]= argv[2];
WHL4928:
	if (local[9]==NIL) goto WHX4929;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9] = (w)->c.cons.cdr;
	w = local[10];
	local[8] = w;
	local[10]= argv[0];
	local[11]= fqv[46];
	local[12]= local[8];
	local[13]= fqv[71];
	local[14]= local[6];
	local[15]= fqv[47];
	local[16]= local[1];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,7,local+10); /*send*/
	goto WHL4928;
WHX4929:
	local[10]= NIL;
BLK4930:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK4903:
	ctx->vsp=local; return(local[0]);}

/*:angle-vector*/
static pointer M4932bvh_robot_model_angle_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT4936;}
	local[0]= NIL;
ENT4936:
	if (n>=4) { local[1]=(argv[3]); goto ENT4935;}
	local[1]= loadglobal(fqv[36]);
	local[2]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+3;
	w=(*ftab[13])(ctx,1,local+2,&ftab[13],fqv[72]); /*calc-target-joint-dimension*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,2,local+1); /*instantiate*/
	local[1]= w;
ENT4935:
ENT4934:
	if (n>4) maerror();
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= NIL;
	local[5]= argv[0]->c.obj.iv[9];
WHL4938:
	if (local[5]==NIL) goto WHX4939;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	if (local[0]==NIL) goto IF4942;
	local[6]= local[4];
	local[7]= fqv[73];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[6];
	if (fqv[74]!=local[7]) goto IF4945;
	local[7]= local[4];
	local[8]= fqv[38];
	local[9]= local[0];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= w;
	goto IF4946;
IF4945:
	local[7]= local[6];
	if (fqv[75]!=local[7]) goto IF4947;
	local[7]= local[0];
	local[8]= local[2];
	local[9]= local[2];
	local[10]= local[4];
	local[11]= fqv[73];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SUBSEQ(ctx,3,local+7); /*subseq*/
	local[7]= w;
	local[8]= local[4];
	local[9]= fqv[76];
	local[10]= local[7];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,3,local+8); /*send*/
	local[7]= w;
	goto IF4948;
IF4947:
	if (T==NIL) goto IF4949;
	local[7]= local[4];
	local[8]= fqv[76];
	local[9]= local[0];
	local[10]= local[2];
	local[11]= local[2];
	local[12]= local[4];
	local[13]= fqv[73];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)SUBSEQ(ctx,3,local+9); /*subseq*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= w;
	goto IF4950;
IF4949:
	local[7]= NIL;
IF4950:
IF4948:
IF4946:
	w = local[7];
	local[6]= w;
	goto IF4943;
IF4942:
	local[6]= NIL;
IF4943:
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[4];
	local[8]= fqv[73];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
WHL4952:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX4953;
	local[8]= local[1];
	local[9]= local[2];
	local[10]= local[4];
	local[11]= fqv[76];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SETELT(ctx,3,local+8); /*setelt*/
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[2] = w;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL4952;
WHX4953:
	local[8]= NIL;
BLK4954:
	w = NIL;
	goto WHL4938;
WHX4939:
	local[6]= NIL;
BLK4940:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK4933:
	ctx->vsp=local; return(local[0]);}

/*:dump-joints*/
static pointer M4955bvh_robot_model_dump_joints(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[77], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY4957;
	local[0] = makeint((eusinteger_t)0L);
KEY4957:
	if (n & (1<<1)) goto KEY4958;
	local[1] = loadglobal(fqv[78]);
KEY4958:
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)TIMES(ctx,2,local+2); /***/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[14])(ctx,1,local+2,&ftab[14],fqv[79]); /*make-string*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)32L);
	ctx->vsp=local+4;
	w=(*ftab[15])(ctx,2,local+2,&ftab[15],fqv[80]); /*fill*/
	local[2]= w;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= argv[2];
WHL4960:
	if (local[7]==NIL) goto WHX4961;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= local[6];
	local[9]= fqv[81];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[3] = w;
	local[8]= local[6];
	local[9]= fqv[82];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[4] = w;
	local[8]= local[6];
	local[9]= fqv[83];
	local[10]= fqv[84];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,3,local+8); /*send*/
	local[5] = w;
	local[8]= local[1];
	local[9]= fqv[85];
	local[10]= local[2];
	local[11]= local[6];
	local[12]= fqv[86];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[16])(ctx,1,local+11,&ftab[16],fqv[87]); /*string-upcase*/
	local[11]= w;
	local[12]= local[6];
	local[13]= fqv[83];
	local[14]= fqv[18];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,5,local+8); /*format*/
	local[8]= local[1];
	local[9]= fqv[88];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,3,local+8); /*format*/
	local[8]= local[1];
	local[9]= fqv[89];
	local[10]= local[2];
	local[11]= local[3];
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= local[3];
	local[13]= makeint((eusinteger_t)1L);
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= local[3];
	local[14]= makeint((eusinteger_t)2L);
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,6,local+8); /*format*/
	local[8]= local[1];
	local[9]= fqv[90];
	local[10]= local[2];
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)XFORMAT(ctx,4,local+8); /*format*/
	local[8]= NIL;
	local[9]= local[5];
WHL4965:
	if (local[9]==NIL) goto WHX4966;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9] = (w)->c.cons.cdr;
	w = local[10];
	local[8] = w;
	local[10]= local[8];
	local[11]= local[10];
	if (fqv[31]!=local[11]) goto IF4970;
	local[11]= local[1];
	local[12]= fqv[91];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,2,local+11); /*format*/
	local[11]= w;
	goto IF4971;
IF4970:
	local[11]= local[10];
	if (fqv[32]!=local[11]) goto IF4972;
	local[11]= local[1];
	local[12]= fqv[92];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,2,local+11); /*format*/
	local[11]= w;
	goto IF4973;
IF4972:
	local[11]= local[10];
	if (fqv[30]!=local[11]) goto IF4974;
	local[11]= local[1];
	local[12]= fqv[93];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,2,local+11); /*format*/
	local[11]= w;
	goto IF4975;
IF4974:
	if (T==NIL) goto IF4976;
	local[11]= local[1];
	local[12]= fqv[94];
	local[13]= local[8];
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,3,local+11); /*format*/
	local[11]= w;
	goto IF4977;
IF4976:
	local[11]= NIL;
IF4977:
IF4975:
IF4973:
IF4971:
	w = local[11];
	goto WHL4965;
WHX4966:
	local[10]= NIL;
BLK4967:
	w = NIL;
	local[8]= local[1];
	local[9]= fqv[95];
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,2,local+8); /*format*/
	local[8]= local[6];
	local[9]= fqv[96];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	if (w==NIL) goto IF4978;
	local[8]= argv[0];
	local[9]= fqv[97];
	local[10]= local[6];
	local[11]= fqv[96];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)REVERSE(ctx,1,local+10); /*reverse*/
	local[10]= w;
	local[11]= fqv[98];
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[12]= w;
	local[13]= fqv[99];
	local[14]= local[1];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,7,local+8); /*send*/
	local[8]= w;
	goto IF4979;
IF4978:
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO4980,env,argv,local);
	local[9]= local[6];
	local[10]= fqv[100];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[17])(ctx,2,local+8,&ftab[17],fqv[101]); /*find-if*/
	local[8]= w;
	local[9]= local[8];
	local[10]= fqv[81];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= local[1];
	local[11]= fqv[102];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,3,local+10); /*format*/
	local[10]= local[1];
	local[11]= fqv[103];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,3,local+10); /*format*/
	local[10]= local[1];
	local[11]= fqv[104];
	local[12]= local[2];
	local[13]= local[9];
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[9];
	local[15]= makeint((eusinteger_t)1L);
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[14]= w;
	local[15]= local[9];
	local[16]= makeint((eusinteger_t)2L);
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)XFORMAT(ctx,6,local+10); /*format*/
	local[10]= local[1];
	local[11]= fqv[105];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,3,local+10); /*format*/
	local[8]= w;
IF4979:
	local[8]= local[1];
	local[9]= fqv[106];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,3,local+8); /*format*/
	goto WHL4960;
WHX4961:
	local[8]= NIL;
BLK4962:
	w = NIL;
	local[0]= w;
BLK4956:
	ctx->vsp=local; return(local[0]);}

/*:dump-hierarchy*/
static pointer M4981bvh_robot_model_dump_hierarchy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT4984;}
	local[0]= loadglobal(fqv[78]);
ENT4984:
ENT4983:
	if (n>3) maerror();
	local[1]= local[0];
	local[2]= fqv[107];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	local[1]= argv[0];
	local[2]= fqv[97];
	w=argv[0]->c.obj.iv[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	local[4]= fqv[99];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,5,local+1); /*send*/
	local[1]= local[0];
	local[2]= fqv[108];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	local[1]= local[0];
	local[2]= fqv[109];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	local[1]= local[0];
	local[2]= fqv[110];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	local[0]= w;
BLK4982:
	ctx->vsp=local; return(local[0]);}

/*:dump-motion*/
static pointer M4985bvh_robot_model_dump_motion(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT4988;}
	local[0]= loadglobal(fqv[78]);
ENT4988:
ENT4987:
	if (n>3) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0]->c.obj.iv[8];
WHL4990:
	if (local[3]==NIL) goto WHX4991;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= local[2];
	local[5]= fqv[83];
	local[6]= fqv[111];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[1] = w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
WHL4995:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX4996;
	local[6]= local[0];
	local[7]= fqv[112];
	local[8]= local[1];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL4995;
WHX4996:
	local[6]= NIL;
BLK4997:
	w = NIL;
	goto WHL4990;
WHX4991:
	local[4]= NIL;
BLK4992:
	w = NIL;
	local[2]= local[0];
	local[3]= fqv[113];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,2,local+2); /*format*/
	local[0]= w;
BLK4986:
	ctx->vsp=local; return(local[0]);}

/*:copy-state-to*/
static pointer M4998bvh_robot_model_copy_state_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)1L);
	local[1]= fqv[114];
	ctx->vsp=local+2;
	w=(*ftab[11])(ctx,2,local+0,&ftab[11],fqv[61]); /*warning-message*/
	local[0]= w;
BLK4999:
	ctx->vsp=local; return(local[0]);}

/*:fix-joint-angle*/
static pointer M5000bvh_robot_model_fix_joint_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=7) maerror();
	w = argv[6];
	local[0]= w;
BLK5001:
	ctx->vsp=local; return(local[0]);}

/*:fix-joint-order*/
static pointer M5002bvh_robot_model_fix_joint_order(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	w = argv[2];
	local[0]= w;
BLK5003:
	ctx->vsp=local; return(local[0]);}

/*:bvh-offset-rotate*/
static pointer M5004bvh_robot_model_bvh_offset_rotate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)3L);
	ctx->vsp=local+1;
	w=(*ftab[8])(ctx,1,local+0,&ftab[8],fqv[33]); /*unit-matrix*/
	local[0]= w;
BLK5005:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO4912(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[115];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	ctx->vsp=local+2;
	w=(*ftab[18])(ctx,2,local+0,&ftab[18],fqv[116]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO4926(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[19])(ctx,3,local+0,&ftab[19],fqv[117]); /*substitute*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO4980(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[51]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*parse-bvh-sexp*/
static pointer F4803parse_bvh_sexp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[118], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY5007;
	local[0] = NIL;
KEY5007:
	if (local[0]!=NIL) goto IF5008;
	local[0] = makeflt(1.0000000000000000000000e+00);
	local[1]= local[0];
	goto IF5009;
IF5008:
	local[1]= NIL;
IF5009:
	w = argv[0];
	if (!!iscons(w)) goto IF5010;
	local[1]= argv[0];
	goto IF5011;
IF5010:
	local[1]= NIL;
	local[2]= NIL;
WHL5012:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	if (local[1]==NIL) goto WHX5013;
	local[3]= local[1];
	local[4]= local[3];
	w = fqv[119];
	if (memq(local[4],w)==NIL) goto IF5017;
	local[4]= local[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[5];
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,2,local+4); /*list*/
	local[4]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[5];
	local[5]= w;
	local[6]= fqv[47];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)F4803parse_bvh_sexp(ctx,3,local+5); /*parse-bvh-sexp*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	w = local[2];
	ctx->vsp=local+5;
	local[2] = cons(ctx,local[4],w);
	local[4]= local[2];
	goto IF5018;
IF5017:
	local[4]= local[3];
	if (fqv[115]!=local[4]) goto IF5021;
	local[4]= local[1];
	local[5]= local[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[6];
	local[6]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[7];
	local[7]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[8];
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SCALEVEC(ctx,2,local+5); /*scale*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,2,local+4); /*list*/
	local[4]= w;
	w = local[2];
	ctx->vsp=local+5;
	local[2] = cons(ctx,local[4],w);
	local[4]= local[2];
	goto IF5022;
IF5021:
	local[4]= local[3];
	if (fqv[120]!=local[4]) goto IF5026;
	local[4]= local[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[5];
	local[5]= w;
	local[6]= local[5];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
TAG5031:
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)SUB1(ctx,1,local+7); /*1-*/
	local[5] = w;
	local[7]= local[5];
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)LESSP(ctx,2,local+7); /*<*/
	if (w==NIL) goto IF5032;
	local[7]= local[6];
	ctx->vsp=local+8;
	w=(pointer)REVERSE(ctx,1,local+7); /*reverse*/
	ctx->vsp=local+7;
	local[5]=w;
	goto BLK5029;
	goto IF5033;
IF5032:
	local[7]= NIL;
IF5033:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[7];
	local[7]= w;
	w = local[6];
	ctx->vsp=local+8;
	local[6] = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	goto TAG5031;
	w = NIL;
	local[5]= w;
BLK5029:
	w = local[5];
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	w = local[2];
	ctx->vsp=local+5;
	local[2] = cons(ctx,local[4],w);
	local[4]= local[2];
	goto IF5027;
IF5026:
	if (T==NIL) goto IF5035;
	w = local[1];
	if (!issymbol(w)) goto IF5037;
	local[4]= local[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[5];
	local[5]= w;
	local[6]= fqv[47];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)F4803parse_bvh_sexp(ctx,3,local+5); /*parse-bvh-sexp*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	w = local[2];
	ctx->vsp=local+5;
	local[2] = cons(ctx,local[4],w);
	local[4]= local[2];
	goto IF5038;
IF5037:
	local[4]= local[1];
	w = local[2];
	ctx->vsp=local+5;
	local[2] = cons(ctx,local[4],w);
	local[4]= local[2];
IF5038:
	goto IF5036;
IF5035:
	local[4]= NIL;
IF5036:
IF5027:
IF5022:
IF5018:
	w = local[4];
	goto WHL5012;
WHX5013:
	local[3]= NIL;
BLK5014:
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)REVERSE(ctx,1,local+3); /*reverse*/
	local[1]= w;
IF5011:
	w = local[1];
	local[0]= w;
BLK5006:
	ctx->vsp=local; return(local[0]);}

/*read-bvh*/
static pointer F4804read_bvh(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[121], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY5041;
	local[0] = NIL;
KEY5041:
	ctx->vsp=local+1;
	w=(*ftab[20])(ctx,0,local+1,&ftab[20],fqv[122]); /*copy-readtable*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	w = local[1];
	ctx->vsp=local+7;
	bindspecial(ctx,fqv[123],w);
	local[10]= makeint((eusinteger_t)35L);
	local[11]= makeint((eusinteger_t)59L);
	ctx->vsp=local+12;
	w=(*ftab[21])(ctx,2,local+10,&ftab[21],fqv[124]); /*set-syntax-from-char*/
	local[10]= makeint((eusinteger_t)58L);
	local[11]= makeint((eusinteger_t)32L);
	ctx->vsp=local+12;
	w=(*ftab[21])(ctx,2,local+10,&ftab[21],fqv[124]); /*set-syntax-from-char*/
	local[10]= makeint((eusinteger_t)125L);
	local[11]= makeint((eusinteger_t)41L);
	ctx->vsp=local+12;
	w=(*ftab[21])(ctx,2,local+10,&ftab[21],fqv[124]); /*set-syntax-from-char*/
	local[10]= makeint((eusinteger_t)123L);
	ctx->vsp=local+11;
	local[11]= makeclosure(codevec,quotevec,CLO5042,env,argv,local);
	ctx->vsp=local+12;
	w=(pointer)SETMACROCH(ctx,2,local+10); /*set-macro-character*/
	local[10]= argv[0];
	local[11]= fqv[125];
	local[12]= fqv[126];
	ctx->vsp=local+13;
	w=(*ftab[22])(ctx,3,local+10,&ftab[22],fqv[127]); /*open*/
	local[10]= w;
	ctx->vsp=local+11;
	w = makeclosure(codevec,quotevec,UWP5043,env,argv,local);
	local[11]=(pointer)(ctx->protfp); local[12]=w;
	ctx->protfp=(struct protectframe *)(local+11);
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)READ(ctx,1,local+13); /*read*/
	local[13]= NIL;
TAG5046:
	local[14]= local[13];
	local[15]= local[2];
	ctx->vsp=local+16;
	w=(pointer)EQ(ctx,2,local+14); /*eql*/
	if (w!=NIL) goto OR5049;
	local[14]= local[13];
	local[15]= fqv[128];
	ctx->vsp=local+16;
	w=(pointer)EQ(ctx,2,local+14); /*eql*/
	if (w!=NIL) goto OR5049;
	goto IF5047;
OR5049:
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)NREVERSE(ctx,1,local+14); /*nreverse*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[3];
	ctx->vsp=local+14;
	local[13]=w;
	goto BLK5045;
	goto IF5048;
IF5047:
	local[14]= NIL;
IF5048:
	local[14]= local[13];
	w = local[3];
	ctx->vsp=local+15;
	local[3] = cons(ctx,local[14],w);
	local[14]= local[10];
	local[15]= NIL;
	local[16]= local[2];
	ctx->vsp=local+17;
	w=(pointer)READ(ctx,3,local+14); /*read*/
	local[13] = w;
	ctx->vsp=local+14;
	goto TAG5046;
	w = NIL;
	local[13]= w;
BLK5045:
	local[13]= local[3];
	local[14]= fqv[47];
	local[15]= local[0];
	ctx->vsp=local+16;
	w=(pointer)F4803parse_bvh_sexp(ctx,3,local+13); /*parse-bvh-sexp*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.car;
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)READ(ctx,1,local+13); /*read*/
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)READ(ctx,1,local+13); /*read*/
	local[5] = w;
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)READ(ctx,1,local+13); /*read*/
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)READ(ctx,1,local+13); /*read*/
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)READ(ctx,1,local+13); /*read*/
	local[6] = w;
	local[13]= fqv[129];
	w = local[13];
	ctx->vsp=local+13;
	bindspecial(ctx,fqv[130],w);
TAG5052:
	if (loadglobal(fqv[130])!=NIL) goto IF5053;
	w = NIL;
	ctx->vsp=local+16;
	unwind(ctx,local+13);
	local[13]=w;
	goto BLK5051;
	goto IF5054;
IF5053:
	local[16]= NIL;
IF5054:
	local[16]= NIL;
	local[17]= fqv[131];
	local[18]= loadglobal(fqv[130]);
	ctx->vsp=local+19;
	w=(pointer)XFORMAT(ctx,3,local+16); /*format*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(*ftab[23])(ctx,1,local+16,&ftab[23],fqv[132]); /*read-from-string*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)EVAL(ctx,1,local+16); /*eval*/
	local[16]= w;
	local[17]= local[16];
	ctx->vsp=local+18;
	w=(pointer)LENGTH(ctx,1,local+17); /*length*/
	local[17]= w;
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[17] <= (eusinteger_t)w) goto IF5055;
	local[17]= local[16];
	w = local[4];
	ctx->vsp=local+18;
	local[4] = cons(ctx,local[17],w);
	local[17]= local[4];
	goto IF5056;
IF5055:
	local[17]= NIL;
IF5056:
	w = local[17];
	local[16]= local[10];
	local[17]= NIL;
	local[18]= NIL;
	ctx->vsp=local+19;
	w=(pointer)READLINE(ctx,3,local+16); /*read-line*/
	local[16]= w;
	storeglobal(fqv[130],w);
	ctx->vsp=local+16;
	goto TAG5052;
	local[16]= NIL;
	ctx->vsp=local+17;
	unbindx(ctx,1);
	w = local[16];
	local[13]= w;
BLK5051:
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)NREVERSE(ctx,1,local+13); /*nreverse*/
	local[4] = w;
	local[13]= makeint((eusinteger_t)2L);
	local[14]= fqv[133];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(*ftab[11])(ctx,3,local+13,&ftab[11],fqv[61]); /*warning-message*/
	local[13]= makeint((eusinteger_t)2L);
	local[14]= fqv[134];
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	ctx->vsp=local+16;
	w=(pointer)LENGTH(ctx,1,local+15); /*length*/
	local[15]= w;
	local[16]= local[4];
	ctx->vsp=local+17;
	w=(pointer)LENGTH(ctx,1,local+16); /*length*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(*ftab[11])(ctx,4,local+13,&ftab[11],fqv[61]); /*warning-message*/
	local[13]= fqv[135];
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[136];
	local[15]= fqv[137];
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	local[16]= fqv[138];
	local[17]= local[6];
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	local[17]= local[4];
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	UWP5043(ctx,0,local+13,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[10]= w;
	ctx->vsp=local+11;
	unbindx(ctx,1);
	w = local[10];
	local[0]= w;
BLK5040:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5042(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)125L);
	local[1]= argv[0];
	local[2]= T;
	ctx->vsp=local+3;
	w=(*ftab[24])(ctx,3,local+0,&ftab[24],fqv[139]); /*read-delimited-list*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP5043(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[10];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*make-bvh-robot-model*/
static pointer F4805make_bvh_robot_model(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST5058:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= loadglobal(fqv[140]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= (pointer)get_sym_func(fqv[141]);
	local[3]= local[1];
	local[4]= fqv[15];
	local[5]= fqv[142];
	local[6]= argv[0];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,6,local+2); /*apply*/
	w = local[1];
	local[0]= w;
BLK5057:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M5060motion_capture_data_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[143], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY5062;
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,0,local+2,&ftab[4],fqv[8]); /*make-coords*/
	local[0] = w;
KEY5062:
	if (n & (1<<1)) goto KEY5063;
	local[1] = NIL;
KEY5063:
	local[2]= NIL;
	local[3]= argv[2];
	local[4]= fqv[47];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)F4804read_bvh(ctx,3,local+3); /*read-bvh*/
	local[2] = w;
	local[3]= fqv[135];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(*ftab[18])(ctx,2,local+3,&ftab[18],fqv[116]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= fqv[45];
	local[5]= local[0];
	local[6]= fqv[47];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)F4805make_bvh_robot_model(ctx,5,local+3); /*make-bvh-robot-model*/
	argv[0]->c.obj.iv[2] = w;
	local[3]= fqv[136];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(*ftab[18])(ctx,2,local+3,&ftab[18],fqv[116]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(*ftab[25])(ctx,1,local+3,&ftab[25],fqv[144]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[3] = (w)->c.cons.car;
	argv[0]->c.obj.iv[1] = makeint((eusinteger_t)0L);
	w = argv[0];
	local[0]= w;
BLK5061:
	ctx->vsp=local; return(local[0]);}

/*:model*/
static pointer M5064motion_capture_data_model(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5066:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5065:
	ctx->vsp=local; return(local[0]);}

/*:animation*/
static pointer M5067motion_capture_data_animation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5069:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[3];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5068:
	ctx->vsp=local; return(local[0]);}

/*:frame*/
static pointer M5070motion_capture_data_frame(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5073;}
	local[0]= NIL;
ENT5073:
ENT5072:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5074;
	argv[0]->c.obj.iv[1] = local[0];
	local[1]= argv[0]->c.obj.iv[1];
	goto IF5075;
IF5074:
	local[1]= NIL;
IF5075:
	local[1]= argv[0]->c.obj.iv[3];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= argv[0]->c.obj.iv[2];
	local[5]= fqv[146];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
WHL5077:
	if (local[4]==NIL) goto WHX5078;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[3];
	local[6]= fqv[111];
	local[7]= local[1];
	local[8]= local[2];
	local[9]= local[2];
	local[10]= local[3];
	local[11]= fqv[73];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[2] = w;
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)SUBSEQ(ctx,3,local+7); /*subseq*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	goto WHL5077;
WHX5078:
	local[5]= NIL;
BLK5079:
	w = NIL;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK5071:
	ctx->vsp=local; return(local[0]);}

/*:frame-length*/
static pointer M5081motion_capture_data_frame_length(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
BLK5082:
	ctx->vsp=local; return(local[0]);}

/*:animate*/
static pointer M5083motion_capture_data_animate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5085:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[147], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY5086;
	local[1] = makeint((eusinteger_t)0L);
KEY5086:
	if (n & (1<<1)) goto KEY5087;
	local[2] = makeint((eusinteger_t)1L);
KEY5087:
	if (n & (1<<2)) goto KEY5088;
	local[5]= argv[0];
	local[6]= fqv[148];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[3] = w;
KEY5088:
	if (n & (1<<3)) goto KEY5089;
	local[4] = makeint((eusinteger_t)20L);
KEY5089:
	local[5]= argv[0];
	local[6]= fqv[149];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	{jmp_buf jb;
	w = fqv[150];
	ctx->vsp=local+5;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT5090;}
WHL5091:
	if (T==NIL) goto WHX5092;
	local[11]= argv[0];
	local[12]= fqv[149];
	local[13]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,3,local+11); /*send*/
	local[11]= loadglobal(fqv[151]);
	local[12]= fqv[152];
	ctx->vsp=local+13;
	w=(pointer)GETPROP(ctx,2,local+11); /*get*/
	local[11]= w;
	local[12]= fqv[153];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= NIL;
	ctx->vsp=local+12;
	w=(*ftab[27])(ctx,0,local+12,&ftab[27],fqv[154]); /*objects*/
	local[12]= w;
WHL5095:
	if (local[12]==NIL) goto WHX5096;
	w=local[12];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	w=local[12];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12] = (w)->c.cons.cdr;
	w = local[13];
	local[11] = w;
	local[13]= local[11];
	local[14]= loadglobal(fqv[140]);
	ctx->vsp=local+15;
	w=(pointer)DERIVEDP(ctx,2,local+13); /*derivedp*/
	if (w!=NIL) goto IF5099;
	local[13]= local[11];
	local[14]= loadglobal(fqv[155]);
	ctx->vsp=local+15;
	w=(pointer)DERIVEDP(ctx,2,local+13); /*derivedp*/
	if (w==NIL) goto IF5099;
	local[13]= argv[0];
	local[14]= fqv[156];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	local[14]= fqv[157];
	local[15]= local[11];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	goto IF5100;
IF5099:
	local[13]= NIL;
IF5100:
	goto WHL5095;
WHX5096:
	local[13]= NIL;
BLK5097:
	w = NIL;
	local[11]= argv[0]->c.obj.iv[1];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	argv[0]->c.obj.iv[1] = w;
	local[11]= argv[0]->c.obj.iv[1];
	local[12]= argv[0];
	local[13]= fqv[148];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)GREQP(ctx,2,local+11); /*>=*/
	if (w==NIL) goto IF5101;
	local[11]= fqv[150];
	w = NIL;
	ctx->vsp=local+12;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	goto IF5102;
IF5101:
	local[11]= NIL;
IF5102:
	local[11]= loadglobal(fqv[158]);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	local[11]= w;
	local[12]= makeflt(9.9999999999999969005032e-09);
	ctx->vsp=local+13;
	w=(*ftab[28])(ctx,2,local+11,&ftab[28],fqv[159]); /*select-stream*/
	if (w==NIL) goto IF5103;
	local[11]= fqv[150];
	w = NIL;
	ctx->vsp=local+12;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	goto IF5104;
IF5103:
	local[11]= NIL;
IF5104:
	if (local[4]==NIL) goto IF5105;
	local[11]= makeint((eusinteger_t)1000L);
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[29])(ctx,1,local+11,&ftab[29],fqv[160]); /*unix:usleep*/
	local[11]= w;
	goto IF5106;
IF5105:
	local[11]= NIL;
IF5106:
	ctx->vsp=local+11;
	w=(*ftab[30])(ctx,0,local+11,&ftab[30],fqv[161]); /*x::window-main-one*/
	goto WHL5091;
WHX5092:
	local[11]= NIL;
BLK5093:
	w = local[11];
CAT5090:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[0]= w;
BLK5084:
	ctx->vsp=local; return(local[0]);}

/*bvh2eus*/
static pointer F4806bvh2eus(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST5108:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[162], &argv[1], n-1, local+1, 1);
	if (n & (1<<0)) goto KEY5109;
	local[1] = NIL;
KEY5109:
	local[2]= NIL;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)LISTP(ctx,1,local+3); /*listp*/
	if (w!=NIL) goto IF5110;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[1] = w;
	local[3]= local[1];
	goto IF5111;
IF5110:
	local[3]= NIL;
IF5111:
	local[3]= (pointer)get_sym_func(fqv[163]);
	local[4]= argv[0];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,3,local+3); /*apply*/
	local[2] = w;
	local[3]= local[2];
	local[4]= fqv[156];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)APPEND(ctx,2,local+3); /*append*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[27])(ctx,1,local+3,&ftab[27],fqv[154]); /*objects*/
	local[3]= local[2];
	local[4]= fqv[150];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	w = local[2];
	local[0]= w;
BLK5107:
	ctx->vsp=local; return(local[0]);}

/*:init-end-coords*/
static pointer M5112bvh_robot_model_init_end_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO5114,env,argv,local);
	local[1]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,2,local+0,&ftab[17],fqv[101]); /*find-if*/
	argv[0]->c.obj.iv[13] = w;
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO5115,env,argv,local);
	local[1]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,2,local+0,&ftab[17],fqv[101]); /*find-if*/
	argv[0]->c.obj.iv[14] = w;
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO5116,env,argv,local);
	local[1]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,2,local+0,&ftab[17],fqv[101]); /*find-if*/
	argv[0]->c.obj.iv[15] = w;
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO5117,env,argv,local);
	local[1]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,2,local+0,&ftab[17],fqv[101]); /*find-if*/
	argv[0]->c.obj.iv[16] = w;
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO5118,env,argv,local);
	local[1]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,2,local+0,&ftab[17],fqv[101]); /*find-if*/
	argv[0]->c.obj.iv[18] = w;
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO5119,env,argv,local);
	local[1]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,2,local+0,&ftab[17],fqv[101]); /*find-if*/
	argv[0]->c.obj.iv[17] = w;
	w = argv[0]->c.obj.iv[17];
	local[0]= w;
BLK5113:
	ctx->vsp=local; return(local[0]);}

/*:init-root-link*/
static pointer M5120bvh_robot_model_init_root_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w=argv[0]->c.obj.iv[27];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[19] = (w)->c.cons.car;
	w=argv[0]->c.obj.iv[28];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[20] = (w)->c.cons.car;
	w=argv[0]->c.obj.iv[29];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[21] = (w)->c.cons.car;
	w=argv[0]->c.obj.iv[30];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[22] = (w)->c.cons.car;
	w=argv[0]->c.obj.iv[31];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[24] = (w)->c.cons.car;
	w=argv[0]->c.obj.iv[32];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[23] = (w)->c.cons.car;
	w = argv[0]->c.obj.iv[23];
	local[0]= w;
BLK5121:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5114(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[0]= ((fqv[164])==(local[0])?T:NIL);
	if (local[0]==NIL) goto AND5122;
	local[0]= argv[0];
	local[1]= fqv[71];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= env->c.clo.env1[0]->c.obj.iv[27];
	ctx->vsp=local+2;
	w=(*ftab[25])(ctx,1,local+1,&ftab[25],fqv[144]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (((w)->c.cons.car)==(local[0])?T:NIL);
AND5122:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5115(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[0]= ((fqv[164])==(local[0])?T:NIL);
	if (local[0]==NIL) goto AND5123;
	local[0]= argv[0];
	local[1]= fqv[71];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= env->c.clo.env1[0]->c.obj.iv[28];
	ctx->vsp=local+2;
	w=(*ftab[25])(ctx,1,local+1,&ftab[25],fqv[144]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (((w)->c.cons.car)==(local[0])?T:NIL);
AND5123:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5116(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[0]= ((fqv[164])==(local[0])?T:NIL);
	if (local[0]==NIL) goto AND5124;
	local[0]= argv[0];
	local[1]= fqv[71];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= env->c.clo.env1[0]->c.obj.iv[29];
	ctx->vsp=local+2;
	w=(*ftab[25])(ctx,1,local+1,&ftab[25],fqv[144]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (((w)->c.cons.car)==(local[0])?T:NIL);
AND5124:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5117(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[0]= ((fqv[164])==(local[0])?T:NIL);
	if (local[0]==NIL) goto AND5125;
	local[0]= argv[0];
	local[1]= fqv[71];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= env->c.clo.env1[0]->c.obj.iv[30];
	ctx->vsp=local+2;
	w=(*ftab[25])(ctx,1,local+1,&ftab[25],fqv[144]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (((w)->c.cons.car)==(local[0])?T:NIL);
AND5125:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5118(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[0]= ((fqv[164])==(local[0])?T:NIL);
	if (local[0]==NIL) goto AND5126;
	local[0]= argv[0];
	local[1]= fqv[71];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= env->c.clo.env1[0]->c.obj.iv[31];
	ctx->vsp=local+2;
	w=(*ftab[25])(ctx,1,local+1,&ftab[25],fqv[144]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (((w)->c.cons.car)==(local[0])?T:NIL);
AND5126:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5119(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[0]= ((fqv[164])==(local[0])?T:NIL);
	if (local[0]==NIL) goto AND5127;
	local[0]= argv[0];
	local[1]= fqv[71];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= env->c.clo.env1[0]->c.obj.iv[32];
	ctx->vsp=local+2;
	w=(*ftab[25])(ctx,1,local+1,&ftab[25],fqv[144]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (((w)->c.cons.car)==(local[0])?T:NIL);
AND5127:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M5128rikiya_bvh_robot_model_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5130:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[34]);
	local[2]= argv[0];
	local[3]= *(ovafptr(argv[1],fqv[14]));
	local[4]= fqv[15];
	local[5]= fqv[45];
	local[6]= fqv[165];
	local[7]= makeflt(1.5707963267948965579990e+00);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeflt(1.5707963267948965579990e+00);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[4])(ctx,2,local+6,&ftab[4],fqv[8]); /*make-coords*/
	local[6]= w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,7,local+1); /*apply*/
	local[1]= fqv[166];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5131,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[169];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5132,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[170];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5133,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[171];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5134,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,4,local+1); /*list*/
	argv[0]->c.obj.iv[27] = w;
	local[1]= fqv[172];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5135,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[173];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5136,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[174];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5137,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[175];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5138,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,4,local+1); /*list*/
	argv[0]->c.obj.iv[28] = w;
	local[1]= fqv[176];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5139,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[177];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5140,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[178];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5141,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	argv[0]->c.obj.iv[29] = w;
	local[1]= fqv[179];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5142,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[180];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5143,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[181];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5144,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	argv[0]->c.obj.iv[30] = w;
	local[1]= fqv[182];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5145,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	argv[0]->c.obj.iv[31] = w;
	local[1]= fqv[183];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5146,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[184];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5147,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	argv[0]->c.obj.iv[32] = w;
	local[1]= argv[0];
	local[2]= fqv[185];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= argv[0];
	local[2]= fqv[186];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	w = argv[0];
	local[0]= w;
BLK5129:
	ctx->vsp=local; return(local[0]);}

/*:larm-collar*/
static pointer M5148rikiya_bvh_robot_model_larm_collar(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5150:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[27];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5149:
	ctx->vsp=local; return(local[0]);}

/*:larm-shoulder*/
static pointer M5151rikiya_bvh_robot_model_larm_shoulder(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5153:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[27];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5152:
	ctx->vsp=local; return(local[0]);}

/*:larm-elbow*/
static pointer M5154rikiya_bvh_robot_model_larm_elbow(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5156:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[27];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5155:
	ctx->vsp=local; return(local[0]);}

/*:larm-wrist*/
static pointer M5157rikiya_bvh_robot_model_larm_wrist(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5159:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[27];
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5158:
	ctx->vsp=local; return(local[0]);}

/*:rarm-collar*/
static pointer M5160rikiya_bvh_robot_model_rarm_collar(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5162:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[28];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5161:
	ctx->vsp=local; return(local[0]);}

/*:rarm-shoulder*/
static pointer M5163rikiya_bvh_robot_model_rarm_shoulder(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5165:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[28];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5164:
	ctx->vsp=local; return(local[0]);}

/*:rarm-elbow*/
static pointer M5166rikiya_bvh_robot_model_rarm_elbow(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5168:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[28];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5167:
	ctx->vsp=local; return(local[0]);}

/*:rarm-wrist*/
static pointer M5169rikiya_bvh_robot_model_rarm_wrist(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5171:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[28];
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5170:
	ctx->vsp=local; return(local[0]);}

/*:lleg-crotch*/
static pointer M5172rikiya_bvh_robot_model_lleg_crotch(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5174:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[29];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5173:
	ctx->vsp=local; return(local[0]);}

/*:lleg-knee*/
static pointer M5175rikiya_bvh_robot_model_lleg_knee(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5177:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[29];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5176:
	ctx->vsp=local; return(local[0]);}

/*:lleg-ankle*/
static pointer M5178rikiya_bvh_robot_model_lleg_ankle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5180:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[29];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5179:
	ctx->vsp=local; return(local[0]);}

/*:rleg-crotch*/
static pointer M5181rikiya_bvh_robot_model_rleg_crotch(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5183:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[30];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5182:
	ctx->vsp=local; return(local[0]);}

/*:rleg-knee*/
static pointer M5184rikiya_bvh_robot_model_rleg_knee(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5186:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[30];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5185:
	ctx->vsp=local; return(local[0]);}

/*:rleg-ankle*/
static pointer M5187rikiya_bvh_robot_model_rleg_ankle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5189:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[30];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5188:
	ctx->vsp=local; return(local[0]);}

/*:torso-chest*/
static pointer M5190rikiya_bvh_robot_model_torso_chest(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5192:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[31];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5191:
	ctx->vsp=local; return(local[0]);}

/*:head-neck*/
static pointer M5193rikiya_bvh_robot_model_head_neck(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5195:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[32];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[26])(ctx,2,local+1,&ftab[26],fqv[145]); /*forward-message-to*/
	local[0]= w;
BLK5194:
	ctx->vsp=local; return(local[0]);}

/*:copy-joint-to*/
static pointer M5196rikiya_bvh_robot_model_copy_joint_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<5) maerror();
	w = argv[4];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[187],w);
	if (n>=6) { local[3]=(argv[5]); goto ENT5199;}
	local[3]= makeint((eusinteger_t)1L);
ENT5199:
ENT5198:
	if (n>6) maerror();
	local[4]= argv[2];
	local[5]= NIL;
	local[6]= fqv[188];
	local[7]= argv[3];
	ctx->vsp=local+8;
	w=(*ftab[32])(ctx,1,local+7,&ftab[32],fqv[189]); /*symbol-name*/
	local[7]= w;
	local[8]= loadglobal(fqv[187]);
	ctx->vsp=local+9;
	w=(*ftab[32])(ctx,1,local+8,&ftab[32],fqv[189]); /*symbol-name*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,4,local+5); /*format*/
	local[5]= w;
	local[6]= fqv[190];
	ctx->vsp=local+7;
	w=(pointer)INTERN(ctx,2,local+5); /*intern*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[33])(ctx,2,local+4,&ftab[33],fqv[191]); /*find-method*/
	if (w==NIL) goto IF5200;
	local[4]= argv[2];
	local[5]= argv[3];
	local[6]= NIL;
	local[7]= fqv[192];
	local[8]= loadglobal(fqv[187]);
	ctx->vsp=local+9;
	w=(*ftab[32])(ctx,1,local+8,&ftab[32],fqv[189]); /*symbol-name*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	local[7]= fqv[193];
	ctx->vsp=local+8;
	w=(pointer)INTERN(ctx,2,local+6); /*intern*/
	local[6]= w;
	local[7]= fqv[38];
	local[8]= local[3];
	local[9]= argv[0];
	local[10]= argv[3];
	local[11]= loadglobal(fqv[187]);
	local[12]= fqv[83];
	local[13]= fqv[38];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,5,local+9); /*send*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,5,local+4); /*send*/
	local[4]= w;
	goto IF5201;
IF5200:
	local[4]= NIL;
IF5201:
	local[4]= argv[2];
	local[5]= NIL;
	local[6]= fqv[194];
	local[7]= argv[3];
	ctx->vsp=local+8;
	w=(*ftab[32])(ctx,1,local+7,&ftab[32],fqv[189]); /*symbol-name*/
	local[7]= w;
	local[8]= loadglobal(fqv[187]);
	ctx->vsp=local+9;
	w=(*ftab[32])(ctx,1,local+8,&ftab[32],fqv[189]); /*symbol-name*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,4,local+5); /*format*/
	local[5]= w;
	local[6]= fqv[195];
	ctx->vsp=local+7;
	w=(pointer)INTERN(ctx,2,local+5); /*intern*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[33])(ctx,2,local+4,&ftab[33],fqv[191]); /*find-method*/
	if (w==NIL) goto IF5202;
	local[4]= argv[2];
	local[5]= argv[3];
	local[6]= NIL;
	local[7]= fqv[196];
	local[8]= loadglobal(fqv[187]);
	ctx->vsp=local+9;
	w=(*ftab[32])(ctx,1,local+8,&ftab[32],fqv[189]); /*symbol-name*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	local[7]= fqv[197];
	ctx->vsp=local+8;
	w=(pointer)INTERN(ctx,2,local+6); /*intern*/
	local[6]= w;
	local[7]= fqv[38];
	local[8]= argv[0];
	local[9]= argv[3];
	local[10]= loadglobal(fqv[187]);
	local[11]= fqv[83];
	local[12]= fqv[38];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,5,local+8); /*send*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,5,local+4); /*send*/
	local[4]= w;
	goto IF5203;
IF5202:
	local[4]= NIL;
IF5203:
	local[4]= argv[2];
	local[5]= NIL;
	local[6]= fqv[198];
	local[7]= argv[3];
	ctx->vsp=local+8;
	w=(*ftab[32])(ctx,1,local+7,&ftab[32],fqv[189]); /*symbol-name*/
	local[7]= w;
	local[8]= loadglobal(fqv[187]);
	ctx->vsp=local+9;
	w=(*ftab[32])(ctx,1,local+8,&ftab[32],fqv[189]); /*symbol-name*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,4,local+5); /*format*/
	local[5]= w;
	local[6]= fqv[199];
	ctx->vsp=local+7;
	w=(pointer)INTERN(ctx,2,local+5); /*intern*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[33])(ctx,2,local+4,&ftab[33],fqv[191]); /*find-method*/
	if (w==NIL) goto IF5204;
	local[4]= argv[2];
	local[5]= argv[3];
	local[6]= NIL;
	local[7]= fqv[200];
	local[8]= loadglobal(fqv[187]);
	ctx->vsp=local+9;
	w=(*ftab[32])(ctx,1,local+8,&ftab[32],fqv[189]); /*symbol-name*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	local[7]= fqv[201];
	ctx->vsp=local+8;
	w=(pointer)INTERN(ctx,2,local+6); /*intern*/
	local[6]= w;
	local[7]= fqv[38];
	local[8]= local[3];
	local[9]= argv[0];
	local[10]= argv[3];
	local[11]= loadglobal(fqv[187]);
	local[12]= fqv[83];
	local[13]= fqv[38];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,5,local+9); /*send*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,5,local+4); /*send*/
	local[4]= w;
	goto IF5205;
IF5204:
	local[4]= NIL;
IF5205:
	ctx->vsp=local+5;
	unbindx(ctx,1);
	w = local[4];
	local[0]= w;
BLK5197:
	ctx->vsp=local; return(local[0]);}

/*:copy-state-to*/
static pointer M5206rikiya_bvh_robot_model_copy_state_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= fqv[202];
WHL5209:
	if (local[2]==NIL) goto WHX5210;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= NIL;
	local[4]= fqv[203];
	w = local[3];
	ctx->vsp=local+5;
	bindspecial(ctx,fqv[187],w);
WHL5214:
	if (local[4]==NIL) goto WHX5215;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[8];
	local[8]= w;
	storeglobal(fqv[187],w);
	local[8]= fqv[204];
	ctx->vsp=local+9;
	w=(pointer)BOUNDP(ctx,1,local+8); /*boundp*/
	if (w==NIL) goto IF5218;
	local[8]= argv[2];
	local[9]= loadglobal(fqv[204]);
	ctx->vsp=local+10;
	w=(pointer)DERIVEDP(ctx,2,local+8); /*derivedp*/
	if (w==NIL) goto IF5218;
	local[8]= argv[0];
	local[9]= fqv[205];
	local[10]= argv[2];
	local[11]= local[1];
	local[12]= loadglobal(fqv[187]);
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,5,local+8); /*send*/
	local[8]= w;
	goto IF5219;
IF5218:
	local[8]= argv[0];
	local[9]= fqv[205];
	local[10]= argv[2];
	local[11]= local[1];
	local[12]= loadglobal(fqv[187]);
	local[13]= local[1];
	local[14]= local[13];
	if (fqv[206]!=local[14]) goto IF5221;
	local[14]= makeint((eusinteger_t)-1L);
	goto IF5222;
IF5221:
	if (T==NIL) goto IF5223;
	local[14]= makeint((eusinteger_t)1L);
	goto IF5224;
IF5223:
	local[14]= NIL;
IF5224:
IF5222:
	w = local[14];
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,6,local+8); /*send*/
	local[8]= w;
IF5219:
	goto WHL5214;
WHX5215:
	local[8]= NIL;
BLK5216:
	local[8]= NIL;
	ctx->vsp=local+9;
	unbindx(ctx,1);
	w = local[8];
	goto WHL5209;
WHX5210:
	local[3]= NIL;
BLK5211:
	w = NIL;
	local[1]= NIL;
	local[2]= fqv[207];
WHL5226:
	if (local[2]==NIL) goto WHX5227;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= NIL;
	local[4]= fqv[208];
	w = local[3];
	ctx->vsp=local+5;
	bindspecial(ctx,fqv[187],w);
WHL5231:
	if (local[4]==NIL) goto WHX5232;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[8];
	local[8]= w;
	storeglobal(fqv[187],w);
	local[8]= fqv[204];
	ctx->vsp=local+9;
	w=(pointer)BOUNDP(ctx,1,local+8); /*boundp*/
	if (w==NIL) goto IF5235;
	local[8]= argv[2];
	local[9]= loadglobal(fqv[204]);
	ctx->vsp=local+10;
	w=(pointer)DERIVEDP(ctx,2,local+8); /*derivedp*/
	if (w==NIL) goto IF5235;
	local[8]= argv[0];
	local[9]= fqv[205];
	local[10]= argv[2];
	local[11]= local[1];
	local[12]= loadglobal(fqv[187]);
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,5,local+8); /*send*/
	local[8]= w;
	goto IF5236;
IF5235:
	local[8]= argv[0];
	local[9]= fqv[205];
	local[10]= argv[2];
	local[11]= local[1];
	local[12]= loadglobal(fqv[187]);
	local[13]= local[1];
	local[14]= local[13];
	if (fqv[209]!=local[14]) goto IF5238;
	local[14]= makeint((eusinteger_t)-1L);
	goto IF5239;
IF5238:
	if (T==NIL) goto IF5240;
	local[14]= makeint((eusinteger_t)1L);
	goto IF5241;
IF5240:
	local[14]= NIL;
IF5241:
IF5239:
	w = local[14];
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,6,local+8); /*send*/
	local[8]= w;
IF5236:
	goto WHL5231;
WHX5232:
	local[8]= NIL;
BLK5233:
	local[8]= NIL;
	ctx->vsp=local+9;
	unbindx(ctx,1);
	w = local[8];
	goto WHL5226;
WHX5227:
	local[3]= NIL;
BLK5228:
	w = NIL;
	local[1]= argv[0];
	local[2]= fqv[205];
	local[3]= argv[2];
	local[4]= fqv[210];
	local[5]= fqv[211];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,5,local+1); /*send*/
	local[1]= argv[0];
	local[2]= fqv[205];
	local[3]= argv[2];
	local[4]= fqv[212];
	local[5]= fqv[213];
	local[6]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,6,local+1); /*send*/
	local[1]= argv[2];
	local[2]= fqv[214];
	local[3]= argv[0];
	local[4]= fqv[215];
	w=argv[0]->c.obj.iv[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= fqv[27];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
BLK5207:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5131(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5132(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5133(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5134(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5135(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5136(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5137(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5138(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5139(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5140(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5141(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5142(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5143(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5144(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5145(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5146(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5147(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M5242tum_bvh_robot_model_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5244:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[34]);
	local[2]= argv[0];
	local[3]= *(ovafptr(argv[1],fqv[14]));
	local[4]= fqv[15];
	local[5]= fqv[45];
	local[6]= fqv[165];
	local[7]= makeflt(1.5707963267948965579990e+00);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[4])(ctx,2,local+6,&ftab[4],fqv[8]); /*make-coords*/
	local[6]= w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,7,local+1); /*apply*/
	local[1]= fqv[216];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5245,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[217];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5246,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[218];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5247,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[219];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5248,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	local[5]= fqv[220];
	local[6]= argv[0]->c.obj.iv[8];
	local[7]= fqv[167];
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO5249,env,argv,local);
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,4,local+5,&ftab[31],fqv[168]); /*find*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,5,local+1); /*list*/
	argv[0]->c.obj.iv[27] = w;
	local[1]= fqv[221];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5250,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[222];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5251,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[223];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5252,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[224];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5253,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	local[5]= fqv[225];
	local[6]= argv[0]->c.obj.iv[8];
	local[7]= fqv[167];
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO5254,env,argv,local);
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,4,local+5,&ftab[31],fqv[168]); /*find*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,5,local+1); /*list*/
	argv[0]->c.obj.iv[28] = w;
	local[1]= fqv[226];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5255,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[227];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5256,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[228];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5257,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[229];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5258,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,4,local+1); /*list*/
	argv[0]->c.obj.iv[29] = w;
	local[1]= fqv[230];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5259,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[231];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5260,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[232];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5261,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[233];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5262,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,4,local+1); /*list*/
	argv[0]->c.obj.iv[30] = w;
	local[1]= fqv[234];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5263,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[235];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5264,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[236];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5265,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[237];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5266,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	local[5]= fqv[238];
	local[6]= argv[0]->c.obj.iv[8];
	local[7]= fqv[167];
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO5267,env,argv,local);
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,4,local+5,&ftab[31],fqv[168]); /*find*/
	local[5]= w;
	local[6]= fqv[239];
	local[7]= argv[0]->c.obj.iv[8];
	local[8]= fqv[167];
	ctx->vsp=local+9;
	local[9]= makeclosure(codevec,quotevec,CLO5268,env,argv,local);
	ctx->vsp=local+10;
	w=(*ftab[31])(ctx,4,local+6,&ftab[31],fqv[168]); /*find*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,6,local+1); /*list*/
	argv[0]->c.obj.iv[31] = w;
	local[1]= fqv[240];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5269,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[241];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5270,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	argv[0]->c.obj.iv[32] = w;
	local[1]= argv[0];
	local[2]= fqv[185];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= argv[0];
	local[2]= fqv[186];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	w = argv[0];
	local[0]= w;
BLK5243:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5245(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5246(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5247(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5248(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5249(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5250(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5251(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5252(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5253(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5254(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5255(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5256(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5257(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5258(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5259(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5260(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5261(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5262(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5263(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5264(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5265(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5266(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5267(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5268(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5269(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5270(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M5271cmu_bvh_robot_model_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5273:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[34]);
	local[2]= argv[0];
	local[3]= *(ovafptr(argv[1],fqv[14]));
	local[4]= fqv[15];
	local[5]= fqv[45];
	local[6]= fqv[165];
	local[7]= makeflt(1.5707963267948965579990e+00);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeflt(1.5707963267948965579990e+00);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[4])(ctx,2,local+6,&ftab[4],fqv[8]); /*make-coords*/
	local[6]= w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,7,local+1); /*apply*/
	local[1]= fqv[169];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5274,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[242];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5275,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[243];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5276,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[244];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5277,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	local[5]= fqv[245];
	local[6]= argv[0]->c.obj.iv[8];
	local[7]= fqv[167];
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO5278,env,argv,local);
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,4,local+5,&ftab[31],fqv[168]); /*find*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,5,local+1); /*list*/
	argv[0]->c.obj.iv[27] = w;
	local[1]= fqv[173];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5279,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[246];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5280,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[247];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5281,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[248];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5282,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	local[5]= fqv[249];
	local[6]= argv[0]->c.obj.iv[8];
	local[7]= fqv[167];
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO5283,env,argv,local);
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,4,local+5,&ftab[31],fqv[168]); /*find*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,5,local+1); /*list*/
	argv[0]->c.obj.iv[28] = w;
	local[1]= fqv[250];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5284,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[251];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5285,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[252];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5286,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[253];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5287,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	local[5]= fqv[254];
	local[6]= argv[0]->c.obj.iv[8];
	local[7]= fqv[167];
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO5288,env,argv,local);
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,4,local+5,&ftab[31],fqv[168]); /*find*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,5,local+1); /*list*/
	argv[0]->c.obj.iv[29] = w;
	local[1]= fqv[255];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5289,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[256];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5290,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[257];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5291,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	local[4]= fqv[258];
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= fqv[167];
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO5292,env,argv,local);
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,4,local+4,&ftab[31],fqv[168]); /*find*/
	local[4]= w;
	local[5]= fqv[259];
	local[6]= argv[0]->c.obj.iv[8];
	local[7]= fqv[167];
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO5293,env,argv,local);
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,4,local+5,&ftab[31],fqv[168]); /*find*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,5,local+1); /*list*/
	argv[0]->c.obj.iv[30] = w;
	local[1]= fqv[260];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5294,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[261];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5295,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[262];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5296,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	argv[0]->c.obj.iv[31] = w;
	local[1]= fqv[183];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO5297,env,argv,local);
	ctx->vsp=local+5;
	w=(*ftab[31])(ctx,4,local+1,&ftab[31],fqv[168]); /*find*/
	local[1]= w;
	local[2]= fqv[263];
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= fqv[167];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO5298,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,4,local+2,&ftab[31],fqv[168]); /*find*/
	local[2]= w;
	local[3]= fqv[184];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= fqv[167];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO5299,env,argv,local);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,4,local+3,&ftab[31],fqv[168]); /*find*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	argv[0]->c.obj.iv[32] = w;
	local[1]= argv[0];
	local[2]= fqv[185];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= argv[0];
	local[2]= fqv[186];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	w = argv[0];
	local[0]= w;
BLK5272:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5274(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5275(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5276(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5277(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5278(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5279(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5280(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5281(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5282(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5283(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5284(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5285(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5286(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5287(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5288(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5289(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5290(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5291(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5292(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5293(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5294(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5295(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5296(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5297(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5298(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO5299(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*load-mcd*/
static pointer F4807load_mcd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[264], &argv[1], n-1, local+0, 1);
	if (n & (1<<0)) goto KEY5301;
	local[0] = NIL;
KEY5301:
	if (n & (1<<1)) goto KEY5302;
	local[1] = NIL;
KEY5302:
	if (n & (1<<2)) goto KEY5303;
	local[2] = loadglobal(fqv[140]);
KEY5303:
	local[3]= local[2];
	w = local[3];
	ctx->vsp=local+4;
	bindspecial(ctx,fqv[140],w);
	local[7]= loadglobal(fqv[265]);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,1,local+7); /*instantiate*/
	local[7]= w;
	local[8]= local[7];
	local[9]= fqv[15];
	local[10]= argv[0];
	local[11]= fqv[45];
	local[12]= local[1];
	local[13]= fqv[47];
	local[14]= local[0];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,7,local+8); /*send*/
	w = local[7];
	local[7]= w;
	ctx->vsp=local+8;
	unbindx(ctx,1);
	w = local[7];
	local[0]= w;
BLK5300:
	ctx->vsp=local; return(local[0]);}

/*rikiya-bvh2eus*/
static pointer F4808rikiya_bvh2eus(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST5306:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= (pointer)get_sym_func(fqv[266]);
	local[2]= argv[0];
	local[3]= fqv[47];
	local[4]= makeflt(1.0000000000000000000000e+01);
	local[5]= fqv[267];
	local[6]= loadglobal(fqv[268]);
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,7,local+1); /*apply*/
	local[0]= w;
BLK5305:
	ctx->vsp=local; return(local[0]);}

/*cmu-bvh2eus*/
static pointer F4809cmu_bvh2eus(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST5308:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= (pointer)get_sym_func(fqv[266]);
	local[2]= argv[0];
	local[3]= fqv[47];
	local[4]= makeflt(1.0000000000000000000000e+02);
	local[5]= fqv[267];
	local[6]= loadglobal(fqv[269]);
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,7,local+1); /*apply*/
	local[0]= w;
BLK5307:
	ctx->vsp=local; return(local[0]);}

/*tum-bvh2eus*/
static pointer F4810tum_bvh2eus(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST5310:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= (pointer)get_sym_func(fqv[266]);
	local[2]= argv[0];
	local[3]= fqv[47];
	local[4]= makeflt(1.0000000000000000000000e+01);
	local[5]= fqv[267];
	local[6]= loadglobal(fqv[270]);
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,7,local+1); /*apply*/
	local[0]= w;
BLK5309:
	ctx->vsp=local; return(local[0]);}

/*rikiya-file*/
static pointer F4811rikiya_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[271], &argv[0], n-0, local+0, 0);
	if (n & (1<<0)) goto KEY5312;
	local[0] = makeint((eusinteger_t)1L);
KEY5312:
	if (n & (1<<1)) goto KEY5313;
	local[1] = fqv[272];
KEY5313:
	local[2]= NIL;
	local[3]= fqv[273];
	local[4]= fqv[274];
	ctx->vsp=local+5;
	w=(pointer)GETENV(ctx,1,local+4); /*unix:getenv*/
	local[4]= w;
	local[5]= local[1];
	local[6]= NIL;
	local[7]= fqv[275];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[16])(ctx,1,local+6,&ftab[16],fqv[87]); /*string-upcase*/
	local[6]= w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)XFORMAT(ctx,6,local+2); /*format*/
	local[0]= w;
BLK5311:
	ctx->vsp=local; return(local[0]);}

/*tum-kitchen-file*/
static pointer F4812tum_kitchen_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[276], &argv[0], n-0, local+0, 0);
	if (n & (1<<0)) goto KEY5315;
	local[0] = makeint((eusinteger_t)1L);
KEY5315:
	if (n & (1<<1)) goto KEY5316;
	local[1] = makeint((eusinteger_t)0L);
KEY5316:
	local[2]= NIL;
	local[3]= fqv[277];
	local[4]= fqv[278];
	ctx->vsp=local+5;
	w=(pointer)GETENV(ctx,1,local+4); /*unix:getenv*/
	local[4]= w;
	local[5]= local[1];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,5,local+2); /*format*/
	local[0]= w;
BLK5314:
	ctx->vsp=local; return(local[0]);}

/*cmu-mocap-file*/
static pointer F4813cmu_mocap_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[279], &argv[0], n-0, local+0, 0);
	if (n & (1<<0)) goto KEY5318;
	local[0] = makeint((eusinteger_t)1L);
KEY5318:
	if (n & (1<<1)) goto KEY5319;
	local[1] = makeint((eusinteger_t)1L);
KEY5319:
	local[2]= NIL;
	local[3]= fqv[280];
	local[4]= fqv[281];
	ctx->vsp=local+5;
	w=(pointer)GETENV(ctx,1,local+4); /*unix:getenv*/
	local[4]= w;
	local[5]= local[1];
	local[6]= local[1];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)XFORMAT(ctx,6,local+2); /*format*/
	local[0]= w;
BLK5317:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtbvh(ctx,n,argv,env)
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
	local[0]= fqv[282];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF5320;
	local[0]= fqv[283];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[284],w);
	goto IF5321;
IF5320:
	local[0]= fqv[285];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF5321:
	local[0]= fqv[51];
	local[1]= fqv[286];
	local[2]= fqv[51];
	local[3]= fqv[287];
	local[4]= loadglobal(fqv[54]);
	local[5]= fqv[288];
	local[6]= fqv[289];
	local[7]= fqv[290];
	local[8]= NIL;
	local[9]= fqv[291];
	local[10]= NIL;
	local[11]= fqv[292];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[293];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[294]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4814bvh_link_init,fqv[15],fqv[51],fqv[295]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4843bvh_link_type,fqv[86],fqv[51],fqv[296]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4845bvh_link_offset,fqv[81],fqv[51],fqv[297]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4847bvh_link_channels,fqv[82],fqv[51],fqv[298]);
	local[0]= fqv[57];
	local[1]= fqv[286];
	local[2]= fqv[57];
	local[3]= fqv[287];
	local[4]= loadglobal(fqv[299]);
	local[5]= fqv[288];
	local[6]= fqv[300];
	local[7]= fqv[290];
	local[8]= NIL;
	local[9]= fqv[291];
	local[10]= NIL;
	local[11]= fqv[292];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[293];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[294]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4849bvh_sphere_joint_init,fqv[15],fqv[57],fqv[301]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4854bvh_sphere_joint_joint_angle_bvh,fqv[111],fqv[57],fqv[302]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4858bvh_sphere_joint_joint_angle_bvh_offset,fqv[76],fqv[57],fqv[303]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4862bvh_sphere_joint_joint_angle_bvh_impl,fqv[35],fqv[57],fqv[304]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4866bvh_sphere_joint_axis_order,fqv[84],fqv[57],fqv[305]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4868bvh_sphere_joint_bvh_offset_rotation,fqv[64],fqv[57],fqv[306]);
	local[0]= fqv[59];
	local[1]= fqv[286];
	local[2]= fqv[59];
	local[3]= fqv[287];
	local[4]= loadglobal(fqv[307]);
	local[5]= fqv[288];
	local[6]= fqv[308];
	local[7]= fqv[290];
	local[8]= NIL;
	local[9]= fqv[291];
	local[10]= NIL;
	local[11]= fqv[292];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[293];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[294]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4870bvh_6dof_joint_init,fqv[15],fqv[59],fqv[309]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4878bvh_6dof_joint_joint_angle_bvh,fqv[111],fqv[59],fqv[310]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4882bvh_6dof_joint_joint_angle_bvh_offset,fqv[76],fqv[59],fqv[311]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4886bvh_6dof_joint_joint_angle_bvh_impl,fqv[35],fqv[59],fqv[312]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4890bvh_6dof_joint_axis_order,fqv[84],fqv[59],fqv[313]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4892bvh_6dof_joint_bvh_offset_rotation,fqv[64],fqv[59],fqv[314]);
	local[0]= fqv[140];
	local[1]= fqv[286];
	local[2]= fqv[140];
	local[3]= fqv[287];
	local[4]= loadglobal(fqv[155]);
	local[5]= fqv[288];
	local[6]= fqv[315];
	local[7]= fqv[290];
	local[8]= NIL;
	local[9]= fqv[291];
	local[10]= NIL;
	local[11]= fqv[292];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[293];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[294]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4894bvh_robot_model_init,fqv[15],fqv[140],fqv[316]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4902bvh_robot_model_make_bvh_link,fqv[46],fqv[140],fqv[317]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4932bvh_robot_model_angle_vector,fqv[318],fqv[140],fqv[319]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4955bvh_robot_model_dump_joints,fqv[97],fqv[140],fqv[320]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4981bvh_robot_model_dump_hierarchy,fqv[321],fqv[140],fqv[322]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4985bvh_robot_model_dump_motion,fqv[323],fqv[140],fqv[324]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M4998bvh_robot_model_copy_state_to,fqv[157],fqv[140],fqv[325]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5000bvh_robot_model_fix_joint_angle,fqv[326],fqv[140],fqv[327]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5002bvh_robot_model_fix_joint_order,fqv[328],fqv[140],fqv[329]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5004bvh_robot_model_bvh_offset_rotate,fqv[65],fqv[140],fqv[330]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[331],module,F4803parse_bvh_sexp,fqv[332]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[333],module,F4804read_bvh,fqv[334]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[335],module,F4805make_bvh_robot_model,fqv[336]);
	local[0]= fqv[265];
	local[1]= fqv[286];
	local[2]= fqv[265];
	local[3]= fqv[287];
	local[4]= loadglobal(fqv[337]);
	local[5]= fqv[288];
	local[6]= fqv[338];
	local[7]= fqv[290];
	local[8]= NIL;
	local[9]= fqv[291];
	local[10]= NIL;
	local[11]= fqv[292];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[293];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[294]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5060motion_capture_data_init,fqv[15],fqv[265],fqv[339]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5064motion_capture_data_model,fqv[156],fqv[265],fqv[340]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5067motion_capture_data_animation,fqv[341],fqv[265],fqv[342]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5070motion_capture_data_frame,fqv[149],fqv[265],fqv[343]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5081motion_capture_data_frame_length,fqv[148],fqv[265],fqv[344]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5083motion_capture_data_animate,fqv[150],fqv[265],fqv[345]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[266],module,F4806bvh2eus,fqv[346]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5112bvh_robot_model_init_end_coords,fqv[185],fqv[140],fqv[347]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5120bvh_robot_model_init_root_link,fqv[186],fqv[140],fqv[348]);
	local[0]= fqv[268];
	local[1]= fqv[286];
	local[2]= fqv[268];
	local[3]= fqv[287];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[288];
	local[6]= fqv[315];
	local[7]= fqv[290];
	local[8]= NIL;
	local[9]= fqv[291];
	local[10]= NIL;
	local[11]= fqv[292];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[293];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[294]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5128rikiya_bvh_robot_model_init,fqv[15],fqv[268],fqv[349]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5148rikiya_bvh_robot_model_larm_collar,fqv[350],fqv[268],fqv[351]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5151rikiya_bvh_robot_model_larm_shoulder,fqv[352],fqv[268],fqv[353]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5154rikiya_bvh_robot_model_larm_elbow,fqv[354],fqv[268],fqv[355]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5157rikiya_bvh_robot_model_larm_wrist,fqv[356],fqv[268],fqv[357]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5160rikiya_bvh_robot_model_rarm_collar,fqv[358],fqv[268],fqv[359]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5163rikiya_bvh_robot_model_rarm_shoulder,fqv[360],fqv[268],fqv[361]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5166rikiya_bvh_robot_model_rarm_elbow,fqv[362],fqv[268],fqv[363]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5169rikiya_bvh_robot_model_rarm_wrist,fqv[364],fqv[268],fqv[365]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5172rikiya_bvh_robot_model_lleg_crotch,fqv[366],fqv[268],fqv[367]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5175rikiya_bvh_robot_model_lleg_knee,fqv[368],fqv[268],fqv[369]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5178rikiya_bvh_robot_model_lleg_ankle,fqv[370],fqv[268],fqv[371]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5181rikiya_bvh_robot_model_rleg_crotch,fqv[372],fqv[268],fqv[373]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5184rikiya_bvh_robot_model_rleg_knee,fqv[374],fqv[268],fqv[375]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5187rikiya_bvh_robot_model_rleg_ankle,fqv[376],fqv[268],fqv[377]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5190rikiya_bvh_robot_model_torso_chest,fqv[378],fqv[268],fqv[379]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5193rikiya_bvh_robot_model_head_neck,fqv[380],fqv[268],fqv[381]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5196rikiya_bvh_robot_model_copy_joint_to,fqv[205],fqv[268],fqv[382]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5206rikiya_bvh_robot_model_copy_state_to,fqv[157],fqv[268],fqv[383]);
	local[0]= fqv[270];
	local[1]= fqv[286];
	local[2]= fqv[270];
	local[3]= fqv[287];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[288];
	local[6]= fqv[315];
	local[7]= fqv[290];
	local[8]= NIL;
	local[9]= fqv[291];
	local[10]= NIL;
	local[11]= fqv[292];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[293];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[294]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5242tum_bvh_robot_model_init,fqv[15],fqv[270],fqv[384]);
	local[0]= fqv[269];
	local[1]= fqv[286];
	local[2]= fqv[269];
	local[3]= fqv[287];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[288];
	local[6]= fqv[315];
	local[7]= fqv[290];
	local[8]= NIL;
	local[9]= fqv[291];
	local[10]= NIL;
	local[11]= fqv[292];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[293];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[294]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5271cmu_bvh_robot_model_init,fqv[15],fqv[269],fqv[385]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[163],module,F4807load_mcd,fqv[386]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[387],module,F4808rikiya_bvh2eus,fqv[388]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[389],module,F4809cmu_bvh2eus,fqv[390]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[391],module,F4810tum_bvh2eus,fqv[392]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[393],module,F4811rikiya_file,fqv[394]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[395],module,F4812tum_kitchen_file,fqv[396]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[397],module,F4813cmu_mocap_file,fqv[398]);
	local[0]= fqv[399];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF5322;
	local[0]= fqv[400];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[284],w);
	goto IF5323;
IF5322:
	local[0]= fqv[401];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF5323:
	local[0]= fqv[402];
	local[1]= fqv[403];
	ctx->vsp=local+2;
	w=(*ftab[35])(ctx,2,local+0,&ftab[35],fqv[404]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<36; i++) ftab[i]=fcallx;
}
