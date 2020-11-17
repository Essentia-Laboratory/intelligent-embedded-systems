/* ./par.c :  entry=par */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "par.h"
#pragma init (register_par)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___par();
extern pointer build_quote_vector();
static int register_par()
  { add_module_initializer("___par", ___par);}

static pointer F88171thread_eval();
static pointer F88173thread_error();
static pointer F88175thread_top();
static pointer F88177repwin();

/*:id*/
static pointer M88227thread_id(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK88228:
	ctx->vsp=local; return(local[0]);}

/*:priority*/
static pointer M88243thread_priority(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT88247;}
	local[0]= NIL;
ENT88247:
ENT88246:
	if (n>3) maerror();
	w = local[0];
	if (!isint(w)) goto IF88263;
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)THR_SETPRIO(ctx,2,local+1); /*unix:thr-setprio*/
	local[1]= w;
	goto IF88264;
IF88263:
	local[1]= NIL;
IF88264:
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(pointer)THR_GETPRIO(ctx,1,local+1); /*unix:thr-getprio*/
	local[0]= w;
BLK88244:
	ctx->vsp=local; return(local[0]);}

/*plist*/
static pointer F88279(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST88282:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= local[0];
WHL88317:
	if (local[3]==NIL) goto WHX88318;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= fqv[0];
	local[5]= fqv[1];
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	goto WHL88317;
WHX88318:
	local[4]= NIL;
BLK88319:
	w = NIL;
	local[2]= fqv[2];
	local[3]= fqv[1];
	local[4]= fqv[3];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[4];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)NREVERSE(ctx,1,local+5); /*nreverse*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK88280:
	ctx->vsp=local; return(local[0]);}

/*mutex*/
static pointer F88431(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST88434:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[5];
	local[3]= local[1];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	local[4]= fqv[6];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[7];
	local[6]= fqv[8];
	w = local[0];
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[9];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK88432:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M88547barrier_synch_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[3] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[2] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[1] = NIL;
	ctx->vsp=local+0;
	w=(pointer)MAKE_MUTEX_LOCK(ctx,0,local+0); /*make-mutex-lock*/
	argv[0]->c.obj.iv[6] = w;
	ctx->vsp=local+0;
	w=(pointer)MAKE_MUTEX_LOCK(ctx,0,local+0); /*make-mutex-lock*/
	argv[0]->c.obj.iv[5] = w;
	argv[0]->c.obj.iv[4] = NIL;
	w = argv[0];
	local[0]= w;
BLK88548:
	ctx->vsp=local; return(local[0]);}

/*:add*/
static pointer M88583barrier_synch_add(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[10]); /*member*/
	if (w!=NIL) goto IF88599;
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)MUTEX_LOCK(ctx,1,local+1); /*mutex-lock*/
	ctx->vsp=local+1;
	w = makeclosure(codevec,quotevec,UWP88629,env,argv,local);
	local[1]=(pointer)(ctx->protfp); local[2]=w;
	ctx->protfp=(struct protectframe *)(local+1);
	local[3]= argv[0]->c.obj.iv[1];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)NCONC(ctx,2,local+3); /*nconc*/
	argv[0]->c.obj.iv[1] = w;
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	argv[0]->c.obj.iv[2] = w;
	w = argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	UWP88629(ctx,0,local+3,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
	goto IF88600;
IF88599:
	local[0]= NIL;
IF88600:
	w = local[0];
	local[0]= w;
BLK88584:
	ctx->vsp=local; return(local[0]);}

/*:remove*/
static pointer M88659barrier_synch_remove(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)MUTEX_LOCK(ctx,1,local+1); /*mutex-lock*/
	ctx->vsp=local+1;
	w = makeclosure(codevec,quotevec,UWP88691,env,argv,local);
	local[1]=(pointer)(ctx->protfp); local[2]=w;
	ctx->protfp=(struct protectframe *)(local+1);
	local[3]= argv[2];
	local[4]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,2,local+3,&ftab[1],fqv[11]); /*delete*/
	argv[0]->c.obj.iv[1] = w;
	w = argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	UWP88691(ctx,0,local+3,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK88660:
	ctx->vsp=local; return(local[0]);}

/*:wait*/
static pointer M88712barrier_synch_wait(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[6];
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)MUTEX_LOCK(ctx,1,local+1); /*mutex-lock*/
	ctx->vsp=local+1;
	w = makeclosure(codevec,quotevec,UWP88742,env,argv,local);
	local[1]=(pointer)(ctx->protfp); local[2]=w;
	ctx->protfp=(struct protectframe *)(local+1);
	local[3]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	argv[0]->c.obj.iv[3] = w;
	local[3]= argv[0]->c.obj.iv[3];
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)NUMEQUAL(ctx,2,local+3); /*=*/
	if (w==NIL) goto IF88759;
	local[3]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+4;
	w=(pointer)COND_SIGNAL(ctx,1,local+3); /*cond-signal*/
	argv[0]->c.obj.iv[3] = makeint((eusinteger_t)0L);
	local[3]= argv[0]->c.obj.iv[3];
	goto IF88760;
