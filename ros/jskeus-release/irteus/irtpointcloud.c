/* ./irtpointcloud.c :  entry=irtpointcloud */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtpointcloud.h"
#pragma init (register_irtpointcloud)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtpointcloud();
extern pointer build_quote_vector();
static int register_irtpointcloud()
  { add_module_initializer("___irtpointcloud", ___irtpointcloud);}

static pointer F5738make_random_pointcloud();

/*:init*/
static pointer M5739pointcloud_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5741:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[0], &argv[2], n-2, local+1, 0);
	if (n & (1<<0)) goto KEY5742;
	local[1] = NIL;
KEY5742:
	if (n & (1<<1)) goto KEY5743;
	local[2] = NIL;
KEY5743:
	if (n & (1<<2)) goto KEY5744;
	local[3] = NIL;
KEY5744:
	if (n & (1<<3)) goto KEY5745;
	local[4] = NIL;
KEY5745:
	if (n & (1<<4)) goto KEY5746;
	local[5] = NIL;
KEY5746:
	if (n & (1<<5)) goto KEY5747;
	local[6] = NIL;
KEY5747:
	if (n & (1<<6)) goto KEY5748;
	local[12]= makeint((eusinteger_t)0L);
	local[13]= makeint((eusinteger_t)1L);
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(pointer)MKFLTVEC(ctx,3,local+12); /*float-vector*/
	local[7] = w;
KEY5748:
	if (n & (1<<7)) goto KEY5749;
	local[8] = makeflt(2.0000000000000000000000e+00);
KEY5749:
	if (n & (1<<8)) goto KEY5750;
	local[9] = NIL;
KEY5750:
	if (n & (1<<9)) goto KEY5751;
	local[10] = makeflt(2.0000000000000000000000e+00);
KEY5751:
	if (n & (1<<10)) goto KEY5752;
	local[11] = makeflt(0.0000000000000000000000e+00);
KEY5752:
	if (local[1]==NIL) goto CON5754;
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)LISTP(ctx,1,local+12); /*listp*/
	if (w==NIL) goto CON5754;
	local[12]= argv[0];
	local[13]= fqv[1];
	local[14]= local[1];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	goto CON5753;
CON5754:
	if (local[1]==NIL) goto CON5755;
	argv[0]->c.obj.iv[8] = local[1];
	local[12]= argv[0]->c.obj.iv[8];
	goto CON5753;
CON5755:
	local[12]= NIL;
CON5753:
	if (local[2]==NIL) goto CON5757;
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)LISTP(ctx,1,local+12); /*listp*/
	if (w==NIL) goto CON5757;
	local[12]= argv[0];
	local[13]= fqv[2];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	goto CON5756;
CON5757:
	if (local[2]==NIL) goto CON5758;
	argv[0]->c.obj.iv[9] = local[2];
	local[12]= argv[0]->c.obj.iv[9];
	goto CON5756;
CON5758:
	argv[0]->c.obj.iv[12] = local[7];
	local[12]= argv[0]->c.obj.iv[12];
	goto CON5756;
CON5759:
	local[12]= NIL;
CON5756:
	if (local[3]==NIL) goto CON5761;
	local[12]= argv[0]->c.obj.iv[10];
	ctx->vsp=local+13;
	w=(pointer)LISTP(ctx,1,local+12); /*listp*/
	if (w==NIL) goto CON5761;
	local[12]= argv[0];
	local[13]= fqv[3];
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	goto CON5760;
CON5761:
	if (local[3]==NIL) goto CON5762;
	argv[0]->c.obj.iv[10] = local[3];
	local[12]= argv[0]->c.obj.iv[10];
	goto CON5760;
CON5762:
	local[12]= NIL;
CON5760:
	if (local[3]==NIL) goto CON5764;
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)LISTP(ctx,1,local+12); /*listp*/
	if (w==NIL) goto CON5764;
	local[12]= argv[0];
	local[13]= fqv[4];
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	goto CON5763;
CON5764:
	if (local[3]==NIL) goto CON5765;
	argv[0]->c.obj.iv[11] = local[4];
	local[12]= argv[0]->c.obj.iv[11];
	goto CON5763;
CON5765:
	local[12]= NIL;
CON5763:
	argv[0]->c.obj.iv[13] = local[8];
	argv[0]->c.obj.iv[14] = local[10];
	argv[0]->c.obj.iv[15] = local[11];
	ctx->vsp=local+12;
	w=(*ftab[0])(ctx,0,local+12,&ftab[0],fqv[5]); /*make-coords*/
	argv[0]->c.obj.iv[19] = w;
	argv[0]->c.obj.iv[20] = fqv[6];
	if (local[5]==NIL) goto CON5767;
	if (local[6]==NIL) goto CON5767;
	local[12]= argv[0];
	local[13]= fqv[7];
	local[14]= local[6];
	local[15]= local[5];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,4,local+12); /*send*/
	local[12]= w;
	goto CON5766;
CON5767:
	local[12]= argv[0];
	local[13]= fqv[7];
	if (argv[0]->c.obj.iv[8]==NIL) goto IF5769;
	local[14]= argv[0]->c.obj.iv[8];
	local[15]= makeint((eusinteger_t)0L);
	ctx->vsp=local+16;
	w=(*ftab[1])(ctx,2,local+14,&ftab[1],fqv[8]); /*array-dimension*/
	local[14]= w;
	goto IF5770;
IF5769:
	local[14]= NIL;
IF5770:
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	goto CON5766;
CON5768:
	local[12]= NIL;
CON5766:
	if (local[9]==NIL) goto IF5771;
	local[12]= argv[0];
	local[13]= fqv[9];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	local[13]= argv[0];
	local[14]= fqv[10];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	if (local[12]==NIL) goto IF5773;
	if (local[13]==NIL) goto IF5773;
	argv[0]->c.obj.iv[12] = NIL;
	local[14]= local[12];
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)TIMES(ctx,2,local+14); /***/
	local[14]= w;
	local[15]= makeint((eusinteger_t)3L);
	ctx->vsp=local+16;
	w=(*ftab[2])(ctx,2,local+14,&ftab[2],fqv[11]); /*make-matrix*/
	argv[0]->c.obj.iv[8] = w;
	local[14]= local[12];
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)TIMES(ctx,2,local+14); /***/
	local[14]= w;
	local[15]= makeint((eusinteger_t)3L);
	ctx->vsp=local+16;
	w=(*ftab[2])(ctx,2,local+14,&ftab[2],fqv[11]); /*make-matrix*/
	argv[0]->c.obj.iv[9] = w;
	local[14]= argv[0]->c.obj.iv[9];
	goto IF5774;
IF5773:
	local[14]= NIL;
IF5774:
	w = local[14];
	local[12]= w;
	goto IF5772;
IF5771:
	local[12]= NIL;
IF5772:
	local[12]= (pointer)get_sym_func(fqv[12]);
	local[13]= argv[0];
	local[14]= *(ovafptr(argv[1],fqv[13]));
	local[15]= fqv[14];
	local[16]= local[0];
	ctx->vsp=local+17;
	w=(pointer)APPLY(ctx,5,local+12); /*apply*/
	w = argv[0];
	local[0]= w;
BLK5740:
	ctx->vsp=local; return(local[0]);}

/*:reset-box*/
static pointer M5775pointcloud_reset_box(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[15];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	if (w==NIL) goto IF5777;
	local[0]= fqv[16];
	local[1]= fqv[17];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,2,local+0); /*list*/
	local[0]= w;
	local[1]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,2,local+0,&ftab[3],fqv[18]); /*make-bounding-box*/
	local[0]= w;
	goto IF5778;
IF5777:
	local[0]= argv[0];
	local[1]= fqv[19];
	local[2]= T;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,2,local+0,&ftab[3],fqv[18]); /*make-bounding-box*/
	local[0]= w;
IF5778:
	w = local[0];
	local[0]= w;
BLK5776:
	ctx->vsp=local; return(local[0]);}

/*:box*/
static pointer M5779pointcloud_box(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[16]!=NIL) goto IF5781;
	local[0]= argv[0];
	local[1]= fqv[20];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	argv[0]->c.obj.iv[16] = w;
	local[0]= argv[0]->c.obj.iv[16];
	goto IF5782;
IF5781:
	local[0]= NIL;
IF5782:
	w = argv[0]->c.obj.iv[16];
	local[0]= w;
BLK5780:
	ctx->vsp=local; return(local[0]);}

/*:vertices*/
static pointer M5783pointcloud_vertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[21];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[22];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[21];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[23];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,2,local+0); /*list*/
	local[0]= w;
BLK5784:
	ctx->vsp=local; return(local[0]);}

/*:size*/
static pointer M5785pointcloud_size(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[8]==NIL) goto IF5787;
	local[0]= argv[0]->c.obj.iv[8];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,2,local+0,&ftab[1],fqv[8]); /*array-dimension*/
	local[0]= w;
	goto IF5788;
IF5787:
	local[0]= makeint((eusinteger_t)0L);
IF5788:
	w = local[0];
	local[0]= w;
BLK5786:
	ctx->vsp=local; return(local[0]);}

/*:width*/
static pointer M5789pointcloud_width(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[18];
	local[0]= w;
BLK5790:
	ctx->vsp=local; return(local[0]);}

/*:height*/
static pointer M5791pointcloud_height(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[17];
	local[0]= w;
BLK5792:
	ctx->vsp=local; return(local[0]);}

/*:size-change*/
static pointer M5793pointcloud_size_change(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5797;}
	local[0]= NIL;
ENT5797:
	if (n>=4) { local[1]=(argv[3]); goto ENT5796;}
	local[1]= NIL;
ENT5796:
ENT5795:
	if (n>4) maerror();
	if (local[0]==NIL) goto CON5799;
	if (local[1]==NIL) goto CON5799;
	argv[0]->c.obj.iv[18] = local[0];
	argv[0]->c.obj.iv[17] = local[1];
	local[2]= argv[0]->c.obj.iv[17];
	goto CON5798;
CON5799:
	if (local[0]==NIL) goto CON5800;
	argv[0]->c.obj.iv[18] = local[0];
	argv[0]->c.obj.iv[17] = makeint((eusinteger_t)1L);
	local[2]= argv[0]->c.obj.iv[17];
	goto CON5798;
CON5800:
	if (local[1]==NIL) goto CON5801;
	argv[0]->c.obj.iv[17] = local[1];
	argv[0]->c.obj.iv[18] = makeint((eusinteger_t)1L);
	local[2]= argv[0]->c.obj.iv[18];
	goto CON5798;
CON5801:
	if (argv[0]->c.obj.iv[8]==NIL) goto IF5803;
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(*ftab[1])(ctx,2,local+2,&ftab[1],fqv[8]); /*array-dimension*/
	argv[0]->c.obj.iv[18] = w;
	argv[0]->c.obj.iv[17] = makeint((eusinteger_t)1L);
	local[2]= argv[0]->c.obj.iv[17];
	goto IF5804;
IF5803:
	argv[0]->c.obj.iv[18] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[17] = makeint((eusinteger_t)0L);
	local[2]= argv[0]->c.obj.iv[17];
IF5804:
	goto CON5798;
CON5802:
	local[2]= NIL;
CON5798:
	w = local[2];
	local[0]= w;
BLK5794:
	ctx->vsp=local; return(local[0]);}

/*:view-coords*/
static pointer M5805pointcloud_view_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5808;}
	local[0]= NIL;
ENT5808:
ENT5807:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5809;
	argv[0]->c.obj.iv[19] = local[0];
	local[1]= argv[0]->c.obj.iv[19];
	goto IF5810;
IF5809:
	local[1]= NIL;
IF5810:
	w = argv[0]->c.obj.iv[19];
	local[0]= w;
BLK5806:
	ctx->vsp=local; return(local[0]);}

/*:points*/
static pointer M5811pointcloud_points(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5816;}
	local[0]= NIL;
ENT5816:
	if (n>=4) { local[1]=(argv[3]); goto ENT5815;}
	local[1]= NIL;
ENT5815:
	if (n>=5) { local[2]=(argv[4]); goto ENT5814;}
	local[2]= NIL;
