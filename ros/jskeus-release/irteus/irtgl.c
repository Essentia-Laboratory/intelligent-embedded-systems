/* ./irtgl.c :  entry=irtgl */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtgl.h"
#pragma init (register_irtgl)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtgl();
extern pointer build_quote_vector();
static int register_irtgl()
  { add_module_initializer("___irtgl", ___irtgl);}

static pointer F975set_stereo_gl_attribute();
static pointer F976reset_gl_attribute();
static pointer F977delete_displaylist_id();
static pointer F978transpose_image_rows();
static pointer F979draw_globjects();
static pointer F980draw_glbody();
static pointer F981find_color();
static pointer F982transparent();
static pointer F983make_glvertices_from_faceset();
static pointer F984make_glvertices_from_faces();
static pointer F985_dump_wrl_shape();
static pointer F986write_wrl_from_glvertices();

/*set-stereo-gl-attribute*/
static pointer F975set_stereo_gl_attribute(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	ctx->vsp=local+0;
	w=(pointer)F976reset_gl_attribute(ctx,0,local+0); /*reset-gl-attribute*/
	local[0]= loadglobal(fqv[0]);
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)ADD1(ctx,1,local+0); /*1+*/
	local[0]= w;
	local[1]= fqv[1];
	local[2]= fqv[2];
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,3,local+0,&ftab[0],fqv[3]); /*make-array*/
	local[0]= w;
	local[1]= local[0];
	local[2]= loadglobal(fqv[0]);
	ctx->vsp=local+3;
	w=(pointer)VECREPLACE(ctx,2,local+1); /*system::vector-replace*/
	local[1]= local[0];
	local[2]= loadglobal(fqv[0]);
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SUB1(ctx,1,local+2); /*1-*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)6L);
	ctx->vsp=local+4;
	w=(pointer)SETELT(ctx,3,local+1); /*setelt*/
	local[1]= local[0];
	storeglobal(fqv[0],local[1]);
	w = local[1];
	local[0]= w;
BLK987:
	ctx->vsp=local; return(local[0]);}

/*reset-gl-attribute*/
static pointer F976reset_gl_attribute(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= makeint((eusinteger_t)4L);
	local[1]= makeint((eusinteger_t)8L);
	local[2]= makeint((eusinteger_t)1L);
	local[3]= makeint((eusinteger_t)9L);
	local[4]= makeint((eusinteger_t)1L);
	local[5]= makeint((eusinteger_t)10L);
	local[6]= makeint((eusinteger_t)1L);
	local[7]= makeint((eusinteger_t)5L);
	local[8]= makeint((eusinteger_t)12L);
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)MKINTVECTOR(ctx,11,local+0); /*integer-vector*/
	local[0]= w;
	storeglobal(fqv[0],w);
	w = local[0];
	local[0]= w;
BLK988:
	ctx->vsp=local; return(local[0]);}

/*delete-displaylist-id*/
static pointer F977delete_displaylist_id(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!isnum(w)) goto CON991;
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,2,local+0,&ftab[1],fqv[4]); /*gldeletelists*/
	local[0]= w;
	goto CON990;
CON991:
	local[0]= NIL;
	local[1]= argv[0];
WHL994:
	if (local[1]==NIL) goto WHX995;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= loadglobal(fqv[5]);
	local[4]= fqv[6];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO998,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[2])(ctx,4,local+2,&ftab[2],fqv[7]); /*find*/
	local[2]= w;
	if (local[2]==NIL) goto IF999;
	local[3]= local[2];
	local[4]= fqv[8];
	local[5]= fqv[9];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,1,local+3,&ftab[3],fqv[10]); /*glislist*/
	if (w==NIL) goto CON1002;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[4]); /*gldeletelists*/
	local[3]= w;
	goto CON1001;
CON1002:
	local[3]= fqv[11];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,2,local+3); /*error*/
	local[3]= w;
	goto CON1001;
CON1003:
	local[3]= NIL;
CON1001:
	goto IF1000;
IF999:
	local[3]= fqv[12];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,2,local+3); /*error*/
	local[3]= w;
IF1000:
	w = local[3];
	goto WHL994;
WHX995:
	local[2]= NIL;
BLK996:
	w = NIL;
	local[0]= w;
	goto CON990;
CON992:
	local[0]= NIL;
CON990:
	w = local[0];
	local[0]= w;
BLK989:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO998(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[8];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	w = *(ovafptr(w,fqv[13]));
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*transpose-image-rows*/
static pointer F978transpose_image_rows(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT1006;}
	local[0]= NIL;
ENT1006:
ENT1005:
	if (n>2) maerror();
	local[1]= argv[0];
	local[2]= fqv[14];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= fqv[15];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= fqv[16];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)TIMES(ctx,2,local+2); /***/
	local[2]= w;
	local[3]= argv[0];
	local[4]= fqv[17];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	if (local[0]==NIL) goto CON1008;
	local[4]= argv[0];
	local[5]= fqv[14];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[0];
	local[6]= fqv[14];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	if (w!=local[4]) goto AND1011;
	local[4]= argv[0];
	local[5]= fqv[15];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[0];
	local[6]= fqv[15];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	if (w!=local[4]) goto AND1011;
	local[4]= argv[0];
	local[5]= fqv[16];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[0];
	local[6]= fqv[16];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	if (w!=local[4]) goto AND1011;
	goto IF1009;
AND1011:
	local[4]= fqv[18];
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,1,local+4); /*error*/
	local[4]= w;
	goto IF1010;
IF1009:
	local[4]= NIL;
IF1010:
	local[4]= local[1];
	local[5]= local[2];
	local[6]= local[3];
	local[7]= local[0];
	local[8]= fqv[17];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[4])(ctx,4,local+4,&ftab[4],fqv[19]); /*ctranspose-image-rows*/
	local[4]= local[0];
	goto CON1007;
CON1008:
	local[4]= local[1];
	local[5]= local[2];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(*ftab[4])(ctx,3,local+4,&ftab[4],fqv[19]); /*ctranspose-image-rows*/
	local[4]= argv[0];
	goto CON1007;
CON1012:
	local[4]= NIL;
CON1007:
	w = local[4];
	local[0]= w;
BLK1004:
	ctx->vsp=local; return(local[0]);}

/*:color*/
static pointer M1013glviewsurface_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1016;}
	local[0]= NIL;
ENT1016:
ENT1015:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1017;
	local[1]= argv[0];
	local[2]= fqv[20];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF1018;
IF1017:
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,4,local+1); /*float-vector*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)2816L);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[5])(ctx,2,local+2,&ftab[5],fqv[21]); /*glgetfloatv*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(pointer)SUBSEQ(ctx,3,local+2); /*subseq*/
	local[1]= w;
IF1018:
	w = local[1];
	local[0]= w;
BLK1014:
	ctx->vsp=local; return(local[0]);}

/*:line-width*/
static pointer M1019glviewsurface_line_width(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1022;}
	local[0]= NIL;
ENT1022:
ENT1021:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1023;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)EUSFLOAT(ctx,1,local+1); /*float*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[22]); /*gllinewidth*/
	local[1]= w;
	goto IF1024;
IF1023:
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)MKFLTVEC(ctx,1,local+1); /*float-vector*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)2849L);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[5])(ctx,2,local+2,&ftab[5],fqv[21]); /*glgetfloatv*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[1]= w;
IF1024:
	w = local[1];
	local[0]= w;
BLK1020:
	ctx->vsp=local; return(local[0]);}

/*:point-size*/
static pointer M1025glviewsurface_point_size(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1028;}
	local[0]= NIL;
ENT1028:
ENT1027:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1029;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)EUSFLOAT(ctx,1,local+1); /*float*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[23]); /*glpointsize*/
	local[1]= w;
	goto IF1030;
IF1029:
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)MKFLTVEC(ctx,1,local+1); /*float-vector*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)2833L);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[5])(ctx,2,local+2,&ftab[5],fqv[21]); /*glgetfloatv*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[1]= w;
IF1030:
	w = local[1];
	local[0]= w;
BLK1026:
	ctx->vsp=local; return(local[0]);}

/*:3d-point*/
static pointer M1031glviewsurface_3d_point(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[24], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1033;
	local[0] = T;
KEY1033:
	if (n & (1<<1)) goto KEY1034;
	local[1] = T;
KEY1034:
	if (local[0]==NIL) goto IF1035;
	local[2]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,1,local+2,&ftab[8],fqv[25]); /*gldisable*/
	local[2]= w;
	goto IF1036;
IF1035:
	local[2]= NIL;
IF1036:
	if (local[1]==NIL) goto IF1037;
	local[2]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,1,local+2,&ftab[8],fqv[25]); /*gldisable*/
	local[2]= w;
	goto IF1038;
IF1037:
	local[2]= NIL;
IF1038:
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(*ftab[9])(ctx,1,local+2,&ftab[9],fqv[26]); /*glbegin*/
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[10])(ctx,1,local+2,&ftab[10],fqv[27]); /*glvertex3fv*/
	ctx->vsp=local+2;
	w=(*ftab[11])(ctx,0,local+2,&ftab[11],fqv[28]); /*glend*/
	if (local[0]==NIL) goto IF1039;
	local[2]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[29]); /*glenable*/
	local[2]= w;
	goto IF1040;
IF1039:
	local[2]= NIL;
IF1040:
	if (local[1]==NIL) goto IF1041;
	local[2]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[29]); /*glenable*/
	local[2]= w;
	goto IF1042;
IF1041:
	local[2]= NIL;
IF1042:
	w = local[2];
	local[0]= w;
BLK1032:
	ctx->vsp=local; return(local[0]);}

/*:3d-line*/
static pointer M1043glviewsurface_3d_line(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[30], &argv[4], n-4, local+0, 0);
	if (n & (1<<0)) goto KEY1045;
	local[0] = T;
KEY1045:
	if (n & (1<<1)) goto KEY1046;
	local[1] = T;
KEY1046:
	if (local[0]==NIL) goto IF1047;
	local[2]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,1,local+2,&ftab[8],fqv[25]); /*gldisable*/
	local[2]= w;
	goto IF1048;
IF1047:
	local[2]= NIL;
IF1048:
	if (local[1]==NIL) goto IF1049;
	local[2]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,1,local+2,&ftab[8],fqv[25]); /*gldisable*/
	local[2]= w;
	goto IF1050;
IF1049:
	local[2]= NIL;
IF1050:
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(*ftab[9])(ctx,1,local+2,&ftab[9],fqv[26]); /*glbegin*/
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[10])(ctx,1,local+2,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(*ftab[10])(ctx,1,local+2,&ftab[10],fqv[27]); /*glvertex3fv*/
	ctx->vsp=local+2;
	w=(*ftab[11])(ctx,0,local+2,&ftab[11],fqv[28]); /*glend*/
	if (local[0]==NIL) goto IF1051;
	local[2]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[29]); /*glenable*/
	local[2]= w;
	goto IF1052;
IF1051:
	local[2]= NIL;
IF1052:
	if (local[1]==NIL) goto IF1053;
	local[2]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[29]); /*glenable*/
	local[2]= w;
	goto IF1054;
IF1053:
	local[2]= NIL;
IF1054:
	w = local[2];
	local[0]= w;
BLK1044:
	ctx->vsp=local; return(local[0]);}

/*:3d-lines*/
static pointer M1055glviewsurface_3d_lines(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[31], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1057;
	local[0] = T;
KEY1057:
	if (n & (1<<1)) goto KEY1058;
	local[1] = T;
KEY1058:
	if (local[0]==NIL) goto IF1059;
	local[2]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,1,local+2,&ftab[8],fqv[25]); /*gldisable*/
	local[2]= w;
	goto IF1060;
IF1059:
	local[2]= NIL;
IF1060:
	if (local[1]==NIL) goto IF1061;
	local[2]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,1,local+2,&ftab[8],fqv[25]); /*gldisable*/
	local[2]= w;
	goto IF1062;
IF1061:
	local[2]= NIL;
IF1062:
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(*ftab[9])(ctx,1,local+2,&ftab[9],fqv[26]); /*glbegin*/
	local[2]= NIL;
	local[3]= argv[2];
WHL1064:
	if (local[3]==NIL) goto WHX1065;
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
	w=(*ftab[10])(ctx,1,local+4,&ftab[10],fqv[27]); /*glvertex3fv*/
	goto WHL1064;
WHX1065:
	local[4]= NIL;
BLK1066:
	w = NIL;
	ctx->vsp=local+2;
	w=(*ftab[11])(ctx,0,local+2,&ftab[11],fqv[28]); /*glend*/
	if (local[0]==NIL) goto IF1068;
	local[2]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[29]); /*glenable*/
	local[2]= w;
	goto IF1069;
IF1068:
	local[2]= NIL;
IF1069:
	if (local[1]==NIL) goto IF1070;
	local[2]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[29]); /*glenable*/
	local[2]= w;
	goto IF1071;
IF1070:
	local[2]= NIL;
IF1071:
	w = local[2];
	local[0]= w;
BLK1056:
	ctx->vsp=local; return(local[0]);}

/*:makecurrent*/
static pointer M1072glviewsurface_makecurrent(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= loadglobal(fqv[32]);
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= argv[0]->c.obj.iv[15];
	ctx->vsp=local+3;
	w=(*ftab[13])(ctx,3,local+0,&ftab[13],fqv[33]); /*glxmakecurrent*/
	local[0]= w;
BLK1073:
	ctx->vsp=local; return(local[0]);}

/*:redraw*/
static pointer M1074glviewsurface_redraw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1076:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0];
	local[2]= fqv[34];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[0]= w;
BLK1075:
	ctx->vsp=local; return(local[0]);}

/*:flush*/
static pointer M1077glviewsurface_flush(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[9];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= argv[0];
	local[1]= *(ovafptr(argv[1],fqv[36]));
	local[2]= fqv[34];
	ctx->vsp=local+3;
	w=(pointer)SENDMESSAGE(ctx,3,local+0); /*send-message*/
	local[0]= w;
BLK1078:
	ctx->vsp=local; return(local[0]);}

/*:write-to-image-file*/
static pointer M1079glviewsurface_write_to_image_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[37], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1081;
	local[0] = makeint((eusinteger_t)0L);
KEY1081:
	if (n & (1<<1)) goto KEY1082;
	local[1] = makeint((eusinteger_t)0L);
KEY1082:
	if (n & (1<<2)) goto KEY1083;
	local[2] = argv[0]->c.obj.iv[5];
KEY1083:
	if (n & (1<<3)) goto KEY1084;
	local[3] = argv[0]->c.obj.iv[6];
KEY1084:
	local[4]= argv[0];
	local[5]= fqv[38];
	local[6]= fqv[39];
	local[7]= local[0];
	local[8]= fqv[40];
	local[9]= local[1];
	local[10]= fqv[15];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)SUB1(ctx,1,local+11); /*1-*/
	local[11]= w;
	local[12]= fqv[14];
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,10,local+4); /*send*/
	local[4]= w;
	local[5]= argv[2];
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(*ftab[14])(ctx,2,local+5,&ftab[14],fqv[41]); /*image::write-image-file*/
	local[0]= w;
BLK1080:
	ctx->vsp=local; return(local[0]);}

/*:getglimage*/
static pointer M1085glviewsurface_getglimage(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[42], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1087;
	local[0] = makeint((eusinteger_t)0L);
KEY1087:
	if (n & (1<<1)) goto KEY1088;
	local[1] = makeint((eusinteger_t)0L);
KEY1088:
	if (n & (1<<2)) goto KEY1089;
	local[2] = argv[0]->c.obj.iv[5];
KEY1089:
	if (n & (1<<3)) goto KEY1090;
	local[3] = argv[0]->c.obj.iv[6];
KEY1090:
	if (n & (1<<4)) goto KEY1091;
	local[6]= local[2];
	local[7]= local[3];
	local[8]= makeint((eusinteger_t)3L);
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,3,local+6); /***/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[15])(ctx,1,local+6,&ftab[15],fqv[43]); /*make-string*/
	local[4] = w;
KEY1091:
	if (n & (1<<5)) goto KEY1092;
	local[5] = NIL;
KEY1092:
	local[6]= loadglobal(fqv[44]);
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,1,local+6); /*instantiate*/
	local[6]= w;
	local[7]= local[6];
	local[8]= fqv[45];
	local[9]= local[2];
	local[10]= local[3];
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,5,local+7); /*send*/
	w = local[6];
	local[6]= w;
	local[7]= argv[0];
	local[8]= fqv[9];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= makeint((eusinteger_t)1028L);
	ctx->vsp=local+8;
	w=(*ftab[16])(ctx,1,local+7,&ftab[16],fqv[46]); /*glreadbuffer*/
	local[7]= makeint((eusinteger_t)3333L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(*ftab[17])(ctx,2,local+7,&ftab[17],fqv[47]); /*glpixelstorei*/
	local[7]= local[0];
	local[8]= local[1];
	local[9]= local[2];
	local[10]= local[3];
	local[11]= makeint((eusinteger_t)6407L);
	local[12]= makeint((eusinteger_t)5121L);
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(*ftab[18])(ctx,7,local+7,&ftab[18],fqv[48]); /*glreadpixels*/
	if (local[5]==NIL) goto IF1094;
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(*ftab[19])(ctx,1,local+7,&ftab[19],fqv[49]); /*user::dvector2float-bytestring*/
	local[7]= w;
	local[8]= local[0];
	local[9]= local[1];
	local[10]= local[2];
	local[11]= local[3];
	local[12]= makeint((eusinteger_t)6402L);
	local[13]= makeint((eusinteger_t)5126L);
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(*ftab[18])(ctx,7,local+8,&ftab[18],fqv[48]); /*glreadpixels*/
	local[8]= local[7];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[20])(ctx,2,local+8,&ftab[20],fqv[50]); /*user::float-bytestring2dvector*/
	local[7]= w;
	goto IF1095;
IF1094:
	local[7]= NIL;
IF1095:
	local[7]= local[6];
	ctx->vsp=local+8;
	w=(pointer)F978transpose_image_rows(ctx,1,local+7); /*transpose-image-rows*/
	w = local[6];
	local[0]= w;
BLK1086:
	ctx->vsp=local; return(local[0]);}

/*draw-globjects*/
static pointer F979draw_globjects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[51], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1097;
	local[0] = T;
KEY1097:
	if (n & (1<<1)) goto KEY1098;
	local[1] = T;
KEY1098:
	if (n & (1<<2)) goto KEY1099;
	local[2] = makeint((eusinteger_t)150L);
KEY1099:
	if (n & (1<<3)) goto KEY1100;
	local[3] = NIL;
KEY1100:
	if (n & (1<<4)) goto KEY1101;
	local[4] = fqv[52];
KEY1101:
	local[5]= NIL;
	local[6]= argv[0];
	local[7]= fqv[53];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= fqv[8];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[21])(ctx,2,local+6,&ftab[21],fqv[54]); /*resetperspective*/
	if (local[0]==NIL) goto IF1102;
	local[6]= argv[0];
	local[7]= fqv[8];
	local[8]= fqv[55];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	goto IF1103;
IF1102:
	local[6]= NIL;
IF1103:
	local[6]= argv[0];
	local[7]= fqv[8];
	local[8]= fqv[56];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[5] = w;
	if (local[2]==NIL) goto IF1104;
	w = local[2];
	if (!isnum(w)) goto IF1106;
	local[6]= local[2];
	goto IF1107;
IF1106:
	local[6]= makeint((eusinteger_t)150L);
IF1107:
	local[7]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+8;
	w=(*ftab[8])(ctx,1,local+7,&ftab[8],fqv[25]); /*gldisable*/
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(*ftab[9])(ctx,1,local+7,&ftab[9],fqv[26]); /*glbegin*/
	local[7]= fqv[57];
	ctx->vsp=local+8;
	w=(*ftab[22])(ctx,1,local+7,&ftab[22],fqv[58]); /*glcolor3fv*/
	local[7]= fqv[59];
	ctx->vsp=local+8;
	w=(*ftab[10])(ctx,1,local+7,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[7]= local[6];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[10])(ctx,1,local+7,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[7]= fqv[60];
	ctx->vsp=local+8;
	w=(*ftab[22])(ctx,1,local+7,&ftab[22],fqv[58]); /*glcolor3fv*/
	local[7]= fqv[61];
	ctx->vsp=local+8;
	w=(*ftab[10])(ctx,1,local+7,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[6];
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[10])(ctx,1,local+7,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[7]= fqv[62];
	ctx->vsp=local+8;
	w=(*ftab[22])(ctx,1,local+7,&ftab[22],fqv[58]); /*glcolor3fv*/
	local[7]= fqv[63];
	ctx->vsp=local+8;
	w=(*ftab[10])(ctx,1,local+7,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[10])(ctx,1,local+7,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(*ftab[11])(ctx,1,local+7,&ftab[11],fqv[28]); /*glend*/
	local[7]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+8;
	w=(*ftab[12])(ctx,1,local+7,&ftab[12],fqv[29]); /*glenable*/
	local[6]= w;
	goto IF1105;
IF1104:
	local[6]= NIL;
IF1105:
	if (local[3]==NIL) goto IF1108;
	w = local[3];
	if (!isnum(w)) goto IF1110;
	local[6]= local[3];
	goto IF1111;
IF1110:
	local[6]= makeint((eusinteger_t)1000L);
IF1111:
	local[7]= makeint((eusinteger_t)5000L);
	local[8]= local[7];
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,1,local+8); /*-*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+10;
	w=(*ftab[8])(ctx,1,local+9,&ftab[8],fqv[25]); /*gldisable*/
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(*ftab[9])(ctx,1,local+9,&ftab[9],fqv[26]); /*glbegin*/
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(*ftab[22])(ctx,1,local+9,&ftab[22],fqv[58]); /*glcolor3fv*/
	local[9]= local[8];
TAG1114:
	local[10]= local[9];
	local[11]= local[7];
	ctx->vsp=local+12;
	w=(pointer)GREATERP(ctx,2,local+10); /*>*/
	if (w==NIL) goto IF1115;
	w = NIL;
	ctx->vsp=local+10;
	local[9]=w;
	goto BLK1113;
	goto IF1116;
IF1115:
	local[10]= NIL;
IF1116:
	local[10]= local[8];
TAG1119:
	local[11]= local[10];
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)GREATERP(ctx,2,local+11); /*>*/
	if (w==NIL) goto IF1120;
	w = NIL;
	ctx->vsp=local+11;
	local[10]=w;
	goto BLK1118;
	goto IF1121;
IF1120:
	local[11]= NIL;
IF1121:
	local[11]= local[10];
	local[12]= local[8];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)MKFLTVEC(ctx,3,local+11); /*float-vector*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[10])(ctx,1,local+11,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[11]= local[10];
	local[12]= local[7];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)MKFLTVEC(ctx,3,local+11); /*float-vector*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[10])(ctx,1,local+11,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[11]= local[8];
	local[12]= local[9];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)MKFLTVEC(ctx,3,local+11); /*float-vector*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[10])(ctx,1,local+11,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[11]= local[7];
	local[12]= local[9];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)MKFLTVEC(ctx,3,local+11); /*float-vector*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[10])(ctx,1,local+11,&ftab[10],fqv[27]); /*glvertex3fv*/
	local[11]= local[10];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	local[10] = local[11];
	w = NIL;
	ctx->vsp=local+11;
	goto TAG1119;
	w = NIL;
	local[10]= w;
BLK1118:
	local[10]= local[9];
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[10]= w;
	local[9] = local[10];
	w = NIL;
	ctx->vsp=local+10;
	goto TAG1114;
	w = NIL;
	local[9]= w;
BLK1113:
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(*ftab[11])(ctx,1,local+9,&ftab[11],fqv[28]); /*glend*/
	local[9]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+10;
	w=(*ftab[12])(ctx,1,local+9,&ftab[12],fqv[29]); /*glenable*/
	local[6]= w;
	goto IF1109;
IF1108:
	local[6]= NIL;
IF1109:
	local[6]= makeint((eusinteger_t)3042L);
	ctx->vsp=local+7;
	w=(*ftab[8])(ctx,1,local+6,&ftab[8],fqv[25]); /*gldisable*/
	local[6]= argv[0];
	local[7]= fqv[8];
	local[8]= fqv[56];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= NIL;
	local[7]= argv[1];
WHL1125:
	if (local[7]==NIL) goto WHX1126;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= local[6];
	local[9]= fqv[64];
	ctx->vsp=local+10;
	w=(*ftab[23])(ctx,2,local+8,&ftab[23],fqv[65]); /*find-method*/
	if (w==NIL) goto CON1130;
	local[8]= local[6];
	local[9]= fqv[64];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,3,local+8); /*send*/
	local[8]= w;
	goto CON1129;
