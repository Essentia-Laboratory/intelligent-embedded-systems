/* ./object.c :  entry=object */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "object.h"
#pragma init (register_object)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___object();
extern pointer build_quote_vector();
static int register_object()
  { add_module_initializer("___object", ___object);}

static pointer F49279metaclass_name();
static pointer F49282metaclass_vars();

/*metaclass-name*/
static pointer F49279metaclass_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = *(ovafptr(argv[0],fqv[0]));
	local[0]= w;
BLK49312:
	ctx->vsp=local; return(local[0]);}

/*metaclass-vars*/
static pointer F49282metaclass_vars(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = *(ovafptr(argv[0],fqv[1]));
	local[0]= w;
BLK49327:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M49346object_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT49350;}
	local[0]= T;
ENT49350:
ENT49349:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-3);
	local[2]= local[0];
	local[3]= fqv[2];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)GETCLASS(ctx,1,local+4); /*class*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)F49279metaclass_name(ctx,1,local+4); /*metaclass-name*/
	local[4]= w;
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)ADDRESS(ctx,1,local+5); /*system:address*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,4,local+2); /*format*/
	local[2]= NIL;
	local[3]= local[1];
WHL49396:
	if (local[3]==NIL) goto WHX49397;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= local[0];
	local[5]= fqv[3];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,3,local+4); /*format*/
	goto WHL49396;
WHX49397:
	local[4]= NIL;
BLK49398:
	w = NIL;
	local[2]= fqv[4];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)PRINC(ctx,2,local+2); /*princ*/
	w = argv[0];
	local[0]= w;
BLK49347:
	ctx->vsp=local; return(local[0]);}

/*:warning*/
static pointer M49460object_warning(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST49463:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	local[1]= (pointer)get_sym_func(fqv[5]);
	local[2]= argv[2];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)APPLY(ctx,3,local+1); /*apply*/
	local[0]= w;
BLK49461:
	ctx->vsp=local; return(local[0]);}

/*:error*/
static pointer M49485object_error(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST49488:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[6]);
	local[2]= argv[0];
	local[3]= fqv[7];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,4,local+1); /*apply*/
	local[1]= fqv[8];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,1,local+1,&ftab[0],fqv[9]); /*reploop*/
	local[0]= w;
BLK49486:
	ctx->vsp=local; return(local[0]);}

/*:slots*/
static pointer M49515object_slots(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)GETCLASS(ctx,1,local+0); /*class*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)F49282metaclass_vars(ctx,1,local+0); /*metaclass-vars*/
	local[0]= w;
	local[1]= NIL;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
WHL49571:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX49572;
	local[4]= local[0];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)GETCLASS(ctx,1,local+6); /*class*/
	local[6]= w;
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)SLOT(ctx,3,local+5); /*slot*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL49571;
WHX49572:
	local[4]= NIL;
BLK49573:
	w = NIL;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)NREVERSE(ctx,1,local+2); /*nreverse*/
	local[0]= w;
BLK49516:
	ctx->vsp=local; return(local[0]);}

/*:methods*/
static pointer M49621object_methods(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT49626;}
	local[0]= fqv[10];
ENT49626:
ENT49625:
	if (n>3) maerror();
	local[1]= (pointer)get_sym_func(fqv[11]);
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)GETCLASS(ctx,1,local+2); /*class*/
	local[2]= w;
	local[3]= fqv[12];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MAPCAN(ctx,2,local+1); /*mapcan*/
	local[0]= w;
BLK49623:
	ctx->vsp=local; return(local[0]);}

/*:super*/
static pointer M49655object_super(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)GETCLASS(ctx,1,local+0); /*class*/
	local[0]= w;
	local[1]= fqv[13];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK49656:
	ctx->vsp=local; return(local[0]);}

/*:get-val*/
static pointer M49676object_get_val(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)GETCLASS(ctx,1,local+1); /*class*/
	local[1]= w;
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SLOT(ctx,3,local+0); /*slot*/
	local[0]= w;
