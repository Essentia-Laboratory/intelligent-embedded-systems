/* ./string.c :  entry=string */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "string.h"
#pragma init (register_string)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___string();
extern pointer build_quote_vector();
static int register_string()
  { add_module_initializer("___string", ___string);}

static pointer F51154read_sharp_backslash();
static pointer F51158true_string();
static pointer F51161string();
static pointer F51164make_string();
static pointer F51167string_left_trim();
static pointer F51170string_right_trim();
static pointer F51173string_trim();
static pointer F51176nstring_downcase();
static pointer F51179nstring_upcase();
static pointer F51182string_upcase();
static pointer F51185string_downcase();
static pointer F51188string_();
static pointer F51191string_equal();
static pointer F51194substringp();
static pointer F51204explode_directory_names();
static pointer F51208pathnamep();
static pointer F51211pathname();
static pointer F51214namestring();
static pointer F51217pathname_directory();
static pointer F51220pathname_name();
static pointer F51223pathname_type();
static pointer F51226directory_namestring();
static pointer F51229make_pathname();
static pointer F51232parse_namestring();
static pointer F51236null_string_p();
static pointer F51239merge_pathnames();
static pointer F51242concatenate_pathnames();
static pointer F51245truename();
static pointer F51264url_pathname();
static pointer F51266parse_url();
static pointer F51268escape_url();
static pointer F51270escaped_url_string_from_namestring();
static pointer F51272unescape_url();
static pointer F51274unescaped_url_string_from_namestring();
static pointer F51276digits_string();
static pointer F51278timed_file_name();
static pointer F51280dated_file_name();
static pointer F51282sequential_file_name();

/*read_sharp_backslash*/
static pointer F51154read_sharp_backslash(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)READCH(ctx,1,local+3); /*read-char*/
	local[0] = w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)ALPHAP(ctx,1,local+3); /*alpha-char-p*/
	if (w==NIL) goto CON51378;
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)UNREADCH(ctx,2,local+3); /*unread-char*/
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)READ(ctx,1,local+3); /*read*/
	local[1] = w;
	local[3]= *(ovafptr(local[1],fqv[0]));
	local[4]= fqv[1];
	local[5]= fqv[2];
	local[6]= (pointer)get_sym_func(fqv[3]);
	ctx->vsp=local+7;
	w=(*ftab[0])(ctx,4,local+3,&ftab[0],fqv[4]); /*assoc*/
	local[2] = w;
	if (local[2]==NIL) goto IF51417;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	goto IF51418;
IF51417:
	local[3]= *(ovafptr(local[1],fqv[0]));
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	if (makeint((eusinteger_t)1L)!=local[3]) goto IF51430;
	local[3]= local[0];
	goto IF51431;
IF51430:
	local[3]= fqv[5];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
IF51431:
IF51418:
	goto CON51376;
CON51378:
	local[3]= local[0];
	goto CON51376;
CON51441:
	local[3]= NIL;
CON51376:
	w = local[3];
	local[0]= w;
BLK51340:
	ctx->vsp=local; return(local[0]);}

/*true-string*/
static pointer F51158true_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!issymbol(w)) goto IF51461;
	local[0]= argv[0]->c.obj.iv[4];
	goto IF51462;
IF51461:
	local[0]= argv[0];
IF51462:
	w = local[0];
	local[0]= w;
BLK51451:
	ctx->vsp=local; return(local[0]);}

/*string*/
static pointer F51161string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!isstring(w)) goto CON51487;
	local[0]= argv[0];
	goto CON51485;
CON51487:
	w = argv[0];
	if (!issymbol(w)) goto CON51493;
	local[0]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+1;
	w=(pointer)COPYSEQ(ctx,1,local+0); /*copy-seq*/
	local[0]= w;
	goto CON51485;
CON51493:
	w = argv[0];
	if (!isnum(w)) goto CON51505;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[6]); /*princ-to-string*/
	local[0]= w;
	goto CON51485;
CON51505:
	local[0]= fqv[7];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,2,local+0); /*error*/
	local[0]= w;
	goto CON51485;
CON51514:
	local[0]= NIL;
CON51485:
	w = local[0];
	local[0]= w;
BLK51475:
	ctx->vsp=local; return(local[0]);}

/*make-string*/
static pointer F51164make_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= loadglobal(fqv[8]);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,2,local+0); /*instantiate*/
	local[0]= w;
BLK51523:
	ctx->vsp=local; return(local[0]);}

/*string-left-trim*/
static pointer F51167string_left_trim(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)F51158true_string(ctx,1,local+1); /*true-string*/
	argv[1] = w;
WHL51583:
	local[1]= argv[1];
	{ register eusinteger_t i=intval(local[0]);
	  w=makeint(local[1]->c.str.chars[i]);}
	local[1]= w;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[9]); /*position*/
	if (w==NIL) goto WHX51584;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)ADD1(ctx,1,local+1); /*1+*/
	local[0] = w;
	goto WHL51583;
WHX51584:
	local[1]= NIL;
BLK51585:
	local[1]= argv[1];
	local[2]= local[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SUBSEQ(ctx,3,local+1); /*subseq*/
	local[0]= w;
BLK51540:
	ctx->vsp=local; return(local[0]);}

/*string-right-trim*/
static pointer F51170string_right_trim(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)F51158true_string(ctx,1,local+1); /*true-string*/
	argv[1] = w;
WHL51659:
	local[1]= argv[1];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)SUB1(ctx,1,local+2); /*1-*/
	{ register eusinteger_t i=intval(w);
	  w=makeint(local[1]->c.str.chars[i]);}
	local[1]= w;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(*ftab[2])(ctx,2,local+1,&ftab[2],fqv[9]); /*position*/
	if (w==NIL) goto WHX51660;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)SUB1(ctx,1,local+1); /*1-*/
	local[0] = w;
	goto WHL51659;
WHX51660:
	local[1]= NIL;
BLK51661:
	local[1]= argv[1];
	local[2]= makeint((eusinteger_t)0L);
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)SUBSEQ(ctx,3,local+1); /*subseq*/
	local[0]= w;
BLK51619:
	ctx->vsp=local; return(local[0]);}

/*string-trim*/
static pointer F51173string_trim(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)F51170string_right_trim(ctx,2,local+1); /*string-right-trim*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)F51167string_left_trim(ctx,2,local+0); /*string-left-trim*/
	local[0]= w;
BLK51693:
	ctx->vsp=local; return(local[0]);}

/*nstring-downcase*/
static pointer F51176nstring_downcase(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[10], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY51737;
	local[0] = makeint((eusinteger_t)0L);
KEY51737:
	if (n & (1<<1)) goto KEY51741;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[1] = w;
KEY51741:
	w = argv[0];
	if (isstring(w)) goto IF51752;
	local[2]= fqv[11];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto IF51753;
IF51752:
	local[2]= NIL;
IF51753:
WHL51761:
	local[2]= local[0];
	w = local[1];
	if ((eusinteger_t)local[2] >= (eusinteger_t)w) goto WHX51762;
	local[2]= argv[0];
	local[3]= local[0];
	local[4]= argv[0];
	{ register eusinteger_t i=intval(local[0]);
	  w=makeint(local[4]->c.str.chars[i]);}
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)CHDOWNCASE(ctx,1,local+4); /*char-downcase*/
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[3]); v=local[2];
	  v->c.str.chars[i]=intval(w);}
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	goto WHL51761;
WHX51762:
	local[2]= NIL;
BLK51763:
	w = argv[0];
	local[0]= w;
BLK51714:
	ctx->vsp=local; return(local[0]);}

/*nstring-upcase*/
static pointer F51179nstring_upcase(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[12], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY51815;
	local[0] = makeint((eusinteger_t)0L);
KEY51815:
	if (n & (1<<1)) goto KEY51819;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[1] = w;
KEY51819:
	w = argv[0];
	if (isstring(w)) goto IF51830;
	local[2]= fqv[13];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto IF51831;
IF51830:
	local[2]= NIL;
IF51831:
WHL51839:
	local[2]= local[0];
	w = local[1];
	if ((eusinteger_t)local[2] >= (eusinteger_t)w) goto WHX51840;
	local[2]= argv[0];
	local[3]= local[0];
	local[4]= argv[0];
	{ register eusinteger_t i=intval(local[0]);
	  w=makeint(local[4]->c.str.chars[i]);}
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)CHUPCASE(ctx,1,local+4); /*char-upcase*/
	{ register eusinteger_t i; register pointer v;
	  i=intval(local[3]); v=local[2];
	  v->c.str.chars[i]=intval(w);}
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)ADD1(ctx,1,local+2); /*1+*/
	local[0] = w;
	goto WHL51839;
WHX51840:
	local[2]= NIL;
BLK51841:
	w = argv[0];
	local[0]= w;
BLK51796:
	ctx->vsp=local; return(local[0]);}

/*string-upcase*/
static pointer F51182string_upcase(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[14], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY51884;
	local[0] = makeint((eusinteger_t)0L);
KEY51884:
	if (n & (1<<1)) goto KEY51889;
	local[1] = NIL;
KEY51889:
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)F51158true_string(ctx,1,local+2); /*true-string*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)COPYSEQ(ctx,1,local+2); /*copy-seq*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[15];
	local[5]= local[0];
	local[6]= fqv[16];
	if (local[1]==NIL) goto IF51920;
	local[7]= local[1];
	goto IF51921;
IF51920:
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
IF51921:
	ctx->vsp=local+8;
	w=(pointer)F51179nstring_upcase(ctx,5,local+3); /*nstring-upcase*/
	local[0]= w;