ENT5814:
ENT5813:
	if (n>5) maerror();
	if (local[0]==NIL) goto IF5817;
	local[3]= argv[0];
	local[4]= fqv[7];
	local[5]= local[1];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LISTP(ctx,1,local+3); /*listp*/
	if (w==NIL) goto CON5820;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,2,local+3,&ftab[2],fqv[11]); /*make-matrix*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= NIL;
	local[6]= local[0];
WHL5822:
	if (local[6]==NIL) goto WHX5823;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= local[3];
	local[8]= local[4];
	local[9]= local[5];
	local[10]= T;
	ctx->vsp=local+11;
	w=(*ftab[4])(ctx,4,local+7,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[4] = w;
	goto WHL5822;
WHX5823:
	local[7]= NIL;
BLK5824:
	w = NIL;
	argv[0]->c.obj.iv[8] = local[3];
	w = argv[0]->c.obj.iv[8];
	local[3]= w;
	goto CON5819;
CON5820:
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(*ftab[5])(ctx,1,local+3,&ftab[5],fqv[25]); /*matrixp*/
	if (w==NIL) goto CON5826;
	local[3]= local[0];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[8]); /*array-dimension*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,2,local+3,&ftab[2],fqv[11]); /*make-matrix*/
	local[3]= w;
	local[4]= local[3]->c.obj.iv[1];
	local[5]= local[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(pointer)VECREPLACE(ctx,2,local+4); /*system::vector-replace*/
	argv[0]->c.obj.iv[8] = local[3];
	w = argv[0]->c.obj.iv[8];
	local[3]= w;
	goto CON5819;
CON5826:
	local[3]= NIL;
CON5819:
	goto IF5818;
IF5817:
	local[3]= NIL;
IF5818:
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK5812:
	ctx->vsp=local; return(local[0]);}

/*:colors*/
static pointer M5827pointcloud_colors(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5830;}
	local[0]= NIL;
ENT5830:
ENT5829:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5831;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w==NIL) goto CON5834;
	argv[0]->c.obj.iv[12] = NIL;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[11]); /*make-matrix*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= local[0];
WHL5836:
	if (local[4]==NIL) goto WHX5837;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[1];
	local[6]= local[2];
	local[7]= local[3];
	local[8]= T;
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,4,local+5,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[2] = w;
	goto WHL5836;
WHX5837:
	local[5]= NIL;
BLK5838:
	w = NIL;
	argv[0]->c.obj.iv[9] = local[1];
	w = argv[0]->c.obj.iv[9];
	local[1]= w;
	goto CON5833;
CON5834:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[5])(ctx,1,local+1,&ftab[5],fqv[25]); /*matrixp*/
	if (w==NIL) goto CON5840;
	argv[0]->c.obj.iv[12] = NIL;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[8]); /*array-dimension*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[11]); /*make-matrix*/
	local[1]= w;
	local[2]= local[1]->c.obj.iv[1];
	local[3]= local[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)VECREPLACE(ctx,2,local+2); /*system::vector-replace*/
	argv[0]->c.obj.iv[9] = local[1];
	w = argv[0]->c.obj.iv[9];
	local[1]= w;
	goto CON5833;
CON5840:
	local[1]= NIL;
CON5833:
	goto IF5832;
IF5831:
	local[1]= NIL;
IF5832:
	w = argv[0]->c.obj.iv[9];
	local[0]= w;
BLK5828:
	ctx->vsp=local; return(local[0]);}

/*:normals*/
static pointer M5841pointcloud_normals(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5844;}
	local[0]= NIL;
ENT5844:
ENT5843:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5845;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w==NIL) goto CON5848;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[11]); /*make-matrix*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= local[0];
WHL5850:
	if (local[4]==NIL) goto WHX5851;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[1];
	local[6]= local[2];
	local[7]= local[3];
	local[8]= T;
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,4,local+5,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[2] = w;
	goto WHL5850;
WHX5851:
	local[5]= NIL;
BLK5852:
	w = NIL;
	argv[0]->c.obj.iv[10] = local[1];
	w = argv[0]->c.obj.iv[10];
	local[1]= w;
	goto CON5847;
CON5848:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[5])(ctx,1,local+1,&ftab[5],fqv[25]); /*matrixp*/
	if (w==NIL) goto CON5854;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[8]); /*array-dimension*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[11]); /*make-matrix*/
	local[1]= w;
	local[2]= local[1]->c.obj.iv[1];
	local[3]= local[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)VECREPLACE(ctx,2,local+2); /*system::vector-replace*/
	argv[0]->c.obj.iv[10] = local[1];
	w = argv[0]->c.obj.iv[10];
	local[1]= w;
	goto CON5847;
CON5854:
	local[1]= NIL;
CON5847:
	goto IF5846;
IF5845:
	local[1]= NIL;
IF5846:
	w = argv[0]->c.obj.iv[10];
	local[0]= w;
BLK5842:
	ctx->vsp=local; return(local[0]);}

/*:curvatures*/
static pointer M5855pointcloud_curvatures(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5858;}
	local[0]= NIL;
ENT5858:
ENT5857:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5859;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w==NIL) goto CON5862;
	local[1]= loadglobal(fqv[26]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,2,local+1); /*instantiate*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= local[0];
WHL5864:
	if (local[4]==NIL) goto WHX5865;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[0];
	local[6]= local[2];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)SETELT(ctx,3,local+5); /*setelt*/
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[2] = w;
	goto WHL5864;
WHX5865:
	local[5]= NIL;
BLK5866:
	w = NIL;
	argv[0]->c.obj.iv[11] = local[1];
	w = argv[0]->c.obj.iv[11];
	local[1]= w;
	goto CON5861;
CON5862:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)VECTORP(ctx,1,local+1); /*vectorp*/
	if (w==NIL) goto CON5868;
	local[1]= loadglobal(fqv[26]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,2,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)VECREPLACE(ctx,2,local+2); /*system::vector-replace*/
	argv[0]->c.obj.iv[11] = local[1];
	w = argv[0]->c.obj.iv[11];
	local[1]= w;
	goto CON5861;
CON5868:
	local[1]= NIL;
CON5861:
	goto IF5860;
IF5859:
	local[1]= NIL;
IF5860:
	w = argv[0]->c.obj.iv[11];
	local[0]= w;
BLK5856:
	ctx->vsp=local; return(local[0]);}

/*:point-list*/
static pointer M5869pointcloud_point_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5872;}
	local[0]= NIL;
ENT5872:
ENT5871:
	if (n>3) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= argv[0];
	local[5]= fqv[15];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
WHL5874:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX5875;
	local[5]= argv[0]->c.obj.iv[8];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(*ftab[4])(ctx,2,local+5,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[2] = w;
	if (local[0]==NIL) goto AND5879;
	local[5]= local[2];
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[6])(ctx,1,local+5,&ftab[6],fqv[27]); /*c-isnan*/
	if (w==NIL) goto AND5879;
	goto IF5877;
AND5879:
	local[5]= local[2];
	w = local[1];
	ctx->vsp=local+6;
	local[1] = cons(ctx,local[5],w);
	local[5]= local[1];
	goto IF5878;
IF5877:
	local[5]= NIL;
IF5878:
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL5874;
WHX5875:
	local[5]= NIL;
BLK5876:
	w = NIL;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)REVERSE(ctx,1,local+3); /*reverse*/
	local[0]= w;
BLK5870:
	ctx->vsp=local; return(local[0]);}

/*:color-list*/
static pointer M5880pointcloud_color_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[9]==NIL) goto IF5882;
	local[0]= NIL;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0]->c.obj.iv[9];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(*ftab[1])(ctx,2,local+2,&ftab[1],fqv[8]); /*array-dimension*/
	local[2]= w;
WHL5885:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX5886;
	local[3]= argv[0]->c.obj.iv[9];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[4])(ctx,2,local+3,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[3]= w;
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL5885;
WHX5886:
	local[3]= NIL;
BLK5887:
	w = NIL;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)REVERSE(ctx,1,local+1); /*reverse*/
	local[0]= w;
	goto IF5883;
IF5882:
	local[0]= NIL;
IF5883:
	w = local[0];
	local[0]= w;
BLK5881:
	ctx->vsp=local; return(local[0]);}

/*:normal-list*/
static pointer M5888pointcloud_normal_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[10]==NIL) goto IF5890;
	local[0]= NIL;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0]->c.obj.iv[10];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(*ftab[1])(ctx,2,local+2,&ftab[1],fqv[8]); /*array-dimension*/
	local[2]= w;
WHL5893:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX5894;
	local[3]= argv[0]->c.obj.iv[10];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[4])(ctx,2,local+3,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[3]= w;
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL5893;
WHX5894:
	local[3]= NIL;
BLK5895:
	w = NIL;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)REVERSE(ctx,1,local+1); /*reverse*/
	local[0]= w;
	goto IF5891;
IF5890:
	local[0]= NIL;
IF5891:
	w = local[0];
	local[0]= w;
BLK5889:
	ctx->vsp=local; return(local[0]);}

/*:curvature-list*/
static pointer M5896pointcloud_curvature_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[11]==NIL) goto IF5898;
	local[0]= NIL;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0]->c.obj.iv[11];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
WHL5901:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX5902;
	local[3]= argv[0]->c.obj.iv[11];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL5901;
WHX5902:
	local[3]= NIL;
BLK5903:
	w = NIL;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)REVERSE(ctx,1,local+1); /*reverse*/
	local[0]= w;
	goto IF5899;
IF5898:
	local[0]= NIL;
IF5899:
	w = local[0];
	local[0]= w;
BLK5897:
	ctx->vsp=local; return(local[0]);}

/*:centroid*/
static pointer M5904pointcloud_centroid(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[8];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[7])(ctx,2,local+1,&ftab[7],fqv[28]); /*vector-array-mean*/
	w = local[0];
	local[0]= w;
BLK5905:
	ctx->vsp=local; return(local[0]);}

/*:set-color*/
static pointer M5906pointcloud_set_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT5909;}
	local[0]= NIL;
ENT5909:
ENT5908:
	if (n>4) maerror();
	if (argv[2]==NIL) goto IF5910;
	local[1]= argv[0];
	local[2]= fqv[29];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF5911;
IF5910:
	local[1]= NIL;
IF5911:
	if (local[0]==NIL) goto IF5912;
	local[1]= argv[0];
	local[2]= fqv[30];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF5913;
IF5912:
	local[1]= NIL;
IF5913:
	w = local[1];
	local[0]= w;
BLK5907:
	ctx->vsp=local; return(local[0]);}

/*:point-color*/
static pointer M5914pointcloud_point_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5917;}
	local[0]= NIL;
ENT5917:
ENT5916:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5918;
	argv[0]->c.obj.iv[12] = local[0];
	local[1]= argv[0]->c.obj.iv[12];
	goto IF5919;
IF5918:
	local[1]= NIL;
IF5919:
	w = argv[0]->c.obj.iv[12];
	local[0]= w;
BLK5915:
	ctx->vsp=local; return(local[0]);}

/*:point-size*/
static pointer M5920pointcloud_point_size(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5923;}
	local[0]= NIL;
ENT5923:
ENT5922:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5924;
	argv[0]->c.obj.iv[13] = local[0];
	local[1]= argv[0]->c.obj.iv[13];
	goto IF5925;
IF5924:
	local[1]= NIL;
IF5925:
	w = argv[0]->c.obj.iv[13];
	local[0]= w;
BLK5921:
	ctx->vsp=local; return(local[0]);}

/*:axis-length*/
static pointer M5926pointcloud_axis_length(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5929;}
	local[0]= NIL;
ENT5929:
ENT5928:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5930;
	argv[0]->c.obj.iv[15] = local[0];
	local[1]= argv[0]->c.obj.iv[15];
	goto IF5931;
IF5930:
	local[1]= NIL;
IF5931:
	w = argv[0]->c.obj.iv[15];
	local[0]= w;
BLK5927:
	ctx->vsp=local; return(local[0]);}

/*:axis-width*/
static pointer M5932pointcloud_axis_width(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5935;}
	local[0]= NIL;
ENT5935:
ENT5934:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF5936;
	argv[0]->c.obj.iv[14] = local[0];
	local[1]= argv[0]->c.obj.iv[14];
	goto IF5937;
IF5936:
	local[1]= NIL;
IF5937:
	w = argv[0]->c.obj.iv[14];
	local[0]= w;
BLK5933:
	ctx->vsp=local; return(local[0]);}

