/* ./toplevel.c :  entry=toplevel */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "toplevel.h"
#pragma init (register_toplevel)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___toplevel();
extern pointer build_quote_vector();
static int register_toplevel()
  { add_module_initializer("___toplevel", ___toplevel);}

static pointer F70120count_up_timer();
static pointer F70123skip_blank();
static pointer F70127read_list_from_line();
static pointer F70130sigint_handler();
static pointer F70134eussig();
static pointer F70137evaluate_stream();
static pointer F70140toplevel_prompt();
static pointer F70143rep1();
static pointer F70146prompt();
static pointer F70149reploop_non_select();
static pointer F70152repsel();
static pointer F70155reploop_select();
static pointer F70158reploop();
static pointer F70161euserror();
static pointer F70164eustop();
static pointer F70167reset();

/*count-up-timer*/
static pointer F70120count_up_timer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= loadglobal(fqv[0]);
	ctx->vsp=local+1;
	w=(pointer)ADD1(ctx,1,local+0); /*1+*/
	local[0]= w;
	storeglobal(fqv[0],w);
	w = local[0];
	local[0]= w;
BLK70241:
	ctx->vsp=local; return(local[0]);}

/*skip-blank*/
static pointer F70123skip_blank(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT70263;}
	ctx->vsp=local+0;
	w=(pointer)GENSYM(ctx,0,local+0); /*gensym*/
	local[0]= w;
ENT70263:
ENT70262:
	if (n>2) maerror();
	local[1]= argv[0];
	local[2]= NIL;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)READCH(ctx,3,local+1); /*read-char*/
	local[1]= w;
	local[2]= local[1];
	if (local[0]!=local[2]) goto IF70293;
	w = local[0];
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK70260;
	goto IF70294;
IF70293:
	local[2]= NIL;
IF70294:
WHL70305:
	local[2]= local[1];
	local[3]= fqv[1];
	ctx->vsp=local+4;
	w=(*ftab[0])(ctx,2,local+2,&ftab[0],fqv[2]); /*position*/
	if (w==NIL) goto WHX70306;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)READCH(ctx,1,local+2); /*read-char*/
	local[1] = w;
	goto WHL70305;
WHX70306:
	local[2]= NIL;
BLK70307:
	local[2]= local[1];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)UNREADCH(ctx,2,local+2); /*unread-char*/
	w = local[1];
	local[0]= w;
BLK70260:
	ctx->vsp=local; return(local[0]);}

/*read-list-from-line*/
static pointer F70127read_list_from_line(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT70340;}
	local[0]= loadglobal(fqv[3]);
ENT70340:
	if (n>=2) { local[1]=(argv[1]); goto ENT70339;}
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
ENT70339:
ENT70338:
	if (n>2) maerror();
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)F70123skip_blank(ctx,2,local+6); /*skip-blank*/
	local[2] = w;
	local[6]= NIL;
	storeglobal(fqv[4],local[6]);
	local[6]= local[2];
	if (local[1]!=local[6]) goto CON70388;
	local[6]= local[1];
	goto CON70386;
CON70388:
	local[6]= local[2];
	if (makeint((eusinteger_t)40L)!=local[6]) goto CON70395;
	local[6]= local[0];
	local[7]= NIL;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)READ(ctx,3,local+6); /*read*/
	local[4] = w;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)READCH(ctx,1,local+6); /*read-char*/
	local[2] = w;
	local[6]= local[2];
	local[7]= makeint((eusinteger_t)10L);
	ctx->vsp=local+8;
	w=(pointer)EQ(ctx,2,local+6); /*eql*/
	if (w!=NIL) goto IF70421;
	local[6]= local[2];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)UNREADCH(ctx,2,local+6); /*unread-char*/
	local[6]= w;
	goto IF70422;
IF70421:
	local[6]= NIL;
IF70422:
	local[6]= local[4];
	goto CON70386;
CON70395:
	local[6]= local[2];
	if (makeint((eusinteger_t)44L)!=local[6]) goto CON70437;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)READCH(ctx,1,local+6); /*read-char*/
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)READ(ctx,1,local+6); /*read*/
	local[4] = w;
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)READCH(ctx,1,local+6); /*read-char*/
	local[6]= local[4];
	goto CON70386;
CON70437:
	local[6]= local[0];
	local[7]= NIL;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)READLINE(ctx,3,local+6); /*read-line*/
	local[6]= w;
	storeglobal(fqv[4],w);
	local[6]= loadglobal(fqv[4]);
	if (local[1]!=local[6]) goto IF70473;
	w = local[1];
	ctx->vsp=local+6;
	local[0]=w;
	goto BLK70336;
	goto IF70474;
IF70473:
	local[6]= NIL;
IF70474:
	local[6]= loadglobal(fqv[4]);
	ctx->vsp=local+7;
	w=(*ftab[1])(ctx,1,local+6,&ftab[1],fqv[5]); /*make-string-input-stream*/
	local[6]= w;
	goto CON70386;
CON70460:
	local[6]= NIL;
CON70386:
	w = local[6];
	local[0]= w;
BLK70336:
	ctx->vsp=local; return(local[0]);}

/*sigint-handler*/
static pointer F70130sigint_handler(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)1L);
	local[1]= fqv[6];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[7]); /*warning-message*/
	local[0]= fqv[8];
	ctx->vsp=local+1;
	w=(pointer)FBOUNDP(ctx,1,local+0); /*fboundp*/
	if (w==NIL) goto IF70508;
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,2,local+0,&ftab[3],fqv[8]); /*unix:ualarm*/
	local[0]= w;
	goto IF70509;
IF70508:
	local[0]= makeint((eusinteger_t)0L);
	ctx->vsp=local+1;
	w=(pointer)ALARM(ctx,1,local+0); /*unix:alarm*/
	local[0]= w;
