/* ./stream.c :  entry=stream */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "stream.h"
#pragma init (register_stream)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___stream();
extern pointer build_quote_vector();
static int register_stream()
  { add_module_initializer("___stream", ___stream);}

static pointer F22081reset_stream();
static pointer F22092make_two_way_stream();
static pointer F22095make_msgq_input_stream();
static pointer F22098make_msgq_output_stream();
static pointer F22102make_string_input_stream();
static pointer F22105make_string_output_stream();
static pointer F22110get_output_stream_string();
static pointer F22113read_from_string();
static pointer F22116princ_to_string();
static pointer F22119prin1_to_string();
static pointer F22128make_socket_address();
static pointer F22137make_socket_port();
static pointer F22145make_server_socket_stream();
static pointer F22149connect_sigalarm_handler();
static pointer F22152make_client_socket_stream();
static pointer F22155make_dgram_socket();
static pointer F22158connect_server();
static pointer F22162select_stream();
static pointer F22167sigio_handler();
static pointer F22176make_broadcast_stream();
static pointer F22179read_buffer();
static pointer F22182write_buffer();

/*:instream*/
static pointer M22244io_stream_instream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT22248;}
	local[0]= NIL;
ENT22248:
ENT22247:
	if (n>3) maerror();
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,1,local+1,&ftab[0],fqv[0]); /*input-stream-p*/
	if (w==NIL) goto IF22264;
	argv[0]->c.obj.iv[1] = local[0];
	local[1]= argv[0]->c.obj.iv[1];
	goto IF22265;
IF22264:
	local[1]= NIL;
IF22265:
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK22245:
	ctx->vsp=local; return(local[0]);}

/*:outstream*/
static pointer M22283io_stream_outstream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT22287;}
	local[0]= NIL;
ENT22287:
ENT22286:
	if (n>3) maerror();
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,1,local+1,&ftab[1],fqv[1]); /*output-stream-p*/
	if (w==NIL) goto IF22303;
	argv[0]->c.obj.iv[2] = local[0];
	local[1]= argv[0]->c.obj.iv[2];
	goto IF22304;
IF22303:
	local[1]= NIL;
IF22304:
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK22284:
	ctx->vsp=local; return(local[0]);}

/*:infd*/
static pointer M22322io_stream_infd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= fqv[2];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK22323:
	ctx->vsp=local; return(local[0]);}

/*:outfd*/
static pointer M22341io_stream_outfd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	local[1]= fqv[3];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK22342:
	ctx->vsp=local; return(local[0]);}

/*:in*/
static pointer M22360io_stream_in(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST22363:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[4]);
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)APPLY(ctx,3,local+1); /*apply*/
	local[0]= w;
BLK22361:
	ctx->vsp=local; return(local[0]);}

/*:out*/
static pointer M22384io_stream_out(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST22387:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[4]);
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)APPLY(ctx,3,local+1); /*apply*/
	local[0]= w;
BLK22385:
	ctx->vsp=local; return(local[0]);}

/*:flag*/
static pointer M22408io_stream_flag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= fqv[5];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK22409:
	ctx->vsp=local; return(local[0]);}

/*:async*/
static pointer M22427io_stream_async(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= fqv[6];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK22428:
	ctx->vsp=local; return(local[0]);}

/*:fname*/
static pointer M22449io_stream_fname(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= fqv[7];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK22450:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M22468io_stream_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	argv[0]->c.obj.iv[1] = argv[2];
	argv[0]->c.obj.iv[2] = argv[3];
	w = argv[0];
	local[0]= w;
BLK22469:
	ctx->vsp=local; return(local[0]);}

/*:reset*/
static pointer M22515stream_reset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT22519;}
	local[0]= NIL;
ENT22519:
ENT22518:
	if (n>3) maerror();
	argv[0]->c.obj.iv[3] = makeint((eusinteger_t)0L);
	if (local[0]==NIL) goto IF22539;
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	goto IF22540;
IF22539:
	local[1]= makeint((eusinteger_t)0L);
IF22540:
	argv[0]->c.obj.iv[4] = local[1];
	w = argv[0];
	local[0]= w;
BLK22516:
	ctx->vsp=local; return(local[0]);}

/*:discard*/
static pointer M22554stream_discard(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT22558;}
	local[0]= makeint((eusinteger_t)1L);
ENT22558:
ENT22557:
	if (n>3) maerror();
	local[1]= argv[0]->c.obj.iv[4];
	local[2]= argv[0]->c.obj.iv[3];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MAX(ctx,2,local+1); /*max*/
	argv[0]->c.obj.iv[3] = w;
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK22555:
	ctx->vsp=local; return(local[0]);}

/*:count*/
static pointer M22590stream_count(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[3];
	local[0]= w;
BLK22591:
	ctx->vsp=local; return(local[0]);}

/*:tail*/
static pointer M22606stream_tail(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT22610;}
	local[0]= NIL;
ENT22610:
ENT22609:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF22626;
	local[1]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	argv[0]->c.obj.iv[4] = w;
	local[1]= argv[0]->c.obj.iv[4];
	goto IF22627;
IF22626:
	local[1]= NIL;
IF22627:
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK22607:
	ctx->vsp=local; return(local[0]);}

/*:chars-left*/
static pointer M22644stream_chars_left(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[4];
	local[1]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,2,local+0); /*-*/
	local[0]= w;
BLK22645:
	ctx->vsp=local; return(local[0]);}

/*:tail-string*/
static pointer M22664stream_tail_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	local[1]= argv[0]->c.obj.iv[3];
	local[2]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+3;
	w=(pointer)SUBSEQ(ctx,3,local+0); /*subseq*/
	local[0]= w;
BLK22665:
	ctx->vsp=local; return(local[0]);}

/*:buffer*/
static pointer M22683stream_buffer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT22688;}
	local[0]= NIL;
ENT22688:
	if (n>=4) { local[1]=(argv[3]); goto ENT22687;}
	local[1]= NIL;
ENT22687:
ENT22686:
	if (n>4) maerror();
	if (local[1]==NIL) goto CON22710;
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= local[0];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)SUBSEQ(ctx,3,local+2); /*subseq*/
	local[2]= w;
	goto CON22708;
CON22710:
	w = local[0];
	if (!isstring(w)) goto CON22720;
	argv[0]->c.obj.iv[2] = local[0];
	local[2]= argv[0]->c.obj.iv[2];
	goto CON22708;
CON22720:
	w = local[0];
	if (!isint(w)) goto CON22731;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,1,local+2,&ftab[2],fqv[8]); /*make-string*/
	argv[0]->c.obj.iv[2] = w;
	local[2]= argv[0]->c.obj.iv[2];
	goto CON22708;
CON22731:
	local[2]= argv[0]->c.obj.iv[2];
	goto CON22708;
CON22745:
	local[2]= NIL;
CON22708:
	w = local[2];
	local[0]= w;
BLK22684:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M22751stream_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	if (n>=5) { local[0]=(argv[4]); goto ENT22756;}
	local[0]= NIL;
ENT22756:
	if (n>=6) { local[1]=(argv[5]); goto ENT22755;}
	local[1]= NIL;
ENT22755:
ENT22754:
	if (n>6) maerror();
	argv[0]->c.obj.iv[1] = argv[2];
	w = argv[3];
	if (!isstring(w)) goto IF22785;
	local[2]= argv[3];
	goto IF22786;
IF22785:
	local[2]= loadglobal(fqv[9]);
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
IF22786:
	argv[0]->c.obj.iv[2] = local[2];
	w = local[0];
	if (!isint(w)) goto IF22798;
	local[2]= local[0];
	goto IF22799;
IF22798:
	local[2]= makeint((eusinteger_t)0L);
IF22799:
	argv[0]->c.obj.iv[3] = local[2];
	w = local[1];
	if (!isint(w)) goto IF22806;
	local[2]= local[1];
	goto IF22807;
IF22806:
	local[2]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
IF22807:
	argv[0]->c.obj.iv[4] = local[2];
	w = argv[0];
	local[0]= w;
BLK22752:
	ctx->vsp=local; return(local[0]);}

/*reset-stream*/
static pointer F22081reset_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[10];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK22824:
	ctx->vsp=local; return(local[0]);}

/*:fd*/
static pointer M22869file_stream_fd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[5];
	local[0]= w;
BLK22870:
	ctx->vsp=local; return(local[0]);}

/*:instream*/
static pointer M22885file_stream_instream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	if (fqv[11]!=local[0]) goto IF22898;
	local[0]= argv[0];
	goto IF22899;
IF22898:
	local[0]= NIL;
IF22899:
	w = local[0];
	local[0]= w;
BLK22886:
	ctx->vsp=local; return(local[0]);}

/*:outstream*/
static pointer M22908file_stream_outstream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	if (fqv[12]!=local[0]) goto IF22921;
	local[0]= argv[0];
	goto IF22922;
IF22921:
	local[0]= NIL;
IF22922:
	w = local[0];
	local[0]= w;
BLK22909:
	ctx->vsp=local; return(local[0]);}

