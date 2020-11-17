/* ./irtutil.c :  entry=irtutil */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtutil.h"
#pragma init (register_irtutil)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtutil();
extern pointer build_quote_vector();
static int register_irtutil()
  { add_module_initializer("___irtutil", ___irtutil);}

static pointer F484forward_message_to();
static pointer F485forward_message_to_all();
static pointer F486permutation();
static pointer F487combination();
static pointer F488mapjoin();
static pointer F489find_extreams();
static pointer F490need_thread();
static pointer F491eus_server();
static pointer F492connect_server_until_success();
static pointer F493format_array();
static pointer F494his2rgb();
static pointer F495hvs2rgb();
static pointer F496rgb2his();
static pointer F497rgb2hvs();
static pointer F498color_category10();
static pointer F499color_category20();
static pointer F500termios_c_iflag();
static pointer F501set_termios_c_iflag();
static pointer F502termios_c_oflag();
static pointer F503set_termios_c_oflag();
static pointer F504termios_c_cflag();
static pointer F505set_termios_c_cflag();
static pointer F506termios_c_lflag();
static pointer F507set_termios_c_lflag();
static pointer F508termios_c_line();
static pointer F509set_termios_c_line();
static pointer F510termios_c_cc();
static pointer F511set_termios_c_cc();
static pointer F512termios_c_ispeed();
static pointer F513set_termios_c_ispeed();
static pointer F514termios_c_ospeed();
static pointer F515set_termios_c_ospeed();
static pointer F516kbhit();
static pointer F517piped_fork_returns_list();
static pointer F518make_robot_model_from_name();

/*forward-message-to*/
static pointer F484forward_message_to(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]==NIL) goto IF520;
	if (argv[1]==NIL) goto IF522;
	local[0]= (pointer)get_sym_func(fqv[0]);
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,3,local+0); /*apply*/
	local[0]= w;
	goto IF523;
IF522:
	local[0]= argv[0];
IF523:
	goto IF521;
IF520:
	if (loadglobal(fqv[1])==NIL) goto IF524;
	local[0]= fqv[2];
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,3,local+0,&ftab[0],fqv[3]); /*warn*/
	local[0]= w;
	goto IF525;
IF524:
	local[0]= NIL;
IF525:
IF521:
	w = local[0];
	local[0]= w;
BLK519:
	ctx->vsp=local; return(local[0]);}

/*forward-message-to-all*/
static pointer F485forward_message_to_all(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (argv[0]==NIL) goto IF527;
	if (argv[1]==NIL) goto IF529;
	local[0]= (pointer)get_sym_func(fqv[4]);
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,3,local+0); /*apply*/
	local[0]= w;
	goto IF530;
IF529:
	local[0]= argv[0];
IF530:
	goto IF528;
IF527:
	if (loadglobal(fqv[1])==NIL) goto IF531;
	local[0]= fqv[5];
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,3,local+0,&ftab[0],fqv[3]); /*warn*/
	local[0]= w;
	goto IF532;
IF531:
	local[0]= NIL;
IF532:
IF528:
	w = local[0];
	local[0]= w;
BLK526:
	ctx->vsp=local; return(local[0]);}

/*send-message**/
static pointer F533(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST535:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[6];
	local[2]= fqv[7];
	local[3]= fqv[8];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	w = local[0];
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK534:
	ctx->vsp=local; return(local[0]);}

/*do-until-key-with-check*/
static pointer F536(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST538:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[9];
	local[2]= fqv[10];
	local[3]= fqv[11];
	local[4]= fqv[12];
	local[5]= fqv[13];
	local[6]= fqv[14];
	local[7]= fqv[15];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[16];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[17];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= local[0];
	local[5]= NIL;
	ctx->vsp=local+6;
	w=(pointer)APPEND(ctx,2,local+4); /*append*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[18];
	local[4]= fqv[19];
	local[5]= fqv[20];
	local[6]= fqv[13];
	local[7]= fqv[14];
	local[8]= fqv[15];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[21];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
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
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	local[5]= fqv[22];
	local[6]= fqv[19];
	local[7]= fqv[23];
	local[8]= fqv[19];
	local[9]= fqv[24];
	local[10]= fqv[24];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
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
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK537:
	ctx->vsp=local; return(local[0]);}

/*do-until-key*/
static pointer F539(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST541:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[25];
	local[2]= fqv[26];
	local[3]= local[0];
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)APPEND(ctx,2,local+3); /*append*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK540:
	ctx->vsp=local; return(local[0]);}

/*do-until-key-with-timer*/
static pointer F542(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST544:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[18];
	local[3]= local[1];
	local[4]= fqv[27];
	local[5]= fqv[28];
	local[6]= fqv[29];
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
	local[3]= w;
	local[4]= fqv[25];
	local[5]= fqv[30];
	local[6]= fqv[0];
	local[7]= local[1];
	local[8]= fqv[31];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= local[0];
	local[7]= NIL;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,2,local+6); /*append*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK543:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M545mtimer_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[32];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	w = argv[0];
	local[0]= w;
BLK546:
	ctx->vsp=local; return(local[0]);}

/*:start*/
static pointer M547mtimer_start(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	w=(pointer)GETTIMEOFDAY(ctx,0,local+0); /*unix:gettimeofday*/
	argv[0]->c.obj.iv[0] = w;
	w = argv[0]->c.obj.iv[0];
	local[0]= w;
BLK548:
	ctx->vsp=local; return(local[0]);}

/*:stop*/
static pointer M549mtimer_stop(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	ctx->vsp=local+1;
	w=(pointer)GETTIMEOFDAY(ctx,0,local+1); /*unix:gettimeofday*/
	local[0] = w;
	local[1]= loadglobal(fqv[33]);
	local[2]= (pointer)get_sym_func(fqv[34]);
	local[3]= local[0];
	local[4]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+5;
	w=(pointer)MAP(ctx,4,local+1); /*map*/
	local[0] = w;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= makeflt(1.0000000000000000000000e+06);
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)PLUS(ctx,2,local+1); /*+*/
	local[0]= w;
BLK550:
	ctx->vsp=local; return(local[0]);}

/*permutation*/
static pointer F486permutation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)LESSP(ctx,2,local+0); /*<*/
	if (w==NIL) goto IF552;
	local[0]= fqv[35];
	goto IF553;
IF552:
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO554,env,argv,local);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)MAPCAN(ctx,2,local+0); /*mapcan*/
	local[0]= w;
IF553:
	w = local[0];
	local[0]= w;
BLK551:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO554(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO555,env,argv,local);
	local[1]= argv[0];
	local[2]= env->c.clo.env1[0];
	local[3]= fqv[36];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(*ftab[1])(ctx,4,local+1,&ftab[1],fqv[37]); /*remove*/
	local[1]= w;
	local[2]= env->c.clo.env1[1];
	ctx->vsp=local+3;
	w=(pointer)SUB1(ctx,1,local+2); /*1-*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)F486permutation(ctx,2,local+1); /*permutation*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO555(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	w = argv[0];
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*combination*/
static pointer F487combination(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)LESSP(ctx,2,local+0); /*<*/
	if (w==NIL) goto IF557;
	local[0]= fqv[38];
	goto IF558;
IF557:
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO559,env,argv,local);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)MAPCAN(ctx,2,local+0); /*mapcan*/
	local[0]= w;
IF558:
	w = local[0];
	local[0]= w;
BLK556:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO559(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO560,env,argv,local);
	local[1]= argv[0];
	local[2]= env->c.clo.env1[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[39]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	local[2]= env->c.clo.env1[1];
	ctx->vsp=local+3;
	w=(pointer)SUB1(ctx,1,local+2); /*1-*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)F487combination(ctx,2,local+1); /*combination*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MAPCAN(ctx,2,local+0); /*mapcan*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO560(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env1[0];
	w = argv[0];
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*mapjoin*/
static pointer F488mapjoin(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO562,env,argv,local);
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)MAPCAN(ctx,2,local+0); /*mapcan*/
	local[0]= w;
BLK561:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO562(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO563,env,argv,local);
	local[1]= env->c.clo.env1[2];
	ctx->vsp=local+2;
	w=(pointer)MAPCAR(ctx,2,local+0); /*mapcar*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO563(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env0->c.clo.env1[0];
	local[1]= env->c.clo.env1[0];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)FUNCALL(ctx,3,local+0); /*funcall*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*find-extreams*/
static pointer F489find_extreams(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[40], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY565;
	local[0] = (pointer)get_sym_func(fqv[41]);
KEY565:
	if (n & (1<<1)) goto KEY566;
	local[1] = (pointer)get_sym_func(fqv[42]);
KEY566:
	if (n & (1<<2)) goto KEY567;
	local[2] = (pointer)get_sym_func(fqv[43]);
KEY567:
	local[3]= local[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)FUNCALL(ctx,2,local+3); /*funcall*/
	local[3]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	local[5]= local[4];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	local[5]= w;
	local[6]= NIL;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.cdr;
WHL569:
	if (local[7]==NIL) goto WHX570;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=local[7];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7] = (w)->c.cons.cdr;
	w = local[8];
	local[6] = w;
	local[8]= local[0];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,2,local+8); /*funcall*/
	local[8]= w;
	local[9]= local[2];
	local[10]= local[8];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)FUNCALL(ctx,3,local+9); /*funcall*/
	if (w==NIL) goto CON574;
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	local[5] = w;
	local[3] = local[8];
	local[4] = local[6];
	local[9]= local[4];
	goto CON573;
CON574:
	local[9]= local[1];
	local[10]= local[8];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)FUNCALL(ctx,3,local+9); /*funcall*/
	if (w==NIL) goto CON575;
	local[9]= local[6];
	w = local[5];
	ctx->vsp=local+10;
	local[5] = cons(ctx,local[9],w);
	local[9]= local[5];
	goto CON573;
CON575:
	local[9]= NIL;
CON573:
	w = local[9];
	goto WHL569;
WHX570:
	local[8]= NIL;
BLK571:
	w = NIL;
	w = local[5];
	local[0]= w;
BLK564:
	ctx->vsp=local; return(local[0]);}

