/* ./irtviewer.c :  entry=irtviewer */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtviewer.h"
#pragma init (register_irtviewer)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtviewer();
extern pointer build_quote_vector();
static int register_irtviewer()
  { add_module_initializer("___irtviewer", ___irtviewer);}

static pointer F2758make_lr_ud_coords();
static pointer F2759draw_things();
static pointer F2760objects();
static pointer F2761make_irtviewer();
static pointer F2762make_irtviewer_dummy();

/*make-lr-ud-coords*/
static pointer F2758make_lr_ud_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	w=(*ftab[0])(ctx,0,local+0,&ftab[0],fqv[0]); /*geometry:make-coords*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[1];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[1])(ctx,1,local+3,&ftab[1],fqv[2]); /*deg2rad*/
	local[3]= w;
	local[4]= fqv[3];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= local[0];
	local[2]= fqv[1];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(*ftab[1])(ctx,1,local+3,&ftab[1],fqv[2]); /*deg2rad*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)MINUS(ctx,1,local+3); /*-*/
	local[3]= w;
	local[4]= fqv[4];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	w = local[0];
	local[0]= w;
BLK2763:
	ctx->vsp=local; return(local[0]);}

/*:draw-circle*/
static pointer M2764geometry_viewer_draw_circle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[5], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY2766;
	local[0] = makeint((eusinteger_t)50L);
KEY2766:
	if (n & (1<<1)) goto KEY2767;
	local[1] = NIL;
KEY2767:
	if (n & (1<<2)) goto KEY2768;
	local[2] = NIL;
KEY2768:
	if (n & (1<<3)) goto KEY2769;
	local[3] = makeflt(6.2831853071795862319959e+00);
KEY2769:
	if (n & (1<<4)) goto KEY2770;
	local[4] = fqv[6];
KEY2770:
	local[5]= makeint((eusinteger_t)16L);
	local[6]= local[3];
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[5];
WHL2772:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX2773;
	local[11]= argv[2];
	local[12]= fqv[7];
	local[13]= local[0];
	local[14]= local[9];
	local[15]= local[6];
	ctx->vsp=local+16;
	w=(pointer)TIMES(ctx,2,local+14); /***/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SIN(ctx,1,local+14); /*sin*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,2,local+13); /***/
	local[13]= w;
	local[14]= local[0];
	local[15]= local[9];
	local[16]= local[6];
	ctx->vsp=local+17;
	w=(pointer)TIMES(ctx,2,local+15); /***/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)COS(ctx,1,local+15); /*cos*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)TIMES(ctx,2,local+14); /***/
	local[14]= w;
	local[15]= makeint((eusinteger_t)0L);
	ctx->vsp=local+16;
	w=(pointer)MKFLTVEC(ctx,3,local+13); /*float-vector*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,3,local+11); /*send*/
	local[8] = w;
	if (local[7]==NIL) goto IF2775;
	local[11]= argv[0];
	local[12]= fqv[8];
	local[13]= local[7];
	local[14]= local[8];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,4,local+11); /*send*/
	local[11]= w;
	goto IF2776;
IF2775:
	local[11]= NIL;
IF2776:
	local[7] = local[8];
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL2772;
WHX2773:
	local[11]= NIL;
BLK2774:
	w = NIL;
	local[9]= argv[2];
	local[10]= fqv[7];
	local[11]= local[0];
	local[12]= local[5];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SIN(ctx,1,local+12); /*sin*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	local[12]= local[0];
	local[13]= local[5];
	local[14]= local[6];
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,2,local+13); /***/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)COS(ctx,1,local+13); /*cos*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)MKFLTVEC(ctx,3,local+11); /*float-vector*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[8] = w;
	if (local[2]==NIL) goto IF2777;
	local[9]= argv[0];
	local[10]= fqv[9];
	local[11]= local[7];
	local[12]= local[8];
	local[13]= T;
	local[14]= NIL;
	local[15]= fqv[10];
	local[16]= local[4];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,8,local+9); /*send*/
	local[9]= w;
	goto IF2778;
IF2777:
	local[9]= argv[0];
	local[10]= fqv[8];
	local[11]= local[7];
	local[12]= local[8];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	local[9]= w;
IF2778:
	if (local[1]==NIL) goto IF2779;
	local[9]= argv[0];
	local[10]= fqv[11];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	goto IF2780;
IF2779:
	local[9]= NIL;
IF2780:
	w = local[9];
	local[0]= w;
BLK2765:
	ctx->vsp=local; return(local[0]);}

/*:draw-objects*/
static pointer M2781geometry_viewer_draw_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2783:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[12]);
	local[2]= argv[0];
	local[3]= fqv[13];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	local[3]= fqv[14];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[0]= w;
BLK2782:
	ctx->vsp=local; return(local[0]);}

