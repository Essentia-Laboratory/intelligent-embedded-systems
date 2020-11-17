/* ./irtgraph.c :  entry=irtgraph */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtgraph.h"
#pragma init (register_irtgraph)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtgraph();
extern pointer build_quote_vector();
static int register_irtgraph()
  { add_module_initializer("___irtgraph", ___irtgraph);}


/*:init*/
static pointer M839node_init(ctx,n,argv,env)
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
	w = argv[0];
	local[0]= w;
BLK840:
	ctx->vsp=local; return(local[0]);}

/*:arc-list*/
static pointer M841node_arc_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK842:
	ctx->vsp=local; return(local[0]);}

/*:successors*/
static pointer M843node_successors(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO845,env,argv,local);
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
BLK844:
	ctx->vsp=local; return(local[0]);}

/*:add-arc*/
static pointer M846node_add_arc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	w = argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	argv[0]->c.obj.iv[1] = cons(ctx,local[0],w);
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK847:
	ctx->vsp=local; return(local[0]);}

/*:remove-arc*/
static pointer M848node_remove_arc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[1]); /*remove*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK849:
	ctx->vsp=local; return(local[0]);}

/*:remove-all-arcs*/
static pointer M850node_remove_all_arcs(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[1] = NIL;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK851:
	ctx->vsp=local; return(local[0]);}

/*:unlink*/
static pointer M852node_unlink(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO854,env,argv,local);
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,2,local+0,&ftab[1],fqv[2]); /*remove-if*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK853:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO845(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= argv[0];
	local[2]= fqv[3];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO854(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[2];
	local[1]= argv[0];
	local[2]= fqv[3];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	w = ((w)==(local[0])?T:NIL);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M855arc_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	argv[0]->c.obj.iv[1] = argv[2];
	argv[0]->c.obj.iv[2] = argv[3];
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= fqv[4];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	w = argv[0];
	local[0]= w;
BLK856:
	ctx->vsp=local; return(local[0]);}

/*:from*/
static pointer M857arc_from(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK858:
	ctx->vsp=local; return(local[0]);}

/*:to*/
static pointer M859arc_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK860:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M861arc_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT864;}
	local[0]= T;
ENT864:
ENT863:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-3);
	local[2]= argv[0];
	local[3]= *(ovafptr(argv[1],fqv[5]));
	local[4]= fqv[6];
	local[5]= local[0];
	local[6]= NIL;
	local[7]= fqv[7];
	local[8]= argv[0]->c.obj.iv[1];
	local[9]= argv[0]->c.obj.iv[2];
	local[10]= local[1];
	if (local[10]!=NIL) goto OR865;
	local[10]= fqv[8];
OR865:
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,5,local+6); /*format*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SENDMESSAGE(ctx,5,local+2); /*send-message*/
	local[0]= w;
BLK862:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M866directed_graph_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0];
	local[0]= w;
BLK867:
	ctx->vsp=local; return(local[0]);}

/*:successors*/
static pointer M868directed_graph_successors(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	w = argv[2];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[9],w);
RST870:
	ctx->vsp=local+3;
	local[3]= minilist(ctx,&argv[n],n-3);
	local[4]= loadglobal(fqv[9]);
	local[5]= fqv[10];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	unbindx(ctx,1);
	w = local[4];
	local[0]= w;
BLK869:
	ctx->vsp=local; return(local[0]);}

/*:node*/
static pointer M871directed_graph_node(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= fqv[11];
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO873,env,argv,local);
	local[4]= fqv[12];
	local[5]= (pointer)get_sym_func(fqv[13]);
	ctx->vsp=local+6;
	w=(*ftab[2])(ctx,6,local+0,&ftab[2],fqv[14]); /*find*/
	local[0]= w;
BLK872:
	ctx->vsp=local; return(local[0]);}

/*:nodes*/
static pointer M874directed_graph_nodes(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT877;}
	local[0]= NIL;
ENT877:
ENT876:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF878;
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,2,local+2,&ftab[3],fqv[15]); /*set-difference*/
	local[2]= w;
WHL881:
	if (local[2]==NIL) goto WHX882;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[0];
	local[4]= fqv[16];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,3,local+3,&ftab[4],fqv[17]); /*send-all*/
	goto WHL881;
WHX882:
	local[3]= NIL;
BLK883:
	w = NIL;
	argv[0]->c.obj.iv[1] = local[0];
	local[1]= argv[0]->c.obj.iv[1];
	goto IF879;
IF878:
	local[1]= NIL;
IF879:
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK875:
	ctx->vsp=local; return(local[0]);}

/*:add-node*/
static pointer M885directed_graph_add_node(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	w = argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	argv[0]->c.obj.iv[1] = cons(ctx,local[0],w);
	w = argv[2];
	local[0]= w;
BLK886:
	ctx->vsp=local; return(local[0]);}

/*:remove-node*/
static pointer M887directed_graph_remove_node(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[1]); /*remove*/
	argv[0]->c.obj.iv[1] = w;
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= fqv[16];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[4])(ctx,3,local+0,&ftab[4],fqv[17]); /*send-all*/
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK888:
	ctx->vsp=local; return(local[0]);}

/*:clear-nodes*/
static pointer M889directed_graph_clear_nodes(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(*ftab[4])(ctx,2,local+0,&ftab[4],fqv[17]); /*send-all*/
	argv[0]->c.obj.iv[1] = NIL;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK890:
	ctx->vsp=local; return(local[0]);}

/*:add-arc-from-to*/
static pointer M891directed_graph_add_arc_from_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= loadglobal(fqv[19]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[20];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	w = local[0];
	local[0]= w;
BLK892:
	ctx->vsp=local; return(local[0]);}

/*:remove-arc*/
static pointer M894directed_graph_remove_arc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = argv[2];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[19],w);
	local[3]= loadglobal(fqv[19]);
	local[4]= fqv[21];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= fqv[22];
	local[5]= loadglobal(fqv[19]);
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK895:
	ctx->vsp=local; return(local[0]);}

/*:adjacency-matrix*/
static pointer M896directed_graph_adjacency_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= local[0];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[5])(ctx,2,local+3,&ftab[5],fqv[23]); /*make-matrix*/
	local[1] = w;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[0];
WHL899:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX900;
	local[5]= NIL;
	local[6]= argv[0]->c.obj.iv[1];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= fqv[24];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= fqv[3];
	ctx->vsp=local+8;
	w=(*ftab[4])(ctx,2,local+6,&ftab[4],fqv[17]); /*send-all*/
	local[6]= w;
WHL903:
	if (local[6]==NIL) goto WHX904;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= local[5];
	local[8]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+9;
	w=(*ftab[6])(ctx,2,local+7,&ftab[6],fqv[25]); /*position*/
	local[2] = w;
	if (local[2]==NIL) goto IF907;
	local[7]= local[1];
	local[8]= local[3];
	local[9]= local[2];
	local[10]= local[1];
	local[11]= local[3];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)AREF(ctx,3,local+10); /*aref*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)ASET(ctx,4,local+7); /*aset*/
	local[7]= w;
	goto IF908;
IF907:
	local[7]= NIL;
IF908:
	goto WHL903;
WHX904:
	local[7]= NIL;
BLK905:
	w = NIL;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL899;
WHX900:
	local[5]= NIL;
BLK901:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK897:
	ctx->vsp=local; return(local[0]);}

/*:adjacency-list*/
static pointer M909directed_graph_adjacency_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO911,env,argv,local);
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
BLK910:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO873(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[0];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO911(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO912,env,argv,local);
	local[1]= argv[0];
	local[2]= fqv[24];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[3];
	ctx->vsp=local+3;
	w=(*ftab[4])(ctx,2,local+1,&ftab[4],fqv[17]); /*send-all*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
	local[1]= (pointer)get_sym_func(fqv[26]);
	ctx->vsp=local+2;
	w=(pointer)SORT(ctx,2,local+0); /*sort*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO912(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env0->c.clo.env1[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(*ftab[6])(ctx,2,local+0,&ftab[6],fqv[25]); /*position*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M913costed_arc_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	argv[0]->c.obj.iv[3] = argv[4];
	local[0]= argv[0];
	local[1]= *(ovafptr(argv[1],fqv[5]));
	local[2]= fqv[20];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)SENDMESSAGE(ctx,5,local+0); /*send-message*/
	local[0]= w;
BLK914:
	ctx->vsp=local; return(local[0]);}

