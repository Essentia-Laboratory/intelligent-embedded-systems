/* ./hashtab.c :  entry=hashtab */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "hashtab.h"
#pragma init (register_hashtab)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___hashtab();
extern pointer build_quote_vector();
static int register_hashtab()
  { add_module_initializer("___hashtab", ___hashtab);}

static pointer F60560make_hash_table();
static pointer F60563gethash();
static pointer F60566sethash();
static pointer F60569remhash();
static pointer F60572hash_table_p();
static pointer F60575maphash();
static pointer F60578clrhash();

/*:size*/
static pointer M60665hash_table_size(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK60666:
	ctx->vsp=local; return(local[0]);}

/*:find*/
static pointer M60681hash_table_find(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)FUNCALL(ctx,2,local+0); /*funcall*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(pointer)MOD(ctx,2,local+0); /*mod*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)ABS(ctx,1,local+0); /*abs*/
	local[0]= w;
	local[1]= NIL;
	local[2]= NIL;
WHL60717:
	if (T==NIL) goto WHX60718;
	local[3]= argv[0]->c.obj.iv[0];
	{ register eusinteger_t i=intval(local[0]);
	  w=(local[3]->c.vec.v[i]);}
	local[1] = w;
	local[3]= argv[0]->c.obj.iv[5];
	local[4]= local[1];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)FUNCALL(ctx,3,local+3); /*funcall*/
	if (w==NIL) goto IF60735;
	w = local[0];
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK60682;
	goto IF60736;
IF60735:
	local[3]= NIL;
IF60736:
	local[3]= local[1];
	if (argv[0]->c.obj.iv[7]!=local[3]) goto IF60751;
	if (local[2]!=NIL) goto IF60761;
	local[2] = local[0];
	local[3]= local[2];
	goto IF60762;
IF60761:
	local[3]= NIL;
IF60762:
	local[3]= local[2];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK60682;
	goto IF60752;
IF60751:
	local[3]= NIL;
IF60752:
	local[3]= local[1];
	if (argv[0]->c.obj.iv[8]!=local[3]) goto IF60784;
	if (local[2]!=NIL) goto IF60794;
	local[2] = local[0];
	local[3]= local[2];
	goto IF60795;
IF60794:
	local[3]= NIL;
IF60795:
	goto IF60785;
IF60784:
	local[3]= NIL;
IF60785:
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[0] = w;
	local[3]= local[0];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)GREQP(ctx,2,local+3); /*>=*/
	if (w==NIL) goto IF60807;
	local[0] = makeint((eusinteger_t)0L);
	local[3]= local[0];
	goto IF60808;
IF60807:
	local[3]= NIL;
IF60808:
	goto WHL60717;
WHX60718:
	local[3]= NIL;
BLK60719:
	w = NIL;
	local[0]= w;
BLK60682:
	ctx->vsp=local; return(local[0]);}

/*:get*/
static pointer M60831hash_table_get(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(pointer)GREQP(ctx,2,local+1); /*>=*/
	if (w==NIL) goto IF60862;
	local[1]= argv[0]->c.obj.iv[9];
	goto IF60863;
IF60862:
	local[1]= argv[0]->c.obj.iv[1];
	{ register eusinteger_t i=intval(local[0]);
	  w=(local[1]->c.vec.v[i]);}
	local[1]= w;
IF60863:
	w = local[1];
	local[0]= w;
BLK60832:
	ctx->vsp=local; return(local[0]);}

/*:enter*/
static pointer M60877hash_table_enter(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0];
	local[1]= fqv[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= local[0];
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(pointer)GREQP(ctx,2,local+1); /*>=*/
	if (w==NIL) goto IF60911;
	local[1]= argv[0]->c.obj.iv[3];
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)GREATERP(ctx,2,local+1); /*>*/
	if (w==NIL) goto IF60922;
	local[1]= argv[0];
	local[2]= fqv[1];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= argv[0];
	local[2]= fqv[0];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0] = w;
	local[1]= local[0];
	goto IF60923;
IF60922:
	local[1]= NIL;
IF60923:
	local[1]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+2;
	w=(pointer)ADD1(ctx,1,local+1); /*1+*/
	argv[0]->c.obj.iv[3] = w;
	local[1]= local[0];
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[0] = w;
	local[1]= local[0];
	goto IF60912;
IF60911:
	local[1]= NIL;