/*:create*/
static pointer M2784irtviewer_create(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2786:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[15], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY2787;
	local[1] = fqv[16];
KEY2787:
	if (n & (1<<1)) goto KEY2788;
	local[10]= fqv[17];
	ctx->vsp=local+11;
	w=(pointer)GENSYM(ctx,1,local+10); /*gensym*/
	local[2] = w;
KEY2788:
	if (n & (1<<2)) goto KEY2789;
	local[3] = makeflt(2.0000000000000000000000e+02);
KEY2789:
	if (n & (1<<3)) goto KEY2790;
	local[4] = makeflt(5.0000000000000000000000e+04);
KEY2790:
	if (n & (1<<4)) goto KEY2791;
	local[5] = makeint((eusinteger_t)500L);
KEY2791:
	if (n & (1<<5)) goto KEY2792;
	local[6] = makeint((eusinteger_t)500L);
KEY2792:
	if (n & (1<<6)) goto KEY2793;
	local[7] = makeint((eusinteger_t)150L);
KEY2793:
	if (n & (1<<7)) goto KEY2794;
	local[8] = NIL;
KEY2794:
	if (n & (1<<8)) goto KEY2795;
	local[9] = fqv[18];
KEY2795:
	argv[0]->c.obj.iv[29] = makeint((eusinteger_t)60L);
	argv[0]->c.obj.iv[30] = makeint((eusinteger_t)20L);
	local[10]= makeint((eusinteger_t)700L);
	local[11]= makeint((eusinteger_t)400L);
	local[12]= makeint((eusinteger_t)250L);
	ctx->vsp=local+13;
	w=(pointer)MKFLTVEC(ctx,3,local+10); /*float-vector*/
	argv[0]->c.obj.iv[31] = w;
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)MKFLTVEC(ctx,3,local+10); /*float-vector*/
	argv[0]->c.obj.iv[32] = w;
	argv[0]->c.obj.iv[34] = local[7];
	argv[0]->c.obj.iv[35] = local[8];
	argv[0]->c.obj.iv[36] = local[9];
	local[10]= (pointer)get_sym_func(fqv[19]);
	local[11]= argv[0];
	local[12]= *(ovafptr(argv[1],fqv[20]));
	local[13]= fqv[21];
	local[14]= fqv[22];
	local[15]= local[5];
	local[16]= fqv[23];
	local[17]= local[6];
	local[18]= fqv[24];
	local[19]= local[1];
	local[20]= fqv[25];
	local[21]= fqv[26];
	local[22]= local[0];
	ctx->vsp=local+23;
	w=(pointer)APPLY(ctx,13,local+10); /*apply*/
	local[10]= local[4];
	storeglobal(fqv[27],local[10]);
	local[10]= local[3];
	storeglobal(fqv[28],local[10]);
	local[10]= (pointer)get_sym_func(fqv[29]);
	local[11]= fqv[30];
	local[12]= argv[0];
	local[13]= fqv[31];
	local[14]= makeint((eusinteger_t)0L);
	local[15]= fqv[4];
	local[16]= makeint((eusinteger_t)0L);
	local[17]= fqv[22];
	local[18]= local[5];
	local[19]= fqv[23];
	local[20]= local[6];
	local[21]= fqv[24];
	local[22]= local[1];
	local[23]= fqv[32];
	local[24]= local[2];
	local[25]= local[0];
	ctx->vsp=local+26;
	w=(pointer)APPLY(ctx,16,local+10); /*apply*/
	argv[0]->c.obj.iv[25] = w;
	local[10]= argv[0]->c.obj.iv[25];
	local[11]= argv[0];
	local[12]= fqv[13];
	ctx->vsp=local+13;
	w=(pointer)PUTPROP(ctx,3,local+10); /*putprop*/
	local[10]= argv[0]->c.obj.iv[25];
	storeglobal(fqv[33],local[10]);
	local[10]= makeflt(9.9999999999999977795540e-02);
	local[11]= makeflt(9.9999999999999977795540e-02);
	local[12]= makeflt(9.9999999999999977795540e-02);
	local[13]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+14;
	w=(pointer)MKFLTVEC(ctx,4,local+10); /*float-vector*/
	local[10]= w;
	local[11]= makeflt(1.0000000000000000000000e+00);
	local[12]= makeflt(1.0000000000000000000000e+00);
	local[13]= makeflt(1.0000000000000000000000e+00);
	local[14]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+15;
	w=(pointer)MKFLTVEC(ctx,4,local+11); /*float-vector*/
	local[11]= w;
	local[12]= makeflt(9.9999999999999977795540e-02);
	local[13]= makeflt(9.9999999999999977795540e-02);
	local[14]= makeflt(9.9999999999999977795540e-02);
	local[15]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+16;
	w=(pointer)MKFLTVEC(ctx,4,local+12); /*float-vector*/
	local[12]= w;
	local[13]= makeflt(1.0000000000000000000000e+00);
	local[14]= makeflt(6.9999999999999973354647e-01);
	local[15]= makeflt(3.9999999999999991118216e-01);
	local[16]= makeflt(2.5000000000000000000000e-01);
	local[17]= loadglobal(fqv[34]);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,1,local+17); /*instantiate*/
	local[17]= w;
	local[18]= local[17];
	local[19]= fqv[21];
	local[20]= makeint((eusinteger_t)0L);
	local[21]= fqv[35];
	local[22]= local[13];
	local[23]= local[10];
	ctx->vsp=local+24;
	w=(pointer)SCALEVEC(ctx,2,local+22); /*scale*/
	local[22]= w;
	local[23]= fqv[36];
	local[24]= local[13];
	local[25]= local[11];
	ctx->vsp=local+26;
	w=(pointer)SCALEVEC(ctx,2,local+24); /*scale*/
	local[24]= w;
	local[25]= fqv[37];
	local[26]= local[13];
	local[27]= local[12];
	ctx->vsp=local+28;
	w=(pointer)SCALEVEC(ctx,2,local+26); /*scale*/
	local[26]= w;
	local[27]= fqv[38];
	local[28]= makeflt(4.0000000000000000000000e+03);
	local[29]= makeflt(3.0000000000000000000000e+03);
	local[30]= makeflt(0.0000000000000000000000e+00);
	local[31]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+32;
	w=(pointer)MKFLTVEC(ctx,4,local+28); /*float-vector*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SEND(ctx,11,local+18); /*send*/
	w = local[17];
	local[17]= w;
	storeglobal(fqv[39],w);
	local[17]= loadglobal(fqv[34]);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,1,local+17); /*instantiate*/
	local[17]= w;
	local[18]= local[17];
	local[19]= fqv[21];
	local[20]= makeint((eusinteger_t)1L);
	local[21]= fqv[35];
	local[22]= local[14];
	local[23]= local[10];
	ctx->vsp=local+24;
	w=(pointer)SCALEVEC(ctx,2,local+22); /*scale*/
	local[22]= w;
	local[23]= fqv[36];
	local[24]= local[14];
	local[25]= local[11];
	ctx->vsp=local+26;
	w=(pointer)SCALEVEC(ctx,2,local+24); /*scale*/
	local[24]= w;
	local[25]= fqv[37];
	local[26]= local[14];
	local[27]= local[12];
	ctx->vsp=local+28;
	w=(pointer)SCALEVEC(ctx,2,local+26); /*scale*/
	local[26]= w;
	local[27]= fqv[38];
	local[28]= makeflt(-4.0000000000000000000000e+03);
	local[29]= makeflt(-2.0000000000000000000000e+03);
	local[30]= makeflt(-2.0000000000000000000000e+03);
	local[31]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+32;
	w=(pointer)MKFLTVEC(ctx,4,local+28); /*float-vector*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SEND(ctx,11,local+18); /*send*/
	w = local[17];
	local[17]= w;
	storeglobal(fqv[40],w);
	local[17]= loadglobal(fqv[34]);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,1,local+17); /*instantiate*/
	local[17]= w;
	local[18]= local[17];
	local[19]= fqv[21];
	local[20]= makeint((eusinteger_t)2L);
	local[21]= fqv[35];
	local[22]= local[15];
	local[23]= local[10];
	ctx->vsp=local+24;
	w=(pointer)SCALEVEC(ctx,2,local+22); /*scale*/
	local[22]= w;
	local[23]= fqv[36];
	local[24]= local[15];
	local[25]= local[11];
	ctx->vsp=local+26;
	w=(pointer)SCALEVEC(ctx,2,local+24); /*scale*/
	local[24]= w;
	local[25]= fqv[37];
	local[26]= local[15];
	local[27]= local[12];
	ctx->vsp=local+28;
	w=(pointer)SCALEVEC(ctx,2,local+26); /*scale*/
	local[26]= w;
	local[27]= fqv[38];
	local[28]= makeflt(-2.0000000000000000000000e+03);
	local[29]= makeflt(-2.0000000000000000000000e+03);
	local[30]= makeflt(2.5000000000000000000000e+03);
	local[31]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+32;
	w=(pointer)MKFLTVEC(ctx,4,local+28); /*float-vector*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SEND(ctx,11,local+18); /*send*/
	w = local[17];
	local[17]= w;
	storeglobal(fqv[41],w);
	local[17]= loadglobal(fqv[34]);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,1,local+17); /*instantiate*/
	local[17]= w;
	local[18]= local[17];
	local[19]= fqv[21];
	local[20]= makeint((eusinteger_t)3L);
	local[21]= fqv[35];
	local[22]= local[16];
	local[23]= local[10];
	ctx->vsp=local+24;
	w=(pointer)SCALEVEC(ctx,2,local+22); /*scale*/
	local[22]= w;
	local[23]= fqv[36];
	local[24]= local[16];
	local[25]= local[11];
	ctx->vsp=local+26;
	w=(pointer)SCALEVEC(ctx,2,local+24); /*scale*/
	local[24]= w;
	local[25]= fqv[37];
	local[26]= local[16];
	local[27]= local[12];
	ctx->vsp=local+28;
	w=(pointer)SCALEVEC(ctx,2,local+26); /*scale*/
	local[26]= w;
	local[27]= fqv[38];
	local[28]= makeflt(0.0000000000000000000000e+00);
	local[29]= makeflt(0.0000000000000000000000e+00);
	local[30]= makeflt(0.0000000000000000000000e+00);
	local[31]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+32;
	w=(pointer)MKFLTVEC(ctx,4,local+28); /*float-vector*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)SEND(ctx,11,local+18); /*send*/
	w = local[17];
	local[17]= w;
	storeglobal(fqv[42],w);
	w = local[17];
	local[10]= loadglobal(fqv[39]);
	local[11]= fqv[43];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= loadglobal(fqv[40]);
	local[11]= fqv[43];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= loadglobal(fqv[41]);
	local[11]= fqv[43];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= loadglobal(fqv[42]);
	local[11]= fqv[43];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= argv[0]->c.obj.iv[25];
	local[11]= fqv[44];
	local[12]= fqv[45];
	local[13]= fqv[46];
	local[14]= fqv[47];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,6,local+10); /*send*/
	local[10]= argv[0]->c.obj.iv[25];
	local[11]= fqv[44];
	local[12]= fqv[45];
	local[13]= fqv[48];
	local[14]= fqv[49];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,6,local+10); /*send*/
	local[10]= argv[0]->c.obj.iv[25];
	local[11]= fqv[44];
	local[12]= fqv[45];
	local[13]= fqv[50];
	local[14]= fqv[51];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,6,local+10); /*send*/
	local[10]= argv[0]->c.obj.iv[25];
	local[11]= fqv[44];
	local[12]= fqv[45];
	local[13]= fqv[52];
	local[14]= fqv[51];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,6,local+10); /*send*/
	local[10]= argv[0];
	local[11]= fqv[53];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= argv[0];
	local[11]= fqv[14];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	w = argv[0];
	local[0]= w;