IF70509:
	local[0]= loadglobal(fqv[9]);
	ctx->vsp=local+1;
	w=(pointer)ADD1(ctx,1,local+0); /*1+*/
	local[0]= w;
	w = local[0];
	ctx->vsp=local+0;
	bindspecial(ctx,fqv[9],w);
	local[3]= fqv[10];
	w = local[3];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[11],w);
	{jmp_buf jb;
	w = loadglobal(fqv[9]);
	ctx->vsp=local+6;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT70539;}
	local[12]= (pointer)get_sym_func(fqv[12]);
	ctx->vsp=local+13;
	w=(pointer)F70158reploop(ctx,1,local+12); /*reploop*/
CAT70539:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[6]= w;
	ctx->vsp=local+7;
	unbindx(ctx,2);
	w = local[6];
	local[0]= w;
BLK70492:
	ctx->vsp=local; return(local[0]);}

/*eussig*/
static pointer F70134eussig(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST70557:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= NIL;
	local[2]= loadglobal(fqv[13]);
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)AREF(ctx,2,local+2); /*aref*/
	local[2]= w;
	if (local[2]==NIL) goto CON70579;
	local[3]= local[2];
	local[4]= argv[0];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)FUNCALL(ctx,3,local+3); /*funcall*/
	local[3]= w;
	goto CON70577;
CON70579:
	local[3]= fqv[8];
	ctx->vsp=local+4;
	w=(pointer)FBOUNDP(ctx,1,local+3); /*fboundp*/
	if (w==NIL) goto IF70593;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(*ftab[3])(ctx,2,local+3,&ftab[3],fqv[8]); /*unix:ualarm*/
	local[3]= w;
	goto IF70594;
IF70593:
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)ALARM(ctx,1,local+3); /*unix:alarm*/
	local[3]= w;
IF70594:
	local[3]= makeint((eusinteger_t)1L);
	local[4]= fqv[14];
	local[5]= argv[0];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(*ftab[2])(ctx,4,local+3,&ftab[2],fqv[7]); /*warning-message*/
	local[3]= loadglobal(fqv[9]);
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[3]= w;
	w = local[3];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[9],w);
	local[6]= fqv[15];
	w = local[6];
	ctx->vsp=local+6;
	bindspecial(ctx,fqv[11],w);
	{jmp_buf jb;
	w = loadglobal(fqv[9]);
	ctx->vsp=local+9;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT70627;}
	local[15]= (pointer)get_sym_func(fqv[12]);
	ctx->vsp=local+16;
	w=(pointer)F70158reploop(ctx,1,local+15); /*reploop*/
CAT70627:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[9]= w;
	ctx->vsp=local+10;
	unbindx(ctx,2);
	w = local[9];
	local[3]= w;
	goto CON70577;
CON70589:
	local[3]= NIL;
CON70577:
	w = local[3];
	local[0]= w;
BLK70555:
	ctx->vsp=local; return(local[0]);}

/*evaluate-stream*/
static pointer F70137evaluate_stream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	w = NIL;
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	local[1]= argv[0];
	local[2]= NIL;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)READ(ctx,3,local+1); /*read*/
	local[1]= w;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= local[1];
	local[5]= ((local[0])==(local[5])?T:NIL);
	if (local[5]!=NIL) goto CON70674;
CON70676:
	w = local[1];
	if (!issymbol(w)) goto CON70684;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)FBOUNDP(ctx,1,local+5); /*fboundp*/
	if (w==NIL) goto CON70692;
	local[2] = NIL;
WHL70706:
	local[5]= argv[0];
	local[6]= NIL;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)READ(ctx,3,local+5); /*read*/
	local[3] = w;
	local[5]= local[3];
	if (local[0]==local[5]) goto WHX70707;
	local[5]= local[3];
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	goto WHL70706;
WHX70707:
	local[5]= NIL;
BLK70708:
	local[5]= local[1];
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)NREVERSE(ctx,1,local+6); /*nreverse*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	storeglobal(fqv[16],local[5]);
	local[5]= loadglobal(fqv[16]);
	ctx->vsp=local+6;
	w=(pointer)EVAL(ctx,1,local+5); /*eval*/
	local[4] = w;
	local[5]= local[4];
	goto CON70690;
CON70692:
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)BOUNDP(ctx,1,local+5); /*boundp*/
	if (w==NIL) goto CON70754;
	local[5]= argv[0];
	local[6]= NIL;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)READ(ctx,3,local+5); /*read*/
	local[5]= w;
	if (local[0]!=local[5]) goto CON70754;
	local[5]= local[1];
	storeglobal(fqv[16],local[5]);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)EVAL(ctx,1,local+5); /*eval*/
	local[4] = w;
	local[5]= local[4];
	goto CON70690;
CON70754:
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,1,local+5,&ftab[4],fqv[17]); /*string*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)FINDPACKAGE(ctx,1,local+5); /*find-package*/
	if (w==NIL) goto CON70783;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,1,local+5,&ftab[4],fqv[17]); /*string*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)FINDPACKAGE(ctx,1,local+5); /*find-package*/
	if (w==NIL) goto IF70795;
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(*ftab[4])(ctx,1,local+5,&ftab[4],fqv[17]); /*string*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)FINDPACKAGE(ctx,1,local+5); /*find-package*/
	local[5]= w;
	storeglobal(fqv[18],w);
	goto IF70796;
IF70795:
	local[5]= fqv[19];
	ctx->vsp=local+6;
	w=(pointer)SIGERROR(ctx,1,local+5); /*error*/
	local[5]= w;
IF70796:
	goto CON70690;
CON70783:
	if (loadglobal(fqv[20])==NIL) goto CON70816;
	local[5]= fqv[21];
	local[6]= *(ovafptr(argv[0],fqv[22]));
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,2,local+5); /*list*/
	local[5]= w;
	storeglobal(fqv[16],w);
	local[5]= *(ovafptr(argv[0],fqv[22]));
	ctx->vsp=local+6;
	w=(pointer)SYSTEM(ctx,1,local+5); /*unix:system*/
	local[4] = w;
	local[5]= local[4];
	goto CON70690;
CON70816:
	local[5]= fqv[23];
	ctx->vsp=local+6;
	w=(*ftab[5])(ctx,1,local+5,&ftab[5],fqv[24]); /*warn*/
	local[5]= w;
	goto CON70690;
CON70842:
	local[5]= NIL;