/*:cost*/
static pointer M915costed_arc_cost(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK916:
	ctx->vsp=local; return(local[0]);}

/*:add-arc*/
static pointer M917costed_graph_add_arc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<5) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[27], &argv[5], n-5, local+0, 0);
	if (n & (1<<0)) goto KEY919;
	local[0] = NIL;
KEY919:
	local[1]= argv[0];
	local[2]= fqv[28];
	local[3]= argv[2];
	local[4]= argv[3];
	local[5]= argv[4];
	local[6]= fqv[29];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,7,local+1); /*send*/
	local[0]= w;
BLK918:
	ctx->vsp=local; return(local[0]);}

/*:add-arc-from-to*/
static pointer M920costed_graph_add_arc_from_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<5) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[30], &argv[5], n-5, local+0, 0);
	if (n & (1<<0)) goto KEY922;
	local[0] = NIL;
KEY922:
	local[1]= loadglobal(fqv[31]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[20];
	local[4]= argv[2];
	local[5]= argv[3];
	local[6]= argv[4];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,5,local+2); /*send*/
	w = local[1];
	local[1]= w;
	if (local[0]==NIL) goto IF924;
	local[2]= local[1];
	local[3]= loadglobal(fqv[31]);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,1,local+3); /*instantiate*/
	local[3]= w;
	local[4]= local[3];
	local[5]= fqv[20];
	local[6]= argv[3];
	local[7]= argv[2];
	local[8]= argv[4];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,5,local+4); /*send*/
	w = local[3];
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[2]= w;
	goto IF925;
IF924:
	local[2]= local[1];
IF925:
	w = local[2];
	local[0]= w;
BLK921:
	ctx->vsp=local; return(local[0]);}

/*:path-cost*/
static pointer M927costed_graph_path_cost(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	w = argv[3];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[19],w);
	local[3]= loadglobal(fqv[19]);
	local[4]= fqv[32];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK928:
	ctx->vsp=local; return(local[0]);}

/*:goal-test*/
static pointer M929graph_goal_test(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[3];
	w = ((argv[2])==(local[0])?T:NIL);
	local[0]= w;
BLK930:
	ctx->vsp=local; return(local[0]);}

/*:path-cost*/
static pointer M931graph_path_cost(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	w = argv[3];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[19],w);
	local[3]= argv[2];
	local[4]= fqv[32];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	local[4]= loadglobal(fqv[19]);
	local[5]= fqv[32];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	local[3]= w;
	ctx->vsp=local+4;
	unbindx(ctx,1);
	w = local[3];
	local[0]= w;
BLK932:
	ctx->vsp=local; return(local[0]);}

/*:start-state*/
static pointer M933graph_start_state(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT936;}
	local[0]= NIL;
ENT936:
ENT935:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF937;
	argv[0]->c.obj.iv[2] = local[0];
	local[1]= argv[0]->c.obj.iv[2];
	goto IF938;
IF937:
	local[1]= NIL;
IF938:
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK934:
	ctx->vsp=local; return(local[0]);}

/*:goal-state*/
static pointer M939graph_goal_state(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT942;}
	local[0]= NIL;
ENT942:
ENT941:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF943;
	argv[0]->c.obj.iv[3] = local[0];
	local[1]= argv[0]->c.obj.iv[3];
	goto IF944;
IF943:
	local[1]= NIL;
IF944:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK940:
	ctx->vsp=local; return(local[0]);}

/*:add-arc*/
static pointer M945graph_add_arc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[33], &argv[4], n-4, local+0, 0);
	if (n & (1<<0)) goto KEY947;
	local[0] = NIL;
KEY947:
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w!=NIL) goto IF948;
	local[1]= argv[3];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	argv[3] = w;
	local[1]= argv[3];
	goto IF949;
IF948:
	local[1]= NIL;
IF949:
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO950,env,argv,local);
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[0]= w;
BLK946:
	ctx->vsp=local; return(local[0]);}

/*:add-arc-from-to*/
static pointer M951graph_add_arc_from_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[34], &argv[4], n-4, local+0, 0);
	if (n & (1<<0)) goto KEY953;
	local[0] = NIL;
KEY953:
	local[1]= argv[0];
	local[2]= *(ovafptr(argv[1],fqv[5]));
	local[3]= fqv[28];
	local[4]= argv[2];
	local[5]= argv[3];
	local[6]= makeint((eusinteger_t)1L);
	local[7]= fqv[29];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)SENDMESSAGE(ctx,8,local+1); /*send-message*/
	local[0]= w;
BLK952:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO950(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	local[1]= fqv[28];
	local[2]= env->c.clo.env1[2];
	local[3]= argv[0];
	local[4]= fqv[29];
	local[5]= env->c.clo.env2[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,6,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:write-to-dot-stream*/
static pointer M954directed_graph_write_to_dot_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT959;}
	local[0]= loadglobal(fqv[35]);
ENT959:
	if (n>=4) { local[1]=(argv[3]); goto ENT958;}
	local[1]= NIL;
ENT958:
	if (n>=5) { local[2]=(argv[4]); goto ENT957;}
	local[2]= fqv[36];
ENT957:
ENT956:
	if (n>5) maerror();
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO960,env,argv,local);
	local[4]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,2,local+3); /*mapcar*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= fqv[37];
	local[6]= fqv[38];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[37];
	local[7]= fqv[39];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,3,local+5); /*send*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= fqv[37];
	local[8]= fqv[40];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= ((w)==NIL?T:NIL);
	ctx->vsp=local+7;
	local[7]= makeclosure(codevec,quotevec,FLET961,env,argv,local);
	local[8]= local[0];
	local[9]= fqv[41];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,3,local+8); /*format*/
	local[8]= NIL;
	local[9]= argv[0]->c.obj.iv[1];
WHL963:
	if (local[9]==NIL) goto WHX964;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w=local[9];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9] = (w)->c.cons.cdr;
	w = local[10];
	local[8] = w;
	local[10]= local[0];
	local[11]= fqv[42];
	ctx->vsp=local+12;
	w=(pointer)XFORMAT(ctx,2,local+10); /*format*/
	local[10]= local[0];
	local[11]= fqv[43];
	local[12]= local[8];
	w = local[7];
	ctx->vsp=local+13;
	w=FLET961(ctx,1,local+12,w);
	local[12]= w;
	local[13]= local[8];
	local[14]= fqv[0];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,2,local+13); /*send*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)XFORMAT(ctx,4,local+10); /*format*/
	goto WHL963;
WHX964:
	local[10]= NIL;
BLK965:
	w = NIL;
	local[8]= fqv[12];
	local[9]= (pointer)get_sym_func(fqv[13]);
	ctx->vsp=local+10;
	w=(*ftab[7])(ctx,2,local+8,&ftab[7],fqv[44]); /*make-hash-table*/
	local[8]= w;
	local[9]= fqv[12];
	local[10]= (pointer)get_sym_func(fqv[13]);
	ctx->vsp=local+11;
	w=(*ftab[7])(ctx,2,local+9,&ftab[7],fqv[44]); /*make-hash-table*/
	local[9]= w;
	local[10]= NIL;
WHL967:
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[11];
	local[10] = w;
	if (local[10]==NIL) goto WHX968;
	if (local[1]==NIL) goto WHX968;
	local[11]= local[10];
	local[12]= fqv[45];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= fqv[45];
	ctx->vsp=local+14;
	w=(pointer)SEND(ctx,2,local+12); /*send*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= local[8];
	local[13]= fqv[46];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(*ftab[8])(ctx,3,local+11,&ftab[8],fqv[47]); /*sethash*/
	goto WHL967;
