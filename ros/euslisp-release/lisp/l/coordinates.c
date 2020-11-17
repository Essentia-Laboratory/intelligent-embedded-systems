/* ./coordinates.c :  entry=coordinates */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "coordinates.h"
#pragma init (register_coordinates)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___coordinates();
extern pointer build_quote_vector();
static int register_coordinates()
  { add_module_initializer("___coordinates", ___coordinates);}

static pointer F80612coordinates_p();
static pointer F80632transform_coords();
static pointer F80634transform_coords_();
static pointer F80636transform_vector();
static pointer F80638make_coords();
static pointer F80640make_cascoords();
static pointer F80642coords();
static pointer F80644cascoords();
static pointer F80646wrt();
static pointer F80651coordinates_distance();

/*coordinates-p*/
static pointer F80612coordinates_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[0]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK80699:
	ctx->vsp=local; return(local[0]);}

/*:dimension*/
static pointer M80725coordinates_dimension(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
BLK80726:
	ctx->vsp=local; return(local[0]);}

/*:rot*/
static pointer M80742coordinates_rot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK80743:
	ctx->vsp=local; return(local[0]);}

/*:pos*/
static pointer M80758coordinates_pos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK80759:
	ctx->vsp=local; return(local[0]);}

/*:x-axis*/
static pointer M80774coordinates_x_axis(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[1]); /*matrix-row*/
	local[0]= w;
BLK80775:
	ctx->vsp=local; return(local[0]);}

/*:y-axis*/
static pointer M80792coordinates_y_axis(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[1]); /*matrix-row*/
	local[0]= w;
BLK80793:
	ctx->vsp=local; return(local[0]);}

/*:z-axis*/
static pointer M80809coordinates_z_axis(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= makeint((eusinteger_t)2L);
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[1]); /*matrix-row*/
	local[0]= w;
BLK80810:
	ctx->vsp=local; return(local[0]);}

/*:name*/
static pointer M80826coordinates_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT80830;}
	local[0]= NIL;
ENT80830:
ENT80829:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF80846;
	local[1]= argv[0];
	local[2]= local[0];
	local[3]= fqv[2];
	ctx->vsp=local+4;
	w=(pointer)PUTPROP(ctx,3,local+1); /*putprop*/
	local[1]= w;
	goto IF80847;
IF80846:
	local[1]= NIL;
IF80847:
	local[1]= argv[0];
	local[2]= fqv[2];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[0]= w;
BLK80827:
	ctx->vsp=local; return(local[0]);}

/*:newcoords*/
static pointer M80866coordinates_newcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT80870;}
	local[0]= NIL;
ENT80870:
ENT80869:
	if (n>4) maerror();
	if (local[0]==NIL) goto IF80888;
	argv[0]->c.obj.iv[1] = argv[2];
	argv[0]->c.obj.iv[2] = local[0];
	local[1]= argv[0]->c.obj.iv[2];
	goto IF80889;
IF80888:
	argv[0]->c.obj.iv[1] = argv[2]->c.obj.iv[1];
	argv[0]->c.obj.iv[2] = argv[2]->c.obj.iv[2];
	local[1]= argv[0]->c.obj.iv[2];
IF80889:
	w = argv[0];
	local[0]= w;
BLK80867:
	ctx->vsp=local; return(local[0]);}

/*:replace-rot*/
static pointer M80924coordinates_replace_rot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,2,local+0,&ftab[1],fqv[3]); /*replace-matrix*/
	local[0]= w;
BLK80925:
	ctx->vsp=local; return(local[0]);}

/*:replace-pos*/
static pointer M80945coordinates_replace_pos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[4]); /*replace*/
	local[0]= w;
BLK80946:
	ctx->vsp=local; return(local[0]);}

/*:replace-coords*/
static pointer M80966coordinates_replace_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT80970;}
	local[0]= NIL;
ENT80970:
ENT80969:
	if (n>4) maerror();
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)F80612coordinates_p(ctx,1,local+1); /*coordinates-p*/
	if (w==NIL) goto IF80989;
	local[0] = argv[2]->c.obj.iv[2];
	argv[2] = argv[2]->c.obj.iv[1];
	local[1]= argv[2];
	goto IF80990;
IF80989:
	local[1]= NIL;
IF80990:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[3]); /*replace-matrix*/
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[4]); /*replace*/
	w = argv[0];
	local[0]= w;
BLK80967:
	ctx->vsp=local; return(local[0]);}

/*:copy-rot*/
static pointer M81031coordinates_copy_rot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(*ftab[3])(ctx,1,local+0,&ftab[3],fqv[5]); /*copy-matrix*/
	local[0]= w;
BLK81032:
	ctx->vsp=local; return(local[0]);}

/*:copy-pos*/
static pointer M81049coordinates_copy_pos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+1;
	w=(pointer)COPYSEQ(ctx,1,local+0); /*copy-seq*/
	local[0]= w;
BLK81050:
	ctx->vsp=local; return(local[0]);}

/*:copy-coords*/
static pointer M81066coordinates_copy_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT81070;}
	local[0]= loadglobal(fqv[0]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[6];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = local[0];
	local[0]= w;
ENT81070:
ENT81069:
	if (n>3) maerror();
	local[1]= local[0]->c.obj.iv[2];
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[4]); /*replace*/
	local[1]= local[0]->c.obj.iv[1];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[3]); /*replace-matrix*/
	w = local[0];
	local[0]= w;
BLK81067:
	ctx->vsp=local; return(local[0]);}

/*:coords*/
static pointer M81134coordinates_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT81138;}
	local[0]= loadglobal(fqv[0]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[6];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = local[0];
	local[0]= w;
ENT81138:
ENT81137:
	if (n>3) maerror();
	local[1]= local[0]->c.obj.iv[2];
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[4]); /*replace*/
	local[1]= local[0]->c.obj.iv[1];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[3]); /*replace-matrix*/
	w = local[0];
	local[0]= w;
BLK81135:
	ctx->vsp=local; return(local[0]);}

/*:worldrot*/
static pointer M81202coordinates_worldrot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK81203:
	ctx->vsp=local; return(local[0]);}

/*:worldpos*/
static pointer M81218coordinates_worldpos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK81219:
	ctx->vsp=local; return(local[0]);}

/*:worldcoords*/
static pointer M81234coordinates_worldcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0];
	local[0]= w;
BLK81235:
	ctx->vsp=local; return(local[0]);}

/*:copy-worldcoords*/
static pointer M81250coordinates_copy_worldcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[7];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK81251:
	ctx->vsp=local; return(local[0]);}

/*:parentcoords*/
static pointer M81269coordinates_parentcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = loadglobal(fqv[8]);
	local[0]= w;
BLK81270:
	ctx->vsp=local; return(local[0]);}

/*:changed*/
static pointer M81286coordinates_changed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = NIL;
	local[0]= w;
BLK81287:
	ctx->vsp=local; return(local[0]);}

/*:reset-coords*/
static pointer M81301coordinates_reset_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[9]); /*array-dimension*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[5])(ctx,1,local+1,&ftab[5],fqv[10]); /*unit-matrix*/
	argv[0]->c.obj.iv[1] = w;
	local[1]= loadglobal(fqv[11]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,2,local+1); /*instantiate*/
	argv[0]->c.obj.iv[2] = w;
	local[1]= argv[0];
	local[2]= fqv[12];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	w = argv[0];
	local[0]= w;
BLK81302:
	ctx->vsp=local; return(local[0]);}

/*:move-to*/
static pointer M81355coordinates_move_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT81359;}
	local[0]= fqv[13];
ENT81359:
ENT81358:
	if (n>4) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)F80612coordinates_p(ctx,1,local+3); /*coordinates-p*/
	if (w!=NIL) goto IF81384;
	local[3]= fqv[14];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF81385;
IF81384:
	local[3]= NIL;
IF81385:
	local[3]= local[0];
	w = fqv[15];
	if (memq(local[3],w)!=NIL) goto OR81401;
	local[3]= local[0];
	if (argv[0]==local[3]) goto OR81401;
	goto CON81400;
OR81401:
	local[3]= argv[0];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON81398;
CON81400:
	local[3]= local[0];
	w = fqv[17];
	if (memq(local[3],w)!=NIL) goto OR81433;
	local[3]= local[0];
	local[4]= loadglobal(fqv[8]);
	ctx->vsp=local+5;
	w=(pointer)EQUAL(ctx,2,local+3); /*equal*/
	if (w!=NIL) goto OR81433;
	goto CON81432;
OR81433:
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON81398;
CON81432:
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)F80612coordinates_p(ctx,1,local+3); /*coordinates-p*/
	if (w==NIL) goto CON81457;
	local[3]= local[0];
	local[4]= fqv[18];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[19];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[20];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= local[2];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)F80632transform_coords(ctx,3,local+3); /*transform-coords*/
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON81398;
CON81457:
	local[3]= NIL;
CON81398:
	w = local[3];
	local[0]= w;
BLK81356:
	ctx->vsp=local; return(local[0]);}

/*:rotate-vector*/
static pointer M81500coordinates_rotate_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TRANSFORM(ctx,2,local+0); /*transform*/
	local[0]= w;
BLK81501:
	ctx->vsp=local; return(local[0]);}

/*:transform-vector*/
static pointer M81520coordinates_transform_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TRANSFORM(ctx,2,local+0); /*transform*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(pointer)VPLUS(ctx,2,local+0); /*v+*/
	local[0]= w;
BLK81521:
	ctx->vsp=local; return(local[0]);}

/*:inverse-transform-vector*/
static pointer M81543coordinates_inverse_transform_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)TRANSPOSE(ctx,1,local+0); /*transpose*/
	local[0]= w;
	local[1]= local[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)TRANSFORM(ctx,2,local+1); /*transform*/
	local[1]= w;
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)TRANSFORM(ctx,2,local+2); /*transform*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)VMINUS(ctx,2,local+1); /*v-*/
	local[0]= w;
BLK81544:
	ctx->vsp=local; return(local[0]);}