BLK51874:
	ctx->vsp=local; return(local[0]);}

/*string-downcase*/
static pointer F51185string_downcase(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[17], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY51944;
	local[0] = makeint((eusinteger_t)0L);
KEY51944:
	if (n & (1<<1)) goto KEY51949;
	local[1] = NIL;
KEY51949:
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)F51158true_string(ctx,1,local+2); /*true-string*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)COPYSEQ(ctx,1,local+2); /*copy-seq*/
	local[2]= w;
	local[3]= local[2];
	local[4]= fqv[15];
	local[5]= local[0];
	local[6]= fqv[16];
	if (local[1]==NIL) goto IF51980;
	local[7]= local[1];
	goto IF51981;
IF51980:
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
IF51981:
	ctx->vsp=local+8;
	w=(pointer)F51176nstring_downcase(ctx,5,local+3); /*nstring-downcase*/
	local[0]= w;
BLK51934:
	ctx->vsp=local; return(local[0]);}

/*string=*/
static pointer F51188string_(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[18], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY52008;
	local[0] = makeint((eusinteger_t)0L);
KEY52008:
	if (n & (1<<1)) goto KEY52013;
	local[1] = makeint((eusinteger_t)100000000L);
KEY52013:
	if (n & (1<<2)) goto KEY52018;
	local[2] = makeint((eusinteger_t)0L);
KEY52018:
	if (n & (1<<3)) goto KEY52023;
	local[3] = makeint((eusinteger_t)100000000L);
KEY52023:
	local[4]= argv[0];
	local[5]= argv[1];
	local[6]= local[0];
	local[7]= local[1];
	local[8]= local[2];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(*ftab[3])(ctx,6,local+4,&ftab[3],fqv[19]); /*stringeq*/
	local[0]= w;
BLK51994:
	ctx->vsp=local; return(local[0]);}

/*string-equal*/
static pointer F51191string_equal(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[20], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY52057;
	local[0] = makeint((eusinteger_t)0L);
KEY52057:
	if (n & (1<<1)) goto KEY52062;
	local[1] = makeint((eusinteger_t)100000000L);
KEY52062:
	if (n & (1<<2)) goto KEY52067;
	local[2] = makeint((eusinteger_t)0L);
KEY52067:
	if (n & (1<<3)) goto KEY52072;
	local[3] = makeint((eusinteger_t)100000000L);
KEY52072:
	local[4]= argv[0];
	local[5]= argv[1];
	local[6]= local[0];
	local[7]= local[1];
	local[8]= local[2];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(*ftab[4])(ctx,6,local+4,&ftab[4],fqv[21]); /*stringequal*/
	local[0]= w;
BLK52043:
	ctx->vsp=local; return(local[0]);}

/*substringp*/
static pointer F51194substringp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[0]= (pointer)((eusinteger_t)local[0] - (eusinteger_t)w);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
TAG52141:
	local[3]= local[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)GREATERP(ctx,2,local+3); /*>*/
	if (w==NIL) goto IF52146;
	w = NIL;
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK52106;
	goto IF52147;
IF52146:
	local[3]= NIL;
IF52147:
	local[3]= argv[0];
	local[4]= argv[1];
	local[5]= fqv[22];
	local[6]= local[2];
	local[7]= fqv[23];
	local[8]= local[2];
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)PLUS(ctx,2,local+8); /*+*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)F51191string_equal(ctx,6,local+3); /*string-equal*/
	if (w==NIL) goto IF52162;
	w = T;
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK52092;
	goto IF52163;
IF52162:
	local[3]= NIL;
IF52163:
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[3]= w;
	local[2] = local[3];
	w = NIL;
	ctx->vsp=local+3;
	goto TAG52141;
	w = NIL;
	local[0]= w;
BLK52106:
	w = local[0];
	local[0]= w;
BLK52092:
	ctx->vsp=local; return(local[0]);}

/*:get*/
static pointer M52226string_get(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= argv[0];
	local[1]= argv[2];
	local[2]= argv[3];
	ctx->vsp=local+3;
	w=(pointer)PEEK(ctx,3,local+0); /*system:peek*/
	local[0]= w;
BLK52227:
	ctx->vsp=local; return(local[0]);}

/*:set*/
static pointer M52249string_set(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=5) maerror();
	w = argv[2];
	if (!isnum(w)) goto IF52268;
	local[0]= argv[2];
	local[1]= argv[0];
	local[2]= argv[3];
	local[3]= argv[4];
	ctx->vsp=local+4;
	w=(pointer)POKE(ctx,4,local+0); /*system:poke*/
	local[0]= w;
	goto IF52269;
IF52268:
	local[0]= argv[4];
	local[1]= fqv[24];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[4]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	local[1]= NIL;
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(*ftab[5])(ctx,1,local+2,&ftab[5],fqv[25]); /*flatten*/
	local[2]= w;
WHL52319:
	if (local[2]==NIL) goto WHX52320;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	w = local[1];
	if (!isnum(w)) goto CON52370;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ROUND(ctx,1,local+3); /*round*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= argv[3];
	local[6]= argv[4];
	ctx->vsp=local+7;
	w=(pointer)POKE(ctx,4,local+3); /*system:poke*/
	local[3]= argv[3];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	argv[3] = w;
	local[3]= argv[3];
	goto CON52368;
CON52370:
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
WHL52425:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX52426;
	local[5]= local[1];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)ROUND(ctx,1,local+5); /*round*/
	local[5]= w;
	local[6]= argv[0];
	local[7]= argv[3];
	local[8]= argv[4];
	ctx->vsp=local+9;
	w=(pointer)POKE(ctx,4,local+5); /*system:poke*/
	local[5]= argv[3];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)PLUS(ctx,2,local+5); /*+*/
	argv[3] = w;
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL52425;
WHX52426:
	local[5]= NIL;
BLK52427:
	w = NIL;
	local[3]= w;
	goto CON52368;
CON52396:
	local[3]= NIL;
CON52368:
	goto WHL52319;
WHX52320:
	local[3]= NIL;
BLK52321:
	w = NIL;
	local[0]= w;
IF52269:
	w = local[0];
	local[0]= w;
BLK52250:
	ctx->vsp=local; return(local[0]);}

/*explode-directory-names*/
static pointer F51204explode_directory_names(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
WHL52514:
	local[4]= makeint((eusinteger_t)47L);
	local[5]= argv[0];
	local[6]= fqv[15];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(*ftab[2])(ctx,4,local+4,&ftab[2],fqv[9]); /*position*/
	local[3] = w;
	if (local[3]==NIL) goto WHX52515;
	local[4]= argv[0];
	local[5]= local[2];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)SUBSEQ(ctx,3,local+4); /*subseq*/
	local[0] = w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[4] <= (eusinteger_t)w) goto IF52543;
	local[4]= local[0];
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	local[4]= local[1];
	goto IF52544;
IF52543:
	local[4]= NIL;
IF52544:
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL52514;
WHX52515:
	local[4]= NIL;
BLK52516:
	local[4]= argv[0];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SUBSEQ(ctx,2,local+4); /*subseq*/
	local[0] = w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[4] <= (eusinteger_t)w) goto IF52582;
	local[4]= local[0];
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	local[4]= local[1];
	goto IF52583;
IF52582:
	local[4]= NIL;
IF52583:
	w = local[1];
	local[0]= w;
BLK52486:
	ctx->vsp=local; return(local[0]);}

/*:parse-namestring*/
static pointer M52623pathname_parse_namestring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= makeint((eusinteger_t)0L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
	argv[0]->c.obj.iv[2] = NIL;
	local[7]= argv[2];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(*ftab[6])(ctx,1,local+7,&ftab[6],fqv[26]); /*zerop*/
	if (w==NIL) goto IF52665;
	argv[0]->c.obj.iv[0] = fqv[27];
	argv[0]->c.obj.iv[1] = fqv[28];
	w = argv[0];
	ctx->vsp=local+7;
	local[0]=w;
	goto BLK52624;
	goto IF52666;
IF52665:
	local[7]= NIL;
IF52666:
	local[7]= makeint((eusinteger_t)58L);
	local[8]= argv[2];
	ctx->vsp=local+9;
	w=(*ftab[2])(ctx,2,local+7,&ftab[2],fqv[9]); /*position*/
	local[6] = w;
	if (local[6]==NIL) goto IF52693;
	local[0] = local[6];
	local[7]= argv[2];
	local[8]= makeint((eusinteger_t)0L);
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)SUBSEQ(ctx,3,local+7); /*subseq*/
	argv[0]->c.obj.iv[0] = w;
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[0] = w;
	local[7]= local[0];
	goto IF52694;
IF52693:
	local[7]= NIL;
IF52694:
	local[1] = local[0];
	local[7]= argv[2];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)47L);
	ctx->vsp=local+9;
	w=(pointer)EQ(ctx,2,local+7); /*eql*/
	if (w==NIL) goto CON52736;
	local[7]= fqv[29];
	w = argv[0]->c.obj.iv[2];
	ctx->vsp=local+8;
	argv[0]->c.obj.iv[2] = cons(ctx,local[7],w);
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[1] = w;
	local[7]= local[1];
	goto CON52734;