/*need-thread*/
static pointer F490need_thread(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT579;}
	local[0]= makeint((eusinteger_t)512L);
	{ eusinteger_t i,j;
		j=intval(makeint((eusinteger_t)1024L)); i=intval(local[0]);
		local[0]=(makeint(i * j));}
ENT579:
	if (n>=3) { local[1]=(argv[2]); goto ENT578;}
	local[1]= local[0];
ENT578:
ENT577:
	if (n>3) maerror();
	local[2]= NIL;
	local[3]= NIL;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)FREE_THREADS(ctx,0,local+5); /*system::free-threads*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[2] = w;
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)GREATERP(ctx,2,local+4); /*>*/
	if (w==NIL) goto IF580;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[2];
WHL583:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX584;
	local[6]= makeint((eusinteger_t)1L);
	local[7]= local[0];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)MAKE_THREAD(ctx,3,local+6); /*system:make-thread*/
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO586,env,argv,local);
	ctx->vsp=local+7;
	w=(pointer)AFUNCALL(ctx,1,local+6); /*thread*/
	local[6]= w;
	w = local[3];
	ctx->vsp=local+7;
	local[3] = cons(ctx,local[6],w);
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL583;
WHX584:
	local[6]= NIL;
BLK585:
	w = NIL;
	local[4]= NIL;
	local[5]= local[3];
WHL588:
	if (local[5]==NIL) goto WHX589;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)WAIT_AFUNCALL(ctx,1,local+6); /*system:wait-thread*/
	goto WHL588;
WHX589:
	local[6]= NIL;
BLK590:
	w = NIL;
	local[4]= w;
	goto IF581;
IF580:
	local[4]= NIL;
IF581:
	w = local[4];
	local[0]= w;
BLK576:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO586(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	w = NIL;
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*eus-server*/
static pointer F491eus_server(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT594;}
	local[0]= makeint((eusinteger_t)6666L);
ENT594:
ENT593:
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[44], &argv[1], n-1, local+1, 0);
	if (n & (1<<0)) goto KEY595;
	ctx->vsp=local+2;
	w=(pointer)GETHOSTNAME(ctx,0,local+2); /*unix:gethostname*/
	local[1] = w;
KEY595:
	local[2]= fqv[45];
	local[3]= local[1];
	local[4]= fqv[46];
	local[5]= makeint((eusinteger_t)2L);
	local[6]= fqv[47];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(*ftab[3])(ctx,6,local+2,&ftab[3],fqv[48]); /*make-socket-address*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[4])(ctx,1,local+2,&ftab[4],fqv[49]); /*make-socket-port*/
	local[2]= w;
	local[3]= local[2];
	local[4]= loadglobal(fqv[50]);
	ctx->vsp=local+5;
	w=(pointer)DERIVEDP(ctx,2,local+3); /*derivedp*/
	if (w==NIL) goto CON597;
	local[3]= loadglobal(fqv[51]);
	local[4]= fqv[52];
	local[5]= local[2];
	local[6]= fqv[53];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,5,local+3); /*send*/
	local[3]= w;
	goto CON596;
CON597:
	local[3]= NIL;
	local[4]= fqv[54];
	local[5]= local[0];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,4,local+3); /*format*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto CON596;
CON598:
	local[3]= NIL;
CON596:
	w = local[3];
	local[0]= w;
BLK592:
	ctx->vsp=local; return(local[0]);}

/*connect-server-until-success*/
static pointer F492connect_server_until_success(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[55], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY600;
	local[2]= argv[1];
	local[3]= makeint((eusinteger_t)20L);
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[0] = w;
KEY600:
	if (n & (1<<1)) goto KEY601;
	local[1] = NIL;
KEY601:
	local[2]= NIL;
	local[3]= argv[1];
WHL602:
	local[4]= argv[0];
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(*ftab[5])(ctx,2,local+4,&ftab[5],fqv[56]); /*connect-server*/
	local[2] = w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)STREAMP(ctx,1,local+4); /*streamp*/
	if (w!=NIL) goto WHX603;
	local[4]= argv[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,2,local+4); /*<*/
	if (w==NIL) goto WHX603;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	argv[1] = w;
	goto WHL602;
WHX603:
	local[4]= NIL;
BLK604:
	local[4]= argv[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,2,local+4); /*<*/
	if (w==NIL) goto CON606;
	local[4]= fqv[57];
	local[5]= makeint((eusinteger_t)27L);
	local[6]= argv[0];
	local[7]= argv[1];
	local[8]= makeint((eusinteger_t)27L);
	ctx->vsp=local+9;
	w=(*ftab[0])(ctx,5,local+4,&ftab[0],fqv[3]); /*warn*/
	if (local[1]==NIL) goto IF607;
	local[4]= local[2];
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,2,local+4); /*list*/
	local[4]= w;
	goto IF608;
IF607:
	local[4]= local[2];
IF608:
	goto CON605;
CON606:
	local[4]= fqv[58];
	local[5]= makeint((eusinteger_t)27L);
	local[6]= argv[0];
	local[7]= local[3];
	local[8]= local[0];
	local[9]= makeint((eusinteger_t)1L);
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)27L);
	ctx->vsp=local+10;
	w=(*ftab[0])(ctx,6,local+4,&ftab[0],fqv[3]); /*warn*/
	local[4]= NIL;
	goto CON605;
CON609:
	local[4]= NIL;
CON605:
	w = local[4];
	local[0]= w;
BLK599:
	ctx->vsp=local; return(local[0]);}

/*format-array*/
static pointer F493format_array(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT616;}
	local[0]= fqv[59];
ENT616:
	if (n>=3) { local[1]=(argv[2]); goto ENT615;}
	local[1]= makeint((eusinteger_t)7L);
ENT615:
	if (n>=4) { local[2]=(argv[3]); goto ENT614;}
	local[2]= makeint((eusinteger_t)3L);
ENT614:
	if (n>=5) { local[3]=(argv[4]); goto ENT613;}
	local[3]= loadglobal(fqv[60]);
ENT613:
	if (n>=6) { local[4]=(argv[5]); goto ENT612;}
	local[4]= T;
ENT612:
ENT611:
	if (n>6) maerror();
	local[5]= argv[0];
	local[6]= fqv[61];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	local[6]= local[5];
	if (fqv[62]!=local[6]) goto IF618;
	local[6]= NIL;
	local[7]= fqv[63];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	goto IF619;
IF618:
	local[6]= local[5];
	if (fqv[64]!=local[6]) goto IF620;
	local[6]= NIL;
	local[7]= fqv[65];
	local[8]= local[1];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,4,local+6); /*format*/
	local[6]= w;
	goto IF621;
IF620:
	local[6]= NIL;
IF621:
IF619:
	w = local[6];
	local[5]= w;
	local[6]= NIL;
	local[7]= fqv[66];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	local[7]= NIL;
	local[8]= local[6];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,3,local+7); /*format*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[7]= w;
	local[8]= argv[0];
	local[9]= loadglobal(fqv[67]);
	ctx->vsp=local+10;
	w=(pointer)DERIVEDP(ctx,2,local+8); /*derivedp*/
	if (w==NIL) goto CON623;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(pointer)LENGTH(ctx,1,local+9); /*length*/
	local[9]= w;
WHL625:
	local[10]= local[8];
	w = local[9];
	if ((eusinteger_t)local[10] >= (eusinteger_t)w) goto WHX626;
	local[10]= NIL;
	local[11]= local[5];
	local[12]= argv[0];
	local[13]= local[8];
	ctx->vsp=local+14;
	w=(pointer)ELT(ctx,2,local+12); /*elt*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,3,local+10); /*format*/
	local[10]= w;
	w = local[7];
	ctx->vsp=local+11;
	local[7] = cons(ctx,local[10],w);
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[8] = w;
	goto WHL625;
WHX626:
	local[10]= NIL;
BLK627:
	w = NIL;
	if (local[4]==NIL) goto IF628;
	local[8]= fqv[68];
	w = local[7];
	ctx->vsp=local+9;
	local[7] = cons(ctx,local[8],w);
	local[8]= local[7];
	goto IF629;
IF628:
	local[8]= NIL;
IF629:
	goto CON622;
CON623:
	local[8]= argv[0];
	local[9]= loadglobal(fqv[69]);
	ctx->vsp=local+10;
	w=(pointer)DERIVEDP(ctx,2,local+8); /*derivedp*/
	if (w==NIL) goto CON630;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(*ftab[6])(ctx,1,local+9,&ftab[6],fqv[70]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
WHL632:
	local[10]= local[8];
	w = local[9];
	if ((eusinteger_t)local[10] >= (eusinteger_t)w) goto WHX633;
	local[10]= local[8];
	local[11]= makeint((eusinteger_t)0L);
	ctx->vsp=local+12;
	w=(*ftab[7])(ctx,2,local+10,&ftab[7],fqv[71]); /*/=*/
	if (w==NIL) goto IF635;
	local[10]= NIL;
	local[11]= local[6];
	local[12]= fqv[72];
	ctx->vsp=local+13;
	w=(pointer)XFORMAT(ctx,3,local+10); /*format*/
	local[10]= w;
	w = local[7];
	ctx->vsp=local+11;
	local[7] = cons(ctx,local[10],w);
	local[10]= local[7];
	goto IF636;
IF635:
	local[10]= NIL;
IF636:
	local[10]= makeint((eusinteger_t)0L);
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(*ftab[6])(ctx,1,local+11,&ftab[6],fqv[70]); /*array-dimensions*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
WHL638:
	local[12]= local[10];
	w = local[11];
	if ((eusinteger_t)local[12] >= (eusinteger_t)w) goto WHX639;
	local[12]= NIL;
	local[13]= local[5];
	local[14]= argv[0];
	local[15]= local[8];
	local[16]= local[10];
	ctx->vsp=local+17;
	w=(pointer)AREF(ctx,3,local+14); /*aref*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)XFORMAT(ctx,3,local+12); /*format*/
	local[12]= w;
	w = local[7];
	ctx->vsp=local+13;
	local[7] = cons(ctx,local[12],w);
	local[12]= local[10];
	ctx->vsp=local+13;
	w=(pointer)ADD1(ctx,1,local+12); /*1+*/
	local[10] = w;
	goto WHL638;
WHX639:
	local[12]= NIL;
BLK640:
	w = NIL;
	if (local[4]==NIL) goto IF641;
	local[10]= fqv[73];
	w = local[7];
	ctx->vsp=local+11;
	local[7] = cons(ctx,local[10],w);
	local[10]= local[7];
	goto IF642;
IF641:
	local[10]= NIL;
IF642:
	local[10]= local[8];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[8] = w;
	goto WHL632;
WHX633:
	local[10]= NIL;
BLK634:
	w = NIL;
	local[8]= w;
	goto CON622;
CON630:
	local[8]= NIL;
CON622:
	local[8]= local[3];
	local[9]= (pointer)get_sym_func(fqv[74]);
	local[10]= loadglobal(fqv[75]);
	local[11]= local[7];
	ctx->vsp=local+12;
	w=(pointer)NREVERSE(ctx,1,local+11); /*nreverse*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)APPLY(ctx,3,local+9); /*apply*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)XFORMAT(ctx,2,local+8); /*format*/
	local[8]= w;
	if (local[3]==NIL) goto IF643;
	local[9]= argv[0];
	goto IF644;
IF643:
	local[9]= local[8];
IF644:
	w = local[9];
	local[0]= w;
BLK610:
	ctx->vsp=local; return(local[0]);}