WHX968:
	local[11]= NIL;
BLK969:
	w = local[11];
	local[10]= NIL;
	local[11]= argv[0]->c.obj.iv[1];
WHL972:
	if (local[11]==NIL) goto WHX973;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	w=local[11];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11] = (w)->c.cons.cdr;
	w = local[12];
	local[10] = w;
	local[12]= argv[0];
	local[13]= fqv[10];
	local[14]= local[10];
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,3,local+12); /*send*/
	local[12]= w;
	local[13]= NIL;
	local[14]= local[12];
WHL977:
	if (local[14]==NIL) goto WHX978;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	w=local[14];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[14] = (w)->c.cons.cdr;
	w = local[15];
	local[13] = w;
	w=local[13];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	w=local[13];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.cdr;
	local[17]= T;
	local[18]= NIL;
	local[19]= NIL;
	if (local[6]!=NIL) goto IF981;
	local[20]= local[10];
	w = local[16];
	ctx->vsp=local+21;
	local[20]= cons(ctx,local[20],w);
	local[21]= local[8];
	ctx->vsp=local+22;
	w=(*ftab[9])(ctx,2,local+20,&ftab[9],fqv[48]); /*gethash*/
	if (w==NIL) goto IF981;
	local[18] = T;
	local[20]= fqv[49];
	w = local[19];
	ctx->vsp=local+21;
	local[19] = cons(ctx,local[20],w);
	local[20]= local[19];
	goto IF982;
IF981:
	local[20]= NIL;
IF982:
	if (local[5]==NIL) goto IF983;
	local[20]= NIL;
	local[21]= fqv[50];
	local[22]= local[15];
	local[23]= fqv[0];
	ctx->vsp=local+24;
	w=(pointer)SEND(ctx,2,local+22); /*send*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)XFORMAT(ctx,3,local+20); /*format*/
	local[20]= w;
	w = local[19];
	ctx->vsp=local+21;
	local[19] = cons(ctx,local[20],w);
	local[20]= local[19];
	goto IF984;
IF983:
	local[20]= NIL;
IF984:
	if (local[4]!=NIL) goto IF985;
	local[20]= local[10];
	w = local[16];
	ctx->vsp=local+21;
	local[20]= cons(ctx,local[20],w);
	local[21]= local[9];
	ctx->vsp=local+22;
	w=(*ftab[9])(ctx,2,local+20,&ftab[9],fqv[48]); /*gethash*/
	if (w==NIL) goto CON988;
	local[17] = NIL;
	local[20]= local[17];
	goto CON987;
CON988:
	local[20]= local[16];
	w = local[10];
	ctx->vsp=local+21;
	local[20]= cons(ctx,local[20],w);
	local[21]= local[9];
	ctx->vsp=local+22;
	w=(*ftab[9])(ctx,2,local+20,&ftab[9],fqv[48]); /*gethash*/
	if (w==NIL) goto CON989;
	local[17] = NIL;
	local[20]= local[17];
	goto CON987;
CON989:
	local[20]= local[10];
	local[21]= (pointer)get_sym_func(fqv[51]);
	local[22]= argv[0];
	local[23]= fqv[10];
	local[24]= local[16];
	ctx->vsp=local+25;
	w=(pointer)SEND(ctx,3,local+22); /*send*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)MAPCAR(ctx,2,local+21); /*mapcar*/
	local[21]= w;
	ctx->vsp=local+22;
	w=(*ftab[10])(ctx,2,local+20,&ftab[10],fqv[52]); /*member*/
	if (w==NIL) goto CON990;
	local[20]= fqv[53];
	w = local[19];
	ctx->vsp=local+21;
	local[19] = cons(ctx,local[20],w);
	local[20]= local[19];
	goto CON987;
CON990:
	local[20]= NIL;
CON987:
	goto IF986;
IF985:
	local[20]= NIL;
IF986:
	if (local[19]!=NIL) goto IF991;
	local[19] = fqv[54];
	local[20]= local[19];
	goto IF992;
IF991:
	local[20]= NIL;
IF992:
	if (local[17]==NIL) goto IF993;
	local[20]= local[10];
	w = local[16];
	ctx->vsp=local+21;
	local[20]= cons(ctx,local[20],w);
	local[21]= local[9];
	local[22]= local[19];
	ctx->vsp=local+23;
	w=(*ftab[8])(ctx,3,local+20,&ftab[8],fqv[47]); /*sethash*/
	local[20]= w;
	goto IF994;
IF993:
	local[20]= NIL;
IF994:
	w = local[20];
	goto WHL977;
WHX978:
	local[15]= NIL;
BLK979:
	w = NIL;
	goto WHL972;
WHX973:
	local[12]= NIL;
BLK974:
	w = NIL;
	ctx->vsp=local+10;
	local[10]= makeclosure(codevec,quotevec,FLET995,env,argv,local);
	if (local[6]==NIL) goto IF996;
	local[11]= local[8];
	w = local[10];
	ctx->vsp=local+12;
	w=FLET995(ctx,1,local+11,w);
	local[11]= w;
	goto IF997;
IF996:
	local[11]= NIL;
IF997:
	local[11]= local[9];
	w = local[10];
	ctx->vsp=local+12;
	w=FLET995(ctx,1,local+11,w);
	local[10]= local[0];
	local[11]= fqv[55];
	ctx->vsp=local+12;
	w=(pointer)XFORMAT(ctx,2,local+10); /*format*/
	w = T;
	local[0]= w;
BLK955:
	ctx->vsp=local; return(local[0]);}

/*:write-to-dot*/
static pointer M998directed_graph_write_to_dot(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1002;}
	local[0]= NIL;
ENT1002:
	if (n>=5) { local[1]=(argv[4]); goto ENT1001;}
	local[1]= fqv[56];
ENT1001:
ENT1000:
	if (n>5) maerror();
	local[2]= argv[2];
	local[3]= fqv[57];
	local[4]= fqv[58];
	ctx->vsp=local+5;
	w=(*ftab[11])(ctx,3,local+2,&ftab[11],fqv[59]); /*open*/
	local[2]= w;
	ctx->vsp=local+3;
	w = makeclosure(codevec,quotevec,UWP1003,env,argv,local);
	local[3]=(pointer)(ctx->protfp); local[4]=w;
	ctx->protfp=(struct protectframe *)(local+3);
	local[5]= argv[0];
	local[6]= fqv[60];
	local[7]= local[2];
	local[8]= local[0];
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,5,local+5); /*send*/
	ctx->vsp=local+5;
	UWP1003(ctx,0,local+5,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	w = T;
	local[0]= w;
BLK999:
	ctx->vsp=local; return(local[0]);}

/*:write-to-file*/
static pointer M1004directed_graph_write_to_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1009;}
	local[0]= NIL;
ENT1009:
	if (n>=5) { local[1]=(argv[4]); goto ENT1008;}
	local[1]= NIL;
ENT1008:
	if (n>=6) { local[2]=(argv[5]); goto ENT1007;}
	local[2]= fqv[61];
ENT1007:
ENT1006:
	if (n>6) maerror();
	local[3]= NIL;
	local[4]= fqv[62];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,3,local+3); /*format*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= fqv[63];
	local[6]= local[3];
	local[7]= local[0];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,5,local+4); /*send*/
	local[4]= NIL;
	local[5]= fqv[64];
	local[6]= local[3];
	local[7]= local[2];
	local[8]= NIL;
	local[9]= fqv[65];
	local[10]= argv[2];
	local[11]= local[2];
	ctx->vsp=local+12;
	w=(pointer)XFORMAT(ctx,4,local+8); /*format*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,5,local+4); /*format*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SYSTEM(ctx,1,local+4); /*unix:system*/
	w = T;
	local[0]= w;
BLK1005:
	ctx->vsp=local; return(local[0]);}

/*:write-to-pdf*/
static pointer M1010directed_graph_write_to_pdf(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1014;}
	local[0]= NIL;
ENT1014:
	if (n>=5) { local[1]=(argv[4]); goto ENT1013;}
	local[1]= fqv[66];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,2,local+1,&ftab[12],fqv[67]); /*string-right-trim*/
	local[1]= w;