CON52736:
	local[7]= argv[2];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)126L);
	ctx->vsp=local+9;
	w=(pointer)EQ(ctx,2,local+7); /*eql*/
	if (w==NIL) goto CON52768;
	local[7]= fqv[30];
	ctx->vsp=local+8;
	w=(pointer)GETENV(ctx,1,local+7); /*unix:getenv*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)F51204explode_directory_names(ctx,1,local+7); /*explode-directory-names*/
	argv[0]->c.obj.iv[2] = w;
	local[7]= argv[0]->c.obj.iv[2];
	local[8]= fqv[29];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)NCONC(ctx,2,local+7); /*nconc*/
	argv[0]->c.obj.iv[2] = w;
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[1] = w;
	local[7]= local[1];
	goto CON52734;
CON52768:
	local[7]= NIL;
CON52734:
WHL52812:
	local[7]= makeint((eusinteger_t)47L);
	local[8]= argv[2];
	local[9]= fqv[15];
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(*ftab[2])(ctx,4,local+7,&ftab[2],fqv[9]); /*position*/
	local[6] = w;
	if (local[6]==NIL) goto WHX52813;
	local[7]= argv[2];
	local[8]= local[1];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)SUBSEQ(ctx,3,local+7); /*subseq*/
	local[3] = w;
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[7] <= (eusinteger_t)w) goto IF52841;
	local[7]= local[3];
	w = argv[0]->c.obj.iv[2];
	ctx->vsp=local+8;
	argv[0]->c.obj.iv[2] = cons(ctx,local[7],w);
	local[7]= argv[0]->c.obj.iv[2];
	goto IF52842;
IF52841:
	local[7]= NIL;
IF52842:
	local[7]= local[6];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[1] = w;
	local[2] = local[1];
	goto WHL52812;
WHX52813:
	local[7]= NIL;
BLK52814:
	local[7]= argv[0]->c.obj.iv[2];
	ctx->vsp=local+8;
	w=(pointer)NREVERSE(ctx,1,local+7); /*nreverse*/
	argv[0]->c.obj.iv[2] = w;
	local[7]= argv[2];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)SUBSEQ(ctx,2,local+7); /*subseq*/
	local[4] = w;
	local[7]= local[4];
	local[8]= fqv[31];
	ctx->vsp=local+9;
	w=(pointer)EQUAL(ctx,2,local+7); /*equal*/
	if (w==NIL) goto CON52894;
	argv[0]->c.obj.iv[3] = local[4];
	argv[0]->c.obj.iv[4] = NIL;
	local[7]= argv[0]->c.obj.iv[4];
	goto CON52892;
CON52894:
	local[7]= makeint((eusinteger_t)46L);
	local[8]= argv[2];
	local[9]= fqv[15];
	local[10]= local[1];
	ctx->vsp=local+11;
	w=(*ftab[2])(ctx,4,local+7,&ftab[2],fqv[9]); /*position*/
	local[2] = w;
	if (local[2]!=NIL) goto CON52927;
	local[7]= argv[2];
	ctx->vsp=local+8;
	w=(pointer)LENGTH(ctx,1,local+7); /*length*/
	local[7]= w;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)GREATERP(ctx,2,local+7); /*>*/
	if (w==NIL) goto IF52933;
	local[7]= argv[2];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)SUBSEQ(ctx,2,local+7); /*subseq*/
	argv[0]->c.obj.iv[3] = w;
	local[7]= argv[0]->c.obj.iv[3];
	goto IF52934;
IF52933:
	local[7]= NIL;
IF52934:
	goto CON52925;
CON52927:
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[2] = w;
WHL52963:
	local[7]= makeint((eusinteger_t)46L);
	local[8]= argv[2];
	local[9]= fqv[15];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(*ftab[2])(ctx,4,local+7,&ftab[2],fqv[9]); /*position*/
	local[6] = w;
	if (local[6]==NIL) goto WHX52964;
	local[7]= local[6];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[2] = w;
	goto WHL52963;
WHX52964:
	local[7]= NIL;
BLK52965:
	local[7]= argv[2];
	local[8]= local[1];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)SUB1(ctx,1,local+9); /*1-*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SUBSEQ(ctx,3,local+7); /*subseq*/
	argv[0]->c.obj.iv[3] = w;
	local[7]= argv[2];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)SUBSEQ(ctx,2,local+7); /*subseq*/
	argv[0]->c.obj.iv[4] = w;
	local[7]= argv[0]->c.obj.iv[3];
	ctx->vsp=local+8;
	w=(pointer)F51236null_string_p(ctx,1,local+7); /*null-string-p*/
	if (w==NIL) goto IF53009;
	argv[0]->c.obj.iv[3] = NIL;
	local[7]= argv[0]->c.obj.iv[3];
	goto IF53010;
IF53009:
	local[7]= NIL;
IF53010:
	goto CON52925;
CON52950:
	local[7]= NIL;
CON52925:
	goto CON52892;
CON52909:
	local[7]= NIL;
CON52892:
	w = argv[0];
	local[0]= w;
BLK52624:
	ctx->vsp=local; return(local[0]);}

/*:directory-string*/
static pointer M53027pathname_directory_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[0]->c.obj.iv[2];
	w=argv[0]->c.obj.iv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= fqv[29];
	ctx->vsp=local+4;
	w=(pointer)EQ(ctx,2,local+2); /*eql*/
	if (w==NIL) goto IF53054;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[2]= fqv[32];
	w = local[0];
	ctx->vsp=local+3;
	local[0] = cons(ctx,local[2],w);
	local[2]= local[0];
	goto IF53055;
IF53054:
	local[2]= NIL;
IF53055:
	local[2]= NIL;
	local[3]= local[1];
WHL53135:
	if (local[3]==NIL) goto WHX53136;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= local[2];
	w = local[0];
	ctx->vsp=local+5;
	local[0] = cons(ctx,local[4],w);
	local[4]= fqv[33];
	w = local[0];
	ctx->vsp=local+5;
	local[0] = cons(ctx,local[4],w);
	goto WHL53135;
WHX53136:
	local[4]= NIL;
BLK53137:
	w = NIL;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)NREVERSE(ctx,1,local+2); /*nreverse*/
	local[0] = w;
	local[2]= (pointer)get_sym_func(fqv[34]);
	local[3]= loadglobal(fqv[8]);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,3,local+2); /*apply*/
	local[0]= w;
BLK53028:
	ctx->vsp=local; return(local[0]);}

/*:namestring*/
static pointer M53227pathname_namestring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	if (argv[0]->c.obj.iv[4]==NIL) goto IF53255;
	local[1]= loadglobal(fqv[8]);
	local[2]= fqv[36];
	local[3]= argv[0]->c.obj.iv[4];
	ctx->vsp=local+4;
	w=(pointer)CONCATENATE(ctx,3,local+1); /*concatenate*/
	local[1]= w;
	goto IF53256;
IF53255:
	local[1]= NIL;
IF53256:
	if (argv[0]->c.obj.iv[3]==NIL) goto IF53268;
	local[2]= loadglobal(fqv[8]);
	local[3]= argv[0]->c.obj.iv[0];
	local[4]= argv[0]->c.obj.iv[1];
	local[5]= local[0];
	local[6]= argv[0]->c.obj.iv[3];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)CONCATENATE(ctx,6,local+2); /*concatenate*/
	local[2]= w;
	goto IF53269;
IF53268:
	local[2]= loadglobal(fqv[8]);
	local[3]= argv[0]->c.obj.iv[0];
	local[4]= argv[0]->c.obj.iv[1];
	local[5]= local[0];
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)CONCATENATE(ctx,5,local+2); /*concatenate*/
	local[2]= w;
IF53269:
	w = local[2];
	local[0]= w;
BLK53228:
	ctx->vsp=local; return(local[0]);}

/*:host*/
static pointer M53291pathname_host(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT53295;}
	local[0]= NIL;
ENT53295:
ENT53294:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF53311;
	argv[0]->c.obj.iv[0] = local[0];
	local[1]= argv[0]->c.obj.iv[0];
	goto IF53312;
IF53311:
	local[1]= argv[0]->c.obj.iv[0];
IF53312:
	w = local[1];
	local[0]= w;
BLK53292:
	ctx->vsp=local; return(local[0]);}

/*:device*/
static pointer M53325pathname_device(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT53329;}
	local[0]= NIL;
ENT53329:
ENT53328:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF53345;
	argv[0]->c.obj.iv[1] = local[0];
	local[1]= argv[0]->c.obj.iv[1];
	goto IF53346;
IF53345:
	local[1]= argv[0]->c.obj.iv[1];
IF53346:
	w = local[1];
	local[0]= w;
BLK53326:
	ctx->vsp=local; return(local[0]);}

/*:directory*/
static pointer M53359pathname_directory(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT53363;}
	local[0]= NIL;
ENT53363:
ENT53362:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF53379;
	argv[0]->c.obj.iv[2] = local[0];
	local[1]= argv[0]->c.obj.iv[2];
	goto IF53380;
IF53379:
	local[1]= argv[0]->c.obj.iv[2];
IF53380:
	w = local[1];
	local[0]= w;
BLK53360:
	ctx->vsp=local; return(local[0]);}

/*:name*/
static pointer M53393pathname_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT53397;}
	local[0]= NIL;
ENT53397:
ENT53396:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF53413;
	argv[0]->c.obj.iv[3] = local[0];
	local[1]= argv[0]->c.obj.iv[3];
	goto IF53414;
IF53413:
	local[1]= argv[0]->c.obj.iv[3];
IF53414:
	w = local[1];
	local[0]= w;
BLK53394:
	ctx->vsp=local; return(local[0]);}