CON70690:
	goto CON70674;
CON70684:
	local[5]= local[1];
	storeglobal(fqv[16],local[5]);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)EVAL(ctx,1,local+5); /*eval*/
	local[4] = w;
	local[5]= local[4];
	goto CON70674;
CON70848:
	local[5]= NIL;
CON70674:
	w = local[4];
	local[0]= w;
BLK70641:
	ctx->vsp=local; return(local[0]);}

/*toplevel-prompt*/
static pointer F70140toplevel_prompt(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	if (loadglobal(fqv[25])==NIL) goto IF70882;
	local[0]= argv[0];
	local[1]= fqv[26];
	local[2]= loadglobal(fqv[27]);
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	goto IF70883;
IF70882:
	local[0]= NIL;
IF70883:
	local[0]= loadglobal(fqv[9]);
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)GREATERP(ctx,2,local+0); /*>*/
	if (w==NIL) goto IF70897;
	local[0]= argv[0];
	local[1]= fqv[28];
	local[2]= loadglobal(fqv[11]);
	local[3]= loadglobal(fqv[9]);
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,4,local+0); /*format*/
	local[0]= w;
	goto IF70898;
IF70897:
	local[0]= NIL;
IF70898:
	local[0]= loadglobal(fqv[18]);
	local[1]= loadglobal(fqv[29]);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w!=NIL) goto IF70910;
	local[0]= argv[0];
	local[1]= fqv[30];
	local[2]= loadglobal(fqv[18]);
	ctx->vsp=local+3;
	w=(*ftab[6])(ctx,1,local+2,&ftab[6],fqv[31]); /*package-name*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	goto IF70911;
IF70910:
	local[0]= NIL;
IF70911:
	local[0]= argv[0];
	local[1]= fqv[32];
	local[2]= loadglobal(fqv[33]);
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
BLK70872:
	ctx->vsp=local; return(local[0]);}

/*rep1*/
static pointer F70143rep1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT70938;}
	local[0]= T;
ENT70938:
ENT70937:
	if (n>4) maerror();
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)F70127read_list_from_line(ctx,2,local+1); /*read-list-from-line*/
	local[1]= w;
	local[2]= NIL;
	local[3]= local[1];
	if (argv[1]!=local[3]) goto IF70972;
	w = argv[1];
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK70935;
	goto IF70973;
IF70972:
	local[3]= NIL;
IF70973:
	if (local[1]==NIL) goto IF70985;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)STREAMP(ctx,1,local+3); /*streamp*/
	if (w==NIL) goto OR70991;
	local[3]= local[1];
	local[4]= fqv[34];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[3] > (eusinteger_t)w) goto OR70991;
	goto IF70985;
OR70991:
	if (loadglobal(fqv[25])==NIL) goto IF71012;
	w = local[1];
	if (!iscons(w)) goto CON71024;
	local[3]= NIL;
	local[4]= fqv[35];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,3,local+3); /*format*/
	local[3]= w;
	goto CON71022;
CON71024:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)STREAMP(ctx,1,local+3); /*streamp*/
	if (w==NIL) goto CON71032;
	local[3]= local[1];
	local[4]= fqv[34];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	goto CON71022;
CON71032:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(*ftab[4])(ctx,1,local+3,&ftab[4],fqv[17]); /*string*/
	local[3]= w;
	goto CON71022;
CON71044:
	local[3]= NIL;
CON71022:
	ctx->vsp=local+4;
	w=(*ftab[7])(ctx,1,local+3,&ftab[7],fqv[36]); /*add-history*/
	local[3]= w;
	goto IF71013;
IF71012:
	local[3]= NIL;
IF71013:
	if (loadglobal(fqv[37])==NIL) goto IF71054;
	local[3]= loadglobal(fqv[37]);
	ctx->vsp=local+4;
	w=(pointer)FUNCALL(ctx,1,local+3); /*funcall*/
	local[3]= w;
	goto IF71055;
IF71054:
	local[3]= NIL;
IF71055:
	goto IF70986;
IF70985:
	local[3]= NIL;
IF70986:
	if (local[1]!=NIL) goto CON71067;
	local[3]= NIL;
	goto CON71065;
CON71067:
	w = local[1];
	if (!issymbol(w)) goto CON71072;
	storeglobal(fqv[16],local[1]);
	local[3]= loadglobal(fqv[9]);
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)GREATERP(ctx,2,local+3); /*>*/
	if (w==NIL) goto CON71085;
	local[3]= local[1];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(*ftab[8])(ctx,2,local+3,&ftab[8],fqv[38]); /*eval-dynamic*/
	local[3]= w;
	goto CON71083;
CON71085:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)BOUNDP(ctx,1,local+3); /*boundp*/
	if (w==NIL) goto CON71095;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)EVAL(ctx,1,local+3); /*eval*/
	local[3]= w;
	goto CON71083;
CON71095:
	local[3]= fqv[39];
	goto CON71083;
CON71105:
	local[3]= NIL;
CON71083:
	local[2] = local[3];
	local[3]= local[2];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)PRINT(ctx,2,local+3); /*print*/
	local[3]= w;
	goto CON71065;
CON71072:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)STREAMP(ctx,1,local+3); /*streamp*/
	if (w==NIL) goto OR71118;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)LISTP(ctx,1,local+3); /*listp*/
	if (w!=NIL) goto OR71118;
	goto CON71117;
OR71118:
	local[3]= local[1];
	storeglobal(fqv[16],local[3]);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)EVAL(ctx,1,local+3); /*eval*/
	local[2] = w;
	local[3]= local[2];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)PRINT(ctx,2,local+3); /*print*/
	local[3]= w;
	goto CON71065;
CON71117:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)STREAMP(ctx,1,local+3); /*streamp*/
	if (w==NIL) goto CON71150;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)F70137evaluate_stream(ctx,1,local+3); /*evaluate-stream*/
	local[2] = w;
	local[3]= local[2];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)PRINT(ctx,2,local+3); /*print*/
	local[3]= w;
	goto CON71065;
CON71150:
	local[3]= fqv[40];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)PRINT(ctx,2,local+3); /*print*/
	local[3]= w;
	goto CON71065;
