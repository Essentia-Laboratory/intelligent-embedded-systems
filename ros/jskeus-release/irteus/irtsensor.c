/* ./irtsensor.c :  entry=irtsensor */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtsensor.h"
#pragma init (register_irtsensor)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtsensor();
extern pointer build_quote_vector();
static int register_irtsensor()
  { add_module_initializer("___irtsensor", ___irtsensor);}

static pointer F2796make_camera_from_param();

/*:profile*/
static pointer M2797sensor_model_profile(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2800;}
	local[0]= NIL;
ENT2800:
ENT2799:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF2801;
	argv[0]->c.obj.iv[17] = local[0];
	local[1]= argv[0]->c.obj.iv[17];
	goto IF2802;
IF2801:
	local[1]= NIL;
IF2802:
	w = argv[0]->c.obj.iv[17];
	local[0]= w;
BLK2798:
	ctx->vsp=local; return(local[0]);}

/*:signal*/
static pointer M2803sensor_model_signal(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= fqv[0];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[1]); /*warn*/
	local[0]= w;
BLK2804:
	ctx->vsp=local; return(local[0]);}

/*:simulate*/
static pointer M2805sensor_model_simulate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= fqv[2];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[1]); /*warn*/
	local[0]= w;
BLK2806:
	ctx->vsp=local; return(local[0]);}

/*:read*/
static pointer M2807sensor_model_read(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[16];
	local[0]= w;
BLK2808:
	ctx->vsp=local; return(local[0]);}

/*:draw-sensor*/
static pointer M2809sensor_model_draw_sensor(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= fqv[3];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[1]); /*warn*/
	local[0]= w;
BLK2810:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M2811sensor_model_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[4], &argv[3], n-3, local+0, 1);
	if (n & (1<<0)) goto KEY2813;
	local[0] = NIL;
KEY2813:
	local[1]= argv[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[5]); /*replace-object*/
	local[1]= argv[0];
	local[2]= fqv[6];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = argv[2];
	local[0]= w;
BLK2812:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M2814bumper_model_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST2816:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[7], &argv[3], n-3, local+1, 0);
	if (n & (1<<0)) goto KEY2817;
	local[1] = makeint((eusinteger_t)20L);
KEY2817:
	if (n & (1<<1)) goto KEY2818;
	local[2] = NIL;
KEY2818:
	argv[0]->c.obj.iv[16] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[18] = local[1];
	local[3]= (pointer)get_sym_func(fqv[8]);
	local[4]= argv[0];
	local[5]= *(ovafptr(argv[1],fqv[9]));
	local[6]= fqv[10];
	local[7]= argv[2];
	local[8]= fqv[6];
	local[9]= local[2];
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,8,local+3); /*apply*/
	local[0]= w;
BLK2815:
	ctx->vsp=local; return(local[0]);}

/*:simulate*/
static pointer M2819bumper_model_simulate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	if (argv[2]!=NIL) goto IF2821;
	w = NIL;
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK2820;
	goto IF2822;
IF2821:
	local[1]= NIL;
IF2822:
	w = argv[2];
	if (!!iscons(w)) goto IF2823;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	argv[2] = w;
	local[1]= argv[2];
	goto IF2824;
IF2823:
	local[1]= NIL;
IF2824:
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO2827,env,argv,local);
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[11]); /*some*/
	if (w==NIL) goto IF2825;
	local[1]= makeint((eusinteger_t)1L);
	goto IF2826;
IF2825:
	local[1]= makeint((eusinteger_t)0L);
IF2826:
	argv[0]->c.obj.iv[16] = local[1];
	w = argv[0]->c.obj.iv[16];
	local[0]= w;
BLK2820:
	ctx->vsp=local; return(local[0]);}

/*:draw*/
static pointer M2828bumper_model_draw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[12];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK2829:
	ctx->vsp=local; return(local[0]);}

/*:draw-sensor*/
static pointer M2830bumper_model_draw_sensor(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= argv[0];
	local[2]= fqv[13];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[1]= w;
	local[2]= fqv[14];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= argv[0]->c.obj.iv[16];
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	if (w==NIL) goto IF2832;
	local[0]= argv[0];
	local[1]= fqv[15];
	local[2]= fqv[16];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF2833;
IF2832:
	local[0]= argv[0];
	local[1]= fqv[15];
	local[2]= argv[0];
	local[3]= fqv[14];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
IF2833:
	local[0]= argv[2];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,2,local+0,&ftab[3],fqv[17]); /*gl::draw-glbody*/
	local[0]= argv[0];
	local[1]= argv[0];
	local[2]= fqv[14];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[1]= w;
	local[2]= fqv[13];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= w;
BLK2831:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2827(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[18]); /*pqp-collision-distance*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	env->c.clo.env2[0] = (w)->c.cons.car;
	local[0]= env->c.clo.env2[0];
	local[1]= env->c.clo.env1[0]->c.obj.iv[18];
	ctx->vsp=local+2;
	w=(pointer)LESSP(ctx,2,local+0); /*<*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M2834camera_model_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST2836:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[19], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY2837;
	local[1] = makeint((eusinteger_t)320L);
KEY2837:
	if (n & (1<<1)) goto KEY2838;
	local[2] = makeint((eusinteger_t)240L);
KEY2838:
	if (n & (1<<2)) goto KEY2839;
	local[3] = fqv[20];
KEY2839:
	if (n & (1<<3)) goto KEY2840;
	local[4] = makeflt(1.0000000000000000000000e+02);
KEY2840:
	if (n & (1<<4)) goto KEY2841;
	local[5] = makeflt(1.0000000000000000000000e+02);
KEY2841:
	if (n & (1<<5)) goto KEY2842;
	local[6] = makeflt(1.0000000000000000000000e+04);
KEY2842:
	local[7]= (pointer)get_sym_func(fqv[8]);
	local[8]= argv[0];
	local[9]= *(ovafptr(argv[1],fqv[9]));
	local[10]= fqv[10];
	local[11]= argv[2];
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)APPLY(ctx,6,local+7); /*apply*/
	argv[0]->c.obj.iv[20] = local[1];
	argv[0]->c.obj.iv[21] = local[2];
	local[7]= loadglobal(fqv[21]);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,1,local+7); /*instantiate*/
	local[7]= w;
	local[8]= (pointer)get_sym_func(fqv[22]);
	local[9]= local[7];
	local[10]= fqv[10];
	local[11]= fqv[23];
	local[12]= argv[0];
	local[13]= fqv[24];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	local[13]= fqv[25];
	local[14]= argv[0];
	local[15]= fqv[26];
	local[16]= argv[0];
	local[17]= fqv[27];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	local[17]= makeint((eusinteger_t)2L);
	ctx->vsp=local+18;
	w=(*ftab[5])(ctx,2,local+16,&ftab[5],fqv[28]); /*matrix-column*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)VMINUS(ctx,1,local+16); /*v-*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= w;
	local[15]= fqv[29];
	local[16]= local[3];
	local[17]= fqv[30];
	local[18]= local[4];
	local[19]= fqv[31];
	local[20]= local[5];
	local[21]= fqv[32];
	local[22]= local[6];
	local[23]= fqv[33];
	local[24]= makeflt(1.0000000000000000000000e+00);
	local[25]= local[0];
	ctx->vsp=local+26;
	w=(pointer)APPLY(ctx,18,local+8); /*apply*/
	w = local[7];
	argv[0]->c.obj.iv[18] = w;
	local[7]= argv[0]->c.obj.iv[18];
	local[8]= fqv[33];
	local[9]= local[4];
	local[10]= local[1];
	local[11]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,3,local+9); /***/
	local[9]= w;
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	local[10]= local[4];
	local[11]= local[2];
	local[12]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,3,local+10); /***/
	local[10]= w;
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= argv[0];
	local[8]= fqv[34];
	local[9]= argv[0]->c.obj.iv[18];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= argv[0];
	local[8]= fqv[35];
	local[9]= makeint((eusinteger_t)4L);
	local[10]= makeint((eusinteger_t)4L);
	local[11]= local[4];
	local[12]= makeint((eusinteger_t)0L);
	local[13]= local[1];
	local[14]= makeint((eusinteger_t)2L);
	ctx->vsp=local+15;
	w=(pointer)QUOTIENT(ctx,2,local+13); /*/*/
	local[13]= w;
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(pointer)MKFLTVEC(ctx,4,local+11); /*float-vector*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)0L);
	local[13]= local[4];
	local[14]= local[2];
	local[15]= makeint((eusinteger_t)2L);
	ctx->vsp=local+16;
	w=(pointer)QUOTIENT(ctx,2,local+14); /*/*/
	local[14]= w;
	local[15]= makeint((eusinteger_t)0L);
	ctx->vsp=local+16;
	w=(pointer)MKFLTVEC(ctx,4,local+12); /*float-vector*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)0L);
	local[14]= makeint((eusinteger_t)0L);
	local[15]= makeint((eusinteger_t)1L);
	local[16]= makeint((eusinteger_t)0L);
	ctx->vsp=local+17;
	w=(pointer)MKFLTVEC(ctx,4,local+13); /*float-vector*/
	local[13]= w;
	local[14]= makeint((eusinteger_t)0L);
	local[15]= makeint((eusinteger_t)0L);
	local[16]= makeint((eusinteger_t)0L);
	local[17]= makeint((eusinteger_t)1L);
	ctx->vsp=local+18;
	w=(pointer)MKFLTVEC(ctx,4,local+14); /*float-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,4,local+11); /*list*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[6])(ctx,3,local+9,&ftab[6],fqv[36]); /*make-matrix*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	w = argv[0];
	local[0]= w;
BLK2835:
	ctx->vsp=local; return(local[0]);}

/*:create-viewer*/
static pointer M2844camera_model_create_viewer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2847;}
	local[0]= NIL;