/*:type*/
static pointer M53427pathname_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT53431;}
	local[0]= NIL;
ENT53431:
ENT53430:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF53447;
	argv[0]->c.obj.iv[4] = local[0];
	local[1]= argv[0]->c.obj.iv[4];
	goto IF53448;
IF53447:
	local[1]= argv[0]->c.obj.iv[4];
IF53448:
	w = local[1];
	local[0]= w;
BLK53428:
	ctx->vsp=local; return(local[0]);}

/*:set-type*/
static pointer M53461pathname_set_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	argv[0]->c.obj.iv[4] = argv[2];
	w = argv[0]->c.obj.iv[4];
	local[0]= w;
BLK53462:
	ctx->vsp=local; return(local[0]);}

/*:version*/
static pointer M53484pathname_version(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT53488;}
	local[0]= NIL;
ENT53488:
ENT53487:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF53504;
	argv[0]->c.obj.iv[5] = local[0];
	local[1]= argv[0]->c.obj.iv[5];
	goto IF53505;
IF53504:
	local[1]= argv[0]->c.obj.iv[5];
IF53505:
	w = local[1];
	local[0]= w;
BLK53485:
	ctx->vsp=local; return(local[0]);}

/*:merge*/
static pointer M53518pathname_merge(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[0]->c.obj.iv[0]!=NIL) goto IF53533;
	argv[0]->c.obj.iv[0] = *(ovafptr(argv[2],fqv[37]));
	local[0]= argv[0]->c.obj.iv[0];
	goto IF53534;
IF53533:
	local[0]= NIL;
IF53534:
	if (argv[0]->c.obj.iv[1]!=NIL) goto IF53547;
	argv[0]->c.obj.iv[1] = *(ovafptr(argv[2],fqv[38]));
	local[0]= argv[0]->c.obj.iv[1];
	goto IF53548;
IF53547:
	local[0]= NIL;
IF53548:
	if (argv[0]->c.obj.iv[2]!=NIL) goto IF53561;
	argv[0]->c.obj.iv[2] = *(ovafptr(argv[2],fqv[39]));
	local[0]= argv[0]->c.obj.iv[2];
	goto IF53562;
IF53561:
	local[0]= NIL;
IF53562:
	if (argv[0]->c.obj.iv[3]!=NIL) goto IF53575;
	argv[0]->c.obj.iv[3] = *(ovafptr(argv[2],fqv[40]));
	local[0]= argv[0]->c.obj.iv[3];
	goto IF53576;
IF53575:
	local[0]= NIL;
IF53576:
	if (argv[0]->c.obj.iv[4]!=NIL) goto IF53589;
	argv[0]->c.obj.iv[4] = *(ovafptr(argv[2],fqv[41]));
	local[0]= argv[0]->c.obj.iv[4];
	goto IF53590;
IF53589:
	local[0]= NIL;
IF53590:
	if (argv[0]->c.obj.iv[5]!=NIL) goto IF53603;
	argv[0]->c.obj.iv[5] = *(ovafptr(argv[2],fqv[42]));
	local[0]= argv[0]->c.obj.iv[5];
	goto IF53604;
IF53603:
	local[0]= NIL;
IF53604:
	w = argv[0];
	local[0]= w;
BLK53519:
	ctx->vsp=local; return(local[0]);}

/*:add-directory*/
static pointer M53620pathname_add_directory(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0]->c.obj.iv[2];
	local[1]= (pointer)get_sym_func(fqv[8]);
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	argv[0]->c.obj.iv[2] = w;
	w = argv[0]->c.obj.iv[2];
	local[0]= w;
BLK53621:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M53650pathname_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT53654;}
	local[0]= T;
ENT53654:
ENT53653:
	if (n>3) maerror();
	local[1]= local[0];
	local[2]= fqv[43];
	local[3]= argv[0];
	local[4]= fqv[44];
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,2,local+3); /*send*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[0]= w;
BLK53651:
	ctx->vsp=local; return(local[0]);}

/*:init*/
static pointer M53679pathname_init(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[45], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY53696;
	local[0] = NIL;
KEY53696:
	if (n & (1<<1)) goto KEY53701;
	local[1] = NIL;
KEY53701:
	if (n & (1<<2)) goto KEY53706;
	local[2] = NIL;
KEY53706:
	if (n & (1<<3)) goto KEY53711;
	local[3] = NIL;
KEY53711:
	if (n & (1<<4)) goto KEY53716;
	local[4] = NIL;
KEY53716:
	if (n & (1<<5)) goto KEY53721;
	local[5] = NIL;
KEY53721:
	if (local[0]==NIL) goto IF53730;
	argv[0]->c.obj.iv[0] = local[0];
	local[6]= argv[0]->c.obj.iv[0];
	goto IF53731;
IF53730:
	local[6]= NIL;
IF53731:
	if (local[1]==NIL) goto IF53743;
	argv[0]->c.obj.iv[1] = local[1];
	local[6]= argv[0]->c.obj.iv[1];
	goto IF53744;
IF53743:
	local[6]= NIL;
IF53744:
	if (local[2]==NIL) goto IF53756;
	argv[0]->c.obj.iv[2] = local[2];
	local[6]= argv[0]->c.obj.iv[2];
	goto IF53757;
IF53756:
	local[6]= NIL;
IF53757:
	if (local[3]==NIL) goto IF53769;
	argv[0]->c.obj.iv[3] = local[3];
	local[6]= argv[0]->c.obj.iv[3];
	goto IF53770;
IF53769:
	local[6]= NIL;
IF53770:
	if (local[4]==NIL) goto IF53782;
	argv[0]->c.obj.iv[4] = local[4];
	local[6]= argv[0]->c.obj.iv[4];
	goto IF53783;
IF53782:
	local[6]= NIL;
IF53783:
	if (local[5]==NIL) goto IF53795;
	argv[0]->c.obj.iv[5] = local[5];
	local[6]= argv[0]->c.obj.iv[5];
	goto IF53796;
IF53795:
	local[6]= NIL;
IF53796:
	w = argv[0];
	local[0]= w;
BLK53680:
	ctx->vsp=local; return(local[0]);}

/*pathnamep*/
static pointer F51208pathnamep(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[46]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK53813:
	ctx->vsp=local; return(local[0]);}

/*pathname*/
static pointer F51211pathname(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[46]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	if (w==NIL) goto IF53840;
	local[0]= argv[0];
	goto IF53841;
IF53840:
	if (argv[0]==NIL) goto IF53850;
	local[0]= loadglobal(fqv[46]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[47];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F51161string(ctx,1,local+3); /*string*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = local[0];
	local[0]= w;
	goto IF53851;
IF53850:
	local[0]= loadglobal(fqv[46]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
IF53851:
IF53841:
	w = local[0];
	local[0]= w;
BLK53830:
	ctx->vsp=local; return(local[0]);}

/*namestring*/
static pointer F51214namestring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!issymbol(w)) goto CON53900;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F51161string(ctx,1,local+0); /*string*/
	local[0]= w;
	goto CON53898;
CON53900:
	w = argv[0];
	if (!isstring(w)) goto CON53908;
	local[0]= argv[0];
	goto CON53898;
CON53908:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F51208pathnamep(ctx,1,local+0); /*pathnamep*/
	if (w==NIL) goto CON53914;
	local[0]= argv[0];
	local[1]= fqv[44];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	goto CON53898;
CON53914:
	local[0]= fqv[48];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,2,local+0); /*error*/
	local[0]= w;
	goto CON53898;
CON53926:
	local[0]= NIL;
CON53898:
	w = local[0];
	local[0]= w;
BLK53888:
	ctx->vsp=local; return(local[0]);}

/*pathname-directory*/
static pointer F51217pathname_directory(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F51211pathname(ctx,1,local+0); /*pathname*/
	w = *(ovafptr(w,fqv[39]));
	local[0]= w;
BLK53935:
	ctx->vsp=local; return(local[0]);}

/*pathname-name*/
static pointer F51220pathname_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F51211pathname(ctx,1,local+0); /*pathname*/
	w = *(ovafptr(w,fqv[40]));
	local[0]= w;
BLK53952:
	ctx->vsp=local; return(local[0]);}

/*pathname-type*/
static pointer F51223pathname_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F51211pathname(ctx,1,local+0); /*pathname*/
	w = *(ovafptr(w,fqv[41]));
	local[0]= w;
BLK53969:
	ctx->vsp=local; return(local[0]);}

/*directory-namestring*/
static pointer F51226directory_namestring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F51211pathname(ctx,1,local+0); /*pathname*/
	local[0]= w;
	local[1]= fqv[35];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK53986:
	ctx->vsp=local; return(local[0]);}

/*make-pathname*/
static pointer F51229make_pathname(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[49], &argv[0], n-0, local+0, 0);
	if (n & (1<<0)) goto KEY54018;
	local[0] = NIL;
KEY54018:
	if (n & (1<<1)) goto KEY54023;
	local[1] = NIL;
KEY54023:
	if (n & (1<<2)) goto KEY54028;
	local[2] = NIL;
KEY54028:
	if (n & (1<<3)) goto KEY54033;
	local[3] = NIL;
KEY54033:
	if (n & (1<<4)) goto KEY54038;
	local[4] = NIL;
KEY54038:
	if (n & (1<<5)) goto KEY54043;
	local[5] = NIL;
KEY54043:
	if (n & (1<<6)) goto KEY54048;
	local[6] = NIL;