IF60912:
	local[1]= argv[0]->c.obj.iv[0];
	local[2]= local[0];
	w = argv[2];
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[2]); v=local[1];
	  v->c.vec.v[i]=w;}
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= local[0];
	w = argv[3];
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[2]); v=local[1];
	  v->c.vec.v[i]=w;}
	w = argv[3];
	local[0]= w;
BLK60878:
	ctx->vsp=local; return(local[0]);}

/*:delete*/
static pointer M60993hash_table_delete(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[0];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= local[0];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,2,local+2); /*<*/
	if (w==NIL) goto IF61028;
	local[2]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+3;
	w=(pointer)SUB1(ctx,1,local+2); /*1-*/
	argv[0]->c.obj.iv[3] = w;
	local[2]= argv[0]->c.obj.iv[0];
	local[3]= local[0];
	w = argv[0]->c.obj.iv[8];
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[3]); v=local[2];
	  v->c.vec.v[i]=w;}
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= local[0];
	w = NIL;
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[3]); v=local[2];
	  v->c.vec.v[i]=w;}
	local[2]= w;
	goto IF61029;
IF61028:
	local[2]= NIL;
IF61029:
	w = local[2];
	local[0]= w;
BLK60994:
	ctx->vsp=local; return(local[0]);}

/*:extend*/
static pointer M61062hash_table_extend(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)2L);
	{ eusinteger_t i,j;
		j=intval(argv[0]->c.obj.iv[2]); i=intval(local[0]);
		local[0]=(makeint(i * j));}
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,1,local+1,&ftab[0],fqv[2]); /*make-array*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,1,local+2,&ftab[0],fqv[2]); /*make-array*/
	local[2]= w;
	local[3]= NIL;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[0];
WHL61125:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX61126;
	local[6]= local[1];
	local[7]= local[4];
	w = argv[0]->c.obj.iv[7];
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[7]); v=local[6];
	  v->c.vec.v[i]=w;}
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL61125;
WHX61126:
	local[6]= NIL;
BLK61127:
	w = NIL;
	local[3] = argv[0]->c.obj.iv[0];
	argv[0]->c.obj.iv[0] = local[1];
	local[1] = local[3];
	local[3] = argv[0]->c.obj.iv[1];
	argv[0]->c.obj.iv[1] = local[2];
	local[2] = local[3];
	local[3] = argv[0]->c.obj.iv[2];
	argv[0]->c.obj.iv[2] = local[0];
	local[0] = local[3];
	argv[0]->c.obj.iv[3] = makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[0];
WHL61209:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX61210;
	local[6]= local[1];
	{ register eusinteger_t i=intval(local[4]);
	  w=(local[6]->c.vec.v[i]);}
	local[3] = w;
	local[6]= local[3];
	if (argv[0]->c.obj.iv[7]==local[6]) goto IF61229;
	local[6]= local[3];
	if (argv[0]->c.obj.iv[8]==local[6]) goto IF61229;
	local[6]= argv[0];
	local[7]= fqv[3];
	local[8]= local[3];
	local[9]= local[2];
	{ register eusinteger_t i=intval(local[4]);
	  w=(local[9]->c.vec.v[i]);}
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= w;
	goto IF61230;
IF61229:
	local[6]= NIL;
IF61230:
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL61209;
WHX61210:
	local[6]= NIL;
BLK61211:
	w = NIL;
	w = argv[0];
	local[0]= w;
BLK61063:
	ctx->vsp=local; return(local[0]);}

/*:hash*/
static pointer M61269hash_table_hash(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[4]); /*string*/
	argv[2] = w;
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,1,local+1,&ftab[1],fqv[4]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)FUNCALL(ctx,2,local+0); /*funcall*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(pointer)MOD(ctx,2,local+0); /*mod*/
	local[0]= w;
BLK61270:
	ctx->vsp=local; return(local[0]);}

/*:map*/
static pointer M61304hash_table_map(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[0]->c.obj.iv[2];
WHL61354:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX61355;
	local[4]= argv[0]->c.obj.iv[0];
	{ register eusinteger_t i=intval(local[2]);
	  w=(local[4]->c.vec.v[i]);}
	local[0] = w;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+6;
	w=(pointer)EQ(ctx,2,local+4); /*eql*/
	if (w!=NIL) goto IF61375;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+6;
	w=(pointer)EQ(ctx,2,local+4); /*eql*/
	if (w!=NIL) goto IF61375;
	local[4]= argv[2];
	local[5]= local[0];
	local[6]= argv[0]->c.obj.iv[1];
	{ register eusinteger_t i=intval(local[2]);
	  w=(local[6]->c.vec.v[i]);}
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)FUNCALL(ctx,3,local+4); /*funcall*/
	local[4]= w;
	goto IF61376;