BLK2785:
	ctx->vsp=local; return(local[0]);}

/*:viewer*/
static pointer M2800irtviewer_viewer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2802:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[25];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[54]); /*user::forward-message-to*/
	local[0]= w;
BLK2801:
	ctx->vsp=local; return(local[0]);}

/*:redraw*/
static pointer M2803irtviewer_redraw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[14];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK2804:
	ctx->vsp=local; return(local[0]);}

/*:expose*/
static pointer M2805irtviewer_expose(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[55],w);
	local[3]= NIL;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK2806:
	ctx->vsp=local; return(local[0]);}

/*:resize*/
static pointer M2807irtviewer_resize(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	argv[0]->c.obj.iv[5] = argv[2];
	argv[0]->c.obj.iv[6] = argv[3];
	local[0]= argv[0];
	local[1]= *(ovafptr(argv[1],fqv[20]));
	local[2]= fqv[56];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)SENDMESSAGE(ctx,5,local+0); /*send-message*/
	local[0]= argv[0]->c.obj.iv[25];
	local[1]= fqv[44];
	local[2]= fqv[56];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,5,local+0); /*send*/
	local[0]= argv[0]->c.obj.iv[25];
	local[1]= fqv[44];
	local[2]= fqv[57];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[0]->c.obj.iv[25];
	local[1]= fqv[44];
	local[2]= fqv[58];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[2];
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(pointer)MAX(ctx,2,local+0); /*max*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[25];
	local[2]= fqv[59];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[56];
	local[3]= fqv[22];
	local[4]= local[0];
	local[5]= fqv[23];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[6]= w;
	local[7]= fqv[60];
	local[8]= argv[2];
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)QUOTIENT(ctx,2,local+8); /*/*/
	local[8]= w;
	local[9]= fqv[61];
	local[10]= argv[3];
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,10,local+1); /*send*/
	local[0]= argv[0];
	local[1]= fqv[62];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK2808:
	ctx->vsp=local; return(local[0]);}

/*:configurenotify*/
static pointer M2809irtviewer_configurenotify(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[55],w);
	if (loadglobal(fqv[63])==NIL) goto IF2811;
	local[3]= fqv[64];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[3])(ctx,2,local+3,&ftab[3],fqv[65]); /*warn*/
	local[3]= w;
	goto IF2812;
IF2811:
	local[3]= NIL;
IF2812:
	local[3]= argv[0];
	local[4]= loadglobal(fqv[66]);
	local[5]= fqv[22];
	ctx->vsp=local+6;
	w=(pointer)SENDMESSAGE(ctx,3,local+3); /*send-message*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= loadglobal(fqv[66]);
	local[6]= fqv[23];
	ctx->vsp=local+7;
	w=(pointer)SENDMESSAGE(ctx,3,local+4); /*send-message*/
	local[4]= w;
	local[5]= local[3];
	local[6]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+7;
	w=(*ftab[4])(ctx,2,local+5,&ftab[4],fqv[67]); /*/=*/
	if (w!=NIL) goto OR2815;
	local[5]= local[4];
	local[6]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+7;
	w=(*ftab[4])(ctx,2,local+5,&ftab[4],fqv[67]); /*/=*/
	if (w!=NIL) goto OR2815;
	goto IF2813;
OR2815:
	local[5]= argv[0];
	local[6]= fqv[56];
	local[7]= local[3];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,4,local+5); /*send*/
	local[5]= w;
	goto IF2814;
IF2813:
	local[5]= NIL;
IF2814:
	w = local[5];
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK2810:
	ctx->vsp=local; return(local[0]);}

/*:viewtarget*/
static pointer M2816irtviewer_viewtarget(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2819;}
	local[0]= NIL;
ENT2819:
ENT2818:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF2820;
	argv[0]->c.obj.iv[32] = local[0];
	local[1]= argv[0]->c.obj.iv[32];
	goto IF2821;
IF2820:
	local[1]= NIL;
IF2821:
	w = argv[0]->c.obj.iv[32];
	local[0]= w;
BLK2817:
	ctx->vsp=local; return(local[0]);}

/*:viewpoint*/
static pointer M2822irtviewer_viewpoint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2825;}
	local[0]= NIL;
ENT2825:
ENT2824:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF2826;
	argv[0]->c.obj.iv[31] = local[0];
	local[1]= argv[0]->c.obj.iv[31];
	goto IF2827;
IF2826:
	local[1]= NIL;
IF2827:
	w = argv[0]->c.obj.iv[31];
	local[0]= w;
BLK2823:
	ctx->vsp=local; return(local[0]);}

/*:look1*/
static pointer M2828irtviewer_look1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2833;}
	local[0]= argv[0]->c.obj.iv[32];
ENT2833:
	if (n>=4) { local[1]=(argv[3]); goto ENT2832;}
	local[1]= argv[0]->c.obj.iv[29];
ENT2832:
	if (n>=5) { local[2]=(argv[4]); goto ENT2831;}
	local[2]= argv[0]->c.obj.iv[30];