/*with-gensyms*/
static pointer F645(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST647:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[18];
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,CLO648,env,argv,local);
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)MAPCAR(ctx,2,local+2); /*mapcar*/
	local[2]= w;
	local[3]= local[0];
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)APPEND(ctx,2,local+3); /*append*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK646:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO648(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[76];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M649interpolator_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[4] = makeflt(0.0000000000000000000000e+00);
	argv[0]->c.obj.iv[6] = makeflt(0.0000000000000000000000e+00);
	argv[0]->c.obj.iv[7] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[5] = makeint((eusinteger_t)0L);
	argv[0]->c.obj.iv[8] = NIL;
	w = argv[0];
	local[0]= w;
BLK650:
	ctx->vsp=local; return(local[0]);}

/*:reset*/
static pointer M651interpolator_reset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST653:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[77], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY654;
	local[3]= argv[0];
	local[4]= fqv[78];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[1] = w;
KEY654:
	if (n & (1<<1)) goto KEY655;
	local[3]= argv[0];
	local[4]= fqv[79];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[2] = w;
KEY655:
	argv[0]->c.obj.iv[1] = local[1];
	argv[0]->c.obj.iv[2] = local[2];
	local[3]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[7])(ctx,2,local+3,&ftab[7],fqv[71]); /*/=*/
	if (w==NIL) goto IF656;
	local[3]= makeint((eusinteger_t)1L);
	local[4]= fqv[80];
	ctx->vsp=local+5;
	w=(*ftab[8])(ctx,2,local+3,&ftab[8],fqv[81]); /*warning-message*/
	local[3]= w;
	goto IF657;
IF656:
	local[3]= NIL;
IF657:
	argv[0]->c.obj.iv[4] = makeflt(0.0000000000000000000000e+00);
	argv[0]->c.obj.iv[6] = makeflt(0.0000000000000000000000e+00);
	argv[0]->c.obj.iv[7] = makeint((eusinteger_t)0L);
	local[3]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SUB1(ctx,1,local+3); /*1-*/
	argv[0]->c.obj.iv[5] = w;
	argv[0]->c.obj.iv[8] = NIL;
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK652:
	ctx->vsp=local; return(local[0]);}

/*:position-list*/
static pointer M658interpolator_position_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK659:
	ctx->vsp=local; return(local[0]);}

/*:position*/
static pointer M660interpolator_position(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK661:
	ctx->vsp=local; return(local[0]);}

/*:time-list*/
static pointer M662interpolator_time_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK663:
	ctx->vsp=local; return(local[0]);}

/*:time*/
static pointer M664interpolator_time(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK665:
	ctx->vsp=local; return(local[0]);}

/*:segment-time*/
static pointer M666interpolator_segment_time(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[6];
	local[0]= w;
BLK667:
	ctx->vsp=local; return(local[0]);}

/*:segment*/
static pointer M668interpolator_segment(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[7];
	local[0]= w;
BLK669:
	ctx->vsp=local; return(local[0]);}

/*:segment-num*/
static pointer M670interpolator_segment_num(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[5];
	local[0]= w;
BLK671:
	ctx->vsp=local; return(local[0]);}

/*:interpolatingp*/
static pointer M672interpolator_interpolatingp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK673:
	ctx->vsp=local; return(local[0]);}

/*:start-interpolation*/
static pointer M674interpolator_start_interpolation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[8] = T;
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK675:
	ctx->vsp=local; return(local[0]);}

/*:stop-interpolation*/
static pointer M676interpolator_stop_interpolation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	argv[0]->c.obj.iv[8] = NIL;
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK677:
	ctx->vsp=local; return(local[0]);}

/*:pass-time*/
static pointer M678interpolator_pass_time(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[0]->c.obj.iv[8]==NIL) goto IF680;
	local[0]= argv[0];
	local[1]= fqv[82];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	argv[0]->c.obj.iv[3] = w;
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)PLUS(ctx,2,local+0); /*+*/
	argv[0]->c.obj.iv[4] = w;
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= argv[0]->c.obj.iv[7];
	if (makeint((eusinteger_t)0L)!=local[1]) goto IF682;
	local[1]= makeint((eusinteger_t)0L);
	goto IF683;
IF682:
	local[1]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+2;
	w=(pointer)SUB1(ctx,1,local+1); /*1-*/
	local[1]= w;
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(pointer)NTH(ctx,2,local+1); /*nth*/
	local[1]= w;
IF683:
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,2,local+0); /*-*/
	argv[0]->c.obj.iv[6] = w;
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= argv[0]->c.obj.iv[7];
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(pointer)NTH(ctx,2,local+1); /*nth*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GREATERP(ctx,2,local+0); /*>*/
	if (w==NIL) goto IF684;
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= argv[0]->c.obj.iv[7];
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(pointer)NTH(ctx,2,local+1); /*nth*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,2,local+0); /*-*/
	argv[0]->c.obj.iv[6] = w;
	local[0]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+1;
	w=(pointer)ADD1(ctx,1,local+0); /*1+*/
	argv[0]->c.obj.iv[7] = w;
	local[0]= argv[0]->c.obj.iv[7];
	goto IF685;
IF684:
	local[0]= NIL;
IF685:
	local[0]= argv[0]->c.obj.iv[7];
	w = argv[0]->c.obj.iv[5];
	if ((eusinteger_t)local[0] < (eusinteger_t)w) goto IF686;
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(*ftab[9])(ctx,1,local+0,&ftab[9],fqv[83]); /*last*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0]->c.obj.iv[3] = (w)->c.cons.car;
	local[0]= argv[0];
	local[1]= fqv[84];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto IF687;
IF686:
	local[0]= NIL;
IF687:
	local[0]= argv[0]->c.obj.iv[3];
	goto IF681;
IF680:
	local[0]= NIL;
IF681:
	w = local[0];
	local[0]= w;
BLK679:
	ctx->vsp=local; return(local[0]);}

/*:interpolation*/
static pointer M688linear_interpolator_interpolation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[7];
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(pointer)NTH(ctx,2,local+0); /*nth*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+2;
	w=(pointer)ADD1(ctx,1,local+1); /*1+*/
	local[1]= w;
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)NTH(ctx,2,local+1); /*nth*/
	local[1]= w;
	local[2]= argv[0]->c.obj.iv[7];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)NTH(ctx,2,local+2); /*nth*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[7];
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[3] <= (eusinteger_t)w) goto IF690;
	local[3]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+4;
	w=(pointer)SUB1(ctx,1,local+3); /*1-*/
	local[3]= w;
	local[4]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+5;
	w=(pointer)NTH(ctx,2,local+3); /*nth*/
	local[3]= w;
	goto IF691;
IF690:
	local[3]= makeint((eusinteger_t)0L);
IF691:
	ctx->vsp=local+4;
	w=(pointer)MINUS(ctx,2,local+2); /*-*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[6];
	local[4]= local[2];
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[4]= w;
	local[5]= local[4];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)SCALEVEC(ctx,2,local+5); /*scale*/
	local[0] = w;
	local[5]= local[3];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)QUOTIENT(ctx,2,local+5); /*/*/
	local[5]= w;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)SCALEVEC(ctx,2,local+5); /*scale*/
	local[1] = w;
	local[5]= local[0];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)VPLUS(ctx,2,local+5); /*v+*/
	local[0]= w;
BLK689:
	ctx->vsp=local; return(local[0]);}

/*:velocity*/
static pointer M692minjerk_interpolator_velocity(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[9];
	local[0]= w;
BLK693:
	ctx->vsp=local; return(local[0]);}

/*:velocity-list*/
static pointer M694minjerk_interpolator_velocity_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[11];
	local[0]= w;
BLK695:
	ctx->vsp=local; return(local[0]);}

/*:acceleration*/
static pointer M696minjerk_interpolator_acceleration(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[10];
	local[0]= w;
BLK697:
	ctx->vsp=local; return(local[0]);}

/*:acceleration-list*/
static pointer M698minjerk_interpolator_acceleration_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[12];
	local[0]= w;
BLK699:
	ctx->vsp=local; return(local[0]);}

/*:reset*/
static pointer M700minjerk_interpolator_reset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST702:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	ctx->vsp=local+1;
	n=parsekeyparams(fqv[85], &argv[2], n-2, local+1, 1);
	if (n & (1<<0)) goto KEY703;
	local[3]= argv[0];
	local[4]= fqv[86];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[1] = w;
KEY703:
	if (n & (1<<1)) goto KEY704;
	local[3]= argv[0];
	local[4]= fqv[87];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[2] = w;