CON1130:
	local[8]= local[6];
	local[9]= loadglobal(fqv[66]);
	ctx->vsp=local+10;
	w=(pointer)DERIVEDP(ctx,2,local+8); /*derivedp*/
	if (w==NIL) goto CON1131;
	local[8]= argv[0];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)F980draw_glbody(ctx,2,local+8); /*draw-glbody*/
	local[8]= w;
	goto CON1129;
CON1131:
	local[8]= local[6];
	local[9]= fqv[67];
	ctx->vsp=local+10;
	w=(*ftab[23])(ctx,2,local+8,&ftab[23],fqv[65]); /*find-method*/
	if (w==NIL) goto CON1132;
	local[8]= local[6];
	local[9]= fqv[67];
	local[10]= fqv[68];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= w;
	goto CON1129;
CON1132:
	local[8]= fqv[69];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[24])(ctx,2,local+8,&ftab[24],fqv[70]); /*warn*/
	local[8]= w;
	goto CON1129;
CON1133:
	local[8]= NIL;
CON1129:
	goto WHL1125;
WHX1126:
	local[8]= NIL;
BLK1127:
	w = NIL;
	if (local[1]==NIL) goto IF1134;
	local[6]= argv[0];
	local[7]= fqv[8];
	local[8]= fqv[34];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	goto IF1135;
IF1134:
	local[6]= NIL;
IF1135:
	w = local[6];
	local[0]= w;
BLK1096:
	ctx->vsp=local; return(local[0]);}

/*draw-glbody*/
static pointer F980draw_glbody(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[8];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= *(ovafptr(w,fqv[13]));
	local[1]= local[0];
	local[2]= argv[1];
	local[3]= fqv[71];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)ASSQ(ctx,2,local+1); /*assq*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	local[2]= local[0];
	local[3]= argv[1];
	local[4]= fqv[72];
	ctx->vsp=local+5;
	w=(pointer)GETPROP(ctx,2,local+3); /*get*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)ASSQ(ctx,2,local+2); /*assq*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	local[3]= argv[1];
	local[4]= fqv[73];
	ctx->vsp=local+5;
	w=(pointer)GETPROP(ctx,2,local+3); /*get*/
	local[3]= w;
	if (local[3]!=NIL) goto IF1137;
	local[4]= makeflt(5.0000000000000000000000e-01);
	local[5]= makeflt(5.0000000000000000000000e-01);
	local[6]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,3,local+4); /*float-vector*/
	local[3] = w;
	local[4]= local[3];
	goto IF1138;
IF1137:
	local[4]= NIL;
IF1138:
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)VECTORP(ctx,1,local+4); /*vectorp*/
	if (w!=NIL) goto IF1139;
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)F981find_color(ctx,1,local+4); /*find-color*/
	local[3] = w;
	local[4]= argv[1];
	local[5]= local[3];
	local[6]= fqv[73];
	ctx->vsp=local+7;
	w=(pointer)PUTPROP(ctx,3,local+4); /*putprop*/
	local[4]= w;
	goto IF1140;
IF1139:
	local[4]= NIL;
IF1140:
	if (local[1]==NIL) goto CON1142;
	local[4]= argv[1];
	local[5]= fqv[74];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[75];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[25])(ctx,0,local+5,&ftab[25],fqv[76]); /*glpushmatrix*/
	local[5]= local[4];
	local[6]= loadglobal(fqv[77]);
	ctx->vsp=local+7;
	w=(pointer)TRANSPOSE(ctx,2,local+5); /*transpose*/
	local[5]= w->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(*ftab[26])(ctx,1,local+5,&ftab[26],fqv[78]); /*glmultmatrixf*/
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(*ftab[27])(ctx,1,local+5,&ftab[27],fqv[79]); /*glcalllist*/
	ctx->vsp=local+5;
	w=(*ftab[28])(ctx,0,local+5,&ftab[28],fqv[80]); /*glpopmatrix*/
	local[4]= w;
	goto CON1141;
CON1142:
	if (local[2]==NIL) goto CON1143;
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(*ftab[29])(ctx,1,local+4,&ftab[29],fqv[81]); /*glgenlists*/
	local[4]= w;
	local[5]= local[4];
	local[6]= makeint((eusinteger_t)4864L);
	ctx->vsp=local+7;
	w=(*ftab[30])(ctx,2,local+5,&ftab[30],fqv[82]); /*glnewlist*/
	local[5]= makeint((eusinteger_t)1048575L);
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,1,local+5,&ftab[31],fqv[83]); /*glpushattrib*/
	local[5]= makeint((eusinteger_t)2929L);
	ctx->vsp=local+6;
	w=(*ftab[32])(ctx,1,local+5,&ftab[32],fqv[84]); /*gldepthfunc*/
	local[5]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+6;
	w=(*ftab[8])(ctx,1,local+5,&ftab[8],fqv[25]); /*gldisable*/
	local[5]= fqv[85];
	ctx->vsp=local+6;
	w=(*ftab[22])(ctx,1,local+5,&ftab[22],fqv[58]); /*glcolor3fv*/
	local[5]= NIL;
	local[6]= argv[1];
	local[7]= fqv[86];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
WHL1145:
	if (local[6]==NIL) goto WHX1146;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= makeint((eusinteger_t)3L);
	ctx->vsp=local+8;
	w=(*ftab[9])(ctx,1,local+7,&ftab[9],fqv[26]); /*glbegin*/
	local[7]= NIL;
	local[8]= local[5];
	local[9]= fqv[87];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
WHL1150:
	if (local[8]==NIL) goto WHX1151;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8] = (w)->c.cons.cdr;
	w = local[9];
	local[7] = w;
	local[9]= argv[1];
	local[10]= fqv[88];
	local[11]= local[7];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[10])(ctx,1,local+9,&ftab[10],fqv[27]); /*glvertex3fv*/
	goto WHL1150;
WHX1151:
	local[9]= NIL;
BLK1152:
	w = NIL;
	ctx->vsp=local+7;
	w=(*ftab[11])(ctx,0,local+7,&ftab[11],fqv[28]); /*glend*/
	goto WHL1145;
WHX1146:
	local[7]= NIL;
BLK1147:
	w = NIL;
	local[5]= makeint((eusinteger_t)32823L);
	ctx->vsp=local+6;
	w=(*ftab[12])(ctx,1,local+5,&ftab[12],fqv[29]); /*glenable*/
	local[5]= makeint((eusinteger_t)1032L);
	local[6]= makeint((eusinteger_t)6914L);
	ctx->vsp=local+7;
	w=(*ftab[33])(ctx,2,local+5,&ftab[33],fqv[89]); /*glpolygonmode*/
	local[5]= makeflt(1.0000000000000000000000e+00);
	local[6]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(*ftab[34])(ctx,2,local+5,&ftab[34],fqv[90]); /*glpolygonoffset*/
	local[5]= fqv[91];
	ctx->vsp=local+6;
	w=(*ftab[22])(ctx,1,local+5,&ftab[22],fqv[58]); /*glcolor3fv*/
	local[5]= makeint((eusinteger_t)2884L);
	ctx->vsp=local+6;
	w=(*ftab[12])(ctx,1,local+5,&ftab[12],fqv[29]); /*glenable*/
	local[5]= makeint((eusinteger_t)1028L);
	ctx->vsp=local+6;
	w=(*ftab[35])(ctx,1,local+5,&ftab[35],fqv[92]); /*glcullface*/
	local[5]= NIL;
	local[6]= argv[1];
	local[7]= fqv[86];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
WHL1155:
	if (local[6]==NIL) goto WHX1156;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= makeint((eusinteger_t)9L);
	ctx->vsp=local+8;
	w=(*ftab[9])(ctx,1,local+7,&ftab[9],fqv[26]); /*glbegin*/
	local[7]= argv[1];
	local[8]= fqv[93];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)TRANSPOSE(ctx,1,local+7); /*transpose*/
	local[7]= w;
	local[8]= local[5];
	local[9]= fqv[94];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)TRANSFORM(ctx,2,local+7); /*transform*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[36])(ctx,1,local+7,&ftab[36],fqv[95]); /*glnormal3fv*/
	local[7]= NIL;
	local[8]= local[5];
	local[9]= fqv[96];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
WHL1160:
	if (local[8]==NIL) goto WHX1161;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8] = (w)->c.cons.cdr;
	w = local[9];
	local[7] = w;
	local[9]= argv[1];
	local[10]= fqv[88];
	local[11]= local[7];
	local[12]= fqv[97];
	local[13]= local[5];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,3,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[10])(ctx,1,local+9,&ftab[10],fqv[27]); /*glvertex3fv*/
	goto WHL1160;
WHX1161:
	local[9]= NIL;
BLK1162:
	w = NIL;
	ctx->vsp=local+7;
	w=(*ftab[11])(ctx,0,local+7,&ftab[11],fqv[28]); /*glend*/
	goto WHL1155;
WHX1156:
	local[7]= NIL;
BLK1157:
	w = NIL;
	local[5]= makeint((eusinteger_t)2884L);
	ctx->vsp=local+6;
	w=(*ftab[8])(ctx,1,local+5,&ftab[8],fqv[25]); /*gldisable*/
	local[5]= makeint((eusinteger_t)32823L);
	ctx->vsp=local+6;
	w=(*ftab[8])(ctx,1,local+5,&ftab[8],fqv[25]); /*gldisable*/
	local[5]= makeint((eusinteger_t)2896L);
	ctx->vsp=local+6;
	w=(*ftab[12])(ctx,1,local+5,&ftab[12],fqv[29]); /*glenable*/
	ctx->vsp=local+5;
	w=(*ftab[37])(ctx,0,local+5,&ftab[37],fqv[98]); /*glpopattrib*/
	ctx->vsp=local+5;
	w=(*ftab[38])(ctx,0,local+5,&ftab[38],fqv[99]); /*glendlist*/
	local[5]= argv[1];
	local[6]= local[0];
	w = local[4];
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= argv[1];
	local[8]= fqv[71];
	ctx->vsp=local+9;
	w=(pointer)GETPROP(ctx,2,local+7); /*get*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[71];
	ctx->vsp=local+8;
	w=(pointer)PUTPROP(ctx,3,local+5); /*putprop*/
	local[5]= argv[0];
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)F980draw_glbody(ctx,2,local+5); /*draw-glbody*/
	local[4]= w;
	goto CON1141;
CON1143:
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(*ftab[29])(ctx,1,local+4,&ftab[29],fqv[81]); /*glgenlists*/
	local[4]= w;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)NUMEQUAL(ctx,2,local+5); /*=*/
	local[5]= w;
	if (w==NIL) goto AND1165;
	local[5]= local[3];
	local[6]= makeint((eusinteger_t)3L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)LESSP(ctx,2,local+5); /*<*/
	local[5]= w;
AND1165:
	local[6]= argv[1];
	local[7]= fqv[100];
	ctx->vsp=local+8;
	w=(pointer)GETPROP(ctx,2,local+6); /*get*/
	if (w==NIL) goto IF1166;
	local[6]= loadglobal(fqv[101]);
	local[7]= argv[1];
	local[8]= fqv[100];
	ctx->vsp=local+9;
	w=(pointer)GETPROP(ctx,2,local+7); /*get*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[6]= w;
	goto IF1167;
IF1166:
	local[6]= NIL;
IF1167:
	local[7]= NIL;
	local[8]= local[4];
	local[9]= makeint((eusinteger_t)4864L);
	ctx->vsp=local+10;
	w=(*ftab[30])(ctx,2,local+8,&ftab[30],fqv[82]); /*glnewlist*/
	if (local[5]==NIL) goto IF1168;
	local[8]= makeint((eusinteger_t)3042L);
	ctx->vsp=local+9;
	w=(*ftab[12])(ctx,1,local+8,&ftab[12],fqv[29]); /*glenable*/
	local[8]= makeint((eusinteger_t)770L);
	local[9]= makeint((eusinteger_t)771L);
	ctx->vsp=local+10;
	w=(*ftab[39])(ctx,2,local+8,&ftab[39],fqv[102]); /*glblendfunc*/
	local[8]= w;
	goto IF1169;
IF1168:
	local[8]= NIL;
IF1169:
	local[8]= makeint((eusinteger_t)1032L);
	local[9]= makeint((eusinteger_t)5634L);
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(*ftab[40])(ctx,3,local+8,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[8] <= (eusinteger_t)w) goto IF1170;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[41])(ctx,2,local+8,&ftab[41],fqv[104]); /*glgentexturesext*/
	local[8]= w;
	goto IF1171;
IF1170:
	local[8]= NIL;
IF1171:
	local[8]= NIL;
	local[9]= argv[1];
	local[10]= fqv[86];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
WHL1173:
	if (local[9]==NIL) goto WHX1174;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9] = (w)->c.cons.cdr;
	w = local[10];
	local[8] = w;
	local[10]= local[8];
	local[11]= fqv[105];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	if (w==NIL) goto CON1178;
	local[10]= local[8];
	local[11]= fqv[106];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	if (w!=NIL) goto CON1178;
	local[10]= local[8];
	local[11]= fqv[100];
	ctx->vsp=local+12;
	w=(pointer)GETPROP(ctx,2,local+10); /*get*/
	local[10]= w;
	local[11]= local[8];
	local[12]= fqv[107];
	ctx->vsp=local+13;
	w=(pointer)GETPROP(ctx,2,local+11); /*get*/
	local[11]= w;
	local[12]= local[10];
	local[13]= loadglobal(fqv[44]);
	ctx->vsp=local+14;
	w=(pointer)DERIVEDP(ctx,2,local+12); /*derivedp*/
	if (w==NIL) goto CON1180;
	local[12]= makeint((eusinteger_t)6407L);
	goto CON1179;
CON1180:
	local[12]= local[10];
	local[13]= loadglobal(fqv[108]);
	ctx->vsp=local+14;
	w=(pointer)DERIVEDP(ctx,2,local+12); /*derivedp*/
	if (w==NIL) goto CON1181;
	local[12]= makeint((eusinteger_t)6409L);
	goto CON1179;
CON1181:
	local[12]= NIL;
CON1179:
	if (local[10]==NIL) goto IF1182;
	local[13]= local[10];
	local[14]= fqv[109];
	ctx->vsp=local+15;
	w=(pointer)GETPROP(ctx,2,local+13); /*get*/
	if (w!=NIL) goto IF1184;
	local[13]= local[6];
	local[14]= local[10];
	local[15]= argv[1];
	local[16]= fqv[100];
	ctx->vsp=local+17;
	w=(pointer)GETPROP(ctx,2,local+15); /*get*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(*ftab[42])(ctx,2,local+14,&ftab[42],fqv[110]); /*position*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[10];
	local[15]= fqv[15];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
	local[15]= local[10];
	local[16]= fqv[14];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	local[16]= local[10];
	local[17]= fqv[111];
	ctx->vsp=local+18;
	w=(pointer)GETPROP(ctx,2,local+16); /*get*/
	local[16]= w;
	if (w!=NIL) goto OR1186;
	local[16]= makeint((eusinteger_t)256L);
OR1186:
	local[17]= local[10];
	local[18]= fqv[112];
	ctx->vsp=local+19;
	w=(pointer)GETPROP(ctx,2,local+17); /*get*/
	local[17]= w;
	if (w!=NIL) goto OR1187;
	local[17]= makeint((eusinteger_t)256L);
OR1187:
	local[18]= makeint((eusinteger_t)1L);
	local[19]= local[14];
	local[20]= makeint((eusinteger_t)2L);
	ctx->vsp=local+21;
	w=(pointer)LOG(ctx,2,local+19); /*log*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)CEILING(ctx,1,local+19); /*ceiling*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)ASH(ctx,2,local+18); /*ash*/
	local[18]= w;
	local[19]= makeint((eusinteger_t)1L);
	local[20]= local[15];
	local[21]= makeint((eusinteger_t)2L);
	ctx->vsp=local+22;
	w=(pointer)LOG(ctx,2,local+20); /*log*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)CEILING(ctx,1,local+20); /*ceiling*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ASH(ctx,2,local+19); /*ash*/
	local[19]= w;
	local[20]= local[10];
	local[21]= local[14];
	local[22]= local[18];
	ctx->vsp=local+23;
	w=(pointer)NUMEQUAL(ctx,2,local+21); /*=*/
	if (w==NIL) goto AND1190;
	local[21]= local[15];
	local[22]= local[19];
	ctx->vsp=local+23;
	w=(pointer)NUMEQUAL(ctx,2,local+21); /*=*/
	if (w==NIL) goto AND1190;
	goto IF1188;
AND1190:
	local[21]= NIL;
	local[22]= NIL;
	local[23]= local[20];
	local[24]= fqv[113];
	ctx->vsp=local+25;
	w=(pointer)SEND(ctx,2,local+23); /*send*/
	local[23]= w;
	local[24]= NIL;
	local[25]= local[12];
	local[26]= makeint((eusinteger_t)6407L);
	ctx->vsp=local+27;
	w=(pointer)NUMEQUAL(ctx,2,local+25); /*=*/
	if (w==NIL) goto CON1192;
	local[25]= local[20];
	local[26]= fqv[114];
	ctx->vsp=local+27;
	w=(pointer)SEND(ctx,2,local+25); /*send*/
	local[25]= w;
	local[26]= makeint((eusinteger_t)8L);
	ctx->vsp=local+27;
	w=(pointer)QUOTIENT(ctx,2,local+25); /*/*/
	local[22] = w;
	local[25]= local[22];
	local[26]= makeint((eusinteger_t)3L);
	ctx->vsp=local+27;
	w=(pointer)NUMEQUAL(ctx,2,local+25); /*=*/
	if (w!=NIL) goto IF1193;
	local[25]= fqv[115];
	ctx->vsp=local+26;
	w=(pointer)SIGERROR(ctx,1,local+25); /*error*/
	local[25]= w;
	goto IF1194;
IF1193:
	local[25]= NIL;
IF1194:
	goto CON1191;
CON1192:
	local[25]= local[12];
	local[26]= makeint((eusinteger_t)6409L);
	ctx->vsp=local+27;
	w=(pointer)NUMEQUAL(ctx,2,local+25); /*=*/
	if (w==NIL) goto CON1195;
	local[22] = makeint((eusinteger_t)1L);
	local[25]= local[22];
	goto CON1191;
CON1195:
	local[25]= fqv[116];
	local[26]= local[12];
	local[27]= local[20];
	ctx->vsp=local+28;
	w=(pointer)SIGERROR(ctx,3,local+25); /*error*/
	local[25]= w;
	goto CON1191;
CON1196:
	local[25]= NIL;
CON1191:
	local[25]= local[18];
	local[26]= local[19];
	ctx->vsp=local+27;
	w=(pointer)TIMES(ctx,2,local+25); /***/
	local[25]= w;
	local[26]= local[16];
	local[27]= local[17];
	ctx->vsp=local+28;
	w=(pointer)TIMES(ctx,2,local+26); /***/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)QUOTIENT(ctx,2,local+25); /*/*/
	local[25]= w;
	ctx->vsp=local+26;
	w=(pointer)SQRT(ctx,1,local+25); /*sqrt*/
	local[25]= w;
	ctx->vsp=local+26;
	w=(pointer)ROUND(ctx,1,local+25); /*round*/
	local[24] = w;
	local[25]= local[24];
	w = makeint((eusinteger_t)1L);
	if ((eusinteger_t)local[25] <= (eusinteger_t)w) goto IF1197;
	local[25]= makeint((eusinteger_t)1L);
	local[26]= local[18];
	local[27]= local[24];
	ctx->vsp=local+28;
	w=(pointer)QUOTIENT(ctx,2,local+26); /*/*/
	local[26]= w;
	local[27]= makeint((eusinteger_t)2L);
	ctx->vsp=local+28;
	w=(pointer)LOG(ctx,2,local+26); /*log*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)CEILING(ctx,1,local+26); /*ceiling*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)ASH(ctx,2,local+25); /*ash*/
	local[18] = w;
	local[25]= makeint((eusinteger_t)1L);
	local[26]= local[19];
	local[27]= local[24];
	ctx->vsp=local+28;
	w=(pointer)QUOTIENT(ctx,2,local+26); /*/*/
	local[26]= w;
	local[27]= makeint((eusinteger_t)2L);
	ctx->vsp=local+28;
	w=(pointer)LOG(ctx,2,local+26); /*log*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)CEILING(ctx,1,local+26); /*ceiling*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)ASH(ctx,2,local+25); /*ash*/
	local[19] = w;
	local[25]= local[19];
	goto IF1198;
IF1197:
	local[25]= NIL;
IF1198:
	local[25]= local[18];
	local[26]= local[19];
	local[27]= local[22];
	ctx->vsp=local+28;
	w=(pointer)TIMES(ctx,3,local+25); /***/
	local[25]= w;
	ctx->vsp=local+26;
	w=(*ftab[15])(ctx,1,local+25,&ftab[15],fqv[43]); /*make-string*/
	local[21] = w;
	local[25]= local[12];
	local[26]= local[14];
	local[27]= local[15];
	local[28]= makeint((eusinteger_t)5121L);
	local[29]= local[20];
	local[30]= fqv[17];
	ctx->vsp=local+31;
	w=(pointer)SEND(ctx,2,local+29); /*send*/
	local[29]= w;
	local[30]= local[18];
	local[31]= local[19];
	local[32]= makeint((eusinteger_t)5121L);
	local[33]= local[21];
	ctx->vsp=local+34;
	w=(*ftab[43])(ctx,9,local+25,&ftab[43],fqv[117]); /*gluscaleimage*/
	local[25]= local[20];
	ctx->vsp=local+26;
	w=(pointer)GETCLASS(ctx,1,local+25); /*class*/
	local[25]= w;
	ctx->vsp=local+26;
	w=(pointer)INSTANTIATE(ctx,1,local+25); /*instantiate*/
	local[25]= w;
	local[26]= local[25];
	local[27]= fqv[45];
	local[28]= local[18];
	local[29]= local[19];
	local[30]= local[21];
	ctx->vsp=local+31;
	w=(pointer)SEND(ctx,5,local+26); /*send*/
	w = local[25];
	local[20] = w;
	local[25]= local[20];
	local[26]= fqv[113];
	local[27]= local[23];
	ctx->vsp=local+28;
	w=(pointer)SEND(ctx,3,local+25); /*send*/
	local[21]= w;
	goto IF1189;
IF1188:
	local[21]= NIL;
IF1189:
	local[21]= makeint((eusinteger_t)3553L);
	local[22]= local[13];
	ctx->vsp=local+23;
	w=(*ftab[44])(ctx,2,local+21,&ftab[44],fqv[118]); /*glbindtextureext*/
	local[21]= makeint((eusinteger_t)3553L);
	local[22]= makeint((eusinteger_t)0L);
	local[23]= makeint((eusinteger_t)6407L);
	local[24]= local[20];
	local[25]= fqv[15];
	ctx->vsp=local+26;
	w=(pointer)SEND(ctx,2,local+24); /*send*/
	local[24]= w;
	local[25]= local[20];
	local[26]= fqv[14];
	ctx->vsp=local+27;
	w=(pointer)SEND(ctx,2,local+25); /*send*/
	local[25]= w;
	local[26]= makeint((eusinteger_t)0L);
	local[27]= local[12];
	local[28]= makeint((eusinteger_t)5121L);
	local[29]= local[20];
	local[30]= fqv[17];
	ctx->vsp=local+31;
	w=(pointer)SEND(ctx,2,local+29); /*send*/
	local[29]= w;
	ctx->vsp=local+30;
	w=(*ftab[45])(ctx,9,local+21,&ftab[45],fqv[119]); /*glteximage2d*/
	local[21]= local[10];
	local[22]= local[13];
	local[23]= fqv[109];
	ctx->vsp=local+24;
	w=(pointer)PUTPROP(ctx,3,local+21); /*putprop*/
	local[13]= w;
	goto IF1185;
IF1184:
	local[13]= NIL;