CON71170:
	local[3]= NIL;
CON71065:
	storeglobal(fqv[42],loadglobal(fqv[41]));
	storeglobal(fqv[41],loadglobal(fqv[43]));
	local[3]= loadglobal(fqv[16]);
	storeglobal(fqv[43],local[3]);
	storeglobal(fqv[45],loadglobal(fqv[44]));
	storeglobal(fqv[44],loadglobal(fqv[46]));
	local[3]= local[2];
	storeglobal(fqv[46],local[3]);
	w = local[3];
	local[0]= w;
BLK70935:
	ctx->vsp=local; return(local[0]);}

/*prompt*/
static pointer F70146prompt(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = loadglobal(fqv[47]);
	if (!isstring(w)) goto CON71222;
	local[0]= loadglobal(fqv[47]);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)PRINC(ctx,2,local+0); /*princ*/
	local[0]= w;
	goto CON71220;
CON71222:
	local[0]= loadglobal(fqv[47]);
	ctx->vsp=local+1;
	w=(*ftab[9])(ctx,1,local+0,&ftab[9],fqv[48]); /*functionp*/
	if (w==NIL) goto CON71232;
	local[0]= loadglobal(fqv[47]);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)FUNCALL(ctx,2,local+0); /*funcall*/
	local[0]= w;
	goto CON71220;
CON71232:
	local[0]= argv[0];
	local[1]= fqv[49];
	local[2]= loadglobal(fqv[33]);
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	goto CON71220;
CON71244:
	local[0]= NIL;
CON71220:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FINOUT(ctx,1,local+0); /*finish-output*/
	local[0]= w;
BLK71210:
	ctx->vsp=local; return(local[0]);}

/*reploop-non-select*/
static pointer F70149reploop_non_select(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT71262;}
	local[0]= loadglobal(fqv[50]);
ENT71262:
	if (n>=2) { local[1]=(argv[1]); goto ENT71261;}
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)ISATTY(ctx,1,local+1); /*unix:isatty*/
	local[1]= w;
ENT71261:
ENT71260:
	if (n>2) maerror();
	local[2]= fqv[51];
	w = local[2];
	ctx->vsp=local+2;
	bindspecial(ctx,fqv[52],w);
	ctx->vsp=local+5;
	w=(pointer)GENSYM(ctx,0,local+5); /*gensym*/
	local[5]= w;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	local[9]= loadglobal(fqv[9]);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)GREATERP(ctx,2,local+9); /*>*/
	if (w==NIL) goto IF71304;
	ctx->vsp=local+9;
	w=(pointer)LISTBINDINGS(ctx,0,local+9); /*system:list-all-bindings*/
	local[7] = w;
	local[9]= local[7];
	goto IF71305;
IF71304:
	local[9]= NIL;
IF71305:
WHL71318:
	if (T==NIL) goto WHX71319;
	{jmp_buf jb;
	w = fqv[53];
	ctx->vsp=local+9;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT71325;}
	if (local[1]==NIL) goto IF71332;
	local[15]= local[0];
	ctx->vsp=local+16;
	w=(pointer)F70146prompt(ctx,1,local+15); /*prompt*/
	local[15]= w;
	goto IF71333;
IF71332:
	local[15]= NIL;
IF71333:
	local[15]= local[0];
	local[16]= local[5];
	local[17]= local[7];
	local[18]= local[1];
	ctx->vsp=local+19;
	w=(pointer)F70143rep1(ctx,4,local+15); /*rep1*/
	local[15]= w;
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(pointer)EQ(ctx,2,local+15); /*eql*/
	if (w==NIL) goto IF71342;
	w = NIL;
	ctx->vsp=local+15;
	unwind(ctx,local+0);
	local[0]=w;
	goto BLK71258;
	goto IF71343;
IF71342:
	local[15]= NIL;
IF71343:
	w = local[15];
CAT71325:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	goto WHL71318;
WHX71319:
	local[9]= NIL;
BLK71320:
	ctx->vsp=local+10;
	unbindx(ctx,1);
	w = local[9];
	local[0]= w;
BLK71258:
	ctx->vsp=local; return(local[0]);}

/*repsel*/
static pointer F70152repsel(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0];
	local[1]= argv[1];
	local[2]= argv[3];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)F70143rep1(ctx,4,local+0); /*rep1*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF71379;
	local[0]= fqv[54];
	w = NIL;
	ctx->vsp=local+1;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	goto IF71380;
IF71379:
	local[0]= NIL;
IF71380:
	if (argv[2]==NIL) goto IF71399;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F70146prompt(ctx,1,local+0); /*prompt*/
	local[0]= w;
	goto IF71400;
IF71399:
	local[0]= NIL;
IF71400:
	w = local[0];
	local[0]= w;
BLK71363:
	ctx->vsp=local; return(local[0]);}

/*reploop-select*/
static pointer F70155reploop_select(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT71414;}
	local[0]= loadglobal(fqv[50]);
ENT71414:
	if (n>=2) { local[1]=(argv[1]); goto ENT71413;}
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)ISATTY(ctx,1,local+1); /*unix:isatty*/
	local[1]= w;
ENT71413:
ENT71412:
	if (n>2) maerror();
	local[2]= fqv[51];
	w = local[2];
	ctx->vsp=local+2;
	bindspecial(ctx,fqv[52],w);
	ctx->vsp=local+5;
	w=(pointer)GENSYM(ctx,0,local+5); /*gensym*/
	local[5]= w;
	local[6]= NIL;
	local[7]= NIL;
	local[8]= NIL;
	if (local[1]==NIL) goto IF71455;
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)F70146prompt(ctx,1,local+9); /*prompt*/
	local[9]= w;
	goto IF71456;
IF71455:
	local[9]= NIL;
IF71456:
	local[9]= loadglobal(fqv[9]);
	local[10]= makeint((eusinteger_t)0L);
	ctx->vsp=local+11;
	w=(pointer)GREATERP(ctx,2,local+9); /*>*/
	if (w==NIL) goto IF71465;
	ctx->vsp=local+9;
	w=(pointer)LISTBINDINGS(ctx,0,local+9); /*system:list-all-bindings*/
	local[7] = w;
	local[9]= local[7];
	goto IF71466;