ENT2847:
ENT2846:
	if (n>3) maerror();
	local[1]= fqv[37];
	ctx->vsp=local+2;
	w=(pointer)BOUNDP(ctx,1,local+1); /*boundp*/
	if (w!=NIL) goto IF2848;
	ctx->vsp=local+1;
	w=(*ftab[7])(ctx,0,local+1,&ftab[7],fqv[38]); /*make-irtviewer*/
	local[1]= w;
	goto IF2849;
IF2848:
	local[1]= NIL;
IF2849:
	if (local[0]!=NIL) goto IF2850;
	local[1]= fqv[39];
	local[2]= argv[0]->c.obj.iv[20];
	local[3]= fqv[40];
	local[4]= argv[0]->c.obj.iv[21];
	local[5]= fqv[41];
	local[6]= argv[0];
	local[7]= fqv[41];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= fqv[42];
	local[8]= loadglobal(fqv[43]);
	ctx->vsp=local+9;
	w=(pointer)INSTANTIATE(ctx,1,local+8); /*instantiate*/
	local[8]= w;
	local[9]= local[8];
	local[10]= fqv[44];
	local[11]= fqv[45];
	local[12]= loadglobal(fqv[37]);
	local[13]= fqv[46];
	local[14]= fqv[42];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= *(ovafptr(w,fqv[47]));
	local[13]= fqv[48];
	local[14]= NIL;
	local[15]= fqv[49];
	local[16]= argv[0];
	local[17]= fqv[6];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)XFORMAT(ctx,3,local+14); /*format*/
	local[14]= w;
	local[15]= fqv[50];
	local[16]= argv[0]->c.obj.iv[20];
	local[17]= fqv[51];
	local[18]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,10,local+9); /*send*/
	w = local[8];
	local[8]= w;
	local[9]= fqv[48];
	local[10]= NIL;
	local[11]= fqv[52];
	local[12]= argv[0];
	local[13]= fqv[6];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,3,local+10); /*format*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[8])(ctx,10,local+1,&ftab[8],fqv[53]); /*view*/
	local[0] = w;
	local[1]= local[0];
	local[2]= fqv[42];
	local[3]= fqv[54];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= makeflt(9.9999999999999977795540e-02);
	local[2]= makeflt(9.9999999999999977795540e-02);
	local[3]= makeflt(9.9999999999999977795540e-02);
	local[4]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,4,local+1); /*float-vector*/
	local[1]= w;
	local[2]= makeflt(1.0000000000000000000000e+00);
	local[3]= makeflt(1.0000000000000000000000e+00);
	local[4]= makeflt(1.0000000000000000000000e+00);
	local[5]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,4,local+2); /*float-vector*/
	local[2]= w;
	local[3]= makeflt(9.9999999999999977795540e-02);
	local[4]= makeflt(9.9999999999999977795540e-02);
	local[5]= makeflt(9.9999999999999977795540e-02);
	local[6]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,4,local+3); /*float-vector*/
	local[3]= w;
	local[4]= makeflt(1.0000000000000000000000e+00);
	local[5]= makeflt(6.9999999999999973354647e-01);
	local[6]= makeflt(3.9999999999999991118216e-01);
	local[7]= makeflt(2.5000000000000000000000e-01);
	local[8]= NIL;
	local[9]= NIL;
	local[10]= NIL;
	local[11]= NIL;
	local[12]= loadglobal(fqv[55]);
	ctx->vsp=local+13;
	w=(pointer)INSTANTIATE(ctx,1,local+12); /*instantiate*/
	local[12]= w;
	local[13]= local[12];
	local[14]= fqv[44];
	local[15]= makeint((eusinteger_t)0L);
	local[16]= fqv[56];
	local[17]= local[4];
	local[18]= local[1];
	ctx->vsp=local+19;
	w=(pointer)SCALEVEC(ctx,2,local+17); /*scale*/
	local[17]= w;
	local[18]= fqv[57];
	local[19]= local[4];
	local[20]= local[2];
	ctx->vsp=local+21;
	w=(pointer)SCALEVEC(ctx,2,local+19); /*scale*/
	local[19]= w;
	local[20]= fqv[58];
	local[21]= local[4];
	local[22]= local[3];
	ctx->vsp=local+23;
	w=(pointer)SCALEVEC(ctx,2,local+21); /*scale*/
	local[21]= w;
	local[22]= fqv[59];
	local[23]= makeflt(4.0000000000000000000000e+03);
	local[24]= makeflt(3.0000000000000000000000e+03);
	local[25]= makeflt(0.0000000000000000000000e+00);
	local[26]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+27;
	w=(pointer)MKFLTVEC(ctx,4,local+23); /*float-vector*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)SEND(ctx,11,local+13); /*send*/
	w = local[12];
	local[8] = w;
	local[12]= loadglobal(fqv[55]);
	ctx->vsp=local+13;
	w=(pointer)INSTANTIATE(ctx,1,local+12); /*instantiate*/
	local[12]= w;
	local[13]= local[12];
	local[14]= fqv[44];
	local[15]= makeint((eusinteger_t)1L);
	local[16]= fqv[56];
	local[17]= local[5];
	local[18]= local[1];
	ctx->vsp=local+19;
	w=(pointer)SCALEVEC(ctx,2,local+17); /*scale*/
	local[17]= w;
	local[18]= fqv[57];
	local[19]= local[5];
	local[20]= local[2];
	ctx->vsp=local+21;
	w=(pointer)SCALEVEC(ctx,2,local+19); /*scale*/
	local[19]= w;
	local[20]= fqv[58];
	local[21]= local[5];
	local[22]= local[3];
	ctx->vsp=local+23;
	w=(pointer)SCALEVEC(ctx,2,local+21); /*scale*/
	local[21]= w;
	local[22]= fqv[59];
	local[23]= makeflt(-4.0000000000000000000000e+03);
	local[24]= makeflt(-2.0000000000000000000000e+03);
	local[25]= makeflt(-2.0000000000000000000000e+03);
	local[26]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+27;
	w=(pointer)MKFLTVEC(ctx,4,local+23); /*float-vector*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)SEND(ctx,11,local+13); /*send*/
	w = local[12];
	local[9] = w;
	local[12]= loadglobal(fqv[55]);
	ctx->vsp=local+13;
	w=(pointer)INSTANTIATE(ctx,1,local+12); /*instantiate*/
	local[12]= w;
	local[13]= local[12];
	local[14]= fqv[44];
	local[15]= makeint((eusinteger_t)2L);
	local[16]= fqv[56];
	local[17]= local[6];
	local[18]= local[1];
	ctx->vsp=local+19;
	w=(pointer)SCALEVEC(ctx,2,local+17); /*scale*/
	local[17]= w;
	local[18]= fqv[57];
	local[19]= local[6];
	local[20]= local[2];
	ctx->vsp=local+21;
	w=(pointer)SCALEVEC(ctx,2,local+19); /*scale*/
	local[19]= w;
	local[20]= fqv[58];
	local[21]= local[6];
	local[22]= local[3];
	ctx->vsp=local+23;
	w=(pointer)SCALEVEC(ctx,2,local+21); /*scale*/
	local[21]= w;
	local[22]= fqv[59];
	local[23]= makeflt(-2.0000000000000000000000e+03);
	local[24]= makeflt(-2.0000000000000000000000e+03);
	local[25]= makeflt(2.5000000000000000000000e+03);
	local[26]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+27;
	w=(pointer)MKFLTVEC(ctx,4,local+23); /*float-vector*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)SEND(ctx,11,local+13); /*send*/
	w = local[12];
	local[10] = w;
	local[12]= loadglobal(fqv[55]);
	ctx->vsp=local+13;
	w=(pointer)INSTANTIATE(ctx,1,local+12); /*instantiate*/
	local[12]= w;
	local[13]= local[12];
	local[14]= fqv[44];
	local[15]= makeint((eusinteger_t)3L);
	local[16]= fqv[56];
	local[17]= local[7];
	local[18]= local[1];
	ctx->vsp=local+19;
	w=(pointer)SCALEVEC(ctx,2,local+17); /*scale*/
	local[17]= w;
	local[18]= fqv[57];
	local[19]= local[7];
	local[20]= local[2];
	ctx->vsp=local+21;
	w=(pointer)SCALEVEC(ctx,2,local+19); /*scale*/
	local[19]= w;
	local[20]= fqv[58];
	local[21]= local[7];
	local[22]= local[3];
	ctx->vsp=local+23;
	w=(pointer)SCALEVEC(ctx,2,local+21); /*scale*/
	local[21]= w;
	local[22]= fqv[59];
	local[23]= makeflt(0.0000000000000000000000e+00);
	local[24]= makeflt(0.0000000000000000000000e+00);
	local[25]= makeflt(0.0000000000000000000000e+00);
	local[26]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+27;
	w=(pointer)MKFLTVEC(ctx,4,local+23); /*float-vector*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)SEND(ctx,11,local+13); /*send*/
	w = local[12];
	local[11] = w;
	local[12]= local[8];
	local[13]= fqv[60];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= local[9];
	local[13]= fqv[60];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= local[10];
	local[13]= fqv[60];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= local[11];
	local[13]= fqv[60];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[1]= w;
	goto IF2851;