IF61375:
	local[4]= NIL;
IF61376:
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL61354;
WHX61355:
	local[4]= NIL;
BLK61356:
	w = NIL;
	local[0]= w;
BLK61306:
	ctx->vsp=local; return(local[0]);}

/*:list-values*/
static pointer M61417hash_table_list_values(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[0]->c.obj.iv[2];
WHL61464:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX61465;
	local[4]= argv[0]->c.obj.iv[0];
	{ register eusinteger_t i=intval(local[2]);
	  w=(local[4]->c.vec.v[i]);}
	local[0] = w;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+6;
	w=(pointer)EQ(ctx,2,local+4); /*eql*/
	if (w!=NIL) goto IF61485;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+6;
	w=(pointer)EQ(ctx,2,local+4); /*eql*/
	if (w!=NIL) goto IF61485;
	local[4]= argv[0]->c.obj.iv[1];
	{ register eusinteger_t i=intval(local[2]);
	  w=(local[4]->c.vec.v[i]);}
	local[4]= w;
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	local[4]= local[1];
	goto IF61486;
IF61485:
	local[4]= NIL;
IF61486:
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL61464;
WHX61465:
	local[4]= NIL;
BLK61466:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK61418:
	ctx->vsp=local; return(local[0]);}

/*:list-keys*/
static pointer M61536hash_table_list_keys(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[0]->c.obj.iv[2];
WHL61583:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX61584;
	local[4]= argv[0]->c.obj.iv[0];
	{ register eusinteger_t i=intval(local[2]);
	  w=(local[4]->c.vec.v[i]);}
	local[0] = w;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+6;
	w=(pointer)EQ(ctx,2,local+4); /*eql*/
	if (w!=NIL) goto IF61604;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+6;
	w=(pointer)EQ(ctx,2,local+4); /*eql*/
	if (w!=NIL) goto IF61604;
	local[4]= local[0];
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	local[4]= local[1];
	goto IF61605;
IF61604:
	local[4]= NIL;
IF61605:
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL61583;
WHX61584:
	local[4]= NIL;
BLK61585:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK61537:
	ctx->vsp=local; return(local[0]);}

/*:list*/
static pointer M61651hash_table_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[0]->c.obj.iv[2];
WHL61698:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX61699;
	local[4]= argv[0]->c.obj.iv[0];
	{ register eusinteger_t i=intval(local[2]);
	  w=(local[4]->c.vec.v[i]);}
	local[0] = w;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+6;
	w=(pointer)EQ(ctx,2,local+4); /*eql*/
	if (w!=NIL) goto IF61719;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[8];
	ctx->vsp=local+6;
	w=(pointer)EQ(ctx,2,local+4); /*eql*/
	if (w!=NIL) goto IF61719;
	local[4]= local[0];
	local[5]= argv[0]->c.obj.iv[1];
	{ register eusinteger_t i=intval(local[2]);
	  w=(local[5]->c.vec.v[i]);}
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	local[4]= local[1];
	goto IF61720;
IF61719:
	local[4]= NIL;
IF61720:
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL61698;
WHX61699:
	local[4]= NIL;
BLK61700:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK61652:
	ctx->vsp=local; return(local[0]);}

/*:hash-function*/
static pointer M61773hash_table_hash_function(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT61777;}
	local[0]= NIL;
ENT61777:
ENT61776:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF61793;
	argv[0]->c.obj.iv[4] = local[0];
	local[1]= argv[0]->c.obj.iv[4];
	goto IF61794;
IF61793:
	local[1]= NIL;
IF61794:
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK61774:
	ctx->vsp=local; return(local[0]);}

/*:clear*/
static pointer M61809hash_table_clear(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0]->c.obj.iv[2];
WHL61845:
	local[2]= local[0];
	w = local[1];
	if ((eusinteger_t)local[2] >= (eusinteger_t)w) goto WHX61846;
	local[2]= argv[0]->c.obj.iv[0];
	local[3]= local[0];
	w = argv[0]->c.obj.iv[7];
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[3]); v=local[2];
	  v->c.vec.v[i]=w;}
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= local[0];
	w = NIL;
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[3]); v=local[2];
	  v->c.vec.v[i]=w;}
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	goto WHL61845;
WHX61846:
	local[2]= NIL;