IF71465:
	local[9]= NIL;
IF71466:
	local[9]= loadglobal(fqv[55]);
	local[10]= fqv[56];
	local[11]= local[0];
	local[12]= fqv[57];
	local[13]= local[0];
	local[14]= local[5];
	local[15]= local[1];
	local[16]= local[7];
	ctx->vsp=local+17;
	w=(pointer)SEND(ctx,8,local+9); /*send*/
	{jmp_buf jb;
	w = fqv[54];
	ctx->vsp=local+9;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT71493;}
WHL71500:
	if (T==NIL) goto WHX71501;
	local[15]= loadglobal(fqv[55]);
	local[16]= fqv[58];
	local[17]= loadglobal(fqv[59]);
	ctx->vsp=local+18;
	w=(pointer)SEND(ctx,3,local+15); /*send*/
	if (w!=NIL) goto IF71508;
	local[15]= loadglobal(fqv[60]);
	ctx->vsp=local+16;
	w=(*ftab[9])(ctx,1,local+15,&ftab[9],fqv[48]); /*functionp*/
	if (w==NIL) goto IF71523;
	local[15]= loadglobal(fqv[60]);
	ctx->vsp=local+16;
	w=(pointer)FUNCALL(ctx,1,local+15); /*funcall*/
	local[15]= w;
	goto IF71524;
IF71523:
	local[15]= NIL;
	local[16]= loadglobal(fqv[60]);
WHL71552:
	if (local[16]==NIL) goto WHX71553;
	w=local[16];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17]= (w)->c.cons.car;
	w=local[16];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16] = (w)->c.cons.cdr;
	w = local[17];
	local[15] = w;
	local[17]= local[15];
	ctx->vsp=local+18;
	w=(*ftab[9])(ctx,1,local+17,&ftab[9],fqv[48]); /*functionp*/
	if (w==NIL) goto IF71601;
	local[17]= local[15];
	ctx->vsp=local+18;
	w=(pointer)FUNCALL(ctx,1,local+17); /*funcall*/
	local[17]= w;
	goto IF71602;
IF71601:
	local[17]= NIL;
IF71602:
	goto WHL71552;
WHX71553:
	local[17]= NIL;
BLK71554:
	w = NIL;
	local[15]= w;
IF71524:
	goto IF71509;
IF71508:
	local[15]= NIL;
IF71509:
	goto WHL71500;
WHX71501:
	local[15]= NIL;
BLK71502:
	w = local[15];
CAT71493:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[9]= w;
	ctx->vsp=local+10;
	unbindx(ctx,1);
	w = local[9];
	local[0]= w;
BLK71410:
	ctx->vsp=local; return(local[0]);}

/*reploop*/
static pointer F70158reploop(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT71623;}
	local[0]= loadglobal(fqv[50]);
ENT71623:
	if (n>=3) { local[1]=(argv[2]); goto ENT71622;}
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)ISATTY(ctx,1,local+1); /*unix:isatty*/
	local[1]= w;
ENT71622:
ENT71621:
	if (n>3) maerror();
	local[2]= argv[0];
	w = local[2];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[47],w);
	if (loadglobal(fqv[61])==NIL) goto IF71659;
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)F70155reploop_select(ctx,2,local+6); /*reploop-select*/
	local[6]= w;
	goto IF71660;
IF71659:
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)F70149reploop_non_select(ctx,2,local+6); /*reploop-non-select*/
	local[6]= w;
IF71660:
	ctx->vsp=local+7;
	unbindx(ctx,1);
	w = local[6];
	local[0]= w;
BLK71619:
	ctx->vsp=local; return(local[0]);}

/*euserror*/
static pointer F70161euserror(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT71680;}
	local[0]= NIL;
ENT71680:
ENT71679:
	if (n>4) maerror();
	local[1]= loadglobal(fqv[62]);
	local[2]= fqv[63];
	local[3]= makeint((eusinteger_t)27L);
	local[4]= makeint((eusinteger_t)1L);
	w = makeint((eusinteger_t)48L);
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[4]= (pointer)((eusinteger_t)local[4] + (eusinteger_t)w);
	local[5]= loadglobal(fqv[64]);
	ctx->vsp=local+6;
	w=(pointer)THR_SELF(ctx,0,local+6); /*unix:thr-self*/
	local[6]= w;
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)XFORMAT(ctx,7,local+1); /*format*/
	if (local[0]==NIL) goto IF71713;
	local[1]= loadglobal(fqv[62]);
	local[2]= fqv[65];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[1]= w;
	goto IF71714;
IF71713:
	local[1]= NIL;
IF71714:
	if (argv[2]==NIL) goto IF71724;
	local[1]= loadglobal(fqv[62]);
	local[2]= fqv[66];
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[1]= w;
	goto IF71725;
IF71724:
	local[1]= NIL;
IF71725:
	local[1]= loadglobal(fqv[62]);
	local[2]= fqv[67];
	local[3]= makeint((eusinteger_t)27L);
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[1]= loadglobal(fqv[9]);
	ctx->vsp=local+2;
	w=(pointer)ADD1(ctx,1,local+1); /*1+*/
	local[1]= w;
	local[2]= fqv[68];
	w = local[2];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[11],w);
	w = local[1];
	ctx->vsp=local+6;
	bindspecial(ctx,fqv[9],w);
	{jmp_buf jb;
	w = loadglobal(fqv[9]);
	ctx->vsp=local+9;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT71761;}
	local[15]= (pointer)get_sym_func(fqv[12]);
	ctx->vsp=local+16;
	w=(pointer)F70158reploop(ctx,1,local+15); /*reploop*/
CAT71761:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[9]= w;
	ctx->vsp=local+10;
	unbindx(ctx,2);
	w = local[9];
	local[1]= loadglobal(fqv[9]);
	w = NIL;
	ctx->vsp=local+2;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	w = local[1];
	local[0]= w;
BLK71677:
	ctx->vsp=local; return(local[0]);}