IF2850:
	local[1]= NIL;
IF2851:
	argv[0]->c.obj.iv[19] = local[0];
	w = argv[0]->c.obj.iv[19];
	local[0]= w;
BLK2845:
	ctx->vsp=local; return(local[0]);}

/*:width*/
static pointer M2857camera_model_width(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[20];
	local[0]= w;
BLK2858:
	ctx->vsp=local; return(local[0]);}

/*:height*/
static pointer M2859camera_model_height(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[21];
	local[0]= w;
BLK2860:
	ctx->vsp=local; return(local[0]);}

/*:viewing*/
static pointer M2861camera_model_viewing(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2863:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[18];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[9])(ctx,2,local+1,&ftab[9],fqv[61]); /*forward-message-to*/
	local[0]= w;
BLK2862:
	ctx->vsp=local; return(local[0]);}

/*:image-viewer*/
static pointer M2864camera_model_image_viewer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2866:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[19];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[9])(ctx,2,local+1,&ftab[9],fqv[61]); /*forward-message-to*/
	local[0]= w;
BLK2865:
	ctx->vsp=local; return(local[0]);}

/*:fovy*/
static pointer M2867camera_model_fovy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[18];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)2L);
	local[2]= argv[0]->c.obj.iv[20];
	local[3]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[2]= w;
	local[3]= local[0];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,3,local+3); /*aref*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[10])(ctx,2,local+2,&ftab[10],fqv[63]); /*atan2*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[0]= w;
BLK2868:
	ctx->vsp=local; return(local[0]);}

/*:cx*/
static pointer M2869camera_model_cx(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[18];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)AREF(ctx,3,local+1); /*aref*/
	local[0]= w;
BLK2870:
	ctx->vsp=local; return(local[0]);}

/*:cy*/
static pointer M2871camera_model_cy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[18];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)1L);
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)AREF(ctx,3,local+1); /*aref*/
	local[0]= w;
BLK2872:
	ctx->vsp=local; return(local[0]);}

/*:fx*/
static pointer M2873camera_model_fx(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[18];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)AREF(ctx,3,local+1); /*aref*/
	local[0]= w;
BLK2874:
	ctx->vsp=local; return(local[0]);}

/*:fy*/
static pointer M2875camera_model_fy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[18];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)1L);
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)AREF(ctx,3,local+1); /*aref*/
	local[0]= w;
BLK2876:
	ctx->vsp=local; return(local[0]);}

/*:screen-point*/
static pointer M2877camera_model_screen_point(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[18];
	local[3]= fqv[64];
	local[4]= argv[0]->c.obj.iv[18];
	local[5]= fqv[65];
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[0] = w;
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)AREF(ctx,2,local+2); /*aref*/
	local[1] = w;
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)1L);
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)SUBSEQ(ctx,3,local+2); /*subseq*/
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK2878;
	w = local[2];
	local[0]= w;
BLK2878:
	ctx->vsp=local; return(local[0]);}

/*:3d-point*/
static pointer M2879camera_model_3d_point(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0]->c.obj.iv[18];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)AREF(ctx,3,local+1); /*aref*/
	local[1]= w;
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)1L);
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)AREF(ctx,3,local+2); /*aref*/
	local[2]= w;
	local[3]= local[0];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,3,local+3); /*aref*/
	local[3]= w;
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)3L);
	ctx->vsp=local+7;
	w=(pointer)AREF(ctx,3,local+4); /*aref*/
	local[4]= w;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)4L);
	local[6]= makeint((eusinteger_t)4L);
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,1,local+10); /*-*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,4,local+7); /*list*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)0L);
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)MINUS(ctx,1,local+11); /*-*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,4,local+8); /*list*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,4,local+9); /*list*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	local[12]= makeflt(-1.0000000000000000000000e+00);
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,4,local+10); /*list*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,4,local+7); /*list*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[6])(ctx,3,local+5,&ftab[6],fqv[36]); /*make-matrix*/
	local[5]= w;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= local[5];
	local[9]= argv[2];
	local[10]= argv[3];
	local[11]= argv[4];
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)MKFLTVEC(ctx,4,local+9); /*float-vector*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TRANSFORM(ctx,2,local+8); /*transform*/
	local[6] = w;
	local[8]= local[6];
	local[9]= makeint((eusinteger_t)3L);
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[7] = w;
	local[8]= makeflt(1.0000000000000000000000e+00);
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)QUOTIENT(ctx,2,local+8); /*/*/
	local[8]= w;
	local[9]= local[6];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)3L);
	ctx->vsp=local+12;
	w=(pointer)SUBSEQ(ctx,3,local+9); /*subseq*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SCALEVEC(ctx,2,local+8); /*scale*/
	local[0]= w;
BLK2880:
	ctx->vsp=local; return(local[0]);}

/*:ray*/
static pointer M2881camera_model_ray(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= argv[0]->c.obj.iv[18];
	local[5]= fqv[62];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[4];
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,3,local+5); /*aref*/
	local[5]= w;
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= local[4];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)3L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= local[4];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)3L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	local[9]= argv[0]->c.obj.iv[18];
	local[10]= fqv[30];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= argv[0]->c.obj.iv[18];
	local[11]= fqv[33];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= argv[2];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[0] = w;
	local[11]= argv[3];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[1] = w;
	local[11]= local[0];
	local[12]= argv[0]->c.obj.iv[20];
	local[13]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[2] = w;
	local[11]= local[1];
	local[12]= argv[0]->c.obj.iv[21];
	local[13]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[3] = w;
	local[11]= argv[0];
	local[12]= fqv[66];
	local[13]= local[10];
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,2,local+13); /***/
	local[13]= w;
	local[14]= local[10];
	local[15]= makeint((eusinteger_t)1L);
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[14]= w;
	local[15]= local[3];
	ctx->vsp=local+16;
	w=(pointer)TIMES(ctx,2,local+14); /***/
	local[14]= w;
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)MKFLTVEC(ctx,3,local+13); /*float-vector*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,3,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[11])(ctx,1,local+11,&ftab[11],fqv[67]); /*normalize-vector*/
	local[0]= w;
BLK2882:
	ctx->vsp=local; return(local[0]);}

/*:draw-on*/
static pointer M2883camera_model_draw_on(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2885:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[68], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY2886;
	local[1] = loadglobal(fqv[69]);
KEY2886:
	local[2]= (pointer)get_sym_func(fqv[22]);
	local[3]= argv[0];
	local[4]= fqv[12];
	local[5]= local[1];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)APPLY(ctx,5,local+2); /*apply*/
	local[0]= w;
BLK2884:
	ctx->vsp=local; return(local[0]);}

/*:draw-sensor*/
static pointer M2887camera_model_draw_sensor(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[70], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY2889;
	local[0] = NIL;
KEY2889:
	if (n & (1<<1)) goto KEY2890;
	local[1] = makeint((eusinteger_t)1L);
KEY2890:
	if (n & (1<<2)) goto KEY2891;
	local[3]= makeint((eusinteger_t)1L);
	local[4]= makeint((eusinteger_t)1L);
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,3,local+3); /*float-vector*/
	local[2] = w;
