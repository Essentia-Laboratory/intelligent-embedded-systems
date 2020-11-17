/* ./irtgeo.c :  entry=irtgeo */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtgeo.h"
#pragma init (register_irtgeo)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtgeo();
extern pointer build_quote_vector();
static int register_irtgeo()
  { add_module_initializer("___irtgeo", ___irtgeo);}

static pointer F62midcoords();
static pointer F63transform_coords();
static pointer F64orient_coords_to_axis();
static pointer F65face_to_triangle_aux();
static pointer F66face_to_triangle();
static pointer F67face_to_tessel_triangle();
static pointer F68face_to_triangle_rest_polygon();
static pointer F69face_to_triangle_make_simple();
static pointer F70body_to_faces();
static pointer F71body_to_triangles();
static pointer F72triangle_to_triangle();
static pointer F73make_sphere();
static pointer F74make_ring();
static pointer F75make_fan_cylinder();
static pointer F76x_of_cube();
static pointer F77y_of_cube();
static pointer F78z_of_cube();
static pointer F79height_of_cylinder();
static pointer F80radius_of_cylinder();
static pointer F81radius_of_sphere();
static pointer F82make_faceset_from_vertices();
static pointer F83matrix_to_euler_angle();
static pointer F84quaternion_from_two_vectors();

/*midcoords*/
static pointer F62midcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= fqv[0];
	local[1]= argv[0];
	local[2]= argv[1];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[2];
	local[4]= fqv[1];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[0])(ctx,3,local+1,&ftab[0],fqv[2]); /*midpoint*/
	local[1]= w;
	local[2]= fqv[3];
	local[3]= argv[0];
	local[4]= argv[1];
	local[5]= fqv[4];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= argv[2];
	local[6]= fqv[4];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[1])(ctx,3,local+3,&ftab[1],fqv[5]); /*user::midrot*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[2])(ctx,4,local+0,&ftab[2],fqv[6]); /*make-coords*/
	local[0]= w;
BLK85:
	ctx->vsp=local; return(local[0]);}

/*:worldcoords*/
static pointer M86line_worldcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[0];
	local[1]= makeflt(5.0000000000000000000000e-01);
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(*ftab[0])(ctx,3,local+1,&ftab[0],fqv[2]); /*midpoint*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[6]); /*make-coords*/
	local[0]= w;
BLK87:
	ctx->vsp=local; return(local[0]);}

/*:axis*/
static pointer M88coordinates_axis(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[7];
	local[2]= argv[2];
	local[3]= local[2];
	if (fqv[8]!=local[3]) goto IF91;
	local[3]= fqv[9];
	goto IF92;
IF91:
	local[3]= local[2];
	if (fqv[10]!=local[3]) goto IF93;
	local[3]= fqv[11];
	goto IF94;
IF93:
	local[3]= local[2];
	if (fqv[12]!=local[3]) goto IF95;
	local[3]= fqv[13];
	goto IF96;
IF95:
	local[3]= NIL;
IF96:
IF94:
IF92:
	w = local[3];
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK89:
	ctx->vsp=local; return(local[0]);}

/*:difference-position*/
static pointer M97coordinates_difference_position(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[14], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY99;
	local[0] = T;
KEY99:
	local[1]= argv[0];
	local[2]= fqv[15];
	local[3]= argv[2];
	local[4]= fqv[1];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= local[0];
	local[3]= local[2];
	w = fqv[16];
	if (memq(local[3],w)==NIL) goto IF101;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= w;
	goto IF102;
IF101:
	local[3]= local[2];
	w = fqv[17];
	if (memq(local[3],w)==NIL) goto IF103;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)1L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= w;
	goto IF104;
IF103:
	local[3]= local[2];
	w = fqv[18];
	if (memq(local[3],w)==NIL) goto IF105;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)2L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= w;
	goto IF106;
IF105:
	local[3]= local[2];
	w = fqv[19];
	if (memq(local[3],w)==NIL) goto IF107;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)1L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= w;
	goto IF108;
IF107:
	local[3]= local[2];
	w = fqv[20];
	if (memq(local[3],w)==NIL) goto IF109;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)1L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)2L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= w;
	goto IF110;
IF109:
	local[3]= local[2];
	w = fqv[21];
	if (memq(local[3],w)==NIL) goto IF111;
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)2L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)SETELT(ctx,3,local+3); /*setelt*/
	local[3]= w;
	goto IF112;
IF111:
	local[3]= NIL;
IF112:
IF110:
IF108:
IF106:
IF104:
IF102:
	w = local[3];
	w = local[1];
	local[0]= w;
BLK98:
	ctx->vsp=local; return(local[0]);}

/*:difference-rotation*/
static pointer M113coordinates_difference_rotation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[22], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY115;
	local[0] = T;
KEY115:
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,FLET116,env,argv,local);
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= local[0];
	local[7]= local[6];
	w = fqv[23];
	if (memq(local[7],w)==NIL) goto IF118;
	local[7]= argv[0];
	local[8]= fqv[24];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[4] = w;
	local[7]= argv[2];
	local[8]= fqv[24];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[5] = w;
	local[7]= argv[0];
	local[8]= fqv[4];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)TRANSPOSE(ctx,1,local+7); /*transpose*/
	local[7]= w;
	local[8]= local[4];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)VINNERPRODUCT(ctx,2,local+8); /*v.*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[3])(ctx,1,local+8,&ftab[3],fqv[25]); /*acos*/
	local[8]= w;
	local[9]= local[4];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+9); /*v**/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[4])(ctx,1,local+9,&ftab[4],fqv[26]); /*normalize-vector*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SCALEVEC(ctx,2,local+8); /*scale*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)TRANSFORM(ctx,2,local+7); /*transform*/
	local[3] = w;
	local[7]= local[3];
	goto IF119;
IF118:
	local[7]= local[6];
	w = fqv[27];
	if (memq(local[7],w)==NIL) goto IF120;
	local[7]= local[0];
	local[8]= local[7];
	if (fqv[28]!=local[8]) goto IF123;
	local[8]= fqv[8];
	goto IF124;
IF123:
	local[8]= local[7];
	if (fqv[29]!=local[8]) goto IF125;
	local[8]= fqv[10];
	goto IF126;
IF125:
	local[8]= local[7];
	if (fqv[30]!=local[8]) goto IF127;
	local[8]= fqv[12];
	goto IF128;
IF127:
	local[8]= NIL;
IF128:
IF126:
IF124:
	w = local[8];
	local[7]= w;
	local[8]= NIL;
	local[9]= NIL;
	local[10]= argv[0];
	local[11]= fqv[24];
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[8] = w;
	local[10]= argv[2];
	local[11]= fqv[24];
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[9] = w;
	local[10]= argv[0];
	local[11]= argv[2];
	local[12]= local[7];
	w = local[1];
	ctx->vsp=local+13;
	w=FLET116(ctx,3,local+10,w);
	if (w!=NIL) goto IF129;
	local[10]= local[9];
	ctx->vsp=local+11;
	w=(pointer)VMINUS(ctx,1,local+10); /*v-*/
	local[9] = w;
	local[10]= local[9];
	goto IF130;
IF129:
	local[10]= NIL;
IF130:
	local[10]= argv[0];
	local[11]= fqv[4];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)TRANSPOSE(ctx,1,local+10); /*transpose*/
	local[10]= w;
	local[11]= local[8];
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)VINNERPRODUCT(ctx,2,local+11); /*v.*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[3])(ctx,1,local+11,&ftab[3],fqv[25]); /*acos*/
	local[11]= w;
	local[12]= local[8];
	local[13]= local[9];
	ctx->vsp=local+14;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+12); /*v**/
	local[12]= w;
	ctx->vsp=local+13;
	w=(*ftab[4])(ctx,1,local+12,&ftab[4],fqv[26]); /*normalize-vector*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SCALEVEC(ctx,2,local+11); /*scale*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)TRANSFORM(ctx,2,local+10); /*transform*/
	local[3] = w;
	w = local[3];
	local[7]= w;
	goto IF121;
IF120:
	local[7]= local[6];
	w = fqv[31];
	if (memq(local[7],w)==NIL) goto IF131;
	local[7]= argv[2];
	local[8]= fqv[4];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= argv[2];
	local[10]= local[0];
	local[11]= local[10];
	if (fqv[32]!=local[11]) goto IF136;
	local[11]= fqv[10];
	goto IF137;
IF136:
	local[11]= local[10];
	if (fqv[33]!=local[11]) goto IF138;
	local[11]= fqv[12];
	goto IF139;
IF138:
	local[11]= local[10];
	if (fqv[34]!=local[11]) goto IF140;
	local[11]= fqv[8];
	goto IF141;
IF140:
	local[11]= NIL;
IF141:
IF139:
IF137:
	w = local[11];
	local[10]= w;
	w = local[1];
	ctx->vsp=local+11;
	w=FLET116(ctx,3,local+8,w);
	if (w!=NIL) goto IF133;
	local[8]= local[7];
	local[9]= makeflt(3.1415926535897931159980e+00);
	local[10]= local[0];
	local[11]= local[10];
	if (fqv[32]!=local[11]) goto IF143;
	local[11]= fqv[8];
	goto IF144;
IF143:
	local[11]= local[10];
	if (fqv[33]!=local[11]) goto IF145;
	local[11]= fqv[10];
	goto IF146;
IF145:
	local[11]= local[10];
	if (fqv[34]!=local[11]) goto IF147;
	local[11]= fqv[12];
	goto IF148;
IF147:
	local[11]= NIL;
IF148:
IF146:
IF144:
	w = local[11];
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)ROTMAT(ctx,3,local+8); /*rotate-matrix*/
	local[7] = w;
	local[8]= local[7];
	goto IF134;
IF133:
	local[8]= NIL;
IF134:
	local[8]= argv[0];
	local[9]= fqv[4];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)TRANSPOSE(ctx,1,local+8); /*transpose*/
	local[8]= w;
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)MATTIMES(ctx,2,local+8); /*m**/
	local[2] = w;
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(*ftab[5])(ctx,1,local+8,&ftab[5],fqv[35]); /*user::matrix-log*/
	local[3] = w;
	w = local[3];
	local[7]= w;
	goto IF132;