ENT2831:
ENT2830:
	if (n>5) maerror();
	local[3]= local[1];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)F2758make_lr_ud_coords(ctx,2,local+3); /*make-lr-ud-coords*/
	local[3]= w;
	local[4]= local[0];
	local[5]= local[3];
	local[6]= fqv[7];
	local[7]= argv[0]->c.obj.iv[31];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)VMINUS(ctx,2,local+7); /*v-*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)VNORM(ctx,1,local+7); /*norm*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)VPLUS(ctx,2,local+4); /*v+*/
	local[4]= w;
	local[5]= local[3];
	local[6]= fqv[68];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[69];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= argv[0];
	local[7]= fqv[70];
	local[8]= fqv[71];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	if (w==NIL) goto IF2834;
	local[6]= argv[0];
	local[7]= fqv[70];
	local[8]= fqv[71];
	local[9]= fqv[72];
	local[10]= argv[0]->c.obj.iv[31];
	local[11]= local[0];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,7,local+6); /*send*/
	local[6]= w;
	goto IF2835;
IF2834:
	local[6]= NIL;
IF2835:
	w = local[6];
	local[0]= w;
BLK2829:
	ctx->vsp=local; return(local[0]);}

/*:look-all*/
static pointer M2836irtviewer_look_all(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2839;}
	local[0]= NIL;
ENT2839:
ENT2838:
	if (n>3) maerror();
	local[1]= local[0];
	local[2]= loadglobal(fqv[73]);
	ctx->vsp=local+3;
	w=(pointer)DERIVEDP(ctx,2,local+1); /*derivedp*/
	local[1]= w;
	if (w!=NIL) goto CON2840;
CON2841:
	if (local[0]!=NIL) goto CON2842;
	local[1]= argv[0]->c.obj.iv[27];
	local[2]= fqv[74];
	ctx->vsp=local+3;
	w=(*ftab[5])(ctx,2,local+1,&ftab[5],fqv[75]); /*send-all*/
	local[1]= argv[0]->c.obj.iv[27];
	local[2]= fqv[76];
	ctx->vsp=local+3;
	w=(*ftab[5])(ctx,2,local+1,&ftab[5],fqv[75]); /*send-all*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[77]); /*flatten*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[78]); /*geometry:make-bounding-box*/
	local[0] = w;
	local[1]= local[0];
	goto CON2840;
CON2842:
	if (local[0]==NIL) goto CON2843;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F2759draw_things(ctx,1,local+1); /*draw-things*/
	local[1]= w;
	local[2]= fqv[76];
	ctx->vsp=local+3;
	w=(*ftab[5])(ctx,2,local+1,&ftab[5],fqv[75]); /*send-all*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[77]); /*flatten*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[78]); /*geometry:make-bounding-box*/
	local[0] = w;
	local[1]= local[0];
	goto CON2840;
CON2843:
	local[1]= NIL;
CON2840:
	if (local[0]==NIL) goto IF2844;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= local[0];
	local[5]= fqv[79];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[1] = w;
	local[4]= (pointer)get_sym_func(fqv[80]);
	local[5]= local[0];
	local[6]= fqv[81];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= loadglobal(fqv[82]);
	ctx->vsp=local+7;
	w=(pointer)COERCE(ctx,2,local+5); /*coerce*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,2,local+4); /*apply*/
	local[4]= w;
	local[5]= makeflt(5.0000000000000000000000e-01);
	local[6]= argv[0];
	local[7]= fqv[70];
	local[8]= fqv[71];
	local[9]= fqv[83];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)TAN(ctx,1,local+6); /*tan*/
	{ double x,y;
		y=fltval(w); x=fltval(local[5]);
		local[5]=(makeflt(x * y));}
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[3] = w;
	local[4]= local[3];
	local[5]= loadglobal(fqv[27]);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)GREATERP(ctx,2,local+4); /*>*/
	if (w!=NIL) goto OR2848;
	local[4]= local[3];
	local[5]= loadglobal(fqv[27]);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	local[5]= makeflt(1.0000000000000000208167e-03);
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,2,local+4); /*<*/
	if (w!=NIL) goto OR2848;
	goto IF2846;
OR2848:
	local[4]= makeint((eusinteger_t)2L);
	local[5]= fqv[84];
	local[6]= local[3];
	local[7]= loadglobal(fqv[27]);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[8])(ctx,3,local+4,&ftab[8],fqv[85]); /*warning-message*/
	local[4]= local[3];
	local[5]= loadglobal(fqv[27]);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	local[5]= loadglobal(fqv[28]);
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	storeglobal(fqv[28],w);
	local[4]= local[3];
	local[5]= loadglobal(fqv[27]);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	local[5]= loadglobal(fqv[27]);
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	storeglobal(fqv[27],w);
	goto IF2847;
IF2846:
	local[4]= NIL;
IF2847:
	local[4]= loadglobal(fqv[27]);
	local[5]= makeflt(7.9999999999999982236432e-01);
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	local[5]= loadglobal(fqv[28]);
	local[6]= makeflt(1.5000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)TIMES(ctx,2,local+5); /***/
	local[5]= w;
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)MAX(ctx,2,local+5); /*max*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MIN(ctx,2,local+4); /*min*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[31];
	local[6]= argv[0]->c.obj.iv[32];
	ctx->vsp=local+7;
	w=(pointer)VMINUS(ctx,2,local+5); /*v-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)VNORMALIZE(ctx,1,local+5); /*normalize-vector*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SCALEVEC(ctx,2,local+4); /*scale*/
	local[2] = w;
	local[4]= argv[0];
	local[5]= fqv[86];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= argv[0];
	local[5]= fqv[69];
	local[6]= local[1];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)VPLUS(ctx,2,local+6); /*v+*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[1]= w;
	goto IF2845;
IF2844:
	local[1]= NIL;
IF2845:
	local[1]= argv[0];
	local[2]= fqv[53];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= argv[0];
	local[2]= fqv[14];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[0]= w;
BLK2837:
	ctx->vsp=local; return(local[0]);}

/*:move-viewing-around-viewtarget*/
static pointer M2849irtviewer_move_viewing_around_viewtarget(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=8) maerror();
	w = argv[2];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[55],w);
	local[3]= loadglobal(fqv[55]);
	ctx->vsp=local+4;
	w=(*ftab[9])(ctx,1,local+3,&ftab[9],fqv[87]); /*event-middle*/
	if (w==NIL) goto CON2852;
	local[3]= argv[0]->c.obj.iv[31];
	local[4]= argv[0]->c.obj.iv[32];
	ctx->vsp=local+5;
	w=(pointer)VMINUS(ctx,2,local+3); /*v-*/
	local[3]= w;
	local[4]= argv[7];
	local[5]= fqv[71];
	local[6]= fqv[7];
	local[7]= makeflt(1.0000000000000000208167e-03);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)VNORM(ctx,1,local+8); /*norm*/
	{ double x,y;
		y=fltval(w); x=fltval(local[7]);
		local[7]=(makeflt(x * y));}
	local[8]= makeint((eusinteger_t)-1L);
	local[9]= argv[5];
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	local[9]= argv[6];
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)MKFLTVEC(ctx,3,local+8); /*float-vector*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SCALEVEC(ctx,2,local+7); /*scale*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,4,local+4); /*send*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[86];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= local[4];
	local[7]= argv[0]->c.obj.iv[31];
	ctx->vsp=local+8;
	w=(pointer)VMINUS(ctx,2,local+6); /*v-*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= fqv[69];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= argv[0];
	local[8]= fqv[86];
	local[9]= local[5];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)VPLUS(ctx,2,local+9); /*v+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[3]= w;
	goto CON2851;
CON2852:
	local[3]= loadglobal(fqv[55]);
	ctx->vsp=local+4;
	w=(*ftab[10])(ctx,1,local+3,&ftab[10],fqv[88]); /*event-right*/
	if (w!=NIL) goto OR2854;
	local[3]= makeint((eusinteger_t)60L);
	local[4]= argv[3];
	local[5]= argv[7];
	local[6]= fqv[44];
	local[7]= fqv[22];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)60L);
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,3,local+3); /*<*/
	if (w==NIL) goto AND2855;
	local[3]= makeint((eusinteger_t)60L);
	local[4]= argv[4];
	local[5]= argv[7];
	local[6]= fqv[44];
	local[7]= fqv[23];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)60L);
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,3,local+3); /*<*/
	if (w==NIL) goto AND2855;
	local[3]= loadglobal(fqv[55]);
	ctx->vsp=local+4;
	w=(*ftab[11])(ctx,1,local+3,&ftab[11],fqv[89]); /*event-left*/
	if (w==NIL) goto AND2855;
	goto OR2854;