KEY54048:
	local[7]= loadglobal(fqv[46]);
	ctx->vsp=local+8;
	w=(pointer)INSTANTIATE(ctx,1,local+7); /*instantiate*/
	local[7]= w;
	local[8]= local[7];
	local[9]= fqv[50];
	local[10]= fqv[51];
	local[11]= local[0];
	local[12]= fqv[52];
	local[13]= local[1];
	local[14]= fqv[53];
	local[15]= local[2];
	local[16]= fqv[54];
	local[17]= local[3];
	local[18]= fqv[55];
	local[19]= local[4];
	local[20]= fqv[56];
	local[21]= local[5];
	ctx->vsp=local+22;
	w=(pointer)SEND(ctx,14,local+8); /*send*/
	w = local[7];
	local[7]= w;
	local[8]= fqv[57];
	local[9]= local[6];
	ctx->vsp=local+10;
	w=(pointer)F51211pathname(ctx,1,local+9); /*pathname*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)SEND(ctx,3,local+7); /*send*/
	local[0]= w;
BLK54005:
	ctx->vsp=local; return(local[0]);}

/*parse-namestring*/
static pointer F51232parse_namestring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F51211pathname(ctx,1,local+0); /*pathname*/
	local[0]= w;
BLK54108:
	ctx->vsp=local; return(local[0]);}

/*null-string-p*/
static pointer F51236null_string_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= fqv[58];
	ctx->vsp=local+2;
	w=(pointer)EQUAL(ctx,2,local+0); /*equal*/
	local[0]= w;
BLK54125:
	ctx->vsp=local; return(local[0]);}

/*merge-pathnames*/
static pointer F51239merge_pathnames(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT54143;}
	local[0]= loadglobal(fqv[59]);
ENT54143:
ENT54142:
	if (n>2) maerror();
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)F51208pathnamep(ctx,1,local+1); /*pathnamep*/
	if (w==NIL) goto IF54161;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)COPYOBJ(ctx,1,local+1); /*copy-object*/
	local[1]= w;
	goto IF54162;
IF54161:
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)F51211pathname(ctx,1,local+1); /*pathname*/
	local[1]= w;
IF54162:
	argv[0] = local[1];
	local[1]= argv[0];
	local[2]= fqv[57];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)F51211pathname(ctx,1,local+3); /*pathname*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	local[0]= w;
BLK54140:
	ctx->vsp=local; return(local[0]);}

/*concatenate-pathnames*/
static pointer F51242concatenate_pathnames(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST54190:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= (pointer)get_sym_func(fqv[34]);
	local[2]= loadglobal(fqv[8]);
	local[3]= (pointer)get_sym_func(fqv[60]);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,2,local+3); /*mapcar*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)APPLY(ctx,3,local+1); /*apply*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)F51211pathname(ctx,1,local+1); /*pathname*/
	local[0]= w;
BLK54188:
	ctx->vsp=local; return(local[0]);}

/*truename*/
static pointer F51245truename(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F51211pathname(ctx,1,local+0); /*pathname*/
	argv[0] = w;
	ctx->vsp=local+0;
	w=(pointer)GETWD(ctx,0,local+0); /*unix:getwd*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= fqv[35];
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,2,local+1); /*send*/
	local[1]= w;
	local[2]= T;
	if (local[1]==NIL) goto IF54252;
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)CHDIR(ctx,1,local+3); /*unix:chdir*/
	local[2] = w;
	local[3]= local[2];
	goto IF54253;
IF54252:
	local[3]= NIL;
IF54253:
	local[3]= local[2];
	if (T!=local[3]) goto CON54269;
	ctx->vsp=local+3;
	w=(pointer)GETWD(ctx,0,local+3); /*unix:getwd*/
	local[2] = w;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	w = makeint((eusinteger_t)1L);
	if ((eusinteger_t)local[3] <= (eusinteger_t)w) goto IF54283;
	local[3]= loadglobal(fqv[8]);
	local[4]= local[2];
	local[5]= fqv[61];
	ctx->vsp=local+6;
	w=(pointer)CONCATENATE(ctx,3,local+3); /*concatenate*/
	local[2] = w;
	local[3]= local[2];
	goto IF54284;
IF54283:
	local[3]= NIL;
IF54284:
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)CHDIR(ctx,1,local+3); /*unix:chdir*/
	local[3]= fqv[54];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F51220pathname_name(ctx,1,local+4); /*pathname-name*/
	local[4]= w;
	local[5]= fqv[55];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)F51223pathname_type(ctx,1,local+6); /*pathname-type*/
	local[6]= w;
	local[7]= fqv[53];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)F51217pathname_directory(ctx,1,local+8); /*pathname-directory*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)F51229make_pathname(ctx,6,local+3); /*make-pathname*/
	local[3]= w;
	goto CON54267;
CON54269:
	local[3]= fqv[62];
	ctx->vsp=local+4;
	w=(pointer)SIGERROR(ctx,1,local+3); /*error*/
	local[3]= w;
	goto CON54267;
CON54321:
	local[3]= NIL;
CON54267:
	w = local[3];
	local[0]= w;
BLK54214:
	ctx->vsp=local; return(local[0]);}

/*:prin1*/
static pointer M54370url_pathname_prin1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= fqv[63];
	local[2]= argv[1];
	local[3]= fqv[54];
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,2,local+2); /*send*/
	local[2]= w;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)ADDRESS(ctx,1,local+3); /*system:address*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= fqv[64];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,5,local+0); /*format*/
	local[0]= w;
BLK54371:
	ctx->vsp=local; return(local[0]);}

/*:string*/
static pointer M54402url_pathname_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= fqv[65];
	local[2]= argv[0]->c.obj.iv[6];
	local[3]= argv[0]->c.obj.iv[7];
	local[4]= argv[0]->c.obj.iv[8];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)F51214namestring(ctx,1,local+5); /*namestring*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,6,local+0); /*format*/
	local[0]= w;
BLK54403:
	ctx->vsp=local; return(local[0]);}

/*:string2*/
static pointer M54424url_pathname_string2(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= fqv[66];
	local[2]= argv[0]->c.obj.iv[6];
	local[3]= argv[0]->c.obj.iv[7];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F51214namestring(ctx,1,local+4); /*namestring*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,5,local+0); /*format*/
	local[0]= w;
BLK54425:
	ctx->vsp=local; return(local[0]);}

/*:port*/
static pointer M54445url_pathname_port(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT54449;}
	local[0]= NIL;
ENT54449:
ENT54448:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF54465;
	argv[0]->c.obj.iv[8] = local[0];
	local[1]= argv[0]->c.obj.iv[8];
	goto IF54466;
IF54465:
	local[1]= NIL;
IF54466:
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK54446:
	ctx->vsp=local; return(local[0]);}

/*:server*/
static pointer M54481url_pathname_server(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT54485;}
	local[0]= NIL;
ENT54485:
ENT54484:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF54501;
	argv[0]->c.obj.iv[7] = local[0];
	local[1]= argv[0]->c.obj.iv[7];
	goto IF54502;
IF54501:
	local[1]= NIL;
IF54502:
	w = argv[0]->c.obj.iv[7];
	local[0]= w;
BLK54482:
	ctx->vsp=local; return(local[0]);}

/*:connect*/
static pointer M54517url_pathname_connect(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT54521;}
	local[0]= makeint((eusinteger_t)5L);
ENT54521:
ENT54520:
	if (n>3) maerror();
	local[1]= argv[0]->c.obj.iv[7];
	local[2]= argv[0]->c.obj.iv[8];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(*ftab[7])(ctx,3,local+1,&ftab[7],fqv[67]); /*connect-server*/
	local[0]= w;
BLK54518:
	ctx->vsp=local; return(local[0]);}

/*:host*/
static pointer M54544url_pathname_host(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT54548;}
	local[0]= NIL;
ENT54548:
ENT54547:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF54564;
	argv[0]->c.obj.iv[7] = local[0];
	local[1]= argv[0]->c.obj.iv[7];
	goto IF54565;
IF54564:
	local[1]= NIL;
IF54565:
	w = argv[0]->c.obj.iv[7];
	local[0]= w;
BLK54545:
	ctx->vsp=local; return(local[0]);}

/*:protocol*/
static pointer M54580url_pathname_protocol(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT54584;}
	local[0]= NIL;
ENT54584:
ENT54583:
	if (n>3) maerror();
	if (local[0]==NIL) goto IF54600;
	argv[0]->c.obj.iv[6] = local[0];
	local[1]= argv[0]->c.obj.iv[6];
	goto IF54601;
IF54600:
	local[1]= NIL;
IF54601:
	w = argv[0]->c.obj.iv[6];
	local[0]= w;
BLK54581:
	ctx->vsp=local; return(local[0]);}

/*:parse-namestring*/
static pointer M54616url_pathname_parse_namestring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)58L);
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,2,local+3,&ftab[2],fqv[9]); /*position*/
	local[0] = w;
	if (local[0]==NIL) goto IF54647;
	local[3]= argv[2];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SUBSEQ(ctx,3,local+3); /*subseq*/
	argv[0]->c.obj.iv[6] = w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[0] = w;
	local[3]= local[0];
	goto IF54648;
IF54647:
	argv[0]->c.obj.iv[6] = fqv[68];
	local[0] = makeint((eusinteger_t)0L);
	local[3]= local[0];