/*:infd*/
static pointer M22931file_stream_infd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	if (fqv[11]!=local[0]) goto IF22944;
	local[0]= argv[0]->c.obj.iv[5];
	goto IF22945;
IF22944:
	local[0]= NIL;
IF22945:
	w = local[0];
	local[0]= w;
BLK22932:
	ctx->vsp=local; return(local[0]);}

/*:outfd*/
static pointer M22954file_stream_outfd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	if (fqv[12]!=local[0]) goto IF22967;
	local[0]= argv[0]->c.obj.iv[5];
	goto IF22968;
IF22967:
	local[0]= NIL;
IF22968:
	w = local[0];
	local[0]= w;
BLK22955:
	ctx->vsp=local; return(local[0]);}

/*:fname*/
static pointer M22977file_stream_fname(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[6];
	local[0]= w;
BLK22978:
	ctx->vsp=local; return(local[0]);}

/*:flag*/
static pointer M22993file_stream_flag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= makeint((eusinteger_t)3L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= w;
BLK22994:
	ctx->vsp=local; return(local[0]);}

/*:async*/
static pointer M23010file_stream_async(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[2]==NIL) goto CON23027;
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= makeint((eusinteger_t)4L);
	local[2]= argv[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)8192L);
	ctx->vsp=local+4;
	w=(pointer)LOGIOR(ctx,2,local+2); /*logior*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= makeint((eusinteger_t)8L);
	ctx->vsp=local+2;
	w=(pointer)GETPID(ctx,0,local+2); /*unix:getpid*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= w;
	goto CON23025;
CON23027:
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= makeint((eusinteger_t)4L);
	local[2]= argv[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)8192L);
	ctx->vsp=local+4;
	w=(pointer)LOGNOT(ctx,1,local+3); /*lognot*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LOGAND(ctx,2,local+2); /*logand*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= w;
	goto CON23025;
CON23050:
	local[0]= NIL;
CON23025:
	w = local[0];
	local[0]= w;
BLK23011:
	ctx->vsp=local; return(local[0]);}

/*:nonblock*/
static pointer M23069file_stream_nonblock(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[2]==NIL) goto CON23086;
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= makeint((eusinteger_t)4L);
	local[2]= argv[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= loadglobal(fqv[13]);
	ctx->vsp=local+4;
	w=(pointer)LOGIOR(ctx,2,local+2); /*logior*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= makeint((eusinteger_t)8L);
	ctx->vsp=local+2;
	w=(pointer)GETPID(ctx,0,local+2); /*unix:getpid*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= w;
	goto CON23084;
CON23086:
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= makeint((eusinteger_t)4L);
	local[2]= argv[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= loadglobal(fqv[13]);
	ctx->vsp=local+4;
	w=(pointer)LOGNOT(ctx,1,local+3); /*lognot*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LOGAND(ctx,2,local+2); /*logand*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= w;
	goto CON23084;
CON23111:
	local[0]= NIL;
CON23084:
	w = local[0];
	local[0]= w;
BLK23070:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M23131file_stream_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT23135;}
	local[0]= T;
ENT23135:
ENT23134:
	ctx->vsp=local+1;
	local[1]= minilist(ctx,&argv[n],n-3);
	local[2]= (pointer)get_sym_func(fqv[14]);
	local[3]= argv[0];
	local[4]= *(ovafptr(argv[1],fqv[15]));
	local[5]= fqv[16];
	local[6]= local[0];
	local[7]= NIL;
	local[8]= fqv[17];
	local[9]= argv[0]->c.obj.iv[6];
	local[10]= argv[0]->c.obj.iv[1];
	local[11]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+12;
	w=(pointer)LENGTH(ctx,1,local+11); /*length*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)XFORMAT(ctx,5,local+7); /*format*/
	local[7]= w;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,7,local+2); /*apply*/
	local[0]= w;
BLK23132:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M23172file_stream_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<5) maerror();
	if (n>=6) { local[0]=(argv[5]); goto ENT23176;}
	local[0]= makeint((eusinteger_t)128L);
ENT23176:
ENT23175:
	if (n>6) maerror();
	local[1]= argv[0];
	local[2]= *(ovafptr(argv[1],fqv[15]));
	local[3]= fqv[18];
	local[4]= argv[4];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SENDMESSAGE(ctx,5,local+1); /*send-message*/
	argv[0]->c.obj.iv[5] = argv[2];
	argv[0]->c.obj.iv[6] = argv[3];
	argv[0]->c.obj.iv[4] = makeint((eusinteger_t)0L);
	w = argv[0];
	local[0]= w;
BLK23173:
	ctx->vsp=local; return(local[0]);}

/*:read-bytes*/
static pointer M23248file_stream_read_bytes(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT23253;}
	local[0]= argv[2];
	ctx->vsp=local+1;
	w=(*ftab[2])(ctx,1,local+0,&ftab[2],fqv[8]); /*make-string*/
	local[0]= w;
ENT23253:
	if (n>=5) { local[1]=(argv[4]); goto ENT23252;}
	local[1]= makeint((eusinteger_t)0L);
ENT23252:
ENT23251:
	if (n>5) maerror();
	local[2]= NIL;
	w = local[0];
	if (isstring(w)) goto IF23286;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)LESSP(ctx,2,local+3); /*<*/
	if (w==NIL) goto IF23286;
	local[3]= fqv[19];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF23287;
IF23286:
	local[3]= NIL;
IF23287:
	local[3]= argv[0];
	local[4]= fqv[20];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[2] = w;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(*ftab[3])(ctx,1,local+3,&ftab[3],fqv[21]); /*plusp*/
	if (w==NIL) goto IF23303;
	local[3]= local[0];
	local[4]= argv[0];
	local[5]= fqv[22];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= fqv[23];
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(*ftab[4])(ctx,4,local+3,&ftab[4],fqv[24]); /*replace*/
	local[3]= argv[2];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)MIN(ctx,2,local+3); /*min*/
	local[2] = w;
	local[3]= argv[0]->c.obj.iv[3];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	argv[0]->c.obj.iv[3] = w;
	local[3]= local[1];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	local[1] = w;
	local[3]= local[1];
	goto IF23304;
IF23303:
	local[3]= NIL;
IF23304:
WHL23373:
	local[3]= local[1];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)LESSP(ctx,2,local+3); /*<*/
	if (w==NIL) goto WHX23374;
	local[3]= argv[0]->c.obj.iv[5];
	local[4]= local[0];
	local[5]= argv[2];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)UNIXREAD(ctx,4,local+3); /*unix:uread*/
	local[2] = w;
	local[3]= local[2];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)LSEQP(ctx,2,local+3); /*<=*/
	if (w==NIL) goto IF23399;
	local[3]= fqv[25];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto IF23400;
IF23399:
	local[3]= NIL;
IF23400:
	local[3]= local[1];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	local[1] = w;
	goto WHL23373;
WHX23374:
	local[3]= NIL;
BLK23375:
	w = local[0];
	local[0]= w;
BLK23249:
	ctx->vsp=local; return(local[0]);}

/*:read-bytes-eof*/
static pointer M23425file_stream_read_bytes_eof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0];
	local[3]= fqv[20];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[1] = w;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[21]); /*plusp*/
	if (w==NIL) goto IF23449;
	local[2]= argv[0];
	local[3]= fqv[22];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[0] = w;
	local[2]= argv[0];
	local[3]= fqv[26];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	goto IF23450;
IF23449:
	local[2]= NIL;
IF23450:
WHL23488:
	local[2]= argv[0]->c.obj.iv[5];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)UNIXREAD(ctx,2,local+2); /*unix:uread*/
	local[1] = w;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[21]); /*plusp*/
	if (w==NIL) goto WHX23489;
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)SUBSEQ(ctx,3,local+2); /*subseq*/
	local[2]= w;
	w = local[0];
	ctx->vsp=local+3;
	local[0] = cons(ctx,local[2],w);
	goto WHL23488;
WHX23489:
	local[2]= NIL;
BLK23490:
	local[2]= (pointer)get_sym_func(fqv[27]);
	local[3]= loadglobal(fqv[9]);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)NREVERSE(ctx,1,local+4); /*nreverse*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,3,local+2); /*apply*/
	local[0]= w;
BLK23426:
	ctx->vsp=local; return(local[0]);}

/*make-two-way-stream*/
static pointer F22092make_two_way_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= loadglobal(fqv[28]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[18];
	local[3]= argv[0];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,4,local+1); /*send*/
	w = local[0];
	local[0]= w;
BLK23533:
	ctx->vsp=local; return(local[0]);}

/*make-msgq-input-stream*/
static pointer F22095make_msgq_input_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT23577;}
	local[0]= makeint((eusinteger_t)128L);
ENT23577:
ENT23576:
	if (n>2) maerror();
	local[1]= loadglobal(fqv[29]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[18];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)MSGGET(ctx,1,local+4); /*unix:msgget*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[11];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,6,local+2); /*send*/
	w = local[1];
	local[0]= w;
BLK23574:
	ctx->vsp=local; return(local[0]);}

/*make-msgq-output-stream*/
static pointer F22098make_msgq_output_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT23628;}
	local[0]= makeint((eusinteger_t)128L);