/*:inverse-transformation*/
static pointer M81583coordinates_inverse_transformation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT81587;}
	local[0]= loadglobal(fqv[0]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[6];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = local[0];
	local[0]= w;
ENT81587:
ENT81586:
	if (n>3) maerror();
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= local[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)TRANSPOSE(ctx,2,local+1); /*transpose*/
	local[1]= local[0]->c.obj.iv[1];
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= local[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)TRANSFORM(ctx,3,local+1); /*transform*/
	local[1]= makeflt(-1.0000000000000000000000e+00);
	local[2]= local[0]->c.obj.iv[2];
	local[3]= local[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)SCALEVEC(ctx,3,local+1); /*scale*/
	w = local[0];
	local[0]= w;
BLK81584:
	ctx->vsp=local; return(local[0]);}

/*:transformation*/
static pointer M81669coordinates_transformation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT81673;}
	local[0]= fqv[13];
ENT81673:
ENT81672:
	if (n>4) maerror();
	local[1]= argv[2];
	local[2]= fqv[18];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	argv[2] = w;
	local[1]= argv[0];
	local[2]= fqv[18];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[20];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= NIL;
	local[4]= local[0];
	w = fqv[21];
	if (memq(local[4],w)!=NIL) goto OR81729;
	local[4]= local[0];
	if (argv[0]==local[4]) goto OR81729;
	goto CON81728;
OR81729:
	local[4]= local[2];
	local[5]= argv[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F80632transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= w;
	goto CON81726;
CON81728:
	local[4]= local[0];
	w = fqv[22];
	if (memq(local[4],w)!=NIL) goto OR81750;
	local[4]= local[0];
	if (loadglobal(fqv[8])==local[4]) goto OR81750;
	goto CON81749;
OR81750:
	local[4]= argv[2];
	local[5]= local[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F80632transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= w;
	goto CON81726;
CON81749:
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)F80612coordinates_p(ctx,1,local+4); /*coordinates-p*/
	if (w==NIL) goto CON81771;
	local[4]= local[0];
	local[5]= fqv[18];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[3] = w;
	local[4]= argv[2];
	local[5]= local[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F80632transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= local[3];
	local[5]= fqv[20];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[2];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F80632transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= local[2];
	local[5]= local[3];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F80632transform_coords(ctx,3,local+4); /*transform-coords*/
	local[4]= w;
	goto CON81726;
CON81771:
	local[4]= argv[0];
	local[5]= fqv[23];
	local[6]= fqv[24];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,4,local+4); /*send*/
	local[4]= w;
	goto CON81726;
CON81810:
	local[4]= NIL;
CON81726:
	w = local[2];
	local[0]= w;
BLK81670:
	ctx->vsp=local; return(local[0]);}

/*:transform*/
static pointer M81825coordinates_transform(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT81829;}
	local[0]= fqv[13];
ENT81829:
ENT81828:
	if (n>4) maerror();
	local[1]= local[0];
	w = fqv[25];
	if (memq(local[1],w)!=NIL) goto OR81852;
	local[1]= local[0];
	if (argv[0]==local[1]) goto OR81852;
	goto CON81851;
OR81852:
	local[1]= argv[0];
	local[2]= argv[2];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F80632transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON81849;
CON81851:
	local[1]= local[0];
	w = fqv[26];
	if (memq(local[1],w)!=NIL) goto OR81873;
	local[1]= local[0];
	if (loadglobal(fqv[8])==local[1]) goto OR81873;
	goto CON81872;
OR81873:
	local[1]= argv[2];
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F80632transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON81849;
CON81872:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F80612coordinates_p(ctx,1,local+1); /*coordinates-p*/
	if (w==NIL) goto CON81894;
	local[1]= local[0];
	local[2]= fqv[20];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F80632transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= argv[2];
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F80632transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= local[0];
	local[2]= fqv[18];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F80632transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON81849;
CON81894:
	local[1]= argv[0];
	local[2]= fqv[23];
	local[3]= fqv[27];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON81849;
CON81926:
	local[1]= NIL;
CON81849:
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK81826:
	ctx->vsp=local; return(local[0]);}

/*:rotate-with-matrix*/
static pointer M81945coordinates_rotate_with_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	w = fqv[28];
	if (memq(local[0],w)!=NIL) goto OR81965;
	local[0]= argv[3];
	if (argv[0]==local[0]) goto OR81965;
	goto CON81964;
OR81965:
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)MATTIMES(ctx,3,local+0); /*m**/
	local[0]= w;
	goto CON81962;
CON81964:
	local[0]= argv[3];
	w = fqv[29];
	if (memq(local[0],w)!=NIL) goto OR81986;
	local[0]= argv[3];
	if (loadglobal(fqv[8])==local[0]) goto OR81986;
	goto CON81985;
OR81986:
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)MATTIMES(ctx,3,local+0); /*m**/
	local[0]= w;
	goto CON81962;
CON81985:
	local[0]= argv[3];
	ctx->vsp=local+1;
	w=(pointer)F80612coordinates_p(ctx,1,local+0); /*coordinates-p*/
	if (w==NIL) goto CON82007;
	local[0]= argv[3];
	local[1]= fqv[30];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)TRANSPOSE(ctx,1,local+1); /*transpose*/
	local[1]= w;
	local[2]= NIL;
	local[3]= argv[2];
	local[4]= local[1];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,3,local+3); /*m**/
	local[3]= local[0];
	local[4]= local[1];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,3,local+3); /*m**/
	local[3]= local[1];
	local[4]= argv[0]->c.obj.iv[1];
	local[5]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,3,local+3); /*m**/
	local[0]= w;
	goto CON81962;
CON82007:
	local[0]= argv[0];
	local[1]= fqv[23];
	local[2]= fqv[31];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto CON81962;
CON82052:
	local[0]= NIL;
CON81962:
	w = local[0];
	local[0]= w;
BLK81946:
	ctx->vsp=local; return(local[0]);}

/*:rotate*/
static pointer M82062coordinates_rotate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT82067;}
	local[0]= NIL;
ENT82067:
	if (n>=5) { local[1]=(argv[4]); goto ENT82066;}
	local[1]= fqv[13];
ENT82066:
ENT82065:
	if (n>5) maerror();
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
	if (makeint((eusinteger_t)2L)!=local[2]) goto CON82093;
	w = argv[2];
	if (!isnum(w)) goto CON82103;
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[2];
	local[4]= NIL;
	local[5]= NIL;
	local[6]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+7;
	w=(pointer)ROTMAT(ctx,5,local+2); /*rotate-matrix*/
	local[2]= w;
	goto CON82101;
CON82103:
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[6])(ctx,1,local+2,&ftab[6],fqv[32]); /*matrixp*/
	if (w==NIL) goto CON82113;
	local[2]= argv[2];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+5;
	w=(pointer)MATTIMES(ctx,3,local+2); /*m**/
	local[2]= w;
	goto CON82101;
CON82113:
	local[2]= fqv[33];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto CON82101;
CON82126:
	local[2]= NIL;
CON82101:
	goto CON82091;
CON82093:
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[7])(ctx,1,local+2,&ftab[7],fqv[34]); /*float-vector-p*/
	if (w==NIL) goto CON82131;
	local[2]= argv[0];
	local[3]= fqv[35];
	local[4]= argv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+4); /*rotation-matrix*/
	local[4]= w;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	goto CON82091;
CON82131:
	if (local[0]!=NIL) goto CON82149;
	local[2]= argv[0];
	local[3]= fqv[35];
	local[4]= argv[2];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	goto CON82091;
CON82149:
	local[2]= local[1];
	w = fqv[36];
	if (memq(local[2],w)!=NIL) goto OR82168;
	local[2]= local[1];
	if (argv[0]==local[2]) goto OR82168;
	goto CON82167;
OR82168:
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[2];
	local[4]= local[0];
	local[5]= NIL;
	local[6]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+7;
	w=(pointer)ROTMAT(ctx,5,local+2); /*rotate-matrix*/
	local[2]= w;
	goto CON82165;
CON82167:
	local[2]= local[1];
	w = fqv[37];
	if (memq(local[2],w)!=NIL) goto OR82190;
	local[2]= local[1];
	if (loadglobal(fqv[8])==local[2]) goto OR82190;
	goto CON82189;
OR82190:
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[2];
	local[4]= local[0];
	local[5]= T;
	local[6]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+7;
	w=(pointer)ROTMAT(ctx,5,local+2); /*rotate-matrix*/
	local[2]= w;
	goto CON82165;
CON82189:
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)F80612coordinates_p(ctx,1,local+2); /*coordinates-p*/
	if (w==NIL) goto CON82212;
	local[2]= argv[0];
	local[3]= fqv[35];
	local[4]= argv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+4); /*rotation-matrix*/
	local[4]= w;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	goto CON82165;
CON82212:
	local[2]= argv[0];
	local[3]= fqv[23];
	local[4]= fqv[38];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	goto CON82165;
CON82229:
	local[2]= NIL;
CON82165:
	goto CON82091;
CON82161:
	local[2]= NIL;
CON82091:
	local[2]= argv[0];
	local[3]= fqv[16];
	local[4]= argv[0]->c.obj.iv[1];
	local[5]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[0]= w;
BLK82063:
	ctx->vsp=local; return(local[0]);}

/*:orient-with-matrix*/
static pointer M82248coordinates_orient_with_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	w = fqv[39];
	if (memq(local[0],w)!=NIL) goto OR82268;
	local[0]= argv[3];
	if (argv[0]==local[0]) goto OR82268;
	goto CON82267;
OR82268:
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)MATTIMES(ctx,3,local+0); /*m**/
	local[0]= w;
	goto CON82265;
CON82267:
	local[0]= argv[3];
	w = fqv[40];
	if (memq(local[0],w)!=NIL) goto OR82289;
	local[0]= argv[3];
	if (loadglobal(fqv[8])==local[0]) goto OR82289;
	goto CON82288;
OR82289:
	argv[0]->c.obj.iv[1] = argv[2];
	local[0]= argv[0]->c.obj.iv[1];
	goto CON82265;
CON82288:
	local[0]= argv[3];
	ctx->vsp=local+1;
	w=(pointer)F80612coordinates_p(ctx,1,local+0); /*coordinates-p*/
	if (w==NIL) goto CON82312;
	local[0]= argv[3];
	local[1]= fqv[30];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= argv[2];
	local[3]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)MATTIMES(ctx,3,local+1); /*m**/
	local[0]= w;
	goto CON82265;