ENT1013:
ENT1012:
	if (n>5) maerror();
	local[2]= fqv[68];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(*ftab[13])(ctx,2,local+2,&ftab[13],fqv[69]); /*substringp*/
	if (w==NIL) goto IF1015;
	local[2]= fqv[70];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(*ftab[12])(ctx,2,local+2,&ftab[12],fqv[67]); /*string-right-trim*/
	local[2]= w;
	local[3]= local[2];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SUB1(ctx,1,local+4); /*1-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)46L);
	ctx->vsp=local+5;
	w=(pointer)NUMEQUAL(ctx,2,local+3); /*=*/
	if (w==NIL) goto IF1017;
	local[3]= local[2];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SUB1(ctx,1,local+5); /*1-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SUBSEQ(ctx,3,local+3); /*subseq*/
	argv[2] = w;
	local[3]= argv[2];
	goto IF1018;
IF1017:
	local[3]= NIL;
IF1018:
	w = local[3];
	local[2]= w;
	goto IF1016;
IF1015:
	local[2]= NIL;
IF1016:
	local[2]= argv[0];
	local[3]= fqv[71];
	local[4]= argv[2];
	local[5]= local[0];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,5,local+2); /*send*/
	local[0]= w;
BLK1011:
	ctx->vsp=local; return(local[0]);}

/*:original-draw-mode*/
static pointer M1019directed_graph_original_draw_mode(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[38];
	local[2]= NIL;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[39];
	local[2]= NIL;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[40];
	local[2]= NIL;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK1020:
	ctx->vsp=local; return(local[0]);}

/*:current-draw-mode*/
static pointer M1021directed_graph_current_draw_mode(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[38];
	local[2]= T;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[39];
	local[2]= T;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= argv[0];
	local[1]= fqv[40];
	local[2]= T;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK1022:
	ctx->vsp=local; return(local[0]);}

/*:draw-both-arc*/
static pointer M1023directed_graph_draw_both_arc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1026;}
	local[0]= fqv[29];
ENT1026:
ENT1025:
	if (n>3) maerror();
	local[1]= local[0];
	if (fqv[29]==local[1]) goto IF1027;
	local[1]= argv[0];
	local[2]= fqv[72];
	local[3]= fqv[38];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto IF1028;
IF1027:
	local[1]= NIL;
IF1028:
	local[1]= argv[0];
	local[2]= fqv[37];
	local[3]= fqv[38];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
BLK1024:
	ctx->vsp=local; return(local[0]);}

/*:draw-arc-label*/
static pointer M1029directed_graph_draw_arc_label(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1032;}
	local[0]= fqv[73];
ENT1032:
ENT1031:
	if (n>3) maerror();
	local[1]= local[0];
	if (fqv[73]==local[1]) goto IF1033;
	local[1]= argv[0];
	local[2]= fqv[72];
	local[3]= fqv[39];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto IF1034;
IF1033:
	local[1]= NIL;
IF1034:
	local[1]= argv[0];
	local[2]= fqv[37];
	local[3]= fqv[39];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
BLK1030:
	ctx->vsp=local; return(local[0]);}

/*:draw-merged-result*/
static pointer M1035directed_graph_draw_merged_result(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1038;}
	local[0]= fqv[74];
ENT1038:
ENT1037:
	if (n>3) maerror();
	local[1]= local[0];
	if (fqv[74]==local[1]) goto IF1039;
	local[1]= argv[0];
	local[2]= fqv[72];
	local[3]= fqv[40];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	goto IF1040;
IF1039:
	local[1]= NIL;
IF1040:
	local[1]= argv[0];
	local[2]= fqv[37];
	local[3]= fqv[40];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
BLK1036:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO960(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[14])(ctx,1,local+1,&ftab[14],fqv[75]); /*string*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET961(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[3];
	ctx->vsp=local+2;
	w=(*ftab[15])(ctx,2,local+0,&ftab[15],fqv[76]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET995(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO1041,env,argv,local);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[16])(ctx,2,local+0,&ftab[16],fqv[77]); /*maphash*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1041(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= env->c.clo.env0->c.clo.env2[0];
	local[1]= fqv[78];
	ctx->vsp=local+2;
	w=(pointer)XFORMAT(ctx,2,local+0); /*format*/
	local[0]= env->c.clo.env0->c.clo.env2[0];
	local[1]= fqv[79];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w = env->c.clo.env0->c.clo.env2[7];
	ctx->vsp=local+3;
	w=FLET961(ctx,1,local+2,w);
	local[2]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	w = env->c.clo.env0->c.clo.env2[7];
	ctx->vsp=local+4;
	w=FLET961(ctx,1,local+3,w);
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,4,local+0); /*format*/
	local[0]= argv[1];
	if (fqv[54]!=local[0]) goto IF1042;
	local[0]= env->c.clo.env0->c.clo.env2[0];
	local[1]= fqv[80];
	ctx->vsp=local+2;
	w=(pointer)XFORMAT(ctx,2,local+0); /*format*/
	local[0]= w;
	goto IF1043;
IF1042:
	local[0]= env->c.clo.env0->c.clo.env2[0];
	local[1]= fqv[81];
	ctx->vsp=local+2;
	w=(pointer)XFORMAT(ctx,2,local+0); /*format*/
	local[0]= NIL;
	local[1]= argv[1];
WHL1045:
	if (local[1]==NIL) goto WHX1046;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= local[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car==local[2]) goto IF1049;
	local[2]= env->c.clo.env0->c.clo.env2[0];
	local[3]= fqv[82];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,2,local+2); /*format*/
	local[2]= w;
	goto IF1050;
IF1049:
	local[2]= NIL;
IF1050:
	local[2]= env->c.clo.env0->c.clo.env2[0];
	local[3]= fqv[83];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,3,local+2); /*format*/
	goto WHL1045;
WHX1046:
	local[2]= NIL;
BLK1047:
	w = NIL;
	local[0]= env->c.clo.env0->c.clo.env2[0];
	local[1]= fqv[84];
	ctx->vsp=local+2;
	w=(pointer)XFORMAT(ctx,2,local+0); /*format*/
	local[0]= w;
IF1043:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP1003(ctx,n,argv,env)
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

/*:add-neighbor*/
static pointer M1051node_add_neighbor(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT1054;}
	local[0]= NIL;
ENT1054:
ENT1053:
	if (n>4) maerror();
	local[1]= loadglobal(fqv[19]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[20];
	local[4]= argv[0];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	w = local[1];
	local[1]= w;
	if (local[0]==NIL) goto IF1056;
	local[2]= local[1];
	local[3]= fqv[0];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto IF1057;
IF1056:
	local[2]= NIL;
IF1057:
	local[2]= argv[0];
	local[3]= fqv[85];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[0]= w;
BLK1052:
	ctx->vsp=local; return(local[0]);}

/*:neighbors*/
static pointer M1058node_neighbors(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1061;}
	local[0]= NIL;
ENT1061:
ENT1060:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1062;
	local[1]= NIL;
	local[2]= local[0];
WHL1065:
	if (local[2]==NIL) goto WHX1066;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= loadglobal(fqv[19]);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,1,local+3); /*instantiate*/
	local[3]= w;
	local[4]= local[3];
	local[5]= fqv[20];
	local[6]= argv[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,4,local+4); /*send*/
	w = local[3];
	goto WHL1065;
WHX1066:
	local[3]= NIL;
BLK1067:
	w = NIL;
	local[1]= w;
	goto IF1063;
IF1062:
	local[1]= NIL;
IF1063:
	local[1]= (pointer)get_sym_func(fqv[51]);
	local[2]= argv[0];
	local[3]= fqv[10];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[0]= w;
BLK1059:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1070arced_node_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[86], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1072;
	local[0] = NIL;
KEY1072:
	local[1]= argv[0];
	local[2]= *(ovafptr(argv[1],fqv[5]));
	local[3]= fqv[20];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SENDMESSAGE(ctx,4,local+1); /*send-message*/
	w = argv[0];
	local[0]= w;
