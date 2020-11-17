/* ./irtscene.c :  entry=irtscene */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtscene.h"
#pragma init (register_irtscene)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtscene();
extern pointer build_quote_vector();
static int register_irtscene()
  { add_module_initializer("___irtscene", ___irtscene);}


/*:init*/
static pointer M634scene_model_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST636:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[0], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY637;
	local[1] = fqv[1];
KEY637:
	if (n & (1<<1)) goto KEY638;
	local[2] = NIL;
KEY638:
	if (n & (1<<2)) goto KEY639;
	local[3] = NIL;
KEY639:
	local[4]= (pointer)get_sym_func(fqv[2]);
	local[5]= argv[0];
	local[6]= *(ovafptr(argv[1],fqv[3]));
	local[7]= fqv[4];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,5,local+4); /*apply*/
	argv[0]->c.obj.iv[8] = fqv[5];
	argv[0]->c.obj.iv[9] = local[2];
	if (local[3]==NIL) goto IF640;
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO642,env,argv,local);
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(*ftab[0])(ctx,2,local+4,&ftab[0],fqv[6]); /*delete-if*/
	local[4]= w;
	goto IF641;
IF640:
	local[4]= argv[0]->c.obj.iv[9];
IF641:
	local[4]= NIL;
	local[5]= argv[0]->c.obj.iv[9];
WHL644:
	if (local[5]==NIL) goto WHX645;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= argv[0];
	local[7]= fqv[7];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)GETCLASS(ctx,1,local+6); /*class*/
	local[6]= w;
	if (loadglobal(fqv[8])!=local[6]) goto IF648;
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= fqv[9];
	ctx->vsp=local+9;
	w=(pointer)PUTPROP(ctx,3,local+6); /*putprop*/
	local[6]= local[4];
	local[7]= fqv[10];
	local[8]= fqv[11];
	ctx->vsp=local+9;
	w=(pointer)PUTPROP(ctx,3,local+6); /*putprop*/
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)300L);
	local[8]= fqv[12];
	ctx->vsp=local+9;
	w=(pointer)PUTPROP(ctx,3,local+6); /*putprop*/
	local[6]= w;
	goto IF649;
IF648:
	local[6]= NIL;
IF649:
	goto WHL644;
WHX645:
	local[6]= NIL;
BLK646:
	w = NIL;
	w = argv[0];
	local[0]= w;
BLK635:
	ctx->vsp=local; return(local[0]);}

/*:objects*/
static pointer M650scene_model_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[9];
	local[0]= w;
BLK651:
	ctx->vsp=local; return(local[0]);}

/*:add-objects*/
static pointer M652scene_model_add_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= argv[2];
WHL655:
	if (local[1]==NIL) goto WHX656;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= argv[0];
	local[3]= fqv[13];
	local[4]= local[0];
	local[5]= fqv[5];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	if (w==NIL) goto IF659;
	local[2]= fqv[14];
	local[3]= local[0];
	local[4]= fqv[5];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,2,local+2); /*error*/
	w = NIL;
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK653;
	goto IF660;
IF659:
	local[2]= NIL;
IF660:
	goto WHL655;
WHX656:
	local[2]= NIL;
BLK657:
	w = NIL;
	local[0]= argv[0]->c.obj.iv[9];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	local[0]= w;
BLK653:
	ctx->vsp=local; return(local[0]);}

/*:add-object*/
static pointer M661scene_model_add_object(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[15];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK662:
	ctx->vsp=local; return(local[0]);}