IF1185:
	local[13]= makeint((eusinteger_t)3317L);
	local[14]= makeint((eusinteger_t)1L);
	ctx->vsp=local+15;
	w=(*ftab[17])(ctx,2,local+13,&ftab[17],fqv[47]); /*glpixelstorei*/
	local[13]= makeint((eusinteger_t)3553L);
	local[14]= makeint((eusinteger_t)10242L);
	local[15]= makeint((eusinteger_t)10497L);
	ctx->vsp=local+16;
	w=(*ftab[46])(ctx,3,local+13,&ftab[46],fqv[120]); /*gltexparameteri*/
	local[13]= makeint((eusinteger_t)3553L);
	local[14]= makeint((eusinteger_t)10243L);
	local[15]= makeint((eusinteger_t)10497L);
	ctx->vsp=local+16;
	w=(*ftab[46])(ctx,3,local+13,&ftab[46],fqv[120]); /*gltexparameteri*/
	local[13]= makeint((eusinteger_t)3553L);
	local[14]= makeint((eusinteger_t)10241L);
	local[15]= makeint((eusinteger_t)9728L);
	ctx->vsp=local+16;
	w=(*ftab[46])(ctx,3,local+13,&ftab[46],fqv[120]); /*gltexparameteri*/
	local[13]= makeint((eusinteger_t)3553L);
	local[14]= makeint((eusinteger_t)10240L);
	local[15]= makeint((eusinteger_t)9728L);
	ctx->vsp=local+16;
	w=(*ftab[46])(ctx,3,local+13,&ftab[46],fqv[120]); /*gltexparameteri*/
	local[13]= makeint((eusinteger_t)8960L);
	local[14]= makeint((eusinteger_t)8704L);
	local[15]= makeint((eusinteger_t)8449L);
	ctx->vsp=local+16;
	w=(*ftab[47])(ctx,3,local+13,&ftab[47],fqv[121]); /*gltexenvi*/
	local[13]= makeint((eusinteger_t)3553L);
	ctx->vsp=local+14;
	w=(*ftab[12])(ctx,1,local+13,&ftab[12],fqv[29]); /*glenable*/
	local[13]= makeint((eusinteger_t)3553L);
	local[14]= local[10];
	local[15]= fqv[109];
	ctx->vsp=local+16;
	w=(pointer)GETPROP(ctx,2,local+14); /*get*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(*ftab[44])(ctx,2,local+13,&ftab[44],fqv[118]); /*glbindtextureext*/
	local[13]= w;
	goto IF1183;
IF1182:
	local[13]= NIL;
IF1183:
	local[13]= makeint((eusinteger_t)9L);
	ctx->vsp=local+14;
	w=(*ftab[9])(ctx,1,local+13,&ftab[9],fqv[26]); /*glbegin*/
	local[13]= argv[1];
	local[14]= fqv[93];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)TRANSPOSE(ctx,1,local+13); /*transpose*/
	local[13]= w;
	local[14]= local[8];
	local[15]= fqv[94];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)TRANSFORM(ctx,2,local+13); /*transform*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(*ftab[36])(ctx,1,local+13,&ftab[36],fqv[95]); /*glnormal3fv*/
	local[13]= NIL;
	local[14]= local[8];
	local[15]= fqv[96];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
WHL1201:
	if (local[14]==NIL) goto WHX1202;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14] = (w)->c.cons.cdr;
	w = local[15];
	local[13] = w;
	if (local[11]==NIL) goto IF1205;
	local[15]= local[13];
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(*ftab[48])(ctx,2,local+15,&ftab[48],fqv[122]); /*gethash*/
	local[7] = w;
	if (local[7]==NIL) goto IF1205;
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(*ftab[49])(ctx,1,local+15,&ftab[49],fqv[123]); /*gltexcoord2fv*/
	local[15]= w;
	goto IF1206;
IF1205:
	local[15]= NIL;
IF1206:
	local[15]= argv[1];
	local[16]= fqv[88];
	local[17]= local[13];
	local[18]= fqv[97];
	local[19]= local[8];
	ctx->vsp=local+20;
	w=(pointer)SEND(ctx,3,local+17); /*send*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(*ftab[10])(ctx,1,local+15,&ftab[10],fqv[27]); /*glvertex3fv*/
	goto WHL1201;
WHX1202:
	local[15]= NIL;
BLK1203:
	w = NIL;
	ctx->vsp=local+13;
	w=(*ftab[11])(ctx,0,local+13,&ftab[11],fqv[28]); /*glend*/
	if (local[10]==NIL) goto IF1207;
	local[13]= makeint((eusinteger_t)3553L);
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,1,local+13,&ftab[8],fqv[25]); /*gldisable*/
	local[13]= makeint((eusinteger_t)3553L);
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(*ftab[44])(ctx,2,local+13,&ftab[44],fqv[118]); /*glbindtextureext*/
	local[13]= w;
	goto IF1208;
IF1207:
	local[13]= NIL;
IF1208:
	w = local[13];
	local[10]= w;
	goto CON1177;
CON1178:
	local[10]= local[8];
	local[11]= fqv[106];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= NIL;
	ctx->vsp=local+12;
	local[12]= makeclosure(codevec,quotevec,CLO1210,env,argv,local);
	local[13]= local[8];
	local[14]= fqv[87];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.cdr;
	ctx->vsp=local+14;
	w=(pointer)MAPCAR(ctx,2,local+12); /*mapcar*/
	local[11] = w;
	local[12]= loadglobal(fqv[124]);
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(*ftab[50])(ctx,2,local+12,&ftab[50],fqv[125]); /*glutessbeginpolygon*/
	local[12]= loadglobal(fqv[124]);
	ctx->vsp=local+13;
	w=(*ftab[51])(ctx,1,local+12,&ftab[51],fqv[126]); /*glutessbegincontour*/
	local[12]= local[8];
	local[13]= fqv[94];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(*ftab[36])(ctx,1,local+12,&ftab[36],fqv[95]); /*glnormal3fv*/
	ctx->vsp=local+12;
	local[12]= makeclosure(codevec,quotevec,CLO1211,env,argv,local);
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(pointer)MAPC(ctx,2,local+12); /*mapc*/
	local[12]= loadglobal(fqv[124]);
	ctx->vsp=local+13;
	w=(*ftab[52])(ctx,1,local+12,&ftab[52],fqv[127]); /*glutessendcontour*/
	local[12]= loadglobal(fqv[124]);
	ctx->vsp=local+13;
	w=(*ftab[51])(ctx,1,local+12,&ftab[51],fqv[126]); /*glutessbegincontour*/
	if (local[10]==NIL) goto IF1212;
	local[12]= NIL;
	local[13]= local[10];
	w = local[12];
	ctx->vsp=local+14;
	bindspecial(ctx,fqv[128],w);
WHL1215:
	if (local[13]==NIL) goto WHX1216;
	w=local[13];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	w=local[13];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13] = (w)->c.cons.cdr;
	w = local[17];
	local[17]= w;
	storeglobal(fqv[128],w);
	ctx->vsp=local+17;
	local[17]= makeclosure(codevec,quotevec,CLO1219,env,argv,local);
	local[18]= loadglobal(fqv[128]);
	local[19]= fqv[87];
	ctx->vsp=local+20;
	w=(pointer)SEND(ctx,2,local+18); /*send*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)MAPCAR(ctx,2,local+17); /*mapcar*/
	local[17]= w;
	local[18]= loadglobal(fqv[124]);
	local[19]= makeint((eusinteger_t)100122L);
	ctx->vsp=local+20;
	w=(*ftab[53])(ctx,2,local+18,&ftab[53],fqv[129]); /*glunextcontour*/
	ctx->vsp=local+18;
	local[18]= makeclosure(codevec,quotevec,CLO1220,env,argv,local);
	local[19]= local[17];
	ctx->vsp=local+20;
	w=(pointer)MAPC(ctx,2,local+18); /*mapc*/
	local[18]= local[11];
	local[19]= local[17];
	ctx->vsp=local+20;
	w=(pointer)NCONC(ctx,2,local+18); /*nconc*/
	goto WHL1215;
WHX1216:
	local[17]= NIL;
BLK1217:
	local[17]= NIL;
	ctx->vsp=local+18;
	unbindx(ctx,1);
	w = local[17];
	local[12]= w;
	goto IF1213;
IF1212:
	local[12]= NIL;
IF1213:
	local[12]= loadglobal(fqv[124]);
	ctx->vsp=local+13;
	w=(*ftab[52])(ctx,1,local+12,&ftab[52],fqv[127]); /*glutessendcontour*/
	local[12]= loadglobal(fqv[124]);
	ctx->vsp=local+13;
	w=(*ftab[54])(ctx,1,local+12,&ftab[54],fqv[130]); /*glutessendpolygon*/
	local[12]= (pointer)get_sym_func(fqv[131]);
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(pointer)MAPC(ctx,2,local+12); /*mapc*/
	local[10]= w;
	goto CON1177;
CON1209:
	local[10]= NIL;
CON1177:
	goto WHL1173;
WHX1174:
	local[10]= NIL;
BLK1175:
	w = NIL;
	if (local[5]==NIL) goto IF1221;
	local[8]= makeint((eusinteger_t)3042L);
	ctx->vsp=local+9;
	w=(*ftab[8])(ctx,1,local+8,&ftab[8],fqv[25]); /*gldisable*/
	local[8]= w;
	goto IF1222;
IF1221:
	local[8]= NIL;
IF1222:
	ctx->vsp=local+8;
	w=(*ftab[38])(ctx,0,local+8,&ftab[38],fqv[99]); /*glendlist*/
	local[8]= argv[1];
	local[9]= local[0];
	w = local[4];
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= argv[1];
	local[11]= fqv[71];
	ctx->vsp=local+12;
	w=(pointer)GETPROP(ctx,2,local+10); /*get*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[71];
	ctx->vsp=local+11;
	w=(pointer)PUTPROP(ctx,3,local+8); /*putprop*/
	local[8]= argv[0];
	local[9]= argv[1];
	ctx->vsp=local+10;
	w=(pointer)F980draw_glbody(ctx,2,local+8); /*draw-glbody*/
	local[4]= w;
	goto CON1141;
CON1164:
	local[4]= NIL;
CON1141:
	w = local[4];
	local[0]= w;
BLK1136:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1210(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[1];
	local[1]= fqv[88];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	argv[0] = w;
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(*ftab[55])(ctx,5,local+0,&ftab[55],fqv[132]); /*alloctessinfo*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1211(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= loadglobal(fqv[124]);
	local[1]= argv[0];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[56])(ctx,3,local+0,&ftab[56],fqv[133]); /*glutessvertex*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1219(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[1];
	local[1]= fqv[88];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	argv[0] = w;
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(*ftab[55])(ctx,5,local+0,&ftab[55],fqv[132]); /*alloctessinfo*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1220(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= loadglobal(fqv[124]);
	local[1]= argv[0];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[56])(ctx,3,local+0,&ftab[56],fqv[133]); /*glutessvertex*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*find-color*/
static pointer F981find_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	if (argv[0]!=NIL) goto CON1225;
	local[2]= NIL;
	goto CON1224;
CON1225:
	local[2]= argv[0];
	local[3]= loadglobal(fqv[134]);
	ctx->vsp=local+4;
	w=(pointer)DERIVEDP(ctx,2,local+2); /*derivedp*/
	if (w==NIL) goto CON1226;
	local[2]= argv[0];
	local[3]= fqv[135];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	goto CON1224;
CON1226:
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)VECTORP(ctx,1,local+2); /*vectorp*/
	if (w==NIL) goto CON1227;
	local[2]= argv[0];
	goto CON1224;
CON1227:
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LISTP(ctx,1,local+2); /*listp*/
	if (w==NIL) goto CON1228;
	local[2]= argv[0];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	local[3]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+5;
	w=(pointer)QUOTIENT(ctx,2,local+3); /*/*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,3,local+2); /*float-vector*/
	local[2]= w;
	goto CON1224;
CON1228:
	w = argv[0];
	if (!issymbol(w)) goto CON1229;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO1230,env,argv,local);
	local[3]= loadglobal(fqv[136]);
	ctx->vsp=local+4;
	w=(*ftab[57])(ctx,2,local+2,&ftab[57],fqv[137]); /*find-if*/
	local[1] = w;
	if (local[1]==NIL) goto IF1231;
	local[2]= local[1];
	local[3]= fqv[135];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	goto IF1232;
IF1231:
	local[2]= fqv[138];
	ctx->vsp=local+3;
	w=(*ftab[24])(ctx,1,local+2,&ftab[24],fqv[70]); /*warn*/
	local[2]= w;
IF1232:
	goto CON1224;
CON1229:
	local[2]= argv[0];
	goto CON1224;
CON1233:
	local[2]= NIL;
CON1224:
	local[0] = local[2];
	if (local[0]!=NIL) goto IF1234;
	local[2]= makeflt(5.0000000000000000000000e-01);
	local[3]= makeflt(5.0000000000000000000000e-01);
	local[4]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,3,local+2); /*float-vector*/
	local[0] = w;
	local[2]= local[0];
	goto IF1235;
IF1234:
	local[2]= NIL;
IF1235:
	w = local[0];
	local[0]= w;
BLK1223:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1230(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[113];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	w = ((env->c.clo.env1[0])==(local[0])?T:NIL);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*transparent*/
static pointer F982transparent(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0];
	local[3]= fqv[73];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[0] = w;
	if (local[0]==NIL) goto IF1237;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)VECTORP(ctx,1,local+2); /*vectorp*/
	if (w!=NIL) goto IF1239;
	local[2]= fqv[139];
	local[3]= argv[0];
	local[4]= argv[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[24])(ctx,4,local+2,&ftab[24],fqv[70]); /*warn*/
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F981find_color(ctx,1,local+2); /*find-color*/
	local[0] = w;
	local[2]= local[0];
	goto IF1240;
IF1239:
	local[2]= NIL;
IF1240:
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
	if (makeint((eusinteger_t)3L)!=local[2]) goto IF1241;
	local[2]= loadglobal(fqv[140]);
	local[3]= local[0];
	local[4]= fqv[141];
	ctx->vsp=local+5;
	w=(pointer)CONCATENATE(ctx,3,local+2); /*concatenate*/
	local[0] = w;
	local[2]= local[0];
	goto IF1242;
IF1241:
	local[2]= NIL;
IF1242:
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)3L);
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)SETELT(ctx,3,local+2); /*setelt*/
	local[2]= argv[0];
	local[3]= local[0];
	local[4]= fqv[73];
	ctx->vsp=local+5;
	w=(pointer)PUTPROP(ctx,3,local+2); /*putprop*/
	local[2]= argv[0];
	local[3]= fqv[71];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)F977delete_displaylist_id(ctx,1,local+2); /*delete-displaylist-id*/
	local[2]= argv[0];
	local[3]= NIL;
	local[4]= fqv[71];
	ctx->vsp=local+5;
	w=(pointer)PUTPROP(ctx,3,local+2); /*putprop*/
	local[2]= local[0];
	goto IF1238;
IF1237:
	local[2]= NIL;
IF1238:
	w = local[2];
	local[0]= w;
BLK1236:
	ctx->vsp=local; return(local[0]);}

/*:draw-on*/
static pointer M1243polygon_draw_on(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[142], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1245;
	local[0] = loadglobal(fqv[143]);
KEY1245:
	if (n & (1<<1)) goto KEY1246;
	local[1] = NIL;
KEY1246:
	if (n & (1<<2)) goto KEY1247;
	local[2] = makeint((eusinteger_t)1L);
KEY1247:
	if (n & (1<<3)) goto KEY1248;
	local[3] = fqv[144];
KEY1248:
	if (local[1]==NIL) goto IF1249;
	local[4]= local[0];
	local[5]= fqv[8];
	local[6]= fqv[9];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	goto IF1250;
IF1249:
	local[4]= NIL;
IF1250:
	local[4]= local[0];
	local[5]= fqv[8];
	local[6]= fqv[145];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= local[0];
	local[6]= fqv[8];
	local[7]= fqv[56];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[6]= w;
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[145];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[56];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[146];
	local[10]= argv[0];
	local[11]= fqv[87];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[145];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[56];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	if (local[1]==NIL) goto IF1251;
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[34];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= w;
	goto IF1252;
IF1251:
	local[7]= NIL;
IF1252:
	w = local[7];
	local[0]= w;
BLK1244:
	ctx->vsp=local; return(local[0]);}

/*:draw-on*/
static pointer M1253line_draw_on(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[147], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1255;
	local[0] = loadglobal(fqv[143]);
KEY1255:
	if (n & (1<<1)) goto KEY1256;
	local[1] = NIL;
KEY1256:
	if (n & (1<<2)) goto KEY1257;
	local[2] = makeint((eusinteger_t)1L);
KEY1257:
	if (n & (1<<3)) goto KEY1258;
	local[3] = fqv[148];
KEY1258:
	if (local[1]==NIL) goto IF1259;
	local[4]= local[0];
	local[5]= fqv[8];
	local[6]= fqv[9];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	goto IF1260;
IF1259:
	local[4]= NIL;
IF1260:
	local[4]= local[0];
	local[5]= fqv[8];
	local[6]= fqv[145];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= local[0];
	local[6]= fqv[8];
	local[7]= fqv[56];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[6]= w;
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[145];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[56];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[149];
	local[10]= argv[0]->c.obj.iv[1];
	local[11]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,5,local+7); /*send*/
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[145];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[56];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	if (local[1]==NIL) goto IF1261;
	local[7]= local[0];
	local[8]= fqv[8];
	local[9]= fqv[34];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= w;
	goto IF1262;
IF1261:
	local[7]= NIL;
IF1262:
	w = local[7];
	local[0]= w;
BLK1254:
	ctx->vsp=local; return(local[0]);}

/*:set-color*/
static pointer M1263faceset_set_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1266;}
	local[0]= NIL;
ENT1266:
ENT1265:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[71];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)F977delete_displaylist_id(ctx,1,local+1); /*delete-displaylist-id*/
	local[1]= argv[0];
	local[2]= NIL;
	local[3]= fqv[71];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	if (local[0]==NIL) goto CON1268;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)F981find_color(ctx,1,local+1); /*find-color*/
	local[1]= w;
	local[2]= loadglobal(fqv[140]);
	local[3]= local[1];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,1,local+4); /*float-vector*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)CONCATENATE(ctx,3,local+2); /*concatenate*/
	local[1] = w;
	local[2]= argv[0];
	local[3]= local[1];
	local[4]= fqv[73];
	ctx->vsp=local+5;
	w=(pointer)PUTPROP(ctx,3,local+2); /*putprop*/
	local[1]= w;
	goto CON1267;
CON1268:
	local[1]= argv[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)F981find_color(ctx,1,local+2); /*find-color*/
	local[2]= w;
	local[3]= fqv[73];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= w;
	goto CON1267;
CON1269:
	local[1]= NIL;
CON1267:
	w = local[1];
	local[0]= w;
BLK1264:
	ctx->vsp=local; return(local[0]);}

/*:draw-on*/
static pointer M1270faceset_draw_on(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[150], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1272;
	local[0] = loadglobal(fqv[143]);
KEY1272:
	if (n & (1<<1)) goto KEY1273;
	local[1] = NIL;
KEY1273:
	if (n & (1<<2)) goto KEY1274;
	local[2] = makeint((eusinteger_t)1L);
KEY1274:
	if (n & (1<<3)) goto KEY1275;
	local[3] = fqv[151];
KEY1275:
	if (local[1]==NIL) goto IF1276;
	local[4]= local[0];
	local[5]= fqv[8];
	local[6]= fqv[9];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	goto IF1277;
IF1276:
	local[4]= NIL;
IF1277:
	local[4]= local[0];
	local[5]= fqv[8];
	local[6]= fqv[145];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= local[0];
	local[6]= fqv[8];
	local[7]= fqv[56];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= local[0];
	local[7]= fqv[8];
	local[8]= fqv[145];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= local[0];
	local[7]= fqv[8];
	local[8]= fqv[56];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= NIL;
	local[7]= argv[0];
	local[8]= fqv[86];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
WHL1279:
	if (local[7]==NIL) goto WHX1280;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= local[0];
	local[9]= fqv[8];
	local[10]= fqv[146];
	local[11]= local[6];
	local[12]= fqv[87];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	goto WHL1279;
WHX1280:
	local[8]= NIL;
BLK1281:
	w = NIL;
	local[6]= local[0];
	local[7]= fqv[8];
	local[8]= fqv[145];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= local[0];
	local[7]= fqv[8];
	local[8]= fqv[56];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	if (local[1]==NIL) goto IF1283;
	local[6]= local[0];
	local[7]= fqv[8];
	local[8]= fqv[34];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	goto IF1284;
IF1283:
	local[6]= NIL;
IF1284:
	w = local[6];
	local[0]= w;
BLK1271:
	ctx->vsp=local; return(local[0]);}

/*:paste-texture-to-face*/
static pointer M1285faceset_paste_texture_to_face(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[152], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1287;
	local[0] = NIL;
KEY1287:
	if (n & (1<<1)) goto KEY1288;
	local[1] = NIL;
KEY1288:
	if (n & (1<<2)) goto KEY1289;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,2,local+3); /*float-vector*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,2,local+4); /*float-vector*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)1L);
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,2,local+5); /*float-vector*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)1L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,2,local+6); /*float-vector*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,4,local+3); /*list*/
	local[2] = w;
KEY1289:
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	if (local[1]==NIL) goto CON1291;
	local[3] = local[1];
	local[9]= local[3];
	goto CON1290;
CON1291:
	local[9]= local[0];
	local[10]= argv[0];
	local[11]= fqv[100];
	ctx->vsp=local+12;
	w=(pointer)GETPROP(ctx,2,local+10); /*get*/
	local[10]= w;
	local[11]= fqv[113];
	ctx->vsp=local+12;
	w=(*ftab[58])(ctx,2,local+10,&ftab[58],fqv[153]); /*send-all*/
	local[10]= w;
	local[11]= fqv[154];
	local[12]= (pointer)get_sym_func(fqv[155]);
	ctx->vsp=local+13;
	w=(*ftab[59])(ctx,4,local+9,&ftab[59],fqv[156]); /*member*/
	if (w==NIL) goto CON1292;
	local[9]= local[0];
	local[10]= argv[0];
	local[11]= fqv[100];
	ctx->vsp=local+12;
	w=(pointer)GETPROP(ctx,2,local+10); /*get*/
	local[10]= w;
	local[11]= fqv[154];
	local[12]= (pointer)get_sym_func(fqv[155]);
	local[13]= fqv[6];
	ctx->vsp=local+14;
	local[14]= makeclosure(codevec,quotevec,CLO1293,env,argv,local);
	ctx->vsp=local+15;
	w=(*ftab[59])(ctx,6,local+9,&ftab[59],fqv[156]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.car;
	local[9]= local[3];
	goto CON1290;
CON1292:
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(*ftab[60])(ctx,1,local+9,&ftab[60],fqv[157]); /*probe-file*/
	if (w==NIL) goto CON1294;
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(*ftab[61])(ctx,1,local+9,&ftab[61],fqv[158]); /*user::read-image-file*/
	local[3] = w;
	local[9]= local[3];
	goto CON1290;
CON1294:
	local[9]= NIL;
	local[10]= fqv[159];
	local[11]= loadglobal(fqv[160]);
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,4,local+9); /*format*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[60])(ctx,1,local+9,&ftab[60],fqv[157]); /*probe-file*/
	if (w==NIL) goto CON1295;
	local[9]= NIL;
	local[10]= fqv[161];
	local[11]= loadglobal(fqv[160]);
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,4,local+9); /*format*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[61])(ctx,1,local+9,&ftab[61],fqv[158]); /*user::read-image-file*/
	local[3] = w;
	local[9]= local[3];
	goto CON1290;
CON1295:
	local[9]= NIL;
	local[10]= fqv[162];
	local[11]= loadglobal(fqv[160]);
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,4,local+9); /*format*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[60])(ctx,1,local+9,&ftab[60],fqv[157]); /*probe-file*/
	if (w==NIL) goto CON1296;
	local[9]= NIL;
	local[10]= fqv[163];
	local[11]= loadglobal(fqv[160]);
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,4,local+9); /*format*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[61])(ctx,1,local+9,&ftab[61],fqv[158]); /*user::read-image-file*/
	local[3] = w;
	local[9]= local[3];
	goto CON1290;
CON1296:
	local[9]= fqv[164];
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(*ftab[24])(ctx,2,local+9,&ftab[24],fqv[70]); /*warn*/
	w = NIL;
	ctx->vsp=local+9;
	local[0]=w;
	goto BLK1286;
	goto CON1290;
CON1297:
	local[9]= NIL;