BLK61847:
	w = NIL;
	w = argv[0];
	local[0]= w;
BLK61810:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M61888hash_table_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT61892;}
	local[0]= T;
ENT61892:
ENT61891:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-3);
	local[2]= (pointer)get_sym_func(fqv[5]);
	local[3]= argv[0];
	local[4]= *(ovafptr(argv[1],fqv[6]));
	local[5]= fqv[7];
	local[6]= local[0];
	local[7]= NIL;
	local[8]= fqv[8];
	local[9]= argv[0]->c.obj.iv[3];
	local[10]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,4,local+7); /*format*/
	local[7]= w;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,7,local+2); /*apply*/
	local[0]= w;
BLK61889:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M61926hash_table_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[9], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY61942;
	local[0] = NIL;
KEY61942:
	if (n & (1<<1)) goto KEY61947;
	local[1] = makeint((eusinteger_t)10L);
KEY61947:
	if (n & (1<<2)) goto KEY61952;
	local[2] = (pointer)get_sym_func(fqv[10]);
KEY61952:
	if (n & (1<<3)) goto KEY61959;
	local[3] = makeflt(2.0000000000000000000000e+00);
KEY61959:
	if (n & (1<<4)) goto KEY61964;
	local[4] = (pointer)get_sym_func(fqv[11]);
KEY61964:
	argv[0]->c.obj.iv[2] = local[1];
	local[5]= loadglobal(fqv[12]);
	local[6]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,2,local+5); /*instantiate*/
	argv[0]->c.obj.iv[0] = w;
	local[5]= loadglobal(fqv[12]);
	local[6]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,2,local+5); /*instantiate*/
	argv[0]->c.obj.iv[1] = w;
	argv[0]->c.obj.iv[4] = local[4];
	argv[0]->c.obj.iv[5] = local[2];
	local[5]= fqv[13];
	ctx->vsp=local+6;
	w=(pointer)GENSYM(ctx,1,local+5); /*gensym*/
	argv[0]->c.obj.iv[7] = w;
	local[5]= fqv[14];
	ctx->vsp=local+6;
	w=(pointer)GENSYM(ctx,1,local+5); /*gensym*/
	argv[0]->c.obj.iv[8] = w;
	argv[0]->c.obj.iv[9] = local[0];
	argv[0]->c.obj.iv[3] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[6] = local[3];
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[1];
WHL62040:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX62041;
	local[7]= argv[0]->c.obj.iv[0];
	local[8]= local[5];
	w = argv[0]->c.obj.iv[7];
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[8]); v=local[7];
	  v->c.vec.v[i]=w;}
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL62040;
WHX62041:
	local[7]= NIL;
BLK62042:
	w = NIL;
	w = argv[0];
	local[0]= w;
BLK61927:
	ctx->vsp=local; return(local[0]);}

/*make-hash-table*/
static pointer F60560make_hash_table(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[15], &argv[0], n-0, local+0, 0);
	if (n & (1<<0)) goto KEY62085;
	local[0] = makeint((eusinteger_t)10L);
KEY62085:
	if (n & (1<<1)) goto KEY62090;
	local[1] = (pointer)get_sym_func(fqv[10]);
KEY62090:
	if (n & (1<<2)) goto KEY62097;
	local[2] = makeflt(1.6999999999999992894573e+00);
KEY62097:
	if (n & (1<<3)) goto KEY62102;
	local[3] = (pointer)get_sym_func(fqv[11]);
KEY62102:
	if (n & (1<<4)) goto KEY62109;
	local[4] = NIL;
KEY62109:
	local[5]= loadglobal(fqv[16]);
	ctx->vsp=local+6;
	w=(pointer)INSTANTIATE(ctx,1,local+5); /*instantiate*/
	local[5]= w;
	local[6]= local[5];
	local[7]= fqv[17];
	local[8]= fqv[18];
	local[9]= local[0];
	local[10]= fqv[19];
	local[11]= local[1];
	local[12]= fqv[20];
	local[13]= local[2];
	local[14]= fqv[21];
	local[15]= local[3];
	local[16]= fqv[22];
	local[17]= local[4];
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,12,local+6); /*send*/
	w = local[5];
	local[0]= w;
BLK62074:
	ctx->vsp=local; return(local[0]);}

/*gethash*/
static pointer F60563gethash(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= fqv[23];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK62160:
	ctx->vsp=local; return(local[0]);}

