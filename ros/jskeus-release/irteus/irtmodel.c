/* ./irtmodel.c :  entry=irtmodel */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtmodel.h"
#pragma init (register_irtmodel)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtmodel();
extern pointer build_quote_vector();
static int register_irtmodel()
  { add_module_initializer("___irtmodel", ___irtmodel);}

static pointer F759calc_jacobian_default_rotate_vector();
static pointer F760calc_jacobian_rotational();
static pointer F761calc_jacobian_linear();
static pointer F762calc_angle_speed_gain_scalar();
static pointer F763calc_angle_speed_gain_vector();
static pointer F764all_child_links();
static pointer F765calc_dif_with_axis();
static pointer F766calc_target_joint_dimension();
static pointer F767calc_joint_angle_min_max_for_limit_calculation();
static pointer F768joint_angle_limit_weight();
static pointer F769joint_angle_limit_nspace();
static pointer F770calc_jacobian_from_link_list_including_robot_and_obj_virtual_joint();
static pointer F771append_obj_virtual_joint();
static pointer F772append_multiple_obj_virtual_joint();
static pointer F773eusmodel_validity_check_one();
static pointer F774eusmodel_validity_check();

/*:init*/
static pointer M775joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[0], &argv[2], n-2, local+0, 1);
	if (n & (1<<0)) goto KEY777;
	local[9]= NIL;
	local[10]= fqv[1];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)ADDRESS(ctx,1,local+11); /*system:address*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)XFORMAT(ctx,3,local+9); /*format*/
	local[9]= w;
	local[10]= fqv[2];
	ctx->vsp=local+11;
	w=(pointer)INTERN(ctx,2,local+9); /*intern*/
	local[0] = w;
KEY777:
	if (n & (1<<1)) goto KEY778;
	local[1] = NIL;
KEY778:
	if (n & (1<<2)) goto KEY779;
	local[2] = NIL;
KEY779:
	if (n & (1<<3)) goto KEY780;
	local[3] = makeint((eusinteger_t)-90L);
KEY780:
	if (n & (1<<4)) goto KEY781;
	local[4] = makeint((eusinteger_t)90L);
KEY781:
	if (n & (1<<5)) goto KEY782;
	local[5] = NIL;
KEY782:
	if (n & (1<<6)) goto KEY783;
	local[6] = NIL;
KEY783:
	if (n & (1<<7)) goto KEY784;
	local[7] = NIL;
KEY784:
	if (n & (1<<8)) goto KEY785;
	local[8] = NIL;
KEY785:
	local[9]= argv[0];
	local[10]= fqv[3];
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	argv[0]->c.obj.iv[1] = local[2];
	argv[0]->c.obj.iv[2] = local[1];
	argv[0]->c.obj.iv[4] = local[3];
	argv[0]->c.obj.iv[5] = local[4];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[0])(ctx,1,local+9,&ftab[0],fqv[4]); /*float-vector-p*/
	if (w==NIL) goto AND789;
	local[9]= local[5];
	local[10]= loadglobal(fqv[5]);
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)LENGTH(ctx,1,local+11); /*length*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)INSTANTIATE(ctx,2,local+10); /*instantiate*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)VGREATERP(ctx,2,local+9); /*v>*/
	if (w!=NIL) goto AND789;
	goto OR788;
AND789:
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[0])(ctx,1,local+9,&ftab[0],fqv[4]); /*float-vector-p*/
	if (w!=NIL) goto AND790;
	local[9]= local[5];
	local[10]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+11;
	w=(pointer)LESSP(ctx,2,local+9); /*<*/
	if (w==NIL) goto AND790;
	goto OR788;
AND790:
	goto IF786;
OR788:
	local[9]= fqv[6];
	local[10]= local[0];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)SIGERROR(ctx,3,local+9); /*error*/
	local[9]= w;
	goto IF787;
IF786:
	local[9]= NIL;
IF787:
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[0])(ctx,1,local+9,&ftab[0],fqv[4]); /*float-vector-p*/
	if (w==NIL) goto AND794;
	local[9]= local[6];
	local[10]= loadglobal(fqv[5]);
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)LENGTH(ctx,1,local+11); /*length*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)INSTANTIATE(ctx,2,local+10); /*instantiate*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)VGREATERP(ctx,2,local+9); /*v>*/
	if (w!=NIL) goto AND794;
	goto OR793;
AND794:
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[0])(ctx,1,local+9,&ftab[0],fqv[4]); /*float-vector-p*/
	if (w!=NIL) goto AND795;
	local[9]= local[6];
	local[10]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+11;
	w=(pointer)LESSP(ctx,2,local+9); /*<*/
	if (w==NIL) goto AND795;
	goto OR793;
AND795:
	goto IF791;
OR793:
	local[9]= fqv[7];
	local[10]= local[0];
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)SIGERROR(ctx,3,local+9); /*error*/
	local[9]= w;
	goto IF792;
IF791:
	local[9]= NIL;
IF792:
	local[9]= argv[0];
	local[10]= fqv[8];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= argv[0];
	local[10]= fqv[9];
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= argv[0];
	local[10]= fqv[10];
	local[11]= local[7];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= argv[0];
	local[10]= fqv[11];
	local[11]= local[8];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= argv[0]->c.obj.iv[2];
	local[10]= fqv[12];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	argv[0]->c.obj.iv[6] = w;
	w = argv[0];
	local[0]= w;
BLK776:
	ctx->vsp=local; return(local[0]);}

/*:min-angle*/
static pointer M796joint_min_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT799;}
	local[0]= NIL;
ENT799:
ENT798:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF800;
	argv[0]->c.obj.iv[4] = local[0];
	local[1]= argv[0]->c.obj.iv[4];
	goto IF801;
IF800:
	local[1]= NIL;
IF801:
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK797:
	ctx->vsp=local; return(local[0]);}

/*:max-angle*/
static pointer M802joint_max_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT805;}
	local[0]= NIL;
ENT805:
ENT804:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF806;
	argv[0]->c.obj.iv[5] = local[0];
	local[1]= argv[0]->c.obj.iv[5];
	goto IF807;
IF806:
	local[1]= NIL;
IF807:
	w = argv[0]->c.obj.iv[5];
	local[0]= w;
BLK803:
	ctx->vsp=local; return(local[0]);}

/*:parent-link*/
static pointer M808joint_parent_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST810:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[13]); /*forward-message-to*/
	local[0]= w;
BLK809:
	ctx->vsp=local; return(local[0]);}

/*:child-link*/
static pointer M811joint_child_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST813:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[13]); /*forward-message-to*/
	local[0]= w;
BLK812:
	ctx->vsp=local; return(local[0]);}

/*:calc-dav-gain*/
static pointer M814joint_calc_dav_gain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= fqv[14];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[15]); /*warn*/
	local[0]= w;
BLK815:
	ctx->vsp=local; return(local[0]);}

/*:joint-dof*/
static pointer M816joint_joint_dof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[16];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[15]); /*warn*/
	local[0]= w;
BLK817:
	ctx->vsp=local; return(local[0]);}

/*:speed-to-angle*/
static pointer M818joint_speed_to_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST820:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= fqv[17];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[15]); /*warn*/
	local[0]= w;
BLK819:
	ctx->vsp=local; return(local[0]);}

/*:angle-to-speed*/
static pointer M821joint_angle_to_speed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST823:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= fqv[18];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[15]); /*warn*/
	local[0]= w;
BLK822:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian*/
static pointer M824joint_calc_jacobian(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST826:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= fqv[19];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[15]); /*warn*/
	local[0]= w;
BLK825:
	ctx->vsp=local; return(local[0]);}

/*:joint-velocity*/
static pointer M827joint_joint_velocity(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT830;}
	local[0]= NIL;
ENT830:
ENT829:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF831;
	argv[0]->c.obj.iv[7] = local[0];
	local[1]= argv[0]->c.obj.iv[7];
	goto IF832;
IF831:
	local[1]= argv[0]->c.obj.iv[7];
IF832:
	w = local[1];
	local[0]= w;
BLK828:
	ctx->vsp=local; return(local[0]);}

/*:joint-acceleration*/
static pointer M833joint_joint_acceleration(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT836;}
	local[0]= NIL;
ENT836:
ENT835:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF837;
	argv[0]->c.obj.iv[8] = local[0];
	local[1]= argv[0]->c.obj.iv[8];
	goto IF838;
IF837:
	local[1]= argv[0]->c.obj.iv[8];
IF838:
	w = local[1];
	local[0]= w;
BLK834:
	ctx->vsp=local; return(local[0]);}

/*:joint-torque*/
static pointer M839joint_joint_torque(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT842;}
	local[0]= NIL;
ENT842:
ENT841:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF843;
	argv[0]->c.obj.iv[9] = local[0];
	local[1]= argv[0]->c.obj.iv[9];
	goto IF844;
IF843:
	local[1]= argv[0]->c.obj.iv[9];
IF844:
	w = local[1];
	local[0]= w;
BLK840:
	ctx->vsp=local; return(local[0]);}

/*:max-joint-velocity*/
static pointer M845joint_max_joint_velocity(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT848;}
	local[0]= NIL;
ENT848:
ENT847:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF849;
	argv[0]->c.obj.iv[10] = local[0];
	local[1]= argv[0]->c.obj.iv[10];
	goto IF850;
IF849:
	local[1]= argv[0]->c.obj.iv[10];
IF850:
	w = local[1];
	local[0]= w;
BLK846:
	ctx->vsp=local; return(local[0]);}

/*:max-joint-torque*/
static pointer M851joint_max_joint_torque(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT854;}
	local[0]= NIL;
ENT854:
ENT853:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF855;
	argv[0]->c.obj.iv[11] = local[0];
	local[1]= argv[0]->c.obj.iv[11];
	goto IF856;
IF855:
	local[1]= argv[0]->c.obj.iv[11];
IF856:
	w = local[1];
	local[0]= w;
BLK852:
	ctx->vsp=local; return(local[0]);}

/*:joint-min-max-table*/
static pointer M857joint_joint_min_max_table(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT860;}
	local[0]= NIL;
ENT860:
ENT859:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF861;
	argv[0]->c.obj.iv[12] = local[0];
	local[1]= argv[0]->c.obj.iv[12];
	goto IF862;
IF861:
	local[1]= argv[0]->c.obj.iv[12];
IF862:
	w = local[1];
	local[0]= w;
BLK858:
	ctx->vsp=local; return(local[0]);}

/*:joint-min-max-target*/
static pointer M863joint_joint_min_max_target(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT866;}
	local[0]= NIL;
ENT866:
ENT865:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF867;
	argv[0]->c.obj.iv[13] = local[0];
	local[1]= argv[0]->c.obj.iv[13];
	goto IF868;
IF867:
	local[1]= argv[0]->c.obj.iv[13];
IF868:
	w = local[1];
	local[0]= w;
BLK864:
	ctx->vsp=local; return(local[0]);}

/*:joint-min-max-table-angle-interpolate*/
static pointer M869joint_joint_min_max_table_angle_interpolate(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)FLOOR(ctx,1,local+0); /*floor*/
	local[0]= w;
	local[1]= local[0];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO871,env,argv,local);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[2]= w;
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)EUSFLOAT(ctx,1,local+4); /*float*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MINUS(ctx,2,local+3); /*-*/
	local[3]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	local[5]= makeint((eusinteger_t)1L);
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)TIMES(ctx,2,local+5); /***/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[0]= w;
BLK870:
	ctx->vsp=local; return(local[0]);}

/*:joint-min-max-table-min-angle*/
static pointer M872joint_joint_min_max_table_min_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT875;}
	local[0]= argv[0]->c.obj.iv[13];
	local[1]= fqv[20];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
ENT875:
ENT874:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[21];
	local[3]= local[0];
	local[4]= fqv[22];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK873:
	ctx->vsp=local; return(local[0]);}

/*:joint-min-max-table-max-angle*/
static pointer M876joint_joint_min_max_table_max_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT879;}
	local[0]= argv[0]->c.obj.iv[13];
	local[1]= fqv[20];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
ENT879:
ENT878:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[21];
	local[3]= local[0];
	local[4]= fqv[23];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[0]= w;
BLK877:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO871(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0]->c.obj.iv[12];
	local[1]= env->c.clo.env1[3];
	local[2]= local[1];
	if (fqv[22]!=local[2]) goto IF881;
	local[2]= makeint((eusinteger_t)1L);
	goto IF882;
IF881:
	local[2]= local[1];
	if (fqv[23]!=local[2]) goto IF883;
	local[2]= makeint((eusinteger_t)2L);
	goto IF884;
IF883:
	if (T==NIL) goto IF885;
	local[2]= NIL;
	goto IF886;
IF885:
	local[2]= NIL;
IF886:
IF884:
IF882:
	w = local[2];
	local[1]= w;
	local[2]= env->c.clo.env1[0]->c.obj.iv[12];
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)AREF(ctx,3,local+2); /*aref*/
	local[2]= w;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)MAX(ctx,2,local+2); /*max*/
	local[2]= w;
	local[3]= env->c.clo.env1[0]->c.obj.iv[12];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= env->c.clo.env1[0]->c.obj.iv[12];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(*ftab[3])(ctx,2,local+5,&ftab[3],fqv[24]); /*array-dimension*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,3,local+3); /*aref*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)MIN(ctx,2,local+2); /*min*/
	local[2]= w;
	local[3]= env->c.clo.env1[0]->c.obj.iv[12];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,3,local+3); /*aref*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)MINUS(ctx,2,local+2); /*-*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)ROUND(ctx,1,local+2); /*round*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)AREF(ctx,3,local+0); /*aref*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*calc-jacobian-default-rotate-vector*/
static pointer F759calc_jacobian_default_rotate_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=6) maerror();
	if (argv[2]==NIL) goto IF888;
	local[0]= makeflt(-1.0000000000000000000000e+00);
	goto IF889;
IF888:
	local[0]= makeflt(1.0000000000000000000000e+00);
IF889:
	local[1]= argv[1];
	local[2]= fqv[25];
	local[3]= argv[0];
	local[4]= argv[4];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	local[2]= argv[4];
	ctx->vsp=local+3;
	w=(*ftab[4])(ctx,2,local+1,&ftab[4],fqv[26]); /*normalize-vector*/
	local[1]= w;
	local[2]= argv[4];
	ctx->vsp=local+3;
	w=(pointer)SCALEVEC(ctx,3,local+0); /*scale*/
	argv[4] = w;
	local[0]= argv[3];
	local[1]= fqv[27];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[5];
	ctx->vsp=local+2;
	w=(pointer)TRANSPOSE(ctx,2,local+0); /*transpose*/
	local[0]= w;
	local[1]= argv[4];
	local[2]= argv[4];
	ctx->vsp=local+3;
	w=(pointer)TRANSFORM(ctx,3,local+0); /*transform*/
	local[0]= w;
BLK887:
	ctx->vsp=local; return(local[0]);}

/*calc-jacobian-rotational*/
static pointer F760calc_jacobian_rotational(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=19) maerror();
	w = argv[3];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[28],w);
	local[3]= argv[4];
	local[4]= argv[6];
	local[5]= argv[7];
	local[6]= argv[9];
	local[7]= argv[15];
	local[8]= argv[18];
	ctx->vsp=local+9;
	w=(pointer)F759calc_jacobian_default_rotate_vector(ctx,6,local+3); /*calc-jacobian-default-rotate-vector*/
	local[3]= w;
	local[4]= makeflt(1.0000000000000000208167e-03);
	local[5]= argv[9];
	local[6]= fqv[27];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= argv[18];
	ctx->vsp=local+7;
	w=(pointer)TRANSPOSE(ctx,2,local+5); /*transpose*/
	local[5]= w;
	local[6]= argv[8];
	local[7]= fqv[29];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= argv[5];
	local[8]= fqv[29];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	local[8]= argv[16];
	ctx->vsp=local+9;
	w=(pointer)VMINUS(ctx,3,local+6); /*v-*/
	local[6]= w;
	local[7]= argv[16];
	ctx->vsp=local+8;
	w=(pointer)TRANSFORM(ctx,3,local+5); /*transform*/
	local[5]= w;
	local[6]= argv[16];
	ctx->vsp=local+7;
	w=(pointer)SCALEVEC(ctx,3,local+4); /*scale*/
	local[4]= w;
	local[5]= local[3];
	local[6]= local[4];
	local[7]= argv[17];
	ctx->vsp=local+8;
	w=(pointer)VCROSSPRODUCT(ctx,3,local+5); /*v**/
	local[5]= w;
	local[6]= local[5];
	local[7]= argv[11];
	local[8]= argv[12];
	local[9]= argv[13];
	local[10]= argv[14];
	ctx->vsp=local+11;
	w=(pointer)F765calc_dif_with_axis(ctx,5,local+6); /*calc-dif-with-axis*/
	local[5] = w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
WHL892:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX893;
	local[8]= argv[0];
	local[9]= local[6];
	local[10]= argv[1];
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	local[10]= argv[2];
	local[11]= local[5];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)ASET(ctx,4,local+8); /*aset*/
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL892;
WHX893:
	local[8]= NIL;
BLK894:
	w = NIL;
	local[6]= local[3];
	local[7]= argv[10];
	local[8]= argv[12];
	local[9]= argv[13];
	local[10]= argv[14];
	ctx->vsp=local+11;
	w=(pointer)F765calc_dif_with_axis(ctx,5,local+6); /*calc-dif-with-axis*/
	local[3] = w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
WHL896:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX897;
	local[8]= argv[0];
	local[9]= local[6];
	local[10]= argv[1];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)LENGTH(ctx,1,local+11); /*length*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,3,local+9); /*+*/
	local[9]= w;
	local[10]= argv[2];
	local[11]= local[3];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)ASET(ctx,4,local+8); /*aset*/
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL896;
WHX897:
	local[8]= NIL;
BLK898:
	w = NIL;
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK890:
	ctx->vsp=local; return(local[0]);}

/*calc-jacobian-linear*/
static pointer F761calc_jacobian_linear(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=19) maerror();
	w = argv[3];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[28],w);
	local[3]= argv[4];
	local[4]= argv[6];
	local[5]= argv[7];
	local[6]= argv[9];
	local[7]= argv[15];
	local[8]= argv[18];
	ctx->vsp=local+9;
	w=(pointer)F759calc_jacobian_default_rotate_vector(ctx,6,local+3); /*calc-jacobian-default-rotate-vector*/
	local[3]= w;
	local[4]= fqv[30];
	local[5]= local[3];
	local[6]= argv[11];
	local[7]= argv[12];
	local[8]= argv[13];
	local[9]= argv[14];
	ctx->vsp=local+10;
	w=(pointer)F765calc_dif_with_axis(ctx,5,local+5); /*calc-dif-with-axis*/
	local[3] = w;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
WHL901:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX902;
	local[7]= argv[0];
	local[8]= local[5];
	local[9]= argv[1];
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[8]= w;
	local[9]= argv[2];
	local[10]= local[3];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)ASET(ctx,4,local+7); /*aset*/
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL901;
WHX902:
	local[7]= NIL;
BLK903:
	w = NIL;
	local[5]= local[4];
	local[6]= argv[10];
	local[7]= argv[12];
	local[8]= argv[13];
	local[9]= argv[14];
	ctx->vsp=local+10;
	w=(pointer)F765calc_dif_with_axis(ctx,5,local+5); /*calc-dif-with-axis*/
	local[4] = w;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
WHL905:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX906;
	local[7]= argv[0];
	local[8]= local[5];
	local[9]= argv[1];
	local[10]= local[3];
	ctx->vsp=local+11;
	w=(pointer)LENGTH(ctx,1,local+10); /*length*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,3,local+8); /*+*/
	local[8]= w;
	local[9]= argv[2];
	local[10]= local[4];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)ASET(ctx,4,local+7); /*aset*/
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL905;
WHX906:
	local[7]= NIL;
BLK907:
	w = NIL;
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK899:
	ctx->vsp=local; return(local[0]);}

/*calc-angle-speed-gain-scalar*/
static pointer F762calc_angle_speed_gain_scalar(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0];
	local[1]= fqv[8];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[1];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)QUOTIENT(ctx,2,local+1); /*/*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)QUOTIENT(ctx,2,local+0); /*/*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)ABS(ctx,1,local+0); /*abs*/
	local[0]= w;
	local[1]= local[0];
	local[2]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+3;
	w=(pointer)LESSP(ctx,2,local+1); /*<*/
	if (w==NIL) goto IF909;
	local[1]= local[0];
	goto IF910;
IF909:
	local[1]= makeflt(1.0000000000000000000000e+00);
IF910:
	w = local[1];
	local[0]= w;
BLK908:
	ctx->vsp=local; return(local[0]);}

/*calc-angle-speed-gain-vector*/
static pointer F763calc_angle_speed_gain_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= makeflt(1.0000000000000000000000e+00);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0];
	local[3]= fqv[31];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
WHL913:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX914;
	local[3]= argv[0];
	local[4]= fqv[8];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= argv[1];
	local[5]= local[1];
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)QUOTIENT(ctx,2,local+3); /*/*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)ABS(ctx,1,local+3); /*abs*/
	local[3]= w;
	local[4]= local[3];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,2,local+4); /*<*/
	if (w==NIL) goto IF916;
	local[0] = local[3];
	local[4]= local[0];
	goto IF917;
IF916:
	local[4]= NIL;
IF917:
	w = local[4];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL913;
WHX914:
	local[3]= NIL;
BLK915:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK911:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M918rotational_joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST920:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[32], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY921;
	local[1] = fqv[33];
KEY921:
	if (n & (1<<1)) goto KEY922;
	local[2] = makeint((eusinteger_t)5L);
KEY922:
	if (n & (1<<2)) goto KEY923;
	local[3] = makeint((eusinteger_t)100L);
KEY923:
	argv[0]->c.obj.iv[14] = local[1];
	argv[0]->c.obj.iv[3] = makeflt(0.0000000000000000000000e+00);
	local[4]= (pointer)get_sym_func(fqv[34]);
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[35]));
	local[7]= fqv[36];
	local[8]= fqv[8];
	local[9]= local[2];
	local[10]= fqv[9];
	local[11]= local[3];
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)APPLY(ctx,9,local+4); /*apply*/
	if (argv[0]->c.obj.iv[4]!=NIL) goto IF924;
	argv[0]->c.obj.iv[4] = makeflt(-9.0000000000000000000000e+01);
	local[4]= argv[0]->c.obj.iv[4];
	goto IF925;
IF924:
	local[4]= NIL;
IF925:
	if (argv[0]->c.obj.iv[5]!=NIL) goto IF926;
	local[4]= makeflt(1.8000000000000000000000e+02);
	local[5]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	argv[0]->c.obj.iv[5] = w;
	local[4]= argv[0]->c.obj.iv[5];
	goto IF927;
IF926:
	local[4]= NIL;
IF927:
	local[4]= argv[0];
	local[5]= fqv[37];
	local[6]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= argv[0];
	local[5]= fqv[38];
	local[6]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= argv[0];
	local[5]= fqv[39];
	local[6]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	w = argv[0];
	local[0]= w;
BLK919:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle*/
static pointer M928rotational_joint_joint_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT931;}
	local[0]= NIL;
ENT931:
ENT930:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[40], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY932;
	local[1] = NIL;
KEY932:
	if (local[0]==NIL) goto IF933;
	if (argv[0]->c.obj.iv[12]==NIL) goto IF935;
	if (argv[0]->c.obj.iv[13]==NIL) goto IF935;
	local[2]= argv[0];
	local[3]= fqv[41];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	argv[0]->c.obj.iv[4] = w;
	local[2]= argv[0];
	local[3]= fqv[42];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	argv[0]->c.obj.iv[5] = w;
	local[2]= argv[0]->c.obj.iv[5];
	goto IF936;
IF935:
	local[2]= NIL;
IF936:
	if (local[1]==NIL) goto IF937;
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[0] = w;
	local[2]= local[0];
	goto IF938;
IF937:
	local[2]= NIL;
IF938:
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+4;
	w=(pointer)GREATERP(ctx,2,local+2); /*>*/
	if (w==NIL) goto CON940;
	if (local[1]!=NIL) goto IF941;
	local[2]= makeint((eusinteger_t)3L);
	local[3]= fqv[43];
	local[4]= argv[0];
	local[5]= local[0];
	local[6]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+7;
	w=(*ftab[5])(ctx,5,local+2,&ftab[5],fqv[44]); /*warning-message*/
	local[2]= w;
	goto IF942;
IF941:
	local[2]= NIL;
IF942:
	local[0] = argv[0]->c.obj.iv[5];
	local[2]= local[0];
	goto CON939;
CON940:
	local[2]= NIL;
CON939:
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,2,local+2); /*<*/
	if (w==NIL) goto CON944;
	if (local[1]!=NIL) goto IF945;
	local[2]= makeint((eusinteger_t)3L);
	local[3]= fqv[45];
	local[4]= argv[0];
	local[5]= local[0];
	local[6]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+7;
	w=(*ftab[5])(ctx,5,local+2,&ftab[5],fqv[44]); /*warning-message*/
	local[2]= w;
	goto IF946;
IF945:
	local[2]= NIL;
IF946:
	local[0] = argv[0]->c.obj.iv[4];
	local[2]= local[0];
	goto CON943;
CON944:
	local[2]= NIL;
CON943:
	argv[0]->c.obj.iv[3] = local[0];
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[46];
	local[4]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[47];
	local[4]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+5;
	w=(*ftab[6])(ctx,1,local+4,&ftab[6],fqv[48]); /*deg2rad*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[14];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	goto IF934;
IF933:
	local[2]= NIL;
IF934:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK929:
	ctx->vsp=local; return(local[0]);}

/*:joint-dof*/
static pointer M947rotational_joint_joint_dof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = makeint((eusinteger_t)1L);
	local[0]= w;
BLK948:
	ctx->vsp=local; return(local[0]);}

/*:calc-angle-speed-gain*/
static pointer M949rotational_joint_calc_angle_speed_gain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[3];
	local[3]= argv[4];
	ctx->vsp=local+4;
	w=(pointer)F762calc_angle_speed_gain_scalar(ctx,4,local+0); /*calc-angle-speed-gain-scalar*/
	local[0]= w;
BLK950:
	ctx->vsp=local; return(local[0]);}

/*:speed-to-angle*/
static pointer M951rotational_joint_speed_to_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(*ftab[7])(ctx,1,local+0,&ftab[7],fqv[49]); /*rad2deg*/
	local[0]= w;
BLK952:
	ctx->vsp=local; return(local[0]);}

/*:angle-to-speed*/
static pointer M953rotational_joint_angle_to_speed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(*ftab[6])(ctx,1,local+0,&ftab[6],fqv[48]); /*deg2rad*/
	local[0]= w;
BLK954:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian*/
static pointer M955rotational_joint_calc_jacobian(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST957:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[50]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,2,local+1); /*apply*/
	local[0]= w;
BLK956:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M958linear_joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST960:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[51], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY961;
	local[1] = fqv[33];
KEY961:
	if (n & (1<<1)) goto KEY962;
	local[4]= makeflt(3.1415926535897931159980e+00);
	local[5]= makeint((eusinteger_t)4L);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[2] = w;
KEY962:
	if (n & (1<<2)) goto KEY963;
	local[3] = makeint((eusinteger_t)100L);
KEY963:
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[0])(ctx,1,local+4,&ftab[0],fqv[4]); /*float-vector-p*/
	if (w==NIL) goto IF964;
	local[4]= local[1];
	goto IF965;
IF964:
	local[4]= local[1];
	local[5]= local[4];
	if (fqv[52]!=local[5]) goto IF967;
	local[5]= makeint((eusinteger_t)1L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	goto IF968;
IF967:
	local[5]= local[4];
	if (fqv[53]!=local[5]) goto IF969;
	local[5]= makeint((eusinteger_t)-1L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	goto IF970;
IF969:
	local[5]= local[4];
	if (fqv[54]!=local[5]) goto IF971;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)1L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	goto IF972;
IF971:
	local[5]= local[4];
	if (fqv[55]!=local[5]) goto IF973;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)-1L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	goto IF974;
IF973:
	local[5]= local[4];
	if (fqv[33]!=local[5]) goto IF975;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	goto IF976;
IF975:
	local[5]= local[4];
	if (fqv[56]!=local[5]) goto IF977;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[5]= w;
	goto IF978;
IF977:
	local[5]= NIL;
IF978:
IF976:
IF974:
IF972:
IF970:
IF968:
	w = local[5];
	local[4]= w;
IF965:
	argv[0]->c.obj.iv[14] = local[4];
	argv[0]->c.obj.iv[3] = makeflt(0.0000000000000000000000e+00);
	local[4]= (pointer)get_sym_func(fqv[34]);
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[35]));
	local[7]= fqv[36];
	local[8]= fqv[8];
	local[9]= local[2];
	local[10]= fqv[9];
	local[11]= local[3];
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)APPLY(ctx,9,local+4); /*apply*/
	if (argv[0]->c.obj.iv[4]!=NIL) goto IF979;
	argv[0]->c.obj.iv[4] = makeflt(-9.0000000000000000000000e+01);
	local[4]= argv[0]->c.obj.iv[4];
	goto IF980;
IF979:
	local[4]= NIL;
IF980:
	if (argv[0]->c.obj.iv[5]!=NIL) goto IF981;
	argv[0]->c.obj.iv[5] = makeflt(9.0000000000000000000000e+01);
	local[4]= argv[0]->c.obj.iv[5];
	goto IF982;
IF981:
	local[4]= NIL;
IF982:
	local[4]= argv[0];
	local[5]= fqv[37];
	local[6]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= argv[0];
	local[5]= fqv[38];
	local[6]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= argv[0];
	local[5]= fqv[39];
	local[6]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	w = argv[0];
	local[0]= w;
BLK959:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle*/
static pointer M983linear_joint_joint_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT986;}
	local[0]= NIL;
ENT986:
ENT985:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[57], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY987;
	local[1] = NIL;
KEY987:
	if (local[0]==NIL) goto IF988;
	if (local[1]==NIL) goto IF990;
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[0] = w;
	local[2]= local[0];
	goto IF991;
IF990:
	local[2]= NIL;
IF991:
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+4;
	w=(pointer)GREATERP(ctx,2,local+2); /*>*/
	if (w==NIL) goto IF992;
	if (local[1]!=NIL) goto IF994;
	local[2]= makeint((eusinteger_t)3L);
	local[3]= fqv[58];
	local[4]= argv[0];
	local[5]= local[0];
	local[6]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+7;
	w=(*ftab[5])(ctx,5,local+2,&ftab[5],fqv[44]); /*warning-message*/
	local[2]= w;
	goto IF995;
IF994:
	local[2]= NIL;
IF995:
	local[0] = argv[0]->c.obj.iv[5];
	local[2]= local[0];
	goto IF993;
IF992:
	local[2]= NIL;
IF993:
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,2,local+2); /*<*/
	if (w==NIL) goto IF996;
	if (local[1]!=NIL) goto IF998;
	local[2]= makeint((eusinteger_t)3L);
	local[3]= fqv[59];
	local[4]= argv[0];
	local[5]= local[0];
	local[6]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+7;
	w=(*ftab[5])(ctx,5,local+2,&ftab[5],fqv[44]); /*warning-message*/
	local[2]= w;
	goto IF999;
IF998:
	local[2]= NIL;
IF999:
	local[0] = argv[0]->c.obj.iv[4];
	local[2]= local[0];
	goto IF997;
IF996:
	local[2]= NIL;
IF997:
	argv[0]->c.obj.iv[3] = local[0];
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[46];
	local[4]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[60];
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= argv[0]->c.obj.iv[14];
	ctx->vsp=local+6;
	w=(pointer)SCALEVEC(ctx,2,local+4); /*scale*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto IF989;
IF988:
	local[2]= NIL;
IF989:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK984:
	ctx->vsp=local; return(local[0]);}

/*:joint-dof*/
static pointer M1000linear_joint_joint_dof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = makeint((eusinteger_t)1L);
	local[0]= w;
BLK1001:
	ctx->vsp=local; return(local[0]);}

/*:calc-angle-speed-gain*/
static pointer M1002linear_joint_calc_angle_speed_gain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[3];
	local[3]= argv[4];
	ctx->vsp=local+4;
	w=(pointer)F762calc_angle_speed_gain_scalar(ctx,4,local+0); /*calc-angle-speed-gain-scalar*/
	local[0]= w;
BLK1003:
	ctx->vsp=local; return(local[0]);}

/*:speed-to-angle*/
static pointer M1004linear_joint_speed_to_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)1000L);
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
BLK1005:
	ctx->vsp=local; return(local[0]);}

/*:angle-to-speed*/
static pointer M1006linear_joint_angle_to_speed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeflt(1.0000000000000000208167e-03);
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
BLK1007:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian*/
static pointer M1008linear_joint_calc_jacobian(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1010:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[61]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,2,local+1); /*apply*/
	local[0]= w;
BLK1009:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1011wheel_joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1013:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[62], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY1014;
	local[5]= loadglobal(fqv[63]);
	local[6]= loadglobal(fqv[63]);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,2,local+5); /*float-vector*/
	local[1] = w;
KEY1014:
	if (n & (1<<1)) goto KEY1015;
	local[5]= loadglobal(fqv[64]);
	local[6]= loadglobal(fqv[64]);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,2,local+5); /*float-vector*/
	local[2] = w;
KEY1015:
	if (n & (1<<2)) goto KEY1016;
	local[5]= makeflt(7.9999999999999960031971e-02);
	local[6]= makeflt(4.9999999999999988897770e-02);
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= makeflt(3.1415926535897931159980e+00);
	local[7]= makeint((eusinteger_t)4L);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,2,local+5); /*float-vector*/
	local[3] = w;
KEY1016:
	if (n & (1<<3)) goto KEY1017;
	local[5]= makeint((eusinteger_t)100L);
	local[6]= makeint((eusinteger_t)100L);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,2,local+5); /*float-vector*/
	local[4] = w;
KEY1017:
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,2,local+5); /*float-vector*/
	argv[0]->c.obj.iv[3] = w;
	local[5]= fqv[65];
	local[6]= fqv[33];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,2,local+5); /*list*/
	argv[0]->c.obj.iv[14] = w;
	local[5]= (pointer)get_sym_func(fqv[34]);
	local[6]= argv[0];
	local[7]= *(ovafptr(argv[1],fqv[35]));
	local[8]= fqv[36];
	local[9]= fqv[66];
	local[10]= local[1];
	local[11]= fqv[67];
	local[12]= local[2];
	local[13]= fqv[8];
	local[14]= local[3];
	local[15]= fqv[9];
	local[16]= local[4];
	local[17]= local[0];
	ctx->vsp=local+18;
	w=(pointer)APPLY(ctx,13,local+5); /*apply*/
	w = argv[0];
	local[0]= w;
BLK1012:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle*/
static pointer M1018wheel_joint_joint_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1021;}
	local[0]= NIL;
ENT1021:
ENT1020:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[68], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1022;
	local[1] = NIL;
KEY1022:
	local[2]= NIL;
	local[3]= NIL;
	if (local[1]!=NIL) goto IF1023;
	if (local[0]==NIL) goto IF1025;
	local[4]= fqv[69];
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,1,local+4,&ftab[2],fqv[15]); /*warn*/
	local[4]= w;
	goto IF1026;
IF1025:
	local[4]= NIL;
IF1026:
	w = argv[0]->c.obj.iv[3];
	ctx->vsp=local+4;
	local[0]=w;
	goto BLK1019;
	goto IF1024;
IF1023:
	local[4]= NIL;
IF1024:
	if (local[0]==NIL) goto IF1027;
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[2] = w;
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[3] = w;
	local[4]= argv[0]->c.obj.iv[2];
	local[5]= fqv[60];
	local[6]= local[2];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,3,local+6); /*float-vector*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= argv[0]->c.obj.iv[2];
	local[5]= fqv[47];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(*ftab[6])(ctx,1,local+6,&ftab[6],fqv[48]); /*deg2rad*/
	local[6]= w;
	local[7]= fqv[33];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,4,local+4); /*send*/
	local[4]= w;
	goto IF1028;
IF1027:
	local[4]= NIL;
IF1028:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK1019:
	ctx->vsp=local; return(local[0]);}

/*:joint-dof*/
static pointer M1029wheel_joint_joint_dof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = makeint((eusinteger_t)2L);
	local[0]= w;
BLK1030:
	ctx->vsp=local; return(local[0]);}

/*:calc-angle-speed-gain*/
static pointer M1031wheel_joint_calc_angle_speed_gain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[3];
	local[3]= argv[4];
	ctx->vsp=local+4;
	w=(pointer)F763calc_angle_speed_gain_vector(ctx,4,local+0); /*calc-angle-speed-gain-vector*/
	local[0]= w;
BLK1032:
	ctx->vsp=local; return(local[0]);}

/*:speed-to-angle*/
static pointer M1033wheel_joint_speed_to_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)1000L);
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[49]); /*rad2deg*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MKFLTVEC(ctx,2,local+0); /*float-vector*/
	local[0]= w;
BLK1034:
	ctx->vsp=local; return(local[0]);}

/*:angle-to-speed*/
static pointer M1035wheel_joint_angle_to_speed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeflt(1.0000000000000000208167e-03);
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[48]); /*deg2rad*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MKFLTVEC(ctx,2,local+0); /*float-vector*/
	local[0]= w;
BLK1036:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian*/
static pointer M1037wheel_joint_calc_jacobian(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=21) maerror();
	w = argv[5];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[28],w);
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[70];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F761calc_jacobian_linear(ctx,19,local+3); /*calc-jacobian-linear*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[71];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F760calc_jacobian_rotational(ctx,19,local+3); /*calc-jacobian-rotational*/
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK1038:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1039omniwheel_joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1041:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[72], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY1042;
	local[5]= loadglobal(fqv[63]);
	local[6]= loadglobal(fqv[63]);
	local[7]= loadglobal(fqv[63]);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[1] = w;
KEY1042:
	if (n & (1<<1)) goto KEY1043;
	local[5]= loadglobal(fqv[64]);
	local[6]= loadglobal(fqv[64]);
	local[7]= loadglobal(fqv[64]);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[2] = w;
KEY1043:
	if (n & (1<<2)) goto KEY1044;
	local[5]= makeflt(7.9999999999999960031971e-02);
	local[6]= makeflt(4.9999999999999988897770e-02);
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= makeflt(7.9999999999999960031971e-02);
	local[7]= makeflt(4.9999999999999988897770e-02);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	local[7]= makeflt(3.1415926535897931159980e+00);
	local[8]= makeint((eusinteger_t)4L);
	ctx->vsp=local+9;
	w=(pointer)QUOTIENT(ctx,2,local+7); /*/*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[3] = w;
KEY1044:
	if (n & (1<<3)) goto KEY1045;
	local[5]= makeint((eusinteger_t)100L);
	local[6]= makeint((eusinteger_t)100L);
	local[7]= makeint((eusinteger_t)100L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[4] = w;
KEY1045:
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	argv[0]->c.obj.iv[3] = w;
	local[5]= fqv[73];
	local[6]= fqv[74];
	local[7]= fqv[33];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,3,local+5); /*list*/
	argv[0]->c.obj.iv[14] = w;
	local[5]= (pointer)get_sym_func(fqv[34]);
	local[6]= argv[0];
	local[7]= *(ovafptr(argv[1],fqv[35]));
	local[8]= fqv[36];
	local[9]= fqv[66];
	local[10]= local[1];
	local[11]= fqv[67];
	local[12]= local[2];
	local[13]= fqv[8];
	local[14]= local[3];
	local[15]= fqv[9];
	local[16]= local[4];
	local[17]= local[0];
	ctx->vsp=local+18;
	w=(pointer)APPLY(ctx,13,local+5); /*apply*/
	w = argv[0];
	local[0]= w;
BLK1040:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle*/
static pointer M1046omniwheel_joint_joint_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1049;}
	local[0]= NIL;
ENT1049:
ENT1048:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[75], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1050;
	local[1] = NIL;
KEY1050:
	if (local[0]==NIL) goto IF1051;
	if (local[1]==NIL) goto IF1053;
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+4;
	w=(pointer)VPLUS(ctx,2,local+2); /*v+*/
	local[0] = w;
	local[2]= local[0];
	goto IF1054;
IF1053:
	local[2]= NIL;
IF1054:
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+4;
	w=(pointer)VMAX(ctx,2,local+2); /*vmax*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+4;
	w=(pointer)VMIN(ctx,2,local+2); /*vmin*/
	argv[0]->c.obj.iv[3] = w;
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[46];
	local[4]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[60];
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[3];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)MKFLTVEC(ctx,3,local+4); /*float-vector*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[47];
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[6])(ctx,1,local+4,&ftab[6],fqv[48]); /*deg2rad*/
	local[4]= w;
	local[5]= fqv[33];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	goto IF1052;
IF1051:
	local[2]= NIL;
IF1052:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK1047:
	ctx->vsp=local; return(local[0]);}

/*:joint-dof*/
static pointer M1055omniwheel_joint_joint_dof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = makeint((eusinteger_t)3L);
	local[0]= w;
BLK1056:
	ctx->vsp=local; return(local[0]);}

/*:calc-angle-speed-gain*/
static pointer M1057omniwheel_joint_calc_angle_speed_gain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[3];
	local[3]= argv[4];
	ctx->vsp=local+4;
	w=(pointer)F763calc_angle_speed_gain_vector(ctx,4,local+0); /*calc-angle-speed-gain-vector*/
	local[0]= w;
BLK1058:
	ctx->vsp=local; return(local[0]);}

/*:speed-to-angle*/
static pointer M1059omniwheel_joint_speed_to_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)1000L);
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1000L);
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[1]= w;
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[7])(ctx,1,local+2,&ftab[7],fqv[49]); /*rad2deg*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
BLK1060:
	ctx->vsp=local; return(local[0]);}

/*:angle-to-speed*/
static pointer M1061omniwheel_joint_angle_to_speed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeflt(1.0000000000000000208167e-03);
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= makeflt(1.0000000000000000208167e-03);
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[1]= w;
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[6])(ctx,1,local+2,&ftab[6],fqv[48]); /*deg2rad*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
BLK1062:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian*/
static pointer M1063omniwheel_joint_calc_jacobian(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=21) maerror();
	w = argv[5];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[28],w);
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[76];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F761calc_jacobian_linear(ctx,19,local+3); /*calc-jacobian-linear*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[77];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F761calc_jacobian_linear(ctx,19,local+3); /*calc-jacobian-linear*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[78];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F760calc_jacobian_rotational(ctx,19,local+3); /*calc-jacobian-rotational*/
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK1064:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1065sphere_joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1067:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[79], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY1068;
	local[5]= loadglobal(fqv[63]);
	local[6]= loadglobal(fqv[63]);
	local[7]= loadglobal(fqv[63]);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[1] = w;
KEY1068:
	if (n & (1<<1)) goto KEY1069;
	local[5]= loadglobal(fqv[64]);
	local[6]= loadglobal(fqv[64]);
	local[7]= loadglobal(fqv[64]);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[2] = w;
KEY1069:
	if (n & (1<<2)) goto KEY1070;
	local[5]= makeflt(3.1415926535897931159980e+00);
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= makeflt(3.1415926535897931159980e+00);
	local[7]= makeint((eusinteger_t)4L);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	local[7]= makeflt(3.1415926535897931159980e+00);
	local[8]= makeint((eusinteger_t)4L);
	ctx->vsp=local+9;
	w=(pointer)QUOTIENT(ctx,2,local+7); /*/*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[3] = w;
KEY1070:
	if (n & (1<<3)) goto KEY1071;
	local[5]= makeint((eusinteger_t)100L);
	local[6]= makeint((eusinteger_t)100L);
	local[7]= makeint((eusinteger_t)100L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	local[4] = w;
KEY1071:
	local[5]= fqv[52];
	local[6]= fqv[54];
	local[7]= fqv[33];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,3,local+5); /*list*/
	argv[0]->c.obj.iv[14] = w;
	local[5]= (pointer)get_sym_func(fqv[34]);
	local[6]= argv[0];
	local[7]= *(ovafptr(argv[1],fqv[35]));
	local[8]= fqv[36];
	local[9]= fqv[66];
	local[10]= local[1];
	local[11]= fqv[67];
	local[12]= local[2];
	local[13]= fqv[8];
	local[14]= local[3];
	local[15]= fqv[9];
	local[16]= local[4];
	local[17]= local[0];
	ctx->vsp=local+18;
	w=(pointer)APPLY(ctx,13,local+5); /*apply*/
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,3,local+5); /*float-vector*/
	argv[0]->c.obj.iv[3] = w;
	w = argv[0];
	local[0]= w;
BLK1066:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle*/
static pointer M1072sphere_joint_joint_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1075;}
	local[0]= NIL;
ENT1075:
ENT1074:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[80], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1076;
	local[1] = NIL;
KEY1076:
	if (local[0]==NIL) goto IF1077;
	if (local[1]==NIL) goto CON1080;
	local[2]= loadglobal(fqv[5]);
	local[3]= (pointer)get_sym_func(fqv[48]);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[2]= w;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)VNORM(ctx,1,local+3); /*norm*/
	local[3]= w;
	local[4]= makeflt(0.0000000000000000000000e+00);
	local[5]= makeflt(9.9999999999999949376344e-21);
	ctx->vsp=local+6;
	w=(*ftab[8])(ctx,3,local+3,&ftab[8],fqv[81]); /*eps=*/
	if (w!=NIL) goto IF1081;
	local[3]= loadglobal(fqv[5]);
	local[4]= (pointer)get_sym_func(fqv[48]);
	local[5]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+6;
	w=(pointer)MAP(ctx,3,local+3); /*map*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[9])(ctx,1,local+3,&ftab[9],fqv[82]); /*matrix-exponent*/
	local[3]= w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)VNORM(ctx,1,local+4); /*norm*/
	local[4]= w;
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,1,local+5,&ftab[4],fqv[26]); /*normalize-vector*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+4); /*rotation-matrix*/
	local[4]= w;
	local[5]= local[3];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)MATTIMES(ctx,3,local+4); /*m**/
	local[4]= loadglobal(fqv[5]);
	local[5]= (pointer)get_sym_func(fqv[49]);
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(*ftab[10])(ctx,1,local+6,&ftab[10],fqv[83]); /*matrix-log*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MAP(ctx,3,local+4); /*map*/
	argv[0]->c.obj.iv[3] = w;
	w = argv[0]->c.obj.iv[3];
	local[3]= w;
	goto IF1082;
IF1081:
	local[3]= NIL;
IF1082:
	w = local[3];
	local[2]= w;
	goto CON1079;
CON1080:
	argv[0]->c.obj.iv[3] = local[0];
	local[2]= argv[0]->c.obj.iv[3];
	goto CON1079;
CON1083:
	local[2]= NIL;
CON1079:
	local[2]= argv[0]->c.obj.iv[3];
	local[3]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+4;
	w=(pointer)VMAX(ctx,2,local+2); /*vmax*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+4;
	w=(pointer)VMIN(ctx,2,local+2); /*vmin*/
	argv[0]->c.obj.iv[3] = w;
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[46];
	local[4]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[84];
	local[4]= fqv[85];
	local[5]= loadglobal(fqv[5]);
	local[6]= (pointer)get_sym_func(fqv[48]);
	local[7]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+8;
	w=(pointer)MAP(ctx,3,local+5); /*map*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[9])(ctx,1,local+5,&ftab[9],fqv[82]); /*matrix-exponent*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[11])(ctx,2,local+4,&ftab[11],fqv[86]); /*make-coords*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto IF1078;
IF1077:
	local[2]= NIL;
IF1078:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK1073:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle-rpy*/
static pointer M1084sphere_joint_joint_angle_rpy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1087;}
	local[0]= NIL;
ENT1087:
ENT1086:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[87], &argv[3], n-3, local+1, 0);
	if (n & (1<<0)) goto KEY1088;
	local[1] = NIL;
KEY1088:
	if (local[0]==NIL) goto IF1089;
	if (local[1]==NIL) goto IF1091;
	local[2]= loadglobal(fqv[5]);
	local[3]= (pointer)get_sym_func(fqv[48]);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[2]= w;
	local[3]= loadglobal(fqv[5]);
	local[4]= (pointer)get_sym_func(fqv[48]);
	local[5]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+6;
	w=(pointer)MAP(ctx,3,local+3); /*map*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[9])(ctx,1,local+3,&ftab[9],fqv[82]); /*matrix-exponent*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)INV_RPY(ctx,1,local+3); /*rpy-angle*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= loadglobal(fqv[5]);
	ctx->vsp=local+5;
	w=(pointer)COERCE(ctx,2,local+3); /*coerce*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)VPLUS(ctx,2,local+2); /*v+*/
	local[2]= w;
	goto IF1092;
IF1091:
	local[2]= loadglobal(fqv[5]);
	local[3]= (pointer)get_sym_func(fqv[48]);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[2]= w;
IF1092:
	local[3]= argv[0];
	local[4]= fqv[20];
	local[5]= loadglobal(fqv[88]);
	local[6]= (pointer)get_sym_func(fqv[49]);
	local[7]= local[2];
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	local[8]= local[2];
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	local[9]= local[2];
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[12])(ctx,3,local+7,&ftab[12],fqv[89]); /*rpy-matrix*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[10])(ctx,1,local+7,&ftab[10],fqv[83]); /*matrix-log*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MAP(ctx,3,local+5); /*map*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[2]= w;
	goto IF1090;
IF1089:
	local[2]= NIL;
IF1090:
	local[2]= loadglobal(fqv[5]);
	local[3]= (pointer)get_sym_func(fqv[49]);
	local[4]= loadglobal(fqv[5]);
	local[5]= (pointer)get_sym_func(fqv[48]);
	local[6]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+7;
	w=(pointer)MAP(ctx,3,local+4); /*map*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[9])(ctx,1,local+4,&ftab[9],fqv[82]); /*matrix-exponent*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)INV_RPY(ctx,1,local+4); /*rpy-angle*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[0]= w;
BLK1085:
	ctx->vsp=local; return(local[0]);}

/*:joint-dof*/
static pointer M1093sphere_joint_joint_dof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = makeint((eusinteger_t)3L);
	local[0]= w;
BLK1094:
	ctx->vsp=local; return(local[0]);}

/*:calc-angle-speed-gain*/
static pointer M1095sphere_joint_calc_angle_speed_gain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[3];
	local[3]= argv[4];
	ctx->vsp=local+4;
	w=(pointer)F763calc_angle_speed_gain_vector(ctx,4,local+0); /*calc-angle-speed-gain-vector*/
	local[0]= w;
BLK1096:
	ctx->vsp=local; return(local[0]);}

/*:speed-to-angle*/
static pointer M1097sphere_joint_speed_to_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[7])(ctx,1,local+0,&ftab[7],fqv[49]); /*rad2deg*/
	local[0]= w;
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[49]); /*rad2deg*/
	local[1]= w;
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[7])(ctx,1,local+2,&ftab[7],fqv[49]); /*rad2deg*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
BLK1098:
	ctx->vsp=local; return(local[0]);}

/*:angle-to-speed*/
static pointer M1099sphere_joint_angle_to_speed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[6])(ctx,1,local+0,&ftab[6],fqv[48]); /*deg2rad*/
	local[0]= w;
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,1,local+1,&ftab[6],fqv[48]); /*deg2rad*/
	local[1]= w;
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[6])(ctx,1,local+2,&ftab[6],fqv[48]); /*deg2rad*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MKFLTVEC(ctx,3,local+0); /*float-vector*/
	local[0]= w;
BLK1100:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian*/
static pointer M1101sphere_joint_calc_jacobian(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=21) maerror();
	w = argv[5];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[28],w);
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[90];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F760calc_jacobian_rotational(ctx,19,local+3); /*calc-jacobian-rotational*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[91];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F760calc_jacobian_rotational(ctx,19,local+3); /*calc-jacobian-rotational*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[92];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F760calc_jacobian_rotational(ctx,19,local+3); /*calc-jacobian-rotational*/
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK1102:
	ctx->vsp=local; return(local[0]);}

/*:joint-euler-angle*/
static pointer M1103sphere_joint_joint_euler_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[93], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1105;
	local[0] = fqv[94];
KEY1105:
	if (n & (1<<1)) goto KEY1106;
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[85];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[1] = w;
KEY1106:
	local[2]= loadglobal(fqv[88]);
	local[3]= (pointer)get_sym_func(fqv[49]);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	local[5]= local[4];
	if (fqv[95]!=local[5]) goto IF1108;
	local[5]= local[0];
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= local[5];
	if (fqv[54]!=local[6]) goto IF1111;
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[6]= w;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[13])(ctx,2,local+6,&ftab[13],fqv[96]); /*atan2*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
	goto IF1112;
IF1111:
	local[6]= local[5];
	if (fqv[52]!=local[6]) goto IF1113;
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[13])(ctx,2,local+6,&ftab[13],fqv[96]); /*atan2*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
	goto IF1114;
IF1113:
	local[6]= local[5];
	if (fqv[33]!=local[6]) goto IF1115;
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)AREF(ctx,3,local+6); /*aref*/
	local[6]= w;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[13])(ctx,2,local+6,&ftab[13],fqv[96]); /*atan2*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
	goto IF1116;
IF1115:
	local[6]= NIL;
IF1116:
IF1114:
IF1112:
	w = local[6];
	local[5]= w;
	goto IF1109;
IF1108:
	local[5]= local[4];
	if (fqv[97]!=local[5]) goto IF1117;
	local[5]= local[0];
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= local[5];
	if (fqv[54]!=local[6]) goto IF1120;
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[6];
	if (fqv[52]!=local[7]) goto IF1123;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[13])(ctx,2,local+7,&ftab[13],fqv[96]); /*atan2*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,1,local+8); /*-*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1124;
IF1123:
	local[7]= local[6];
	if (fqv[33]!=local[7]) goto IF1125;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[13])(ctx,2,local+7,&ftab[13],fqv[96]); /*atan2*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1126;
IF1125:
	local[7]= local[6];
	if (fqv[54]!=local[7]) goto IF1127;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1128;
IF1127:
	local[7]= NIL;
IF1128:
IF1126:
IF1124:
	w = local[7];
	local[6]= w;
	goto IF1121;
IF1120:
	local[6]= local[5];
	if (fqv[52]!=local[6]) goto IF1129;
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[6];
	if (fqv[54]!=local[7]) goto IF1132;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)2L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[13])(ctx,2,local+7,&ftab[13],fqv[96]); /*atan2*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1133;
IF1132:
	local[7]= local[6];
	if (fqv[33]!=local[7]) goto IF1134;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)2L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[13])(ctx,2,local+7,&ftab[13],fqv[96]); /*atan2*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,1,local+8); /*-*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1135;
IF1134:
	local[7]= local[6];
	if (fqv[52]!=local[7]) goto IF1136;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)2L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1137;
IF1136:
	local[7]= NIL;
IF1137:
IF1135:
IF1133:
	w = local[7];
	local[6]= w;
	goto IF1130;
IF1129:
	local[6]= local[5];
	if (fqv[33]!=local[6]) goto IF1138;
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[6];
	if (fqv[54]!=local[7]) goto IF1141;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[13])(ctx,2,local+7,&ftab[13],fqv[96]); /*atan2*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,1,local+8); /*-*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)2L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1142;
IF1141:
	local[7]= local[6];
	if (fqv[52]!=local[7]) goto IF1143;
	local[7]= local[1];
	local[8]= makeint((eusinteger_t)1L);
	local[9]= makeint((eusinteger_t)0L);
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,3,local+7); /*aref*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[13])(ctx,2,local+7,&ftab[13],fqv[96]); /*atan2*/
	local[7]= w;
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)2L);
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1144;
IF1143:
	local[7]= local[6];
	if (fqv[33]!=local[7]) goto IF1145;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[1];
	local[9]= makeint((eusinteger_t)1L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)AREF(ctx,3,local+8); /*aref*/
	local[8]= w;
	local[9]= local[1];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)AREF(ctx,3,local+9); /*aref*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[13])(ctx,2,local+8,&ftab[13],fqv[96]); /*atan2*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	goto IF1146;
IF1145:
	local[7]= NIL;
IF1146:
IF1144:
IF1142:
	w = local[7];
	local[6]= w;
	goto IF1139;
IF1138:
	local[6]= NIL;
IF1139:
IF1130:
IF1121:
	w = local[6];
	local[5]= w;
	goto IF1118;
IF1117:
	local[5]= local[4];
	if (fqv[98]!=local[5]) goto IF1147;
	local[5]= local[1];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(*ftab[14])(ctx,2,local+5,&ftab[14],fqv[99]); /*matrix-to-euler-angle*/
	local[5]= w;
	goto IF1148;
IF1147:
	local[5]= NIL;
IF1148:
IF1118:
IF1109:
	w = local[5];
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[0]= w;
BLK1104:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M11496dof_joint_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1151:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[100], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY1152;
	local[6]= loadglobal(fqv[63]);
	local[7]= loadglobal(fqv[63]);
	local[8]= loadglobal(fqv[63]);
	local[9]= loadglobal(fqv[63]);
	local[10]= loadglobal(fqv[63]);
	local[11]= loadglobal(fqv[63]);
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,6,local+6); /*float-vector*/
	local[1] = w;
KEY1152:
	if (n & (1<<1)) goto KEY1153;
	local[6]= loadglobal(fqv[64]);
	local[7]= loadglobal(fqv[64]);
	local[8]= loadglobal(fqv[64]);
	local[9]= loadglobal(fqv[64]);
	local[10]= loadglobal(fqv[64]);
	local[11]= loadglobal(fqv[64]);
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,6,local+6); /*float-vector*/
	local[2] = w;
KEY1153:
	if (n & (1<<2)) goto KEY1154;
	local[6]= makeflt(7.9999999999999960031971e-02);
	local[7]= makeflt(4.9999999999999988897770e-02);
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	local[7]= makeflt(7.9999999999999960031971e-02);
	local[8]= makeflt(4.9999999999999988897770e-02);
	ctx->vsp=local+9;
	w=(pointer)QUOTIENT(ctx,2,local+7); /*/*/
	local[7]= w;
	local[8]= makeflt(7.9999999999999960031971e-02);
	local[9]= makeflt(4.9999999999999988897770e-02);
	ctx->vsp=local+10;
	w=(pointer)QUOTIENT(ctx,2,local+8); /*/*/
	local[8]= w;
	local[9]= makeflt(3.1415926535897931159980e+00);
	local[10]= makeint((eusinteger_t)4L);
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	local[10]= makeflt(3.1415926535897931159980e+00);
	local[11]= makeint((eusinteger_t)4L);
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	local[11]= makeflt(3.1415926535897931159980e+00);
	local[12]= makeint((eusinteger_t)4L);
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,6,local+6); /*float-vector*/
	local[3] = w;
KEY1154:
	if (n & (1<<3)) goto KEY1155;
	local[6]= makeint((eusinteger_t)100L);
	local[7]= makeint((eusinteger_t)100L);
	local[8]= makeint((eusinteger_t)100L);
	local[9]= makeint((eusinteger_t)100L);
	local[10]= makeint((eusinteger_t)100L);
	local[11]= makeint((eusinteger_t)100L);
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,6,local+6); /*float-vector*/
	local[4] = w;
KEY1155:
	if (n & (1<<4)) goto KEY1156;
	local[5] = NIL;
KEY1156:
	local[6]= fqv[101];
	local[7]= fqv[102];
	local[8]= fqv[103];
	local[9]= fqv[52];
	local[10]= fqv[54];
	local[11]= fqv[33];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,6,local+6); /*list*/
	argv[0]->c.obj.iv[14] = w;
	local[6]= (pointer)get_sym_func(fqv[34]);
	local[7]= argv[0];
	local[8]= *(ovafptr(argv[1],fqv[35]));
	local[9]= fqv[36];
	local[10]= fqv[66];
	local[11]= local[1];
	local[12]= fqv[67];
	local[13]= local[2];
	local[14]= fqv[8];
	local[15]= local[3];
	local[16]= fqv[9];
	local[17]= local[4];
	local[18]= local[0];
	ctx->vsp=local+19;
	w=(pointer)APPLY(ctx,13,local+6); /*apply*/
	if (local[5]==NIL) goto IF1157;
	local[6]= argv[0]->c.obj.iv[1];
	local[7]= fqv[104];
	local[8]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	local[7]= fqv[105];
	local[8]= argv[0]->c.obj.iv[6];
	local[9]= fqv[29];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(*ftab[11])(ctx,2,local+7,&ftab[11],fqv[86]); /*make-coords*/
	local[7]= w;
	local[8]= local[7];
	local[9]= fqv[106];
	local[10]= local[6];
	local[11]= fqv[29];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,3,local+8); /*send*/
	local[8]= w;
	local[9]= local[7];
	local[10]= fqv[27];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TRANSPOSE(ctx,1,local+9); /*transpose*/
	local[9]= w;
	local[10]= local[6];
	local[11]= fqv[27];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)MATTIMES(ctx,2,local+9); /*m**/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[10])(ctx,1,local+9,&ftab[10],fqv[83]); /*matrix-log*/
	local[9]= w;
	local[10]= local[8];
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	local[11]= local[8];
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= local[8];
	local[13]= makeint((eusinteger_t)2L);
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= local[9];
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(*ftab[7])(ctx,1,local+13,&ftab[7],fqv[49]); /*rad2deg*/
	local[13]= w;
	local[14]= local[9];
	local[15]= makeint((eusinteger_t)1L);
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(*ftab[7])(ctx,1,local+14,&ftab[7],fqv[49]); /*rad2deg*/
	local[14]= w;
	local[15]= local[9];
	local[16]= makeint((eusinteger_t)2L);
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(*ftab[7])(ctx,1,local+15,&ftab[7],fqv[49]); /*rad2deg*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)MKFLTVEC(ctx,6,local+10); /*float-vector*/
	argv[0]->c.obj.iv[3] = w;
	argv[0]->c.obj.iv[6] = local[7];
	w = argv[0]->c.obj.iv[6];
	local[6]= w;
	goto IF1158;
IF1157:
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(pointer)MKFLTVEC(ctx,6,local+6); /*float-vector*/
	argv[0]->c.obj.iv[3] = w;
	local[6]= argv[0]->c.obj.iv[3];
IF1158:
	w = argv[0];
	local[0]= w;
BLK1150:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle*/
static pointer M11596dof_joint_joint_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1162;}
	local[0]= NIL;
ENT1162:
ENT1161:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[107], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1163;
	local[1] = NIL;
KEY1163:
	if (local[0]==NIL) goto IF1164;
	local[2]= NIL;
	local[3]= NIL;
	if (local[1]==NIL) goto IF1166;
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)3L);
	ctx->vsp=local+7;
	w=(pointer)SUBSEQ(ctx,3,local+4); /*subseq*/
	local[4]= w;
	local[5]= local[0];
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)3L);
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,3,local+5); /*subseq*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)VPLUS(ctx,2,local+4); /*v+*/
	local[4]= w;
	goto IF1167;
IF1166:
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)3L);
	ctx->vsp=local+7;
	w=(pointer)SUBSEQ(ctx,3,local+4); /*subseq*/
	local[4]= w;
IF1167:
	local[2] = local[4];
	if (local[1]==NIL) goto CON1169;
	local[4]= loadglobal(fqv[5]);
	local[5]= (pointer)get_sym_func(fqv[48]);
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)3L);
	local[8]= makeint((eusinteger_t)6L);
	ctx->vsp=local+9;
	w=(pointer)SUBSEQ(ctx,3,local+6); /*subseq*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MAP(ctx,3,local+4); /*map*/
	local[4]= w;
	local[5]= local[4];
	ctx->vsp=local+6;
	w=(pointer)VNORM(ctx,1,local+5); /*norm*/
	local[5]= w;
	local[6]= makeflt(0.0000000000000000000000e+00);
	local[7]= makeflt(9.9999999999999949376344e-21);
	ctx->vsp=local+8;
	w=(*ftab[8])(ctx,3,local+5,&ftab[8],fqv[81]); /*eps=*/
	if (w==NIL) goto IF1170;
	local[5]= argv[0]->c.obj.iv[3];
	local[6]= makeint((eusinteger_t)3L);
	local[7]= makeint((eusinteger_t)6L);
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,3,local+5); /*subseq*/
	local[3] = w;
	local[5]= local[3];
	goto IF1171;
IF1170:
	local[5]= loadglobal(fqv[5]);
	local[6]= (pointer)get_sym_func(fqv[48]);
	local[7]= argv[0]->c.obj.iv[3];
	local[8]= makeint((eusinteger_t)3L);
	local[9]= makeint((eusinteger_t)6L);
	ctx->vsp=local+10;
	w=(pointer)SUBSEQ(ctx,3,local+7); /*subseq*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MAP(ctx,3,local+5); /*map*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[9])(ctx,1,local+5,&ftab[9],fqv[82]); /*matrix-exponent*/
	local[5]= w;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)VNORM(ctx,1,local+6); /*norm*/
	local[6]= w;
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(*ftab[4])(ctx,1,local+7,&ftab[4],fqv[26]); /*normalize-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+6); /*rotation-matrix*/
	local[6]= w;
	local[7]= local[5];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)MATTIMES(ctx,3,local+6); /*m**/
	local[6]= loadglobal(fqv[5]);
	local[7]= (pointer)get_sym_func(fqv[49]);
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(*ftab[10])(ctx,1,local+8,&ftab[10],fqv[83]); /*matrix-log*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MAP(ctx,3,local+6); /*map*/
	local[3] = w;
	w = local[3];
	local[5]= w;
IF1171:
	w = local[5];
	local[4]= w;
	goto CON1168;
CON1169:
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)3L);
	local[6]= makeint((eusinteger_t)6L);
	ctx->vsp=local+7;
	w=(pointer)SUBSEQ(ctx,3,local+4); /*subseq*/
	local[3] = w;
	local[4]= local[3];
	goto CON1168;
CON1172:
	local[4]= NIL;
CON1168:
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)3L);
WHL1174:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX1175;
	local[6]= argv[0]->c.obj.iv[3];
	local[7]= local[4];
	local[8]= local[2];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SETELT(ctx,3,local+6); /*setelt*/
	local[6]= argv[0]->c.obj.iv[3];
	local[7]= local[4];
	w = makeint((eusinteger_t)3L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[7]= (pointer)((eusinteger_t)local[7] + (eusinteger_t)w);
	local[8]= local[3];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SETELT(ctx,3,local+6); /*setelt*/
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL1174;
WHX1175:
	local[6]= NIL;
BLK1176:
	w = NIL;
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+6;
	w=(pointer)VMAX(ctx,2,local+4); /*vmax*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+6;
	w=(pointer)VMIN(ctx,2,local+4); /*vmin*/
	argv[0]->c.obj.iv[3] = w;
	local[4]= argv[0]->c.obj.iv[2];
	local[5]= fqv[46];
	local[6]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= argv[0]->c.obj.iv[2];
	local[5]= fqv[84];
	local[6]= fqv[85];
	local[7]= loadglobal(fqv[5]);
	local[8]= (pointer)get_sym_func(fqv[48]);
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)MAP(ctx,3,local+7); /*map*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[9])(ctx,1,local+7,&ftab[9],fqv[82]); /*matrix-exponent*/
	local[7]= w;
	local[8]= fqv[105];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(*ftab[11])(ctx,4,local+6,&ftab[11],fqv[86]); /*make-coords*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[2]= w;
	goto IF1165;
IF1164:
	local[2]= NIL;
IF1165:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK1160:
	ctx->vsp=local; return(local[0]);}

/*:joint-angle-rpy*/
static pointer M11776dof_joint_joint_angle_rpy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1180;}
	local[0]= NIL;
ENT1180:
ENT1179:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[108], &argv[3], n-3, local+1, 0);
	if (n & (1<<0)) goto KEY1181;
	local[1] = NIL;
KEY1181:
	if (local[0]==NIL) goto IF1182;
	if (local[1]==NIL) goto IF1184;
	local[2]= loadglobal(fqv[5]);
	local[3]= (pointer)get_sym_func(fqv[48]);
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)3L);
	local[6]= makeint((eusinteger_t)6L);
	ctx->vsp=local+7;
	w=(pointer)SUBSEQ(ctx,3,local+4); /*subseq*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[2]= w;
	local[3]= loadglobal(fqv[5]);
	local[4]= (pointer)get_sym_func(fqv[48]);
	local[5]= argv[0]->c.obj.iv[3];
	local[6]= makeint((eusinteger_t)3L);
	local[7]= makeint((eusinteger_t)6L);
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,3,local+5); /*subseq*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MAP(ctx,3,local+3); /*map*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[9])(ctx,1,local+3,&ftab[9],fqv[82]); /*matrix-exponent*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)INV_RPY(ctx,1,local+3); /*rpy-angle*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= loadglobal(fqv[5]);
	ctx->vsp=local+5;
	w=(pointer)COERCE(ctx,2,local+3); /*coerce*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)VPLUS(ctx,2,local+2); /*v+*/
	local[2]= w;
	goto IF1185;
IF1184:
	local[2]= loadglobal(fqv[5]);
	local[3]= (pointer)get_sym_func(fqv[48]);
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)3L);
	local[6]= makeint((eusinteger_t)6L);
	ctx->vsp=local+7;
	w=(pointer)SUBSEQ(ctx,3,local+4); /*subseq*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,3,local+2); /*map*/
	local[2]= w;
IF1185:
	local[3]= argv[0];
	local[4]= fqv[20];
	local[5]= loadglobal(fqv[5]);
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)3L);
	ctx->vsp=local+9;
	w=(pointer)SUBSEQ(ctx,3,local+6); /*subseq*/
	local[6]= w;
	local[7]= loadglobal(fqv[88]);
	local[8]= (pointer)get_sym_func(fqv[49]);
	local[9]= local[2];
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	local[10]= local[2];
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	local[11]= local[2];
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[12])(ctx,3,local+9,&ftab[12],fqv[89]); /*rpy-matrix*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[10])(ctx,1,local+9,&ftab[10],fqv[83]); /*matrix-log*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MAP(ctx,3,local+7); /*map*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)CONCATENATE(ctx,3,local+5); /*concatenate*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[2]= w;
	goto IF1183;
IF1182:
	local[2]= NIL;
IF1183:
	local[2]= loadglobal(fqv[5]);
	local[3]= argv[0]->c.obj.iv[3];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)3L);
	ctx->vsp=local+6;
	w=(pointer)SUBSEQ(ctx,3,local+3); /*subseq*/
	local[3]= w;
	local[4]= loadglobal(fqv[5]);
	local[5]= (pointer)get_sym_func(fqv[49]);
	local[6]= loadglobal(fqv[5]);
	local[7]= (pointer)get_sym_func(fqv[48]);
	local[8]= argv[0]->c.obj.iv[3];
	local[9]= makeint((eusinteger_t)3L);
	local[10]= makeint((eusinteger_t)6L);
	ctx->vsp=local+11;
	w=(pointer)SUBSEQ(ctx,3,local+8); /*subseq*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MAP(ctx,3,local+6); /*map*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[9])(ctx,1,local+6,&ftab[9],fqv[82]); /*matrix-exponent*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)INV_RPY(ctx,1,local+6); /*rpy-angle*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)MAP(ctx,3,local+4); /*map*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)CONCATENATE(ctx,3,local+2); /*concatenate*/
	local[0]= w;
BLK1178:
	ctx->vsp=local; return(local[0]);}

/*:joint-dof*/
static pointer M11866dof_joint_joint_dof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = makeint((eusinteger_t)6L);
	local[0]= w;
BLK1187:
	ctx->vsp=local; return(local[0]);}

/*:calc-angle-speed-gain*/
static pointer M11886dof_joint_calc_angle_speed_gain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[3];
	local[3]= argv[4];
	ctx->vsp=local+4;
	w=(pointer)F763calc_angle_speed_gain_vector(ctx,4,local+0); /*calc-angle-speed-gain-vector*/
	local[0]= w;
BLK1189:
	ctx->vsp=local; return(local[0]);}

/*:speed-to-angle*/
static pointer M11906dof_joint_speed_to_angle(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)1000L);
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1000L);
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[1]= w;
	local[2]= makeint((eusinteger_t)1000L);
	local[3]= argv[2];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)TIMES(ctx,2,local+2); /***/
	local[2]= w;
	local[3]= argv[2];
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[7])(ctx,1,local+3,&ftab[7],fqv[49]); /*rad2deg*/
	local[3]= w;
	local[4]= argv[2];
	local[5]= makeint((eusinteger_t)4L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[7])(ctx,1,local+4,&ftab[7],fqv[49]); /*rad2deg*/
	local[4]= w;
	local[5]= argv[2];
	local[6]= makeint((eusinteger_t)5L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[7])(ctx,1,local+5,&ftab[7],fqv[49]); /*rad2deg*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,6,local+0); /*float-vector*/
	local[0]= w;
BLK1191:
	ctx->vsp=local; return(local[0]);}

/*:angle-to-speed*/
static pointer M11926dof_joint_angle_to_speed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeflt(1.0000000000000000208167e-03);
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= makeflt(1.0000000000000000208167e-03);
	local[2]= argv[2];
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[1]= w;
	local[2]= makeflt(1.0000000000000000208167e-03);
	local[3]= argv[2];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)TIMES(ctx,2,local+2); /***/
	local[2]= w;
	local[3]= argv[2];
	local[4]= makeint((eusinteger_t)3L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,1,local+3,&ftab[6],fqv[48]); /*deg2rad*/
	local[3]= w;
	local[4]= argv[2];
	local[5]= makeint((eusinteger_t)4L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[6])(ctx,1,local+4,&ftab[6],fqv[48]); /*deg2rad*/
	local[4]= w;
	local[5]= argv[2];
	local[6]= makeint((eusinteger_t)5L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[6])(ctx,1,local+5,&ftab[6],fqv[48]); /*deg2rad*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,6,local+0); /*float-vector*/
	local[0]= w;
BLK1193:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian*/
static pointer M11946dof_joint_calc_jacobian(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=21) maerror();
	w = argv[5];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[28],w);
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[109];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F761calc_jacobian_linear(ctx,19,local+3); /*calc-jacobian-linear*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[110];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F761calc_jacobian_linear(ctx,19,local+3); /*calc-jacobian-linear*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[111];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F761calc_jacobian_linear(ctx,19,local+3); /*calc-jacobian-linear*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)3L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[112];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F760calc_jacobian_rotational(ctx,19,local+3); /*calc-jacobian-rotational*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[113];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F760calc_jacobian_rotational(ctx,19,local+3); /*calc-jacobian-rotational*/
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= makeint((eusinteger_t)5L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[6]= loadglobal(fqv[28]);
	local[7]= fqv[114];
	local[8]= argv[7];
	local[9]= argv[8];
	local[10]= argv[9];
	local[11]= argv[10];
	local[12]= argv[11];
	local[13]= argv[12];
	local[14]= argv[13];
	local[15]= argv[14];
	local[16]= argv[15];
	local[17]= argv[16];
	local[18]= argv[17];
	local[19]= argv[18];
	local[20]= argv[19];
	local[21]= argv[20];
	ctx->vsp=local+22;
	w=(pointer)F760calc_jacobian_rotational(ctx,19,local+3); /*calc-jacobian-rotational*/
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK1195:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1196bodyset_link_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1198:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[115], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1199;
	local[1] = fqv[116];
KEY1199:
	if (n & (1<<1)) goto KEY1200;
	local[2] = makeint((eusinteger_t)1L);
KEY1200:
	if (n & (1<<2)) goto KEY1201;
	local[3] = fqv[117];
KEY1201:
	if (n & (1<<3)) goto KEY1202;
	local[5]= makeint((eusinteger_t)3L);
	ctx->vsp=local+6;
	w=(*ftab[15])(ctx,1,local+5,&ftab[15],fqv[118]); /*unit-matrix*/
	local[4] = w;
KEY1202:
	argv[0]->c.obj.iv[12] = local[1];
	argv[0]->c.obj.iv[14] = local[2];
	argv[0]->c.obj.iv[16] = local[4];
	argv[0]->c.obj.iv[15] = local[3];
	local[5]= argv[0];
	local[6]= fqv[119];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= (pointer)get_sym_func(fqv[34]);
	local[6]= argv[0];
	local[7]= *(ovafptr(argv[1],fqv[35]));
	local[8]= fqv[36];
	local[9]= argv[2];
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,6,local+5); /*apply*/
	local[0]= w;
BLK1197:
	ctx->vsp=local; return(local[0]);}

/*:worldcoords*/
static pointer M1203bodyset_link_worldcoords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1206;}
	local[0]= argv[0]->c.obj.iv[12];
ENT1206:
ENT1205:
	if (n>3) maerror();
	local[1]= local[0];
	local[2]= local[1];
	if (fqv[120]!=local[2]) goto IF1208;
	local[2]= argv[0];
	local[3]= loadglobal(fqv[121]);
	local[4]= fqv[122];
	ctx->vsp=local+5;
	w=(pointer)SENDMESSAGE(ctx,3,local+2); /*send-message*/
	local[2]= w;
	goto IF1209;
IF1208:
	if (T==NIL) goto IF1210;
	local[2]= argv[0];
	local[3]= *(ovafptr(argv[1],fqv[35]));
	local[4]= fqv[122];
	ctx->vsp=local+5;
	w=(pointer)SENDMESSAGE(ctx,3,local+2); /*send-message*/
	local[2]= w;
	goto IF1211;
IF1210:
	local[2]= NIL;
IF1211:
IF1209:
	w = local[2];
	local[0]= w;
BLK1204:
	ctx->vsp=local; return(local[0]);}

/*:analysis-level*/
static pointer M1212bodyset_link_analysis_level(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1215;}
	local[0]= NIL;
ENT1215:
ENT1214:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1216;
	argv[0]->c.obj.iv[12] = local[0];
	local[1]= argv[0]->c.obj.iv[12];
	goto IF1217;
IF1216:
	local[1]= NIL;
IF1217:
	w = argv[0]->c.obj.iv[12];
	local[0]= w;
BLK1213:
	ctx->vsp=local; return(local[0]);}

/*:weight*/
static pointer M1218bodyset_link_weight(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1221;}
	local[0]= NIL;
ENT1221:
ENT1220:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1222;
	argv[0]->c.obj.iv[14] = local[0];
	local[1]= argv[0]->c.obj.iv[14];
	goto IF1223;
IF1222:
	local[1]= NIL;
IF1223:
	w = argv[0]->c.obj.iv[14];
	local[0]= w;
BLK1219:
	ctx->vsp=local; return(local[0]);}

/*:centroid*/
static pointer M1224bodyset_link_centroid(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1227;}
	local[0]= NIL;
ENT1227:
ENT1226:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1228;
	argv[0]->c.obj.iv[15] = local[0];
	local[1]= argv[0]->c.obj.iv[15];
	goto IF1229;
IF1228:
	local[1]= NIL;
IF1229:
	local[1]= argv[0];
	local[2]= fqv[122];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[123];
	local[3]= argv[0]->c.obj.iv[15];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
BLK1225:
	ctx->vsp=local; return(local[0]);}

/*:inertia-tensor*/
static pointer M1230bodyset_link_inertia_tensor(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1233;}
	local[0]= NIL;
ENT1233:
ENT1232:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1234;
	argv[0]->c.obj.iv[16] = local[0];
	local[1]= argv[0]->c.obj.iv[16];
	goto IF1235;
IF1234:
	local[1]= NIL;
IF1235:
	w = argv[0]->c.obj.iv[16];
	local[0]= w;
BLK1231:
	ctx->vsp=local; return(local[0]);}

/*:joint*/
static pointer M1236bodyset_link_joint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1238:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[9];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[13]); /*forward-message-to*/
	local[0]= w;
BLK1237:
	ctx->vsp=local; return(local[0]);}

/*:add-joint*/
static pointer M1239bodyset_link_add_joint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	argv[0]->c.obj.iv[9] = argv[2];
	w = argv[0]->c.obj.iv[9];
	local[0]= w;
BLK1240:
	ctx->vsp=local; return(local[0]);}

/*:del-joint*/
static pointer M1241bodyset_link_del_joint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[9] = NIL;
	w = argv[0]->c.obj.iv[9];
	local[0]= w;
BLK1242:
	ctx->vsp=local; return(local[0]);}

/*:parent-link*/
static pointer M1243bodyset_link_parent_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[10];
	local[0]= w;
BLK1244:
	ctx->vsp=local; return(local[0]);}

/*:child-links*/
static pointer M1245bodyset_link_child_links(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[11];
	local[0]= w;
BLK1246:
	ctx->vsp=local; return(local[0]);}

/*:add-child-links*/
static pointer M1247bodyset_link_add_child_links(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[11];
	ctx->vsp=local+2;
	w=(*ftab[16])(ctx,2,local+0,&ftab[16],fqv[124]); /*member*/
	if (w!=NIL) goto IF1249;
	if (argv[2]==NIL) goto IF1249;
	local[0]= argv[2];
	w = argv[0]->c.obj.iv[11];
	ctx->vsp=local+1;
	argv[0]->c.obj.iv[11] = cons(ctx,local[0],w);
	local[0]= argv[0]->c.obj.iv[11];
	goto IF1250;
IF1249:
	local[0]= NIL;
IF1250:
	w = local[0];
	local[0]= w;
BLK1248:
	ctx->vsp=local; return(local[0]);}

/*:add-parent-link*/
static pointer M1251bodyset_link_add_parent_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	argv[0]->c.obj.iv[10] = argv[2];
	w = argv[0]->c.obj.iv[10];
	local[0]= w;
BLK1252:
	ctx->vsp=local; return(local[0]);}

/*:del-child-link*/
static pointer M1253bodyset_link_del_child_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[11];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,2,local+0,&ftab[17],fqv[125]); /*delete*/
	argv[0]->c.obj.iv[11] = w;
	w = argv[0]->c.obj.iv[11];
	local[0]= w;
BLK1254:
	ctx->vsp=local; return(local[0]);}

/*:del-parent-link*/
static pointer M1255bodyset_link_del_parent_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[10] = NIL;
	w = argv[0]->c.obj.iv[10];
	local[0]= w;
BLK1256:
	ctx->vsp=local; return(local[0]);}

/*:default-coords*/
static pointer M1257bodyset_link_default_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1260;}
	local[0]= NIL;
ENT1260:
ENT1259:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1261;
	argv[0]->c.obj.iv[13] = local[0];
	local[1]= argv[0]->c.obj.iv[13];
	goto IF1262;
IF1261:
	local[1]= NIL;
IF1262:
	w = argv[0]->c.obj.iv[13];
	local[0]= w;
BLK1258:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1263cascaded_link_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1265:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[126], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY1266;
	local[1] = NIL;
KEY1266:
	local[2]= (pointer)get_sym_func(fqv[34]);
	local[3]= argv[0];
	local[4]= *(ovafptr(argv[1],fqv[35]));
	local[5]= fqv[36];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)APPLY(ctx,5,local+2); /*apply*/
	w = argv[0];
	local[0]= w;
BLK1264:
	ctx->vsp=local; return(local[0]);}

/*:init-ending*/
static pointer M1267cascaded_link_init_ending(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[8];
	local[1]= fqv[127];
	ctx->vsp=local+2;
	w=(*ftab[18])(ctx,2,local+0,&ftab[18],fqv[128]); /*send-all*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[19])(ctx,1,local+0,&ftab[19],fqv[129]); /*flatten*/
	argv[0]->c.obj.iv[10] = w;
	local[0]= NIL;
	local[1]= argv[0]->c.obj.iv[9];
WHL1270:
	if (local[1]==NIL) goto WHX1271;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	local[3]= fqv[130];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= fqv[131];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= local[0];
	local[3]= fqv[130];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= fqv[132];
	local[4]= local[0];
	local[5]= fqv[133];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= local[0];
	local[3]= fqv[133];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= fqv[134];
	local[4]= local[0];
	local[5]= fqv[130];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	goto WHL1270;
WHX1271:
	local[2]= NIL;
BLK1272:
	w = NIL;
	local[0]= argv[0];
	local[1]= fqv[135];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= NIL;
	local[1]= argv[0];
	local[2]= fqv[136];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
WHL1275:
	if (local[1]==NIL) goto WHX1276;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	local[3]= fqv[137];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	goto WHL1275;
WHX1276:
	local[2]= NIL;
BLK1277:
	w = NIL;
	local[0]= w;
BLK1268:
	ctx->vsp=local; return(local[0]);}

/*:links*/
static pointer M1279cascaded_link_links(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1281:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[8];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[20])(ctx,2,local+1,&ftab[20],fqv[138]); /*forward-message-to-all*/
	local[0]= w;
BLK1280:
	ctx->vsp=local; return(local[0]);}

/*:joint-list*/
static pointer M1282cascaded_link_joint_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1284:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[9];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[20])(ctx,2,local+1,&ftab[20],fqv[138]); /*forward-message-to-all*/
	local[0]= w;
BLK1283:
	ctx->vsp=local; return(local[0]);}

/*:link*/
static pointer M1285cascaded_link_link(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[8];
	local[2]= fqv[139];
	local[3]= (pointer)get_sym_func(fqv[140]);
	local[4]= fqv[141];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO1287,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[21])(ctx,6,local+0,&ftab[21],fqv[142]); /*find*/
	local[0]= w;
BLK1286:
	ctx->vsp=local; return(local[0]);}

/*:joint*/
static pointer M1288cascaded_link_joint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[9];
	local[2]= fqv[139];
	local[3]= (pointer)get_sym_func(fqv[140]);
	local[4]= fqv[141];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO1290,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[21])(ctx,6,local+0,&ftab[21],fqv[142]); /*find*/
	local[0]= w;
BLK1289:
	ctx->vsp=local; return(local[0]);}

/*:end-coords*/
static pointer M1291cascaded_link_end_coords(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[12];
	local[2]= fqv[139];
	local[3]= (pointer)get_sym_func(fqv[140]);
	local[4]= fqv[141];
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO1293,env,argv,local);
	ctx->vsp=local+6;
	w=(*ftab[21])(ctx,6,local+0,&ftab[21],fqv[142]); /*find*/
	local[0]= w;
BLK1292:
	ctx->vsp=local; return(local[0]);}

/*:bodies*/
static pointer M1294cascaded_link_bodies(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1296:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[10];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[20])(ctx,2,local+1,&ftab[20],fqv[138]); /*forward-message-to-all*/
	local[0]= w;
BLK1295:
	ctx->vsp=local; return(local[0]);}

/*:faces*/
static pointer M1297cascaded_link_faces(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[10];
	local[1]= fqv[143];
	ctx->vsp=local+2;
	w=(*ftab[18])(ctx,2,local+0,&ftab[18],fqv[128]); /*send-all*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[19])(ctx,1,local+0,&ftab[19],fqv[129]); /*flatten*/
	local[0]= w;
BLK1298:
	ctx->vsp=local; return(local[0]);}

/*:update-descendants*/
static pointer M1299cascaded_link_update_descendants(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1301:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= argv[0]->c.obj.iv[8];
	local[2]= fqv[122];
	ctx->vsp=local+3;
	w=(*ftab[18])(ctx,2,local+1,&ftab[18],fqv[128]); /*send-all*/
	local[0]= w;
BLK1300:
	ctx->vsp=local; return(local[0]);}

/*:angle-vector*/
static pointer M1302cascaded_link_angle_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1306;}
	local[0]= NIL;
ENT1306:
	if (n>=4) { local[1]=(argv[3]); goto ENT1305;}
	local[1]= loadglobal(fqv[5]);
	local[2]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+3;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+2); /*calc-target-joint-dimension*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,2,local+1); /*instantiate*/
	local[1]= w;
ENT1305:
ENT1304:
	if (n>4) maerror();
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= argv[0]->c.obj.iv[9];
WHL1308:
	if (local[4]==NIL) goto WHX1309;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	if (local[0]==NIL) goto IF1312;
	local[5]= local[3];
	local[6]= fqv[10];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	if (w==NIL) goto IF1314;
	local[5]= local[3];
	local[6]= fqv[11];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	if (w==NIL) goto IF1314;
	local[5]= local[3];
	local[6]= fqv[31];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)NUMEQUAL(ctx,2,local+5); /*=*/
	if (w==NIL) goto IF1316;
	local[5]= local[3];
	local[6]= fqv[11];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= fqv[31];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)NUMEQUAL(ctx,2,local+5); /*=*/
	if (w==NIL) goto IF1316;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= argv[0]->c.obj.iv[9];
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= NIL;
	local[9]= NIL;
	local[10]= NIL;
	local[11]= NIL;
	local[12]= NIL;
	local[13]= NIL;
WHL1318:
	local[14]= local[6];
	local[15]= local[3];
	local[16]= fqv[11];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	if (w==local[14]) goto WHX1319;
	local[14]= local[5];
	ctx->vsp=local+15;
	w=(pointer)ADD1(ctx,1,local+14); /*1+*/
	local[5] = w;
	local[14]= local[7];
	local[15]= local[6];
	local[16]= fqv[31];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)PLUS(ctx,2,local+14); /*+*/
	local[7] = w;
	local[14]= argv[0]->c.obj.iv[9];
	local[15]= local[5];
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[6] = w;
	goto WHL1318;
WHX1319:
	local[14]= NIL;
BLK1320:
	local[14]= local[0];
	local[15]= local[2];
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[8] = w;
	local[14]= local[0];
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[11] = w;
	local[14]= local[3];
	local[15]= fqv[41];
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[9] = w;
	local[14]= local[3];
	local[15]= fqv[42];
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[10] = w;
	local[14]= local[6];
	local[15]= fqv[41];
	local[16]= local[8];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[12] = w;
	local[14]= local[6];
	local[15]= fqv[42];
	local[16]= local[8];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[13] = w;
	local[14]= local[9];
	local[15]= local[8];
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(pointer)LSEQP(ctx,3,local+14); /*<=*/
	if (w==NIL) goto CON1322;
	local[14]= local[8];
	*(ovafptr(local[3],fqv[144])) = local[14];
	local[14]= local[11];
	local[15]= local[14];
	*(ovafptr(local[6],fqv[144])) = local[15];
	goto CON1321;
CON1322:
	local[14]= makeint((eusinteger_t)0L);
TAG1326:
	local[15]= local[14];
	local[16]= makeint((eusinteger_t)1L);
	ctx->vsp=local+17;
	w=(pointer)GREATERP(ctx,2,local+15); /*>*/
	if (w==NIL) goto IF1327;
	w = NIL;
	ctx->vsp=local+15;
	local[14]=w;
	goto BLK1325;
	goto IF1328;
IF1327:
	local[15]= NIL;
IF1328:
	local[15]= local[3];
	local[16]= fqv[41];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[9] = w;
	local[15]= local[3];
	local[16]= fqv[42];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[10] = w;
	local[15]= local[6];
	local[16]= fqv[41];
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[12] = w;
	local[15]= local[6];
	local[16]= fqv[42];
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[13] = w;
	local[15]= local[8];
	local[16]= local[9];
	ctx->vsp=local+17;
	w=(pointer)LESSP(ctx,2,local+15); /*<*/
	if (w==NIL) goto IF1329;
	local[15]= local[8];
	local[16]= local[9];
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,2,local+16); /*-*/
	local[16]= w;
	local[17]= local[14];
	ctx->vsp=local+18;
	w=(pointer)TIMES(ctx,2,local+16); /***/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)PLUS(ctx,2,local+15); /*+*/
	local[8] = w;
	local[15]= local[8];
	goto IF1330;
IF1329:
	local[15]= NIL;
IF1330:
	local[15]= local[8];
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(pointer)GREATERP(ctx,2,local+15); /*>*/
	if (w==NIL) goto IF1331;
	local[15]= local[8];
	local[16]= local[10];
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,2,local+16); /*-*/
	local[16]= w;
	local[17]= local[14];
	ctx->vsp=local+18;
	w=(pointer)TIMES(ctx,2,local+16); /***/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)PLUS(ctx,2,local+15); /*+*/
	local[8] = w;
	local[15]= local[8];
	goto IF1332;
IF1331:
	local[15]= NIL;
IF1332:
	local[15]= local[11];
	local[16]= local[12];
	ctx->vsp=local+17;
	w=(pointer)LESSP(ctx,2,local+15); /*<*/
	if (w==NIL) goto IF1333;
	local[15]= local[11];
	local[16]= local[12];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,2,local+16); /*-*/
	local[16]= w;
	local[17]= local[14];
	ctx->vsp=local+18;
	w=(pointer)TIMES(ctx,2,local+16); /***/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)PLUS(ctx,2,local+15); /*+*/
	local[11] = w;
	local[15]= local[11];
	goto IF1334;
IF1333:
	local[15]= NIL;
IF1334:
	local[15]= local[11];
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)GREATERP(ctx,2,local+15); /*>*/
	if (w==NIL) goto IF1335;
	local[15]= local[11];
	local[16]= local[13];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,2,local+16); /*-*/
	local[16]= w;
	local[17]= local[14];
	ctx->vsp=local+18;
	w=(pointer)TIMES(ctx,2,local+16); /***/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)PLUS(ctx,2,local+15); /*+*/
	local[11] = w;
	local[15]= local[11];
	goto IF1336;
IF1335:
	local[15]= NIL;
IF1336:
	local[15]= local[14];
	local[16]= makeflt(9.9999999999999977795540e-02);
	ctx->vsp=local+17;
	w=(pointer)PLUS(ctx,2,local+15); /*+*/
	local[14] = w;
	local[15]= local[14];
	local[14] = local[15];
	w = NIL;
	ctx->vsp=local+15;
	goto TAG1326;
	w = NIL;
	local[14]= w;
BLK1325:
	local[14]= local[8];
	*(ovafptr(local[3],fqv[144])) = local[14];
	local[14]= local[11];
	local[15]= local[14];
	*(ovafptr(local[6],fqv[144])) = local[15];
	local[14]= local[0];
	local[15]= local[2];
	local[16]= local[8];
	ctx->vsp=local+17;
	w=(pointer)SETELT(ctx,3,local+14); /*setelt*/
	local[14]= local[0];
	local[15]= local[7];
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(pointer)SETELT(ctx,3,local+14); /*setelt*/
	local[14]= w;
	goto CON1321;
CON1323:
	local[14]= NIL;
CON1321:
	w = local[14];
	local[5]= w;
	goto IF1317;
IF1316:
	local[5]= NIL;
IF1317:
	goto IF1315;
IF1314:
	local[5]= NIL;
IF1315:
	local[5]= local[3];
	local[6]= fqv[31];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= local[5];
	if (fqv[145]!=local[6]) goto IF1339;
	local[6]= local[3];
	local[7]= fqv[20];
	local[8]= local[0];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	goto IF1340;
IF1339:
	if (T==NIL) goto IF1341;
	local[6]= local[3];
	local[7]= fqv[20];
	local[8]= local[0];
	local[9]= local[2];
	local[10]= local[2];
	local[11]= local[3];
	local[12]= fqv[31];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SUBSEQ(ctx,3,local+8); /*subseq*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	goto IF1342;
IF1341:
	local[6]= NIL;
IF1342:
IF1340:
	w = local[6];
	local[5]= w;
	goto IF1313;
IF1312:
	local[5]= NIL;
IF1313:
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[3];
	local[7]= fqv[31];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
WHL1344:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX1345;
	local[7]= local[1];
	local[8]= local[2];
	local[9]= local[3];
	local[10]= fqv[31];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= local[9];
	if (fqv[146]!=local[10]) goto IF1348;
	local[10]= local[3];
	local[11]= fqv[20];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	goto IF1349;
IF1348:
	if (T==NIL) goto IF1350;
	local[10]= local[3];
	local[11]= fqv[20];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)ELT(ctx,2,local+10); /*elt*/
	local[10]= w;
	goto IF1351;
IF1350:
	local[10]= NIL;
IF1351:
IF1349:
	w = local[10];
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SETELT(ctx,3,local+7); /*setelt*/
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[2] = w;
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL1344;
WHX1345:
	local[7]= NIL;
BLK1346:
	w = NIL;
	goto WHL1308;
WHX1309:
	local[5]= NIL;
BLK1310:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK1303:
	ctx->vsp=local; return(local[0]);}

/*:find-link-route*/
static pointer M1352cascaded_link_find_link_route(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1355;}
	local[0]= NIL;
ENT1355:
ENT1354:
	if (n>4) maerror();
	local[1]= argv[2];
	local[2]= fqv[133];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	if (local[1]==NIL) goto CON1357;
	local[2]= argv[2];
	local[3]= argv[0];
	local[4]= fqv[136];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[21])(ctx,2,local+2,&ftab[21],fqv[142]); /*find*/
	if (w!=NIL) goto CON1357;
	local[2]= argv[0];
	local[3]= fqv[147];
	local[4]= local[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	goto CON1356;
CON1357:
	if (local[1]==NIL) goto CON1358;
	local[2]= argv[2];
	if (local[0]==local[2]) goto CON1358;
	local[2]= argv[0];
	local[3]= fqv[147];
	local[4]= local[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)APPEND(ctx,2,local+2); /*append*/
	local[2]= w;
	goto CON1356;
CON1358:
	if (local[1]==NIL) goto CON1359;
	local[2]= argv[2];
	if (local[0]!=local[2]) goto CON1359;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	goto CON1356;
CON1359:
	local[2]= NIL;
CON1356:
	w = local[2];
	local[0]= w;
BLK1353:
	ctx->vsp=local; return(local[0]);}

/*:link-list*/
static pointer M1360cascaded_link_link_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1363;}
	local[0]= NIL;
ENT1363:
ENT1362:
	if (n>4) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	local[4]= fqv[147];
	local[5]= argv[2];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[1] = w;
	if (local[0]==NIL) goto IF1364;
	local[3]= local[0];
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car==local[3]) goto IF1364;
	local[3]= argv[0];
	local[4]= fqv[147];
	local[5]= local[0];
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[2] = w;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)NREVERSE(ctx,1,local+3); /*nreverse*/
	local[3]= w;
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)NCONC(ctx,2,local+3); /*nconc*/
	local[1] = w;
	local[3]= local[1];
	goto IF1365;
IF1364:
	local[3]= NIL;
IF1365:
	w = local[1];
	local[0]= w;
BLK1361:
	ctx->vsp=local; return(local[0]);}

/*:make-joint-min-max-table*/
static pointer M1366cascaded_link_make_joint_min_max_table(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<6) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[148], &argv[6], n-6, local+0, 0);
	if (n & (1<<0)) goto KEY1368;
	local[0] = makeint((eusinteger_t)0L);
KEY1368:
	if (n & (1<<1)) goto KEY1369;
	local[1] = NIL;
KEY1369:
	if (n & (1<<2)) goto KEY1370;
	local[2] = NIL;
KEY1370:
	if (n & (1<<3)) goto KEY1371;
	local[3] = makeflt(0.0000000000000000000000e+00);
KEY1371:
	if (n & (1<<4)) goto KEY1372;
	local[4] = NIL;
KEY1372:
	if (local[2]!=NIL) goto IF1373;
	local[5]= argv[0];
	local[6]= fqv[136];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= fqv[149];
	local[7]= fqv[120];
	ctx->vsp=local+8;
	w=(*ftab[18])(ctx,3,local+5,&ftab[18],fqv[128]); /*send-all*/
	local[5]= w;
	goto IF1374;
IF1373:
	local[5]= NIL;
IF1374:
	local[5]= NIL;
	local[6]= argv[4];
	local[7]= argv[5];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,2,local+6); /*list*/
	local[6]= w;
WHL1376:
	if (local[6]==NIL) goto WHX1377;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= local[5];
	local[8]= fqv[150];
	local[9]= fqv[151];
	local[10]= local[5];
	local[11]= fqv[22];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	local[7]= local[5];
	local[8]= fqv[150];
	local[9]= fqv[152];
	local[10]= local[5];
	local[11]= fqv[23];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,4,local+7); /*send*/
	goto WHL1376;
WHX1377:
	local[7]= NIL;
BLK1378:
	w = NIL;
	local[5]= argv[0];
	local[6]= fqv[153];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[154];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= argv[4];
	local[8]= fqv[22];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	local[8]= makeflt(9.9999999999999991239646e-05);
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,2,local+7); /*-*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)TRUNCATE(ctx,1,local+7); /*truncate*/
	local[7]= w;
	local[8]= argv[4];
	local[9]= fqv[23];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= makeflt(9.9999999999999991239646e-05);
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)TRUNCATE(ctx,1,local+8); /*truncate*/
	local[8]= w;
	local[9]= argv[5];
	local[10]= fqv[22];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	local[10]= makeflt(9.9999999999999991239646e-05);
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TRUNCATE(ctx,1,local+9); /*truncate*/
	local[9]= w;
	local[10]= argv[5];
	local[11]= fqv[23];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	local[11]= makeflt(9.9999999999999991239646e-05);
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)TRUNCATE(ctx,1,local+10); /*truncate*/
	local[10]= w;
	local[11]= local[8];
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)ROUND(ctx,1,local+11); /*round*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[11]= w;
	local[12]= local[10];
	local[13]= local[9];
	ctx->vsp=local+14;
	w=(pointer)MINUS(ctx,2,local+12); /*-*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)ROUND(ctx,1,local+12); /*round*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[12]= w;
	if (local[2]==NIL) goto IF1380;
	local[13]= T;
	local[14]= fqv[155];
	local[15]= argv[4];
	local[16]= fqv[3];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	local[16]= argv[4];
	local[17]= fqv[22];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	local[17]= argv[4];
	local[18]= fqv[23];
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,2,local+17); /*send*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)XFORMAT(ctx,5,local+13); /*format*/
	local[13]= T;
	local[14]= fqv[156];
	local[15]= argv[5];
	local[16]= fqv[3];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	local[16]= argv[5];
	local[17]= fqv[22];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	local[17]= argv[5];
	local[18]= fqv[23];
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,2,local+17); /*send*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)XFORMAT(ctx,5,local+13); /*format*/
	local[13]= T;
	local[14]= fqv[157];
	local[15]= argv[4];
	local[16]= fqv[3];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	local[16]= local[7];
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(pointer)XFORMAT(ctx,5,local+13); /*format*/
	local[13]= T;
	local[14]= fqv[158];
	local[15]= argv[5];
	local[16]= fqv[3];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	local[16]= local[9];
	local[17]= local[10];
	ctx->vsp=local+18;
	w=(pointer)XFORMAT(ctx,5,local+13); /*format*/
	local[13]= w;
	goto IF1381;
IF1380:
	local[13]= NIL;
IF1381:
	local[13]= argv[0];
	local[14]= fqv[159];
	ctx->vsp=local+15;
	w=(*ftab[11])(ctx,0,local+15,&ftab[11],fqv[86]); /*make-coords*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= argv[0];
	local[14]= fqv[160];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	if (local[4]==NIL) goto IF1382;
	local[13]= argv[2];
	local[14]= NIL;
	local[15]= fqv[161];
	ctx->vsp=local+16;
	w=(pointer)PUTPROP(ctx,3,local+13); /*putprop*/
	local[13]= argv[3];
	local[14]= NIL;
	local[15]= fqv[161];
	ctx->vsp=local+16;
	w=(pointer)PUTPROP(ctx,3,local+13); /*putprop*/
	local[13]= argv[2];
	local[14]= argv[3];
	local[15]= makeint((eusinteger_t)2L);
	local[16]= fqv[162];
	local[17]= local[0];
	local[18]= fqv[163];
	local[19]= local[1];
	ctx->vsp=local+20;
	w=(*ftab[22])(ctx,7,local+13,&ftab[22],fqv[164]); /*pqp-collision-check*/
	local[13]= w;
	goto IF1383;
IF1382:
	local[13]= NIL;
IF1383:
	local[13]= argv[0];
	local[14]= fqv[165];
	local[15]= argv[2];
	local[16]= argv[3];
	local[17]= argv[4];
	local[18]= argv[5];
	local[19]= local[11];
	local[20]= local[12];
	local[21]= local[7];
	local[22]= local[9];
	local[23]= local[0];
	local[24]= local[1];
	local[25]= local[2];
	local[26]= local[3];
	ctx->vsp=local+27;
	w=(pointer)SEND(ctx,14,local+13); /*send*/
	local[13]= argv[0];
	local[14]= fqv[154];
	local[15]= local[6];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= argv[0];
	local[14]= fqv[159];
	local[15]= local[5];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	if (local[2]!=NIL) goto IF1384;
	local[13]= argv[0];
	local[14]= fqv[136];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	local[14]= fqv[149];
	local[15]= fqv[116];
	ctx->vsp=local+16;
	w=(*ftab[18])(ctx,3,local+13,&ftab[18],fqv[128]); /*send-all*/
	local[13]= w;
	goto IF1385;
IF1384:
	local[13]= NIL;
IF1385:
	w = NIL;
	local[0]= w;
BLK1367:
	ctx->vsp=local; return(local[0]);}

/*:make-min-max-table-using-collision-check*/
static pointer M1386cascaded_link_make_min_max_table_using_collision_check(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=14) maerror();
	local[0]= argv[7];
	local[1]= argv[6];
	ctx->vsp=local+2;
	w=(*ftab[23])(ctx,2,local+0,&ftab[23],fqv[166]); /*make-matrix*/
	local[0]= w;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)10L);
	local[4]= makeint((eusinteger_t)0L);
TAG1390:
	local[5]= local[4];
	local[6]= argv[7];
	ctx->vsp=local+7;
	w=(pointer)GREQP(ctx,2,local+5); /*>=*/
	if (w==NIL) goto IF1391;
	w = NIL;
	ctx->vsp=local+5;
	local[4]=w;
	goto BLK1389;
	goto IF1392;
IF1391:
	local[5]= NIL;
IF1392:
	local[5]= argv[5];
	local[6]= fqv[20];
	local[7]= local[4];
	local[8]= argv[9];
	ctx->vsp=local+9;
	w=(pointer)PLUS(ctx,2,local+7); /*+*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)ROUND(ctx,1,local+7); /*round*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[1] = fqv[167];
	local[5]= local[4];
	local[6]= makeint((eusinteger_t)10L);
	ctx->vsp=local+7;
	w=(pointer)MOD(ctx,2,local+5); /*mod*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)NUMEQUAL(ctx,2,local+5); /*=*/
	if (w==NIL) goto IF1393;
	local[5]= T;
	local[6]= fqv[168];
	local[7]= makeint((eusinteger_t)13L);
	local[8]= local[4];
	local[9]= argv[6];
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	local[9]= argv[6];
	local[10]= argv[7];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,5,local+5); /*format*/
	ctx->vsp=local+5;
	w=(pointer)FINOUT(ctx,0,local+5); /*finish-output*/
	local[5]= w;
	goto IF1394;
IF1393:
	local[5]= NIL;
IF1394:
	local[5]= makeint((eusinteger_t)0L);
TAG1397:
	local[6]= local[5];
	local[7]= argv[6];
	ctx->vsp=local+8;
	w=(pointer)GREQP(ctx,2,local+6); /*>=*/
	if (w==NIL) goto IF1398;
	w = NIL;
	ctx->vsp=local+6;
	local[5]=w;
	goto BLK1396;
	goto IF1399;
IF1398:
	local[6]= NIL;
IF1399:
	{jmp_buf jb;
	w = fqv[169];
	ctx->vsp=local+6;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT1400;}
	local[12]= argv[4];
	local[13]= fqv[20];
	local[14]= local[5];
	local[15]= argv[8];
	ctx->vsp=local+16;
	w=(pointer)PLUS(ctx,2,local+14); /*+*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)ROUND(ctx,1,local+14); /*round*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= local[1];
	if (fqv[170]!=local[12]) goto CON1402;
	local[12]= local[5];
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(pointer)MOD(ctx,2,local+12); /*mod*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(*ftab[24])(ctx,2,local+12,&ftab[24],fqv[171]); /*/=*/
	if (w==NIL) goto CON1402;
	local[12]= local[5];
	local[13]= argv[6];
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)MINUS(ctx,2,local+13); /*-*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)LSEQP(ctx,2,local+12); /*<=*/
	if (w==NIL) goto CON1402;
	local[2] = T;
	local[12]= local[2];
	goto CON1401;
CON1402:
	local[12]= argv[2];
	local[13]= argv[3];
	local[14]= makeint((eusinteger_t)2L);
	local[15]= fqv[162];
	local[16]= argv[10];
	local[17]= fqv[163];
	local[18]= argv[11];
	ctx->vsp=local+19;
	w=(*ftab[22])(ctx,7,local+12,&ftab[22],fqv[164]); /*pqp-collision-check*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)NUMEQUAL(ctx,2,local+12); /*=*/
	local[2] = w;
	local[12]= local[1];
	if (fqv[167]!=local[12]) goto CON1405;
	if (local[2]==NIL) goto CON1405;
	local[1] = fqv[170];
	local[12]= local[1];
	goto CON1404;
CON1405:
	local[12]= local[1];
	if (fqv[170]!=local[12]) goto CON1406;
	if (local[2]!=NIL) goto CON1406;
	local[1] = fqv[172];
	local[12]= local[5];
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(pointer)MINUS(ctx,2,local+12); /*-*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)MAX(ctx,2,local+12); /*max*/
	local[5] = w;
	local[12]= fqv[169];
	w = NIL;
	ctx->vsp=local+13;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	goto CON1404;
CON1406:
	local[12]= NIL;
CON1404:
	goto CON1401;
CON1403:
	local[12]= NIL;
CON1401:
	local[12]= local[0];
	local[13]= local[4];
	local[14]= local[5];
	if (local[2]==NIL) goto IF1407;
	local[15]= makeint((eusinteger_t)1L);
	goto IF1408;
IF1407:
	local[15]= makeint((eusinteger_t)0L);
IF1408:
	ctx->vsp=local+16;
	w=(pointer)ASET(ctx,4,local+12); /*aset*/
	if (argv[12]==NIL) goto IF1409;
	local[12]= T;
	local[13]= fqv[173];
	local[14]= argv[5];
	local[15]= fqv[3];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
	local[15]= local[4];
	local[16]= argv[9];
	ctx->vsp=local+17;
	w=(pointer)PLUS(ctx,2,local+15); /*+*/
	local[15]= w;
	local[16]= argv[4];
	local[17]= fqv[3];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,2,local+16); /*send*/
	local[16]= w;
	local[17]= local[5];
	local[18]= argv[8];
	ctx->vsp=local+19;
	w=(pointer)PLUS(ctx,2,local+17); /*+*/
	local[17]= w;
	local[18]= local[2];
	local[19]= local[1];
	ctx->vsp=local+20;
	w=(pointer)XFORMAT(ctx,8,local+12); /*format*/
	local[12]= w;
	goto IF1410;
IF1409:
	local[12]= NIL;
IF1410:
	w = local[12];
CAT1400:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[6]= local[5];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)PLUS(ctx,2,local+6); /*+*/
	local[6]= w;
	local[5] = local[6];
	w = NIL;
	ctx->vsp=local+6;
	goto TAG1397;
	w = NIL;
	local[5]= w;
BLK1396:
	local[5]= local[4];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[5]= w;
	local[4] = local[5];
	w = NIL;
	ctx->vsp=local+5;
	goto TAG1390;
	w = NIL;
	local[4]= w;
BLK1389:
	w = local[4];
	local[1]= T;
	local[2]= fqv[174];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,FLET1413,env,argv,local);
	local[2]= argv[6];
	local[3]= argv[7];
	local[4]= argv[8];
	local[5]= argv[9];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO1414,env,argv,local);
	w = local[1];
	ctx->vsp=local+7;
	w=FLET1413(ctx,5,local+2,w);
	local[2]= w;
	local[3]= argv[5];
	local[4]= fqv[11];
	local[5]= argv[4];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= argv[5];
	local[4]= fqv[10];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[2]= argv[7];
	local[3]= argv[6];
	local[4]= argv[9];
	local[5]= argv[8];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO1415,env,argv,local);
	w = local[1];
	ctx->vsp=local+7;
	w=FLET1413(ctx,5,local+2,w);
	local[2]= w;
	local[3]= argv[4];
	local[4]= fqv[11];
	local[5]= argv[5];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= argv[4];
	local[4]= fqv[10];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[0]= w;
BLK1387:
	ctx->vsp=local; return(local[0]);}

/*:plot-joint-min-max-table-common*/
static pointer M1416cascaded_link_plot_joint_min_max_table_common(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= NIL;
	local[1]= loadglobal(fqv[175]);
	local[2]= loadglobal(fqv[176]);
	local[3]= NIL;
	ctx->vsp=local+4;
	w = makeclosure(codevec,quotevec,UWP1422,env,argv,local);
	local[4]=(pointer)(ctx->protfp); local[5]=w;
	ctx->protfp=(struct protectframe *)(local+4);
	local[6]= fqv[177];
	local[7]= fqv[178];
	local[8]= fqv[179];
	ctx->vsp=local+9;
	w=(*ftab[25])(ctx,3,local+6,&ftab[25],fqv[180]); /*open*/
	local[6]= w;
	ctx->vsp=local+7;
	w = makeclosure(codevec,quotevec,UWP1423,env,argv,local);
	local[7]=(pointer)(ctx->protfp); local[8]=w;
	ctx->protfp=(struct protectframe *)(local+7);
	local[9]= local[6];
	storeglobal(fqv[175],local[9]);
	local[9]= local[6];
	storeglobal(fqv[176],local[9]);
	local[9]= argv[2];
	local[10]= fqv[151];
	ctx->vsp=local+11;
	w=(pointer)GETPROP(ctx,2,local+9); /*get*/
	local[9]= w;
TAG1426:
	local[10]= local[9];
	local[11]= argv[2];
	local[12]= fqv[152];
	ctx->vsp=local+13;
	w=(pointer)GETPROP(ctx,2,local+11); /*get*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)GREATERP(ctx,2,local+10); /*>*/
	if (w==NIL) goto IF1427;
	w = NIL;
	ctx->vsp=local+10;
	local[9]=w;
	goto BLK1425;
	goto IF1428;
IF1427:
	local[10]= NIL;
IF1428:
	local[10]= argv[0];
	local[11]= fqv[160];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= argv[2];
	local[11]= fqv[20];
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[10]= argv[2];
	local[11]= fqv[20];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)EUSFLOAT(ctx,1,local+10); /*float*/
	local[10]= w;
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)EUSFLOAT(ctx,1,local+11); /*float*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[8])(ctx,2,local+10,&ftab[8],fqv[81]); /*eps=*/
	local[10]= w;
	local[11]= argv[3];
	local[12]= fqv[151];
	ctx->vsp=local+13;
	w=(pointer)GETPROP(ctx,2,local+11); /*get*/
	local[11]= w;
TAG1431:
	local[12]= local[11];
	local[13]= argv[3];
	local[14]= fqv[152];
	ctx->vsp=local+15;
	w=(pointer)GETPROP(ctx,2,local+13); /*get*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)GREATERP(ctx,2,local+12); /*>*/
	if (w==NIL) goto IF1432;
	w = NIL;
	ctx->vsp=local+12;
	local[11]=w;
	goto BLK1430;
	goto IF1433;
IF1432:
	local[12]= NIL;
IF1433:
	local[12]= argv[3];
	local[13]= fqv[20];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= argv[3];
	local[13]= fqv[20];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)EUSFLOAT(ctx,1,local+12); /*float*/
	local[12]= w;
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(pointer)EUSFLOAT(ctx,1,local+13); /*float*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,2,local+12,&ftab[8],fqv[81]); /*eps=*/
	local[12]= w;
	if (local[10]==NIL) goto IF1434;
	if (local[12]==NIL) goto IF1434;
	local[13]= local[9];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,2,local+13); /*list*/
	local[13]= w;
	w = local[0];
	ctx->vsp=local+14;
	local[0] = cons(ctx,local[13],w);
	local[13]= local[0];
	goto IF1435;
IF1434:
	local[13]= NIL;
IF1435:
	w = local[13];
	local[12]= makeint((eusinteger_t)1L);
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,2,local+12); /*+*/
	local[12]= w;
	local[11] = local[12];
	w = NIL;
	ctx->vsp=local+12;
	goto TAG1431;
	w = NIL;
	local[11]= w;
BLK1430:
	w = local[11];
	local[10]= makeint((eusinteger_t)1L);
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[10]= w;
	local[9] = local[10];
	w = NIL;
	ctx->vsp=local+10;
	goto TAG1426;
	w = NIL;
	local[9]= w;
BLK1425:
	local[3] = local[9];
	w = local[3];
	ctx->vsp=local+9;
	UWP1423(ctx,0,local+9,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	ctx->vsp=local+6;
	UWP1422(ctx,0,local+6,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)REVERSE(ctx,1,local+1); /*reverse*/
	local[0]= w;
BLK1417:
	ctx->vsp=local; return(local[0]);}

/*:plot-joint-min-max-table*/
static pointer M1438cascaded_link_plot_joint_min_max_table(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= loadglobal(fqv[181]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[182];
	local[3]= fqv[183];
	local[4]= argv[2];
	local[5]= fqv[184];
	local[6]= fqv[152];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= argv[2];
	local[6]= fqv[184];
	local[7]= fqv[151];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ROUND(ctx,1,local+4); /*round*/
	local[4]= w;
	local[5]= fqv[185];
	local[6]= argv[3];
	local[7]= fqv[184];
	local[8]= fqv[152];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	local[7]= argv[3];
	local[8]= fqv[184];
	local[9]= fqv[151];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)ROUND(ctx,1,local+6); /*round*/
	local[6]= w;
	local[7]= fqv[186];
	local[8]= fqv[187];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,8,local+1); /*send*/
	w = local[0];
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[188];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	local[2]= local[0];
	local[3]= fqv[189];
	local[4]= makeint((eusinteger_t)16777215L);
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= local[0];
	local[3]= fqv[190];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= local[0];
	local[3]= fqv[189];
	local[4]= makeint((eusinteger_t)16711680L);
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= NIL;
	local[3]= local[1];
WHL1442:
	if (local[3]==NIL) goto WHX1443;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= local[0];
	local[5]= fqv[191];
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)ROUND(ctx,1,local+6); /*round*/
	local[6]= w;
	local[7]= argv[2];
	local[8]= fqv[151];
	ctx->vsp=local+9;
	w=(pointer)GETPROP(ctx,2,local+7); /*get*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	ctx->vsp=local+8;
	w=(pointer)ROUND(ctx,1,local+7); /*round*/
	local[7]= w;
	local[8]= argv[3];
	local[9]= fqv[151];
	ctx->vsp=local+10;
	w=(pointer)GETPROP(ctx,2,local+8); /*get*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,2,local+7); /*-*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MKFLTVEC(ctx,2,local+6); /*float-vector*/
	local[6]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	ctx->vsp=local+8;
	w=(pointer)ROUND(ctx,1,local+7); /*round*/
	local[7]= w;
	local[8]= argv[2];
	local[9]= fqv[151];
	ctx->vsp=local+10;
	w=(pointer)GETPROP(ctx,2,local+8); /*get*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,2,local+7); /*-*/
	local[7]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	ctx->vsp=local+9;
	w=(pointer)ROUND(ctx,1,local+8); /*round*/
	local[8]= w;
	local[9]= argv[3];
	local[10]= fqv[151];
	ctx->vsp=local+11;
	w=(pointer)GETPROP(ctx,2,local+9); /*get*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MKFLTVEC(ctx,2,local+7); /*float-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,4,local+4); /*send*/
	goto WHL1442;
WHX1443:
	local[4]= NIL;
BLK1444:
	w = NIL;
	local[2]= local[0];
	local[3]= fqv[190];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[0]= w;
BLK1439:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1287(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[3];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1290(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[3];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1293(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[3];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET1413(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= makeint((eusinteger_t)3L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[23])(ctx,2,local+0,&ftab[23],fqv[166]); /*make-matrix*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0];
WHL1447:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX1448;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= NIL;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= argv[1];
WHL1451:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX1452;
	local[8]= argv[4];
	local[9]= env->c.clo.env2[0];
	local[10]= local[1];
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)FUNCALL(ctx,4,local+8); /*funcall*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)NUMEQUAL(ctx,2,local+8); /*=*/
	if (w==NIL) goto IF1454;
	local[5] = T;
	local[8]= local[6];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)LESSP(ctx,2,local+8); /*<*/
	if (w==NIL) goto IF1456;
	local[3] = local[6];
	local[8]= local[3];
	goto IF1457;
IF1456:
	local[8]= NIL;
IF1457:
	local[8]= local[6];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)GREATERP(ctx,2,local+8); /*>*/
	if (w==NIL) goto IF1458;
	local[4] = local[6];
	local[8]= local[4];
	goto IF1459;
IF1458:
	local[8]= NIL;
IF1459:
	goto IF1455;
IF1454:
	local[8]= NIL;
IF1455:
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL1451;
WHX1452:
	local[8]= NIL;
BLK1453:
	w = NIL;
	if (local[5]!=NIL) goto IF1460;
	local[6]= argv[3];
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[3] = w;
	local[6]= argv[3];
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,1,local+6); /*-*/
	local[4] = w;
	local[6]= local[4];
	goto IF1461;
IF1460:
	local[6]= NIL;
IF1461:
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[1];
	local[9]= argv[2];
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ROUND(ctx,1,local+9); /*round*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ASET(ctx,4,local+6); /*aset*/
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= local[1];
	local[9]= env->c.clo.env1[13];
	local[10]= argv[3];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,3,local+9); /*+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ROUND(ctx,1,local+9); /*round*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ASET(ctx,4,local+6); /*aset*/
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= local[1];
	local[9]= env->c.clo.env1[13];
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,1,local+9); /*-*/
	local[9]= w;
	local[10]= argv[3];
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,3,local+9); /*+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ROUND(ctx,1,local+9); /*round*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)ASET(ctx,4,local+6); /*aset*/
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL1447;
WHX1448:
	local[3]= NIL;
BLK1449:
	w = NIL;
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1414(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)AREF(ctx,3,local+0); /*aref*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1415(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= argv[1];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)AREF(ctx,3,local+0); /*aref*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP1422(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[1];
	storeglobal(fqv[175],local[0]);
	local[0]= env->c.clo.env2[1];
	storeglobal(fqv[176],local[0]);
	w = env->c.clo.env2[3];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP1423(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[6];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:calc-target-axis-dimension*/
static pointer M1462cascaded_link_calc_target_axis_dimension(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= makeint((eusinteger_t)6L);
	w = argv[2];
	if (!!iscons(w)) goto IF1464;
	local[1]= makeint((eusinteger_t)1L);
	goto IF1465;
IF1464:
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
IF1465:
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= NIL;
	w = argv[3];
	if (!!iscons(w)) goto IF1467;
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	goto IF1468;
IF1467:
	local[2]= argv[3];
IF1468:
	w = argv[2];
	if (!!iscons(w)) goto IF1469;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	goto IF1470;
IF1469:
	local[3]= argv[2];
IF1470:
	ctx->vsp=local+4;
	w=(pointer)APPEND(ctx,2,local+2); /*append*/
	local[2]= w;
WHL1471:
	if (local[2]==NIL) goto WHX1472;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[1];
	local[4]= local[3];
	w = fqv[192];
	if (memq(local[4],w)==NIL) goto IF1476;
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[0] = w;
	local[4]= local[0];
	goto IF1477;
IF1476:
	local[4]= local[3];
	w = fqv[193];
	if (memq(local[4],w)==NIL) goto IF1478;
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[0] = w;
	local[4]= local[0];
	goto IF1479;
IF1478:
	local[4]= local[3];
	if (fqv[194]!=local[4]) goto IF1480;
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)3L);
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[0] = w;
	local[4]= local[0];
	goto IF1481;
IF1480:
	local[4]= NIL;
IF1481:
IF1479:
IF1477:
	w = local[4];
	goto WHL1471;
WHX1472:
	local[3]= NIL;
BLK1473:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK1463:
	ctx->vsp=local; return(local[0]);}

/*:calc-union-link-list*/
static pointer M1482cascaded_link_calc_union_link_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!!iscons(w)) goto CON1485;
	local[0]= argv[2];
	goto CON1484;
CON1485:
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	if (makeint((eusinteger_t)1L)!=local[0]) goto CON1486;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	goto CON1484;
CON1486:
	local[0]= (pointer)get_sym_func(fqv[195]);
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[26])(ctx,2,local+0,&ftab[26],fqv[196]); /*reduce*/
	local[0]= w;
	goto CON1484;
CON1487:
	local[0]= NIL;
CON1484:
	w = local[0];
	local[0]= w;
BLK1483:
	ctx->vsp=local; return(local[0]);}

/*:calc-target-joint-dimension*/
static pointer M1488cascaded_link_calc_target_joint_dimension(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[197];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= fqv[198];
	ctx->vsp=local+2;
	w=(*ftab[18])(ctx,2,local+0,&ftab[18],fqv[128]); /*send-all*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+0); /*calc-target-joint-dimension*/
	local[0]= w;
BLK1489:
	ctx->vsp=local; return(local[0]);}

/*:calc-inverse-jacobian*/
static pointer M1490cascaded_link_calc_inverse_jacobian(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1492:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[199], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1493;
	local[1] = makeflt(9.9999999999999977795540e-02);
KEY1493:
	if (n & (1<<1)) goto KEY1494;
	local[2] = makeflt(1.0000000000000000208167e-03);
KEY1494:
	if (n & (1<<2)) goto KEY1495;
	local[3] = NIL;
KEY1495:
	if (n & (1<<3)) goto KEY1496;
	local[4] = NIL;
KEY1496:
	if (n & (1<<4)) goto KEY1497;
	local[5] = NIL;
KEY1497:
	if (n & (1<<5)) goto KEY1498;
	local[6] = NIL;
KEY1498:
	if (n & (1<<6)) goto KEY1499;
	local[7] = NIL;
KEY1499:
	if (n & (1<<7)) goto KEY1500;
	local[8] = NIL;
KEY1500:
	if (n & (1<<8)) goto KEY1501;
	local[9] = NIL;
KEY1501:
	if (n & (1<<9)) goto KEY1502;
	local[10] = NIL;
KEY1502:
	if (n & (1<<10)) goto KEY1503;
	local[11] = NIL;
KEY1503:
	if (n & (1<<11)) goto KEY1504;
	local[12] = NIL;
KEY1504:
	if (n & (1<<12)) goto KEY1505;
	local[13] = NIL;
KEY1505:
	local[14]= NIL;
	local[15]= NIL;
	local[16]= NIL;
	local[17]= makeint((eusinteger_t)0L);
	local[18]= argv[2];
	local[19]= local[12];
	local[20]= local[7];
	ctx->vsp=local+21;
	w=(*ftab[27])(ctx,3,local+18,&ftab[27],fqv[200]); /*manipulability*/
	local[15] = w;
	local[18]= local[15];
	local[19]= local[1];
	ctx->vsp=local+20;
	w=(pointer)LESSP(ctx,2,local+18); /*<*/
	if (w==NIL) goto IF1506;
	local[18]= local[2];
	local[19]= makeflt(1.0000000000000000000000e+00);
	local[20]= local[15];
	local[21]= local[1];
	ctx->vsp=local+22;
	w=(pointer)QUOTIENT(ctx,2,local+20); /*/*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)MINUS(ctx,2,local+19); /*-*/
	local[19]= w;
	local[20]= makeint((eusinteger_t)2L);
	ctx->vsp=local+21;
	w=(*ftab[28])(ctx,2,local+19,&ftab[28],fqv[201]); /*expt*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)TIMES(ctx,2,local+18); /***/
	local[17] = w;
	local[18]= local[17];
	goto IF1507;
IF1506:
	local[18]= NIL;
IF1507:
	if (local[4]==NIL) goto IF1508;
	local[18]= fqv[202];
	w = local[4];
	if (memq(local[18],w)!=NIL) goto IF1508;
	local[18]= fqv[203];
	local[19]= local[17];
	local[20]= local[15];
	local[21]= local[2];
	local[22]= local[1];
	local[23]= argv[2];
	ctx->vsp=local+24;
	w=(*ftab[29])(ctx,1,local+23,&ftab[29],fqv[204]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[23]= (w)->c.cons.car;
	ctx->vsp=local+24;
	w=(*ftab[2])(ctx,6,local+18,&ftab[2],fqv[15]); /*warn*/
	local[18]= w;
	goto IF1509;
IF1508:
	local[18]= NIL;
IF1509:
	local[18]= argv[2];
	local[19]= local[17];
	local[20]= local[3];
	local[21]= local[5];
	local[22]= local[6];
	local[23]= local[7];
	local[24]= local[8];
	local[25]= local[9];
	local[26]= local[10];
	local[27]= local[11];
	local[28]= local[12];
	local[29]= local[13];
	ctx->vsp=local+30;
	w=(*ftab[30])(ctx,12,local+18,&ftab[30],fqv[205]); /*sr-inverse*/
	local[14] = w;
	w = local[14];
	local[0]= w;
BLK1491:
	ctx->vsp=local; return(local[0]);}

/*:calc-gradh-from-link-list*/
static pointer M1510cascaded_link_calc_gradh_from_link_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1513;}
	local[0]= loadglobal(fqv[5]);
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,2,local+0); /*instantiate*/
	local[0]= w;
ENT1513:
ENT1512:
	if (n>4) maerror();
	local[1]= argv[2];
	local[2]= fqv[198];
	ctx->vsp=local+3;
	w=(*ftab[18])(ctx,2,local+1,&ftab[18],fqv[128]); /*send-all*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[20];
	ctx->vsp=local+4;
	w=(*ftab[18])(ctx,2,local+2,&ftab[18],fqv[128]); /*send-all*/
	local[2]= w;
	local[3]= local[1];
	local[4]= fqv[22];
	ctx->vsp=local+5;
	w=(*ftab[18])(ctx,2,local+3,&ftab[18],fqv[128]); /*send-all*/
	local[3]= w;
	local[4]= local[1];
	local[5]= fqv[23];
	ctx->vsp=local+6;
	w=(*ftab[18])(ctx,2,local+4,&ftab[18],fqv[128]); /*send-all*/
	local[4]= w;
	local[5]= loadglobal(fqv[88]);
	local[6]= (pointer)get_sym_func(fqv[206]);
	local[7]= local[4];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)MAP(ctx,4,local+5); /*map*/
	local[5]= w;
	local[6]= loadglobal(fqv[88]);
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,CLO1514,env,argv,local);
	local[8]= local[4];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)MAP(ctx,4,local+6); /*map*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= argv[2];
	ctx->vsp=local+9;
	w=(pointer)LENGTH(ctx,1,local+8); /*length*/
	local[8]= w;
WHL1516:
	local[9]= local[7];
	w = local[8];
	if ((eusinteger_t)local[9] >= (eusinteger_t)w) goto WHX1517;
	local[9]= local[0];
	local[10]= local[7];
	local[11]= local[6];
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= local[2];
	local[13]= local[7];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	local[12]= local[5];
	local[13]= local[7];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)SETELT(ctx,3,local+9); /*setelt*/
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[7] = w;
	goto WHL1516;
WHX1517:
	local[9]= NIL;
BLK1518:
	w = local[0];
	w = local[0];
	local[0]= w;
BLK1511:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian-from-link-list*/
static pointer M1519cascaded_link_calc_jacobian_from_link_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1521:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[207], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1522;
	local[1] = NIL;
KEY1522:
	if (n & (1<<1)) goto KEY1523;
	local[2] = local[1];
KEY1523:
	if (n & (1<<2)) goto KEY1524;
	w = local[1];
	if (!!iscons(w)) goto CON1526;
	local[16]= NIL;
	goto CON1525;
CON1526:
	local[16]= local[1];
	ctx->vsp=local+17;
	w=(pointer)LENGTH(ctx,1,local+16); /*length*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(*ftab[31])(ctx,1,local+16,&ftab[31],fqv[208]); /*make-list*/
	local[16]= w;
	goto CON1525;
CON1527:
	local[16]= NIL;
CON1525:
	local[3] = local[16];
KEY1524:
	if (n & (1<<3)) goto KEY1528;
	w = local[1];
	if (!!iscons(w)) goto CON1530;
	local[16]= T;
	goto CON1529;
CON1530:
	local[16]= local[1];
	ctx->vsp=local+17;
	w=(pointer)LENGTH(ctx,1,local+16); /*length*/
	local[16]= w;
	local[17]= fqv[209];
	local[18]= T;
	ctx->vsp=local+19;
	w=(*ftab[31])(ctx,3,local+16,&ftab[31],fqv[208]); /*make-list*/
	local[16]= w;
	goto CON1529;
CON1531:
	local[16]= NIL;
CON1529:
	local[4] = local[16];
KEY1528:
	if (n & (1<<4)) goto KEY1532;
	local[5] = makeint((eusinteger_t)0L);
KEY1532:
	if (n & (1<<5)) goto KEY1533;
	local[16]= argv[0];
	local[17]= fqv[210];
	local[18]= local[3];
	local[19]= local[4];
	ctx->vsp=local+20;
	w=(pointer)SEND(ctx,4,local+16); /*send*/
	local[6] = w;
KEY1533:
	if (n & (1<<6)) goto KEY1534;
	local[16]= argv[0];
	local[17]= fqv[211];
	local[18]= argv[2];
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,3,local+16); /*send*/
	local[7] = w;
KEY1534:
	if (n & (1<<7)) goto KEY1535;
	local[8] = NIL;
KEY1535:
	if (n & (1<<8)) goto KEY1536;
	local[16]= loadglobal(fqv[5]);
	local[17]= makeint((eusinteger_t)0L);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,2,local+16); /*instantiate*/
	local[9] = w;
KEY1536:
	if (n & (1<<9)) goto KEY1537;
	local[16]= loadglobal(fqv[5]);
	local[17]= makeint((eusinteger_t)1L);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,2,local+16); /*instantiate*/
	local[10] = w;
KEY1537:
	if (n & (1<<10)) goto KEY1538;
	local[16]= loadglobal(fqv[5]);
	local[17]= makeint((eusinteger_t)2L);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,2,local+16); /*instantiate*/
	local[11] = w;
KEY1538:
	if (n & (1<<11)) goto KEY1539;
	local[16]= loadglobal(fqv[5]);
	local[17]= makeint((eusinteger_t)3L);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,2,local+16); /*instantiate*/
	local[12] = w;
KEY1539:
	if (n & (1<<12)) goto KEY1540;
	local[16]= loadglobal(fqv[5]);
	local[17]= makeint((eusinteger_t)3L);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,2,local+16); /*instantiate*/
	local[13] = w;
KEY1540:
	if (n & (1<<13)) goto KEY1541;
	local[16]= loadglobal(fqv[5]);
	local[17]= makeint((eusinteger_t)3L);
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,2,local+16); /*instantiate*/
	local[14] = w;
KEY1541:
	if (n & (1<<14)) goto KEY1542;
	local[16]= makeint((eusinteger_t)3L);
	local[17]= makeint((eusinteger_t)3L);
	ctx->vsp=local+18;
	w=(*ftab[23])(ctx,2,local+16,&ftab[23],fqv[166]); /*make-matrix*/
	local[15] = w;
KEY1542:
	local[16]= NIL;
	local[17]= NIL;
	local[18]= NIL;
	local[19]= NIL;
	local[20]= NIL;
	local[21]= NIL;
	local[22]= NIL;
	if (local[8]!=NIL) goto IF1543;
	local[23]= local[6];
	local[24]= local[7];
	ctx->vsp=local+25;
	w=(*ftab[23])(ctx,2,local+23,&ftab[23],fqv[166]); /*make-matrix*/
	local[8] = w;
	local[23]= local[8];
	goto IF1544;
IF1543:
	local[23]= NIL;
IF1544:
	local[23]= argv[0];
	local[24]= fqv[197];
	local[25]= argv[2];
	ctx->vsp=local+26;
	w=(pointer)SEND(ctx,3,local+23); /*send*/
	local[20] = w;
	local[23]= argv[0];
	local[24]= fqv[211];
	local[25]= local[20];
	ctx->vsp=local+26;
	w=(pointer)SEND(ctx,3,local+23); /*send*/
	local[22] = w;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!!iscons(w)) goto IF1545;
	local[23]= argv[2];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	argv[2] = w;
	local[23]= argv[2];
	goto IF1546;
IF1545:
	local[23]= NIL;
IF1546:
	w = local[1];
	if (!!iscons(w)) goto IF1547;
	local[23]= local[1];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	local[1] = w;
	local[23]= local[1];
	goto IF1548;
IF1547:
	local[23]= NIL;
IF1548:
	w = local[2];
	if (!!iscons(w)) goto IF1549;
	local[23]= local[2];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	local[2] = w;
	local[23]= local[2];
	goto IF1550;
IF1549:
	local[23]= NIL;
IF1550:
	w = local[3];
	if (!!iscons(w)) goto IF1551;
	local[23]= local[3];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	local[3] = w;
	local[23]= local[3];
	goto IF1552;
IF1551:
	local[23]= NIL;
IF1552:
	w = local[4];
	if (!!iscons(w)) goto IF1553;
	local[23]= local[4];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	local[4] = w;
	local[23]= local[4];
	goto IF1554;
IF1553:
	local[23]= NIL;
IF1554:
	local[23]= local[5];
	local[24]= makeint((eusinteger_t)0L);
TAG1557:
	local[25]= local[23];
	local[26]= local[5];
	local[27]= local[22];
	ctx->vsp=local+28;
	w=(pointer)PLUS(ctx,2,local+26); /*+*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)GREQP(ctx,2,local+25); /*>=*/
	if (w==NIL) goto IF1558;
	w = NIL;
	ctx->vsp=local+25;
	local[23]=w;
	goto BLK1556;
	goto IF1559;
IF1558:
	local[25]= NIL;
IF1559:
	local[25]= local[20];
	local[26]= local[24];
	ctx->vsp=local+27;
	w=(pointer)ELT(ctx,2,local+25); /*elt*/
	local[17] = w;
	local[18] = makeint((eusinteger_t)0L);
	local[25]= makeint((eusinteger_t)0L);
	local[26]= argv[2];
	ctx->vsp=local+27;
	w=(pointer)LENGTH(ctx,1,local+26); /*length*/
	local[26]= w;
WHL1561:
	local[27]= local[25];
	w = local[26];
	if ((eusinteger_t)local[27] >= (eusinteger_t)w) goto WHX1562;
	local[27]= argv[2];
	local[28]= local[25];
	ctx->vsp=local+29;
	w=(pointer)ELT(ctx,2,local+27); /*elt*/
	local[27]= w;
	local[28]= local[1];
	local[29]= local[25];
	ctx->vsp=local+30;
	w=(pointer)ELT(ctx,2,local+28); /*elt*/
	local[28]= w;
	local[29]= local[2];
	local[30]= local[25];
	ctx->vsp=local+31;
	w=(pointer)ELT(ctx,2,local+29); /*elt*/
	local[29]= w;
	local[30]= local[3];
	local[31]= local[25];
	ctx->vsp=local+32;
	w=(pointer)ELT(ctx,2,local+30); /*elt*/
	local[30]= w;
	local[31]= local[4];
	local[32]= local[25];
	ctx->vsp=local+33;
	w=(pointer)ELT(ctx,2,local+31); /*elt*/
	local[31]= w;
	local[32]= NIL;
	local[33]= local[17];
	local[34]= local[27];
	local[35]= fqv[139];
	local[36]= (pointer)get_sym_func(fqv[140]);
	ctx->vsp=local+37;
	w=(*ftab[16])(ctx,4,local+33,&ftab[16],fqv[124]); /*member*/
	if (w==NIL) goto IF1564;
	local[33]= local[27];
	ctx->vsp=local+34;
	w=(pointer)LENGTH(ctx,1,local+33); /*length*/
	local[16] = w;
	local[33]= local[17];
	local[34]= local[27];
	local[35]= fqv[139];
	local[36]= (pointer)get_sym_func(fqv[140]);
	ctx->vsp=local+37;
	w=(*ftab[32])(ctx,4,local+33,&ftab[32],fqv[213]); /*position*/
	local[32] = w;
	local[33]= local[17];
	local[34]= fqv[198];
	ctx->vsp=local+35;
	w=(pointer)SEND(ctx,2,local+33); /*send*/
	local[21] = w;
	ctx->vsp=local+33;
	local[33]= makeclosure(codevec,quotevec,FLET1566,env,argv,local);
	local[34]= local[21];
	local[35]= fqv[130];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,2,local+34); /*send*/
	local[34]= w;
	local[35]= loadglobal(fqv[214]);
	ctx->vsp=local+36;
	w=(pointer)DERIVEDP(ctx,2,local+34); /*derivedp*/
	if (w!=NIL) goto CON1568;
	local[19] = NIL;
	local[34]= local[19];
	goto CON1567;
CON1568:
	local[34]= local[32];
	local[35]= makeint((eusinteger_t)1L);
	ctx->vsp=local+36;
	w=(pointer)PLUS(ctx,2,local+34); /*+*/
	local[34]= w;
	local[35]= local[16];
	ctx->vsp=local+36;
	w=(pointer)LESSP(ctx,2,local+34); /*<*/
	if (w==NIL) goto AND1571;
	local[34]= local[21];
	local[35]= fqv[130];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,2,local+34); /*send*/
	local[34]= w;
	local[35]= local[27];
	local[36]= local[32];
	local[37]= makeint((eusinteger_t)1L);
	ctx->vsp=local+38;
	w=(pointer)PLUS(ctx,2,local+36); /*+*/
	local[36]= w;
	ctx->vsp=local+37;
	w=(pointer)ELT(ctx,2,local+35); /*elt*/
	local[35]= w;
	local[36]= fqv[133];
	ctx->vsp=local+37;
	w=(pointer)SEND(ctx,2,local+35); /*send*/
	local[35]= w;
	local[36]= local[27];
	w = local[33];
	ctx->vsp=local+37;
	w=FLET1566(ctx,2,local+35,w);
	if (w==local[34]) goto AND1571;
	goto OR1570;
AND1571:
	local[34]= local[16];
	local[35]= local[32];
	local[36]= makeint((eusinteger_t)1L);
	ctx->vsp=local+37;
	w=(pointer)PLUS(ctx,2,local+35); /*+*/
	local[35]= w;
	ctx->vsp=local+36;
	w=(pointer)NUMEQUAL(ctx,2,local+34); /*=*/
	if (w==NIL) goto AND1572;
	local[34]= local[21];
	local[35]= fqv[130];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,2,local+34); /*send*/
	local[34]= w;
	local[35]= local[28];
	local[36]= fqv[215];
	ctx->vsp=local+37;
	w=(pointer)SEND(ctx,2,local+35); /*send*/
	local[35]= w;
	local[36]= local[27];
	w = local[33];
	ctx->vsp=local+37;
	w=FLET1566(ctx,2,local+35,w);
	if (w==local[34]) goto AND1572;
	goto OR1570;
AND1572:
	goto CON1569;
OR1570:
	local[19] = T;
	local[34]= local[19];
	goto CON1567;
CON1569:
	local[19] = NIL;
	local[34]= local[19];
	goto CON1567;
CON1573:
	local[34]= NIL;
CON1567:
	w = local[34];
	local[33]= *(ovafptr(local[21],fqv[216]));
	local[34]= local[33];
	if (fqv[52]!=local[34]) goto IF1575;
	local[34]= fqv[217];
	goto IF1576;
IF1575:
	local[34]= local[33];
	if (fqv[54]!=local[34]) goto IF1577;
	local[34]= fqv[218];
	goto IF1578;
IF1577:
	local[34]= local[33];
	if (fqv[33]!=local[34]) goto IF1579;
	local[34]= fqv[219];
	goto IF1580;
IF1579:
	local[34]= local[33];
	if (fqv[220]!=local[34]) goto IF1581;
	local[34]= fqv[221];
	goto IF1582;
IF1581:
	local[34]= local[33];
	if (fqv[222]!=local[34]) goto IF1583;
	local[34]= fqv[223];
	goto IF1584;
IF1583:
	local[34]= local[33];
	if (fqv[224]!=local[34]) goto IF1585;
	local[34]= fqv[225];
	goto IF1586;
IF1585:
	local[34]= local[33];
	if (fqv[53]!=local[34]) goto IF1587;
	local[34]= fqv[226];
	goto IF1588;
IF1587:
	local[34]= local[33];
	if (fqv[55]!=local[34]) goto IF1589;
	local[34]= fqv[227];
	goto IF1590;
IF1589:
	local[34]= local[33];
	if (fqv[56]!=local[34]) goto IF1591;
	local[34]= fqv[228];
	goto IF1592;
IF1591:
	if (T==NIL) goto IF1593;
	local[34]= *(ovafptr(local[21],fqv[216]));
	goto IF1594;
IF1593:
	local[34]= NIL;
IF1594:
IF1592:
IF1590:
IF1588:
IF1586:
IF1584:
IF1582:
IF1580:
IF1578:
IF1576:
	w = local[34];
	local[33]= w;
	local[34]= local[21];
	local[35]= fqv[130];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,2,local+34); /*send*/
	local[34]= w;
	local[35]= local[21];
	local[36]= fqv[133];
	ctx->vsp=local+37;
	w=(pointer)SEND(ctx,2,local+35); /*send*/
	local[35]= w;
	local[36]= *(ovafptr(local[21],fqv[229]));
	local[37]= local[35];
	local[38]= fqv[153];
	ctx->vsp=local+39;
	w=(pointer)SEND(ctx,2,local+37); /*send*/
	local[37]= w;
	local[38]= fqv[84];
	local[39]= local[36];
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,3,local+37); /*send*/
	local[37]= w;
	local[38]= local[21];
	local[39]= fqv[230];
	local[40]= local[8];
	local[41]= local[18];
	local[42]= local[23];
	local[43]= local[21];
	local[44]= local[33];
	local[45]= local[34];
	local[46]= local[37];
	local[47]= local[19];
	local[48]= local[28];
	local[49]= local[29];
	local[50]= local[30];
	local[51]= local[31];
	local[52]= local[9];
	local[53]= local[10];
	local[54]= local[11];
	local[55]= local[12];
	local[56]= local[13];
	local[57]= local[14];
	local[58]= local[15];
	ctx->vsp=local+59;
	w=(pointer)SEND(ctx,21,local+38); /*send*/
	local[33]= w;
	goto IF1565;
IF1564:
	local[33]= NIL;
IF1565:
	local[33]= local[18];
	local[34]= argv[0];
	local[35]= fqv[210];
	local[36]= local[30];
	local[37]= local[31];
	ctx->vsp=local+38;
	w=(pointer)SEND(ctx,4,local+34); /*send*/
	local[34]= w;
	ctx->vsp=local+35;
	w=(pointer)PLUS(ctx,2,local+33); /*+*/
	local[18] = w;
	w = local[18];
	local[27]= local[25];
	ctx->vsp=local+28;
	w=(pointer)ADD1(ctx,1,local+27); /*1+*/
	local[25] = w;
	goto WHL1561;
WHX1562:
	local[27]= NIL;
BLK1563:
	w = NIL;
	local[25]= local[23];
	local[26]= local[21];
	local[27]= fqv[31];
	ctx->vsp=local+28;
	w=(pointer)SEND(ctx,2,local+26); /*send*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)PLUS(ctx,2,local+25); /*+*/
	local[25]= w;
	local[26]= local[24];
	ctx->vsp=local+27;
	w=(pointer)ADD1(ctx,1,local+26); /*1+*/
	local[26]= w;
	local[23] = local[25];
	local[24] = local[26];
	w = NIL;
	ctx->vsp=local+25;
	goto TAG1557;
	w = NIL;
	local[23]= w;
BLK1556:
	w = local[8];
	local[0]= w;
BLK1520:
	ctx->vsp=local; return(local[0]);}

/*:calc-joint-angle-speed*/
static pointer M1597cascaded_link_calc_joint_angle_speed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1599:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[231], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1600;
	local[1] = NIL;
KEY1600:
	if (n & (1<<1)) goto KEY1601;
	local[2] = makeflt(5.0000000000000000000000e-01);
KEY1601:
	if (n & (1<<2)) goto KEY1602;
	local[3] = NIL;
KEY1602:
	if (n & (1<<3)) goto KEY1603;
	local[4] = NIL;
KEY1603:
	if (n & (1<<4)) goto KEY1604;
	local[5] = NIL;
KEY1604:
	if (n & (1<<5)) goto KEY1605;
	local[6] = NIL;
KEY1605:
	if (n & (1<<6)) goto KEY1606;
	local[7] = NIL;
KEY1606:
	if (n & (1<<7)) goto KEY1607;
	local[8] = NIL;
KEY1607:
	if (n & (1<<8)) goto KEY1608;
	local[9] = NIL;
KEY1608:
	if (n & (1<<9)) goto KEY1609;
	local[10] = NIL;
KEY1609:
	if (n & (1<<10)) goto KEY1610;
	local[11] = NIL;
KEY1610:
	if (n & (1<<11)) goto KEY1611;
	local[12] = NIL;
KEY1611:
	if (local[3]==NIL) goto OR1614;
	if (local[4]==NIL) goto OR1614;
	goto IF1612;
OR1614:
	local[13]= fqv[232];
	ctx->vsp=local+14;
	w=(*ftab[2])(ctx,1,local+13,&ftab[2],fqv[15]); /*warn*/
	w = local[5];
	ctx->vsp=local+13;
	local[0]=w;
	goto BLK1598;
	goto IF1613;
IF1612:
	local[13]= NIL;
IF1613:
	if (local[12]!=NIL) goto IF1615;
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(*ftab[29])(ctx,1,local+13,&ftab[29],fqv[204]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12] = (w)->c.cons.car;
	local[13]= local[12];
	goto IF1616;
IF1615:
	local[13]= NIL;
IF1616:
	if (local[10]!=NIL) goto IF1617;
	local[13]= loadglobal(fqv[5]);
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(pointer)INSTANTIATE(ctx,2,local+13); /*instantiate*/
	local[10] = w;
	local[13]= local[10];
	goto IF1618;
IF1617:
	local[13]= NIL;
IF1618:
	if (local[11]!=NIL) goto IF1619;
	local[13]= loadglobal(fqv[5]);
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(pointer)INSTANTIATE(ctx,2,local+13); /*instantiate*/
	local[11] = w;
	local[13]= local[11];
	goto IF1620;
IF1619:
	local[13]= NIL;
IF1620:
	local[13]= local[4];
	local[14]= argv[2];
	local[15]= local[10];
	ctx->vsp=local+16;
	w=(pointer)TRANSFORM(ctx,3,local+13); /*transform*/
	local[13]= w;
	if (local[7]==NIL) goto IF1621;
	local[14]= fqv[202];
	w = local[7];
	if (memq(local[14],w)!=NIL) goto IF1621;
	local[14]= local[3];
	local[15]= fqv[233];
	ctx->vsp=local+16;
	w=(*ftab[33])(ctx,2,local+14,&ftab[33],fqv[234]); /*format-array*/
	local[14]= fqv[235];
	local[15]= local[3];
	local[16]= local[3];
	ctx->vsp=local+17;
	w=(pointer)TRANSPOSE(ctx,1,local+16); /*transpose*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)MATTIMES(ctx,2,local+15); /*m**/
	local[15]= w;
	ctx->vsp=local+16;
	w=(*ftab[34])(ctx,1,local+15,&ftab[34],fqv[236]); /*matrix-determinant*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(*ftab[2])(ctx,2,local+14,&ftab[2],fqv[15]); /*warn*/
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)TRANSPOSE(ctx,1,local+14); /*transpose*/
	local[14]= w;
	local[15]= fqv[237];
	ctx->vsp=local+16;
	w=(*ftab[33])(ctx,2,local+14,&ftab[33],fqv[234]); /*format-array*/
	local[14]= argv[2];
	local[15]= fqv[238];
	ctx->vsp=local+16;
	w=(*ftab[33])(ctx,2,local+14,&ftab[33],fqv[234]); /*format-array*/
	local[14]= loadglobal(fqv[5]);
	local[15]= (pointer)get_sym_func(fqv[49]);
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)MAP(ctx,3,local+14); /*map*/
	local[14]= w;
	local[15]= fqv[239];
	ctx->vsp=local+16;
	w=(*ftab[33])(ctx,2,local+14,&ftab[33],fqv[234]); /*format-array*/
	local[14]= w;
	goto IF1622;
IF1621:
	local[14]= NIL;
IF1622:
	if (local[1]==NIL) goto IF1623;
	local[14]= local[2];
	local[15]= local[13];
	local[16]= local[1];
	local[17]= local[13];
	ctx->vsp=local+18;
	w=(*ftab[35])(ctx,4,local+14,&ftab[35],fqv[240]); /*midpoint*/
	local[13] = w;
	if (local[7]==NIL) goto IF1625;
	local[14]= fqv[202];
	w = local[7];
	if (memq(local[14],w)!=NIL) goto IF1625;
	local[14]= loadglobal(fqv[5]);
	local[15]= (pointer)get_sym_func(fqv[49]);
	local[16]= local[1];
	ctx->vsp=local+17;
	w=(pointer)MAP(ctx,3,local+14); /*map*/
	local[14]= w;
	local[15]= fqv[241];
	ctx->vsp=local+16;
	w=(*ftab[33])(ctx,2,local+14,&ftab[33],fqv[234]); /*format-array*/
	local[14]= loadglobal(fqv[5]);
	local[15]= (pointer)get_sym_func(fqv[49]);
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)MAP(ctx,3,local+14); /*map*/
	local[14]= w;
	local[15]= fqv[242];
	ctx->vsp=local+16;
	w=(*ftab[33])(ctx,2,local+14,&ftab[33],fqv[234]); /*format-array*/
	local[14]= w;
	goto IF1626;
IF1625:
	local[14]= NIL;
IF1626:
	goto IF1624;
IF1623:
	local[14]= NIL;
IF1624:
	local[14]= local[5];
	ctx->vsp=local+15;
	w=(pointer)VECTORP(ctx,1,local+14); /*vectorp*/
	if (w==NIL) goto IF1627;
	local[14]= local[12];
	local[15]= local[5];
	ctx->vsp=local+16;
	w=(pointer)LENGTH(ctx,1,local+15); /*length*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)NUMEQUAL(ctx,2,local+14); /*=*/
	if (w==NIL) goto IF1627;
	if (local[6]==NIL) goto IF1627;
	if (local[8]!=NIL) goto IF1629;
	local[14]= loadglobal(fqv[5]);
	local[15]= local[12];
	ctx->vsp=local+16;
	w=(pointer)INSTANTIATE(ctx,2,local+14); /*instantiate*/
	local[14]= w;
	local[15]= makeint((eusinteger_t)1L);
	ctx->vsp=local+16;
	w=(*ftab[36])(ctx,2,local+14,&ftab[36],fqv[243]); /*fill*/
	local[8] = w;
	local[14]= local[8];
	goto IF1630;
IF1629:
	local[14]= NIL;
IF1630:
	if (local[9]!=NIL) goto IF1631;
	local[14]= local[12];
	local[15]= local[12];
	ctx->vsp=local+16;
	w=(*ftab[23])(ctx,2,local+14,&ftab[23],fqv[166]); /*make-matrix*/
	local[9] = w;
	local[14]= local[9];
	goto IF1632;
IF1631:
	local[14]= NIL;
IF1632:
	local[14]= makeint((eusinteger_t)0L);
	local[15]= local[12];
WHL1634:
	local[16]= local[14];
	w = local[15];
	if ((eusinteger_t)local[16] >= (eusinteger_t)w) goto WHX1635;
	local[16]= local[9];
	local[17]= local[14];
	local[18]= local[14];
	local[19]= local[8];
	local[20]= local[14];
	ctx->vsp=local+21;
	w=(pointer)AREF(ctx,2,local+19); /*aref*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)ASET(ctx,4,local+16); /*aset*/
	local[16]= local[14];
	ctx->vsp=local+17;
	w=(pointer)ADD1(ctx,1,local+16); /*1+*/
	local[14] = w;
	goto WHL1634;
WHX1635:
	local[16]= NIL;
BLK1636:
	w = NIL;
	local[14]= local[13];
	local[15]= local[6];
	local[16]= local[5];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)TRANSFORM(ctx,3,local+15); /*transform*/
	local[15]= w;
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)VPLUS(ctx,3,local+14); /*v+*/
	if (local[7]==NIL) goto IF1637;
	local[14]= fqv[202];
	w = local[7];
	if (memq(local[14],w)!=NIL) goto IF1637;
	local[14]= loadglobal(fqv[5]);
	local[15]= (pointer)get_sym_func(fqv[49]);
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(pointer)MAP(ctx,3,local+14); /*map*/
	local[14]= w;
	local[15]= fqv[244];
	ctx->vsp=local+16;
	w=(*ftab[33])(ctx,2,local+14,&ftab[33],fqv[234]); /*format-array*/
	local[14]= loadglobal(fqv[5]);
	local[15]= (pointer)get_sym_func(fqv[49]);
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)MAP(ctx,3,local+14); /*map*/
	local[14]= w;
	local[15]= fqv[245];
	ctx->vsp=local+16;
	w=(*ftab[33])(ctx,2,local+14,&ftab[33],fqv[234]); /*format-array*/
	local[14]= w;
	goto IF1638;
IF1637:
	local[14]= NIL;
IF1638:
	goto IF1628;
IF1627:
	local[14]= NIL;
IF1628:
	w = local[13];
	local[0]= w;
BLK1598:
	ctx->vsp=local; return(local[0]);}

/*:calc-joint-angle-speed-gain*/
static pointer M1639cascaded_link_calc_joint_angle_speed_gain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	local[0]= argv[0];
	local[1]= fqv[211];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= loadglobal(fqv[5]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,2,local+1); /*instantiate*/
	local[1]= w;
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
TAG1643:
	local[5]= local[4];
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)GREQP(ctx,2,local+5); /*>=*/
	if (w==NIL) goto IF1644;
	w = NIL;
	ctx->vsp=local+5;
	local[3]=w;
	goto BLK1642;
	goto IF1645;
IF1644:
	local[5]= NIL;
IF1645:
	local[5]= argv[2];
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= fqv[198];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[2] = w;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[2];
	local[7]= fqv[31];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
WHL1647:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX1648;
	local[7]= local[1];
	local[8]= local[3];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[8]= w;
	local[9]= local[2];
	local[10]= fqv[246];
	local[11]= argv[3];
	local[12]= local[3];
	local[13]= argv[4];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,5,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SETELT(ctx,3,local+7); /*setelt*/
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL1647;
WHX1648:
	local[7]= NIL;
BLK1649:
	w = NIL;
	local[5]= local[3];
	local[6]= local[2];
	local[7]= fqv[31];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[3] = w;
	local[5]= local[4];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[4] = w;
	ctx->vsp=local+5;
	goto TAG1643;
	w = NIL;
	local[3]= w;
BLK1642:
	w = local[1];
	local[0]= w;
BLK1640:
	ctx->vsp=local; return(local[0]);}

/*:collision-avoidance-links*/
static pointer M1650cascaded_link_collision_avoidance_links(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1653;}
	local[0]= NIL;
ENT1653:
ENT1652:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1654;
	argv[0]->c.obj.iv[11] = local[0];
	local[1]= argv[0]->c.obj.iv[11];
	goto IF1655;
IF1654:
	local[1]= NIL;
IF1655:
	w = argv[0]->c.obj.iv[11];
	local[0]= w;
BLK1651:
	ctx->vsp=local; return(local[0]);}

/*:collision-avoidance-link-pair-from-link-list*/
static pointer M1656cascaded_link_collision_avoidance_link_pair_from_link_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[247], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1658;
	local[0] = NIL;
KEY1658:
	if (n & (1<<1)) goto KEY1659;
	local[1] = argv[0]->c.obj.iv[11];
KEY1659:
	if (n & (1<<2)) goto KEY1660;
	local[2] = NIL;
KEY1660:
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO1661,env,argv,local);
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,2,local+3); /*mapcar*/
	local[3]= w;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	local[8]= NIL;
	local[9]= NIL;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!!iscons(w)) goto IF1662;
	local[10]= argv[2];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	argv[2] = w;
	local[10]= argv[2];
	goto IF1663;
IF1662:
	local[10]= NIL;
IF1663:
	if (local[2]==NIL) goto IF1664;
	local[10]= fqv[202];
	w = local[2];
	if (memq(local[10],w)!=NIL) goto IF1664;
	local[10]= fqv[248];
	local[11]= local[1];
	local[12]= fqv[3];
	ctx->vsp=local+13;
	w=(*ftab[18])(ctx,2,local+11,&ftab[18],fqv[128]); /*send-all*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[2])(ctx,2,local+10,&ftab[2],fqv[15]); /*warn*/
	local[10]= fqv[249];
	local[11]= local[3];
	local[12]= fqv[3];
	ctx->vsp=local+13;
	w=(*ftab[18])(ctx,2,local+11,&ftab[18],fqv[128]); /*send-all*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[2])(ctx,2,local+10,&ftab[2],fqv[15]); /*warn*/
	local[10]= w;
	goto IF1665;
IF1664:
	local[10]= NIL;
IF1665:
	local[10]= NIL;
	local[11]= argv[2];
WHL1667:
	if (local[11]==NIL) goto WHX1668;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11] = (w)->c.cons.cdr;
	w = local[12];
	local[10] = w;
	local[12]= local[10];
	local[13]= makeint((eusinteger_t)1L);
TAG1673:
	local[14]= local[13];
	local[15]= local[10];
	ctx->vsp=local+16;
	w=(pointer)LENGTH(ctx,1,local+15); /*length*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)SUB1(ctx,1,local+15); /*1-*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)LESSP(ctx,2,local+14); /*<*/
	if (w==NIL) goto AND1676;
	local[14]= local[10];
	local[15]= makeint((eusinteger_t)0L);
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[14]= w;
	local[15]= fqv[29];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
	local[15]= local[10];
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= fqv[29];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,2,local+15); /*send*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)VDISTANCE(ctx,2,local+14); /*distance*/
	local[14]= w;
	local[15]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+16;
	w=(*ftab[8])(ctx,2,local+14,&ftab[8],fqv[81]); /*eps=*/
	if (w==NIL) goto AND1676;
	goto IF1674;
AND1676:
	local[14]= local[13];
	ctx->vsp=local+15;
	w=(pointer)SUB1(ctx,1,local+14); /*1-*/
	ctx->vsp=local+14;
	local[13]=w;
	goto BLK1672;
	goto IF1675;
IF1674:
	local[14]= NIL;
IF1675:
	local[14]= local[13];
	ctx->vsp=local+15;
	w=(pointer)ADD1(ctx,1,local+14); /*1+*/
	local[14]= w;
	local[13] = local[14];
	w = NIL;
	ctx->vsp=local+14;
	goto TAG1673;
	w = NIL;
	local[13]= w;
BLK1672:
	ctx->vsp=local+14;
	w=(pointer)SUBSEQ(ctx,2,local+12); /*subseq*/
	local[5] = w;
	ctx->vsp=local+12;
	local[12]= makeclosure(codevec,quotevec,CLO1678,env,argv,local);
	local[13]= local[1];
	ctx->vsp=local+14;
	w=(pointer)MAPCAR(ctx,2,local+12); /*mapcar*/
	local[6] = w;
	if (local[2]==NIL) goto IF1679;
	local[12]= fqv[202];
	w = local[2];
	if (memq(local[12],w)!=NIL) goto IF1679;
	local[12]= fqv[250];
	local[13]= local[5];
	local[14]= fqv[3];
	ctx->vsp=local+15;
	w=(*ftab[18])(ctx,2,local+13,&ftab[18],fqv[128]); /*send-all*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(*ftab[2])(ctx,2,local+12,&ftab[2],fqv[15]); /*warn*/
	local[12]= fqv[251];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(*ftab[2])(ctx,2,local+12,&ftab[2],fqv[15]); /*warn*/
	local[12]= w;
	goto IF1680;
IF1679:
	local[12]= NIL;
IF1680:
	local[12]= makeint((eusinteger_t)0L);
	local[13]= local[7];
WHL1682:
	local[14]= local[12];
	w = local[13];
	if ((eusinteger_t)local[14] >= (eusinteger_t)w) goto WHX1683;
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(pointer)ADD1(ctx,1,local+14); /*1+*/
	local[14]= w;
TAG1687:
	local[15]= local[14];
	local[16]= local[7];
	ctx->vsp=local+17;
	w=(pointer)GREQP(ctx,2,local+15); /*>=*/
	if (w==NIL) goto IF1688;
	w = NIL;
	ctx->vsp=local+15;
	local[14]=w;
	goto BLK1686;
	goto IF1689;
IF1688:
	local[15]= NIL;
IF1689:
	local[15]= local[6];
	local[16]= local[12];
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[8] = w;
	if (local[8]!=NIL) goto OR1692;
	local[15]= local[6];
	local[16]= local[14];
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	if (w!=NIL) goto OR1692;
	goto IF1690;
OR1692:
	local[15]= local[3];
	local[16]= local[12];
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[1];
	local[17]= local[14];
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	if (w==local[15]) goto IF1690;
	local[15]= local[3];
	local[16]= local[14];
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[1];
	local[17]= local[12];
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	if (w==local[15]) goto IF1690;
	local[15]= local[3];
	local[16]= local[14];
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[3];
	local[17]= local[12];
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	if (w==local[15]) goto IF1690;
	local[15]= local[1];
	if (local[8]==NIL) goto IF1693;
	local[16]= local[12];
	goto IF1694;
IF1693:
	local[16]= local[14];
IF1694:
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[1];
	if (local[8]==NIL) goto IF1695;
	local[17]= local[14];
	goto IF1696;
IF1695:
	local[17]= local[12];
IF1696:
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,2,local+15); /*list*/
	local[15]= w;
	w = local[9];
	ctx->vsp=local+16;
	local[9] = cons(ctx,local[15],w);
	local[15]= local[9];
	goto IF1691;
IF1690:
	local[15]= NIL;
IF1691:
	local[15]= local[14];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[15]= w;
	local[14] = local[15];
	w = NIL;
	ctx->vsp=local+15;
	goto TAG1687;
	w = NIL;
	local[14]= w;
BLK1686:
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(pointer)ADD1(ctx,1,local+14); /*1+*/
	local[12] = w;
	goto WHL1682;
WHX1683:
	local[14]= NIL;
BLK1684:
	w = NIL;
	if (local[0]==NIL) goto IF1698;
	w = local[0];
	if (!!iscons(w)) goto IF1700;
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	local[0] = w;
	local[12]= local[0];
	goto IF1701;
IF1700:
	local[12]= NIL;
IF1701:
	local[12]= makeint((eusinteger_t)0L);
	local[13]= local[7];
WHL1703:
	local[14]= local[12];
	w = local[13];
	if ((eusinteger_t)local[14] >= (eusinteger_t)w) goto WHX1704;
	local[14]= local[6];
	local[15]= local[12];
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	if (w==NIL) goto IF1706;
	local[14]= NIL;
	local[15]= local[0];
WHL1709:
	if (local[15]==NIL) goto WHX1710;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15] = (w)->c.cons.cdr;
	w = local[16];
	local[14] = w;
	local[16]= local[1];
	local[17]= local[12];
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[16]= w;
	local[17]= local[14];
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,2,local+16); /*list*/
	local[16]= w;
	w = local[9];
	ctx->vsp=local+17;
	local[9] = cons(ctx,local[16],w);
	goto WHL1709;
WHX1710:
	local[16]= NIL;
BLK1711:
	w = NIL;
	local[14]= w;
	goto IF1707;
IF1706:
	local[14]= NIL;
IF1707:
	local[14]= local[12];
	ctx->vsp=local+15;
	w=(pointer)ADD1(ctx,1,local+14); /*1+*/
	local[12] = w;
	goto WHL1703;
WHX1704:
	local[14]= NIL;
BLK1705:
	w = NIL;
	local[12]= w;
	goto IF1699;
IF1698:
	local[12]= NIL;
IF1699:
	goto WHL1667;
WHX1668:
	local[12]= NIL;
BLK1669:
	w = NIL;
	w = local[9];
	local[0]= w;
BLK1657:
	ctx->vsp=local; return(local[0]);}

/*:collision-avoidance-calc-distance*/
static pointer M1713cascaded_link_collision_avoidance_calc_distance(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1715:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[252], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY1716;
	local[1] = NIL;
KEY1716:
	if (n & (1<<1)) goto KEY1717;
	local[2] = T;
KEY1717:
	if (n & (1<<2)) goto KEY1718;
	local[3] = NIL;
KEY1718:
	if (n & (1<<3)) goto KEY1719;
	local[4] = makeint((eusinteger_t)10L);
KEY1719:
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[184];
	local[8]= fqv[253];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= w;
	local[7]= NIL;
	local[8]= NIL;
	if (local[1]==NIL) goto OR1722;
	local[9]= local[5];
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)NUMEQUAL(ctx,2,local+9); /*=*/
	if (w!=NIL) goto OR1722;
	goto IF1720;
OR1722:
	w = NIL;
	ctx->vsp=local+9;
	local[0]=w;
	goto BLK1714;
	goto IF1721;
IF1720:
	local[9]= NIL;
IF1721:
	if (local[6]==NIL) goto OR1725;
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)LENGTH(ctx,1,local+9); /*length*/
	local[9]= w;
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[24])(ctx,2,local+9,&ftab[24],fqv[171]); /*/=*/
	if (w!=NIL) goto OR1725;
	goto IF1723;
OR1725:
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[31])(ctx,1,local+9,&ftab[31],fqv[208]); /*make-list*/
	local[6] = w;
	local[9]= local[6];
	goto IF1724;
IF1723:
	local[9]= NIL;
IF1724:
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[5];
WHL1727:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX1728;
	local[11]= local[3];
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[8] = w;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w = local[1];
	if (memq(local[11],w)!=NIL) goto IF1730;
	local[11]= fqv[254];
	local[12]= local[8];
	local[13]= fqv[3];
	ctx->vsp=local+14;
	w=(*ftab[18])(ctx,2,local+12,&ftab[18],fqv[128]); /*send-all*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(*ftab[2])(ctx,2,local+11,&ftab[2],fqv[15]); /*warn*/
	local[11]= local[6];
	local[12]= local[9];
	local[13]= NIL;
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= w;
	goto IF1731;
IF1730:
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= fqv[255];
	local[14]= makeint((eusinteger_t)2L);
	ctx->vsp=local+15;
	w=(*ftab[37])(ctx,4,local+11,&ftab[37],fqv[256]); /*pqp-collision-distance*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)0L);
	local[13]= makeint((eusinteger_t)0L);
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(pointer)MKFLTVEC(ctx,3,local+12); /*float-vector*/
	local[12]= w;
	local[13]= local[9];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,2,local+12); /*list*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)NCONC(ctx,2,local+11); /*nconc*/
	local[7] = w;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)LSEQP(ctx,2,local+11); /*<=*/
	if (w==NIL) goto IF1732;
	if (local[2]==NIL) goto IF1734;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+13;
	w=(pointer)LESSP(ctx,2,local+11); /*<*/
	if (w==NIL) goto IF1734;
	local[11]= fqv[257];
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= fqv[3];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	local[14]= fqv[3];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(*ftab[2])(ctx,4,local+11,&ftab[2],fqv[15]); /*warn*/
	local[11]= w;
	goto IF1735;
IF1734:
	local[11]= NIL;
IF1735:
	local[11]= local[7];
	local[12]= makeint((eusinteger_t)1L);
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	local[14]= fqv[258];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[6];
	local[12]= local[9];
	local[13]= local[7];
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[6];
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)0L);
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= w;
	goto IF1733;
IF1732:
	local[11]= local[6];
	local[12]= local[9];
	local[13]= local[7];
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= w;
IF1733:
	local[11]= makeflt(1.0000000000000000208167e-03);
	local[12]= local[7];
	local[13]= makeint((eusinteger_t)1L);
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= local[7];
	local[14]= makeint((eusinteger_t)2L);
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[7];
	local[15]= makeint((eusinteger_t)3L);
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)VMINUS(ctx,3,local+12); /*v-*/
	local[12]= w;
	local[13]= local[7];
	local[14]= makeint((eusinteger_t)3L);
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(*ftab[4])(ctx,2,local+12,&ftab[4],fqv[26]); /*normalize-vector*/
	local[12]= w;
	local[13]= local[7];
	local[14]= makeint((eusinteger_t)3L);
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SCALEVEC(ctx,3,local+11); /*scale*/
	local[11]= w;
IF1731:
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL1727;
WHX1728:
	local[11]= NIL;
BLK1729:
	w = NIL;
	local[9]= local[6];
	local[10]= (pointer)get_sym_func(fqv[259]);
	ctx->vsp=local+11;
	local[11]= makeclosure(codevec,quotevec,CLO1736,env,argv,local);
	ctx->vsp=local+12;
	w=(pointer)SORT(ctx,3,local+9); /*sort*/
	local[9]= argv[0];
	local[10]= fqv[150];
	local[11]= fqv[253];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,4,local+9); /*send*/
	w = T;
	local[0]= w;
BLK1714:
	ctx->vsp=local; return(local[0]);}

/*:collision-avoidance-args*/
static pointer M1737cascaded_link_collision_avoidance_args(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0];
	local[1]= fqv[184];
	local[2]= fqv[260];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[261];
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=argv[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= fqv[211];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	local[3]= NIL;
	local[4]= local[2];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)GREATERP(ctx,2,local+4); /*>*/
	if (w==NIL) goto IF1739;
	local[4]= local[0];
	local[5]= local[2];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[31])(ctx,1,local+5,&ftab[31],fqv[208]); /*make-list*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)NCONC(ctx,2,local+4); /*nconc*/
	local[0] = w;
	local[4]= local[0];
	goto IF1740;
IF1739:
	local[4]= NIL;
IF1740:
	local[4]= local[0];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SUB1(ctx,1,local+5); /*1-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[3] = w;
	if (local[3]!=NIL) goto IF1741;
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)3L);
	local[6]= local[4];
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(*ftab[23])(ctx,2,local+6,&ftab[23],fqv[166]); /*make-matrix*/
	local[6]= w;
	local[7]= local[4];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(*ftab[23])(ctx,2,local+7,&ftab[23],fqv[166]); /*make-matrix*/
	local[7]= w;
	local[8]= local[4];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[23])(ctx,2,local+8,&ftab[23],fqv[166]); /*make-matrix*/
	local[8]= w;
	local[9]= local[5];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[23])(ctx,2,local+9,&ftab[23],fqv[166]); /*make-matrix*/
	local[9]= w;
	local[10]= local[5];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(*ftab[23])(ctx,2,local+10,&ftab[23],fqv[166]); /*make-matrix*/
	local[10]= w;
	local[11]= local[4];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(*ftab[23])(ctx,2,local+11,&ftab[23],fqv[166]); /*make-matrix*/
	local[11]= w;
	local[12]= local[4];
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(*ftab[23])(ctx,2,local+12,&ftab[23],fqv[166]); /*make-matrix*/
	local[12]= w;
	local[13]= local[4];
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(*ftab[23])(ctx,2,local+13,&ftab[23],fqv[166]); /*make-matrix*/
	local[13]= w;
	local[14]= local[5];
	local[15]= local[4];
	ctx->vsp=local+16;
	w=(*ftab[23])(ctx,2,local+14,&ftab[23],fqv[166]); /*make-matrix*/
	local[14]= w;
	local[15]= local[5];
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(*ftab[23])(ctx,2,local+15,&ftab[23],fqv[166]); /*make-matrix*/
	local[15]= w;
	local[16]= local[5];
	local[17]= local[5];
	ctx->vsp=local+18;
	w=(*ftab[23])(ctx,2,local+16,&ftab[23],fqv[166]); /*make-matrix*/
	local[16]= w;
	local[17]= local[5];
	local[18]= local[4];
	ctx->vsp=local+19;
	w=(*ftab[23])(ctx,2,local+17,&ftab[23],fqv[166]); /*make-matrix*/
	local[17]= w;
	local[18]= loadglobal(fqv[5]);
	local[19]= makeint((eusinteger_t)0L);
	ctx->vsp=local+20;
	w=(pointer)INSTANTIATE(ctx,2,local+18); /*instantiate*/
	local[18]= w;
	local[19]= loadglobal(fqv[5]);
	local[20]= makeint((eusinteger_t)1L);
	ctx->vsp=local+21;
	w=(pointer)INSTANTIATE(ctx,2,local+19); /*instantiate*/
	local[19]= w;
	local[20]= loadglobal(fqv[5]);
	local[21]= makeint((eusinteger_t)2L);
	ctx->vsp=local+22;
	w=(pointer)INSTANTIATE(ctx,2,local+20); /*instantiate*/
	local[20]= w;
	local[21]= loadglobal(fqv[5]);
	local[22]= makeint((eusinteger_t)3L);
	ctx->vsp=local+23;
	w=(pointer)INSTANTIATE(ctx,2,local+21); /*instantiate*/
	local[21]= w;
	local[22]= loadglobal(fqv[5]);
	local[23]= makeint((eusinteger_t)3L);
	ctx->vsp=local+24;
	w=(pointer)INSTANTIATE(ctx,2,local+22); /*instantiate*/
	local[22]= w;
	local[23]= loadglobal(fqv[5]);
	local[24]= makeint((eusinteger_t)3L);
	ctx->vsp=local+25;
	w=(pointer)INSTANTIATE(ctx,2,local+23); /*instantiate*/
	local[23]= w;
	local[24]= loadglobal(fqv[5]);
	local[25]= makeint((eusinteger_t)3L);
	ctx->vsp=local+26;
	w=(pointer)INSTANTIATE(ctx,2,local+24); /*instantiate*/
	local[24]= w;
	local[25]= makeint((eusinteger_t)3L);
	local[26]= makeint((eusinteger_t)3L);
	ctx->vsp=local+27;
	w=(*ftab[23])(ctx,2,local+25,&ftab[23],fqv[166]); /*make-matrix*/
	local[25]= w;
	local[26]= loadglobal(fqv[5]);
	local[27]= local[5];
	ctx->vsp=local+28;
	w=(pointer)INSTANTIATE(ctx,2,local+26); /*instantiate*/
	local[26]= w;
	local[27]= loadglobal(fqv[5]);
	local[28]= local[4];
	ctx->vsp=local+29;
	w=(pointer)INSTANTIATE(ctx,2,local+27); /*instantiate*/
	local[27]= w;
	local[28]= loadglobal(fqv[5]);
	local[29]= local[4];
	ctx->vsp=local+30;
	w=(pointer)INSTANTIATE(ctx,2,local+28); /*instantiate*/
	local[28]= w;
	local[29]= loadglobal(fqv[5]);
	local[30]= makeint((eusinteger_t)3L);
	ctx->vsp=local+31;
	w=(pointer)INSTANTIATE(ctx,2,local+29); /*instantiate*/
	local[29]= w;
	local[30]= loadglobal(fqv[5]);
	local[31]= makeint((eusinteger_t)3L);
	ctx->vsp=local+32;
	w=(pointer)INSTANTIATE(ctx,2,local+30); /*instantiate*/
	local[30]= w;
	local[31]= fqv[262];
	local[32]= local[6];
	local[33]= fqv[263];
	local[34]= local[7];
	local[35]= fqv[264];
	local[36]= local[8];
	local[37]= fqv[265];
	local[38]= local[9];
	local[39]= fqv[266];
	local[40]= local[10];
	local[41]= fqv[267];
	local[42]= local[11];
	local[43]= fqv[268];
	local[44]= local[12];
	local[45]= fqv[269];
	local[46]= local[13];
	local[47]= fqv[270];
	local[48]= local[14];
	local[49]= fqv[271];
	local[50]= local[15];
	local[51]= fqv[272];
	local[52]= local[16];
	local[53]= fqv[273];
	local[54]= local[17];
	local[55]= fqv[274];
	local[56]= NIL;
	local[57]= fqv[275];
	local[58]= local[18];
	local[59]= fqv[276];
	local[60]= local[19];
	local[61]= fqv[277];
	local[62]= local[20];
	local[63]= fqv[278];
	local[64]= local[21];
	local[65]= fqv[279];
	local[66]= local[22];
	local[67]= fqv[280];
	local[68]= local[23];
	local[69]= fqv[281];
	local[70]= local[24];
	local[71]= fqv[282];
	local[72]= local[25];
	local[73]= fqv[283];
	local[74]= local[26];
	local[75]= fqv[284];
	local[76]= local[27];
	local[77]= fqv[285];
	local[78]= local[28];
	local[79]= fqv[286];
	local[80]= local[29];
	local[81]= fqv[287];
	local[82]= local[30];
	ctx->vsp=local+83;
	w=(pointer)LIST(ctx,52,local+31); /*list*/
	local[3] = w;
	local[31]= local[0];
	local[32]= local[2];
	ctx->vsp=local+33;
	w=(pointer)SUB1(ctx,1,local+32); /*1-*/
	local[32]= w;
	local[33]= local[3];
	ctx->vsp=local+34;
	w=(pointer)SETELT(ctx,3,local+31); /*setelt*/
	local[31]= argv[0];
	local[32]= fqv[150];
	local[33]= fqv[260];
	local[34]= local[0];
	ctx->vsp=local+35;
	w=(pointer)SEND(ctx,4,local+31); /*send*/
	local[4]= w;
	goto IF1742;
IF1741:
	local[4]= NIL;
IF1742:
	w = local[3];
	local[0]= w;
BLK1738:
	ctx->vsp=local; return(local[0]);}

/*:collision-avoidance*/
static pointer M1743cascaded_link_collision_avoidance(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST1745:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[288], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY1746;
	local[1] = NIL;
KEY1746:
	if (n & (1<<1)) goto KEY1747;
	local[2] = NIL;
KEY1747:
	if (n & (1<<2)) goto KEY1748;
	local[3] = NIL;
KEY1748:
	if (n & (1<<3)) goto KEY1749;
	local[4] = NIL;
KEY1749:
	if (n & (1<<4)) goto KEY1750;
	local[5] = NIL;
KEY1750:
	if (n & (1<<5)) goto KEY1751;
	local[6] = NIL;
KEY1751:
	if (n & (1<<6)) goto KEY1752;
	local[7] = NIL;
KEY1752:
	if (n & (1<<7)) goto KEY1753;
	local[10]= argv[0];
	local[11]= fqv[211];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[8] = w;
KEY1753:
	if (n & (1<<8)) goto KEY1754;
	local[9] = NIL;
KEY1754:
	local[10]= (pointer)get_sym_func(fqv[289]);
	local[11]= argv[0];
	local[12]= fqv[290];
	local[13]= local[0];
	ctx->vsp=local+14;
	w=(pointer)APPLY(ctx,4,local+10); /*apply*/
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)LENGTH(ctx,1,local+10); /*length*/
	local[10]= w;
	local[11]= makeint((eusinteger_t)0L);
	local[12]= loadglobal(fqv[5]);
	local[13]= local[8];
	ctx->vsp=local+14;
	w=(pointer)INSTANTIATE(ctx,2,local+12); /*instantiate*/
	local[12]= w;
	local[13]= argv[0];
	local[14]= fqv[150];
	local[15]= fqv[291];
	local[16]= local[4];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,4,local+13); /*send*/
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!!iscons(w)) goto IF1755;
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	local[6] = w;
	local[13]= local[6];
	goto IF1756;
IF1755:
	local[13]= NIL;
IF1756:
WHL1757:
	local[13]= local[11];
	local[14]= local[10];
	ctx->vsp=local+15;
	w=(pointer)LESSP(ctx,2,local+13); /*<*/
	if (w==NIL) goto WHX1758;
	local[13]= argv[0];
	local[14]= fqv[184];
	local[15]= fqv[253];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,3,local+13); /*send*/
	local[13]= w;
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[4];
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(*ftab[38])(ctx,1,local+15,&ftab[38],fqv[292]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[14]= w;
	local[15]= local[11];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[11] = w;
	if (local[9]==NIL) goto IF1760;
	local[15]= fqv[202];
	w = local[9];
	if (memq(local[15],w)!=NIL) goto IF1760;
	local[15]= local[13];
	local[16]= makeint((eusinteger_t)1L);
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[13];
	local[17]= makeint((eusinteger_t)2L);
	ctx->vsp=local+18;
	w=(pointer)ELT(ctx,2,local+16); /*elt*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)VMINUS(ctx,2,local+15); /*v-*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(*ftab[4])(ctx,1,local+15,&ftab[4],fqv[26]); /*normalize-vector*/
	local[15]= w;
	local[16]= fqv[293];
	local[17]= local[13];
	local[18]= makeint((eusinteger_t)0L);
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	local[18]= local[1];
	ctx->vsp=local+19;
	w=(*ftab[2])(ctx,3,local+16,&ftab[2],fqv[15]); /*warn*/
	local[16]= makeint((eusinteger_t)0L);
	local[17]= makeint((eusinteger_t)3L);
WHL1763:
	local[18]= local[16];
	w = local[17];
	if ((eusinteger_t)local[18] >= (eusinteger_t)w) goto WHX1764;
	local[18]= fqv[294];
	local[19]= local[15];
	local[20]= local[16];
	ctx->vsp=local+21;
	w=(pointer)ELT(ctx,2,local+19); /*elt*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(*ftab[2])(ctx,2,local+18,&ftab[2],fqv[15]); /*warn*/
	local[18]= local[16];
	ctx->vsp=local+19;
	w=(pointer)ADD1(ctx,1,local+18); /*1+*/
	local[16] = w;
	goto WHL1763;
WHX1764:
	local[18]= NIL;
BLK1765:
	w = NIL;
	local[16]= fqv[295];
	local[17]= local[14];
	local[18]= fqv[3];
	ctx->vsp=local+19;
	w=(*ftab[18])(ctx,2,local+17,&ftab[18],fqv[128]); /*send-all*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(*ftab[2])(ctx,2,local+16,&ftab[2],fqv[15]); /*warn*/
	local[15]= w;
	goto IF1761;
IF1760:
	local[15]= NIL;
IF1761:
	local[15]= local[13];
	local[16]= makeint((eusinteger_t)0L);
	ctx->vsp=local+17;
	w=(pointer)ELT(ctx,2,local+15); /*elt*/
	local[15]= w;
	local[16]= local[1];
	ctx->vsp=local+17;
	w=(pointer)GREQP(ctx,2,local+15); /*>=*/
	if (w!=NIL) goto IF1766;
	ctx->vsp=local+15;
	local[15]= makeclosure(codevec,quotevec,CLO1768,env,argv,local);
	local[16]= local[6];
	ctx->vsp=local+17;
	w=(*ftab[39])(ctx,2,local+15,&ftab[39],fqv[296]); /*find-if*/
	local[15]= w;
	local[16]= argv[0];
	local[17]= fqv[297];
	local[18]= local[14];
	local[19]= local[15];
	ctx->vsp=local+20;
	w=(pointer)SEND(ctx,4,local+16); /*send*/
	local[16]= w;
	local[17]= fqv[105];
	local[18]= local[13];
	local[19]= makeint((eusinteger_t)1L);
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(*ftab[40])(ctx,2,local+17,&ftab[40],fqv[298]); /*make-cascoords*/
	local[17]= w;
	local[18]= argv[0];
	local[19]= fqv[261];
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20]= (w)->c.cons.car;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	ctx->vsp=local+22;
	w=(pointer)SEND(ctx,4,local+18); /*send*/
	local[18]= w;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.car;
	local[20]= fqv[299];
	local[21]= local[17];
	ctx->vsp=local+22;
	w=(pointer)SEND(ctx,3,local+19); /*send*/
	local[19]= (pointer)get_sym_func(fqv[289]);
	local[20]= argv[0];
	local[21]= fqv[300];
	local[22]= local[18];
	local[23]= fqv[301];
	local[24]= local[17];
	local[25]= local[16];
	ctx->vsp=local+26;
	w=(pointer)APPLY(ctx,7,local+19); /*apply*/
	local[19]= w;
	local[20]= local[19];
	ctx->vsp=local+21;
	w=(pointer)TRANSPOSE(ctx,1,local+20); /*transpose*/
	local[20]= w;
	local[21]= local[13];
	local[22]= makeint((eusinteger_t)3L);
	ctx->vsp=local+23;
	w=(pointer)ELT(ctx,2,local+21); /*elt*/
	local[21]= w;
	ctx->vsp=local+22;
	w=(pointer)TRANSFORM(ctx,2,local+20); /*transform*/
	local[20]= w;
	local[21]= local[1];
	local[22]= local[13];
	local[23]= makeint((eusinteger_t)0L);
	ctx->vsp=local+24;
	w=(pointer)ELT(ctx,2,local+22); /*elt*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)QUOTIENT(ctx,2,local+21); /*/*/
	local[21]= w;
	local[22]= makeint((eusinteger_t)1L);
	ctx->vsp=local+23;
	w=(pointer)MINUS(ctx,2,local+21); /*-*/
	local[21]= w;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22]= (w)->c.cons.car;
	local[23]= fqv[302];
	local[24]= local[17];
	ctx->vsp=local+25;
	w=(pointer)SEND(ctx,3,local+22); /*send*/
	local[22]= NIL;
	local[23]= local[18];
WHL1770:
	if (local[23]==NIL) goto WHX1771;
	w=local[23];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[24]= (w)->c.cons.car;
	w=local[23];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[23] = (w)->c.cons.cdr;
	w = local[24];
	local[22] = w;
	ctx->vsp=local+24;
	local[24]= makeclosure(codevec,quotevec,FLET1774,env,argv,local);
	local[25]= local[22];
	local[26]= local[5];
	w = local[24];
	ctx->vsp=local+27;
	w=FLET1774(ctx,2,local+25,w);
	local[25]= w;
	local[26]= local[22];
	local[27]= local[18];
	w = local[24];
	ctx->vsp=local+28;
	w=FLET1774(ctx,2,local+26,w);
	local[26]= w;
	local[27]= makeint((eusinteger_t)0L);
	local[28]= local[22];
	local[29]= fqv[198];
	ctx->vsp=local+30;
	w=(pointer)SEND(ctx,2,local+28); /*send*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)LIST(ctx,1,local+28); /*list*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+28); /*calc-target-joint-dimension*/
	local[28]= w;
WHL1776:
	local[29]= local[27];
	w = local[28];
	if ((eusinteger_t)local[29] >= (eusinteger_t)w) goto WHX1777;
	local[29]= local[12];
	local[30]= local[27];
	local[31]= local[25];
	ctx->vsp=local+32;
	w=(pointer)PLUS(ctx,2,local+30); /*+*/
	local[30]= w;
	local[31]= local[12];
	local[32]= local[27];
	local[33]= local[25];
	ctx->vsp=local+34;
	w=(pointer)PLUS(ctx,2,local+32); /*+*/
	local[32]= w;
	ctx->vsp=local+33;
	w=(pointer)ELT(ctx,2,local+31); /*elt*/
	local[31]= w;
	local[32]= local[21];
	local[33]= local[20];
	local[34]= local[26];
	local[35]= local[27];
	ctx->vsp=local+36;
	w=(pointer)PLUS(ctx,2,local+34); /*+*/
	local[34]= w;
	ctx->vsp=local+35;
	w=(pointer)ELT(ctx,2,local+33); /*elt*/
	local[33]= w;
	ctx->vsp=local+34;
	w=(pointer)TIMES(ctx,2,local+32); /***/
	local[32]= w;
	ctx->vsp=local+33;
	w=(pointer)PLUS(ctx,2,local+31); /*+*/
	local[31]= w;
	ctx->vsp=local+32;
	w=(pointer)SETELT(ctx,3,local+29); /*setelt*/
	local[29]= local[27];
	ctx->vsp=local+30;
	w=(pointer)ADD1(ctx,1,local+29); /*1+*/
	local[27] = w;
	goto WHL1776;
WHX1777:
	local[29]= NIL;
BLK1778:
	w = NIL;
	goto WHL1770;
WHX1771:
	local[24]= NIL;
BLK1772:
	w = NIL;
	local[15]= w;
	goto IF1767;
IF1766:
	local[15]= NIL;
IF1767:
	w = local[15];
	goto WHL1757;
WHX1758:
	local[13]= NIL;
BLK1759:
	local[13]= makeint((eusinteger_t)0L);
	local[14]= local[8];
WHL1780:
	local[15]= local[13];
	w = local[14];
	if ((eusinteger_t)local[15] >= (eusinteger_t)w) goto WHX1781;
	local[15]= local[12];
	local[16]= local[13];
	local[17]= local[12];
	local[18]= local[13];
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	local[18]= local[7];
	local[19]= local[13];
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)TIMES(ctx,2,local+17); /***/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)SETELT(ctx,3,local+15); /*setelt*/
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[13] = w;
	goto WHL1780;
WHX1781:
	local[15]= NIL;
BLK1782:
	w = NIL;
	local[13]= argv[0];
	local[14]= fqv[150];
	local[15]= fqv[303];
	local[16]= local[3];
	local[17]= local[12];
	ctx->vsp=local+18;
	w=(pointer)SCALEVEC(ctx,2,local+16); /*scale*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,4,local+13); /*send*/
	local[13]= argv[0];
	local[14]= fqv[150];
	local[15]= fqv[304];
	local[16]= local[2];
	local[17]= local[12];
	ctx->vsp=local+18;
	w=(pointer)SCALEVEC(ctx,2,local+16); /*scale*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,4,local+13); /*send*/
	if (local[9]==NIL) goto IF1783;
	local[13]= fqv[202];
	w = local[9];
	if (memq(local[13],w)!=NIL) goto IF1783;
	local[13]= loadglobal(fqv[5]);
	local[14]= (pointer)get_sym_func(fqv[49]);
	local[15]= argv[0];
	local[16]= fqv[184];
	local[17]= fqv[304];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)MAP(ctx,3,local+13); /*map*/
	local[13]= w;
	local[14]= fqv[305];
	ctx->vsp=local+15;
	w=(*ftab[33])(ctx,2,local+13,&ftab[33],fqv[234]); /*format-array*/
	local[13]= loadglobal(fqv[5]);
	local[14]= (pointer)get_sym_func(fqv[49]);
	local[15]= argv[0];
	local[16]= fqv[184];
	local[17]= fqv[303];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)MAP(ctx,3,local+13); /*map*/
	local[13]= w;
	local[14]= fqv[306];
	ctx->vsp=local+15;
	w=(*ftab[33])(ctx,2,local+13,&ftab[33],fqv[234]); /*format-array*/
	local[13]= w;
	goto IF1784;
IF1783:
	local[13]= NIL;
IF1784:
	w = local[13];
	local[10]= argv[0];
	local[11]= fqv[184];
	local[12]= fqv[304];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,3,local+10); /*send*/
	local[0]= w;
BLK1744:
	ctx->vsp=local; return(local[0]);}

/*:move-joints*/
static pointer M1785cascaded_link_move_joints(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1787:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[307], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1788;
	local[1] = NIL;
KEY1788:
	if (n & (1<<1)) goto KEY1789;
	local[2] = makeflt(4.9999999999999988897770e-02);
KEY1789:
	if (n & (1<<2)) goto KEY1790;
	local[3] = NIL;
KEY1790:
	if (n & (1<<3)) goto KEY1791;
	local[4] = NIL;
KEY1791:
	if (n & (1<<4)) goto KEY1792;
	local[5] = NIL;
KEY1792:
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	if (local[4]==NIL) goto IF1793;
	w = local[4];
	if (!!iscons(w)) goto IF1793;
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	local[4] = w;
	local[9]= local[4];
	goto IF1794;
IF1793:
	local[9]= NIL;
IF1794:
	local[9]= (pointer)get_sym_func(fqv[289]);
	local[10]= argv[0];
	local[11]= fqv[308];
	local[12]= argv[2];
	local[13]= local[0];
	ctx->vsp=local+14;
	w=(pointer)APPLY(ctx,5,local+9); /*apply*/
	local[6] = w;
	local[9]= argv[0];
	local[10]= fqv[309];
	local[11]= local[1];
	local[12]= local[6];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,5,local+9); /*send*/
	local[9]= w;
	local[10]= makeflt(1.0000000000000000000000e+00);
	local[11]= makeint((eusinteger_t)0L);
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)LENGTH(ctx,1,local+12); /*length*/
	local[12]= w;
WHL1796:
	local[13]= local[11];
	w = local[12];
	if ((eusinteger_t)local[13] >= (eusinteger_t)w) goto WHX1797;
	local[13]= local[9];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	local[14]= local[10];
	ctx->vsp=local+15;
	w=(pointer)LESSP(ctx,2,local+13); /*<*/
	if (w==NIL) goto IF1799;
	local[13]= local[9];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[10] = w;
	local[13]= local[10];
	goto IF1800;
IF1799:
	local[13]= NIL;
IF1800:
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(pointer)ADD1(ctx,1,local+13); /*1+*/
	local[11] = w;
	goto WHL1796;
WHX1797:
	local[13]= NIL;
BLK1798:
	w = NIL;
	local[11]= local[10];
	local[12]= local[6];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(pointer)SCALEVEC(ctx,3,local+11); /*scale*/
	local[6] = w;
	w = local[6];
	if (local[4]==NIL) goto IF1801;
	local[9]= fqv[202];
	w = local[4];
	if (memq(local[9],w)!=NIL) goto IF1801;
	local[9]= loadglobal(fqv[5]);
	local[10]= (pointer)get_sym_func(fqv[49]);
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)MAP(ctx,3,local+9); /*map*/
	local[9]= w;
	local[10]= fqv[310];
	ctx->vsp=local+11;
	w=(*ftab[33])(ctx,2,local+9,&ftab[33],fqv[234]); /*format-array*/
	local[9]= w;
	goto IF1802;
IF1801:
	local[9]= NIL;
IF1802:
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
TAG1805:
	local[11]= local[10];
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)LENGTH(ctx,1,local+12); /*length*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)GREQP(ctx,2,local+11); /*>=*/
	if (w==NIL) goto IF1806;
	w = NIL;
	ctx->vsp=local+11;
	local[9]=w;
	goto BLK1804;
	goto IF1807;
IF1806:
	local[11]= NIL;
IF1807:
	local[11]= local[1];
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= fqv[198];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[8] = w;
	local[11]= local[8];
	local[12]= fqv[31];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	local[12]= local[11];
	if (fqv[311]!=local[12]) goto IF1809;
	local[12]= local[8];
	local[13]= fqv[312];
	local[14]= local[6];
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)ELT(ctx,2,local+14); /*elt*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[7] = w;
	local[12]= local[7];
	goto IF1810;
IF1809:
	if (T==NIL) goto IF1811;
	local[12]= local[8];
	local[13]= fqv[312];
	local[14]= local[6];
	local[15]= local[9];
	local[16]= local[9];
	local[17]= local[8];
	local[18]= fqv[31];
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,2,local+17); /*send*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)PLUS(ctx,2,local+16); /*+*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SUBSEQ(ctx,3,local+14); /*subseq*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[7] = w;
	local[12]= local[7];
	goto IF1812;
IF1811:
	local[12]= NIL;
IF1812:
IF1810:
	w = local[12];
	local[11]= (pointer)get_sym_func(fqv[289]);
	local[12]= local[1];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= fqv[198];
	local[14]= fqv[20];
	local[15]= local[7];
	local[16]= fqv[313];
	local[17]= T;
	local[18]= local[3];
	ctx->vsp=local+19;
	w=(pointer)APPLY(ctx,8,local+11); /*apply*/
	local[11]= local[9];
	local[12]= local[8];
	local[13]= fqv[31];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[12]= w;
	local[9] = local[11];
	local[10] = local[12];
	w = NIL;
	ctx->vsp=local+11;
	goto TAG1805;
	w = NIL;
	local[9]= w;
BLK1804:
	if (local[5]==NIL) goto IF1815;
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,1,local+9); /*funcall*/
	local[9]= w;
	goto IF1816;
IF1815:
	local[9]= NIL;
IF1816:
	w = T;
	local[0]= w;
BLK1786:
	ctx->vsp=local; return(local[0]);}

/*:find-joint-angle-limit-weight-old-from-union-link-list*/
static pointer M1817cascaded_link_find_joint_angle_limit_weight_old_from_union_link_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= fqv[3];
	ctx->vsp=local+2;
	w=(*ftab[18])(ctx,2,local+0,&ftab[18],fqv[128]); /*send-all*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[314];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[1]= w;
	local[2]= fqv[139];
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO1819,env,argv,local);
	ctx->vsp=local+4;
	w=(*ftab[41])(ctx,4,local+0,&ftab[41],fqv[315]); /*assoc*/
	local[0]= w;
BLK1818:
	ctx->vsp=local; return(local[0]);}

/*:reset-joint-angle-limit-weight-old*/
static pointer M1820cascaded_link_reset_joint_angle_limit_weight_old(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[316];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	if (local[0]==NIL) goto IF1822;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	local[2]= NIL;
	ctx->vsp=local+3;
	w=(pointer)RPLACA2(ctx,2,local+1); /*rplaca2*/
	local[1]= w;
	goto IF1823;
IF1822:
	local[1]= NIL;
IF1823:
	w = local[1];
	local[0]= w;
BLK1821:
	ctx->vsp=local; return(local[0]);}

/*:calc-weight-from-joint-limit*/
static pointer M1824cascaded_link_calc_weight_from_joint_limit(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=10) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0];
	local[3]= fqv[316];
	local[4]= argv[5];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	if (local[2]!=NIL) goto IF1826;
	local[3]= argv[0];
	local[4]= fqv[150];
	local[5]= fqv[314];
	local[6]= argv[5];
	local[7]= fqv[3];
	ctx->vsp=local+8;
	w=(*ftab[18])(ctx,2,local+6,&ftab[18],fqv[128]); /*send-all*/
	local[6]= w;
	local[7]= NIL;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,2,local+6); /*list*/
	local[6]= w;
	local[7]= argv[0];
	local[8]= fqv[314];
	ctx->vsp=local+9;
	w=(pointer)GETPROP(ctx,2,local+7); /*get*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= argv[0];
	local[4]= fqv[316];
	local[5]= argv[5];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[2] = w;
	local[3]= local[2];
	goto IF1827;
IF1826:
	local[3]= NIL;
IF1827:
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car!=NIL) goto IF1828;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	local[4]= loadglobal(fqv[5]);
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)INSTANTIATE(ctx,2,local+4); /*instantiate*/
	local[4]= w;
	local[5]= makeflt(1.0000000000000000000000e+20);
	ctx->vsp=local+6;
	w=(*ftab[36])(ctx,2,local+4,&ftab[36],fqv[243]); /*fill*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)RPLACA2(ctx,2,local+3); /*rplaca2*/
	local[3]= w;
	goto IF1829;
IF1828:
	local[3]= NIL;
IF1829:
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.car;
	w = local[0];
	local[2]= argv[2];
	local[3]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+4;
	w=(pointer)GREATERP(ctx,2,local+2); /*>*/
	if (w==NIL) goto IF1830;
	local[2]= argv[2];
	local[3]= argv[5];
	local[4]= fqv[198];
	ctx->vsp=local+5;
	w=(*ftab[18])(ctx,2,local+3,&ftab[18],fqv[128]); /*send-all*/
	local[3]= w;
	local[4]= argv[9];
	ctx->vsp=local+5;
	w=(pointer)F768joint_angle_limit_weight(ctx,2,local+3); /*joint-angle-limit-weight*/
	local[3]= w;
	local[4]= argv[9];
	ctx->vsp=local+5;
	w=(pointer)SCALEVEC(ctx,3,local+2); /*scale*/
	local[1] = w;
	if (argv[6]==NIL) goto IF1832;
	local[2]= fqv[202];
	w = argv[6];
	if (memq(local[2],w)!=NIL) goto IF1832;
	local[2]= local[0];
	local[3]= fqv[317];
	ctx->vsp=local+4;
	w=(*ftab[33])(ctx,2,local+2,&ftab[33],fqv[234]); /*format-array*/
	local[2]= local[1];
	local[3]= fqv[318];
	ctx->vsp=local+4;
	w=(*ftab[33])(ctx,2,local+2,&ftab[33],fqv[234]); /*format-array*/
	local[2]= w;
	goto IF1833;
IF1832:
	local[2]= NIL;
IF1833:
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[3];
WHL1835:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX1836;
	local[4]= argv[8];
	local[5]= local[2];
	local[6]= local[1];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[0];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	local[7]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+8;
	w=(pointer)GREQP(ctx,2,local+6); /*>=*/
	if (w==NIL) goto IF1838;
	local[6]= makeflt(1.0000000000000000000000e+00);
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[1];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)PLUS(ctx,2,local+7); /*+*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)QUOTIENT(ctx,2,local+6); /*/*/
	local[6]= w;
	goto IF1839;
IF1838:
	local[6]= makeflt(1.0000000000000000000000e+00);
IF1839:
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[0];
	local[5]= local[2];
	local[6]= local[1];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL1835;
WHX1836:
	local[4]= NIL;
BLK1837:
	w = NIL;
	local[2]= w;
	goto IF1831;
IF1830:
	local[2]= NIL;
IF1831:
	local[2]= argv[2];
	local[3]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+4;
	w=(pointer)NUMEQUAL(ctx,2,local+2); /*=*/
	if (w==NIL) goto IF1840;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[3];
WHL1843:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX1844;
	local[4]= argv[8];
	local[5]= local[2];
	local[6]= argv[7];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL1843;
WHX1844:
	local[4]= NIL;
BLK1845:
	w = NIL;
	local[2]= w;
	goto IF1841;
IF1840:
	local[2]= NIL;
IF1841:
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= argv[5];
WHL1847:
	if (local[4]==NIL) goto WHX1848;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO1851,env,argv,local);
	local[6]= argv[4];
	ctx->vsp=local+7;
	w=(*ftab[42])(ctx,2,local+5,&ftab[42],fqv[319]); /*count-if*/
	local[5]= w;
	local[6]= local[3];
	local[7]= fqv[198];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+6); /*calc-target-joint-dimension*/
	local[6]= w;
	local[7]= local[5];
	local[8]= makeint((eusinteger_t)1L);
	ctx->vsp=local+9;
	w=(pointer)GREATERP(ctx,2,local+7); /*>*/
	if (w==NIL) goto IF1852;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[6];
WHL1855:
	local[9]= local[7];
	w = local[8];
	if ((eusinteger_t)local[9] >= (eusinteger_t)w) goto WHX1856;
	local[9]= argv[8];
	local[10]= local[2];
	local[11]= local[7];
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[10]= w;
	local[11]= argv[8];
	local[12]= local[2];
	local[13]= local[7];
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,2,local+12); /*+*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)SETELT(ctx,3,local+9); /*setelt*/
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[7] = w;
	goto WHL1855;
WHX1856:
	local[9]= NIL;
BLK1857:
	w = NIL;
	local[7]= w;
	goto IF1853;
IF1852:
	local[7]= NIL;
IF1853:
	local[7]= local[2];
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)PLUS(ctx,2,local+7); /*+*/
	local[2] = w;
	w = local[2];
	goto WHL1847;
WHX1848:
	local[5]= NIL;
BLK1849:
	w = NIL;
	w = argv[8];
	local[0]= w;
BLK1825:
	ctx->vsp=local; return(local[0]);}

/*:calc-inverse-kinematics-weight-from-link-list*/
static pointer M1858cascaded_link_calc_inverse_kinematics_weight_from_link_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[320], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1860;
	local[0] = makeflt(1.0000000000000000000000e+00);
KEY1860:
	if (n & (1<<1)) goto KEY1861;
	local[8]= argv[0];
	local[9]= fqv[197];
	local[10]= argv[2];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,3,local+8); /*send*/
	local[1] = w;
KEY1861:
	if (n & (1<<2)) goto KEY1862;
	local[8]= argv[0];
	local[9]= fqv[211];
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,3,local+8); /*send*/
	local[2] = w;
KEY1862:
	if (n & (1<<3)) goto KEY1863;
	local[8]= loadglobal(fqv[5]);
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,2,local+8); /*instantiate*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(*ftab[36])(ctx,2,local+8,&ftab[36],fqv[243]); /*fill*/
	local[3] = w;
KEY1863:
	if (n & (1<<4)) goto KEY1864;
	local[4] = NIL;
KEY1864:
	if (n & (1<<5)) goto KEY1865;
	local[5] = NIL;
KEY1865:
	if (n & (1<<6)) goto KEY1866;
	local[8]= loadglobal(fqv[5]);
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,2,local+8); /*instantiate*/
	local[6] = w;
KEY1866:
	if (n & (1<<7)) goto KEY1867;
	local[8]= loadglobal(fqv[5]);
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)INSTANTIATE(ctx,2,local+8); /*instantiate*/
	local[7] = w;
KEY1867:
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(*ftab[43])(ctx,1,local+8,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto CON1869;
	local[8]= local[3];
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,2,local+8); /*funcall*/
	local[3] = w;
	local[8]= local[3];
	goto CON1868;
CON1869:
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)LISTP(ctx,1,local+8); /*listp*/
	if (w==NIL) goto CON1870;
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)EVAL(ctx,1,local+8); /*eval*/
	local[3] = w;
	local[8]= local[3];
	goto CON1868;
CON1870:
	local[8]= NIL;
CON1868:
	if (local[5]==NIL) goto IF1871;
	local[8]= fqv[202];
	w = local[5];
	if (memq(local[8],w)!=NIL) goto IF1871;
	local[8]= local[3];
	local[9]= fqv[322];
	ctx->vsp=local+10;
	w=(*ftab[33])(ctx,2,local+8,&ftab[33],fqv[234]); /*format-array*/
	local[8]= w;
	goto IF1872;
IF1871:
	local[8]= NIL;
IF1872:
	local[8]= NIL;
	local[9]= local[4];
WHL1874:
	if (local[9]==NIL) goto WHX1875;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9] = (w)->c.cons.cdr;
	w = local[10];
	local[8] = w;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	local[11]= local[1];
	local[12]= fqv[139];
	local[13]= (pointer)get_sym_func(fqv[140]);
	ctx->vsp=local+14;
	w=(*ftab[32])(ctx,4,local+10,&ftab[32],fqv[213]); /*position*/
	local[10]= w;
	if (local[10]==NIL) goto IF1878;
	local[11]= (pointer)get_sym_func(fqv[323]);
	local[12]= local[1];
	local[13]= makeint((eusinteger_t)0L);
	local[14]= local[10];
	ctx->vsp=local+15;
	w=(pointer)SUBSEQ(ctx,3,local+12); /*subseq*/
	local[12]= w;
	local[13]= fqv[198];
	ctx->vsp=local+14;
	w=(*ftab[18])(ctx,2,local+12,&ftab[18],fqv[128]); /*send-all*/
	local[12]= w;
	local[13]= fqv[31];
	ctx->vsp=local+14;
	w=(*ftab[18])(ctx,2,local+12,&ftab[18],fqv[128]); /*send-all*/
	local[12]= w;
	local[13]= fqv[324];
	local[14]= makeint((eusinteger_t)0L);
	ctx->vsp=local+15;
	w=(*ftab[26])(ctx,4,local+11,&ftab[26],fqv[196]); /*reduce*/
	local[11]= w;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	ctx->vsp=local+13;
	w=(*ftab[43])(ctx,1,local+12,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF1880;
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	ctx->vsp=local+13;
	w=(pointer)FUNCALL(ctx,1,local+12); /*funcall*/
	local[12]= w;
	goto IF1881;
IF1880:
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
IF1881:
	local[13]= makeint((eusinteger_t)0L);
	w=local[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	local[15]= fqv[198];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
	local[15]= fqv[31];
	ctx->vsp=local+16;
	w=(pointer)SEND(ctx,2,local+14); /*send*/
	local[14]= w;
WHL1883:
	local[15]= local[13];
	w = local[14];
	if ((eusinteger_t)local[15] >= (eusinteger_t)w) goto WHX1884;
	local[15]= local[3];
	local[16]= local[13];
	local[17]= local[11];
	ctx->vsp=local+18;
	w=(pointer)PLUS(ctx,2,local+16); /*+*/
	local[16]= w;
	local[17]= local[3];
	local[18]= local[13];
	local[19]= local[11];
	ctx->vsp=local+20;
	w=(pointer)PLUS(ctx,2,local+18); /*+*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)ELT(ctx,2,local+17); /*elt*/
	local[17]= w;
	local[18]= local[12];
	ctx->vsp=local+19;
	w=(*ftab[0])(ctx,1,local+18,&ftab[0],fqv[4]); /*float-vector-p*/
	if (w==NIL) goto IF1886;
	local[18]= local[12];
	local[19]= local[13];
	ctx->vsp=local+20;
	w=(pointer)ELT(ctx,2,local+18); /*elt*/
	local[18]= w;
	goto IF1887;
IF1886:
	local[18]= local[12];
IF1887:
	ctx->vsp=local+19;
	w=(pointer)TIMES(ctx,2,local+17); /***/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)SETELT(ctx,3,local+15); /*setelt*/
	local[15]= local[13];
	ctx->vsp=local+16;
	w=(pointer)ADD1(ctx,1,local+15); /*1+*/
	local[13] = w;
	goto WHL1883;
WHX1884:
	local[15]= NIL;
BLK1885:
	w = NIL;
	local[11]= w;
	goto IF1879;
IF1878:
	local[11]= NIL;
IF1879:
	w = local[11];
	goto WHL1874;
WHX1875:
	local[10]= NIL;
BLK1876:
	w = NIL;
	if (local[5]==NIL) goto IF1888;
	local[8]= fqv[202];
	w = local[5];
	if (memq(local[8],w)!=NIL) goto IF1888;
	if (local[4]==NIL) goto IF1888;
	local[8]= local[3];
	local[9]= fqv[325];
	ctx->vsp=local+10;
	w=(*ftab[33])(ctx,2,local+8,&ftab[33],fqv[234]); /*format-array*/
	local[8]= w;
	goto IF1889;
IF1888:
	local[8]= NIL;
IF1889:
	local[8]= argv[0];
	local[9]= fqv[326];
	local[10]= local[0];
	local[11]= local[2];
	local[12]= argv[2];
	local[13]= local[1];
	local[14]= local[5];
	local[15]= local[3];
	local[16]= local[6];
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,10,local+8); /*send*/
	local[6] = w;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= local[2];
WHL1891:
	local[10]= local[8];
	w = local[9];
	if ((eusinteger_t)local[10] >= (eusinteger_t)w) goto WHX1892;
	local[10]= local[6];
	local[11]= local[8];
	local[12]= local[3];
	local[13]= local[8];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= local[6];
	local[14]= local[8];
	ctx->vsp=local+15;
	w=(pointer)ELT(ctx,2,local+13); /*elt*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SETELT(ctx,3,local+10); /*setelt*/
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[8] = w;
	goto WHL1891;
WHX1892:
	local[10]= NIL;
BLK1893:
	w = NIL;
	if (local[5]==NIL) goto IF1894;
	local[8]= fqv[202];
	w = local[5];
	if (memq(local[8],w)!=NIL) goto IF1894;
	local[8]= local[6];
	local[9]= fqv[327];
	ctx->vsp=local+10;
	w=(*ftab[33])(ctx,2,local+8,&ftab[33],fqv[234]); /*format-array*/
	local[8]= w;
	goto IF1895;
IF1894:
	local[8]= NIL;
IF1895:
	w = local[6];
	local[0]= w;
BLK1859:
	ctx->vsp=local; return(local[0]);}

/*:calc-nspace-from-joint-limit*/
static pointer M1896cascaded_link_calc_nspace_from_joint_limit(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=7) maerror();
	local[0]= argv[2];
	local[1]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+2;
	w=(pointer)GREATERP(ctx,2,local+0); /*>*/
	if (w==NIL) goto IF1898;
	local[0]= argv[2];
	local[1]= argv[3];
	local[2]= fqv[198];
	ctx->vsp=local+3;
	w=(*ftab[18])(ctx,2,local+1,&ftab[18],fqv[128]); /*send-all*/
	local[1]= w;
	local[2]= argv[6];
	ctx->vsp=local+3;
	w=(pointer)F769joint_angle_limit_nspace(ctx,2,local+1); /*joint-angle-limit-nspace*/
	local[1]= w;
	local[2]= argv[6];
	ctx->vsp=local+3;
	w=(pointer)SCALEVEC(ctx,3,local+0); /*scale*/
	argv[6] = w;
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[4];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
WHL1901:
	local[2]= local[0];
	w = local[1];
	if ((eusinteger_t)local[2] >= (eusinteger_t)w) goto WHX1902;
	local[2]= argv[6];
	local[3]= local[0];
	local[4]= argv[6];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[4];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SETELT(ctx,3,local+2); /*setelt*/
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	goto WHL1901;
WHX1902:
	local[2]= NIL;
BLK1903:
	w = NIL;
	if (argv[5]==NIL) goto IF1904;
	local[0]= fqv[202];
	w = argv[5];
	if (memq(local[0],w)!=NIL) goto IF1904;
	local[0]= loadglobal(fqv[5]);
	local[1]= (pointer)get_sym_func(fqv[49]);
	local[2]= argv[6];
	ctx->vsp=local+3;
	w=(pointer)MAP(ctx,3,local+0); /*map*/
	local[0]= w;
	local[1]= fqv[328];
	ctx->vsp=local+2;
	w=(*ftab[33])(ctx,2,local+0,&ftab[33],fqv[234]); /*format-array*/
	local[0]= w;
	goto IF1905;
IF1904:
	local[0]= NIL;
IF1905:
	goto IF1899;
IF1898:
	local[0]= NIL;
IF1899:
	w = argv[6];
	local[0]= w;
BLK1897:
	ctx->vsp=local; return(local[0]);}

/*:calc-inverse-kinematics-nspace-from-link-list*/
static pointer M1906cascaded_link_calc_inverse_kinematics_nspace_from_link_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[329], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1908;
	local[0] = makeflt(9.9999999999999950039964e-03);
KEY1908:
	if (n & (1<<1)) goto KEY1909;
	local[14]= argv[0];
	local[15]= fqv[197];
	local[16]= argv[2];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[1] = w;
KEY1909:
	if (n & (1<<2)) goto KEY1910;
	local[14]= argv[0];
	local[15]= fqv[211];
	local[16]= local[1];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,3,local+14); /*send*/
	local[2] = w;
KEY1910:
	if (n & (1<<3)) goto KEY1911;
	local[3] = NIL;
KEY1911:
	if (n & (1<<4)) goto KEY1912;
	local[4] = NIL;
KEY1912:
	if (n & (1<<5)) goto KEY1913;
	local[5] = NIL;
KEY1913:
	if (n & (1<<6)) goto KEY1914;
	local[6] = makeflt(0.0000000000000000000000e+00);
KEY1914:
	if (n & (1<<7)) goto KEY1915;
	local[7] = NIL;
KEY1915:
	if (n & (1<<8)) goto KEY1916;
	local[8] = NIL;
KEY1916:
	if (n & (1<<9)) goto KEY1917;
	local[9] = fqv[33];
KEY1917:
	if (n & (1<<10)) goto KEY1918;
	local[10] = NIL;
KEY1918:
	if (n & (1<<11)) goto KEY1919;
	local[14]= loadglobal(fqv[5]);
	local[15]= local[2];
	ctx->vsp=local+16;
	w=(pointer)INSTANTIATE(ctx,2,local+14); /*instantiate*/
	local[14]= w;
	local[15]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+16;
	w=(*ftab[36])(ctx,2,local+14,&ftab[36],fqv[243]); /*fill*/
	local[11] = w;
KEY1919:
	if (n & (1<<12)) goto KEY1920;
	local[12] = T;
KEY1920:
	if (n & (1<<13)) goto KEY1921;
	local[14]= loadglobal(fqv[5]);
	local[15]= local[2];
	ctx->vsp=local+16;
	w=(pointer)INSTANTIATE(ctx,2,local+14); /*instantiate*/
	local[13] = w;
KEY1921:
	local[14]= argv[0];
	local[15]= fqv[330];
	local[16]= local[0];
	local[17]= local[1];
	local[18]= local[11];
	local[19]= local[4];
	local[20]= local[13];
	ctx->vsp=local+21;
	w=(pointer)SEND(ctx,7,local+14); /*send*/
	local[13] = w;
	if (local[10]==NIL) goto IF1922;
	local[14]= local[6];
	local[15]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+16;
	w=(pointer)GREATERP(ctx,2,local+14); /*>*/
	if (w==NIL) goto IF1924;
	if (local[7]==NIL) goto IF1924;
	local[14]= argv[0];
	local[15]= fqv[331];
	local[16]= local[1];
	local[17]= fqv[274];
	local[18]= local[11];
	local[19]= fqv[332];
	local[20]= local[8];
	local[21]= fqv[333];
	local[22]= local[12];
	local[23]= fqv[334];
	local[24]= local[7];
	local[25]= fqv[335];
	local[26]= local[6];
	local[27]= fqv[336];
	local[28]= local[9];
	ctx->vsp=local+29;
	w=(pointer)SEND(ctx,15,local+14); /*send*/
	local[14]= w;
	local[15]= local[13];
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)VPLUS(ctx,3,local+14); /*v+*/
	local[13] = w;
	local[14]= local[13];
	goto IF1925;
IF1924:
	local[14]= NIL;
IF1925:
	goto IF1923;
IF1922:
	local[14]= NIL;
IF1923:
	local[14]= NIL;
	local[15]= local[5];
WHL1927:
	if (local[15]==NIL) goto WHX1928;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	w=local[15];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15] = (w)->c.cons.cdr;
	w = local[16];
	local[14] = w;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	local[17]= local[1];
	local[18]= fqv[139];
	local[19]= (pointer)get_sym_func(fqv[140]);
	ctx->vsp=local+20;
	w=(*ftab[32])(ctx,4,local+16,&ftab[32],fqv[213]); /*position*/
	local[16]= w;
	if (local[16]==NIL) goto IF1931;
	local[17]= (pointer)get_sym_func(fqv[323]);
	local[18]= local[1];
	local[19]= makeint((eusinteger_t)0L);
	local[20]= local[16];
	ctx->vsp=local+21;
	w=(pointer)SUBSEQ(ctx,3,local+18); /*subseq*/
	local[18]= w;
	local[19]= fqv[198];
	ctx->vsp=local+20;
	w=(*ftab[18])(ctx,2,local+18,&ftab[18],fqv[128]); /*send-all*/
	local[18]= w;
	local[19]= fqv[31];
	ctx->vsp=local+20;
	w=(*ftab[18])(ctx,2,local+18,&ftab[18],fqv[128]); /*send-all*/
	local[18]= w;
	local[19]= fqv[324];
	local[20]= makeint((eusinteger_t)0L);
	ctx->vsp=local+21;
	w=(*ftab[26])(ctx,4,local+17,&ftab[26],fqv[196]); /*reduce*/
	local[17]= w;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.car;
	ctx->vsp=local+19;
	w=(*ftab[43])(ctx,1,local+18,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF1933;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.car;
	ctx->vsp=local+19;
	w=(pointer)FUNCALL(ctx,1,local+18); /*funcall*/
	local[18]= w;
	goto IF1934;
IF1933:
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.car;
IF1934:
	local[19]= makeint((eusinteger_t)0L);
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20]= (w)->c.cons.car;
	local[21]= fqv[198];
	ctx->vsp=local+22;
	w=(pointer)SEND(ctx,2,local+20); /*send*/
	local[20]= w;
	local[21]= fqv[31];
	ctx->vsp=local+22;
	w=(pointer)SEND(ctx,2,local+20); /*send*/
	local[20]= w;
WHL1936:
	local[21]= local[19];
	w = local[20];
	if ((eusinteger_t)local[21] >= (eusinteger_t)w) goto WHX1937;
	local[21]= local[13];
	local[22]= local[19];
	local[23]= local[17];
	ctx->vsp=local+24;
	w=(pointer)PLUS(ctx,2,local+22); /*+*/
	local[22]= w;
	local[23]= local[13];
	local[24]= local[19];
	local[25]= local[17];
	ctx->vsp=local+26;
	w=(pointer)PLUS(ctx,2,local+24); /*+*/
	local[24]= w;
	ctx->vsp=local+25;
	w=(pointer)ELT(ctx,2,local+23); /*elt*/
	local[23]= w;
	local[24]= local[18];
	ctx->vsp=local+25;
	w=(*ftab[0])(ctx,1,local+24,&ftab[0],fqv[4]); /*float-vector-p*/
	if (w==NIL) goto IF1939;
	local[24]= local[18];
	local[25]= local[19];
	ctx->vsp=local+26;
	w=(pointer)ELT(ctx,2,local+24); /*elt*/
	local[24]= w;
	goto IF1940;
IF1939:
	local[24]= local[18];
IF1940:
	local[25]= local[11];
	local[26]= local[19];
	local[27]= local[17];
	ctx->vsp=local+28;
	w=(pointer)PLUS(ctx,2,local+26); /*+*/
	local[26]= w;
	ctx->vsp=local+27;
	w=(pointer)ELT(ctx,2,local+25); /*elt*/
	local[25]= w;
	ctx->vsp=local+26;
	w=(pointer)TIMES(ctx,2,local+24); /***/
	local[24]= w;
	ctx->vsp=local+25;
	w=(pointer)PLUS(ctx,2,local+23); /*+*/
	local[23]= w;
	ctx->vsp=local+24;
	w=(pointer)SETELT(ctx,3,local+21); /*setelt*/
	local[21]= local[19];
	ctx->vsp=local+22;
	w=(pointer)ADD1(ctx,1,local+21); /*1+*/
	local[19] = w;
	goto WHL1936;
WHX1937:
	local[21]= NIL;
BLK1938:
	w = NIL;
	local[17]= w;
	goto IF1932;
IF1931:
	local[17]= NIL;
IF1932:
	w = local[17];
	goto WHL1927;
WHX1928:
	local[16]= NIL;
BLK1929:
	w = NIL;
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(*ftab[43])(ctx,1,local+14,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto CON1942;
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)FUNCALL(ctx,1,local+14); /*funcall*/
	local[3] = w;
	local[14]= local[3];
	goto CON1941;
CON1942:
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)LISTP(ctx,1,local+14); /*listp*/
	if (w==NIL) goto CON1943;
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)EVAL(ctx,1,local+14); /*eval*/
	local[3] = w;
	local[14]= local[3];
	goto CON1941;
CON1943:
	local[14]= NIL;
CON1941:
	if (local[3]==NIL) goto IF1944;
	local[14]= local[3];
	local[15]= local[13];
	local[16]= local[13];
	ctx->vsp=local+17;
	w=(pointer)VPLUS(ctx,3,local+14); /*v+*/
	local[13] = w;
	local[14]= local[13];
	goto IF1945;
IF1944:
	local[14]= NIL;
IF1945:
	w = local[13];
	local[0]= w;
BLK1907:
	ctx->vsp=local; return(local[0]);}

/*:move-joints-avoidance*/
static pointer M1946cascaded_link_move_joints_avoidance(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1948:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[337], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY1949;
	local[1] = NIL;
KEY1949:
	if (n & (1<<1)) goto KEY1950;
	local[2] = NIL;
KEY1950:
	if (n & (1<<2)) goto KEY1951;
	local[27]= argv[0];
	local[28]= fqv[211];
	local[29]= local[1];
	ctx->vsp=local+30;
	w=(pointer)SEND(ctx,3,local+27); /*send*/
	local[3] = w;
KEY1951:
	if (n & (1<<3)) goto KEY1952;
	local[27]= loadglobal(fqv[5]);
	local[28]= local[3];
	ctx->vsp=local+29;
	w=(pointer)INSTANTIATE(ctx,2,local+27); /*instantiate*/
	local[27]= w;
	local[28]= makeint((eusinteger_t)1L);
	ctx->vsp=local+29;
	w=(*ftab[36])(ctx,2,local+27,&ftab[36],fqv[243]); /*fill*/
	local[4] = w;
KEY1952:
	if (n & (1<<4)) goto KEY1953;
	local[5] = NIL;
KEY1953:
	if (n & (1<<5)) goto KEY1954;
	local[6] = makeflt(9.9999999999999950039964e-03);
KEY1954:
	if (n & (1<<6)) goto KEY1955;
	local[7] = makeflt(1.0000000000000000000000e+00);
KEY1955:
	if (n & (1<<7)) goto KEY1956;
	local[8] = makeint((eusinteger_t)200L);
KEY1956:
	if (n & (1<<8)) goto KEY1957;
	local[9] = makeflt(1.0000000000000000000000e+00);
KEY1957:
	if (n & (1<<9)) goto KEY1958;
	local[10] = makeflt(1.0000000000000000000000e+00);
KEY1958:
	if (n & (1<<10)) goto KEY1959;
	local[27]= argv[0];
	local[28]= fqv[338];
	local[29]= local[2];
	local[30]= fqv[339];
	local[31]= fqv[339];
	w = local[0];
	w=memq(local[31],w);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[31]= (w)->c.cons.car;
	local[32]= fqv[340];
	local[33]= fqv[341];
	w = local[0];
	w=memq(local[33],w);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[33]= (w)->c.cons.car;
	ctx->vsp=local+34;
	w=(pointer)SEND(ctx,7,local+27); /*send*/
	local[11] = w;
KEY1959:
	if (n & (1<<11)) goto KEY1960;
	local[12] = makeflt(0.0000000000000000000000e+00);
KEY1960:
	if (n & (1<<12)) goto KEY1961;
	local[13] = NIL;
KEY1961:
	if (n & (1<<13)) goto KEY1962;
	local[14] = NIL;
KEY1962:
	if (n & (1<<14)) goto KEY1963;
	local[15] = fqv[33];
KEY1963:
	if (n & (1<<15)) goto KEY1964;
	local[16] = NIL;
KEY1964:
	if (n & (1<<16)) goto KEY1965;
	local[17] = NIL;
KEY1965:
	if (n & (1<<17)) goto KEY1966;
	local[18] = NIL;
KEY1966:
	if (n & (1<<18)) goto KEY1967;
	local[27]= loadglobal(fqv[5]);
	local[28]= local[3];
	ctx->vsp=local+29;
	w=(pointer)INSTANTIATE(ctx,2,local+27); /*instantiate*/
	local[19] = w;
KEY1967:
	if (n & (1<<19)) goto KEY1968;
	local[27]= loadglobal(fqv[5]);
	local[28]= local[3];
	ctx->vsp=local+29;
	w=(pointer)INSTANTIATE(ctx,2,local+27); /*instantiate*/
	local[20] = w;
KEY1968:
	if (n & (1<<20)) goto KEY1969;
	local[27]= loadglobal(fqv[5]);
	local[28]= local[3];
	ctx->vsp=local+29;
	w=(pointer)INSTANTIATE(ctx,2,local+27); /*instantiate*/
	local[21] = w;
KEY1969:
	if (n & (1<<21)) goto KEY1970;
	local[27]= loadglobal(fqv[5]);
	local[28]= local[3];
	ctx->vsp=local+29;
	w=(pointer)INSTANTIATE(ctx,2,local+27); /*instantiate*/
	local[22] = w;
KEY1970:
	if (n & (1<<22)) goto KEY1971;
	local[27]= local[3];
	local[28]= local[3];
	ctx->vsp=local+29;
	w=(*ftab[23])(ctx,2,local+27,&ftab[23],fqv[166]); /*make-matrix*/
	local[23] = w;
KEY1971:
	if (n & (1<<23)) goto KEY1972;
	local[27]= local[3];
	local[28]= local[3];
	ctx->vsp=local+29;
	w=(*ftab[23])(ctx,2,local+27,&ftab[23],fqv[166]); /*make-matrix*/
	local[24] = w;
KEY1972:
	if (n & (1<<24)) goto KEY1973;
	local[25] = NIL;
KEY1973:
	if (n & (1<<25)) goto KEY1974;
	local[26] = NIL;
KEY1974:
	local[27]= NIL;
	local[28]= NIL;
	local[29]= NIL;
	local[30]= NIL;
	local[31]= NIL;
	local[32]= makeflt(0.0000000000000000000000e+00);
	local[33]= NIL;
	local[34]= NIL;
	local[35]= NIL;
	if (local[26]!=NIL) goto IF1975;
	local[36]= fqv[342];
	ctx->vsp=local+37;
	w=(*ftab[2])(ctx,1,local+36,&ftab[2],fqv[15]); /*warn*/
	w = T;
	ctx->vsp=local+36;
	local[0]=w;
	goto BLK1947;
	goto IF1976;
IF1975:
	local[36]= NIL;
IF1976:
	if (local[25]==NIL) goto IF1977;
	w = local[25];
	if (!!iscons(w)) goto IF1977;
	local[36]= local[25];
	ctx->vsp=local+37;
	w=(pointer)LIST(ctx,1,local+36); /*list*/
	local[25] = w;
	local[36]= local[25];
	goto IF1978;
IF1977:
	local[36]= NIL;
IF1978:
	if (local[25]==NIL) goto IF1979;
	local[36]= fqv[202];
	w = local[25];
	if (memq(local[36],w)!=NIL) goto IF1979;
	local[36]= fqv[343];
	ctx->vsp=local+37;
	w=(*ftab[2])(ctx,1,local+36,&ftab[2],fqv[15]); /*warn*/
	local[36]= NIL;
	local[37]= local[1];
	local[38]= fqv[198];
	ctx->vsp=local+39;
	w=(*ftab[18])(ctx,2,local+37,&ftab[18],fqv[128]); /*send-all*/
	local[37]= w;
WHL1982:
	if (local[37]==NIL) goto WHX1983;
	w=local[37];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[38]= (w)->c.cons.car;
	w=local[37];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[37] = (w)->c.cons.cdr;
	w = local[38];
	local[36] = w;
	local[38]= local[36];
	local[39]= fqv[20];
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,2,local+38); /*send*/
	local[38]= w;
	local[39]= local[38];
	ctx->vsp=local+40;
	w=(pointer)VECTORP(ctx,1,local+39); /*vectorp*/
	if (w==NIL) goto IF1986;
	local[39]= makeint((eusinteger_t)0L);
	local[40]= local[38];
	ctx->vsp=local+41;
	w=(pointer)LENGTH(ctx,1,local+40); /*length*/
	local[40]= w;
WHL1989:
	local[41]= local[39];
	w = local[40];
	if ((eusinteger_t)local[41] >= (eusinteger_t)w) goto WHX1990;
	local[41]= fqv[344];
	local[42]= local[38];
	local[43]= local[39];
	ctx->vsp=local+44;
	w=(pointer)ELT(ctx,2,local+42); /*elt*/
	local[42]= w;
	ctx->vsp=local+43;
	w=(*ftab[2])(ctx,2,local+41,&ftab[2],fqv[15]); /*warn*/
	local[41]= local[39];
	ctx->vsp=local+42;
	w=(pointer)ADD1(ctx,1,local+41); /*1+*/
	local[39] = w;
	goto WHL1989;
WHX1990:
	local[41]= NIL;
BLK1991:
	w = NIL;
	local[39]= w;
	goto IF1987;
IF1986:
	local[39]= fqv[345];
	local[40]= local[38];
	ctx->vsp=local+41;
	w=(*ftab[2])(ctx,2,local+39,&ftab[2],fqv[15]); /*warn*/
	local[39]= w;
IF1987:
	w = local[39];
	goto WHL1982;
WHX1983:
	local[38]= NIL;
BLK1984:
	w = NIL;
	local[36]= fqv[346];
	ctx->vsp=local+37;
	w=(*ftab[2])(ctx,1,local+36,&ftab[2],fqv[15]); /*warn*/
	local[36]= fqv[347];
	ctx->vsp=local+37;
	w=(*ftab[2])(ctx,1,local+36,&ftab[2],fqv[15]); /*warn*/
	local[36]= NIL;
	local[37]= local[1];
	local[38]= fqv[198];
	ctx->vsp=local+39;
	w=(*ftab[18])(ctx,2,local+37,&ftab[18],fqv[128]); /*send-all*/
	local[37]= w;
WHL1993:
	if (local[37]==NIL) goto WHX1994;
	w=local[37];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[38]= (w)->c.cons.car;
	w=local[37];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[37] = (w)->c.cons.cdr;
	w = local[38];
	local[36] = w;
	local[38]= local[36];
	local[39]= fqv[22];
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,2,local+38); /*send*/
	local[38]= w;
	local[39]= local[38];
	ctx->vsp=local+40;
	w=(pointer)VECTORP(ctx,1,local+39); /*vectorp*/
	if (w==NIL) goto IF1997;
	local[39]= makeint((eusinteger_t)0L);
	local[40]= local[38];
	ctx->vsp=local+41;
	w=(pointer)LENGTH(ctx,1,local+40); /*length*/
	local[40]= w;
WHL2000:
	local[41]= local[39];
	w = local[40];
	if ((eusinteger_t)local[41] >= (eusinteger_t)w) goto WHX2001;
	local[41]= fqv[348];
	local[42]= local[38];
	local[43]= local[39];
	ctx->vsp=local+44;
	w=(pointer)ELT(ctx,2,local+42); /*elt*/
	local[42]= w;
	ctx->vsp=local+43;
	w=(*ftab[2])(ctx,2,local+41,&ftab[2],fqv[15]); /*warn*/
	local[41]= local[39];
	ctx->vsp=local+42;
	w=(pointer)ADD1(ctx,1,local+41); /*1+*/
	local[39] = w;
	goto WHL2000;
WHX2001:
	local[41]= NIL;
BLK2002:
	w = NIL;
	local[39]= w;
	goto IF1998;
IF1997:
	local[39]= fqv[349];
	local[40]= local[38];
	ctx->vsp=local+41;
	w=(*ftab[2])(ctx,2,local+39,&ftab[2],fqv[15]); /*warn*/
	local[39]= w;
IF1998:
	w = local[39];
	goto WHL1993;
WHX1994:
	local[38]= NIL;
BLK1995:
	w = NIL;
	local[36]= fqv[350];
	ctx->vsp=local+37;
	w=(*ftab[2])(ctx,1,local+36,&ftab[2],fqv[15]); /*warn*/
	local[36]= fqv[351];
	ctx->vsp=local+37;
	w=(*ftab[2])(ctx,1,local+36,&ftab[2],fqv[15]); /*warn*/
	local[36]= NIL;
	local[37]= local[1];
	local[38]= fqv[198];
	ctx->vsp=local+39;
	w=(*ftab[18])(ctx,2,local+37,&ftab[18],fqv[128]); /*send-all*/
	local[37]= w;
WHL2004:
	if (local[37]==NIL) goto WHX2005;
	w=local[37];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[38]= (w)->c.cons.car;
	w=local[37];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[37] = (w)->c.cons.cdr;
	w = local[38];
	local[36] = w;
	local[38]= local[36];
	local[39]= fqv[23];
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,2,local+38); /*send*/
	local[38]= w;
	local[39]= local[38];
	ctx->vsp=local+40;
	w=(pointer)VECTORP(ctx,1,local+39); /*vectorp*/
	if (w==NIL) goto IF2008;
	local[39]= makeint((eusinteger_t)0L);
	local[40]= local[38];
	ctx->vsp=local+41;
	w=(pointer)LENGTH(ctx,1,local+40); /*length*/
	local[40]= w;
WHL2011:
	local[41]= local[39];
	w = local[40];
	if ((eusinteger_t)local[41] >= (eusinteger_t)w) goto WHX2012;
	local[41]= fqv[352];
	local[42]= local[38];
	local[43]= local[39];
	ctx->vsp=local+44;
	w=(pointer)ELT(ctx,2,local+42); /*elt*/
	local[42]= w;
	ctx->vsp=local+43;
	w=(*ftab[2])(ctx,2,local+41,&ftab[2],fqv[15]); /*warn*/
	local[41]= local[39];
	ctx->vsp=local+42;
	w=(pointer)ADD1(ctx,1,local+41); /*1+*/
	local[39] = w;
	goto WHL2011;
WHX2012:
	local[41]= NIL;
BLK2013:
	w = NIL;
	local[39]= w;
	goto IF2009;
IF2008:
	local[39]= fqv[353];
	local[40]= local[38];
	ctx->vsp=local+41;
	w=(*ftab[2])(ctx,2,local+39,&ftab[2],fqv[15]); /*warn*/
	local[39]= w;
IF2009:
	w = local[39];
	goto WHL2004;
WHX2005:
	local[38]= NIL;
BLK2006:
	w = NIL;
	local[36]= fqv[354];
	ctx->vsp=local+37;
	w=(*ftab[2])(ctx,1,local+36,&ftab[2],fqv[15]); /*warn*/
	local[36]= w;
	goto IF1980;
IF1979:
	local[36]= NIL;
IF1980:
	local[36]= argv[0];
	local[37]= fqv[355];
	local[38]= local[2];
	local[39]= fqv[274];
	local[40]= local[4];
	local[41]= fqv[356];
	local[42]= local[3];
	local[43]= fqv[357];
	local[44]= local[7];
	local[45]= fqv[358];
	local[46]= local[1];
	local[47]= fqv[341];
	local[48]= local[25];
	local[49]= fqv[284];
	local[50]= local[19];
	local[51]= fqv[359];
	local[52]= local[21];
	local[53]= fqv[360];
	local[54]= local[17];
	ctx->vsp=local+55;
	w=(pointer)SEND(ctx,19,local+36); /*send*/
	local[4] = w;
	local[36]= (pointer)get_sym_func(fqv[289]);
	local[37]= argv[0];
	local[38]= fqv[361];
	local[39]= local[26];
	local[40]= fqv[274];
	local[41]= local[4];
	local[42]= local[0];
	ctx->vsp=local+43;
	w=(pointer)APPLY(ctx,7,local+36); /*apply*/
	local[34] = w;
	local[36]= local[23]->c.obj.iv[1];
	local[37]= makeint((eusinteger_t)0L);
	ctx->vsp=local+38;
	w=(*ftab[36])(ctx,2,local+36,&ftab[36],fqv[243]); /*fill*/
	local[36]= makeint((eusinteger_t)0L);
	local[37]= local[3];
WHL2015:
	local[38]= local[36];
	w = local[37];
	if ((eusinteger_t)local[38] >= (eusinteger_t)w) goto WHX2016;
	local[38]= local[23];
	local[39]= local[36];
	local[40]= local[36];
	local[41]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+42;
	w=(pointer)ASET(ctx,4,local+38); /*aset*/
	local[38]= local[36];
	ctx->vsp=local+39;
	w=(pointer)ADD1(ctx,1,local+38); /*1+*/
	local[36] = w;
	goto WHL2015;
WHX2016:
	local[38]= NIL;
BLK2017:
	w = NIL;
	local[36]= local[23];
	local[37]= local[34];
	local[38]= local[26];
	local[39]= local[24];
	ctx->vsp=local+40;
	w=(pointer)MATTIMES(ctx,3,local+37); /*m**/
	local[37]= w;
	local[38]= local[23];
	ctx->vsp=local+39;
	w=(*ftab[44])(ctx,3,local+36,&ftab[44],fqv[362]); /*m-*/
	local[35] = w;
	local[36]= argv[0];
	local[37]= fqv[150];
	local[38]= fqv[303];
	local[39]= NIL;
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,4,local+36); /*send*/
	local[36]= argv[0];
	local[37]= fqv[150];
	local[38]= fqv[304];
	local[39]= NIL;
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,4,local+36); /*send*/
	if (local[11]==NIL) goto IF2018;
	local[36]= local[8];
	local[37]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+38;
	w=(pointer)GREATERP(ctx,2,local+36); /*>*/
	if (w==NIL) goto IF2018;
	local[36]= local[10];
	local[37]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+38;
	w=(pointer)GREATERP(ctx,2,local+36); /*>*/
	if (w!=NIL) goto OR2020;
	local[36]= local[9];
	local[37]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+38;
	w=(pointer)GREATERP(ctx,2,local+36); /*>*/
	if (w!=NIL) goto OR2020;
	goto IF2018;
OR2020:
	local[36]= (pointer)get_sym_func(fqv[289]);
	local[37]= argv[0];
	local[38]= fqv[363];
	local[39]= fqv[364];
	local[40]= local[8];
	local[41]= fqv[365];
	local[42]= local[9];
	local[43]= fqv[366];
	local[44]= local[10];
	local[45]= fqv[274];
	local[46]= local[4];
	local[47]= fqv[367];
	local[48]= local[11];
	local[49]= local[0];
	ctx->vsp=local+50;
	w=(pointer)APPLY(ctx,14,local+36); /*apply*/
	local[31] = w;
	local[36]= argv[0];
	local[37]= fqv[184];
	local[38]= fqv[253];
	ctx->vsp=local+39;
	w=(pointer)SEND(ctx,3,local+36); /*send*/
	local[36]= w;
	local[37]= makeint((eusinteger_t)0L);
	ctx->vsp=local+38;
	w=(pointer)ELT(ctx,2,local+36); /*elt*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[33] = (w)->c.cons.car;
	local[36]= local[10];
	local[37]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+38;
	w=(pointer)LSEQP(ctx,2,local+36); /*<=*/
	if (w==NIL) goto CON2022;
	local[36]= makeflt(0.0000000000000000000000e+00);
	goto CON2021;
CON2022:
	local[36]= local[33];
	local[37]= makeflt(9.9999999999999977795540e-02);
	local[38]= local[8];
	ctx->vsp=local+39;
	w=(pointer)TIMES(ctx,2,local+37); /***/
	local[37]= w;
	ctx->vsp=local+38;
	w=(pointer)LESSP(ctx,2,local+36); /*<*/
	if (w==NIL) goto CON2023;
	local[36]= makeflt(1.0000000000000000000000e+00);
	goto CON2021;
CON2023:
	local[36]= local[33];
	local[37]= local[8];
	ctx->vsp=local+38;
	w=(pointer)LESSP(ctx,2,local+36); /*<*/
	if (w==NIL) goto CON2024;
	local[36]= local[8];
	local[37]= local[33];
	ctx->vsp=local+38;
	w=(pointer)MINUS(ctx,2,local+36); /*-*/
	local[36]= w;
	local[37]= makeflt(8.9999999999999991118216e-01);
	local[38]= local[8];
	ctx->vsp=local+39;
	w=(pointer)TIMES(ctx,2,local+37); /***/
	local[37]= w;
	ctx->vsp=local+38;
	w=(pointer)QUOTIENT(ctx,2,local+36); /*/*/
	local[36]= w;
	goto CON2021;
CON2024:
	local[36]= makeflt(0.0000000000000000000000e+00);
	goto CON2021;
CON2025:
	local[36]= NIL;
CON2021:
	local[32] = local[36];
	if (local[25]==NIL) goto IF2026;
	local[36]= fqv[202];
	w = local[25];
	if (memq(local[36],w)!=NIL) goto IF2026;
	local[36]= loadglobal(fqv[5]);
	local[37]= (pointer)get_sym_func(fqv[49]);
	local[38]= local[31];
	ctx->vsp=local+39;
	w=(pointer)MAP(ctx,3,local+36); /*map*/
	local[36]= w;
	local[37]= fqv[368];
	ctx->vsp=local+38;
	w=(*ftab[33])(ctx,2,local+36,&ftab[33],fqv[234]); /*format-array*/
	local[36]= fqv[369];
	local[37]= local[32];
	ctx->vsp=local+38;
	w=(*ftab[2])(ctx,2,local+36,&ftab[2],fqv[15]); /*warn*/
	local[36]= w;
	goto IF2027;
IF2026:
	local[36]= NIL;
IF2027:
	goto IF2019;
IF2018:
	local[36]= NIL;
IF2019:
	local[36]= argv[0];
	local[37]= fqv[370];
	local[38]= local[2];
	local[39]= fqv[358];
	local[40]= local[1];
	local[41]= fqv[371];
	local[42]= local[6];
	local[43]= fqv[341];
	local[44]= local[25];
	local[45]= fqv[335];
	local[46]= local[12];
	local[47]= fqv[334];
	local[48]= local[13];
	local[49]= fqv[332];
	local[50]= local[14];
	local[51]= fqv[372];
	local[52]= local[16];
	local[53]= fqv[333];
	local[54]= NIL;
	local[55]= fqv[373];
	local[56]= local[15];
	local[57]= fqv[274];
	local[58]= local[4];
	local[59]= fqv[356];
	local[60]= local[3];
	local[61]= fqv[374];
	local[62]= local[5];
	local[63]= fqv[375];
	local[64]= local[22];
	local[65]= fqv[376];
	local[66]= local[18];
	ctx->vsp=local+67;
	w=(pointer)SEND(ctx,31,local+36); /*send*/
	local[22] = w;
	local[36]= argv[0];
	local[37]= fqv[184];
	local[38]= fqv[303];
	ctx->vsp=local+39;
	w=(pointer)SEND(ctx,3,local+36); /*send*/
	if (w==NIL) goto IF2028;
	local[36]= local[22];
	local[37]= argv[0];
	local[38]= fqv[184];
	local[39]= fqv[303];
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,3,local+37); /*send*/
	local[37]= w;
	local[38]= local[22];
	ctx->vsp=local+39;
	w=(pointer)VPLUS(ctx,3,local+36); /*v+*/
	local[36]= w;
	goto IF2029;
IF2028:
	local[36]= NIL;
IF2029:
	local[36]= (pointer)get_sym_func(fqv[34]);
	local[37]= argv[0];
	local[38]= loadglobal(fqv[377]);
	local[39]= fqv[378];
	local[40]= argv[2];
	local[41]= fqv[358];
	local[42]= local[1];
	local[43]= fqv[374];
	local[44]= local[22];
	local[45]= fqv[379];
	local[46]= local[31];
	local[47]= fqv[380];
	local[48]= local[32];
	local[49]= fqv[274];
	local[50]= local[4];
	local[51]= fqv[381];
	local[52]= local[34];
	local[53]= fqv[382];
	local[54]= local[35];
	local[55]= local[0];
	ctx->vsp=local+56;
	w=(pointer)APPLY(ctx,20,local+36); /*apply*/
	w = T;
	local[0]= w;
BLK1947:
	ctx->vsp=local; return(local[0]);}

/*:inverse-kinematics-args*/
static pointer M2030cascaded_link_inverse_kinematics_args(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST2032:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[383], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY2033;
	local[1] = NIL;
KEY2033:
	if (n & (1<<1)) goto KEY2034;
	local[2] = NIL;
KEY2034:
	if (n & (1<<2)) goto KEY2035;
	local[3] = NIL;
KEY2035:
	if (n & (1<<3)) goto KEY2036;
	local[4] = NIL;
KEY2036:
	local[5]= argv[0];
	local[6]= fqv[211];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[210];
	local[8]= local[2];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= w;
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)PLUS(ctx,2,local+6); /*+*/
	local[6]= w;
	local[7]= local[6];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(*ftab[23])(ctx,2,local+7,&ftab[23],fqv[166]); /*make-matrix*/
	local[7]= w;
	local[8]= local[5];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(*ftab[23])(ctx,2,local+8,&ftab[23],fqv[166]); /*make-matrix*/
	local[8]= w;
	local[9]= local[5];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[23])(ctx,2,local+9,&ftab[23],fqv[166]); /*make-matrix*/
	local[9]= w;
	local[10]= local[5];
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(*ftab[23])(ctx,2,local+10,&ftab[23],fqv[166]); /*make-matrix*/
	local[10]= w;
	local[11]= local[6];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(*ftab[23])(ctx,2,local+11,&ftab[23],fqv[166]); /*make-matrix*/
	local[11]= w;
	local[12]= local[6];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(*ftab[23])(ctx,2,local+12,&ftab[23],fqv[166]); /*make-matrix*/
	local[12]= w;
	local[13]= local[5];
	local[14]= local[6];
	ctx->vsp=local+15;
	w=(*ftab[23])(ctx,2,local+13,&ftab[23],fqv[166]); /*make-matrix*/
	local[13]= w;
	local[14]= local[5];
	local[15]= local[5];
	ctx->vsp=local+16;
	w=(*ftab[23])(ctx,2,local+14,&ftab[23],fqv[166]); /*make-matrix*/
	local[14]= w;
	local[15]= local[5];
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(*ftab[23])(ctx,2,local+15,&ftab[23],fqv[166]); /*make-matrix*/
	local[15]= w;
	local[16]= local[6];
	local[17]= local[6];
	ctx->vsp=local+18;
	w=(*ftab[23])(ctx,2,local+16,&ftab[23],fqv[166]); /*make-matrix*/
	local[16]= w;
	local[17]= local[6];
	local[18]= local[5];
	ctx->vsp=local+19;
	w=(*ftab[23])(ctx,2,local+17,&ftab[23],fqv[166]); /*make-matrix*/
	local[17]= w;
	local[18]= loadglobal(fqv[5]);
	local[19]= makeint((eusinteger_t)0L);
	ctx->vsp=local+20;
	w=(pointer)INSTANTIATE(ctx,2,local+18); /*instantiate*/
	local[18]= w;
	local[19]= loadglobal(fqv[5]);
	local[20]= makeint((eusinteger_t)1L);
	ctx->vsp=local+21;
	w=(pointer)INSTANTIATE(ctx,2,local+19); /*instantiate*/
	local[19]= w;
	local[20]= loadglobal(fqv[5]);
	local[21]= makeint((eusinteger_t)2L);
	ctx->vsp=local+22;
	w=(pointer)INSTANTIATE(ctx,2,local+20); /*instantiate*/
	local[20]= w;
	local[21]= loadglobal(fqv[5]);
	local[22]= makeint((eusinteger_t)3L);
	ctx->vsp=local+23;
	w=(pointer)INSTANTIATE(ctx,2,local+21); /*instantiate*/
	local[21]= w;
	local[22]= loadglobal(fqv[5]);
	local[23]= makeint((eusinteger_t)3L);
	ctx->vsp=local+24;
	w=(pointer)INSTANTIATE(ctx,2,local+22); /*instantiate*/
	local[22]= w;
	local[23]= loadglobal(fqv[5]);
	local[24]= makeint((eusinteger_t)3L);
	ctx->vsp=local+25;
	w=(pointer)INSTANTIATE(ctx,2,local+23); /*instantiate*/
	local[23]= w;
	local[24]= loadglobal(fqv[5]);
	local[25]= makeint((eusinteger_t)3L);
	ctx->vsp=local+26;
	w=(pointer)INSTANTIATE(ctx,2,local+24); /*instantiate*/
	local[24]= w;
	local[25]= makeint((eusinteger_t)3L);
	local[26]= makeint((eusinteger_t)3L);
	ctx->vsp=local+27;
	w=(*ftab[23])(ctx,2,local+25,&ftab[23],fqv[166]); /*make-matrix*/
	local[25]= w;
	local[26]= loadglobal(fqv[5]);
	local[27]= local[6];
	ctx->vsp=local+28;
	w=(pointer)INSTANTIATE(ctx,2,local+26); /*instantiate*/
	local[26]= w;
	local[27]= NIL;
	local[28]= loadglobal(fqv[5]);
	local[29]= local[5];
	ctx->vsp=local+30;
	w=(pointer)INSTANTIATE(ctx,2,local+28); /*instantiate*/
	local[28]= w;
	local[29]= loadglobal(fqv[5]);
	local[30]= local[5];
	ctx->vsp=local+31;
	w=(pointer)INSTANTIATE(ctx,2,local+29); /*instantiate*/
	local[29]= w;
	local[30]= loadglobal(fqv[5]);
	local[31]= makeint((eusinteger_t)3L);
	ctx->vsp=local+32;
	w=(pointer)INSTANTIATE(ctx,2,local+30); /*instantiate*/
	local[30]= w;
	local[31]= loadglobal(fqv[5]);
	local[32]= makeint((eusinteger_t)3L);
	ctx->vsp=local+33;
	w=(pointer)INSTANTIATE(ctx,2,local+31); /*instantiate*/
	local[31]= w;
	local[32]= makeint((eusinteger_t)0L);
	local[33]= local[2];
	ctx->vsp=local+34;
	w=(pointer)LENGTH(ctx,1,local+33); /*length*/
	local[33]= w;
WHL2038:
	local[34]= local[32];
	w = local[33];
	if ((eusinteger_t)local[34] >= (eusinteger_t)w) goto WHX2039;
	local[34]= loadglobal(fqv[5]);
	local[35]= argv[0];
	local[36]= fqv[210];
	local[37]= local[2];
	local[38]= local[32];
	ctx->vsp=local+39;
	w=(pointer)ELT(ctx,2,local+37); /*elt*/
	local[37]= w;
	local[38]= local[3];
	local[39]= local[32];
	ctx->vsp=local+40;
	w=(pointer)ELT(ctx,2,local+38); /*elt*/
	local[38]= w;
	ctx->vsp=local+39;
	w=(pointer)SEND(ctx,4,local+35); /*send*/
	local[35]= w;
	ctx->vsp=local+36;
	w=(pointer)INSTANTIATE(ctx,2,local+34); /*instantiate*/
	local[34]= w;
	w = local[27];
	ctx->vsp=local+35;
	local[27] = cons(ctx,local[34],w);
	local[34]= local[32];
	ctx->vsp=local+35;
	w=(pointer)ADD1(ctx,1,local+34); /*1+*/
	local[32] = w;
	goto WHL2038;
WHX2039:
	local[34]= NIL;
BLK2040:
	w = NIL;
	local[32]= local[27];
	ctx->vsp=local+33;
	w=(pointer)NREVERSE(ctx,1,local+32); /*nreverse*/
	local[32]= fqv[384];
	local[33]= local[6];
	local[34]= fqv[356];
	local[35]= local[5];
	local[36]= fqv[273];
	local[37]= local[7];
	local[38]= fqv[262];
	local[39]= local[8];
	local[40]= fqv[263];
	local[41]= local[9];
	local[42]= fqv[264];
	local[43]= local[10];
	local[44]= fqv[265];
	local[45]= local[11];
	local[46]= fqv[266];
	local[47]= local[12];
	local[48]= fqv[267];
	local[49]= local[13];
	local[50]= fqv[268];
	local[51]= local[14];
	local[52]= fqv[269];
	local[53]= local[15];
	local[54]= fqv[271];
	local[55]= local[16];
	local[56]= fqv[270];
	local[57]= local[17];
	local[58]= fqv[275];
	local[59]= local[18];
	local[60]= fqv[276];
	local[61]= local[19];
	local[62]= fqv[277];
	local[63]= local[20];
	local[64]= fqv[278];
	local[65]= local[21];
	local[66]= fqv[279];
	local[67]= local[22];
	local[68]= fqv[280];
	local[69]= local[23];
	local[70]= fqv[281];
	local[71]= local[24];
	local[72]= fqv[282];
	local[73]= local[25];
	local[74]= fqv[283];
	local[75]= local[26];
	local[76]= fqv[385];
	local[77]= local[27];
	local[78]= fqv[284];
	local[79]= local[28];
	local[80]= fqv[285];
	local[81]= local[29];
	local[82]= fqv[286];
	local[83]= local[30];
	local[84]= fqv[287];
	local[85]= local[31];
	ctx->vsp=local+86;
	w=(pointer)LIST(ctx,54,local+32); /*list*/
	local[0]= w;
BLK2031:
	ctx->vsp=local; return(local[0]);}

/*:draw-collision-debug-view*/
static pointer M2041cascaded_link_draw_collision_debug_view(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[184];
	local[2]= fqv[291];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	if (w==NIL) goto IF2043;
	local[0]= loadglobal(fqv[386]);
	local[1]= fqv[387];
	local[2]= fqv[388];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= loadglobal(fqv[386]);
	local[2]= fqv[387];
	local[3]= fqv[389];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= loadglobal(fqv[386]);
	local[3]= fqv[387];
	local[4]= fqv[189];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= fqv[184];
	local[5]= fqv[291];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= fqv[184];
	local[6]= fqv[253];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	local[5]= NIL;
	local[6]= loadglobal(fqv[386]);
	local[7]= fqv[387];
	local[8]= fqv[189];
	local[9]= fqv[390];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= loadglobal(fqv[386]);
	local[7]= fqv[387];
	local[8]= fqv[388];
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= loadglobal(fqv[386]);
	local[7]= fqv[387];
	local[8]= fqv[389];
	local[9]= makeint((eusinteger_t)3L);
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
WHL2046:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX2047;
	local[8]= argv[0];
	local[9]= fqv[184];
	local[10]= fqv[253];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,3,local+8); /*send*/
	local[8]= w;
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[5] = w;
	if (local[5]!=NIL) goto IF2049;
	local[8]= fqv[391];
	local[9]= local[3];
	local[10]= fqv[3];
	ctx->vsp=local+11;
	w=(*ftab[18])(ctx,2,local+9,&ftab[18],fqv[128]); /*send-all*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(*ftab[2])(ctx,2,local+8,&ftab[2],fqv[15]); /*warn*/
	w = NIL;
	ctx->vsp=local+8;
	local[8]=w;
	goto BLK2048;
	goto IF2050;
IF2049:
	local[8]= NIL;
IF2050:
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[189];
	local[11]= fqv[392];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[388];
	local[11]= makeint((eusinteger_t)1L);
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[389];
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[393];
	local[11]= local[5];
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= fqv[394];
	local[13]= T;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,6,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[393];
	local[11]= local[5];
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= fqv[394];
	local[13]= T;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,6,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[395];
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
	local[13]= fqv[394];
	local[14]= T;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,7,local+8); /*send*/
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= makeint((eusinteger_t)200L);
	ctx->vsp=local+10;
	w=(pointer)LESSP(ctx,2,local+8); /*<*/
	if (w==NIL) goto IF2051;
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[388];
	local[11]= makeint((eusinteger_t)4L);
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[389];
	local[11]= makeint((eusinteger_t)6L);
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= w;
	goto IF2052;
IF2051:
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[388];
	local[11]= makeint((eusinteger_t)2L);
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[389];
	local[11]= makeint((eusinteger_t)3L);
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= w;
IF2052:
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[189];
	local[11]= local[4];
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,3,local+11,&ftab[8],fqv[81]); /*eps=*/
	if (w==NIL) goto IF2053;
	local[11]= fqv[396];
	goto IF2054;
IF2053:
	local[11]= fqv[397];
IF2054:
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,4,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[395];
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
	local[13]= fqv[394];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,7,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[393];
	local[11]= local[5];
	local[12]= makeint((eusinteger_t)1L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= fqv[394];
	local[13]= NIL;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,6,local+8); /*send*/
	local[8]= loadglobal(fqv[386]);
	local[9]= fqv[387];
	local[10]= fqv[393];
	local[11]= local[5];
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	local[12]= fqv[394];
	local[13]= NIL;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,6,local+8); /*send*/
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+10;
	w=(pointer)LSEQP(ctx,2,local+8); /*<=*/
	if (w==NIL) goto IF2055;
	local[8]= NIL;
	local[9]= local[3];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(*ftab[38])(ctx,1,local+10,&ftab[38],fqv[292]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
WHL2058:
	if (local[9]==NIL) goto WHX2059;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9] = (w)->c.cons.cdr;
	w = local[10];
	local[8] = w;
	local[10]= local[8];
	local[11]= loadglobal(fqv[214]);
	ctx->vsp=local+12;
	w=(pointer)DERIVEDP(ctx,2,local+10); /*derivedp*/
	if (w==NIL) goto IF2062;
	local[10]= local[8];
	local[11]= fqv[149];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,2,local+10); /*send*/
	local[10]= w;
	if (fqv[120]!=local[10]) goto IF2062;
	local[10]= *(ovafptr(local[8],fqv[398]));
	local[11]= fqv[122];
	ctx->vsp=local+12;
	w=(*ftab[18])(ctx,2,local+10,&ftab[18],fqv[128]); /*send-all*/
	local[10]= w;
	goto IF2063;
IF2062:
	local[10]= NIL;
IF2063:
	local[10]= NIL;
	local[11]= local[8];
	local[12]= fqv[399];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.cdr;
WHL2065:
	if (local[11]==NIL) goto WHX2066;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11] = (w)->c.cons.cdr;
	w = local[12];
	local[10] = w;
	local[12]= loadglobal(fqv[386]);
	local[13]= fqv[387];
	local[14]= fqv[395];
	local[15]= *(ovafptr(local[10],fqv[400]));
	local[16]= *(ovafptr(local[10],fqv[401]));
	local[17]= fqv[394];
	local[18]= T;
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,7,local+12); /*send*/
	goto WHL2065;
WHX2066:
	local[12]= NIL;
BLK2067:
	w = NIL;
	goto WHL2058;
WHX2059:
	local[10]= NIL;
BLK2060:
	w = NIL;
	local[8]= w;
	goto IF2056;
IF2055:
	local[8]= NIL;
IF2056:
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL2046;
WHX2047:
	local[8]= NIL;
BLK2048:
	w = NIL;
	local[6]= loadglobal(fqv[386]);
	local[7]= fqv[387];
	local[8]= fqv[388];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= loadglobal(fqv[386]);
	local[7]= fqv[387];
	local[8]= fqv[389];
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= loadglobal(fqv[386]);
	local[7]= fqv[387];
	local[8]= fqv[189];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[0]= w;
	goto IF2044;
IF2043:
	local[0]= NIL;
IF2044:
	w = local[0];
	local[0]= w;
BLK2042:
	ctx->vsp=local; return(local[0]);}

/*:inverse-kinematics-loop*/
static pointer M2069cascaded_link_inverse_kinematics_loop(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
RST2071:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-4);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[402], &argv[4], n-4, local+1, 1);
	if (n & (1<<0)) goto KEY2072;
	local[1] = makeint((eusinteger_t)1L);
KEY2072:
	if (n & (1<<1)) goto KEY2073;
	local[2] = makeint((eusinteger_t)0L);
KEY2073:
	if (n & (1<<2)) goto KEY2074;
	local[3] = NIL;
KEY2074:
	if (n & (1<<3)) goto KEY2075;
	local[4] = NIL;
KEY2075:
	if (n & (1<<4)) goto KEY2076;
	w = local[4];
	if (!!iscons(w)) goto CON2078;
	local[26]= T;
	goto CON2077;
CON2078:
	local[26]= local[4];
	ctx->vsp=local+27;
	w=(pointer)LENGTH(ctx,1,local+26); /*length*/
	local[26]= w;
	local[27]= fqv[209];
	local[28]= T;
	ctx->vsp=local+29;
	w=(*ftab[31])(ctx,3,local+26,&ftab[31],fqv[208]); /*make-list*/
	local[26]= w;
	goto CON2077;
CON2079:
	local[26]= NIL;
CON2077:
	local[5] = local[26];
KEY2076:
	if (n & (1<<5)) goto KEY2080;
	w = local[4];
	if (!!iscons(w)) goto CON2082;
	local[26]= T;
	goto CON2081;
CON2082:
	local[26]= local[4];
	ctx->vsp=local+27;
	w=(pointer)LENGTH(ctx,1,local+26); /*length*/
	local[26]= w;
	local[27]= fqv[209];
	local[28]= T;
	ctx->vsp=local+29;
	w=(*ftab[31])(ctx,3,local+26,&ftab[31],fqv[208]); /*make-list*/
	local[26]= w;
	goto CON2081;
CON2083:
	local[26]= NIL;
CON2081:
	local[6] = local[26];
KEY2080:
	if (n & (1<<6)) goto KEY2084;
	w = local[4];
	if (!!iscons(w)) goto CON2086;
	local[26]= makeint((eusinteger_t)1L);
	goto CON2085;
CON2086:
	local[26]= local[4];
	ctx->vsp=local+27;
	w=(pointer)LENGTH(ctx,1,local+26); /*length*/
	local[26]= w;
	local[27]= fqv[209];
	local[28]= makeint((eusinteger_t)1L);
	ctx->vsp=local+29;
	w=(*ftab[31])(ctx,3,local+26,&ftab[31],fqv[208]); /*make-list*/
	local[26]= w;
	goto CON2085;
CON2087:
	local[26]= NIL;
CON2085:
	local[7] = local[26];
KEY2084:
	if (n & (1<<7)) goto KEY2088;
	w = local[4];
	if (!!iscons(w)) goto CON2090;
	local[26]= makeint((eusinteger_t)1L);
	ctx->vsp=local+27;
	w=(*ftab[6])(ctx,1,local+26,&ftab[6],fqv[48]); /*deg2rad*/
	local[26]= w;
	goto CON2089;
CON2090:
	local[26]= local[4];
	ctx->vsp=local+27;
	w=(pointer)LENGTH(ctx,1,local+26); /*length*/
	local[26]= w;
	local[27]= fqv[209];
	local[28]= makeint((eusinteger_t)1L);
	ctx->vsp=local+29;
	w=(*ftab[6])(ctx,1,local+28,&ftab[6],fqv[48]); /*deg2rad*/
	local[28]= w;
	ctx->vsp=local+29;
	w=(*ftab[31])(ctx,3,local+26,&ftab[31],fqv[208]); /*make-list*/
	local[26]= w;
	goto CON2089;
CON2091:
	local[26]= NIL;
CON2089:
	local[8] = local[26];
KEY2088:
	if (n & (1<<8)) goto KEY2092;
	local[9] = makeflt(1.0000000000000000000000e+00);
KEY2092:
	if (n & (1<<9)) goto KEY2093;
	local[10] = makeflt(1.0000000000000000000000e+00);
KEY2093:
	if (n & (1<<10)) goto KEY2094;
	local[11] = NIL;
KEY2094:
	if (n & (1<<11)) goto KEY2095;
	local[12] = NIL;
KEY2095:
	if (n & (1<<12)) goto KEY2096;
	local[13] = NIL;
KEY2096:
	if (n & (1<<13)) goto KEY2097;
	local[14] = NIL;
KEY2097:
	if (n & (1<<14)) goto KEY2098;
	local[15] = NIL;
KEY2098:
	if (n & (1<<15)) goto KEY2099;
	local[16] = NIL;
KEY2099:
	if (n & (1<<16)) goto KEY2100;
	local[17] = makeflt(1.0000000000000000000000e+00);
KEY2100:
	if (n & (1<<17)) goto KEY2101;
	local[18] = NIL;
KEY2101:
	if (n & (1<<18)) goto KEY2102;
	local[19] = NIL;
KEY2102:
	if (n & (1<<19)) goto KEY2103;
	local[20] = fqv[33];
KEY2103:
	if (n & (1<<20)) goto KEY2104;
	local[21] = NIL;
KEY2104:
	if (n & (1<<21)) goto KEY2105;
	local[22] = makeflt(1.0000000000000000000000e+00);
KEY2105:
	if (n & (1<<22)) goto KEY2106;
	local[26]= local[1];
	local[27]= makeint((eusinteger_t)10L);
	ctx->vsp=local+28;
	w=(pointer)QUOTIENT(ctx,2,local+26); /*/*/
	local[23] = w;
KEY2106:
	if (n & (1<<23)) goto KEY2107;
	local[24] = NIL;
KEY2107:
	if (n & (1<<24)) goto KEY2108;
	local[25] = NIL;
KEY2108:
	if (local[18]==NIL) goto IF2109;
	local[26]= argv[0];
	local[27]= fqv[333];
	ctx->vsp=local+28;
	w=(pointer)SEND(ctx,2,local+26); /*send*/
	local[26]= w;
	goto IF2110;
IF2109:
	local[26]= NIL;
IF2110:
	local[26]= NIL;
	local[27]= NIL;
	local[28]= makeint((eusinteger_t)0L);
	local[29]= T;
	local[30]= local[0];
	local[31]= local[25];
	ctx->vsp=local+32;
	w=(pointer)NCONC(ctx,2,local+30); /*nconc*/
	local[30]= w;
	local[31]= fqv[403];
	w = local[0];
	w=memq(local[31],w);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[31]= (w)->c.cons.car;
	local[32]= fqv[404];
	w = local[0];
	w=memq(local[32],w);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[32]= (w)->c.cons.car;
	if (local[11]!=NIL) goto IF2111;
	local[33]= argv[0];
	local[34]= fqv[197];
	local[35]= local[3];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,3,local+33); /*send*/
	local[11] = w;
	local[33]= local[11];
	ctx->vsp=local+34;
	w=(pointer)LENGTH(ctx,1,local+33); /*length*/
	local[33]= w;
	local[34]= local[3];
	ctx->vsp=local+35;
	w=(pointer)LENGTH(ctx,1,local+34); /*length*/
	local[34]= w;
	ctx->vsp=local+35;
	w=(*ftab[24])(ctx,2,local+33,&ftab[24],fqv[171]); /*/=*/
	if (w==NIL) goto IF2113;
	local[33]= argv[0];
	local[34]= fqv[405];
	local[35]= local[11];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,3,local+33); /*send*/
	local[33]= w;
	goto IF2114;
IF2113:
	local[33]= NIL;
IF2114:
	goto IF2112;
IF2111:
	local[33]= NIL;
IF2112:
	if (local[24]==NIL) goto IF2115;
	w = local[24];
	if (!!iscons(w)) goto IF2115;
	local[33]= local[24];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[24] = w;
	local[33]= local[24];
	goto IF2116;
IF2115:
	local[33]= NIL;
IF2116:
	if (local[24]==NIL) goto IF2117;
	local[33]= local[24];
	local[34]= fqv[406];
	ctx->vsp=local+35;
	w=(pointer)EQUAL(ctx,2,local+33); /*equal*/
	if (w!=NIL) goto IF2117;
	if (loadglobal(fqv[386])==NIL) goto IF2117;
	local[33]= loadglobal(fqv[386]);
	local[34]= fqv[387];
	local[35]= fqv[407];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,3,local+33); /*send*/
	local[33]= w;
	goto IF2118;
IF2117:
	local[33]= NIL;
IF2118:
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!!iscons(w)) goto IF2119;
	local[33]= local[3];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[3] = w;
	local[33]= local[3];
	goto IF2120;
IF2119:
	local[33]= NIL;
IF2120:
	w = local[4];
	if (!!iscons(w)) goto IF2121;
	local[33]= local[4];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[4] = w;
	local[33]= local[4];
	goto IF2122;
IF2121:
	local[33]= NIL;
IF2122:
	w = local[12];
	if (!iscons(w)) goto OR2125;
	local[33]= local[12];
	ctx->vsp=local+34;
	w=(*ftab[43])(ctx,1,local+33,&ftab[43],fqv[321]); /*functionp*/
	if (w!=NIL) goto OR2125;
	goto IF2123;
OR2125:
	local[33]= local[12];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[12] = w;
	local[33]= local[12];
	goto IF2124;
IF2123:
	local[33]= NIL;
IF2124:
	w = argv[2];
	if (!!iscons(w)) goto IF2126;
	local[33]= argv[2];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	argv[2] = w;
	local[33]= argv[2];
	goto IF2127;
IF2126:
	local[33]= NIL;
IF2127:
	w = argv[3];
	if (!!iscons(w)) goto IF2128;
	local[33]= argv[3];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	argv[3] = w;
	local[33]= argv[3];
	goto IF2129;
IF2128:
	local[33]= NIL;
IF2129:
	w = local[5];
	if (!!iscons(w)) goto IF2130;
	local[33]= local[5];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[5] = w;
	local[33]= local[5];
	goto IF2131;
IF2130:
	local[33]= NIL;
IF2131:
	w = local[6];
	if (!!iscons(w)) goto IF2132;
	local[33]= local[6];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[6] = w;
	local[33]= local[6];
	goto IF2133;
IF2132:
	local[33]= NIL;
IF2133:
	w = local[7];
	if (!!iscons(w)) goto IF2134;
	local[33]= local[7];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[7] = w;
	local[33]= local[7];
	goto IF2135;
IF2134:
	local[33]= NIL;
IF2135:
	w = local[8];
	if (!!iscons(w)) goto IF2136;
	local[33]= local[8];
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[8] = w;
	local[33]= local[8];
	goto IF2137;
IF2136:
	local[33]= NIL;
IF2137:
	local[33]= local[6];
	ctx->vsp=local+34;
	w=(pointer)LENGTH(ctx,1,local+33); /*length*/
	local[33]= w;
	local[34]= local[5];
	ctx->vsp=local+35;
	w=(pointer)LENGTH(ctx,1,local+34); /*length*/
	local[34]= w;
	local[35]= local[4];
	ctx->vsp=local+36;
	w=(pointer)LENGTH(ctx,1,local+35); /*length*/
	local[35]= w;
	local[36]= local[3];
	ctx->vsp=local+37;
	w=(pointer)LENGTH(ctx,1,local+36); /*length*/
	local[36]= w;
	local[37]= argv[2];
	ctx->vsp=local+38;
	w=(pointer)LENGTH(ctx,1,local+37); /*length*/
	local[37]= w;
	local[38]= argv[3];
	ctx->vsp=local+39;
	w=(pointer)LENGTH(ctx,1,local+38); /*length*/
	local[38]= w;
	ctx->vsp=local+39;
	w=(pointer)NUMEQUAL(ctx,6,local+33); /*=*/
	if (w!=NIL) goto IF2138;
	local[33]= fqv[408];
	local[34]= local[6];
	ctx->vsp=local+35;
	w=(pointer)LENGTH(ctx,1,local+34); /*length*/
	local[34]= w;
	local[35]= local[5];
	ctx->vsp=local+36;
	w=(pointer)LENGTH(ctx,1,local+35); /*length*/
	local[35]= w;
	local[36]= local[4];
	ctx->vsp=local+37;
	w=(pointer)LENGTH(ctx,1,local+36); /*length*/
	local[36]= w;
	local[37]= local[3];
	ctx->vsp=local+38;
	w=(pointer)LENGTH(ctx,1,local+37); /*length*/
	local[37]= w;
	local[38]= argv[2];
	ctx->vsp=local+39;
	w=(pointer)LENGTH(ctx,1,local+38); /*length*/
	local[38]= w;
	local[39]= argv[3];
	ctx->vsp=local+40;
	w=(pointer)LENGTH(ctx,1,local+39); /*length*/
	local[39]= w;
	ctx->vsp=local+40;
	w=(*ftab[2])(ctx,7,local+33,&ftab[2],fqv[15]); /*warn*/
	w = fqv[409];
	ctx->vsp=local+33;
	local[0]=w;
	goto BLK2070;
	goto IF2139;
IF2138:
	local[33]= NIL;
IF2139:
	local[33]= fqv[385];
	w = local[25];
	if (memq(local[33],w)==NIL) goto IF2140;
	local[33]= fqv[385];
	w = local[25];
	w=memq(local[33],w);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[27] = (w)->c.cons.car;
	local[33]= local[27];
	goto IF2141;
IF2140:
	local[33]= makeint((eusinteger_t)0L);
	local[34]= local[5];
	ctx->vsp=local+35;
	w=(pointer)LENGTH(ctx,1,local+34); /*length*/
	local[34]= w;
WHL2143:
	local[35]= local[33];
	w = local[34];
	if ((eusinteger_t)local[35] >= (eusinteger_t)w) goto WHX2144;
	local[35]= loadglobal(fqv[5]);
	local[36]= argv[0];
	local[37]= fqv[210];
	local[38]= local[5];
	local[39]= local[33];
	ctx->vsp=local+40;
	w=(pointer)ELT(ctx,2,local+38); /*elt*/
	local[38]= w;
	local[39]= local[6];
	local[40]= local[33];
	ctx->vsp=local+41;
	w=(pointer)ELT(ctx,2,local+39); /*elt*/
	local[39]= w;
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,4,local+36); /*send*/
	local[36]= w;
	ctx->vsp=local+37;
	w=(pointer)INSTANTIATE(ctx,2,local+35); /*instantiate*/
	local[35]= w;
	w = local[27];
	ctx->vsp=local+36;
	local[27] = cons(ctx,local[35],w);
	local[35]= local[33];
	ctx->vsp=local+36;
	w=(pointer)ADD1(ctx,1,local+35); /*1+*/
	local[33] = w;
	goto WHL2143;
WHX2144:
	local[35]= NIL;
BLK2145:
	w = NIL;
	local[33]= local[27];
	ctx->vsp=local+34;
	w=(pointer)NREVERSE(ctx,1,local+33); /*nreverse*/
	local[27] = w;
	local[33]= local[27];
IF2141:
	local[33]= fqv[283];
	w = local[25];
	if (memq(local[33],w)==NIL) goto IF2146;
	local[33]= fqv[283];
	w = local[25];
	w=memq(local[33],w);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[26] = (w)->c.cons.car;
	local[33]= local[26];
	goto IF2147;
IF2146:
	local[33]= loadglobal(fqv[5]);
	local[34]= argv[0];
	local[35]= fqv[210];
	local[36]= local[5];
	local[37]= local[6];
	ctx->vsp=local+38;
	w=(pointer)SEND(ctx,4,local+34); /*send*/
	local[34]= w;
	ctx->vsp=local+35;
	w=(pointer)INSTANTIATE(ctx,2,local+33); /*instantiate*/
	local[26] = w;
	local[33]= local[26];
IF2147:
	local[33]= local[13];
	ctx->vsp=local+34;
	w=(*ftab[43])(ctx,1,local+33,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2148;
	local[33]= local[13];
	local[34]= local[3];
	local[35]= local[4];
	local[36]= local[6];
	local[37]= local[5];
	ctx->vsp=local+38;
	w=(pointer)FUNCALL(ctx,5,local+33); /*funcall*/
	local[13] = w;
	local[33]= local[13];
	goto IF2149;
IF2148:
	local[33]= NIL;
IF2149:
	if (local[13]!=NIL) goto IF2150;
	local[33]= (pointer)get_sym_func(fqv[289]);
	local[34]= argv[0];
	local[35]= fqv[300];
	local[36]= local[3];
	local[37]= fqv[336];
	local[38]= local[6];
	local[39]= fqv[410];
	local[40]= local[5];
	local[41]= fqv[301];
	local[42]= local[4];
	local[43]= local[30];
	ctx->vsp=local+44;
	w=(pointer)APPLY(ctx,11,local+33); /*apply*/
	local[13] = w;
	local[33]= local[13];
	goto IF2151;
IF2150:
	local[33]= NIL;
IF2151:
	if (local[24]==NIL) goto IF2152;
	local[33]= fqv[202];
	w = local[24];
	if (memq(local[33],w)!=NIL) goto IF2152;
	local[33]= fqv[411];
	local[34]= local[2];
	ctx->vsp=local+35;
	w=(*ftab[2])(ctx,2,local+33,&ftab[2],fqv[15]); /*warn*/
	local[33]= fqv[412];
	local[34]= local[11];
	local[35]= fqv[3];
	ctx->vsp=local+36;
	w=(*ftab[18])(ctx,2,local+34,&ftab[18],fqv[128]); /*send-all*/
	local[34]= w;
	ctx->vsp=local+35;
	w=(*ftab[2])(ctx,2,local+33,&ftab[2],fqv[15]); /*warn*/
	local[33]= fqv[413];
	local[34]= local[4];
	ctx->vsp=local+35;
	w=(*ftab[2])(ctx,2,local+33,&ftab[2],fqv[15]); /*warn*/
	local[33]= fqv[414];
	local[34]= local[12];
	ctx->vsp=local+35;
	w=(*ftab[2])(ctx,2,local+33,&ftab[2],fqv[15]); /*warn*/
	local[33]= w;
	goto IF2153;
IF2152:
	local[33]= NIL;
IF2153:
	local[33]= argv[0];
	local[34]= fqv[415];
	if (local[23]==NIL) goto IF2154;
	local[35]= local[2];
	local[36]= local[23];
	ctx->vsp=local+37;
	w=(pointer)GREQP(ctx,2,local+35); /*>=*/
	local[35]= w;
	goto IF2155;
IF2154:
	local[35]= T;
IF2155:
	local[36]= argv[2];
	local[37]= argv[3];
	local[38]= local[5];
	local[39]= local[6];
	local[40]= local[7];
	local[41]= local[8];
	local[42]= local[17];
	local[43]= local[18];
	local[44]= local[19];
	local[45]= local[20];
	local[46]= fqv[333];
	local[47]= NIL;
	ctx->vsp=local+48;
	w=(pointer)SEND(ctx,15,local+33); /*send*/
	local[29] = w;
	if (local[14]==NIL) goto IF2156;
	local[33]= local[29];
	if (local[33]==NIL) goto AND2158;
	local[33]= local[14];
	ctx->vsp=local+34;
	w=(pointer)FUNCALL(ctx,1,local+33); /*funcall*/
	local[33]= w;
AND2158:
	local[29] = local[33];
	local[33]= local[29];
	goto IF2157;
IF2156:
	local[33]= NIL;
IF2157:
	local[33]= makeint((eusinteger_t)0L);
	local[34]= local[4];
	ctx->vsp=local+35;
	w=(pointer)LENGTH(ctx,1,local+34); /*length*/
	local[34]= w;
WHL2160:
	local[35]= local[33];
	w = local[34];
	if ((eusinteger_t)local[35] >= (eusinteger_t)w) goto WHX2161;
	local[35]= local[27];
	local[36]= local[33];
	ctx->vsp=local+37;
	w=(pointer)ELT(ctx,2,local+35); /*elt*/
	local[35]= w;
	local[36]= (pointer)get_sym_func(fqv[289]);
	local[37]= argv[0];
	local[38]= fqv[416];
	local[39]= argv[2];
	local[40]= local[33];
	ctx->vsp=local+41;
	w=(pointer)ELT(ctx,2,local+39); /*elt*/
	local[39]= w;
	local[40]= local[6];
	local[41]= local[33];
	ctx->vsp=local+42;
	w=(pointer)ELT(ctx,2,local+40); /*elt*/
	local[40]= w;
	if (local[31]==NIL) goto IF2163;
	local[41]= fqv[403];
	local[42]= local[31];
	ctx->vsp=local+43;
	w=(pointer)LIST(ctx,2,local+41); /*list*/
	local[41]= w;
	goto IF2164;
IF2163:
	local[41]= NIL;
IF2164:
	ctx->vsp=local+42;
	w=(pointer)APPLY(ctx,6,local+36); /*apply*/
	local[36]= w;
	local[37]= (pointer)get_sym_func(fqv[289]);
	local[38]= argv[0];
	local[39]= fqv[417];
	local[40]= argv[3];
	local[41]= local[33];
	ctx->vsp=local+42;
	w=(pointer)ELT(ctx,2,local+40); /*elt*/
	local[40]= w;
	local[41]= local[5];
	local[42]= local[33];
	ctx->vsp=local+43;
	w=(pointer)ELT(ctx,2,local+41); /*elt*/
	local[41]= w;
	if (local[32]==NIL) goto IF2165;
	local[42]= fqv[404];
	local[43]= local[32];
	ctx->vsp=local+44;
	w=(pointer)LIST(ctx,2,local+42); /*list*/
	local[42]= w;
	goto IF2166;
IF2165:
	local[42]= NIL;
IF2166:
	ctx->vsp=local+43;
	w=(pointer)APPLY(ctx,6,local+37); /*apply*/
	local[37]= w;
	if (local[24]==NIL) goto IF2167;
	local[38]= fqv[202];
	w = local[24];
	if (memq(local[38],w)!=NIL) goto IF2167;
	local[38]= makeflt(1.0000000000000000000000e+03);
	local[39]= local[36];
	ctx->vsp=local+40;
	w=(pointer)SCALEVEC(ctx,2,local+38); /*scale*/
	local[38]= w;
	local[39]= fqv[418];
	ctx->vsp=local+40;
	w=(*ftab[33])(ctx,2,local+38,&ftab[33],fqv[234]); /*format-array*/
	local[38]= local[37];
	local[39]= fqv[419];
	ctx->vsp=local+40;
	w=(*ftab[33])(ctx,2,local+38,&ftab[33],fqv[234]); /*format-array*/
	local[38]= fqv[420];
	local[39]= makeflt(1.0000000000000000000000e+03);
	local[40]= local[36];
	ctx->vsp=local+41;
	w=(pointer)VNORM(ctx,1,local+40); /*norm*/
	{ double x,y;
		y=fltval(w); x=fltval(local[39]);
		local[39]=(makeflt(x * y));}
	local[40]= local[7];
	local[41]= local[33];
	ctx->vsp=local+42;
	w=(pointer)ELT(ctx,2,local+40); /*elt*/
	local[40]= w;
	local[41]= local[37];
	ctx->vsp=local+42;
	w=(pointer)VNORM(ctx,1,local+41); /*norm*/
	local[41]= w;
	local[42]= local[8];
	local[43]= local[33];
	ctx->vsp=local+44;
	w=(pointer)ELT(ctx,2,local+42); /*elt*/
	local[42]= w;
	ctx->vsp=local+43;
	w=(*ftab[2])(ctx,5,local+38,&ftab[2],fqv[15]); /*warn*/
	local[38]= w;
	goto IF2168;
IF2167:
	local[38]= NIL;
IF2168:
	local[38]= makeint((eusinteger_t)0L);
	local[39]= local[36];
	ctx->vsp=local+40;
	w=(pointer)LENGTH(ctx,1,local+39); /*length*/
	local[39]= w;
WHL2170:
	local[40]= local[38];
	w = local[39];
	if ((eusinteger_t)local[40] >= (eusinteger_t)w) goto WHX2171;
	local[40]= local[35];
	local[41]= local[38];
	local[42]= local[9];
	local[43]= local[36];
	local[44]= local[38];
	ctx->vsp=local+45;
	w=(pointer)ELT(ctx,2,local+43); /*elt*/
	local[43]= w;
	ctx->vsp=local+44;
	w=(pointer)TIMES(ctx,2,local+42); /***/
	local[42]= w;
	ctx->vsp=local+43;
	w=(pointer)SETELT(ctx,3,local+40); /*setelt*/
	local[40]= local[38];
	ctx->vsp=local+41;
	w=(pointer)ADD1(ctx,1,local+40); /*1+*/
	local[38] = w;
	goto WHL2170;
WHX2171:
	local[40]= NIL;
BLK2172:
	w = NIL;
	local[38]= makeint((eusinteger_t)0L);
	local[39]= local[37];
	ctx->vsp=local+40;
	w=(pointer)LENGTH(ctx,1,local+39); /*length*/
	local[39]= w;
WHL2174:
	local[40]= local[38];
	w = local[39];
	if ((eusinteger_t)local[40] >= (eusinteger_t)w) goto WHX2175;
	local[40]= local[35];
	local[41]= local[38];
	local[42]= local[36];
	ctx->vsp=local+43;
	w=(pointer)LENGTH(ctx,1,local+42); /*length*/
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[41]= (pointer)((eusinteger_t)local[41] + (eusinteger_t)w);
	local[42]= local[10];
	local[43]= local[37];
	local[44]= local[38];
	ctx->vsp=local+45;
	w=(pointer)ELT(ctx,2,local+43); /*elt*/
	local[43]= w;
	ctx->vsp=local+44;
	w=(pointer)TIMES(ctx,2,local+42); /***/
	local[42]= w;
	ctx->vsp=local+43;
	w=(pointer)SETELT(ctx,3,local+40); /*setelt*/
	local[40]= local[38];
	ctx->vsp=local+41;
	w=(pointer)ADD1(ctx,1,local+40); /*1+*/
	local[38] = w;
	goto WHL2174;
WHX2175:
	local[40]= NIL;
BLK2176:
	w = NIL;
	local[38]= argv[0];
	local[39]= fqv[184];
	local[40]= fqv[421];
	ctx->vsp=local+41;
	w=(pointer)SEND(ctx,3,local+38); /*send*/
	if (w==NIL) goto IF2177;
	local[38]= NIL;
	local[39]= fqv[422];
	local[40]= local[33];
	ctx->vsp=local+41;
	w=(pointer)XFORMAT(ctx,3,local+38); /*format*/
	local[38]= w;
	ctx->vsp=local+39;
	w=(*ftab[45])(ctx,1,local+38,&ftab[45],fqv[423]); /*read-from-string*/
	local[38]= w;
	local[39]= argv[0];
	local[40]= fqv[184];
	local[41]= fqv[421];
	ctx->vsp=local+42;
	w=(pointer)SEND(ctx,3,local+39); /*send*/
	local[39]= w;
	ctx->vsp=local+40;
	w=(*ftab[41])(ctx,2,local+38,&ftab[41],fqv[315]); /*assoc*/
	local[38]= w;
	local[39]= local[36];
	local[40]= local[37];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,2,local+39); /*list*/
	local[39]= w;
	local[40]= NIL;
	local[41]= fqv[424];
	local[42]= local[33];
	ctx->vsp=local+43;
	w=(pointer)XFORMAT(ctx,3,local+40); /*format*/
	local[40]= w;
	ctx->vsp=local+41;
	w=(*ftab[45])(ctx,1,local+40,&ftab[45],fqv[423]); /*read-from-string*/
	local[40]= w;
	local[41]= argv[0];
	local[42]= fqv[184];
	local[43]= fqv[421];
	ctx->vsp=local+44;
	w=(pointer)SEND(ctx,3,local+41); /*send*/
	local[41]= w;
	ctx->vsp=local+42;
	w=(*ftab[41])(ctx,2,local+40,&ftab[41],fqv[315]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+40;
	local[39]= cons(ctx,local[39],w);
	ctx->vsp=local+40;
	w=(pointer)RPLACD2(ctx,2,local+38); /*rplacd2*/
	local[38]= w;
	goto IF2178;
IF2177:
	local[38]= NIL;
IF2178:
	w = local[38];
	local[35]= local[33];
	ctx->vsp=local+36;
	w=(pointer)ADD1(ctx,1,local+35); /*1+*/
	local[33] = w;
	goto WHL2160;
WHX2161:
	local[35]= NIL;
BLK2162:
	w = NIL;
	local[33]= makeint((eusinteger_t)0L);
	local[34]= local[27];
	ctx->vsp=local+35;
	w=(pointer)LENGTH(ctx,1,local+34); /*length*/
	local[34]= w;
WHL2180:
	local[35]= local[33];
	w = local[34];
	if ((eusinteger_t)local[35] >= (eusinteger_t)w) goto WHX2181;
	local[35]= makeint((eusinteger_t)0L);
	local[36]= local[27];
	local[37]= local[33];
	ctx->vsp=local+38;
	w=(pointer)ELT(ctx,2,local+36); /*elt*/
	local[36]= w;
	ctx->vsp=local+37;
	w=(pointer)LENGTH(ctx,1,local+36); /*length*/
	local[36]= w;
WHL2184:
	local[37]= local[35];
	w = local[36];
	if ((eusinteger_t)local[37] >= (eusinteger_t)w) goto WHX2185;
	local[37]= local[26];
	local[38]= local[35];
	local[39]= local[28];
	ctx->vsp=local+40;
	w=(pointer)PLUS(ctx,2,local+38); /*+*/
	local[38]= w;
	local[39]= local[27];
	local[40]= local[33];
	ctx->vsp=local+41;
	w=(pointer)ELT(ctx,2,local+39); /*elt*/
	local[39]= w;
	local[40]= local[35];
	ctx->vsp=local+41;
	w=(pointer)ELT(ctx,2,local+39); /*elt*/
	local[39]= w;
	ctx->vsp=local+40;
	w=(pointer)SETELT(ctx,3,local+37); /*setelt*/
	local[37]= local[35];
	ctx->vsp=local+38;
	w=(pointer)ADD1(ctx,1,local+37); /*1+*/
	local[35] = w;
	goto WHL2184;
WHX2185:
	local[37]= NIL;
BLK2186:
	w = NIL;
	local[35]= local[28];
	local[36]= local[27];
	local[37]= local[33];
	ctx->vsp=local+38;
	w=(pointer)ELT(ctx,2,local+36); /*elt*/
	local[36]= w;
	ctx->vsp=local+37;
	w=(pointer)LENGTH(ctx,1,local+36); /*length*/
	local[36]= w;
	ctx->vsp=local+37;
	w=(pointer)PLUS(ctx,2,local+35); /*+*/
	local[28] = w;
	local[35]= local[33];
	ctx->vsp=local+36;
	w=(pointer)ADD1(ctx,1,local+35); /*1+*/
	local[33] = w;
	goto WHL2180;
WHX2181:
	local[35]= NIL;
BLK2182:
	w = NIL;
	if (local[21]!=NIL) goto IF2187;
	if (local[18]==NIL) goto IF2187;
	local[33]= argv[0];
	local[34]= fqv[425];
	local[35]= fqv[333];
	local[36]= NIL;
	local[37]= fqv[261];
	local[38]= local[11];
	local[39]= fqv[336];
	local[40]= local[20];
	ctx->vsp=local+41;
	w=(pointer)SEND(ctx,8,local+33); /*send*/
	local[33]= w;
	ctx->vsp=local+34;
	w=(pointer)LIST(ctx,1,local+33); /*list*/
	local[33]= w;
	local[34]= local[15];
	ctx->vsp=local+35;
	w=(pointer)APPEND(ctx,2,local+33); /*append*/
	local[15] = w;
	local[33]= local[22];
	local[34]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+35;
	w=(pointer)GREATERP(ctx,2,local+33); /*>*/
	if (w==NIL) goto IF2189;
	local[33]= makeflt(1.0000000000000000000000e+00);
	goto IF2190;
IF2189:
	local[33]= local[22];
IF2190:
	local[34]= argv[0];
	local[35]= fqv[426];
	local[36]= local[33];
	local[37]= local[20];
	local[38]= local[18];
	local[39]= fqv[332];
	local[40]= local[19];
	local[41]= fqv[333];
	local[42]= NIL;
	ctx->vsp=local+43;
	w=(pointer)SEND(ctx,9,local+34); /*send*/
	local[34]= w;
	ctx->vsp=local+35;
	w=(pointer)LIST(ctx,1,local+34); /*list*/
	local[34]= w;
	local[35]= local[16];
	ctx->vsp=local+36;
	w=(pointer)APPEND(ctx,2,local+34); /*append*/
	local[16] = w;
	local[34]= argv[0];
	local[35]= fqv[184];
	local[36]= fqv[421];
	ctx->vsp=local+37;
	w=(pointer)SEND(ctx,3,local+34); /*send*/
	if (w==NIL) goto IF2191;
	local[34]= fqv[258];
	local[35]= argv[0];
	local[36]= fqv[184];
	local[37]= fqv[421];
	ctx->vsp=local+38;
	w=(pointer)SEND(ctx,3,local+35); /*send*/
	local[35]= w;
	ctx->vsp=local+36;
	w=(*ftab[41])(ctx,2,local+34,&ftab[41],fqv[315]); /*assoc*/
	local[34]= w;
	w=local[16];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[35]= (w)->c.cons.car;
	local[36]= fqv[258];
	local[37]= argv[0];
	local[38]= fqv[184];
	local[39]= fqv[421];
	ctx->vsp=local+40;
	w=(pointer)SEND(ctx,3,local+37); /*send*/
	local[37]= w;
	ctx->vsp=local+38;
	w=(*ftab[41])(ctx,2,local+36,&ftab[41],fqv[315]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+36;
	local[35]= cons(ctx,local[35],w);
	ctx->vsp=local+36;
	w=(pointer)RPLACD2(ctx,2,local+34); /*rplacd2*/
	local[34]= w;
	goto IF2192;
IF2191:
	local[34]= NIL;
IF2192:
	w = local[34];
	local[33]= w;
	goto IF2188;
IF2187:
	local[33]= NIL;
IF2188:
	local[33]= NIL;
	local[34]= NIL;
	local[35]= NIL;
	local[36]= NIL;
	if (local[15]==NIL) goto IF2193;
	ctx->vsp=local+37;
	local[37]= makeclosure(codevec,quotevec,CLO2195,env,argv,local);
	local[38]= local[16];
	ctx->vsp=local+39;
	w=(pointer)MAPCAR(ctx,2,local+37); /*mapcar*/
	local[33] = w;
	local[37]= local[26];
	ctx->vsp=local+38;
	w=(pointer)LENGTH(ctx,1,local+37); /*length*/
	local[37]= w;
	local[38]= (pointer)get_sym_func(fqv[323]);
	local[39]= (pointer)get_sym_func(fqv[427]);
	local[40]= local[33];
	ctx->vsp=local+41;
	w=(pointer)MAPCAR(ctx,2,local+39); /*mapcar*/
	local[39]= w;
	ctx->vsp=local+40;
	w=(*ftab[26])(ctx,2,local+38,&ftab[26],fqv[196]); /*reduce*/
	local[38]= w;
	ctx->vsp=local+39;
	w=(pointer)MINUS(ctx,2,local+37); /*-*/
	local[34] = w;
	local[37]= makeint((eusinteger_t)0L);
	local[38]= local[15];
	ctx->vsp=local+39;
	w=(pointer)LENGTH(ctx,1,local+38); /*length*/
	local[38]= w;
WHL2197:
	local[39]= local[37];
	w = local[38];
	if ((eusinteger_t)local[39] >= (eusinteger_t)w) goto WHX2198;
	local[39]= local[15];
	local[40]= local[37];
	ctx->vsp=local+41;
	w=(pointer)ELT(ctx,2,local+39); /*elt*/
	local[36] = w;
	local[39]= local[36];
	ctx->vsp=local+40;
	w=(*ftab[43])(ctx,1,local+39,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2200;
	local[39]= local[36];
	local[40]= local[3];
	ctx->vsp=local+41;
	w=(pointer)FUNCALL(ctx,2,local+39); /*funcall*/
	local[39]= w;
	goto IF2201;
IF2200:
	local[39]= local[36];
IF2201:
	local[36] = local[39];
	local[39]= local[33];
	local[40]= local[37];
	ctx->vsp=local+41;
	w=(pointer)ELT(ctx,2,local+39); /*elt*/
	local[35] = w;
	local[39]= makeint((eusinteger_t)0L);
	local[40]= local[36];
	local[41]= makeint((eusinteger_t)0L);
	ctx->vsp=local+42;
	w=(*ftab[3])(ctx,2,local+40,&ftab[3],fqv[24]); /*array-dimension*/
	local[40]= w;
WHL2203:
	local[41]= local[39];
	w = local[40];
	if ((eusinteger_t)local[41] >= (eusinteger_t)w) goto WHX2204;
	local[41]= makeint((eusinteger_t)0L);
	local[42]= local[13];
	local[43]= makeint((eusinteger_t)1L);
	ctx->vsp=local+44;
	w=(*ftab[3])(ctx,2,local+42,&ftab[3],fqv[24]); /*array-dimension*/
	local[42]= w;
WHL2207:
	local[43]= local[41];
	w = local[42];
	if ((eusinteger_t)local[43] >= (eusinteger_t)w) goto WHX2208;
	local[43]= local[13];
	local[44]= local[34];
	local[45]= local[39];
	ctx->vsp=local+46;
	w=(pointer)PLUS(ctx,2,local+44); /*+*/
	local[44]= w;
	local[45]= local[41];
	local[46]= local[36];
	local[47]= local[39];
	local[48]= local[41];
	ctx->vsp=local+49;
	w=(pointer)AREF(ctx,3,local+46); /*aref*/
	local[46]= w;
	ctx->vsp=local+47;
	w=(pointer)ASET(ctx,4,local+43); /*aset*/
	local[43]= local[41];
	ctx->vsp=local+44;
	w=(pointer)ADD1(ctx,1,local+43); /*1+*/
	local[41] = w;
	goto WHL2207;
WHX2208:
	local[43]= NIL;
BLK2209:
	w = NIL;
	local[41]= local[26];
	local[42]= local[34];
	local[43]= local[39];
	ctx->vsp=local+44;
	w=(pointer)PLUS(ctx,2,local+42); /*+*/
	local[42]= w;
	local[43]= local[35];
	local[44]= local[39];
	ctx->vsp=local+45;
	w=(pointer)ELT(ctx,2,local+43); /*elt*/
	local[43]= w;
	ctx->vsp=local+44;
	w=(pointer)SETELT(ctx,3,local+41); /*setelt*/
	local[41]= local[39];
	ctx->vsp=local+42;
	w=(pointer)ADD1(ctx,1,local+41); /*1+*/
	local[39] = w;
	goto WHL2203;
WHX2204:
	local[41]= NIL;
BLK2205:
	w = NIL;
	local[39]= local[34];
	local[40]= local[35];
	ctx->vsp=local+41;
	w=(pointer)LENGTH(ctx,1,local+40); /*length*/
	local[40]= w;
	ctx->vsp=local+41;
	w=(pointer)PLUS(ctx,2,local+39); /*+*/
	local[34] = w;
	if (local[24]==NIL) goto IF2210;
	local[39]= fqv[202];
	w = local[24];
	if (memq(local[39],w)!=NIL) goto IF2210;
	local[39]= local[36];
	local[40]= NIL;
	local[41]= fqv[428];
	local[42]= local[37];
	ctx->vsp=local+43;
	w=(pointer)XFORMAT(ctx,3,local+40); /*format*/
	local[40]= w;
	ctx->vsp=local+41;
	w=(*ftab[33])(ctx,2,local+39,&ftab[33],fqv[234]); /*format-array*/
	local[39]= local[35];
	local[40]= NIL;
	local[41]= fqv[429];
	local[42]= local[37];
	ctx->vsp=local+43;
	w=(pointer)XFORMAT(ctx,3,local+40); /*format*/
	local[40]= w;
	ctx->vsp=local+41;
	w=(*ftab[33])(ctx,2,local+39,&ftab[33],fqv[234]); /*format-array*/
	local[39]= w;
	goto IF2211;
IF2210:
	local[39]= NIL;
IF2211:
	local[39]= argv[0];
	local[40]= fqv[184];
	local[41]= fqv[421];
	ctx->vsp=local+42;
	w=(pointer)SEND(ctx,3,local+39); /*send*/
	if (w==NIL) goto IF2212;
	if (local[21]!=NIL) goto IF2214;
	if (local[18]==NIL) goto IF2214;
	local[39]= local[37];
	local[40]= makeint((eusinteger_t)0L);
	ctx->vsp=local+41;
	w=(*ftab[24])(ctx,2,local+39,&ftab[24],fqv[171]); /*/=*/
	if (w==NIL) goto IF2214;
	local[39]= NIL;
	local[40]= fqv[430];
	local[41]= local[37];
	w = makeint((eusinteger_t)1L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[41]= (pointer)((eusinteger_t)local[41] - (eusinteger_t)w);
	ctx->vsp=local+42;
	w=(pointer)XFORMAT(ctx,3,local+39); /*format*/
	local[39]= w;
	ctx->vsp=local+40;
	w=(*ftab[45])(ctx,1,local+39,&ftab[45],fqv[423]); /*read-from-string*/
	local[39]= w;
	local[40]= argv[0];
	local[41]= fqv[184];
	local[42]= fqv[421];
	ctx->vsp=local+43;
	w=(pointer)SEND(ctx,3,local+40); /*send*/
	local[40]= w;
	ctx->vsp=local+41;
	w=(*ftab[41])(ctx,2,local+39,&ftab[41],fqv[315]); /*assoc*/
	local[39]= w;
	w=local[16];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[40]= (w)->c.cons.car;
	local[41]= NIL;
	local[42]= fqv[431];
	local[43]= local[37];
	w = makeint((eusinteger_t)1L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[43]= (pointer)((eusinteger_t)local[43] - (eusinteger_t)w);
	ctx->vsp=local+44;
	w=(pointer)XFORMAT(ctx,3,local+41); /*format*/
	local[41]= w;
	ctx->vsp=local+42;
	w=(*ftab[45])(ctx,1,local+41,&ftab[45],fqv[423]); /*read-from-string*/
	local[41]= w;
	local[42]= argv[0];
	local[43]= fqv[184];
	local[44]= fqv[421];
	ctx->vsp=local+45;
	w=(pointer)SEND(ctx,3,local+42); /*send*/
	local[42]= w;
	ctx->vsp=local+43;
	w=(*ftab[41])(ctx,2,local+41,&ftab[41],fqv[315]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+41;
	local[40]= cons(ctx,local[40],w);
	ctx->vsp=local+41;
	w=(pointer)RPLACD2(ctx,2,local+39); /*rplacd2*/
	local[39]= w;
	goto IF2215;
IF2214:
	local[39]= NIL;
IF2215:
	goto IF2213;
IF2212:
	local[39]= NIL;
IF2213:
	local[39]= local[37];
	ctx->vsp=local+40;
	w=(pointer)ADD1(ctx,1,local+39); /*1+*/
	local[37] = w;
	goto WHL2197;
WHX2198:
	local[39]= NIL;
BLK2199:
	w = NIL;
	local[37]= w;
	goto IF2194;
IF2193:
	local[37]= NIL;
IF2194:
	w = local[37];
	if (local[29]==NIL) goto IF2216;
	local[33]= argv[0];
	local[34]= fqv[150];
	local[35]= fqv[432];
	local[36]= NIL;
	ctx->vsp=local+37;
	w=(pointer)SEND(ctx,4,local+33); /*send*/
	local[33]= fqv[433];
	goto IF2217;
IF2216:
	if (local[24]==NIL) goto IF2218;
	local[33]= fqv[406];
	w = local[24];
	if (memq(local[33],w)!=NIL) goto IF2218;
	if (loadglobal(fqv[386])==NIL) goto IF2218;
	local[33]= loadglobal(fqv[386]);
	local[34]= fqv[387];
	local[35]= fqv[407];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,3,local+33); /*send*/
	local[33]= w;
	goto IF2219;
IF2218:
	local[33]= NIL;
IF2219:
	local[33]= argv[0];
	local[34]= fqv[150];
	local[35]= fqv[291];
	local[36]= NIL;
	ctx->vsp=local+37;
	w=(pointer)SEND(ctx,4,local+33); /*send*/
	local[33]= (pointer)get_sym_func(fqv[34]);
	local[34]= argv[0];
	local[35]= loadglobal(fqv[377]);
	local[36]= fqv[434];
	local[37]= local[26];
	local[38]= fqv[358];
	local[39]= local[11];
	local[40]= fqv[410];
	local[41]= local[5];
	local[42]= fqv[336];
	local[43]= local[6];
	local[44]= fqv[435];
	local[45]= local[13];
	local[46]= fqv[341];
	local[47]= local[24];
	local[48]= local[30];
	ctx->vsp=local+49;
	w=(pointer)APPLY(ctx,16,local+33); /*apply*/
	if (local[24]==NIL) goto IF2220;
	if (loadglobal(fqv[386])==NIL) goto IF2220;
	local[33]= loadglobal(fqv[386]);
	local[34]= fqv[436];
	local[35]= fqv[407];
	local[36]= NIL;
	local[37]= fqv[190];
	local[38]= NIL;
	ctx->vsp=local+39;
	w=(pointer)SEND(ctx,6,local+33); /*send*/
	local[33]= argv[0];
	local[34]= fqv[437];
	ctx->vsp=local+35;
	w=(pointer)SEND(ctx,2,local+33); /*send*/
	w=local[12];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car==NIL) goto IF2222;
	local[33]= makeint((eusinteger_t)0L);
	local[34]= local[12];
	ctx->vsp=local+35;
	w=(pointer)LENGTH(ctx,1,local+34); /*length*/
	local[34]= w;
WHL2225:
	local[35]= local[33];
	w = local[34];
	if ((eusinteger_t)local[35] >= (eusinteger_t)w) goto WHX2226;
	local[35]= local[4];
	local[36]= local[33];
	ctx->vsp=local+37;
	w=(pointer)ELT(ctx,2,local+35); /*elt*/
	local[35]= w;
	local[36]= loadglobal(fqv[438]);
	local[37]= fqv[439];
	local[38]= fqv[190];
	local[39]= NIL;
	local[40]= fqv[440];
	local[41]= makeint((eusinteger_t)100L);
	ctx->vsp=local+42;
	w=(pointer)SENDMESSAGE(ctx,7,local+35); /*send-message*/
	local[35]= local[12];
	local[36]= local[33];
	ctx->vsp=local+37;
	w=(pointer)ELT(ctx,2,local+35); /*elt*/
	local[35]= w;
	local[36]= fqv[439];
	local[37]= fqv[190];
	local[38]= NIL;
	local[39]= fqv[189];
	local[40]= fqv[441];
	ctx->vsp=local+41;
	w=(pointer)SEND(ctx,6,local+35); /*send*/
	local[35]= local[33];
	ctx->vsp=local+36;
	w=(pointer)ADD1(ctx,1,local+35); /*1+*/
	local[33] = w;
	goto WHL2225;
WHX2226:
	local[35]= NIL;
BLK2227:
	w = NIL;
	local[33]= w;
	goto IF2223;
IF2222:
	local[33]= NIL;
IF2223:
	local[33]= NIL;
	local[34]= argv[0];
	local[35]= fqv[184];
	local[36]= fqv[432];
	ctx->vsp=local+37;
	w=(pointer)SEND(ctx,3,local+34); /*send*/
	local[34]= w;
WHL2229:
	if (local[34]==NIL) goto WHX2230;
	w=local[34];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[35]= (w)->c.cons.car;
	w=local[34];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[34] = (w)->c.cons.cdr;
	w = local[35];
	local[33] = w;
	local[35]= (pointer)get_sym_func(fqv[289]);
	w=local[33];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[36]= (w)->c.cons.car;
	local[37]= fqv[439];
	local[38]= fqv[190];
	local[39]= NIL;
	w=local[33];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[40]= (w)->c.cons.cdr;
	ctx->vsp=local+41;
	w=(pointer)APPLY(ctx,6,local+35); /*apply*/
	goto WHL2229;
WHX2230:
	local[35]= NIL;
BLK2231:
	w = NIL;
	local[33]= fqv[442];
	w = local[24];
	if (memq(local[33],w)!=NIL) goto IF2233;
	local[33]= loadglobal(fqv[386]);
	local[34]= fqv[387];
	local[35]= fqv[190];
	ctx->vsp=local+36;
	w=(pointer)SEND(ctx,3,local+33); /*send*/
	local[33]= w;
	goto IF2234;
IF2233:
	local[33]= NIL;
IF2234:
	ctx->vsp=local+33;
	w=(*ftab[46])(ctx,0,local+33,&ftab[46],fqv[443]); /*x::window-main-one*/
	local[33]= w;
	goto IF2221;
IF2220:
	local[33]= NIL;
IF2221:
	local[33]= argv[0];
	local[34]= fqv[150];
	local[35]= fqv[432];
	local[36]= NIL;
	ctx->vsp=local+37;
	w=(pointer)SEND(ctx,4,local+33); /*send*/
	local[33]= fqv[409];
IF2217:
	w = local[33];
	local[0]= w;
BLK2070:
	ctx->vsp=local; return(local[0]);}

/*:inverse-kinematics*/
static pointer M2235cascaded_link_inverse_kinematics(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST2237:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[444], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY2238;
	local[1] = makeint((eusinteger_t)50L);
KEY2238:
	if (n & (1<<1)) goto KEY2239;
	local[2] = NIL;
KEY2239:
	if (n & (1<<2)) goto KEY2240;
	local[3] = NIL;
KEY2240:
	if (n & (1<<3)) goto KEY2241;
	local[4] = NIL;
KEY2241:
	if (n & (1<<4)) goto KEY2242;
	local[5] = T;
KEY2242:
	if (n & (1<<5)) goto KEY2243;
	local[6] = T;
KEY2243:
	if (n & (1<<6)) goto KEY2244;
	w = local[3];
	if (!!iscons(w)) goto CON2246;
	local[23]= T;
	goto CON2245;
CON2246:
	local[23]= local[3];
	ctx->vsp=local+24;
	w=(pointer)LENGTH(ctx,1,local+23); /*length*/
	local[23]= w;
	local[24]= fqv[209];
	local[25]= T;
	ctx->vsp=local+26;
	w=(*ftab[31])(ctx,3,local+23,&ftab[31],fqv[208]); /*make-list*/
	local[23]= w;
	goto CON2245;
CON2247:
	local[23]= NIL;
CON2245:
	local[7] = local[23];
KEY2244:
	if (n & (1<<7)) goto KEY2248;
	w = local[3];
	if (!!iscons(w)) goto CON2250;
	local[23]= T;
	goto CON2249;
CON2250:
	local[23]= local[3];
	ctx->vsp=local+24;
	w=(pointer)LENGTH(ctx,1,local+23); /*length*/
	local[23]= w;
	local[24]= fqv[209];
	local[25]= T;
	ctx->vsp=local+26;
	w=(*ftab[31])(ctx,3,local+23,&ftab[31],fqv[208]); /*make-list*/
	local[23]= w;
	goto CON2249;
CON2251:
	local[23]= NIL;
CON2249:
	local[8] = local[23];
KEY2248:
	if (n & (1<<8)) goto KEY2252;
	local[9] = NIL;
KEY2252:
	if (n & (1<<9)) goto KEY2253;
	w = local[3];
	if (!!iscons(w)) goto CON2255;
	local[23]= makeint((eusinteger_t)1L);
	goto CON2254;
CON2255:
	local[23]= local[3];
	ctx->vsp=local+24;
	w=(pointer)LENGTH(ctx,1,local+23); /*length*/
	local[23]= w;
	local[24]= fqv[209];
	local[25]= makeint((eusinteger_t)1L);
	ctx->vsp=local+26;
	w=(*ftab[31])(ctx,3,local+23,&ftab[31],fqv[208]); /*make-list*/
	local[23]= w;
	goto CON2254;
CON2256:
	local[23]= NIL;
CON2254:
	local[10] = local[23];
KEY2253:
	if (n & (1<<10)) goto KEY2257;
	w = local[3];
	if (!!iscons(w)) goto CON2259;
	local[23]= makeint((eusinteger_t)1L);
	ctx->vsp=local+24;
	w=(*ftab[6])(ctx,1,local+23,&ftab[6],fqv[48]); /*deg2rad*/
	local[23]= w;
	goto CON2258;
CON2259:
	local[23]= local[3];
	ctx->vsp=local+24;
	w=(pointer)LENGTH(ctx,1,local+23); /*length*/
	local[23]= w;
	local[24]= fqv[209];
	local[25]= makeint((eusinteger_t)1L);
	ctx->vsp=local+26;
	w=(*ftab[6])(ctx,1,local+25,&ftab[6],fqv[48]); /*deg2rad*/
	local[25]= w;
	ctx->vsp=local+26;
	w=(*ftab[31])(ctx,3,local+23,&ftab[31],fqv[208]); /*make-list*/
	local[23]= w;
	goto CON2258;
CON2260:
	local[23]= NIL;
CON2258:
	local[11] = local[23];
KEY2257:
	if (n & (1<<11)) goto KEY2261;
	local[12] = NIL;
KEY2261:
	if (n & (1<<12)) goto KEY2262;
	local[13] = makeflt(1.0000000000000000000000e+00);
KEY2262:
	if (n & (1<<13)) goto KEY2263;
	local[14] = NIL;
KEY2263:
	if (n & (1<<14)) goto KEY2264;
	local[15] = NIL;
KEY2264:
	if (n & (1<<15)) goto KEY2265;
	local[16] = fqv[33];
KEY2265:
	if (n & (1<<16)) goto KEY2266;
	local[17] = NIL;
KEY2266:
	if (n & (1<<17)) goto KEY2267;
	local[18] = fqv[445];
KEY2267:
	if (n & (1<<18)) goto KEY2268;
	local[19] = makeflt(5.0000000000000000000000e-01);
KEY2268:
	if (n & (1<<19)) goto KEY2269;
	local[20] = NIL;
KEY2269:
	if (n & (1<<20)) goto KEY2270;
	local[21] = NIL;
KEY2270:
	if (n & (1<<21)) goto KEY2271;
	local[22] = NIL;
KEY2271:
	w = argv[2];
	if (!iscons(w)) goto OR2274;
	local[23]= argv[2];
	ctx->vsp=local+24;
	w=(*ftab[43])(ctx,1,local+23,&ftab[43],fqv[321]); /*functionp*/
	if (w!=NIL) goto OR2274;
	goto IF2272;
OR2274:
	local[23]= argv[2];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	argv[2] = w;
	local[23]= argv[2];
	goto IF2273;
IF2272:
	local[23]= NIL;
IF2273:
	local[23]= makeint((eusinteger_t)0L);
	local[24]= local[12];
	ctx->vsp=local+25;
	w=(*ftab[43])(ctx,1,local+24,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2275;
	local[24]= local[12];
	local[25]= local[2];
	ctx->vsp=local+26;
	w=(pointer)FUNCALL(ctx,2,local+24); /*funcall*/
	local[24]= w;
	goto IF2276;
IF2275:
	local[24]= argv[0];
	local[25]= fqv[197];
	local[26]= local[2];
	ctx->vsp=local+27;
	w=(pointer)SEND(ctx,3,local+24); /*send*/
	local[24]= w;
IF2276:
	local[25]= local[24];
	local[26]= fqv[198];
	ctx->vsp=local+27;
	w=(*ftab[18])(ctx,2,local+25,&ftab[18],fqv[128]); /*send-all*/
	local[25]= w;
	local[26]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+27;
	w=(pointer)APPEND(ctx,2,local+25); /*append*/
	local[25]= w;
	ctx->vsp=local+26;
	w=(*ftab[47])(ctx,1,local+25,&ftab[47],fqv[446]); /*remove-duplicates*/
	local[25]= w;
	local[26]= fqv[20];
	ctx->vsp=local+27;
	w=(*ftab[18])(ctx,2,local+25,&ftab[18],fqv[128]); /*send-all*/
	local[25]= w;
	local[26]= argv[0];
	local[27]= fqv[215];
	ctx->vsp=local+28;
	w=(pointer)SEND(ctx,2,local+26); /*send*/
	if (w!=NIL) goto IF2277;
	local[26]= argv[0];
	local[27]= fqv[153];
	ctx->vsp=local+28;
	w=(pointer)SEND(ctx,2,local+26); /*send*/
	local[26]= w;
	goto IF2278;
IF2277:
	local[26]= NIL;
IF2278:
	local[27]= argv[2];
	local[28]= NIL;
	local[29]= NIL;
	local[30]= T;
	local[31]= local[24];
	local[32]= fqv[149];
	ctx->vsp=local+33;
	w=(*ftab[18])(ctx,2,local+31,&ftab[18],fqv[128]); /*send-all*/
	local[31]= w;
	local[32]= NIL;
	local[33]= NIL;
	local[34]= NIL;
	local[35]= NIL;
	local[36]= NIL;
	local[37]= NIL;
	local[38]= NIL;
	local[39]= NIL;
	local[40]= local[24];
	local[41]= fqv[149];
	local[42]= fqv[120];
	ctx->vsp=local+43;
	w=(*ftab[18])(ctx,3,local+40,&ftab[18],fqv[128]); /*send-all*/
	if (local[2]==NIL) goto OR2281;
	if (local[3]==NIL) goto OR2281;
	goto IF2279;
OR2281:
	local[40]= fqv[447];
	ctx->vsp=local+41;
	w=(*ftab[2])(ctx,1,local+40,&ftab[2],fqv[15]); /*warn*/
	w = T;
	ctx->vsp=local+40;
	local[0]=w;
	goto BLK2236;
	goto IF2280;
IF2279:
	local[40]= NIL;
IF2280:
	if (local[8]!=NIL) goto IF2282;
	if (local[7]!=NIL) goto IF2282;
	w = T;
	ctx->vsp=local+40;
	local[0]=w;
	goto BLK2236;
	goto IF2283;
IF2282:
	local[40]= NIL;
IF2283:
	if (local[18]==NIL) goto IF2284;
	local[40]= NIL;
	local[41]= fqv[448];
	if (local[30]==NIL) goto IF2286;
	local[42]= fqv[449];
	goto IF2287;
IF2286:
	local[42]= fqv[450];
IF2287:
	local[43]= fqv[451];
	ctx->vsp=local+44;
	w=(pointer)LOCALTIME(ctx,0,local+44); /*unix:localtime*/
	local[44]= w;
	ctx->vsp=local+45;
	w=(pointer)ASCTIME(ctx,1,local+44); /*unix:asctime*/
	local[44]= w;
	ctx->vsp=local+45;
	w=(*ftab[48])(ctx,2,local+43,&ftab[48],fqv[452]); /*string-trim*/
	local[43]= w;
	local[44]= loadglobal(fqv[453]);
	ctx->vsp=local+45;
	w=(pointer)XFORMAT(ctx,5,local+40); /*format*/
	local[39] = w;
	local[40]= NIL;
	local[41]= fqv[454];
	local[42]= local[39];
	local[43]= local[2];
	ctx->vsp=local+44;
	w=(pointer)XFORMAT(ctx,4,local+40); /*format*/
	local[39] = w;
	local[40]= NIL;
	local[41]= fqv[455];
	local[42]= local[39];
	local[43]= local[3];
	ctx->vsp=local+44;
	w=(pointer)XFORMAT(ctx,4,local+40); /*format*/
	local[39] = w;
	local[40]= NIL;
	local[41]= fqv[456];
	local[42]= local[39];
	local[43]= local[7];
	local[44]= local[8];
	ctx->vsp=local+45;
	w=(pointer)XFORMAT(ctx,5,local+40); /*format*/
	local[39] = w;
	local[40]= NIL;
	local[41]= fqv[457];
	local[42]= local[39];
	local[43]= local[10];
	local[44]= local[11];
	local[45]= local[1];
	ctx->vsp=local+46;
	w=(pointer)XFORMAT(ctx,6,local+40); /*format*/
	local[39] = w;
	local[40]= fqv[458];
	local[41]= fqv[459];
	local[42]= fqv[460];
	ctx->vsp=local+43;
	local[43]= makeclosure(codevec,quotevec,CLO2288,env,argv,local);
	local[44]= argv[2];
	ctx->vsp=local+45;
	w=(pointer)MAPCAR(ctx,2,local+43); /*mapcar*/
	local[43]= w;
	ctx->vsp=local+44;
	w=(pointer)LIST(ctx,1,local+43); /*list*/
	ctx->vsp=local+43;
	local[42]= cons(ctx,local[42],w);
	ctx->vsp=local+43;
	w=(pointer)LIST(ctx,1,local+42); /*list*/
	ctx->vsp=local+42;
	w = cons(ctx,local[41],w);
	ctx->vsp=local+41;
	local[37] = cons(ctx,local[40],w);
	local[40]= fqv[458];
	local[41]= fqv[461];
	local[42]= argv[0];
	local[43]= fqv[154];
	ctx->vsp=local+44;
	w=(pointer)SEND(ctx,2,local+42); /*send*/
	local[42]= w;
	ctx->vsp=local+43;
	w=(pointer)LIST(ctx,1,local+42); /*list*/
	ctx->vsp=local+42;
	w = cons(ctx,local[41],w);
	ctx->vsp=local+41;
	local[38] = cons(ctx,local[40],w);
	local[40]= local[38];
	goto IF2285;
IF2284:
	local[40]= NIL;
IF2285:
	if (local[4]==NIL) goto IF2289;
	w = local[4];
	if (!!iscons(w)) goto IF2291;
	local[40]= local[4];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[4] = w;
	local[40]= local[4];
	goto IF2292;
IF2291:
	local[40]= NIL;
IF2292:
	local[40]= fqv[406];
	w = local[4];
	if (memq(local[40],w)==NIL) goto IF2293;
	local[40]= fqv[406];
	w = local[4];
	ctx->vsp=local+41;
	local[4] = cons(ctx,local[40],w);
	local[40]= local[4];
	goto IF2294;
IF2293:
	local[40]= NIL;
IF2294:
	local[40]= fqv[442];
	w = local[4];
	if (memq(local[40],w)==NIL) goto IF2295;
	local[40]= fqv[442];
	w = local[4];
	ctx->vsp=local+41;
	local[4] = cons(ctx,local[40],w);
	local[40]= local[4];
	goto IF2296;
IF2295:
	local[40]= NIL;
IF2296:
	goto IF2290;
IF2289:
	local[40]= NIL;
IF2290:
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!!iscons(w)) goto IF2297;
	local[40]= local[2];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[2] = w;
	local[40]= local[2];
	goto IF2298;
IF2297:
	local[40]= NIL;
IF2298:
	w = local[3];
	if (!!iscons(w)) goto IF2299;
	local[40]= local[3];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[3] = w;
	local[40]= local[3];
	goto IF2300;
IF2299:
	local[40]= NIL;
IF2300:
	w = local[7];
	if (!!iscons(w)) goto IF2301;
	local[40]= local[7];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[7] = w;
	local[40]= local[7];
	goto IF2302;
IF2301:
	local[40]= NIL;
IF2302:
	w = local[8];
	if (!!iscons(w)) goto IF2303;
	local[40]= local[8];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[8] = w;
	local[40]= local[8];
	goto IF2304;
IF2303:
	local[40]= NIL;
IF2304:
	w = local[10];
	if (!!iscons(w)) goto IF2305;
	local[40]= local[10];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[10] = w;
	local[40]= local[10];
	goto IF2306;
IF2305:
	local[40]= NIL;
IF2306:
	w = local[11];
	if (!!iscons(w)) goto IF2307;
	local[40]= local[11];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[11] = w;
	local[40]= local[11];
	goto IF2308;
IF2307:
	local[40]= NIL;
IF2308:
	if (local[21]==NIL) goto IF2309;
	w = local[21];
	if (!iscons(w)) goto OR2311;
	local[40]= local[21];
	ctx->vsp=local+41;
	w=(*ftab[43])(ctx,1,local+40,&ftab[43],fqv[321]); /*functionp*/
	if (w!=NIL) goto OR2311;
	goto IF2309;
OR2311:
	local[40]= local[21];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[21] = w;
	local[40]= local[21];
	goto IF2310;
IF2309:
	local[40]= NIL;
IF2310:
	if (local[22]==NIL) goto IF2312;
	w = local[22];
	if (!iscons(w)) goto OR2314;
	local[40]= local[22];
	ctx->vsp=local+41;
	w=(*ftab[43])(ctx,1,local+40,&ftab[43],fqv[321]); /*functionp*/
	if (w!=NIL) goto OR2314;
	goto IF2312;
OR2314:
	local[40]= local[22];
	ctx->vsp=local+41;
	w=(pointer)LIST(ctx,1,local+40); /*list*/
	local[22] = w;
	local[40]= local[22];
	goto IF2313;
IF2312:
	local[40]= NIL;
IF2313:
	local[40]= local[8];
	ctx->vsp=local+41;
	w=(pointer)LENGTH(ctx,1,local+40); /*length*/
	local[40]= w;
	local[41]= local[7];
	ctx->vsp=local+42;
	w=(pointer)LENGTH(ctx,1,local+41); /*length*/
	local[41]= w;
	local[42]= local[3];
	ctx->vsp=local+43;
	w=(pointer)LENGTH(ctx,1,local+42); /*length*/
	local[42]= w;
	local[43]= local[2];
	ctx->vsp=local+44;
	w=(pointer)LENGTH(ctx,1,local+43); /*length*/
	local[43]= w;
	local[44]= argv[2];
	ctx->vsp=local+45;
	w=(pointer)LENGTH(ctx,1,local+44); /*length*/
	local[44]= w;
	ctx->vsp=local+45;
	w=(pointer)NUMEQUAL(ctx,5,local+40); /*=*/
	if (w!=NIL) goto IF2315;
	local[40]= fqv[462];
	local[41]= local[8];
	ctx->vsp=local+42;
	w=(pointer)LENGTH(ctx,1,local+41); /*length*/
	local[41]= w;
	local[42]= local[7];
	ctx->vsp=local+43;
	w=(pointer)LENGTH(ctx,1,local+42); /*length*/
	local[42]= w;
	local[43]= local[3];
	ctx->vsp=local+44;
	w=(pointer)LENGTH(ctx,1,local+43); /*length*/
	local[43]= w;
	local[44]= local[2];
	ctx->vsp=local+45;
	w=(pointer)LENGTH(ctx,1,local+44); /*length*/
	local[44]= w;
	local[45]= argv[2];
	ctx->vsp=local+46;
	w=(pointer)LENGTH(ctx,1,local+45); /*length*/
	local[45]= w;
	ctx->vsp=local+46;
	w=(*ftab[2])(ctx,6,local+40,&ftab[2],fqv[15]); /*warn*/
	w = T;
	ctx->vsp=local+40;
	local[0]=w;
	goto BLK2236;
	goto IF2316;
IF2315:
	local[40]= NIL;
IF2316:
	local[40]= local[21];
	ctx->vsp=local+41;
	w=(pointer)LENGTH(ctx,1,local+40); /*length*/
	local[40]= w;
	local[41]= local[22];
	ctx->vsp=local+42;
	w=(pointer)LENGTH(ctx,1,local+41); /*length*/
	if (w==local[40]) goto IF2317;
	local[40]= fqv[463];
	local[41]= local[21];
	ctx->vsp=local+42;
	w=(pointer)LENGTH(ctx,1,local+41); /*length*/
	local[41]= w;
	local[42]= local[22];
	ctx->vsp=local+43;
	w=(pointer)LENGTH(ctx,1,local+42); /*length*/
	local[42]= w;
	ctx->vsp=local+43;
	w=(*ftab[2])(ctx,3,local+40,&ftab[2],fqv[15]); /*warn*/
	w = T;
	ctx->vsp=local+40;
	local[0]=w;
	goto BLK2236;
	goto IF2318;
IF2317:
	local[40]= NIL;
IF2318:
	ctx->vsp=local+40;
	local[40]= makeclosure(codevec,quotevec,CLO2319,env,argv,local);
	local[41]= local[21];
	ctx->vsp=local+42;
	w=(pointer)MAPCAR(ctx,2,local+40); /*mapcar*/
	local[40]= w;
	local[41]= (pointer)get_sym_func(fqv[289]);
	local[42]= argv[0];
	local[43]= fqv[464];
	local[44]= fqv[336];
	local[45]= local[8];
	local[46]= fqv[410];
	local[47]= local[7];
	local[48]= fqv[465];
	if (local[17]!=NIL) goto IF2320;
	if (local[14]==NIL) goto IF2320;
	local[49]= argv[0];
	local[50]= fqv[210];
	local[51]= NIL;
	local[52]= local[16];
	ctx->vsp=local+53;
	w=(pointer)SEND(ctx,4,local+49); /*send*/
	local[49]= w;
	goto IF2321;
IF2320:
	local[49]= makeint((eusinteger_t)0L);
IF2321:
	local[50]= (pointer)get_sym_func(fqv[323]);
	ctx->vsp=local+51;
	local[51]= makeclosure(codevec,quotevec,CLO2322,env,argv,local);
	local[52]= local[40];
	ctx->vsp=local+53;
	w=(pointer)MAPCAR(ctx,2,local+51); /*mapcar*/
	local[51]= w;
	ctx->vsp=local+52;
	w=(*ftab[26])(ctx,2,local+50,&ftab[26],fqv[196]); /*reduce*/
	local[50]= w;
	ctx->vsp=local+51;
	w=(pointer)PLUS(ctx,2,local+49); /*+*/
	local[49]= w;
	local[50]= fqv[358];
	local[51]= local[24];
	local[52]= local[0];
	ctx->vsp=local+53;
	w=(pointer)APPLY(ctx,12,local+41); /*apply*/
	local[41]= w;
	local[42]= local[0];
	ctx->vsp=local+43;
	w=(pointer)NCONC(ctx,2,local+41); /*nconc*/
	local[32] = w;
	w = local[32];
	local[40]= argv[0];
	local[41]= fqv[405];
	local[42]= local[24];
	ctx->vsp=local+43;
	w=(pointer)SEND(ctx,3,local+40); /*send*/
	local[40]= local[18];
	w = fqv[466];
	if (memq(local[40],w)==NIL) goto IF2323;
	local[40]= argv[0];
	local[41]= fqv[150];
	local[42]= fqv[421];
	local[43]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+44;
	local[44]= makeclosure(codevec,quotevec,CLO2325,env,argv,local);
	local[45]= argv[2];
	ctx->vsp=local+46;
	w=(pointer)LENGTH(ctx,1,local+45); /*length*/
	local[45]= w;
	ctx->vsp=local+46;
	w=(*ftab[31])(ctx,1,local+45,&ftab[31],fqv[208]); /*make-list*/
	local[45]= w;
	ctx->vsp=local+46;
	w=(pointer)MAPCAR(ctx,2,local+44); /*mapcar*/
	local[43]= w;
	if (local[14]==NIL) goto IF2326;
	local[44]= fqv[258];
	ctx->vsp=local+45;
	w=(pointer)LIST(ctx,1,local+44); /*list*/
	local[44]= w;
	ctx->vsp=local+45;
	w=(pointer)LIST(ctx,1,local+44); /*list*/
	local[44]= w;
	goto IF2327;
IF2326:
	local[44]= NIL;
IF2327:
	local[45]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+46;
	local[46]= makeclosure(codevec,quotevec,CLO2328,env,argv,local);
	local[47]= local[22];
	ctx->vsp=local+48;
	w=(pointer)LENGTH(ctx,1,local+47); /*length*/
	local[47]= w;
	ctx->vsp=local+48;
	w=(*ftab[31])(ctx,1,local+47,&ftab[31],fqv[208]); /*make-list*/
	local[47]= w;
	ctx->vsp=local+48;
	w=(pointer)MAPCAR(ctx,2,local+46); /*mapcar*/
	local[45]= w;
	ctx->vsp=local+46;
	w=(pointer)APPEND(ctx,3,local+43); /*append*/
	local[43]= w;
	ctx->vsp=local+44;
	w=(pointer)SEND(ctx,4,local+40); /*send*/
	local[40]= w;
	goto IF2324;
IF2323:
	local[40]= NIL;
IF2324:
WHL2329:
	local[40]= local[23];
	ctx->vsp=local+41;
	w=(pointer)ADD1(ctx,1,local+40); /*1+*/
	local[23] = w;
	local[40]= local[23];
	local[41]= local[1];
	ctx->vsp=local+42;
	w=(pointer)LESSP(ctx,2,local+40); /*<*/
	if (w==NIL) goto WHX2330;
	ctx->vsp=local+40;
	local[40]= makeclosure(codevec,quotevec,CLO2332,env,argv,local);
	local[41]= argv[2];
	ctx->vsp=local+42;
	w=(pointer)MAPCAR(ctx,2,local+40); /*mapcar*/
	local[40]= w;
	ctx->vsp=local+41;
	local[41]= makeclosure(codevec,quotevec,CLO2333,env,argv,local);
	local[42]= local[3];
	local[43]= local[40];
	local[44]= local[8];
	ctx->vsp=local+45;
	w=(pointer)MAPCAR(ctx,4,local+41); /*mapcar*/
	local[41]= w;
	ctx->vsp=local+42;
	local[42]= makeclosure(codevec,quotevec,CLO2334,env,argv,local);
	local[43]= local[3];
	local[44]= local[40];
	local[45]= local[7];
	ctx->vsp=local+46;
	w=(pointer)MAPCAR(ctx,4,local+42); /*mapcar*/
	local[42]= w;
	local[43]= (pointer)get_sym_func(fqv[289]);
	local[44]= argv[0];
	local[45]= fqv[467];
	local[46]= local[41];
	local[47]= local[42];
	local[48]= fqv[468];
	local[49]= local[40];
	local[50]= fqv[469];
	local[51]= local[19];
	local[52]= fqv[470];
	local[53]= local[1];
	local[54]= fqv[471];
	local[55]= local[23];
	local[56]= fqv[410];
	local[57]= local[7];
	local[58]= fqv[336];
	local[59]= local[8];
	local[60]= fqv[301];
	local[61]= local[3];
	local[62]= fqv[358];
	local[63]= local[24];
	local[64]= fqv[472];
	local[65]= local[10];
	local[66]= fqv[473];
	local[67]= local[11];
	local[68]= fqv[474];
	local[69]= local[21];
	local[70]= fqv[475];
	local[71]= local[22];
	local[72]= fqv[341];
	local[73]= local[4];
	local[74]= fqv[476];
	local[75]= local[32];
	local[76]= local[0];
	ctx->vsp=local+77;
	w=(pointer)APPLY(ctx,34,local+43); /*apply*/
	local[30] = w;
	local[43]= local[30];
	if (fqv[433]!=local[43]) goto IF2335;
	local[30] = T;
	w = NIL;
	ctx->vsp=local+43;
	local[40]=w;
	goto BLK2331;
	goto IF2336;
IF2335:
	local[43]= NIL;
IF2336:
	w = local[43];
	goto WHL2329;
WHX2330:
	local[40]= NIL;
BLK2331:
	if (local[14]==NIL) goto IF2337;
	local[40]= argv[0];
	local[41]= fqv[333];
	ctx->vsp=local+42;
	w=(pointer)SEND(ctx,2,local+40); /*send*/
	local[40]= w;
	goto IF2338;
IF2337:
	local[40]= NIL;
IF2338:
	ctx->vsp=local+40;
	local[40]= makeclosure(codevec,quotevec,CLO2339,env,argv,local);
	local[41]= argv[2];
	ctx->vsp=local+42;
	w=(pointer)MAPCAR(ctx,2,local+40); /*mapcar*/
	local[40]= w;
	ctx->vsp=local+41;
	local[41]= makeclosure(codevec,quotevec,CLO2340,env,argv,local);
	local[42]= local[3];
	local[43]= local[40];
	local[44]= local[8];
	ctx->vsp=local+45;
	w=(pointer)MAPCAR(ctx,4,local+41); /*mapcar*/
	local[28] = w;
	ctx->vsp=local+41;
	local[41]= makeclosure(codevec,quotevec,CLO2341,env,argv,local);
	local[42]= local[3];
	local[43]= local[40];
	local[44]= local[7];
	ctx->vsp=local+45;
	w=(pointer)MAPCAR(ctx,4,local+41); /*mapcar*/
	local[29] = w;
	local[41]= argv[0];
	local[42]= fqv[415];
	local[43]= local[30];
	local[44]= local[28];
	local[45]= local[29];
	local[46]= local[7];
	local[47]= local[8];
	local[48]= local[10];
	local[49]= local[11];
	local[50]= local[13];
	local[51]= local[14];
	local[52]= local[15];
	local[53]= local[16];
	local[54]= fqv[333];
	local[55]= NIL;
	ctx->vsp=local+56;
	w=(pointer)SEND(ctx,15,local+41); /*send*/
	local[30] = w;
	w = local[30];
	ctx->vsp=local+40;
	local[40]= makeclosure(codevec,quotevec,CLO2342,env,argv,local);
	local[41]= local[24];
	local[42]= local[31];
	ctx->vsp=local+43;
	w=(pointer)MAPCAR(ctx,3,local+40); /*mapcar*/
	local[40]= argv[0];
	local[41]= fqv[405];
	local[42]= local[24];
	ctx->vsp=local+43;
	w=(pointer)SEND(ctx,3,local+40); /*send*/
	if (local[20]==NIL) goto IF2343;
	local[40]= argv[0];
	local[41]= fqv[477];
	ctx->vsp=local+42;
	w=(pointer)SEND(ctx,2,local+40); /*send*/
	local[33] = w;
	local[40]= local[33];
	goto IF2344;
IF2343:
	local[40]= NIL;
IF2344:
	local[40]= local[30];
	if (local[40]!=NIL) goto OR2346;
	local[40]= ((local[6])==NIL?T:NIL);
OR2346:
	if (local[40]==NIL) goto AND2345;
	local[40]= ((local[33])==NIL?T:NIL);
AND2345:
	local[30] = local[40];
	local[40]= local[18];
	w = fqv[478];
	if (memq(local[40],w)!=NIL) goto OR2349;
	local[40]= local[18];
	w = fqv[479];
	if (memq(local[40],w)==NIL) goto AND2350;
	if (local[30]!=NIL) goto AND2350;
	goto OR2349;
AND2350:
	goto IF2347;
OR2349:
	local[40]= NIL;
	local[41]= fqv[480];
	ctx->vsp=local+42;
	w=(pointer)GETPID(ctx,0,local+42); /*unix:getpid*/
	local[42]= w;
	ctx->vsp=local+43;
	w=(pointer)XFORMAT(ctx,3,local+40); /*format*/
	local[34] = w;
	ctx->vsp=local+40;
	w=(pointer)LOCALTIME(ctx,0,local+40); /*unix:localtime*/
	local[40]= w;
	ctx->vsp=local+41;
	w=(pointer)GETTIMEOFDAY(ctx,0,local+41); /*unix:gettimeofday*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[41]= (w)->c.cons.car;
	local[42]= makeint((eusinteger_t)48L);
	local[43]= makeint((eusinteger_t)32L);
	local[44]= NIL;
	local[45]= fqv[481];
	local[46]= argv[0];
	ctx->vsp=local+47;
	w=(pointer)GETCLASS(ctx,1,local+46); /*class*/
	local[46]= w;
	local[47]= fqv[3];
	ctx->vsp=local+48;
	w=(pointer)SEND(ctx,2,local+46); /*send*/
	local[46]= w;
	local[47]= makeint((eusinteger_t)1900L);
	local[48]= local[40];
	local[49]= makeint((eusinteger_t)5L);
	ctx->vsp=local+50;
	w=(pointer)ELT(ctx,2,local+48); /*elt*/
	local[48]= w;
	ctx->vsp=local+49;
	w=(pointer)PLUS(ctx,2,local+47); /*+*/
	local[47]= w;
	local[48]= makeint((eusinteger_t)1L);
	local[49]= local[40];
	local[50]= makeint((eusinteger_t)4L);
	ctx->vsp=local+51;
	w=(pointer)ELT(ctx,2,local+49); /*elt*/
	local[49]= w;
	ctx->vsp=local+50;
	w=(pointer)PLUS(ctx,2,local+48); /*+*/
	local[48]= w;
	local[49]= local[40];
	local[50]= makeint((eusinteger_t)3L);
	ctx->vsp=local+51;
	w=(pointer)ELT(ctx,2,local+49); /*elt*/
	local[49]= w;
	local[50]= local[40];
	local[51]= makeint((eusinteger_t)2L);
	ctx->vsp=local+52;
	w=(pointer)ELT(ctx,2,local+50); /*elt*/
	local[50]= w;
	local[51]= local[40];
	local[52]= makeint((eusinteger_t)1L);
	ctx->vsp=local+53;
	w=(pointer)ELT(ctx,2,local+51); /*elt*/
	local[51]= w;
	local[52]= local[40];
	local[53]= makeint((eusinteger_t)0L);
	ctx->vsp=local+54;
	w=(pointer)ELT(ctx,2,local+52); /*elt*/
	local[52]= w;
	local[53]= NIL;
	local[54]= fqv[482];
	local[55]= local[41];
	ctx->vsp=local+56;
	w=(pointer)XFORMAT(ctx,3,local+53); /*format*/
	local[53]= w;
	local[54]= makeint((eusinteger_t)0L);
	local[55]= makeint((eusinteger_t)2L);
	ctx->vsp=local+56;
	w=(pointer)SUBSEQ(ctx,3,local+53); /*subseq*/
	local[53]= w;
	local[54]= NIL;
	local[55]= fqv[483];
	local[56]= local[41];
	ctx->vsp=local+57;
	w=(pointer)XFORMAT(ctx,3,local+54); /*format*/
	local[54]= w;
	local[55]= makeint((eusinteger_t)2L);
	local[56]= makeint((eusinteger_t)4L);
	ctx->vsp=local+57;
	w=(pointer)SUBSEQ(ctx,3,local+54); /*subseq*/
	local[54]= w;
	local[55]= NIL;
	local[56]= fqv[484];
	local[57]= local[41];
	ctx->vsp=local+58;
	w=(pointer)XFORMAT(ctx,3,local+55); /*format*/
	local[55]= w;
	local[56]= makeint((eusinteger_t)4L);
	ctx->vsp=local+57;
	w=(pointer)SUBSEQ(ctx,2,local+55); /*subseq*/
	local[55]= w;
	ctx->vsp=local+56;
	w=(pointer)XFORMAT(ctx,12,local+44); /*format*/
	local[44]= w;
	ctx->vsp=local+45;
	w=(*ftab[49])(ctx,3,local+42,&ftab[49],fqv[485]); /*substitute*/
	local[36] = w;
	local[40]= NIL;
	local[41]= fqv[486];
	local[42]= local[34];
	local[43]= local[36];
	if (local[30]==NIL) goto IF2351;
	local[44]= fqv[487];
	goto IF2352;
IF2351:
	local[44]= fqv[488];
IF2352:
	ctx->vsp=local+45;
	w=(pointer)XFORMAT(ctx,5,local+40); /*format*/
	local[35] = w;
	local[40]= local[34];
	ctx->vsp=local+41;
	w=(*ftab[50])(ctx,1,local+40,&ftab[50],fqv[489]); /*unix:mkdir*/
	local[40]= local[35];
	local[41]= fqv[178];
	local[42]= fqv[179];
	ctx->vsp=local+43;
	w=(*ftab[25])(ctx,3,local+40,&ftab[25],fqv[180]); /*open*/
	local[40]= w;
	ctx->vsp=local+41;
	w = makeclosure(codevec,quotevec,UWP2353,env,argv,local);
	local[41]=(pointer)(ctx->protfp); local[42]=w;
	ctx->protfp=(struct protectframe *)(local+41);
	local[43]= local[40];
	local[44]= fqv[490];
	local[45]= local[39];
	ctx->vsp=local+46;
	w=(pointer)XFORMAT(ctx,3,local+43); /*format*/
	local[43]= local[40];
	local[44]= local[37];
	ctx->vsp=local+45;
	w=(*ftab[51])(ctx,2,local+43,&ftab[51],fqv[491]); /*dump-structure*/
	local[43]= local[40];
	local[44]= local[38];
	ctx->vsp=local+45;
	w=(*ftab[51])(ctx,2,local+43,&ftab[51],fqv[491]); /*dump-structure*/
	ctx->vsp=local+43;
	UWP2353(ctx,0,local+43,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[40]= local[18];
	w = fqv[492];
	if (memq(local[40],w)==NIL) goto IF2354;
	local[40]= NIL;
	local[41]= fqv[493];
	local[42]= local[34];
	local[43]= local[36];
	if (local[30]==NIL) goto IF2356;
	local[44]= fqv[494];
	goto IF2357;
IF2356:
	local[44]= fqv[495];
IF2357:
	ctx->vsp=local+45;
	w=(pointer)XFORMAT(ctx,5,local+40); /*format*/
	local[40]= w;
	local[41]= fqv[178];
	local[42]= fqv[179];
	ctx->vsp=local+43;
	w=(*ftab[25])(ctx,3,local+40,&ftab[25],fqv[180]); /*open*/
	local[40]= w;
	ctx->vsp=local+41;
	w = makeclosure(codevec,quotevec,UWP2358,env,argv,local);
	local[41]=(pointer)(ctx->protfp); local[42]=w;
	ctx->protfp=(struct protectframe *)(local+41);
	local[43]= local[40];
	local[44]= fqv[496];
	local[45]= local[23];
	ctx->vsp=local+46;
	w=(pointer)XFORMAT(ctx,3,local+43); /*format*/
	local[43]= local[40];
	local[44]= fqv[497];
	ctx->vsp=local+45;
	local[45]= makeclosure(codevec,quotevec,CLO2359,env,argv,local);
	local[46]= argv[0];
	local[47]= fqv[184];
	local[48]= fqv[421];
	ctx->vsp=local+49;
	w=(pointer)SEND(ctx,3,local+46); /*send*/
	local[46]= w;
	ctx->vsp=local+47;
	w=(pointer)MAPCAR(ctx,2,local+45); /*mapcar*/
	local[45]= w;
	ctx->vsp=local+46;
	w=(pointer)XFORMAT(ctx,3,local+43); /*format*/
	local[43]= local[40];
	local[44]= fqv[498];
	local[45]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+46;
	local[46]= makeclosure(codevec,quotevec,CLO2360,env,argv,local);
	local[47]= local[10];
	local[48]= local[11];
	ctx->vsp=local+49;
	w=(pointer)MAPCAR(ctx,3,local+46); /*mapcar*/
	local[45]= w;
	if (local[14]==NIL) goto IF2361;
	local[46]= fqv[258];
	local[47]= makeflt(1.0000000000000000208167e-03);
	local[48]= local[13];
	ctx->vsp=local+49;
	w=(pointer)TIMES(ctx,2,local+47); /***/
	local[47]= w;
	ctx->vsp=local+48;
	w=(pointer)LIST(ctx,2,local+46); /*list*/
	local[46]= w;
	ctx->vsp=local+47;
	w=(pointer)LIST(ctx,1,local+46); /*list*/
	local[46]= w;
	goto IF2362;
IF2361:
	local[46]= NIL;
IF2362:
	ctx->vsp=local+47;
	w=(pointer)APPEND(ctx,2,local+45); /*append*/
	local[45]= w;
	ctx->vsp=local+46;
	w=(pointer)XFORMAT(ctx,3,local+43); /*format*/
	local[43]= argv[0];
	local[44]= fqv[421];
	ctx->vsp=local+45;
	w=(*ftab[52])(ctx,2,local+43,&ftab[52],fqv[499]); /*remprop*/
	ctx->vsp=local+43;
	UWP2358(ctx,0,local+43,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[40]= w;
	goto IF2355;
IF2354:
	local[40]= NIL;
IF2355:
	goto IF2348;
IF2347:
	local[40]= NIL;
IF2348:
	if (local[30]==NIL) goto IF2363;
	local[40]= argv[0];
	local[41]= fqv[154];
	ctx->vsp=local+42;
	w=(pointer)SEND(ctx,2,local+40); /*send*/
	local[40]= w;
	goto IF2364;
IF2363:
	if (local[5]==NIL) goto IF2365;
	local[40]= fqv[500];
	ctx->vsp=local+41;
	w=(*ftab[2])(ctx,1,local+40,&ftab[2],fqv[15]); /*warn*/
	local[40]= makeint((eusinteger_t)0L);
	local[41]= local[3];
	ctx->vsp=local+42;
	w=(pointer)LENGTH(ctx,1,local+41); /*length*/
	local[41]= w;
WHL2368:
	local[42]= local[40];
	w = local[41];
	if ((eusinteger_t)local[42] >= (eusinteger_t)w) goto WHX2369;
	local[42]= fqv[501];
	local[43]= local[28];
	local[44]= local[40];
	ctx->vsp=local+45;
	w=(pointer)ELT(ctx,2,local+43); /*elt*/
	local[43]= w;
	local[44]= local[28];
	local[45]= local[40];
	ctx->vsp=local+46;
	w=(pointer)ELT(ctx,2,local+44); /*elt*/
	local[44]= w;
	ctx->vsp=local+45;
	w=(pointer)VNORM(ctx,1,local+44); /*norm*/
	local[44]= w;
	local[45]= local[10];
	local[46]= local[40];
	ctx->vsp=local+47;
	w=(pointer)ELT(ctx,2,local+45); /*elt*/
	local[45]= w;
	ctx->vsp=local+46;
	w=(*ftab[2])(ctx,4,local+42,&ftab[2],fqv[15]); /*warn*/
	local[42]= fqv[502];
	local[43]= local[29];
	local[44]= local[40];
	ctx->vsp=local+45;
	w=(pointer)ELT(ctx,2,local+43); /*elt*/
	local[43]= w;
	local[44]= local[29];
	local[45]= local[40];
	ctx->vsp=local+46;
	w=(pointer)ELT(ctx,2,local+44); /*elt*/
	local[44]= w;
	ctx->vsp=local+45;
	w=(pointer)VNORM(ctx,1,local+44); /*norm*/
	local[44]= w;
	local[45]= local[11];
	local[46]= local[40];
	ctx->vsp=local+47;
	w=(pointer)ELT(ctx,2,local+45); /*elt*/
	local[45]= w;
	ctx->vsp=local+46;
	w=(*ftab[2])(ctx,4,local+42,&ftab[2],fqv[15]); /*warn*/
	local[42]= local[40];
	ctx->vsp=local+43;
	w=(pointer)ADD1(ctx,1,local+42); /*1+*/
	local[40] = w;
	goto WHL2368;
WHX2369:
	local[42]= NIL;
BLK2370:
	w = NIL;
	if (local[14]==NIL) goto IF2371;
	local[40]= argv[0];
	local[41]= fqv[503];
	local[42]= local[14];
	local[43]= fqv[332];
	local[44]= local[15];
	local[45]= fqv[336];
	local[46]= local[16];
	local[47]= fqv[333];
	local[48]= NIL;
	ctx->vsp=local+49;
	w=(pointer)SEND(ctx,9,local+40); /*send*/
	local[40]= w;
	local[41]= fqv[504];
	local[42]= local[40];
	local[43]= local[40];
	ctx->vsp=local+44;
	w=(pointer)VNORM(ctx,1,local+43); /*norm*/
	local[43]= w;
	local[44]= local[13];
	ctx->vsp=local+45;
	w=(*ftab[2])(ctx,4,local+41,&ftab[2],fqv[15]); /*warn*/
	local[40]= w;
	goto IF2372;
IF2371:
	local[40]= NIL;
IF2372:
	local[40]= fqv[505];
	local[41]= argv[0];
WHL2373:
	local[42]= local[41];
	local[43]= fqv[215];
	ctx->vsp=local+44;
	w=(pointer)SEND(ctx,2,local+42); /*send*/
	if (w==NIL) goto WHX2374;
	local[42]= local[41];
	local[43]= fqv[215];
	ctx->vsp=local+44;
	w=(pointer)SEND(ctx,2,local+42); /*send*/
	local[41] = w;
	goto WHL2373;
WHX2374:
	local[42]= NIL;
BLK2375:
	w = local[41];
	local[41]= w;
	local[42]= fqv[122];
	ctx->vsp=local+43;
	w=(pointer)SEND(ctx,2,local+41); /*send*/
	local[41]= w;
	ctx->vsp=local+42;
	w=(*ftab[2])(ctx,2,local+40,&ftab[2],fqv[15]); /*warn*/
	local[40]= fqv[506];
	local[41]= local[25];
	ctx->vsp=local+42;
	w=(*ftab[2])(ctx,2,local+40,&ftab[2],fqv[15]); /*warn*/
	if (local[20]==NIL) goto IF2376;
	local[40]= fqv[507];
	local[41]= local[33];
	ctx->vsp=local+42;
	w=(*ftab[2])(ctx,2,local+40,&ftab[2],fqv[15]); /*warn*/
	local[40]= w;
	goto IF2377;
IF2376:
	local[40]= NIL;
IF2377:
	local[40]= fqv[508];
	local[41]= argv[2];
	ctx->vsp=local+42;
	w=(pointer)LIST(ctx,1,local+41); /*list*/
	local[41]= w;
	local[42]= local[0];
	ctx->vsp=local+43;
	w=(pointer)APPEND(ctx,2,local+41); /*append*/
	local[41]= w;
	ctx->vsp=local+42;
	w=(*ftab[2])(ctx,2,local+40,&ftab[2],fqv[15]); /*warn*/
	if (local[18]==NIL) goto IF2378;
	local[40]= NIL;
	local[41]= NIL;
	local[42]= NIL;
	local[43]= NIL;
	local[44]= NIL;
	ctx->vsp=local+45;
	local[45]= makeclosure(codevec,quotevec,FLET2380,env,argv,local);
	ctx->vsp=local+46;
	local[46]= makeclosure(codevec,quotevec,FLET2381,env,argv,local);
	ctx->vsp=local+47;
	local[47]= makeclosure(codevec,quotevec,FLET2382,env,argv,local);
	ctx->vsp=local+48;
	local[48]= makeclosure(codevec,quotevec,FLET2383,env,argv,local);
	ctx->vsp=local+49;
	local[49]= makeclosure(codevec,quotevec,FLET2384,env,argv,local);
	ctx->vsp=local+50;
	local[50]= makeclosure(codevec,quotevec,FLET2385,env,argv,local);
	local[51]= local[0];
	w = local[50];
	ctx->vsp=local+52;
	w=FLET2385(ctx,1,local+51,w);
	local[41] = w;
	local[51]= makeint((eusinteger_t)0L);
	local[52]= local[41];
	ctx->vsp=local+53;
	w=(pointer)LENGTH(ctx,1,local+52); /*length*/
	local[52]= w;
	local[53]= makeint((eusinteger_t)2L);
	ctx->vsp=local+54;
	w=(pointer)QUOTIENT(ctx,2,local+52); /*/*/
	local[52]= w;
WHL2387:
	local[53]= local[51];
	w = local[52];
	if ((eusinteger_t)local[53] >= (eusinteger_t)w) goto WHX2388;
	local[53]= local[41];
	local[54]= makeint((eusinteger_t)2L);
	{ eusinteger_t i,j;
		j=intval(local[51]); i=intval(local[54]);
		local[54]=(makeint(i * j));}
	ctx->vsp=local+55;
	w=(pointer)ELT(ctx,2,local+53); /*elt*/
	local[53]= w;
	if (fqv[301]==local[53]) goto IF2390;
	local[53]= local[41];
	local[54]= makeint((eusinteger_t)1L);
	local[55]= makeint((eusinteger_t)2L);
	{ eusinteger_t i,j;
		j=intval(local[51]); i=intval(local[55]);
		local[55]=(makeint(i * j));}
	w = local[55];
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[54]= (pointer)((eusinteger_t)local[54] + (eusinteger_t)w);
	w = local[46];
	ctx->vsp=local+55;
	w=FLET2381(ctx,2,local+53,w);
	local[53]= w;
	goto IF2391;
IF2390:
	local[53]= NIL;
IF2391:
	local[53]= local[51];
	ctx->vsp=local+54;
	w=(pointer)ADD1(ctx,1,local+53); /*1+*/
	local[51] = w;
	goto WHL2387;
WHX2388:
	local[53]= NIL;
BLK2389:
	w = NIL;
	local[51]= makeint((eusinteger_t)0L);
	local[52]= local[41];
	ctx->vsp=local+53;
	w=(pointer)LENGTH(ctx,1,local+52); /*length*/
	local[52]= w;
WHL2393:
	local[53]= local[51];
	w = local[52];
	if ((eusinteger_t)local[53] >= (eusinteger_t)w) goto WHX2394;
	local[53]= local[41];
	local[54]= local[51];
	w = local[47];
	ctx->vsp=local+55;
	w=FLET2382(ctx,2,local+53,w);
	local[53]= local[51];
	ctx->vsp=local+54;
	w=(pointer)ADD1(ctx,1,local+53); /*1+*/
	local[51] = w;
	goto WHL2393;
WHX2394:
	local[53]= NIL;
BLK2395:
	w = NIL;
	local[51]= makeint((eusinteger_t)0L);
	local[52]= fqv[301];
	local[53]= local[41];
	ctx->vsp=local+54;
	w=(*ftab[53])(ctx,2,local+52,&ftab[53],fqv[509]); /*count*/
	local[52]= w;
WHL2397:
	local[53]= local[51];
	w = local[52];
	if ((eusinteger_t)local[53] >= (eusinteger_t)w) goto WHX2398;
	local[53]= fqv[301];
	local[54]= local[41];
	local[55]= fqv[510];
	local[56]= local[51];
	ctx->vsp=local+57;
	w=(pointer)ADD1(ctx,1,local+56); /*1+*/
	local[56]= w;
	ctx->vsp=local+57;
	w=(*ftab[32])(ctx,4,local+53,&ftab[32],fqv[213]); /*position*/
	local[40] = w;
	if (local[40]==NIL) goto IF2400;
	local[53]= local[41];
	local[54]= local[40];
	local[55]= makeint((eusinteger_t)1L);
	ctx->vsp=local+56;
	w=(pointer)PLUS(ctx,2,local+54); /*+*/
	local[54]= w;
	ctx->vsp=local+55;
	w=(pointer)ELT(ctx,2,local+53); /*elt*/
	if (!!iscons(w)) goto CON2403;
	local[53]= local[41];
	local[54]= local[40];
	local[55]= makeint((eusinteger_t)1L);
	ctx->vsp=local+56;
	w=(pointer)PLUS(ctx,2,local+54); /*+*/
	local[54]= w;
	local[55]= local[41];
	local[56]= local[40];
	local[57]= makeint((eusinteger_t)1L);
	ctx->vsp=local+58;
	w=(pointer)PLUS(ctx,2,local+56); /*+*/
	local[56]= w;
	ctx->vsp=local+57;
	w=(pointer)ELT(ctx,2,local+55); /*elt*/
	local[55]= w;
	w = local[49];
	ctx->vsp=local+56;
	w=FLET2384(ctx,1,local+55,w);
	local[55]= w;
	ctx->vsp=local+56;
	w=(pointer)SETELT(ctx,3,local+53); /*setelt*/
	local[53]= w;
	goto CON2402;
CON2403:
	local[53]= local[41];
	local[54]= local[40];
	local[55]= makeint((eusinteger_t)1L);
	ctx->vsp=local+56;
	w=(pointer)PLUS(ctx,2,local+54); /*+*/
	local[54]= w;
	local[55]= fqv[511];
	ctx->vsp=local+56;
	local[56]= makeclosure(codevec,quotevec,CLO2405,env,argv,local);
	local[57]= local[41];
	local[58]= local[40];
	local[59]= makeint((eusinteger_t)1L);
	ctx->vsp=local+60;
	w=(pointer)PLUS(ctx,2,local+58); /*+*/
	local[58]= w;
	ctx->vsp=local+59;
	w=(pointer)ELT(ctx,2,local+57); /*elt*/
	local[57]= w;
	ctx->vsp=local+58;
	w=(pointer)MAPCAR(ctx,2,local+56); /*mapcar*/
	local[56]= w;
	ctx->vsp=local+57;
	w=(pointer)APPEND(ctx,2,local+55); /*append*/
	local[55]= w;
	ctx->vsp=local+56;
	w=(pointer)SETELT(ctx,3,local+53); /*setelt*/
	local[53]= w;
	goto CON2402;
CON2404:
	local[53]= NIL;
CON2402:
	goto IF2401;
IF2400:
	local[53]= NIL;
IF2401:
	local[53]= local[51];
	ctx->vsp=local+54;
	w=(pointer)ADD1(ctx,1,local+53); /*1+*/
	local[51] = w;
	goto WHL2397;
WHX2398:
	local[53]= NIL;
BLK2399:
	w = NIL;
	local[51]= fqv[512];
	local[52]= argv[0];
	ctx->vsp=local+53;
	w=(pointer)GETCLASS(ctx,1,local+52); /*class*/
	local[52]= w;
	local[53]= fqv[3];
	ctx->vsp=local+54;
	w=(pointer)SEND(ctx,2,local+52); /*send*/
	local[52]= w;
	local[53]= fqv[36];
	ctx->vsp=local+54;
	w=(pointer)LIST(ctx,1,local+53); /*list*/
	ctx->vsp=local+53;
	w = cons(ctx,local[52],w);
	ctx->vsp=local+52;
	local[42] = cons(ctx,local[51],w);
	local[51]= fqv[513];
	local[52]= fqv[289];
	local[53]= fqv[514];
	local[54]= fqv[159];
	local[55]= fqv[86];
	local[56]= fqv[515];
	local[57]= argv[0];
	local[58]= fqv[515];
	ctx->vsp=local+59;
	w=(pointer)SEND(ctx,2,local+57); /*send*/
	local[57]= w;
	ctx->vsp=local+58;
	w=(pointer)LIST(ctx,1,local+57); /*list*/
	ctx->vsp=local+57;
	w = cons(ctx,local[56],w);
	ctx->vsp=local+56;
	local[55]= cons(ctx,local[55],w);
	ctx->vsp=local+56;
	w=(pointer)LIST(ctx,1,local+55); /*list*/
	ctx->vsp=local+55;
	w = cons(ctx,local[54],w);
	ctx->vsp=local+54;
	w = cons(ctx,local[53],w);
	ctx->vsp=local+53;
	local[52]= cons(ctx,local[52],w);
	local[53]= fqv[516];
	local[54]= fqv[517];
	local[55]= fqv[518];
	local[56]= fqv[519];
	local[57]= fqv[520];
	ctx->vsp=local+58;
	w=(pointer)LIST(ctx,1,local+57); /*list*/
	ctx->vsp=local+57;
	local[56]= cons(ctx,local[56],w);
	local[57]= fqv[521];
	local[58]= fqv[519];
	local[59]= fqv[20];
	local[60]= fqv[520];
	local[61]= local[9];
	ctx->vsp=local+62;
	w=(pointer)LIST(ctx,1,local+61); /*list*/
	ctx->vsp=local+61;
	w = cons(ctx,local[60],w);
	ctx->vsp=local+60;
	w = cons(ctx,local[59],w);
	ctx->vsp=local+59;
	w = cons(ctx,local[58],w);
	ctx->vsp=local+58;
	local[57]= cons(ctx,local[57],w);
	ctx->vsp=local+58;
	w=(pointer)LIST(ctx,1,local+57); /*list*/
	ctx->vsp=local+57;
	w = cons(ctx,local[56],w);
	ctx->vsp=local+56;
	local[55]= cons(ctx,local[55],w);
	ctx->vsp=local+56;
	w=(pointer)LIST(ctx,1,local+55); /*list*/
	ctx->vsp=local+55;
	local[54]= cons(ctx,local[54],w);
	local[55]= fqv[522];
	ctx->vsp=local+56;
	local[56]= makeclosure(codevec,quotevec,CLO2406,env,argv,local);
	local[57]= local[24];
	local[58]= fqv[198];
	ctx->vsp=local+59;
	w=(*ftab[18])(ctx,2,local+57,&ftab[18],fqv[128]); /*send-all*/
	local[57]= w;
	local[58]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+59;
	w=(pointer)APPEND(ctx,2,local+57); /*append*/
	local[57]= w;
	ctx->vsp=local+58;
	w=(*ftab[47])(ctx,1,local+57,&ftab[47],fqv[446]); /*remove-duplicates*/
	local[57]= w;
	local[58]= fqv[3];
	ctx->vsp=local+59;
	w=(*ftab[18])(ctx,2,local+57,&ftab[18],fqv[128]); /*send-all*/
	local[57]= w;
	ctx->vsp=local+58;
	w=(pointer)MAPCAR(ctx,2,local+56); /*mapcar*/
	ctx->vsp=local+56;
	local[55]= cons(ctx,local[55],w);
	local[56]= fqv[460];
	local[57]= local[25];
	ctx->vsp=local+58;
	w=(pointer)LIST(ctx,2,local+56); /*list*/
	local[56]= w;
	ctx->vsp=local+57;
	w=(pointer)LIST(ctx,1,local+56); /*list*/
	ctx->vsp=local+56;
	w = cons(ctx,local[55],w);
	ctx->vsp=local+55;
	w = cons(ctx,local[54],w);
	ctx->vsp=local+54;
	local[53]= cons(ctx,local[53],w);
	local[54]= fqv[523];
	local[55]= fqv[522];
	local[56]= fqv[514];
	ctx->vsp=local+57;
	w=(pointer)LIST(ctx,1,local+56); /*list*/
	ctx->vsp=local+56;
	local[55]= cons(ctx,local[55],w);
	ctx->vsp=local+56;
	w=(pointer)LIST(ctx,1,local+55); /*list*/
	ctx->vsp=local+55;
	local[54]= cons(ctx,local[54],w);
	ctx->vsp=local+55;
	w=(pointer)LIST(ctx,1,local+54); /*list*/
	ctx->vsp=local+54;
	w = cons(ctx,local[53],w);
	ctx->vsp=local+53;
	w = cons(ctx,local[52],w);
	ctx->vsp=local+52;
	local[43] = cons(ctx,local[51],w);
	local[51]= fqv[524];
	ctx->vsp=local+52;
	local[52]= makeclosure(codevec,quotevec,CLO2407,env,argv,local);
	local[53]= argv[2];
	ctx->vsp=local+54;
	w=(pointer)MAPCAR(ctx,2,local+52); /*mapcar*/
	local[52]= w;
	local[53]= NIL;
	ctx->vsp=local+54;
	w=(pointer)APPEND(ctx,2,local+52); /*append*/
	local[52]= w;
	ctx->vsp=local+53;
	w=(pointer)LIST(ctx,1,local+52); /*list*/
	local[52]= w;
	local[53]= fqv[525];
	local[54]= NIL;
	local[55]= fqv[341];
	local[56]= T;
	ctx->vsp=local+57;
	w=(pointer)LIST(ctx,4,local+53); /*list*/
	local[53]= w;
	local[54]= local[41];
	ctx->vsp=local+55;
	w=(pointer)APPEND(ctx,4,local+51); /*append*/
	local[44] = w;
	local[51]= local[44];
	local[52]= makeint((eusinteger_t)1L);
	local[53]= fqv[526];
	local[54]= local[44];
	local[55]= makeint((eusinteger_t)1L);
	ctx->vsp=local+56;
	w=(pointer)ELT(ctx,2,local+54); /*elt*/
	local[54]= w;
	ctx->vsp=local+55;
	w=(pointer)APPEND(ctx,2,local+53); /*append*/
	local[53]= w;
	ctx->vsp=local+54;
	w=(pointer)SETELT(ctx,3,local+51); /*setelt*/
	local[45]= fqv[527];
	local[46]= fqv[528];
	local[47]= fqv[514];
	local[48]= local[42];
	ctx->vsp=local+49;
	w=(pointer)LIST(ctx,1,local+48); /*list*/
	ctx->vsp=local+48;
	local[47]= cons(ctx,local[47],w);
	ctx->vsp=local+48;
	w=(pointer)LIST(ctx,1,local+47); /*list*/
	local[47]= w;
	local[48]= local[43];
	local[49]= fqv[521];
	local[50]= fqv[514];
	local[51]= fqv[529];
	local[52]= local[44];
	ctx->vsp=local+53;
	w=(pointer)LIST(ctx,1,local+52); /*list*/
	ctx->vsp=local+52;
	w = cons(ctx,local[51],w);
	ctx->vsp=local+51;
	w = cons(ctx,local[50],w);
	ctx->vsp=local+50;
	local[49]= cons(ctx,local[49],w);
	ctx->vsp=local+50;
	w=(pointer)LIST(ctx,1,local+49); /*list*/
	ctx->vsp=local+49;
	w = cons(ctx,local[48],w);
	ctx->vsp=local+48;
	w = cons(ctx,local[47],w);
	ctx->vsp=local+47;
	local[46]= cons(ctx,local[46],w);
	ctx->vsp=local+47;
	w=(*ftab[2])(ctx,2,local+45,&ftab[2],fqv[15]); /*warn*/
	local[45]= fqv[530];
	local[46]= local[35];
	ctx->vsp=local+47;
	w=(*ftab[2])(ctx,2,local+45,&ftab[2],fqv[15]); /*warn*/
	local[45]= fqv[531];
	local[46]= local[35];
	ctx->vsp=local+47;
	w=(*ftab[2])(ctx,2,local+45,&ftab[2],fqv[15]); /*warn*/
	local[45]= local[35];
	local[46]= fqv[178];
	local[47]= fqv[179];
	local[48]= fqv[532];
	local[49]= fqv[533];
	ctx->vsp=local+50;
	w=(*ftab[25])(ctx,5,local+45,&ftab[25],fqv[180]); /*open*/
	local[45]= w;
	ctx->vsp=local+46;
	w = makeclosure(codevec,quotevec,UWP2408,env,argv,local);
	local[46]=(pointer)(ctx->protfp); local[47]=w;
	ctx->protfp=(struct protectframe *)(local+46);
	local[48]= local[45];
	local[49]= fqv[534];
	local[50]= local[36];
	local[51]= local[42];
	local[52]= local[43];
	ctx->vsp=local+53;
	w=(pointer)XFORMAT(ctx,5,local+48); /*format*/
	local[48]= local[45];
	local[49]= fqv[535];
	local[50]= local[36];
	local[51]= local[44];
	ctx->vsp=local+52;
	w=(pointer)XFORMAT(ctx,4,local+48); /*format*/
	local[48]= local[45];
	local[49]= fqv[536];
	local[50]= local[36];
	ctx->vsp=local+51;
	w=(pointer)XFORMAT(ctx,3,local+48); /*format*/
	local[48]= local[45];
	local[49]= fqv[537];
	local[50]= local[36];
	ctx->vsp=local+51;
	w=(pointer)XFORMAT(ctx,3,local+48); /*format*/
	local[48]= local[45];
	local[49]= fqv[538];
	ctx->vsp=local+50;
	w=(pointer)XFORMAT(ctx,2,local+48); /*format*/
	local[48]= local[45];
	local[49]= fqv[539];
	local[50]= local[28];
	local[51]= local[29];
	ctx->vsp=local+52;
	w=(pointer)XFORMAT(ctx,4,local+48); /*format*/
	if (local[14]==NIL) goto IF2409;
	local[48]= local[45];
	local[49]= fqv[540];
	local[50]= argv[0];
	local[51]= fqv[503];
	local[52]= local[14];
	local[53]= fqv[332];
	local[54]= local[15];
	local[55]= fqv[336];
	local[56]= local[16];
	local[57]= fqv[333];
	local[58]= NIL;
	ctx->vsp=local+59;
	w=(pointer)SEND(ctx,9,local+50); /*send*/
	local[50]= w;
	ctx->vsp=local+51;
	w=(pointer)XFORMAT(ctx,3,local+48); /*format*/
	local[48]= w;
	goto IF2410;
IF2409:
	local[48]= NIL;
IF2410:
	local[48]= local[45];
	local[49]= fqv[541];
	ctx->vsp=local+50;
	w=(pointer)XFORMAT(ctx,2,local+48); /*format*/
	ctx->vsp=local+48;
	UWP2408(ctx,0,local+48,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[40]= w;
	goto IF2379;
IF2378:
	local[40]= NIL;
IF2379:
	goto IF2366;
IF2365:
	local[40]= NIL;
IF2366:
	ctx->vsp=local+40;
	local[40]= makeclosure(codevec,quotevec,CLO2411,env,argv,local);
	local[41]= local[24];
	local[42]= fqv[198];
	ctx->vsp=local+43;
	w=(*ftab[18])(ctx,2,local+41,&ftab[18],fqv[128]); /*send-all*/
	local[41]= w;
	local[42]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+43;
	w=(pointer)APPEND(ctx,2,local+41); /*append*/
	local[41]= w;
	ctx->vsp=local+42;
	w=(*ftab[47])(ctx,1,local+41,&ftab[47],fqv[446]); /*remove-duplicates*/
	local[41]= w;
	local[42]= local[25];
	ctx->vsp=local+43;
	w=(pointer)MAPC(ctx,3,local+40); /*mapc*/
	if (local[26]==NIL) goto IF2412;
	local[40]= argv[0];
	local[41]= fqv[159];
	local[42]= local[26];
	ctx->vsp=local+43;
	w=(pointer)SEND(ctx,3,local+40); /*send*/
	local[40]= w;
	goto IF2413;
IF2412:
	local[40]= NIL;
IF2413:
	local[40]= NIL;
IF2364:
	w = local[40];
	local[0]= w;
BLK2236:
	ctx->vsp=local; return(local[0]);}

/*:ik-convergence-check*/
static pointer M2414cascaded_link_ik_convergence_check(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<13) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[542], &argv[13], n-13, local+0, 0);
	if (n & (1<<0)) goto KEY2416;
	local[0] = T;
KEY2416:
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
WHL2418:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX2419;
	local[3]= argv[2];
	if (local[3]==NIL) goto AND2421;
	local[3]= argv[6];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	if (w==NIL) goto IF2422;
	local[3]= argv[3];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)VNORM(ctx,1,local+3); /*norm*/
	local[3]= w;
	local[4]= argv[7];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LESSP(ctx,2,local+3); /*<*/
	local[3]= w;
	goto IF2423;
IF2422:
	local[3]= T;
IF2423:
	if (local[3]==NIL) goto AND2421;
	local[3]= argv[5];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	if (w==NIL) goto IF2424;
	local[3]= argv[4];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)VNORM(ctx,1,local+3); /*norm*/
	local[3]= w;
	local[4]= argv[8];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LESSP(ctx,2,local+3); /*<*/
	local[3]= w;
	goto IF2425;
IF2424:
	local[3]= T;
IF2425:
AND2421:
	argv[2] = local[3];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL2418;
WHX2419:
	local[3]= NIL;
BLK2420:
	w = NIL;
	if (argv[10]==NIL) goto IF2426;
	local[1]= argv[2];
	if (local[1]==NIL) goto AND2428;
	local[1]= argv[0];
	local[2]= fqv[543];
	local[3]= argv[9];
	local[4]= argv[10];
	local[5]= fqv[332];
	local[6]= argv[11];
	local[7]= fqv[336];
	local[8]= argv[12];
	local[9]= fqv[333];
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,10,local+1); /*send*/
	local[1]= w;
AND2428:
	argv[2] = local[1];
	local[1]= argv[2];
	goto IF2427;
IF2426:
	local[1]= NIL;
IF2427:
	w = argv[2];
	local[0]= w;
BLK2415:
	ctx->vsp=local; return(local[0]);}

/*:calc-vel-from-pos*/
static pointer M2429cascaded_link_calc_vel_from_pos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
RST2431:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-4);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[544], &argv[4], n-4, local+1, 1);
	if (n & (1<<0)) goto KEY2432;
	local[1] = makeflt(1.0000000000000000000000e+02);
KEY2432:
	if (n & (1<<1)) goto KEY2433;
	local[6]= loadglobal(fqv[5]);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[2] = w;
KEY2433:
	if (n & (1<<2)) goto KEY2434;
	local[6]= loadglobal(fqv[5]);
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[3] = w;
KEY2434:
	if (n & (1<<3)) goto KEY2435;
	local[6]= loadglobal(fqv[5]);
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[4] = w;
KEY2435:
	if (n & (1<<4)) goto KEY2436;
	local[6]= loadglobal(fqv[5]);
	local[7]= makeint((eusinteger_t)3L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[5] = w;
KEY2436:
	local[6]= NIL;
	local[7]= argv[2];
	ctx->vsp=local+8;
	w=(pointer)VNORM(ctx,1,local+7); /*norm*/
	local[7]= w;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)GREATERP(ctx,2,local+7); /*>*/
	if (w==NIL) goto IF2437;
	local[7]= local[1];
	local[8]= argv[2];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[4])(ctx,2,local+8,&ftab[4],fqv[26]); /*normalize-vector*/
	local[8]= w;
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SCALEVEC(ctx,3,local+7); /*scale*/
	argv[2] = w;
	local[7]= argv[2];
	goto IF2438;
IF2437:
	local[7]= NIL;
IF2438:
	local[7]= makeflt(1.0000000000000000208167e-03);
	local[8]= argv[2];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SCALEVEC(ctx,3,local+7); /*scale*/
	argv[2] = w;
	local[7]= argv[2];
	local[8]= argv[3];
	local[9]= local[2];
	local[10]= local[3];
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)F765calc_dif_with_axis(ctx,5,local+7); /*calc-dif-with-axis*/
	local[6] = w;
	w = local[6];
	local[0]= w;
BLK2430:
	ctx->vsp=local; return(local[0]);}

/*:calc-vel-from-rot*/
static pointer M2439cascaded_link_calc_vel_from_rot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
RST2441:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-4);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[545], &argv[4], n-4, local+1, 1);
	if (n & (1<<0)) goto KEY2442;
	local[1] = makeflt(5.0000000000000000000000e-01);
KEY2442:
	if (n & (1<<1)) goto KEY2443;
	local[6]= loadglobal(fqv[5]);
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[2] = w;
KEY2443:
	if (n & (1<<2)) goto KEY2444;
	local[6]= loadglobal(fqv[5]);
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[3] = w;
KEY2444:
	if (n & (1<<3)) goto KEY2445;
	local[6]= loadglobal(fqv[5]);
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[4] = w;
KEY2445:
	if (n & (1<<4)) goto KEY2446;
	local[6]= loadglobal(fqv[5]);
	local[7]= makeint((eusinteger_t)3L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[5] = w;
KEY2446:
	local[6]= NIL;
	local[7]= argv[2];
	ctx->vsp=local+8;
	w=(pointer)VNORM(ctx,1,local+7); /*norm*/
	local[7]= w;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)GREATERP(ctx,2,local+7); /*>*/
	if (w==NIL) goto IF2447;
	local[7]= local[1];
	local[8]= argv[2];
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(*ftab[4])(ctx,2,local+8,&ftab[4],fqv[26]); /*normalize-vector*/
	local[8]= w;
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)SCALEVEC(ctx,3,local+7); /*scale*/
	argv[2] = w;
	local[7]= argv[2];
	goto IF2448;
IF2447:
	local[7]= NIL;
IF2448:
	local[7]= argv[2];
	local[8]= argv[3];
	local[9]= local[2];
	local[10]= local[3];
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)F765calc_dif_with_axis(ctx,5,local+7); /*calc-dif-with-axis*/
	local[6] = w;
	w = local[6];
	local[0]= w;
BLK2440:
	ctx->vsp=local; return(local[0]);}

/*:collision-check-pairs*/
static pointer M2449cascaded_link_collision_check_pairs(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[546], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY2451;
	w=argv[0]->c.obj.iv[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=argv[0]->c.obj.iv[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)F764all_child_links(ctx,1,local+2); /*all-child-links*/
	ctx->vsp=local+2;
	local[0] = cons(ctx,local[1],w);
KEY2451:
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
WHL2452:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	if (local[2]==NIL) goto WHX2453;
	local[4]= NIL;
	local[5]= local[2];
	local[6]= fqv[547];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= local[2];
	local[7]= fqv[548];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[2];
	local[8]= fqv[133];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	local[8]= local[2];
	local[9]= fqv[215];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,3,local+5); /*append*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[54])(ctx,2,local+4,&ftab[54],fqv[549]); /*remove*/
	local[3] = w;
	local[4]= NIL;
	local[5]= local[0];
WHL2457:
	if (local[5]==NIL) goto WHX2458;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[4];
	w = local[3];
	if (memq(local[6],w)!=NIL) goto IF2461;
	local[6]= local[2];
	w = local[4];
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	w = local[1];
	ctx->vsp=local+7;
	local[1] = cons(ctx,local[6],w);
	local[6]= local[1];
	goto IF2462;
IF2461:
	local[6]= NIL;
IF2462:
	goto WHL2457;
WHX2458:
	local[6]= NIL;
BLK2459:
	w = NIL;
	goto WHL2452;
WHX2453:
	local[4]= NIL;
BLK2454:
	w = local[1];
	local[0]= w;
BLK2450:
	ctx->vsp=local; return(local[0]);}

/*:self-collision-check*/
static pointer M2463cascaded_link_self_collision_check(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[550], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY2465;
	local[0] = fqv[551];
KEY2465:
	if (n & (1<<1)) goto KEY2466;
	local[3]= argv[0];
	local[4]= fqv[552];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[1] = w;
KEY2466:
	if (n & (1<<2)) goto KEY2467;
	local[2] = fqv[164];
KEY2467:
	local[3]= NIL;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= NIL;
	local[6]= local[1];
WHL2469:
	if (local[6]==NIL) goto WHX2470;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= local[2];
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.cdr;
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,3,local+7); /*funcall*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(*ftab[24])(ctx,2,local+7,&ftab[24],fqv[171]); /*/=*/
	local[7]= w;
	if (local[7]==NIL) goto IF2473;
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[4] = w;
	local[8]= local[0];
	if (fqv[553]!=local[8]) goto IF2475;
	w = local[5];
	ctx->vsp=local+8;
	local[0]=w;
	goto BLK2464;
	goto IF2476;
IF2475:
	local[8]= local[5];
	w = local[3];
	ctx->vsp=local+9;
	local[3] = cons(ctx,local[8],w);
	local[8]= local[3];
IF2476:
	goto IF2474;
IF2473:
	local[8]= NIL;
IF2474:
	w = local[8];
	goto WHL2469;
WHX2470:
	local[7]= NIL;
BLK2471:
	w = NIL;
	w = local[3];
	local[0]= w;
BLK2464:
	ctx->vsp=local; return(local[0]);}

/*:calc-grasp-matrix*/
static pointer M2477cascaded_link_calc_grasp_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[554], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY2479;
	local[2]= makeint((eusinteger_t)6L);
	local[3]= makeint((eusinteger_t)6L);
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	{ eusinteger_t i,j;
		j=intval(w); i=intval(local[3]);
		local[3]=(makeint(i * j));}
	ctx->vsp=local+4;
	w=(*ftab[23])(ctx,2,local+2,&ftab[23],fqv[166]); /*make-matrix*/
	local[0] = w;
KEY2479:
	if (n & (1<<1)) goto KEY2480;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO2481,env,argv,local);
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[1] = w;
KEY2480:
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO2482,env,argv,local);
	local[3]= argv[2];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,3,local+2); /*mapcar*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
WHL2484:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX2485;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)3L);
WHL2488:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX2489;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)3L);
WHL2492:
	local[9]= local[7];
	w = local[8];
	if ((eusinteger_t)local[9] >= (eusinteger_t)w) goto WHX2493;
	local[9]= local[0];
	local[10]= local[5];
	local[11]= local[3];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)6L)); i=intval(local[11]);
		local[11]=(makeint(i * j));}
	w = local[7];
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[11]= (pointer)((eusinteger_t)local[11] + (eusinteger_t)w);
	local[12]= local[1];
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= local[5];
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)AREF(ctx,3,local+12); /*aref*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)ASET(ctx,4,local+9); /*aset*/
	local[9]= local[0];
	local[10]= makeint((eusinteger_t)3L);
	w = local[5];
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[10]= (pointer)((eusinteger_t)local[10] + (eusinteger_t)w);
	local[11]= local[3];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)6L)); i=intval(local[11]);
		local[11]=(makeint(i * j));}
	local[12]= makeint((eusinteger_t)3L);
	w = local[7];
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	w = (pointer)((eusinteger_t)local[12] + (eusinteger_t)w);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[11]= (pointer)((eusinteger_t)local[11] + (eusinteger_t)w);
	local[12]= local[1];
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= local[5];
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)AREF(ctx,3,local+12); /*aref*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)ASET(ctx,4,local+9); /*aset*/
	local[9]= local[0];
	local[10]= makeint((eusinteger_t)3L);
	w = local[5];
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[10]= (pointer)((eusinteger_t)local[10] + (eusinteger_t)w);
	local[11]= local[3];
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)6L)); i=intval(local[11]);
		local[11]=(makeint(i * j));}
	w = local[7];
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[11]= (pointer)((eusinteger_t)local[11] + (eusinteger_t)w);
	local[12]= local[2];
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= local[5];
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)AREF(ctx,3,local+12); /*aref*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)ASET(ctx,4,local+9); /*aset*/
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[7] = w;
	goto WHL2492;
WHX2493:
	local[9]= NIL;
BLK2494:
	w = NIL;
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL2488;
WHX2489:
	local[7]= NIL;
BLK2490:
	w = NIL;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL2484;
WHX2485:
	local[5]= NIL;
BLK2486:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK2478:
	ctx->vsp=local; return(local[0]);}

/*:inverse-kinematics-for-closed-loop-forward-kinematics*/
static pointer M2495cascaded_link_inverse_kinematics_for_closed_loop_forward_kinematics(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST2497:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[555], &argv[3], n-3, local+1, 1);
	if (n & (1<<0)) goto KEY2498;
	local[1] = NIL;
KEY2498:
	if (n & (1<<1)) goto KEY2499;
	local[2] = NIL;
KEY2499:
	if (n & (1<<2)) goto KEY2500;
	local[3] = NIL;
KEY2500:
	if (n & (1<<3)) goto KEY2501;
	local[4] = NIL;
KEY2501:
	if (n & (1<<4)) goto KEY2502;
	local[5] = NIL;
KEY2502:
	if (n & (1<<5)) goto KEY2503;
	local[6] = NIL;
KEY2503:
	if (n & (1<<6)) goto KEY2504;
	local[7] = makeint((eusinteger_t)2L);
KEY2504:
	ctx->vsp=local+8;
	local[8]= makeclosure(codevec,quotevec,CLO2505,env,argv,local);
	local[9]= local[5];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)MAPCAR(ctx,3,local+8); /*mapcar*/
	local[8]= (pointer)get_sym_func(fqv[289]);
	local[9]= argv[0];
	local[10]= fqv[529];
	local[11]= argv[2];
	local[12]= fqv[301];
	local[13]= local[1];
	local[14]= fqv[261];
	local[15]= local[2];
	local[16]= fqv[556];
	ctx->vsp=local+17;
	local[17]= makeclosure(codevec,quotevec,CLO2506,env,argv,local);
	local[18]= fqv[360];
	local[19]= local[4];
	ctx->vsp=local+20;
	local[20]= makeclosure(codevec,quotevec,CLO2507,env,argv,local);
	local[21]= local[5];
	ctx->vsp=local+22;
	w=(pointer)MAPCAR(ctx,2,local+20); /*mapcar*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)APPEND(ctx,2,local+19); /*append*/
	local[19]= w;
	local[20]= fqv[557];
	local[21]= local[7];
	local[22]= local[0];
	ctx->vsp=local+23;
	w=(pointer)APPLY(ctx,15,local+8); /*apply*/
	local[0]= w;
BLK2496:
	ctx->vsp=local; return(local[0]);}

/*:calc-jacobian-for-interlocking-joints*/
static pointer M2508cascaded_link_calc_jacobian_for_interlocking_joints(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[558], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY2510;
	local[1]= argv[0];
	local[2]= fqv[559];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[0] = w;
KEY2510:
	local[1]= argv[0];
	local[2]= fqv[197];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[198];
	ctx->vsp=local+4;
	w=(*ftab[18])(ctx,2,local+2,&ftab[18],fqv[128]); /*send-all*/
	local[2]= w;
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO2511,env,argv,local);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[55])(ctx,2,local+3,&ftab[55],fqv[560]); /*remove-if-not*/
	local[3]= w;
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[211];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[23])(ctx,2,local+4,&ftab[23],fqv[166]); /*make-matrix*/
	local[4]= w;
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO2512,env,argv,local);
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)MAPCAR(ctx,2,local+5); /*mapcar*/
	w = local[4];
	local[0]= w;
BLK2509:
	ctx->vsp=local; return(local[0]);}

/*:calc-vel-for-interlocking-joints*/
static pointer M2513cascaded_link_calc_vel_for_interlocking_joints(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[561], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY2515;
	local[1]= argv[0];
	local[2]= fqv[559];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[0] = w;
KEY2515:
	local[1]= argv[0];
	local[2]= fqv[197];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[198];
	ctx->vsp=local+3;
	w=(*ftab[18])(ctx,2,local+1,&ftab[18],fqv[128]); /*send-all*/
	local[1]= w;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO2516,env,argv,local);
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(*ftab[55])(ctx,2,local+2,&ftab[55],fqv[560]); /*remove-if-not*/
	local[2]= w;
	local[3]= loadglobal(fqv[5]);
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)INSTANTIATE(ctx,2,local+3); /*instantiate*/
	local[3]= w;
	w = local[3];
	local[0]= w;
BLK2514:
	ctx->vsp=local; return(local[0]);}

/*:set-midpoint-for-interlocking-joints*/
static pointer M2517cascaded_link_set_midpoint_for_interlocking_joints(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[562], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY2519;
	local[1]= argv[0];
	local[2]= fqv[559];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[0] = w;
KEY2519:
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO2520,env,argv,local);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[0]= w;
BLK2518:
	ctx->vsp=local; return(local[0]);}

/*:interlocking-joint-pairs*/
static pointer M2521cascaded_link_interlocking_joint_pairs(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = fqv[563];
	local[0]= w;
BLK2522:
	ctx->vsp=local; return(local[0]);}

/*:check-interlocking-joint-angle-validity*/
static pointer M2523cascaded_link_check_interlocking_joint_angle_validity(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[564], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY2525;
	local[0] = makeflt(1.0000000000000000208167e-03);
KEY2525:
	if (n & (1<<1)) goto KEY2526;
	local[2]= argv[0];
	local[3]= fqv[559];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[1] = w;
KEY2526:
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO2527,env,argv,local);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[2]= w;
	local[3]= (pointer)get_sym_func(fqv[565]);
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(*ftab[56])(ctx,2,local+3,&ftab[56],fqv[566]); /*every*/
	local[0]= w;
BLK2524:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1514(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)PLUS(ctx,2,local+0); /*+*/
	local[0]= w;
	local[1]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+2;
	w=(pointer)QUOTIENT(ctx,2,local+0); /*/*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET1566(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[142]); /*find*/
	if (w!=NIL) goto OR2530;
	if (argv[0]==NIL) goto OR2530;
	goto IF2528;
OR2530:
	local[0]= argv[0];
	goto IF2529;
IF2528:
	local[0]= argv[0];
	local[1]= fqv[215];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[1];
	w = env->c.clo.env2[33];
	ctx->vsp=local+2;
	w=FLET1566(ctx,2,local+0,w);
	local[0]= w;
IF2529:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1661(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
WHL2531:
	if (local[0]==NIL) goto WHX2532;
	local[1]= local[0];
	local[2]= fqv[133];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	if (w==NIL) goto WHX2532;
	local[1]= argv[0];
	local[2]= fqv[29];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[0];
	local[3]= fqv[133];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= fqv[29];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)VDISTANCE(ctx,2,local+1); /*distance*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(*ftab[8])(ctx,2,local+1,&ftab[8],fqv[81]); /*eps=*/
	if (w==NIL) goto WHX2532;
	local[1]= local[0];
	local[2]= fqv[133];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[0] = w;
	goto WHL2531;
WHX2532:
	local[1]= NIL;
BLK2533:
	local[1]= local[0];
	local[2]= fqv[133];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1678(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[5];
	ctx->vsp=local+2;
	w=(*ftab[32])(ctx,2,local+0,&ftab[32],fqv[213]); /*position*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1736(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1768(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=env->c.clo.env2[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= argv[0];
	local[2]= fqv[139];
	local[3]= (pointer)get_sym_func(fqv[140]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,4,local+0,&ftab[16],fqv[124]); /*member*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET1774(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0];
	local[3]= argv[1];
	local[4]= fqv[139];
	local[5]= (pointer)get_sym_func(fqv[140]);
	ctx->vsp=local+6;
	w=(*ftab[32])(ctx,4,local+2,&ftab[32],fqv[213]); /*position*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SUBSEQ(ctx,3,local+0); /*subseq*/
	local[0]= w;
	local[1]= fqv[198];
	ctx->vsp=local+2;
	w=(*ftab[18])(ctx,2,local+0,&ftab[18],fqv[128]); /*send-all*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+0); /*calc-target-joint-dimension*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1819(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	local[0]= w;
	if (w==NIL) goto AND2534;
	local[0]= (pointer)get_sym_func(fqv[565]);
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO2535,env,argv,local);
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,3,local+1); /*mapcar*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[56])(ctx,2,local+0,&ftab[56],fqv[566]); /*every*/
	local[0]= w;
AND2534:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2535(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0];
	if (!issymbol(w)) goto CON2537;
	w = argv[1];
	if (!issymbol(w)) goto CON2537;
	local[0]= argv[0];
	local[0]= ((argv[1])==(local[0])?T:NIL);
	goto CON2536;
CON2537:
	w = argv[0];
	if (!isstring(w)) goto CON2538;
	w = argv[1];
	if (!isstring(w)) goto CON2538;
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(*ftab[57])(ctx,2,local+0,&ftab[57],fqv[567]); /*string=*/
	local[0]= w;
	goto CON2536;
CON2538:
	local[0]= T;
	if (local[0]!=NIL) goto CON2536;
CON2539:
	local[0]= NIL;
CON2536:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1851(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env2[3];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[16])(ctx,2,local+0,&ftab[16],fqv[124]); /*member*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2195(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[43])(ctx,1,local+0,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2540;
	local[0]= argv[0];
	local[1]= env->c.clo.env2[3];
	ctx->vsp=local+2;
	w=(pointer)FUNCALL(ctx,2,local+0); /*funcall*/
	local[0]= w;
	goto IF2541;
IF2540:
	local[0]= argv[0];
IF2541:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2288(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2319(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[43])(ctx,1,local+0,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2542;
	local[0]= argv[0];
	local[1]= env->c.clo.env2[2];
	ctx->vsp=local+2;
	w=(pointer)FUNCALL(ctx,2,local+0); /*funcall*/
	local[0]= w;
	goto IF2543;
IF2542:
	local[0]= argv[0];
IF2543:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2322(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[43])(ctx,1,local+0,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2544;
	local[0]= argv[0];
	local[1]= env->c.clo.env2[2];
	ctx->vsp=local+2;
	w=(pointer)FUNCALL(ctx,2,local+0); /*funcall*/
	local[0]= w;
	goto IF2545;
IF2544:
	local[0]= argv[0];
IF2545:
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,2,local+0,&ftab[3],fqv[24]); /*array-dimension*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2325(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= fqv[568];
	local[2]= env->c.clo.env2[43];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	env->c.clo.env2[43] = w;
	local[2]= env->c.clo.env2[43];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[45])(ctx,1,local+0,&ftab[45],fqv[423]); /*read-from-string*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2328(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= fqv[569];
	local[2]= env->c.clo.env2[45];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	env->c.clo.env2[45] = w;
	local[2]= env->c.clo.env2[45];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[45])(ctx,1,local+0,&ftab[45],fqv[423]); /*read-from-string*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2332(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[43])(ctx,1,local+0,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2546;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FUNCALL(ctx,1,local+0); /*funcall*/
	local[0]= w;
	goto IF2547;
IF2546:
	local[0]= argv[0];
IF2547:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2333(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[570];
	local[2]= argv[1];
	local[3]= fqv[336];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,5,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2334(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[571];
	local[2]= argv[1];
	local[3]= fqv[410];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,5,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2339(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[43])(ctx,1,local+0,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2548;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FUNCALL(ctx,1,local+0); /*funcall*/
	local[0]= w;
	goto IF2549;
IF2548:
	local[0]= argv[0];
IF2549:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2340(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[570];
	local[2]= argv[1];
	local[3]= fqv[336];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,5,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2341(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[571];
	local[2]= argv[1];
	local[3]= fqv[410];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,5,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2342(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[149];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP2353(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[40];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP2358(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[40];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2359(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	ctx->vsp=local+2;
	w=(pointer)REVERSE(ctx,1,local+1); /*reverse*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2360(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= fqv[572];
	local[2]= env->c.clo.env2[45];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	env->c.clo.env2[45] = w;
	local[2]= env->c.clo.env2[45];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[45])(ctx,1,local+0,&ftab[45],fqv[423]); /*read-from-string*/
	local[0]= w;
	local[1]= makeflt(1.0000000000000000208167e-03);
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[1]= w;
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,2,local+0); /*list*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET2380(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!isstring(w)) goto IF2550;
	local[0]= NIL;
	local[1]= fqv[573];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	goto IF2551;
IF2550:
	local[0]= argv[0];
IF2551:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET2381(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	if (!iscons(w)) goto IF2552;
	local[0]= argv[0];
	local[1]= argv[1];
	local[2]= fqv[574];
	local[3]= argv[0];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)APPEND(ctx,2,local+2); /*append*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETELT(ctx,3,local+0); /*setelt*/
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
WHL2555:
	local[2]= local[0];
	w = local[1];
	if ((eusinteger_t)local[2] >= (eusinteger_t)w) goto WHX2556;
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	local[3]= local[0];
	w = env->c.clo.env2[46];
	ctx->vsp=local+4;
	w=FLET2381(ctx,2,local+2,w);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	goto WHL2555;
WHX2556:
	local[2]= NIL;
BLK2557:
	w = NIL;
	local[0]= w;
	goto IF2553;
IF2552:
	local[0]= NIL;
IF2553:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET2382(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	local[0]= w;
	local[1]= loadglobal(fqv[214]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	if (w==NIL) goto IF2558;
	local[0]= env->c.clo.env1[0];
	local[1]= fqv[575];
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	local[3]= fqv[3];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	if (w==NIL) goto IF2558;
	local[0]= argv[0];
	local[1]= argv[1];
	local[2]= fqv[289];
	local[3]= fqv[514];
	local[4]= fqv[575];
	local[5]= argv[0];
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	local[6]= fqv[3];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	w = env->c.clo.env2[45];
	ctx->vsp=local+6;
	w=FLET2380(ctx,1,local+5,w);
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)SETELT(ctx,3,local+0); /*setelt*/
	local[0]= w;
	goto IF2559;
IF2558:
	local[0]= NIL;
IF2559:
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	if (!iscons(w)) goto IF2560;
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
WHL2563:
	local[2]= local[0];
	w = local[1];
	if ((eusinteger_t)local[2] >= (eusinteger_t)w) goto WHX2564;
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	local[3]= local[0];
	w = env->c.clo.env2[47];
	ctx->vsp=local+4;
	w=FLET2382(ctx,2,local+2,w);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	goto WHL2563;
WHX2564:
	local[2]= NIL;
BLK2565:
	w = NIL;
	local[0]= w;
	goto IF2561;
IF2560:
	local[0]= NIL;
IF2561:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET2383(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[215];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= env->c.clo.env1[0];
	local[2]= fqv[136];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[142]); /*find*/
	if (w==NIL) goto IF2566;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto IF2567;
IF2566:
	local[0]= argv[0];
	local[1]= fqv[215];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	w = env->c.clo.env2[48];
	ctx->vsp=local+1;
	w=FLET2383(ctx,1,local+0,w);
	local[0]= w;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
IF2567:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET2384(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	w = env->c.clo.env2[48];
	ctx->vsp=local+1;
	w=FLET2383(ctx,1,local+0,w);
	local[0]= w;
	local[1]= fqv[576];
	local[2]= fqv[577];
	local[3]= fqv[289];
	local[4]= fqv[514];
	local[5]= fqv[575];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	local[7]= fqv[215];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= fqv[3];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	w = env->c.clo.env2[45];
	ctx->vsp=local+7;
	w=FLET2380(ctx,1,local+6,w);
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[578];
	local[4]= fqv[298];
	local[5]= fqv[120];
	local[6]= fqv[289];
	local[7]= fqv[289];
	local[8]= fqv[577];
	local[9]= fqv[153];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[84];
	local[9]= fqv[86];
	local[10]= fqv[515];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= fqv[215];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	local[12]= fqv[104];
	local[13]= local[0];
	ctx->vsp=local+14;
	w=(*ftab[38])(ctx,1,local+13,&ftab[38],fqv[292]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,3,local+11); /*send*/
	local[11]= w;
	local[12]= fqv[515];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[289];
	local[4]= fqv[577];
	local[5]= fqv[299];
	local[6]= fqv[578];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[578];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET2385(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO2568,env,argv,local);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2568(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!iscons(w)) goto IF2569;
	local[0]= argv[0];
	w = env->c.clo.env0->c.clo.env2[50];
	ctx->vsp=local+1;
	w=FLET2385(ctx,1,local+0,w);
	local[0]= w;
	goto IF2570;
IF2569:
	local[0]= argv[0];
IF2570:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2405(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	w = env->c.clo.env2[49];
	ctx->vsp=local+1;
	w=FLET2384(ctx,1,local+0,w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2406(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[289];
	local[1]= fqv[514];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[58])(ctx,1,local+2,&ftab[58],fqv[579]); /*string-upcase*/
	local[2]= w;
	local[3]= loadglobal(fqv[580]);
	ctx->vsp=local+4;
	w=(pointer)INTERN(ctx,2,local+2); /*intern*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2407(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[86];
	local[1]= fqv[105];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[43])(ctx,1,local+2,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2571;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)FUNCALL(ctx,1,local+2); /*funcall*/
	local[2]= w;
	goto IF2572;
IF2571:
	local[2]= argv[0];
IF2572:
	local[3]= fqv[29];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= fqv[85];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(*ftab[43])(ctx,1,local+4,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2573;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)FUNCALL(ctx,1,local+4); /*funcall*/
	local[4]= w;
	goto IF2574;
IF2573:
	local[4]= argv[0];
IF2574:
	local[5]= fqv[27];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP2408(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[45];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2411(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= (pointer)get_sym_func(fqv[289]);
	local[1]= argv[0];
	local[2]= fqv[20];
	local[3]= argv[1];
	local[4]= env->c.clo.env2[9];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,5,local+0); /*apply*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2481(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeint((eusinteger_t)3L);
	ctx->vsp=local+1;
	w=(*ftab[15])(ctx,1,local+0,&ftab[15],fqv[118]); /*unit-matrix*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2482(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeflt(1.0000000000000000208167e-03);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)SCALEVEC(ctx,2,local+0); /*scale*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[59])(ctx,1,local+0,&ftab[59],fqv[581]); /*outer-product-matrix*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)MATTIMES(ctx,2,local+0); /*m**/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2505(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[20];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2506(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO2575,env,argv,local);
	local[1]= env->c.clo.env2[5];
	local[2]= env->c.clo.env2[6];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,3,local+0); /*mapcar*/
	local[0]= env->c.clo.env2[3];
	ctx->vsp=local+1;
	w=(*ftab[43])(ctx,1,local+0,&ftab[43],fqv[321]); /*functionp*/
	if (w==NIL) goto IF2576;
	local[0]= env->c.clo.env2[3];
	ctx->vsp=local+1;
	w=(pointer)FUNCALL(ctx,1,local+0); /*funcall*/
	local[0]= w;
	goto IF2577;
IF2576:
	local[0]= NIL;
IF2577:
	w = NIL;
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2575(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[20];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2507(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[130];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,2,local+0); /*list*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2511(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= env->c.clo.env2[2];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[142]); /*find*/
	local[0]= w;
	if (w==NIL) goto AND2578;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	local[1]= env->c.clo.env2[2];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[142]); /*find*/
	local[0]= w;
AND2578:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2512(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= (pointer)get_sym_func(fqv[323]);
	local[1]= env->c.clo.env2[2];
	local[2]= makeint((eusinteger_t)0L);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= env->c.clo.env2[2];
	ctx->vsp=local+5;
	w=(*ftab[32])(ctx,2,local+3,&ftab[32],fqv[213]); /*position*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SUBSEQ(ctx,3,local+1); /*subseq*/
	local[1]= w;
	local[2]= fqv[31];
	ctx->vsp=local+3;
	w=(*ftab[18])(ctx,2,local+1,&ftab[18],fqv[128]); /*send-all*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[26])(ctx,2,local+0,&ftab[26],fqv[196]); /*reduce*/
	local[0]= w;
	local[1]= env->c.clo.env2[4];
	local[2]= argv[0];
	local[3]= env->c.clo.env2[3];
	ctx->vsp=local+4;
	w=(*ftab[32])(ctx,2,local+2,&ftab[32],fqv[213]); /*position*/
	local[2]= w;
	local[3]= local[0];
	local[4]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[0]= (pointer)get_sym_func(fqv[323]);
	local[1]= env->c.clo.env2[2];
	local[2]= makeint((eusinteger_t)0L);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	local[4]= env->c.clo.env2[2];
	ctx->vsp=local+5;
	w=(*ftab[32])(ctx,2,local+3,&ftab[32],fqv[213]); /*position*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SUBSEQ(ctx,3,local+1); /*subseq*/
	local[1]= w;
	local[2]= fqv[31];
	ctx->vsp=local+3;
	w=(*ftab[18])(ctx,2,local+1,&ftab[18],fqv[128]); /*send-all*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[26])(ctx,2,local+0,&ftab[26],fqv[196]); /*reduce*/
	local[0]= w;
	local[1]= env->c.clo.env2[4];
	local[2]= argv[0];
	local[3]= env->c.clo.env2[3];
	ctx->vsp=local+4;
	w=(*ftab[32])(ctx,2,local+2,&ftab[32],fqv[213]); /*position*/
	local[2]= w;
	local[3]= local[0];
	local[4]= makeflt(-1.0000000000000000000000e+00);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,4,local+1); /*aset*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2516(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	local[1]= env->c.clo.env2[1];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[142]); /*find*/
	local[0]= w;
	if (w==NIL) goto AND2579;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	local[1]= env->c.clo.env2[1];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[142]); /*find*/
	local[0]= w;
AND2579:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2520(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeflt(5.0000000000000000000000e-01);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[20];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	local[3]= fqv[20];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)PLUS(ctx,2,local+1); /*+*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[20];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	local[2]= fqv[20];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2527(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env2[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[20];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	local[3]= fqv[20];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)ABS(ctx,1,local+1); /*abs*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GREATERP(ctx,2,local+0); /*>*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*all-child-links*/
static pointer F764all_child_links(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT2582;}
	local[0]= (pointer)get_sym_func(fqv[565]);
ENT2582:
ENT2581:
	if (n>2) maerror();
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO2583,env,argv,local);
	local[2]= argv[0];
	local[3]= fqv[548];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MAPCAN(ctx,2,local+1); /*mapcan*/
	local[1]= w;
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO2584,env,argv,local);
	local[3]= argv[0];
	local[4]= fqv[548];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)MAPCAN(ctx,2,local+2); /*mapcan*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)APPEND(ctx,2,local+1); /*append*/
	local[0]= w;
BLK2580:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2583(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env2[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)FUNCALL(ctx,2,local+0); /*funcall*/
	if (w==NIL) goto IF2585;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto IF2586;
IF2585:
	local[0]= NIL;
IF2586:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2584(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[0];
	ctx->vsp=local+2;
	w=(pointer)F764all_child_links(ctx,2,local+0); /*all-child-links*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*calc-dif-with-axis*/
static pointer F765calc_dif_with_axis(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT2591;}
	local[0]= NIL;
ENT2591:
	if (n>=4) { local[1]=(argv[3]); goto ENT2590;}
	local[1]= NIL;
ENT2590:
	if (n>=5) { local[2]=(argv[4]); goto ENT2589;}
	local[2]= NIL;
ENT2589:
ENT2588:
	if (n>5) maerror();
	local[3]= argv[1];
	local[4]= local[3];
	w = fqv[582];
	if (memq(local[4],w)==NIL) goto IF2593;
	if (local[2]==NIL) goto IF2595;
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)1L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[2];
	goto IF2596;
IF2595:
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,2,local+4); /*float-vector*/
	local[4]= w;
IF2596:
	goto IF2594;
IF2593:
	local[4]= local[3];
	w = fqv[583];
	if (memq(local[4],w)==NIL) goto IF2597;
	if (local[2]==NIL) goto IF2599;
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)1L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[2];
	goto IF2600;
IF2599:
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,2,local+4); /*float-vector*/
	local[4]= w;
IF2600:
	goto IF2598;
IF2597:
	local[4]= local[3];
	w = fqv[584];
	if (memq(local[4],w)==NIL) goto IF2601;
	if (local[2]==NIL) goto IF2603;
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)1L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[2];
	goto IF2604;
IF2603:
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,2,local+4); /*float-vector*/
	local[4]= w;
IF2604:
	goto IF2602;
IF2601:
	local[4]= local[3];
	w = fqv[585];
	if (memq(local[4],w)==NIL) goto IF2605;
	if (local[1]==NIL) goto IF2607;
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[1];
	goto IF2608;
IF2607:
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,1,local+4); /*float-vector*/
	local[4]= w;
IF2608:
	goto IF2606;
IF2605:
	local[4]= local[3];
	w = fqv[586];
	if (memq(local[4],w)==NIL) goto IF2609;
	if (local[1]==NIL) goto IF2611;
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[1];
	goto IF2612;
IF2611:
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,1,local+4); /*float-vector*/
	local[4]= w;
IF2612:
	goto IF2610;
IF2609:
	local[4]= local[3];
	w = fqv[587];
	if (memq(local[4],w)==NIL) goto IF2613;
	if (local[1]==NIL) goto IF2615;
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SETELT(ctx,3,local+4); /*setelt*/
	local[4]= local[1];
	goto IF2616;
IF2615:
	local[4]= argv[0];
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MKFLTVEC(ctx,1,local+4); /*float-vector*/
	local[4]= w;
IF2616:
	goto IF2614;
IF2613:
	local[4]= local[3];
	if (fqv[194]!=local[4]) goto IF2617;
	if (local[0]==NIL) goto IF2619;
	local[4]= local[0];
	goto IF2620;
IF2619:
	ctx->vsp=local+4;
	w=(pointer)MKFLTVEC(ctx,0,local+4); /*float-vector*/
	local[4]= w;
IF2620:
	goto IF2618;
IF2617:
	local[4]= local[3];
	w = fqv[588];
	if (memq(local[4],w)==NIL) goto IF2621;
	local[4]= argv[0];
	goto IF2622;
IF2621:
	if (T==NIL) goto IF2623;
	local[4]= argv[0];
	goto IF2624;
IF2623:
	local[4]= NIL;
IF2624:
IF2622:
IF2618:
IF2614:
IF2610:
IF2606:
IF2602:
IF2598:
IF2594:
	w = local[4];
	local[0]= w;
BLK2587:
	ctx->vsp=local; return(local[0]);}

/*calc-target-joint-dimension*/
static pointer F766calc_target_joint_dimension(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= NIL;
	local[2]= argv[0];
WHL2627:
	if (local[2]==NIL) goto WHX2628;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[0];
	local[4]= local[1];
	local[5]= fqv[31];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	local[0] = w;
	goto WHL2627;
WHX2628:
	local[3]= NIL;
BLK2629:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK2625:
	ctx->vsp=local; return(local[0]);}

/*calc-joint-angle-min-max-for-limit-calculation*/
static pointer F767calc_joint_angle_min_max_for_limit_calculation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[20];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)VECTORP(ctx,1,local+0); /*vectorp*/
	if (w==NIL) goto CON2633;
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0];
	local[3]= fqv[589];
	local[4]= argv[0];
	local[5]= fqv[20];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETELT(ctx,3,local+0); /*setelt*/
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)1L);
	local[2]= argv[0];
	local[3]= fqv[589];
	local[4]= argv[0];
	local[5]= fqv[23];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETELT(ctx,3,local+0); /*setelt*/
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)2L);
	local[2]= argv[0];
	local[3]= fqv[589];
	local[4]= argv[0];
	local[5]= fqv[22];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)ELT(ctx,2,local+2); /*elt*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETELT(ctx,3,local+0); /*setelt*/
	local[0]= w;
	goto CON2632;
CON2633:
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0];
	local[3]= fqv[589];
	local[4]= argv[0];
	local[5]= fqv[20];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETELT(ctx,3,local+0); /*setelt*/
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)1L);
	local[2]= argv[0];
	local[3]= fqv[589];
	local[4]= argv[0];
	local[5]= fqv[23];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETELT(ctx,3,local+0); /*setelt*/
	local[0]= argv[2];
	local[1]= makeint((eusinteger_t)2L);
	local[2]= argv[0];
	local[3]= fqv[589];
	local[4]= argv[0];
	local[5]= fqv[22];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SETELT(ctx,3,local+0); /*setelt*/
	local[0]= w;
	goto CON2632;
CON2634:
	local[0]= NIL;
CON2632:
	w = argv[2];
	local[0]= w;
BLK2631:
	ctx->vsp=local; return(local[0]);}

/*joint-angle-limit-weight*/
static pointer F768joint_angle_limit_weight(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT2637;}
	local[0]= loadglobal(fqv[5]);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+1); /*calc-target-joint-dimension*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,2,local+0); /*instantiate*/
	local[0]= w;
ENT2637:
ENT2636:
	if (n>2) maerror();
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,3,local+3); /*float-vector*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+5); /*calc-target-joint-dimension*/
	local[5]= w;
WHL2639:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX2640;
	local[6]= argv[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[6];
	local[8]= local[2];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)F767calc_joint_angle_min_max_for_limit_calculation(ctx,3,local+7); /*calc-joint-angle-min-max-for-limit-calculation*/
	local[7]= local[3];
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	local[8]= local[3];
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	local[9]= local[3];
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(*ftab[6])(ctx,1,local+10,&ftab[6],fqv[48]); /*deg2rad*/
	local[10]= w;
	local[11]= local[6];
	local[12]= fqv[20];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)VECTORP(ctx,1,local+11); /*vectorp*/
	if (w==NIL) goto IF2642;
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[2] = w;
	local[11]= local[2];
	local[12]= local[6];
	local[13]= fqv[20];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)LENGTH(ctx,1,local+12); /*length*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)GREQP(ctx,2,local+11); /*>=*/
	if (w==NIL) goto IF2644;
	local[2] = makeint((eusinteger_t)0L);
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[1] = w;
	local[11]= local[1];
	goto IF2645;
IF2644:
	local[11]= NIL;
IF2645:
	goto IF2643;
IF2642:
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[1] = w;
	local[11]= local[1];
IF2643:
	local[11]= local[7];
	local[12]= local[8];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,3,local+11,&ftab[8],fqv[81]); /*eps=*/
	local[11]= w;
	if (w==NIL) goto AND2648;
	local[11]= local[7];
	local[12]= local[9];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,3,local+11,&ftab[8],fqv[81]); /*eps=*/
	local[11]= w;
AND2648:
	if (local[11]!=NIL) goto CON2646;
CON2647:
	local[11]= local[7];
	local[12]= local[8];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,3,local+11,&ftab[8],fqv[81]); /*eps=*/
	if (w==NIL) goto CON2649;
	local[11]= local[8];
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[7] = w;
	local[11]= local[7];
	goto CON2646;
CON2649:
	local[11]= local[7];
	local[12]= local[9];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,3,local+11,&ftab[8],fqv[81]); /*eps=*/
	if (w==NIL) goto CON2650;
	local[11]= local[9];
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[7] = w;
	local[11]= local[7];
	goto CON2646;
CON2650:
	local[11]= NIL;
CON2646:
	local[11]= local[6];
	local[12]= fqv[3];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	if (fqv[590]==local[11]) goto OR2653;
	local[11]= local[6];
	local[12]= fqv[3];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	if (fqv[591]==local[11]) goto OR2653;
	goto CON2652;
OR2653:
	local[11]= makeflt(0.0000000000000000000000e+00);
	local[12]= local[8];
	ctx->vsp=local+13;
	w=(pointer)NUMEQUAL(ctx,2,local+11); /*=*/
	if (w==NIL) goto CON2655;
	local[11]= local[8];
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	goto CON2654;
CON2655:
	local[11]= makeflt(0.0000000000000000000000e+00);
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)NUMEQUAL(ctx,2,local+11); /*=*/
	if (w==NIL) goto CON2656;
	local[11]= local[9];
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	goto CON2654;
CON2656:
	local[11]= makeflt(0.0000000000000000000000e+00);
	goto CON2654;
CON2657:
	local[11]= NIL;
CON2654:
	local[12]= local[7];
	local[13]= local[11];
	ctx->vsp=local+14;
	w=(pointer)GREATERP(ctx,2,local+12); /*>*/
	if (w==NIL) goto IF2658;
	local[12]= local[8];
	ctx->vsp=local+13;
	w=(pointer)ABS(ctx,1,local+12); /*abs*/
	local[12]= w;
	goto IF2659;
IF2658:
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)ABS(ctx,1,local+12); /*abs*/
	local[12]= w;
IF2659:
	local[13]= local[0];
	local[14]= local[4];
	local[15]= makeint((eusinteger_t)2L);
	local[16]= local[12];
	ctx->vsp=local+17;
	w=(pointer)TIMES(ctx,2,local+15); /***/
	local[15]= w;
	local[16]= makeint((eusinteger_t)2L);
	ctx->vsp=local+17;
	w=(*ftab[28])(ctx,2,local+15,&ftab[28],fqv[201]); /*expt*/
	local[15]= w;
	local[16]= makeint((eusinteger_t)2L);
	local[17]= local[7];
	local[18]= local[11];
	ctx->vsp=local+19;
	w=(pointer)MINUS(ctx,2,local+17); /*-*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)TIMES(ctx,2,local+16); /***/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)TIMES(ctx,2,local+15); /***/
	local[15]= w;
	local[16]= makeint((eusinteger_t)4L);
	local[17]= local[12];
	local[18]= local[12];
	ctx->vsp=local+19;
	w=(pointer)TIMES(ctx,2,local+17); /***/
	local[17]= w;
	local[18]= local[7];
	local[19]= local[7];
	ctx->vsp=local+20;
	w=(pointer)TIMES(ctx,2,local+18); /***/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)MINUS(ctx,2,local+17); /*-*/
	local[17]= w;
	local[18]= makeint((eusinteger_t)2L);
	ctx->vsp=local+19;
	w=(*ftab[28])(ctx,2,local+17,&ftab[28],fqv[201]); /*expt*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)TIMES(ctx,2,local+16); /***/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)QUOTIENT(ctx,2,local+15); /*/*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)ABS(ctx,1,local+15); /*abs*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)SETELT(ctx,3,local+13); /*setelt*/
	local[11]= w;
	goto CON2651;
CON2652:
	local[11]= local[7];
	local[12]= local[8];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,3,local+11,&ftab[8],fqv[81]); /*eps=*/
	if (w==NIL) goto CON2660;
	local[11]= local[7];
	local[12]= local[9];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,3,local+11,&ftab[8],fqv[81]); /*eps=*/
	if (w==NIL) goto CON2660;
	local[11]= local[0];
	local[12]= local[4];
	local[13]= loadglobal(fqv[64]);
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= w;
	goto CON2651;
CON2660:
	local[11]= local[8];
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)2L);
	ctx->vsp=local+13;
	w=(*ftab[28])(ctx,2,local+11,&ftab[28],fqv[201]); /*expt*/
	local[11]= w;
	local[12]= makeint((eusinteger_t)2L);
	local[13]= local[7];
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	local[13]= local[8];
	local[14]= local[9];
	ctx->vsp=local+15;
	w=(pointer)MINUS(ctx,3,local+12); /*-*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	local[12]= makeint((eusinteger_t)4L);
	local[13]= local[8];
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)MINUS(ctx,2,local+13); /*-*/
	local[13]= w;
	local[14]= makeint((eusinteger_t)2L);
	ctx->vsp=local+15;
	w=(*ftab[28])(ctx,2,local+13,&ftab[28],fqv[201]); /*expt*/
	local[13]= w;
	local[14]= local[7];
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)MINUS(ctx,2,local+14); /*-*/
	local[14]= w;
	local[15]= makeint((eusinteger_t)2L);
	ctx->vsp=local+16;
	w=(*ftab[28])(ctx,2,local+14,&ftab[28],fqv[201]); /*expt*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,3,local+12); /***/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)QUOTIENT(ctx,2,local+11); /*/*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)ABS(ctx,1,local+11); /*abs*/
	local[11]= w;
	local[12]= local[11];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)GREATERP(ctx,2,local+12); /*>*/
	if (w==NIL) goto IF2662;
	local[12]= local[11];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)LESSP(ctx,2,local+12); /*<*/
	if (w==NIL) goto IF2662;
	local[11] = makeflt(0.0000000000000000000000e+00);
	local[12]= local[11];
	goto IF2663;
IF2662:
	local[12]= NIL;
IF2663:
	local[12]= local[0];
	local[13]= local[4];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)SETELT(ctx,3,local+12); /*setelt*/
	local[11]= w;
	goto CON2651;
CON2661:
	local[11]= NIL;
CON2651:
	w = local[11];
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL2639;
WHX2640:
	local[6]= NIL;
BLK2641:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK2635:
	ctx->vsp=local; return(local[0]);}

/*joint-angle-limit-nspace*/
static pointer F769joint_angle_limit_nspace(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT2666;}
	local[0]= loadglobal(fqv[5]);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+1); /*calc-target-joint-dimension*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,2,local+0); /*instantiate*/
	local[0]= w;
ENT2666:
ENT2665:
	if (n>2) maerror();
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)MKFLTVEC(ctx,3,local+3); /*float-vector*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)F766calc_target_joint_dimension(ctx,1,local+5); /*calc-target-joint-dimension*/
	local[5]= w;
WHL2668:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX2669;
	local[6]= argv[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= local[6];
	local[8]= local[2];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)F767calc_joint_angle_min_max_for_limit_calculation(ctx,3,local+7); /*calc-joint-angle-min-max-for-limit-calculation*/
	local[7]= local[3];
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	local[8]= local[3];
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)ELT(ctx,2,local+8); /*elt*/
	local[8]= w;
	local[9]= local[3];
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(*ftab[6])(ctx,1,local+10,&ftab[6],fqv[48]); /*deg2rad*/
	local[10]= w;
	local[11]= local[6];
	local[12]= fqv[20];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)VECTORP(ctx,1,local+11); /*vectorp*/
	if (w==NIL) goto IF2671;
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[2] = w;
	local[11]= local[2];
	local[12]= local[6];
	local[13]= fqv[20];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)LENGTH(ctx,1,local+12); /*length*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)GREQP(ctx,2,local+11); /*>=*/
	if (w==NIL) goto IF2673;
	local[2] = makeint((eusinteger_t)0L);
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[1] = w;
	local[11]= local[1];
	goto IF2674;
IF2673:
	local[11]= NIL;
IF2674:
	goto IF2672;
IF2671:
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[1] = w;
	local[11]= local[1];
IF2672:
	local[11]= local[6];
	local[12]= fqv[3];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	if (fqv[590]==local[11]) goto OR2677;
	local[11]= local[6];
	local[12]= fqv[3];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	if (fqv[591]==local[11]) goto OR2677;
	goto CON2676;
OR2677:
	local[11]= makeflt(0.0000000000000000000000e+00);
	local[12]= local[8];
	ctx->vsp=local+13;
	w=(pointer)NUMEQUAL(ctx,2,local+11); /*=*/
	if (w==NIL) goto CON2679;
	local[11]= local[8];
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	goto CON2678;
CON2679:
	local[11]= makeflt(0.0000000000000000000000e+00);
	local[12]= local[9];
	ctx->vsp=local+13;
	w=(pointer)NUMEQUAL(ctx,2,local+11); /*=*/
	if (w==NIL) goto CON2680;
	local[11]= local[9];
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	goto CON2678;
CON2680:
	local[11]= makeflt(0.0000000000000000000000e+00);
	goto CON2678;
CON2681:
	local[11]= NIL;
CON2678:
	local[12]= local[0];
	local[13]= local[4];
	local[14]= local[7];
	local[15]= local[11];
	ctx->vsp=local+16;
	w=(pointer)GREATERP(ctx,2,local+14); /*>*/
	if (w==NIL) goto IF2682;
	local[14]= local[11];
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)MINUS(ctx,2,local+14); /*-*/
	local[14]= w;
	local[15]= local[8];
	local[16]= local[11];
	ctx->vsp=local+17;
	w=(pointer)MINUS(ctx,2,local+15); /*-*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)QUOTIENT(ctx,2,local+14); /*/*/
	local[14]= w;
	goto IF2683;
IF2682:
	local[14]= local[11];
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)MINUS(ctx,2,local+14); /*-*/
	local[14]= w;
	local[15]= makeflt(5.0000000000000000000000e+00);
	local[16]= local[11];
	local[17]= local[9];
	ctx->vsp=local+18;
	w=(pointer)MINUS(ctx,2,local+16); /*-*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)TIMES(ctx,2,local+15); /***/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)QUOTIENT(ctx,2,local+14); /*/*/
	local[14]= w;
IF2683:
	ctx->vsp=local+15;
	w=(pointer)SETELT(ctx,3,local+12); /*setelt*/
	local[11]= w;
	goto CON2675;
CON2676:
	local[11]= local[0];
	local[12]= local[4];
	local[13]= local[8];
	local[14]= local[9];
	ctx->vsp=local+15;
	w=(pointer)PLUS(ctx,2,local+13); /*+*/
	local[13]= w;
	local[14]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+15;
	w=(pointer)QUOTIENT(ctx,2,local+13); /*/*/
	local[13]= w;
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)MINUS(ctx,2,local+13); /*-*/
	local[13]= w;
	local[14]= local[8];
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)MINUS(ctx,2,local+14); /*-*/
	local[14]= w;
	local[15]= makeflt(2.0000000000000000000000e+00);
	ctx->vsp=local+16;
	w=(pointer)QUOTIENT(ctx,2,local+14); /*/*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)QUOTIENT(ctx,2,local+13); /*/*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= w;
	goto CON2675;
CON2684:
	local[11]= NIL;
CON2675:
	local[11]= local[0];
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[60])(ctx,1,local+11,&ftab[60],fqv[592]); /*plusp*/
	if (w==NIL) goto IF2685;
	local[11]= makeint((eusinteger_t)1L);
	goto IF2686;
IF2685:
	local[11]= makeint((eusinteger_t)-1L);
IF2686:
	local[12]= local[0];
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)2L);
	ctx->vsp=local+14;
	w=(*ftab[28])(ctx,2,local+12,&ftab[28],fqv[201]); /*expt*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)TIMES(ctx,2,local+11); /***/
	local[11]= w;
	local[12]= local[11];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)GREATERP(ctx,2,local+12); /*>*/
	if (w==NIL) goto AND2690;
	local[12]= local[11];
	local[13]= makeint((eusinteger_t)0L);
	ctx->vsp=local+14;
	w=(pointer)LESSP(ctx,2,local+12); /*<*/
	if (w==NIL) goto AND2690;
	goto OR2689;
AND2690:
	local[12]= local[11];
	if (loadglobal(fqv[64])==local[12]) goto OR2689;
	local[12]= local[11];
	if (loadglobal(fqv[63])==local[12]) goto OR2689;
	goto IF2687;
OR2689:
	local[11] = makeflt(0.0000000000000000000000e+00);
	local[12]= local[11];
	goto IF2688;
IF2687:
	local[12]= NIL;
IF2688:
	local[12]= local[0];
	local[13]= local[4];
	local[14]= local[11];
	ctx->vsp=local+15;
	w=(pointer)SETELT(ctx,3,local+12); /*setelt*/
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL2668;
WHX2669:
	local[6]= NIL;
BLK2670:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK2664:
	ctx->vsp=local; return(local[0]);}

/*calc-jacobian-from-link-list-including-robot-and-obj-virtual-joint*/
static pointer F770calc_jacobian_from_link_list_including_robot_and_obj_virtual_joint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[593], &argv[4], n-4, local+0, 0);
	if (n & (1<<0)) goto KEY2692;
	local[0] = fqv[594];
KEY2692:
	if (n & (1<<1)) goto KEY2693;
	local[1] = fqv[595];
KEY2693:
	if (n & (1<<2)) goto KEY2694;
	local[3]= argv[3];
	local[4]= fqv[210];
	local[5]= local[0];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,4,local+3); /*send*/
	local[3]= w;
	local[4]= argv[3];
	local[5]= fqv[211];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[23])(ctx,2,local+3,&ftab[23],fqv[166]); /*make-matrix*/
	local[2] = w;
KEY2694:
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO2695,env,argv,local);
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,2,local+3); /*mapcar*/
	local[3]= w;
	local[4]= NIL;
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,CLO2696,env,argv,local);
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)MAPCAR(ctx,2,local+5); /*mapcar*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[54])(ctx,2,local+4,&ftab[54],fqv[549]); /*remove*/
	local[4]= w;
	local[5]= argv[3];
	local[6]= fqv[211];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= argv[3];
	local[7]= fqv[300];
	local[8]= local[4];
	local[9]= fqv[596];
	local[10]= local[5];
	local[11]= fqv[273];
	local[12]= local[2];
	local[13]= fqv[597];
	local[14]= argv[1];
	local[15]= fqv[301];
	local[16]= argv[2];
	local[17]= fqv[410];
	local[18]= local[0];
	local[19]= fqv[336];
	local[20]= local[1];
	ctx->vsp=local+21;
	w=(pointer)SEND(ctx,15,local+6); /*send*/
	local[6]= argv[3];
	local[7]= fqv[300];
	local[8]= local[3];
	local[9]= fqv[301];
	local[10]= argv[1];
	local[11]= fqv[273];
	local[12]= local[2];
	local[13]= fqv[410];
	local[14]= local[0];
	local[15]= fqv[336];
	local[16]= local[1];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,11,local+6); /*send*/
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(*ftab[29])(ctx,1,local+7,&ftab[29],fqv[204]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
WHL2698:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX2699;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(*ftab[29])(ctx,1,local+9,&ftab[29],fqv[204]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
WHL2702:
	local[10]= local[8];
	w = local[9];
	if ((eusinteger_t)local[10] >= (eusinteger_t)w) goto WHX2703;
	local[10]= local[2];
	local[11]= local[6];
	local[12]= local[5];
	local[13]= local[8];
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,2,local+12); /*+*/
	local[12]= w;
	local[13]= makeflt(-1.0000000000000000000000e+00);
	local[14]= local[2];
	local[15]= local[6];
	local[16]= local[5];
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(pointer)PLUS(ctx,2,local+16); /*+*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)AREF(ctx,3,local+14); /*aref*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)TIMES(ctx,2,local+13); /***/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)ASET(ctx,4,local+10); /*aset*/
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[8] = w;
	goto WHL2702;
WHX2703:
	local[10]= NIL;
BLK2704:
	w = NIL;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL2698;
WHX2699:
	local[8]= NIL;
BLK2700:
	w = NIL;
	w = local[2];
	local[0]= w;
BLK2691:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2695(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO2705,env,argv,local);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[55])(ctx,2,local+0,&ftab[55],fqv[560]); /*remove-if-not*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2705(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env0->c.clo.env1[3];
	local[2]= fqv[136];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[16])(ctx,2,local+0,&ftab[16],fqv[124]); /*member*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2696(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO2706,env,argv,local);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[61])(ctx,2,local+0,&ftab[61],fqv[598]); /*remove-if*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2706(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env0->c.clo.env1[3];
	local[2]= fqv[136];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[16])(ctx,2,local+0,&ftab[16],fqv[124]); /*member*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*append-obj-virtual-joint*/
static pointer F771append_obj_virtual_joint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[599], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY2708;
	local[0] = loadglobal(fqv[600]);
KEY2708:
	if (n & (1<<1)) goto KEY2709;
	local[1] = NIL;
KEY2709:
	if (n & (1<<2)) goto KEY2710;
	local[2] = NIL;
KEY2710:
	if (n & (1<<3)) goto KEY2711;
	local[3] = NIL;
KEY2711:
	if (n & (1<<4)) goto KEY2712;
	local[4] = NIL;
KEY2712:
	ctx->vsp=local+5;
	local[5]= makeclosure(codevec,quotevec,FLET2713,env,argv,local);
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO2714,env,argv,local);
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)MAPCAR(ctx,2,local+6); /*mapcar*/
	local[6]= w;
	if (local[2]==NIL) goto IF2715;
	local[7]= local[2];
	goto IF2716;
IF2715:
	local[7]= fqv[601];
	if (local[3]==NIL) goto IF2717;
	local[8]= local[3];
	goto IF2718;
IF2717:
	local[8]= makeint((eusinteger_t)1L);
	local[9]= argv[1];
	ctx->vsp=local+10;
	w=(pointer)LENGTH(ctx,1,local+9); /*length*/
	if (w!=local[8]) goto IF2719;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= fqv[153];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	goto IF2720;
IF2719:
	local[8]= (pointer)get_sym_func(fqv[602]);
	local[9]= makeflt(5.0000000000000000000000e-01);
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,3,local+8); /*apply*/
	local[8]= w;
IF2720:
IF2718:
	w = local[5];
	ctx->vsp=local+9;
	w=FLET2713(ctx,2,local+7,w);
	local[7]= w;
IF2716:
	local[8]= fqv[603];
	if (local[4]==NIL) goto IF2721;
	local[9]= local[4];
	goto IF2722;
IF2721:
	local[9]= local[7];
	local[10]= fqv[153];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
IF2722:
	w = local[5];
	ctx->vsp=local+10;
	w=FLET2713(ctx,2,local+8,w);
	local[8]= w;
	local[9]= NIL;
	local[10]= local[6];
WHL2724:
	if (local[10]==NIL) goto WHX2725;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[10];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10] = (w)->c.cons.cdr;
	w = local[11];
	local[9] = w;
	local[11]= local[8];
	local[12]= fqv[299];
	local[13]= local[9];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,3,local+11); /*send*/
	goto WHL2724;
WHX2725:
	local[11]= NIL;
BLK2726:
	w = NIL;
	local[9]= local[7];
	local[10]= fqv[299];
	local[11]= local[8];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= local[8];
	local[10]= loadglobal(fqv[214]);
	local[11]= fqv[131];
	local[12]= local[0];
	ctx->vsp=local+13;
	w=(pointer)INSTANTIATE(ctx,1,local+12); /*instantiate*/
	local[12]= w;
	local[13]= (pointer)get_sym_func(fqv[289]);
	local[14]= local[12];
	local[15]= fqv[36];
	local[16]= fqv[130];
	local[17]= local[8];
	local[18]= fqv[133];
	local[19]= local[7];
	local[20]= local[1];
	ctx->vsp=local+21;
	w=(pointer)APPLY(ctx,8,local+13); /*apply*/
	w = local[12];
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)SENDMESSAGE(ctx,4,local+9); /*send-message*/
	local[9]= local[8];
	local[10]= fqv[132];
	local[11]= local[7];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	local[9]= local[7];
	local[10]= fqv[134];
	local[11]= local[8];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	ctx->vsp=local+9;
	local[9]= makeclosure(codevec,quotevec,CLO2729,env,argv,local);
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(pointer)MAPCAR(ctx,2,local+9); /*mapcar*/
	local[9]= w;
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,2,local+9); /*list*/
	local[0]= w;
BLK2707:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET2713(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= loadglobal(fqv[214]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[36];
	local[3]= fqv[120];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(*ftab[40])(ctx,2,local+3,&ftab[40],fqv[298]); /*make-cascoords*/
	local[3]= w;
	local[4]= fqv[127];
	local[5]= makeint((eusinteger_t)10L);
	local[6]= makeint((eusinteger_t)10L);
	local[7]= makeint((eusinteger_t)10L);
	ctx->vsp=local+8;
	w=(*ftab[62])(ctx,3,local+5,&ftab[62],fqv[604]); /*make-cube*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	local[5]= w;
	local[6]= fqv[3];
	local[7]= argv[0];
	local[8]= fqv[274];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= fqv[258];
	local[11]= fqv[605];
	local[12]= fqv[606];
	local[13]= makeint((eusinteger_t)3L);
	local[14]= makeint((eusinteger_t)3L);
	ctx->vsp=local+15;
	w=(*ftab[23])(ctx,2,local+13,&ftab[23],fqv[166]); /*make-matrix*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,13,local+1); /*send*/
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2714(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[120];
	local[1]= argv[0];
	local[2]= fqv[153];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[40])(ctx,2,local+0,&ftab[40],fqv[298]); /*make-cascoords*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2729(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[8];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*append-multiple-obj-virtual-joint*/
static pointer F772append_multiple_obj_virtual_joint(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[607], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY2732;
	local[0] = fqv[608];
KEY2732:
	if (n & (1<<1)) goto KEY2733;
	local[1] = fqv[609];
KEY2733:
	if (n & (1<<2)) goto KEY2734;
	local[2] = NIL;
KEY2734:
	if (n & (1<<3)) goto KEY2735;
	local[3] = NIL;
KEY2735:
	if (n & (1<<4)) goto KEY2736;
	local[4] = NIL;
KEY2736:
	local[5]= argv[0];
	local[6]= local[2];
	local[7]= local[3];
	local[8]= NIL;
	ctx->vsp=local+9;
	local[9]= makeclosure(codevec,quotevec,CLO2737,env,argv,local);
	local[10]= local[0];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)MAPCAR(ctx,3,local+9); /*mapcar*/
	w = local[8];
	local[0]= w;
BLK2731:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2737(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= env->c.clo.env2[5];
	local[1]= env->c.clo.env1[1];
	local[2]= fqv[610];
	local[3]= argv[0];
	local[4]= fqv[611];
	local[5]= argv[1];
	local[6]= fqv[612];
	local[7]= env->c.clo.env2[6];
	local[8]= fqv[613];
	local[9]= env->c.clo.env2[7];
	local[10]= fqv[614];
	local[11]= env->c.clo.env2[4];
	ctx->vsp=local+12;
	w=(pointer)F771append_obj_virtual_joint(ctx,12,local+0); /*append-obj-virtual-joint*/
	env->c.clo.env2[8] = w;
	w=env->c.clo.env2[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	env->c.clo.env2[5] = (w)->c.cons.car;
	w=env->c.clo.env2[8];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	ctx->vsp=local+1;
	w=(*ftab[38])(ctx,1,local+0,&ftab[38],fqv[292]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	env->c.clo.env2[6] = (w)->c.cons.car;
	w = env->c.clo.env2[6];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*with-difference-position-and-rotation*/
static pointer F2738(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST2740:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)GENSYM(ctx,0,local+3); /*gensym*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)GENSYM(ctx,0,local+4); /*gensym*/
	local[4]= w;
	local[5]= fqv[528];
	local[6]= local[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= local[2];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(*ftab[63])(ctx,1,local+8,&ftab[63],fqv[615]); /*cadddr*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= local[4];
	local[9]= fqv[336];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[16])(ctx,2,local+9,&ftab[16],fqv[124]); /*member*/
	if (w==NIL) goto IF2741;
	local[9]= fqv[336];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[16])(ctx,2,local+9,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	goto IF2742;
IF2741:
	local[9]= T;
IF2742:
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[3];
	local[10]= fqv[410];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(*ftab[16])(ctx,2,local+10,&ftab[16],fqv[124]); /*member*/
	if (w==NIL) goto IF2743;
	local[10]= fqv[410];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(*ftab[16])(ctx,2,local+10,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	goto IF2744;
IF2743:
	local[10]= T;
IF2744:
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[528];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= fqv[289];
	local[10]= local[1];
	local[11]= fqv[570];
	local[12]= local[2];
	local[13]= fqv[336];
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= fqv[289];
	local[11]= local[1];
	local[12]= fqv[571];
	local[13]= local[2];
	local[14]= fqv[410];
	local[15]= local[3];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[0];
	local[10]= NIL;
	ctx->vsp=local+11;
	w=(pointer)APPEND(ctx,2,local+9); /*append*/
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
BLK2739:
	ctx->vsp=local; return(local[0]);}

/*with-difference-positions-and-rotations*/
static pointer F2745(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST2747:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)GENSYM(ctx,0,local+3); /*gensym*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)GENSYM(ctx,0,local+4); /*gensym*/
	local[4]= w;
	local[5]= fqv[576];
	local[6]= local[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= local[2];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(*ftab[63])(ctx,1,local+8,&ftab[63],fqv[615]); /*cadddr*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= local[4];
	local[9]= fqv[616];
	local[10]= fqv[336];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(*ftab[16])(ctx,2,local+10,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	local[11]= fqv[336];
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(*ftab[16])(ctx,2,local+11,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= fqv[208];
	local[13]= fqv[427];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[209];
	local[15]= fqv[617];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
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
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[3];
	local[10]= fqv[616];
	local[11]= fqv[410];
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(*ftab[16])(ctx,2,local+11,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= fqv[410];
	local[13]= argv[0];
	ctx->vsp=local+14;
	w=(*ftab[16])(ctx,2,local+12,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= fqv[208];
	local[14]= fqv[427];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	local[15]= fqv[209];
	local[16]= fqv[617];
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
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[528];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= fqv[618];
	local[10]= fqv[517];
	local[11]= fqv[518];
	local[12]= fqv[619];
	local[13]= fqv[620];
	local[14]= fqv[621];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[289];
	local[14]= fqv[619];
	local[15]= fqv[570];
	local[16]= fqv[620];
	local[17]= fqv[336];
	local[18]= fqv[621];
	ctx->vsp=local+19;
	w=(pointer)LIST(ctx,1,local+18); /*list*/
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
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
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= local[1];
	local[12]= local[2];
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= fqv[618];
	local[11]= fqv[517];
	local[12]= fqv[518];
	local[13]= fqv[619];
	local[14]= fqv[620];
	local[15]= fqv[622];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[289];
	local[15]= fqv[619];
	local[16]= fqv[571];
	local[17]= fqv[620];
	local[18]= fqv[410];
	local[19]= fqv[622];
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= local[1];
	local[13]= local[2];
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[0];
	local[10]= NIL;
	ctx->vsp=local+11;
	w=(pointer)APPEND(ctx,2,local+9); /*append*/
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
BLK2746:
	ctx->vsp=local; return(local[0]);}

/*with-move-target-link-list*/
static pointer F2748(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST2750:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)GENSYM(ctx,0,local+3); /*gensym*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)GENSYM(ctx,0,local+4); /*gensym*/
	local[4]= w;
	local[5]= fqv[576];
	local[6]= local[3];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= local[4];
	local[8]= fqv[616];
	local[9]= fqv[623];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[63])(ctx,1,local+10,&ftab[63],fqv[615]); /*cadddr*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[522];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(*ftab[63])(ctx,1,local+11,&ftab[63],fqv[615]); /*cadddr*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(*ftab[63])(ctx,1,local+11,&ftab[63],fqv[615]); /*cadddr*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= local[1];
	local[9]= fqv[624];
	local[10]= fqv[301];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(*ftab[16])(ctx,2,local+10,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	local[11]= fqv[616];
	local[12]= fqv[623];
	local[13]= fqv[301];
	local[14]= argv[0];
	ctx->vsp=local+15;
	w=(*ftab[16])(ctx,2,local+13,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[522];
	local[14]= fqv[301];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(*ftab[16])(ctx,2,local+14,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[301];
	local[15]= argv[0];
	ctx->vsp=local+16;
	w=(*ftab[16])(ctx,2,local+14,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[617];
	local[12]= fqv[618];
	local[13]= fqv[517];
	local[14]= fqv[518];
	local[15]= fqv[625];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	local[15]= w;
	local[16]= fqv[289];
	local[17]= local[3];
	local[18]= fqv[625];
	local[19]= fqv[626];
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
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[2];
	local[10]= fqv[618];
	local[11]= fqv[517];
	local[12]= fqv[518];
	local[13]= fqv[627];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	local[13]= w;
	local[14]= fqv[289];
	local[15]= local[3];
	local[16]= fqv[261];
	local[17]= fqv[289];
	local[18]= fqv[627];
	local[19]= fqv[215];
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	local[17]= cons(ctx,local[17],w);
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[528];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[0];
	local[10]= NIL;
	ctx->vsp=local+11;
	w=(pointer)APPEND(ctx,2,local+9); /*append*/
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
BLK2749:
	ctx->vsp=local; return(local[0]);}

/*with-append-root-joint*/
static pointer F2751(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST2753:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)GENSYM(ctx,0,local+3); /*gensym*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)GENSYM(ctx,0,local+4); /*gensym*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)GENSYM(ctx,0,local+5); /*gensym*/
	local[5]= w;
	local[6]= fqv[513];
	local[7]= fqv[528];
	local[8]= local[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[2];
	local[10]= fqv[616];
	local[11]= fqv[566];
	local[12]= fqv[517];
	local[13]= fqv[628];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[13]= (w)->c.cons.car;
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= fqv[522];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14]= (w)->c.cons.car;
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
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
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= local[5];
	local[11]= fqv[611];
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(*ftab[16])(ctx,2,local+11,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[528];
	local[10]= local[3];
	local[11]= fqv[512];
	local[12]= fqv[214];
	local[13]= fqv[36];
	local[14]= fqv[298];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	local[14]= w;
	local[15]= fqv[127];
	local[16]= fqv[522];
	local[17]= fqv[604];
	local[18]= fqv[629];
	local[19]= fqv[630];
	local[20]= fqv[631];
	ctx->vsp=local+21;
	w=(pointer)LIST(ctx,1,local+20); /*list*/
	ctx->vsp=local+20;
	w = cons(ctx,local[19],w);
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	local[17]= cons(ctx,local[17],w);
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	local[17]= fqv[3];
	local[18]= fqv[460];
	local[19]= fqv[632];
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	local[18]= cons(ctx,local[18],w);
	local[19]= fqv[274];
	local[20]= fqv[633];
	local[21]= fqv[258];
	local[22]= fqv[5];
	local[23]= fqv[634];
	local[24]= fqv[635];
	local[25]= fqv[636];
	ctx->vsp=local+26;
	w=(pointer)LIST(ctx,1,local+25); /*list*/
	ctx->vsp=local+25;
	w = cons(ctx,local[24],w);
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	local[22]= cons(ctx,local[22],w);
	local[23]= fqv[606];
	local[24]= fqv[166];
	local[25]= fqv[637];
	local[26]= fqv[638];
	ctx->vsp=local+27;
	w=(pointer)LIST(ctx,1,local+26); /*list*/
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
	w = cons(ctx,local[21],w);
	ctx->vsp=local+21;
	w = cons(ctx,local[20],w);
	ctx->vsp=local+20;
	w = cons(ctx,local[19],w);
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= local[4];
	local[12]= fqv[639];
	local[13]= fqv[289];
	local[14]= local[1];
	local[15]= fqv[136];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
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
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[34];
	local[12]= local[4];
	local[13]= fqv[214];
	local[14]= fqv[131];
	local[15]= fqv[640];
	local[16]= fqv[610];
	local[17]= argv[0];
	ctx->vsp=local+18;
	w=(*ftab[16])(ctx,2,local+16,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	if (local[16]!=NIL) goto OR2754;
	local[16]= loadglobal(fqv[600]);
OR2754:
	local[17]= fqv[36];
	local[18]= fqv[130];
	local[19]= local[1];
	local[20]= fqv[133];
	local[21]= local[3];
	local[22]= local[5];
	ctx->vsp=local+23;
	w=(pointer)LIST(ctx,1,local+22); /*list*/
	ctx->vsp=local+22;
	w = cons(ctx,local[21],w);
	ctx->vsp=local+21;
	w = cons(ctx,local[20],w);
	ctx->vsp=local+20;
	w = cons(ctx,local[19],w);
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[289];
	local[13]= local[4];
	local[14]= fqv[132];
	local[15]= local[3];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[289];
	local[14]= local[3];
	local[15]= fqv[134];
	local[16]= local[4];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[641];
	local[15]= fqv[528];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	local[17]= fqv[618];
	local[18]= fqv[517];
	local[19]= fqv[518];
	local[20]= fqv[642];
	ctx->vsp=local+21;
	w=(pointer)LIST(ctx,1,local+20); /*list*/
	local[20]= w;
	local[21]= fqv[88];
	local[22]= local[4];
	local[23]= fqv[642];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	local[21]= cons(ctx,local[21],w);
	ctx->vsp=local+22;
	w=(pointer)LIST(ctx,1,local+21); /*list*/
	ctx->vsp=local+21;
	w = cons(ctx,local[20],w);
	ctx->vsp=local+20;
	local[19]= cons(ctx,local[19],w);
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	local[18]= cons(ctx,local[18],w);
	local[19]= local[2];
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	local[17]= cons(ctx,local[17],w);
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	local[16]= w;
	local[17]= local[0];
	local[18]= NIL;
	ctx->vsp=local+19;
	w=(pointer)APPEND(ctx,2,local+17); /*append*/
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	local[16]= fqv[289];
	local[17]= local[4];
	local[18]= fqv[643];
	ctx->vsp=local+19;
	w=(pointer)LIST(ctx,1,local+18); /*list*/
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	local[17]= fqv[289];
	local[18]= local[4];
	local[19]= fqv[644];
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	local[17]= cons(ctx,local[17],w);
	local[18]= fqv[289];
	local[19]= local[3];
	local[20]= fqv[645];
	local[21]= local[4];
	ctx->vsp=local+22;
	w=(pointer)LIST(ctx,1,local+21); /*list*/
	ctx->vsp=local+21;
	w = cons(ctx,local[20],w);
	ctx->vsp=local+20;
	w = cons(ctx,local[19],w);
	ctx->vsp=local+19;
	local[18]= cons(ctx,local[18],w);
	ctx->vsp=local+19;
	w=(pointer)LIST(ctx,1,local+18); /*list*/
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	local[0]= w;
BLK2752:
	ctx->vsp=local; return(local[0]);}

/*with-assoc-move-target*/
static pointer F2755(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST2757:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	local[3]= fqv[528];
	local[4]= local[1];
	local[5]= fqv[616];
	local[6]= fqv[623];
	local[7]= fqv[301];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(*ftab[16])(ctx,2,local+7,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[522];
	local[8]= fqv[301];
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(*ftab[16])(ctx,2,local+8,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[301];
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(*ftab[16])(ctx,2,local+8,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= local[2];
	local[6]= fqv[616];
	local[7]= fqv[623];
	local[8]= fqv[133];
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(*ftab[16])(ctx,2,local+8,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[522];
	local[9]= fqv[133];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[16])(ctx,2,local+9,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[133];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[16])(ctx,2,local+9,&ftab[16],fqv[124]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
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
	local[5]= fqv[458];
	local[6]= local[1];
	local[7]= fqv[618];
	local[8]= fqv[517];
	local[9]= fqv[518];
	local[10]= fqv[646];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	local[10]= w;
	local[11]= fqv[298];
	local[12]= fqv[120];
	local[13]= fqv[289];
	local[14]= fqv[646];
	local[15]= fqv[153];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[618];
	local[7]= fqv[517];
	local[8]= fqv[518];
	local[9]= fqv[647];
	local[10]= fqv[646];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[289];
	local[11]= fqv[647];
	local[12]= fqv[299];
	local[13]= fqv[646];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
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
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= local[2];
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[641];
	local[8]= fqv[528];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	local[9]= w;
	local[10]= local[0];
	local[11]= NIL;
	ctx->vsp=local+12;
	w=(pointer)APPEND(ctx,2,local+10); /*append*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[618];
	local[10]= fqv[517];
	local[11]= fqv[518];
	local[12]= fqv[648];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	local[12]= w;
	local[13]= fqv[289];
	local[14]= fqv[289];
	local[15]= fqv[648];
	local[16]= fqv[215];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	local[15]= fqv[302];
	local[16]= fqv[648];
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
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
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
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	local[0]= w;
BLK2756:
	ctx->vsp=local; return(local[0]);}

/*eusmodel-validity-check-one*/
static pointer F773eusmodel_validity_check_one(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[136];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
WHL2759:
	local[1]= local[0];
	local[2]= fqv[133];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	if (w==NIL) goto WHX2760;
	local[1]= loadglobal(fqv[176]);
	local[2]= NIL;
	local[3]= fqv[649];
	local[4]= local[0];
	local[5]= local[0];
	local[6]= fqv[133];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,4,local+2); /*format*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	local[1]= loadglobal(fqv[176]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[1]= fqv[650];
	ctx->vsp=local+2;
	w=(*ftab[64])(ctx,1,local+1,&ftab[64],fqv[651]); /*reploop*/
	goto WHL2759;
WHX2760:
	local[1]= NIL;
BLK2761:
WHL2762:
	local[1]= argv[0];
	local[2]= local[0];
	local[3]= fqv[215];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)EQUAL(ctx,2,local+1); /*equal*/
	if (w!=NIL) goto WHX2763;
	local[1]= loadglobal(fqv[176]);
	local[2]= NIL;
	local[3]= fqv[652];
	local[4]= local[0];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,4,local+2); /*format*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	local[1]= loadglobal(fqv[176]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[1]= fqv[653];
	ctx->vsp=local+2;
	w=(*ftab[64])(ctx,1,local+1,&ftab[64],fqv[651]); /*reploop*/
	goto WHL2762;
WHX2763:
	local[1]= NIL;
BLK2764:
	w = local[1];
	local[0]= (pointer)get_sym_func(fqv[654]);
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO2765,env,argv,local);
	local[2]= argv[0];
	local[3]= fqv[655];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[55])(ctx,2,local+1,&ftab[55],fqv[560]); /*remove-if-not*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[656];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[47])(ctx,1,local+0,&ftab[47],fqv[446]); /*remove-duplicates*/
	local[0]= w;
	local[1]= (pointer)get_sym_func(fqv[654]);
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO2766,env,argv,local);
	local[3]= argv[0];
	local[4]= fqv[655];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[55])(ctx,2,local+2,&ftab[55],fqv[560]); /*remove-if-not*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= fqv[136];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)APPEND(ctx,2,local+1); /*append*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[47])(ctx,1,local+1,&ftab[47],fqv[446]); /*remove-duplicates*/
	local[1]= w;
WHL2767:
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
	w = makeint((eusinteger_t)1L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[2]= (pointer)((eusinteger_t)local[2] + (eusinteger_t)w);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	if (w==local[2]) goto WHX2768;
	local[2]= loadglobal(fqv[176]);
	local[3]= NIL;
	local[4]= fqv[657];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,4,local+3); /*format*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,2,local+2); /*format*/
	local[2]= loadglobal(fqv[176]);
	ctx->vsp=local+3;
	w=(pointer)FINOUT(ctx,1,local+2); /*finish-output*/
	local[2]= fqv[658];
	ctx->vsp=local+3;
	w=(*ftab[64])(ctx,1,local+2,&ftab[64],fqv[651]); /*reploop*/
	goto WHL2767;
WHX2768:
	local[2]= NIL;
BLK2769:
	local[2]= NIL;
	local[3]= local[0];
WHL2771:
	if (local[3]==NIL) goto WHX2772;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
WHL2775:
	local[4]= local[2];
	local[5]= fqv[130];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	if (w==NIL) goto AND2778;
	local[4]= local[2];
	local[5]= fqv[130];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= loadglobal(fqv[214]);
	ctx->vsp=local+6;
	w=(pointer)DERIVEDP(ctx,2,local+4); /*derivedp*/
	if (w==NIL) goto AND2778;
	goto WHX2776;
AND2778:
	local[4]= loadglobal(fqv[176]);
	local[5]= NIL;
	local[6]= fqv[659];
	local[7]= local[2];
	local[8]= local[2];
	local[9]= fqv[130];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,4,local+5); /*format*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,2,local+4); /*format*/
	local[4]= loadglobal(fqv[176]);
	ctx->vsp=local+5;
	w=(pointer)FINOUT(ctx,1,local+4); /*finish-output*/
	local[4]= fqv[660];
	ctx->vsp=local+5;
	w=(*ftab[64])(ctx,1,local+4,&ftab[64],fqv[651]); /*reploop*/
	goto WHL2775;
WHX2776:
	local[4]= NIL;
BLK2777:
WHL2779:
	local[4]= local[2];
	local[5]= fqv[133];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	if (w==NIL) goto AND2782;
	local[4]= local[2];
	local[5]= fqv[133];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= loadglobal(fqv[214]);
	ctx->vsp=local+6;
	w=(pointer)DERIVEDP(ctx,2,local+4); /*derivedp*/
	if (w==NIL) goto AND2782;
	goto WHX2780;
AND2782:
	local[4]= loadglobal(fqv[176]);
	local[5]= NIL;
	local[6]= fqv[661];
	local[7]= local[2];
	local[8]= local[2];
	local[9]= fqv[133];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,4,local+5); /*format*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,2,local+4); /*format*/
	local[4]= loadglobal(fqv[176]);
	ctx->vsp=local+5;
	w=(pointer)FINOUT(ctx,1,local+4); /*finish-output*/
	local[4]= fqv[662];
	ctx->vsp=local+5;
	w=(*ftab[64])(ctx,1,local+4,&ftab[64],fqv[651]); /*reploop*/
	goto WHL2779;
WHX2780:
	local[4]= NIL;
BLK2781:
WHL2783:
	local[4]= local[2];
	local[5]= fqv[130];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[2];
	local[6]= fqv[133];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= fqv[547];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[16])(ctx,2,local+4,&ftab[16],fqv[124]); /*member*/
	if (w==NIL) goto AND2786;
	local[4]= local[2];
	local[5]= fqv[133];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[2];
	local[6]= fqv[130];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= fqv[215];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)EQUAL(ctx,2,local+4); /*equal*/
	if (w==NIL) goto AND2786;
	goto WHX2784;
AND2786:
	local[4]= loadglobal(fqv[176]);
	local[5]= NIL;
	local[6]= fqv[663];
	local[7]= local[2];
	local[8]= local[2];
	local[9]= fqv[133];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= local[2];
	local[10]= fqv[130];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,5,local+5); /*format*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,2,local+4); /*format*/
	local[4]= loadglobal(fqv[176]);
	ctx->vsp=local+5;
	w=(pointer)FINOUT(ctx,1,local+4); /*finish-output*/
	local[4]= fqv[664];
	ctx->vsp=local+5;
	w=(*ftab[64])(ctx,1,local+4,&ftab[64],fqv[651]); /*reploop*/
	goto WHL2783;
WHX2784:
	local[4]= NIL;
BLK2785:
WHL2787:
	local[4]= local[2];
	local[5]= fqv[130];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[133];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[2];
	local[6]= fqv[133];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)EQUAL(ctx,2,local+4); /*equal*/
	if (w==NIL) goto AND2790;
	local[4]= local[2];
	local[5]= fqv[130];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[2];
	local[6]= fqv[133];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= fqv[548];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[16])(ctx,2,local+4,&ftab[16],fqv[124]); /*member*/
	if (w==NIL) goto AND2790;
	goto WHX2788;
AND2790:
	local[4]= loadglobal(fqv[176]);
	local[5]= NIL;
	local[6]= fqv[665];
	local[7]= local[2];
	local[8]= local[2];
	local[9]= fqv[130];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,2,local+8); /*send*/
	local[8]= w;
	local[9]= local[2];
	local[10]= fqv[133];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,5,local+5); /*format*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,2,local+4); /*format*/
	local[4]= loadglobal(fqv[176]);
	ctx->vsp=local+5;
	w=(pointer)FINOUT(ctx,1,local+4); /*finish-output*/
	local[4]= fqv[666];
	ctx->vsp=local+5;
	w=(*ftab[64])(ctx,1,local+4,&ftab[64],fqv[651]); /*reploop*/
	goto WHL2787;
WHX2788:
	local[4]= NIL;
BLK2789:
	goto WHL2771;
WHX2772:
	local[4]= NIL;
BLK2773:
	w = NIL;
	local[0]= w;
BLK2758:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2765(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	local[1]= loadglobal(fqv[28]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO2766(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	local[1]= loadglobal(fqv[214]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*eusmodel-validity-check*/
static pointer F774eusmodel_validity_check(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[667];
	local[1]= fqv[668];
	ctx->vsp=local+2;
	w=(*ftab[65])(ctx,2,local+0,&ftab[65],fqv[669]); /*require*/
	ctx->vsp=local+0;
	w=(*ftab[66])(ctx,0,local+0,&ftab[66],fqv[670]); /*init-unit-test*/
	local[0]= NIL;
	storeglobal(fqv[671],local[0]);
	local[0]= fqv[672];
	local[1]= fqv[673];
	local[2]= fqv[674];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	ctx->vsp=local+1;
	w=(pointer)EVAL(ctx,1,local+0); /*eval*/
	ctx->vsp=local+0;
	w=(*ftab[67])(ctx,0,local+0,&ftab[67],fqv[675]); /*run-all-tests*/
	local[0]= w;
BLK2791:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtmodel(ctx,n,argv,env)
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
	local[0]= fqv[676];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF2792;
	local[0]= fqv[677];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[678],w);
	goto IF2793;
IF2792:
	local[0]= fqv[679];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF2793:
	local[0]= fqv[680];
	ctx->vsp=local+1;
	w=(*ftab[65])(ctx,1,local+0,&ftab[65],fqv[669]); /*require*/
	local[0]= fqv[681];
	ctx->vsp=local+1;
	w=(*ftab[65])(ctx,1,local+0,&ftab[65],fqv[669]); /*require*/
	local[0]= fqv[682];
	ctx->vsp=local+1;
	w=(*ftab[65])(ctx,1,local+0,&ftab[65],fqv[669]); /*require*/
	local[0]= fqv[28];
	local[1]= fqv[683];
	local[2]= fqv[28];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[685]);
	local[5]= fqv[655];
	local[6]= fqv[686];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M775joint_init,fqv[36],fqv[28],fqv[691]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M796joint_min_angle,fqv[22],fqv[28],fqv[692]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M802joint_max_angle,fqv[23],fqv[28],fqv[693]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M808joint_parent_link,fqv[133],fqv[28],fqv[694]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M811joint_child_link,fqv[130],fqv[28],fqv[695]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M814joint_calc_dav_gain,fqv[696],fqv[28],fqv[697]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M816joint_joint_dof,fqv[31],fqv[28],fqv[698]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M818joint_speed_to_angle,fqv[312],fqv[28],fqv[699]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M821joint_angle_to_speed,fqv[589],fqv[28],fqv[700]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M824joint_calc_jacobian,fqv[230],fqv[28],fqv[701]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M827joint_joint_velocity,fqv[37],fqv[28],fqv[702]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M833joint_joint_acceleration,fqv[38],fqv[28],fqv[703]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M839joint_joint_torque,fqv[39],fqv[28],fqv[704]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M845joint_max_joint_velocity,fqv[8],fqv[28],fqv[705]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M851joint_max_joint_torque,fqv[9],fqv[28],fqv[706]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M857joint_joint_min_max_table,fqv[10],fqv[28],fqv[707]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M863joint_joint_min_max_target,fqv[11],fqv[28],fqv[708]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M869joint_joint_min_max_table_angle_interpolate,fqv[21],fqv[28],fqv[709]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M872joint_joint_min_max_table_min_angle,fqv[41],fqv[28],fqv[710]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M876joint_joint_min_max_table_max_angle,fqv[42],fqv[28],fqv[711]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[712],module,F759calc_jacobian_default_rotate_vector,fqv[713]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[50],module,F760calc_jacobian_rotational,fqv[714]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[61],module,F761calc_jacobian_linear,fqv[715]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[716],module,F762calc_angle_speed_gain_scalar,fqv[717]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[718],module,F763calc_angle_speed_gain_vector,fqv[719]);
	local[0]= fqv[720];
	local[1]= fqv[683];
	local[2]= fqv[720];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[28]);
	local[5]= fqv[655];
	local[6]= fqv[721];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M918rotational_joint_init,fqv[36],fqv[720],fqv[722]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M928rotational_joint_joint_angle,fqv[20],fqv[720],fqv[723]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M947rotational_joint_joint_dof,fqv[31],fqv[720],fqv[724]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M949rotational_joint_calc_angle_speed_gain,fqv[246],fqv[720],fqv[725]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M951rotational_joint_speed_to_angle,fqv[312],fqv[720],fqv[726]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M953rotational_joint_angle_to_speed,fqv[589],fqv[720],fqv[727]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M955rotational_joint_calc_jacobian,fqv[230],fqv[720],fqv[728]);
	local[0]= fqv[729];
	local[1]= fqv[683];
	local[2]= fqv[729];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[28]);
	local[5]= fqv[655];
	local[6]= fqv[730];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M958linear_joint_init,fqv[36],fqv[729],fqv[731]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M983linear_joint_joint_angle,fqv[20],fqv[729],fqv[732]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1000linear_joint_joint_dof,fqv[31],fqv[729],fqv[733]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1002linear_joint_calc_angle_speed_gain,fqv[246],fqv[729],fqv[734]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1004linear_joint_speed_to_angle,fqv[312],fqv[729],fqv[735]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1006linear_joint_angle_to_speed,fqv[589],fqv[729],fqv[736]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1008linear_joint_calc_jacobian,fqv[230],fqv[729],fqv[737]);
	local[0]= fqv[738];
	local[1]= fqv[683];
	local[2]= fqv[738];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[28]);
	local[5]= fqv[655];
	local[6]= fqv[739];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1011wheel_joint_init,fqv[36],fqv[738],fqv[740]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1018wheel_joint_joint_angle,fqv[20],fqv[738],fqv[741]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1029wheel_joint_joint_dof,fqv[31],fqv[738],fqv[742]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1031wheel_joint_calc_angle_speed_gain,fqv[246],fqv[738],fqv[743]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1033wheel_joint_speed_to_angle,fqv[312],fqv[738],fqv[744]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1035wheel_joint_angle_to_speed,fqv[589],fqv[738],fqv[745]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1037wheel_joint_calc_jacobian,fqv[230],fqv[738],fqv[746]);
	local[0]= fqv[747];
	local[1]= fqv[683];
	local[2]= fqv[747];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[28]);
	local[5]= fqv[655];
	local[6]= fqv[748];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1039omniwheel_joint_init,fqv[36],fqv[747],fqv[749]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1046omniwheel_joint_joint_angle,fqv[20],fqv[747],fqv[750]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1055omniwheel_joint_joint_dof,fqv[31],fqv[747],fqv[751]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1057omniwheel_joint_calc_angle_speed_gain,fqv[246],fqv[747],fqv[752]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1059omniwheel_joint_speed_to_angle,fqv[312],fqv[747],fqv[753]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1061omniwheel_joint_angle_to_speed,fqv[589],fqv[747],fqv[754]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1063omniwheel_joint_calc_jacobian,fqv[230],fqv[747],fqv[755]);
	local[0]= fqv[756];
	local[1]= fqv[683];
	local[2]= fqv[756];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[28]);
	local[5]= fqv[655];
	local[6]= fqv[757];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1065sphere_joint_init,fqv[36],fqv[756],fqv[758]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1072sphere_joint_joint_angle,fqv[20],fqv[756],fqv[759]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1084sphere_joint_joint_angle_rpy,fqv[760],fqv[756],fqv[761]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1093sphere_joint_joint_dof,fqv[31],fqv[756],fqv[762]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1095sphere_joint_calc_angle_speed_gain,fqv[246],fqv[756],fqv[763]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1097sphere_joint_speed_to_angle,fqv[312],fqv[756],fqv[764]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1099sphere_joint_angle_to_speed,fqv[589],fqv[756],fqv[765]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1101sphere_joint_calc_jacobian,fqv[230],fqv[756],fqv[766]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1103sphere_joint_joint_euler_angle,fqv[767],fqv[756],fqv[768]);
	local[0]= fqv[600];
	local[1]= fqv[683];
	local[2]= fqv[600];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[28]);
	local[5]= fqv[655];
	local[6]= fqv[769];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M11496dof_joint_init,fqv[36],fqv[600],fqv[770]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M11596dof_joint_joint_angle,fqv[20],fqv[600],fqv[771]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M11776dof_joint_joint_angle_rpy,fqv[760],fqv[600],fqv[772]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M11866dof_joint_joint_dof,fqv[31],fqv[600],fqv[773]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M11886dof_joint_calc_angle_speed_gain,fqv[246],fqv[600],fqv[774]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M11906dof_joint_speed_to_angle,fqv[312],fqv[600],fqv[775]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M11926dof_joint_angle_to_speed,fqv[589],fqv[600],fqv[776]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M11946dof_joint_calc_jacobian,fqv[230],fqv[600],fqv[777]);
	local[0]= fqv[214];
	local[1]= fqv[683];
	local[2]= fqv[214];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[778]);
	local[5]= fqv[655];
	local[6]= fqv[779];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1196bodyset_link_init,fqv[36],fqv[214],fqv[780]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1203bodyset_link_worldcoords,fqv[122],fqv[214],fqv[781]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1212bodyset_link_analysis_level,fqv[149],fqv[214],fqv[782]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1218bodyset_link_weight,fqv[274],fqv[214],fqv[783]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1224bodyset_link_centroid,fqv[258],fqv[214],fqv[784]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1230bodyset_link_inertia_tensor,fqv[606],fqv[214],fqv[785]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1236bodyset_link_joint,fqv[198],fqv[214],fqv[786]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1239bodyset_link_add_joint,fqv[131],fqv[214],fqv[787]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1241bodyset_link_del_joint,fqv[643],fqv[214],fqv[788]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1243bodyset_link_parent_link,fqv[133],fqv[214],fqv[789]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1245bodyset_link_child_links,fqv[548],fqv[214],fqv[790]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1247bodyset_link_add_child_links,fqv[134],fqv[214],fqv[791]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1251bodyset_link_add_parent_link,fqv[132],fqv[214],fqv[792]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1253bodyset_link_del_child_link,fqv[645],fqv[214],fqv[793]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1255bodyset_link_del_parent_link,fqv[644],fqv[214],fqv[794]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1257bodyset_link_default_coords,fqv[795],fqv[214],fqv[796]);
	local[0]= fqv[377];
	local[1]= fqv[683];
	local[2]= fqv[377];
	local[3]= fqv[684];
	local[4]= loadglobal(fqv[121]);
	local[5]= fqv[655];
	local[6]= fqv[797];
	local[7]= fqv[687];
	local[8]= NIL;
	local[9]= fqv[688];
	local[10]= NIL;
	local[11]= fqv[440];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[689];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[68])(ctx,13,local+2,&ftab[68],fqv[690]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1263cascaded_link_init,fqv[36],fqv[377],fqv[798]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1267cascaded_link_init_ending,fqv[799],fqv[377],fqv[800]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1279cascaded_link_links,fqv[136],fqv[377],fqv[801]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1282cascaded_link_joint_list,fqv[656],fqv[377],fqv[802]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1285cascaded_link_link,fqv[575],fqv[377],fqv[803]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1288cascaded_link_joint,fqv[198],fqv[377],fqv[804]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1291cascaded_link_end_coords,fqv[626],fqv[377],fqv[805]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1294cascaded_link_bodies,fqv[127],fqv[377],fqv[806]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1297cascaded_link_faces,fqv[143],fqv[377],fqv[807]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1299cascaded_link_update_descendants,fqv[135],fqv[377],fqv[808]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1302cascaded_link_angle_vector,fqv[154],fqv[377],fqv[809]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1352cascaded_link_find_link_route,fqv[147],fqv[377],fqv[810]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1360cascaded_link_link_list,fqv[261],fqv[377],fqv[811]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1366cascaded_link_make_joint_min_max_table,fqv[812],fqv[377],fqv[813]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1386cascaded_link_make_min_max_table_using_collision_check,fqv[165],fqv[377],fqv[814]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1416cascaded_link_plot_joint_min_max_table_common,fqv[188],fqv[377],fqv[815]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1438cascaded_link_plot_joint_min_max_table,fqv[816],fqv[377],fqv[817]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1462cascaded_link_calc_target_axis_dimension,fqv[210],fqv[377],fqv[818]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1482cascaded_link_calc_union_link_list,fqv[197],fqv[377],fqv[819]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1488cascaded_link_calc_target_joint_dimension,fqv[211],fqv[377],fqv[820]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1490cascaded_link_calc_inverse_jacobian,fqv[361],fqv[377],fqv[821]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1510cascaded_link_calc_gradh_from_link_list,fqv[822],fqv[377],fqv[823]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1519cascaded_link_calc_jacobian_from_link_list,fqv[300],fqv[377],fqv[824]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1597cascaded_link_calc_joint_angle_speed,fqv[308],fqv[377],fqv[825]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1639cascaded_link_calc_joint_angle_speed_gain,fqv[309],fqv[377],fqv[826]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1650cascaded_link_collision_avoidance_links,fqv[827],fqv[377],fqv[828]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1656cascaded_link_collision_avoidance_link_pair_from_link_list,fqv[338],fqv[377],fqv[829]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1713cascaded_link_collision_avoidance_calc_distance,fqv[290],fqv[377],fqv[830]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1737cascaded_link_collision_avoidance_args,fqv[297],fqv[377],fqv[831]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1743cascaded_link_collision_avoidance,fqv[363],fqv[377],fqv[832]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1785cascaded_link_move_joints,fqv[378],fqv[377],fqv[833]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1817cascaded_link_find_joint_angle_limit_weight_old_from_union_link_list,fqv[316],fqv[377],fqv[834]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1820cascaded_link_reset_joint_angle_limit_weight_old,fqv[405],fqv[377],fqv[835]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1824cascaded_link_calc_weight_from_joint_limit,fqv[326],fqv[377],fqv[836]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1858cascaded_link_calc_inverse_kinematics_weight_from_link_list,fqv[355],fqv[377],fqv[837]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1896cascaded_link_calc_nspace_from_joint_limit,fqv[330],fqv[377],fqv[838]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1906cascaded_link_calc_inverse_kinematics_nspace_from_link_list,fqv[370],fqv[377],fqv[839]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1946cascaded_link_move_joints_avoidance,fqv[434],fqv[377],fqv[840]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2030cascaded_link_inverse_kinematics_args,fqv[464],fqv[377],fqv[841]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2041cascaded_link_draw_collision_debug_view,fqv[437],fqv[377],fqv[842]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2069cascaded_link_inverse_kinematics_loop,fqv[467],fqv[377],fqv[843]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2235cascaded_link_inverse_kinematics,fqv[529],fqv[377],fqv[844]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2414cascaded_link_ik_convergence_check,fqv[415],fqv[377],fqv[845]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2429cascaded_link_calc_vel_from_pos,fqv[416],fqv[377],fqv[846]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2439cascaded_link_calc_vel_from_rot,fqv[417],fqv[377],fqv[847]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2449cascaded_link_collision_check_pairs,fqv[552],fqv[377],fqv[848]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2463cascaded_link_self_collision_check,fqv[477],fqv[377],fqv[849]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2477cascaded_link_calc_grasp_matrix,fqv[850],fqv[377],fqv[851]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2495cascaded_link_inverse_kinematics_for_closed_loop_forward_kinematics,fqv[852],fqv[377],fqv[853]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2508cascaded_link_calc_jacobian_for_interlocking_joints,fqv[854],fqv[377],fqv[855]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2513cascaded_link_calc_vel_for_interlocking_joints,fqv[856],fqv[377],fqv[857]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2517cascaded_link_set_midpoint_for_interlocking_joints,fqv[858],fqv[377],fqv[859]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2521cascaded_link_interlocking_joint_pairs,fqv[559],fqv[377],fqv[860]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M2523cascaded_link_check_interlocking_joint_angle_validity,fqv[861],fqv[377],fqv[862]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[863],module,F764all_child_links,fqv[864]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[865],module,F765calc_dif_with_axis,fqv[866]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[867],module,F766calc_target_joint_dimension,fqv[868]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[869],module,F767calc_joint_angle_min_max_for_limit_calculation,fqv[870]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[871],module,F768joint_angle_limit_weight,fqv[872]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[873],module,F769joint_angle_limit_nspace,fqv[874]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[875],module,F770calc_jacobian_from_link_list_including_robot_and_obj_virtual_joint,fqv[876]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[877],module,F771append_obj_virtual_joint,fqv[878]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[879],module,F772append_multiple_obj_virtual_joint,fqv[880]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[881],module,F2738,fqv[882]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[883],module,F2745,fqv[884]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[885],module,F2748,fqv[886]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[887],module,F2751,fqv[888]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[889],module,F2755,fqv[890]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[674],module,F773eusmodel_validity_check_one,fqv[891]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[892],module,F774eusmodel_validity_check,fqv[893]);
	local[0]= fqv[894];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF2794;
	local[0]= fqv[895];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[678],w);
	goto IF2795;
IF2794:
	local[0]= fqv[896];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF2795:
	local[0]= fqv[897];
	local[1]= fqv[898];
	ctx->vsp=local+2;
	w=(*ftab[69])(ctx,2,local+0,&ftab[69],fqv[899]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<70; i++) ftab[i]=fcallx;
}