/*:remove-objects*/
static pointer M663scene_model_remove_objects(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[2];
WHL666:
	if (local[2]==NIL) goto WHX667;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	w = local[1];
	if (!isstring(w)) goto IF670;
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	goto IF671;
IF670:
	local[3]= argv[0];
	local[4]= fqv[16];
	local[5]= local[1];
	local[6]= fqv[5];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
IF671:
	if (local[3]!=NIL) goto IF672;
	local[4]= fqv[17];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SIGERROR(ctx,2,local+4); /*error*/
	w = NIL;
	ctx->vsp=local+4;
	local[0]=w;
	goto BLK664;
	goto IF673;
IF672:
	local[4]= NIL;
IF673:
	local[4]= local[3];
	w = local[0];
	ctx->vsp=local+5;
	local[0] = cons(ctx,local[4],w);
	w = local[0];
	goto WHL666;
WHX667:
	local[3]= NIL;
BLK668:
	w = NIL;
	local[1]= argv[0]->c.obj.iv[9];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,2,local+1,&ftab[1],fqv[18]); /*set-difference*/
	argv[0]->c.obj.iv[9] = w;
	w = local[0];
	local[0]= w;
BLK664:
	ctx->vsp=local; return(local[0]);}

/*:remove-object*/
static pointer M674scene_model_remove_object(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[19];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK675:
	ctx->vsp=local; return(local[0]);}

/*:find-object*/
static pointer M676scene_model_find_object(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO678,env,argv,local);
	local[1]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+2;
	w=(pointer)MAPCAN(ctx,2,local+0); /*mapcan*/
	local[0]= w;
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO679,env,argv,local);
	local[2]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+3;
	w=(pointer)MAPCAN(ctx,2,local+1); /*mapcan*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
BLK677:
	ctx->vsp=local; return(local[0]);}

/*:add-spots*/
static pointer M680scene_model_add_spots(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= argv[2];
WHL683:
	if (local[1]==NIL) goto WHX684;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	if (!isstring(w)) goto AND689;
	local[2]= local[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,1,local+2,&ftab[2],fqv[20]); /*null-string-p*/
	if (w!=NIL) goto AND689;
	goto IF687;
AND689:
	local[2]= fqv[21];
	local[3]= local[0];
	local[4]= fqv[5];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,2,local+2); /*error*/
	w = NIL;
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK681;
	goto IF688;
IF687:
	local[2]= NIL;
IF688:
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)GETCLASS(ctx,1,local+2); /*class*/
	local[2]= w;
	if (loadglobal(fqv[8])==local[2]) goto IF690;
	local[2]= fqv[22];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)GETCLASS(ctx,1,local+3); /*class*/
	local[3]= w;
	local[4]= fqv[5];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,2,local+2); /*error*/
	w = NIL;
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK681;
	goto IF691;
IF690:
	local[2]= NIL;
IF691:
	local[2]= local[0];
	local[3]= fqv[23];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	if (w==NIL) goto IF692;
	local[2]= argv[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= local[0];
	local[4]= fqv[23];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[5];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	if (w==local[2]) goto IF692;
	local[2]= fqv[24];
	local[3]= local[0];
	local[4]= fqv[23];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= fqv[5];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,3,local+2); /*error*/
	w = NIL;
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK681;
	goto IF693;
IF692:
	local[2]= NIL;
IF693:
	local[2]= argv[0];
	local[3]= fqv[25];
	local[4]= local[0];
	local[5]= fqv[5];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	if (w==NIL) goto IF694;
	local[2]= fqv[26];
	local[3]= local[0];
	local[4]= fqv[5];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,2,local+2); /*error*/
	w = NIL;
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK681;
	goto IF695;
IF694:
	local[2]= NIL;
IF695:
	goto WHL683;
WHX684:
	local[2]= NIL;
BLK685:
	w = NIL;
	local[0]= NIL;
	local[1]= argv[2];
WHL697:
	if (local[1]==NIL) goto WHX698;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= argv[0];
	local[3]= fqv[7];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	goto WHL697;
WHX698:
	local[2]= NIL;
BLK699:
	w = NIL;
	local[0]= argv[0]->c.obj.iv[9];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	w = T;
	local[0]= w;
BLK681:
	ctx->vsp=local; return(local[0]);}

/*:add-spot*/
static pointer M701scene_model_add_spot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[27];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK702:
	ctx->vsp=local; return(local[0]);}