CON82312:
	local[0]= argv[0];
	local[1]= fqv[23];
	local[2]= fqv[41];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto CON82265;
CON82338:
	local[0]= NIL;
CON82265:
	w = local[0];
	local[0]= w;
BLK82249:
	ctx->vsp=local; return(local[0]);}

/*:orient*/
static pointer M82348coordinates_orient(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	if (n>=5) { local[0]=(argv[4]); goto ENT82352;}
	local[0]= fqv[13];
ENT82352:
ENT82351:
	if (n>5) maerror();
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[34]); /*float-vector-p*/
	if (w==NIL) goto CON82376;
	local[1]= argv[0];
	local[2]= fqv[42];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+3); /*rotation-matrix*/
	local[3]= w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON82374;
CON82376:
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[32]); /*matrixp*/
	if (w==NIL) goto CON82393;
	local[1]= argv[0];
	local[2]= fqv[42];
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON82374;
CON82393:
	local[1]= local[0];
	w = fqv[43];
	if (memq(local[1],w)!=NIL) goto OR82414;
	local[1]= local[0];
	if (argv[0]==local[1]) goto OR82414;
	goto CON82413;
OR82414:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[2];
	local[3]= argv[3];
	local[4]= NIL;
	local[5]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(pointer)ROTMAT(ctx,5,local+1); /*rotate-matrix*/
	local[1]= w;
	goto CON82411;
CON82413:
	local[1]= local[0];
	w = fqv[44];
	if (memq(local[1],w)!=NIL) goto OR82436;
	local[1]= local[0];
	if (loadglobal(fqv[8])==local[1]) goto OR82436;
	goto CON82435;
OR82436:
	local[1]= argv[2];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+1); /*rotation-matrix*/
	argv[0]->c.obj.iv[1] = w;
	local[1]= argv[0]->c.obj.iv[1];
	goto CON82411;
CON82435:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F80612coordinates_p(ctx,1,local+1); /*coordinates-p*/
	if (w==NIL) goto CON82462;
	local[1]= argv[0];
	local[2]= fqv[42];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+3); /*rotation-matrix*/
	local[3]= w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON82411;
CON82462:
	local[1]= argv[0];
	local[2]= fqv[23];
	local[3]= fqv[45];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON82411;
CON82479:
	local[1]= NIL;
CON82411:
	goto CON82374;
CON82407:
	local[1]= NIL;
CON82374:
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK82349:
	ctx->vsp=local; return(local[0]);}

/*:parent-vector*/
static pointer M82498coordinates_parent_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	w = fqv[46];
	if (memq(local[0],w)!=NIL) goto OR82518;
	local[0]= argv[3];
	if (argv[0]==local[0]) goto OR82518;
	goto CON82517;
OR82518:
	local[0]= argv[0];
	local[1]= fqv[47];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto CON82515;
CON82517:
	local[0]= argv[3];
	w = fqv[48];
	if (memq(local[0],w)!=NIL) goto OR82540;
	local[0]= argv[3];
	if (loadglobal(fqv[8])==local[0]) goto OR82540;
	goto CON82539;
OR82540:
	local[0]= argv[2];
	goto CON82515;
CON82539:
	local[0]= argv[3];
	ctx->vsp=local+1;
	w=(pointer)F80612coordinates_p(ctx,1,local+0); /*coordinates-p*/
	if (w==NIL) goto CON82557;
	local[0]= argv[3];
	local[1]= fqv[47];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto CON82515;
CON82557:
	local[0]= argv[0];
	local[1]= fqv[23];
	local[2]= fqv[49];
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto CON82515;
CON82570:
	local[0]= NIL;
CON82515:
	w = local[0];
	local[0]= w;
BLK82499:
	ctx->vsp=local; return(local[0]);}

/*:parent-orientation*/
static pointer M82581coordinates_parent_orientation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	w = fqv[50];
	if (memq(local[0],w)!=NIL) goto OR82601;
	local[0]= argv[3];
	if (argv[0]==local[0]) goto OR82601;
	goto CON82600;
OR82601:
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TRANSFORM(ctx,2,local+0); /*transform*/
	local[0]= w;
	goto CON82598;
CON82600:
	local[0]= argv[3];
	w = fqv[51];
	if (memq(local[0],w)!=NIL) goto OR82621;
	local[0]= argv[3];
	if (loadglobal(fqv[8])==local[0]) goto OR82621;
	goto CON82620;
OR82621:
	local[0]= argv[2];
	goto CON82598;
CON82620:
	local[0]= argv[3];
	ctx->vsp=local+1;
	w=(pointer)F80612coordinates_p(ctx,1,local+0); /*coordinates-p*/
	if (w==NIL) goto CON82638;
	local[0]= argv[3];
	local[1]= fqv[30];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TRANSFORM(ctx,2,local+0); /*transform*/
	local[0]= w;
	goto CON82598;
CON82638:
	local[0]= argv[0];
	local[1]= fqv[23];
	local[2]= fqv[52];
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto CON82598;
CON82653:
	local[0]= NIL;
CON82598:
	w = local[0];
	local[0]= w;
BLK82582:
	ctx->vsp=local; return(local[0]);}

/*:translate*/
static pointer M82664coordinates_translate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT82668;}
	local[0]= fqv[13];
ENT82668:
ENT82667:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0];
	local[5]= fqv[53];
	local[6]= argv[2];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,4,local+4); /*send*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[2];
	local[6]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+7;
	w=(pointer)VPLUS(ctx,3,local+4); /*v+*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK82665:
	ctx->vsp=local; return(local[0]);}

/*:locate*/
static pointer M82706coordinates_locate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT82710;}
	local[0]= fqv[13];
ENT82710:
ENT82709:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	local[5]= argv[0];
	local[6]= fqv[54];
	local[7]= argv[2];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,4,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[2])(ctx,2,local+4,&ftab[2],fqv[4]); /*replace*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK82707:
	ctx->vsp=local; return(local[0]);}

/*:scale*/
static pointer M82747coordinates_scale(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT82751;}
	local[0]= NIL;
ENT82751:
ENT82750:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF82767;
	local[1]= local[0];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(*ftab[8])(ctx,3,local+1,&ftab[8],fqv[55]); /*scale-matrix*/
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF82768;
IF82767:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,2,local+1,&ftab[0],fqv[1]); /*matrix-row*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)VNORM(ctx,1,local+1); /*norm*/
	local[1]= w;
IF82768:
	w = local[1];
	local[0]= w;
BLK82748:
	ctx->vsp=local; return(local[0]);}

/*:euler*/
static pointer M82795coordinates_euler(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= fqv[16];
	local[2]= argv[2];
	local[3]= argv[3];
	local[4]= argv[4];
	ctx->vsp=local+5;
	w=(*ftab[9])(ctx,3,local+2,&ftab[9],fqv[56]); /*euler-matrix*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
BLK82796:
	ctx->vsp=local; return(local[0]);}

/*:euler-angle*/
static pointer M82827coordinates_euler_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)INV_EULER(ctx,1,local+0); /*euler-angle*/
	local[0]= w;
BLK82828:
	ctx->vsp=local; return(local[0]);}

/*:rpy*/
static pointer M82844coordinates_rpy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= fqv[16];
	local[2]= argv[2];
	local[3]= argv[3];
	local[4]= argv[4];
	ctx->vsp=local+5;
	w=(*ftab[10])(ctx,3,local+2,&ftab[10],fqv[57]); /*rpy-matrix*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
BLK82845:
	ctx->vsp=local; return(local[0]);}

/*:rpy-angle*/
static pointer M82876coordinates_rpy_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)INV_RPY(ctx,1,local+0); /*rpy-angle*/
	local[0]= w;
BLK82877:
	ctx->vsp=local; return(local[0]);}

/*:rotation-angle*/
static pointer M82893coordinates_rotation_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)ROTANGLE(ctx,1,local+0); /*rotation-angle*/
	local[0]= w;
BLK82894:
	ctx->vsp=local; return(local[0]);}

/*:4x4*/
static pointer M82910coordinates_4x4(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT82914;}
	local[0]= NIL;
ENT82914:
ENT82913:
	if (n>3) maerror();
	if (local[0]==NIL) goto CON82932;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)3L);
WHL82960:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX82961;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)3L);
WHL82991:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX82992;
	local[5]= argv[0]->c.obj.iv[1];
	local[6]= local[1];
	local[7]= local[3];
	local[8]= local[0];
	local[9]= local[1];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)ASET(ctx,4,local+5); /*aset*/
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL82991;
WHX82992:
	local[5]= NIL;
BLK82993:
	w = NIL;
	local[3]= argv[0]->c.obj.iv[2];
	local[4]= local[1];
	local[5]= local[0];
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)3L);
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,3,local+5); /*aref*/
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[4]); v=local[3];
	  v->c.fvec.fv[i]=fltval(w);}
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL82960;
WHX82961:
	local[3]= NIL;
BLK82962:
	w = NIL;
	local[1]= argv[0];
	goto CON82930;
CON82932:
	local[1]= makeint((eusinteger_t)4L);
	local[2]= makeint((eusinteger_t)4L);
	ctx->vsp=local+3;
	w=(*ftab[11])(ctx,2,local+1,&ftab[11],fqv[58]); /*make-matrix*/
	local[0] = w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)3L);
	local[3]= makeint((eusinteger_t)3L);
	local[4]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)3L);
WHL83087:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX83088;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)3L);
WHL83118:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX83119;
	local[5]= local[0];
	local[6]= local[1];
	local[7]= local[3];
	local[8]= argv[0]->c.obj.iv[1];
	local[9]= local[1];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)ASET(ctx,4,local+5); /*aset*/
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL83118;
WHX83119:
	local[5]= NIL;
BLK83120:
	w = NIL;
	local[3]= local[0];
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)3L);
	local[6]= argv[0]->c.obj.iv[2];
	{ register eusinteger_t i=intval(local[1]);
	  w=makeflt(local[6]->c.fvec.fv[i]);}
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)ASET(ctx,4,local+3); /*aset*/
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL83087;
WHX83088:
	local[3]= NIL;
BLK83089:
	w = NIL;
	local[1]= local[0];
	goto CON82930;
CON83047:
	local[1]= NIL;
CON82930:
	w = local[1];
	local[0]= w;