CON1290:
	local[9]= argv[2];
	local[10]= local[3];
	local[11]= fqv[100];
	ctx->vsp=local+12;
	w=(pointer)PUTPROP(ctx,3,local+9); /*putprop*/
	local[9]= local[3];
	local[10]= argv[0];
	local[11]= fqv[100];
	ctx->vsp=local+12;
	w=(pointer)GETPROP(ctx,2,local+10); /*get*/
	if (memq(local[9],w)!=NIL) goto IF1298;
	local[9]= argv[0];
	local[10]= argv[0];
	local[11]= fqv[100];
	ctx->vsp=local+12;
	w=(pointer)GETPROP(ctx,2,local+10); /*get*/
	local[10]= w;
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)APPEND(ctx,2,local+10); /*append*/
	local[10]= w;
	local[11]= fqv[100];
	ctx->vsp=local+12;
	w=(pointer)PUTPROP(ctx,3,local+9); /*putprop*/
	local[9]= w;
	goto IF1299;
IF1298:
	local[9]= NIL;
IF1299:
	local[9]= argv[2];
	local[10]= fqv[154];
	local[11]= (pointer)get_sym_func(fqv[155]);
	ctx->vsp=local+12;
	w=(*ftab[62])(ctx,2,local+10,&ftab[62],fqv[165]); /*make-hash-table*/
	local[10]= w;
	local[11]= fqv[107];
	ctx->vsp=local+12;
	w=(pointer)PUTPROP(ctx,3,local+9); /*putprop*/
	local[9]= argv[0];
	local[10]= fqv[71];
	ctx->vsp=local+11;
	w=(pointer)GETPROP(ctx,2,local+9); /*get*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)F977delete_displaylist_id(ctx,1,local+9); /*delete-displaylist-id*/
	local[9]= argv[0];
	local[10]= NIL;
	local[11]= fqv[71];
	ctx->vsp=local+12;
	w=(pointer)PUTPROP(ctx,3,local+9); /*putprop*/
	local[9]= NIL;
	local[10]= argv[2];
	local[11]= fqv[96];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
WHL1301:
	if (local[10]==NIL) goto WHX1302;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10] = (w)->c.cons.cdr;
	w = local[11];
	local[9] = w;
	local[11]= local[9];
	local[12]= argv[2];
	local[13]= fqv[107];
	ctx->vsp=local+14;
	w=(pointer)GETPROP(ctx,2,local+12); /*get*/
	local[12]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[13];
	local[13]= w;
	ctx->vsp=local+14;
	w=(*ftab[63])(ctx,3,local+11,&ftab[63],fqv[166]); /*sethash*/
	goto WHL1301;
WHX1302:
	local[11]= NIL;
BLK1303:
	w = NIL;
	local[0]= w;
BLK1286:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1293(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[113];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:vertices*/
static pointer M1306coordinates_vertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[167];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
BLK1307:
	ctx->vsp=local; return(local[0]);}

/*:draw-on*/
static pointer M1308coordinates_draw_on(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[168], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1310;
	local[0] = loadglobal(fqv[143]);
KEY1310:
	if (n & (1<<1)) goto KEY1311;
	local[1] = NIL;
KEY1311:
	if (n & (1<<2)) goto KEY1312;
	local[5]= argv[0];
	local[6]= fqv[15];
	ctx->vsp=local+7;
	w=(pointer)GETPROP(ctx,2,local+5); /*get*/
	local[2] = w;
KEY1312:
	if (n & (1<<3)) goto KEY1313;
	local[5]= argv[0];
	local[6]= fqv[56];
	ctx->vsp=local+7;
	w=(pointer)GETPROP(ctx,2,local+5); /*get*/
	local[3] = w;
KEY1313:
	if (n & (1<<4)) goto KEY1314;
	local[5]= argv[0];
	local[6]= fqv[169];
	ctx->vsp=local+7;
	w=(pointer)GETPROP(ctx,2,local+5); /*get*/
	local[4] = w;
KEY1314:
	if (local[1]==NIL) goto IF1315;
	local[5]= local[0];
	local[6]= fqv[8];
	local[7]= fqv[9];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	goto IF1316;
IF1315:
	local[5]= NIL;
IF1316:
	local[5]= local[0];
	local[6]= fqv[8];
	local[7]= fqv[145];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= local[0];
	local[7]= fqv[8];
	local[8]= fqv[56];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	local[8]= NIL;
	if (local[2]!=NIL) goto IF1317;
	local[2] = makeint((eusinteger_t)1L);
	local[9]= local[2];
	goto IF1318;
IF1317:
	local[9]= NIL;
IF1318:
	if (local[3]!=NIL) goto IF1319;
	local[3] = fqv[170];
	local[9]= local[3];
	goto IF1320;
IF1319:
	local[9]= NIL;
IF1320:
	if (local[4]!=NIL) goto IF1321;
	local[4] = makeint((eusinteger_t)50L);
	local[9]= local[4];
	goto IF1322;
IF1321:
	local[9]= NIL;
IF1322:
	local[9]= makeflt(2.9999999999999982236432e-01);
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeflt(6.9999999999999973354647e-01);
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,3,local+9); /*float-vector*/
	local[8] = w;
	local[9]= local[0];
	local[10]= fqv[8];
	local[11]= fqv[145];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	local[9]= local[0];
	local[10]= fqv[8];
	local[11]= fqv[56];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)3L);
WHL1324:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX1325;
	local[11]= local[7];
	local[12]= local[9];
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[0];
	local[12]= fqv[8];
	local[13]= fqv[149];
	local[14]= argv[0];
	local[15]= fqv[167];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
	local[15]= argv[0];
	local[16]= fqv[171];
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,5,local+11); /*send*/
	local[11]= local[7];
	local[12]= local[9];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL1324;
WHX1325:
	local[11]= NIL;
BLK1326:
	w = NIL;
	local[9]= local[7];
	local[10]= makeint((eusinteger_t)2L);
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)SETELT(ctx,3,local+9); /*setelt*/
	local[9]= local[0];
	local[10]= fqv[8];
	local[11]= fqv[149];
	local[12]= argv[0];
	local[13]= fqv[171];
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	local[13]= argv[0];
	local[14]= fqv[171];
	local[15]= local[8];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,5,local+9); /*send*/
	local[9]= local[8];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= local[8];
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)SETELT(ctx,3,local+9); /*setelt*/
	local[9]= local[8];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)SETELT(ctx,3,local+9); /*setelt*/
	local[9]= local[0];
	local[10]= fqv[8];
	local[11]= fqv[149];
	local[12]= argv[0];
	local[13]= fqv[171];
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	local[13]= argv[0];
	local[14]= fqv[171];
	local[15]= local[8];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,5,local+9); /*send*/
	local[9]= local[0];
	local[10]= fqv[8];
	local[11]= fqv[145];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	local[9]= local[0];
	local[10]= fqv[8];
	local[11]= fqv[56];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	if (local[1]==NIL) goto IF1327;
	local[9]= local[0];
	local[10]= fqv[8];
	local[11]= fqv[34];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= w;
	goto IF1328;
IF1327:
	local[9]= NIL;
IF1328:
	w = local[9];
	local[0]= w;
BLK1309:
	ctx->vsp=local; return(local[0]);}

/*:vertices*/
static pointer M1329float_vector_vertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
BLK1330:
	ctx->vsp=local; return(local[0]);}

/*:draw-on*/
static pointer M1331float_vector_draw_on(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[172], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1333;
	local[0] = loadglobal(fqv[143]);
KEY1333:
	if (n & (1<<1)) goto KEY1334;
	local[1] = NIL;
KEY1334:
	if (n & (1<<2)) goto KEY1335;
	local[2] = makeint((eusinteger_t)1L);
KEY1335:
	if (n & (1<<3)) goto KEY1336;
	local[3] = fqv[173];
KEY1336:
	if (n & (1<<4)) goto KEY1337;
	local[4] = makeint((eusinteger_t)50L);
KEY1337:
	if (local[1]==NIL) goto IF1338;
	local[5]= local[0];
	local[6]= fqv[8];
	local[7]= fqv[9];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	goto IF1339;
IF1338:
	local[5]= NIL;
IF1339:
	local[5]= local[0];
	local[6]= fqv[8];
	local[7]= fqv[145];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= local[0];
	local[7]= fqv[8];
	local[8]= fqv[56];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[7]= w;
	local[8]= local[0];
	local[9]= fqv[8];
	local[10]= fqv[145];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= local[0];
	local[9]= fqv[8];
	local[10]= fqv[56];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)3L);
WHL1341:
	local[10]= local[8];
	w = local[9];
	if ((eusinteger_t)local[10] >= (eusinteger_t)w) goto WHX1342;
	local[10]= local[7];
	local[11]= local[8];
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[0];
	local[11]= fqv[8];
	local[12]= fqv[149];
	local[13]= argv[0];
	local[14]= argv[0];
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)VPLUS(ctx,2,local+14); /*v+*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,5,local+10); /*send*/
	local[10]= local[7];
	local[11]= local[8];
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[8] = w;
	goto WHL1341;
WHX1342:
	local[10]= NIL;
BLK1343:
	w = NIL;
	local[8]= local[0];
	local[9]= fqv[8];
	local[10]= fqv[145];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= local[0];
	local[9]= fqv[8];
	local[10]= fqv[56];
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	if (local[1]==NIL) goto IF1344;
	local[8]= local[0];
	local[9]= fqv[8];
	local[10]= fqv[34];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,3,local+8); /*send*/
	local[8]= w;
	goto IF1345;
IF1344:
	local[8]= NIL;
IF1345:
	w = local[8];
	local[0]= w;
BLK1332:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1346glvertices_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1348:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[174], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1349;
	local[1] = NIL;
KEY1349:
	argv[0]->c.obj.iv[8] = argv[2];
	argv[0]->c.obj.iv[9] = local[1];
	local[2]= (pointer)get_sym_func(fqv[175]);
	local[3]= argv[0];
	local[4]= *(ovafptr(argv[1],fqv[36]));
	local[5]= fqv[45];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)APPLY(ctx,5,local+2); /*apply*/
	w = argv[0];
	local[0]= w;
BLK1347:
	ctx->vsp=local; return(local[0]);}

/*:filename*/
static pointer M1350glvertices_filename(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1353;}
	local[0]= NIL;
ENT1353:
ENT1352:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1354;
	argv[0]->c.obj.iv[9] = local[0];
	local[1]= argv[0]->c.obj.iv[9];
	goto IF1355;
IF1354:
	local[1]= NIL;
IF1355:
	w = argv[0]->c.obj.iv[9];
	local[0]= w;
BLK1351:
	ctx->vsp=local; return(local[0]);}

/*:set-color*/
static pointer M1356glvertices_set_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1359;}
	local[0]= NIL;
ENT1359:
ENT1358:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[71];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)F977delete_displaylist_id(ctx,1,local+1); /*delete-displaylist-id*/
	local[1]= argv[0];
	local[2]= NIL;
	local[3]= fqv[71];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= argv[0];
	local[2]= local[0];
	local[3]= fqv[176];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	if (argv[2]==NIL) goto IF1360;
	local[1]= argv[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)F981find_color(ctx,1,local+2); /*find-color*/
	local[2]= w;
	local[3]= fqv[73];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= w;
	goto IF1361;
IF1360:
	local[1]= argv[0];
	local[2]= NIL;
	local[3]= fqv[73];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= w;
IF1361:
	w = local[1];
	local[0]= w;
BLK1357:
	ctx->vsp=local; return(local[0]);}

/*:get-meshinfo*/
static pointer M1362glvertices_get_meshinfo(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1365;}
	local[0]= makeint((eusinteger_t)-1L);
ENT1365:
ENT1364:
	if (n>4) maerror();
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)LESSP(ctx,2,local+1); /*<*/
	if (w==NIL) goto IF1366;
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO1368,env,argv,local);
	local[2]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK1363;
	goto IF1367;
IF1366:
	local[1]= NIL;
IF1367:
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[64])(ctx,2,local+1,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK1363:
	ctx->vsp=local; return(local[0]);}

/*:set-meshinfo*/
static pointer M1369glvertices_set_meshinfo(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	if (n>=5) { local[0]=(argv[4]); goto ENT1372;}
	local[0]= makeint((eusinteger_t)-1L);
ENT1372:
ENT1371:
	if (n>5) maerror();
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)LESSP(ctx,2,local+1); /*<*/
	if (w==NIL) goto IF1373;
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[8];
WHL1376:
	if (local[2]==NIL) goto WHX1377;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= argv[2];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[64])(ctx,2,local+3,&ftab[64],fqv[177]); /*assoc*/
	local[3]= w;
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[65])(ctx,2,local+3,&ftab[65],fqv[178]); /*delete*/
	local[3]= local[1];
	local[4]= argv[2];
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,2,local+4); /*list*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)NCONC(ctx,2,local+3); /*nconc*/
	goto WHL1376;
WHX1377:
	local[3]= NIL;
BLK1378:
	w = NIL;
	w = NIL;
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK1370;
	goto IF1374;
IF1373:
	local[1]= NIL;
IF1374:
	local[1]= argv[0]->c.obj.iv[8];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= argv[2];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[64])(ctx,2,local+2,&ftab[64],fqv[177]); /*assoc*/
	local[2]= w;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[65])(ctx,2,local+2,&ftab[65],fqv[178]); /*delete*/
	local[2]= local[1];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)NCONC(ctx,2,local+2); /*nconc*/
	local[2]= argv[0];
	local[3]= fqv[179];
	local[4]= argv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[0]= w;
BLK1370:
	ctx->vsp=local; return(local[0]);}

/*:get-material*/
static pointer M1380glvertices_get_material(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1383;}
	local[0]= makeint((eusinteger_t)-1L);
ENT1383:
ENT1382:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[179];
	local[3]= fqv[180];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK1381:
	ctx->vsp=local; return(local[0]);}

/*:set-material*/
static pointer M1384glvertices_set_material(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1387;}
	local[0]= makeint((eusinteger_t)-1L);
ENT1387:
ENT1386:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[181];
	local[3]= fqv[180];
	local[4]= argv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,5,local+1); /*send*/
	local[0]= w;
BLK1385:
	ctx->vsp=local; return(local[0]);}

/*:actual-vertices*/
static pointer M1388glvertices_actual_vertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[8];
WHL1391:
	if (local[2]==NIL) goto WHX1392;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= fqv[87];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[64])(ctx,2,local+3,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	if (local[3]==NIL) goto IF1395;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[3];
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(*ftab[66])(ctx,2,local+5,&ftab[66],fqv[182]); /*array-dimension*/
	local[5]= w;
WHL1398:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX1399;
	local[6]= local[3];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(*ftab[67])(ctx,2,local+6,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[6]= w;
	w = local[0];
	ctx->vsp=local+7;
	local[0] = cons(ctx,local[6],w);
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL1398;
WHX1399:
	local[6]= NIL;
BLK1400:
	w = NIL;
	local[4]= w;
	goto IF1396;
IF1395:
	local[4]= NIL;
IF1396:
	w = local[4];
	goto WHL1391;
WHX1392:
	local[3]= NIL;
BLK1393:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK1389:
	ctx->vsp=local; return(local[0]);}

/*:calc-bounding-box*/
static pointer M1401glvertices_calc_bounding_box(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[184];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+2;
	w=(*ftab[68])(ctx,2,local+0,&ftab[68],fqv[185]); /*make-bounding-box*/
	argv[0]->c.obj.iv[10] = w;
	w = argv[0]->c.obj.iv[10];
	local[0]= w;
BLK1402:
	ctx->vsp=local; return(local[0]);}

/*:vertices*/
static pointer M1403glvertices_vertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[10]!=NIL) goto IF1405;
	local[0]= argv[0];
	local[1]= fqv[186];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto IF1406;
IF1405:
	local[0]= NIL;
IF1406:
	local[0]= argv[0]->c.obj.iv[10];
	local[1]= fqv[187];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[87];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK1404:
	ctx->vsp=local; return(local[0]);}

/*:reset-offset-from-parent*/
static pointer M1407glvertices_reset_offset_from_parent(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[188];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[189];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= argv[0];
	local[2]= fqv[190];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	w = argv[0];
	local[0]= w;
BLK1408:
	ctx->vsp=local; return(local[0]);}

/*:expand-vertices*/
static pointer M1409glvertices_expand_vertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[8];
WHL1412:
	if (local[2]==NIL) goto WHX1413;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= argv[0];
	local[4]= fqv[191];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	goto WHL1412;
WHX1413:
	local[3]= NIL;
BLK1414:
	w = NIL;
	argv[0]->c.obj.iv[8] = local[0];
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK1410:
	ctx->vsp=local; return(local[0]);}

/*:expand-vertices-info*/
static pointer M1416glvertices_expand_vertices_info(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= fqv[192];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[64])(ctx,2,local+0,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= fqv[87];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[64])(ctx,2,local+1,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= loadglobal(fqv[140]);
	local[3]= makeint((eusinteger_t)3L);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(*ftab[66])(ctx,2,local+4,&ftab[66],fqv[182]); /*array-dimension*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)GREATERP(ctx,2,local+3); /*>*/
	if (w==NIL) goto IF1418;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(*ftab[69])(ctx,2,local+3,&ftab[69],fqv[193]); /*make-matrix*/
	local[3]= w;
	local[4]= loadglobal(fqv[101]);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)INSTANTIATE(ctx,2,local+4); /*instantiate*/
	local[4]= w;
	local[5]= fqv[87];
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(*ftab[64])(ctx,2,local+5,&ftab[64],fqv[177]); /*assoc*/
	local[5]= w;
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(*ftab[65])(ctx,2,local+5,&ftab[65],fqv[178]); /*delete*/
	argv[2] = w;
	local[5]= fqv[192];
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(*ftab[64])(ctx,2,local+5,&ftab[64],fqv[177]); /*assoc*/
	local[5]= w;
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(*ftab[65])(ctx,2,local+5,&ftab[65],fqv[178]); /*delete*/
	argv[2] = w;
	local[5]= fqv[194];
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(*ftab[64])(ctx,2,local+5,&ftab[64],fqv[177]); /*assoc*/
	local[5]= w;
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(*ftab[65])(ctx,2,local+5,&ftab[65],fqv[178]); /*delete*/
	argv[2] = w;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
WHL1421:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX1422;
	local[7]= local[4];
	local[8]= local[5];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SETELT(ctx,3,local+7); /*setelt*/
	local[7]= local[1];
	local[8]= local[0];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(*ftab[67])(ctx,3,local+7,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[7]= local[3];
	local[8]= local[5];
	local[9]= local[2];
	local[10]= T;
	ctx->vsp=local+11;
	w=(*ftab[67])(ctx,4,local+7,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL1421;
WHX1422:
	local[7]= NIL;
BLK1423:
	w = NIL;
	local[5]= argv[2];
	local[6]= fqv[87];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,2,local+6); /*list*/
	local[6]= w;
	local[7]= fqv[192];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,2,local+6); /*list*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)NCONC(ctx,2,local+5); /*nconc*/
	argv[2] = w;
	w = argv[2];
	local[3]= w;
	goto IF1419;
IF1418:
	local[3]= argv[2];
IF1419:
	w = local[3];
	local[0]= w;
BLK1417:
	ctx->vsp=local; return(local[0]);}

/*:use-flat-shader*/
static pointer M1424glvertices_use_flat_shader(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[0]->c.obj.iv[8];
WHL1427:
	if (local[1]==NIL) goto WHX1428;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	local[3]= fqv[195];
	local[4]= T;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)NCONC(ctx,2,local+2); /*nconc*/
	goto WHL1427;
WHX1428:
	local[2]= NIL;
BLK1429:
	w = NIL;
	local[0]= w;
BLK1425:
	ctx->vsp=local; return(local[0]);}

/*:use-smooth-shader*/
static pointer M1431glvertices_use_smooth_shader(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[0]->c.obj.iv[8];
WHL1434:
	if (local[1]==NIL) goto WHX1435;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= fqv[195];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(*ftab[64])(ctx,2,local+2,&ftab[64],fqv[177]); /*assoc*/
	local[2]= w;
	if (local[2]==NIL) goto IF1438;
	local[3]= local[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[65])(ctx,2,local+3,&ftab[65],fqv[178]); /*delete*/
	local[3]= w;
	goto IF1439;
IF1438:
	local[3]= NIL;
IF1439:
	w = local[3];
	goto WHL1434;
WHX1435:
	local[2]= NIL;
BLK1436:
	w = NIL;
	local[0]= w;
BLK1432:
	ctx->vsp=local; return(local[0]);}

/*:calc-normals*/
static pointer M1440glvertices_calc_normals(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1445;}
	local[0]= NIL;
ENT1445:
	if (n>=4) { local[1]=(argv[3]); goto ENT1444;}
	local[1]= T;
ENT1444:
	if (n>=5) { local[2]=(argv[4]); goto ENT1443;}
	local[2]= T;
ENT1443:
ENT1442:
	if (n>5) maerror();
	local[3]= NIL;
	local[4]= argv[0]->c.obj.iv[8];