/*:remove-spots*/
static pointer M703scene_model_remove_spots(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= argv[2];
WHL706:
	if (local[1]==NIL) goto WHX707;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)GETCLASS(ctx,1,local+2); /*class*/
	local[2]= w;
	if (loadglobal(fqv[8])==local[2]) goto IF710;
	local[2]= fqv[28];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)GETCLASS(ctx,1,local+3); /*class*/
	local[3]= w;
	local[4]= fqv[5];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,2,local+2); /*error*/
	w = NIL;
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK704;
	goto IF711;
IF710:
	local[2]= NIL;
IF711:
	goto WHL706;
WHX707:
	local[2]= NIL;
BLK708:
	w = NIL;
	local[0]= argv[0];
	local[1]= fqv[19];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= NIL;
	local[2]= local[0];
WHL713:
	if (local[2]==NIL) goto WHX714;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[1];
	local[4]= fqv[23];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[29];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	goto WHL713;
WHX714:
	local[3]= NIL;
BLK715:
	w = NIL;
	w = local[0];
	local[0]= w;
BLK704:
	ctx->vsp=local; return(local[0]);}

/*:remove-spot*/
static pointer M717scene_model_remove_spot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[30];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK718:
	ctx->vsp=local; return(local[0]);}

/*:spots*/
static pointer M719scene_model_spots(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO721,env,argv,local);
	local[1]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+2;
	w=(pointer)MAPCAN(ctx,2,local+0); /*mapcan*/
	local[0]= w;
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO722,env,argv,local);
	local[2]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,2,local+1,&ftab[3],fqv[31]); /*remove-if-not*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
BLK720:
	ctx->vsp=local; return(local[0]);}

/*:object*/
static pointer M723scene_model_object(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[13];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= local[1];
	if (fqv[32]!=local[2]) goto IF726;
	local[2]= makeint((eusinteger_t)1L);
	local[3]= fqv[33];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(*ftab[4])(ctx,3,local+2,&ftab[4],fqv[34]); /*warning-message*/
	local[2]= NIL;
	goto IF727;
IF726:
	local[2]= local[1];
	if (fqv[35]!=local[2]) goto IF728;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	goto IF729;
IF728:
	if (T==NIL) goto IF730;
	local[2]= makeint((eusinteger_t)1L);
	local[3]= fqv[36];
	local[4]= local[0];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,4,local+2,&ftab[4],fqv[34]); /*warning-message*/
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	goto IF731;
IF730:
	local[2]= NIL;
IF731:
IF729:
IF727:
	w = local[2];
	local[0]= w;
BLK724:
	ctx->vsp=local; return(local[0]);}

/*:spot*/
static pointer M732scene_model_spot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO734,env,argv,local);
	local[1]= argv[0];
	local[2]= fqv[37];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,2,local+0,&ftab[3],fqv[31]); /*remove-if-not*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= local[1];
	if (fqv[38]!=local[2]) goto IF736;
	local[2]= makeint((eusinteger_t)1L);
	local[3]= fqv[39];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(*ftab[4])(ctx,3,local+2,&ftab[4],fqv[34]); /*warning-message*/
	local[2]= NIL;
	goto IF737;
IF736:
	local[2]= local[1];
	if (fqv[40]!=local[2]) goto IF738;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	goto IF739;
IF738:
	if (T==NIL) goto IF740;
	local[2]= makeint((eusinteger_t)1L);
	local[3]= fqv[41];
	local[4]= local[0];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,4,local+2,&ftab[4],fqv[34]); /*warning-message*/
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	goto IF741;
IF740:
	local[2]= NIL;
IF741:
IF739:
IF737:
	w = local[2];
	local[0]= w;
BLK733:
	ctx->vsp=local; return(local[0]);}

/*:bodies*/
static pointer M742scene_model_bodies(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO744,env,argv,local);
	local[1]= argv[0]->c.obj.iv[9];
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[5])(ctx,1,local+0,&ftab[5],fqv[42]); /*flatten*/
	local[0]= w;