/*:append*/
static pointer M5938pointcloud_append(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[31], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY5940;
	local[0] = T;
KEY5940:
	w = argv[2];
	if (!!iscons(w)) goto IF5941;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	argv[2] = w;
	local[1]= argv[2];
	goto IF5942;
IF5941:
	local[1]= NIL;
IF5942:
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	local[5]= NIL;
	local[6]= NIL;
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[7]= w;
	local[8]= argv[2];
	ctx->vsp=local+9;
	w=(pointer)APPEND(ctx,2,local+7); /*append*/
	local[7]= w;
WHL5944:
	if (local[7]==NIL) goto WHX5945;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= local[4];
	local[9]= local[6];
	local[10]= fqv[1];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(*ftab[1])(ctx,2,local+9,&ftab[1],fqv[8]); /*array-dimension*/
	local[9]= w;
	if (w!=NIL) goto OR5948;
	local[9]= makeint((eusinteger_t)0L);
OR5948:
	local[10]= local[6];
	local[11]= fqv[2];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(*ftab[1])(ctx,2,local+10,&ftab[1],fqv[8]); /*array-dimension*/
	local[10]= w;
	if (w!=NIL) goto OR5949;
	local[10]= makeint((eusinteger_t)0L);
OR5949:
	local[11]= local[6];
	local[12]= fqv[3];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(*ftab[1])(ctx,2,local+11,&ftab[1],fqv[8]); /*array-dimension*/
	local[11]= w;
	if (w!=NIL) goto OR5950;
	local[11]= makeint((eusinteger_t)0L);
OR5950:
	ctx->vsp=local+12;
	w=(pointer)MAX(ctx,3,local+9); /*max*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[4] = w;
	local[8]= local[1];
	local[9]= local[6];
	local[10]= fqv[1];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(*ftab[1])(ctx,2,local+9,&ftab[1],fqv[8]); /*array-dimension*/
	local[9]= w;
	if (w!=NIL) goto OR5951;
	local[9]= makeint((eusinteger_t)0L);
OR5951:
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[1] = w;
	local[8]= local[2];
	local[9]= local[6];
	local[10]= fqv[2];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(*ftab[1])(ctx,2,local+9,&ftab[1],fqv[8]); /*array-dimension*/
	local[9]= w;
	if (w!=NIL) goto OR5952;
	local[9]= makeint((eusinteger_t)0L);
OR5952:
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[2] = w;
	local[8]= local[3];
	local[9]= local[6];
	local[10]= fqv[3];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(*ftab[1])(ctx,2,local+9,&ftab[1],fqv[8]); /*array-dimension*/
	local[9]= w;
	if (w!=NIL) goto OR5953;
	local[9]= makeint((eusinteger_t)0L);
OR5953:
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[3] = w;
	goto WHL5944;
WHX5945:
	local[8]= NIL;
BLK5946:
	w = NIL;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= NIL;
	local[10]= NIL;
	local[11]= NIL;
	local[12]= makeint((eusinteger_t)0L);
	local[13]= NIL;
	local[14]= local[1];
	local[15]= makeint((eusinteger_t)0L);
	ctx->vsp=local+16;
	w=(pointer)GREATERP(ctx,2,local+14); /*>*/
	if (w==NIL) goto IF5954;
	local[14]= local[4];
	local[15]= makeint((eusinteger_t)3L);
	ctx->vsp=local+16;
	w=(*ftab[2])(ctx,2,local+14,&ftab[2],fqv[11]); /*make-matrix*/
	local[14]= w;
	goto IF5955;
IF5954:
	local[14]= NIL;
IF5955:
	local[6] = local[14];
	local[14]= local[2];
	local[15]= makeint((eusinteger_t)0L);
	ctx->vsp=local+16;
	w=(pointer)GREATERP(ctx,2,local+14); /*>*/
	if (w==NIL) goto IF5956;
	local[14]= local[4];
	local[15]= makeint((eusinteger_t)3L);
	ctx->vsp=local+16;
	w=(*ftab[2])(ctx,2,local+14,&ftab[2],fqv[11]); /*make-matrix*/
	local[14]= w;
	goto IF5957;
IF5956:
	local[14]= NIL;
IF5957:
	local[7] = local[14];
	local[14]= local[3];
	local[15]= makeint((eusinteger_t)0L);
	ctx->vsp=local+16;
	w=(pointer)GREATERP(ctx,2,local+14); /*>*/
	if (w==NIL) goto IF5958;
	local[14]= local[4];
	local[15]= makeint((eusinteger_t)3L);
	ctx->vsp=local+16;
	w=(*ftab[2])(ctx,2,local+14,&ftab[2],fqv[11]); /*make-matrix*/
	local[14]= w;
	goto IF5959;
IF5958:
	local[14]= NIL;
IF5959:
	local[8] = local[14];
	local[14]= NIL;
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	local[15]= w;
	local[16]= argv[2];
	ctx->vsp=local+17;
	w=(pointer)APPEND(ctx,2,local+15); /*append*/
	local[15]= w;
WHL5961:
	if (local[15]==NIL) goto WHX5962;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15] = (w)->c.cons.cdr;
	w = local[16];
	local[14] = w;
	local[16]= local[14];
	local[17]= fqv[1];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[9] = w;
	local[16]= local[14];
	local[17]= fqv[2];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[10] = w;
	local[16]= local[14];
	local[17]= fqv[3];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[11] = w;
	local[16]= local[9];
	local[17]= makeint((eusinteger_t)0L);
	ctx->vsp=local+18;
	w=(*ftab[1])(ctx,2,local+16,&ftab[1],fqv[8]); /*array-dimension*/
	local[16]= w;
	if (w!=NIL) goto OR5965;
	local[16]= makeint((eusinteger_t)0L);
OR5965:
	local[17]= local[10];
	local[18]= makeint((eusinteger_t)0L);
	ctx->vsp=local+19;
	w=(*ftab[1])(ctx,2,local+17,&ftab[1],fqv[8]); /*array-dimension*/
	local[17]= w;
	if (w!=NIL) goto OR5966;
	local[17]= makeint((eusinteger_t)0L);
OR5966:
	local[18]= local[11];
	local[19]= makeint((eusinteger_t)0L);
	ctx->vsp=local+20;
	w=(*ftab[1])(ctx,2,local+18,&ftab[1],fqv[8]); /*array-dimension*/
	local[18]= w;
	if (w!=NIL) goto OR5967;
	local[18]= makeint((eusinteger_t)0L);
OR5967:
	ctx->vsp=local+19;
	w=(pointer)MAX(ctx,3,local+16); /*max*/
	local[13] = w;
	if (local[9]==NIL) goto IF5968;
	local[16]= local[6]->c.obj.iv[1];
	local[17]= local[9]->c.obj.iv[1];
	local[18]= makeint((eusinteger_t)3L);
	local[19]= local[12];
	ctx->vsp=local+20;
	w=(pointer)TIMES(ctx,2,local+18); /***/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)VECREPLACE(ctx,3,local+16); /*system::vector-replace*/
	local[16]= w;
	goto IF5969;
IF5968:
	local[16]= NIL;
IF5969:
	if (local[10]==NIL) goto IF5970;
	local[16]= local[7]->c.obj.iv[1];
	local[17]= local[10]->c.obj.iv[1];
	local[18]= makeint((eusinteger_t)3L);
	local[19]= local[12];
	ctx->vsp=local+20;
	w=(pointer)TIMES(ctx,2,local+18); /***/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)VECREPLACE(ctx,3,local+16); /*system::vector-replace*/
	local[16]= w;
	goto IF5971;
IF5970:
	local[16]= NIL;
IF5971:
	if (local[11]==NIL) goto IF5972;
	local[16]= local[8]->c.obj.iv[1];
	local[17]= local[11]->c.obj.iv[1];
	local[18]= makeint((eusinteger_t)3L);
	local[19]= local[12];
	ctx->vsp=local+20;
	w=(pointer)TIMES(ctx,2,local+18); /***/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)VECREPLACE(ctx,3,local+16); /*system::vector-replace*/
	local[16]= w;
	goto IF5973;
IF5972:
	local[16]= NIL;
IF5973:
	local[16]= local[12];
	local[17]= local[13];
	ctx->vsp=local+18;
	w=(pointer)PLUS(ctx,2,local+16); /*+*/
	local[12] = w;
	goto WHL5961;
WHX5962:
	local[16]= NIL;
BLK5963:
	w = NIL;
	if (local[0]==NIL) goto IF5974;
	local[14]= loadglobal(fqv[32]);
	ctx->vsp=local+15;
	w=(pointer)INSTANTIATE(ctx,1,local+14); /*instantiate*/
	local[14]= w;
	local[15]= local[14];
	local[16]= fqv[14];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	w = local[14];
	local[5] = w;
	local[14]= local[5];
	goto IF5975;
IF5974:
	local[5] = argv[0];
	local[14]= local[5];
IF5975:
	local[14]= local[5];
	local[15]= fqv[1];
	local[16]= local[6];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= local[5];
	local[15]= fqv[2];
	local[16]= local[7];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= local[5];
	local[15]= fqv[3];
	local[16]= local[8];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= local[5];
	local[15]= fqv[7];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= local[5];
	local[15]= fqv[33];
	local[16]= argv[0];
	local[17]= fqv[33];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	local[17]= fqv[34];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= local[5];
	local[15]= fqv[29];
	local[16]= argv[0];
	local[17]= fqv[29];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= local[5];
	local[15]= fqv[35];
	local[16]= argv[0];
	local[17]= fqv[35];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= local[5];
	local[15]= fqv[36];
	local[16]= argv[0];
	local[17]= fqv[36];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[14]= local[5];
	local[15]= fqv[37];
	local[16]= argv[0];
	local[17]= fqv[37];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	w = local[5];
	local[0]= w;
BLK5939:
	ctx->vsp=local; return(local[0]);}

/*:clear-color*/
static pointer M5977pointcloud_clear_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[38];
	ctx->vsp=local+1;
	w=(*ftab[8])(ctx,1,local+0,&ftab[8],fqv[39]); /*warn*/
	local[0]= w;
BLK5978:
	ctx->vsp=local; return(local[0]);}

/*:clear-normal*/
static pointer M5979pointcloud_clear_normal(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[40];
	ctx->vsp=local+1;
	w=(*ftab[8])(ctx,1,local+0,&ftab[8],fqv[39]); /*warn*/
	local[0]= w;
BLK5980:
	ctx->vsp=local; return(local[0]);}

/*:nfilter*/
static pointer M5981pointcloud_nfilter(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5983:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[41]);
	local[2]= argv[0];
	local[3]= fqv[42];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[0]= w;
BLK5982:
	ctx->vsp=local; return(local[0]);}

/*:filter*/
static pointer M5984pointcloud_filter(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST5986:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[43], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY5987;
	local[1] = NIL;
KEY5987:
	local[2]= (pointer)get_sym_func(fqv[41]);
	local[3]= argv[0];
	local[4]= fqv[44];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,4,local+2); /*apply*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= fqv[45];
	local[5]= local[2];
	local[6]= fqv[46];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,5,local+3); /*send*/
	local[0]= w;
BLK5985:
	ctx->vsp=local; return(local[0]);}

/*:filter-with-indices*/
static pointer M5988pointcloud_filter_with_indices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[47], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY5990;
	local[0] = NIL;
KEY5990:
	if (n & (1<<1)) goto KEY5991;
	local[1] = NIL;
KEY5991:
	local[2]= argv[0];
	local[3]= fqv[15];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	if (argv[0]->c.obj.iv[9]==NIL) goto IF5992;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)MKFLTVEC(ctx,3,local+8); /*float-vector*/
	local[8]= w;
	goto IF5993;
IF5992:
	local[8]= NIL;
IF5993:
	if (argv[0]->c.obj.iv[10]==NIL) goto IF5994;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,3,local+9); /*float-vector*/
	local[9]= w;
	goto IF5995;
IF5994:
	local[9]= NIL;
IF5995:
	local[10]= NIL;
	local[11]= makeint((eusinteger_t)0L);
	if (local[1]==NIL) goto IF5996;
	local[12]= NIL;
	local[13]= makeint((eusinteger_t)0L);
	local[14]= local[2];
WHL5999:
	local[15]= local[13];
	w = local[14];
	if ((eusinteger_t)local[15] >= (eusinteger_t)w) goto WHX6000;
	local[15]= local[2];
	local[16]= local[13];
	local[17]= makeint((eusinteger_t)1L);
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,3,local+15); /*-*/
	local[15]= w;
	w = local[12];
	ctx->vsp=local+16;
	local[12] = cons(ctx,local[15],w);
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[13] = w;
	goto WHL5999;
WHX6000:
	local[15]= NIL;
BLK6001:
	w = NIL;
	local[13]= local[12];
	local[14]= argv[2];
	ctx->vsp=local+15;
	w=(*ftab[9])(ctx,2,local+13,&ftab[9],fqv[48]); /*set-difference*/
	argv[2] = w;
	w = argv[2];
	local[12]= w;
	goto IF5997;
IF5996:
	local[12]= NIL;
IF5997:
	local[12]= argv[2];
	ctx->vsp=local+13;
	w=(pointer)LENGTH(ctx,1,local+12); /*length*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(*ftab[2])(ctx,2,local+12,&ftab[2],fqv[11]); /*make-matrix*/
	local[3] = w;
	if (argv[0]->c.obj.iv[9]==NIL) goto IF6002;
	local[12]= argv[2];
	ctx->vsp=local+13;
	w=(pointer)LENGTH(ctx,1,local+12); /*length*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(*ftab[2])(ctx,2,local+12,&ftab[2],fqv[11]); /*make-matrix*/
	local[12]= w;
	goto IF6003;
IF6002:
	local[12]= NIL;
IF6003:
	local[4] = local[12];
	if (argv[0]->c.obj.iv[10]==NIL) goto IF6004;
	local[12]= argv[2];
	ctx->vsp=local+13;
	w=(pointer)LENGTH(ctx,1,local+12); /*length*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(*ftab[2])(ctx,2,local+12,&ftab[2],fqv[11]); /*make-matrix*/
	local[12]= w;
	goto IF6005;