IF54648:
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)AREF(ctx,2,local+3); /*aref*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)47L);
	ctx->vsp=local+5;
	w=(pointer)EQ(ctx,2,local+3); /*eql*/
	if (w==NIL) goto CON54684;
	local[3]= argv[2];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)AREF(ctx,2,local+3); /*aref*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)47L);
	ctx->vsp=local+5;
	w=(pointer)EQ(ctx,2,local+3); /*eql*/
	if (w==NIL) goto CON54684;
	local[3]= makeint((eusinteger_t)47L);
	local[4]= argv[2];
	local[5]= fqv[15];
	local[6]= makeint((eusinteger_t)3L);
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)PLUS(ctx,2,local+6); /*+*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[2])(ctx,4,local+3,&ftab[2],fqv[9]); /*position*/
	local[2] = w;
	if (local[2]!=NIL) goto IF54724;
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[2] = w;
	local[3]= local[2];
	goto IF54725;
IF54724:
	local[3]= NIL;
IF54725:
	local[3]= argv[2];
	local[4]= makeint((eusinteger_t)2L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[4]= w;
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)SUBSEQ(ctx,3,local+3); /*subseq*/
	argv[0]->c.obj.iv[7] = w;
	local[3]= makeint((eusinteger_t)58L);
	local[4]= argv[0]->c.obj.iv[7];
	ctx->vsp=local+5;
	w=(*ftab[2])(ctx,2,local+3,&ftab[2],fqv[9]); /*position*/
	local[1] = w;
	if (local[1]==NIL) goto IF54758;
	local[3]= argv[0]->c.obj.iv[7];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SUBSEQ(ctx,2,local+3); /*subseq*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[8])(ctx,1,local+3,&ftab[8],fqv[69]); /*read-from-string*/
	argv[0]->c.obj.iv[8] = w;
	local[3]= argv[0]->c.obj.iv[7];
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)SUBSEQ(ctx,3,local+3); /*subseq*/
	argv[0]->c.obj.iv[7] = w;
	local[3]= argv[0]->c.obj.iv[7];
	goto IF54759;
IF54758:
	argv[0]->c.obj.iv[8] = makeint((eusinteger_t)80L);
	local[3]= argv[0]->c.obj.iv[8];
IF54759:
	local[3]= argv[0];
	local[4]= *(ovafptr(argv[1],fqv[70]));
	local[5]= fqv[47];
	local[6]= argv[2];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,2,local+6); /*subseq*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)SENDMESSAGE(ctx,4,local+3); /*send-message*/
	local[3]= fqv[71];
	w=argv[0]->c.obj.iv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
	ctx->vsp=local+5;
	w=(pointer)APPEND(ctx,2,local+3); /*append*/
	argv[0]->c.obj.iv[2] = w;
	local[3]= argv[0];
	goto CON54682;
CON54684:
	local[3]= fqv[72];
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,2,local+3); /*error*/
	local[3]= w;
	goto CON54682;
CON54825:
	local[3]= NIL;
CON54682:
	w = local[3];
	local[0]= w;
BLK54617:
	ctx->vsp=local; return(local[0]);}

/*:percent-escape*/
static pointer M54834url_pathname_percent_escape(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[73], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY54847;
	local[0] = T;
KEY54847:
	if (n & (1<<1)) goto KEY54852;
	local[1] = NIL;
KEY54852:
	local[2]= argv[0];
	local[3]= fqv[47];
	if (local[1]==NIL) goto IF54865;
	local[4]= argv[0];
	local[5]= fqv[64];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F51274unescaped_url_string_from_namestring(ctx,2,local+4); /*unescaped-url-string-from-namestring*/
	local[4]= w;
	goto IF54866;
IF54865:
	local[4]= argv[0];
	local[5]= fqv[64];
	ctx->vsp=local+6;
	w=(pointer)SEND(ctx,2,local+4); /*send*/
	local[4]= w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F51270escaped_url_string_from_namestring(ctx,2,local+4); /*escaped-url-string-from-namestring*/
	local[4]= w;
IF54866:
	ctx->vsp=local+5;
	w=(pointer)SEND(ctx,3,local+2); /*send*/
	local[0]= w;
BLK54835:
	ctx->vsp=local; return(local[0]);}

/*url-pathname*/
static pointer F51264url_pathname(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[74]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	if (w==NIL) goto IF54900;
	local[0]= argv[0];
	goto IF54901;
IF54900:
	if (argv[0]==NIL) goto IF54911;
	local[0]= loadglobal(fqv[74]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
	local[1]= local[0];
	local[2]= fqv[47];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F51161string(ctx,1,local+3); /*string*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,3,local+1); /*send*/
	w = local[0];
	local[0]= w;
	goto IF54912;
IF54911:
	local[0]= loadglobal(fqv[74]);
	ctx->vsp=local+1;
	w=(pointer)INSTANTIATE(ctx,1,local+0); /*instantiate*/
	local[0]= w;
IF54912:
IF54901:
	w = local[0];
	local[0]= w;
BLK54890:
	ctx->vsp=local; return(local[0]);}

/*parse-url*/
static pointer F51266parse_url(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[75];
	local[1]= NIL;
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)80L);
	local[4]= makeint((eusinteger_t)0L);
	local[5]= NIL;
	local[6]= makeint((eusinteger_t)58L);
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(*ftab[2])(ctx,2,local+6,&ftab[2],fqv[9]); /*position*/
	local[4] = w;
	if (local[4]==NIL) goto IF54983;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)SUBSEQ(ctx,3,local+6); /*subseq*/
	local[0] = w;
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	local[6]= local[4];
	goto IF54984;
IF54983:
	local[4] = makeint((eusinteger_t)0L);
	local[6]= local[4];
IF54984:
	local[6]= argv[0];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,2,local+6); /*aref*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)47L);
	ctx->vsp=local+8;
	w=(pointer)EQ(ctx,2,local+6); /*eql*/
	if (w==NIL) goto CON55018;
	local[6]= argv[0];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,2,local+6); /*aref*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)47L);
	ctx->vsp=local+8;
	w=(pointer)EQ(ctx,2,local+6); /*eql*/
	if (w==NIL) goto CON55018;
	local[6]= argv[0];
	local[7]= makeint((eusinteger_t)2L);
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)PLUS(ctx,2,local+7); /*+*/
	local[7]= w;
	local[8]= makeint((eusinteger_t)47L);
	local[9]= argv[0];
	local[10]= fqv[15];
	local[11]= makeint((eusinteger_t)3L);
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,2,local+11); /*+*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(*ftab[2])(ctx,4,local+8,&ftab[2],fqv[9]); /*position*/
	local[4] = w;
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)SUBSEQ(ctx,3,local+6); /*subseq*/
	local[1] = w;
	local[6]= makeint((eusinteger_t)58L);
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(*ftab[2])(ctx,2,local+6,&ftab[2],fqv[9]); /*position*/
	local[5] = w;
	if (local[5]==NIL) goto IF55071;
	local[6]= local[1];
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,2,local+6); /*subseq*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(*ftab[8])(ctx,1,local+6,&ftab[8],fqv[69]); /*read-from-string*/
	local[3] = w;
	local[6]= local[1];
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)SUBSEQ(ctx,3,local+6); /*subseq*/
	local[1] = w;
	local[6]= local[1];
	goto IF55072;
IF55071:
	local[3] = makeint((eusinteger_t)80L);
	local[6]= local[3];
IF55072:
	local[6]= argv[0];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,2,local+6); /*subseq*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)F51211pathname(ctx,1,local+6); /*pathname*/
	local[2] = w;
	local[6]= local[2];
	local[7]= fqv[53];
	local[8]= fqv[76];
	local[9]= local[2];
	local[10]= fqv[53];
	ctx->vsp=local+11;
	w=(pointer)SEND(ctx,2,local+9); /*send*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.cdr;
	ctx->vsp=local+10;
	w=(pointer)APPEND(ctx,2,local+8); /*append*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SEND(ctx,3,local+6); /*send*/
	local[6]= local[0];
	local[7]= local[1];
	local[8]= local[3];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,4,local+6); /*list*/
	local[6]= w;
	goto CON55016;
CON55018:
	local[6]= fqv[77];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)SIGERROR(ctx,2,local+6); /*error*/
	local[6]= w;
	goto CON55016;
CON55145:
	local[6]= NIL;
CON55016:
	w = local[6];
	local[0]= w;
BLK54948:
	ctx->vsp=local; return(local[0]);}

/*escape-url*/
static pointer F51268escape_url(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT55160;}
	local[0]= loadglobal(fqv[78]);
ENT55160:
	if (n>=3) { local[1]=(argv[2]); goto ENT55159;}
	local[1]= T;
ENT55159:
ENT55158:
	if (n>3) maerror();
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,FLET55182,env,argv,local);
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,FLET55184,env,argv,local);
	local[4]= NIL;
	local[5]= argv[0];
	local[6]= loadglobal(fqv[79]);
	ctx->vsp=local+7;
	w=(pointer)COERCE(ctx,2,local+5); /*coerce*/
	local[5]= w;
WHL55209:
	if (local[5]==NIL) goto WHX55210;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[4];
	w = local[2];
	ctx->vsp=local+7;
	w=FLET55182(ctx,1,local+6,w);
	if (w==NIL) goto CON55260;
	local[6]= local[4];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)WRTBYTE(ctx,2,local+6); /*write-byte*/
	local[6]= w;
	goto CON55258;
CON55260:
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)13L);
	ctx->vsp=local+8;
	w=(*ftab[9])(ctx,2,local+6,&ftab[9],fqv[80]); /*char=*/
	if (w==NIL) goto CON55273;
	local[6]= makeint((eusinteger_t)10L);
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)WRTBYTE(ctx,2,local+6); /*write-byte*/
	local[6]= w;
	goto CON55258;