BLK1071:
	ctx->vsp=local; return(local[0]);}

/*:find-action*/
static pointer M1073arced_node_find_action(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= fqv[11];
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO1075,env,argv,local);
	ctx->vsp=local+4;
	w=(*ftab[2])(ctx,4,local+0,&ftab[2],fqv[14]); /*find*/
	local[0]= w;
	if (local[0]==NIL) goto IF1076;
	local[1]= local[0];
	local[2]= fqv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	goto IF1077;
IF1076:
	local[1]= NIL;
IF1077:
	w = local[1];
	local[0]= w;
BLK1074:
	ctx->vsp=local; return(local[0]);}

/*:neighbor-action-alist*/
static pointer M1078arced_node_neighbor_action_alist(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO1080,env,argv,local);
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
BLK1079:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO1075(ctx,n,argv,env)
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
static pointer CLO1080(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[0];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[3];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1081solver_node_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[87], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1083;
	local[0] = makeint((eusinteger_t)0L);
KEY1083:
	if (n & (1<<1)) goto KEY1084;
	local[1] = NIL;
KEY1084:
	if (n & (1<<2)) goto KEY1085;
	local[2] = NIL;
KEY1085:
	argv[0]->c.obj.iv[1] = argv[2];
	argv[0]->c.obj.iv[2] = local[0];
	argv[0]->c.obj.iv[3] = local[1];
	argv[0]->c.obj.iv[4] = local[2];
	w = argv[0];
	local[0]= w;
BLK1082:
	ctx->vsp=local; return(local[0]);}

/*:path*/
static pointer M1086solver_node_path(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1089;}
	local[0]= NIL;
ENT1089:
ENT1088:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1090;
	local[1]= argv[0];
	local[2]= fqv[88];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	if (w==NIL) goto IF1092;
	local[1]= argv[0];
	local[2]= fqv[88];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[89];
	local[3]= argv[0];
	w = local[0];
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF1093;
IF1092:
	local[1]= argv[0];
	w = local[0];
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
IF1093:
	goto IF1091;
IF1090:
	if (argv[0]->c.obj.iv[5]==NIL) goto IF1094;
	local[1]= argv[0]->c.obj.iv[5];
	goto IF1095;
IF1094:
	local[1]= argv[0];
	local[2]= fqv[88];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	if (w==NIL) goto IF1096;
	local[1]= argv[0];
	local[2]= fqv[88];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= fqv[89];
	local[3]= argv[0];
	w = local[0];
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	goto IF1097;
IF1096:
	local[1]= argv[0];
	w = local[0];
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
IF1097:
	argv[0]->c.obj.iv[5] = local[1];
	local[1]= argv[0]->c.obj.iv[5];
IF1095:
IF1091:
	w = local[1];
	local[0]= w;
BLK1087:
	ctx->vsp=local; return(local[0]);}

/*:expand*/
static pointer M1098solver_node_expand(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
RST1100:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-3);
	local[1]= (pointer)get_sym_func(fqv[90]);
	local[2]= argv[2];
	local[3]= fqv[10];
	local[4]= argv[0]->c.obj.iv[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,5,local+1); /*apply*/
	local[1]= w;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= local[1];
WHL1102:
	if (local[4]==NIL) goto WHX1103;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= loadglobal(fqv[91]);
	ctx->vsp=local+6;
	w=(pointer)INSTANTIATE(ctx,1,local+5); /*instantiate*/
	local[5]= w;
	local[6]= local[5];
	local[7]= fqv[20];
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.cdr;
	local[9]= fqv[88];
	local[10]= argv[0];
	local[11]= fqv[92];
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[12]= (w)->c.cons.car;
	local[13]= fqv[32];
	local[14]= argv[2];
	local[15]= fqv[93];
	local[16]= argv[0];
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.cdr;
	ctx->vsp=local+19;
	w=(pointer)SEND(ctx,5,local+14); /*send*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)SEND(ctx,9,local+6); /*send*/
	w = local[5];
	local[5]= w;
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	goto WHL1102;
WHX1103:
	local[5]= NIL;
BLK1104:
	w = NIL;
	w = local[2];
	local[0]= w;
BLK1099:
	ctx->vsp=local; return(local[0]);}

/*:state*/
static pointer M1107solver_node_state(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1110;}
	local[0]= NIL;
ENT1110:
ENT1109:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1111;
	argv[0]->c.obj.iv[1] = local[0];
	local[1]= argv[0]->c.obj.iv[1];
	goto IF1112;
IF1111:
	local[1]= NIL;
IF1112:
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK1108:
	ctx->vsp=local; return(local[0]);}

/*:cost*/
static pointer M1113solver_node_cost(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1116;}
	local[0]= NIL;
ENT1116:
ENT1115:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1117;
	argv[0]->c.obj.iv[2] = local[0];
	local[1]= argv[0]->c.obj.iv[2];
	goto IF1118;
IF1117:
	local[1]= NIL;
IF1118:
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK1114:
	ctx->vsp=local; return(local[0]);}

/*:parent*/
static pointer M1119solver_node_parent(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1122;}
	local[0]= NIL;
ENT1122:
ENT1121:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1123;
	argv[0]->c.obj.iv[3] = local[0];
	local[1]= argv[0]->c.obj.iv[3];
	goto IF1124;
IF1123:
	local[1]= NIL;
IF1124:
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK1120:
	ctx->vsp=local; return(local[0]);}

/*:action*/
static pointer M1125solver_node_action(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1128;}
	local[0]= NIL;
ENT1128:
ENT1127:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1129;
	argv[0]->c.obj.iv[4] = local[0];
	local[1]= argv[0]->c.obj.iv[4];
	goto IF1130;
IF1129:
	local[1]= NIL;
IF1130:
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK1126:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1131solver_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0];
	local[0]= w;
BLK1132:
	ctx->vsp=local; return(local[0]);}

/*:solve*/
static pointer M1133solver_solve(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	w = NIL;
	local[0]= w;
BLK1134:
	ctx->vsp=local; return(local[0]);}

/*:solve-by-name*/
static pointer M1135solver_solve_by_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<5) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[94], &argv[5], n-5, local+0, 0);
	if (n & (1<<0)) goto KEY1137;
	local[0] = NIL;
KEY1137:
	local[1]= argv[2];
	local[2]= fqv[95];
	local[3]= argv[2];
	local[4]= fqv[96];
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= argv[2];
	local[2]= fqv[97];
	local[3]= argv[2];
	local[4]= fqv[96];
	local[5]= argv[4];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,3,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= argv[0];
	local[2]= fqv[98];
	local[3]= argv[2];
	local[4]= fqv[99];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,5,local+1); /*send*/
	local[0]= w;
BLK1136:
	ctx->vsp=local; return(local[0]);}

/*:solve-init*/
static pointer M1138graph_search_solver_solve_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	argv[0]->c.obj.iv[2] = NIL;
	local[0]= argv[0];
	local[1]= fqv[100];
	local[2]= loadglobal(fqv[91]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[20];
	local[5]= argv[2];
	local[6]= fqv[95];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= fqv[32];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,5,local+3); /*send*/
	w = local[2];
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK1139:
	ctx->vsp=local; return(local[0]);}

/*:find-node-in-close-list*/
static pointer M1141graph_search_solver_find_node_in_close_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= fqv[45];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[14]); /*find*/
	local[0]= w;
BLK1142:
	ctx->vsp=local; return(local[0]);}