IF88759:
	local[3]= argv[0]->c.obj.iv[6];
	local[4]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+5;
	w=(pointer)COND_WAIT(ctx,2,local+3); /*cond-wait*/
	local[3]= w;
IF88760:
	w = local[3];
	ctx->vsp=local+3;
	UWP88742(ctx,0,local+3,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK88713:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP88629(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[0];
	ctx->vsp=local+1;
	w=(pointer)MUTEX_UNLOCK(ctx,1,local+0); /*mutex-unlock*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP88691(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[0];
	ctx->vsp=local+1;
	w=(pointer)MUTEX_UNLOCK(ctx,1,local+0); /*mutex-unlock*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP88742(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[0];
	ctx->vsp=local+1;
	w=(pointer)MUTEX_UNLOCK(ctx,1,local+0); /*mutex-unlock*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:read*/
static pointer M88853synch_memory_port_read(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)SEMA_WAIT(ctx,1,local+0); /*sema-wait*/
	local[0]= argv[0]->c.obj.iv[3];
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(pointer)SEMA_POST(ctx,1,local+1); /*sema-post*/
	w = local[0];
	local[0]= w;
BLK88854:
	ctx->vsp=local; return(local[0]);}

/*:write*/
static pointer M88894synch_memory_port_write(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+1;
	w=(pointer)SEMA_WAIT(ctx,1,local+0); /*sema-wait*/
	argv[0]->c.obj.iv[3] = argv[2];
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)SEMA_POST(ctx,1,local+0); /*sema-post*/
	local[0]= w;
BLK88895:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M88924synch_memory_port_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	w=(pointer)MAKE_SEMAPHORE(ctx,0,local+0); /*make-semaphore*/
	argv[0]->c.obj.iv[1] = w;
	ctx->vsp=local+0;
	w=(pointer)MAKE_SEMAPHORE(ctx,0,local+0); /*make-semaphore*/
	argv[0]->c.obj.iv[2] = w;
	argv[0]->c.obj.iv[4] = T;
	local[0]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+1;
	w=(pointer)SEMA_POST(ctx,1,local+0); /*sema-post*/
	w = argv[0];
	local[0]= w;
BLK88925:
	ctx->vsp=local; return(local[0]);}

/*thread-eval*/
static pointer F88171thread_eval(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
TAG88977:
	local[0]= argv[1];
	local[1]= fqv[12];
	local[2]= argv[0];
	local[3]= fqv[13];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)EVAL(ctx,1,local+2); /*eval*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	goto TAG88977;
	local[0]= NIL;
BLK88973:
	w = local[0];
	local[0]= w;
BLK88959:
	ctx->vsp=local; return(local[0]);}

/*thread-error*/
static pointer F88173thread_error(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT89001;}
	local[0]= NIL;
ENT89001:
ENT89000:
	if (n>4) maerror();
	ctx->vsp=local+1;
	w=(pointer)THREAD_SELF(ctx,0,local+1); /*thread-self*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[14];
	ctx->vsp=local+4;
	w=(pointer)GETPROP(ctx,2,local+2); /*get*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[15];
	local[5]= loadglobal(fqv[16]);
	local[6]= local[1];
	local[7]= fqv[17];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)XFORMAT(ctx,5,local+3); /*format*/
	if (local[0]==NIL) goto IF89048;
	local[3]= local[2];
	local[4]= fqv[18];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,3,local+3); /*format*/
	local[3]= w;
	goto IF89049;
IF89048:
	local[3]= NIL;
IF89049:
	if (argv[2]==NIL) goto IF89059;
	local[3]= local[2];
	local[4]= fqv[19];
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,3,local+3); /*format*/
	local[3]= w;
	goto IF89060;
IF89059:
	local[3]= NIL;
IF89060:
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)TERPRI(ctx,1,local+3); /*terpri*/
	local[3]= fqv[20];
	w = NIL;
	ctx->vsp=local+4;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	w = local[3];
	local[0]= w;
BLK88998:
	ctx->vsp=local; return(local[0]);}