BLK82911:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M83177coordinates_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT83181;}
	local[0]= T;
ENT83181:
ENT83180:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-3);
	local[2]= NIL;
	local[3]= argv[0];
	local[4]= fqv[30];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= fqv[59];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[4];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	w = makeint((eusinteger_t)2L);
	if ((eusinteger_t)local[5] <= (eusinteger_t)w) goto CON83216;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)INV_RPY(ctx,1,local+5); /*rpy-angle*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.car;
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[60]));
	local[7]= fqv[61];
	local[8]= local[0];
	local[9]= NIL;
	local[10]= fqv[62];
	if (local[1]==NIL) goto IF83246;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	goto IF83247;
IF83246:
	local[11]= fqv[63];
IF83247:
	local[12]= local[4];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)AREF(ctx,2,local+12); /*aref*/
	local[12]= w;
	local[13]= local[4];
	local[14]= makeint((eusinteger_t)1L);
	ctx->vsp=local+15;
	w=(pointer)AREF(ctx,2,local+13); /*aref*/
	local[13]= w;
	local[14]= local[4];
	local[15]= makeint((eusinteger_t)2L);
	ctx->vsp=local+16;
	w=(pointer)AREF(ctx,2,local+14); /*aref*/
	local[14]= w;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	ctx->vsp=local+18;
	w=(pointer)XFORMAT(ctx,9,local+9); /*format*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SENDMESSAGE(ctx,5,local+5); /*send-message*/
	local[5]= w;
	goto CON83214;
CON83216:
	local[5]= local[4];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	if (makeint((eusinteger_t)2L)!=local[5]) goto CON83288;
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[60]));
	local[7]= fqv[61];
	local[8]= local[0];
	local[9]= NIL;
	local[10]= fqv[64];
	if (local[1]==NIL) goto IF83305;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	goto IF83306;
IF83305:
	local[11]= fqv[65];
IF83306:
	local[12]= local[4];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)AREF(ctx,2,local+12); /*aref*/
	local[12]= w;
	local[13]= local[4];
	local[14]= makeint((eusinteger_t)1L);
	ctx->vsp=local+15;
	w=(pointer)AREF(ctx,2,local+13); /*aref*/
	local[13]= w;
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)ROTANGLE(ctx,1,local+14); /*rotation-angle*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)XFORMAT(ctx,6,local+9); /*format*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SENDMESSAGE(ctx,5,local+5); /*send-message*/
	local[5]= w;
	goto CON83214;
CON83288:
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[60]));
	local[7]= fqv[61];
	local[8]= local[0];
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)SENDMESSAGE(ctx,5,local+5); /*send-message*/
	local[5]= w;
	goto CON83214;
CON83326:
	local[5]= NIL;
CON83214:
	w = local[5];
	local[0]= w;
BLK83178:
	ctx->vsp=local; return(local[0]);}

/*:create*/
static pointer M83341coordinates_create(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT83345;}
	local[0]= makeint((eusinteger_t)3L);
ENT83345:
ENT83344:
	if (n>3) maerror();
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[5])(ctx,1,local+1,&ftab[5],fqv[10]); /*unit-matrix*/
	argv[0]->c.obj.iv[1] = w;
	local[1]= loadglobal(fqv[11]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,2,local+1); /*instantiate*/
	argv[0]->c.obj.iv[2] = w;
	w = argv[0];
	local[0]= w;
BLK83342:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M83379coordinates_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[66], &argv[2], n-2, local+0, 1);
	if (n & (1<<0)) goto KEY83403;
	local[0] = makeint((eusinteger_t)3L);
KEY83403:
	if (n & (1<<1)) goto KEY83408;
	local[13]= loadglobal(fqv[11]);
	local[14]= local[0];
	ctx->vsp=local+15;
	w=(pointer)INSTANTIATE(ctx,2,local+13); /*instantiate*/
	local[1] = w;
KEY83408:
	if (n & (1<<2)) goto KEY83417;
	local[13]= local[0];
	ctx->vsp=local+14;
	w=(*ftab[5])(ctx,1,local+13,&ftab[5],fqv[10]); /*unit-matrix*/
	local[2] = w;
KEY83417:
	if (n & (1<<3)) goto KEY83425;
	local[3] = NIL;
KEY83425:
	if (n & (1<<4)) goto KEY83430;
	local[4] = NIL;
KEY83430:
	if (n & (1<<5)) goto KEY83435;
	local[5] = NIL;
KEY83435:
	if (n & (1<<6)) goto KEY83440;
	local[6] = NIL;
KEY83440:
	if (n & (1<<7)) goto KEY83445;
	local[7] = NIL;
KEY83445:
	if (n & (1<<8)) goto KEY83450;
	local[8] = local[7];
KEY83450:
	if (n & (1<<9)) goto KEY83456;
	local[9] = NIL;
KEY83456:
	if (n & (1<<10)) goto KEY83461;
	local[10] = fqv[13];
KEY83461:
	if (n & (1<<11)) goto KEY83468;
	local[11] = NIL;
KEY83468:
	if (n & (1<<12)) goto KEY83473;
	local[12] = NIL;
KEY83473:
	argv[0]->c.obj.iv[1] = local[2];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)F80612coordinates_p(ctx,1,local+13); /*coordinates-p*/
	if (w==NIL) goto IF83491;
	local[13]= local[10];
	local[14]= fqv[47];
	local[15]= local[1];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	goto IF83492;
IF83491:
	local[13]= local[1];
IF83492:
	argv[0]->c.obj.iv[2] = local[13];
	if (local[3]==NIL) goto CON83511;
	local[13]= argv[0];
	local[14]= fqv[67];
	local[15]= local[3];
	local[16]= makeint((eusinteger_t)0L);
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[3];
	local[17]= makeint((eusinteger_t)1L);
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[16]= w;
	local[17]= local[3];
	local[18]= makeint((eusinteger_t)2L);
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,5,local+13); /*send*/
	local[13]= w;
	goto CON83509;
CON83511:
	if (local[4]==NIL) goto CON83530;
	local[13]= argv[0];
	local[14]= fqv[68];
	local[15]= local[4];
	local[16]= makeint((eusinteger_t)0L);
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[4];
	local[17]= makeint((eusinteger_t)1L);
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[16]= w;
	local[17]= local[4];
	local[18]= makeint((eusinteger_t)2L);
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,5,local+13); /*send*/
	local[13]= w;
	goto CON83509;
CON83530:
	if (local[8]==NIL) goto CON83549;
	local[13]= argv[0];
	local[14]= fqv[69];
	local[15]= local[8];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	goto CON83509;
CON83549:
	w = local[6];
	if (!iscons(w)) goto CON83560;
	local[13]= NIL;
	local[14]= local[6];
WHL83583:
	if (local[14]==NIL) goto WHX83584;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14] = (w)->c.cons.cdr;
	w = local[15];
	local[13] = w;
	local[15]= argv[0];
	local[16]= fqv[70];
	local[17]= local[13];
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[18];
	local[18]= w;
	local[19]= local[10];
	ctx->vsp=local+20;
	w=(pointer)SEND(ctx,5,local+15); /*send*/
	goto WHL83583;
WHX83584:
	local[15]= NIL;
BLK83585:
	w = NIL;
	local[13]= w;
	goto CON83509;
CON83560:
	w = local[6];
	if (!isnum(w)) goto CON83676;
	local[13]= argv[0];
	local[14]= fqv[70];
	local[15]= local[6];
	local[16]= local[5];
	local[17]= local[10];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,5,local+13); /*send*/
	local[13]= w;
	goto CON83509;
CON83676:
	if (local[9]==NIL) goto CON83689;
	local[13]= argv[0];
	local[14]= fqv[71];
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	goto CON83509;
CON83689:
	local[13]= NIL;
CON83509:
	if (local[11]==NIL) goto IF83702;
	local[13]= argv[0];
	local[14]= fqv[2];
	local[15]= local[11];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	goto IF83703;
IF83702:
	local[13]= NIL;
IF83703:
	local[13]= NIL;
	local[14]= local[12];
WHL83732:
	if (local[14]==NIL) goto WHX83733;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14] = (w)->c.cons.cdr;
	w = local[15];
	local[13] = w;
	local[15]= argv[0];
	w=local[13];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	w=local[13];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	ctx->vsp=local+18;
	w=(pointer)PUTPROP(ctx,3,local+15); /*putprop*/
	goto WHL83732;
WHX83733:
	local[15]= NIL;
BLK83734:
	w = NIL;
	w = argv[0];
	local[0]= w;
BLK83380:
	ctx->vsp=local; return(local[0]);}

/*:parent*/
static pointer M83845cascaded_coords_parent(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK83846:
	ctx->vsp=local; return(local[0]);}

/*:descendants*/
static pointer M83861cascaded_coords_descendants(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK83862:
	ctx->vsp=local; return(local[0]);}

/*:inheritance*/
static pointer M83877cascaded_coords_inheritance(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO83891,env,argv,local);
	local[1]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
BLK83878:
	ctx->vsp=local; return(local[0]);}

/*:leaves*/
static pointer M83897cascaded_coords_leaves(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[4]==NIL) goto IF83910;
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= fqv[72];
	ctx->vsp=local+2;
	w=(*ftab[12])(ctx,2,local+0,&ftab[12],fqv[73]); /*send-all*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[13])(ctx,1,local+0,&ftab[13],fqv[74]); /*flatten*/
	local[0]= w;
	goto IF83911;
IF83910:
	local[0]= argv[0];
IF83911:
	w = local[0];
	local[0]= w;
BLK83898:
	ctx->vsp=local; return(local[0]);}

/*:assoc*/
static pointer M83927cascaded_coords_assoc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT83931;}
	local[0]= NIL;
ENT83931:
ENT83930:
	if (n>4) maerror();
	local[1]= argv[2];
	w = argv[0]->c.obj.iv[4];
	if (memq(local[1],w)!=NIL) goto IF83950;
	if (local[0]!=NIL) goto IF83964;
	local[1]= argv[0];
	local[2]= fqv[18];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[75];
	local[3]= argv[2];
	local[4]= fqv[18];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0] = w;
	local[1]= local[0];
	goto IF83965;
IF83964:
	local[1]= NIL;