/*eustop*/
static pointer F70164eustop(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST71782:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= loadglobal(fqv[3]);
	ctx->vsp=local+2;
	w=(pointer)ISATTY(ctx,1,local+1); /*unix:isatty*/
	if (w==NIL) goto IF71792;
	local[1]= makeint((eusinteger_t)4L);
	local[2]= fqv[69];
	ctx->vsp=local+3;
	w=(*ftab[10])(ctx,0,local+3,&ftab[10],fqv[70]); /*lisp-implementation-version*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[2])(ctx,3,local+1,&ftab[2],fqv[7]); /*warning-message*/
	local[1]= loadglobal(fqv[62]);
	ctx->vsp=local+2;
	w=(pointer)TERPRI(ctx,1,local+1); /*terpri*/
	local[1]= makeint((eusinteger_t)2L);
	local[2]= fqv[71];
	local[3]= makeint((eusinteger_t)2L);
	ctx->vsp=local+4;
	w=(pointer)SIGNAL(ctx,3,local+1); /*unix:signal*/
	local[1]= makeint((eusinteger_t)13L);
	local[2]= fqv[72];
	ctx->vsp=local+3;
	w=(pointer)SIGNAL(ctx,2,local+1); /*unix:signal*/
	local[1]= fqv[73];
	ctx->vsp=local+2;
	w=(pointer)FBOUNDP(ctx,1,local+1); /*fboundp*/
	if (w==NIL) goto IF71824;
	local[1]= loadglobal(fqv[3]);
	ctx->vsp=local+2;
	w=(*ftab[11])(ctx,1,local+1,&ftab[11],fqv[73]); /*unix:tcgets*/
	local[1]= w;
	storeglobal(fqv[74],w);
	local[1]= loadglobal(fqv[75]);
	ctx->vsp=local+2;
	w=(*ftab[12])(ctx,1,local+1,&ftab[12],fqv[76]); /*new-history*/
	local[1]= w;
	goto IF71825;
IF71824:
	local[1]= NIL;
IF71825:
	goto IF71793;
IF71792:
	local[1]= NIL;
IF71793:
	if (local[0]==NIL) goto IF71852;
	local[1]= local[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[13])(ctx,1,local+1,&ftab[13],fqv[77]); /*find-executable*/
	local[1]= w;
	storeglobal(fqv[78],w);
	goto IF71853;
IF71852:
	local[1]= NIL;
IF71853:
	local[1]= fqv[79];
	ctx->vsp=local+2;
	w=(pointer)GETENV(ctx,1,local+1); /*unix:getenv*/
	local[1]= w;
	storeglobal(fqv[80],w);
	local[1]= local[0];
	storeglobal(fqv[81],local[1]);
	local[1]= loadglobal(fqv[64]);
	ctx->vsp=local+2;
	w=(*ftab[14])(ctx,1,local+1,&ftab[14],fqv[82]); /*pathname-name*/
	local[1]= w;
	storeglobal(fqv[33],w);
	local[1]= fqv[83];
	ctx->vsp=local+2;
	w=(pointer)GETENV(ctx,1,local+1); /*unix:getenv*/
	local[1]= w;
	if (local[1]!=NIL) goto IF71907;
	local[2]= loadglobal(fqv[17]);
	local[3]= fqv[84];
	ctx->vsp=local+4;
	w=(pointer)GETENV(ctx,1,local+3); /*unix:getenv*/
	local[3]= w;
	local[4]= fqv[85];
	ctx->vsp=local+5;
	w=(pointer)CONCATENATE(ctx,3,local+2); /*concatenate*/
	local[1] = w;
	local[2]= local[1];
	goto IF71908;
IF71907:
	local[2]= NIL;
IF71908:
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[15])(ctx,1,local+2,&ftab[15],fqv[86]); /*probe-file*/
	if (w==NIL) goto IF71928;
	local[2]= local[1];
	local[3]= fqv[87];
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(*ftab[16])(ctx,3,local+2,&ftab[16],fqv[88]); /*load*/
	local[2]= w;
	goto IF71929;
IF71928:
	local[2]= NIL;
IF71929:
	w = local[2];
	local[1]= fqv[89];
	ctx->vsp=local+2;
	w=(*ftab[15])(ctx,1,local+1,&ftab[15],fqv[86]); /*probe-file*/
	if (w==NIL) goto IF71946;
	local[1]= fqv[90];
	local[2]= fqv[87];
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,3,local+1,&ftab[16],fqv[88]); /*load*/
	local[1]= w;
	goto IF71947;
IF71946:
	local[1]= NIL;
IF71947:
	if (local[0]==NIL) goto IF71962;
	local[1]= loadglobal(fqv[64]);
	ctx->vsp=local+2;
	w=(*ftab[14])(ctx,1,local+1,&ftab[14],fqv[82]); /*pathname-name*/
	local[1]= w;
	local[2]= fqv[91];
	ctx->vsp=local+3;
	w=(pointer)EQUAL(ctx,2,local+1); /*equal*/
	if (w==NIL) goto IF71962;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	w = makeint((eusinteger_t)2L);
	if ((eusinteger_t)local[1] < (eusinteger_t)w) goto IF71962;
	local[1]= (pointer)get_sym_func(fqv[92]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,2,local+1); /*apply*/
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(*ftab[17])(ctx,1,local+1,&ftab[17],fqv[93]); /*exit*/
	local[1]= w;
	goto IF71963;
IF71962:
	local[1]= NIL;
IF71963:
	if (loadglobal(fqv[94])==NIL) goto IF71994;
	local[1]= loadglobal(fqv[94]);
	local[2]= loadglobal(fqv[81]);
	ctx->vsp=local+3;
	w=(pointer)FUNCALL(ctx,2,local+1); /*funcall*/
	local[1]= w;
	goto IF71995;
IF71994:
	local[1]= NIL;
IF71995:
	local[1]= NIL;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= loadglobal(fqv[81]);
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SUB1(ctx,1,local+3); /*1-*/
	local[3]= w;