CON55273:
	if (local[1]==NIL) goto CON55284;
	local[6]= local[4];
	local[7]= makeint((eusinteger_t)32L);
	ctx->vsp=local+8;
	w=(*ftab[9])(ctx,2,local+6,&ftab[9],fqv[80]); /*char=*/
	if (w==NIL) goto CON55284;
	local[6]= makeint((eusinteger_t)43L);
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)WRTBYTE(ctx,2,local+6); /*write-byte*/
	local[6]= w;
	goto CON55258;
CON55284:
	local[6]= local[0];
	local[7]= fqv[81];
	local[8]= NIL;
	local[9]= fqv[82];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)XFORMAT(ctx,3,local+8); /*format*/
	local[8]= w;
	local[9]= makeint((eusinteger_t)2L);
	w = local[3];
	ctx->vsp=local+10;
	w=FLET55184(ctx,2,local+8,w);
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	goto CON55258;
CON55298:
	local[6]= NIL;
CON55258:
	goto WHL55209;
WHX55210:
	local[6]= NIL;
BLK55211:
	w = NIL;
	local[0]= w;
BLK55156:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET55182(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeint((eusinteger_t)65L);
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)90L);
	ctx->vsp=local+3;
	w=(pointer)LSEQP(ctx,3,local+0); /*<=*/
	local[0]= w;
	if (w!=NIL) goto OR55326;
	local[0]= makeint((eusinteger_t)97L);
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)122L);
	ctx->vsp=local+3;
	w=(pointer)LSEQP(ctx,3,local+0); /*<=*/
	local[0]= w;
	if (w!=NIL) goto OR55326;
	local[0]= makeint((eusinteger_t)48L);
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)57L);
	ctx->vsp=local+3;
	w=(pointer)LSEQP(ctx,3,local+0); /*<=*/
	local[0]= w;
	if (w!=NIL) goto OR55326;
	local[0]= argv[0];
	local[1]= loadglobal(fqv[83]);
	local[2]= fqv[2];
	local[3]= (pointer)get_sym_func(fqv[80]);
	ctx->vsp=local+4;
	w=(*ftab[10])(ctx,4,local+0,&ftab[10],fqv[84]); /*find*/
	local[0]= w;
OR55326:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET55184(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	w=(*ftab[11])(ctx,0,local+0,&ftab[11],fqv[85]); /*make-string-output-stream*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)0L);
	local[2]= argv[1];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)MINUS(ctx,2,local+2); /*-*/
	local[2]= w;
WHL55410:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX55411;
	local[3]= makeint((eusinteger_t)48L);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)WRTBYTE(ctx,2,local+3); /*write-byte*/
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL55410;
WHX55411:
	local[3]= NIL;
BLK55412:
	w = NIL;
	local[1]= local[0];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,2,local+1); /*format*/
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[12])(ctx,1,local+1,&ftab[12],fqv[86]); /*get-output-stream-string*/
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(*ftab[12])(ctx,1,local+1,&ftab[12],fqv[86]); /*get-output-stream-string*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*escaped-url-string-from-namestring*/
static pointer F51270escaped_url_string_from_namestring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT55453;}
	local[0]= T;
ENT55453:
ENT55452:
	if (n>2) maerror();
	ctx->vsp=local+1;
	w=(*ftab[11])(ctx,0,local+1,&ftab[11],fqv[85]); /*make-string-output-stream*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= local[1];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)F51268escape_url(ctx,3,local+2); /*escape-url*/
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[86]); /*get-output-stream-string*/
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[86]); /*get-output-stream-string*/
	local[0]= w;
BLK55450:
	ctx->vsp=local; return(local[0]);}

/*unescape-url*/
static pointer F51272unescape_url(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT55499;}
	local[0]= loadglobal(fqv[78]);
ENT55499:
	if (n>=3) { local[1]=(argv[2]); goto ENT55498;}
	local[1]= T;
ENT55498:
ENT55497:
	if (n>3) maerror();
	local[2]= argv[0];
	local[3]= fqv[15];
	local[4]= fqv[87];
	ctx->vsp=local+5;
	w=(*ftab[13])(ctx,2,local+3,&ftab[13],fqv[88]); /*member*/
	if (w==NIL) goto IF55528;
	local[3]= fqv[15];
	local[4]= fqv[89];
	ctx->vsp=local+5;
	w=(*ftab[13])(ctx,2,local+3,&ftab[13],fqv[88]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	goto IF55529;
IF55528:
	local[3]= NIL;
IF55529:
	local[4]= fqv[16];
	local[5]= fqv[90];
	ctx->vsp=local+6;
	w=(*ftab[13])(ctx,2,local+4,&ftab[13],fqv[88]); /*member*/
	if (w==NIL) goto IF55552;
	local[4]= fqv[16];
	local[5]= fqv[91];
	ctx->vsp=local+6;
	w=(*ftab[13])(ctx,2,local+4,&ftab[13],fqv[88]); /*member*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	goto IF55553;
IF55552:
	local[4]= NIL;
IF55553:
	ctx->vsp=local+5;
	w=(*ftab[14])(ctx,3,local+2,&ftab[14],fqv[92]); /*make-string-input-stream*/
	local[2]= w;
WHL55580:
	local[3]= local[2];
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)PEEKCH(ctx,2,local+3); /*peek-char*/
	if (w==NIL) goto WHX55581;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)PEEKCH(ctx,1,local+3); /*peek-char*/
	local[3]= w;
	local[4]= local[3];
	if (fqv[93]!=local[4]) goto IF55605;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)READCH(ctx,1,local+4); /*read-char*/
	local[4]= makeint((eusinteger_t)35L);
	local[5]= makeint((eusinteger_t)120L);
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)READCH(ctx,1,local+6); /*read-char*/
	local[6]= w;
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)READCH(ctx,1,local+7); /*read-char*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,4,local+4); /*list*/
	local[4]= w;
	local[5]= loadglobal(fqv[8]);
	ctx->vsp=local+6;
	w=(pointer)COERCE(ctx,2,local+4); /*coerce*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(*ftab[8])(ctx,1,local+4,&ftab[8],fqv[69]); /*read-from-string*/
	local[4]= w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)WRTBYTE(ctx,2,local+4); /*write-byte*/
	local[4]= w;
	goto IF55606;
IF55605:
	local[4]= local[3];
	if (fqv[94]!=local[4]) goto IF55636;
	if (local[1]==NIL) goto IF55644;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)READCH(ctx,1,local+4); /*read-char*/
	local[4]= makeint((eusinteger_t)32L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)WRTBYTE(ctx,2,local+4); /*write-byte*/
	local[4]= w;
	goto IF55645;
IF55644:
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)READCH(ctx,1,local+4); /*read-char*/
	local[4]= w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)WRTBYTE(ctx,2,local+4); /*write-byte*/
	local[4]= w;
IF55645:
	goto IF55637;
IF55636:
	if (T==NIL) goto IF55666;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)READCH(ctx,1,local+4); /*read-char*/
	local[4]= w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)WRTBYTE(ctx,2,local+4); /*write-byte*/
	local[4]= w;
	goto IF55667;
IF55666:
	local[4]= NIL;
IF55667:
IF55637:
IF55606:
	w = local[4];
	goto WHL55580;
WHX55581:
	local[3]= NIL;
BLK55582:
	w = local[3];
	local[0]= w;
BLK55495:
	ctx->vsp=local; return(local[0]);}

/*unescaped-url-string-from-namestring*/
static pointer F51274unescaped_url_string_from_namestring(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT55683;}
	local[0]= T;
ENT55683:
ENT55682:
	if (n>2) maerror();
	ctx->vsp=local+1;
	w=(*ftab[11])(ctx,0,local+1,&ftab[11],fqv[85]); /*make-string-output-stream*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= local[1];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)F51272unescape_url(ctx,3,local+2); /*unescape-url*/
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[86]); /*get-output-stream-string*/
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[12])(ctx,1,local+2,&ftab[12],fqv[86]); /*get-output-stream-string*/
	local[0]= w;
BLK55680:
	ctx->vsp=local; return(local[0]);}

/*digits-string*/
static pointer F51276digits_string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT55728;}
	local[0]= makeint((eusinteger_t)10L);
ENT55728:
ENT55727:
	if (n>3) maerror();
	local[1]= argv[1];
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)LSEQP(ctx,2,local+1); /*<=*/
	if (w==NIL) goto IF55744;
	local[1]= NIL;
	local[2]= fqv[95];
	local[3]= argv[0];
	local[4]= argv[0];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)QUOTIENT(ctx,2,local+4); /*/*/
	local[4]= w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)MINUS(ctx,2,local+3); /*-*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,3,local+1); /*format*/
	local[1]= w;
	goto IF55745;
IF55744:
	local[1]= loadglobal(fqv[8]);
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)QUOTIENT(ctx,2,local+2); /*/*/
	local[2]= w;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)SUB1(ctx,1,local+3); /*1-*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)F51276digits_string(ctx,2,local+2); /*digits-string*/
	local[2]= w;
	local[3]= argv[0];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)F51276digits_string(ctx,2,local+3); /*digits-string*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)CONCATENATE(ctx,3,local+1); /*concatenate*/
	local[1]= w;
IF55745:
	w = local[1];
	local[0]= w;
BLK55725:
	ctx->vsp=local; return(local[0]);}