AND2855:
	goto CON2853;
OR2854:
	local[3]= argv[0]->c.obj.iv[29];
	local[4]= argv[5];
	ctx->vsp=local+5;
	w=(pointer)MINUS(ctx,2,local+3); /*-*/
	argv[0]->c.obj.iv[29] = w;
	local[3]= argv[0]->c.obj.iv[30];
	local[4]= argv[6];
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	argv[0]->c.obj.iv[30] = w;
	local[3]= argv[0]->c.obj.iv[30];
	goto CON2851;
CON2853:
	local[3]= argv[3];
	local[4]= argv[7];
	local[5]= fqv[44];
	local[6]= fqv[22];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)60L);
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)GREATERP(ctx,2,local+3); /*>*/
	if (w!=NIL) goto OR2857;
	local[3]= argv[4];
	local[4]= makeint((eusinteger_t)60L);
	ctx->vsp=local+5;
	w=(pointer)LESSP(ctx,2,local+3); /*<*/
	if (w!=NIL) goto OR2857;
	goto CON2856;
OR2857:
	local[3]= argv[0]->c.obj.iv[31];
	local[4]= argv[0]->c.obj.iv[32];
	ctx->vsp=local+5;
	w=(pointer)VMINUS(ctx,2,local+3); /*v-*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= fqv[69];
	local[6]= argv[0]->c.obj.iv[31];
	local[7]= makeflt(9.9999999999999950039964e-03);
	local[8]= argv[4];
	local[9]= makeint((eusinteger_t)60L);
	ctx->vsp=local+10;
	w=(pointer)LESSP(ctx,2,local+8); /*<*/
	if (w==NIL) goto IF2858;
	local[8]= argv[5];
	goto IF2859;
IF2858:
	local[8]= argv[6];
IF2859:
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)VNORM(ctx,1,local+9); /*norm*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,3,local+7); /***/
	local[7]= w;
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)VNORMALIZE(ctx,1,local+8); /*normalize-vector*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SCALEVEC(ctx,2,local+7); /*scale*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)VPLUS(ctx,2,local+6); /*v+*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[3]= w;
	goto CON2851;
CON2856:
	local[3]= argv[4];
	local[4]= argv[7];
	local[5]= fqv[44];
	local[6]= fqv[23];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)60L);
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)GREATERP(ctx,2,local+3); /*>*/
	if (w!=NIL) goto OR2861;
	local[3]= argv[3];
	local[4]= makeint((eusinteger_t)60L);
	ctx->vsp=local+5;
	w=(pointer)LESSP(ctx,2,local+3); /*<*/
	if (w!=NIL) goto OR2861;
	goto CON2860;
OR2861:
	local[3]= argv[0]->c.obj.iv[31];
	local[4]= argv[0]->c.obj.iv[32];
	ctx->vsp=local+5;
	w=(pointer)VMINUS(ctx,2,local+3); /*v-*/
	local[3]= w;
	local[4]= argv[7];
	local[5]= fqv[71];
	local[6]= fqv[7];
	local[7]= makeflt(1.0000000000000000208167e-03);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)VNORM(ctx,1,local+8); /*norm*/
	{ double x,y;
		y=fltval(w); x=fltval(local[7]);
		local[7]=(makeflt(x * y));}
	local[8]= argv[3];
	local[9]= makeint((eusinteger_t)60L);
	ctx->vsp=local+10;
	w=(pointer)LESSP(ctx,2,local+8); /*<*/
	if (w==NIL) goto IF2862;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= argv[6];
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)MKFLTVEC(ctx,3,local+8); /*float-vector*/
	local[8]= w;
	goto IF2863;
IF2862:
	local[8]= makeint((eusinteger_t)-1L);
	local[9]= argv[5];
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)MKFLTVEC(ctx,3,local+8); /*float-vector*/
	local[8]= w;
IF2863:
	ctx->vsp=local+9;
	w=(pointer)SCALEVEC(ctx,2,local+7); /*scale*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,4,local+4); /*send*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[86];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= local[4];
	local[7]= argv[0]->c.obj.iv[31];
	ctx->vsp=local+8;
	w=(pointer)VMINUS(ctx,2,local+6); /*v-*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= fqv[69];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= argv[0];
	local[8]= fqv[86];
	local[9]= local[5];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)VPLUS(ctx,2,local+9); /*v+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[3]= w;
	goto CON2851;
CON2860:
	local[3]= NIL;
CON2851:
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK2850:
	ctx->vsp=local; return(local[0]);}

/*:set-cursor-pos-event*/
static pointer M2864irtviewer_set_cursor_pos_event(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[55],w);
	local[3]= loadglobal(fqv[55]);
	ctx->vsp=local+4;
	w=(*ftab[12])(ctx,1,local+3,&ftab[12],fqv[90]); /*event-pos*/
	argv[0]->c.obj.iv[28] = w;
	local[3]= argv[0]->c.obj.iv[28];
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK2865:
	ctx->vsp=local; return(local[0]);}

/*:move-coords-event*/
static pointer M2866irtviewer_move_coords_event(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[55],w);
	if (argv[0]->c.obj.iv[28]!=NIL) goto IF2868;
	local[3]= loadglobal(fqv[55]);
	ctx->vsp=local+4;
	w=(*ftab[12])(ctx,1,local+3,&ftab[12],fqv[90]); /*event-pos*/
	argv[0]->c.obj.iv[28] = w;
	local[3]= argv[0]->c.obj.iv[28];
	goto IF2869;
IF2868:
	local[3]= NIL;
IF2869:
	local[3]= loadglobal(fqv[55]);
	ctx->vsp=local+4;
	w=(*ftab[12])(ctx,1,local+3,&ftab[12],fqv[90]); /*event-pos*/
	local[3]= w;
	local[4]= local[3];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= local[3];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= local[4];
	local[7]= argv[0]->c.obj.iv[28];
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	local[7]= local[5];
	local[8]= argv[0]->c.obj.iv[28];
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,2,local+7); /*-*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= fqv[91];
	local[10]= loadglobal(fqv[55]);
	local[11]= local[4];
	local[12]= local[5];
	local[13]= local[6];
	local[14]= local[7];
	local[15]= argv[0]->c.obj.iv[25];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,8,local+8); /*send*/
	local[8]= argv[0];
	local[9]= fqv[53];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= argv[0];
	local[9]= fqv[14];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	argv[0]->c.obj.iv[28] = local[3];
	w = argv[0]->c.obj.iv[28];
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK2867:
	ctx->vsp=local; return(local[0]);}