ENT23628:
ENT23627:
	if (n>2) maerror();
	local[1]= loadglobal(fqv[29]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[18];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)MSGGET(ctx,1,local+4); /*unix:msgget*/
	local[4]= w;
	local[5]= argv[0];
	local[6]= fqv[12];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,6,local+2); /*send*/
	w = local[1];
	local[0]= w;
BLK23625:
	ctx->vsp=local; return(local[0]);}

/*make-string-input-stream*/
static pointer F22102make_string_input_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT23680;}
	local[0]= NIL;
ENT23680:
	if (n>=3) { local[1]=(argv[2]); goto ENT23679;}
	local[1]= NIL;
ENT23679:
ENT23678:
	if (n>3) maerror();
	w = argv[0];
	if (isstring(w)) goto IF23698;
	local[2]= fqv[30];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto IF23699;
IF23698:
	local[2]= NIL;
IF23699:
	local[2]= loadglobal(fqv[31]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[18];
	local[5]= fqv[11];
	local[6]= argv[0];
	local[7]= local[0];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,6,local+3); /*send*/
	w = local[2];
	argv[0] = w;
	w = argv[0];
	local[0]= w;
BLK23676:
	ctx->vsp=local; return(local[0]);}

/*make-string-output-stream*/
static pointer F22105make_string_output_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT23752;}
	local[0]= makeint((eusinteger_t)64L);
ENT23752:
	if (n>=2) { local[1]=(argv[1]); goto ENT23751;}
	local[1]= NIL;
ENT23751:
	if (n>=3) { local[2]=(argv[2]); goto ENT23750;}
	local[2]= NIL;
ENT23750:
ENT23749:
	if (n>3) maerror();
	local[3]= loadglobal(fqv[31]);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,1,local+3); /*instantiate*/
	local[3]= w;
	local[4]= local[3];
	local[5]= fqv[18];
	local[6]= fqv[12];
	local[7]= local[0];
	local[8]= local[1];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,6,local+4); /*send*/
	w = local[3];
	local[0] = w;
	w = local[0];
	local[0]= w;
BLK23747:
	ctx->vsp=local; return(local[0]);}

/*with-input-from-string*/
static pointer F23811(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST23814:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[32];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= fqv[33];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	local[5]= fqv[34];
	local[6]= fqv[35];
	local[7]= fqv[36];
	local[8]= fqv[37];
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[38];
	local[8]= fqv[35];
	local[9]= fqv[36];
	local[10]= fqv[37];
	local[11]= argv[0];
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
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[39];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[34];
	local[7]= fqv[35];
	local[8]= fqv[40];
	local[9]= fqv[37];
	local[10]= argv[0];
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
	local[8]= fqv[38];
	local[9]= fqv[35];
	local[10]= fqv[40];
	local[11]= fqv[37];
	local[12]= argv[0];
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
	local[9]= fqv[39];
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
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	w = local[0];
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK23812:
	ctx->vsp=local; return(local[0]);}

/*with-output-to-string*/
static pointer F23979(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST23982:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[32];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= fqv[41];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	local[3]= local[0];
	local[4]= fqv[42];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)APPEND(ctx,2,local+3); /*append*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK23980:
	ctx->vsp=local; return(local[0]);}

/*get-output-stream-string*/
static pointer F22110get_output_stream_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+3;
	w=(pointer)SUBSEQ(ctx,3,local+0); /*subseq*/
	local[0]= w;
BLK24040:
	ctx->vsp=local; return(local[0]);}

/*read-from-string*/
static pointer F22113read_from_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT24068;}
	local[0]= T;
ENT24068:
	if (n>=3) { local[1]=(argv[2]); goto ENT24067;}
	local[1]= NIL;
ENT24067:
ENT24066:
	if (n>3) maerror();
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)F22102make_string_input_stream(ctx,1,local+2); /*make-string-input-stream*/
	local[2]= w;
	local[3]= local[0];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)READ(ctx,3,local+2); /*read*/
	local[0]= w;
BLK24064:
	ctx->vsp=local; return(local[0]);}

/*princ-to-string*/
static pointer F22116princ_to_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT24098;}
	local[0]= makeint((eusinteger_t)16L);
ENT24098:
ENT24097:
	if (n>2) maerror();
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F22105make_string_output_stream(ctx,1,local+1); /*make-string-output-stream*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)PRINC(ctx,2,local+2); /*princ*/
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)F22110get_output_stream_string(ctx,1,local+2); /*get-output-stream-string*/
	local[0]= w;
BLK24095:
	ctx->vsp=local; return(local[0]);}

/*prin1-to-string*/
static pointer F22119prin1_to_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT24139;}
	local[0]= makeint((eusinteger_t)16L);
ENT24139:
ENT24138:
	if (n>2) maerror();
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F22105make_string_output_stream(ctx,1,local+1); /*make-string-output-stream*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)PRIN1(ctx,2,local+2); /*prin1*/
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)F22110get_output_stream_string(ctx,1,local+2); /*get-output-stream-string*/
	local[0]= w;
BLK24136:
	ctx->vsp=local; return(local[0]);}

/*:domain*/
static pointer M24190socket_address_domain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= fqv[43];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK24191:
	ctx->vsp=local; return(local[0]);}

/*:port*/
static pointer M24209socket_address_port(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)2L);
	local[2]= fqv[43];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[5])(ctx,1,local+0,&ftab[5],fqv[44]); /*unix::ntohs*/
	local[0]= w;
BLK24210:
	ctx->vsp=local; return(local[0]);}

/*:host*/
static pointer M24231socket_address_host(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)4L);
	local[2]= makeint((eusinteger_t)8L);
	ctx->vsp=local+3;
	w=(pointer)SUBSEQ(ctx,3,local+0); /*subseq*/
	local[0]= w;
BLK24232:
	ctx->vsp=local; return(local[0]);}

/*:next-port*/
static pointer M24248socket_address_next_port(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[45];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)ADD1(ctx,1,local+0); /*1+*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[6])(ctx,1,local+0,&ftab[6],fqv[46]); /*unix::htons*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= fqv[43];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
BLK24249:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M24277socket_address_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT24281;}
	local[0]= T;
ENT24281:
ENT24280:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= *(ovafptr(argv[1],fqv[15]));
	local[3]= fqv[16];
	local[4]= local[0];
	local[5]= NIL;
	local[6]= fqv[47];
	local[7]= argv[0];
	{ register eusinteger_t i=intval(makeint((eusinteger_t)4L));
	  w=makeint(local[7]->c.str.chars[i]);}
	local[7]= w;
	local[8]= argv[0];
	{ register eusinteger_t i=intval(makeint((eusinteger_t)5L));
	  w=makeint(local[8]->c.str.chars[i]);}
	local[8]= w;
	local[9]= argv[0];
	{ register eusinteger_t i=intval(makeint((eusinteger_t)6L));
	  w=makeint(local[9]->c.str.chars[i]);}
	local[9]= w;
	local[10]= argv[0];
	{ register eusinteger_t i=intval(makeint((eusinteger_t)7L));
	  w=makeint(local[10]->c.str.chars[i]);}
	local[10]= w;
	local[11]= argv[0];
	local[12]= fqv[45];
	ctx->vsp=local+13;
	w=(pointer)SEND(ctx,2,local+11); /*send*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)XFORMAT(ctx,7,local+5); /*format*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SENDMESSAGE(ctx,5,local+1); /*send-message*/
	local[0]= w;
BLK24278:
	ctx->vsp=local; return(local[0]);}

/*make-socket-address*/
static pointer F22128make_socket_address(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[48], &argv[0], n-0, local+0, 0);
	if (n & (1<<0)) goto KEY24344;
	local[0] = makeint((eusinteger_t)2L);
KEY24344:
	if (n & (1<<1)) goto KEY24349;
	local[1] = NIL;
KEY24349:
	if (n & (1<<2)) goto KEY24354;
	local[2] = fqv[49];
KEY24354:
	if (n & (1<<3)) goto KEY24359;
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)GETSERVBYNAME(ctx,1,local+6); /*unix:getservbyname*/
	local[3] = w;
KEY24359:
	if (n & (1<<4)) goto KEY24367;
	local[6]= fqv[50];
	ctx->vsp=local+7;
	w=(pointer)GETENV(ctx,1,local+6); /*unix:getenv*/
	local[4] = w;
KEY24367:
	if (n & (1<<5)) goto KEY24374;
	local[5] = NIL;
KEY24374:
	local[6]= local[0];
	if (makeint((eusinteger_t)1L)!=local[6]) goto CON24385;
	local[6]= loadglobal(fqv[51]);
	local[7]= makeint((eusinteger_t)16L);
	local[8]= makeint((eusinteger_t)2L);
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)LENGTH(ctx,1,local+9); /*length*/
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[8]= (pointer)((eusinteger_t)local[8] + (eusinteger_t)w);
	ctx->vsp=local+9;
	w=(pointer)MAX(ctx,2,local+7); /*max*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[6]= w;
	local[7]= local[6];
	local[8]= local[1];
	local[9]= fqv[52];
	local[10]= makeint((eusinteger_t)2L);
	ctx->vsp=local+11;
	w=(*ftab[4])(ctx,4,local+7,&ftab[4],fqv[24]); /*replace*/
	local[7]= local[0];
	local[8]= local[6];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= fqv[43];
	ctx->vsp=local+11;
	w=(pointer)POKE(ctx,4,local+7); /*system:poke*/
	w = local[6];
	local[6]= w;
	goto CON24383;