BLK49677:
	ctx->vsp=local; return(local[0]);}

/*:set-val*/
static pointer M49699object_set_val(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)GETCLASS(ctx,1,local+1); /*class*/
	local[1]= w;
	local[2]= argv[2];
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)SETSLOT(ctx,4,local+0); /*setslot*/
	local[0]= w;
BLK49700:
	ctx->vsp=local; return(local[0]);}

/*:plist*/
static pointer M49733propertied_object_plist(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT49737;}
	local[0]= NIL;
ENT49737:
ENT49736:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF49753;
	argv[0]->c.obj.iv[0] = local[0];
	local[1]= argv[0]->c.obj.iv[0];
	goto IF49754;
IF49753:
	local[1]= argv[0]->c.obj.iv[0];
IF49754:
	w = local[1];
	local[0]= w;
BLK49734:
	ctx->vsp=local; return(local[0]);}

/*:get*/
static pointer M49767propertied_object_get(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+2;
	w=(pointer)ASSQ(ctx,2,local+0); /*assq*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	local[0]= w;
BLK49768:
	ctx->vsp=local; return(local[0]);}

/*:put*/
static pointer M49792propertied_object_put(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+2;
	w=(pointer)ASSQ(ctx,2,local+0); /*assq*/
	local[0]= w;
	if (local[0]==NIL) goto IF49823;
	local[1]= local[0];
	local[2]= fqv[14];
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF49824;
IF49823:
	local[1]= argv[2];
	w = argv[3];
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	w = argv[0]->c.obj.iv[0];
	ctx->vsp=local+2;
	argv[0]->c.obj.iv[0] = cons(ctx,local[1],w);
	local[1]= argv[0]->c.obj.iv[0];
IF49824:
	w = argv[3];
	local[0]= w;
BLK49793:
	ctx->vsp=local; return(local[0]);}

/*:name*/
static pointer M49857propertied_object_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT49861;}
	local[0]= NIL;
ENT49861:
ENT49860:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF49877;
	local[1]= argv[0];
	local[2]= fqv[15];
	local[3]= fqv[16];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto IF49878;
IF49877:
	local[1]= argv[0];
	local[2]= fqv[17];
	local[3]= fqv[16];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
IF49878:
	w = local[1];
	local[0]= w;
BLK49858:
	ctx->vsp=local; return(local[0]);}

/*:remprop*/
static pointer M49899propertied_object_remprop(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+2;
	w=(pointer)ASSQ(ctx,2,local+0); /*assq*/
	local[0]= w;
	if (local[0]==NIL) goto IF49928;
	local[1]= local[0];
	local[2]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[18]); /*delete*/
	argv[0]->c.obj.iv[0] = w;
	local[1]= argv[0]->c.obj.iv[0];
	goto IF49929;
IF49928:
	local[1]= NIL;
IF49929:
	w = local[1];
	local[0]= w;
BLK49900:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M49946propertied_object_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT49950;}
	local[0]= T;
ENT49950:
ENT49949:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-3);
	local[2]= NIL;
	local[3]= argv[0];
	local[4]= fqv[16];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	if (local[3]==NIL) goto IF49976;
	local[4]= (pointer)get_sym_func(fqv[19]);
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[20]));
	local[7]= fqv[21];
	local[8]= local[0];
	local[9]= local[3];
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,7,local+4); /*apply*/
	local[4]= w;
	goto IF49977;
IF49976:
	local[4]= (pointer)get_sym_func(fqv[19]);
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[20]));
	local[7]= fqv[21];
	local[8]= local[0];
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)APPLY(ctx,6,local+4); /*apply*/
	local[4]= w;
IF49977:
	w = local[4];
	local[0]= w;
BLK49947:
	ctx->vsp=local; return(local[0]);}

/*:new*/
static pointer M50030metaclass_new(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
BLK50031:
	ctx->vsp=local; return(local[0]);}

/*:super*/
static pointer M50047metaclass_super(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK50048:
	ctx->vsp=local; return(local[0]);}