IF83965:
	local[1]= argv[2];
	local[2]= fqv[76];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= argv[2];
	local[2]= fqv[16];
	local[3]= local[0]->c.obj.iv[1];
	local[4]= local[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= argv[2];
	w = argv[0]->c.obj.iv[4];
	ctx->vsp=local+2;
	argv[0]->c.obj.iv[4] = cons(ctx,local[1],w);
	local[1]= argv[2];
	goto IF83951;
IF83950:
	local[1]= NIL;
IF83951:
	w = local[1];
	local[0]= w;
BLK83928:
	ctx->vsp=local; return(local[0]);}

/*:dissoc*/
static pointer M84030cascaded_coords_dissoc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	w = argv[0]->c.obj.iv[4];
	if (memq(local[0],w)==NIL) goto IF84046;
	local[0]= argv[2];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[77];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+3;
	w=(*ftab[14])(ctx,2,local+1,&ftab[14],fqv[78]); /*delete*/
	argv[0]->c.obj.iv[4] = w;
	local[1]= argv[2];
	local[2]= fqv[79];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= argv[2];
	local[2]= fqv[16];
	local[3]= local[0]->c.obj.iv[1];
	local[4]= local[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	w = argv[2];
	local[0]= w;
	goto IF84047;
IF84046:
	local[0]= NIL;
IF84047:
	w = local[0];
	local[0]= w;
BLK84031:
	ctx->vsp=local; return(local[0]);}

/*:clear-assoc*/
static pointer M84116cascaded_coords_clear_assoc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[0]->c.obj.iv[4];
WHL84146:
	if (local[1]==NIL) goto WHX84147;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= argv[0];
	local[3]= fqv[80];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	goto WHL84146;
WHX84147:
	local[2]= NIL;
BLK84148:
	w = NIL;
	w = NIL;
	local[0]= w;
BLK84117:
	ctx->vsp=local; return(local[0]);}

/*:obey*/
static pointer M84207cascaded_coords_obey(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[0]->c.obj.iv[3]==NIL) goto IF84222;
	local[0]= argv[0]->c.obj.iv[3];
	local[1]= fqv[80];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF84223;
IF84222:
	local[0]= NIL;
IF84223:
	argv[0]->c.obj.iv[3] = argv[2];
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK84208:
	ctx->vsp=local; return(local[0]);}

/*:disobey*/
static pointer M84244cascaded_coords_disobey(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	if (argv[0]->c.obj.iv[3]!=local[0]) goto IF84259;
	argv[0]->c.obj.iv[3] = NIL;
	local[0]= argv[0]->c.obj.iv[3];
	goto IF84260;
IF84259:
	local[0]= NIL;
IF84260:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK84245:
	ctx->vsp=local; return(local[0]);}

/*:newcoords*/
static pointer M84275cascaded_coords_newcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT84279;}
	local[0]= NIL;
ENT84279:
ENT84278:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= *(ovafptr(argv[1],fqv[60]));
	local[3]= fqv[16];
	local[4]= argv[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SENDMESSAGE(ctx,5,local+1); /*send-message*/
	local[1]= argv[0];
	local[2]= fqv[12];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	w = argv[0];
	local[0]= w;
BLK84276:
	ctx->vsp=local; return(local[0]);}

/*:changed*/
static pointer M84317cascaded_coords_changed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[7]!=NIL) goto IF84331;
	argv[0]->c.obj.iv[7] = T;
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= fqv[12];
	ctx->vsp=local+2;
	w=(*ftab[12])(ctx,2,local+0,&ftab[12],fqv[73]); /*send-all*/
	local[0]= w;
	goto IF84332;
IF84331:
	local[0]= NIL;
IF84332:
	w = local[0];
	local[0]= w;
BLK84318:
	ctx->vsp=local; return(local[0]);}

/*:worldrot*/
static pointer M84353cascaded_coords_worldrot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	w = w->c.obj.iv[1];
	local[0]= w;
BLK84354:
	ctx->vsp=local; return(local[0]);}

/*:worldpos*/
static pointer M84377cascaded_coords_worldpos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	w = w->c.obj.iv[2];
	local[0]= w;
BLK84378:
	ctx->vsp=local; return(local[0]);}

/*:worldcoords*/
static pointer M84401cascaded_coords_worldcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[7]==NIL) goto IF84415;
	if (argv[0]->c.obj.iv[3]==NIL) goto IF84424;
	local[0]= argv[0]->c.obj.iv[3];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+3;
	w=(pointer)F80632transform_coords(ctx,3,local+0); /*transform-coords*/
	local[0]= w;
	goto IF84425;
IF84424:
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= fqv[69];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
IF84425:
	local[0]= argv[0];
	local[1]= fqv[81];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	argv[0]->c.obj.iv[7] = NIL;
	local[0]= argv[0]->c.obj.iv[7];
	goto IF84416;
IF84415:
	local[0]= NIL;
IF84416:
	w = argv[0]->c.obj.iv[5];
	local[0]= w;
BLK84402:
	ctx->vsp=local; return(local[0]);}

/*:copy-worldcoords*/
static pointer M84462cascaded_coords_copy_worldcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT84466;}
	local[0]= loadglobal(fqv[0]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[6];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = local[0];
	local[0]= w;
ENT84466:
ENT84465:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[18];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= local[0]->c.obj.iv[2];
	local[2]= argv[0]->c.obj.iv[5]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[4]); /*replace*/
	local[1]= local[0]->c.obj.iv[1];
	local[2]= argv[0]->c.obj.iv[5]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[3]); /*replace-matrix*/
	w = local[0];
	local[0]= w;
BLK84463:
	ctx->vsp=local; return(local[0]);}

/*:update*/
static pointer M84544cascaded_coords_update(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = NIL;
	local[0]= w;
BLK84545:
	ctx->vsp=local; return(local[0]);}

/*:parentcoords*/
static pointer M84558cascaded_coords_parentcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[3]==NIL) goto IF84571;
	local[0]= argv[0]->c.obj.iv[3];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto IF84572;
IF84571:
	local[0]= argv[0];
	local[1]= fqv[82];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	if (fqv[83]!=local[1]) goto IF84599;
	local[1]= loadglobal(fqv[8]);
	goto IF84600;
IF84599:
	local[1]= local[0];
	if (fqv[84]!=local[1]) goto IF84609;
	local[1]= loadglobal(fqv[85]);
	goto IF84610;
IF84609:
	if (T==NIL) goto IF84619;
	local[1]= fqv[86];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
	goto IF84620;
IF84619:
	local[1]= NIL;
IF84620:
IF84610:
IF84600:
	w = local[1];
	local[0]= w;
IF84572:
	w = local[0];
	local[0]= w;
BLK84559:
	ctx->vsp=local; return(local[0]);}

/*:transform-vector*/
static pointer M84628cascaded_coords_transform_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[47];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK84629:
	ctx->vsp=local; return(local[0]);}

/*:rotate-vector*/
static pointer M84654cascaded_coords_rotate_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[87];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK84655:
	ctx->vsp=local; return(local[0]);}

/*:inverse-transform-vector*/
static pointer M84680cascaded_coords_inverse_transform_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[88];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK84681:
	ctx->vsp=local; return(local[0]);}

/*:inverse-transformation*/
static pointer M84706cascaded_coords_inverse_transformation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT84710;}
	local[0]= loadglobal(fqv[0]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[6];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	w = local[0];
	local[0]= w;
ENT84710:
ENT84709:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[18];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[20];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
BLK84707:
	ctx->vsp=local; return(local[0]);}

/*:transformation*/
static pointer M84761cascaded_coords_transformation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT84765;}
	local[0]= fqv[13];
ENT84765:
ENT84764:
	if (n>4) maerror();
	local[1]= argv[2];
	local[2]= fqv[18];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= fqv[18];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[20];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= local[0];
	w = fqv[89];
	if (memq(local[6],w)!=NIL) goto OR84819;
	local[6]= local[0];
	if (argv[0]==local[6]) goto OR84819;
	goto CON84818;
OR84819:
	local[6]= local[3];
	local[7]= local[1];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F80632transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= w;
	goto CON84816;
CON84818:
	local[6]= local[0];
	w = fqv[90];
	if (memq(local[6],w)!=NIL) goto OR84840;
	local[6]= local[0];
	if (argv[0]->c.obj.iv[3]==local[6]) goto OR84840;
	goto CON84839;
OR84840:
	local[6]= argv[0];
	local[7]= *(ovafptr(argv[1],fqv[60]));
	local[8]= fqv[20];
	ctx->vsp=local+9;
	w=(pointer)SENDMESSAGE(ctx,3,local+6); /*send-message*/
	local[4] = w;
	local[6]= local[1];
	local[7]= local[4];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)F80632transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= local[3];
	local[7]= local[4];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)F80632transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= argv[0];
	local[7]= local[4];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)F80632transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= w;
	goto CON84816;
CON84839:
	local[6]= local[0];
	w = fqv[91];
	if (memq(local[6],w)!=NIL) goto OR84887;
	local[6]= local[0];
	local[7]= loadglobal(fqv[8]);
	ctx->vsp=local+8;
	w=(pointer)EQUAL(ctx,2,local+6); /*equal*/
	if (w!=NIL) goto OR84887;
	goto CON84886;
OR84887:
	local[6]= local[1];
	local[7]= local[3];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F80632transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= w;
	goto CON84816;
CON84886:
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)F80612coordinates_p(ctx,1,local+6); /*coordinates-p*/
	if (w==NIL) goto CON84910;
	local[6]= local[0];
	local[7]= fqv[18];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[5] = w;
	local[6]= local[3];
	local[7]= local[5];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F80632transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= local[1];
	local[7]= local[3];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F80632transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= local[5];
	local[7]= fqv[20];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[3];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)F80632transform_coords(ctx,3,local+6); /*transform-coords*/
	local[6]= w;
	goto CON84816;
CON84910:
	local[6]= argv[0];
	local[7]= fqv[23];
	local[8]= fqv[92];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= w;
	goto CON84816;
CON84949:
	local[6]= NIL;
CON84816:
	w = local[6];
	local[0]= w;
BLK84762:
	ctx->vsp=local; return(local[0]);}

/*:transform*/
static pointer M84961cascaded_coords_transform(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT84965;}
	local[0]= fqv[13];