CON24385:
	local[6]= local[0];
	if (makeint((eusinteger_t)2L)!=local[6]) goto CON24430;
	local[6]= loadglobal(fqv[51]);
	local[7]= makeint((eusinteger_t)16L);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,2,local+6); /*instantiate*/
	local[6]= w;
	local[7]= local[0];
	local[8]= local[6];
	local[9]= makeint((eusinteger_t)0L);
	local[10]= fqv[43];
	ctx->vsp=local+11;
	w=(pointer)POKE(ctx,4,local+7); /*system:poke*/
	if (local[4]==NIL) goto IF24457;
	local[7]= local[4];
	if (fqv[53]!=local[7]) goto IF24466;
	local[7]= makeint((eusinteger_t)0L);
	local[8]= makeint((eusinteger_t)0L);
	local[9]= makeint((eusinteger_t)0L);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)MKINTVECTOR(ctx,4,local+7); /*integer-vector*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[4] = w;
	local[7]= local[4];
	goto IF24467;
IF24466:
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)GETHOSTBYNAME(ctx,1,local+7); /*unix:gethostbyname*/
	local[4] = w;
	local[7]= local[4];
IF24467:
	w = local[4];
	if (!isnum(w)) goto IF24492;
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SYSERRLIST(ctx,1,local+7); /*unix:syserrlist*/
	ctx->vsp=local+7;
	local[0]=w;
	goto BLK24332;
	goto IF24493;
IF24492:
	local[7]= NIL;
IF24493:
	local[7]= local[6];
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	local[9]= fqv[52];
	local[10]= makeint((eusinteger_t)4L);
	ctx->vsp=local+11;
	w=(*ftab[4])(ctx,4,local+7,&ftab[4],fqv[24]); /*replace*/
	local[7]= w;
	goto IF24458;
IF24457:
	local[7]= NIL;
IF24458:
	if (local[2]==NIL) goto IF24520;
	local[7]= local[2];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)GETSERVBYNAME(ctx,2,local+7); /*unix:getservbyname*/
	local[2] = w;
	w = local[2];
	if (!isnum(w)) goto IF24539;
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,1,local+7); /*-*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SYSERRLIST(ctx,1,local+7); /*unix:syserrlist*/
	ctx->vsp=local+7;
	local[0]=w;
	goto BLK24332;
	goto IF24540;
IF24539:
	local[7]= NIL;
IF24540:
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	local[8]= local[6];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= fqv[43];
	ctx->vsp=local+11;
	w=(pointer)POKE(ctx,4,local+7); /*system:poke*/
	local[7]= w;
	goto IF24521;
IF24520:
	local[7]= NIL;
IF24521:
	if (local[3]==NIL) goto IF24567;
	w = local[3];
	if (!isstring(w)) goto IF24576;
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)GETSERVBYNAME(ctx,1,local+7); /*unix:getservbyname*/
	local[3] = w;
	local[7]= local[3];
	goto IF24577;
IF24576:
	local[7]= NIL;
IF24577:
	w = local[3];
	if (!isint(w)) goto IF24591;
	local[7]= local[3];
	local[8]= makeint((eusinteger_t)0L);
	ctx->vsp=local+9;
	w=(pointer)GREQP(ctx,2,local+7); /*>=*/
	if (w==NIL) goto IF24591;
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(*ftab[6])(ctx,1,local+7,&ftab[6],fqv[46]); /*unix::htons*/
	local[7]= w;
	local[8]= local[6];
	local[9]= makeint((eusinteger_t)2L);
	local[10]= fqv[43];
	ctx->vsp=local+11;
	w=(pointer)POKE(ctx,4,local+7); /*system:poke*/
	local[7]= w;
	goto IF24592;
IF24591:
	local[7]= NIL;
IF24592:
	goto IF24568;
IF24567:
	local[7]= NIL;
IF24568:
	w = local[6];
	local[6]= w;
	goto CON24383;
CON24430:
	local[6]= NIL;
CON24383:
	w = local[6];
	local[0]= w;
BLK24332:
	ctx->vsp=local; return(local[0]);}

/*:domain*/
static pointer M24631socket_port_domain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= fqv[43];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK24632:
	ctx->vsp=local; return(local[0]);}

/*:address*/
static pointer M24650socket_port_address(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[1];
	local[0]= w;
BLK24651:
	ctx->vsp=local; return(local[0]);}

/*:id*/
static pointer M24666socket_port_id(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[0];
	local[0]= w;
BLK24667:
	ctx->vsp=local; return(local[0]);}

/*:fd*/
static pointer M24682socket_port_fd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[0];
	local[0]= w;
BLK24683:
	ctx->vsp=local; return(local[0]);}

/*:infd*/
static pointer M24698socket_port_infd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[0];
	local[0]= w;
BLK24699:
	ctx->vsp=local; return(local[0]);}

/*:listen*/
static pointer M24714socket_port_listen(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT24718;}
	local[0]= makeint((eusinteger_t)3L);
ENT24718:
ENT24717:
	if (n>3) maerror();
	local[1]= argv[0]->c.obj.iv[0];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)LISTEN(ctx,2,local+1); /*unix:listen*/
	local[0]= w;
BLK24715:
	ctx->vsp=local; return(local[0]);}

/*:accept*/
static pointer M24739socket_port_accept(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[0];
	ctx->vsp=local+1;
	w=(pointer)ACCEPT(ctx,1,local+0); /*unix:accept*/
	local[0]= w;
BLK24740:
	ctx->vsp=local; return(local[0]);}

/*:flag*/
static pointer M24756socket_port_flag(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[0];
	local[1]= makeint((eusinteger_t)3L);
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= w;
BLK24757:
	ctx->vsp=local; return(local[0]);}

/*:async*/
static pointer M24773socket_port_async(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[2]==NIL) goto CON24790;
	local[0]= argv[0]->c.obj.iv[0];
	local[1]= makeint((eusinteger_t)4L);
	local[2]= argv[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)8192L);
	ctx->vsp=local+4;
	w=(pointer)LOGIOR(ctx,2,local+2); /*logior*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= argv[0]->c.obj.iv[0];
	local[1]= makeint((eusinteger_t)8L);
	ctx->vsp=local+2;
	w=(pointer)GETPID(ctx,0,local+2); /*unix:getpid*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= w;
	goto CON24788;
CON24790:
	local[0]= argv[0]->c.obj.iv[0];
	local[1]= makeint((eusinteger_t)4L);
	local[2]= argv[0];
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)8192L);
	ctx->vsp=local+4;
	w=(pointer)LOGNOT(ctx,1,local+3); /*lognot*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LOGAND(ctx,2,local+2); /*logand*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FCNTL(ctx,3,local+0); /*unix:fcntl*/
	local[0]= w;
	goto CON24788;
CON24816:
	local[0]= NIL;
CON24788:
	w = local[0];
	local[0]= w;
BLK24774:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M24835socket_port_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	argv[0]->c.obj.iv[1] = argv[2];
	local[0]= NIL;
	local[1]= argv[0];
	local[2]= fqv[54];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)1L);
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)SOCKET(ctx,3,local+1); /*unix:socket*/
	argv[0]->c.obj.iv[0] = w;
	local[1]= argv[0]->c.obj.iv[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)LESSP(ctx,2,local+1); /*<*/
	if (w==NIL) goto IF24879;
	w = argv[0]->c.obj.iv[0];
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK24836;
	goto IF24880;
IF24879:
	local[1]= NIL;
IF24880:
	local[1]= argv[0]->c.obj.iv[0];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(pointer)BIND(ctx,2,local+1); /*unix:bind*/
	local[0] = w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)LESSP(ctx,2,local+1); /*<*/
	if (w==NIL) goto CON24902;
	local[1]= fqv[55];
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,1,local+1,&ftab[7],fqv[56]); /*unix:perror*/
	local[1]= local[0];
	goto CON24900;
CON24902:
	local[1]= argv[0];
	local[2]= fqv[57];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[0] = w;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)NUMEQUAL(ctx,2,local+1); /*=*/
	if (w==NIL) goto IF24927;
	local[1]= argv[0];
	goto IF24928;
IF24927:
	local[1]= local[0];
IF24928:
	goto CON24900;
CON24912:
	local[1]= NIL;
CON24900:
	w = local[1];
	local[0]= w;
BLK24836:
	ctx->vsp=local; return(local[0]);}