WHL1447:
	if (local[4]==NIL) goto WHX1448;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= fqv[194];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(*ftab[64])(ctx,2,local+5,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= fqv[196];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(*ftab[64])(ctx,2,local+6,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	local[7]= fqv[192];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[64])(ctx,2,local+7,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	local[8]= fqv[87];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(*ftab[64])(ctx,2,local+8,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= loadglobal(fqv[140]);
	local[10]= makeint((eusinteger_t)3L);
	ctx->vsp=local+11;
	w=(pointer)INSTANTIATE(ctx,2,local+9); /*instantiate*/
	local[9]= w;
	local[10]= loadglobal(fqv[140]);
	local[11]= makeint((eusinteger_t)3L);
	ctx->vsp=local+12;
	w=(pointer)INSTANTIATE(ctx,2,local+10); /*instantiate*/
	local[10]= w;
	local[11]= loadglobal(fqv[140]);
	local[12]= makeint((eusinteger_t)3L);
	ctx->vsp=local+13;
	w=(pointer)INSTANTIATE(ctx,2,local+11); /*instantiate*/
	local[11]= w;
	local[12]= loadglobal(fqv[140]);
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(pointer)INSTANTIATE(ctx,2,local+12); /*instantiate*/
	local[12]= w;
	local[13]= loadglobal(fqv[140]);
	local[14]= makeint((eusinteger_t)3L);
	ctx->vsp=local+15;
	w=(pointer)INSTANTIATE(ctx,2,local+13); /*instantiate*/
	local[13]= w;
	local[14]= loadglobal(fqv[140]);
	local[15]= makeint((eusinteger_t)3L);
	ctx->vsp=local+16;
	w=(pointer)INSTANTIATE(ctx,2,local+14); /*instantiate*/
	local[14]= w;
	local[15]= local[6];
	local[16]= local[15];
	if (fqv[197]!=local[16]) goto IF1452;
	local[6] = makeint((eusinteger_t)3L);
	local[16]= local[6];
	goto IF1453;
IF1452:
	local[16]= local[15];
	if (fqv[198]!=local[16]) goto IF1454;
	local[6] = makeint((eusinteger_t)4L);
	local[16]= local[6];
	goto IF1455;
IF1454:
	local[16]= local[15];
	if (fqv[199]!=local[16]) goto IF1456;
	local[6] = makeint((eusinteger_t)2L);
	local[16]= local[6];
	goto IF1457;
IF1456:
	local[16]= local[15];
	if (fqv[200]!=local[16]) goto IF1458;
	local[6] = makeint((eusinteger_t)3L);
	local[16]= fqv[201];
	ctx->vsp=local+17;
	w=(*ftab[24])(ctx,1,local+16,&ftab[24],fqv[70]); /*warn*/
	local[16]= w;
	goto IF1459;
IF1458:
	if (T==NIL) goto IF1460;
	local[16]= fqv[202];
	ctx->vsp=local+17;
	w=(*ftab[24])(ctx,1,local+16,&ftab[24],fqv[70]); /*warn*/
	w = NIL;
	ctx->vsp=local+16;
	local[0]=w;
	goto BLK1441;
	goto IF1461;
IF1460:
	local[16]= NIL;
IF1461:
IF1459:
IF1457:
IF1455:
IF1453:
	w = local[16];
	if (local[5]==NIL) goto AND1464;
	if (local[0]!=NIL) goto AND1464;
	goto IF1462;
AND1464:
	if (local[1]==NIL) goto IF1465;
	local[15]= argv[0];
	local[16]= fqv[191];
	local[17]= local[3];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[15]= fqv[192];
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(*ftab[64])(ctx,2,local+15,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.car;
	local[15]= fqv[87];
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(*ftab[64])(ctx,2,local+15,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8] = (w)->c.cons.car;
	local[15]= local[8];
	goto IF1466;
IF1465:
	local[15]= NIL;
IF1466:
	if (local[5]==NIL) goto IF1467;
	local[15]= fqv[194];
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(*ftab[64])(ctx,2,local+15,&ftab[64],fqv[177]); /*assoc*/
	local[15]= w;
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(*ftab[65])(ctx,2,local+15,&ftab[65],fqv[178]); /*delete*/
	local[15]= w;
	goto IF1468;
IF1467:
	local[15]= NIL;
IF1468:
	local[15]= local[8];
	local[16]= makeint((eusinteger_t)0L);
	ctx->vsp=local+17;
	w=(*ftab[66])(ctx,2,local+15,&ftab[66],fqv[182]); /*array-dimension*/
	local[15]= w;
	local[16]= local[15];
	local[17]= makeint((eusinteger_t)3L);
	ctx->vsp=local+18;
	w=(*ftab[69])(ctx,2,local+16,&ftab[69],fqv[193]); /*make-matrix*/
	local[5] = w;
	if (local[7]==NIL) goto CON1470;
	local[16]= makeint((eusinteger_t)0L);
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(pointer)LENGTH(ctx,1,local+17); /*length*/
	local[17]= w;
	local[18]= local[6];
	ctx->vsp=local+19;
	w=(pointer)QUOTIENT(ctx,2,local+17); /*/*/
	local[17]= w;
WHL1472:
	local[18]= local[16];
	w = local[17];
	if ((eusinteger_t)local[18] >= (eusinteger_t)w) goto WHX1473;
	local[18]= local[8];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)0L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[9];
	ctx->vsp=local+21;
	w=(*ftab[67])(ctx,3,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[8];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)1L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[10];
	ctx->vsp=local+21;
	w=(*ftab[67])(ctx,3,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[8];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)2L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[11];
	ctx->vsp=local+21;
	w=(*ftab[67])(ctx,3,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[10];
	local[19]= local[9];
	local[20]= local[12];
	ctx->vsp=local+21;
	w=(pointer)VMINUS(ctx,3,local+18); /*v-*/
	local[18]= w;
	local[19]= local[11];
	local[20]= local[9];
	local[21]= local[13];
	ctx->vsp=local+22;
	w=(pointer)VMINUS(ctx,3,local+19); /*v-*/
	local[19]= w;
	local[20]= local[14];
	ctx->vsp=local+21;
	w=(pointer)VCROSSPRODUCT(ctx,3,local+18); /*v**/
	local[18]= local[14];
	local[19]= local[14];
	ctx->vsp=local+20;
	w=(pointer)VNORMALIZE(ctx,2,local+18); /*normalize-vector*/
	local[18]= local[5];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)0L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[14];
	local[21]= T;
	ctx->vsp=local+22;
	w=(*ftab[67])(ctx,4,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[5];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)1L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[14];
	local[21]= T;
	ctx->vsp=local+22;
	w=(*ftab[67])(ctx,4,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[5];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)2L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[14];
	local[21]= T;
	ctx->vsp=local+22;
	w=(*ftab[67])(ctx,4,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[16];
	ctx->vsp=local+19;
	w=(pointer)ADD1(ctx,1,local+18); /*1+*/
	local[16] = w;
	goto WHL1472;
WHX1473:
	local[18]= NIL;
BLK1474:
	w = NIL;
	local[16]= w;
	goto CON1469;
CON1470:
	local[16]= makeint((eusinteger_t)0L);
	local[17]= local[15];
	local[18]= local[6];
	ctx->vsp=local+19;
	w=(pointer)QUOTIENT(ctx,2,local+17); /*/*/
	local[17]= w;
WHL1477:
	local[18]= local[16];
	w = local[17];
	if ((eusinteger_t)local[18] >= (eusinteger_t)w) goto WHX1478;
	local[18]= local[8];
	local[19]= local[6];
	local[20]= local[16];
	ctx->vsp=local+21;
	w=(pointer)TIMES(ctx,2,local+19); /***/
	local[19]= w;
	local[20]= makeint((eusinteger_t)0L);
	ctx->vsp=local+21;
	w=(pointer)PLUS(ctx,2,local+19); /*+*/
	local[19]= w;
	local[20]= local[9];
	ctx->vsp=local+21;
	w=(*ftab[67])(ctx,3,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[8];
	local[19]= local[6];
	local[20]= local[16];
	ctx->vsp=local+21;
	w=(pointer)TIMES(ctx,2,local+19); /***/
	local[19]= w;
	local[20]= makeint((eusinteger_t)1L);
	ctx->vsp=local+21;
	w=(pointer)PLUS(ctx,2,local+19); /*+*/
	local[19]= w;
	local[20]= local[10];
	ctx->vsp=local+21;
	w=(*ftab[67])(ctx,3,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[8];
	local[19]= local[6];
	local[20]= local[16];
	ctx->vsp=local+21;
	w=(pointer)TIMES(ctx,2,local+19); /***/
	local[19]= w;
	local[20]= makeint((eusinteger_t)2L);
	ctx->vsp=local+21;
	w=(pointer)PLUS(ctx,2,local+19); /*+*/
	local[19]= w;
	local[20]= local[11];
	ctx->vsp=local+21;
	w=(*ftab[67])(ctx,3,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[10];
	local[19]= local[9];
	local[20]= local[12];
	ctx->vsp=local+21;
	w=(pointer)VMINUS(ctx,3,local+18); /*v-*/
	local[18]= w;
	local[19]= local[11];
	local[20]= local[9];
	local[21]= local[13];
	ctx->vsp=local+22;
	w=(pointer)VMINUS(ctx,3,local+19); /*v-*/
	local[19]= w;
	local[20]= local[14];
	ctx->vsp=local+21;
	w=(pointer)VCROSSPRODUCT(ctx,3,local+18); /*v**/
	local[18]= local[14];
	local[19]= local[14];
	ctx->vsp=local+20;
	w=(pointer)VNORMALIZE(ctx,2,local+18); /*normalize-vector*/
	local[18]= local[5];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)0L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[14];
	local[21]= T;
	ctx->vsp=local+22;
	w=(*ftab[67])(ctx,4,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[5];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)1L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[14];
	local[21]= T;
	ctx->vsp=local+22;
	w=(*ftab[67])(ctx,4,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[5];
	local[19]= local[7];
	local[20]= local[6];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)TIMES(ctx,2,local+20); /***/
	local[20]= w;
	local[21]= makeint((eusinteger_t)2L);
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	local[20]= local[14];
	local[21]= T;
	ctx->vsp=local+22;
	w=(*ftab[67])(ctx,4,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= local[16];
	ctx->vsp=local+19;
	w=(pointer)ADD1(ctx,1,local+18); /*1+*/
	local[16] = w;
	goto WHL1477;
WHX1478:
	local[18]= NIL;
BLK1479:
	w = NIL;
	local[16]= w;
	goto CON1469;
CON1475:
	local[16]= NIL;
CON1469:
	local[16]= local[3];
	local[17]= fqv[194];
	local[18]= local[5];
	ctx->vsp=local+19;
	w=(pointer)LIST(ctx,2,local+17); /*list*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)NCONC(ctx,2,local+16); /*nconc*/
	if (local[2]==NIL) goto IF1480;
	local[16]= local[3];
	local[17]= fqv[195];
	local[18]= T;
	ctx->vsp=local+19;
	w=(pointer)LIST(ctx,2,local+17); /*list*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)NCONC(ctx,2,local+16); /*nconc*/
	local[16]= w;
	goto IF1481;
IF1480:
	local[16]= NIL;
IF1481:
	w = local[16];
	local[15]= w;
	goto IF1463;
IF1462:
	local[15]= NIL;
IF1463:
	w = local[15];
	goto WHL1447;
WHX1448:
	local[5]= NIL;
BLK1449:
	w = NIL;
	local[0]= w;
BLK1441:
	ctx->vsp=local; return(local[0]);}

/*:mirror-axis*/
static pointer M1482glvertices_mirror_axis(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[203], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1484;
	local[0] = T;
KEY1484:
	if (n & (1<<1)) goto KEY1485;
	local[1] = T;
KEY1485:
	if (n & (1<<2)) goto KEY1486;
	local[2] = fqv[40];
KEY1486:
	local[3]= local[2];
	local[4]= local[3];
	if (fqv[39]!=local[4]) goto IF1488;
	local[2] = makeint((eusinteger_t)0L);
	local[4]= local[2];
	goto IF1489;
IF1488:
	local[4]= local[3];
	if (fqv[40]!=local[4]) goto IF1490;
	local[2] = makeint((eusinteger_t)1L);
	local[4]= local[2];
	goto IF1491;
IF1490:
	local[4]= local[3];
	if (fqv[204]!=local[4]) goto IF1492;
	local[2] = makeint((eusinteger_t)2L);
	local[4]= local[2];
	goto IF1493;
IF1492:
	local[4]= NIL;
IF1493:
IF1491:
IF1489:
	w = local[4];
	local[3]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+4;
	w=(pointer)COPYOBJ(ctx,1,local+3); /*copy-object*/
	local[3]= w;
	local[4]= loadglobal(fqv[140]);
	local[5]= makeint((eusinteger_t)3L);
	ctx->vsp=local+6;
	w=(pointer)INSTANTIATE(ctx,2,local+4); /*instantiate*/
	local[4]= w;
	local[5]= NIL;
	local[6]= local[3];
WHL1495:
	if (local[6]==NIL) goto WHX1496;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= fqv[87];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(*ftab[64])(ctx,2,local+7,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	local[8]= local[7];
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(*ftab[66])(ctx,2,local+8,&ftab[66],fqv[182]); /*array-dimension*/
	local[8]= w;
	if (local[8]==NIL) goto IF1499;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[8];
WHL1502:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX1503;
	local[11]= local[7];
	local[12]= local[9];
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(*ftab[67])(ctx,3,local+11,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[11]= local[4];
	local[12]= local[2];
	local[13]= local[4];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)MINUS(ctx,1,local+13); /*-*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[7];
	local[12]= local[9];
	local[13]= local[4];
	local[14]= T;
	ctx->vsp=local+15;
	w=(*ftab[67])(ctx,4,local+11,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL1502;
WHX1503:
	local[11]= NIL;
BLK1504:
	w = NIL;
	if (local[1]==NIL) goto IF1505;
	local[9]= fqv[192];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[64])(ctx,2,local+9,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= local[9];
	ctx->vsp=local+11;
	w=(pointer)LENGTH(ctx,1,local+10); /*length*/
	local[10]= w;
	local[11]= makeint((eusinteger_t)3L);
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	local[11]= NIL;
	local[12]= NIL;
	local[13]= NIL;
	local[14]= makeint((eusinteger_t)0L);
	local[15]= local[10];
WHL1508:
	local[16]= local[14];
	w = local[15];
	if ((eusinteger_t)local[16] >= (eusinteger_t)w) goto WHX1509;
	local[16]= local[9];
	local[17]= local[14];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[17]);
		local[17]=(makeint(i * j));}
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[11] = w;
	local[16]= local[9];
	local[17]= local[14];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[17]);
		local[17]=(makeint(i * j));}
	w = makeint((eusinteger_t)1L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[17]= (pointer)((eusinteger_t)local[17] + (eusinteger_t)w);
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[12] = w;
	local[16]= local[9];
	local[17]= local[14];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[17]);
		local[17]=(makeint(i * j));}
	w = makeint((eusinteger_t)2L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[17]= (pointer)((eusinteger_t)local[17] + (eusinteger_t)w);
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[13] = w;
	local[16]= local[9];
	local[17]= local[14];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[17]);
		local[17]=(makeint(i * j));}
	local[18]= local[13];
	ctx->vsp=local+19;
	w=(pointer)SETELT(ctx,3,local+16); /*setelt*/
	local[16]= local[9];
	local[17]= local[14];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[17]);
		local[17]=(makeint(i * j));}
	w = makeint((eusinteger_t)1L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[17]= (pointer)((eusinteger_t)local[17] + (eusinteger_t)w);
	local[18]= local[12];
	ctx->vsp=local+19;
	w=(pointer)SETELT(ctx,3,local+16); /*setelt*/
	local[16]= local[9];
	local[17]= local[14];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[17]);
		local[17]=(makeint(i * j));}
	w = makeint((eusinteger_t)2L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[17]= (pointer)((eusinteger_t)local[17] + (eusinteger_t)w);
	local[18]= local[11];
	ctx->vsp=local+19;
	w=(pointer)SETELT(ctx,3,local+16); /*setelt*/
	local[16]= local[14];
	ctx->vsp=local+17;
	w=(pointer)ADD1(ctx,1,local+16); /*1+*/
	local[14] = w;
	goto WHL1508;
WHX1509:
	local[16]= NIL;
BLK1510:
	w = NIL;
	local[9]= w;
	goto IF1506;
IF1505:
	local[9]= NIL;
IF1506:
	goto IF1500;
IF1499:
	local[9]= NIL;
IF1500:
	w = local[9];
	goto WHL1495;
WHX1496:
	local[7]= NIL;
BLK1497:
	w = NIL;
	if (local[0]==NIL) goto IF1511;
	local[5]= loadglobal(fqv[205]);
	ctx->vsp=local+6;
	w=(pointer)INSTANTIATE(ctx,1,local+5); /*instantiate*/
	local[5]= w;
	local[6]= local[5];
	local[7]= fqv[45];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	w = local[5];
	local[5]= w;
	goto IF1512;
IF1511:
	argv[0]->c.obj.iv[8] = local[3];
	local[5]= argv[0];
IF1512:
	w = local[5];
	local[0]= w;
BLK1483:
	ctx->vsp=local; return(local[0]);}

/*:convert-to-faces*/
static pointer M1514glvertices_convert_to_faces(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1516:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[206], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY1517;
	local[1] = fqv[207];
KEY1517:
	local[2]= NIL;
	local[3]= NIL;
	local[4]= argv[0]->c.obj.iv[8];
WHL1519:
	if (local[4]==NIL) goto WHX1520;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= fqv[87];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(*ftab[64])(ctx,2,local+5,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= fqv[194];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(*ftab[64])(ctx,2,local+6,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	local[7]= fqv[192];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[64])(ctx,2,local+7,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	local[8]= local[7];
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
	local[9]= fqv[196];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(*ftab[64])(ctx,2,local+9,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= NIL;
	local[11]= NIL;
	local[12]= local[9];
	local[13]= local[12];
	if (fqv[197]!=local[13]) goto IF1524;
	local[10] = makeint((eusinteger_t)3L);
	local[13]= local[10];
	goto IF1525;
IF1524:
	local[13]= local[12];
	if (fqv[198]!=local[13]) goto IF1526;
	local[10] = makeint((eusinteger_t)4L);
	local[13]= local[10];
	goto IF1527;
IF1526:
	if (T==NIL) goto IF1528;
	local[13]= fqv[208];
	local[14]= local[9];
	ctx->vsp=local+15;
	w=(*ftab[24])(ctx,2,local+13,&ftab[24],fqv[70]); /*warn*/
	w = NIL;
	ctx->vsp=local+13;
	local[0]=w;
	goto BLK1515;
	goto IF1529;
IF1528:
	local[13]= NIL;
IF1529:
IF1527:
IF1525:
	w = local[13];
	local[12]= local[8];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[8] = w;
	if (local[7]==NIL) goto CON1531;
	local[12]= makeint((eusinteger_t)0L);
	local[13]= makeint((eusinteger_t)0L);
TAG1534:
	local[14]= local[13];
	local[15]= local[8];
	ctx->vsp=local+16;
	w=(pointer)GREQP(ctx,2,local+14); /*>=*/
	if (w==NIL) goto IF1535;
	w = NIL;
	ctx->vsp=local+14;
	local[12]=w;
	goto BLK1533;
	goto IF1536;
IF1535:
	local[14]= NIL;
IF1536:
	local[14]= NIL;
	local[15]= NIL;
	local[16]= makeint((eusinteger_t)0L);
	local[17]= local[10];
WHL1538:
	local[18]= local[16];
	w = local[17];
	if ((eusinteger_t)local[18] >= (eusinteger_t)w) goto WHX1539;
	local[18]= local[5];
	local[19]= local[7];
	local[20]= local[13];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(*ftab[67])(ctx,2,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= w;
	w = local[14];
	ctx->vsp=local+19;
	local[14] = cons(ctx,local[18],w);
	if (local[6]==NIL) goto IF1541;
	local[18]= local[6];
	local[19]= local[7];
	local[20]= local[13];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)PLUS(ctx,2,local+20); /*+*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(*ftab[67])(ctx,2,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= w;
	w = local[15];
	ctx->vsp=local+19;
	local[15] = cons(ctx,local[18],w);
	local[18]= local[15];
	goto IF1542;
IF1541:
	local[18]= NIL;
IF1542:
	local[18]= local[16];
	ctx->vsp=local+19;
	w=(pointer)ADD1(ctx,1,local+18); /*1+*/
	local[16] = w;
	goto WHL1538;
WHX1539:
	local[18]= NIL;
BLK1540:
	w = NIL;
	local[16]= local[1];
	local[17]= local[16];
	if (fqv[209]!=local[17]) goto IF1544;
	ctx->vsp=local+17;
	local[17]= makeclosure(codevec,quotevec,CLO1546,env,argv,local);
	local[18]= local[14];
	ctx->vsp=local+19;
	w=(pointer)NREVERSE(ctx,1,local+18); /*nreverse*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)MAPCAR(ctx,2,local+17); /*mapcar*/
	local[17]= w;
	goto IF1545;
IF1544:
	local[17]= local[16];
	if (fqv[207]!=local[17]) goto IF1547;
	local[17]= local[14];
	ctx->vsp=local+18;
	w=(pointer)NREVERSE(ctx,1,local+17); /*nreverse*/
	local[17]= w;
	goto IF1548;
IF1547:
	if (T==NIL) goto IF1549;
	local[17]= NIL;
	goto IF1550;
IF1549:
	local[17]= NIL;
IF1550:
IF1548:
IF1545:
	w = local[17];
	local[14] = w;
	local[16]= loadglobal(fqv[210]);
	ctx->vsp=local+17;
	w=(pointer)INSTANTIATE(ctx,1,local+16); /*instantiate*/
	local[16]= w;
	local[17]= local[16];
	local[18]= fqv[45];
	local[19]= fqv[87];
	local[20]= local[14];
	ctx->vsp=local+21;
	w=(pointer)SEND(ctx,4,local+17); /*send*/
	w = local[16];
	local[16]= w;
	goto CON1551;
CON1552:
	local[16]= NIL;
CON1551:
	w = local[11];
	ctx->vsp=local+17;
	local[11] = cons(ctx,local[16],w);
	w = local[11];
	local[14]= local[12];
	local[15]= makeint((eusinteger_t)1L);
	ctx->vsp=local+16;
	w=(pointer)PLUS(ctx,2,local+14); /*+*/
	local[14]= w;
	local[15]= local[13];
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(pointer)PLUS(ctx,2,local+15); /*+*/
	local[15]= w;
	local[12] = local[14];
	local[13] = local[15];
	w = NIL;
	ctx->vsp=local+14;
	goto TAG1534;
	w = NIL;
	local[12]= w;
BLK1533:
	goto CON1530;
CON1531:
	local[12]= makeint((eusinteger_t)0L);
	local[13]= makeint((eusinteger_t)0L);
TAG1559:
	local[14]= local[13];
	local[15]= local[5];
	local[16]= makeint((eusinteger_t)0L);
	ctx->vsp=local+17;
	w=(*ftab[66])(ctx,2,local+15,&ftab[66],fqv[182]); /*array-dimension*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)GREQP(ctx,2,local+14); /*>=*/
	if (w==NIL) goto IF1560;
	w = NIL;
	ctx->vsp=local+14;
	local[12]=w;
	goto BLK1558;
	goto IF1561;
IF1560:
	local[14]= NIL;
IF1561:
	local[14]= NIL;
	local[15]= NIL;
	local[16]= makeint((eusinteger_t)0L);
	local[17]= local[10];
WHL1563:
	local[18]= local[16];
	w = local[17];
	if ((eusinteger_t)local[18] >= (eusinteger_t)w) goto WHX1564;
	local[18]= local[5];
	local[19]= local[13];
	local[20]= local[16];
	ctx->vsp=local+21;
	w=(pointer)PLUS(ctx,2,local+19); /*+*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(*ftab[67])(ctx,2,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= w;
	w = local[14];
	ctx->vsp=local+19;
	local[14] = cons(ctx,local[18],w);
	if (local[6]==NIL) goto IF1566;
	local[18]= local[6];
	local[19]= local[13];
	local[20]= local[16];
	ctx->vsp=local+21;
	w=(pointer)PLUS(ctx,2,local+19); /*+*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(*ftab[67])(ctx,2,local+18,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[18]= w;
	w = local[15];
	ctx->vsp=local+19;
	local[15] = cons(ctx,local[18],w);
	local[18]= local[15];
	goto IF1567;
IF1566:
	local[18]= NIL;
IF1567:
	local[18]= local[16];
	ctx->vsp=local+19;
	w=(pointer)ADD1(ctx,1,local+18); /*1+*/
	local[16] = w;
	goto WHL1563;
WHX1564:
	local[18]= NIL;
BLK1565:
	w = NIL;
	local[16]= local[1];
	local[17]= local[16];
	if (fqv[209]!=local[17]) goto IF1569;
	ctx->vsp=local+17;
	local[17]= makeclosure(codevec,quotevec,CLO1571,env,argv,local);
	local[18]= local[14];
	ctx->vsp=local+19;
	w=(pointer)NREVERSE(ctx,1,local+18); /*nreverse*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)MAPCAR(ctx,2,local+17); /*mapcar*/
	local[17]= w;
	goto IF1570;
IF1569:
	local[17]= local[16];
	if (fqv[207]!=local[17]) goto IF1572;
	local[17]= local[14];
	ctx->vsp=local+18;
	w=(pointer)NREVERSE(ctx,1,local+17); /*nreverse*/
	local[17]= w;
	goto IF1573;
IF1572:
	if (T==NIL) goto IF1574;
	local[17]= NIL;
	goto IF1575;
IF1574:
	local[17]= NIL;
IF1575:
IF1573:
IF1570:
	w = local[17];
	local[14] = w;
	local[16]= loadglobal(fqv[210]);
	ctx->vsp=local+17;
	w=(pointer)INSTANTIATE(ctx,1,local+16); /*instantiate*/
	local[16]= w;
	local[17]= local[16];
	local[18]= fqv[45];
	local[19]= fqv[87];
	local[20]= local[14];
	ctx->vsp=local+21;
	w=(pointer)SEND(ctx,4,local+17); /*send*/
	w = local[16];
	local[16]= w;
	goto CON1576;
CON1577:
	local[16]= NIL;
CON1576:
	w = local[11];
	ctx->vsp=local+17;
	local[11] = cons(ctx,local[16],w);
	w = local[11];
	local[14]= local[12];
	local[15]= makeint((eusinteger_t)1L);
	ctx->vsp=local+16;
	w=(pointer)PLUS(ctx,2,local+14); /*+*/
	local[14]= w;
	local[15]= local[13];
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(pointer)PLUS(ctx,2,local+15); /*+*/
	local[15]= w;
	local[12] = local[14];
	local[13] = local[15];
	w = NIL;
	ctx->vsp=local+14;
	goto TAG1559;
	w = NIL;
	local[12]= w;
BLK1558:
	goto CON1530;
CON1556:
	local[12]= NIL;
CON1530:
	local[12]= local[11];
	ctx->vsp=local+13;
	w=(pointer)NREVERSE(ctx,1,local+12); /*nreverse*/
	local[12]= w;
	w = local[2];
	ctx->vsp=local+13;
	local[2] = cons(ctx,local[12],w);
	w = local[2];
	goto WHL1519;
WHX1520:
	local[5]= NIL;
BLK1521:
	w = NIL;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)NREVERSE(ctx,1,local+3); /*nreverse*/
	local[0]= w;
BLK1515:
	ctx->vsp=local; return(local[0]);}

/*:faces*/
static pointer M1581glvertices_faces(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[211];
	local[2]= fqv[212];
	local[3]= fqv[209];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[70])(ctx,1,local+0,&ftab[70],fqv[213]); /*flatten*/
	local[0]= w;
BLK1582:
	ctx->vsp=local; return(local[0]);}

/*:convert-to-faceset*/
static pointer M1583glvertices_convert_to_faceset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1585:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= loadglobal(fqv[66]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[45];
	local[4]= fqv[86];
	local[5]= (pointer)get_sym_func(fqv[214]);
	local[6]= argv[0];
	local[7]= fqv[211];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,4,local+5); /*apply*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[70])(ctx,1,local+5,&ftab[70],fqv[213]); /*flatten*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	w = local[1];
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[215];
	local[4]= argv[0];
	local[5]= fqv[74];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	w = local[1];
	local[0]= w;
BLK1584:
	ctx->vsp=local; return(local[0]);}

/*:set-offset*/
static pointer M1587glvertices_set_offset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[216], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1589;
	local[0] = NIL;
KEY1589:
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)MKFLTVEC(ctx,3,local+1); /*float-vector*/
	local[1]= w;
	local[2]= argv[2];
	local[3]= fqv[167];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[2];
	local[4]= fqv[93];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= NIL;
	if (local[0]==NIL) goto IF1590;
	local[5]= loadglobal(fqv[205]);
	ctx->vsp=local+6;
	w=(pointer)INSTANTIATE(ctx,1,local+5); /*instantiate*/
	local[5]= w;
	local[6]= local[5];
	local[7]= fqv[45];
	local[8]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+9;
	w=(pointer)COPYOBJ(ctx,1,local+8); /*copy-object*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	w = local[5];
	local[4] = w;
	local[5]= local[4];
	goto IF1591;
IF1590:
	local[4] = argv[0];
	local[5]= local[4];
IF1591:
	local[5]= NIL;
	local[6]= *(ovafptr(local[4],fqv[217]));
WHL1594:
	if (local[6]==NIL) goto WHX1595;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= fqv[87];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(*ftab[64])(ctx,2,local+7,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	local[8]= fqv[194];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[64])(ctx,2,local+8,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= local[2];
	local[10]= local[3];
	local[11]= local[7];
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(*ftab[71])(ctx,4,local+9,&ftab[71],fqv[218]); /*user::c-coords-transform-vector*/
	if (local[8]==NIL) goto IF1598;
	local[9]= local[1];
	local[10]= local[3];
	local[11]= local[8];
	local[12]= local[8];
	ctx->vsp=local+13;
	w=(*ftab[71])(ctx,4,local+9,&ftab[71],fqv[218]); /*user::c-coords-transform-vector*/
	local[9]= w;
	goto IF1599;