IF131:
	local[7]= local[6];
	if (fqv[36]!=local[7]) goto IF149;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)MKFLTVEC(ctx,3,local+7); /*float-vector*/
	local[3] = w;
	local[7]= local[3];
	goto IF150;
IF149:
	if (T==NIL) goto IF151;
	local[7]= argv[0];
	local[8]= fqv[4];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)TRANSPOSE(ctx,1,local+7); /*transpose*/
	local[7]= w;
	local[8]= argv[2];
	local[9]= fqv[4];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MATTIMES(ctx,2,local+7); /*m**/
	local[2] = w;
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(*ftab[5])(ctx,1,local+7,&ftab[5],fqv[35]); /*user::matrix-log*/
	local[3] = w;
	local[7]= local[3];
	goto IF152;
IF151:
	local[7]= NIL;
IF152:
IF150:
IF132:
IF121:
IF119:
	w = local[7];
	w = local[3];
	local[0]= w;
BLK114:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET116(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[24];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= argv[1];
	local[2]= fqv[24];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)VMINUS(ctx,1,local+2); /*v-*/
	local[2]= w;
	local[3]= local[0];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)VINNERPRODUCT(ctx,2,local+3); /*v.*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,1,local+3,&ftab[3],fqv[25]); /*acos*/
	local[3]= w;
	local[4]= local[0];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+4); /*v**/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[4])(ctx,1,local+4,&ftab[4],fqv[26]); /*normalize-vector*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SCALEVEC(ctx,2,local+3); /*scale*/
	local[3]= w;
	local[4]= local[0];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)VINNERPRODUCT(ctx,2,local+4); /*v.*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[3])(ctx,1,local+4,&ftab[3],fqv[25]); /*acos*/
	local[4]= w;
	local[5]= local[0];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+5); /*v**/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,1,local+5,&ftab[4],fqv[26]); /*normalize-vector*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SCALEVEC(ctx,2,local+4); /*scale*/
	local[4]= w;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)VNORM(ctx,1,local+5); /*norm*/
	local[5]= w;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)VNORM(ctx,1,local+6); /*norm*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LESSP(ctx,2,local+5); /*<*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:move-to*/
static pointer M153coordinates_move_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT156;}
	local[0]= fqv[37];
ENT156:
ENT155:
	if (n>4) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,1,local+3,&ftab[6],fqv[38]); /*coordinates-p*/
	if (w!=NIL) goto IF157;
	local[3]= fqv[39];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF158;
IF157:
	local[3]= NIL;
IF158:
	local[3]= local[0];
	w = fqv[40];
	if (memq(local[3],w)!=NIL) goto OR161;
	local[3]= local[0];
	if (argv[0]==local[3]) goto OR161;
	goto CON160;
OR161:
	local[3]= argv[0];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[41];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON159;
CON160:
	local[3]= local[0];
	w = fqv[42];
	if (memq(local[3],w)!=NIL) goto OR163;
	local[3]= local[0];
	local[4]= loadglobal(fqv[43]);
	ctx->vsp=local+5;
	w=(pointer)EQUAL(ctx,2,local+3); /*equal*/
	if (w!=NIL) goto OR163;
	goto CON162;
OR163:
	local[3]= argv[0];
	local[4]= fqv[41];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON159;
CON162:
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,1,local+3,&ftab[6],fqv[38]); /*coordinates-p*/
	if (w==NIL) goto CON164;
	local[3]= local[0];
	local[4]= fqv[44];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[45];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[46];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= local[2];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)F63transform_coords(ctx,3,local+3); /*transform-coords*/
	local[3]= argv[0];
	local[4]= fqv[41];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON159;
CON164:
	local[3]= NIL;
CON159:
	w = local[3];
	local[0]= w;
BLK154:
	ctx->vsp=local; return(local[0]);}

/*:transformation*/
static pointer M165coordinates_transformation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT168;}
	local[0]= fqv[37];
ENT168:
ENT167:
	if (n>4) maerror();
	local[1]= argv[2];
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	argv[2] = w;
	local[1]= argv[0];
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[46];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= NIL;
	local[4]= local[0];
	w = fqv[47];
	if (memq(local[4],w)!=NIL) goto OR171;
	local[4]= local[0];
	if (argv[0]==local[4]) goto OR171;
	goto CON170;
OR171:
	local[4]= local[2];
	local[5]= argv[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F63transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= w;
	goto CON169;
CON170:
	local[4]= local[0];
	w = fqv[48];
	if (memq(local[4],w)!=NIL) goto OR173;
	local[4]= local[0];
	if (loadglobal(fqv[43])==local[4]) goto OR173;
	goto CON172;
OR173:
	local[4]= argv[2];
	local[5]= local[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F63transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= w;
	goto CON169;
CON172:
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[6])(ctx,1,local+4,&ftab[6],fqv[38]); /*coordinates-p*/
	if (w==NIL) goto CON174;
	local[4]= local[0];
	local[5]= fqv[44];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[3] = w;
	local[4]= argv[2];
	local[5]= local[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F63transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= local[3];
	local[5]= fqv[46];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F63transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= local[2];
	local[5]= local[3];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F63transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= w;
	goto CON169;
CON174:
	local[4]= argv[0];
	local[5]= fqv[49];
	local[6]= fqv[50];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,4,local+4); /*send*/
	local[4]= w;
	goto CON169;
CON175:
	local[4]= NIL;
CON169:
	w = local[2];
	local[0]= w;
BLK166:
	ctx->vsp=local; return(local[0]);}

/*:transform*/
static pointer M176coordinates_transform(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT179;}
	local[0]= fqv[37];
ENT179:
ENT178:
	if (n>4) maerror();
	local[1]= local[0];
	w = fqv[51];
	if (memq(local[1],w)!=NIL) goto OR182;
	local[1]= local[0];
	if (argv[0]==local[1]) goto OR182;
	goto CON181;
OR182:
	local[1]= argv[0];
	local[2]= argv[2];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F63transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON180;
CON181:
	local[1]= local[0];
	w = fqv[52];
	if (memq(local[1],w)!=NIL) goto OR184;
	local[1]= local[0];
	if (loadglobal(fqv[43])==local[1]) goto OR184;
	goto CON183;
OR184:
	local[1]= argv[2];
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F63transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON180;
CON183:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[38]); /*coordinates-p*/
	if (w==NIL) goto CON185;
	local[1]= local[0];
	local[2]= fqv[46];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F63transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= argv[2];
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F63transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= local[0];
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F63transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON180;
CON185:
	local[1]= argv[0];
	local[2]= fqv[49];
	local[3]= fqv[53];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON180;
CON186:
	local[1]= NIL;
CON180:
	local[1]= argv[0];
	local[2]= fqv[41];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK177:
	ctx->vsp=local; return(local[0]);}

/*:move-coords*/
static pointer M187coordinates_move_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0];
	local[1]= fqv[54];
	local[2]= argv[3];
	local[3]= fqv[55];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[44];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK188:
	ctx->vsp=local; return(local[0]);}

/*:worldcoords*/
static pointer M189cascaded_coords_worldcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[7]==NIL) goto IF191;
	if (argv[0]->c.obj.iv[3]==NIL) goto IF193;
	local[0]= argv[0]->c.obj.iv[3];
	local[1]= fqv[44];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+3;
	w=(pointer)F63transform_coords(ctx,3,local+0); /*transform-coords*/
	local[0]= w;
	goto IF194;
IF193:
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= fqv[56];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
IF194:
	local[0]= argv[0];
	local[1]= fqv[57];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	argv[0]->c.obj.iv[7] = NIL;
	local[0]= argv[0]->c.obj.iv[7];
	goto IF192;
IF191:
	local[0]= NIL;
IF192:
	w = argv[0]->c.obj.iv[5];
	local[0]= w;
BLK190:
	ctx->vsp=local; return(local[0]);}

/*:transformation*/
static pointer M195cascaded_coords_transformation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT198;}
	local[0]= fqv[37];
ENT198:
ENT197:
	if (n>4) maerror();
	local[1]= argv[2];
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= fqv[44];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[46];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= local[0];
	w = fqv[58];
	if (memq(local[6],w)!=NIL) goto OR201;
	local[6]= local[0];
	if (argv[0]==local[6]) goto OR201;
	goto CON200;
OR201:
	local[6]= local[3];
	local[7]= local[1];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F63transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= w;
	goto CON199;
CON200:
	local[6]= local[0];
	w = fqv[59];
	if (memq(local[6],w)!=NIL) goto OR203;
	local[6]= local[0];
	if (argv[0]->c.obj.iv[3]==local[6]) goto OR203;
	goto CON202;
OR203:
	local[6]= argv[0];
	local[7]= *(ovafptr(argv[1],fqv[60]));
	local[8]= fqv[46];
	ctx->vsp=local+9;
	w=(pointer)SENDMESSAGE(ctx,3,local+6); /*send-message*/
	local[4] = w;
	local[6]= local[1];
	local[7]= local[4];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)F63transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= local[3];
	local[7]= local[4];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)F63transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= argv[0];
	local[7]= local[4];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)F63transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= w;
	goto CON199;
CON202:
	local[6]= local[0];
	w = fqv[61];
	if (memq(local[6],w)!=NIL) goto OR205;
	local[6]= local[0];
	local[7]= loadglobal(fqv[43]);
	ctx->vsp=local+8;
	w=(pointer)EQUAL(ctx,2,local+6); /*equal*/
	if (w!=NIL) goto OR205;
	goto CON204;
OR205:
	local[6]= local[1];
	local[7]= local[3];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F63transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= w;
	goto CON199;
CON204:
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(*ftab[6])(ctx,1,local+6,&ftab[6],fqv[38]); /*coordinates-p*/
	if (w==NIL) goto CON206;
	local[6]= local[0];
	local[7]= fqv[44];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[5] = w;
	local[6]= local[3];
	local[7]= local[5];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F63transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= local[1];
	local[7]= local[3];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F63transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= local[5];
	local[7]= fqv[46];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[3];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F63transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= w;
	goto CON199;
CON206:
	local[6]= argv[0];
	local[7]= fqv[49];
	local[8]= fqv[62];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= w;
	goto CON199;
CON207:
	local[6]= NIL;
CON199:
	w = local[6];
	local[0]= w;