/*:methods*/
static pointer M50063metaclass_methods(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[7];
	local[0]= w;
BLK50064:
	ctx->vsp=local; return(local[0]);}

/*:method*/
static pointer M50079metaclass_method(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[22]); /*assoc*/
	local[0]= w;
BLK50080:
	ctx->vsp=local; return(local[0]);}

/*:method-names*/
static pointer M50100metaclass_method_names(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT50104;}
	local[0]= fqv[23];
ENT50104:
ENT50103:
	if (n>3) maerror();
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[24]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,1,local+1,&ftab[4],fqv[25]); /*string-upcase*/
	local[0] = w;
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO50134,env,argv,local);
	local[2]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+3;
	w=(pointer)MAPCAN(ctx,2,local+1); /*mapcan*/
	local[0]= w;
BLK50101:
	ctx->vsp=local; return(local[0]);}

/*:all-methods*/
static pointer M50140metaclass_all_methods(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]->c.obj.iv[2]==NIL) goto IF50153;
	local[0]= argv[0]->c.obj.iv[7];
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= fqv[26];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
	goto IF50154;
IF50153:
	local[0]= argv[0]->c.obj.iv[7];
IF50154:
	w = local[0];
	local[0]= w;
BLK50141:
	ctx->vsp=local; return(local[0]);}

/*:all-method-names*/
static pointer M50169metaclass_all_method_names(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT50173;}
	local[0]= fqv[27];
ENT50173:
ENT50172:
	if (n>3) maerror();
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= argv[0];
	local[3]= fqv[28];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	local[1]= w;
	if (argv[0]->c.obj.iv[2]==NIL) goto IF50208;
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= fqv[12];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto IF50209;
IF50208:
	local[2]= NIL;
IF50209:
	local[3]= local[1];
	w = local[2];
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	local[0]= w;
BLK50170:
	ctx->vsp=local; return(local[0]);}

/*:slots*/
static pointer M50231metaclass_slots(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK50232:
	ctx->vsp=local; return(local[0]);}

/*:name*/
static pointer M50247metaclass_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK50248:
	ctx->vsp=local; return(local[0]);}

/*:cid*/
static pointer M50263metaclass_cid(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK50264:
	ctx->vsp=local; return(local[0]);}

/*:cix*/
static pointer M50279metaclass_cix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK50280:
	ctx->vsp=local; return(local[0]);}

/*:sub*/
static pointer M50295metaclass_sub(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	ctx->vsp=local+2;
	w=(pointer)LISTALLCLASSES(ctx,0,local+2); /*system:list-all-classes*/
	local[2]= w;
WHL50335:
	if (local[2]==NIL) goto WHX50336;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[1];
	local[4]= fqv[13];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)EQ(ctx,2,local+3); /*eql*/
	if (w==NIL) goto IF50384;
	local[3]= local[1];
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[0];
	goto IF50385;
IF50384:
	local[3]= NIL;
IF50385:
	goto WHL50335;
WHX50336:
	local[3]= NIL;
BLK50337:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK50296:
	ctx->vsp=local; return(local[0]);}

/*:subclasses*/
static pointer M50416metaclass_subclasses(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[29];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK50417:
	ctx->vsp=local; return(local[0]);}

/*:hierarchy*/
static pointer M50435metaclass_hierarchy(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0];
	local[3]= fqv[29];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
WHL50478:
	if (local[2]==NIL) goto WHX50479;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[1];
	local[4]= fqv[30];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	goto WHL50478;
WHX50479:
	local[3]= NIL;
BLK50480:
	w = NIL;
	local[1]= argv[0];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)NREVERSE(ctx,1,local+2); /*nreverse*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK50436:
	ctx->vsp=local; return(local[0]);}

/*:superclasses*/
static pointer M50555metaclass_superclasses(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[0];
	local[2]= fqv[13];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
WHL50585:
	if (local[1]==NIL) goto WHX50586;
	local[2]= local[1];
	w = local[0];
	ctx->vsp=local+3;
	local[0] = cons(ctx,local[2],w);
	local[2]= local[1];
	local[3]= fqv[13];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[1] = w;
	goto WHL50585;
WHX50586:
	local[2]= NIL;
BLK50587:
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)NREVERSE(ctx,1,local+2); /*nreverse*/
	local[0]= w;