KEY704:
	local[3]= (pointer)get_sym_func(fqv[8]);
	local[4]= argv[0];
	local[5]= *(ovafptr(argv[1],fqv[88]));
	local[6]= fqv[84];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,5,local+3); /*apply*/
	if (local[1]==NIL) goto IF705;
	local[3]= local[1];
	goto IF706;
IF705:
	local[3]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[3]= w;
	local[4]= fqv[89];
	local[5]= loadglobal(fqv[90]);
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,2,local+5); /*instantiate*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[10])(ctx,3,local+3,&ftab[10],fqv[91]); /*make-list*/
	local[3]= w;
IF706:
	argv[0]->c.obj.iv[11] = local[3];
	if (local[2]==NIL) goto IF707;
	local[3]= local[2];
	goto IF708;
IF707:
	local[3]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[3]= w;
	local[4]= fqv[89];
	local[5]= loadglobal(fqv[90]);
	w=argv[0]->c.obj.iv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,2,local+5); /*instantiate*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[10])(ctx,3,local+3,&ftab[10],fqv[91]); /*make-list*/
	local[3]= w;
IF708:
	argv[0]->c.obj.iv[12] = local[3];
	w = argv[0]->c.obj.iv[12];
	local[0]= w;
BLK701:
	ctx->vsp=local; return(local[0]);}

/*:interpolation*/
static pointer M709minjerk_interpolator_interpolation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[7];
	local[1]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(pointer)NTH(ctx,2,local+0); /*nth*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+2;
	w=(pointer)ADD1(ctx,1,local+1); /*1+*/
	local[1]= w;
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)NTH(ctx,2,local+1); /*nth*/
	local[1]= w;
	local[2]= argv[0]->c.obj.iv[7];
	local[3]= argv[0]->c.obj.iv[11];
	ctx->vsp=local+4;
	w=(pointer)NTH(ctx,2,local+2); /*nth*/
	local[2]= w;
	local[3]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[3]= w;
	local[4]= argv[0]->c.obj.iv[11];
	ctx->vsp=local+5;
	w=(pointer)NTH(ctx,2,local+3); /*nth*/
	local[3]= w;
	local[4]= argv[0]->c.obj.iv[7];
	local[5]= argv[0]->c.obj.iv[12];
	ctx->vsp=local+6;
	w=(pointer)NTH(ctx,2,local+4); /*nth*/
	local[4]= w;
	local[5]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[5]= w;
	local[6]= argv[0]->c.obj.iv[12];
	ctx->vsp=local+7;
	w=(pointer)NTH(ctx,2,local+5); /*nth*/
	local[5]= w;
	local[6]= argv[0]->c.obj.iv[7];
	local[7]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+8;
	w=(pointer)NTH(ctx,2,local+6); /*nth*/
	local[6]= w;
	local[7]= argv[0]->c.obj.iv[7];
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[7] <= (eusinteger_t)w) goto IF711;
	local[7]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+8;
	w=(pointer)SUB1(ctx,1,local+7); /*1-*/
	local[7]= w;
	local[8]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+9;
	w=(pointer)NTH(ctx,2,local+7); /*nth*/
	local[7]= w;
	goto IF712;
IF711:
	local[7]= makeint((eusinteger_t)0L);
IF712:
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[6];
	local[9]= local[6];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,3,local+8); /***/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)QUOTIENT(ctx,2,local+7); /*/*/
	local[7]= w;
	local[8]= local[1];
	local[9]= (pointer)get_sym_func(fqv[92]);
	local[10]= local[0];
	local[11]= local[6];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)SCALEVEC(ctx,2,local+11); /*scale*/
	local[11]= w;
	local[12]= local[6];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(pointer)TIMES(ctx,2,local+12); /***/
	local[12]= w;
	local[13]= makeflt(5.0000000000000000000000e-01);
	local[14]= local[4];
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)SCALEVEC(ctx,2,local+12); /*scale*/
	local[12]= w;
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,3,local+10); /*list*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(*ftab[11])(ctx,2,local+9,&ftab[11],fqv[93]); /*reduce*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)VMINUS(ctx,2,local+8); /*v-*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SCALEVEC(ctx,2,local+7); /*scale*/
	local[7]= w;
	local[8]= makeflt(1.0000000000000000000000e+00);
	local[9]= local[6];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)QUOTIENT(ctx,2,local+8); /*/*/
	local[8]= w;
	local[9]= local[3];
	local[10]= local[2];
	local[11]= local[6];
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)SCALEVEC(ctx,2,local+11); /*scale*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)VPLUS(ctx,2,local+10); /*v+*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)VMINUS(ctx,2,local+9); /*v-*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SCALEVEC(ctx,2,local+8); /*scale*/
	local[8]= w;
	local[9]= makeflt(1.0000000000000000000000e+00);
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,1,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	local[10]= local[5];
	local[11]= local[4];
	ctx->vsp=local+12;
	w=(pointer)VMINUS(ctx,2,local+10); /*v-*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)SCALEVEC(ctx,2,local+9); /*scale*/
	local[9]= w;
	local[10]= local[0];
	local[11]= local[2];
	local[12]= makeflt(5.0000000000000000000000e-01);
	local[13]= local[4];
	ctx->vsp=local+14;
	w=(pointer)SCALEVEC(ctx,2,local+12); /*scale*/
	local[12]= w;
	local[13]= makeint((eusinteger_t)10L);
	local[14]= local[7];
	ctx->vsp=local+15;
	w=(pointer)SCALEVEC(ctx,2,local+13); /*scale*/
	local[13]= w;
	local[14]= makeint((eusinteger_t)4L);
	local[15]= local[8];
	ctx->vsp=local+16;
	w=(pointer)SCALEVEC(ctx,2,local+14); /*scale*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)VMINUS(ctx,2,local+13); /*v-*/
	local[13]= w;
	local[14]= makeflt(5.0000000000000000000000e-01);
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)SCALEVEC(ctx,2,local+14); /*scale*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)VPLUS(ctx,2,local+13); /*v+*/
	local[13]= w;
	local[14]= makeflt(1.0000000000000000000000e+00);
	local[15]= local[6];
	ctx->vsp=local+16;
	w=(pointer)QUOTIENT(ctx,2,local+14); /*/*/
	local[14]= w;
	local[15]= makeint((eusinteger_t)-15L);
	local[16]= local[7];
	ctx->vsp=local+17;
	w=(pointer)SCALEVEC(ctx,2,local+15); /*scale*/
	local[15]= w;
	local[16]= makeint((eusinteger_t)7L);
	local[17]= local[8];
	ctx->vsp=local+18;
	w=(pointer)SCALEVEC(ctx,2,local+16); /*scale*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)VPLUS(ctx,2,local+15); /*v+*/
	local[15]= w;
	local[16]= local[9];
	ctx->vsp=local+17;
	w=(pointer)VMINUS(ctx,2,local+15); /*v-*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)SCALEVEC(ctx,2,local+14); /*scale*/
	local[14]= w;
	local[15]= makeflt(1.0000000000000000000000e+00);
	local[16]= local[6];
	local[17]= local[6];
	ctx->vsp=local+18;
	w=(pointer)QUOTIENT(ctx,3,local+15); /*/*/
	local[15]= w;
	local[16]= makeint((eusinteger_t)6L);
	local[17]= local[7];
	ctx->vsp=local+18;
	w=(pointer)SCALEVEC(ctx,2,local+16); /*scale*/
	local[16]= w;
	local[17]= makeint((eusinteger_t)-3L);
	local[18]= local[8];
	ctx->vsp=local+19;
	w=(pointer)SCALEVEC(ctx,2,local+17); /*scale*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)VPLUS(ctx,2,local+16); /*v+*/
	local[16]= w;
	local[17]= makeflt(5.0000000000000000000000e-01);
	local[18]= local[9];
	ctx->vsp=local+19;
	w=(pointer)SCALEVEC(ctx,2,local+17); /*scale*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)VPLUS(ctx,2,local+16); /*v+*/
	local[16]= w;
	ctx->vsp=local+17;
	w=(pointer)SCALEVEC(ctx,2,local+15); /*scale*/
	local[15]= w;
	local[16]= (pointer)get_sym_func(fqv[92]);
	local[17]= local[10];
	local[18]= argv[0]->c.obj.iv[6];
	local[19]= makeint((eusinteger_t)1L);
	ctx->vsp=local+20;
	w=(*ftab[12])(ctx,2,local+18,&ftab[12],fqv[94]); /*expt*/
	local[18]= w;
	local[19]= local[11];
	ctx->vsp=local+20;
	w=(pointer)SCALEVEC(ctx,2,local+18); /*scale*/
	local[18]= w;
	local[19]= argv[0]->c.obj.iv[6];
	local[20]= makeint((eusinteger_t)2L);
	ctx->vsp=local+21;
	w=(*ftab[12])(ctx,2,local+19,&ftab[12],fqv[94]); /*expt*/
	local[19]= w;
	local[20]= local[12];
	ctx->vsp=local+21;
	w=(pointer)SCALEVEC(ctx,2,local+19); /*scale*/
	local[19]= w;
	local[20]= argv[0]->c.obj.iv[6];
	local[21]= makeint((eusinteger_t)3L);
	ctx->vsp=local+22;
	w=(*ftab[12])(ctx,2,local+20,&ftab[12],fqv[94]); /*expt*/
	local[20]= w;
	local[21]= local[13];
	ctx->vsp=local+22;
	w=(pointer)SCALEVEC(ctx,2,local+20); /*scale*/
	local[20]= w;
	local[21]= argv[0]->c.obj.iv[6];
	local[22]= makeint((eusinteger_t)4L);
	ctx->vsp=local+23;
	w=(*ftab[12])(ctx,2,local+21,&ftab[12],fqv[94]); /*expt*/
	local[21]= w;
	local[22]= local[14];
	ctx->vsp=local+23;
	w=(pointer)SCALEVEC(ctx,2,local+21); /*scale*/
	local[21]= w;
	local[22]= argv[0]->c.obj.iv[6];
	local[23]= makeint((eusinteger_t)5L);
	ctx->vsp=local+24;
	w=(*ftab[12])(ctx,2,local+22,&ftab[12],fqv[94]); /*expt*/
	local[22]= w;
	local[23]= local[15];
	ctx->vsp=local+24;
	w=(pointer)SCALEVEC(ctx,2,local+22); /*scale*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)LIST(ctx,6,local+17); /*list*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(*ftab[11])(ctx,2,local+16,&ftab[11],fqv[93]); /*reduce*/
	argv[0]->c.obj.iv[3] = w;
	local[16]= (pointer)get_sym_func(fqv[92]);
	local[17]= local[11];
	local[18]= argv[0]->c.obj.iv[6];
	local[19]= makeint((eusinteger_t)1L);
	ctx->vsp=local+20;
	w=(*ftab[12])(ctx,2,local+18,&ftab[12],fqv[94]); /*expt*/
	local[18]= w;
	local[19]= local[12];
	ctx->vsp=local+20;
	w=(pointer)SCALEVEC(ctx,2,local+18); /*scale*/
	local[18]= w;
	local[19]= argv[0]->c.obj.iv[6];
	local[20]= makeint((eusinteger_t)2L);
	ctx->vsp=local+21;
	w=(*ftab[12])(ctx,2,local+19,&ftab[12],fqv[94]); /*expt*/
	local[19]= w;
	local[20]= local[13];
	ctx->vsp=local+21;
	w=(pointer)SCALEVEC(ctx,2,local+19); /*scale*/
	local[19]= w;
	local[20]= argv[0]->c.obj.iv[6];
	local[21]= makeint((eusinteger_t)3L);
	ctx->vsp=local+22;
	w=(*ftab[12])(ctx,2,local+20,&ftab[12],fqv[94]); /*expt*/
	local[20]= w;
	local[21]= local[14];
	ctx->vsp=local+22;
	w=(pointer)SCALEVEC(ctx,2,local+20); /*scale*/
	local[20]= w;
	local[21]= argv[0]->c.obj.iv[6];
	local[22]= makeint((eusinteger_t)4L);
	ctx->vsp=local+23;
	w=(*ftab[12])(ctx,2,local+21,&ftab[12],fqv[94]); /*expt*/
	local[21]= w;
	local[22]= local[15];
	ctx->vsp=local+23;
	w=(pointer)SCALEVEC(ctx,2,local+21); /*scale*/
	local[21]= w;
	ctx->vsp=local+22;
	w=(pointer)LIST(ctx,5,local+17); /*list*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(*ftab[11])(ctx,2,local+16,&ftab[11],fqv[93]); /*reduce*/
	argv[0]->c.obj.iv[9] = w;
	local[16]= (pointer)get_sym_func(fqv[92]);
	local[17]= local[12];
	local[18]= argv[0]->c.obj.iv[6];
	local[19]= makeint((eusinteger_t)1L);
	ctx->vsp=local+20;
	w=(*ftab[12])(ctx,2,local+18,&ftab[12],fqv[94]); /*expt*/
	local[18]= w;
	local[19]= local[13];
	ctx->vsp=local+20;
	w=(pointer)SCALEVEC(ctx,2,local+18); /*scale*/
	local[18]= w;
	local[19]= argv[0]->c.obj.iv[6];
	local[20]= makeint((eusinteger_t)2L);
	ctx->vsp=local+21;
	w=(*ftab[12])(ctx,2,local+19,&ftab[12],fqv[94]); /*expt*/
	local[19]= w;
	local[20]= local[14];
	ctx->vsp=local+21;
	w=(pointer)SCALEVEC(ctx,2,local+19); /*scale*/
	local[19]= w;
	local[20]= argv[0]->c.obj.iv[6];
	local[21]= makeint((eusinteger_t)3L);
	ctx->vsp=local+22;
	w=(*ftab[12])(ctx,2,local+20,&ftab[12],fqv[94]); /*expt*/
	local[20]= w;
	local[21]= local[15];
	ctx->vsp=local+22;
	w=(pointer)SCALEVEC(ctx,2,local+20); /*scale*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)LIST(ctx,4,local+17); /*list*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(*ftab[11])(ctx,2,local+16,&ftab[11],fqv[93]); /*reduce*/
	argv[0]->c.obj.iv[10] = w;
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK710:
	ctx->vsp=local; return(local[0]);}