ENT84965:
ENT84964:
	if (n>4) maerror();
	local[1]= local[0];
	w = fqv[93];
	if (memq(local[1],w)!=NIL) goto OR84988;
	local[1]= local[0];
	if (argv[0]==local[1]) goto OR84988;
	goto CON84987;
OR84988:
	local[1]= argv[0];
	local[2]= argv[2];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F80632transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON84985;
CON84987:
	local[1]= local[0];
	w = fqv[94];
	if (memq(local[1],w)!=NIL) goto OR85009;
	local[1]= local[0];
	if (argv[0]->c.obj.iv[3]==local[1]) goto OR85009;
	goto CON85008;
OR85009:
	local[1]= argv[2];
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F80632transform_coords(ctx,3,local+1); /*transform-coords*/
	local[1]= w;
	goto CON84985;
CON85008:
	local[1]= local[0];
	w = fqv[95];
	if (memq(local[1],w)!=NIL) goto OR85030;
	local[1]= local[0];
	local[2]= loadglobal(fqv[8]);
	ctx->vsp=local+3;
	w=(pointer)EQUAL(ctx,2,local+1); /*equal*/
	if (w!=NIL) goto OR85030;
	goto CON85029;
OR85030:
	local[1]= argv[0];
	local[2]= fqv[19];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= argv[2];
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= local[1];
	local[3]= fqv[20];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,3,local+2); /*transform-coords*/
	local[1]= w;
	goto CON84985;
CON85029:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F80612coordinates_p(ctx,1,local+1); /*coordinates-p*/
	if (w==NIL) goto CON85085;
	local[1]= argv[0];
	local[2]= fqv[19];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= local[0];
	local[3]= fqv[20];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= argv[2];
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= local[0];
	local[3]= fqv[18];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,3,local+2); /*transform-coords*/
	local[2]= local[1];
	local[3]= fqv[20];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,3,local+2); /*transform-coords*/
	local[1]= w;
	goto CON84985;
CON85085:
	local[1]= argv[0];
	local[2]= fqv[23];
	local[3]= fqv[96];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON84985;
CON85149:
	local[1]= NIL;
CON84985:
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK84962:
	ctx->vsp=local; return(local[0]);}

/*:move-to*/
static pointer M85168cascaded_coords_move_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT85172;}
	local[0]= fqv[13];
ENT85172:
ENT85171:
	if (n>4) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)F80612coordinates_p(ctx,1,local+3); /*coordinates-p*/
	if (w!=NIL) goto IF85197;
	local[3]= fqv[97];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF85198;
IF85197:
	local[3]= NIL;
IF85198:
	local[3]= local[0];
	w = fqv[98];
	if (memq(local[3],w)!=NIL) goto OR85214;
	local[3]= local[0];
	if (argv[0]==local[3]) goto OR85214;
	goto CON85213;
OR85214:
	local[3]= argv[0];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON85211;
CON85213:
	local[3]= local[0];
	w = fqv[99];
	if (memq(local[3],w)!=NIL) goto OR85246;
	local[3]= local[0];
	if (argv[0]->c.obj.iv[3]==local[3]) goto OR85246;
	goto CON85245;
OR85246:
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON85211;
CON85245:
	local[3]= local[0];
	w = fqv[100];
	if (memq(local[3],w)!=NIL) goto OR85268;
	local[3]= local[0];
	local[4]= loadglobal(fqv[8]);
	ctx->vsp=local+5;
	w=(pointer)EQUAL(ctx,2,local+3); /*equal*/
	if (w!=NIL) goto OR85268;
	goto CON85267;
OR85268:
	local[3]= argv[0];
	local[4]= fqv[19];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[20];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON85211;
CON85267:
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)F80612coordinates_p(ctx,1,local+3); /*coordinates-p*/
	if (w==NIL) goto CON85310;
	local[3]= local[0];
	local[4]= fqv[18];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= argv[0];
	local[4]= fqv[19];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[20];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= local[2];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)F80632transform_coords(ctx,3,local+3); /*transform-coords*/
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto CON85211;
CON85310:
	local[3]= NIL;
CON85211:
	w = local[3];
	local[0]= w;
BLK85169:
	ctx->vsp=local; return(local[0]);}

/*:rotate-with-matrix*/
static pointer M85353cascaded_coords_rotate_with_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	w = fqv[101];
	if (memq(local[0],w)!=NIL) goto OR85373;
	local[0]= argv[3];
	if (argv[0]==local[0]) goto OR85373;
	goto CON85372;
OR85373:
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)MATTIMES(ctx,3,local+0); /*m**/
	local[0]= argv[0];
	local[1]= fqv[16];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto CON85370;
CON85372:
	local[0]= argv[3];
	w = fqv[102];
	if (memq(local[0],w)!=NIL) goto OR85402;
	local[0]= argv[3];
	if (argv[0]->c.obj.iv[3]==local[0]) goto OR85402;
	goto CON85401;
OR85402:
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)MATTIMES(ctx,3,local+0); /*m**/
	local[0]= argv[0];
	local[1]= fqv[16];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto CON85370;
CON85401:
	local[0]= NIL;
	local[1]= argv[0];
	local[2]= fqv[19];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1]->c.obj.iv[1];
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)F80612coordinates_p(ctx,1,local+3); /*coordinates-p*/
	if (w==NIL) goto IF85457;
	local[3]= argv[3];
	local[4]= fqv[30];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[0] = w;
	local[3]= local[0];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)MATTIMES(ctx,2,local+3); /*m**/
	argv[2] = w;
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)TRANSPOSE(ctx,1,local+4); /*transpose*/
	local[4]= w;
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,3,local+3); /*m**/
	local[3]= w;
	goto IF85458;
IF85457:
	local[3]= NIL;
IF85458:
	local[3]= argv[2];
	local[4]= local[2];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,3,local+3); /*m**/
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)TRANSPOSE(ctx,1,local+3); /*transpose*/
	local[3]= w;
	local[4]= argv[2];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,3,local+3); /*m**/
	local[3]= argv[2];
	local[4]= argv[0]->c.obj.iv[1];
	local[5]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,3,local+3); /*m**/
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= argv[0]->c.obj.iv[1];
	local[6]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[0]= w;
	goto CON85370;
CON85430:
	local[0]= NIL;
CON85370:
	w = local[0];
	local[0]= w;
BLK85354:
	ctx->vsp=local; return(local[0]);}

/*:rotate*/
static pointer M85526cascaded_coords_rotate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	if (n>=5) { local[0]=(argv[4]); goto ENT85530;}
	local[0]= fqv[13];
ENT85530:
ENT85529:
	if (n>5) maerror();
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	if (makeint((eusinteger_t)2L)!=local[1]) goto CON85554;
	local[1]= argv[0];
	local[2]= *(ovafptr(argv[1],fqv[60]));
	local[3]= fqv[70];
	local[4]= argv[2];
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)SENDMESSAGE(ctx,5,local+1); /*send-message*/
	local[1]= w;
	goto CON85552;
CON85554:
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[34]); /*float-vector-p*/
	if (w==NIL) goto CON85571;
	local[1]= argv[0];
	local[2]= fqv[35];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+3); /*rotation-matrix*/
	local[3]= w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85552;
CON85571:
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[32]); /*matrixp*/
	if (w==NIL) goto CON85588;
	local[1]= argv[0];
	local[2]= fqv[35];
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85552;
CON85588:
	local[1]= local[0];
	w = fqv[103];
	if (memq(local[1],w)!=NIL) goto OR85609;
	local[1]= local[0];
	if (argv[0]==local[1]) goto OR85609;
	goto CON85608;
OR85609:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[2];
	local[3]= argv[3];
	local[4]= NIL;
	local[5]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(pointer)ROTMAT(ctx,5,local+1); /*rotate-matrix*/
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85606;
CON85608:
	local[1]= local[0];
	w = fqv[104];
	if (memq(local[1],w)!=NIL) goto OR85639;
	local[1]= local[0];
	if (argv[0]->c.obj.iv[3]==local[1]) goto OR85639;
	goto CON85638;
OR85639:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[2];
	local[3]= argv[3];
	local[4]= T;
	local[5]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(pointer)ROTMAT(ctx,5,local+1); /*rotate-matrix*/
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85606;
CON85638:
	local[1]= argv[0];
	local[2]= fqv[35];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+3); /*rotation-matrix*/
	local[3]= w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85606;
CON85668:
	local[1]= NIL;
CON85606:
	goto CON85552;
CON85602:
	local[1]= NIL;
CON85552:
	w = local[1];
	local[0]= w;
BLK85527:
	ctx->vsp=local; return(local[0]);}

/*:orient-with-matrix*/
static pointer M85683cascaded_coords_orient_with_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	w = fqv[105];
	if (memq(local[0],w)!=NIL) goto OR85703;
	local[0]= argv[3];
	if (argv[0]==local[0]) goto OR85703;
	goto CON85702;
OR85703:
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)MATTIMES(ctx,3,local+0); /*m**/
	local[0]= argv[0];
	local[1]= fqv[16];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto CON85700;
CON85702:
	local[0]= argv[3];
	w = fqv[106];
	if (memq(local[0],w)!=NIL) goto OR85732;
	local[0]= argv[3];
	if (argv[0]->c.obj.iv[3]==local[0]) goto OR85732;
	goto CON85731;
OR85732:
	argv[0]->c.obj.iv[1] = argv[2];
	local[0]= argv[0];
	local[1]= fqv[16];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto CON85700;
CON85731:
	local[0]= NIL;
	local[1]= argv[0];
	local[2]= fqv[19];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[1]->c.obj.iv[1];
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)F80612coordinates_p(ctx,1,local+3); /*coordinates-p*/
	if (w==NIL) goto IF85789;
	local[3]= argv[3];
	local[4]= fqv[30];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[0] = w;
	local[3]= local[0];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)MATTIMES(ctx,2,local+3); /*m**/
	argv[2] = w;
	local[3]= argv[2];
	goto IF85790;
IF85789:
	local[3]= NIL;
IF85790:
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)TRANSPOSE(ctx,1,local+3); /*transpose*/
	local[3]= w;
	local[4]= argv[2];
	local[5]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(pointer)MATTIMES(ctx,3,local+3); /*m**/
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= argv[0]->c.obj.iv[1];
	local[6]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[0]= w;
	goto CON85700;