BLK196:
	ctx->vsp=local; return(local[0]);}

/*:transform*/
static pointer M208cascaded_coords_transform(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT211;}
	local[0]= fqv[37];
ENT211:
ENT210:
	if (n>4) maerror();
	local[1]= local[0];
	w = fqv[63];
	if (memq(local[1],w)!=NIL) goto OR214;
	local[1]= local[0];
	if (argv[0]==local[1]) goto OR214;
	goto CON213;
OR214:
	local[1]= argv[0];
	local[2]= argv[2];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F63transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON212;
CON213:
	local[1]= local[0];
	w = fqv[64];
	if (memq(local[1],w)!=NIL) goto OR216;
	local[1]= local[0];
	if (argv[0]->c.obj.iv[3]==local[1]) goto OR216;
	goto CON215;
OR216:
	local[1]= argv[2];
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F63transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON212;
CON215:
	local[1]= local[0];
	w = fqv[65];
	if (memq(local[1],w)!=NIL) goto OR218;
	local[1]= local[0];
	local[2]= loadglobal(fqv[43]);
	ctx->vsp=local+3;
	w=(pointer)EQUAL(ctx,2,local+1); /*equal*/
	if (w!=NIL) goto OR218;
	goto CON217;
OR218:
	local[1]= argv[0];
	local[2]= fqv[45];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= argv[2];
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= local[1];
	local[3]= fqv[46];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,3,local+2); /*transform-coords*/
	local[1]= w;
	goto CON212;
CON217:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[38]); /*coordinates-p*/
	if (w==NIL) goto CON219;
	local[1]= argv[0];
	local[2]= fqv[45];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= local[0];
	local[3]= fqv[46];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= argv[2];
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= local[0];
	local[3]= fqv[44];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= local[1];
	local[3]= fqv[46];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,3,local+2); /*transform-coords*/
	local[1]= w;
	goto CON212;
CON219:
	local[1]= argv[0];
	local[2]= fqv[49];
	local[3]= fqv[66];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON212;
CON220:
	local[1]= NIL;
CON212:
	local[1]= argv[0];
	local[2]= fqv[41];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK209:
	ctx->vsp=local; return(local[0]);}

/*:move-to*/
static pointer M221cascaded_coords_move_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT224;}
	local[0]= fqv[37];
ENT224:
ENT223:
	if (n>4) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,1,local+3,&ftab[6],fqv[38]); /*coordinates-p*/
	if (w!=NIL) goto IF225;
	local[3]= fqv[67];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF226;
IF225:
	local[3]= NIL;
IF226:
	local[3]= local[0];
	w = fqv[68];
	if (memq(local[3],w)!=NIL) goto OR229;
	local[3]= local[0];
	if (argv[0]==local[3]) goto OR229;
	goto CON228;
OR229:
	local[3]= argv[0];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[41];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON227;
CON228:
	local[3]= local[0];
	w = fqv[69];
	if (memq(local[3],w)!=NIL) goto OR231;
	local[3]= local[0];
	if (argv[0]->c.obj.iv[3]==local[3]) goto OR231;
	goto CON230;
OR231:
	local[3]= argv[0];
	local[4]= fqv[41];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON227;
CON230:
	local[3]= local[0];
	w = fqv[70];
	if (memq(local[3],w)!=NIL) goto OR233;
	local[3]= local[0];
	local[4]= loadglobal(fqv[43]);
	ctx->vsp=local+5;
	w=(pointer)EQUAL(ctx,2,local+3); /*equal*/
	if (w!=NIL) goto OR233;
	goto CON232;
OR233:
	local[3]= argv[0];
	local[4]= fqv[45];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[46];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[41];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON227;
CON232:
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,1,local+3,&ftab[6],fqv[38]); /*coordinates-p*/
	if (w==NIL) goto CON234;
	local[3]= local[0];
	local[4]= fqv[44];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F63transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[45];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[46];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= local[2];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)F63transform_coords(ctx,3,local+3); /*transform-coords*/
	local[3]= argv[0];
	local[4]= fqv[41];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON227;
CON234:
	local[3]= NIL;
CON227:
	w = local[3];
	local[0]= w;
BLK222:
	ctx->vsp=local; return(local[0]);}

/*transform-coords*/
static pointer F63transform_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT237;}
	local[0]= argv[0];
	local[1]= fqv[71];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= loadglobal(fqv[72]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[41];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[7])(ctx,1,local+4,&ftab[7],fqv[73]); /*unit-matrix*/
	local[4]= w;
	local[5]= loadglobal(fqv[74]);
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,2,local+5); /*instantiate*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	w = local[1];
	local[0]= w;
ENT237:
ENT236:
	if (n>3) maerror();
	local[1]= argv[0];
	if (local[0]!=local[1]) goto IF239;
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[1]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)TRANSFORM(ctx,2,local+2); /*transform*/
	local[2]= w;
	local[3]= local[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)VPLUS(ctx,3,local+1); /*v+*/
	local[1]= w;
	goto IF240;
IF239:
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[1]->c.obj.iv[2];
	local[4]= local[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)TRANSFORM(ctx,3,local+2); /*transform*/
	local[2]= w;
	local[3]= local[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)VPLUS(ctx,3,local+1); /*v+*/
	local[1]= w;
IF240:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[1]->c.obj.iv[1];
	local[3]= local[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(*ftab[8])(ctx,3,local+1,&ftab[8],fqv[75]); /*user::rotm3**/
	w = local[0];
	local[0]= w;
BLK235:
	ctx->vsp=local; return(local[0]);}

/*:rotate-vector*/
static pointer M241coordinates_rotate_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT244;}
	local[0]= NIL;
ENT244:
ENT243:
	if (n>4) maerror();
	if (local[0]==NIL) goto IF245;
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[2];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)TRANSFORM(ctx,3,local+1); /*transform*/
	local[1]= w;
	goto IF246;
IF245:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)TRANSFORM(ctx,2,local+1); /*transform*/
	local[1]= w;
IF246:
	w = local[1];
	local[0]= w;
BLK242:
	ctx->vsp=local; return(local[0]);}

/*:inverse-rotate-vector*/
static pointer M247coordinates_inverse_rotate_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT250;}
	local[0]= NIL;
ENT250:
ENT249:
	if (n>4) maerror();
	if (local[0]==NIL) goto IF251;
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)TRANSFORM(ctx,3,local+1); /*transform*/
	local[1]= w;
	goto IF252;
IF251:
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)TRANSFORM(ctx,2,local+1); /*transform*/
	local[1]= w;
IF252:
	w = local[1];
	local[0]= w;
BLK248:
	ctx->vsp=local; return(local[0]);}

/*:rotate-vector*/
static pointer M253cascaded_coords_rotate_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT256;}
	local[0]= NIL;
ENT256:
ENT255:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[7];
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK254:
	ctx->vsp=local; return(local[0]);}

/*:inverse-rotate-vector*/
static pointer M257cascaded_coords_inverse_rotate_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT260;}
	local[0]= NIL;
ENT260:
ENT259:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[76];
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK258:
	ctx->vsp=local; return(local[0]);}

/*:inverse-transform-vector*/
static pointer M261coordinates_inverse_transform_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT266;}
	local[0]= NIL;
ENT266:
	if (n>=5) { local[1]=(argv[4]); goto ENT265;}
	local[1]= NIL;
ENT265:
	if (n>=6) { local[2]=(argv[5]); goto ENT264;}
	local[2]= NIL;
ENT264:
ENT263:
	if (n>6) maerror();
	if (local[2]==NIL) goto IF267;
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)TRANSPOSE(ctx,2,local+3); /*transpose*/
	local[3]= w;
	goto IF268;
IF267:
	local[3]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)TRANSPOSE(ctx,1,local+3); /*transpose*/
	local[3]= w;
IF268:
	if (local[0]==NIL) goto IF269;
	if (local[1]==NIL) goto IF269;
	if (local[2]==NIL) goto IF269;
	local[4]= local[3];
	local[5]= argv[2];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)TRANSFORM(ctx,3,local+4); /*transform*/
	local[4]= w;
	local[5]= local[3];
	local[6]= argv[0]->c.obj.iv[2];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)TRANSFORM(ctx,3,local+5); /*transform*/
	local[5]= w;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)VMINUS(ctx,3,local+4); /*v-*/
	local[4]= w;
	goto IF270;
IF269:
	local[4]= local[3];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)TRANSFORM(ctx,2,local+4); /*transform*/
	local[4]= w;
	local[5]= local[3];
	local[6]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+7;
	w=(pointer)TRANSFORM(ctx,2,local+5); /*transform*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)VMINUS(ctx,2,local+4); /*v-*/
	local[4]= w;
IF270:
	w = local[4];
	local[0]= w;
BLK262:
	ctx->vsp=local; return(local[0]);}

/*:inverse-transform-vector*/
static pointer M271cascaded_coords_inverse_transform_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT276;}
	local[0]= NIL;
ENT276:
	if (n>=5) { local[1]=(argv[4]); goto ENT275;}
	local[1]= NIL;
ENT275:
	if (n>=6) { local[2]=(argv[5]); goto ENT274;}
	local[2]= NIL;
ENT274:
ENT273:
	if (n>6) maerror();
	local[3]= argv[0];
	local[4]= fqv[44];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[15];
	local[5]= argv[2];
	local[6]= local[0];
	local[7]= local[1];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,6,local+3); /*send*/
	local[0]= w;
BLK272:
	ctx->vsp=local; return(local[0]);}

/*orient-coords-to-axis*/
static pointer F64orient_coords_to_axis(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT280;}
	local[0]= fqv[12];
ENT280:
	if (n>=4) { local[1]=(argv[3]); goto ENT279;}
	local[1]= loadglobal(fqv[77]);