IF1598:
	local[9]= NIL;
IF1599:
	w = local[9];
	goto WHL1594;
WHX1595:
	local[7]= NIL;
BLK1596:
	w = NIL;
	w = local[4];
	local[0]= w;
BLK1588:
	ctx->vsp=local; return(local[0]);}

/*:convert-to-world*/
static pointer M1600glvertices_convert_to_world(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[219], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1602;
	local[0] = NIL;
KEY1602:
	local[1]= argv[0];
	local[2]= fqv[189];
	local[3]= argv[0];
	local[4]= fqv[74];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[220];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,5,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[190];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= argv[0];
	local[3]= fqv[74];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	w = local[1];
	local[0]= w;
BLK1601:
	ctx->vsp=local; return(local[0]);}

/*:glvertices*/
static pointer M1603glvertices_glvertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1607;}
	local[0]= NIL;
ENT1607:
	if (n>=4) { local[1]=(argv[3]); goto ENT1606;}
	local[1]= (pointer)get_sym_func(fqv[221]);
ENT1606:
ENT1605:
	if (n>4) maerror();
	local[2]= NIL;
	if (local[0]==NIL) goto CON1609;
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO1610,env,argv,local);
	local[4]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+5;
	w=(*ftab[57])(ctx,2,local+3,&ftab[57],fqv[137]); /*find-if*/
	local[3]= w;
	if (local[3]==NIL) goto IF1611;
	local[4]= loadglobal(fqv[205]);
	ctx->vsp=local+5;
	w=(pointer)INSTANTIATE(ctx,1,local+4); /*instantiate*/
	local[4]= w;
	local[5]= local[4];
	local[6]= fqv[45];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	w = local[4];
	local[2] = w;
	local[4]= local[2];
	goto IF1612;
IF1611:
	local[4]= NIL;
IF1612:
	w = local[4];
	local[3]= w;
	goto CON1608;
CON1609:
	local[3]= NIL;
	local[4]= argv[0]->c.obj.iv[8];
WHL1616:
	if (local[4]==NIL) goto WHX1617;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= loadglobal(fqv[205]);
	ctx->vsp=local+6;
	w=(pointer)INSTANTIATE(ctx,1,local+5); /*instantiate*/
	local[5]= w;
	local[6]= local[5];
	local[7]= fqv[45];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	w = local[5];
	local[5]= w;
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	goto WHL1616;
WHX1617:
	local[5]= NIL;
BLK1618:
	w = NIL;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)NREVERSE(ctx,1,local+3); /*nreverse*/
	local[2] = w;
	local[3]= local[2];
	goto CON1608;
CON1614:
	local[3]= NIL;
CON1608:
	w = local[2];
	local[0]= w;
BLK1604:
	ctx->vsp=local; return(local[0]);}

/*:append-glvertices*/
static pointer M1621glvertices_append_glvertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	if (!!iscons(w)) goto IF1623;
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	argv[2] = w;
	local[0]= argv[2];
	goto IF1624;
IF1623:
	local[0]= NIL;
IF1624:
	local[0]= NIL;
	local[1]= argv[0];
	local[2]= fqv[74];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= NIL;
	local[3]= argv[2];
WHL1626:
	if (local[3]==NIL) goto WHX1627;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= *(ovafptr(local[2],fqv[217]));
	ctx->vsp=local+5;
	w=(pointer)COPYOBJ(ctx,1,local+4); /*copy-object*/
	local[4]= w;
	local[5]= local[1];
	local[6]= fqv[222];
	local[7]= local[2];
	local[8]= fqv[74];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= loadglobal(fqv[205]);
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,1,local+6); /*instantiate*/
	local[6]= w;
	local[7]= local[6];
	local[8]= fqv[45];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	w = local[6];
	local[6]= w;
	local[7]= local[6];
	local[8]= fqv[189];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= local[0];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)APPEND(ctx,2,local+7); /*append*/
	local[0] = w;
	w = local[0];
	goto WHL1626;
WHX1627:
	local[4]= NIL;
BLK1628:
	w = NIL;
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)APPEND(ctx,2,local+2); /*append*/
	argv[0]->c.obj.iv[8] = w;
	local[2]= argv[0];
	local[3]= fqv[186];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	w = argv[0];
	local[0]= w;
BLK1622:
	ctx->vsp=local; return(local[0]);}

/*:draw-on*/
static pointer M1631glvertices_draw_on(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[223], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1633;
	local[0] = loadglobal(fqv[143]);
KEY1633:
	w = NIL;
	local[0]= w;
BLK1632:
	ctx->vsp=local; return(local[0]);}

/*:draw*/
static pointer M1634glvertices_draw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1636:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	local[1]= NIL;
	local[2]= argv[0];
	local[3]= fqv[74];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= fqv[75];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= fqv[176];
	ctx->vsp=local+5;
	w=(pointer)GETPROP(ctx,2,local+3); /*get*/
	local[3]= w;
	local[4]= NIL;
	local[5]= argv[2];
	local[6]= fqv[8];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= *(ovafptr(w,fqv[13]));
	local[6]= argv[2];
	local[7]= fqv[8];
	local[8]= fqv[9];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= makeint((eusinteger_t)1048575L);
	ctx->vsp=local+7;
	w=(*ftab[31])(ctx,1,local+6,&ftab[31],fqv[83]); /*glpushattrib*/
	ctx->vsp=local+6;
	w=(*ftab[25])(ctx,0,local+6,&ftab[25],fqv[76]); /*glpushmatrix*/
	local[6]= local[2];
	local[7]= loadglobal(fqv[77]);
	ctx->vsp=local+8;
	w=(pointer)TRANSPOSE(ctx,2,local+6); /*transpose*/
	local[6]= w->c.obj.iv[1];
	ctx->vsp=local+7;
	w=(*ftab[26])(ctx,1,local+6,&ftab[26],fqv[78]); /*glmultmatrixf*/
	local[6]= makeint((eusinteger_t)2898L);
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(*ftab[72])(ctx,2,local+6,&ftab[72],fqv[224]); /*gllightmodeli*/
	local[6]= local[5];
	local[7]= argv[0];
	local[8]= fqv[71];
	ctx->vsp=local+9;
	w=(pointer)GETPROP(ctx,2,local+7); /*get*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)ASSQ(ctx,2,local+6); /*assq*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	if (local[1]==NIL) goto CON1638;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(*ftab[27])(ctx,1,local+6,&ftab[27],fqv[79]); /*glcalllist*/
	local[6]= w;
	goto CON1637;
CON1638:
	local[6]= argv[0];
	local[7]= fqv[73];
	ctx->vsp=local+8;
	w=(pointer)GETPROP(ctx,2,local+6); /*get*/
	local[4] = w;
	if (local[4]==NIL) goto IF1640;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)VECTORP(ctx,1,local+6); /*vectorp*/
	if (w!=NIL) goto IF1640;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)F981find_color(ctx,1,local+6); /*find-color*/
	local[4] = w;
	local[6]= argv[0];
	local[7]= local[4];
	local[8]= fqv[73];
	ctx->vsp=local+9;
	w=(pointer)PUTPROP(ctx,3,local+6); /*putprop*/
	local[6]= w;
	goto IF1641;
IF1640:
	local[6]= NIL;
IF1641:
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(*ftab[29])(ctx,1,local+6,&ftab[29],fqv[81]); /*glgenlists*/
	local[1] = w;
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)4864L);
	ctx->vsp=local+8;
	w=(*ftab[30])(ctx,2,local+6,&ftab[30],fqv[82]); /*glnewlist*/
	if (local[3]==NIL) goto IF1642;
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(*ftab[73])(ctx,1,local+6,&ftab[73],fqv[225]); /*gldepthmask*/
	local[6]= makeint((eusinteger_t)3042L);
	ctx->vsp=local+7;
	w=(*ftab[12])(ctx,1,local+6,&ftab[12],fqv[29]); /*glenable*/
	local[6]= makeint((eusinteger_t)770L);
	local[7]= makeint((eusinteger_t)771L);
	ctx->vsp=local+8;
	w=(*ftab[39])(ctx,2,local+6,&ftab[39],fqv[102]); /*glblendfunc*/
	local[6]= w;
	goto IF1643;
IF1642:
	local[6]= NIL;
IF1643:
	local[6]= NIL;
	local[7]= argv[0]->c.obj.iv[8];