KEY2891:
	local[3]= argv[0];
	local[4]= fqv[32];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= fqv[31];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[30];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= argv[2];
	local[7]= fqv[42];
	local[8]= fqv[71];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	local[7]= argv[2];
	local[8]= fqv[42];
	local[9]= fqv[72];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= fqv[73];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= local[4];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	local[10]= local[3];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	local[11]= argv[0];
	local[12]= fqv[33];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	local[14]= argv[2];
	local[15]= fqv[42];
	local[16]= fqv[71];
	local[17]= local[1];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,4,local+14); /*send*/
	local[14]= argv[2];
	local[15]= fqv[42];
	local[16]= fqv[72];
	local[17]= local[2];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,4,local+14); /*send*/
	local[14]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+15;
	w=(*ftab[12])(ctx,1,local+14,&ftab[12],fqv[74]); /*gl:gldisable*/
	local[14]= argv[2];
	local[15]= fqv[42];
	local[16]= fqv[75];
	local[17]= argv[0];
	local[18]= fqv[73];
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,2,local+17); /*send*/
	local[17]= w;
	local[18]= argv[0];
	local[19]= fqv[73];
	ctx->vsp=local+20;
	w=(pointer)SEND(ctx,2,local+18); /*send*/
	local[18]= w;
	local[19]= makeint((eusinteger_t)-200L);
	local[20]= argv[0];
	local[21]= fqv[76];
	ctx->vsp=local+22;
	w=(pointer)SEND(ctx,2,local+20); /*send*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)SCALEVEC(ctx,2,local+19); /*scale*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)VPLUS(ctx,2,local+18); /*v+*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,5,local+14); /*send*/
	local[14]= NIL;
	local[15]= local[12];
	w = local[13];
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	local[16]= local[12];
	local[17]= local[13];
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,1,local+17); /*-*/
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	local[17]= local[12];
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,1,local+17); /*-*/
	local[17]= w;
	w = local[13];
	ctx->vsp=local+18;
	local[17]= cons(ctx,local[17],w);
	local[18]= local[12];
	ctx->vsp=local+19;
	w=(pointer)MINUS(ctx,1,local+18); /*-*/
	local[18]= w;
	local[19]= local[13];
	ctx->vsp=local+20;
	w=(pointer)MINUS(ctx,1,local+19); /*-*/
	ctx->vsp=local+19;
	local[18]= cons(ctx,local[18],w);
	ctx->vsp=local+19;
	w=(pointer)LIST(ctx,4,local+15); /*list*/
	local[15]= w;
WHL2893:
	if (local[15]==NIL) goto WHX2894;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15] = (w)->c.cons.cdr;
	w = local[16];
	local[14] = w;
	local[16]= argv[2];
	local[17]= fqv[42];
	local[18]= fqv[75];
	local[19]= argv[0];
	local[20]= fqv[26];
	local[21]= local[10];
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22]= (w)->c.cons.car;
	ctx->vsp=local+23;
	w=(pointer)TIMES(ctx,2,local+21); /***/
	local[21]= w;
	local[22]= local[10];
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[23]= (w)->c.cons.cdr;
	ctx->vsp=local+24;
	w=(pointer)TIMES(ctx,2,local+22); /***/
	local[22]= w;
	local[23]= local[3];
	ctx->vsp=local+24;
	w=(pointer)MKFLTVEC(ctx,3,local+21); /*float-vector*/
	local[21]= w;
	ctx->vsp=local+22;
	w=(pointer)SEND(ctx,3,local+19); /*send*/
	local[19]= w;
	local[20]= argv[0];
	local[21]= fqv[26];
	local[22]= local[9];
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[23]= (w)->c.cons.car;
	ctx->vsp=local+24;
	w=(pointer)TIMES(ctx,2,local+22); /***/
	local[22]= w;
	local[23]= local[9];
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[24]= (w)->c.cons.cdr;
	ctx->vsp=local+25;
	w=(pointer)TIMES(ctx,2,local+23); /***/
	local[23]= w;
	local[24]= local[4];
	ctx->vsp=local+25;
	w=(pointer)MKFLTVEC(ctx,3,local+22); /*float-vector*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)SEND(ctx,3,local+20); /*send*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)SEND(ctx,5,local+16); /*send*/
	goto WHL2893;
WHX2894:
	local[16]= NIL;
BLK2895:
	w = NIL;
	local[14]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+15;
	w=(*ftab[13])(ctx,1,local+14,&ftab[13],fqv[77]); /*gl:glenable*/
	local[14]= argv[2];
	local[15]= fqv[42];
	local[16]= fqv[71];
	local[17]= local[6];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,4,local+14); /*send*/
	local[14]= argv[2];
	local[15]= fqv[42];
	local[16]= fqv[72];
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,4,local+14); /*send*/
	local[14]= argv[2];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(*ftab[3])(ctx,2,local+14,&ftab[3],fqv[17]); /*gl::draw-glbody*/
	if (local[0]==NIL) goto IF2897;
	local[14]= argv[2];
	local[15]= fqv[42];
	local[16]= fqv[78];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= w;
	goto IF2898;
IF2897:
	local[14]= NIL;
IF2898:
	w = local[14];
	local[0]= w;
BLK2888:
	ctx->vsp=local; return(local[0]);}

/*:draw-objects*/
static pointer M2899camera_model_draw_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[0]->c.obj.iv[19]!=NIL) goto IF2901;
	local[0]= argv[0];
	local[1]= fqv[79];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto IF2902;
IF2901:
	local[0]= NIL;
IF2902:
	local[0]= argv[0];
	local[1]= fqv[80];
	local[2]= argv[0]->c.obj.iv[19];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
BLK2900:
	ctx->vsp=local; return(local[0]);}

/*:draw-objects-raw*/
static pointer M2903camera_model_draw_objects_raw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(*ftab[14])(ctx,1,local+2,&ftab[14],fqv[81]); /*x::draw-things*/
	local[2]= w;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= argv[0]->c.obj.iv[18];
	local[6]= fqv[62];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= local[5];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= local[5];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= local[5];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	local[9]= argv[2];
	local[10]= fqv[42];
	local[11]= fqv[54];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= argv[0]->c.obj.iv[20];
	local[10]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+11;
	w=(pointer)GREATERP(ctx,2,local+9); /*>*/
	if (w==NIL) goto IF2905;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= argv[0]->c.obj.iv[20];
	local[11]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+12;
	w=(pointer)MINUS(ctx,2,local+10); /*-*/
	local[10]= w;
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,1,local+10); /*-*/
	local[10]= w;
	local[11]= argv[0]->c.obj.iv[20];
	local[12]= argv[0]->c.obj.iv[20];
	ctx->vsp=local+13;
	w=(*ftab[15])(ctx,4,local+9,&ftab[15],fqv[82]); /*gl:glviewport*/
	local[9]= w;
	goto IF2906;
IF2905:
	local[9]= argv[0]->c.obj.iv[21];
	local[10]= argv[0]->c.obj.iv[20];
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,1,local+9); /*-*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)0L);
	local[11]= argv[0]->c.obj.iv[21];
	local[12]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+13;
	w=(*ftab[15])(ctx,4,local+9,&ftab[15],fqv[82]); /*gl:glviewport*/
	local[9]= w;
IF2906:
	local[9]= makeint((eusinteger_t)5889L);
	ctx->vsp=local+10;
	w=(*ftab[16])(ctx,1,local+9,&ftab[16],fqv[83]); /*gl:glmatrixmode*/
	ctx->vsp=local+9;
	w=(*ftab[17])(ctx,0,local+9,&ftab[17],fqv[84]); /*gl:glloadidentity*/
	local[9]= loadglobal(fqv[85]);
	local[10]= makeint((eusinteger_t)16L);
	ctx->vsp=local+11;
	w=(pointer)INSTANTIATE(ctx,2,local+9); /*instantiate*/
	local[9]= w;
	local[10]= local[9];
	local[11]= makeint((eusinteger_t)0L);
	local[12]= makeflt(1.0000000000000000000000e+00);
	local[13]= argv[0];
	local[14]= fqv[86];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	local[14]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+15;
	w=(pointer)QUOTIENT(ctx,2,local+13); /*/*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)TAN(ctx,1,local+13); /*tan*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[9];
	local[11]= makeint((eusinteger_t)5L);
	local[12]= local[9];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[9];
	local[11]= makeint((eusinteger_t)8L);
	local[12]= makeint((eusinteger_t)2L);
	local[13]= argv[0]->c.obj.iv[20];
	ctx->vsp=local+14;
	w=(pointer)SUB1(ctx,1,local+13); /*1-*/
	local[13]= w;
	local[14]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+15;
	w=(pointer)QUOTIENT(ctx,2,local+13); /*/*/
	local[13]= w;
	local[14]= local[6];
	ctx->vsp=local+15;
	w=(pointer)MINUS(ctx,2,local+13); /*-*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	local[13]= argv[0]->c.obj.iv[20];
	local[14]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+15;
	w=(pointer)GREATERP(ctx,2,local+13); /*>*/
	if (w==NIL) goto IF2907;
	local[13]= argv[0]->c.obj.iv[20];
	goto IF2908;