IF6004:
	local[12]= NIL;
IF6005:
	local[5] = local[12];
	if (argv[0]->c.obj.iv[11]==NIL) goto IF6006;
	local[12]= loadglobal(fqv[26]);
	local[13]= argv[2];
	ctx->vsp=local+14;
	w=(pointer)LENGTH(ctx,1,local+13); /*length*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)INSTANTIATE(ctx,2,local+12); /*instantiate*/
	local[12]= w;
	goto IF6007;
IF6006:
	local[12]= NIL;
IF6007:
	local[6] = local[12];
	local[12]= argv[2];
	ctx->vsp=local+13;
	w=(pointer)LISTP(ctx,1,local+12); /*listp*/
	if (w==NIL) goto CON6009;
	local[12]= NIL;
	local[13]= argv[2];
WHL6011:
	if (local[13]==NIL) goto WHX6012;
	w=local[13];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	w=local[13];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13] = (w)->c.cons.cdr;
	w = local[14];
	local[12] = w;
	local[14]= argv[0]->c.obj.iv[8];
	local[15]= local[12];
	local[16]= local[7];
	ctx->vsp=local+17;
	w=(*ftab[4])(ctx,3,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[14]= local[3];
	local[15]= local[11];
	local[16]= local[7];
	local[17]= T;
	ctx->vsp=local+18;
	w=(*ftab[4])(ctx,4,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	if (argv[0]->c.obj.iv[9]==NIL) goto IF6015;
	local[14]= argv[0]->c.obj.iv[9];
	local[15]= local[12];
	local[16]= local[8];
	ctx->vsp=local+17;
	w=(*ftab[4])(ctx,3,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[14]= local[4];
	local[15]= local[11];
	local[16]= local[8];
	local[17]= T;
	ctx->vsp=local+18;
	w=(*ftab[4])(ctx,4,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[14]= w;
	goto IF6016;
IF6015:
	local[14]= NIL;
IF6016:
	if (argv[0]->c.obj.iv[10]==NIL) goto IF6017;
	local[14]= argv[0]->c.obj.iv[10];
	local[15]= local[12];
	local[16]= local[9];
	ctx->vsp=local+17;
	w=(*ftab[4])(ctx,3,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[14]= local[5];
	local[15]= local[11];
	local[16]= local[9];
	local[17]= T;
	ctx->vsp=local+18;
	w=(*ftab[4])(ctx,4,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[14]= w;
	goto IF6018;
IF6017:
	local[14]= NIL;
IF6018:
	if (argv[0]->c.obj.iv[11]==NIL) goto IF6019;
	local[14]= local[6];
	local[15]= local[11];
	local[16]= argv[0]->c.obj.iv[11];
	local[17]= local[12];
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SETELT(ctx,3,local+14); /*setelt*/
	local[14]= w;
	goto IF6020;
IF6019:
	local[14]= NIL;
IF6020:
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)ADD1(ctx,1,local+14); /*1+*/
	local[11] = w;
	goto WHL6011;
WHX6012:
	local[14]= NIL;
BLK6013:
	w = NIL;
	local[12]= w;
	goto CON6008;
CON6009:
	local[12]= NIL;
	local[13]= makeint((eusinteger_t)0L);
	local[14]= argv[2];
	ctx->vsp=local+15;
	w=(pointer)LENGTH(ctx,1,local+14); /*length*/
	local[14]= w;
WHL6023:
	local[15]= local[13];
	w = local[14];
	if ((eusinteger_t)local[15] >= (eusinteger_t)w) goto WHX6024;
	local[15]= argv[2];
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[12] = w;
	local[15]= argv[0]->c.obj.iv[8];
	local[16]= local[12];
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(*ftab[4])(ctx,3,local+15,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[15]= local[3];
	local[16]= local[11];
	local[17]= local[7];
	local[18]= T;
	ctx->vsp=local+19;
	w=(*ftab[4])(ctx,4,local+15,&ftab[4],fqv[24]); /*c-matrix-row*/
	if (argv[0]->c.obj.iv[9]==NIL) goto IF6026;
	local[15]= argv[0]->c.obj.iv[9];
	local[16]= local[12];
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(*ftab[4])(ctx,3,local+15,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[15]= local[4];
	local[16]= local[11];
	local[17]= local[8];
	local[18]= T;
	ctx->vsp=local+19;
	w=(*ftab[4])(ctx,4,local+15,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[15]= w;
	goto IF6027;
IF6026:
	local[15]= NIL;
IF6027:
	if (argv[0]->c.obj.iv[10]==NIL) goto IF6028;
	local[15]= argv[0]->c.obj.iv[10];
	local[16]= local[12];
	local[17]= local[9];
	ctx->vsp=local+18;
	w=(*ftab[4])(ctx,3,local+15,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[15]= local[5];
	local[16]= local[11];
	local[17]= local[9];
	local[18]= T;
	ctx->vsp=local+19;
	w=(*ftab[4])(ctx,4,local+15,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[15]= w;
	goto IF6029;
IF6028:
	local[15]= NIL;
IF6029:
	if (argv[0]->c.obj.iv[11]==NIL) goto IF6030;
	local[15]= local[6];
	local[16]= local[11];
	local[17]= argv[0]->c.obj.iv[11];
	local[18]= local[12];
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)SETELT(ctx,3,local+15); /*setelt*/
	local[15]= w;
	goto IF6031;
IF6030:
	local[15]= NIL;
IF6031:
	local[15]= local[11];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[11] = w;
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[13] = w;
	goto WHL6023;
WHX6024:
	local[15]= NIL;
BLK6025:
	w = NIL;
	local[12]= w;
	goto CON6008;
CON6021:
	local[12]= NIL;
CON6008:
	if (local[0]==NIL) goto IF6032;
	local[12]= loadglobal(fqv[32]);
	ctx->vsp=local+13;
	w=(pointer)INSTANTIATE(ctx,1,local+12); /*instantiate*/
	local[12]= w;
	local[13]= local[12];
	local[14]= fqv[14];
	local[15]= fqv[1];
	local[16]= local[3];
	local[17]= fqv[2];
	local[18]= local[4];
	local[19]= fqv[3];
	local[20]= local[5];
	local[21]= fqv[4];
	local[22]= local[6];
	ctx->vsp=local+23;
	w=(pointer)SEND(ctx,10,local+13); /*send*/
	w = local[12];
	local[12]= w;
	local[13]= argv[0]->c.obj.iv[19];
	local[14]= fqv[34];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	local[14]= w;
	*(ovafptr(local[12],fqv[49])) = local[14];
	local[13]= local[12];
	local[14]= fqv[50];
	local[15]= argv[0];
	local[16]= fqv[51];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	w = local[12];
	local[12]= w;
	goto IF6033;
IF6032:
	argv[0]->c.obj.iv[8] = local[3];
	if (local[4]==NIL) goto IF6035;
	argv[0]->c.obj.iv[9] = local[4];
	local[12]= argv[0]->c.obj.iv[9];
	goto IF6036;
IF6035:
	local[12]= NIL;
IF6036:
	if (local[5]==NIL) goto IF6037;
	argv[0]->c.obj.iv[10] = local[5];
	local[12]= argv[0]->c.obj.iv[10];
	goto IF6038;
IF6037:
	local[12]= NIL;
IF6038:
	if (local[6]==NIL) goto IF6039;
	argv[0]->c.obj.iv[11] = local[6];
	local[12]= argv[0]->c.obj.iv[11];
	goto IF6040;
IF6039:
	local[12]= NIL;
IF6040:
	local[12]= argv[0];
	local[13]= fqv[7];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= argv[0];
IF6033:
	w = local[12];
	local[0]= w;
BLK5989:
	ctx->vsp=local; return(local[0]);}

/*:filtered-indices*/
static pointer M6041pointcloud_filtered_indices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[52], &argv[2], n-2, local+0, 1);
	if (n & (1<<0)) goto KEY6043;
	local[0] = NIL;
KEY6043:
	if (n & (1<<1)) goto KEY6044;
	local[1] = NIL;
KEY6044:
	if (n & (1<<2)) goto KEY6045;
	local[2] = NIL;
KEY6045:
	if (n & (1<<3)) goto KEY6046;
	local[3] = NIL;
KEY6046:
	if (n & (1<<4)) goto KEY6047;
	local[4] = NIL;
KEY6047:
	if (n & (1<<5)) goto KEY6048;
	local[5] = NIL;
KEY6048:
	if (n & (1<<6)) goto KEY6049;
	local[6] = NIL;
KEY6049:
	local[7]= NIL;
	local[8]= argv[0];
	local[9]= fqv[15];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= loadglobal(fqv[26]);
	local[10]= makeint((eusinteger_t)3L);
	ctx->vsp=local+11;
	w=(pointer)INSTANTIATE(ctx,2,local+9); /*instantiate*/
	local[9]= w;
	if (argv[0]->c.obj.iv[9]==NIL) goto IF6050;
	local[10]= loadglobal(fqv[26]);
	local[11]= makeint((eusinteger_t)3L);
	ctx->vsp=local+12;
	w=(pointer)INSTANTIATE(ctx,2,local+10); /*instantiate*/
	local[10]= w;
	goto IF6051;
IF6050:
	local[10]= NIL;
IF6051:
	if (argv[0]->c.obj.iv[10]==NIL) goto IF6052;
	local[11]= loadglobal(fqv[26]);
	local[12]= makeint((eusinteger_t)3L);
	ctx->vsp=local+13;
	w=(pointer)INSTANTIATE(ctx,2,local+11); /*instantiate*/
	local[11]= w;
	goto IF6053;
IF6052:
	local[11]= NIL;
IF6053:
	local[12]= makeint((eusinteger_t)0L);
	local[13]= local[8];
WHL6055:
	local[14]= local[12];
	w = local[13];
	if ((eusinteger_t)local[14] >= (eusinteger_t)w) goto WHX6056;
	local[14]= argv[0]->c.obj.iv[8];
	local[15]= local[12];
	local[16]= local[9];
	ctx->vsp=local+17;
	w=(*ftab[4])(ctx,3,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	if (local[10]==NIL) goto IF6058;
	local[14]= argv[0]->c.obj.iv[9];
	local[15]= local[12];
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(*ftab[4])(ctx,3,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[14]= w;
	goto IF6059;
IF6058:
	local[14]= NIL;
IF6059:
	if (local[11]==NIL) goto IF6060;
	local[14]= argv[0]->c.obj.iv[10];
	local[15]= local[12];
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(*ftab[4])(ctx,3,local+14,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[14]= w;
	goto IF6061;
IF6060:
	local[14]= NIL;
IF6061:
	if (local[0]==NIL) goto OR6064;
	local[14]= local[0];
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)FUNCALL(ctx,2,local+14); /*funcall*/
	if (w!=NIL) goto OR6064;
	goto IF6062;
OR6064:
	if (local[1]==NIL) goto OR6065;
	if (local[10]==NIL) goto OR6065;
	local[14]= local[1];
	local[15]= local[10];
	ctx->vsp=local+16;
	w=(pointer)FUNCALL(ctx,2,local+14); /*funcall*/
	if (w!=NIL) goto OR6065;
	goto IF6062;
OR6065:
	if (local[2]==NIL) goto OR6066;
	if (local[11]==NIL) goto OR6066;
	local[14]= local[2];
	local[15]= local[11];
	ctx->vsp=local+16;
	w=(pointer)FUNCALL(ctx,2,local+14); /*funcall*/
	if (w!=NIL) goto OR6066;
	goto IF6062;
OR6066:
	if (local[3]==NIL) goto OR6067;
	if (local[10]==NIL) goto OR6067;
	local[14]= local[3];
	local[15]= local[9];
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(pointer)FUNCALL(ctx,3,local+14); /*funcall*/
	if (w!=NIL) goto OR6067;
	goto IF6062;
OR6067:
	if (local[4]==NIL) goto OR6068;
	if (local[11]==NIL) goto OR6068;
	local[14]= local[4];
	local[15]= local[9];
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(pointer)FUNCALL(ctx,3,local+14); /*funcall*/
	if (w!=NIL) goto OR6068;
	goto IF6062;
OR6068:
	if (local[5]==NIL) goto OR6069;
	if (local[10]==NIL) goto OR6069;
	if (local[11]==NIL) goto OR6069;
	local[14]= local[5];
	local[15]= local[9];
	local[16]= local[10];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)FUNCALL(ctx,4,local+14); /*funcall*/
	if (w!=NIL) goto OR6069;
	goto IF6062;
OR6069:
	if (local[6]!=NIL) goto IF6070;
	local[14]= local[12];
	w = local[7];
	ctx->vsp=local+15;
	local[7] = cons(ctx,local[14],w);
	local[14]= local[7];
	goto IF6071;
IF6070:
	local[14]= NIL;
IF6071:
	goto IF6063;
IF6062:
	if (local[6]==NIL) goto IF6072;
	local[14]= local[12];
	w = local[7];
	ctx->vsp=local+15;
	local[7] = cons(ctx,local[14],w);
	local[14]= local[7];
	goto IF6073;
IF6072:
	local[14]= NIL;
IF6073:
IF6063:
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(pointer)ADD1(ctx,1,local+14); /*1+*/
	local[12] = w;
	goto WHL6055;
WHX6056:
	local[14]= NIL;
BLK6057:
	w = NIL;
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)NREVERSE(ctx,1,local+12); /*nreverse*/
	local[0]= w;
BLK6042:
	ctx->vsp=local; return(local[0]);}

/*:viewangle-inlier*/
static pointer M6074pointcloud_viewangle_inlier(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[53], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY6076;
	local[0] = makeflt(0.0000000000000000000000e+00);
KEY6076:
	if (n & (1<<1)) goto KEY6077;
	local[1] = makeflt(4.4000000000000000000000e+01);
KEY6077:
	if (n & (1<<2)) goto KEY6078;
	local[2] = makeflt(3.5000000000000000000000e+01);
KEY6078:
	local[3]= local[1];
	local[4]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+5;
	w=(pointer)QUOTIENT(ctx,2,local+3); /*/*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[10])(ctx,1,local+3,&ftab[10],fqv[54]); /*deg2rad*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)TAN(ctx,1,local+3); /*tan*/
	local[3]= w;
	local[4]= local[2];
	local[5]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[10])(ctx,1,local+4,&ftab[10],fqv[54]); /*deg2rad*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)TAN(ctx,1,local+4); /*tan*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[15];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= argv[0]->c.obj.iv[8];
	local[8]= NIL;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[6];
WHL6080:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX6081;
	local[11]= local[7];
	local[12]= local[9];
	local[13]= local[5];
	ctx->vsp=local+14;
	w=(*ftab[4])(ctx,3,local+11,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[11]= local[5];
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)GREATERP(ctx,2,local+11); /*>*/
	if (w==NIL) goto IF6083;
	local[11]= local[5];
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= local[5];
	local[13]= makeint((eusinteger_t)2L);
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)ABS(ctx,1,local+11); /*abs*/
	local[11]= w;
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)LESSP(ctx,2,local+11); /*<*/
	if (w==NIL) goto IF6083;
	local[11]= local[5];
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= local[5];
	local[13]= makeint((eusinteger_t)2L);
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)ABS(ctx,1,local+11); /*abs*/
	local[11]= w;
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)LESSP(ctx,2,local+11); /*<*/
	if (w==NIL) goto IF6083;
	local[11]= local[9];
	w = local[8];
	ctx->vsp=local+12;
	local[8] = cons(ctx,local[11],w);
	local[11]= local[8];
	goto IF6084;
IF6083:
	local[11]= NIL;
IF6084:
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL6080;
WHX6081:
	local[11]= NIL;
BLK6082:
	w = NIL;
	local[9]= local[8];
	ctx->vsp=local+10;
	w=(pointer)NREVERSE(ctx,1,local+9); /*nreverse*/
	local[0]= w;
BLK6075:
	ctx->vsp=local; return(local[0]);}

/*:image-position-inlier*/
static pointer M6085pointcloud_image_position_inlier(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[55], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY6087;
	local[0] = NIL;
KEY6087:
	if (n & (1<<1)) goto KEY6088;
	local[1] = makeint((eusinteger_t)144L);
KEY6088:
	if (n & (1<<2)) goto KEY6089;
	local[2] = makeint((eusinteger_t)176L);
KEY6089:
	if (n & (1<<3)) goto KEY6090;
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)EUSFLOAT(ctx,1,local+6); /*float*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[3] = w;
KEY6090:
	if (n & (1<<4)) goto KEY6091;
	local[6]= local[2];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)EUSFLOAT(ctx,1,local+6); /*float*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[4] = w;
KEY6091:
	if (n & (1<<5)) goto KEY6092;
	local[5] = NIL;
KEY6092:
	local[6]= NIL;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[1];
WHL6094:
	local[9]= local[7];
	w = local[8];
	if ((eusinteger_t)local[9] >= (eusinteger_t)w) goto WHX6095;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[2];
WHL6098:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX6099;
	if (local[0]==NIL) goto IF6101;
	local[11]= local[0];
	local[12]= local[9];
	local[13]= local[7];
	ctx->vsp=local+14;
	w=(pointer)FUNCALL(ctx,3,local+11); /*funcall*/
	if (w==NIL) goto IF6101;
	if (local[5]!=NIL) goto IF6103;
	local[11]= local[7];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	w = local[6];
	ctx->vsp=local+12;
	local[6] = cons(ctx,local[11],w);
	local[11]= local[6];
	goto IF6104;
IF6103:
	local[11]= NIL;
IF6104:
	goto IF6102;
IF6101:
	if (local[5]==NIL) goto IF6105;
	local[11]= local[7];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	w = local[6];
	ctx->vsp=local+12;
	local[6] = cons(ctx,local[11],w);
	local[11]= local[6];
	goto IF6106;
IF6105:
	local[11]= NIL;
IF6106:
IF6102:
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL6098;
WHX6099:
	local[11]= NIL;
BLK6100:
	w = NIL;
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[7] = w;
	goto WHL6094;
WHX6095:
	local[9]= NIL;
BLK6096:
	w = NIL;
	local[7]= local[6];
	ctx->vsp=local+8;
	w=(pointer)NREVERSE(ctx,1,local+7); /*nreverse*/
	local[0]= w;
BLK6086:
	ctx->vsp=local; return(local[0]);}