/*:draw-event*/
static pointer M2870irtviewer_draw_event(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[55],w);
	local[3]= argv[0];
	local[4]= fqv[14];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK2871:
	ctx->vsp=local; return(local[0]);}

/*:draw-objects*/
static pointer M2872irtviewer_draw_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2874:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[25];
	local[2]= fqv[44];
	local[3]= fqv[57];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= (pointer)get_sym_func(fqv[92]);
	local[2]= argv[0]->c.obj.iv[25];
	local[3]= argv[0]->c.obj.iv[27];
	local[4]= fqv[93];
	local[5]= argv[0]->c.obj.iv[34];
	local[6]= fqv[94];
	local[7]= argv[0]->c.obj.iv[35];
	local[8]= fqv[95];
	local[9]= argv[0]->c.obj.iv[36];
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,10,local+1); /*apply*/
	local[0]= w;
BLK2873:
	ctx->vsp=local; return(local[0]);}

/*:objects*/
static pointer M2875irtviewer_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2877:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	if (local[0]==NIL) goto IF2878;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car!=NIL) goto CON2881;
	argv[0]->c.obj.iv[26] = NIL;
	local[1]= argv[0]->c.obj.iv[26];
	goto CON2880;
CON2881:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!iscons(w)) goto CON2882;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[26] = (w)->c.cons.car;
	local[1]= argv[0]->c.obj.iv[26];
	goto CON2880;
CON2882:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!!iscons(w)) goto CON2883;
	local[1]= local[0];
	local[2]= argv[0]->c.obj.iv[26];
	ctx->vsp=local+3;
	w=(pointer)APPEND(ctx,2,local+1); /*append*/
	argv[0]->c.obj.iv[26] = w;
	local[1]= argv[0]->c.obj.iv[26];
	goto CON2880;
CON2883:
	local[1]= NIL;
CON2880:
	goto IF2879;
IF2878:
	local[1]= NIL;
IF2879:
	local[1]= argv[0]->c.obj.iv[26];
	local[2]= fqv[74];
	ctx->vsp=local+3;
	w=(*ftab[5])(ctx,2,local+1,&ftab[5],fqv[75]); /*send-all*/
	local[1]= argv[0]->c.obj.iv[26];
	ctx->vsp=local+2;
	w=(pointer)F2759draw_things(ctx,1,local+1); /*draw-things*/
	argv[0]->c.obj.iv[27] = w;
	w = argv[0]->c.obj.iv[26];
	local[0]= w;
BLK2876:
	ctx->vsp=local; return(local[0]);}

/*:select-drawmode*/
static pointer M2884irtviewer_select_drawmode(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	if (argv[0]->c.obj.iv[33]==local[0]) goto IF2886;
	local[0]= argv[0];
	local[1]= fqv[70];
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= *(ovafptr(w,fqv[96]));
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[27];
WHL2889:
	if (local[2]==NIL) goto WHX2890;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[1];
	local[4]= fqv[97];
	ctx->vsp=local+5;
	w=(pointer)GETPROP(ctx,2,local+3); /*get*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[13])(ctx,1,local+3,&ftab[13],fqv[98]); /*gl::delete-displaylist-id*/
	local[3]= local[1];
	local[4]= NIL;
	local[5]= fqv[97];
	ctx->vsp=local+6;
	w=(pointer)PUTPROP(ctx,3,local+3); /*putprop*/
	local[3]= argv[2];
	local[4]= local[3];
	if (fqv[99]!=local[4]) goto IF2894;
	local[4]= local[1];
	local[5]= local[0];
	w = T;
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	local[5]= w;
	local[6]= fqv[100];
	ctx->vsp=local+7;
	w=(pointer)PUTPROP(ctx,3,local+4); /*putprop*/
	local[4]= w;
	goto IF2895;
IF2894:
	if (T==NIL) goto IF2896;
	local[4]= local[1];
	local[5]= NIL;
	local[6]= fqv[100];
	ctx->vsp=local+7;
	w=(pointer)PUTPROP(ctx,3,local+4); /*putprop*/
	local[4]= w;
	goto IF2897;
IF2896:
	local[4]= NIL;
IF2897:
IF2895:
	w = local[4];
	goto WHL2889;
WHX2890:
	local[3]= NIL;
BLK2891:
	w = NIL;
	local[0]= w;
	goto IF2887;
IF2886:
	local[0]= NIL;
IF2887:
	argv[0]->c.obj.iv[33] = argv[2];
	w = argv[0]->c.obj.iv[33];
	local[0]= w;
BLK2885:
	ctx->vsp=local; return(local[0]);}

/*:flush*/
static pointer M2898irtviewer_flush(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[25]==NIL) goto IF2900;
	local[0]= argv[0]->c.obj.iv[25];
	local[1]= fqv[44];
	local[2]= fqv[101];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF2901;
IF2900:
	local[0]= NIL;
IF2901:
	w = local[0];
	local[0]= w;
BLK2899:
	ctx->vsp=local; return(local[0]);}

/*:change-background*/
static pointer M2902irtviewer_change_background(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[70];
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[57];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= argv[2];
	local[2]= local[1];
	*(ovafptr(local[0],fqv[102])) = local[2];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[14])(ctx,1,local+1,&ftab[14],fqv[103]); /*gl:glclearcolorfv*/
	local[0]= w;
BLK2903:
	ctx->vsp=local; return(local[0]);}

/*:draw-origin*/
static pointer M2904irtviewer_draw_origin(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2907;}
	local[0]= fqv[104];
ENT2907:
ENT2906:
	if (n>3) maerror();
	local[1]= local[0];
	if (fqv[104]==local[1]) goto IF2908;
	argv[0]->c.obj.iv[34] = local[0];
	local[1]= argv[0]->c.obj.iv[34];
	goto IF2909;
IF2908:
	local[1]= argv[0]->c.obj.iv[34];
IF2909:
	w = local[1];
	local[0]= w;
BLK2905:
	ctx->vsp=local; return(local[0]);}

/*:draw-floor*/
static pointer M2910irtviewer_draw_floor(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2913;}
	local[0]= fqv[104];
ENT2913:
ENT2912:
	if (n>3) maerror();
	local[1]= local[0];
	if (fqv[104]==local[1]) goto IF2914;
	argv[0]->c.obj.iv[35] = local[0];
	local[1]= argv[0]->c.obj.iv[35];
	goto IF2915;
IF2914:
	local[1]= argv[0]->c.obj.iv[35];
IF2915:
	w = local[1];
	local[0]= w;
BLK2911:
	ctx->vsp=local; return(local[0]);}

/*:floor-color*/
static pointer M2916irtviewer_floor_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2919;}
	local[0]= fqv[104];
ENT2919:
ENT2918:
	if (n>3) maerror();
	local[1]= local[0];
	if (fqv[104]==local[1]) goto IF2920;
	argv[0]->c.obj.iv[36] = local[0];
	local[1]= argv[0]->c.obj.iv[36];
	goto IF2921;