IF2907:
	local[13]= argv[0]->c.obj.iv[21];
IF2908:
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[9];
	local[11]= makeint((eusinteger_t)9L);
	local[12]= makeint((eusinteger_t)-2L);
	local[13]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+14;
	w=(pointer)SUB1(ctx,1,local+13); /*1-*/
	local[13]= w;
	local[14]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+15;
	w=(pointer)QUOTIENT(ctx,2,local+13); /*/*/
	local[13]= w;
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)MINUS(ctx,2,local+13); /*-*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	local[13]= argv[0]->c.obj.iv[20];
	local[14]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+15;
	w=(pointer)GREATERP(ctx,2,local+13); /*>*/
	if (w==NIL) goto IF2909;
	local[13]= argv[0]->c.obj.iv[20];
	goto IF2910;
IF2909:
	local[13]= argv[0]->c.obj.iv[21];
IF2910:
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[9];
	local[11]= makeint((eusinteger_t)10L);
	local[12]= argv[0];
	local[13]= fqv[41];
	local[14]= fqv[32];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	local[13]= argv[0];
	local[14]= fqv[41];
	local[15]= fqv[31];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,2,local+12); /*+*/
	local[12]= w;
	local[13]= argv[0];
	local[14]= fqv[41];
	local[15]= fqv[31];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	local[14]= argv[0];
	local[15]= fqv[41];
	local[16]= fqv[32];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)MINUS(ctx,2,local+13); /*-*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[9];
	local[11]= makeint((eusinteger_t)14L);
	local[12]= makeint((eusinteger_t)2L);
	local[13]= argv[0];
	local[14]= fqv[41];
	local[15]= fqv[32];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	local[14]= argv[0];
	local[15]= fqv[41];
	local[16]= fqv[31];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,3,local+12); /***/
	local[12]= w;
	local[13]= argv[0];
	local[14]= fqv[41];
	local[15]= fqv[31];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	local[14]= argv[0];
	local[15]= fqv[41];
	local[16]= fqv[32];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)MINUS(ctx,2,local+13); /*-*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[9];
	local[11]= makeint((eusinteger_t)11L);
	local[12]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[9];
	ctx->vsp=local+11;
	w=(*ftab[18])(ctx,1,local+10,&ftab[18],fqv[87]); /*gl:glmultmatrixd*/
	local[9]= argv[0];
	local[10]= fqv[24];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[3] = w;
	local[9]= local[3];
	local[10]= argv[0];
	local[11]= fqv[41];
	local[12]= fqv[76];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)VMINUS(ctx,2,local+9); /*v-*/
	local[4] = w;
	local[9]= loadglobal(fqv[88]);
	local[10]= local[3];
	local[11]= local[4];
	local[12]= argv[0];
	local[13]= fqv[41];
	local[14]= fqv[29];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)VMINUS(ctx,1,local+12); /*v-*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)CONCATENATE(ctx,4,local+9); /*concatenate*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[19])(ctx,1,local+9,&ftab[19],fqv[89]); /*gl:glulookatfv*/
	local[9]= makeint((eusinteger_t)5888L);
	ctx->vsp=local+10;
	w=(*ftab[16])(ctx,1,local+9,&ftab[16],fqv[83]); /*gl:glmatrixmode*/
	local[9]= argv[2];
	local[10]= fqv[42];
	local[11]= fqv[90];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= argv[2];
	local[10]= fqv[42];
	local[11]= fqv[72];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[1] = w;
	local[9]= argv[2];
	local[10]= fqv[42];
	local[11]= fqv[72];
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	local[9]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,1,local+9,&ftab[13],fqv[77]); /*gl:glenable*/
	local[9]= NIL;
	local[10]= local[2];
WHL2912:
	if (local[10]==NIL) goto WHX2913;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10] = (w)->c.cons.cdr;
	w = local[11];
	local[9] = w;
	local[11]= local[9];
	local[12]= fqv[91];
	ctx->vsp=local+13;
	w=(*ftab[20])(ctx,2,local+11,&ftab[20],fqv[92]); /*find-method*/
	if (w==NIL) goto CON2917;
	local[11]= local[9];
	local[12]= fqv[91];
	local[13]= argv[2];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,3,local+11); /*send*/
	local[11]= w;
	goto CON2916;
CON2917:
	local[11]= local[9];
	local[12]= loadglobal(fqv[93]);
	ctx->vsp=local+13;
	w=(pointer)DERIVEDP(ctx,2,local+11); /*derivedp*/
	if (w==NIL) goto CON2918;
	local[11]= argv[2];
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(*ftab[3])(ctx,2,local+11,&ftab[3],fqv[17]); /*gl::draw-glbody*/
	local[11]= w;
	goto CON2916;
CON2918:
	local[11]= local[9];
	local[12]= fqv[94];
	ctx->vsp=local+13;
	w=(*ftab[20])(ctx,2,local+11,&ftab[20],fqv[92]); /*find-method*/
	if (w==NIL) goto CON2919;
	local[11]= local[9];
	local[12]= fqv[94];
	local[13]= fqv[46];
	local[14]= argv[2];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,4,local+11); /*send*/
	local[11]= w;
	goto CON2916;
CON2919:
	local[11]= fqv[95];
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(*ftab[0])(ctx,2,local+11,&ftab[0],fqv[1]); /*warn*/
	local[11]= w;
	goto CON2916;
CON2920:
	local[11]= NIL;
CON2916:
	goto WHL2912;
WHX2913:
	local[11]= NIL;
BLK2914:
	w = NIL;
	local[9]= argv[2];
	local[10]= fqv[42];
	local[11]= fqv[78];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[0]= w;
BLK2904:
	ctx->vsp=local; return(local[0]);}

/*:get-image*/
static pointer M2921camera_model_get_image(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[96], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY2923;
	local[0] = NIL;
KEY2923:
	if (n & (1<<1)) goto KEY2924;
	local[1] = NIL;
KEY2924:
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	if (local[0]==NIL) goto IF2925;
	local[6]= argv[0]->c.obj.iv[20];
	local[7]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+8;
	w=(pointer)TIMES(ctx,2,local+6); /***/
	local[6]= w;
	local[7]= makeint((eusinteger_t)3L);
	ctx->vsp=local+8;
	w=(*ftab[6])(ctx,2,local+6,&ftab[6],fqv[36]); /*make-matrix*/
	local[2] = w;
	local[6]= local[2];
	goto IF2926;
IF2925:
	local[6]= NIL;
IF2926:
	if (local[1]==NIL) goto IF2927;
	local[6]= argv[0]->c.obj.iv[20];
	local[7]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+8;
	w=(pointer)TIMES(ctx,2,local+6); /***/
	local[6]= w;
	local[7]= makeint((eusinteger_t)3L);
	ctx->vsp=local+8;
	w=(*ftab[6])(ctx,2,local+6,&ftab[6],fqv[36]); /*make-matrix*/
	local[3] = w;
	local[6]= local[3];
	goto IF2928;
IF2927:
	local[6]= NIL;
IF2928:
	local[6]= argv[0];
	local[7]= fqv[97];
	local[8]= argv[0]->c.obj.iv[19];
	local[9]= fqv[98];
	local[10]= local[2];
	local[11]= fqv[99];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,7,local+6); /*send*/
	local[4] = w;
	if (local[0]==NIL) goto CON2930;
	if (local[1]==NIL) goto CON2930;
	local[6]= loadglobal(fqv[100]);
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,1,local+6); /*instantiate*/
	local[6]= w;
	local[7]= local[6];
	local[8]= fqv[10];
	local[9]= fqv[51];
	local[10]= argv[0]->c.obj.iv[21];
	local[11]= fqv[50];
	local[12]= argv[0]->c.obj.iv[20];
	local[13]= fqv[98];
	local[14]= local[2];
	local[15]= fqv[99];
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,10,local+7); /*send*/
	w = local[6];
	local[5] = w;
	local[6]= local[5];
	goto CON2929;