/*:image-circle-filter*/
static pointer M6107pointcloud_image_circle_filter(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[56], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY6109;
	local[0] = makeint((eusinteger_t)144L);
KEY6109:
	if (n & (1<<1)) goto KEY6110;
	local[1] = makeint((eusinteger_t)176L);
KEY6110:
	if (n & (1<<2)) goto KEY6111;
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)EUSFLOAT(ctx,1,local+6); /*float*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[2] = w;
KEY6111:
	if (n & (1<<3)) goto KEY6112;
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)EUSFLOAT(ctx,1,local+6); /*float*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[3] = w;
KEY6112:
	if (n & (1<<4)) goto KEY6113;
	local[4] = NIL;
KEY6113:
	if (n & (1<<5)) goto KEY6114;
	local[5] = NIL;
KEY6114:
	local[6]= argv[0];
	local[7]= fqv[45];
	local[8]= argv[0];
	local[9]= fqv[57];
	local[10]= fqv[58];
	ctx->vsp=local+11;
	local[11]= makeclosure(codevec,quotevec,CLO6115,env,argv,local);
	local[12]= fqv[10];
	local[13]= local[0];
	local[14]= fqv[9];
	local[15]= local[1];
	local[16]= fqv[59];
	local[17]= local[5];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,10,local+8); /*send*/
	local[8]= w;
	local[9]= fqv[46];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,5,local+6); /*send*/
	local[0]= w;
BLK6108:
	ctx->vsp=local; return(local[0]);}

/*:step-inlier*/
static pointer M6116pointcloud_step_inlier(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[4];
TAG6120:
	local[3]= local[2];
	local[4]= argv[0]->c.obj.iv[17];
	ctx->vsp=local+5;
	w=(pointer)GREQP(ctx,2,local+3); /*>=*/
	if (w==NIL) goto IF6121;
	w = NIL;
	ctx->vsp=local+3;
	local[2]=w;
	goto BLK6119;
	goto IF6122;
IF6121:
	local[3]= NIL;
IF6122:
	local[3]= argv[0]->c.obj.iv[18];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)TIMES(ctx,2,local+3); /***/
	local[1] = w;
	local[3]= argv[3];
TAG6125:
	local[4]= local[3];
	local[5]= argv[0]->c.obj.iv[18];
	ctx->vsp=local+6;
	w=(pointer)GREQP(ctx,2,local+4); /*>=*/
	if (w==NIL) goto IF6126;
	w = NIL;
	ctx->vsp=local+4;
	local[3]=w;
	goto BLK6124;
	goto IF6127;
IF6126:
	local[4]= NIL;
IF6127:
	local[4]= local[3];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[4]= w;
	w = local[0];
	ctx->vsp=local+5;
	local[0] = cons(ctx,local[4],w);
	local[4]= local[3];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[4]= w;
	local[3] = local[4];
	w = NIL;
	ctx->vsp=local+4;
	goto TAG6125;
	w = NIL;
	local[3]= w;
BLK6124:
	local[3]= local[2];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	local[3]= w;
	local[2] = local[3];
	w = NIL;
	ctx->vsp=local+3;
	goto TAG6120;
	w = NIL;
	local[2]= w;
BLK6119:
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)NREVERSE(ctx,1,local+2); /*nreverse*/
	local[0]= w;
BLK6117:
	ctx->vsp=local; return(local[0]);}

/*:step*/
static pointer M6130pointcloud_step(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[60], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY6132;
	local[0] = NIL;
KEY6132:
	if (n & (1<<1)) goto KEY6133;
	local[1] = NIL;
KEY6133:
	local[2]= argv[0]->c.obj.iv[18];
	ctx->vsp=local+3;
	w=(pointer)SUB1(ctx,1,local+2); /*1-*/
	local[2]= w;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)MOD(ctx,2,local+2); /*mod*/
	local[2]= w;
	local[3]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FLOOR(ctx,1,local+2); /*floor*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[17];
	ctx->vsp=local+4;
	w=(pointer)SUB1(ctx,1,local+3); /*1-*/
	local[3]= w;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)MOD(ctx,2,local+3); /*mod*/
	local[3]= w;
	local[4]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+5;
	w=(pointer)QUOTIENT(ctx,2,local+3); /*/*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)FLOOR(ctx,1,local+3); /*floor*/
	local[3]= w;
	local[4]= argv[0]->c.obj.iv[18];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[4]= w;
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[17];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[5]= w;
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[61];
	local[8]= argv[2];
	local[9]= local[2];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,5,local+6); /*send*/
	local[6]= w;
	local[7]= local[0];
	if (local[7]!=NIL) goto CON6134;
CON6135:
	local[7]= argv[0];
	local[8]= fqv[45];
	local[9]= local[6];
	local[10]= fqv[46];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,5,local+7); /*send*/
	local[7]= w;
	local[8]= local[7];
	local[9]= fqv[15];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= local[7];
	local[9]= fqv[7];
	local[10]= local[4];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	w = local[7];
	local[7]= w;
	goto CON6134;
CON6136:
	local[7]= NIL;
CON6134:
	w = local[7];
	local[0]= w;
BLK6131:
	ctx->vsp=local; return(local[0]);}

/*:generate-color-histogram-hs*/
static pointer M6137pointcloud_generate_color_histogram_hs(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[62], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY6139;
	local[0] = makeint((eusinteger_t)9L);
KEY6139:
	if (n & (1<<1)) goto KEY6140;
	local[1] = makeint((eusinteger_t)7L);
KEY6140:
	if (n & (1<<2)) goto KEY6141;
	local[8]= makeflt(3.6000000000000000000000e+02);
	w = makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+9;
	local[2] = cons(ctx,local[8],w);
KEY6141:
	if (n & (1<<3)) goto KEY6142;
	local[8]= makeflt(1.0000000000000000000000e+00);
	w = makeflt(1.4999999999999991118216e-01);
	ctx->vsp=local+9;
	local[3] = cons(ctx,local[8],w);
KEY6142:
	if (n & (1<<4)) goto KEY6143;
	local[8]= makeflt(1.0000000000000000000000e+00);
	w = makeflt(2.5000000000000000000000e-01);
	ctx->vsp=local+9;
	local[4] = cons(ctx,local[8],w);
KEY6143:
	if (n & (1<<5)) goto KEY6144;
	local[5] = NIL;
KEY6144:
	if (n & (1<<6)) goto KEY6145;
	local[6] = makeflt(2.5500000000000000000000e+02);
KEY6145:
	if (n & (1<<7)) goto KEY6146;
	local[7] = makeint((eusinteger_t)1L);
KEY6146:
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,FLET6147,env,argv,local);
	local[9]= argv[0];
	local[10]= fqv[2];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= local[0];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,2,local+10); /*list*/
	local[10]= w;
	local[11]= fqv[63];
	local[12]= loadglobal(fqv[26]);
	ctx->vsp=local+13;
	w=(*ftab[11])(ctx,3,local+10,&ftab[11],fqv[64]); /*make-array*/
	local[10]= w;
	local[11]= local[10]->c.obj.iv[1];
	local[12]= loadglobal(fqv[26]);
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(pointer)INSTANTIATE(ctx,2,local+12); /*instantiate*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)0L);
	local[14]= makeint((eusinteger_t)0L);
	local[15]= argv[0];
	local[16]= fqv[15];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
WHL6149:
	local[16]= local[14];
	w = local[15];
	if ((eusinteger_t)local[16] >= (eusinteger_t)w) goto WHX6150;
	local[16]= local[9];
	local[17]= local[14];
	local[18]= local[12];
	ctx->vsp=local+19;
	w=(*ftab[4])(ctx,3,local+16,&ftab[4],fqv[24]); /*c-matrix-row*/
	if (local[6]==NIL) goto IF6152;
	local[16]= local[6];
	local[17]= local[12];
	local[18]= local[12];
	ctx->vsp=local+19;
	w=(pointer)SCALEVEC(ctx,3,local+16); /*scale*/
	local[16]= w;
	goto IF6153;