/*thread-top*/
static pointer F88175thread_top(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	w=(pointer)THREAD_SELF(ctx,0,local+0); /*thread-self*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[17];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= local[0];
	local[3]= argv[0];
	local[4]= fqv[14];
	ctx->vsp=local+5;
	w=(pointer)PUTPROP(ctx,3,local+2); /*putprop*/
	local[2]= fqv[21];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,1,local+2,&ftab[2],fqv[22]); /*lisp::install-error-handler*/
	{jmp_buf jb;
	w = fqv[23];
	ctx->vsp=local+2;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT89122;}
WHL89129:
	if (T==NIL) goto WHX89130;
	{jmp_buf jb;
	w = fqv[20];
	ctx->vsp=local+8;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT89136;}
	local[14]= NIL;
	local[15]= fqv[24];
	local[16]= local[1];
	ctx->vsp=local+17;
	w=(pointer)XFORMAT(ctx,3,local+14); /*format*/
	local[14]= w;
	local[15]= argv[0];
	local[16]= T;
	ctx->vsp=local+17;
	w=(*ftab[3])(ctx,3,local+14,&ftab[3],fqv[25]); /*reploop*/
CAT89136:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	goto WHL89129;
WHX89130:
	local[8]= NIL;
BLK89131:
	w = local[8];
CAT89122:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[2]= fqv[26];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[4])(ctx,2,local+2,&ftab[4],fqv[27]); /*warn*/
	local[0]= w;
BLK89081:
	ctx->vsp=local; return(local[0]);}

/*repwin*/
static pointer F88177repwin(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT89162;}
	local[0]= fqv[28];
	ctx->vsp=local+1;
	w=(pointer)GETENV(ctx,1,local+0); /*unix:getenv*/
	local[0]= w;
ENT89162:
ENT89161:
	if (n>2) maerror();
	local[1]= fqv[29];
	local[2]= argv[0];
	local[3]= fqv[30];
	local[4]= local[0];
	local[5]= fqv[31];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(*ftab[5])(ctx,6,local+1,&ftab[5],fqv[32]); /*make-socket-address*/
	local[1]= w;
	local[2]= NIL;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,1,local+3,&ftab[6],fqv[33]); /*make-client-socket-stream*/
	local[3]= w;
	local[4]= fqv[34];
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)AFUNCALL_NO_WAIT(ctx,2,local+4); /*thread-no-wait*/
	local[0]= w;
BLK89159:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___par(ctx,n,argv,env)
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
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF89217;
	local[0]= fqv[36];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[37],w);
	goto IF89218;
IF89217:
	local[0]= fqv[38];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF89218:
	local[0]= fqv[39];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[40];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88227thread_id,fqv[17],fqv[0],fqv[41]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88243thread_priority,fqv[42],fqv[0],fqv[43]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[44],module,F88279,fqv[45]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[46],module,F88431,fqv[47]);
	local[0]= fqv[48];
	local[1]= fqv[49];
	local[2]= fqv[48];
	local[3]= fqv[50];
	local[4]= loadglobal(fqv[51]);
	local[5]= fqv[52];
	local[6]= fqv[53];
	local[7]= fqv[54];
	local[8]= NIL;
	local[9]= fqv[55];
	local[10]= NIL;
	local[11]= fqv[56];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[57];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[7])(ctx,13,local+2,&ftab[7],fqv[58]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88547barrier_synch_init,fqv[59],fqv[48],fqv[60]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88583barrier_synch_add,fqv[61],fqv[48],fqv[62]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88659barrier_synch_remove,fqv[63],fqv[48],fqv[64]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88712barrier_synch_wait,fqv[65],fqv[48],fqv[66]);
	local[0]= fqv[67];
	local[1]= fqv[49];
	local[2]= fqv[67];
	local[3]= fqv[50];
	local[4]= loadglobal(fqv[51]);
	local[5]= fqv[52];
	local[6]= fqv[68];
	local[7]= fqv[54];
	local[8]= NIL;
	local[9]= fqv[55];
	local[10]= NIL;
	local[11]= fqv[56];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[57];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[7])(ctx,13,local+2,&ftab[7],fqv[58]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88853synch_memory_port_read,fqv[13],fqv[67],fqv[69]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88894synch_memory_port_write,fqv[12],fqv[67],fqv[70]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M88924synch_memory_port_init,fqv[59],fqv[67],fqv[71]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[72],module,F88171thread_eval,fqv[73]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[21],module,F88173thread_error,fqv[74]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[34],module,F88175thread_top,fqv[75]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[76],module,F88177repwin,fqv[77]);
	local[0]= fqv[78];
	local[1]= fqv[79];
	ctx->vsp=local+2;
	w=(*ftab[8])(ctx,2,local+0,&ftab[8],fqv[80]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<9; i++) ftab[i]=fcallx;
}