ENT279:
ENT278:
	if (n>4) maerror();
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(*ftab[4])(ctx,1,local+2,&ftab[4],fqv[26]); /*normalize-vector*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= fqv[7];
	local[5]= local[0];
	local[6]= local[5];
	if (fqv[8]!=local[6]) goto IF282;
	local[6]= fqv[78];
	goto IF283;
IF282:
	local[6]= local[5];
	if (fqv[79]!=local[6]) goto IF284;
	local[6]= fqv[80];
	goto IF285;
IF284:
	local[6]= local[5];
	if (fqv[10]!=local[6]) goto IF286;
	local[6]= fqv[81];
	goto IF287;
IF286:
	local[6]= local[5];
	if (fqv[82]!=local[6]) goto IF288;
	local[6]= fqv[83];
	goto IF289;
IF288:
	local[6]= local[5];
	if (fqv[12]!=local[6]) goto IF290;
	local[6]= fqv[84];
	goto IF291;
IF290:
	local[6]= local[5];
	if (fqv[85]!=local[6]) goto IF292;
	local[6]= fqv[86];
	goto IF293;
IF292:
	if (T==NIL) goto IF294;
	local[6]= local[0];
	goto IF295;
IF294:
	local[6]= NIL;
IF295:
IF293:
IF291:
IF289:
IF287:
IF285:
IF283:
	w = local[6];
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	local[4]= local[3];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+4); /*v**/
	local[4]= w;
	local[5]= local[2];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)VINNERPRODUCT(ctx,2,local+5); /*v.*/
	local[5]= w;
	local[6]= local[5];
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON297;
	w = argv[0];
	ctx->vsp=local+6;
	local[0]=w;
	goto BLK277;
	goto CON296;
CON297:
	local[6]= local[5];
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON298;
	local[6]= NIL;
	local[7]= fqv[88];
	local[8]= fqv[89];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
WHL301:
	if (local[7]==NIL) goto WHX302;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= local[3];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)VINNERPRODUCT(ctx,2,local+8); /*v.*/
	local[8]= w;
	local[9]= local[8];
	ctx->vsp=local+10;
	w=(pointer)ABS(ctx,1,local+9); /*abs*/
	local[9]= w;
	local[10]= makeflt(1.0000000000000000000000e+00);
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(*ftab[9])(ctx,3,local+9,&ftab[9],fqv[87]); /*eps=*/
	if (w!=NIL) goto IF305;
	local[9]= local[6];
	local[10]= local[8];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)SCALEVEC(ctx,2,local+10); /*scale*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)VMINUS(ctx,2,local+9); /*v-*/
	local[4] = w;
	w = NIL;
	ctx->vsp=local+9;
	local[6]=w;
	goto BLK299;
	goto IF306;
IF305:
	local[9]= NIL;
IF306:
	w = local[9];
	goto WHL301;
WHX302:
	local[8]= NIL;
BLK303:
	w = NIL;
	local[6]= w;
BLK299:
	goto CON296;
CON298:
	local[6]= T;
	if (local[6]!=NIL) goto CON296;
CON307:
	local[6]= NIL;
CON296:
	local[6]= argv[0];
	local[7]= fqv[90];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(*ftab[3])(ctx,1,local+8,&ftab[3],fqv[25]); /*acos*/
	local[8]= w;
	local[9]= local[4];
	local[10]= fqv[91];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,5,local+6); /*send*/
	w = argv[0];
	local[0]= w;
BLK277:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M308bodyset_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST310:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[92], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY311;
	local[3]= NIL;
	local[4]= fqv[93];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)ADDRESS(ctx,1,local+5); /*system:address*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,3,local+3); /*format*/
	local[3]= w;
	local[4]= fqv[94];
	ctx->vsp=local+5;
	w=(pointer)INTERN(ctx,2,local+3); /*intern*/
	local[1] = w;
KEY311:
	if (n & (1<<1)) goto KEY312;
	local[2] = NIL;
KEY312:
	local[3]= (pointer)get_sym_func(fqv[95]);
	local[4]= argv[0];
	local[5]= *(ovafptr(argv[1],fqv[60]));
	local[6]= fqv[96];
	local[7]= fqv[97];
	local[8]= local[1];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)APPLY(ctx,7,local+3); /*apply*/
	local[3]= argv[2];
	local[4]= fqv[98];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	argv[0]->c.obj.iv[8] = local[2];
	if (argv[0]->c.obj.iv[8]==NIL) goto IF313;
	local[3]= argv[0];
	local[4]= fqv[99];
	w=argv[0]->c.obj.iv[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto IF314;
IF313:
	local[3]= NIL;
IF314:
	local[3]= argv[0];
	local[4]= fqv[44];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	w = argv[0];
	local[0]= w;
BLK309:
	ctx->vsp=local; return(local[0]);}

/*:bodies*/
static pointer M315bodyset_bodies(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST317:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[8];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[10])(ctx,2,local+1,&ftab[10],fqv[100]); /*user::forward-message-to-all*/
	local[0]= w;
BLK316:
	ctx->vsp=local; return(local[0]);}

/*:faces*/
static pointer M318bodyset_faces(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[8];
	local[1]= fqv[101];
	ctx->vsp=local+2;
	w=(*ftab[11])(ctx,2,local+0,&ftab[11],fqv[102]); /*send-all*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[12])(ctx,1,local+0,&ftab[12],fqv[103]); /*flatten*/
	local[0]= w;
BLK319:
	ctx->vsp=local; return(local[0]);}

/*:worldcoords*/
static pointer M320bodyset_worldcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[7]==NIL) goto IF322;
	local[0]= argv[0];
	local[1]= *(ovafptr(argv[1],fqv[60]));
	local[2]= fqv[44];
	ctx->vsp=local+3;
	w=(pointer)SENDMESSAGE(ctx,3,local+0); /*send-message*/
	local[0]= NIL;
	local[1]= argv[0]->c.obj.iv[8];
WHL325:
	if (local[1]==NIL) goto WHX326;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	local[3]= fqv[44];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	goto WHL325;
WHX326:
	local[2]= NIL;
BLK327:
	w = NIL;
	local[0]= w;
	goto IF323;
IF322:
	local[0]= NIL;
IF323:
	w = argv[0]->c.obj.iv[5];
	local[0]= w;
BLK321:
	ctx->vsp=local; return(local[0]);}

/*:draw-on*/
static pointer M329bodyset_draw_on(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST331:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[8];
WHL333:
	if (local[2]==NIL) goto WHX334;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= (pointer)get_sym_func(fqv[104]);
	local[4]= local[1];
	local[5]= fqv[105];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)APPLY(ctx,4,local+3); /*apply*/
	goto WHL333;
WHX334:
	local[3]= NIL;
BLK335:
	w = NIL;
	local[0]= w;
BLK330:
	ctx->vsp=local; return(local[0]);}

/*face-to-triangle-aux*/
static pointer F65face_to_triangle_aux(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	if (argv[0]!=NIL) goto CON339;
	local[0]= NIL;
	goto CON338;
CON339:
	local[0]= argv[0];
	local[1]= fqv[106];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	if (makeint((eusinteger_t)3L)!=local[0]) goto CON340;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto CON338;
CON340:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F66face_to_triangle(ctx,1,local+0); /*face-to-triangle*/
	local[0]= w;
	goto CON338;
CON341:
	local[0]= NIL;
CON338:
	w = local[0];
	local[0]= w;
BLK337:
	ctx->vsp=local; return(local[0]);}

/*face-to-triangle*/
static pointer F66face_to_triangle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[107]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	if (w==NIL) goto IF343;
	local[0]= argv[0];
	local[1]= fqv[108];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	if (w==NIL) goto IF343;
	local[0]= argv[0];
	local[1]= fqv[108];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	if (w==NIL) goto IF345;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F69face_to_triangle_make_simple(ctx,1,local+0); /*face-to-triangle-make-simple*/
	argv[0] = w;
	local[0]= argv[0];
	goto IF346;
IF345:
	local[0]= NIL;
IF346:
	goto IF344;
IF343:
	local[0]= NIL;
IF344:
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F67face_to_tessel_triangle(ctx,2,local+1); /*face-to-tessel-triangle*/
	local[1]= w;
WHL347:
	if (local[1]!=NIL) goto WHX348;
	local[2]= local[0];
	local[3]= argv[0];
	local[4]= fqv[109];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)GREQP(ctx,2,local+2); /*>=*/
	if (w==NIL) goto IF350;
	w = NIL;
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK342;
	goto IF351;
IF350:
	local[2]= NIL;
IF351:
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)F67face_to_tessel_triangle(ctx,2,local+2); /*face-to-tessel-triangle*/
	local[1] = w;
	goto WHL347;
WHX348:
	local[2]= NIL;
BLK349:
	local[2]= local[1];
	local[3]= argv[0];
	local[4]= local[0];
	local[5]= local[1];
	local[6]= fqv[106];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)F68face_to_triangle_rest_polygon(ctx,3,local+3); /*face-to-triangle-rest-polygon*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)F65face_to_triangle_aux(ctx,1,local+3); /*face-to-triangle-aux*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK342:
	ctx->vsp=local; return(local[0]);}

/*face-to-tessel-triangle*/
static pointer F67face_to_tessel_triangle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[109];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= argv[1];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SUB1(ctx,1,local+2); /*1-*/
	local[2]= w;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)MOD(ctx,2,local+2); /*mod*/
	local[2]= w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)NTH(ctx,2,local+2); /*nth*/
	local[2]= w;
	local[3]= argv[1];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)MOD(ctx,2,local+3); /*mod*/
	local[3]= w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)NTH(ctx,2,local+3); /*nth*/
	local[3]= w;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[4]= w;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)MOD(ctx,2,local+4); /*mod*/
	local[4]= w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)NTH(ctx,2,local+4); /*nth*/
	local[4]= w;
	local[5]= local[3];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)VMINUS(ctx,2,local+5); /*v-*/
	local[5]= w;
	local[6]= local[4];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)VMINUS(ctx,2,local+6); /*v-*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+5); /*v**/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[110];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)VINNERPRODUCT(ctx,2,local+5); /*v.*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)GREATERP(ctx,2,local+5); /*>*/
	if (w!=NIL) goto IF353;
	w = NIL;
	ctx->vsp=local+5;
	local[0]=w;
	goto BLK352;
	goto IF354;
IF353:
	local[5]= NIL;