IF6152:
	local[16]= NIL;
IF6153:
	local[16]= local[12];
	ctx->vsp=local+17;
	w=(*ftab[12])(ctx,1,local+16,&ftab[12],fqv[65]); /*rgb2his*/
	local[16]= w;
	if (local[5]==NIL) goto IF6154;
	local[17]= local[16];
	local[18]= makeint((eusinteger_t)0L);
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	local[18]= local[17];
	local[19]= local[5];
	ctx->vsp=local+20;
	w=(pointer)PLUS(ctx,2,local+18); /*+*/
	local[18]= w;
	local[19]= makeflt(3.6000000000000000000000e+02);
	ctx->vsp=local+20;
	w=(pointer)GREQP(ctx,2,local+18); /*>=*/
	if (w==NIL) goto IF6156;
	local[18]= local[16];
	local[19]= makeint((eusinteger_t)0L);
	local[20]= local[17];
	local[21]= local[5];
	local[22]= makeflt(-3.6000000000000000000000e+02);
	ctx->vsp=local+23;
	w=(pointer)PLUS(ctx,3,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)SETELT(ctx,3,local+18); /*setelt*/
	local[18]= w;
	goto IF6157;
IF6156:
	local[18]= local[17];
	local[19]= local[5];
	ctx->vsp=local+20;
	w=(pointer)PLUS(ctx,2,local+18); /*+*/
	local[18]= w;
	local[19]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+20;
	w=(pointer)LSEQP(ctx,2,local+18); /*<=*/
	if (w==NIL) goto IF6158;
	local[18]= local[16];
	local[19]= makeint((eusinteger_t)0L);
	local[20]= local[17];
	local[21]= local[5];
	local[22]= makeflt(3.6000000000000000000000e+02);
	ctx->vsp=local+23;
	w=(pointer)PLUS(ctx,3,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)SETELT(ctx,3,local+18); /*setelt*/
	local[18]= w;
	goto IF6159;
IF6158:
	local[18]= local[16];
	local[19]= makeint((eusinteger_t)0L);
	local[20]= local[17];
	local[21]= local[5];
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)SETELT(ctx,3,local+18); /*setelt*/
	local[18]= w;
IF6159:
IF6157:
	w = local[18];
	local[17]= w;
	goto IF6155;
IF6154:
	local[17]= NIL;
IF6155:
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	local[18]= local[16];
	local[19]= makeint((eusinteger_t)0L);
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.cdr;
	ctx->vsp=local+20;
	w=(pointer)GREQP(ctx,3,local+17); /*>=*/
	if (w==NIL) goto IF6160;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	local[18]= local[16];
	local[19]= makeint((eusinteger_t)1L);
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.cdr;
	ctx->vsp=local+20;
	w=(pointer)GREQP(ctx,3,local+17); /*>=*/
	if (w==NIL) goto IF6160;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	local[18]= local[16];
	local[19]= makeint((eusinteger_t)2L);
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.cdr;
	ctx->vsp=local+20;
	w=(pointer)GREQP(ctx,3,local+17); /*>=*/
	if (w==NIL) goto IF6160;
	local[17]= local[13];
	ctx->vsp=local+18;
	w=(pointer)ADD1(ctx,1,local+17); /*1+*/
	local[13] = w;
	local[17]= local[16];
	local[18]= makeint((eusinteger_t)0L);
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	local[18]= local[0];
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20]= (w)->c.cons.cdr;
	w = local[8];
	ctx->vsp=local+21;
	w=FLET6147(ctx,4,local+17,w);
	local[17]= w;
	local[18]= local[16];
	local[19]= makeint((eusinteger_t)2L);
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	local[19]= local[1];
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.cdr;
	w = local[8];
	ctx->vsp=local+22;
	w=FLET6147(ctx,4,local+18,w);
	local[18]= w;
	local[19]= local[11];
	local[20]= local[17];
	local[21]= local[1];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= local[18];
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	local[21]= makeint((eusinteger_t)1L);
	local[22]= local[11];
	local[23]= local[17];
	local[24]= local[1];
	ctx->vsp=local+25;
	w=(pointer)TIMES(ctx,2,local+23); /***/
	local[23]= w;
	local[24]= local[18];
	ctx->vsp=local+25;
	w=(pointer)PLUS(ctx,2,local+23); /*+*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)ELT(ctx,2,local+22); /*elt*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)PLUS(ctx,2,local+21); /*+*/
	local[21]= w;
	ctx->vsp=local+22;
	w=(pointer)SETELT(ctx,3,local+19); /*setelt*/
	local[17]= w;
	goto IF6161;
IF6160:
	local[17]= NIL;
IF6161:
	w = local[17];
	local[16]= local[14];
	ctx->vsp=local+17;
	w=(pointer)ADD1(ctx,1,local+16); /*1+*/
	local[14] = w;
	goto WHL6149;
WHX6150:
	local[16]= NIL;
BLK6151:
	w = NIL;
	if (local[7]==NIL) goto OR6164;
	local[14]= local[13];
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)GREQP(ctx,2,local+14); /*>=*/
	if (w!=NIL) goto OR6164;
	goto IF6162;
OR6164:
	local[14]= makeflt(1.0000000000000000000000e+00);
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)QUOTIENT(ctx,2,local+14); /*/*/
	local[14]= w;
	local[15]= local[10];
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(*ftab[13])(ctx,3,local+14,&ftab[13],fqv[66]); /*scale-matrix*/
	local[14]= w;
	goto IF6163;
IF6162:
	local[10] = NIL;
	local[14]= local[10];
IF6163:
	w = local[10];
	local[0]= w;
BLK6138:
	ctx->vsp=local; return(local[0]);}

/*:copy-from*/
static pointer M6165pointcloud_copy_from(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[1];
	local[2]= argv[2];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[2];
	local[2]= argv[2];
	local[3]= fqv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[3];
	local[2]= argv[2];
	local[3]= fqv[3];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[2];
	local[1]= fqv[10];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	argv[0]->c.obj.iv[17] = w;
	local[0]= argv[2];
	local[1]= fqv[9];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	argv[0]->c.obj.iv[18] = w;
	local[0]= argv[0];
	local[1]= fqv[67];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[50];
	local[2]= argv[2];
	local[3]= fqv[51];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= *(ovafptr(argv[2],fqv[49]));
	local[1]= fqv[34];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	argv[0]->c.obj.iv[19] = w;
	local[0]= argv[0];
	local[1]= fqv[51];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	w = argv[0];
	local[0]= w;
BLK6166:
	ctx->vsp=local; return(local[0]);}

/*:transform-points*/
static pointer M6167pointcloud_transform_points(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[68], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY6169;
	local[0] = NIL;
KEY6169:
	if (local[0]==NIL) goto IF6170;
	local[1]= loadglobal(fqv[32]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[14];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	w = local[1];
	local[1]= w;
	goto IF6171;
IF6170:
	local[1]= argv[0];
IF6171:
	if (local[0]==NIL) goto IF6173;
	local[2]= local[1];
	local[3]= fqv[69];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto IF6174;
IF6173:
	local[2]= NIL;
IF6174:
	local[2]= *(ovafptr(local[1],fqv[49]));
	local[3]= fqv[50];
	local[4]= argv[2];
	local[5]= fqv[51];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[70];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= local[1];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[2];
	local[4]= fqv[71];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[2];
	local[5]= fqv[72];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(*ftab[14])(ctx,4,local+3,&ftab[14],fqv[73]); /*c-coords-transform-vector*/
	local[2]= local[1];
	local[3]= fqv[3];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	if (w==NIL) goto IF6175;
	local[2]= local[1];
	local[3]= fqv[3];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,3,local+3); /*float-vector*/
	local[3]= w;
	local[4]= argv[2];
	local[5]= fqv[72];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(*ftab[14])(ctx,4,local+3,&ftab[14],fqv[73]); /*c-coords-transform-vector*/
	local[2]= w;
	goto IF6176;
IF6175:
	local[2]= NIL;
IF6176:
	w = local[1];
	local[0]= w;
BLK6168:
	ctx->vsp=local; return(local[0]);}

/*:set-offset*/
static pointer M6177pointcloud_set_offset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[74], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY6179;
	local[0] = NIL;
KEY6179:
	local[1]= argv[0];
	local[2]= fqv[75];
	local[3]= argv[2];
	local[4]= fqv[46];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,5,local+1); /*send*/
	local[0]= w;
BLK6178:
	ctx->vsp=local; return(local[0]);}

/*:convert-to-world*/
static pointer M6180pointcloud_convert_to_world(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[76], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY6182;
	local[0] = NIL;
KEY6182:
	local[1]= argv[0];
	local[2]= fqv[77];
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,0,local+3,&ftab[0],fqv[5]); /*make-coords*/
	local[3]= w;
	local[4]= fqv[46];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,5,local+1); /*send*/
	local[0]= w;
BLK6181:
	ctx->vsp=local; return(local[0]);}

/*:move-origin-to*/
static pointer M6183pointcloud_move_origin_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[78], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY6185;
	local[0] = NIL;
KEY6185:
	local[1]= argv[0];
	local[2]= fqv[75];
	local[3]= argv[0];
	local[4]= fqv[34];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[50];
	local[5]= argv[2];
	local[6]= fqv[79];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= fqv[70];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[46];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,5,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[67];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	if (argv[0]->c.obj.iv[3]==NIL) goto CON6187;
	if (local[0]!=NIL) goto CON6187;
	local[2]= argv[0];
	local[3]= fqv[50];
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= fqv[51];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[79];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[50];
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto CON6186;
CON6187:
	local[2]= local[1];
	local[3]= fqv[50];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto CON6186;
CON6188:
	local[2]= NIL;
CON6186:
	local[2]= argv[0];
	local[3]= fqv[51];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	w = local[1];
	local[0]= w;
BLK6184:
	ctx->vsp=local; return(local[0]);}

/*:drawnormalmode*/
static pointer M6189pointcloud_drawnormalmode(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT6192;}
	local[0]= NIL;
ENT6192:
ENT6191:
	if (n>3) maerror();
	local[1]= local[0];
	local[2]= local[1];
	if (fqv[80]!=local[2]) goto IF6194;
	argv[0]->c.obj.iv[20] = NIL;
	local[2]= argv[0]->c.obj.iv[20];
	goto IF6195;
IF6194:
	if (T==NIL) goto IF6196;
	argv[0]->c.obj.iv[20] = local[0];
	local[2]= argv[0]->c.obj.iv[20];
	goto IF6197;
IF6196:
	local[2]= NIL;
IF6197:
IF6195:
	w = local[2];
	w = argv[0]->c.obj.iv[20];
	local[0]= w;
BLK6190:
	ctx->vsp=local; return(local[0]);}

/*:transparent*/
static pointer M6198pointcloud_transparent(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT6201;}
	local[0]= NIL;
ENT6201:
ENT6200:
	if (n>3) maerror();
	argv[0]->c.obj.iv[21] = local[0];
	if (local[0]==NIL) goto IF6202;
	if (argv[0]->c.obj.iv[9]==NIL) goto IF6202;
	local[1]= argv[0];
	local[2]= fqv[15];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)4L);
	ctx->vsp=local+4;
	w=(*ftab[2])(ctx,2,local+2,&ftab[2],fqv[11]); /*make-matrix*/
	argv[0]->c.obj.iv[22] = w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= local[1];
WHL6205:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX6206;
	local[4]= argv[0]->c.obj.iv[22];
	local[5]= local[2];
	local[6]= loadglobal(fqv[26]);
	local[7]= argv[0]->c.obj.iv[9];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(*ftab[15])(ctx,2,local+7,&ftab[15],fqv[81]); /*matrix-row*/
	local[7]= w;
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)CONCATENATE(ctx,3,local+6); /*concatenate*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[16])(ctx,3,local+4,&ftab[16],fqv[82]); /*set-matrix-row*/
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL6205;
WHX6206:
	local[4]= NIL;
BLK6207:
	w = NIL;
	local[1]= w;
	goto IF6203;
IF6202:
	local[1]= NIL;
IF6203:
	w = local[0];
	local[0]= w;
BLK6199:
	ctx->vsp=local; return(local[0]);}