/*make-socket-port*/
static pointer F22137make_socket_port(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= loadglobal(fqv[58]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= fqv[18];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
BLK24939:
	ctx->vsp=local; return(local[0]);}

/*:domain*/
static pointer M24980socket_stream_domain(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[3];
	local[1]= makeint((eusinteger_t)0L);
	local[2]= fqv[43];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK24981:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M24999socket_stream_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	if (n>=5) { local[0]=(argv[4]); goto ENT25003;}
	local[0]= makeint((eusinteger_t)128L);
ENT25003:
ENT25002:
	if (n>5) maerror();
	argv[0]->c.obj.iv[4] = argv[2];
	local[1]= loadglobal(fqv[29]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[18];
	local[4]= argv[2];
	local[5]= fqv[59];
	local[6]= fqv[11];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,6,local+2); /*send*/
	w = local[1];
	argv[0]->c.obj.iv[1] = w;
	local[1]= loadglobal(fqv[29]);
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
	local[2]= local[1];
	local[3]= fqv[18];
	local[4]= argv[2];
	local[5]= fqv[60];
	local[6]= fqv[12];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,6,local+2); /*send*/
	w = local[1];
	argv[0]->c.obj.iv[2] = w;
	argv[0]->c.obj.iv[3] = argv[3];
	w = argv[0];
	local[0]= w;
BLK25000:
	ctx->vsp=local; return(local[0]);}

/*make-server-socket-stream*/
static pointer F22145make_server_socket_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT25109;}
	local[0]= makeint((eusinteger_t)512L);
ENT25109:
ENT25108:
	if (n>2) maerror();
	local[1]= NIL;
	local[2]= argv[0];
	local[3]= fqv[61];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[1] = w;
	w = local[1];
	if (!isnum(w)) goto IF25142;
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,2,local+2); /*<*/
	if (w==NIL) goto IF25142;
	w = local[1];
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK25106;
	goto IF25143;
IF25142:
	local[2]= NIL;
IF25143:
	local[2]= loadglobal(fqv[62]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[18];
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= argv[0];
	local[7]= fqv[63];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,5,local+3); /*send*/
	w = local[2];
	local[0]= w;
BLK25106:
	ctx->vsp=local; return(local[0]);}

/*connect-sigalarm-handler*/
static pointer F22149connect_sigalarm_handler(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[64];
	local[1]= loadglobal(fqv[65]);
	ctx->vsp=local+2;
	w=(*ftab[8])(ctx,2,local+0,&ftab[8],fqv[66]); /*warn*/
	local[0]= w;
BLK25198:
	ctx->vsp=local; return(local[0]);}

/*make-client-socket-stream*/
static pointer F22152make_client_socket_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT25221;}
	local[0]= makeint((eusinteger_t)5L);
ENT25221:
	if (n>=3) { local[1]=(argv[2]); goto ENT25220;}
	local[1]= makeint((eusinteger_t)512L);
ENT25220:
ENT25219:
	if (n>3) maerror();
	local[2]= NIL;
	local[3]= NIL;
	local[4]= argv[0];
	local[5]= fqv[54];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)1L);
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)SOCKET(ctx,3,local+4); /*unix:socket*/
	local[2] = w;
	local[4]= local[2];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,2,local+4); /*<*/
	if (w==NIL) goto IF25263;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)UNIXCLOSE(ctx,1,local+4); /*unix:uclose*/
	w = local[2];
	ctx->vsp=local+4;
	local[0]=w;
	goto BLK25217;
	goto IF25264;
IF25263:
	local[4]= NIL;
IF25264:
	local[4]= makeint((eusinteger_t)14L);
	local[5]= fqv[67];
	ctx->vsp=local+6;
	w=(pointer)SIGNAL(ctx,2,local+4); /*unix:signal*/
	local[4]= w;
	storeglobal(fqv[68],w);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)ALARM(ctx,1,local+4); /*unix:alarm*/
	ctx->vsp=local+4;
	w = makeclosure(codevec,quotevec,UWP25295,env,argv,local);
	local[4]=(pointer)(ctx->protfp); local[5]=w;
	ctx->protfp=(struct protectframe *)(local+4);
	local[6]= local[2];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)CONNECT(ctx,2,local+6); /*unix:connect*/
	local[3] = w;
	w = local[3];
	ctx->vsp=local+6;
	UWP25295(ctx,0,local+6,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[4]= local[3];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)LESSP(ctx,2,local+4); /*<*/
	if (w==NIL) goto IF25312;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)UNIXCLOSE(ctx,1,local+4); /*unix:uclose*/
	w = local[3];
	ctx->vsp=local+4;
	local[0]=w;
	goto BLK25217;
	goto IF25313;
IF25312:
	local[4]= NIL;
IF25313:
	local[4]= loadglobal(fqv[62]);
	ctx->vsp=local+5;
	w=(pointer)INSTANTIATE(ctx,1,local+4); /*instantiate*/
	local[4]= w;
	local[5]= local[4];
	local[6]= fqv[18];
	local[7]= local[2];
	local[8]= argv[0];
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,5,local+5); /*send*/
	w = local[4];
	local[0]= w;
BLK25217:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP25295(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= makeint((eusinteger_t)0L);
	ctx->vsp=local+1;
	w=(pointer)ALARM(ctx,1,local+0); /*unix:alarm*/
	local[0]= makeint((eusinteger_t)14L);
	local[1]= loadglobal(fqv[68]);
	ctx->vsp=local+2;
	w=(pointer)SIGNAL(ctx,2,local+0); /*unix:signal*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*make-dgram-socket*/
static pointer F22155make_dgram_socket(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= argv[0];
	local[2]= fqv[54];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)2L);
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)SOCKET(ctx,3,local+1); /*unix:socket*/
	local[0] = w;
	local[1]= local[0];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)BIND(ctx,2,local+1); /*unix:bind*/
	w = local[0];
	local[0]= w;
BLK25377:
	ctx->vsp=local; return(local[0]);}

/*connect-server*/
static pointer F22158connect_server(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT25422;}
	local[0]= makeint((eusinteger_t)5L);
ENT25422:
ENT25421:
	if (n>3) maerror();
	local[1]= fqv[54];
	local[2]= makeint((eusinteger_t)2L);
	local[3]= fqv[69];
	local[4]= argv[0];
	local[5]= fqv[45];
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)F22128make_socket_address(ctx,6,local+1); /*make-socket-address*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F22152make_client_socket_stream(ctx,2,local+1); /*make-client-socket-stream*/
	local[0]= w;
BLK25419:
	ctx->vsp=local; return(local[0]);}

/*select-stream*/
static pointer F22162select_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT25459;}
	local[0]= makeflt(0.0000000000000000000000e+00);
ENT25459:
ENT25458:
	if (n>2) maerror();
	local[1]= makeint((eusinteger_t)0L);
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= NIL;
	local[5]= NIL;
	local[6]= argv[0];
WHL25509:
	if (local[6]==NIL) goto WHX25510;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	w = local[5];
	if (!isint(w)) goto CON25562;
	local[7]= local[5];
	goto CON25560;
CON25562:
	local[7]= local[5];
	local[8]= fqv[2];
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,2,local+7); /*send*/
	local[7]= w;
	goto CON25560;
CON25568:
	local[7]= NIL;
CON25560:
	local[4] = local[7];
	local[7]= makeint((eusinteger_t)1L);
	local[8]= local[1];
	local[9]= local[4];
	local[10]= makeint((eusinteger_t)1L);
	ctx->vsp=local+11;
	w=(pointer)DPB(ctx,4,local+7); /*dpb*/
	local[1] = w;
	local[7]= loadglobal(fqv[70]);
	local[8]= local[4];
	w = local[5];
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[8]); v=local[7];
	  v->c.vec.v[i]=w;}
	goto WHL25509;
WHX25510:
	local[7]= NIL;
BLK25511:
	w = NIL;
	local[5]= local[1];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)SELECT_READ(ctx,2,local+5); /*unix:select-read-fd*/
	local[1] = w;
WHL25611:
	local[5]= local[1];
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)GREATERP(ctx,2,local+5); /*>*/
	if (w==NIL) goto WHX25612;
	local[5]= local[1];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)LOGTEST(ctx,2,local+5); /*logtest*/
	if (w==NIL) goto IF25619;
	local[5]= loadglobal(fqv[70]);
	{ register eusinteger_t i=intval(local[3]);
	  w=(local[5]->c.vec.v[i]);}
	local[5]= w;
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	local[5]= local[2];
	goto IF25620;
IF25619:
	local[5]= NIL;
IF25620:
	local[5]= local[1];
	local[6]= makeint((eusinteger_t)-1L);
	ctx->vsp=local+7;
	w=(pointer)ASH(ctx,2,local+5); /*ash*/
	local[1] = w;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL25611;
WHX25612:
	local[5]= NIL;
BLK25613:
	w = local[2];
	local[0]= w;
BLK25456:
	ctx->vsp=local; return(local[0]);}

/*sigio-handler*/
static pointer F22167sigio_handler(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= loadglobal(fqv[71]);
	ctx->vsp=local+2;
	w=(pointer)F22162select_stream(ctx,1,local+1); /*select-stream*/
	local[1]= w;
WHL25703:
	if (local[1]==NIL) goto WHX25704;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= loadglobal(fqv[72]);
	w = local[0];
	if (!isint(w)) goto IF25756;
	local[3]= local[0];
	goto IF25757;
IF25756:
	local[3]= local[0];
	local[4]= fqv[2];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
IF25757:
	{ register eusinteger_t i=intval(local[3]);
	  w=(local[2]->c.vec.v[i]);}
	local[2]= w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)FUNCALL(ctx,2,local+2); /*funcall*/
	goto WHL25703;