IF2920:
	local[1]= argv[0]->c.obj.iv[36];
IF2921:
	w = local[1];
	local[0]= w;
BLK2917:
	ctx->vsp=local; return(local[0]);}

/*draw-things*/
static pointer F2759draw_things(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!!iscons(w)) goto CON2924;
	if (argv[0]!=NIL) goto CON2926;
	local[0]= NIL;
	goto CON2925;
CON2926:
	local[0]= argv[0];
	local[1]= fqv[105];
	ctx->vsp=local+2;
	w=(*ftab[15])(ctx,2,local+0,&ftab[15],fqv[106]); /*find-method*/
	if (w==NIL) goto CON2927;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto CON2925;
CON2927:
	local[0]= argv[0];
	local[1]= fqv[107];
	ctx->vsp=local+2;
	w=(*ftab[15])(ctx,2,local+0,&ftab[15],fqv[106]); /*find-method*/
	if (w==NIL) goto CON2928;
	local[0]= argv[0];
	local[1]= fqv[107];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto CON2925;
CON2928:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto CON2925;
CON2929:
	local[0]= NIL;
CON2925:
	goto CON2923;
CON2924:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	ctx->vsp=local+1;
	w=(pointer)F2759draw_things(ctx,1,local+0); /*draw-things*/
	local[0]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	ctx->vsp=local+2;
	w=(pointer)F2759draw_things(ctx,1,local+1); /*draw-things*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
	goto CON2923;
CON2930:
	local[0]= NIL;
CON2923:
	w = local[0];
	local[0]= w;
BLK2922:
	ctx->vsp=local; return(local[0]);}

/*:look*/
static pointer M2931viewing_look(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT2935;}
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
ENT2935:
	if (n>=5) { local[1]=(argv[4]); goto ENT2934;}
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)MKFLTVEC(ctx,3,local+1); /*float-vector*/
	local[1]= w;
ENT2934:
ENT2933:
	if (n>5) maerror();
	local[2]= local[0];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)VMINUS(ctx,2,local+2); /*v-*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)VNORMALIZE(ctx,1,local+2); /*normalize-vector*/
	local[2]= w;
	local[3]= local[2];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+3); /*v**/
	local[3]= w;
	local[4]= NIL;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)VNORM(ctx,1,local+5); /*norm*/
	local[5]= w;
	local[6]= loadglobal(fqv[108]);
	ctx->vsp=local+7;
	w=(pointer)LESSP(ctx,2,local+5); /*<*/
	if (w==NIL) goto IF2936;
	local[5]= local[2];
	local[6]= makeint((eusinteger_t)-1L);
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+5); /*v**/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)VNORMALIZE(ctx,1,local+5); /*normalize-vector*/
	local[4] = w;
	local[5]= local[4];
	goto IF2937;
IF2936:
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)VNORMALIZE(ctx,1,local+5); /*normalize-vector*/
	local[4] = w;
	local[5]= local[4];
IF2937:
	local[5]= local[4];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+5); /*v**/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)VNORMALIZE(ctx,1,local+5); /*normalize-vector*/
	local[1] = w;
	local[5]= makeflt(-1.0000000000000000000000e+00);
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)SCALEVEC(ctx,2,local+5); /*scale*/
	local[2] = w;
	local[5]= loadglobal(fqv[109]);
	local[6]= local[4];
	local[7]= local[1];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)CONCATENATE(ctx,4,local+5); /*concatenate*/
	local[5]= w;
	local[6]= w;
	w = argv[0]->c.obj.iv[1];
	w->c.obj.iv[1] = local[6];
	local[5]= argv[0]->c.obj.iv[1];
	local[6]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+7;
	w=(pointer)TRANSPOSE(ctx,2,local+5); /*transpose*/
	local[5]= argv[0];
	local[6]= fqv[110];
	local[7]= argv[2];
	local[8]= fqv[111];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,4,local+5); /*send*/
	local[5]= argv[0];
	local[6]= fqv[74];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[0]= w;
BLK2932:
	ctx->vsp=local; return(local[0]);}

/*objects*/
static pointer F2760objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT2941;}
	local[0]= T;
ENT2941:
	if (n>=2) { local[1]=(argv[1]); goto ENT2940;}
	local[1]= NIL;
ENT2940:
ENT2939:
	if (n>2) maerror();
	if (local[0]==NIL) goto IF2942;
	local[2]= fqv[112];
	ctx->vsp=local+3;
	w=(pointer)BOUNDP(ctx,1,local+2); /*boundp*/
	if (w!=NIL) goto IF2942;
	if (local[1]!=NIL) goto IF2942;
	local[2]= fqv[113];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[65]); /*warn*/
	ctx->vsp=local+2;
	w=(pointer)F2761make_irtviewer(ctx,0,local+2); /*make-irtviewer*/
	local[2]= w;
	goto IF2943;
IF2942:
	local[2]= NIL;
IF2943:
	if (local[1]!=NIL) goto IF2944;
	local[1] = loadglobal(fqv[112]);
	local[2]= local[1];
	goto IF2945;
IF2944:
	local[2]= NIL;
IF2945:
	local[2]= NIL;
	local[3]= local[0];
	if (T!=local[3]) goto IF2946;
	local[3]= local[1];
	local[4]= fqv[114];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[2] = w;
	local[3]= local[2];
	goto IF2947;
IF2946:
	local[3]= local[1];
	local[4]= fqv[114];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[2] = w;
	local[3]= local[2];
IF2947:
	local[3]= local[1];
	local[4]= fqv[115];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	w = local[2];
	local[0]= w;
BLK2938:
	ctx->vsp=local; return(local[0]);}

/*make-irtviewer*/
static pointer F2761make_irtviewer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST2949:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	if (loadglobal(fqv[116])==NIL) goto OR2952;
	local[1]= loadglobal(fqv[116]);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)NUMEQUAL(ctx,2,local+1); /*=*/
	if (w!=NIL) goto OR2952;
	goto CON2951;
OR2952:
	local[1]= makeint((eusinteger_t)1L);
	local[2]= fqv[117];
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,2,local+1,&ftab[8],fqv[85]); /*warning-message*/
	local[1]= loadglobal(fqv[118]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	storeglobal(fqv[112],w);
	local[1]= loadglobal(fqv[119]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	storeglobal(fqv[33],w);
	local[1]= loadglobal(fqv[33]);
	local[2]= loadglobal(fqv[112]);
	local[3]= fqv[13];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= w;
	goto CON2950;
CON2951:
	local[1]= (pointer)get_sym_func(fqv[12]);
	local[2]= loadglobal(fqv[120]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= fqv[21];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[1]= w;
	storeglobal(fqv[112],w);
	goto CON2950;
CON2953:
	local[1]= NIL;
CON2950:
	w = loadglobal(fqv[112]);
	local[0]= w;
BLK2948:
	ctx->vsp=local; return(local[0]);}

/*:nomethod*/
static pointer M2954viewer_dummy_nomethod(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2956:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	w = T;
	local[0]= w;
BLK2955:
	ctx->vsp=local; return(local[0]);}

/*:objects*/
static pointer M2957irtviewer_dummy_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2959:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	if (local[0]==NIL) goto IF2960;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car!=NIL) goto CON2963;
	argv[0]->c.obj.iv[1] = NIL;
	local[1]= argv[0]->c.obj.iv[1];
	goto CON2962;
CON2963:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!iscons(w)) goto CON2964;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[1] = (w)->c.cons.car;
	local[1]= argv[0]->c.obj.iv[1];
	goto CON2962;