/*:solve*/
static pointer M1143graph_search_solver_solve(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[101], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY1145;
	local[0] = NIL;
KEY1145:
	local[1]= argv[0];
	local[2]= fqv[102];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
WHL1146:
	local[1]= argv[0];
	local[2]= fqv[103];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	if (w!=NIL) goto WHX1147;
	local[1]= argv[0];
	local[2]= fqv[104];
	local[3]= fqv[105];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	local[2]= argv[2];
	local[3]= fqv[106];
	local[4]= local[1];
	local[5]= fqv[45];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	if (w==NIL) goto CON1150;
	local[2]= local[1];
	local[3]= fqv[89];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK1144;
	goto CON1149;
CON1150:
	local[2]= argv[0];
	local[3]= fqv[107];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	if (w!=NIL) goto CON1151;
	local[2]= local[1];
	local[3]= fqv[45];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	w = argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	argv[0]->c.obj.iv[2] = cons(ctx,local[2],w);
	local[2]= argv[0];
	local[3]= fqv[108];
	local[4]= local[1];
	local[5]= fqv[109];
	local[6]= argv[2];
	local[7]= fqv[99];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,5,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	goto CON1149;
CON1151:
	local[2]= NIL;
CON1149:
	w = local[2];
	goto WHL1146;
WHX1147:
	local[1]= NIL;
BLK1148:
	local[1]= fqv[110];
	local[2]= fqv[98];
	ctx->vsp=local+3;
	w=(*ftab[17])(ctx,2,local+1,&ftab[17],fqv[111]); /*warn*/
	local[1]= fqv[112];
	local[2]= fqv[98];
	ctx->vsp=local+3;
	w=(*ftab[17])(ctx,2,local+1,&ftab[17],fqv[111]); /*warn*/
	local[1]= argv[0];
	local[2]= fqv[113];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	argv[0]->c.obj.iv[2] = NIL;
	w = NIL;
	local[0]= w;
BLK1144:
	ctx->vsp=local; return(local[0]);}

/*:add-to-open-list*/
static pointer M1152graph_search_solver_add_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(pointer)LISTP(ctx,1,local+0); /*listp*/
	if (w==NIL) goto IF1154;
	local[0]= argv[0];
	local[1]= fqv[108];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	goto IF1155;
IF1154:
	local[0]= argv[0];
	local[1]= fqv[114];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
IF1155:
	w = local[0];
	local[0]= w;
BLK1153:
	ctx->vsp=local; return(local[0]);}

/*:null-open-list?*/
static pointer M1156graph_search_solver_null_open_list_(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = ((argv[0]->c.obj.iv[1])==NIL?T:NIL);
	local[0]= w;
BLK1157:
	ctx->vsp=local; return(local[0]);}

/*:clear-open-list*/
static pointer M1158graph_search_solver_clear_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[115];
	ctx->vsp=local+1;
	w=(*ftab[17])(ctx,1,local+0,&ftab[17],fqv[111]); /*warn*/
	w = NIL;
	local[0]= w;
BLK1159:
	ctx->vsp=local; return(local[0]);}

/*:add-list-to-open-list*/
static pointer M1160graph_search_solver_add_list_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= fqv[116];
	ctx->vsp=local+1;
	w=(*ftab[17])(ctx,1,local+0,&ftab[17],fqv[111]); /*warn*/
	w = NIL;
	local[0]= w;
BLK1161:
	ctx->vsp=local; return(local[0]);}

/*:add-object-to-open-list*/
static pointer M1162graph_search_solver_add_object_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= fqv[117];
	ctx->vsp=local+1;
	w=(*ftab[17])(ctx,1,local+0,&ftab[17],fqv[111]); /*warn*/
	w = NIL;
	local[0]= w;
BLK1163:
	ctx->vsp=local; return(local[0]);}

/*:pop-from-open-list*/
static pointer M1164graph_search_solver_pop_from_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[118], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1166;
	local[0] = NIL;
KEY1166:
	local[1]= fqv[119];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,1,local+1,&ftab[17],fqv[111]); /*warn*/
	w = NIL;
	local[0]= w;
BLK1165:
	ctx->vsp=local; return(local[0]);}

/*:open-list*/
static pointer M1167graph_search_solver_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1170;}
	local[0]= NIL;
ENT1170:
ENT1169:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1171;
	argv[0]->c.obj.iv[1] = local[0];
	local[1]= argv[0]->c.obj.iv[1];
	goto IF1172;
IF1171:
	local[1]= NIL;
IF1172:
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK1168:
	ctx->vsp=local; return(local[0]);}

/*:close-list*/
static pointer M1173graph_search_solver_close_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT1176;}
	local[0]= NIL;
ENT1176:
ENT1175:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF1177;
	argv[0]->c.obj.iv[2] = local[0];
	local[1]= argv[0]->c.obj.iv[2];
	goto IF1178;
IF1177:
	local[1]= NIL;
IF1178:
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK1174:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1179breadth_first_graph_search_solver_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	w=(pointer)LIST(ctx,0,local+0); /*list*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0];
	local[0]= w;
BLK1180:
	ctx->vsp=local; return(local[0]);}

/*:clear-open-list*/
static pointer M1181breadth_first_graph_search_solver_clear_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[1] = NIL;
	w = NIL;
	local[0]= w;
BLK1182:
	ctx->vsp=local; return(local[0]);}

/*:add-list-to-open-list*/
static pointer M1183breadth_first_graph_search_solver_add_list_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK1184:
	ctx->vsp=local; return(local[0]);}

/*:add-object-to-open-list*/
static pointer M1185breadth_first_graph_search_solver_add_object_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK1186:
	ctx->vsp=local; return(local[0]);}

/*:pop-from-open-list*/
static pointer M1187breadth_first_graph_search_solver_pop_from_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[120], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1189;
	local[0] = NIL;
KEY1189:
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[1] = (w)->c.cons.cdr;
	w = local[1];
	local[0]= w;
BLK1188:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1191depth_first_graph_search_solver_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	w=(pointer)LIST(ctx,0,local+0); /*list*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0];
	local[0]= w;
BLK1192:
	ctx->vsp=local; return(local[0]);}

/*:clear-open-list*/
static pointer M1193depth_first_graph_search_solver_clear_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[1] = NIL;
	w = NIL;
	local[0]= w;
BLK1194:
	ctx->vsp=local; return(local[0]);}

/*:add-list-to-open-list*/
static pointer M1195depth_first_graph_search_solver_add_list_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK1196:
	ctx->vsp=local; return(local[0]);}

/*:add-object-to-open-list*/
static pointer M1197depth_first_graph_search_solver_add_object_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	w = argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	argv[0]->c.obj.iv[1] = cons(ctx,local[0],w);
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK1198:
	ctx->vsp=local; return(local[0]);}

/*:pop-from-open-list*/
static pointer M1199depth_first_graph_search_solver_pop_from_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[121], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1201;
	local[0] = NIL;
KEY1201:
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[1] = (w)->c.cons.cdr;
	w = local[1];
	local[0]= w;
BLK1200:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1203best_first_graph_search_solver_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	argv[0]->c.obj.iv[3] = argv[2];
	ctx->vsp=local+0;
	w=(pointer)LIST(ctx,0,local+0); /*list*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0];
	local[0]= w;
BLK1204:
	ctx->vsp=local; return(local[0]);}

/*:clear-open-list*/
static pointer M1205best_first_graph_search_solver_clear_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[1] = NIL;
	w = NIL;
	local[0]= w;
BLK1206:
	ctx->vsp=local; return(local[0]);}

/*:add-list-to-open-list*/
static pointer M1207best_first_graph_search_solver_add_list_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK1208:
	ctx->vsp=local; return(local[0]);}

/*:add-object-to-open-list*/
static pointer M1209best_first_graph_search_solver_add_object_to_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	w = argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	argv[0]->c.obj.iv[1] = cons(ctx,local[0],w);
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK1210:
	ctx->vsp=local; return(local[0]);}

/*:pop-from-open-list*/
static pointer M1211best_first_graph_search_solver_pop_from_open_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[122], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY1213;
	local[0] = NIL;
KEY1213:
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= local[1];
	local[3]= fqv[37];
	local[4]= fqv[123];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
	if (w!=NIL) goto OR1214;
	local[2]= local[1];
	local[3]= fqv[72];
	local[4]= fqv[123];
	local[5]= argv[0];
	local[6]= fqv[124];
	local[7]= local[1];
	local[8]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,4,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= local[1];
	local[3]= fqv[37];
	local[4]= fqv[123];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[2]= w;