BLK50556:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO50134(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.car;
	local[0]= env->c.clo.env2[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[5])(ctx,1,local+1,&ftab[5],fqv[31]); /*symbol-name*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,2,local+0,&ftab[6],fqv[32]); /*substringp*/
	if (w==NIL) goto IF50642;
	local[0]= argv[0];
	w = NIL;
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	goto IF50643;
IF50642:
	local[0]= NIL;
IF50643:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M50679load_module_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT50683;}
	local[0]= T;
ENT50683:
ENT50682:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-3);
	local[2]= (pointer)get_sym_func(fqv[19]);
	local[3]= argv[0];
	local[4]= *(ovafptr(argv[1],fqv[20]));
	local[5]= fqv[21];
	local[6]= local[0];
	local[7]= loadglobal(fqv[24]);
	local[8]= fqv[33];
	local[9]= argv[0]->c.obj.iv[5];
	local[10]= fqv[34];
	ctx->vsp=local+11;
	w=(pointer)CONCATENATE(ctx,4,local+7); /*concatenate*/
	local[7]= w;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,7,local+2); /*apply*/
	local[0]= w;
BLK50680:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___object(ctx,n,argv,env)
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
	local[0]= fqv[35];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= fqv[36];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF50727;
	local[0]= fqv[37];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[38],w);
	goto IF50728;
IF50727:
	local[0]= fqv[39];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF50728:
	local[0]= fqv[40];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[41],module,F49279metaclass_name,fqv[42]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[43],module,F49282metaclass_vars,fqv[44]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49346object_prin1,fqv[21],fqv[45],fqv[46]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49460object_warning,fqv[7],fqv[45],fqv[47]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49485object_error,fqv[48],fqv[45],fqv[49]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49515object_slots,fqv[50],fqv[45],fqv[51]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49621object_methods,fqv[52],fqv[45],fqv[53]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49655object_super,fqv[13],fqv[45],fqv[54]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49676object_get_val,fqv[55],fqv[45],fqv[56]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49699object_set_val,fqv[57],fqv[45],fqv[58]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49733propertied_object_plist,fqv[59],fqv[60],fqv[61]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49767propertied_object_get,fqv[17],fqv[60],fqv[62]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49792propertied_object_put,fqv[15],fqv[60],fqv[63]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49857propertied_object_name,fqv[16],fqv[60],fqv[64]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49899propertied_object_remprop,fqv[65],fqv[60],fqv[66]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M49946propertied_object_prin1,fqv[21],fqv[60],fqv[67]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50030metaclass_new,fqv[68],fqv[69],fqv[70]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50047metaclass_super,fqv[13],fqv[69],fqv[71]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50063metaclass_methods,fqv[52],fqv[69],fqv[72]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50079metaclass_method,fqv[73],fqv[69],fqv[74]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50100metaclass_method_names,fqv[28],fqv[69],fqv[75]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50140metaclass_all_methods,fqv[26],fqv[69],fqv[76]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50169metaclass_all_method_names,fqv[12],fqv[69],fqv[77]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50231metaclass_slots,fqv[50],fqv[69],fqv[78]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50247metaclass_name,fqv[16],fqv[69],fqv[79]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50263metaclass_cid,fqv[80],fqv[69],fqv[81]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50279metaclass_cix,fqv[82],fqv[69],fqv[83]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50295metaclass_sub,fqv[29],fqv[69],fqv[84]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50416metaclass_subclasses,fqv[85],fqv[69],fqv[86]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50435metaclass_hierarchy,fqv[30],fqv[69],fqv[87]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50555metaclass_superclasses,fqv[88],fqv[69],fqv[89]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M50679load_module_prin1,fqv[21],fqv[90],fqv[91]);
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<7; i++) ftab[i]=fcallx;
}