CON2964:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!!iscons(w)) goto CON2965;
	local[1]= local[0];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)APPEND(ctx,2,local+1); /*append*/
	argv[0]->c.obj.iv[1] = w;
	local[1]= argv[0]->c.obj.iv[1];
	goto CON2962;
CON2965:
	local[1]= NIL;
CON2962:
	goto IF2961;
IF2960:
	local[1]= NIL;
IF2961:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= fqv[74];
	ctx->vsp=local+3;
	w=(*ftab[5])(ctx,2,local+1,&ftab[5],fqv[75]); /*send-all*/
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(pointer)F2759draw_things(ctx,1,local+1); /*x::draw-things*/
	argv[0]->c.obj.iv[2] = w;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK2958:
	ctx->vsp=local; return(local[0]);}

/*:nomethod*/
static pointer M2966irtviewer_dummy_nomethod(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2968:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	w = T;
	local[0]= w;
BLK2967:
	ctx->vsp=local; return(local[0]);}

/*make-irtviewer-dummy*/
static pointer F2762make_irtviewer_dummy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST2970:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= makeint((eusinteger_t)1L);
	local[2]= fqv[121];
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,2,local+1,&ftab[8],fqv[85]); /*warning-message*/
	local[1]= loadglobal(fqv[122]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	storeglobal(fqv[112],w);
	w = local[1];
	local[0]= w;
BLK2969:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtviewer(ctx,n,argv,env)
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
	local[0]= fqv[123];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF2971;
	local[0]= fqv[124];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[125],w);
	goto IF2972;
IF2971:
	local[0]= fqv[126];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF2972:
	ctx->vsp=local+0;
	compfun(ctx,fqv[127],module,F2758make_lr_ud_coords,fqv[128]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2764geometry_viewer_draw_circle,fqv[129],fqv[130],fqv[131]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2781geometry_viewer_draw_objects,fqv[14],fqv[130],fqv[132]);
	local[0]= fqv[42];
	local[1]= fqv[133];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF2973;
	local[0]= fqv[42];
	local[1]= fqv[133];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[42];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF2975;
	local[0]= fqv[42];
	local[1]= fqv[134];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF2976;
IF2975:
	local[0]= NIL;
IF2976:
	local[0]= fqv[42];
	goto IF2974;
IF2973:
	local[0]= NIL;
IF2974:
	local[0]= fqv[120];
	local[1]= fqv[134];
	local[2]= fqv[120];
	local[3]= fqv[135];
	local[4]= loadglobal(fqv[136]);
	local[5]= fqv[137];
	local[6]= fqv[138];
	local[7]= fqv[139];
	local[8]= NIL;
	local[9]= fqv[140];
	local[10]= NIL;
	local[11]= fqv[141];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[142];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[16])(ctx,13,local+2,&ftab[16],fqv[143]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2784irtviewer_create,fqv[21],fqv[120],fqv[144]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2800irtviewer_viewer,fqv[70],fqv[120],fqv[145]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2803irtviewer_redraw,fqv[62],fqv[120],fqv[146]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2805irtviewer_expose,fqv[147],fqv[120],fqv[148]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2807irtviewer_resize,fqv[56],fqv[120],fqv[149]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2809irtviewer_configurenotify,fqv[150],fqv[120],fqv[151]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2816irtviewer_viewtarget,fqv[86],fqv[120],fqv[152]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2822irtviewer_viewpoint,fqv[69],fqv[120],fqv[153]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2828irtviewer_look1,fqv[53],fqv[120],fqv[154]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2836irtviewer_look_all,fqv[115],fqv[120],fqv[155]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2849irtviewer_move_viewing_around_viewtarget,fqv[91],fqv[120],fqv[156]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2864irtviewer_set_cursor_pos_event,fqv[49],fqv[120],fqv[157]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2866irtviewer_move_coords_event,fqv[51],fqv[120],fqv[158]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2870irtviewer_draw_event,fqv[47],fqv[120],fqv[159]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2872irtviewer_draw_objects,fqv[14],fqv[120],fqv[160]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2875irtviewer_objects,fqv[114],fqv[120],fqv[161]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2884irtviewer_select_drawmode,fqv[162],fqv[120],fqv[163]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2898irtviewer_flush,fqv[11],fqv[120],fqv[164]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2902irtviewer_change_background,fqv[165],fqv[120],fqv[166]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2904irtviewer_draw_origin,fqv[93],fqv[120],fqv[167]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2910irtviewer_draw_floor,fqv[94],fqv[120],fqv[168]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2916irtviewer_floor_color,fqv[95],fqv[120],fqv[169]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[170],module,F2759draw_things,fqv[171]);
	local[0]= fqv[172];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF2977;
	local[0]= fqv[173];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[125],w);
	goto IF2978;
IF2977:
	local[0]= fqv[174];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF2978:
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2931viewing_look,fqv[72],fqv[175],fqv[176]);
	local[0]= fqv[177];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF2979;
	local[0]= fqv[178];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[125],w);
	goto IF2980;
IF2979:
	local[0]= fqv[179];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF2980:
	ctx->vsp=local+0;
	compfun(ctx,fqv[180],module,F2760objects,fqv[181]);
	local[0]= fqv[182];
	ctx->vsp=local+1;
	w=(pointer)PROCLAIM(ctx,1,local+0); /*proclaim*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[183],module,F2761make_irtviewer,fqv[184]);
	local[0]= fqv[119];
	local[1]= fqv[134];
	local[2]= fqv[119];
	local[3]= fqv[135];
	local[4]= loadglobal(fqv[185]);
	local[5]= fqv[137];
	local[6]= fqv[186];
	local[7]= fqv[139];
	local[8]= NIL;
	local[9]= fqv[140];
	local[10]= NIL;
	local[11]= fqv[141];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[142];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[16])(ctx,13,local+2,&ftab[16],fqv[143]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2954viewer_dummy_nomethod,fqv[187],fqv[119],fqv[188]);
	local[0]= fqv[118];
	local[1]= fqv[134];
	local[2]= fqv[118];
	local[3]= fqv[135];
	local[4]= loadglobal(fqv[185]);
	local[5]= fqv[137];
	local[6]= fqv[189];
	local[7]= fqv[139];
	local[8]= NIL;
	local[9]= fqv[140];
	local[10]= NIL;
	local[11]= fqv[141];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[142];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[16])(ctx,13,local+2,&ftab[16],fqv[143]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2957irtviewer_dummy_objects,fqv[114],fqv[118],fqv[190]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2966irtviewer_dummy_nomethod,fqv[187],fqv[118],fqv[191]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[192],module,F2762make_irtviewer_dummy,fqv[193]);
	local[0]= fqv[194];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF2981;
	local[0]= fqv[195];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[125],w);
	goto IF2982;
IF2981:
	local[0]= fqv[196];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF2982:
	local[0]= fqv[197];
	local[1]= fqv[198];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,2,local+0,&ftab[17],fqv[199]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<18; i++) ftab[i]=fcallx;
}