CON2930:
	if (local[0]==NIL) goto CON2932;
	local[6]= loadglobal(fqv[100]);
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,1,local+6); /*instantiate*/
	local[6]= w;
	local[7]= local[6];
	local[8]= fqv[10];
	local[9]= fqv[51];
	local[10]= argv[0]->c.obj.iv[21];
	local[11]= fqv[50];
	local[12]= argv[0]->c.obj.iv[20];
	local[13]= fqv[98];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,8,local+7); /*send*/
	w = local[6];
	local[5] = w;
	local[6]= local[5];
	goto CON2929;
CON2932:
	local[6]= NIL;
CON2929:
	if (local[0]==NIL) goto IF2934;
	local[6]= local[4];
	w = local[5];
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	goto IF2935;
IF2934:
	local[6]= local[4];
IF2935:
	w = local[6];
	local[0]= w;
BLK2922:
	ctx->vsp=local; return(local[0]);}

/*:get-image-raw*/
static pointer M2936camera_model_get_image_raw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[101], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY2938;
	local[0] = NIL;
KEY2938:
	if (n & (1<<1)) goto KEY2939;
	local[1] = NIL;
KEY2939:
	local[2]= argv[2];
	local[3]= fqv[42];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[50];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= local[2];
	local[5]= fqv[51];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[102];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[103];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[3];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	local[8]= argv[0]->c.obj.iv[18];
	local[9]= fqv[86];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= argv[0]->c.obj.iv[18];
	local[10]= fqv[31];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= argv[0]->c.obj.iv[18];
	local[11]= fqv[32];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= local[4];
	local[12]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	local[12]= local[8];
	local[13]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)TAN(ctx,1,local+12); /*tan*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)0L);
	local[13]= makeint((eusinteger_t)0L);
	local[14]= makeint((eusinteger_t)0L);
	local[15]= makeint((eusinteger_t)0L);
	local[16]= makeint((eusinteger_t)0L);
	ctx->vsp=local+17;
	w=(pointer)MKFLTVEC(ctx,3,local+14); /*float-vector*/
	local[14]= w;
	local[15]= makeint((eusinteger_t)0L);
	local[16]= makeint((eusinteger_t)0L);
	local[17]= makeint((eusinteger_t)0L);
	ctx->vsp=local+18;
	w=(pointer)MKFLTVEC(ctx,3,local+15); /*float-vector*/
	local[15]= w;
	local[16]= NIL;
	local[17]= NIL;
	local[18]= NIL;
	local[19]= NIL;
	local[20]= NIL;
	if (local[0]==NIL) goto IF2940;
	local[21]= local[3];
	local[22]= argv[0]->c.obj.iv[20];
	ctx->vsp=local+23;
	w=(pointer)NUMEQUAL(ctx,2,local+21); /*=*/
	if (w==NIL) goto AND2944;
	local[21]= local[4];
	local[22]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+23;
	w=(pointer)NUMEQUAL(ctx,2,local+21); /*=*/
	if (w==NIL) goto AND2944;
	goto IF2942;
AND2944:
	local[21]= fqv[104];
	local[22]= local[3];
	local[23]= argv[0]->c.obj.iv[20];
	local[24]= local[4];
	local[25]= argv[0]->c.obj.iv[21];
	ctx->vsp=local+26;
	w=(*ftab[0])(ctx,5,local+21,&ftab[0],fqv[1]); /*warn*/
	w = NIL;
	ctx->vsp=local+21;
	local[0]=w;
	goto BLK2937;
	goto IF2943;
IF2942:
	local[21]= NIL;
IF2943:
	local[21]= local[7];
	local[22]= fqv[105];
	local[23]= fqv[106];
	ctx->vsp=local+24;
	w=(*ftab[21])(ctx,3,local+21,&ftab[21],fqv[107]); /*make-array*/
	local[19] = w;
	local[16] = local[0]->c.obj.iv[1];
	local[21]= local[16];
	local[22]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+23;
	w=(*ftab[22])(ctx,2,local+21,&ftab[22],fqv[108]); /*fill*/
	if (local[1]==NIL) goto IF2945;
	local[18] = local[1]->c.obj.iv[1];
	local[21]= local[18];
	local[22]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+23;
	w=(*ftab[22])(ctx,2,local+21,&ftab[22],fqv[108]); /*fill*/
	local[21]= w;
	goto IF2946;
IF2945:
	local[21]= NIL;
IF2946:
	goto IF2941;
IF2940:
	local[21]= NIL;
IF2941:
	local[21]= local[2];
	local[22]= fqv[109];
	local[23]= fqv[110];
	local[24]= local[19];
	ctx->vsp=local+25;
	w=(pointer)SEND(ctx,4,local+21); /*send*/
	local[20] = w;
	if (local[0]==NIL) goto IF2947;
	local[21]= local[20];
	local[22]= fqv[111];
	ctx->vsp=local+23;
	w=(pointer)SEND(ctx,2,local+21); /*send*/
	local[17] = w;
	local[21]= makeint((eusinteger_t)0L);
	local[22]= local[4];
WHL2950:
	local[23]= local[21];
	w = local[22];
	if ((eusinteger_t)local[23] >= (eusinteger_t)w) goto WHX2951;
	local[23]= makeint((eusinteger_t)0L);
	local[24]= local[3];
WHL2954:
	local[25]= local[23];
	w = local[24];
	if ((eusinteger_t)local[25] >= (eusinteger_t)w) goto WHX2955;
	local[25]= local[19];
	local[26]= local[13];
	ctx->vsp=local+27;
	w=(pointer)ELT(ctx,2,local+25); /*elt*/
	local[25]= w;
	local[26]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+27;
	w=(pointer)LESSP(ctx,2,local+25); /*<*/
	if (w==NIL) goto IF2957;
	local[25]= local[10];
	local[26]= local[9];
	ctx->vsp=local+27;
	w=(pointer)TIMES(ctx,2,local+25); /***/
	local[25]= w;
	local[26]= local[19];
	local[27]= local[13];
	ctx->vsp=local+28;
	w=(pointer)ELT(ctx,2,local+26); /*elt*/
	local[26]= w;
	local[27]= local[10];
	local[28]= local[9];
	ctx->vsp=local+29;
	w=(pointer)MINUS(ctx,2,local+27); /*-*/
	local[27]= w;
	ctx->vsp=local+28;
	w=(pointer)TIMES(ctx,2,local+26); /***/
	local[26]= w;
	local[27]= local[10];
	ctx->vsp=local+28;
	w=(pointer)MINUS(ctx,2,local+26); /*-*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)QUOTIENT(ctx,2,local+25); /*/*/
	local[25]= w;
	local[26]= makeint((eusinteger_t)3L);
	local[27]= local[4];
	local[28]= local[21];
	local[29]= makeint((eusinteger_t)1L);
	ctx->vsp=local+30;
	w=(pointer)MINUS(ctx,3,local+27); /*-*/
	local[27]= w;
	local[28]= local[3];
	ctx->vsp=local+29;
	w=(pointer)TIMES(ctx,2,local+27); /***/
	local[27]= w;
	local[28]= local[23];
	ctx->vsp=local+29;
	w=(pointer)PLUS(ctx,2,local+27); /*+*/
	local[27]= w;
	ctx->vsp=local+28;
	w=(pointer)TIMES(ctx,2,local+26); /***/
	local[12] = w;
	local[26]= local[14];
	local[27]= makeint((eusinteger_t)0L);
	local[28]= local[5];
	local[29]= local[23];
	ctx->vsp=local+30;
	w=(pointer)MINUS(ctx,2,local+28); /*-*/
	local[28]= w;
	local[29]= local[25];
	local[30]= local[11];
	ctx->vsp=local+31;
	w=(pointer)QUOTIENT(ctx,2,local+29); /*/*/
	local[29]= w;
	ctx->vsp=local+30;
	w=(pointer)TIMES(ctx,2,local+28); /***/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SETELT(ctx,3,local+26); /*setelt*/
	local[26]= local[14];
	local[27]= makeint((eusinteger_t)1L);
	local[28]= local[6];
	local[29]= local[4];
	local[30]= local[21];
	local[31]= makeint((eusinteger_t)1L);
	ctx->vsp=local+32;
	w=(pointer)MINUS(ctx,3,local+29); /*-*/
	local[29]= w;
	ctx->vsp=local+30;
	w=(pointer)MINUS(ctx,2,local+28); /*-*/
	local[28]= w;
	local[29]= local[25];
	local[30]= local[11];
	ctx->vsp=local+31;
	w=(pointer)QUOTIENT(ctx,2,local+29); /*/*/
	local[29]= w;
	ctx->vsp=local+30;
	w=(pointer)TIMES(ctx,2,local+28); /***/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SETELT(ctx,3,local+26); /*setelt*/
	local[26]= local[14];
	local[27]= makeint((eusinteger_t)2L);
	local[28]= local[25];
	ctx->vsp=local+29;
	w=(pointer)MINUS(ctx,1,local+28); /*-*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SETELT(ctx,3,local+26); /*setelt*/
	local[26]= local[16];
	local[27]= local[14];
	local[28]= local[12];
	ctx->vsp=local+29;
	w=(pointer)VECREPLACE(ctx,3,local+26); /*system::vector-replace*/
	if (local[1]==NIL) goto IF2959;
	local[26]= local[15];
	local[27]= makeint((eusinteger_t)0L);
	local[28]= local[17];
	local[29]= local[12];
	local[30]= fqv[112];
	ctx->vsp=local+31;
	w=(pointer)PEEK(ctx,3,local+28); /*system:peek*/
	local[28]= w;
	local[29]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+30;
	w=(pointer)QUOTIENT(ctx,2,local+28); /*/*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SETELT(ctx,3,local+26); /*setelt*/
	local[26]= local[15];
	local[27]= makeint((eusinteger_t)1L);
	local[28]= local[17];
	local[29]= local[12];
	local[30]= makeint((eusinteger_t)1L);
	ctx->vsp=local+31;
	w=(pointer)PLUS(ctx,2,local+29); /*+*/
	local[29]= w;
	local[30]= fqv[112];
	ctx->vsp=local+31;
	w=(pointer)PEEK(ctx,3,local+28); /*system:peek*/
	local[28]= w;
	local[29]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+30;
	w=(pointer)QUOTIENT(ctx,2,local+28); /*/*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SETELT(ctx,3,local+26); /*setelt*/
	local[26]= local[15];
	local[27]= makeint((eusinteger_t)2L);
	local[28]= local[17];
	local[29]= local[12];
	local[30]= makeint((eusinteger_t)2L);
	ctx->vsp=local+31;
	w=(pointer)PLUS(ctx,2,local+29); /*+*/
	local[29]= w;
	local[30]= fqv[112];
	ctx->vsp=local+31;
	w=(pointer)PEEK(ctx,3,local+28); /*system:peek*/
	local[28]= w;
	local[29]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+30;
	w=(pointer)QUOTIENT(ctx,2,local+28); /*/*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SETELT(ctx,3,local+26); /*setelt*/
	local[26]= local[18];
	local[27]= local[15];
	local[28]= local[12];
	ctx->vsp=local+29;
	w=(pointer)VECREPLACE(ctx,3,local+26); /*system::vector-replace*/
	local[26]= w;
	goto IF2960;