/*his2rgb*/
static pointer F494his2rgb(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT717;}
	local[0]= makeflt(1.0000000000000000000000e+00);
ENT717:
	if (n>=3) { local[1]=(argv[2]); goto ENT716;}
	local[1]= makeflt(1.0000000000000000000000e+00);
ENT716:
	if (n>=4) { local[2]=(argv[3]); goto ENT715;}
	local[2]= NIL;
ENT715:
ENT714:
	if (n>4) maerror();
	local[3]= argv[0];
	local[4]= local[0];
	local[5]= local[1];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F495hvs2rgb(ctx,4,local+3); /*hvs2rgb*/
	local[0]= w;
BLK713:
	ctx->vsp=local; return(local[0]);}

/*hvs2rgb*/
static pointer F495hvs2rgb(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT722;}
	local[0]= makeflt(1.0000000000000000000000e+00);
ENT722:
	if (n>=3) { local[1]=(argv[2]); goto ENT721;}
	local[1]= makeflt(1.0000000000000000000000e+00);
ENT721:
	if (n>=4) { local[2]=(argv[3]); goto ENT720;}
	local[2]= NIL;
ENT720:
ENT719:
	if (n>4) maerror();
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LISTP(ctx,1,local+3); /*listp*/
	if (w!=NIL) goto OR725;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)VECTORP(ctx,1,local+3); /*vectorp*/
	if (w!=NIL) goto OR725;
	goto IF723;
OR725:
	local[2] = local[0];
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[1] = w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[0] = w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	argv[0] = w;
	local[3]= argv[0];
	goto IF724;
IF723:
	local[3]= NIL;
IF724:
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)360L);
	ctx->vsp=local+5;
	w=(pointer)GREQP(ctx,2,local+3); /*>=*/
	if (w==NIL) goto IF726;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)ROUND(ctx,1,local+3); /*round*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)360L);
	ctx->vsp=local+5;
	w=(pointer)MOD(ctx,2,local+3); /*mod*/
	argv[0] = w;
	local[3]= argv[0];
	goto IF727;
IF726:
	local[3]= NIL;
IF727:
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)LESSP(ctx,2,local+3); /*<*/
	if (w==NIL) goto IF728;
	local[3]= makeint((eusinteger_t)360L);
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)MINUS(ctx,1,local+4); /*-*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ROUND(ctx,1,local+4); /*round*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)360L);
	ctx->vsp=local+6;
	w=(pointer)MOD(ctx,2,local+4); /*mod*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MINUS(ctx,2,local+3); /*-*/
	argv[0] = w;
	local[3]= argv[0];
	goto IF729;
IF728:
	local[3]= NIL;
IF729:
	local[3]= makeint((eusinteger_t)255L);
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)TIMES(ctx,2,local+3); /***/
	local[1] = w;
	local[3]= makeint((eusinteger_t)255L);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)TIMES(ctx,2,local+3); /***/
	local[0] = w;
	local[3]= argv[0];
	local[4]= makeflt(6.0000000000000000000000e+01);
	ctx->vsp=local+5;
	w=(pointer)QUOTIENT(ctx,2,local+3); /*/*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)FLOOR(ctx,1,local+3); /*floor*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= makeflt(6.0000000000000000000000e+01);
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[4]= w;
	local[5]= local[0];
	local[6]= makeflt(1.0000000000000000000000e+00);
	local[7]= local[1];
	local[8]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+9;
	w=(pointer)QUOTIENT(ctx,2,local+7); /*/*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)TIMES(ctx,2,local+5); /***/
	local[5]= w;
	local[6]= local[0];
	local[7]= makeflt(1.0000000000000000000000e+00);
	local[8]= local[4];
	local[9]= local[1];
	local[10]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,2,local+7); /*-*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)TIMES(ctx,2,local+6); /***/
	local[6]= w;
	local[7]= local[0];
	local[8]= makeflt(1.0000000000000000000000e+00);
	local[9]= makeint((eusinteger_t)1L);
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)MINUS(ctx,2,local+9); /*-*/
	local[9]= w;
	local[10]= local[1];
	local[11]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	local[8]= NIL;
	local[9]= NIL;
	local[10]= NIL;
	local[11]= local[3];
	local[12]= local[11];
	w = fqv[95];
	if (memq(local[12],w)==NIL) goto IF731;
	local[8] = local[0];
	local[9] = local[7];
	local[10] = local[5];
	local[12]= local[10];
	goto IF732;
IF731:
	local[12]= local[11];
	if (fqv[96]!=local[12]) goto IF733;
	local[8] = local[6];
	local[9] = local[0];
	local[10] = local[5];
	local[12]= local[10];
	goto IF734;
IF733:
	local[12]= local[11];
	if (fqv[97]!=local[12]) goto IF735;
	local[8] = local[5];
	local[9] = local[0];
	local[10] = local[7];
	local[12]= local[10];
	goto IF736;
IF735:
	local[12]= local[11];
	if (fqv[98]!=local[12]) goto IF737;
	local[8] = local[5];
	local[9] = local[6];
	local[10] = local[0];
	local[12]= local[10];
	goto IF738;
IF737:
	local[12]= local[11];
	if (fqv[99]!=local[12]) goto IF739;
	local[8] = local[7];
	local[9] = local[5];
	local[10] = local[0];
	local[12]= local[10];
	goto IF740;
IF739:
	local[12]= local[11];
	if (fqv[100]!=local[12]) goto IF741;
	local[8] = local[0];
	local[9] = local[5];
	local[10] = local[6];
	local[12]= local[10];
	goto IF742;
IF741:
	if (T==NIL) goto IF743;
	local[12]= fqv[101];
	ctx->vsp=local+13;
	w=(*ftab[0])(ctx,1,local+12,&ftab[0],fqv[3]); /*warn*/
	local[12]= w;
	goto IF744;
IF743:
	local[12]= NIL;