WHL72042:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX72043;
	local[4]= loadglobal(fqv[81]);
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[1] = w;
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	if (makeint((eusinteger_t)40L)!=local[4]) goto CON72065;
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[18])(ctx,1,local+4,&ftab[18],fqv[95]); /*read-from-string*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)EVAL(ctx,1,local+4); /*eval*/
	local[4]= w;
	goto CON72063;
CON72065:
	local[4]= local[1];
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)ELT(ctx,2,local+4); /*elt*/
	local[4]= w;
	local[4]= ((makeint((eusinteger_t)45L))==(local[4])?T:NIL);
	if (local[4]!=NIL) goto CON72063;
CON72078:
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(*ftab[16])(ctx,1,local+4,&ftab[16],fqv[88]); /*load*/
	local[4]= w;
	goto CON72063;
CON72087:
	local[4]= NIL;
CON72063:
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL72042;
WHX72043:
	local[4]= NIL;
BLK72044:
	w = NIL;
	{jmp_buf jb;
	w = fqv[96];
	ctx->vsp=local+1;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT72108;}
WHL72115:
	if (T==NIL) goto WHX72116;
	{jmp_buf jb;
	w = makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	mkcatchframe(ctx,w,(jmp_buf *)jb);
	if ((w=(pointer)eussetjmp(jb))!=0) { /*fsp=vsp;*/ goto CAT72122;}
	local[13]= makeint((eusinteger_t)0L);
	local[14]= fqv[97];
	w = local[14];
	ctx->vsp=local+15;
	bindspecial(ctx,fqv[11],w);
	w = local[13];
	ctx->vsp=local+18;
	bindspecial(ctx,fqv[9],w);
	local[21]= (pointer)get_sym_func(fqv[12]);
	ctx->vsp=local+22;
	w=(pointer)F70158reploop(ctx,1,local+21); /*reploop*/
	local[21]= w;
	ctx->vsp=local+22;
	unbindx(ctx,2);
	w = local[21];
	local[13]= fqv[96];
	w = NIL;
	ctx->vsp=local+14;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	w = local[13];
CAT72122:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	goto WHL72115;
WHX72116:
	local[7]= NIL;
BLK72117:
	w = local[7];
CAT72108:
	if (w==(pointer)(1)) w=makeint(0);
	restorecatch(ctx);};
	local[0]= w;
BLK71780:
	ctx->vsp=local; return(local[0]);}

/*reset*/
static pointer F70167reset(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT72164;}
	local[0]= makeint((eusinteger_t)0L);
ENT72164:
ENT72163:
	if (n>1) maerror();
	local[1]= local[0];
	w = NIL;
	ctx->vsp=local+2;
	throw(ctx,vpop(),w);
	error(E_NOCATCHER,NULL);
	w = local[1];
	local[0]= w;
BLK72161:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___toplevel(ctx,n,argv,env)
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
	local[0]= fqv[98];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF72186;
	local[0]= fqv[99];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[18],w);
	goto IF72187;
IF72186:
	local[0]= fqv[100];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF72187:
	local[0]= fqv[101];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[16];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72209;
	local[0]= fqv[16];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[16];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72232;
	local[0]= fqv[16];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72233;
IF72232:
	local[0]= NIL;
IF72233:
	local[0]= fqv[16];
	goto IF72210;
IF72209:
	local[0]= NIL;
IF72210:
	local[0]= fqv[46];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72252;
	local[0]= fqv[46];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[46];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72275;
	local[0]= fqv[46];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72276;
IF72275:
	local[0]= NIL;
IF72276:
	local[0]= fqv[46];
	goto IF72253;
IF72252:
	local[0]= NIL;
IF72253:
	local[0]= fqv[44];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72295;
	local[0]= fqv[44];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[44];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72318;
	local[0]= fqv[44];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72319;
IF72318:
	local[0]= NIL;
IF72319:
	local[0]= fqv[44];
	goto IF72296;
IF72295:
	local[0]= NIL;
IF72296:
	local[0]= fqv[45];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72338;
	local[0]= fqv[45];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[45];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72361;
	local[0]= fqv[45];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72362;
IF72361:
	local[0]= NIL;
IF72362:
	local[0]= fqv[45];
	goto IF72339;
IF72338:
	local[0]= NIL;
IF72339:
	local[0]= fqv[43];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72381;
	local[0]= fqv[43];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[43];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72404;
	local[0]= fqv[43];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72405;
IF72404:
	local[0]= NIL;
IF72405:
	local[0]= fqv[43];
	goto IF72382;
IF72381:
	local[0]= NIL;
IF72382:
	local[0]= fqv[41];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72424;
	local[0]= fqv[41];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[41];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72447;
	local[0]= fqv[41];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72448;
IF72447:
	local[0]= NIL;
IF72448:
	local[0]= fqv[41];
	goto IF72425;
IF72424:
	local[0]= NIL;
IF72425:
	local[0]= fqv[42];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72467;
	local[0]= fqv[42];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[42];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72490;
	local[0]= fqv[42];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72491;
IF72490:
	local[0]= NIL;
IF72491:
	local[0]= fqv[42];
	goto IF72468;
IF72467:
	local[0]= NIL;
IF72468:
	local[0]= fqv[104];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72510;
	local[0]= fqv[104];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[104];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72533;
	local[0]= fqv[104];
	local[1]= fqv[103];
	local[2]= loadglobal(fqv[3]);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72534;
IF72533:
	local[0]= NIL;
IF72534:
	local[0]= fqv[104];
	goto IF72511;
IF72510:
	local[0]= NIL;
IF72511:
	local[0]= fqv[105];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72556;
	local[0]= fqv[105];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[105];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72579;
	local[0]= fqv[105];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72580;
IF72579:
	local[0]= NIL;
IF72580:
	local[0]= fqv[105];
	goto IF72557;
IF72556:
	local[0]= NIL;
IF72557:
	local[0]= fqv[94];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72599;
	local[0]= fqv[94];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[94];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72622;
	local[0]= fqv[94];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72623;
IF72622:
	local[0]= NIL;
IF72623:
	local[0]= fqv[94];
	goto IF72600;
IF72599:
	local[0]= NIL;