WHX25704:
	local[2]= NIL;
BLK25705:
	w = NIL;
	local[0]= w;
BLK25671:
	ctx->vsp=local; return(local[0]);}

/*def-async*/
static pointer F25776(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST25780:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= NIL;
	local[2]= NIL;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.cdr==NIL) goto CON25797;
	ctx->vsp=local+3;
	w=(pointer)GENSYM(ctx,0,local+3); /*gensym*/
	local[2] = w;
	local[3]= fqv[73];
	local[4]= local[2];
	w = local[0];
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[0];
	goto CON25795;
CON25797:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.car;
	local[0] = NIL;
	local[3]= local[0];
	goto CON25795;
CON25829:
	local[3]= NIL;
CON25795:
	local[3]= fqv[74];
	local[4]= fqv[75];
	local[5]= argv[0];
	local[6]= fqv[71];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[76];
	local[6]= fqv[77];
	local[7]= fqv[37];
	local[8]= fqv[78];
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
	local[6]= fqv[34];
	local[7]= fqv[79];
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[74];
	local[9]= fqv[80];
	local[10]= argv[0];
	local[11]= fqv[81];
	local[12]= fqv[82];
	local[13]= fqv[80];
	local[14]= argv[0];
	local[15]= fqv[83];
	local[16]= fqv[84];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[85];
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
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[80];
	local[11]= argv[0];
	local[12]= fqv[86];
	local[13]= fqv[87];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	local[13]= w;
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
	local[9]= fqv[4];
	local[10]= argv[0];
	local[11]= fqv[6];
	local[12]= fqv[88];
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
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[89];
	local[8]= fqv[90];
	local[9]= fqv[72];
	local[10]= fqv[34];
	local[11]= fqv[79];
	local[12]= argv[0];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= argv[0];
	local[13]= fqv[4];
	local[14]= argv[0];
	local[15]= fqv[2];
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
	local[10]= cons(ctx,local[10],w);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= local[2];
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
BLK25778:
	ctx->vsp=local; return(local[0]);}

/*:destinations*/
static pointer M26081broadcast_stream_destinations(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT26085;}
	local[0]= NIL;
ENT26085:
ENT26084:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF26101;
	local[1]= local[0];
	w = argv[0]->c.obj.iv[5];
	ctx->vsp=local+2;
	argv[0]->c.obj.iv[5] = cons(ctx,local[1],w);
	local[1]= argv[0]->c.obj.iv[5];
	goto IF26102;
IF26101:
	local[1]= NIL;
IF26102:
	w = argv[0]->c.obj.iv[5];
	local[0]= w;
BLK26082:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M26122broadcast_stream_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= *(ovafptr(argv[1],fqv[15]));
	local[2]= fqv[18];
	local[3]= fqv[12];
	local[4]= makeint((eusinteger_t)256L);
	ctx->vsp=local+5;
	w=(pointer)SENDMESSAGE(ctx,5,local+0); /*send-message*/
	argv[0]->c.obj.iv[5] = argv[2];
	w = argv[0];
	local[0]= w;
BLK26123:
	ctx->vsp=local; return(local[0]);}

/*:flush*/
static pointer M26158broadcast_stream_flush(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0]->c.obj.iv[3];
	local[3]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LESSP(ctx,2,local+2); /*<*/
	if (w==NIL) goto IF26175;
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= makeint((eusinteger_t)0L);
	local[4]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+5;
	w=(pointer)SUBSEQ(ctx,3,local+2); /*subseq*/
	local[1] = w;
	local[2]= local[1];
	goto IF26176;
IF26175:
	local[1] = argv[0]->c.obj.iv[2];
	local[2]= local[1];
IF26176:
	argv[0]->c.obj.iv[3] = makeint((eusinteger_t)0L);
	local[2]= NIL;
	local[3]= argv[0]->c.obj.iv[5];
WHL26223:
	if (local[3]==NIL) goto WHX26224;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= local[1];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)PRINC(ctx,2,local+4); /*princ*/
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)FINOUT(ctx,1,local+4); /*finish-output*/
	goto WHL26223;
WHX26224:
	local[4]= NIL;
BLK26225:
	w = NIL;
	w = T;
	local[0]= w;
BLK26159:
	ctx->vsp=local; return(local[0]);}

/*:close*/
static pointer M26286broadcast_stream_close(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[0]->c.obj.iv[5];
WHL26316:
	if (local[1]==NIL) goto WHX26317;
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
	w=(pointer)CLOSE(ctx,1,local+2); /*close*/
	goto WHL26316;
WHX26317:
	local[2]= NIL;
BLK26318:
	w = NIL;
	local[0]= w;
BLK26287:
	ctx->vsp=local; return(local[0]);}

/*make-broadcast-stream*/
static pointer F22176make_broadcast_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST26376:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= local[0];
WHL26406:
	if (local[4]==NIL) goto WHX26407;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)STREAMP(ctx,1,local+5); /*streamp*/
	if (w==NIL) goto IF26455;
	local[5]= local[3];
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	local[5]= local[2];
	goto IF26456;
IF26455:
	local[5]= local[3];
	local[6]= fqv[91];
	local[7]= fqv[12];
	ctx->vsp=local+8;
	w=(*ftab[9])(ctx,3,local+5,&ftab[9],fqv[92]); /*open*/
	local[5]= w;
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	local[5]= local[2];
IF26456:
	goto WHL26406;
WHX26407:
	local[5]= NIL;
BLK26408:
	w = NIL;
	local[3]= loadglobal(fqv[93]);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,1,local+3); /*instantiate*/
	local[3]= w;
	local[4]= local[3];
	local[5]= fqv[18];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)SEND(ctx,3,local+4); /*send*/
	w = local[3];
	local[0]= w;
BLK26374:
	ctx->vsp=local; return(local[0]);}

/*read-buffer*/
static pointer F22179read_buffer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT26527;}
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
ENT26527:
ENT26526:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[91];
	local[3]= fqv[11];
	ctx->vsp=local+4;
	w=(*ftab[9])(ctx,3,local+1,&ftab[9],fqv[92]); /*open*/
	local[1]= w;
	ctx->vsp=local+2;
	w = makeclosure(codevec,quotevec,UWP26564,env,argv,local);
	local[2]=(pointer)(ctx->protfp); local[3]=w;
	ctx->protfp=(struct protectframe *)(local+2);
	local[4]= makeint((eusinteger_t)0L);
WHL26581:
	local[5]= local[4];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)LESSP(ctx,2,local+5); /*<*/
	if (w==NIL) goto WHX26582;
	local[5]= local[4];
	local[6]= local[1];
	local[7]= fqv[94];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= argv[1];
	local[8]= local[0];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)MINUS(ctx,2,local+8); /*-*/
	local[8]= w;
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)UNIXREAD(ctx,4,local+6); /*unix:uread*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	local[4] = w;
	goto WHL26581;
WHX26582:
	local[5]= NIL;
BLK26583:
	w = local[5];
	w = argv[1];
	ctx->vsp=local+4;
	UWP26564(ctx,0,local+4,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK26524:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP26564(ctx,n,argv,env)
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

/*write-buffer*/
static pointer F22182write_buffer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT26638;}
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
ENT26638:
ENT26637:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= fqv[91];
	local[3]= fqv[12];
	ctx->vsp=local+4;
	w=(*ftab[9])(ctx,3,local+1,&ftab[9],fqv[92]); /*open*/
	local[1]= w;
	ctx->vsp=local+2;
	w = makeclosure(codevec,quotevec,UWP26675,env,argv,local);
	local[2]=(pointer)(ctx->protfp); local[3]=w;
	ctx->protfp=(struct protectframe *)(local+2);
	local[4]= local[1];
	local[5]= argv[1];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)UNIXWRITE(ctx,3,local+4); /*unix:write*/
	ctx->vsp=local+4;
	UWP26675(ctx,0,local+4,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK26635:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP26675(ctx,n,argv,env)
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

/*:init*/
static pointer M26724port_selector_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST26727:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= loadglobal(fqv[95]);
	local[2]= fqv[96];
	local[3]= fqv[97];
	ctx->vsp=local+4;
	w=(*ftab[10])(ctx,3,local+1,&ftab[10],fqv[98]); /*make-array*/
	argv[0]->c.obj.iv[1] = w;
	local[1]= loadglobal(fqv[95]);
	local[2]= fqv[96];
	local[3]= fqv[97];
	ctx->vsp=local+4;
	w=(*ftab[10])(ctx,3,local+1,&ftab[10],fqv[98]); /*make-array*/
	argv[0]->c.obj.iv[3] = w;
	local[1]= loadglobal(fqv[95]);
	ctx->vsp=local+2;
	w=(*ftab[10])(ctx,1,local+1,&ftab[10],fqv[98]); /*make-array*/
	argv[0]->c.obj.iv[2] = w;
	local[1]= NIL;
	local[2]= local[0];
WHL26786:
	if (local[2]==NIL) goto WHX26787;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= (pointer)get_sym_func(fqv[4]);
	local[4]= argv[0];
	local[5]= fqv[99];
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.cdr;
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,6,local+3); /*apply*/
	goto WHL26786;