CON85762:
	local[0]= NIL;
CON85700:
	w = local[0];
	local[0]= w;
BLK85684:
	ctx->vsp=local; return(local[0]);}

/*:orient*/
static pointer M85840cascaded_coords_orient(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	if (n>=5) { local[0]=(argv[4]); goto ENT85844;}
	local[0]= fqv[13];
ENT85844:
ENT85843:
	if (n>5) maerror();
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[34]); /*float-vector-p*/
	if (w==NIL) goto CON85868;
	local[1]= argv[0];
	local[2]= fqv[42];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+3); /*rotation-matrix*/
	local[3]= w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85866;
CON85868:
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[32]); /*matrixp*/
	if (w==NIL) goto CON85885;
	local[1]= argv[0];
	local[2]= fqv[42];
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85866;
CON85885:
	local[1]= local[0];
	w = fqv[107];
	if (memq(local[1],w)!=NIL) goto OR85906;
	local[1]= local[0];
	if (argv[0]==local[1]) goto OR85906;
	goto CON85905;
OR85906:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[2];
	local[3]= argv[3];
	local[4]= NIL;
	local[5]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(pointer)ROTMAT(ctx,5,local+1); /*rotate-matrix*/
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85903;
CON85905:
	local[1]= local[0];
	w = fqv[108];
	if (memq(local[1],w)!=NIL) goto OR85936;
	local[1]= local[0];
	if (argv[0]->c.obj.iv[3]==local[1]) goto OR85936;
	goto CON85935;
OR85936:
	local[1]= argv[2];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+1); /*rotation-matrix*/
	argv[0]->c.obj.iv[1] = w;
	local[1]= argv[0];
	local[2]= fqv[16];
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85903;
CON85935:
	local[1]= argv[0];
	local[2]= fqv[42];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+3); /*rotation-matrix*/
	local[3]= w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto CON85903;
CON85969:
	local[1]= NIL;
CON85903:
	goto CON85866;
CON85899:
	local[1]= NIL;
CON85866:
	w = local[1];
	local[0]= w;
BLK85841:
	ctx->vsp=local; return(local[0]);}

/*:parent-vector*/
static pointer M85984cascaded_coords_parent_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	w = fqv[109];
	if (memq(local[0],w)!=NIL) goto OR86004;
	local[0]= argv[3];
	if (argv[0]==local[0]) goto OR86004;
	goto CON86003;
OR86004:
	local[0]= argv[0];
	local[1]= *(ovafptr(argv[1],fqv[60]));
	local[2]= fqv[47];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SENDMESSAGE(ctx,4,local+0); /*send-message*/
	local[0]= w;
	goto CON86001;
CON86003:
	local[0]= argv[3];
	w = fqv[110];
	if (memq(local[0],w)!=NIL) goto OR86029;
	local[0]= argv[3];
	if (argv[0]->c.obj.iv[3]==local[0]) goto OR86029;
	goto CON86028;
OR86029:
	local[0]= argv[2];
	goto CON86001;
CON86028:
	local[0]= argv[3];
	ctx->vsp=local+1;
	w=(pointer)F80612coordinates_p(ctx,1,local+0); /*coordinates-p*/
	if (w==NIL) goto IF86049;
	local[0]= argv[3];
	local[1]= fqv[47];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	argv[2] = w;
	local[0]= argv[2];
	goto IF86050;
IF86049:
	local[0]= NIL;
IF86050:
	if (argv[0]->c.obj.iv[3]==NIL) goto IF86069;
	local[0]= argv[0]->c.obj.iv[3];
	local[1]= fqv[88];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF86070;
IF86069:
	local[0]= argv[2];
IF86070:
	goto CON86001;
CON86045:
	local[0]= NIL;
CON86001:
	w = local[0];
	local[0]= w;
BLK85985:
	ctx->vsp=local; return(local[0]);}

/*:parent-orientation*/
static pointer M86083cascaded_coords_parent_orientation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[3];
	w = fqv[111];
	if (memq(local[0],w)!=NIL) goto OR86103;
	local[0]= argv[3];
	if (argv[0]==local[0]) goto OR86103;
	goto CON86102;
OR86103:
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TRANSFORM(ctx,2,local+0); /*transform*/
	local[0]= w;
	goto CON86100;
CON86102:
	local[0]= argv[3];
	w = fqv[112];
	if (memq(local[0],w)!=NIL) goto OR86123;
	local[0]= argv[3];
	if (argv[0]->c.obj.iv[3]==local[0]) goto OR86123;
	goto CON86122;
OR86123:
	local[0]= argv[2];
	goto CON86100;
CON86122:
	local[0]= argv[3];
	ctx->vsp=local+1;
	w=(pointer)F80612coordinates_p(ctx,1,local+0); /*coordinates-p*/
	if (w==NIL) goto IF86143;
	local[0]= argv[3];
	local[1]= fqv[30];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TRANSFORM(ctx,2,local+0); /*transform*/
	argv[2] = w;
	local[0]= argv[2];
	goto IF86144;
IF86143:
	local[0]= NIL;
IF86144:
	if (argv[0]->c.obj.iv[3]==NIL) goto IF86165;
	local[0]= argv[0]->c.obj.iv[3];
	local[1]= fqv[30];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)TRANSPOSE(ctx,1,local+0); /*transpose*/
	local[0]= w;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TRANSFORM(ctx,2,local+0); /*transform*/
	local[0]= w;
	goto IF86166;
IF86165:
	local[0]= argv[2];
IF86166:
	goto CON86100;
CON86139:
	local[0]= NIL;
CON86100:
	w = local[0];
	local[0]= w;
BLK86084:
	ctx->vsp=local; return(local[0]);}

/*:manager*/
static pointer M86183cascaded_coords_manager(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT86187;}
	local[0]= NIL;
ENT86187:
ENT86186:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF86203;
	argv[0]->c.obj.iv[6] = local[0];
	local[1]= argv[0]->c.obj.iv[6];
	goto IF86204;
IF86203:
	local[1]= NIL;
IF86204:
	w = argv[0]->c.obj.iv[6];
	local[0]= w;
BLK86184:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M86219cascaded_coords_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST86222:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[113], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY86235;
	local[1] = NIL;
KEY86235:
	if (n & (1<<1)) goto KEY86240;
	local[2] = NIL;
KEY86240:
	local[3]= (pointer)get_sym_func(fqv[114]);
	local[4]= argv[0];
	local[5]= *(ovafptr(argv[1],fqv[60]));
	local[6]= fqv[115];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,5,local+3); /*apply*/
	argv[0]->c.obj.iv[6] = argv[0];
	argv[0]->c.obj.iv[7] = T;
	local[3]= loadglobal(fqv[0]);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,1,local+3); /*instantiate*/
	local[3]= w;
	local[4]= local[3];
	local[5]= fqv[115];
	local[6]= fqv[116];
	local[7]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+8;
	w=(*ftab[3])(ctx,1,local+7,&ftab[3],fqv[5]); /*copy-matrix*/
	local[7]= w;
	local[8]= fqv[117];
	local[9]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+10;
	w=(pointer)COPYSEQ(ctx,1,local+9); /*copy-seq*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,6,local+4); /*send*/
	w = local[3];
	argv[0]->c.obj.iv[5] = w;
	if (local[1]==NIL) goto IF86318;
	local[3]= local[1];
	local[4]= fqv[118];
	local[5]= argv[0];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= w;
	goto IF86319;
IF86318:
	local[3]= NIL;
IF86319:
	w = argv[0];
	local[0]= w;
BLK86220:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO83891(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= argv[0];
	local[2]= fqv[119];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*transform-coords*/
static pointer F80632transform_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT86358;}
	local[0]= argv[0];
	local[1]= fqv[82];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= loadglobal(fqv[0]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[16];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[5])(ctx,1,local+4,&ftab[5],fqv[10]); /*unit-matrix*/
	local[4]= w;
	local[5]= loadglobal(fqv[11]);
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,2,local+5); /*instantiate*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	w = local[1];
	local[0]= w;
ENT86358:
ENT86357:
	if (n>3) maerror();
	local[1]= argv[0];
	if (local[0]!=local[1]) goto IF86421;
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
	goto IF86422;
IF86421:
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
IF86422:
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[1]->c.obj.iv[1];
	local[3]= local[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)MATTIMES(ctx,3,local+1); /*m**/
	w = local[0];
	local[0]= w;
BLK86355:
	ctx->vsp=local; return(local[0]);}

/*transform-coords**/
static pointer F80634transform_coords_(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST86505:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)F80632transform_coords(ctx,2,local+3); /*transform-coords*/
	local[2] = w;
	local[3]= NIL;
	local[4]= local[0];
WHL86549:
	if (local[4]==NIL) goto WHX86550;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[2];
	local[6]= local[3];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)F80632transform_coords(ctx,3,local+5); /*transform-coords*/
	goto WHL86549;
WHX86550:
	local[5]= NIL;
BLK86551:
	w = NIL;
	w = local[2];
	local[0]= w;
BLK86503:
	ctx->vsp=local; return(local[0]);}

/*transform-vector*/
static pointer F80636transform_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)TRANSFORM(ctx,2,local+0); /*transform*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(pointer)VPLUS(ctx,2,local+0); /*v+*/
	local[0]= w;
BLK86610:
	ctx->vsp=local; return(local[0]);}

/*make-coords*/
static pointer F80638make_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST86646:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= (pointer)get_sym_func(fqv[120]);
	local[2]= loadglobal(fqv[0]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= fqv[115];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[0]= w;
BLK86644:
	ctx->vsp=local; return(local[0]);}

/*make-cascoords*/
static pointer F80640make_cascoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST86669:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= (pointer)get_sym_func(fqv[120]);
	local[2]= loadglobal(fqv[121]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= fqv[115];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[0]= w;
BLK86667:
	ctx->vsp=local; return(local[0]);}

/*coords*/
static pointer F80642coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST86693:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= (pointer)get_sym_func(fqv[120]);
	local[2]= loadglobal(fqv[0]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= fqv[115];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[0]= w;
BLK86691:
	ctx->vsp=local; return(local[0]);}