OR1214:
	if (local[0]==NIL) goto IF1215;
	local[3]= fqv[125];
	local[4]= local[1];
	local[5]= fqv[89];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[45];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,2,local+4,&ftab[4],fqv[17]); /*send-all*/
	local[4]= w;
	local[5]= fqv[0];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,2,local+4,&ftab[4],fqv[17]); /*send-all*/
	local[4]= w;
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(*ftab[17])(ctx,3,local+3,&ftab[17],fqv[111]); /*warn*/
	local[3]= w;
	goto IF1216;
IF1215:
	local[3]= NIL;
IF1216:
	local[3]= NIL;
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
WHL1218:
	if (local[4]==NIL) goto WHX1219;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[3];
	local[6]= fqv[123];
	ctx->vsp=local+7;
	w=(pointer)GETPROP(ctx,2,local+5); /*get*/
	local[5]= w;
	if (w!=NIL) goto OR1222;
	local[5]= local[3];
	local[6]= argv[0];
	local[7]= fqv[124];
	local[8]= local[3];
	local[9]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,4,local+6); /*send*/
	local[6]= w;
	local[7]= fqv[123];
	ctx->vsp=local+8;
	w=(pointer)PUTPROP(ctx,3,local+5); /*putprop*/
	local[5]= local[3];
	local[6]= fqv[123];
	ctx->vsp=local+7;
	w=(pointer)GETPROP(ctx,2,local+5); /*get*/
	local[5]= w;
OR1222:
	if (local[0]==NIL) goto IF1223;
	local[6]= fqv[126];
	local[7]= local[3];
	local[8]= fqv[89];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	local[8]= fqv[45];
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,2,local+7,&ftab[4],fqv[17]); /*send-all*/
	local[7]= w;
	local[8]= fqv[0];
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,2,local+7,&ftab[4],fqv[17]); /*send-all*/
	local[7]= w;
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(*ftab[17])(ctx,3,local+6,&ftab[17],fqv[111]); /*warn*/
	local[6]= w;
	goto IF1224;
IF1223:
	local[6]= NIL;
IF1224:
	local[6]= local[5];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)LESSP(ctx,2,local+6); /*<*/
	if (w==NIL) goto IF1225;
	local[2] = local[5];
	local[1] = local[3];
	local[6]= local[1];
	goto IF1226;
IF1225:
	local[6]= NIL;
IF1226:
	w = local[6];
	goto WHL1218;
WHX1219:
	local[5]= NIL;
BLK1220:
	w = NIL;
	if (local[0]==NIL) goto IF1227;
	local[3]= fqv[127];
	ctx->vsp=local+4;
	w=(*ftab[17])(ctx,1,local+3,&ftab[17],fqv[111]); /*warn*/
	local[3]= fqv[128];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(*ftab[17])(ctx,2,local+3,&ftab[17],fqv[111]); /*warn*/
	local[3]= fqv[129];
	local[4]= local[1];
	local[5]= fqv[89];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[45];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,2,local+4,&ftab[4],fqv[17]); /*send-all*/
	local[4]= w;
	local[5]= fqv[0];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,2,local+4,&ftab[4],fqv[17]); /*send-all*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[17])(ctx,2,local+3,&ftab[17],fqv[111]); /*warn*/
	local[3]= w;
	goto IF1228;
IF1227:
	local[3]= NIL;
IF1228:
	local[3]= local[1];
	local[4]= argv[0]->c.obj.iv[1];
	local[5]= fqv[130];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(*ftab[18])(ctx,4,local+3,&ftab[18],fqv[131]); /*delete*/
	argv[0]->c.obj.iv[1] = w;
	w = local[1];
	local[0]= w;
BLK1212:
	ctx->vsp=local; return(local[0]);}

/*:fn*/
static pointer M1229best_first_graph_search_solver_fn(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[2];
	local[1]= fqv[32];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK1230:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M1231a__graph_search_solver_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= *(ovafptr(argv[1],fqv[5]));
	local[2]= fqv[20];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SENDMESSAGE(ctx,4,local+0); /*send-message*/
	w = argv[0];
	local[0]= w;
BLK1232:
	ctx->vsp=local; return(local[0]);}

/*:fn*/
static pointer M1233a__graph_search_solver_fn(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[132], &argv[4], n-4, local+0, 0);
	if (n & (1<<0)) goto KEY1235;
	local[0] = NIL;
KEY1235:
	if (local[0]==NIL) goto IF1236;
	local[1]= fqv[133];
	local[2]= argv[0];
	local[3]= fqv[134];
	local[4]= argv[2];
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[17])(ctx,2,local+1,&ftab[17],fqv[111]); /*warn*/
	local[1]= fqv[135];
	local[2]= argv[0];
	local[3]= fqv[136];
	local[4]= argv[2];
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[17])(ctx,2,local+1,&ftab[17],fqv[111]); /*warn*/
	local[1]= w;
	goto IF1237;
IF1236:
	local[1]= NIL;
IF1237:
	local[1]= argv[0];
	local[2]= fqv[134];
	local[3]= argv[2];
	local[4]= argv[3];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= fqv[136];
	local[4]= argv[2];
	local[5]= argv[3];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,4,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)PLUS(ctx,2,local+1); /*+*/
	local[0]= w;
BLK1234:
	ctx->vsp=local; return(local[0]);}

/*:gn*/
static pointer M1238a__graph_search_solver_gn(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[2];
	local[1]= fqv[32];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK1239:
	ctx->vsp=local; return(local[0]);}