WHL1645:
	if (local[7]==NIL) goto WHX1646;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= fqv[196];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[64])(ctx,2,local+8,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= fqv[180];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(*ftab[64])(ctx,2,local+9,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= fqv[87];
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(*ftab[64])(ctx,2,local+10,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	local[11]= fqv[194];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(*ftab[64])(ctx,2,local+11,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= fqv[192];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(*ftab[64])(ctx,2,local+12,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= fqv[226];
	local[14]= local[6];
	ctx->vsp=local+15;
	w=(*ftab[64])(ctx,2,local+13,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	local[14]= fqv[195];
	local[15]= local[6];
	ctx->vsp=local+16;
	w=(*ftab[64])(ctx,2,local+14,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	local[15]= NIL;
	if (local[14]==NIL) goto IF1649;
	local[16]= makeint((eusinteger_t)7424L);
	ctx->vsp=local+17;
	w=(*ftab[12])(ctx,1,local+16,&ftab[12],fqv[29]); /*glenable*/
	local[16]= makeint((eusinteger_t)7424L);
	ctx->vsp=local+17;
	w=(*ftab[74])(ctx,1,local+16,&ftab[74],fqv[227]); /*glshademodel*/
	local[16]= w;
	goto IF1650;
IF1649:
	local[16]= NIL;
IF1650:
	if (local[4]==NIL) goto CON1652;
	local[16]= local[4];
	ctx->vsp=local+17;
	w=(*ftab[22])(ctx,1,local+16,&ftab[22],fqv[58]); /*glcolor3fv*/
	if (local[3]==NIL) goto CON1654;
	local[16]= makeint((eusinteger_t)1029L);
	local[17]= makeint((eusinteger_t)5634L);
	local[18]= loadglobal(fqv[140]);
	local[19]= local[4];
	local[20]= local[3];
	ctx->vsp=local+21;
	w=(pointer)MKFLTVEC(ctx,1,local+20); /*float-vector*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)CONCATENATE(ctx,3,local+18); /*concatenate*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1028L);
	local[17]= makeint((eusinteger_t)5634L);
	local[18]= makeint((eusinteger_t)0L);
	local[19]= makeint((eusinteger_t)0L);
	local[20]= makeint((eusinteger_t)0L);
	local[21]= makeint((eusinteger_t)0L);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= w;
	goto CON1653;
CON1654:
	local[16]= makeint((eusinteger_t)1029L);
	local[17]= makeint((eusinteger_t)5634L);
	local[18]= local[4];
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1028L);
	local[17]= makeint((eusinteger_t)5634L);
	local[18]= makeflt(7.9999999999999982236432e-01);
	local[19]= makeflt(0.0000000000000000000000e+00);
	local[20]= makeflt(5.4000000000000003552714e-01);
	ctx->vsp=local+21;
	w=(pointer)MKFLTVEC(ctx,3,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= w;
	goto CON1653;
CON1655:
	local[16]= NIL;
CON1653:
	goto CON1651;
CON1652:
	if (local[9]==NIL) goto CON1656;
	local[16]= fqv[56];
	local[17]= local[9];
	ctx->vsp=local+18;
	w=(*ftab[64])(ctx,2,local+16,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	local[17]= fqv[228];
	local[18]= local[9];
	ctx->vsp=local+19;
	w=(*ftab[64])(ctx,2,local+17,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	local[18]= fqv[135];
	local[19]= local[9];
	ctx->vsp=local+20;
	w=(*ftab[64])(ctx,2,local+18,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.car;
	local[19]= fqv[229];
	local[20]= local[9];
	ctx->vsp=local+21;
	w=(*ftab[64])(ctx,2,local+19,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.car;
	local[20]= fqv[230];
	local[21]= local[9];
	ctx->vsp=local+22;
	w=(*ftab[64])(ctx,2,local+20,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20]= (w)->c.cons.car;
	local[21]= fqv[231];
	local[22]= local[9];
	ctx->vsp=local+23;
	w=(*ftab[64])(ctx,2,local+21,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	local[22]= fqv[232];
	local[23]= local[9];
	ctx->vsp=local+24;
	w=(*ftab[64])(ctx,2,local+22,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22]= (w)->c.cons.car;
	local[23]= fqv[233];
	local[24]= local[9];
	ctx->vsp=local+25;
	w=(*ftab[64])(ctx,2,local+23,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15] = (w)->c.cons.car;
	if (local[16]==NIL) goto IF1657;
	local[23]= local[16];
	ctx->vsp=local+24;
	w=(*ftab[22])(ctx,1,local+23,&ftab[22],fqv[58]); /*glcolor3fv*/
	local[23]= makeint((eusinteger_t)1029L);
	local[24]= makeint((eusinteger_t)5634L);
	if (local[3]==NIL) goto IF1659;
	local[25]= loadglobal(fqv[140]);
	local[26]= local[16];
	local[27]= local[3];
	ctx->vsp=local+28;
	w=(pointer)MKFLTVEC(ctx,1,local+27); /*float-vector*/
	local[27]= w;
	ctx->vsp=local+28;
	w=(pointer)CONCATENATE(ctx,3,local+25); /*concatenate*/
	local[25]= w;
	goto IF1660;
IF1659:
	local[25]= local[16];
IF1660:
	ctx->vsp=local+26;
	w=(*ftab[40])(ctx,3,local+23,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[23]= w;
	goto IF1658;
IF1657:
	local[23]= NIL;
IF1658:
	if (local[17]==NIL) goto IF1661;
	if (local[3]==NIL) goto IF1663;
	local[23]= local[17];
	local[24]= makeint((eusinteger_t)3L);
	local[25]= local[3];
	ctx->vsp=local+26;
	w=(pointer)SETELT(ctx,3,local+23); /*setelt*/
	local[23]= w;
	goto IF1664;
IF1663:
	local[23]= NIL;
IF1664:
	local[23]= makeint((eusinteger_t)1029L);
	local[24]= makeint((eusinteger_t)4608L);
	local[25]= local[17];
	ctx->vsp=local+26;
	w=(*ftab[40])(ctx,3,local+23,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[23]= w;
	goto IF1662;
IF1661:
	local[23]= NIL;
IF1662:
	if (local[18]==NIL) goto IF1665;
	if (local[3]==NIL) goto IF1667;
	local[23]= local[18];
	local[24]= makeint((eusinteger_t)3L);
	local[25]= local[3];
	ctx->vsp=local+26;
	w=(pointer)SETELT(ctx,3,local+23); /*setelt*/
	local[23]= w;
	goto IF1668;
IF1667:
	local[23]= NIL;
IF1668:
	local[23]= makeint((eusinteger_t)1029L);
	local[24]= makeint((eusinteger_t)4609L);
	local[25]= local[18];
	ctx->vsp=local+26;
	w=(*ftab[40])(ctx,3,local+23,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[23]= w;
	goto IF1666;
IF1665:
	local[23]= NIL;
IF1666:
	if (local[19]==NIL) goto IF1669;
	if (local[3]==NIL) goto IF1671;
	local[23]= local[19];
	local[24]= makeint((eusinteger_t)3L);
	local[25]= local[3];
	ctx->vsp=local+26;
	w=(pointer)SETELT(ctx,3,local+23); /*setelt*/
	local[23]= w;
	goto IF1672;
IF1671:
	local[23]= NIL;
IF1672:
	local[23]= makeint((eusinteger_t)1029L);
	local[24]= makeint((eusinteger_t)4610L);
	local[25]= local[19];
	ctx->vsp=local+26;
	w=(*ftab[40])(ctx,3,local+23,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[23]= w;
	goto IF1670;
IF1669:
	local[23]= NIL;
IF1670:
	if (local[20]==NIL) goto IF1673;
	if (local[3]==NIL) goto IF1675;
	local[23]= local[20];
	local[24]= makeint((eusinteger_t)3L);
	local[25]= local[3];
	ctx->vsp=local+26;
	w=(pointer)SETELT(ctx,3,local+23); /*setelt*/
	local[23]= w;
	goto IF1676;
IF1675:
	local[23]= NIL;
IF1676:
	local[23]= makeint((eusinteger_t)1029L);
	local[24]= makeint((eusinteger_t)5632L);
	local[25]= local[20];
	ctx->vsp=local+26;
	w=(*ftab[40])(ctx,3,local+23,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[23]= w;
	goto IF1674;
IF1673:
	local[23]= NIL;
IF1674:
	if (local[21]==NIL) goto CON1678;
	local[23]= makeint((eusinteger_t)1029L);
	local[24]= makeint((eusinteger_t)5633L);
	local[25]= local[21];
	ctx->vsp=local+26;
	w=(*ftab[75])(ctx,3,local+23,&ftab[75],fqv[234]); /*glmaterialf*/
	local[23]= w;
	goto CON1677;
CON1678:
	local[23]= makeint((eusinteger_t)1029L);
	local[24]= makeint((eusinteger_t)5633L);
	local[25]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+26;
	w=(*ftab[75])(ctx,3,local+23,&ftab[75],fqv[234]); /*glmaterialf*/
	local[23]= makeint((eusinteger_t)1029L);
	local[24]= makeint((eusinteger_t)4610L);
	local[25]= makeint((eusinteger_t)0L);
	local[26]= makeint((eusinteger_t)0L);
	local[27]= makeint((eusinteger_t)0L);
	local[28]= makeint((eusinteger_t)0L);
	ctx->vsp=local+29;
	w=(pointer)MKFLTVEC(ctx,4,local+25); /*float-vector*/
	local[25]= w;
	ctx->vsp=local+26;
	w=(*ftab[40])(ctx,3,local+23,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[23]= w;
	goto CON1677;
CON1679:
	local[23]= NIL;
CON1677:
	if (local[15]==NIL) goto IF1680;
	if (local[13]==NIL) goto IF1680;
	local[23]= local[15];
	local[24]= fqv[15];
	ctx->vsp=local+25;
	w=(pointer)SEND(ctx,2,local+23); /*send*/
	local[23]= w;
	local[24]= local[15];
	local[25]= fqv[14];
	ctx->vsp=local+26;
	w=(pointer)SEND(ctx,2,local+24); /*send*/
	local[24]= w;
	local[25]= local[15];
	local[26]= fqv[17];
	ctx->vsp=local+27;
	w=(pointer)SEND(ctx,2,local+25); /*send*/
	local[25]= w;
	local[26]= makeint((eusinteger_t)3317L);
	local[27]= makeint((eusinteger_t)1L);
	ctx->vsp=local+28;
	w=(*ftab[17])(ctx,2,local+26,&ftab[17],fqv[47]); /*glpixelstorei*/
	local[26]= local[15];
	local[27]= loadglobal(fqv[108]);
	ctx->vsp=local+28;
	w=(pointer)DERIVEDP(ctx,2,local+26); /*derivedp*/
	if (w==NIL) goto CON1683;
	local[26]= makeint((eusinteger_t)3553L);
	local[27]= makeint((eusinteger_t)0L);
	local[28]= makeint((eusinteger_t)6407L);
	local[29]= local[23];
	local[30]= local[24];
	local[31]= makeint((eusinteger_t)0L);
	local[32]= makeint((eusinteger_t)6409L);
	local[33]= makeint((eusinteger_t)5121L);
	local[34]= local[25];
	ctx->vsp=local+35;
	w=(*ftab[45])(ctx,9,local+26,&ftab[45],fqv[119]); /*glteximage2d*/
	local[26]= w;
	goto CON1682;
CON1683:
	local[26]= local[15];
	local[27]= loadglobal(fqv[44]);
	ctx->vsp=local+28;
	w=(pointer)DERIVEDP(ctx,2,local+26); /*derivedp*/
	if (w==NIL) goto CON1684;
	local[26]= makeint((eusinteger_t)3553L);
	local[27]= makeint((eusinteger_t)0L);
	local[28]= makeint((eusinteger_t)6407L);
	local[29]= local[23];
	local[30]= local[24];
	local[31]= makeint((eusinteger_t)0L);
	local[32]= makeint((eusinteger_t)6407L);
	local[33]= makeint((eusinteger_t)5121L);
	local[34]= local[25];
	ctx->vsp=local+35;
	w=(*ftab[45])(ctx,9,local+26,&ftab[45],fqv[119]); /*glteximage2d*/
	local[26]= w;
	goto CON1682;
CON1684:
	local[26]= local[15];
	local[27]= loadglobal(fqv[235]);
	ctx->vsp=local+28;
	w=(pointer)DERIVEDP(ctx,2,local+26); /*derivedp*/
	if (w==NIL) goto CON1685;
	local[26]= makeint((eusinteger_t)3553L);
	local[27]= makeint((eusinteger_t)0L);
	local[28]= makeint((eusinteger_t)6408L);
	local[29]= local[23];
	local[30]= local[24];
	local[31]= makeint((eusinteger_t)0L);
	local[32]= makeint((eusinteger_t)6408L);
	local[33]= makeint((eusinteger_t)5121L);
	local[34]= local[25];
	ctx->vsp=local+35;
	w=(*ftab[45])(ctx,9,local+26,&ftab[45],fqv[119]); /*glteximage2d*/
	local[26]= w;
	goto CON1682;
CON1685:
	local[26]= NIL;
CON1682:
	local[26]= makeint((eusinteger_t)3553L);
	local[27]= makeint((eusinteger_t)10242L);
	local[28]= makeint((eusinteger_t)10497L);
	ctx->vsp=local+29;
	w=(*ftab[46])(ctx,3,local+26,&ftab[46],fqv[120]); /*gltexparameteri*/
	local[26]= makeint((eusinteger_t)3553L);
	local[27]= makeint((eusinteger_t)10243L);
	local[28]= makeint((eusinteger_t)10497L);
	ctx->vsp=local+29;
	w=(*ftab[46])(ctx,3,local+26,&ftab[46],fqv[120]); /*gltexparameteri*/
	local[26]= makeint((eusinteger_t)3553L);
	local[27]= makeint((eusinteger_t)10241L);
	local[28]= makeint((eusinteger_t)9728L);
	ctx->vsp=local+29;
	w=(*ftab[46])(ctx,3,local+26,&ftab[46],fqv[120]); /*gltexparameteri*/
	local[26]= makeint((eusinteger_t)3553L);
	local[27]= makeint((eusinteger_t)10240L);
	local[28]= makeint((eusinteger_t)9728L);
	ctx->vsp=local+29;
	w=(*ftab[46])(ctx,3,local+26,&ftab[46],fqv[120]); /*gltexparameteri*/
	local[26]= makeint((eusinteger_t)8960L);
	local[27]= makeint((eusinteger_t)8704L);
	local[28]= makeint((eusinteger_t)8448L);
	ctx->vsp=local+29;
	w=(*ftab[47])(ctx,3,local+26,&ftab[47],fqv[121]); /*gltexenvi*/
	local[26]= makeint((eusinteger_t)3553L);
	ctx->vsp=local+27;
	w=(*ftab[12])(ctx,1,local+26,&ftab[12],fqv[29]); /*glenable*/
	local[23]= w;
	goto IF1681;
IF1680:
	local[23]= NIL;
IF1681:
	if (local[3]==NIL) goto IF1686;
	local[23]= makeint((eusinteger_t)1028L);
	local[24]= makeint((eusinteger_t)5634L);
	local[25]= makeint((eusinteger_t)0L);
	local[26]= makeint((eusinteger_t)0L);
	local[27]= makeint((eusinteger_t)0L);
	local[28]= makeint((eusinteger_t)0L);
	ctx->vsp=local+29;
	w=(pointer)MKFLTVEC(ctx,4,local+25); /*float-vector*/
	local[25]= w;
	ctx->vsp=local+26;
	w=(*ftab[40])(ctx,3,local+23,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[23]= w;
	goto IF1687;
IF1686:
	local[23]= NIL;
IF1687:
	w = local[23];
	local[16]= w;
	goto CON1651;
CON1656:
	local[16]= makeint((eusinteger_t)1029L);
	local[17]= makeint((eusinteger_t)4608L);
	local[18]= makeflt(1.9999999999999995559108e-01);
	local[19]= makeflt(1.9999999999999995559108e-01);
	local[20]= makeflt(1.9999999999999995559108e-01);
	local[21]= makeflt(9.9999999999999977795540e-02);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1029L);
	local[17]= makeint((eusinteger_t)4609L);
	local[18]= makeint((eusinteger_t)1L);
	local[19]= makeint((eusinteger_t)1L);
	local[20]= makeint((eusinteger_t)1L);
	local[21]= makeint((eusinteger_t)1L);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1029L);
	local[17]= makeint((eusinteger_t)4610L);
	local[18]= makeflt(1.9999999999999995559108e-01);
	local[19]= makeflt(1.9999999999999995559108e-01);
	local[20]= makeflt(1.9999999999999995559108e-01);
	local[21]= makeflt(9.9999999999999977795540e-02);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1029L);
	local[17]= makeint((eusinteger_t)5632L);
	local[18]= makeflt(9.9999999999999977795540e-02);
	local[19]= makeflt(9.9999999999999977795540e-02);
	local[20]= makeflt(9.9999999999999977795540e-02);
	local[21]= makeflt(9.9999999999999977795540e-02);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1028L);
	local[17]= makeint((eusinteger_t)4608L);
	local[18]= makeflt(7.9999999999999982236432e-01);
	local[19]= makeflt(0.0000000000000000000000e+00);
	local[20]= makeflt(5.4000000000000003552714e-01);
	local[21]= makeint((eusinteger_t)1L);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1028L);
	local[17]= makeint((eusinteger_t)4609L);
	local[18]= makeflt(7.9999999999999982236432e-01);
	local[19]= makeflt(0.0000000000000000000000e+00);
	local[20]= makeflt(5.4000000000000003552714e-01);
	local[21]= makeint((eusinteger_t)1L);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1028L);
	local[17]= makeint((eusinteger_t)4610L);
	local[18]= makeflt(1.9999999999999995559108e-01);
	local[19]= makeflt(1.9999999999999995559108e-01);
	local[20]= makeflt(1.9999999999999995559108e-01);
	local[21]= makeint((eusinteger_t)1L);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= makeint((eusinteger_t)1028L);
	local[17]= makeint((eusinteger_t)5632L);
	local[18]= makeflt(9.9999999999999977795540e-02);
	local[19]= makeflt(9.9999999999999977795540e-02);
	local[20]= makeflt(9.9999999999999977795540e-02);
	local[21]= makeint((eusinteger_t)1L);
	ctx->vsp=local+22;
	w=(pointer)MKFLTVEC(ctx,4,local+18); /*float-vector*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,3,local+16,&ftab[40],fqv[103]); /*glmaterialfv*/
	local[16]= w;
	goto CON1651;
CON1688:
	local[16]= NIL;
CON1651:
	if (local[15]==NIL) goto AND1691;
	if (local[13]==NIL) goto AND1691;
	goto IF1689;
AND1691:
	local[13] = NIL;
	local[16]= local[13];
	goto IF1690;
IF1689:
	local[16]= NIL;
IF1690:
	local[16]= makeint((eusinteger_t)32884L);
	ctx->vsp=local+17;
	w=(*ftab[76])(ctx,1,local+16,&ftab[76],fqv[236]); /*glenableclientstate*/
	local[16]= makeint((eusinteger_t)3L);
	local[17]= makeint((eusinteger_t)5130L);
	local[18]= makeint((eusinteger_t)0L);
	local[19]= local[10]->c.obj.iv[1];
	ctx->vsp=local+20;
	w=(*ftab[77])(ctx,4,local+16,&ftab[77],fqv[237]); /*glvertexpointer*/
	if (local[11]==NIL) goto IF1692;
	local[16]= makeint((eusinteger_t)32885L);
	ctx->vsp=local+17;
	w=(*ftab[76])(ctx,1,local+16,&ftab[76],fqv[236]); /*glenableclientstate*/
	local[16]= makeint((eusinteger_t)5130L);
	local[17]= makeint((eusinteger_t)0L);
	local[18]= local[11]->c.obj.iv[1];
	ctx->vsp=local+19;
	w=(*ftab[78])(ctx,3,local+16,&ftab[78],fqv[238]); /*glnormalpointer*/
	local[16]= w;
	goto IF1693;
IF1692:
	local[16]= NIL;
IF1693:
	if (local[13]==NIL) goto IF1694;
	local[16]= makeint((eusinteger_t)32888L);
	ctx->vsp=local+17;
	w=(*ftab[76])(ctx,1,local+16,&ftab[76],fqv[236]); /*glenableclientstate*/
	local[16]= makeint((eusinteger_t)2L);
	local[17]= makeint((eusinteger_t)5130L);
	local[18]= makeint((eusinteger_t)0L);
	local[19]= local[13];
	ctx->vsp=local+20;
	w=(*ftab[79])(ctx,4,local+16,&ftab[79],fqv[239]); /*gltexcoordpointer*/
	local[16]= w;
	goto IF1695;
IF1694:
	local[16]= NIL;
IF1695:
	local[16]= NIL;
	local[17]= local[8];
	local[18]= local[17];
	if (fqv[197]!=local[18]) goto IF1697;
	local[16] = makeint((eusinteger_t)4L);
	local[18]= local[16];
	goto IF1698;
IF1697:
	local[18]= local[17];
	if (fqv[198]!=local[18]) goto IF1699;
	local[16] = makeint((eusinteger_t)7L);
	local[18]= local[16];
	goto IF1700;
IF1699:
	local[18]= local[17];
	if (fqv[199]!=local[18]) goto IF1701;
	local[16] = makeint((eusinteger_t)1L);
	local[18]= local[16];
	goto IF1702;
IF1701:
	local[18]= local[17];
	if (fqv[200]!=local[18]) goto IF1703;
	local[16] = makeint((eusinteger_t)4L);
	local[18]= fqv[240];
	ctx->vsp=local+19;
	w=(*ftab[24])(ctx,1,local+18,&ftab[24],fqv[70]); /*warn*/
	local[18]= w;
	goto IF1704;
IF1703:
	if (T==NIL) goto IF1705;
	local[18]= fqv[241];
	ctx->vsp=local+19;
	w=(*ftab[24])(ctx,1,local+18,&ftab[24],fqv[70]); /*warn*/
	local[18]= local[8];
	goto IF1706;
IF1705:
	local[18]= NIL;
IF1706:
IF1704:
IF1702:
IF1700:
IF1698:
	w = local[18];
	if (local[16]==NIL) goto IF1707;
	if (local[12]==NIL) goto CON1710;
	local[17]= local[16];
	local[18]= local[12];
	ctx->vsp=local+19;
	w=(pointer)LENGTH(ctx,1,local+18); /*length*/
	local[18]= w;
	local[19]= makeint((eusinteger_t)5125L);
	local[20]= local[12];
	ctx->vsp=local+21;
	w=(*ftab[80])(ctx,1,local+20,&ftab[80],fqv[242]); /*user::lvector2integer-bytestring*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(*ftab[81])(ctx,4,local+17,&ftab[81],fqv[243]); /*gldrawelements*/
	local[17]= w;
	goto CON1709;
CON1710:
	local[17]= local[16];
	local[18]= makeint((eusinteger_t)0L);
	local[19]= local[10];
	local[20]= makeint((eusinteger_t)0L);
	ctx->vsp=local+21;
	w=(*ftab[66])(ctx,2,local+19,&ftab[66],fqv[182]); /*array-dimension*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(*ftab[82])(ctx,3,local+17,&ftab[82],fqv[244]); /*gldrawarrays*/
	local[17]= w;
	goto CON1709;
CON1711:
	local[17]= NIL;
CON1709:
	goto IF1708;
IF1707:
	local[17]= NIL;
IF1708:
	w = local[17];
	if (local[13]==NIL) goto IF1712;
	local[16]= makeint((eusinteger_t)3553L);
	ctx->vsp=local+17;
	w=(*ftab[8])(ctx,1,local+16,&ftab[8],fqv[25]); /*gldisable*/
	local[16]= makeint((eusinteger_t)32888L);
	ctx->vsp=local+17;
	w=(*ftab[83])(ctx,1,local+16,&ftab[83],fqv[245]); /*gldisableclientstate*/
	local[16]= w;
	goto IF1713;
IF1712:
	local[16]= NIL;
IF1713:
	if (local[11]==NIL) goto IF1714;
	local[16]= makeint((eusinteger_t)32885L);
	ctx->vsp=local+17;
	w=(*ftab[83])(ctx,1,local+16,&ftab[83],fqv[245]); /*gldisableclientstate*/
	local[16]= w;
	goto IF1715;
IF1714:
	local[16]= NIL;
IF1715:
	local[16]= makeint((eusinteger_t)32884L);
	ctx->vsp=local+17;
	w=(*ftab[83])(ctx,1,local+16,&ftab[83],fqv[245]); /*gldisableclientstate*/
	if (local[14]==NIL) goto IF1716;
	local[16]= makeint((eusinteger_t)7425L);
	ctx->vsp=local+17;
	w=(*ftab[12])(ctx,1,local+16,&ftab[12],fqv[29]); /*glenable*/
	local[16]= makeint((eusinteger_t)7425L);
	ctx->vsp=local+17;
	w=(*ftab[74])(ctx,1,local+16,&ftab[74],fqv[227]); /*glshademodel*/
	local[16]= w;
	goto IF1717;
IF1716:
	local[16]= NIL;
IF1717:
	w = local[16];
	goto WHL1645;
WHX1646:
	local[8]= NIL;
BLK1647:
	w = NIL;
	if (local[3]==NIL) goto IF1718;
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(*ftab[73])(ctx,1,local+6,&ftab[73],fqv[225]); /*gldepthmask*/
	local[6]= makeint((eusinteger_t)3042L);
	ctx->vsp=local+7;
	w=(*ftab[8])(ctx,1,local+6,&ftab[8],fqv[25]); /*gldisable*/
	local[6]= w;
	goto IF1719;
IF1718:
	local[6]= NIL;
IF1719:
	ctx->vsp=local+6;
	w=(*ftab[38])(ctx,0,local+6,&ftab[38],fqv[99]); /*glendlist*/
	local[6]= argv[0];
	local[7]= local[5];
	w = local[1];
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= argv[0];
	local[9]= fqv[71];
	ctx->vsp=local+10;
	w=(pointer)GETPROP(ctx,2,local+8); /*get*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[71];
	ctx->vsp=local+9;
	w=(pointer)PUTPROP(ctx,3,local+6); /*putprop*/
	local[1] = NIL;
	local[6]= local[1];
	goto CON1637;
CON1639:
	local[6]= NIL;
CON1637:
	local[6]= makeint((eusinteger_t)2898L);
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(*ftab[72])(ctx,2,local+6,&ftab[72],fqv[224]); /*gllightmodeli*/
	ctx->vsp=local+6;
	w=(*ftab[28])(ctx,0,local+6,&ftab[28],fqv[80]); /*glpopmatrix*/
	ctx->vsp=local+6;
	w=(*ftab[37])(ctx,0,local+6,&ftab[37],fqv[98]); /*glpopattrib*/
	if (local[1]!=NIL) goto IF1720;
	local[6]= argv[0];
	local[7]= fqv[64];
	local[8]= argv[2];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	goto IF1721;
IF1720:
	local[6]= NIL;
IF1721:
	w = local[6];
	local[0]= w;
BLK1635:
	ctx->vsp=local; return(local[0]);}

/*:collision-check-objects*/
static pointer M1722glvertices_collision_check_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1724:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	w = NIL;
	local[0]= w;
BLK1723:
	ctx->vsp=local; return(local[0]);}

/*:box*/
static pointer M1725glvertices_box(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[10]!=NIL) goto IF1727;
	local[0]= argv[0];
	local[1]= fqv[186];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto IF1728;
IF1727:
	local[0]= NIL;
IF1728:
	w = argv[0]->c.obj.iv[10];
	local[0]= w;
BLK1726:
	ctx->vsp=local; return(local[0]);}

/*:make-pqpmodel*/
static pointer M1729glvertices_make_pqpmodel(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[246], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1731;
	local[0] = makeint((eusinteger_t)0L);
KEY1731:
	ctx->vsp=local+1;
	w=(*ftab[84])(ctx,0,local+1,&ftab[84],fqv[247]); /*geometry::pqpmakemodel*/
	local[1]= w;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= NIL;
	local[7]= argv[0]->c.obj.iv[8];
WHL1733:
	if (local[7]==NIL) goto WHX1734;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= fqv[196];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[64])(ctx,2,local+8,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= local[8];
	if (fqv[197]==local[9]) goto IF1737;
	local[9]= fqv[248];
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(*ftab[24])(ctx,2,local+9,&ftab[24],fqv[70]); /*warn*/
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(*ftab[85])(ctx,1,local+9,&ftab[85],fqv[249]); /*geometry::pqpdeletemodel*/
	w = NIL;
	ctx->vsp=local+9;
	local[0]=w;
	goto BLK1730;
	goto IF1738;
IF1737:
	local[9]= NIL;
IF1738:
	w = local[9];
	goto WHL1733;
WHX1734:
	local[8]= NIL;
BLK1735:
	w = NIL;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[2] = w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[3] = w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[4] = w;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(*ftab[86])(ctx,1,local+6,&ftab[86],fqv[250]); /*geometry::pqpbeginmodel*/
	local[6]= NIL;
	local[7]= argv[0]->c.obj.iv[8];
WHL1740:
	if (local[7]==NIL) goto WHX1741;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= fqv[87];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[64])(ctx,2,local+8,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= fqv[192];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(*ftab[64])(ctx,2,local+9,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= local[9];
	ctx->vsp=local+11;
	w=(pointer)LENGTH(ctx,1,local+10); /*length*/
	local[10]= w;
	local[11]= makeint((eusinteger_t)3L);
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	local[11]= makeint((eusinteger_t)3L);
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	if (local[9]==NIL) goto CON1745;
	local[11]= makeint((eusinteger_t)0L);
TAG1748:
	local[12]= local[11];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)GREQP(ctx,2,local+12); /*>=*/
	if (w==NIL) goto IF1749;
	w = NIL;
	ctx->vsp=local+12;
	local[11]=w;
	goto BLK1747;
	goto IF1750;
IF1749:
	local[12]= NIL;
IF1750:
	local[12]= local[8];
	local[13]= local[9];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(*ftab[67])(ctx,3,local+12,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[12]= local[8];
	local[13]= local[9];
	local[14]= local[11];
	local[15]= makeint((eusinteger_t)1L);
	ctx->vsp=local+16;
	w=(pointer)PLUS(ctx,2,local+14); /*+*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(*ftab[67])(ctx,3,local+12,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[12]= local[8];
	local[13]= local[9];
	local[14]= local[11];
	local[15]= makeint((eusinteger_t)2L);
	ctx->vsp=local+16;
	w=(pointer)PLUS(ctx,2,local+14); /*+*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(*ftab[67])(ctx,3,local+12,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[12]= local[0];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)NUMEQUAL(ctx,2,local+12); /*=*/
	if (w!=NIL) goto IF1751;
	local[12]= local[2];
	local[13]= local[0];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)VNORMALIZE(ctx,1,local+14); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)VPLUS(ctx,3,local+12); /*v+*/
	local[12]= local[3];
	local[13]= local[0];
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)VNORMALIZE(ctx,1,local+14); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)VPLUS(ctx,3,local+12); /*v+*/
	local[12]= local[4];
	local[13]= local[0];
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)VNORMALIZE(ctx,1,local+14); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)VPLUS(ctx,3,local+12); /*v+*/
	local[12]= w;
	goto IF1752;
IF1751:
	local[12]= NIL;
IF1752:
	local[12]= local[1];
	local[13]= local[2];
	local[14]= local[3];
	local[15]= local[4];
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(*ftab[87])(ctx,5,local+12,&ftab[87],fqv[251]); /*geometry::pqpaddtri*/
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[5] = w;
	local[12]= local[11];
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,2,local+12); /*+*/
	local[12]= w;
	local[11] = local[12];
	w = NIL;
	ctx->vsp=local+12;
	goto TAG1748;
	w = NIL;
	local[11]= w;
BLK1747:
	goto CON1744;
CON1745:
	local[11]= makeint((eusinteger_t)0L);
TAG1757:
	local[12]= local[11];
	local[13]= local[8];
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(*ftab[66])(ctx,2,local+13,&ftab[66],fqv[182]); /*array-dimension*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)GREQP(ctx,2,local+12); /*>=*/
	if (w==NIL) goto IF1758;
	w = NIL;
	ctx->vsp=local+12;
	local[11]=w;
	goto BLK1756;
	goto IF1759;
IF1758:
	local[12]= NIL;
IF1759:
	local[12]= local[8];
	local[13]= local[11];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(*ftab[67])(ctx,3,local+12,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[12]= local[8];
	local[13]= local[11];
	local[14]= makeint((eusinteger_t)1L);
	ctx->vsp=local+15;
	w=(pointer)PLUS(ctx,2,local+13); /*+*/
	local[13]= w;
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(*ftab[67])(ctx,3,local+12,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[12]= local[8];
	local[13]= local[11];
	local[14]= makeint((eusinteger_t)2L);
	ctx->vsp=local+15;
	w=(pointer)PLUS(ctx,2,local+13); /*+*/
	local[13]= w;
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(*ftab[67])(ctx,3,local+12,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[12]= local[0];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)NUMEQUAL(ctx,2,local+12); /*=*/
	if (w!=NIL) goto IF1760;
	local[12]= local[2];
	local[13]= local[0];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)VNORMALIZE(ctx,1,local+14); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)VPLUS(ctx,3,local+12); /*v+*/
	local[12]= local[3];
	local[13]= local[0];
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)VNORMALIZE(ctx,1,local+14); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)VPLUS(ctx,3,local+12); /*v+*/
	local[12]= local[4];
	local[13]= local[0];
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)VNORMALIZE(ctx,1,local+14); /*normalize-vector*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)VPLUS(ctx,3,local+12); /*v+*/
	local[12]= w;
	goto IF1761;
IF1760:
	local[12]= NIL;
IF1761:
	local[12]= local[1];
	local[13]= local[2];
	local[14]= local[3];
	local[15]= local[4];
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(*ftab[87])(ctx,5,local+12,&ftab[87],fqv[251]); /*geometry::pqpaddtri*/
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[5] = w;
	local[12]= local[11];
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,2,local+12); /*+*/
	local[12]= w;
	local[11] = local[12];
	w = NIL;
	ctx->vsp=local+12;
	goto TAG1757;
	w = NIL;
	local[11]= w;
BLK1756:
	goto CON1744;
CON1754:
	local[11]= NIL;
CON1744:
	w = local[11];
	goto WHL1740;
WHX1741:
	local[8]= NIL;
BLK1742:
	w = NIL;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(*ftab[88])(ctx,1,local+6,&ftab[88],fqv[252]); /*geometry::pqpendmodel*/
	w = local[1];
	local[0]= w;
BLK1730:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1368(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[2];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[64])(ctx,2,local+0,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1546(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	local[1]= fqv[171];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1571(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	local[1]= fqv[171];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1610(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env2[1];
	local[1]= env->c.clo.env2[0];
	local[2]= fqv[113];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[64])(ctx,2,local+2,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)FUNCALL(ctx,3,local+0); /*funcall*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:glvertices*/
static pointer M1763glbody_glvertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1765:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[16];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[89])(ctx,2,local+1,&ftab[89],fqv[253]); /*user::forward-message-to*/
	local[0]= w;
BLK1764:
	ctx->vsp=local; return(local[0]);}

/*:draw*/
static pointer M1766glbody_draw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[0]->c.obj.iv[16]==NIL) goto IF1768;
	local[0]= argv[0]->c.obj.iv[16];
	local[1]= fqv[64];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF1769;
IF1768:
	local[0]= NIL;
IF1769:
	w = local[0];
	local[0]= w;
BLK1767:
	ctx->vsp=local; return(local[0]);}

/*:set-color*/
static pointer M1770glbody_set_color(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1772:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[175]);
	local[2]= argv[0];
	local[3]= *(ovafptr(argv[1],fqv[36]));
	local[4]= fqv[254];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,5,local+1); /*apply*/
	if (argv[0]->c.obj.iv[16]==NIL) goto IF1773;
	local[1]= (pointer)get_sym_func(fqv[214]);
	local[2]= argv[0]->c.obj.iv[16];
	local[3]= fqv[254];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[1]= w;
	goto IF1774;
IF1773:
	local[1]= NIL;
IF1774:
	w = local[1];
	local[0]= w;
BLK1771:
	ctx->vsp=local; return(local[0]);}

/*make-glvertices-from-faceset*/
static pointer F983make_glvertices_from_faceset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[255], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY1776;
	local[0] = NIL;
KEY1776:
	local[1]= NIL;
	if (local[0]==NIL) goto CON1778;
	local[1] = local[0];
	local[2]= local[1];
	goto CON1777;
CON1778:
	local[2]= argv[0];
	local[3]= fqv[73];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	if (w==NIL) goto CON1779;
	local[2]= argv[0];
	local[3]= fqv[73];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)VECTORP(ctx,1,local+3); /*vectorp*/
	if (w!=NIL) goto IF1780;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)F981find_color(ctx,1,local+3); /*find-color*/
	local[2] = w;
	local[3]= local[2];
	goto IF1781;
IF1780:
	local[3]= NIL;
IF1781:
	local[3]= fqv[228];
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= local[2];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= local[2];
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,3,local+4); /*float-vector*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[3]= w;
	local[4]= fqv[135];
	local[5]= local[2];
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= local[2];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[2];
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,2,local+4); /*list*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[1] = w;
	w = local[1];
	local[2]= w;
	goto CON1777;
CON1779:
	local[2]= fqv[228];
	local[3]= makeflt(6.4999999999999991118216e-01);
	local[4]= makeflt(6.4999999999999991118216e-01);
	local[5]= makeflt(6.4999999999999991118216e-01);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,3,local+3); /*float-vector*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[2]= w;
	local[3]= fqv[135];
	local[4]= makeflt(6.4999999999999991118216e-01);
	local[5]= makeflt(6.4999999999999991118216e-01);
	local[6]= makeflt(6.4999999999999991118216e-01);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,3,local+4); /*float-vector*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,2,local+3); /*list*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[1] = w;
	local[2]= local[1];
	goto CON1777;
CON1782:
	local[2]= NIL;
CON1777:
	local[2]= argv[0];
	local[3]= fqv[86];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= fqv[180];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)F984make_glvertices_from_faces(ctx,3,local+2); /*make-glvertices-from-faces*/
	local[0]= w;
BLK1775:
	ctx->vsp=local; return(local[0]);}