/*:draw*/
static pointer M6208pointcloud_draw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[0]->c.obj.iv[21]==NIL) goto IF6210;
	local[0]= makeint((eusinteger_t)0L);
	ctx->vsp=local+1;
	w=(*ftab[17])(ctx,1,local+0,&ftab[17],fqv[83]); /*gl:gldepthmask*/
	local[0]= makeint((eusinteger_t)3042L);
	ctx->vsp=local+1;
	w=(*ftab[18])(ctx,1,local+0,&ftab[18],fqv[84]); /*gl:glenable*/
	local[0]= makeint((eusinteger_t)770L);
	local[1]= makeint((eusinteger_t)771L);
	ctx->vsp=local+2;
	w=(*ftab[19])(ctx,2,local+0,&ftab[19],fqv[85]); /*gl:glblendfunc*/
	local[0]= w;
	goto IF6211;
IF6210:
	local[0]= NIL;
IF6211:
	local[0]= makeint((eusinteger_t)1048575L);
	ctx->vsp=local+1;
	w=(*ftab[20])(ctx,1,local+0,&ftab[20],fqv[86]); /*gl:glpushattrib*/
	if (argv[2]==NIL) goto IF6212;
	local[0]= argv[2];
	local[1]= fqv[87];
	local[2]= fqv[88];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF6213;
IF6212:
	local[0]= NIL;
IF6213:
	local[0]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+1;
	w=(*ftab[21])(ctx,1,local+0,&ftab[21],fqv[89]); /*gl:gldisable*/
	ctx->vsp=local+0;
	w=(*ftab[22])(ctx,0,local+0,&ftab[22],fqv[90]); /*gl:glpushmatrix*/
	local[0]= argv[0];
	local[1]= fqv[51];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[91];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= loadglobal(fqv[92]);
	ctx->vsp=local+2;
	w=(pointer)TRANSPOSE(ctx,2,local+0); /*transpose*/
	local[0]= w->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(*ftab[23])(ctx,1,local+0,&ftab[23],fqv[93]); /*gl:glmultmatrixf*/
	local[0]= argv[0]->c.obj.iv[15];
	local[1]= makeflt(9.9999999999999977795540e-02);
	ctx->vsp=local+2;
	w=(pointer)GREATERP(ctx,2,local+0); /*>*/
	if (w==NIL) goto IF6214;
	local[0]= argv[0]->c.obj.iv[14];
	ctx->vsp=local+1;
	w=(pointer)EUSFLOAT(ctx,1,local+0); /*float*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[24])(ctx,1,local+0,&ftab[24],fqv[94]); /*gl:gllinewidth*/
	local[0]= makeint((eusinteger_t)1L);
	ctx->vsp=local+1;
	w=(*ftab[25])(ctx,1,local+0,&ftab[25],fqv[95]); /*gl:glbegin*/
	local[0]= makeint((eusinteger_t)1L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[26])(ctx,1,local+0,&ftab[26],fqv[96]); /*gl:glcolor3fv*/
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[27])(ctx,1,local+0,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	local[0]= argv[0]->c.obj.iv[15];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[27])(ctx,1,local+0,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)1L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[26])(ctx,1,local+0,&ftab[26],fqv[96]); /*gl:glcolor3fv*/
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[27])(ctx,1,local+0,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0]->c.obj.iv[15];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[27])(ctx,1,local+0,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[26])(ctx,1,local+0,&ftab[26],fqv[96]); /*gl:glcolor3fv*/
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[27])(ctx,1,local+0,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0]->c.obj.iv[15];
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[27])(ctx,1,local+0,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	ctx->vsp=local+0;
	w=(*ftab[28])(ctx,0,local+0,&ftab[28],fqv[98]); /*gl:glend*/
	local[0]= w;
	goto IF6215;
IF6214:
	local[0]= NIL;
IF6215:
	local[0]= argv[0]->c.obj.iv[13];
	ctx->vsp=local+1;
	w=(pointer)EUSFLOAT(ctx,1,local+0); /*float*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[29])(ctx,1,local+0,&ftab[29],fqv[99]); /*gl:glpointsize*/
	local[0]= argv[0];
	local[1]= fqv[15];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[30])(ctx,2,local+0,&ftab[30],fqv[100]); /*/=*/
	if (w==NIL) goto IF6216;
	local[0]= argv[0]->c.obj.iv[9];
	local[1]= argv[0]->c.obj.iv[12];
	ctx->vsp=local+2;
	w=(pointer)VECTORP(ctx,1,local+1); /*vectorp*/
	if (w==NIL) goto CON6219;
	local[0] = NIL;
	local[1]= argv[0]->c.obj.iv[12];
	ctx->vsp=local+2;
	w=(*ftab[26])(ctx,1,local+1,&ftab[26],fqv[96]); /*gl:glcolor3fv*/
	local[1]= w;
	goto CON6218;
CON6219:
	local[1]= argv[0]->c.obj.iv[12];
	local[2]= fqv[101];
	local[3]= fqv[102];
	local[4]= fqv[103];
	local[5]= fqv[104];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[31])(ctx,2,local+1,&ftab[31],fqv[105]); /*member*/
	if (w==NIL) goto CON6220;
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[12];
	local[3]= local[2];
	w = fqv[106];
	if (memq(local[3],w)==NIL) goto IF6222;
	local[1] = makeint((eusinteger_t)2L);
	local[3]= local[1];
	goto IF6223;
IF6222:
	local[3]= local[2];
	if (fqv[102]!=local[3]) goto IF6224;
	local[1] = makeint((eusinteger_t)0L);
	local[3]= local[1];
	goto IF6225;
IF6224:
	local[3]= local[2];
	if (fqv[103]!=local[3]) goto IF6226;
	local[1] = makeint((eusinteger_t)1L);
	local[3]= local[1];
	goto IF6227;
IF6226:
	local[3]= NIL;
IF6227:
IF6225:
IF6223:
	w = local[3];
	local[2]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+3;
	w=(*ftab[32])(ctx,1,local+2,&ftab[32],fqv[107]); /*copy-matrix*/
	local[0] = w;
	local[2]= local[0]->c.obj.iv[1];
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,3,local+3); /*float-vector*/
	local[3]= w;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= argv[0];
	local[7]= fqv[21];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= fqv[23];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[4] = w;
	local[6]= argv[0];
	local[7]= fqv[21];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= fqv[22];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[5] = w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[0];
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(*ftab[1])(ctx,2,local+7,&ftab[1],fqv[8]); /*array-dimension*/
	local[7]= w;
WHL6229:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX6230;
	local[8]= local[2];
	local[9]= makeint((eusinteger_t)-280L);
	local[10]= argv[0]->c.obj.iv[8];
	local[11]= local[6];
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)MINUS(ctx,2,local+10); /*-*/
	local[10]= w;
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	local[10]= makeflt(1.0000000000000000000000e+00);
	local[11]= makeflt(1.0000000000000000000000e+00);
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(*ftab[33])(ctx,4,local+9,&ftab[33],fqv[108]); /*his2rgb*/
	local[9]= w;
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(*ftab[34])(ctx,2,local+9,&ftab[34],fqv[109]); /*normalize-vector*/
	local[9]= w;
	local[10]= fqv[110];
	local[11]= local[6];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[11]);
		local[11]=(makeint(i * j));}
	ctx->vsp=local+12;
	w=(*ftab[35])(ctx,4,local+8,&ftab[35],fqv[111]); /*replace*/
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL6229;
WHX6230:
	local[8]= NIL;
BLK6231:
	w = NIL;
	local[1]= w;
	goto CON6218;
CON6220:
	local[1]= NIL;
CON6218:
	local[1]= loadglobal(fqv[112]);
	ctx->vsp=local+2;
	w=(*ftab[36])(ctx,1,local+1,&ftab[36],fqv[113]); /*gl::glenableclientstate*/
	if (local[0]==NIL) goto IF6232;
	local[1]= loadglobal(fqv[114]);
	ctx->vsp=local+2;
	w=(*ftab[36])(ctx,1,local+1,&ftab[36],fqv[113]); /*gl::glenableclientstate*/
	local[1]= w;
	goto IF6233;
IF6232:
	local[1]= NIL;
IF6233:
	if (local[0]==NIL) goto IF6234;
	if (argv[0]->c.obj.iv[21]==NIL) goto IF6236;
	local[1]= makeint((eusinteger_t)4L);
	goto IF6237;
IF6236:
	local[1]= makeint((eusinteger_t)3L);
IF6237:
	local[2]= makeint((eusinteger_t)5130L);
	local[3]= makeint((eusinteger_t)0L);
	if (argv[0]->c.obj.iv[21]==NIL) goto IF6238;
	local[4]= argv[0]->c.obj.iv[22];
	goto IF6239;
IF6238:
	local[4]= local[0];
IF6239:
	local[4]= local[4]->c.obj.iv[1];
	ctx->vsp=local+5;
	w=(*ftab[37])(ctx,4,local+1,&ftab[37],fqv[115]); /*gl::glcolorpointer*/
	local[1]= w;
	goto IF6235;
IF6234:
	local[1]= NIL;
IF6235:
	local[1]= makeint((eusinteger_t)3L);
	local[2]= makeint((eusinteger_t)5130L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= argv[0]->c.obj.iv[8]->c.obj.iv[1];
	ctx->vsp=local+5;
	w=(*ftab[38])(ctx,4,local+1,&ftab[38],fqv[116]); /*gl::glvertexpointer*/
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[0]->c.obj.iv[8];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[8]); /*array-dimension*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[39])(ctx,3,local+1,&ftab[39],fqv[117]); /*gl::gldrawarrays*/
	local[1]= loadglobal(fqv[112]);
	ctx->vsp=local+2;
	w=(*ftab[40])(ctx,1,local+1,&ftab[40],fqv[118]); /*gl::gldisableclientstate*/
	if (local[0]==NIL) goto IF6240;
	local[1]= loadglobal(fqv[114]);
	ctx->vsp=local+2;
	w=(*ftab[40])(ctx,1,local+1,&ftab[40],fqv[118]); /*gl::gldisableclientstate*/
	local[1]= w;
	goto IF6241;
IF6240:
	local[1]= NIL;
IF6241:
	if (argv[0]->c.obj.iv[10]==NIL) goto IF6242;
	if (argv[0]->c.obj.iv[20]==NIL) goto IF6242;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)MKFLTVEC(ctx,3,local+1); /*float-vector*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,3,local+2); /*float-vector*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,3,local+3); /*float-vector*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,3,local+4); /*float-vector*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(*ftab[25])(ctx,1,local+5,&ftab[25],fqv[95]); /*gl:glbegin*/
	if (local[0]!=NIL) goto IF6244;
	local[4] = argv[0]->c.obj.iv[12];
	local[5]= local[4];
	goto IF6245;
IF6244:
	local[5]= NIL;
IF6245:
	local[5]= makeint((eusinteger_t)0L);
	local[6]= argv[0]->c.obj.iv[10];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(*ftab[1])(ctx,2,local+6,&ftab[1],fqv[8]); /*array-dimension*/
	local[6]= w;
WHL6247:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX6248;
	local[7]= argv[0]->c.obj.iv[10];
	local[8]= local[5];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(*ftab[4])(ctx,3,local+7,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)VNORM(ctx,1,local+7); /*norm*/
	local[7]= w;
	{ double left,right;
		right=fltval(makeflt(9.9999999999999977795540e-02)); left=fltval(local[7]);
	if (left >= right) goto CON6251;}
	local[7]= fqv[119];
	ctx->vsp=local+8;
	w=(*ftab[26])(ctx,1,local+7,&ftab[26],fqv[96]); /*gl:glcolor3fv*/
	local[7]= NIL;
	local[8]= fqv[120];
	local[9]= fqv[121];
	local[10]= fqv[122];
	local[11]= fqv[123];
	local[12]= fqv[124];
	local[13]= fqv[125];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,6,local+8); /*list*/
	local[8]= w;