IF744:
IF742:
IF740:
IF738:
IF736:
IF734:
IF732:
	w = local[12];
	if (local[2]==NIL) goto CON746;
	local[11]= local[2];
	local[12]= makeint((eusinteger_t)0L);
	local[13]= local[8];
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[2];
	local[12]= makeint((eusinteger_t)1L);
	local[13]= local[9];
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[2];
	local[12]= makeint((eusinteger_t)2L);
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[2];
	goto CON745;
CON746:
	local[11]= local[8];
	local[12]= local[9];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,3,local+11); /*list*/
	local[11]= w;
	goto CON745;
CON747:
	local[11]= NIL;
CON745:
	w = local[11];
	local[0]= w;
BLK718:
	ctx->vsp=local; return(local[0]);}

/*rgb2his*/
static pointer F496rgb2his(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT752;}
	local[0]= NIL;
ENT752:
	if (n>=3) { local[1]=(argv[2]); goto ENT751;}
	local[1]= NIL;
ENT751:
	if (n>=4) { local[2]=(argv[3]); goto ENT750;}
	local[2]= NIL;
ENT750:
ENT749:
	if (n>4) maerror();
	local[3]= argv[0];
	local[4]= local[0];
	local[5]= local[1];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)F497rgb2hvs(ctx,4,local+3); /*rgb2hvs*/
	local[0]= w;
BLK748:
	ctx->vsp=local; return(local[0]);}

/*rgb2hvs*/
static pointer F497rgb2hvs(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT757;}
	local[0]= NIL;
ENT757:
	if (n>=3) { local[1]=(argv[2]); goto ENT756;}
	local[1]= NIL;
ENT756:
	if (n>=4) { local[2]=(argv[3]); goto ENT755;}
	local[2]= NIL;
ENT755:
ENT754:
	if (n>4) maerror();
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LISTP(ctx,1,local+3); /*listp*/
	if (w!=NIL) goto OR760;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)VECTORP(ctx,1,local+3); /*vectorp*/
	if (w!=NIL) goto OR760;
	goto IF758;
OR760:
	local[2] = local[0];
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[0] = w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)2L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[1] = w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	argv[0] = w;
	local[3]= argv[0];
	goto IF759;
IF758:
	local[3]= NIL;
IF759:
	local[3]= argv[0];
	local[4]= local[0];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)MAX(ctx,3,local+3); /*max*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= local[0];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)MIN(ctx,3,local+4); /*min*/
	local[4]= w;
	local[5]= local[3];
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)EUSFLOAT(ctx,1,local+5); /*float*/
	local[5]= w;
	local[6]= local[3];
	local[7]= argv[0];
	local[8]= makeflt(6.0000000000000000000000e+01);
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)QUOTIENT(ctx,2,local+7); /*/*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	local[7]= local[3];
	local[8]= local[0];
	local[9]= makeflt(6.0000000000000000000000e+01);
	ctx->vsp=local+10;
	w=(pointer)TIMES(ctx,2,local+8); /***/
	local[8]= w;
	local[9]= local[5];
	ctx->vsp=local+10;
	w=(pointer)QUOTIENT(ctx,2,local+8); /*/*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)MINUS(ctx,2,local+7); /*-*/
	local[7]= w;
	local[8]= local[3];
	local[9]= local[1];
	local[10]= makeflt(6.0000000000000000000000e+01);
	ctx->vsp=local+11;
	w=(pointer)TIMES(ctx,2,local+9); /***/
	local[9]= w;
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	local[9]= local[3];
	local[10]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+11;
	w=(pointer)QUOTIENT(ctx,2,local+9); /*/*/
	local[9]= w;
	local[10]= local[5];
	local[11]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+12;
	w=(pointer)NUMEQUAL(ctx,2,local+10); /*=*/
	if (w==NIL) goto IF761;
	local[10]= makeint((eusinteger_t)0L);
	goto IF762;
IF761:
	local[10]= makeflt(2.5500000000000000000000e+02);
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)QUOTIENT(ctx,2,local+10); /*/*/
	local[10]= w;
IF762:
	local[11]= local[10];
	local[12]= makeint((eusinteger_t)0L);
	ctx->vsp=local+13;
	w=(pointer)NUMEQUAL(ctx,2,local+11); /*=*/
	if (w==NIL) goto IF763;
	local[11]= makeint((eusinteger_t)0L);
	goto IF764;
IF763:
	local[11]= argv[0];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)NUMEQUAL(ctx,2,local+11); /*=*/
	if (w==NIL) goto CON766;
	local[11]= local[8];
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	goto CON765;
CON766:
	local[11]= local[0];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)NUMEQUAL(ctx,2,local+11); /*=*/
	if (w==NIL) goto CON767;
	local[11]= makeint((eusinteger_t)120L);
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	local[12]= local[8];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	goto CON765;
CON767:
	local[11]= makeint((eusinteger_t)240L);
	local[12]= local[7];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)MINUS(ctx,2,local+11); /*-*/
	local[11]= w;
	goto CON765;
CON768:
	local[11]= NIL;
CON765:
IF764:
	local[12]= local[11];
	local[13]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+14;
	w=(pointer)LESSP(ctx,2,local+12); /*<*/
	if (w==NIL) goto IF769;
	local[12]= local[11];
	local[13]= makeint((eusinteger_t)360L);
	ctx->vsp=local+14;
	w=(pointer)PLUS(ctx,2,local+12); /*+*/
	local[12]= w;
	goto IF770;
IF769:
	local[12]= local[11];
IF770:
	local[13]= local[10];
	local[14]= makeflt(2.5500000000000000000000e+02);
	ctx->vsp=local+15;
	w=(pointer)QUOTIENT(ctx,2,local+13); /*/*/
	local[10] = w;
	if (local[2]==NIL) goto CON772;
	local[13]= local[2];
	local[14]= makeint((eusinteger_t)0L);
	local[15]= local[12];
	ctx->vsp=local+16;
	w=(pointer)SETELT(ctx,3,local+13); /*setelt*/
	local[13]= local[2];
	local[14]= makeint((eusinteger_t)1L);
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)SETELT(ctx,3,local+13); /*setelt*/
	local[13]= local[2];
	local[14]= makeint((eusinteger_t)2L);
	local[15]= local[10];
	ctx->vsp=local+16;
	w=(pointer)SETELT(ctx,3,local+13); /*setelt*/
	local[13]= local[2];
	goto CON771;
CON772:
	local[13]= local[12];
	local[14]= local[9];
	local[15]= local[10];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,3,local+13); /*list*/
	local[13]= w;
	goto CON771;
CON773:
	local[13]= NIL;
CON771:
	w = local[13];
	local[0]= w;
BLK753:
	ctx->vsp=local; return(local[0]);}

/*color-category10*/
static pointer F498color_category10(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)10L);
	ctx->vsp=local+2;
	w=(pointer)MOD(ctx,2,local+0); /*mod*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)100L);
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= makeflt(1.0000000000000000000000e+00);
	local[2]= makeflt(7.9999999999999982236432e-01);
	ctx->vsp=local+3;
	w=(pointer)F494his2rgb(ctx,3,local+0); /*his2rgb*/
	local[0]= w;
BLK774:
	ctx->vsp=local; return(local[0]);}

/*color-category20*/
static pointer F499color_category20(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)20L);
	ctx->vsp=local+2;
	w=(pointer)MOD(ctx,2,local+0); /*mod*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)100L);
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= makeflt(1.0000000000000000000000e+00);
	local[2]= makeflt(7.9999999999999982236432e-01);
	ctx->vsp=local+3;
	w=(pointer)F494his2rgb(ctx,3,local+0); /*his2rgb*/
	local[0]= w;
BLK775:
	ctx->vsp=local; return(local[0]);}

/*bench*/
static pointer F776(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST778:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	local[3]= fqv[18];
	local[4]= local[1];
	local[5]= fqv[27];
	local[6]= fqv[28];
	local[7]= fqv[29];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= local[2];
	local[6]= fqv[102];
	w = local[0];
	if (memq(local[6],w)==NIL) goto IF779;
	local[6]= fqv[102];
	w = local[0];
	w=memq(local[6],w);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	goto IF780;
IF779:
	local[6]= fqv[103];
IF780:
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[0];
	local[6]= local[1];
	local[7]= fqv[32];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[9];
	local[7]= fqv[104];
	local[8]= local[0];
	local[9]= NIL;
	ctx->vsp=local+10;
	w=(pointer)APPEND(ctx,2,local+8); /*append*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[105];
	local[9]= fqv[26];
	local[10]= fqv[106];
	local[11]= local[2];
	local[12]= fqv[0];
	local[13]= local[1];
	local[14]= fqv[31];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
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
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	local[0]= w;
BLK777:
	ctx->vsp=local; return(local[0]);}

/*bench2*/
static pointer F781(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST783:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[18];
	local[3]= local[1];
	local[4]= fqv[27];
	local[5]= fqv[28];
	local[6]= fqv[29];
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
	local[3]= w;
	local[4]= fqv[0];
	local[5]= local[1];
	local[6]= fqv[32];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[104];
	local[6]= local[0];
	local[7]= fqv[0];
	local[8]= local[1];
	local[9]= fqv[31];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,2,local+6); /*append*/
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
BLK782:
	ctx->vsp=local; return(local[0]);}

/*null-output*/
static pointer F784(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST786:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[107];
	local[2]= fqv[108];
	local[3]= local[0];
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)APPEND(ctx,2,local+3); /*append*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK785:
	ctx->vsp=local; return(local[0]);}

/*with-all-output->file*/
static pointer F787(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST789:
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
	local[5]= fqv[104];
	local[6]= fqv[18];
	local[7]= local[1];
	local[8]= fqv[109];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= local[2];
	local[9]= fqv[60];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[4];
	local[10]= fqv[24];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[110];
	local[9]= fqv[111];
	local[10]= local[3];
	local[11]= argv[0];
	local[12]= fqv[112];
	local[13]= fqv[113];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[114];
	local[12]= fqv[109];
	local[13]= local[3];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[114];
	local[13]= fqv[60];
	local[14]= local[3];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[114];
	local[14]= local[4];
	local[15]= fqv[104];
	local[16]= local[0];
	local[17]= NIL;
	ctx->vsp=local+18;
	w=(pointer)APPEND(ctx,2,local+16); /*append*/
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
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
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[104];
	local[11]= fqv[114];
	local[12]= fqv[109];
	local[13]= local[1];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[114];
	local[13]= fqv[60];
	local[14]= local[1];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= local[4];
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
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	local[0]= w;
BLK788:
	ctx->vsp=local; return(local[0]);}