IF354:
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO355,env,argv,local);
	local[6]= local[2];
	local[7]= local[3];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,3,local+6); /*list*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MAPCAR(ctx,2,local+5); /*mapcar*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[13])(ctx,1,local+5,&ftab[13],fqv[111]); /*make-face-from-vertices*/
	local[5]= w;
	local[6]= local[2];
	local[7]= local[3];
	local[8]= local[4];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(*ftab[14])(ctx,2,local+8,&ftab[14],fqv[112]); /*remove*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[14])(ctx,2,local+7,&ftab[14],fqv[112]); /*remove*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[14])(ctx,2,local+6,&ftab[14],fqv[112]); /*remove*/
	local[6]= w;
	local[7]= NIL;
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO357,env,argv,local);
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[15])(ctx,2,local+8,&ftab[15],fqv[113]); /*every*/
	local[8]= w;
	if (w==NIL) goto AND356;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
	w = makeint((eusinteger_t)3L);
	if ((eusinteger_t)local[8] <= (eusinteger_t)w) goto IF358;
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO360,env,argv,local);
	local[9]= loadglobal(fqv[107]);
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,1,local+9); /*instantiate*/
	local[9]= w;
	local[10]= local[9];
	local[11]= fqv[96];
	local[12]= fqv[109];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(pointer)BUTLAST(ctx,1,local+13); /*butlast*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,4,local+10); /*send*/
	w = local[9];
	local[9]= w;
	local[10]= fqv[106];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[15])(ctx,2,local+8,&ftab[15],fqv[113]); /*every*/
	local[8]= w;
	goto IF359;
IF358:
	local[8]= T;
IF359:
AND356:
	local[7] = local[8];
	if (local[7]==NIL) goto IF362;
	local[8]= local[5];
	goto IF363;
IF362:
	local[8]= NIL;
IF363:
	w = local[8];
	local[0]= w;
BLK352:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO355(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO364,env,argv,local);
	local[2]= env->c.clo.env1[0];
	local[3]= fqv[106];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MAPCAN(ctx,2,local+1); /*mapcan*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO364(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	local[1]= argv[0];
	local[2]= fqv[109];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	if (memq(local[0],w)==NIL) goto IF365;
	local[0]= loadglobal(fqv[114]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[96];
	local[3]= fqv[115];
	local[4]= argv[0];
	local[5]= fqv[115];
	local[6]= env->c.clo.env0->c.clo.env1[0];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[116];
	local[6]= argv[0];
	local[7]= fqv[116];
	local[8]= env->c.clo.env0->c.clo.env1[0];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,6,local+1); /*send*/
	w = local[0];
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto IF366;
IF365:
	local[0]= NIL;
IF366:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO357(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[117];
	local[1]= env->c.clo.env2[5];
	local[2]= fqv[118];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = ((((w)==(local[0])?T:NIL))==NIL?T:NIL);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO360(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env2[2];
	local[1]= env->c.clo.env2[4];
	ctx->vsp=local+2;
	w=(*ftab[16])(ctx,2,local+0,&ftab[16],fqv[119]); /*make-line*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[120];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= ((local[1])==NIL?T:NIL);
	if (local[2]!=NIL) goto OR368;
	local[2]= local[1];
	local[2]= ((fqv[121])==(local[2])?T:NIL);
	if (local[2]!=NIL) goto OR368;
	local[2]= local[1];
	local[2]= ((fqv[122])==(local[2])?T:NIL);
	if (local[2]!=NIL) goto OR368;
	w = local[1];
	local[2]= (iscons(w)?T:NIL);
	if (local[2]==NIL) goto AND369;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[2]= ((fqv[123])==(local[2])?T:NIL);
	if (local[2]==NIL) goto AND369;
	local[2]= makeflt(0.0000000000000000000000e+00);
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= makeflt(1.0000000000000000000000e+00);
	local[5]= makeflt(-1.0000000000000000208167e-03);
	ctx->vsp=local+6;
	w=(*ftab[17])(ctx,4,local+2,&ftab[17],fqv[124]); /*eps-in-range*/
	local[2]= ((w)==NIL?T:NIL);
	if (local[2]==NIL) goto AND369;
	local[2]= makeflt(0.0000000000000000000000e+00);
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= makeflt(1.0000000000000000000000e+00);
	local[5]= makeflt(-1.0000000000000000208167e-03);
	ctx->vsp=local+6;
	w=(*ftab[17])(ctx,4,local+2,&ftab[17],fqv[124]); /*eps-in-range*/
	local[2]= ((w)==NIL?T:NIL);
AND369:
OR368:
	w = local[2];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*face-to-triangle-rest-polygon*/
static pointer F68face_to_triangle_rest_polygon(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[109];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)BUTLAST(ctx,1,local+0); /*butlast*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= argv[1];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)MOD(ctx,2,local+2); /*mod*/
	local[2]= w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)NTH(ctx,2,local+2); /*nth*/
	local[2]= w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(*ftab[14])(ctx,2,local+2,&ftab[14],fqv[112]); /*remove*/
	local[2]= w;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	w = makeint((eusinteger_t)2L);
	if ((eusinteger_t)local[3] > (eusinteger_t)w) goto IF371;
	w = NIL;
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK370;
	goto IF372;
IF371:
	local[3]= NIL;
IF372:
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO373,env,argv,local);
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,2,local+3); /*mapcar*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[13])(ctx,1,local+3,&ftab[13],fqv[111]); /*make-face-from-vertices*/
	local[0]= w;
BLK370:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO373(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO374,env,argv,local);
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO375,env,argv,local);
	local[3]= env->c.clo.env1[0];
	local[4]= fqv[106];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[2]= w;
	local[3]= env->c.clo.env1[2];
	ctx->vsp=local+4;
	w=(pointer)APPEND(ctx,2,local+2); /*append*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MAPCAN(ctx,2,local+1); /*mapcan*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO374(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	local[1]= argv[0];
	local[2]= fqv[109];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	if (memq(local[0],w)==NIL) goto IF376;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto IF377;
IF376:
	local[0]= NIL;
IF377:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO375(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= loadglobal(fqv[114]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[96];
	local[3]= fqv[115];
	local[4]= argv[0];
	local[5]= fqv[115];
	local[6]= env->c.clo.env0->c.clo.env1[0];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[116];
	local[6]= argv[0];
	local[7]= fqv[116];
	local[8]= env->c.clo.env0->c.clo.env1[0];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,6,local+1); /*send*/
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*face-to-triangle-make-simple*/
static pointer F69face_to_triangle_make_simple(ctx,n,argv,env)
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
WHL380:
	local[7]= argv[0];
	local[8]= fqv[108];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[0] = w;
	if (local[0]==NIL) goto WHX381;
	local[3] = NIL;
	local[7]= NIL;
	local[8]= local[0];
WHL384:
	if (local[8]==NIL) goto WHX385;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8] = (w)->c.cons.cdr;
	w = local[9];
	local[7] = w;
	local[9]= (pointer)get_sym_func(fqv[125]);
	local[10]= argv[0];
	local[11]= fqv[109];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.cdr;
	local[11]= local[7];
	local[12]= fqv[109];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.cdr;
	ctx->vsp=local+12;
	w=(*ftab[18])(ctx,3,local+9,&ftab[18],fqv[126]); /*user::mapjoin*/
	local[2] = w;
	local[9]= NIL;
	local[10]= local[2];
WHL389:
	if (local[10]==NIL) goto WHX390;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10] = (w)->c.cons.cdr;
	w = local[11];
	local[9] = w;
	ctx->vsp=local+11;
	local[11]= makeclosure(codevec,quotevec,CLO393,env,argv,local);
	local[12]= local[0];
	local[13]= fqv[106];
	ctx->vsp=local+14;
	w=(*ftab[11])(ctx,2,local+12,&ftab[11],fqv[102]); /*send-all*/
	local[12]= w;
	local[13]= argv[0];
	local[14]= fqv[106];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)APPEND(ctx,2,local+12); /*append*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(*ftab[12])(ctx,1,local+12,&ftab[12],fqv[103]); /*flatten*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)MAPCAN(ctx,2,local+11); /*mapcan*/
	local[6] = w;
	if (local[6]!=NIL) goto IF394;
	if (local[3]==NIL) goto IF396;
	local[11]= local[3];
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.cdr;
	ctx->vsp=local+14;
	w=(pointer)VDISTANCE(ctx,2,local+12); /*distance*/
	local[1] = w;
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)GREATERP(ctx,2,local+11); /*>*/
	if (w==NIL) goto IF398;
	local[3] = local[1];
	local[4] = local[9];
	local[5] = local[7];
	local[11]= local[5];
	goto IF399;
IF398:
	local[11]= NIL;
IF399:
	goto IF397;
IF396:
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.cdr;
	ctx->vsp=local+13;
	w=(pointer)VDISTANCE(ctx,2,local+11); /*distance*/
	local[3] = w;
	local[4] = local[9];
	local[5] = local[7];
	local[11]= local[5];
IF397:
	goto IF395;
IF394:
	local[11]= NIL;
IF395:
	goto WHL389;
WHX390:
	local[11]= NIL;
BLK391:
	w = NIL;
	goto WHL384;
WHX385:
	local[9]= NIL;
BLK386:
	w = NIL;
	if (local[3]==NIL) goto IF400;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	local[8]= argv[0];
	local[9]= fqv[109];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[19])(ctx,2,local+7,&ftab[19],fqv[127]); /*position*/
	local[7]= w;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.cdr;
	local[9]= local[5];
	local[10]= fqv[109];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[19])(ctx,2,local+8,&ftab[19],fqv[127]); /*position*/
	local[8]= w;
	local[9]= loadglobal(fqv[107]);
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,1,local+9); /*instantiate*/
	local[9]= w;
	local[10]= local[9];
	local[11]= fqv[96];
	local[12]= fqv[109];
	local[13]= argv[0];
	local[14]= fqv[109];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	local[14]= makeint((eusinteger_t)0L);
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)SUBSEQ(ctx,3,local+13); /*subseq*/
	local[13]= w;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(pointer)COPYOBJ(ctx,1,local+14); /*copy-object*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	local[14]= w;
	local[15]= local[5];
	local[16]= fqv[109];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)BUTLAST(ctx,1,local+15); /*butlast*/
	local[15]= w;
	local[16]= local[8];
	ctx->vsp=local+17;
	w=(pointer)SUBSEQ(ctx,2,local+15); /*subseq*/
	local[15]= w;
	local[16]= local[5];
	local[17]= fqv[109];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	local[17]= makeint((eusinteger_t)0L);
	local[18]= local[8];
	ctx->vsp=local+19;
	w=(pointer)SUBSEQ(ctx,3,local+16); /*subseq*/
	local[16]= w;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.cdr;
	ctx->vsp=local+18;
	w=(pointer)COPYOBJ(ctx,1,local+17); /*copy-object*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	local[17]= w;
	local[18]= argv[0];
	local[19]= fqv[109];
	ctx->vsp=local+20;
	w=(pointer)SEND(ctx,2,local+18); /*send*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)BUTLAST(ctx,1,local+18); /*butlast*/
	local[18]= w;
	local[19]= local[7];
	ctx->vsp=local+20;
	w=(pointer)SUBSEQ(ctx,2,local+18); /*subseq*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)NCONC(ctx,6,local+13); /*nconc*/
	local[13]= w;
	local[14]= fqv[108];
	local[15]= local[5];
	local[16]= local[0];
	ctx->vsp=local+17;
	w=(*ftab[14])(ctx,2,local+15,&ftab[14],fqv[112]); /*remove*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,6,local+10); /*send*/
	w = local[9];
	argv[0] = w;
	w = argv[0];
	local[7]= w;
	goto IF401;