WHL6253:
	if (local[8]==NIL) goto WHX6254;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8] = (w)->c.cons.cdr;
	w = local[9];
	local[7] = w;
	local[9]= argv[0]->c.obj.iv[8];
	local[10]= local[5];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(*ftab[4])(ctx,3,local+9,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(*ftab[27])(ctx,1,local+9,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	local[9]= local[2];
	local[10]= local[7];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)VPLUS(ctx,3,local+9); /*v+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[27])(ctx,1,local+9,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	goto WHL6253;
WHX6254:
	local[9]= NIL;
BLK6255:
	w = NIL;
	local[7]= w;
	goto CON6250;
CON6251:
	if (local[0]==NIL) goto IF6258;
	local[7]= local[0];
	local[8]= local[5];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(*ftab[4])(ctx,3,local+7,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[7]= w;
	goto IF6259;
IF6258:
	local[7]= NIL;
IF6259:
	local[7]= argv[0]->c.obj.iv[20];
	local[8]= local[7];
	if (fqv[6]!=local[8]) goto IF6261;
	local[8]= local[4];
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	local[9]= local[4];
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	local[10]= local[4];
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)NUMEQUAL(ctx,3,local+8); /*=*/
	if (w==NIL) goto IF6263;
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(*ftab[26])(ctx,1,local+8,&ftab[26],fqv[96]); /*gl:glcolor3fv*/
	local[8]= w;
	goto IF6264;
IF6263:
	local[8]= fqv[126];
	ctx->vsp=local+9;
	w=(*ftab[26])(ctx,1,local+8,&ftab[26],fqv[96]); /*gl:glcolor3fv*/
	local[8]= w;
IF6264:
	goto IF6262;
IF6261:
	local[8]= local[7];
	if (fqv[127]!=local[8]) goto IF6265;
	local[8]= fqv[128];
	ctx->vsp=local+9;
	w=(*ftab[41])(ctx,1,local+8,&ftab[41],fqv[129]); /*gl:glcolor3f*/
	local[8]= w;
	goto IF6266;
IF6265:
	if (T==NIL) goto IF6267;
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(*ftab[26])(ctx,1,local+8,&ftab[26],fqv[96]); /*gl:glcolor3fv*/
	local[8]= w;
	goto IF6268;
IF6267:
	local[8]= NIL;
IF6268:
IF6266:
IF6262:
	w = local[8];
	local[7]= argv[0]->c.obj.iv[8];
	local[8]= local[5];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(*ftab[4])(ctx,3,local+7,&ftab[4],fqv[24]); /*c-matrix-row*/
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(*ftab[27])(ctx,1,local+7,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	local[7]= local[2];
	local[8]= makeflt(1.0000000000000000000000e+01);
	local[9]= local[3];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)SCALEVEC(ctx,3,local+8); /*scale*/
	local[8]= w;
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)VPLUS(ctx,3,local+7); /*v+*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[27])(ctx,1,local+7,&ftab[27],fqv[97]); /*gl:glvertex3fv*/
	local[7]= w;
	goto CON6250;
CON6257:
	local[7]= NIL;
CON6250:
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL6247;
WHX6248:
	local[7]= NIL;
BLK6249:
	w = NIL;
	ctx->vsp=local+5;
	w=(*ftab[28])(ctx,0,local+5,&ftab[28],fqv[98]); /*gl:glend*/
	local[1]= w;
	goto IF6243;
IF6242:
	local[1]= NIL;
IF6243:
	w = local[1];
	local[0]= w;
	goto IF6217;
IF6216:
	local[0]= NIL;
IF6217:
	ctx->vsp=local+0;
	w=(*ftab[42])(ctx,0,local+0,&ftab[42],fqv[130]); /*gl:glpopmatrix*/
	local[0]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+1;
	w=(*ftab[18])(ctx,1,local+0,&ftab[18],fqv[84]); /*gl:glenable*/
	ctx->vsp=local+0;
	w=(*ftab[43])(ctx,0,local+0,&ftab[43],fqv[131]); /*gl:glpopattrib*/
	if (argv[0]->c.obj.iv[21]==NIL) goto IF6269;
	local[0]= makeint((eusinteger_t)1L);
	ctx->vsp=local+1;
	w=(*ftab[17])(ctx,1,local+0,&ftab[17],fqv[83]); /*gl:gldepthmask*/
	local[0]= makeint((eusinteger_t)3042L);
	ctx->vsp=local+1;
	w=(*ftab[21])(ctx,1,local+0,&ftab[21],fqv[89]); /*gl:gldisable*/
	local[0]= w;
	goto IF6270;
IF6269:
	local[0]= NIL;
IF6270:
	w = local[0];
	local[0]= w;
BLK6209:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO6115(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[3];
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,2,local+0); /*-*/
	local[0]= w;
	local[1]= argv[1];
	local[2]= env->c.clo.env2[2];
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MKFLTVEC(ctx,2,local+0); /*float-vector*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)VNORM(ctx,1,local+0); /*norm*/
	local[0]= w;
	local[1]= env->c.clo.env1[2];
	ctx->vsp=local+2;
	w=(pointer)LESSP(ctx,2,local+0); /*<*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET6147(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)GREQP(ctx,2,local+0); /*>=*/
	if (w==NIL) goto IF6271;
	local[0]= argv[1];
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,2,local+0); /*-*/
	local[0]= w;
	goto IF6272;
IF6271:
	local[0]= argv[0];
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,2,local+0); /*-*/
	local[0]= w;
	local[1]= argv[2];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)QUOTIENT(ctx,2,local+1); /*/*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)QUOTIENT(ctx,2,local+0); /*/*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)FLOOR(ctx,1,local+0); /*floor*/
	local[0]= w;
	local[1]= local[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)GREQP(ctx,2,local+1); /*>=*/
	if (w==NIL) goto IF6273;
	local[1]= argv[1];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	goto IF6274;
IF6273:
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)LSEQP(ctx,2,local+1); /*<=*/
	if (w==NIL) goto IF6275;
	local[1]= makeint((eusinteger_t)0L);
	goto IF6276;
IF6275:
	local[1]= local[0];
IF6276:
IF6274:
	w = local[1];
	local[0]= w;
IF6272:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*make-random-pointcloud*/
static pointer F5738make_random_pointcloud(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[132], &argv[0], n-0, local+0, 0);
	if (n & (1<<0)) goto KEY6278;
	local[0] = makeint((eusinteger_t)1000L);
KEY6278:
	if (n & (1<<1)) goto KEY6279;
	local[1] = NIL;
KEY6279:
	if (n & (1<<2)) goto KEY6280;
	local[2] = NIL;
KEY6280:
	if (n & (1<<3)) goto KEY6281;
	local[3] = makeflt(1.0000000000000000000000e+02);
KEY6281:
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= local[0];
WHL6283:
	local[10]= local[8];
	w = local[9];
	if ((eusinteger_t)local[10] >= (eusinteger_t)w) goto WHX6284;
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(*ftab[44])(ctx,1,local+10,&ftab[44],fqv[133]); /*random-vector*/
	local[10]= w;
	w = local[4];
	ctx->vsp=local+11;
	local[4] = cons(ctx,local[10],w);
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[8] = w;
	goto WHL6283;
WHX6284:
	local[10]= NIL;
BLK6285:
	w = NIL;
	if (local[1]==NIL) goto IF6286;
	local[8]= makeflt(5.0000000000000000000000e-01);
	local[9]= makeflt(5.0000000000000000000000e-01);
	local[10]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+11;
	w=(pointer)MKFLTVEC(ctx,3,local+8); /*float-vector*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[0];
WHL6289:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX6290;
	local[11]= local[8];
	local[12]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+13;
	w=(*ftab[44])(ctx,1,local+12,&ftab[44],fqv[133]); /*random-vector*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)VPLUS(ctx,2,local+11); /*v+*/
	local[11]= w;
	w = local[5];
	ctx->vsp=local+12;
	local[5] = cons(ctx,local[11],w);
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL6289;
WHX6290:
	local[11]= NIL;
BLK6291:
	w = NIL;
	local[8]= w;
	goto IF6287;
IF6286:
	local[8]= NIL;
IF6287:
	if (local[2]==NIL) goto IF6292;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= local[0];
WHL6295:
	local[10]= local[8];
	w = local[9];
	if ((eusinteger_t)local[10] >= (eusinteger_t)w) goto WHX6296;
	local[10]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+11;
	w=(*ftab[44])(ctx,1,local+10,&ftab[44],fqv[133]); /*random-vector*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[34])(ctx,1,local+10,&ftab[34],fqv[109]); /*normalize-vector*/
	local[10]= w;
	w = local[6];
	ctx->vsp=local+11;
	local[6] = cons(ctx,local[10],w);
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[8] = w;
	goto WHL6295;
WHX6296:
	local[10]= NIL;
BLK6297:
	w = NIL;
	local[8]= w;
	goto IF6293;
IF6292:
	local[8]= NIL;
IF6293:
	local[8]= loadglobal(fqv[32]);
	ctx->vsp=local+9;
	w=(pointer)INSTANTIATE(ctx,1,local+8); /*instantiate*/
	local[8]= w;
	local[9]= local[8];
	local[10]= fqv[14];
	local[11]= fqv[1];
	local[12]= local[4];
	local[13]= fqv[2];
	local[14]= local[5];
	local[15]= fqv[3];
	local[16]= local[6];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,8,local+9); /*send*/
	w = local[8];
	local[7] = w;
	w = local[7];
	local[0]= w;
BLK6277:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtpointcloud(ctx,n,argv,env)
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
	local[0]= fqv[134];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF6299;
	local[0]= fqv[135];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[136],w);
	goto IF6300;
IF6299:
	local[0]= fqv[137];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF6300:
	local[0]= fqv[32];
	local[1]= fqv[138];
	local[2]= fqv[32];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[141];
	local[6]= fqv[142];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[63];
	local[10]= NIL;
	local[11]= fqv[15];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[144];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[45])(ctx,13,local+2,&ftab[45],fqv[145]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5739pointcloud_init,fqv[14],fqv[32],fqv[146]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5775pointcloud_reset_box,fqv[20],fqv[32],fqv[147]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5779pointcloud_box,fqv[21],fqv[32],fqv[148]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5783pointcloud_vertices,fqv[149],fqv[32],fqv[150]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5785pointcloud_size,fqv[15],fqv[32],fqv[151]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5789pointcloud_width,fqv[9],fqv[32],fqv[152]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5791pointcloud_height,fqv[10],fqv[32],fqv[153]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5793pointcloud_size_change,fqv[7],fqv[32],fqv[154]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5805pointcloud_view_coords,fqv[33],fqv[32],fqv[155]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5811pointcloud_points,fqv[1],fqv[32],fqv[156]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5827pointcloud_colors,fqv[2],fqv[32],fqv[157]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5841pointcloud_normals,fqv[3],fqv[32],fqv[158]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5855pointcloud_curvatures,fqv[4],fqv[32],fqv[159]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5869pointcloud_point_list,fqv[19],fqv[32],fqv[160]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5880pointcloud_color_list,fqv[161],fqv[32],fqv[162]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5888pointcloud_normal_list,fqv[163],fqv[32],fqv[164]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5896pointcloud_curvature_list,fqv[165],fqv[32],fqv[166]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5904pointcloud_centroid,fqv[167],fqv[32],fqv[168]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5906pointcloud_set_color,fqv[169],fqv[32],fqv[170]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5914pointcloud_point_color,fqv[29],fqv[32],fqv[171]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5920pointcloud_point_size,fqv[35],fqv[32],fqv[172]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5926pointcloud_axis_length,fqv[36],fqv[32],fqv[173]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5932pointcloud_axis_width,fqv[37],fqv[32],fqv[174]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5938pointcloud_append,fqv[175],fqv[32],fqv[176]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5977pointcloud_clear_color,fqv[177],fqv[32],fqv[178]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5979pointcloud_clear_normal,fqv[179],fqv[32],fqv[180]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5981pointcloud_nfilter,fqv[181],fqv[32],fqv[182]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5984pointcloud_filter,fqv[42],fqv[32],fqv[183]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M5988pointcloud_filter_with_indices,fqv[45],fqv[32],fqv[184]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6041pointcloud_filtered_indices,fqv[44],fqv[32],fqv[185]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6074pointcloud_viewangle_inlier,fqv[186],fqv[32],fqv[187]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6085pointcloud_image_position_inlier,fqv[57],fqv[32],fqv[188]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6107pointcloud_image_circle_filter,fqv[189],fqv[32],fqv[190]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6116pointcloud_step_inlier,fqv[61],fqv[32],fqv[191]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6130pointcloud_step,fqv[192],fqv[32],fqv[193]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6137pointcloud_generate_color_histogram_hs,fqv[194],fqv[32],fqv[195]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6165pointcloud_copy_from,fqv[69],fqv[32],fqv[196]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6167pointcloud_transform_points,fqv[75],fqv[32],fqv[197]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6177pointcloud_set_offset,fqv[198],fqv[32],fqv[199]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6180pointcloud_convert_to_world,fqv[200],fqv[32],fqv[201]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6183pointcloud_move_origin_to,fqv[77],fqv[32],fqv[202]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6189pointcloud_drawnormalmode,fqv[203],fqv[32],fqv[204]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6198pointcloud_transparent,fqv[30],fqv[32],fqv[205]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M6208pointcloud_draw,fqv[206],fqv[32],fqv[207]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[208],module,F5738make_random_pointcloud,fqv[209]);
	local[0]= fqv[210];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF6301;
	local[0]= fqv[211];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[136],w);
	goto IF6302;
IF6301:
	local[0]= fqv[212];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF6302:
	local[0]= fqv[213];
	local[1]= fqv[214];
	ctx->vsp=local+2;
	w=(*ftab[46])(ctx,2,local+0,&ftab[46],fqv[215]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<47; i++) ftab[i]=fcallx;
}