IF2959:
	local[26]= NIL;
IF2960:
	w = local[26];
	local[25]= w;
	goto IF2958;
IF2957:
	local[25]= NIL;
IF2958:
	local[25]= local[13];
	local[26]= makeint((eusinteger_t)1L);
	ctx->vsp=local+27;
	w=(pointer)PLUS(ctx,2,local+25); /*+*/
	local[13] = w;
	local[25]= local[23];
	ctx->vsp=local+26;
	w=(pointer)ADD1(ctx,1,local+25); /*1+*/
	local[23] = w;
	goto WHL2954;
WHX2955:
	local[25]= NIL;
BLK2956:
	w = NIL;
	local[23]= local[21];
	ctx->vsp=local+24;
	w=(pointer)ADD1(ctx,1,local+23); /*1+*/
	local[21] = w;
	goto WHL2950;
WHX2951:
	local[23]= NIL;
BLK2952:
	w = NIL;
	local[21]= w;
	goto IF2948;
IF2947:
	local[21]= NIL;
IF2948:
	w = local[20];
	local[0]= w;
BLK2937:
	ctx->vsp=local; return(local[0]);}

/*:select-drawmode*/
static pointer M2961camera_model_select_drawmode(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0]->c.obj.iv[19];
	local[1]= fqv[42];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= *(ovafptr(w,fqv[47]));
	local[1]= NIL;
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(*ftab[14])(ctx,1,local+2,&ftab[14],fqv[81]); /*x::draw-things*/
	local[2]= w;
WHL2964:
	if (local[2]==NIL) goto WHX2965;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[1];
	local[4]= fqv[113];
	ctx->vsp=local+5;
	w=(pointer)GETPROP(ctx,2,local+3); /*get*/
	local[3]= w;
	local[4]= local[1];
	local[5]= fqv[114];
	ctx->vsp=local+6;
	w=(pointer)GETPROP(ctx,2,local+4); /*get*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[23])(ctx,1,local+4,&ftab[23],fqv[115]); /*gl::delete-displaylist-id*/
	local[4]= local[1];
	local[5]= NIL;
	local[6]= fqv[114];
	ctx->vsp=local+7;
	w=(pointer)PUTPROP(ctx,3,local+4); /*putprop*/
	local[4]= argv[2];
	local[5]= local[4];
	if (fqv[116]!=local[5]) goto IF2969;
	local[5]= local[0];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)ASSQ(ctx,2,local+5); /*assq*/
	if (w!=NIL) goto IF2971;
	local[5]= local[1];
	local[6]= local[3];
	local[7]= local[0];
	w = T;
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,2,local+6); /*append*/
	local[6]= w;
	local[7]= fqv[113];
	ctx->vsp=local+8;
	w=(pointer)PUTPROP(ctx,3,local+5); /*putprop*/
	local[5]= w;
	goto IF2972;
IF2971:
	local[5]= NIL;
IF2972:
	goto IF2970;
IF2969:
	if (T==NIL) goto IF2973;
	local[5]= local[1];
	local[6]= NIL;
	local[7]= fqv[113];
	ctx->vsp=local+8;
	w=(pointer)PUTPROP(ctx,3,local+5); /*putprop*/
	local[5]= w;
	goto IF2974;
IF2973:
	local[5]= NIL;
IF2974:
IF2970:
	w = local[5];
	goto WHL2964;
WHX2965:
	local[3]= NIL;
BLK2966:
	w = NIL;
	local[0]= w;
BLK2962:
	ctx->vsp=local; return(local[0]);}

/*make-camera-from-param*/
static pointer F2796make_camera_from_param(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[117], &argv[0], n-0, local+0, 0);
	if (n & (1<<0)) goto KEY2976;
	local[0] = NIL;
KEY2976:
	if (n & (1<<1)) goto KEY2977;
	local[1] = NIL;
KEY2977:
	if (n & (1<<2)) goto KEY2978;
	local[2] = NIL;
KEY2978:
	if (n & (1<<3)) goto KEY2979;
	local[3] = NIL;
KEY2979:
	if (n & (1<<4)) goto KEY2980;
	local[4] = NIL;
KEY2980:
	if (n & (1<<5)) goto KEY2981;
	local[5] = NIL;
KEY2981:
	if (n & (1<<6)) goto KEY2982;
	local[6] = makeint((eusinteger_t)0L);
KEY2982:
	if (n & (1<<7)) goto KEY2983;
	local[7] = makeint((eusinteger_t)0L);
KEY2983:
	if (n & (1<<8)) goto KEY2984;
	local[8] = NIL;
KEY2984:
	if (n & (1<<9)) goto KEY2985;
	local[9] = NIL;
KEY2985:
	if (n & (1<<10)) goto KEY2986;
	local[10] = NIL;