IF400:
	local[7]= fqv[128];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(*ftab[20])(ctx,2,local+7,&ftab[20],fqv[129]); /*warn*/
	w = NIL;
	ctx->vsp=local+7;
	local[7]=w;
	goto BLK382;
IF401:
	goto WHL380;
WHX381:
	local[7]= NIL;
BLK382:
	w = argv[0];
	local[0]= w;
BLK379:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO393(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= *(ovafptr(argv[0],fqv[130]));
	local[1]= *(ovafptr(argv[0],fqv[131]));
	w=env->c.clo.env2[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=env->c.clo.env2[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	ctx->vsp=local+4;
	w=(pointer)LINEINTERSECTION3(ctx,4,local+0); /*line-intersection3*/
	local[0]= w;
	local[1]= makeflt(0.0000000000000000000000e+00);
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+4;
	w=(pointer)LSEQP(ctx,3,local+1); /*<=*/
	if (w==NIL) goto IF403;
	local[1]= makeflt(0.0000000000000000000000e+00);
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,3,local+1); /*<*/
	if (w==NIL) goto IF403;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	local[1]= w;
	goto IF404;
IF403:
	local[1]= NIL;
IF404:
	w = local[1];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*body-to-faces*/
static pointer F70body_to_faces(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= NIL;
	ctx->vsp=local+2;
	w=(pointer)F71body_to_triangles(ctx,2,local+0); /*body-to-triangles*/
	local[0]= w;
BLK405:
	ctx->vsp=local; return(local[0]);}

/*body-to-triangles*/
static pointer F71body_to_triangles(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT408;}
	local[0]= makeint((eusinteger_t)50L);
ENT408:
ENT407:
	if (n>2) maerror();
	local[1]= NIL;
	local[2]= NIL;
	storeglobal(fqv[132],local[2]);
	local[2]= NIL;
	storeglobal(fqv[133],local[2]);
	local[2]= NIL;
	local[3]= argv[0];
	local[4]= fqv[101];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
WHL410:
	if (local[3]==NIL) goto WHX411;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= local[1];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO414,env,argv,local);
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F66face_to_triangle(ctx,1,local+6); /*face-to-triangle*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MAPCAN(ctx,2,local+5); /*mapcan*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)NCONC(ctx,2,local+4); /*nconc*/
	local[1] = w;
	goto WHL410;
WHX411:
	local[4]= NIL;
BLK412:
	w = NIL;
	local[2]= loadglobal(fqv[134]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[96];
	local[5]= fqv[101];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	w = local[2];
	local[0]= w;
BLK406:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO414(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	if (env->c.clo.env2[0]==NIL) goto IF416;
	local[0]= argv[0];
	local[1]= env->c.clo.env2[0];
	ctx->vsp=local+2;
	w=(pointer)F72triangle_to_triangle(ctx,2,local+0); /*triangle-to-triangle*/
	local[0]= w;
	goto IF417;
IF416:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
IF417:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*triangle-to-triangle*/
static pointer F72triangle_to_triangle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT420;}
	local[0]= makeint((eusinteger_t)50L);
ENT420:
ENT419:
	if (n>2) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= NIL;
	local[10]= argv[0];
	local[11]= fqv[106];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
WHL422:
	if (local[10]==NIL) goto WHX423;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10] = (w)->c.cons.cdr;
	w = local[11];
	local[9] = w;
	local[11]= local[9];
	w = loadglobal(fqv[133]);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	storeglobal(fqv[133],local[11]);
	goto WHL422;
WHX423:
	local[11]= NIL;
BLK424:
	w = NIL;
	ctx->vsp=local+9;
	local[9]= makeclosure(codevec,quotevec,FLET426,env,argv,local);
	local[10]= argv[0];
	local[11]= fqv[106];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	local[11]= makeclosure(codevec,quotevec,CLO427,env,argv,local);
	local[12]= (pointer)get_sym_func(fqv[135]);
	ctx->vsp=local+13;
	w=(*ftab[21])(ctx,3,local+10,&ftab[21],fqv[136]); /*find-extream*/
	local[1] = w;
	if (local[0]==NIL) goto OR430;
	local[10]= local[1];
	local[11]= fqv[137];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)LESSP(ctx,2,local+10); /*<*/
	if (w!=NIL) goto OR430;
	goto IF428;
OR430:
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[0]=w;
	goto BLK418;
	goto IF429;
IF428:
	local[10]= local[1];
	local[11]= fqv[109];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= argv[0];
	local[12]= fqv[109];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.cdr;
	local[12]= fqv[138];
	local[13]= (pointer)get_sym_func(fqv[139]);
	ctx->vsp=local+14;
	w=(*ftab[22])(ctx,4,local+10,&ftab[22],fqv[140]); /*set-exclusive-or*/
	local[2] = w;
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)LENGTH(ctx,1,local+10); /*length*/
	local[10]= w;
	if (makeint((eusinteger_t)1L)==local[10]) goto IF431;
	local[10]= fqv[141];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(*ftab[20])(ctx,2,local+10,&ftab[20],fqv[129]); /*warn*/
	local[10]= w;
	goto IF432;
IF431:
	local[10]= NIL;
IF432:
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w = local[9];
	ctx->vsp=local+11;
	w=FLET426(ctx,1,local+10,w);
	local[3] = w;
	local[10]= local[1];
	local[11]= fqv[115];
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[10]= w;
	w = local[9];
	ctx->vsp=local+11;
	w=FLET426(ctx,1,local+10,w);
	local[5] = w;
	local[10]= local[1];
	local[11]= fqv[116];
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[10]= w;
	w = local[9];
	ctx->vsp=local+11;
	w=FLET426(ctx,1,local+10,w);
	local[6] = w;
	local[10]= local[1];
	local[11]= fqv[142];
	local[12]= makeflt(5.0000000000000000000000e-01);
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[7] = w;
	local[10]= local[7];
	local[11]= loadglobal(fqv[132]);
	local[12]= fqv[138];
	local[13]= (pointer)get_sym_func(fqv[143]);
	ctx->vsp=local+14;
	w=(*ftab[23])(ctx,4,local+10,&ftab[23],fqv[144]); /*member*/
	if (w==NIL) goto IF433;
	local[10]= local[7];
	local[11]= loadglobal(fqv[132]);
	local[12]= fqv[138];
	local[13]= (pointer)get_sym_func(fqv[143]);
	ctx->vsp=local+14;
	w=(*ftab[23])(ctx,4,local+10,&ftab[23],fqv[144]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.car;
	local[10]= local[7];
	goto IF434;
IF433:
	local[10]= NIL;
IF434:
	local[10]= local[7];
	w = loadglobal(fqv[132]);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	storeglobal(fqv[132],local[10]);
	local[10]= local[7];
	w = local[9];
	ctx->vsp=local+11;
	w=FLET426(ctx,1,local+10,w);
	local[4] = w;
	local[10]= local[5];
	local[11]= local[4];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,3,local+10); /*list*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[13])(ctx,1,local+10,&ftab[13],fqv[111]); /*make-face-from-vertices*/
	local[10]= w;
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)F72triangle_to_triangle(ctx,2,local+10); /*triangle-to-triangle*/
	local[10]= w;
	local[11]= local[6];
	local[12]= local[3];
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,3,local+11); /*list*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[13])(ctx,1,local+11,&ftab[13],fqv[111]); /*make-face-from-vertices*/
	local[11]= w;
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)F72triangle_to_triangle(ctx,2,local+11); /*triangle-to-triangle*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)NCONC(ctx,2,local+10); /*nconc*/
	local[10]= w;
IF429:
	w = local[10];
	local[0]= w;
BLK418:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET426(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO435,env,argv,local);
	local[2]= loadglobal(fqv[133]);
	ctx->vsp=local+3;
	w=(pointer)MAPCAN(ctx,2,local+1); /*mapcan*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO435(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	local[1]= argv[0];
	local[2]= fqv[109];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	if (memq(local[0],w)==NIL) goto IF436;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto IF437;
IF436:
	local[0]= NIL;
IF437:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO427(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[137];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*make-sphere*/
static pointer F73make_sphere(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST439:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[24])(ctx,1,local+1,&ftab[24],fqv[145]); /*make-icosahedron*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[25])(ctx,1,local+1,&ftab[25],fqv[146]); /*make-gdome*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[41];
	local[4]= (pointer)get_sym_func(fqv[6]);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,2,local+4); /*apply*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= local[1];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= local[1];
	local[3]= fqv[147];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= fqv[148];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)NCONC(ctx,2,local+2); /*nconc*/
	w = local[1];
	local[0]= w;
BLK438:
	ctx->vsp=local; return(local[0]);}

/*make-ring*/
static pointer F74make_ring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST441:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[149], &argv[2], n-2, local+1, 0);
	if (n & (1<<0)) goto KEY442;
	local[1] = makeint((eusinteger_t)16L);