BLK743:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO642(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[5];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= (isstring(w)?T:NIL);
	if (local[0]==NIL) goto AND745;
	local[0]= fqv[43];
	local[1]= argv[0];
	local[2]= fqv[5];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,2,local+0,&ftab[6],fqv[44]); /*substringp*/
	local[0]= w;
AND745:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO678(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[45]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	if (w==NIL) goto IF746;
	local[0]= argv[0];
	local[1]= fqv[13];
	local[2]= env->c.clo.env1[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF747;
IF746:
	local[0]= NIL;
IF747:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO679(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[2];
	local[1]= argv[0];
	local[2]= fqv[5];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,2,local+0,&ftab[7],fqv[46]); /*string=*/
	if (w==NIL) goto IF748;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto IF749;
IF748:
	local[0]= NIL;
IF749:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO721(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[45]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	if (w==NIL) goto IF750;
	local[0]= argv[0];
	local[1]= fqv[37];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto IF751;
IF750:
	local[0]= NIL;
IF751:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO722(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)GETCLASS(ctx,1,local+0); /*class*/
	local[0]= w;
	w = ((loadglobal(fqv[8]))==(local[0])?T:NIL);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO734(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[2];
	local[1]= argv[0];
	local[2]= fqv[5];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,2,local+0,&ftab[7],fqv[46]); /*string=*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO744(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[47];
	ctx->vsp=local+2;
	w=(*ftab[8])(ctx,2,local+0,&ftab[8],fqv[48]); /*find-method*/
	if (w==NIL) goto IF752;
	local[0]= argv[0];
	local[1]= fqv[47];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto IF753;
IF752:
	local[0]= argv[0];
IF753:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtscene(ctx,n,argv,env)
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
	local[0]= fqv[49];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF754;
	local[0]= fqv[50];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[51],w);
	goto IF755;
IF754:
	local[0]= fqv[52];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF755:
	local[0]= fqv[45];
	local[1]= fqv[53];
	local[2]= fqv[45];
	local[3]= fqv[54];
	local[4]= loadglobal(fqv[8]);
	local[5]= fqv[55];
	local[6]= fqv[56];
	local[7]= fqv[57];
	local[8]= NIL;
	local[9]= fqv[58];
	local[10]= NIL;
	local[11]= fqv[12];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[59];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[9])(ctx,13,local+2,&ftab[9],fqv[60]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M634scene_model_init,fqv[4],fqv[45],fqv[61]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M650scene_model_objects,fqv[62],fqv[45],fqv[63]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M652scene_model_add_objects,fqv[15],fqv[45],fqv[64]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M661scene_model_add_object,fqv[65],fqv[45],fqv[66]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M663scene_model_remove_objects,fqv[19],fqv[45],fqv[67]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M674scene_model_remove_object,fqv[68],fqv[45],fqv[69]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M676scene_model_find_object,fqv[13],fqv[45],fqv[70]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M680scene_model_add_spots,fqv[27],fqv[45],fqv[71]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M701scene_model_add_spot,fqv[72],fqv[45],fqv[73]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M703scene_model_remove_spots,fqv[30],fqv[45],fqv[74]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M717scene_model_remove_spot,fqv[75],fqv[45],fqv[76]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M719scene_model_spots,fqv[37],fqv[45],fqv[77]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M723scene_model_object,fqv[16],fqv[45],fqv[78]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M732scene_model_spot,fqv[25],fqv[45],fqv[79]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M742scene_model_bodies,fqv[47],fqv[45],fqv[80]);
	local[0]= fqv[81];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF756;
	local[0]= fqv[82];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[51],w);
	goto IF757;
IF756:
	local[0]= fqv[83];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF757:
	local[0]= fqv[84];
	local[1]= fqv[85];
	ctx->vsp=local+2;
	w=(*ftab[10])(ctx,2,local+0,&ftab[10],fqv[86]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<11; i++) ftab[i]=fcallx;
}
