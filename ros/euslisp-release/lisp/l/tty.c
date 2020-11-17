/* ./tty.c :  entry=tty */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "tty.h"
#pragma init (register_tty)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___tty();
extern pointer build_quote_vector();
static int register_tty()
  { add_module_initializer("___tty", ___tty);}

static pointer F73805tty_raw();
static pointer F73807tty_cooked();
static pointer F73809backspace();
static pointer F73811cursor_up();
static pointer F73813cursor_down();
static pointer F73815cursor_forward();
static pointer F73817cursor_backward();
static pointer F73819cursor_return();
static pointer F73821cursor_pos();
static pointer F73823erase_eol();

/*tty-raw*/
static pointer F73805tty_raw(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT73854;}
	local[0]= makeint((eusinteger_t)0L);
ENT73854:
ENT73853:
	if (n>1) maerror();
	local[1]= loadglobal(fqv[0]);
	ctx->vsp=local+2;
	w=(pointer)COPYSEQ(ctx,1,local+1); /*copy-seq*/
	local[1]= w;
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)7L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)12L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)13L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)14L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)15L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)21L);
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[1];
	local[3]= makeint((eusinteger_t)22L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ASET(ctx,3,local+2); /*aset*/
	local[2]= local[0];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[0])(ctx,2,local+2,&ftab[0],fqv[1]); /*unix:tcsets*/
	local[0]= w;
BLK73851:
	ctx->vsp=local; return(local[0]);}

/*tty-cooked*/
static pointer F73807tty_cooked(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT73927;}
	local[0]= makeint((eusinteger_t)0L);
ENT73927:
ENT73926:
	if (n>1) maerror();
	local[1]= local[0];
	local[2]= loadglobal(fqv[0]);
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,2,local+1,&ftab[0],fqv[1]); /*unix:tcsets*/
	local[0]= w;
BLK73924:
	ctx->vsp=local; return(local[0]);}

/*backspace*/
static pointer F73809backspace(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT73947;}
	local[0]= makeint((eusinteger_t)1L);
ENT73947:
ENT73946:
	if (n>1) maerror();
	local[1]= makeint((eusinteger_t)0L);
	local[2]= local[0];
WHL73982:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX73983;
	local[3]= makeint((eusinteger_t)8L);
	local[4]= loadglobal(fqv[2]);
	ctx->vsp=local+5;
	w=(pointer)WRTBYTE(ctx,2,local+3); /*write-byte*/
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL73982;
WHX73983:
	local[3]= NIL;
BLK73984:
	w = NIL;
	local[1]= loadglobal(fqv[2]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[0]= w;
BLK73944:
	ctx->vsp=local; return(local[0]);}

/*cursor-up*/
static pointer F73811cursor_up(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT74015;}
	local[0]= makeint((eusinteger_t)1L);
ENT74015:
ENT74014:
	if (n>1) maerror();
	local[1]= loadglobal(fqv[2]);
	local[2]= fqv[3];
	local[3]= makeint((eusinteger_t)27L);
	local[4]= makeint((eusinteger_t)91L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,5,local+1); /*format*/
	local[1]= loadglobal(fqv[2]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[0]= w;
BLK74012:
	ctx->vsp=local; return(local[0]);}

/*cursor-down*/
static pointer F73813cursor_down(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT74039;}
	local[0]= makeint((eusinteger_t)1L);
ENT74039:
ENT74038:
	if (n>1) maerror();
	local[1]= loadglobal(fqv[2]);
	local[2]= fqv[4];
	local[3]= makeint((eusinteger_t)27L);
	local[4]= makeint((eusinteger_t)91L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,5,local+1); /*format*/
	local[1]= loadglobal(fqv[2]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[0]= w;
BLK74036:
	ctx->vsp=local; return(local[0]);}

/*cursor-forward*/
static pointer F73815cursor_forward(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT74063;}
	local[0]= makeint((eusinteger_t)1L);
ENT74063:
ENT74062:
	if (n>1) maerror();
	local[1]= loadglobal(fqv[2]);
	local[2]= fqv[5];
	local[3]= makeint((eusinteger_t)27L);
	local[4]= makeint((eusinteger_t)91L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,5,local+1); /*format*/
	local[1]= loadglobal(fqv[2]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[0]= w;
BLK74060:
	ctx->vsp=local; return(local[0]);}

/*cursor-backward*/
static pointer F73817cursor_backward(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT74087;}
	local[0]= makeint((eusinteger_t)1L);
ENT74087:
ENT74086:
	if (n>1) maerror();
	local[1]= loadglobal(fqv[2]);
	local[2]= fqv[6];
	local[3]= makeint((eusinteger_t)27L);
	local[4]= makeint((eusinteger_t)91L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,5,local+1); /*format*/
	local[1]= loadglobal(fqv[2]);
	ctx->vsp=local+2;
	w=(pointer)FINOUT(ctx,1,local+1); /*finish-output*/
	local[0]= w;
BLK74084:
	ctx->vsp=local; return(local[0]);}

/*cursor-return*/
static pointer F73819cursor_return(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= loadglobal(fqv[2]);
	local[1]= fqv[7];
	local[2]= makeint((eusinteger_t)13L);
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= loadglobal(fqv[2]);
	ctx->vsp=local+1;
	w=(pointer)FINOUT(ctx,1,local+0); /*finish-output*/
	local[0]= w;
BLK74108:
	ctx->vsp=local; return(local[0]);}

/*cursor-pos*/
static pointer F73821cursor_pos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	if (w==NIL) goto IF74134;
	ctx->vsp=local+0;
	w=(pointer)F73819cursor_return(ctx,0,local+0); /*cursor-return*/
	local[0]= w;
	goto IF74135;
IF74134:
	local[0]= loadglobal(fqv[2]);
	local[1]= fqv[8];
	local[2]= makeint((eusinteger_t)13L);
	local[3]= makeint((eusinteger_t)27L);
	local[4]= makeint((eusinteger_t)91L);
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,6,local+0); /*format*/
	local[0]= w;
IF74135:
	local[0]= loadglobal(fqv[2]);
	ctx->vsp=local+1;
	w=(pointer)FINOUT(ctx,1,local+0); /*finish-output*/
	local[0]= w;
BLK74124:
	ctx->vsp=local; return(local[0]);}

/*erase-eol*/
static pointer F73823erase_eol(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= loadglobal(fqv[2]);
	local[1]= fqv[9];
	local[2]= makeint((eusinteger_t)27L);
	local[3]= makeint((eusinteger_t)91L);
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,4,local+0); /*format*/
	local[0]= loadglobal(fqv[2]);
	ctx->vsp=local+1;
	w=(pointer)FINOUT(ctx,1,local+0); /*finish-output*/
	local[0]= w;
BLK74151:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___tty(ctx,n,argv,env)
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
	local[0]= fqv[10];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[11],module,F73805tty_raw,fqv[12]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[13],module,F73807tty_cooked,fqv[14]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[15],module,F73809backspace,fqv[16]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[17],module,F73811cursor_up,fqv[18]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[19],module,F73813cursor_down,fqv[20]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[21],module,F73815cursor_forward,fqv[22]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[23],module,F73817cursor_backward,fqv[24]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[25],module,F73819cursor_return,fqv[26]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[27],module,F73821cursor_pos,fqv[28]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[29],module,F73823erase_eol,fqv[30]);
	local[0]= fqv[31];
	local[1]= fqv[32];
	ctx->vsp=local+2;
	w=(*ftab[1])(ctx,2,local+0,&ftab[1],fqv[33]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<2; i++) ftab[i]=fcallx;
}