KEY442:
	local[2]= NIL;
	local[3]= makeflt(6.2831853071795862319959e+00);
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)QUOTIENT(ctx,2,local+3); /*/*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[1];
WHL444:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX445;
	local[6]= argv[1];
	local[7]= local[4];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)COS(ctx,1,local+7); /*cos*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)TIMES(ctx,2,local+6); /***/
	local[6]= w;
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)PLUS(ctx,2,local+6); /*+*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= argv[1];
	local[9]= local[4];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SIN(ctx,1,local+9); /*sin*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[6]= w;
	w = local[2];
	ctx->vsp=local+7;
	local[2] = cons(ctx,local[6],w);
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL444;
WHX445:
	local[6]= NIL;
BLK446:
	w = NIL;
	local[4]= (pointer)get_sym_func(fqv[150]);
	local[5]= local[2];
	local[6]= fqv[151];
	local[7]= local[1];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,5,local+4); /*apply*/
	local[0]= w;
BLK440:
	ctx->vsp=local; return(local[0]);}

/*make-fan-cylinder*/
static pointer F75make_fan_cylinder(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST448:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[152], &argv[2], n-2, local+1, 0);
	if (n & (1<<0)) goto KEY449;
	local[1] = makeint((eusinteger_t)12L);
KEY449:
	if (n & (1<<1)) goto KEY450;
	local[2] = makeflt(6.2831853071795862319959e+00);
KEY450:
	if (n & (1<<2)) goto KEY451;
	local[4]= local[2];
	local[5]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[3] = w;
KEY451:
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO452,env,argv,local);
	local[5]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO453,env,argv,local);
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)PLUS(ctx,2,local+7); /*+*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[26])(ctx,1,local+7,&ftab[26],fqv[153]); /*make-list*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MAPCAR(ctx,2,local+6); /*mapcar*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MAPCAR(ctx,2,local+4); /*mapcar*/
	local[4]= w;
	local[5]= local[2];
	local[6]= makeflt(6.2831853071795862319959e+00);
	ctx->vsp=local+7;
	w=(*ftab[9])(ctx,2,local+5,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto IF454;
	local[5]= local[4];
	ctx->vsp=local+6;
	w=(pointer)REVERSE(ctx,1,local+5); /*reverse*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.cdr;
	goto IF455;
IF454:
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)REVERSE(ctx,1,local+6); /*reverse*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
IF455:
	local[6]= argv[1];
	local[7]= fqv[154];
	local[8]= fqv[155];
	local[9]= argv[0];
	local[10]= argv[1];
	local[11]= local[1];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,5,local+8); /*list*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[27])(ctx,4,local+5,&ftab[27],fqv[156]); /*make-prism*/
	local[0]= w;
BLK447:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO452(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[2];
	local[2]= env->c.clo.env2[1];
	ctx->vsp=local+3;
	w=(pointer)QUOTIENT(ctx,2,local+1); /*/*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= env->c.clo.env2[3];
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,2,local+0); /*-*/
	local[0]= w;
	local[1]= env->c.clo.env1[0];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)COS(ctx,1,local+2); /*cos*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[1]= w;
	local[2]= env->c.clo.env1[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SIN(ctx,1,local+3); /*sin*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)TIMES(ctx,2,local+2); /***/
	local[2]= w;
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)MKFLTVEC(ctx,3,local+1); /*float-vector*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO453(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env2[5];
	ctx->vsp=local+1;
	w=(pointer)ADD1(ctx,1,local+0); /*1+*/
	env->c.clo.env2[5] = w;
	w = env->c.clo.env2[5];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*x-of-cube*/
static pointer F76x_of_cube(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[147];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[157];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[28])(ctx,2,local+1,&ftab[28],fqv[158]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK456:
	ctx->vsp=local; return(local[0]);}

/*y-of-cube*/
static pointer F77y_of_cube(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[147];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[157];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[28])(ctx,2,local+1,&ftab[28],fqv[158]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK457:
	ctx->vsp=local; return(local[0]);}

/*z-of-cube*/
static pointer F78z_of_cube(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[147];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[157];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[28])(ctx,2,local+1,&ftab[28],fqv[158]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK458:
	ctx->vsp=local; return(local[0]);}

/*height-of-cylinder*/
static pointer F79height_of_cylinder(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[147];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[155];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[28])(ctx,2,local+1,&ftab[28],fqv[158]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK459:
	ctx->vsp=local; return(local[0]);}

/*radius-of-cylinder*/
static pointer F80radius_of_cylinder(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[147];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[155];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[28])(ctx,2,local+1,&ftab[28],fqv[158]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK460:
	ctx->vsp=local; return(local[0]);}

/*radius-of-sphere*/
static pointer F81radius_of_sphere(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[147];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[148];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[28])(ctx,2,local+1,&ftab[28],fqv[158]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK461:
	ctx->vsp=local; return(local[0]);}

/*make-faceset-from-vertices*/
static pointer F82make_faceset_from_vertices(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
WHL463:
	if (argv[0]==NIL) goto WHX464;
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)PRINT(ctx,1,local+1); /*print*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[1];
	local[1]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[2];
	local[2]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[3];
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[13])(ctx,1,local+1,&ftab[13],fqv[111]); /*make-face-from-vertices*/
	local[1]= w;
	w = local[0];
	ctx->vsp=local+2;
	local[0] = cons(ctx,local[1],w);
	goto WHL463;
WHX464:
	local[1]= NIL;
BLK465:
	local[1]= loadglobal(fqv[134]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[96];
	local[4]= fqv[101];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	w = local[1];
	local[0]= w;
BLK462:
	ctx->vsp=local; return(local[0]);}

/*matrix-to-euler-angle*/
static pointer F83matrix_to_euler_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= makeflt(9.9999999999999974298988e-07);
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[29])(ctx,1,local+4,&ftab[29],fqv[159]); /*matrixp*/
	if (w==NIL) goto AND473;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[30])(ctx,1,local+4,&ftab[30],fqv[160]); /*array-dimensions*/
	local[4]= w;
	local[5]= fqv[161];
	ctx->vsp=local+6;
	w=(pointer)EQUAL(ctx,2,local+4); /*equal*/
	if (w==NIL) goto AND473;
	goto IF471;
AND473:
	local[4]= fqv[162];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)SIGERROR(ctx,2,local+4); /*error*/
	local[4]= w;
	goto IF472;
IF471:
	local[4]= NIL;
IF472:
	local[4]= argv[1];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= local[4];
	if (fqv[8]!=local[5]) goto IF475;
	local[5]= argv[1];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= local[5];
	if (fqv[8]!=local[6]) goto IF478;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[3])(ctx,1,local+6,&ftab[3],fqv[25]); /*acos*/
	local[1] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON481;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON480;
CON481:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON482;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON480;
CON482:
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[6];
	if (fqv[12]!=local[7]) goto IF485;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[7]= local[2];
	goto IF486;
IF485:
	local[7]= local[6];
	if (fqv[10]!=local[7]) goto IF487;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[7]= local[2];
	goto IF488;
IF487:
	if (T==NIL) goto IF489;
	local[7]= fqv[164];
	ctx->vsp=local+8;
	w=(pointer)SIGERROR(ctx,1,local+7); /*error*/
	local[7]= w;
	goto IF490;
IF489:
	local[7]= NIL;
IF490:
IF488:
IF486:
	w = local[7];
	local[6]= w;
	goto CON480;
CON483:
	local[6]= NIL;
CON480:
	goto IF479;
IF478:
	local[6]= local[5];
	if (fqv[10]!=local[6]) goto IF491;
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	if (fqv[12]==local[6]) goto IF493;
	local[6]= fqv[165];
	ctx->vsp=local+7;
	w=(pointer)SIGERROR(ctx,1,local+6); /*error*/
	local[6]= w;
	goto IF494;
IF493:
	local[6]= NIL;
IF494:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[32])(ctx,1,local+6,&ftab[32],fqv[166]); /*asin*/
	local[1] = makeflt(-(fltval(w)));
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON496;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON495;
CON496:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON497;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON495;
CON497:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON495;
CON498:
	local[6]= NIL;
CON495:
	goto IF492;
IF491:
	local[6]= local[5];
	if (fqv[12]!=local[6]) goto IF499;
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	if (fqv[10]==local[6]) goto IF501;
	local[6]= fqv[167];
	ctx->vsp=local+7;
	w=(pointer)SIGERROR(ctx,1,local+6); /*error*/
	local[6]= w;
	goto IF502;
IF501:
	local[6]= NIL;
IF502:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[32])(ctx,1,local+6,&ftab[32],fqv[166]); /*asin*/
	local[1] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON504;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
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
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON503;
CON504:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON505;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON503;
CON505:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON503;
CON506:
	local[6]= NIL;
CON503:
	goto IF500;
IF499:
	local[6]= NIL;
IF500:
IF492:
IF479:
	w = local[6];
	local[5]= w;
	goto IF476;
IF475:
	local[5]= local[4];
	if (fqv[10]!=local[5]) goto IF507;
	local[5]= argv[1];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= local[5];
	if (fqv[10]!=local[6]) goto IF510;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[3])(ctx,1,local+6,&ftab[3],fqv[25]); /*acos*/
	local[1] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON513;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON512;
CON513:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON514;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON512;
CON514:
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[6];
	if (fqv[8]!=local[7]) goto IF517;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[7]= local[2];
	goto IF518;
IF517:
	local[7]= local[6];
	if (fqv[12]!=local[7]) goto IF519;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[7]= local[2];
	goto IF520;
IF519:
	if (T==NIL) goto IF521;
	local[7]= fqv[168];
	ctx->vsp=local+8;
	w=(pointer)SIGERROR(ctx,1,local+7); /*error*/
	local[7]= w;
	goto IF522;
IF521:
	local[7]= NIL;
IF522:
IF520:
IF518:
	w = local[7];
	local[6]= w;
	goto CON512;
CON515:
	local[6]= NIL;
CON512:
	goto IF511;
IF510:
	local[6]= local[5];
	if (fqv[12]!=local[6]) goto IF523;
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	if (fqv[8]==local[6]) goto IF525;
	local[6]= fqv[169];
	ctx->vsp=local+7;
	w=(pointer)SIGERROR(ctx,1,local+6); /*error*/
	local[6]= w;
	goto IF526;
IF525:
	local[6]= NIL;
IF526:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[32])(ctx,1,local+6,&ftab[32],fqv[166]); /*asin*/
	local[1] = makeflt(-(fltval(w)));
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON528;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON527;
CON528:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON529;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON527;
CON529:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
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
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON527;
CON530:
	local[6]= NIL;