/*sethash*/
static pointer F60566sethash(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[1];
	local[1]= fqv[3];
	local[2]= argv[0];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
BLK62180:
	ctx->vsp=local; return(local[0]);}

/*remhash*/
static pointer F60569remhash(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= fqv[24];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK62203:
	ctx->vsp=local; return(local[0]);}

/*hash-table-p*/
static pointer F60572hash_table_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[16]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK62223:
	ctx->vsp=local; return(local[0]);}

/*maphash*/
static pointer F60575maphash(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= fqv[25];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK62239:
	ctx->vsp=local; return(local[0]);}

/*clrhash*/
static pointer F60578clrhash(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[26];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK62259:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M62292queue_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[0] = NIL;
	argv[0]->c.obj.iv[1] = NIL;
	w = argv[0];
	local[0]= w;
BLK62293:
	ctx->vsp=local; return(local[0]);}

/*:length*/
static pointer M62316queue_length(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
BLK62317:
	ctx->vsp=local; return(local[0]);}

/*:empty?*/
static pointer M62333queue_empty_(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = ((argv[0]->c.obj.iv[0])==NIL?T:NIL);
	local[0]= w;
BLK62334:
	ctx->vsp=local; return(local[0]);}

/*:trim*/
static pointer M62352queue_trim(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
WHL62398:
	local[2]= local[0];
	w = local[1];
	if ((eusinteger_t)local[2] >= (eusinteger_t)w) goto WHX62399;
	local[2]= argv[0];
	local[3]= fqv[27];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	goto WHL62398;
WHX62399:
	local[2]= NIL;
BLK62400:
	w = NIL;
	local[0]= w;
BLK62353:
	ctx->vsp=local; return(local[0]);}

/*:dequeue*/
static pointer M62425queue_dequeue(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT62429;}
	local[0]= NIL;
ENT62429:
ENT62428:
	if (n>3) maerror();
	if (argv[0]->c.obj.iv[0]!=NIL) goto CON62447;
	if (local[0]==NIL) goto IF62453;
	local[1]= fqv[28];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,2,local+1); /*error*/
	local[1]= w;
	goto IF62454;
IF62453:
	local[1]= NIL;
IF62454:
	goto CON62445;
CON62447:
	local[1]= argv[0]->c.obj.iv[0];
	if (argv[0]->c.obj.iv[1]!=local[1]) goto CON62461;
	w=argv[0]->c.obj.iv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	argv[0]->c.obj.iv[0] = NIL;
	argv[0]->c.obj.iv[1] = NIL;
	w = local[1];
	local[1]= w;
	goto CON62445;
CON62461:
	w=argv[0]->c.obj.iv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=argv[0]->c.obj.iv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[0] = (w)->c.cons.cdr;
	w = local[1];
	local[1]= w;
	goto CON62445;
CON62498:
	local[1]= NIL;
CON62445:
	w = local[1];
	local[0]= w;
BLK62426:
	ctx->vsp=local; return(local[0]);}

/*:enqueue*/
static pointer M62537queue_enqueue(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[0]->c.obj.iv[1]==NIL) goto CON62554;
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	w = NIL;
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	ctx->vsp=local+2;
	w=(pointer)RPLACD2(ctx,2,local+0); /*rplacd2*/
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[1] = (w)->c.cons.cdr;
	local[0]= argv[0]->c.obj.iv[1];
	goto CON62552;
CON62554:
	local[0]= argv[2];
	w = NIL;
	ctx->vsp=local+1;
	argv[0]->c.obj.iv[1] = cons(ctx,local[0],w);
	argv[0]->c.obj.iv[0] = argv[0]->c.obj.iv[1];
	local[0]= argv[0]->c.obj.iv[0];
	goto CON62552;
CON62579:
	local[0]= NIL;
CON62552:
	w = argv[2];
	local[0]= w;
BLK62538:
	ctx->vsp=local; return(local[0]);}

/*:search*/
static pointer M62603queue_search(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT62607;}
	local[0]= (pointer)get_sym_func(fqv[29]);
ENT62607:
ENT62606:
	if (n>4) maerror();
	local[1]= argv[2];
	local[2]= argv[0]->c.obj.iv[0];
	local[3]= fqv[19];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,4,local+1,&ftab[2],fqv[30]); /*find*/
	local[0]= w;
BLK62604:
	ctx->vsp=local; return(local[0]);}

/*:delete*/
static pointer M62636queue_delete(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT62641;}
	local[0]= (pointer)get_sym_func(fqv[29]);