WHX26787:
	local[3]= NIL;
BLK26788:
	w = NIL;
	w = argv[0];
	local[0]= w;
BLK26725:
	ctx->vsp=local; return(local[0]);}

/*:get-stream-fd*/
static pointer M26869port_selector_get_stream_fd(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)STREAMP(ctx,1,local+1); /*streamp*/
	if (w==NIL) goto CON26898;
	local[1]= argv[2];
	local[2]= fqv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	goto CON26896;
CON26898:
	w = argv[2];
	if (!isnum(w)) goto CON26910;
	local[1]= argv[2];
	goto CON26896;
CON26910:
	local[1]= argv[2];
	local[2]= fqv[94];
	ctx->vsp=local+3;
	w=(*ftab[11])(ctx,2,local+1,&ftab[11],fqv[100]); /*find-method*/
	if (w==NIL) goto CON26916;
	local[1]= argv[2];
	local[2]= fqv[94];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	goto CON26896;
CON26916:
	local[1]= fqv[101];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
	goto CON26896;
CON26931:
	local[1]= NIL;
CON26896:
	local[0] = local[1];
	local[1]= local[0];
	local[2]= loadglobal(fqv[95]);
	ctx->vsp=local+3;
	w=(pointer)GREQP(ctx,2,local+1); /*>=*/
	if (w==NIL) goto IF26940;
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
	goto IF26941;
IF26940:
	local[1]= NIL;
IF26941:
	w = local[0];
	local[0]= w;
BLK26870:
	ctx->vsp=local; return(local[0]);}

/*:add-port*/
static pointer M26954port_selector_add_port(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
RST26957:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-4);
	local[1]= argv[0];
	local[2]= fqv[103];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[1]= w;
	local[2]= argv[0]->c.obj.iv[2];
	local[3]= local[1];
	local[4]= argv[2];
	local[5]= argv[3];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)LIST_STAR(ctx,3,local+4); /*list**/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[0]= w;
BLK26955:
	ctx->vsp=local; return(local[0]);}

/*:remove-port*/
static pointer M27008port_selector_remove_port(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[103];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= w;
	local[1]= argv[0]->c.obj.iv[2];
	local[2]= local[0];
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)ASET(ctx,3,local+1); /*aset*/
	local[1]= argv[0]->c.obj.iv[1];
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)ASET(ctx,3,local+1); /*aset*/
	local[0]= w;
BLK27009:
	ctx->vsp=local; return(local[0]);}

/*:streams*/
static pointer M27052port_selector_streams(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= loadglobal(fqv[95]);
WHL27097:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX27098;
	local[3]= argv[0]->c.obj.iv[2];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)AREF(ctx,2,local+3); /*aref*/
	if (w==NIL) goto IF27106;
	local[3]= argv[0]->c.obj.iv[2];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)AREF(ctx,2,local+3); /*aref*/
	local[3]= w;
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[0];
	goto IF27107;
IF27106:
	local[3]= NIL;
IF27107:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL27097;
WHX27098:
	local[3]= NIL;
BLK27099:
	w = NIL;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)NREVERSE(ctx,1,local+1); /*nreverse*/
	local[0]= w;
BLK27053:
	ctx->vsp=local; return(local[0]);}

/*:fds*/
static pointer M27147port_selector_fds(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= loadglobal(fqv[95]);
WHL27192:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX27193;
	local[3]= makeint((eusinteger_t)1L);
	local[4]= argv[0]->c.obj.iv[1];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)NUMEQUAL(ctx,2,local+3); /*=*/
	if (w==NIL) goto IF27201;
	local[3]= local[1];
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[0];
	goto IF27202;
IF27201:
	local[3]= NIL;
IF27202:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL27192;
WHX27193:
	local[3]= NIL;
BLK27194:
	w = NIL;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)NREVERSE(ctx,1,local+1); /*nreverse*/
	local[0]= w;
BLK27148:
	ctx->vsp=local; return(local[0]);}

/*:select*/
static pointer M27239port_selector_select(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT27243;}
	local[0]= makeflt(9.9999999999999977795540e-02);
ENT27243:
ENT27242:
	if (n>3) maerror();
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,2,local+4,&ftab[4],fqv[24]); /*replace*/
	local[4]= argv[0]->c.obj.iv[3];
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)SELECT(ctx,4,local+4); /*unix:select*/
	local[1] = w;
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)GREATERP(ctx,2,local+4); /*>*/
	if (w==NIL) goto IF27287;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= loadglobal(fqv[95]);
WHL27316:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX27317;
	local[6]= argv[0]->c.obj.iv[3];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,2,local+6); /*aref*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)1L);
	ctx->vsp=local+8;
	w=(pointer)NUMEQUAL(ctx,2,local+6); /*=*/
	if (w==NIL) goto IF27326;
	local[6]= argv[0]->c.obj.iv[2];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,2,local+6); /*aref*/
	local[2] = w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.car;
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(*ftab[12])(ctx,1,local+6,&ftab[12],fqv[104]); /*functionp*/
	if (w==NIL) goto IF27366;
	local[6]= local[2];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)APPLY(ctx,2,local+6); /*apply*/
	local[6]= w;
	goto IF27367;
IF27366:
	local[6]= (pointer)get_sym_func(fqv[4]);
	local[7]= local[2];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,3,local+6); /*apply*/
	local[6]= w;
IF27367:
	goto IF27327;
IF27326:
	local[6]= NIL;
IF27327:
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL27316;
WHX27317:
	local[6]= NIL;
BLK27318:
	w = T;
	local[4]= w;
	goto IF27288;
IF27287:
	local[4]= NIL;
IF27288:
	w = local[4];
	local[0]= w;
BLK27240:
	ctx->vsp=local; return(local[0]);}

/*:select-loop*/
static pointer M27400port_selector_select_loop(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT27405;}
	local[0]= makeflt(9.9999999999999977795540e-02);
ENT27405:
	if (n>=4) { local[1]=(argv[3]); goto ENT27404;}
	local[1]= NIL;
ENT27404:
ENT27403:
	ctx->vsp=local+2;
	local[2]= minilist(ctx,&argv[n],n-4);
	{jmp_buf jb;
	w = fqv[105];
	ctx->vsp=local+3;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT27426;}
WHL27433:
	if (T==NIL) goto WHX27434;
	local[9]= argv[0];
	local[10]= fqv[106];
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)SEND(ctx,3,local+9); /*send*/
	if (local[1]==NIL) goto IF27447;
	local[9]= local[1];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)APPLY(ctx,2,local+9); /*apply*/
	local[9]= w;
	goto IF27448;
IF27447:
	local[9]= NIL;
IF27448:
	goto WHL27433;
WHX27434:
	local[9]= NIL;
BLK27435:
	w = local[9];
CAT27426:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[0]= w;
BLK27401:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___stream(ctx,n,argv,env)
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
	local[0]= fqv[107];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF27464;
	local[0]= fqv[108];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[109],w);
	goto IF27465;