CON527:
	goto IF524;
IF523:
	local[6]= local[5];
	if (fqv[8]!=local[6]) goto IF531;
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	if (fqv[12]==local[6]) goto IF533;
	local[6]= fqv[170];
	ctx->vsp=local+7;
	w=(pointer)SIGERROR(ctx,1,local+6); /*error*/
	local[6]= w;
	goto IF534;
IF533:
	local[6]= NIL;
IF534:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[32])(ctx,1,local+6,&ftab[32],fqv[166]); /*asin*/
	local[1] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON536;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON535;
CON536:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON537;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON535;
CON537:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON535;
CON538:
	local[6]= NIL;
CON535:
	goto IF532;
IF531:
	local[6]= NIL;
IF532:
IF524:
IF511:
	w = local[6];
	local[5]= w;
	goto IF508;
IF507:
	local[5]= local[4];
	if (fqv[12]!=local[5]) goto IF539;
	local[5]= argv[1];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= local[5];
	if (fqv[12]!=local[6]) goto IF542;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[3])(ctx,1,local+6,&ftab[3],fqv[25]); /*acos*/
	local[1] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON545;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON544;
CON545:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON546;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
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
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON544;
CON546:
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[6];
	if (fqv[10]!=local[7]) goto IF549;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[7]= local[2];
	goto IF550;
IF549:
	local[7]= local[6];
	if (fqv[8]!=local[7]) goto IF551;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[31])(ctx,2,local+7,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[7]= local[2];
	goto IF552;
IF551:
	if (T==NIL) goto IF553;
	local[7]= fqv[171];
	ctx->vsp=local+8;
	w=(pointer)SIGERROR(ctx,1,local+7); /*error*/
	local[7]= w;
	goto IF554;
IF553:
	local[7]= NIL;
IF554:
IF552:
IF550:
	w = local[7];
	local[6]= w;
	goto CON544;
CON547:
	local[6]= NIL;
CON544:
	goto IF543;
IF542:
	local[6]= local[5];
	if (fqv[8]!=local[6]) goto IF555;
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	if (fqv[10]==local[6]) goto IF557;
	local[6]= fqv[172];
	ctx->vsp=local+7;
	w=(pointer)SIGERROR(ctx,1,local+6); /*error*/
	local[6]= w;
	goto IF558;
IF557:
	local[6]= NIL;
IF558:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[32])(ctx,1,local+6,&ftab[32],fqv[166]); /*asin*/
	local[1] = makeflt(-(fltval(w)));
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON560;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON559;
CON560:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON561;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON559;
CON561:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON559;
CON562:
	local[6]= NIL;
CON559:
	goto IF556;
IF555:
	local[6]= local[5];
	if (fqv[10]!=local[6]) goto IF563;
	local[6]= argv[1];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	if (fqv[8]==local[6]) goto IF565;
	local[6]= fqv[173];
	ctx->vsp=local+7;
	w=(pointer)SIGERROR(ctx,1,local+6); /*error*/
	local[6]= w;
	goto IF566;
IF565:
	local[6]= NIL;
IF566:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[32])(ctx,1,local+6,&ftab[32],fqv[166]); /*asin*/
	local[1] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON568;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON567;
CON568:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= makeflt(-1.0000000000000000000000e+00);
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[9])(ctx,3,local+6,&ftab[9],fqv[87]); /*eps=*/
	if (w==NIL) goto CON569;
	local[0] = makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)2L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON567;
CON569:
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[0] = w;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[31])(ctx,2,local+6,&ftab[31],fqv[163]); /*user::atan2*/
	local[2] = w;
	local[6]= local[2];
	goto CON567;
CON570:
	local[6]= NIL;
CON567:
	goto IF564;
IF563:
	local[6]= NIL;
IF564:
IF556:
IF543:
	w = local[6];
	local[5]= w;
	goto IF540;
IF539:
	local[5]= NIL;
IF540:
IF508:
IF476:
	w = local[5];
	local[4]= local[0];
	local[5]= local[1];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,3,local+4); /*list*/
	local[0]= w;
BLK470:
	ctx->vsp=local; return(local[0]);}

/*quaternion-from-two-vectors*/
static pointer F84quaternion_from_two_vectors(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[4])(ctx,1,local+0,&ftab[4],fqv[26]); /*normalize-vector*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,1,local+1,&ftab[4],fqv[26]); /*normalize-vector*/
	local[1]= w;
	local[2]= local[1];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)VINNERPRODUCT(ctx,2,local+2); /*v.*/
	local[2]= w;
	local[3]= local[0];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)VCROSSPRODUCT(ctx,2,local+3); /*v**/
	local[3]= w;
	local[4]= makeint((eusinteger_t)2L);
	local[5]= makeint((eusinteger_t)1L);
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SQRT(ctx,1,local+4); /*sqrt*/
	local[4]= w;
	local[5]= makeflt(1.0000000000000000000000e+00);
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= local[5];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)SCALEVEC(ctx,2,local+6); /*scale*/
	local[6]= w;
	local[7]= makeflt(5.0000000000000000000000e-01);
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	local[8]= local[7];
	local[9]= local[6];
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	local[10]= local[6];
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	local[11]= local[6];
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,4,local+8); /*float-vector*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,1,local+8,&ftab[4],fqv[26]); /*normalize-vector*/
	local[0]= w;
BLK571:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtgeo(ctx,n,argv,env)
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
	local[0]= fqv[174];
	ctx->vsp=local+1;
	w=(*ftab[33])(ctx,1,local+0,&ftab[33],fqv[175]); /*require*/
	local[0]= fqv[176];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF572;
	local[0]= fqv[177];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[178],w);
	goto IF573;
IF572:
	local[0]= fqv[179];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF573:
	local[0]= fqv[180];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[181];
	local[1]= fqv[182];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF574;
	local[0]= fqv[181];
	local[1]= fqv[182];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[181];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF576;
	local[0]= fqv[181];
	local[1]= fqv[183];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeflt(9.8066499999999941792339e+03);
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,3,local+2); /*float-vector*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF577;
IF576:
	local[0]= NIL;
IF577:
	local[0]= fqv[181];
	goto IF575;
IF574:
	local[0]= NIL;
IF575:
	ctx->vsp=local+0;
	compfun(ctx,fqv[184],module,F62midcoords,fqv[185]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M86line_worldcoords,fqv[44],fqv[186],fqv[187]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88coordinates_axis,fqv[24],fqv[72],fqv[188]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M97coordinates_difference_position,fqv[189],fqv[72],fqv[190]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M113coordinates_difference_rotation,fqv[191],fqv[72],fqv[192]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M153coordinates_move_to,fqv[193],fqv[72],fqv[194]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M165coordinates_transformation,fqv[55],fqv[72],fqv[195]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M176coordinates_transform,fqv[54],fqv[72],fqv[196]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M187coordinates_move_coords,fqv[197],fqv[72],fqv[198]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M189cascaded_coords_worldcoords,fqv[44],fqv[199],fqv[200]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M195cascaded_coords_transformation,fqv[55],fqv[199],fqv[201]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M208cascaded_coords_transform,fqv[54],fqv[199],fqv[202]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M221cascaded_coords_move_to,fqv[193],fqv[199],fqv[203]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[204],module,F63transform_coords,fqv[205]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M241coordinates_rotate_vector,fqv[7],fqv[72],fqv[206]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M247coordinates_inverse_rotate_vector,fqv[76],fqv[72],fqv[207]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M253cascaded_coords_rotate_vector,fqv[7],fqv[199],fqv[208]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M257cascaded_coords_inverse_rotate_vector,fqv[76],fqv[199],fqv[209]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M261coordinates_inverse_transform_vector,fqv[15],fqv[72],fqv[210]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M271cascaded_coords_inverse_transform_vector,fqv[15],fqv[199],fqv[211]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[212],module,F64orient_coords_to_axis,fqv[213]);
	local[0]= fqv[214];
	local[1]= fqv[183];
	local[2]= fqv[214];
	local[3]= fqv[215];
	local[4]= loadglobal(fqv[199]);
	local[5]= fqv[216];
	local[6]= fqv[217];
	local[7]= fqv[218];
	local[8]= NIL;
	local[9]= fqv[219];
	local[10]= NIL;
	local[11]= fqv[220];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[221];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[34])(ctx,13,local+2,&ftab[34],fqv[222]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M308bodyset_init,fqv[96],fqv[214],fqv[223]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M315bodyset_bodies,fqv[224],fqv[214],fqv[225]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M318bodyset_faces,fqv[101],fqv[214],fqv[226]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M320bodyset_worldcoords,fqv[44],fqv[214],fqv[227]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M329bodyset_draw_on,fqv[105],fqv[214],fqv[228]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[229],module,F65face_to_triangle_aux,fqv[230]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[231],module,F66face_to_triangle,fqv[232]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[233],module,F67face_to_tessel_triangle,fqv[234]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[235],module,F68face_to_triangle_rest_polygon,fqv[236]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[237],module,F69face_to_triangle_make_simple,fqv[238]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[239],module,F70body_to_faces,fqv[240]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[241],module,F71body_to_triangles,fqv[242]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[243],module,F72triangle_to_triangle,fqv[244]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[245],module,F73make_sphere,fqv[246]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[247],module,F74make_ring,fqv[248]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[249],module,F75make_fan_cylinder,fqv[250]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[251],module,F76x_of_cube,fqv[252]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[253],module,F77y_of_cube,fqv[254]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[255],module,F78z_of_cube,fqv[256]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[257],module,F79height_of_cylinder,fqv[258]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[259],module,F80radius_of_cylinder,fqv[260]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[261],module,F81radius_of_sphere,fqv[262]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[263],module,F82make_faceset_from_vertices,fqv[264]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[265],module,F83matrix_to_euler_angle,fqv[266]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[267],module,F84quaternion_from_two_vectors,fqv[268]);
	local[0]= fqv[269];
	local[1]= fqv[270];
	ctx->vsp=local+2;
	w=(*ftab[35])(ctx,2,local+0,&ftab[35],fqv[271]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<36; i++) ftab[i]=fcallx;
}