/*cascoords*/
static pointer F80644cascoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST86716:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= (pointer)get_sym_func(fqv[120]);
	local[2]= loadglobal(fqv[121]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= fqv[115];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[0]= w;
BLK86714:
	ctx->vsp=local; return(local[0]);}

/*wrt*/
static pointer F80646wrt(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[47];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK86737:
	ctx->vsp=local; return(local[0]);}

/*coordinates-distance*/
static pointer F80651coordinates_distance(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[0];
	local[2]= fqv[75];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[59];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)VNORM(ctx,1,local+2); /*norm*/
	local[2]= w;
	local[3]= local[1];
	local[4]= fqv[30];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)ROTANGLE(ctx,1,local+3); /*rotation-angle*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[0]= w;
BLK86761:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___coordinates(ctx,n,argv,env)
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
	local[0]= fqv[122];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w!=NIL) goto IF86809;
	local[0]= fqv[123];
	local[1]= fqv[124];
	local[2]= fqv[125];
	ctx->vsp=local+3;
	w=(*ftab[15])(ctx,3,local+0,&ftab[15],fqv[126]); /*make-package*/
	local[0]= fqv[127];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF86828;
	local[0]= fqv[128];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[129],w);
	goto IF86829;
IF86828:
	local[0]= fqv[130];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF86829:
	local[0]= fqv[131];
	ctx->vsp=local+1;
	w=(*ftab[16])(ctx,1,local+0,&ftab[16],fqv[132]); /*use-package*/
	local[0]= w;
	goto IF86810;
IF86809:
	local[0]= NIL;
IF86810:
	local[0]= fqv[133];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF86850;
	local[0]= fqv[134];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[129],w);
	goto IF86851;
IF86850:
	local[0]= fqv[135];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF86851:
	local[0]= fqv[136];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[137];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[138];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[139];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[140];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[0];
	local[1]= fqv[141];
	local[2]= fqv[0];
	local[3]= fqv[142];
	local[4]= loadglobal(fqv[143]);
	local[5]= fqv[144];
	local[6]= fqv[145];
	local[7]= fqv[146];
	local[8]= NIL;
	local[9]= fqv[147];
	local[10]= NIL;
	local[11]= fqv[148];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[149];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[17])(ctx,13,local+2,&ftab[17],fqv[150]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[151],module,F80612coordinates_p,fqv[152]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80725coordinates_dimension,fqv[82],fqv[0],fqv[153]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80742coordinates_rot,fqv[116],fqv[0],fqv[154]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80758coordinates_pos,fqv[117],fqv[0],fqv[155]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80774coordinates_x_axis,fqv[156],fqv[0],fqv[157]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80792coordinates_y_axis,fqv[158],fqv[0],fqv[159]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80809coordinates_z_axis,fqv[160],fqv[0],fqv[161]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80826coordinates_name,fqv[2],fqv[0],fqv[162]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80866coordinates_newcoords,fqv[16],fqv[0],fqv[163]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80924coordinates_replace_rot,fqv[164],fqv[0],fqv[165]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80945coordinates_replace_pos,fqv[166],fqv[0],fqv[167]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M80966coordinates_replace_coords,fqv[69],fqv[0],fqv[168]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81031coordinates_copy_rot,fqv[169],fqv[0],fqv[170]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81049coordinates_copy_pos,fqv[171],fqv[0],fqv[172]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81066coordinates_copy_coords,fqv[77],fqv[0],fqv[173]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81134coordinates_coords,fqv[7],fqv[0],fqv[174]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81202coordinates_worldrot,fqv[30],fqv[0],fqv[175]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81218coordinates_worldpos,fqv[59],fqv[0],fqv[176]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81234coordinates_worldcoords,fqv[18],fqv[0],fqv[177]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81250coordinates_copy_worldcoords,fqv[178],fqv[0],fqv[179]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81269coordinates_parentcoords,fqv[19],fqv[0],fqv[180]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81286coordinates_changed,fqv[12],fqv[0],fqv[181]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81301coordinates_reset_coords,fqv[182],fqv[0],fqv[183]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81355coordinates_move_to,fqv[184],fqv[0],fqv[185]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81500coordinates_rotate_vector,fqv[87],fqv[0],fqv[186]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81520coordinates_transform_vector,fqv[47],fqv[0],fqv[187]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81543coordinates_inverse_transform_vector,fqv[88],fqv[0],fqv[188]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81583coordinates_inverse_transformation,fqv[20],fqv[0],fqv[189]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81669coordinates_transformation,fqv[75],fqv[0],fqv[190]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81825coordinates_transform,fqv[191],fqv[0],fqv[192]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M81945coordinates_rotate_with_matrix,fqv[35],fqv[0],fqv[193]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82062coordinates_rotate,fqv[70],fqv[0],fqv[194]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82248coordinates_orient_with_matrix,fqv[42],fqv[0],fqv[195]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82348coordinates_orient,fqv[196],fqv[0],fqv[197]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82498coordinates_parent_vector,fqv[54],fqv[0],fqv[198]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82581coordinates_parent_orientation,fqv[53],fqv[0],fqv[199]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82664coordinates_translate,fqv[200],fqv[0],fqv[201]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82706coordinates_locate,fqv[202],fqv[0],fqv[203]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82747coordinates_scale,fqv[204],fqv[0],fqv[205]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82795coordinates_euler,fqv[67],fqv[0],fqv[206]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82827coordinates_euler_angle,fqv[207],fqv[0],fqv[208]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82844coordinates_rpy,fqv[68],fqv[0],fqv[209]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82876coordinates_rpy_angle,fqv[210],fqv[0],fqv[211]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82893coordinates_rotation_angle,fqv[212],fqv[0],fqv[213]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M82910coordinates_4x4,fqv[71],fqv[0],fqv[214]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M83177coordinates_prin1,fqv[61],fqv[0],fqv[215]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M83341coordinates_create,fqv[6],fqv[0],fqv[216]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M83379coordinates_init,fqv[115],fqv[0],fqv[217]);
	local[0]= fqv[121];
	local[1]= fqv[141];
	local[2]= fqv[121];
	local[3]= fqv[142];
	local[4]= loadglobal(fqv[0]);
	local[5]= fqv[144];
	local[6]= fqv[218];
	local[7]= fqv[146];
	local[8]= NIL;
	local[9]= fqv[147];
	local[10]= NIL;
	local[11]= fqv[148];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[149];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[17])(ctx,13,local+2,&ftab[17],fqv[150]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M83845cascaded_coords_parent,fqv[219],fqv[121],fqv[220]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M83861cascaded_coords_descendants,fqv[221],fqv[121],fqv[222]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M83877cascaded_coords_inheritance,fqv[119],fqv[121],fqv[223]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M83897cascaded_coords_leaves,fqv[72],fqv[121],fqv[224]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M83927cascaded_coords_assoc,fqv[118],fqv[121],fqv[225]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84030cascaded_coords_dissoc,fqv[80],fqv[121],fqv[226]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84116cascaded_coords_clear_assoc,fqv[227],fqv[121],fqv[228]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84207cascaded_coords_obey,fqv[76],fqv[121],fqv[229]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84244cascaded_coords_disobey,fqv[79],fqv[121],fqv[230]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84275cascaded_coords_newcoords,fqv[16],fqv[121],fqv[231]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84317cascaded_coords_changed,fqv[12],fqv[121],fqv[232]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84353cascaded_coords_worldrot,fqv[30],fqv[121],fqv[233]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84377cascaded_coords_worldpos,fqv[59],fqv[121],fqv[234]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84401cascaded_coords_worldcoords,fqv[18],fqv[121],fqv[235]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84462cascaded_coords_copy_worldcoords,fqv[178],fqv[121],fqv[236]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84544cascaded_coords_update,fqv[81],fqv[121],fqv[237]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84558cascaded_coords_parentcoords,fqv[19],fqv[121],fqv[238]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84628cascaded_coords_transform_vector,fqv[47],fqv[121],fqv[239]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84654cascaded_coords_rotate_vector,fqv[87],fqv[121],fqv[240]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84680cascaded_coords_inverse_transform_vector,fqv[88],fqv[121],fqv[241]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84706cascaded_coords_inverse_transformation,fqv[20],fqv[121],fqv[242]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84761cascaded_coords_transformation,fqv[75],fqv[121],fqv[243]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M84961cascaded_coords_transform,fqv[191],fqv[121],fqv[244]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M85168cascaded_coords_move_to,fqv[184],fqv[121],fqv[245]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M85353cascaded_coords_rotate_with_matrix,fqv[35],fqv[121],fqv[246]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M85526cascaded_coords_rotate,fqv[70],fqv[121],fqv[247]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M85683cascaded_coords_orient_with_matrix,fqv[42],fqv[121],fqv[248]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M85840cascaded_coords_orient,fqv[196],fqv[121],fqv[249]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M85984cascaded_coords_parent_vector,fqv[54],fqv[121],fqv[250]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M86083cascaded_coords_parent_orientation,fqv[53],fqv[121],fqv[251]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M86183cascaded_coords_manager,fqv[252],fqv[121],fqv[253]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M86219cascaded_coords_init,fqv[115],fqv[121],fqv[254]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[255],module,F80632transform_coords,fqv[256]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[257],module,F80634transform_coords_,fqv[258]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[259],module,F80636transform_vector,fqv[260]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[261],module,F80638make_coords,fqv[262]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[263],module,F80640make_cascoords,fqv[264]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[265],module,F80642coords,fqv[266]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[267],module,F80644cascoords,fqv[268]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[269],module,F80646wrt,fqv[270]);
	local[0]= fqv[8];
	local[1]= fqv[271];
	local[2]= loadglobal(fqv[0]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[115];
	local[5]= fqv[2];
	local[6]= fqv[8];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	w = local[2];
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[85];
	local[1]= fqv[271];
	local[2]= loadglobal(fqv[0]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[115];
	local[5]= fqv[82];
	local[6]= makeint((eusinteger_t)2L);
	local[7]= fqv[2];
	local[8]= fqv[85];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,6,local+3); /*send*/
	w = local[2];
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[272],module,F80651coordinates_distance,fqv[273]);
	local[0]= fqv[274];
	local[1]= fqv[275];
	ctx->vsp=local+2;
	w=(*ftab[18])(ctx,2,local+0,&ftab[18],fqv[276]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<19; i++) ftab[i]=fcallx;
}