/*:hn*/
static pointer M1240a__graph_search_solver_hn(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= fqv[137];
	ctx->vsp=local+1;
	w=(*ftab[17])(ctx,1,local+0,&ftab[17],fqv[111]); /*warn*/
	w = makeflt(0.0000000000000000000000e+00);
	local[0]= w;
BLK1241:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtgraph(ctx,n,argv,env)
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
	local[0]= fqv[9];
	local[1]= fqv[138];
	local[2]= fqv[9];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[141];
	local[6]= fqv[142];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M839node_init,fqv[20],fqv[9],fqv[148]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M841node_arc_list,fqv[24],fqv[9],fqv[149]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M843node_successors,fqv[10],fqv[9],fqv[150]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M846node_add_arc,fqv[4],fqv[9],fqv[151]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M848node_remove_arc,fqv[22],fqv[9],fqv[152]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M850node_remove_all_arcs,fqv[18],fqv[9],fqv[153]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M852node_unlink,fqv[16],fqv[9],fqv[154]);
	local[0]= fqv[19];
	local[1]= fqv[138];
	local[2]= fqv[19];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[141];
	local[6]= fqv[155];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M855arc_init,fqv[20],fqv[19],fqv[156]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M857arc_from,fqv[21],fqv[19],fqv[157]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M859arc_to,fqv[3],fqv[19],fqv[158]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M861arc_prin1,fqv[6],fqv[19],fqv[159]);
	local[0]= fqv[160];
	local[1]= fqv[138];
	local[2]= fqv[160];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[141];
	local[6]= fqv[161];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M866directed_graph_init,fqv[20],fqv[160],fqv[162]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M868directed_graph_successors,fqv[10],fqv[160],fqv[163]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M871directed_graph_node,fqv[96],fqv[160],fqv[164]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M874directed_graph_nodes,fqv[165],fqv[160],fqv[166]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M885directed_graph_add_node,fqv[167],fqv[160],fqv[168]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M887directed_graph_remove_node,fqv[169],fqv[160],fqv[170]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M889directed_graph_clear_nodes,fqv[171],fqv[160],fqv[172]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M891directed_graph_add_arc_from_to,fqv[28],fqv[160],fqv[173]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M894directed_graph_remove_arc,fqv[22],fqv[160],fqv[174]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M896directed_graph_adjacency_matrix,fqv[175],fqv[160],fqv[176]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M909directed_graph_adjacency_list,fqv[177],fqv[160],fqv[178]);
	local[0]= fqv[31];
	local[1]= fqv[138];
	local[2]= fqv[31];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[19]);
	local[5]= fqv[141];
	local[6]= fqv[179];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M913costed_arc_init,fqv[20],fqv[31],fqv[180]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M915costed_arc_cost,fqv[32],fqv[31],fqv[181]);
	local[0]= fqv[182];
	local[1]= fqv[138];
	local[2]= fqv[182];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[160]);
	local[5]= fqv[141];
	local[6]= fqv[183];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M917costed_graph_add_arc,fqv[4],fqv[182],fqv[184]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M920costed_graph_add_arc_from_to,fqv[28],fqv[182],fqv[185]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M927costed_graph_path_cost,fqv[93],fqv[182],fqv[186]);
	local[0]= fqv[187];
	local[1]= fqv[138];
	local[2]= fqv[187];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[182]);
	local[5]= fqv[141];
	local[6]= fqv[188];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M929graph_goal_test,fqv[106],fqv[187],fqv[189]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M931graph_path_cost,fqv[93],fqv[187],fqv[190]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M933graph_start_state,fqv[95],fqv[187],fqv[191]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M939graph_goal_state,fqv[97],fqv[187],fqv[192]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M945graph_add_arc,fqv[4],fqv[187],fqv[193]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M951graph_add_arc_from_to,fqv[28],fqv[187],fqv[194]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M954directed_graph_write_to_dot_stream,fqv[60],fqv[160],fqv[195]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M998directed_graph_write_to_dot,fqv[63],fqv[160],fqv[196]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1004directed_graph_write_to_file,fqv[71],fqv[160],fqv[197]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1010directed_graph_write_to_pdf,fqv[198],fqv[160],fqv[199]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1019directed_graph_original_draw_mode,fqv[200],fqv[160],fqv[201]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1021directed_graph_current_draw_mode,fqv[202],fqv[160],fqv[203]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1023directed_graph_draw_both_arc,fqv[38],fqv[160],fqv[204]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1029directed_graph_draw_arc_label,fqv[39],fqv[160],fqv[205]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1035directed_graph_draw_merged_result,fqv[40],fqv[160],fqv[206]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1051node_add_neighbor,fqv[207],fqv[9],fqv[208]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1058node_neighbors,fqv[85],fqv[9],fqv[209]);
	local[0]= fqv[210];
	local[1]= fqv[138];
	local[2]= fqv[210];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[9]);
	local[5]= fqv[141];
	local[6]= fqv[183];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1070arced_node_init,fqv[20],fqv[210],fqv[211]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1073arced_node_find_action,fqv[212],fqv[210],fqv[213]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1078arced_node_neighbor_action_alist,fqv[214],fqv[210],fqv[215]);
	local[0]= fqv[91];
	local[1]= fqv[138];
	local[2]= fqv[91];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[141];
	local[6]= fqv[216];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1081solver_node_init,fqv[20],fqv[91],fqv[217]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1086solver_node_path,fqv[89],fqv[91],fqv[218]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1098solver_node_expand,fqv[109],fqv[91],fqv[219]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1107solver_node_state,fqv[45],fqv[91],fqv[220]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1113solver_node_cost,fqv[32],fqv[91],fqv[221]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1119solver_node_parent,fqv[88],fqv[91],fqv[222]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1125solver_node_action,fqv[92],fqv[91],fqv[223]);
	local[0]= fqv[224];
	local[1]= fqv[138];
	local[2]= fqv[224];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[140]);
	local[5]= fqv[141];
	local[6]= fqv[183];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1131solver_init,fqv[20],fqv[224],fqv[225]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1133solver_solve,fqv[98],fqv[224],fqv[226]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1135solver_solve_by_name,fqv[227],fqv[224],fqv[228]);
	local[0]= fqv[229];
	local[1]= fqv[138];
	local[2]= fqv[229];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[224]);
	local[5]= fqv[141];
	local[6]= fqv[230];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1138graph_search_solver_solve_init,fqv[102],fqv[229],fqv[231]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1141graph_search_solver_find_node_in_close_list,fqv[107],fqv[229],fqv[232]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1143graph_search_solver_solve,fqv[98],fqv[229],fqv[233]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1152graph_search_solver_add_to_open_list,fqv[100],fqv[229],fqv[234]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1156graph_search_solver_null_open_list_,fqv[103],fqv[229],fqv[235]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1158graph_search_solver_clear_open_list,fqv[113],fqv[229],fqv[236]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1160graph_search_solver_add_list_to_open_list,fqv[108],fqv[229],fqv[237]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1162graph_search_solver_add_object_to_open_list,fqv[114],fqv[229],fqv[238]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1164graph_search_solver_pop_from_open_list,fqv[104],fqv[229],fqv[239]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1167graph_search_solver_open_list,fqv[240],fqv[229],fqv[241]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1173graph_search_solver_close_list,fqv[242],fqv[229],fqv[243]);
	local[0]= fqv[244];
	local[1]= fqv[138];
	local[2]= fqv[244];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[229]);
	local[5]= fqv[141];
	local[6]= fqv[183];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1179breadth_first_graph_search_solver_init,fqv[20],fqv[244],fqv[245]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1181breadth_first_graph_search_solver_clear_open_list,fqv[113],fqv[244],fqv[246]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1183breadth_first_graph_search_solver_add_list_to_open_list,fqv[108],fqv[244],fqv[247]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1185breadth_first_graph_search_solver_add_object_to_open_list,fqv[114],fqv[244],fqv[248]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1187breadth_first_graph_search_solver_pop_from_open_list,fqv[104],fqv[244],fqv[249]);
	local[0]= fqv[250];
	local[1]= fqv[138];
	local[2]= fqv[250];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[229]);
	local[5]= fqv[141];
	local[6]= fqv[183];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1191depth_first_graph_search_solver_init,fqv[20],fqv[250],fqv[251]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1193depth_first_graph_search_solver_clear_open_list,fqv[113],fqv[250],fqv[252]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1195depth_first_graph_search_solver_add_list_to_open_list,fqv[108],fqv[250],fqv[253]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1197depth_first_graph_search_solver_add_object_to_open_list,fqv[114],fqv[250],fqv[254]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1199depth_first_graph_search_solver_pop_from_open_list,fqv[104],fqv[250],fqv[255]);
	local[0]= fqv[256];
	local[1]= fqv[138];
	local[2]= fqv[256];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[229]);
	local[5]= fqv[141];
	local[6]= fqv[257];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1203best_first_graph_search_solver_init,fqv[20],fqv[256],fqv[258]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1205best_first_graph_search_solver_clear_open_list,fqv[113],fqv[256],fqv[259]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1207best_first_graph_search_solver_add_list_to_open_list,fqv[108],fqv[256],fqv[260]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1209best_first_graph_search_solver_add_object_to_open_list,fqv[114],fqv[256],fqv[261]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1211best_first_graph_search_solver_pop_from_open_list,fqv[104],fqv[256],fqv[262]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1229best_first_graph_search_solver_fn,fqv[124],fqv[256],fqv[263]);
	local[0]= fqv[264];
	local[1]= fqv[138];
	local[2]= fqv[264];
	local[3]= fqv[139];
	local[4]= loadglobal(fqv[256]);
	local[5]= fqv[141];
	local[6]= fqv[183];
	local[7]= fqv[143];
	local[8]= NIL;
	local[9]= fqv[144];
	local[10]= NIL;
	local[11]= fqv[145];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[146];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[19])(ctx,13,local+2,&ftab[19],fqv[147]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1231a__graph_search_solver_init,fqv[20],fqv[264],fqv[265]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1233a__graph_search_solver_fn,fqv[124],fqv[264],fqv[266]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1238a__graph_search_solver_gn,fqv[134],fqv[264],fqv[267]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M1240a__graph_search_solver_hn,fqv[136],fqv[264],fqv[268]);
	local[0]= fqv[269];
	local[1]= fqv[270];
	ctx->vsp=local+2;
	w=(*ftab[20])(ctx,2,local+0,&ftab[20],fqv[271]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<21; i++) ftab[i]=fcallx;
}