/*timed-file-name*/
static pointer F51278timed_file_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT55785;}
	ctx->vsp=local+0;
	w=(pointer)LOCALTIME(ctx,0,local+0); /*unix:localtime*/
	local[0]= w;
ENT55785:
ENT55784:
	if (n>3) maerror();
	local[1]= NIL;
	local[2]= fqv[96];
	local[3]= argv[0];
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)F51276digits_string(ctx,2,local+4); /*digits-string*/
	local[4]= w;
	local[5]= local[0];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)AREF(ctx,2,local+5); /*aref*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)F51276digits_string(ctx,2,local+5); /*digits-string*/
	local[5]= w;
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)0L);
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,2,local+6); /*aref*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)F51276digits_string(ctx,2,local+6); /*digits-string*/
	local[6]= w;
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)XFORMAT(ctx,7,local+1); /*format*/
	local[0]= w;
BLK55782:
	ctx->vsp=local; return(local[0]);}

/*dated-file-name*/
static pointer F51280dated_file_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT55826;}
	ctx->vsp=local+0;
	w=(pointer)LOCALTIME(ctx,0,local+0); /*unix:localtime*/
	local[0]= w;
ENT55826:
ENT55825:
	if (n>3) maerror();
	local[1]= NIL;
	local[2]= fqv[97];
	local[3]= argv[0];
	local[4]= local[0];
	local[5]= makeint((eusinteger_t)5L);
	ctx->vsp=local+6;
	w=(pointer)AREF(ctx,2,local+4); /*aref*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)2L);
	ctx->vsp=local+6;
	w=(pointer)F51276digits_string(ctx,2,local+4); /*digits-string*/
	local[4]= w;
	local[5]= local[0];
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)AREF(ctx,2,local+5); /*aref*/
	local[5]= w;
	local[6]= fqv[98];
	ctx->vsp=local+7;
	w=(*ftab[0])(ctx,2,local+5,&ftab[0],fqv[4]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= local[0];
	local[7]= makeint((eusinteger_t)3L);
	ctx->vsp=local+8;
	w=(pointer)AREF(ctx,2,local+6); /*aref*/
	local[6]= w;
	local[7]= makeint((eusinteger_t)2L);
	ctx->vsp=local+8;
	w=(pointer)F51276digits_string(ctx,2,local+6); /*digits-string*/
	local[6]= w;
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)XFORMAT(ctx,7,local+1); /*format*/
	local[0]= w;
BLK55823:
	ctx->vsp=local; return(local[0]);}

/*sequential-file-name*/
static pointer F51282sequential_file_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	if (n>=4) { local[0]=(argv[3]); goto ENT55875;}
	local[0]= makeint((eusinteger_t)4L);
ENT55875:
ENT55874:
	if (n>4) maerror();
	local[1]= NIL;
	local[2]= fqv[99];
	local[3]= argv[0];
	local[4]= argv[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F51276digits_string(ctx,2,local+4); /*digits-string*/
	local[4]= w;
	local[5]= argv[2];
	ctx->vsp=local+6;
	w=(pointer)XFORMAT(ctx,5,local+1); /*format*/
	local[0]= w;
BLK55872:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___string(ctx,n,argv,env)
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
	local[0]= fqv[100];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= fqv[101];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF55910;
	local[0]= fqv[102];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[103],w);
	goto IF55911;
IF55910:
	local[0]= fqv[104];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF55911:
	local[0]= fqv[105];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[106],module,F51154read_sharp_backslash,fqv[107]);
	local[0]= makeint((eusinteger_t)35L);
	local[1]= makeint((eusinteger_t)92L);
	local[2]= fqv[106];
	ctx->vsp=local+3;
	w=(pointer)SETDISPMACRO(ctx,3,local+0); /*set-dispatch-macro-character*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[108],module,F51158true_string,fqv[109]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[8],module,F51161string,fqv[110]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[111],module,F51164make_string,fqv[112]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[113],module,F51167string_left_trim,fqv[114]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[115],module,F51170string_right_trim,fqv[116]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[117],module,F51173string_trim,fqv[118]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[119],module,F51176nstring_downcase,fqv[120]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[121],module,F51179nstring_upcase,fqv[122]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[123],module,F51182string_upcase,fqv[124]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[125],module,F51185string_downcase,fqv[126]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[127],module,F51188string_,fqv[128]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[3],module,F51191string_equal,fqv[129]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[130],module,F51194substringp,fqv[131]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M52226string_get,fqv[132],fqv[8],fqv[133]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M52249string_set,fqv[134],fqv[8],fqv[135]);
	local[0]= fqv[46];
	local[1]= fqv[136];
	local[2]= fqv[46];
	local[3]= fqv[137];
	local[4]= loadglobal(fqv[138]);
	local[5]= fqv[139];
	local[6]= fqv[140];
	local[7]= fqv[141];
	local[8]= NIL;
	local[9]= fqv[142];
	local[10]= NIL;
	local[11]= fqv[143];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[144];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[15])(ctx,13,local+2,&ftab[15],fqv[145]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[146];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[147],module,F51204explode_directory_names,fqv[148]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M52623pathname_parse_namestring,fqv[47],fqv[46],fqv[149]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53027pathname_directory_string,fqv[35],fqv[46],fqv[150]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53227pathname_namestring,fqv[44],fqv[46],fqv[151]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53291pathname_host,fqv[51],fqv[46],fqv[152]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53325pathname_device,fqv[52],fqv[46],fqv[153]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53359pathname_directory,fqv[53],fqv[46],fqv[154]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53393pathname_name,fqv[54],fqv[46],fqv[155]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53427pathname_type,fqv[55],fqv[46],fqv[156]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53461pathname_set_type,fqv[157],fqv[46],fqv[158]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53484pathname_version,fqv[56],fqv[46],fqv[159]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53518pathname_merge,fqv[57],fqv[46],fqv[160]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53620pathname_add_directory,fqv[161],fqv[46],fqv[162]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53650pathname_prin1,fqv[163],fqv[46],fqv[164]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M53679pathname_init,fqv[50],fqv[46],fqv[165]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[166],module,F51208pathnamep,fqv[167]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[46],module,F51211pathname,fqv[168]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[60],module,F51214namestring,fqv[169]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[170],module,F51217pathname_directory,fqv[171]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[172],module,F51220pathname_name,fqv[173]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[174],module,F51223pathname_type,fqv[175]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[176],module,F51226directory_namestring,fqv[177]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[178],module,F51229make_pathname,fqv[179]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[180],module,F51232parse_namestring,fqv[181]);
	local[0]= fqv[59];
	local[1]= fqv[136];
	local[2]= fqv[182];
	local[3]= fqv[183];
	local[4]= fqv[184];
	local[5]= fqv[185];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[186],module,F51236null_string_p,fqv[187]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[188],module,F51239merge_pathnames,fqv[189]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[190],module,F51242concatenate_pathnames,fqv[191]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[192],module,F51245truename,fqv[193]);
	local[0]= fqv[74];
	local[1]= fqv[136];
	local[2]= fqv[74];
	local[3]= fqv[137];
	local[4]= loadglobal(fqv[46]);
	local[5]= fqv[139];
	local[6]= fqv[194];
	local[7]= fqv[141];
	local[8]= NIL;
	local[9]= fqv[142];
	local[10]= NIL;
	local[11]= fqv[143];
	local[12]= makeint((eusinteger_t)-1L);
	local[13]= fqv[144];
	local[14]= NIL;
	ctx->vsp=local+15;
	w=(*ftab[15])(ctx,13,local+2,&ftab[15],fqv[145]); /*make-class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54370url_pathname_prin1,fqv[163],fqv[74],fqv[195]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54402url_pathname_string,fqv[64],fqv[74],fqv[196]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54424url_pathname_string2,fqv[197],fqv[74],fqv[198]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54445url_pathname_port,fqv[199],fqv[74],fqv[200]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54481url_pathname_server,fqv[201],fqv[74],fqv[202]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54517url_pathname_connect,fqv[203],fqv[74],fqv[204]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54544url_pathname_host,fqv[51],fqv[74],fqv[205]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54580url_pathname_protocol,fqv[206],fqv[74],fqv[207]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54616url_pathname_parse_namestring,fqv[47],fqv[74],fqv[208]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M54834url_pathname_percent_escape,fqv[209],fqv[74],fqv[210]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[74],module,F51264url_pathname,fqv[211]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[212],module,F51266parse_url,fqv[213]);
	local[0]= fqv[83];
	local[1]= fqv[214];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF56124;
	local[0]= fqv[83];
	local[1]= fqv[214];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[83];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF56147;
	local[0]= fqv[83];
	local[1]= fqv[136];
	local[2]= fqv[215];
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF56148;
IF56147:
	local[0]= NIL;
IF56148:
	local[0]= fqv[83];
	goto IF56125;
IF56124:
	local[0]= NIL;
IF56125:
	ctx->vsp=local+0;
	compfun(ctx,fqv[216],module,F51268escape_url,fqv[217]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[218],module,F51270escaped_url_string_from_namestring,fqv[219]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[220],module,F51272unescape_url,fqv[221]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[222],module,F51274unescaped_url_string_from_namestring,fqv[223]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[224],module,F51276digits_string,fqv[225]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[226],module,F51278timed_file_name,fqv[227]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[228],module,F51280dated_file_name,fqv[229]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[230],module,F51282sequential_file_name,fqv[231]);
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<16; i++) ftab[i]=fcallx;
}