KEY2986:
	local[11]= makeint((eusinteger_t)40L);
	local[12]= makeint((eusinteger_t)30L);
	local[13]= makeint((eusinteger_t)30L);
	ctx->vsp=local+14;
	w=(*ftab[24])(ctx,3,local+11,&ftab[24],fqv[118]); /*make-cube*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)2L);
	local[13]= makeint((eusinteger_t)30L);
	ctx->vsp=local+14;
	w=(*ftab[25])(ctx,2,local+12,&ftab[25],fqv[119]); /*make-cylinder*/
	local[12]= w;
	local[13]= fqv[120];
	local[14]= makeflt(1.5707963267948965579990e+00);
	local[15]= fqv[39];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,4,local+12); /*send*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)13L);
	local[14]= makeint((eusinteger_t)25L);
	ctx->vsp=local+15;
	w=(*ftab[25])(ctx,2,local+13,&ftab[25],fqv[119]); /*make-cylinder*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(*ftab[26])(ctx,3,local+11,&ftab[26],fqv[121]); /*body+*/
	local[11]= w;
	local[12]= NIL;
	local[13]= makeflt(1.0000000000000000000000e+00);
	local[14]= loadglobal(fqv[122]);
	ctx->vsp=local+15;
	w=(pointer)INSTANTIATE(ctx,1,local+14); /*instantiate*/
	local[14]= w;
	local[15]= local[14];
	local[16]= fqv[10];
	local[17]= local[11];
	local[18]= fqv[50];
	local[19]= local[0];
	local[20]= fqv[51];
	local[21]= local[1];
	local[22]= fqv[30];
	local[23]= local[13];
	local[24]= fqv[6];
	local[25]= local[9];
	ctx->vsp=local+26;
	w=(pointer)SEND(ctx,11,local+15); /*send*/
	w = local[14];
	local[12] = w;
	local[14]= *(ovafptr(local[12],fqv[123]));
	local[15]= fqv[33];
	local[16]= local[13];
	local[17]= local[0];
	local[18]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+19;
	w=(pointer)TIMES(ctx,3,local+16); /***/
	local[16]= w;
	local[17]= local[2];
	ctx->vsp=local+18;
	w=(pointer)QUOTIENT(ctx,2,local+16); /*/*/
	local[16]= w;
	local[17]= local[13];
	local[18]= local[1];
	local[19]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+20;
	w=(pointer)TIMES(ctx,3,local+17); /***/
	local[17]= w;
	local[18]= local[3];
	ctx->vsp=local+19;
	w=(pointer)QUOTIENT(ctx,2,local+17); /*/*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,4,local+14); /*send*/
	local[14]= local[12];
	local[15]= fqv[35];
	local[16]= makeint((eusinteger_t)4L);
	local[17]= makeint((eusinteger_t)4L);
	local[18]= local[2];
	local[19]= makeint((eusinteger_t)0L);
	local[20]= local[4];
	local[21]= local[2];
	local[22]= local[6];
	ctx->vsp=local+23;
	w=(pointer)TIMES(ctx,2,local+21); /***/
	local[21]= w;
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	local[19]= makeint((eusinteger_t)0L);
	local[20]= local[3];
	local[21]= local[5];
	local[22]= local[3];
	local[23]= local[7];
	ctx->vsp=local+24;
	w=(pointer)TIMES(ctx,2,local+22); /***/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)MKFLTVEC(ctx,4,local+19); /*float-vector*/
	local[19]= w;
	local[20]= makeint((eusinteger_t)0L);
	local[21]= makeint((eusinteger_t)0L);
	local[22]= makeint((eusinteger_t)1L);
	local[23]= makeint((eusinteger_t)0L);
	ctx->vsp=local+24;
	w=(pointer)MKFLTVEC(ctx,4,local+20); /*float-vector*/
	local[20]= w;
	local[21]= makeint((eusinteger_t)0L);
	local[22]= makeint((eusinteger_t)0L);
	local[23]= makeint((eusinteger_t)0L);
	local[24]= makeint((eusinteger_t)1L);
	ctx->vsp=local+25;
	w=(pointer)MKFLTVEC(ctx,4,local+21); /*float-vector*/
	local[21]= w;
	ctx->vsp=local+22;
	w=(pointer)LIST(ctx,4,local+18); /*list*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[6])(ctx,3,local+16,&ftab[6],fqv[36]); /*make-matrix*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	if (local[8]==NIL) goto IF2988;
	local[14]= local[12];
	local[15]= fqv[124];
	local[16]= local[8];
	local[17]= fqv[125];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= w;
	goto IF2989;
IF2988:
	local[14]= NIL;
IF2989:
	local[14]= local[12];
	local[15]= fqv[126];
	local[16]= local[6];
	ctx->vsp=local+17;
	w=(pointer)MINUS(ctx,1,local+16); /*-*/
	local[16]= w;
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,1,local+17); /*-*/
	local[17]= w;
	local[18]= makeint((eusinteger_t)0L);
	ctx->vsp=local+19;
	w=(pointer)MKFLTVEC(ctx,3,local+16); /*float-vector*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= *(ovafptr(local[12],fqv[123]));
	local[15]= fqv[126];
	local[16]= local[6];
	local[17]= local[7];
	local[18]= makeint((eusinteger_t)0L);
	ctx->vsp=local+19;
	w=(pointer)MKFLTVEC(ctx,3,local+16); /*float-vector*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	if (local[8]==NIL) goto IF2990;
	local[14]= local[8];
	local[15]= fqv[34];
	local[16]= local[12];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= w;
	goto IF2991;
IF2990:
	local[14]= NIL;
IF2991:
	if (local[10]==NIL) goto IF2992;
	local[14]= local[12];
	local[15]= fqv[79];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
	goto IF2993;
IF2992:
	local[14]= NIL;
IF2993:
	w = local[12];
	local[0]= w;
BLK2975:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtsensor(ctx,n,argv,env)
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
	local[0]= fqv[127];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF2994;
	local[0]= fqv[128];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[129],w);
	goto IF2995;
IF2994:
	local[0]= fqv[130];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF2995:
	local[0]= fqv[131];
	local[1]= fqv[132];
	local[2]= fqv[131];
	local[3]= fqv[133];
	local[4]= loadglobal(fqv[134]);
	local[5]= fqv[135];
	local[6]= fqv[136];
	local[7]= fqv[137];
	local[8]= NIL;
	local[9]= fqv[105];
	local[10]= NIL;
	local[11]= fqv[138];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[139];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[27])(ctx,13,local+2,&ftab[27],fqv[140]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2797sensor_model_profile,fqv[141],fqv[131],fqv[142]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2803sensor_model_signal,fqv[143],fqv[131],fqv[144]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2805sensor_model_simulate,fqv[145],fqv[131],fqv[146]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2807sensor_model_read,fqv[147],fqv[131],fqv[148]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2809sensor_model_draw_sensor,fqv[12],fqv[131],fqv[149]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2811sensor_model_init,fqv[10],fqv[131],fqv[150]);
	local[0]= fqv[151];
	local[1]= fqv[132];
	local[2]= fqv[151];
	local[3]= fqv[133];
	local[4]= loadglobal(fqv[131]);
	local[5]= fqv[135];
	local[6]= fqv[152];
	local[7]= fqv[137];
	local[8]= NIL;
	local[9]= fqv[105];
	local[10]= NIL;
	local[11]= fqv[138];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[139];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[27])(ctx,13,local+2,&ftab[27],fqv[140]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2814bumper_model_init,fqv[10],fqv[151],fqv[153]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2819bumper_model_simulate,fqv[145],fqv[151],fqv[154]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2828bumper_model_draw,fqv[91],fqv[151],fqv[155]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2830bumper_model_draw_sensor,fqv[12],fqv[151],fqv[156]);
	local[0]= fqv[122];
	local[1]= fqv[132];
	local[2]= fqv[122];
	local[3]= fqv[133];
	local[4]= loadglobal(fqv[131]);
	local[5]= fqv[135];
	local[6]= fqv[157];
	local[7]= fqv[137];
	local[8]= NIL;
	local[9]= fqv[105];
	local[10]= NIL;
	local[11]= fqv[138];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[139];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[27])(ctx,13,local+2,&ftab[27],fqv[140]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2834camera_model_init,fqv[10],fqv[122],fqv[158]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2844camera_model_create_viewer,fqv[79],fqv[122],fqv[159]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2857camera_model_width,fqv[50],fqv[122],fqv[160]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2859camera_model_height,fqv[51],fqv[122],fqv[161]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2861camera_model_viewing,fqv[41],fqv[122],fqv[162]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2864camera_model_image_viewer,fqv[163],fqv[122],fqv[164]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2867camera_model_fovy,fqv[86],fqv[122],fqv[165]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2869camera_model_cx,fqv[102],fqv[122],fqv[166]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2871camera_model_cy,fqv[103],fqv[122],fqv[167]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2873camera_model_fx,fqv[168],fqv[122],fqv[169]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2875camera_model_fy,fqv[170],fqv[122],fqv[171]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2877camera_model_screen_point,fqv[172],fqv[122],fqv[173]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2879camera_model_3d_point,fqv[174],fqv[122],fqv[175]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2881camera_model_ray,fqv[176],fqv[122],fqv[177]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2883camera_model_draw_on,fqv[94],fqv[122],fqv[178]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2887camera_model_draw_sensor,fqv[12],fqv[122],fqv[179]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2899camera_model_draw_objects,fqv[180],fqv[122],fqv[181]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2903camera_model_draw_objects_raw,fqv[80],fqv[122],fqv[182]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2921camera_model_get_image,fqv[183],fqv[122],fqv[184]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2936camera_model_get_image_raw,fqv[97],fqv[122],fqv[185]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2961camera_model_select_drawmode,fqv[186],fqv[122],fqv[187]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[188],module,F2796make_camera_from_param,fqv[189]);
	local[0]= fqv[190];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF2996;
	local[0]= fqv[191];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[129],w);
	goto IF2997;
IF2996:
	local[0]= fqv[192];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF2997:
	local[0]= fqv[193];
	local[1]= fqv[194];
	ctx->vsp=local+2;
	w=(*ftab[28])(ctx,2,local+0,&ftab[28],fqv[195]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<29; i++) ftab[i]=fcallx;
}