IF72600:
	local[0]= fqv[47];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72642;
	local[0]= fqv[47];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[47];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72665;
	local[0]= fqv[47];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72666;
IF72665:
	local[0]= NIL;
IF72666:
	local[0]= fqv[47];
	goto IF72643;
IF72642:
	local[0]= NIL;
IF72643:
	local[0]= fqv[37];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72685;
	local[0]= fqv[37];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[37];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72708;
	local[0]= fqv[37];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72709;
IF72708:
	local[0]= NIL;
IF72709:
	local[0]= fqv[37];
	goto IF72686;
IF72685:
	local[0]= NIL;
IF72686:
	local[0]= fqv[9];
	local[1]= fqv[106];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[11];
	local[1]= fqv[106];
	local[2]= fqv[107];
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[4];
	local[1]= fqv[106];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[33];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72752;
	local[0]= fqv[33];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[33];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72775;
	local[0]= fqv[33];
	local[1]= fqv[103];
	local[2]= fqv[108];
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72776;
IF72775:
	local[0]= NIL;
IF72776:
	local[0]= fqv[33];
	goto IF72753;
IF72752:
	local[0]= NIL;
IF72753:
	local[0]= fqv[25];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72795;
	local[0]= fqv[25];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[25];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72818;
	local[0]= fqv[25];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72819;
IF72818:
	local[0]= NIL;
IF72819:
	local[0]= fqv[25];
	goto IF72796;
IF72795:
	local[0]= NIL;
IF72796:
	local[0]= fqv[74];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72838;
	local[0]= fqv[74];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[74];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72861;
	local[0]= fqv[74];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72862;
IF72861:
	local[0]= NIL;
IF72862:
	local[0]= fqv[74];
	goto IF72839;
IF72838:
	local[0]= NIL;
IF72839:
	local[0]= fqv[81];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72881;
	local[0]= fqv[81];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[81];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72904;
	local[0]= fqv[81];
	local[1]= fqv[103];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72905;
IF72904:
	local[0]= NIL;
IF72905:
	local[0]= fqv[81];
	goto IF72882;
IF72881:
	local[0]= NIL;
IF72882:
	local[0]= fqv[55];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72924;
	local[0]= fqv[55];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[55];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF72947;
	local[0]= fqv[55];
	local[1]= fqv[103];
	local[2]= loadglobal(fqv[109]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[110];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	w = local[2];
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF72948;
IF72947:
	local[0]= NIL;
IF72948:
	local[0]= fqv[55];
	goto IF72925;
IF72924:
	local[0]= NIL;
IF72925:
	local[0]= fqv[60];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF72992;
	local[0]= fqv[60];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[60];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF73015;
	local[0]= fqv[60];
	local[1]= fqv[103];
	local[2]= fqv[111];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF73016;
IF73015:
	local[0]= NIL;
IF73016:
	local[0]= fqv[60];
	goto IF72993;
IF72992:
	local[0]= NIL;
IF72993:
	local[0]= fqv[0];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF73039;
	local[0]= fqv[0];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[0];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF73062;
	local[0]= fqv[0];
	local[1]= fqv[103];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF73063;
IF73062:
	local[0]= NIL;
IF73063:
	local[0]= fqv[0];
	goto IF73040;
IF73039:
	local[0]= NIL;
IF73040:
	local[0]= fqv[59];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF73082;
	local[0]= fqv[59];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[59];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF73105;
	local[0]= fqv[59];
	local[1]= fqv[103];
	local[2]= makeflt(1.0000000000000000000000e+01);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF73106;
IF73105:
	local[0]= NIL;
IF73106:
	local[0]= fqv[59];
	goto IF73083;
IF73082:
	local[0]= NIL;
IF73083:
	local[0]= fqv[61];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF73125;
	local[0]= fqv[61];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[61];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF73148;
	local[0]= fqv[61];
	local[1]= fqv[103];
	local[2]= fqv[112];
	ctx->vsp=local+3;
	w=(pointer)GETENV(ctx,1,local+2); /*unix:getenv*/
	local[2]= ((w)==NIL?T:NIL);
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF73149;
IF73148:
	local[0]= NIL;
IF73149:
	local[0]= fqv[61];
	goto IF73126;
IF73125:
	local[0]= NIL;
IF73126:
	local[0]= fqv[20];
	local[1]= fqv[103];
	local[2]= T;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[111],module,F70120count_up_timer,fqv[113]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[114],module,F70123skip_blank,fqv[115]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[116],module,F70127read_list_from_line,fqv[117]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[71],module,F70130sigint_handler,fqv[118]);
	local[0]= fqv[13];
	local[1]= fqv[102];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF73189;
	local[0]= fqv[13];
	local[1]= fqv[102];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[13];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF73212;
	local[0]= fqv[13];
	local[1]= fqv[103];
	local[2]= loadglobal(fqv[119]);
	local[3]= makeint((eusinteger_t)32L);
	ctx->vsp=local+4;
	w=(*ftab[19])(ctx,2,local+2,&ftab[19],fqv[120]); /*make-sequence*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF73213;
IF73212:
	local[0]= NIL;
IF73213:
	local[0]= fqv[13];
	goto IF73190;
IF73189:
	local[0]= NIL;
IF73190:
	ctx->vsp=local+0;
	compfun(ctx,fqv[72],module,F70134eussig,fqv[121]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[122],module,F70137evaluate_stream,fqv[123]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[12],module,F70140toplevel_prompt,fqv[124]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[125],module,F70143rep1,fqv[126]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[127],module,F70146prompt,fqv[128]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[129],module,F70149reploop_non_select,fqv[130]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[57],module,F70152repsel,fqv[131]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[132],module,F70155reploop_select,fqv[133]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[134],module,F70158reploop,fqv[135]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[51],module,F70161euserror,fqv[136]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[137],module,F70164eustop,fqv[138]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[139],module,F70167reset,fqv[140]);
	local[0]= fqv[141];
	local[1]= fqv[142];
	ctx->vsp=local+2;
	w=(*ftab[20])(ctx,2,local+0,&ftab[20],fqv[143]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<21; i++) ftab[i]=fcallx;
}