IF27464:
	local[0]= fqv[110];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF27465:
	local[0]= fqv[111];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22244io_stream_instream,fqv[112],fqv[28],fqv[113]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22283io_stream_outstream,fqv[114],fqv[28],fqv[115]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22322io_stream_infd,fqv[2],fqv[28],fqv[116]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22341io_stream_outfd,fqv[3],fqv[28],fqv[117]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22360io_stream_in,fqv[118],fqv[28],fqv[119]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22384io_stream_out,fqv[120],fqv[28],fqv[121]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22408io_stream_flag,fqv[5],fqv[28],fqv[122]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22427io_stream_async,fqv[6],fqv[28],fqv[123]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22449io_stream_fname,fqv[7],fqv[28],fqv[124]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22468io_stream_init,fqv[18],fqv[28],fqv[125]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22515stream_reset,fqv[10],fqv[31],fqv[126]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22554stream_discard,fqv[26],fqv[31],fqv[127]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22590stream_count,fqv[128],fqv[31],fqv[129]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22606stream_tail,fqv[130],fqv[31],fqv[131]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22644stream_chars_left,fqv[20],fqv[31],fqv[132]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22664stream_tail_string,fqv[22],fqv[31],fqv[133]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22683stream_buffer,fqv[134],fqv[31],fqv[135]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22751stream_init,fqv[18],fqv[31],fqv[136]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[137],module,F22081reset_stream,fqv[138]);
	local[0]= fqv[85];
	local[1]= fqv[139];
	local[2]= makeint((eusinteger_t)8192L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[83];
	local[1]= fqv[139];
	local[2]= makeint((eusinteger_t)3L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[81];
	local[1]= fqv[139];
	local[2]= makeint((eusinteger_t)4L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[86];
	local[1]= fqv[139];
	local[2]= makeint((eusinteger_t)8L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22869file_stream_fd,fqv[94],fqv[29],fqv[140]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22885file_stream_instream,fqv[112],fqv[29],fqv[141]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22908file_stream_outstream,fqv[114],fqv[29],fqv[142]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22931file_stream_infd,fqv[2],fqv[29],fqv[143]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22954file_stream_outfd,fqv[3],fqv[29],fqv[144]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22977file_stream_fname,fqv[7],fqv[29],fqv[145]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M22993file_stream_flag,fqv[5],fqv[29],fqv[146]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M23010file_stream_async,fqv[6],fqv[29],fqv[147]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M23069file_stream_nonblock,fqv[148],fqv[29],fqv[149]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M23131file_stream_prin1,fqv[16],fqv[29],fqv[150]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M23172file_stream_init,fqv[18],fqv[29],fqv[151]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M23248file_stream_read_bytes,fqv[152],fqv[29],fqv[153]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M23425file_stream_read_bytes_eof,fqv[154],fqv[29],fqv[155]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[156],module,F22092make_two_way_stream,fqv[157]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[158],module,F22095make_msgq_input_stream,fqv[159]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[160],module,F22098make_msgq_output_stream,fqv[161]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[33],module,F22102make_string_input_stream,fqv[162]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[41],module,F22105make_string_output_stream,fqv[163]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[164],module,F23811,fqv[165]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[166],module,F23979,fqv[167]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[42],module,F22110get_output_stream_string,fqv[168]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[169],module,F22113read_from_string,fqv[170]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[171],module,F22116princ_to_string,fqv[172]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[173],module,F22119prin1_to_string,fqv[174]);
	local[0]= fqv[51];
	local[1]= fqv[175];
	local[2]= fqv[51];
	local[3]= fqv[176];
	local[4]= loadglobal(fqv[9]);
	local[5]= fqv[177];
	local[6]= fqv[39];
	local[7]= fqv[178];
	local[8]= NIL;
	local[9]= fqv[96];
	local[10]= fqv[179];
	local[11]= fqv[180];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[181];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[13])(ctx,13,local+2,&ftab[13],fqv[182]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24190socket_address_domain,fqv[54],fqv[51],fqv[183]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24209socket_address_port,fqv[45],fqv[51],fqv[184]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24231socket_address_host,fqv[69],fqv[51],fqv[185]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24248socket_address_next_port,fqv[186],fqv[51],fqv[187]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24277socket_address_prin1,fqv[16],fqv[51],fqv[188]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[189],module,F22128make_socket_address,fqv[190]);
	local[0]= fqv[58];
	local[1]= fqv[175];
	local[2]= fqv[58];
	local[3]= fqv[176];
	local[4]= loadglobal(fqv[191]);
	local[5]= fqv[177];
	local[6]= fqv[192];
	local[7]= fqv[178];
	local[8]= NIL;
	local[9]= fqv[96];
	local[10]= NIL;
	local[11]= fqv[180];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[181];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[13])(ctx,13,local+2,&ftab[13],fqv[182]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[193];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24631socket_port_domain,fqv[54],fqv[58],fqv[194]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24650socket_port_address,fqv[63],fqv[58],fqv[195]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24666socket_port_id,fqv[196],fqv[58],fqv[197]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24682socket_port_fd,fqv[94],fqv[58],fqv[198]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24698socket_port_infd,fqv[2],fqv[58],fqv[199]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24714socket_port_listen,fqv[57],fqv[58],fqv[200]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24739socket_port_accept,fqv[61],fqv[58],fqv[201]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24756socket_port_flag,fqv[5],fqv[58],fqv[202]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24773socket_port_async,fqv[6],fqv[58],fqv[203]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24835socket_port_init,fqv[18],fqv[58],fqv[204]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[205],module,F22137make_socket_port,fqv[206]);
	local[0]= fqv[62];
	local[1]= fqv[175];
	local[2]= fqv[62];
	local[3]= fqv[176];
	local[4]= loadglobal(fqv[28]);
	local[5]= fqv[177];
	local[6]= fqv[207];
	local[7]= fqv[178];
	local[8]= NIL;
	local[9]= fqv[96];
	local[10]= NIL;
	local[11]= fqv[180];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[181];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[13])(ctx,13,local+2,&ftab[13],fqv[182]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24980socket_stream_domain,fqv[54],fqv[62],fqv[208]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M24999socket_stream_init,fqv[18],fqv[62],fqv[209]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[210],module,F22145make_server_socket_stream,fqv[211]);
	local[0]= fqv[68];
	local[1]= fqv[212];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF27737;
	local[0]= fqv[68];
	local[1]= fqv[212];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[68];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF27760;
	local[0]= fqv[68];
	local[1]= fqv[175];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF27761;
IF27760:
	local[0]= NIL;
IF27761:
	local[0]= fqv[68];
	goto IF27738;
IF27737:
	local[0]= NIL;
IF27738:
	ctx->vsp=local+0;
	compfun(ctx,fqv[67],module,F22149connect_sigalarm_handler,fqv[213]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[214],module,F22152make_client_socket_stream,fqv[215]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[216],module,F22155make_dgram_socket,fqv[217]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[218],module,F22158connect_server,fqv[219]);
	local[0]= fqv[70];
	local[1]= fqv[212];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF27788;
	local[0]= fqv[70];
	local[1]= fqv[212];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[70];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF27811;
	local[0]= fqv[70];
	local[1]= fqv[175];
	local[2]= loadglobal(fqv[220]);
	local[3]= makeint((eusinteger_t)32L);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF27812;
IF27811:
	local[0]= NIL;
IF27812:
	local[0]= fqv[70];
	goto IF27789;
IF27788:
	local[0]= NIL;
IF27789:
	ctx->vsp=local+0;
	compfun(ctx,fqv[221],module,F22162select_stream,fqv[222]);
	local[0]= fqv[71];
	local[1]= fqv[212];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF27837;
	local[0]= fqv[71];
	local[1]= fqv[212];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[71];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF27860;
	local[0]= fqv[71];
	local[1]= fqv[175];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF27861;
IF27860:
	local[0]= NIL;
IF27861:
	local[0]= fqv[71];
	goto IF27838;
IF27837:
	local[0]= NIL;
IF27838:
	local[0]= fqv[72];
	local[1]= fqv[212];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF27880;
	local[0]= fqv[72];
	local[1]= fqv[212];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[72];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF27903;
	local[0]= fqv[72];
	local[1]= fqv[175];
	local[2]= loadglobal(fqv[220]);
	local[3]= makeint((eusinteger_t)32L);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF27904;
IF27903:
	local[0]= NIL;
IF27904:
	local[0]= fqv[72];
	goto IF27881;
IF27880:
	local[0]= NIL;
IF27881:
	ctx->vsp=local+0;
	compfun(ctx,fqv[78],module,F22167sigio_handler,fqv[223]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[224],module,F25776,fqv[225]);
	local[0]= fqv[93];
	local[1]= fqv[175];
	local[2]= fqv[93];
	local[3]= fqv[176];
	local[4]= loadglobal(fqv[31]);
	local[5]= fqv[177];
	local[6]= fqv[226];
	local[7]= fqv[178];
	local[8]= NIL;
	local[9]= fqv[96];
	local[10]= NIL;
	local[11]= fqv[180];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[181];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[13])(ctx,13,local+2,&ftab[13],fqv[182]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M26081broadcast_stream_destinations,fqv[227],fqv[93],fqv[228]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M26122broadcast_stream_init,fqv[18],fqv[93],fqv[229]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M26158broadcast_stream_flush,fqv[230],fqv[93],fqv[231]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M26286broadcast_stream_close,fqv[232],fqv[93],fqv[233]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[234],module,F22176make_broadcast_stream,fqv[235]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[236],module,F22179read_buffer,fqv[237]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[238],module,F22182write_buffer,fqv[239]);
	local[0]= fqv[95];
	local[1]= fqv[175];
	local[2]= makeint((eusinteger_t)64L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[240];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[241];
	local[1]= fqv[175];
	local[2]= fqv[241];
	local[3]= fqv[176];
	local[4]= loadglobal(fqv[242]);
	local[5]= fqv[177];
	local[6]= fqv[243];
	local[7]= fqv[178];
	local[8]= NIL;
	local[9]= fqv[96];
	local[10]= NIL;
	local[11]= fqv[180];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[181];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[13])(ctx,13,local+2,&ftab[13],fqv[182]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M26724port_selector_init,fqv[18],fqv[241],fqv[244]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M26869port_selector_get_stream_fd,fqv[103],fqv[241],fqv[245]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M26954port_selector_add_port,fqv[99],fqv[241],fqv[246]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M27008port_selector_remove_port,fqv[247],fqv[241],fqv[248]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M27052port_selector_streams,fqv[249],fqv[241],fqv[250]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M27147port_selector_fds,fqv[251],fqv[241],fqv[252]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M27239port_selector_select,fqv[106],fqv[241],fqv[253]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M27400port_selector_select_loop,fqv[105],fqv[241],fqv[254]);
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<14; i++) ftab[i]=fcallx;
}