/*read-char-case*/
static pointer F790(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST792:
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
	local[4]= fqv[104];
	local[5]= fqv[18];
	local[6]= local[3];
	local[7]= fqv[115];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	local[6]= w;
	local[7]= fqv[10];
	local[8]= fqv[116];
	local[9]= local[3];
	local[10]= fqv[115];
	local[11]= local[2];
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
	local[9]= fqv[105];
	local[10]= fqv[26];
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[117];
	local[11]= fqv[109];
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= fqv[114];
	local[12]= local[3];
	local[13]= fqv[18];
	local[14]= local[1];
	local[15]= fqv[118];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	local[15]= w;
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	local[14]= w;
	local[15]= fqv[119];
	local[16]= local[1];
	local[17]= local[0];
	local[18]= fqv[26];
	local[19]= fqv[115];
	local[20]= local[2];
	ctx->vsp=local+21;
	w=(pointer)LIST(ctx,1,local+20); /*list*/
	ctx->vsp=local+20;
	local[19]= cons(ctx,local[19],w);
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	local[18]= cons(ctx,local[18],w);
	ctx->vsp=local+19;
	w=(pointer)LIST(ctx,1,local+18); /*list*/
	local[18]= w;
	ctx->vsp=local+19;
	w=(pointer)APPEND(ctx,2,local+17); /*append*/
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
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
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= local[3];
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
	w = cons(ctx,local[4],w);
	local[0]= w;
BLK791:
	ctx->vsp=local; return(local[0]);}

/*termios-c_iflag*/
static pointer F500termios_c_iflag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK793:
	ctx->vsp=local; return(local[0]);}

/*set-termios-c_iflag*/
static pointer F501set_termios_c_iflag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= fqv[62];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
BLK794:
	ctx->vsp=local; return(local[0]);}

/*termios-c_oflag*/
static pointer F502termios_c_oflag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)4L);
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK795:
	ctx->vsp=local; return(local[0]);}

/*set-termios-c_oflag*/
static pointer F503set_termios_c_oflag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)4L);
	local[3]= fqv[62];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
BLK796:
	ctx->vsp=local; return(local[0]);}

/*termios-c_cflag*/
static pointer F504termios_c_cflag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)8L);
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK797:
	ctx->vsp=local; return(local[0]);}

/*set-termios-c_cflag*/
static pointer F505set_termios_c_cflag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)8L);
	local[3]= fqv[62];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
BLK798:
	ctx->vsp=local; return(local[0]);}

/*termios-c_lflag*/
static pointer F506termios_c_lflag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)12L);
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK799:
	ctx->vsp=local; return(local[0]);}

/*set-termios-c_lflag*/
static pointer F507set_termios_c_lflag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)12L);
	local[3]= fqv[62];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
BLK800:
	ctx->vsp=local; return(local[0]);}

/*termios-c_line*/
static pointer F508termios_c_line(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)16L);
	local[2]= fqv[120];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK801:
	ctx->vsp=local; return(local[0]);}

/*set-termios-c_line*/
static pointer F509set_termios_c_line(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)16L);
	local[3]= fqv[120];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
BLK802:
	ctx->vsp=local; return(local[0]);}

/*termios-c_cc*/
static pointer F510termios_c_cc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT805;}
	local[0]= NIL;
ENT805:
ENT804:
	if (n>2) maerror();
	if (local[0]==NIL) goto IF806;
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)17L);
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	local[3]= fqv[121];
	ctx->vsp=local+4;
	w=(pointer)PEEK(ctx,3,local+1); /*system:peek*/
	local[1]= w;
	goto IF807;
IF806:
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)17L);
	local[3]= makeint((eusinteger_t)17L);
	w = makeint((eusinteger_t)19L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[3]= (pointer)((eusinteger_t)local[3] + (eusinteger_t)w);
	ctx->vsp=local+4;
	w=(pointer)SUBSEQ(ctx,3,local+1); /*subseq*/
	local[1]= w;
IF807:
	w = local[1];
	local[0]= w;
BLK803:
	ctx->vsp=local; return(local[0]);}

/*set-termios-c_cc*/
static pointer F511set_termios_c_cc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST809:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	if (local[0]==NIL) goto IF810;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= makeint((eusinteger_t)17L);
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	local[3]= fqv[121];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,3,local+1); /*system:poke*/
	local[1]= w;
	goto IF811;
IF810:
	local[1]= argv[0];
	local[2]= argv[1];
	local[3]= fqv[122];
	local[4]= makeint((eusinteger_t)17L);
	local[5]= fqv[123];
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[13])(ctx,6,local+1,&ftab[13],fqv[124]); /*replace*/
	local[1]= w;
IF811:
	w = local[1];
	local[0]= w;
BLK808:
	ctx->vsp=local; return(local[0]);}

/*termios-c_ispeed*/
static pointer F512termios_c_ispeed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)36L);
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK812:
	ctx->vsp=local; return(local[0]);}

/*set-termios-c_ispeed*/
static pointer F513set_termios_c_ispeed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)36L);
	local[3]= fqv[62];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
BLK813:
	ctx->vsp=local; return(local[0]);}

/*termios-c_ospeed*/
static pointer F514termios_c_ospeed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)40L);
	local[2]= fqv[62];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK814:
	ctx->vsp=local; return(local[0]);}

/*set-termios-c_ospeed*/
static pointer F515set_termios_c_ospeed(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)40L);
	local[3]= fqv[62];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
BLK815:
	ctx->vsp=local; return(local[0]);}

/*kbhit*/
static pointer F516kbhit(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= makeint((eusinteger_t)0L);
	ctx->vsp=local+1;
	w=(*ftab[14])(ctx,1,local+0,&ftab[14],fqv[125]); /*unix:tcgetattr*/
	local[0]= w;
	local[1]= fqv[126];
	local[2]= NIL;
	local[3]= NIL;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(*ftab[15])(ctx,1,local+4,&ftab[15],fqv[127]); /*copy-list*/
	local[2] = w;
	local[4]= local[2];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)F506termios_c_lflag(ctx,1,local+5); /*termios-c_lflag*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)LOGNOT(ctx,1,local+6); /*lognot*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LOGAND(ctx,2,local+5); /*logand*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)F507set_termios_c_lflag(ctx,2,local+4); /*set-termios-c_lflag*/
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(*ftab[16])(ctx,3,local+4,&ftab[16],fqv[128]); /*unix:tcsetattr*/
	local[4]= makeint((eusinteger_t)1L);
	local[5]= makeflt(1.0000000000000000208167e-03);
	ctx->vsp=local+6;
	w=(pointer)SELECT_READ(ctx,2,local+4); /*unix:select-read-fd*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)1L);
	ctx->vsp=local+6;
	w=(pointer)NUMEQUAL(ctx,2,local+4); /*=*/
	if (w==NIL) goto IF817;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[1];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)UNIXREAD(ctx,3,local+4); /*unix:uread*/
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[3] = w;
	local[4]= local[3];
	goto IF818;
IF817:
	local[4]= NIL;
IF818:
	local[4]= makeint((eusinteger_t)0L);
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(*ftab[16])(ctx,3,local+4,&ftab[16],fqv[128]); /*unix:tcsetattr*/
	w = local[3];
	local[0]= w;
BLK816:
	ctx->vsp=local; return(local[0]);}

/*piped-fork-returns-list*/
static pointer F517piped_fork_returns_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT821;}
	local[0]= NIL;
ENT821:
ENT820:
	if (n>2) maerror();
	local[1]= (pointer)get_sym_func(fqv[129]);
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)APPLY(ctx,3,local+1); /*apply*/
	local[1]= w;
	ctx->vsp=local+2;
	w = makeclosure(codevec,quotevec,UWP822,env,argv,local);
	local[2]=(pointer)(ctx->protfp); local[3]=w;
	ctx->protfp=(struct protectframe *)(local+2);
	local[4]= NIL;
	local[5]= NIL;
WHL823:
	local[6]= local[1];
	local[7]= NIL;
	ctx->vsp=local+8;
	w=(pointer)READLINE(ctx,2,local+6); /*read-line*/
	local[5] = w;
	if (local[5]==NIL) goto WHX824;
	local[6]= local[5];
	w = local[4];
	ctx->vsp=local+7;
	local[4] = cons(ctx,local[6],w);
	goto WHL823;
WHX824:
	local[6]= NIL;
BLK825:
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)REVERSE(ctx,1,local+6); /*reverse*/
	ctx->vsp=local+4;
	UWP822(ctx,0,local+4,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK819:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP822(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[1];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*make-robot-model-from-name*/
static pointer F518make_robot_model_from_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST827:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,1,local+1,&ftab[17],fqv[130]); /*string-downcase*/
	local[1]= w;
	local[2]= loadglobal(fqv[131]);
	local[3]= fqv[132];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[18])(ctx,1,local+2,&ftab[18],fqv[133]); /*flatten*/
	local[2]= w;
	local[3]= NIL;
	local[4]= local[2];
WHL829:
	if (local[4]==NIL) goto WHX830;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[3];
	local[6]= fqv[134];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,2,local+5); /*send*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[17])(ctx,1,local+5,&ftab[17],fqv[130]); /*string-downcase*/
	local[5]= w;
	local[6]= local[5];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(*ftab[19])(ctx,2,local+6,&ftab[19],fqv[135]); /*string=*/
	if (w!=NIL) goto OR835;
	local[6]= NIL;
	local[7]= fqv[136];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(*ftab[19])(ctx,2,local+6,&ftab[19],fqv[135]); /*string=*/
	if (w!=NIL) goto OR835;
	goto IF833;