/*make-glvertices-from-faces*/
static pointer F984make_glvertices_from_faces(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[256], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY1784;
	local[0] = NIL;
KEY1784:
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO1785,env,argv,local);
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[70])(ctx,1,local+1,&ftab[70],fqv[213]); /*flatten*/
	argv[0] = w;
	local[1]= makeint((eusinteger_t)3L);
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	{ eusinteger_t i,j;
		j=intval(w); i=intval(local[1]);
		local[1]=(makeint(i * j));}
	local[2]= makeint((eusinteger_t)3L);
	ctx->vsp=local+3;
	w=(*ftab[69])(ctx,2,local+1,&ftab[69],fqv[193]); /*make-matrix*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)3L);
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	{ eusinteger_t i,j;
		j=intval(w); i=intval(local[2]);
		local[2]=(makeint(i * j));}
	local[3]= makeint((eusinteger_t)3L);
	ctx->vsp=local+4;
	w=(*ftab[69])(ctx,2,local+2,&ftab[69],fqv[193]); /*make-matrix*/
	local[2]= w;
	local[3]= loadglobal(fqv[101]);
	local[4]= makeint((eusinteger_t)3L);
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	{ eusinteger_t i,j;
		j=intval(w); i=intval(local[4]);
		local[4]=(makeint(i * j));}
	ctx->vsp=local+5;
	w=(pointer)INSTANTIATE(ctx,2,local+3); /*instantiate*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= NIL;
	local[6]= argv[0];
WHL1787:
	if (local[6]==NIL) goto WHX1788;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= local[5];
	local[8]= fqv[94];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)VNORMALIZE(ctx,1,local+7); /*normalize-vector*/
	local[7]= w;
	local[8]= local[5];
	local[9]= fqv[87];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= local[1];
	local[10]= local[4];
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= T;
	ctx->vsp=local+13;
	w=(*ftab[67])(ctx,4,local+9,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[9]= local[2];
	local[10]= local[4];
	local[11]= local[7];
	local[12]= T;
	ctx->vsp=local+13;
	w=(*ftab[67])(ctx,4,local+9,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[4] = w;
	local[9]= local[1];
	local[10]= local[4];
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= T;
	ctx->vsp=local+13;
	w=(*ftab[67])(ctx,4,local+9,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[9]= local[2];
	local[10]= local[4];
	local[11]= local[7];
	local[12]= T;
	ctx->vsp=local+13;
	w=(*ftab[67])(ctx,4,local+9,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[4] = w;
	local[9]= local[1];
	local[10]= local[4];
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= T;
	ctx->vsp=local+13;
	w=(*ftab[67])(ctx,4,local+9,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[9]= local[2];
	local[10]= local[4];
	local[11]= local[7];
	local[12]= T;
	ctx->vsp=local+13;
	w=(*ftab[67])(ctx,4,local+9,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[4] = w;
	w = local[4];
	goto WHL1787;
WHX1788:
	local[7]= NIL;
BLK1789:
	w = NIL;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
WHL1792:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX1793;
	local[7]= local[3];
	local[8]= local[5];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SETELT(ctx,3,local+7); /*setelt*/
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL1792;
WHX1793:
	local[7]= NIL;
BLK1794:
	w = NIL;
	local[5]= fqv[196];
	local[6]= fqv[197];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,2,local+5); /*list*/
	local[5]= w;
	local[6]= fqv[87];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,2,local+6); /*list*/
	local[6]= w;
	local[7]= fqv[194];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	local[8]= fqv[192];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,2,local+8); /*list*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,4,local+5); /*list*/
	local[5]= w;
	if (local[0]==NIL) goto IF1795;
	local[6]= fqv[180];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,2,local+6); /*list*/
	local[6]= w;
	w = local[5];
	ctx->vsp=local+7;
	local[5] = cons(ctx,local[6],w);
	local[6]= local[5];
	goto IF1796;
IF1795:
	local[6]= NIL;
IF1796:
	local[6]= loadglobal(fqv[205]);
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,1,local+6); /*instantiate*/
	local[6]= w;
	local[7]= local[6];
	local[8]= fqv[45];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	w = local[6];
	local[0]= w;
BLK1783:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1785(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[90])(ctx,1,local+0,&ftab[90],fqv[257]); /*geometry::face-to-triangle-aux*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*_dump-wrl-shape*/
static pointer F985_dump_wrl_shape(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[258], &argv[2], n-2, local+0, 1);
	if (n & (1<<0)) goto KEY1799;
	local[0] = makeflt(1.0000000000000000000000e+00);
KEY1799:
	if (n & (1<<1)) goto KEY1800;
	local[1] = NIL;
KEY1800:
	if (n & (1<<2)) goto KEY1801;
	local[2] = NIL;
KEY1801:
	if (n & (1<<3)) goto KEY1802;
	local[3] = NIL;
KEY1802:
	local[4]= fqv[196];
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(*ftab[64])(ctx,2,local+4,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	local[5]= fqv[192];
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(*ftab[64])(ctx,2,local+5,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= fqv[87];
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(*ftab[64])(ctx,2,local+6,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	local[7]= fqv[180];
	local[8]= argv[1];
	ctx->vsp=local+9;
	w=(*ftab[64])(ctx,2,local+7,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	local[8]= fqv[226];
	local[9]= argv[1];
	ctx->vsp=local+10;
	w=(*ftab[64])(ctx,2,local+8,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= fqv[194];
	local[10]= argv[1];
	ctx->vsp=local+11;
	w=(*ftab[64])(ctx,2,local+9,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= local[6]->c.obj.iv[1];
	ctx->vsp=local+11;
	w=(pointer)LENGTH(ctx,1,local+10); /*length*/
	local[10]= w;
	local[11]= makeint((eusinteger_t)3L);
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	local[11]= argv[0];
	local[12]= fqv[259];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,2,local+11); /*format*/
	local[11]= fqv[56];
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(*ftab[64])(ctx,2,local+11,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= fqv[228];
	local[13]= local[7];
	ctx->vsp=local+14;
	w=(*ftab[64])(ctx,2,local+12,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= fqv[135];
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(*ftab[64])(ctx,2,local+13,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	local[14]= fqv[229];
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(*ftab[64])(ctx,2,local+14,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	local[15]= fqv[230];
	local[16]= local[7];
	ctx->vsp=local+17;
	w=(*ftab[64])(ctx,2,local+15,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	local[16]= fqv[231];
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(*ftab[64])(ctx,2,local+16,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	local[17]= fqv[232];
	local[18]= local[7];
	ctx->vsp=local+19;
	w=(*ftab[64])(ctx,2,local+17,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	local[18]= fqv[260];
	local[19]= local[7];
	ctx->vsp=local+20;
	w=(*ftab[64])(ctx,2,local+18,&ftab[64],fqv[177]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.car;
	local[19]= argv[0];
	local[20]= fqv[261];
	ctx->vsp=local+21;
	w=(pointer)XFORMAT(ctx,2,local+19); /*format*/
	if (local[13]==NIL) goto IF1803;
	local[19]= argv[0];
	local[20]= fqv[262];
	local[21]= local[13];
	local[22]= makeint((eusinteger_t)0L);
	ctx->vsp=local+23;
	w=(pointer)ELT(ctx,2,local+21); /*elt*/
	local[21]= w;
	local[22]= local[13];
	local[23]= makeint((eusinteger_t)1L);
	ctx->vsp=local+24;
	w=(pointer)ELT(ctx,2,local+22); /*elt*/
	local[22]= w;
	local[23]= local[13];
	local[24]= makeint((eusinteger_t)2L);
	ctx->vsp=local+25;
	w=(pointer)ELT(ctx,2,local+23); /*elt*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)XFORMAT(ctx,5,local+19); /*format*/
	local[19]= w;
	goto IF1804;
IF1803:
	local[19]= NIL;
IF1804:
	if (local[1]==NIL) goto IF1805;
	if (local[12]==NIL) goto IF1805;
	local[19]= argv[0];
	local[20]= fqv[263];
	local[21]= local[12];
	local[22]= makeint((eusinteger_t)0L);
	ctx->vsp=local+23;
	w=(pointer)ELT(ctx,2,local+21); /*elt*/
	local[21]= w;
	local[22]= local[12];
	local[23]= makeint((eusinteger_t)1L);
	ctx->vsp=local+24;
	w=(pointer)ELT(ctx,2,local+22); /*elt*/
	local[22]= w;
	local[23]= local[12];
	local[24]= makeint((eusinteger_t)2L);
	ctx->vsp=local+25;
	w=(pointer)ELT(ctx,2,local+23); /*elt*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)XFORMAT(ctx,5,local+19); /*format*/
	local[19]= w;
	goto IF1806;
IF1805:
	local[19]= NIL;
IF1806:
	if (local[14]==NIL) goto IF1807;
	local[19]= argv[0];
	local[20]= fqv[264];
	local[21]= local[14];
	local[22]= makeint((eusinteger_t)0L);
	ctx->vsp=local+23;
	w=(pointer)ELT(ctx,2,local+21); /*elt*/
	local[21]= w;
	local[22]= local[14];
	local[23]= makeint((eusinteger_t)1L);
	ctx->vsp=local+24;
	w=(pointer)ELT(ctx,2,local+22); /*elt*/
	local[22]= w;
	local[23]= local[14];
	local[24]= makeint((eusinteger_t)2L);
	ctx->vsp=local+25;
	w=(pointer)ELT(ctx,2,local+23); /*elt*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)XFORMAT(ctx,5,local+19); /*format*/
	local[19]= w;
	goto IF1808;
IF1807:
	local[19]= NIL;
IF1808:
	if (local[15]==NIL) goto IF1809;
	local[19]= argv[0];
	local[20]= fqv[265];
	local[21]= local[15];
	local[22]= makeint((eusinteger_t)0L);
	ctx->vsp=local+23;
	w=(pointer)ELT(ctx,2,local+21); /*elt*/
	local[21]= w;
	local[22]= local[15];
	local[23]= makeint((eusinteger_t)1L);
	ctx->vsp=local+24;
	w=(pointer)ELT(ctx,2,local+22); /*elt*/
	local[22]= w;
	local[23]= local[15];
	local[24]= makeint((eusinteger_t)2L);
	ctx->vsp=local+25;
	w=(pointer)ELT(ctx,2,local+23); /*elt*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)XFORMAT(ctx,5,local+19); /*format*/
	local[19]= w;
	goto IF1810;
IF1809:
	local[19]= NIL;
IF1810:
	if (local[16]==NIL) goto IF1811;
	local[19]= argv[0];
	local[20]= fqv[266];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)XFORMAT(ctx,3,local+19); /*format*/
	local[19]= w;
	goto IF1812;
IF1811:
	local[19]= NIL;
IF1812:
	if (local[17]==NIL) goto IF1813;
	local[19]= argv[0];
	local[20]= fqv[267];
	local[21]= local[17];
	ctx->vsp=local+22;
	w=(pointer)XFORMAT(ctx,3,local+19); /*format*/
	local[19]= w;
	goto IF1814;
IF1813:
	local[19]= NIL;
IF1814:
	local[19]= argv[0];
	local[20]= fqv[268];
	ctx->vsp=local+21;
	w=(pointer)XFORMAT(ctx,2,local+19); /*format*/
	local[19]= argv[0];
	local[20]= fqv[269];
	ctx->vsp=local+21;
	w=(pointer)XFORMAT(ctx,2,local+19); /*format*/
	local[19]= argv[0];
	local[20]= fqv[270];
	ctx->vsp=local+21;
	w=(pointer)XFORMAT(ctx,2,local+19); /*format*/
	local[11]= argv[0];
	local[12]= fqv[271];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,2,local+11); /*format*/
	local[11]= makeint((eusinteger_t)0L);
	local[12]= makeint((eusinteger_t)0L);
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)MKFLTVEC(ctx,3,local+11); /*float-vector*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)0L);
	local[13]= local[10];
WHL1816:
	local[14]= local[12];
	w = local[13];
	if ((eusinteger_t)local[14] >= (eusinteger_t)w) goto WHX1817;
	local[14]= local[6];
	local[15]= local[12];
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(*ftab[67])(ctx,3,local+14,&ftab[67],fqv[183]); /*user::c-matrix-row*/
	local[14]= argv[0];
	local[15]= fqv[272];
	local[16]= local[0];
	local[17]= local[11];
	local[18]= makeint((eusinteger_t)0L);
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)TIMES(ctx,2,local+16); /***/
	local[16]= w;
	local[17]= local[0];
	local[18]= local[11];
	local[19]= makeint((eusinteger_t)1L);
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)TIMES(ctx,2,local+17); /***/
	local[17]= w;
	local[18]= local[0];
	local[19]= local[11];
	local[20]= makeint((eusinteger_t)2L);
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)TIMES(ctx,2,local+18); /***/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)XFORMAT(ctx,5,local+14); /*format*/
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(pointer)ADD1(ctx,1,local+14); /*1+*/
	local[12] = w;
	goto WHL1816;
WHX1817:
	local[14]= NIL;
BLK1818:
	w = NIL;
	local[11]= argv[0];
	local[12]= fqv[273];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,2,local+11); /*format*/
	if (local[2]==NIL) goto IF1819;
	if (local[9]==NIL) goto IF1819;
	local[11]= NIL;
	goto IF1820;
IF1819:
	local[11]= NIL;
IF1820:
	if (local[3]==NIL) goto IF1821;
	if (local[8]==NIL) goto IF1821;
	local[11]= NIL;
	goto IF1822;
IF1821:
	local[11]= NIL;
IF1822:
	local[11]= argv[0];
	local[12]= fqv[274];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,2,local+11); /*format*/
	local[11]= makeint((eusinteger_t)0L);
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)LENGTH(ctx,1,local+12); /*length*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)3L);
	ctx->vsp=local+14;
	w=(pointer)QUOTIENT(ctx,2,local+12); /*/*/
	local[12]= w;
WHL1824:
	local[13]= local[11];
	w = local[12];
	if ((eusinteger_t)local[13] >= (eusinteger_t)w) goto WHX1825;
	local[13]= argv[0];
	local[14]= fqv[275];
	local[15]= local[5];
	local[16]= local[11];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[16]);
		local[16]=(makeint(i * j));}
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[5];
	local[17]= local[11];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[17]);
		local[17]=(makeint(i * j));}
	w = makeint((eusinteger_t)1L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[17]= (pointer)((eusinteger_t)local[17] + (eusinteger_t)w);
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[16]= w;
	local[17]= local[5];
	local[18]= local[11];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)3L)); i=intval(local[18]);
		local[18]=(makeint(i * j));}
	w = makeint((eusinteger_t)2L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[18]= (pointer)((eusinteger_t)local[18] + (eusinteger_t)w);
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)XFORMAT(ctx,5,local+13); /*format*/
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(pointer)ADD1(ctx,1,local+13); /*1+*/
	local[11] = w;
	goto WHL1824;
WHX1825:
	local[13]= NIL;
BLK1826:
	w = NIL;
	local[11]= argv[0];
	local[12]= fqv[276];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,2,local+11); /*format*/
	local[0]= w;
BLK1798:
	ctx->vsp=local; return(local[0]);}

/*write-wrl-from-glvertices*/
static pointer F986write_wrl_from_glvertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1828:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= *(ovafptr(argv[1],fqv[217]));
	local[2]= argv[0];
	local[3]= fqv[277];
	local[4]= fqv[278];
	ctx->vsp=local+5;
	w=(*ftab[91])(ctx,3,local+2,&ftab[91],fqv[279]); /*open*/
	local[2]= w;
	ctx->vsp=local+3;
	w = makeclosure(codevec,quotevec,UWP1829,env,argv,local);
	local[3]=(pointer)(ctx->protfp); local[4]=w;
	ctx->protfp=(struct protectframe *)(local+3);
	local[5]= local[2];
	local[6]= fqv[280];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,2,local+5); /*format*/
	local[5]= local[2];
	local[6]= fqv[281];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,2,local+5); /*format*/
	local[5]= NIL;
	local[6]= local[1];
WHL1831:
	if (local[6]==NIL) goto WHX1832;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= (pointer)get_sym_func(fqv[282]);
	local[8]= local[2];
	local[9]= local[5];
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,4,local+7); /*apply*/
	goto WHL1831;
WHX1832:
	local[7]= NIL;
BLK1833:
	w = NIL;
	local[5]= local[2];
	local[6]= fqv[283];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,2,local+5); /*format*/
	local[5]= local[2];
	local[6]= fqv[284];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,2,local+5); /*format*/
	ctx->vsp=local+5;
	UWP1829(ctx,0,local+5,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK1827:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP1829(ctx,n,argv,env)
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

/* initializer*/
pointer ___irtgl(ctx,n,argv,env)
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
	local[0]= fqv[285];
	ctx->vsp=local+1;
	w=(*ftab[92])(ctx,1,local+0,&ftab[92],fqv[286]); /*require*/
	local[0]= fqv[287];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF1835;
	local[0]= fqv[288];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[289],w);
	goto IF1836;
IF1835:
	local[0]= fqv[290];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF1836:
	local[0]= NIL;
	ctx->vsp=local+1;
	w=(*ftab[93])(ctx,0,local+1,&ftab[93],fqv[291]); /*system::sysmod*/
	local[0] = w;
	local[1]= fqv[90];
	local[2]= fqv[292];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[294];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)10752L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[296];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)10753L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[297];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)10754L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[298];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32823L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[299];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32824L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[300];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32823L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[301];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32824L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[302];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32825L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[236];
	local[2]= fqv[303];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[245];
	local[2]= fqv[304];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[237];
	local[2]= fqv[305];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[306];
	local[2]= fqv[307];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[238];
	local[2]= fqv[308];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[239];
	local[2]= fqv[309];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[243];
	local[2]= fqv[310];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[311];
	local[2]= fqv[312];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[244];
	local[2]= fqv[313];
	local[3]= fqv[200];
	local[4]= fqv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[94])(ctx,4,local+2,&ftab[94],fqv[293]); /*make-foreign-code*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETFUNC(ctx,2,local+1); /*lisp::setfunc*/
	local[1]= fqv[314];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32884L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[315];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32885L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[316];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32888L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[317];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32889L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[318];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32886L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= fqv[319];
	local[2]= fqv[295];
	local[3]= makeint((eusinteger_t)32887L);
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[320],module,F975set_stereo_gl_attribute,fqv[321]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[322],module,F976reset_gl_attribute,fqv[323]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[324],module,F977delete_displaylist_id,fqv[325]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[326],module,F978transpose_image_rows,fqv[327]);
	local[0]= fqv[20];
	local[1]= loadglobal(fqv[328]);
	local[2]= fqv[329];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[64])(ctx,2,local+0,&ftab[64],fqv[177]); /*assoc*/
	if (w!=NIL) goto IF1837;
	local[0]= fqv[56];
	local[1]= loadglobal(fqv[328]);
	local[2]= fqv[329];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[64])(ctx,2,local+0,&ftab[64],fqv[177]); /*assoc*/
	local[0]= w;
	local[1]= fqv[20];
	ctx->vsp=local+2;
	w=(pointer)RPLACA(ctx,2,local+0); /*rplaca*/
	local[0]= w;
	goto IF1838;
IF1837:
	local[0]= NIL;
IF1838:
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1013glviewsurface_color,fqv[56],fqv[328],fqv[330]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1019glviewsurface_line_width,fqv[145],fqv[328],fqv[331]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1025glviewsurface_point_size,fqv[332],fqv[328],fqv[333]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1031glviewsurface_3d_point,fqv[334],fqv[328],fqv[335]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1043glviewsurface_3d_line,fqv[149],fqv[328],fqv[336]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1055glviewsurface_3d_lines,fqv[146],fqv[328],fqv[337]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1072glviewsurface_makecurrent,fqv[9],fqv[328],fqv[338]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1074glviewsurface_redraw,fqv[339],fqv[328],fqv[340]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1077glviewsurface_flush,fqv[34],fqv[328],fqv[341]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1079glviewsurface_write_to_image_file,fqv[342],fqv[328],fqv[343]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1085glviewsurface_getglimage,fqv[38],fqv[328],fqv[344]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[345],module,F979draw_globjects,fqv[346]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[347],module,F980draw_glbody,fqv[348]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[349],module,F981find_color,fqv[350]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[351],module,F982transparent,fqv[352]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1243polygon_draw_on,fqv[67],fqv[353],fqv[354]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1253line_draw_on,fqv[67],fqv[355],fqv[356]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1263faceset_set_color,fqv[254],fqv[66],fqv[357]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1270faceset_draw_on,fqv[67],fqv[66],fqv[358]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1285faceset_paste_texture_to_face,fqv[359],fqv[66],fqv[360]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1306coordinates_vertices,fqv[87],fqv[361],fqv[362]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1308coordinates_draw_on,fqv[67],fqv[361],fqv[363]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1329float_vector_vertices,fqv[87],fqv[140],fqv[364]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1331float_vector_draw_on,fqv[67],fqv[140],fqv[365]);
	local[0]= fqv[205];
	local[1]= fqv[366];
	local[2]= fqv[205];
	local[3]= fqv[367];
	local[4]= loadglobal(fqv[368]);
	local[5]= fqv[369];
	local[6]= fqv[370];
	local[7]= fqv[371];
	local[8]= NIL;
	local[9]= fqv[1];
	local[10]= NIL;
	local[11]= fqv[169];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[372];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[95])(ctx,13,local+2,&ftab[95],fqv[373]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1346glvertices_init,fqv[45],fqv[205],fqv[374]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1350glvertices_filename,fqv[260],fqv[205],fqv[375]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1356glvertices_set_color,fqv[254],fqv[205],fqv[376]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1362glvertices_get_meshinfo,fqv[179],fqv[205],fqv[377]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1369glvertices_set_meshinfo,fqv[181],fqv[205],fqv[378]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1380glvertices_get_material,fqv[379],fqv[205],fqv[380]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1384glvertices_set_material,fqv[381],fqv[205],fqv[382]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1388glvertices_actual_vertices,fqv[184],fqv[205],fqv[383]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1401glvertices_calc_bounding_box,fqv[186],fqv[205],fqv[384]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1403glvertices_vertices,fqv[87],fqv[205],fqv[385]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1407glvertices_reset_offset_from_parent,fqv[386],fqv[205],fqv[387]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1409glvertices_expand_vertices,fqv[388],fqv[205],fqv[389]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1416glvertices_expand_vertices_info,fqv[191],fqv[205],fqv[390]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1424glvertices_use_flat_shader,fqv[391],fqv[205],fqv[392]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1431glvertices_use_smooth_shader,fqv[393],fqv[205],fqv[394]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1440glvertices_calc_normals,fqv[395],fqv[205],fqv[396]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1482glvertices_mirror_axis,fqv[397],fqv[205],fqv[398]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1514glvertices_convert_to_faces,fqv[211],fqv[205],fqv[399]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1581glvertices_faces,fqv[86],fqv[205],fqv[400]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1583glvertices_convert_to_faceset,fqv[401],fqv[205],fqv[402]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1587glvertices_set_offset,fqv[189],fqv[205],fqv[403]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1600glvertices_convert_to_world,fqv[404],fqv[205],fqv[405]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1603glvertices_glvertices,fqv[406],fqv[205],fqv[407]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1621glvertices_append_glvertices,fqv[408],fqv[205],fqv[409]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1631glvertices_draw_on,fqv[67],fqv[205],fqv[410]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1634glvertices_draw,fqv[64],fqv[205],fqv[411]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1722glvertices_collision_check_objects,fqv[412],fqv[205],fqv[413]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1725glvertices_box,fqv[414],fqv[205],fqv[415]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1729glvertices_make_pqpmodel,fqv[416],fqv[205],fqv[417]);
	local[0]= fqv[418];
	local[1]= fqv[366];
	local[2]= fqv[418];
	local[3]= fqv[367];
	local[4]= loadglobal(fqv[419]);
	local[5]= fqv[369];
	local[6]= fqv[420];
	local[7]= fqv[371];
	local[8]= NIL;
	local[9]= fqv[1];
	local[10]= NIL;
	local[11]= fqv[169];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[372];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[95])(ctx,13,local+2,&ftab[95],fqv[373]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1763glbody_glvertices,fqv[406],fqv[418],fqv[421]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1766glbody_draw,fqv[64],fqv[418],fqv[422]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1770glbody_set_color,fqv[254],fqv[418],fqv[423]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[424],module,F983make_glvertices_from_faceset,fqv[425]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[426],module,F984make_glvertices_from_faces,fqv[427]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[282],module,F985_dump_wrl_shape,fqv[428]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[429],module,F986write_wrl_from_glvertices,fqv[430]);
	local[0]= fqv[431];
	local[1]= fqv[432];
	ctx->vsp=local+2;
	w=(*ftab[96])(ctx,2,local+0,&ftab[96],fqv[433]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<97; i++) ftab[i]=fcallx;
}