ENT62641:
	if (n>=5) { local[1]=(argv[4]); goto ENT62640;}
	local[1]= makeint((eusinteger_t)1L);
ENT62640:
ENT62639:
	if (n>5) maerror();
	local[2]= argv[2];
	local[3]= argv[0]->c.obj.iv[0];
	local[4]= fqv[19];
	local[5]= local[0];
	local[6]= fqv[31];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(*ftab[3])(ctx,6,local+2,&ftab[3],fqv[32]); /*delete*/
	argv[0]->c.obj.iv[0] = w;
	local[2]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+3;
	w=(*ftab[4])(ctx,1,local+2,&ftab[4],fqv[33]); /*last*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0];
	local[0]= w;
BLK62637:
	ctx->vsp=local; return(local[0]);}

/*:first*/
static pointer M62695queue_first(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w=argv[0]->c.obj.iv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK62696:
	ctx->vsp=local; return(local[0]);}

/*:last*/
static pointer M62715queue_last(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK62716:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___hashtab(ctx,n,argv,env)
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
	local[0]= fqv[34];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF62741;
	local[0]= fqv[35];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[36],w);
	goto IF62742;
IF62741:
	local[0]= fqv[37];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF62742:
	local[0]= fqv[38];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[16];
	local[1]= fqv[39];
	local[2]= fqv[16];
	local[3]= fqv[40];
	local[4]= loadglobal(fqv[41]);
	local[5]= fqv[42];
	local[6]= fqv[43];
	local[7]= fqv[44];
	local[8]= NIL;
	local[9]= fqv[45];
	local[10]= NIL;
	local[11]= fqv[18];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[46];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[5])(ctx,13,local+2,&ftab[5],fqv[47]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[48];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M60665hash_table_size,fqv[18],fqv[16],fqv[49]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M60681hash_table_find,fqv[0],fqv[16],fqv[50]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M60831hash_table_get,fqv[23],fqv[16],fqv[51]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M60877hash_table_enter,fqv[3],fqv[16],fqv[52]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M60993hash_table_delete,fqv[24],fqv[16],fqv[53]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61062hash_table_extend,fqv[1],fqv[16],fqv[54]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61269hash_table_hash,fqv[21],fqv[16],fqv[55]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61304hash_table_map,fqv[25],fqv[16],fqv[56]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61417hash_table_list_values,fqv[57],fqv[16],fqv[58]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61536hash_table_list_keys,fqv[59],fqv[16],fqv[60]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61651hash_table_list,fqv[61],fqv[16],fqv[62]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61773hash_table_hash_function,fqv[63],fqv[16],fqv[64]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61809hash_table_clear,fqv[26],fqv[16],fqv[65]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61888hash_table_prin1,fqv[7],fqv[16],fqv[66]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M61926hash_table_init,fqv[17],fqv[16],fqv[67]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[68],module,F60560make_hash_table,fqv[69]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[70],module,F60563gethash,fqv[71]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[72],module,F60566sethash,fqv[73]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[74],module,F60569remhash,fqv[75]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[76],module,F60572hash_table_p,fqv[77]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[78],module,F60575maphash,fqv[79]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[80],module,F60578clrhash,fqv[81]);
	local[0]= fqv[82];
	local[1]= fqv[39];
	local[2]= fqv[82];
	local[3]= fqv[40];
	local[4]= loadglobal(fqv[83]);
	local[5]= fqv[42];
	local[6]= fqv[84];
	local[7]= fqv[44];
	local[8]= NIL;
	local[9]= fqv[45];
	local[10]= NIL;
	local[11]= fqv[18];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[46];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[5])(ctx,13,local+2,&ftab[5],fqv[47]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62292queue_init,fqv[17],fqv[82],fqv[85]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62316queue_length,fqv[86],fqv[82],fqv[87]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62333queue_empty_,fqv[88],fqv[82],fqv[89]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62352queue_trim,fqv[90],fqv[82],fqv[91]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62425queue_dequeue,fqv[27],fqv[82],fqv[92]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62537queue_enqueue,fqv[93],fqv[82],fqv[94]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62603queue_search,fqv[95],fqv[82],fqv[96]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62636queue_delete,fqv[24],fqv[82],fqv[97]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62695queue_first,fqv[98],fqv[82],fqv[99]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M62715queue_last,fqv[100],fqv[82],fqv[101]);
	local[0]= fqv[102];
	local[1]= fqv[103];
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,2,local+0,&ftab[6],fqv[104]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<7; i++) ftab[i]=fcallx;
}