OR835:
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,1,local+6); /*instantiate*/
	local[6]= w;
	local[7]= (pointer)get_sym_func(fqv[0]);
	local[8]= local[6];
	local[9]= fqv[29];
	local[10]= local[0];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,4,local+7); /*apply*/
	w = local[6];
	ctx->vsp=local+6;
	local[0]=w;
	goto BLK826;
	goto IF834;
IF833:
	local[6]= NIL;
IF834:
	w = local[6];
	goto WHL829;
WHX830:
	local[5]= NIL;
BLK831:
	w = NIL;
	w = NIL;
	local[0]= w;
BLK826:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtutil(ctx,n,argv,env)
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
	local[0]= fqv[137];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF837;
	local[0]= fqv[138];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[139],w);
	goto IF838;
IF837:
	local[0]= fqv[140];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF838:
	local[0]= fqv[141];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[142],module,F484forward_message_to,fqv[143]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[144],module,F485forward_message_to_all,fqv[145]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[146],module,F533,fqv[147]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[25],module,F536,fqv[148]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[149],module,F539,fqv[150]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[151],module,F542,fqv[152]);
	local[0]= fqv[28];
	local[1]= fqv[153];
	local[2]= fqv[28];
	local[3]= fqv[154];
	local[4]= loadglobal(fqv[155]);
	local[5]= fqv[156];
	local[6]= fqv[157];
	local[7]= fqv[158];
	local[8]= NIL;
	local[9]= fqv[61];
	local[10]= NIL;
	local[11]= fqv[159];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[160];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[20])(ctx,13,local+2,&ftab[20],fqv[161]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M545mtimer_init,fqv[29],fqv[28],fqv[162]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M547mtimer_start,fqv[32],fqv[28],fqv[163]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M549mtimer_stop,fqv[31],fqv[28],fqv[164]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[165],module,F486permutation,fqv[166]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[167],module,F487combination,fqv[168]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[169],module,F488mapjoin,fqv[170]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[171],module,F489find_extreams,fqv[172]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[173],module,F490need_thread,fqv[174]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[175],module,F491eus_server,fqv[176]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[177],module,F492connect_server_until_success,fqv[178]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[179],module,F493format_array,fqv[180]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[181],module,F645,fqv[182]);
	local[0]= fqv[183];
	local[1]= fqv[153];
	local[2]= fqv[183];
	local[3]= fqv[154];
	local[4]= loadglobal(fqv[184]);
	local[5]= fqv[156];
	local[6]= fqv[185];
	local[7]= fqv[158];
	local[8]= NIL;
	local[9]= fqv[61];
	local[10]= NIL;
	local[11]= fqv[159];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[160];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[20])(ctx,13,local+2,&ftab[20],fqv[161]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M649interpolator_init,fqv[29],fqv[183],fqv[186]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M651interpolator_reset,fqv[84],fqv[183],fqv[187]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M658interpolator_position_list,fqv[78],fqv[183],fqv[188]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M660interpolator_position,fqv[189],fqv[183],fqv[190]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M662interpolator_time_list,fqv[79],fqv[183],fqv[191]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M664interpolator_time,fqv[192],fqv[183],fqv[193]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M666interpolator_segment_time,fqv[194],fqv[183],fqv[195]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M668interpolator_segment,fqv[196],fqv[183],fqv[197]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M670interpolator_segment_num,fqv[198],fqv[183],fqv[199]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M672interpolator_interpolatingp,fqv[200],fqv[183],fqv[201]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M674interpolator_start_interpolation,fqv[202],fqv[183],fqv[203]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M676interpolator_stop_interpolation,fqv[204],fqv[183],fqv[205]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M678interpolator_pass_time,fqv[206],fqv[183],fqv[207]);
	local[0]= fqv[208];
	local[1]= fqv[153];
	local[2]= fqv[208];
	local[3]= fqv[154];
	local[4]= loadglobal(fqv[183]);
	local[5]= fqv[156];
	local[6]= fqv[24];
	local[7]= fqv[158];
	local[8]= NIL;
	local[9]= fqv[61];
	local[10]= NIL;
	local[11]= fqv[159];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[160];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[20])(ctx,13,local+2,&ftab[20],fqv[161]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M688linear_interpolator_interpolation,fqv[82],fqv[208],fqv[209]);
	local[0]= fqv[210];
	local[1]= fqv[153];
	local[2]= fqv[210];
	local[3]= fqv[154];
	local[4]= loadglobal(fqv[183]);
	local[5]= fqv[156];
	local[6]= fqv[211];
	local[7]= fqv[158];
	local[8]= NIL;
	local[9]= fqv[61];
	local[10]= NIL;
	local[11]= fqv[159];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[160];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[20])(ctx,13,local+2,&ftab[20],fqv[161]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M692minjerk_interpolator_velocity,fqv[212],fqv[210],fqv[213]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M694minjerk_interpolator_velocity_list,fqv[86],fqv[210],fqv[214]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M696minjerk_interpolator_acceleration,fqv[215],fqv[210],fqv[216]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M698minjerk_interpolator_acceleration_list,fqv[87],fqv[210],fqv[217]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M700minjerk_interpolator_reset,fqv[84],fqv[210],fqv[218]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M709minjerk_interpolator_interpolation,fqv[82],fqv[210],fqv[219]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[220],module,F494his2rgb,fqv[221]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[222],module,F495hvs2rgb,fqv[223]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[224],module,F496rgb2his,fqv[225]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[226],module,F497rgb2hvs,fqv[227]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[228],module,F498color_category10,fqv[229]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[230],module,F499color_category20,fqv[231]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[232],module,F776,fqv[233]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[234],module,F781,fqv[235]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[236],module,F784,fqv[237]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[107],module,F787,fqv[238]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[239],module,F790,fqv[240]);
	local[0]= fqv[241];
	local[1]= fqv[153];
	local[2]= fqv[241];
	local[3]= fqv[154];
	local[4]= loadglobal(fqv[242]);
	local[5]= fqv[156];
	local[6]= fqv[24];
	local[7]= fqv[158];
	local[8]= loadglobal(fqv[243]);
	local[9]= fqv[61];
	local[10]= fqv[121];
	local[11]= fqv[159];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[160];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[20])(ctx,13,local+2,&ftab[20],fqv[161]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= loadglobal(fqv[241]);
	local[1]= fqv[244];
	local[2]= fqv[245];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[246],module,F500termios_c_iflag,fqv[247]);
	local[0]= fqv[246];
	local[1]= fqv[248];
	local[2]= fqv[249];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= fqv[246];
	local[1]= fqv[250];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[246];
	local[1]= fqv[252];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[246];
	local[1]= NIL;
	local[2]= fqv[253];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[248],module,F501set_termios_c_iflag,fqv[254]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[255],module,F502termios_c_oflag,fqv[256]);
	local[0]= fqv[255];
	local[1]= fqv[257];
	local[2]= fqv[249];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= fqv[255];
	local[1]= fqv[250];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[255];
	local[1]= fqv[252];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[255];
	local[1]= NIL;
	local[2]= fqv[253];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[257],module,F503set_termios_c_oflag,fqv[258]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[259],module,F504termios_c_cflag,fqv[260]);
	local[0]= fqv[259];
	local[1]= fqv[261];
	local[2]= fqv[249];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= fqv[259];
	local[1]= fqv[250];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[259];
	local[1]= fqv[252];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[259];
	local[1]= NIL;
	local[2]= fqv[253];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[261],module,F505set_termios_c_cflag,fqv[262]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[263],module,F506termios_c_lflag,fqv[264]);
	local[0]= fqv[263];
	local[1]= fqv[265];
	local[2]= fqv[249];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= fqv[263];
	local[1]= fqv[250];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[263];
	local[1]= fqv[252];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[263];
	local[1]= NIL;
	local[2]= fqv[253];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[265],module,F507set_termios_c_lflag,fqv[266]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[267],module,F508termios_c_line,fqv[268]);
	local[0]= fqv[267];
	local[1]= fqv[269];
	local[2]= fqv[249];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= fqv[267];
	local[1]= fqv[250];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[267];
	local[1]= fqv[252];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[267];
	local[1]= NIL;
	local[2]= fqv[253];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[269],module,F509set_termios_c_line,fqv[270]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[271],module,F510termios_c_cc,fqv[272]);
	local[0]= fqv[271];
	local[1]= fqv[273];
	local[2]= fqv[249];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= fqv[271];
	local[1]= fqv[250];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[271];
	local[1]= fqv[252];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[271];
	local[1]= NIL;
	local[2]= fqv[253];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[273],module,F511set_termios_c_cc,fqv[274]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[275],module,F512termios_c_ispeed,fqv[276]);
	local[0]= fqv[275];
	local[1]= fqv[277];
	local[2]= fqv[249];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= fqv[275];
	local[1]= fqv[250];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[275];
	local[1]= fqv[252];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[275];
	local[1]= NIL;
	local[2]= fqv[253];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[277],module,F513set_termios_c_ispeed,fqv[278]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[279],module,F514termios_c_ospeed,fqv[280]);
	local[0]= fqv[279];
	local[1]= fqv[281];
	local[2]= fqv[249];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	local[0]= fqv[279];
	local[1]= fqv[250];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[279];
	local[1]= fqv[252];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,2,local+0,&ftab[21],fqv[251]); /*remprop*/
	local[0]= fqv[279];
	local[1]= NIL;
	local[2]= fqv[253];
	ctx->vsp=local+3;
	w=(pointer)PUTPROP(ctx,3,local+0); /*putprop*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[281],module,F515set_termios_c_ospeed,fqv[282]);
	local[0]= fqv[283];
	local[1]= fqv[284];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[285];
	local[1]= fqv[284];
	local[2]= makeint((eusinteger_t)1L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[286];
	local[1]= fqv[284];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[287];
	local[1]= fqv[284];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[288],module,F516kbhit,fqv[289]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[290],module,F517piped_fork_returns_list,fqv[291]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[292],module,F518make_robot_model_from_name,fqv[293]);
	local[0]= fqv[294];
	local[1]= fqv[295];
	ctx->vsp=local+2;
	w=(*ftab[22])(ctx,2,local+0,&ftab[22],fqv[296]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<23; i++) ftab[i]=fcallx;
}
