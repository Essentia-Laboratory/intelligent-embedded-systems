/* ./loader.c :  entry=loader */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "loader.h"
#pragma init (register_loader)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___loader();
extern pointer build_quote_vector();
static int register_loader()
  { add_module_initializer("___loader", ___loader);}

static pointer F28911file_write_date();
static pointer F28914file_newer();
static pointer F28917open();
static pointer F28922probe_file();
static pointer F28926object_file_p();
static pointer F28929path_list();
static pointer F28932find_executable();
static pointer F28935system__txtload();
static pointer F28945load_module_file_name();
static pointer F28948gencname_tail();
static pointer F28951load();
static pointer F28954load_files();
static pointer F28957read_file();
static pointer F28960read_strings();
static pointer F28963read_lines();
static pointer F28966read_lists();
static pointer F28969read_binary_file();
static pointer F28972read_lines_till_eof();
static pointer F28977load_library();
static pointer F28980dump_object();
static pointer F28983dump_structure();
static pointer F28987file_size();
static pointer F28990directory_p();
static pointer F28993map_file();
static pointer F28995provide();
static pointer F28997require();

/*file-write-date*/
static pointer F28911file_write_date(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeint((eusinteger_t)9L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,1,local+1,&ftab[0],fqv[0]); /*namestring*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)STAT(ctx,1,local+1); /*unix:stat*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)NTH(ctx,2,local+0); /*nth*/
	local[0]= w;
BLK29047:
	ctx->vsp=local; return(local[0]);}

/*file-newer*/
static pointer F28914file_newer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)F28922probe_file(ctx,1,local+0); /*probe-file*/
	local[0]= ((w)==NIL?T:NIL);
	if (local[0]!=NIL) goto OR29079;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F28922probe_file(ctx,1,local+0); /*probe-file*/
	local[0]= ((w)==NIL?T:NIL);
	if (local[0]!=NIL) goto OR29079;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F28911file_write_date(ctx,1,local+0); /*file-write-date*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)F28911file_write_date(ctx,1,local+1); /*file-write-date*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GREATERP(ctx,2,local+0); /*>*/
	local[0]= w;
OR29079:
	w = local[0];
	local[0]= w;
BLK29067:
	ctx->vsp=local; return(local[0]);}

/*open*/
static pointer F28917open(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[1], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY29121;
	local[0] = fqv[2];
KEY29121:
	if (n & (1<<1)) goto KEY29128;
	local[1] = fqv[3];
KEY29128:
	if (n & (1<<2)) goto KEY29135;
	local[2] = fqv[4];
KEY29135:
	if (n & (1<<3)) goto KEY29142;
	local[3] = makeint((eusinteger_t)420L);
KEY29142:
	if (n & (1<<4)) goto KEY29147;
	local[4] = makeint((eusinteger_t)512L);
KEY29147:
	local[5]= makeint((eusinteger_t)0L);
	local[6]= NIL;
	local[7]= NIL;
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(pointer)STREAMP(ctx,1,local+8); /*streamp*/
	if (w==NIL) goto IF29172;
	local[8]= argv[0];
	ctx->vsp=local+9;
	w=(*ftab[1])(ctx,1,local+8,&ftab[1],fqv[5]); /*io-stream-p*/
	if (w==NIL) goto IF29180;
	local[7] = *(ovafptr(*(ovafptr(argv[0],fqv[6])),fqv[7]));
	local[8]= local[7];
	goto IF29181;
IF29180:
	local[7] = *(ovafptr(argv[0],fqv[7]));
	local[8]= local[7];
IF29181:
	goto IF29173;
IF29172:
	local[7] = argv[0];
	local[8]= local[7];
IF29173:
	local[8]= local[7];
	ctx->vsp=local+9;
	w=(*ftab[0])(ctx,1,local+8,&ftab[0],fqv[0]); /*namestring*/
	local[7] = w;
	local[8]= local[0];
	local[9]= local[8];
	if (fqv[2]!=local[9]) goto IF29233;
	local[5] = makeint((eusinteger_t)0L);
	local[9]= local[2];
	if (fqv[4]!=local[9]) goto IF29250;
	local[2] = fqv[8];
	local[9]= local[2];
	goto IF29251;
IF29250:
	local[9]= NIL;
IF29251:
	local[9]= local[2];
	if (fqv[9]!=local[9]) goto IF29266;
	local[9]= local[5];
	local[10]= makeint((eusinteger_t)64L);
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[5] = w;
	local[9]= local[5];
	goto IF29267;
IF29266:
	local[9]= NIL;
IF29267:
	local[9]= local[7];
	local[10]= local[5];
	local[11]= local[3];
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(*ftab[2])(ctx,4,local+9,&ftab[2],fqv[10]); /*system:openfile*/
	local[6] = w;
	local[9]= local[6];
	goto IF29234;
IF29233:
	local[9]= local[8];
	w = fqv[11];
	if (memq(local[9],w)==NIL) goto IF29298;
	local[9]= local[0];
	if (fqv[12]!=local[9]) goto IF29312;
	local[5] = makeint((eusinteger_t)2L);
	local[9]= local[5];
	goto IF29313;
IF29312:
	local[5] = makeint((eusinteger_t)1L);
	local[9]= local[5];
IF29313:
	local[9]= local[1];
	local[10]= local[9];
	if (fqv[13]!=local[10]) goto IF29344;
	local[10]= local[5];
	local[11]= makeint((eusinteger_t)1024L);
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[5] = w;
	local[10]= local[5];
	goto IF29345;
IF29344:
	local[10]= local[9];
	w = fqv[14];
	if (memq(local[10],w)==NIL) goto IF29363;
	local[10]= local[5];
	local[11]= makeint((eusinteger_t)64L);
	local[12]= makeint((eusinteger_t)512L);
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,3,local+10); /*+*/
	local[5] = w;
	local[10]= local[5];
	goto IF29364;
IF29363:
	local[10]= local[9];
	if (fqv[15]!=local[10]) goto IF29384;
	local[10]= local[5];
	local[11]= makeint((eusinteger_t)64L);
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[5] = w;
	local[10]= local[5];
	goto IF29385;
IF29384:
	local[10]= local[9];
	w = fqv[16];
	if (memq(local[10],w)==NIL) goto IF29403;
	local[10]= local[5];
	local[11]= makeint((eusinteger_t)64L);
	local[12]= makeint((eusinteger_t)128L);
	ctx->vsp=local+13;
	w=(pointer)PLUS(ctx,3,local+10); /*+*/
	local[5] = w;
	local[10]= local[5];
	goto IF29404;
IF29403:
	if (T==NIL) goto IF29424;
	local[10]= fqv[17];
	ctx->vsp=local+11;
	w=(pointer)SIGERROR(ctx,1,local+10); /*error*/
	local[10]= w;
	goto IF29425;
IF29424:
	local[10]= NIL;
IF29425:
IF29404:
IF29385:
IF29364:
IF29345:
	w = local[10];
	local[9]= local[2];
	local[10]= local[9];
	if (fqv[8]!=local[10]) goto IF29446;
	local[10]= local[5];
	local[11]= makeint((eusinteger_t)64L);
	ctx->vsp=local+12;
	w=(pointer)LOGNOT(ctx,1,local+11); /*lognot*/
	local[11]= w;
	ctx->vsp=local+12;
	w=(pointer)LOGAND(ctx,2,local+10); /*logand*/
	local[5] = w;
	local[10]= local[5];
	goto IF29447;
IF29446:
	local[10]= local[9];
	if (fqv[9]!=local[10]) goto IF29466;
	local[10]= local[5];
	local[11]= makeint((eusinteger_t)64L);
	ctx->vsp=local+12;
	w=(pointer)LOGIOR(ctx,2,local+10); /*logior*/
	local[5] = w;
	local[10]= local[5];
	goto IF29467;
IF29466:
	local[10]= local[9];
	if (fqv[4]!=local[10]) goto IF29484;
	local[10]= local[1];
	w = fqv[18];
	if (memq(local[10],w)!=NIL) goto IF29492;
	local[10]= local[5];
	local[11]= makeint((eusinteger_t)64L);
	ctx->vsp=local+12;
	w=(pointer)LOGIOR(ctx,2,local+10); /*logior*/
	local[5] = w;
	local[10]= local[5];
	goto IF29493;
IF29492:
	local[10]= NIL;
IF29493:
	goto IF29485;
IF29484:
	local[10]= local[9];
	if (fqv[19]!=local[10]) goto IF29513;
	local[10]= NIL;
	goto IF29514;
IF29513:
	if (T==NIL) goto IF29521;
	local[10]= fqv[20];
	ctx->vsp=local+11;
	w=(pointer)SIGERROR(ctx,1,local+10); /*error*/
	local[10]= w;
	goto IF29522;
IF29521:
	local[10]= NIL;
IF29522:
IF29514:
IF29485:
IF29467:
IF29447:
	w = local[10];
	local[9]= local[7];
	local[10]= local[5];
	local[11]= local[3];
	local[12]= local[4];
	ctx->vsp=local+13;
	w=(*ftab[2])(ctx,4,local+9,&ftab[2],fqv[10]); /*system:openfile*/
	local[6] = w;
	local[9]= local[6];
	goto IF29299;
IF29298:
	if (T==NIL) goto IF29541;
	local[9]= fqv[21];
	ctx->vsp=local+10;
	w=(pointer)SIGERROR(ctx,1,local+9); /*error*/
	local[9]= w;
	goto IF29542;
IF29541:
	local[9]= NIL;
IF29542:
IF29299:
IF29234:
	w = local[9];
	w = local[6];
	if (!isnum(w)) goto IF29551;
	if (local[2]!=NIL) goto IF29560;
	w = NIL;
	ctx->vsp=local+8;
	local[0]=w;
	goto BLK29108;
	goto IF29561;
IF29560:
	local[8]= loadglobal(fqv[22]);
	local[9]= fqv[23];
	local[10]= local[7];
	ctx->vsp=local+11;
	w=(pointer)CONCATENATE(ctx,3,local+8); /*concatenate*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)SIGERROR(ctx,1,local+8); /*error*/
	local[8]= w;
IF29561:
	goto IF29552;
IF29551:
	local[8]= NIL;
IF29552:
	w = local[6];
	local[0]= w;
BLK29108:
	ctx->vsp=local; return(local[0]);}

/*with-open-file*/
static pointer F29583(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST29586:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[24];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= fqv[25];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
	local[5]= NIL;
	ctx->vsp=local+6;
	w=(pointer)APPEND(ctx,2,local+4); /*append*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	local[3]= fqv[26];
	local[4]= fqv[27];
	local[5]= local[0];
	local[6]= NIL;
	ctx->vsp=local+7;
	w=(pointer)APPEND(ctx,2,local+5); /*append*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[28];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
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
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK29584:
	ctx->vsp=local; return(local[0]);}

/*probe-file*/
static pointer F28922probe_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[0]); /*namestring*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)STAT(ctx,1,local+1); /*unix:stat*/
	local[1]= w;
	w = local[1];
	if (!iscons(w)) goto IF29684;
	local[2]= makeint((eusinteger_t)61440L);
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)LOGAND(ctx,2,local+2); /*logand*/
	local[2]= w;
	local[3]= local[2];
	if (fqv[29]!=local[3]) goto IF29712;
	local[3]= fqv[30];
	goto IF29713;
IF29712:
	local[3]= local[2];
	if (fqv[31]!=local[3]) goto IF29722;
	local[3]= fqv[32];
	goto IF29723;
IF29722:
	local[3]= local[2];
	if (fqv[33]!=local[3]) goto IF29732;
	local[3]= fqv[34];
	goto IF29733;
IF29732:
	local[3]= local[2];
	if (fqv[35]!=local[3]) goto IF29742;
	local[3]= fqv[36];
	goto IF29743;
IF29742:
	local[3]= local[2];
	if (fqv[37]!=local[3]) goto IF29752;
	local[3]= fqv[38];
	goto IF29753;
IF29752:
	local[3]= local[2];
	if (fqv[39]!=local[3]) goto IF29762;
	local[3]= fqv[40];
	goto IF29763;
IF29762:
	local[3]= local[2];
	if (fqv[41]!=local[3]) goto IF29772;
	local[3]= fqv[42];
	goto IF29773;
IF29772:
	local[3]= NIL;
IF29773:
IF29763:
IF29753:
IF29743:
IF29733:
IF29723:
IF29713:
	w = local[3];
	local[2]= w;
	goto IF29685;
IF29684:
	local[2]= NIL;
IF29685:
	w = local[2];
	local[0]= w;
BLK29658:
	ctx->vsp=local; return(local[0]);}

/*object-file-p*/
static pointer F28926object_file_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,FLET29800,env,argv,local);
	local[1]= argv[0];
	w = local[0];
	ctx->vsp=local+2;
	w=FLET29800(ctx,1,local+1,w);
	local[1]= w;
	local[2]= loadglobal(fqv[43]);
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)1L);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[6];
	local[6]= w;
	local[7]= T;
	local[8]= NIL;
TAG29897:
	if (local[2]==NIL) goto OR29904;
	local[9]= local[4];
	local[10]= local[5];
	ctx->vsp=local+11;
	w=(pointer)GREQP(ctx,2,local+9); /*>=*/
	if (w!=NIL) goto OR29904;
	if (local[8]!=NIL) goto OR29904;
	goto IF29902;
OR29904:
	w = local[7];
	ctx->vsp=local+9;
	local[3]=w;
	goto BLK29826;
	goto IF29903;
IF29902:
	local[9]= NIL;
IF29903:
	if (local[6]==NIL) goto IF29926;
	local[9]= local[3];
	local[10]= local[6];
	ctx->vsp=local+11;
	w=(pointer)EQ(ctx,2,local+9); /*eql*/
	if (w!=NIL) goto IF29926;
	local[9]= local[3];
	w = local[6];
	if (memq(local[9],w)!=NIL) goto IF29926;
	local[7] = NIL;
	local[8] = T;
	local[9]= local[8];
	goto IF29927;
IF29926:
	local[9]= NIL;
IF29927:
	local[9]= local[1];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)ADD1(ctx,1,local+10); /*1+*/
	local[10]= w;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[11];
	local[11]= w;
	local[3] = local[9];
	local[4] = local[10];
	local[6] = local[11];
	w = NIL;
	ctx->vsp=local+9;
	goto TAG29897;
	w = NIL;
	local[3]= w;
BLK29826:
	w = local[3];
	local[0]= w;
BLK29788:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET29800(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeint((eusinteger_t)4L);
	ctx->vsp=local+1;
	w=(*ftab[3])(ctx,1,local+0,&ftab[3],fqv[44]); /*make-string*/
	local[0]= w;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)F28917open(ctx,1,local+1); /*open*/
	local[1]= w;
	ctx->vsp=local+2;
	w = makeclosure(codevec,quotevec,UWP30076,env,argv,local);
	local[2]=(pointer)(ctx->protfp); local[3]=w;
	ctx->protfp=(struct protectframe *)(local+2);
	local[4]= local[1]->c.obj.iv[5];
	local[5]= local[0];
	local[6]= makeint((eusinteger_t)4L);
	ctx->vsp=local+7;
	w=(pointer)UNIXREAD(ctx,3,local+4); /*unix:uread*/
	ctx->vsp=local+4;
	UWP30076(ctx,0,local+4,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP30076(ctx,n,argv,env)
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

/*path-list*/
static pointer F28929path_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT30113;}
	local[0]= fqv[45];
	ctx->vsp=local+1;
	w=(pointer)GETENV(ctx,1,local+0); /*unix:getenv*/
	local[0]= w;
ENT30113:
ENT30112:
	if (n>1) maerror();
	local[1]= NIL;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= NIL;
	local[4]= NIL;
WHL30143:
	local[5]= makeint((eusinteger_t)58L);
	local[6]= local[0];
	local[7]= fqv[46];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(*ftab[4])(ctx,4,local+5,&ftab[4],fqv[47]); /*position*/
	local[3] = w;
	if (local[3]==NIL) goto WHX30144;
	local[5]= local[0];
	local[6]= local[2];
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,3,local+5); /*subseq*/
	local[4] = w;
	local[5]= loadglobal(fqv[22]);
	local[6]= local[4];
	local[7]= fqv[48];
	ctx->vsp=local+8;
	w=(pointer)CONCATENATE(ctx,3,local+5); /*concatenate*/
	local[5]= w;
	w = local[1];
	ctx->vsp=local+6;
	local[1] = cons(ctx,local[5],w);
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[2] = w;
	goto WHL30143;
WHX30144:
	local[5]= NIL;
BLK30145:
	local[5]= loadglobal(fqv[22]);
	local[6]= local[0];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)SUBSEQ(ctx,2,local+6); /*subseq*/
	local[6]= w;
	local[7]= fqv[49];
	ctx->vsp=local+8;
	w=(pointer)CONCATENATE(ctx,3,local+5); /*concatenate*/
	local[5]= w;
	w = local[1];
	ctx->vsp=local+6;
	local[1] = cons(ctx,local[5],w);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)NREVERSE(ctx,1,local+5); /*nreverse*/
	local[0]= w;
BLK30110:
	ctx->vsp=local; return(local[0]);}

/*find-executable*/
static pointer F28932find_executable(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F28922probe_file(ctx,1,local+0); /*probe-file*/
	if (w==NIL) goto IF30231;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[5])(ctx,1,local+0,&ftab[5],fqv[50]); /*truename*/
	local[0]= w;
	goto IF30232;
IF30231:
	ctx->vsp=local+0;
	w=(pointer)F28929path_list(ctx,0,local+0); /*path-list*/
	local[0]= w;
	local[1]= NIL;
WHL30255:
	if (local[0]==NIL) goto WHX30256;
	local[2]= argv[0];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	w = local[3];
	local[3]= w;
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,2,local+2,&ftab[6],fqv[51]); /*merge-pathnames*/
	local[1] = w;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[0])(ctx,1,local+2,&ftab[0],fqv[0]); /*namestring*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)F28922probe_file(ctx,1,local+2); /*probe-file*/
	if (w==NIL) goto IF30308;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(*ftab[5])(ctx,1,local+2,&ftab[5],fqv[50]); /*truename*/
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK30221;
	goto IF30309;
IF30308:
	local[2]= NIL;
IF30309:
	goto WHL30255;
WHX30256:
	local[2]= NIL;
BLK30257:
	w = NIL;
	local[0]= w;
IF30232:
	w = local[0];
	local[0]= w;
BLK30221:
	ctx->vsp=local; return(local[0]);}

/*system::txtload*/
static pointer F28935system__txtload(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT30331;}
	local[0]= NIL;
ENT30331:
ENT30330:
	if (n>2) maerror();
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F28917open(ctx,1,local+4); /*open*/
	local[4]= w;
	ctx->vsp=local+5;
	w = makeclosure(codevec,quotevec,UWP30375,env,argv,local);
	local[5]=(pointer)(ctx->protfp); local[6]=w;
	ctx->protfp=(struct protectframe *)(local+5);
WHL30382:
	local[7]= local[4];
	local[8]= NIL;
	local[9]= local[1];
	ctx->vsp=local+10;
	w=(pointer)READ(ctx,3,local+7); /*read*/
	local[2] = w;
	local[7]= local[2];
	if (local[1]==local[7]) goto WHX30383;
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)EVAL(ctx,1,local+7); /*eval*/
	local[3] = w;
	if (local[0]==NIL) goto IF30408;
	local[7]= local[3];
	ctx->vsp=local+8;
	w=(pointer)PRINT(ctx,1,local+7); /*print*/
	local[7]= w;
	goto IF30409;
IF30408:
	local[7]= NIL;
IF30409:
	goto WHL30382;
WHX30383:
	local[7]= NIL;
BLK30384:
	w = local[7];
	ctx->vsp=local+7;
	UWP30375(ctx,0,local+7,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK30328:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP30375(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[4];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*load-module-file-name*/
static pointer F28945load_module_file_name(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0]->c.obj.iv[5];
	ctx->vsp=local+1;
	w=(*ftab[7])(ctx,1,local+0,&ftab[7],fqv[52]); /*pathname-name*/
	local[0]= w;
BLK30445:
	ctx->vsp=local; return(local[0]);}

/*gencname-tail*/
static pointer F28948gencname_tail(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST30468:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,FLET30479,env,argv,local);
	ctx->vsp=local+2;
	local[2]= makeclosure(codevec,quotevec,FLET30481,env,argv,local);
	local[3]= local[0];
	w = local[2];
	ctx->vsp=local+4;
	w=FLET30481(ctx,1,local+3,w);
	local[0]= w;
BLK30466:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET30479(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeint((eusinteger_t)97L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LSEQP(ctx,2,local+0); /*<=*/
	local[0]= w;
	if (w==NIL) goto AND30504;
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)122L);
	ctx->vsp=local+2;
	w=(pointer)LSEQP(ctx,2,local+0); /*<=*/
	local[0]= w;
AND30504:
	if (local[0]!=NIL) goto OR30500;
	local[0]= makeint((eusinteger_t)65L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LSEQP(ctx,2,local+0); /*<=*/
	local[0]= w;
	if (w==NIL) goto AND30517;
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)90L);
	ctx->vsp=local+2;
	w=(pointer)LSEQP(ctx,2,local+0); /*<=*/
	local[0]= w;
AND30517:
	if (local[0]!=NIL) goto OR30500;
	local[0]= makeint((eusinteger_t)48L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LSEQP(ctx,2,local+0); /*<=*/
	local[0]= w;
	if (w==NIL) goto AND30530;
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)57L);
	ctx->vsp=local+2;
	w=(pointer)LSEQP(ctx,2,local+0); /*<=*/
	local[0]= w;
AND30530:
	if (local[0]!=NIL) goto OR30500;
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)95L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	local[0]= w;
OR30500:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET30481(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO30563,env,argv,local);
	local[1]= argv[0];
	local[2]= fqv[53];
	local[3]= fqv[54];
	ctx->vsp=local+4;
	w=(*ftab[8])(ctx,4,local+0,&ftab[8],fqv[55]); /*reduce*/
	local[0]= w;
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO30576,env,argv,local);
	local[2]= local[0];
	local[3]= loadglobal(fqv[56]);
	ctx->vsp=local+4;
	w=(pointer)COERCE(ctx,2,local+2); /*coerce*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[1]= w;
	local[2]= loadglobal(fqv[22]);
	ctx->vsp=local+3;
	w=(pointer)COERCE(ctx,2,local+1); /*coerce*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO30563(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= fqv[57];
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)XFORMAT(ctx,4,local+0); /*format*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO30576(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	w = env->c.clo.env0->c.clo.env2[1];
	ctx->vsp=local+1;
	w=FLET30479(ctx,1,local+0,w);
	if (w==NIL) goto IF30614;
	local[0]= argv[0];
	goto IF30615;
IF30614:
	local[0]= makeint((eusinteger_t)95L);
IF30615:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*load*/
static pointer F28951load(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[58], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY30643;
	local[0] = NIL;
KEY30643:
	if (n & (1<<1)) goto KEY30648;
	local[8]= loadglobal(fqv[22]);
	local[9]= fqv[59];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(*ftab[7])(ctx,1,local+10,&ftab[7],fqv[52]); /*pathname-name*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)CONCATENATE(ctx,3,local+8); /*concatenate*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)F28948gencname_tail(ctx,1,local+8); /*gencname-tail*/
	local[1] = w;
KEY30648:
	if (n & (1<<2)) goto KEY30661;
	local[2] = NIL;
KEY30661:
	if (n & (1<<3)) goto KEY30666;
	local[3] = fqv[60];
KEY30666:
	if (n & (1<<4)) goto KEY30671;
	local[4] = fqv[61];
KEY30671:
	if (n & (1<<5)) goto KEY30676;
	local[5] = loadglobal(fqv[62]);
KEY30676:
	if (n & (1<<6)) goto KEY30683;
	local[6] = NIL;
KEY30683:
	if (n & (1<<7)) goto KEY30688;
	local[7] = loadglobal(fqv[63]);
KEY30688:
	local[8]= loadglobal(fqv[63]);
	w = local[8];
	ctx->vsp=local+8;
	bindspecial(ctx,fqv[63],w);
	local[11]= NIL;
	local[12]= NIL;
	ctx->vsp=local+13;
	local[13]= makeclosure(codevec,quotevec,FLET30715,env,argv,local);
	ctx->vsp=local+14;
	local[14]= makeclosure(codevec,quotevec,FLET30717,env,argv,local);
	ctx->vsp=local+15;
	local[15]= makeclosure(codevec,quotevec,FLET30719,env,argv,local);
	local[16]= argv[0];
	ctx->vsp=local+17;
	w=(*ftab[9])(ctx,1,local+16,&ftab[9],fqv[64]); /*pathname*/
	argv[0] = w;
	local[16]= local[7];
	ctx->vsp=local+17;
	w=(pointer)FINDPACKAGE(ctx,1,local+16); /*find-package*/
	local[16]= w;
	storeglobal(fqv[63],w);
	local[16]= argv[0];
	ctx->vsp=local+17;
	w=(*ftab[10])(ctx,1,local+16,&ftab[10],fqv[65]); /*pathname-directory*/
	if (w==NIL) goto IF30741;
	local[16]= argv[0];
	ctx->vsp=local+17;
	w=(*ftab[10])(ctx,1,local+16,&ftab[10],fqv[65]); /*pathname-directory*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[16]= (w)->c.cons.car;
	local[17]= fqv[66];
	ctx->vsp=local+18;
	w=(pointer)EQ(ctx,2,local+16); /*eql*/
	if (w==NIL) goto IF30741;
	local[16]= argv[0];
	w = local[15];
	ctx->vsp=local+17;
	w=FLET30719(ctx,1,local+16,w);
	local[12] = w;
	if (local[12]!=NIL) goto IF30764;
	local[16]= fqv[67];
	local[17]= argv[0];
	ctx->vsp=local+18;
	w=(pointer)SIGERROR(ctx,2,local+16); /*error*/
	local[16]= w;
	goto IF30765;
IF30764:
	local[16]= local[12];
IF30765:
	goto IF30742;
IF30741:
	local[16]= NIL;
	local[17]= loadglobal(fqv[68]);
	local[18]= loadglobal(fqv[69]);
	local[19]= fqv[70];
	local[20]= (pointer)get_sym_func(fqv[71]);
	ctx->vsp=local+21;
	w=(*ftab[11])(ctx,4,local+17,&ftab[11],fqv[72]); /*union*/
	local[17]= w;
WHL30813:
	if (local[17]==NIL) goto WHX30814;
	w=local[17];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18]= (w)->c.cons.car;
	w=local[17];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[17] = (w)->c.cons.cdr;
	w = local[18];
	local[16] = w;
	local[18]= local[16];
	local[19]= argv[0];
	ctx->vsp=local+20;
	w=(*ftab[12])(ctx,2,local+18,&ftab[12],fqv[73]); /*concatenate-pathnames*/
	local[11] = w;
	local[18]= local[11];
	w = local[15];
	ctx->vsp=local+19;
	w=FLET30719(ctx,1,local+18,w);
	local[12] = w;
	if (local[12]==NIL) goto IF30884;
	w = local[12];
	ctx->vsp=local+18;
	unwind(ctx,local+0);
	local[0]=w;
	goto BLK30627;
	goto IF30885;
IF30884:
	local[18]= NIL;
IF30885:
	goto WHL30813;
WHX30814:
	local[18]= NIL;
BLK30815:
	w = NIL;
	local[16]= fqv[74];
	local[17]= argv[0];
	ctx->vsp=local+18;
	w=(pointer)SIGERROR(ctx,2,local+16); /*error*/
	local[16]= w;
IF30742:
	w = local[16];
	local[13]= w;
	ctx->vsp=local+14;
	unbindx(ctx,1);
	w = local[13];
	local[0]= w;
BLK30627:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET30715(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	if (env->c.clo.env2[5]==NIL) goto IF30914;
	local[0]= T;
	local[1]= fqv[75];
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(*ftab[0])(ctx,1,local+3,&ftab[0],fqv[0]); /*namestring*/
	local[3]= w;
	local[4]= loadglobal(fqv[63]);
	ctx->vsp=local+5;
	w=(pointer)XFORMAT(ctx,5,local+0); /*format*/
	local[0]= w;
	goto IF30915;
IF30914:
	local[0]= NIL;
IF30915:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET30717(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[13])(ctx,1,local+0,&ftab[13],fqv[76]); /*directory-namestring*/
	local[0]= w;
	w = loadglobal(fqv[68]);
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	local[1]= NIL;
	local[2]= NIL;
	w = local[0];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[68],w);
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(*ftab[0])(ctx,1,local+6,&ftab[0],fqv[0]); /*namestring*/
	argv[0] = w;
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)F28926object_file_p(ctx,1,local+6); /*object-file-p*/
	if (w==NIL) goto CON30976;
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(*ftab[7])(ctx,1,local+6,&ftab[7],fqv[52]); /*pathname-name*/
	local[6]= w;
	local[7]= loadglobal(fqv[77]);
	local[8]= fqv[78];
	local[9]= (pointer)get_sym_func(fqv[79]);
	local[10]= fqv[70];
	local[11]= (pointer)get_sym_func(fqv[80]);
	ctx->vsp=local+12;
	w=(*ftab[14])(ctx,6,local+6,&ftab[14],fqv[81]); /*find*/
	local[1] = w;
	if (local[1]==NIL) goto IF30985;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(*ftab[15])(ctx,1,local+6,&ftab[15],fqv[82]); /*system::unbinload*/
	local[6]= T;
	local[7]= fqv[83];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	goto IF30986;
IF30985:
	local[6]= NIL;
IF30986:
	local[6]= fqv[84];
	local[7]= argv[0];
	w = env->c.clo.env2[13];
	ctx->vsp=local+8;
	w=FLET30715(ctx,2,local+6,w);
	local[6]= argv[0];
	local[7]= env->c.clo.env2[1];
	ctx->vsp=local+8;
	w=(pointer)BINLOAD(ctx,2,local+6); /*system:binload*/
	local[2] = w;
	if (local[2]==NIL) goto IF31041;
	local[6]= local[2];
	w = loadglobal(fqv[77]);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	storeglobal(fqv[77],local[6]);
	goto IF31042;
IF31041:
	local[6]= NIL;
IF31042:
	local[6]= local[2];
	goto CON30974;
CON30976:
	local[6]= fqv[85];
	local[7]= argv[0];
	w = env->c.clo.env2[13];
	ctx->vsp=local+8;
	w=FLET30715(ctx,2,local+6,w);
	local[6]= argv[0];
	local[7]= env->c.clo.env2[6];
	ctx->vsp=local+8;
	w=(pointer)F28935system__txtload(ctx,2,local+6); /*system::txtload*/
	local[6]= T;
	goto CON30974;
CON31061:
	local[6]= NIL;
CON30974:
	ctx->vsp=local+7;
	unbindx(ctx,1);
	w = local[6];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer FLET30719(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)F28922probe_file(ctx,1,local+2); /*probe-file*/
	local[2]= w;
	local[3]= fqv[86];
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON31103;
	local[2]= argv[0];
	w = env->c.clo.env2[14];
	ctx->vsp=local+3;
	w=FLET30717(ctx,1,local+2,w);
	local[2]= w;
	goto CON31101;
CON31103:
	local[2]= fqv[88];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,2,local+2,&ftab[6],fqv[51]); /*merge-pathnames*/
	local[0] = w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F28922probe_file(ctx,1,local+2); /*probe-file*/
	if (w==NIL) goto CON31120;
	local[2]= local[0];
	w = env->c.clo.env2[14];
	ctx->vsp=local+3;
	w=FLET30717(ctx,1,local+2,w);
	local[2]= w;
	goto CON31101;
CON31120:
	local[2]= fqv[89];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,2,local+2,&ftab[6],fqv[51]); /*merge-pathnames*/
	local[0] = w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F28922probe_file(ctx,1,local+2); /*probe-file*/
	if (w==NIL) goto CON31139;
	local[2]= local[0];
	w = env->c.clo.env2[14];
	ctx->vsp=local+3;
	w=FLET30717(ctx,1,local+2,w);
	local[2]= w;
	goto CON31101;
CON31139:
	local[2]= fqv[90];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,2,local+2,&ftab[6],fqv[51]); /*merge-pathnames*/
	local[0] = w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F28922probe_file(ctx,1,local+2); /*probe-file*/
	if (w==NIL) goto CON31158;
	local[2]= local[0];
	w = env->c.clo.env2[14];
	ctx->vsp=local+3;
	w=FLET30717(ctx,1,local+2,w);
	local[2]= w;
	goto CON31101;
CON31158:
	local[2]= fqv[91];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,2,local+2,&ftab[6],fqv[51]); /*merge-pathnames*/
	local[0] = w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F28922probe_file(ctx,1,local+2); /*probe-file*/
	if (w==NIL) goto CON31177;
	local[2]= local[0];
	w = env->c.clo.env2[14];
	ctx->vsp=local+3;
	w=FLET30717(ctx,1,local+2,w);
	local[2]= w;
	goto CON31101;
CON31177:
	local[2]= fqv[92];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(*ftab[6])(ctx,2,local+2,&ftab[6],fqv[51]); /*merge-pathnames*/
	local[1] = w;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)F28922probe_file(ctx,1,local+2); /*probe-file*/
	if (w==NIL) goto CON31196;
	local[2]= local[1];
	w = env->c.clo.env2[14];
	ctx->vsp=local+3;
	w=FLET30717(ctx,1,local+2,w);
	local[2]= w;
	goto CON31101;
CON31196:
	local[2]= NIL;
CON31101:
	w = local[2];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*load-files*/
static pointer F28954load_files(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST31221:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= NIL;
	local[2]= local[0];
WHL31247:
	if (local[2]==NIL) goto WHX31248;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[3];
	local[1] = w;
	local[3]= local[1];
	local[4]= fqv[93];
	local[5]= T;
	ctx->vsp=local+6;
	w=(pointer)F28951load(ctx,3,local+3); /*load*/
	goto WHL31247;
WHX31248:
	local[3]= NIL;
BLK31249:
	w = NIL;
	w = T;
	local[0]= w;
BLK31219:
	ctx->vsp=local; return(local[0]);}

/*read-file*/
static pointer F28957read_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F28917open(ctx,1,local+0); /*open*/
	local[0]= w;
	ctx->vsp=local+1;
	w = makeclosure(codevec,quotevec,UWP31332,env,argv,local);
	local[1]=(pointer)(ctx->protfp); local[2]=w;
	ctx->protfp=(struct protectframe *)(local+1);
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)READ(ctx,1,local+3); /*read*/
	ctx->vsp=local+3;
	UWP31332(ctx,0,local+3,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK31308:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP31332(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[0];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*read-strings*/
static pointer F28960read_strings(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F28917open(ctx,1,local+0); /*open*/
	local[0]= w;
	ctx->vsp=local+1;
	w = makeclosure(codevec,quotevec,UWP31381,env,argv,local);
	local[1]=(pointer)(ctx->protfp); local[2]=w;
	ctx->protfp=(struct protectframe *)(local+1);
	local[3]= NIL;
	local[4]= NIL;
	w = NIL;
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= NIL;
WHL31406:
	local[6]= local[0];
	local[7]= NIL;
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)READLINE(ctx,3,local+6); /*read-line*/
	local[3] = w;
	local[6]= local[3];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)EQ(ctx,2,local+6); /*eql*/
	if (w!=NIL) goto WHX31407;
	local[6]= local[3];
	w = local[5];
	ctx->vsp=local+7;
	local[5] = cons(ctx,local[6],w);
	local[6]= fqv[94];
	w = local[5];
	ctx->vsp=local+7;
	local[5] = cons(ctx,local[6],w);
	goto WHL31406;
WHX31407:
	local[6]= NIL;
BLK31408:
	local[6]= (pointer)get_sym_func(fqv[95]);
	local[7]= loadglobal(fqv[22]);
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)NREVERSE(ctx,1,local+8); /*nreverse*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)APPLY(ctx,3,local+6); /*apply*/
	ctx->vsp=local+3;
	UWP31381(ctx,0,local+3,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK31357:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP31381(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[0];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*read-lines*/
static pointer F28963read_lines(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F28917open(ctx,1,local+0); /*open*/
	local[0]= w;
	ctx->vsp=local+1;
	w = makeclosure(codevec,quotevec,UWP31496,env,argv,local);
	local[1]=(pointer)(ctx->protfp); local[2]=w;
	ctx->protfp=(struct protectframe *)(local+1);
	local[3]= NIL;
	local[4]= NIL;
	w = NIL;
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= NIL;
WHL31521:
	local[6]= local[0];
	local[7]= NIL;
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)READLINE(ctx,3,local+6); /*read-line*/
	local[3] = w;
	local[6]= local[3];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)EQ(ctx,2,local+6); /*eql*/
	if (w!=NIL) goto WHX31522;
	local[6]= local[3];
	w = local[5];
	ctx->vsp=local+7;
	local[5] = cons(ctx,local[6],w);
	goto WHL31521;
WHX31522:
	local[6]= NIL;
BLK31523:
	local[6]= local[5];
	ctx->vsp=local+7;
	w=(pointer)NREVERSE(ctx,1,local+6); /*nreverse*/
	ctx->vsp=local+3;
	UWP31496(ctx,0,local+3,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[0]= w;
BLK31472:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP31496(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[0];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*read-lists*/
static pointer F28966read_lists(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	w = NIL;
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F28917open(ctx,1,local+3); /*open*/
	local[3]= w;
	ctx->vsp=local+4;
	w = makeclosure(codevec,quotevec,UWP31614,env,argv,local);
	local[4]=(pointer)(ctx->protfp); local[5]=w;
	ctx->protfp=(struct protectframe *)(local+4);
WHL31621:
	local[6]= local[3];
	local[7]= NIL;
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)READ(ctx,3,local+6); /*read*/
	local[1] = w;
	local[6]= local[1];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)EQ(ctx,2,local+6); /*eql*/
	if (w!=NIL) goto WHX31622;
	local[6]= local[1];
	w = local[2];
	ctx->vsp=local+7;
	local[2] = cons(ctx,local[6],w);
	goto WHL31621;
WHX31622:
	local[6]= NIL;
BLK31623:
	w = local[6];
	ctx->vsp=local+6;
	UWP31614(ctx,0,local+6,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)NREVERSE(ctx,1,local+3); /*nreverse*/
	local[0]= w;
BLK31571:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP31614(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[3];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*read-binary-file*/
static pointer F28969read_binary_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[0]); /*namestring*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)F28987file_size(ctx,1,local+0); /*file-size*/
	local[0]= w;
	local[1]= NIL;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,1,local+2,&ftab[3],fqv[44]); /*make-string*/
	local[2]= w;
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)F28917open(ctx,1,local+3); /*open*/
	local[3]= w;
	ctx->vsp=local+4;
	w = makeclosure(codevec,quotevec,UWP31715,env,argv,local);
	local[4]=(pointer)(ctx->protfp); local[5]=w;
	ctx->protfp=(struct protectframe *)(local+4);
	local[6]= local[3];
	local[7]= fqv[96];
	ctx->vsp=local+8;
	w=(pointer)SEND(ctx,2,local+6); /*send*/
	local[6]= w;
	local[7]= local[2];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)UNIXREAD(ctx,3,local+6); /*unix:uread*/
	local[1] = w;
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(*ftab[17])(ctx,2,local+6,&ftab[17],fqv[97]); /*/=*/
	if (w==NIL) goto IF31737;
	local[6]= fqv[98];
	ctx->vsp=local+7;
	w=(pointer)SIGERROR(ctx,1,local+6); /*error*/
	local[6]= w;
	goto IF31738;
IF31737:
	local[6]= NIL;
IF31738:
	w = local[6];
	ctx->vsp=local+6;
	UWP31715(ctx,0,local+6,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	w = local[2];
	local[0]= w;
BLK31671:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP31715(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[3];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*read-lines-till-eof*/
static pointer F28972read_lines_till_eof(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	w = NIL;
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
WHL31797:
	local[3]= argv[0];
	local[4]= NIL;
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)READLINE(ctx,3,local+3); /*read-line*/
	local[1] = w;
	local[3]= local[1];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)EQ(ctx,2,local+3); /*eql*/
	if (w!=NIL) goto WHX31798;
	local[3]= local[1];
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	goto WHL31797;
WHX31798:
	local[3]= NIL;
BLK31799:
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)NREVERSE(ctx,1,local+3); /*nreverse*/
	local[0]= w;
BLK31768:
	ctx->vsp=local; return(local[0]);}

/*do-file-line*/
static pointer F31834(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST31837:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	w = local[1];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[99],w);
	local[6]= fqv[100];
	local[7]= loadglobal(fqv[99]);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[24];
	local[9]= local[2];
	local[10]= fqv[56];
	local[11]= fqv[19];
	local[12]= fqv[19];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[101];
	local[11]= fqv[102];
	local[12]= fqv[103];
	local[13]= local[2];
	local[14]= fqv[104];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	local[16]= fqv[105];
	local[17]= loadglobal(fqv[99]);
	local[18]= fqv[19];
	local[19]= local[2];
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	w = local[0];
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
	unbindx(ctx,1);
	w = local[6];
	local[0]= w;
BLK31835:
	ctx->vsp=local; return(local[0]);}

/*do-file-form*/
static pointer F31982(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST31985:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	w=(pointer)GENSYM(ctx,0,local+1); /*gensym*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,0,local+2); /*gensym*/
	local[2]= w;
	w = local[1];
	ctx->vsp=local+3;
	bindspecial(ctx,fqv[99],w);
	local[6]= fqv[100];
	local[7]= loadglobal(fqv[99]);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	local[8]= fqv[24];
	local[9]= local[2];
	local[10]= fqv[56];
	local[11]= fqv[19];
	local[12]= fqv[19];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[101];
	local[11]= fqv[102];
	local[12]= fqv[103];
	local[13]= local[2];
	local[14]= fqv[104];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15]= (w)->c.cons.car;
	local[16]= fqv[106];
	local[17]= loadglobal(fqv[99]);
	local[18]= fqv[19];
	local[19]= local[2];
	ctx->vsp=local+20;
	w=(pointer)LIST(ctx,1,local+19); /*list*/
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	w = local[0];
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
	unbindx(ctx,1);
	w = local[6];
	local[0]= w;
BLK31983:
	ctx->vsp=local; return(local[0]);}

/*load-library*/
static pointer F28977load_library(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST32132:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= (pointer)get_sym_func(fqv[107]);
	local[2]= argv[0];
	local[3]= fqv[108];
	local[4]= NIL;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)APPLY(ctx,5,local+1); /*apply*/
	local[1]= w;
	local[2]= local[1];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(*ftab[18])(ctx,2,local+2,&ftab[18],fqv[109]); /*system::list-module-initializers*/
	local[2]= w;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= local[2];
WHL32187:
	if (local[5]==NIL) goto WHX32188;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= loadglobal(fqv[110]);
	ctx->vsp=local+7;
	w=(pointer)ISATTY(ctx,1,local+6); /*unix:isatty*/
	if (w==NIL) goto IF32237;
	local[6]= loadglobal(fqv[111]);
	local[7]= fqv[112];
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= loadglobal(fqv[111]);
	ctx->vsp=local+7;
	w=(pointer)FINOUT(ctx,1,local+6); /*finish-output*/
	local[6]= w;
	goto IF32238;
IF32237:
	local[6]= NIL;
IF32238:
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,2,local+6); /*funcall*/
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w = local[3];
	ctx->vsp=local+7;
	local[3] = cons(ctx,local[6],w);
	goto WHL32187;
WHX32188:
	local[6]= NIL;
BLK32189:
	w = NIL;
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)NREVERSE(ctx,1,local+4); /*nreverse*/
	local[0]= w;
BLK32130:
	ctx->vsp=local; return(local[0]);}

/*dump-object*/
static pointer F28980dump_object(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST32307:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= T;
	local[2]= T;
	local[3]= NIL;
	local[4]= NIL;
	w = local[4];
	ctx->vsp=local+5;
	bindspecial(ctx,fqv[113],w);
	w = local[3];
	ctx->vsp=local+8;
	bindspecial(ctx,fqv[114],w);
	w = local[2];
	ctx->vsp=local+11;
	bindspecial(ctx,fqv[115],w);
	w = local[1];
	ctx->vsp=local+14;
	bindspecial(ctx,fqv[116],w);
	local[17]= argv[0];
	ctx->vsp=local+18;
	w=(pointer)STREAMP(ctx,1,local+17); /*streamp*/
	if (w==NIL) goto IF32349;
	local[17]= NIL;
	local[18]= local[0];
WHL32374:
	if (local[18]==NIL) goto WHX32375;
	w=local[18];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.car;
	w=local[18];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18] = (w)->c.cons.cdr;
	w = local[19];
	local[17] = w;
	local[19]= local[17];
	local[20]= argv[0];
	ctx->vsp=local+21;
	w=(pointer)PRINT(ctx,2,local+19); /*print*/
	goto WHL32374;
WHX32375:
	local[19]= NIL;
BLK32376:
	w = NIL;
	local[17]= w;
	goto IF32350;
IF32349:
	local[17]= argv[0];
	local[18]= fqv[117];
	local[19]= fqv[118];
	ctx->vsp=local+20;
	w=(pointer)F28917open(ctx,3,local+17); /*open*/
	local[17]= w;
	ctx->vsp=local+18;
	w = makeclosure(codevec,quotevec,UWP32448,env,argv,local);
	local[18]=(pointer)(ctx->protfp); local[19]=w;
	ctx->protfp=(struct protectframe *)(local+18);
	local[20]= NIL;
	local[21]= local[0];
WHL32472:
	if (local[21]==NIL) goto WHX32473;
	w=local[21];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22]= (w)->c.cons.car;
	w=local[21];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21] = (w)->c.cons.cdr;
	w = local[22];
	local[20] = w;
	local[22]= local[20];
	local[23]= local[17];
	ctx->vsp=local+24;
	w=(pointer)PRINT(ctx,2,local+22); /*print*/
	goto WHL32472;
WHX32473:
	local[22]= NIL;
BLK32474:
	w = NIL;
	ctx->vsp=local+20;
	UWP32448(ctx,0,local+20,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[17]= w;
IF32350:
	ctx->vsp=local+18;
	unbindx(ctx,4);
	w = local[17];
	local[0]= w;
BLK32305:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP32448(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[17];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*dump-structure*/
static pointer F28983dump_structure(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST32546:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= T;
	local[2]= T;
	local[3]= NIL;
	local[4]= NIL;
	w = local[4];
	ctx->vsp=local+5;
	bindspecial(ctx,fqv[113],w);
	w = local[3];
	ctx->vsp=local+8;
	bindspecial(ctx,fqv[114],w);
	w = local[2];
	ctx->vsp=local+11;
	bindspecial(ctx,fqv[115],w);
	w = local[1];
	ctx->vsp=local+14;
	bindspecial(ctx,fqv[119],w);
	local[17]= argv[0];
	ctx->vsp=local+18;
	w=(pointer)STREAMP(ctx,1,local+17); /*streamp*/
	if (w==NIL) goto IF32588;
	local[17]= NIL;
	local[18]= local[0];
WHL32613:
	if (local[18]==NIL) goto WHX32614;
	w=local[18];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[19]= (w)->c.cons.car;
	w=local[18];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[18] = (w)->c.cons.cdr;
	w = local[19];
	local[17] = w;
	local[19]= local[17];
	local[20]= argv[0];
	ctx->vsp=local+21;
	w=(pointer)PRINT(ctx,2,local+19); /*print*/
	goto WHL32613;
WHX32614:
	local[19]= NIL;
BLK32615:
	w = NIL;
	local[17]= w;
	goto IF32589;
IF32588:
	local[17]= argv[0];
	local[18]= fqv[117];
	local[19]= fqv[118];
	ctx->vsp=local+20;
	w=(pointer)F28917open(ctx,3,local+17); /*open*/
	local[17]= w;
	ctx->vsp=local+18;
	w = makeclosure(codevec,quotevec,UWP32687,env,argv,local);
	local[18]=(pointer)(ctx->protfp); local[19]=w;
	ctx->protfp=(struct protectframe *)(local+18);
	local[20]= NIL;
	local[21]= local[0];
WHL32711:
	if (local[21]==NIL) goto WHX32712;
	w=local[21];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[22]= (w)->c.cons.car;
	w=local[21];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21] = (w)->c.cons.cdr;
	w = local[22];
	local[20] = w;
	local[22]= local[20];
	local[23]= local[17];
	ctx->vsp=local+24;
	w=(pointer)PRINT(ctx,2,local+22); /*print*/
	goto WHL32711;
WHX32712:
	local[22]= NIL;
BLK32713:
	w = NIL;
	ctx->vsp=local+20;
	UWP32687(ctx,0,local+20,ctx->protfp->cleaner);
	ctx->protfp=ctx->protfp->protlink;
	local[17]= w;
IF32589:
	ctx->vsp=local+18;
	unbindx(ctx,4);
	w = local[17];
	local[0]= w;
BLK32544:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer UWP32687(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= env->c.clo.env2[17];
	ctx->vsp=local+1;
	w=(pointer)CLOSE(ctx,1,local+0); /*close*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*dump-loadable-structure*/
static pointer F32783(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST32786:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= local[0];
WHL32824:
	if (local[3]==NIL) goto WHX32825;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= fqv[120];
	local[5]= fqv[104];
	local[6]= local[2];
	local[7]= fqv[120];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)SYMVALUE(ctx,1,local+8); /*symbol-value*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,2,local+7); /*list*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,3,local+5); /*list*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,2,local+4); /*list*/
	local[4]= w;
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	goto WHL32824;
WHX32825:
	local[4]= NIL;
BLK32826:
	w = NIL;
	local[2]= fqv[121];
	local[3]= argv[0];
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)REVERSE(ctx,1,local+4); /*reverse*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK32784:
	ctx->vsp=local; return(local[0]);}

/*file-size*/
static pointer F28987file_size(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[0]); /*namestring*/
	argv[0] = w;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F28922probe_file(ctx,1,local+0); /*probe-file*/
	if (w==NIL) goto IF32937;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[0]); /*namestring*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)STAT(ctx,1,local+0); /*unix:stat*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)7L);
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	local[0]= w;
	goto IF32938;
IF32937:
	local[0]= fqv[122];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,2,local+0); /*error*/
	local[0]= w;
IF32938:
	w = local[0];
	local[0]= w;
BLK32918:
	ctx->vsp=local; return(local[0]);}

/*directory-p*/
static pointer F28990directory_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)STAT(ctx,1,local+2); /*unix:stat*/
	local[1] = w;
	w = local[1];
	if (!iscons(w)) goto IF32971;
	local[2]= makeint((eusinteger_t)16384L);
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)0L);
	ctx->vsp=local+5;
	w=(pointer)ELT(ctx,2,local+3); /*elt*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)LOGAND(ctx,2,local+2); /*logand*/
	local[2]= w;
	local[3]= makeint((eusinteger_t)16384L);
	ctx->vsp=local+4;
	w=(pointer)NUMEQUAL(ctx,2,local+2); /*=*/
	local[2]= w;
	goto IF32972;
IF32971:
	local[2]= NIL;
IF32972:
	w = local[2];
	local[0]= w;
BLK32957:
	ctx->vsp=local; return(local[0]);}

/*map-file*/
static pointer F28993map_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[123], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY33011;
	local[0] = fqv[2];
KEY33011:
	if (n & (1<<1)) goto KEY33018;
	local[1] = makeint((eusinteger_t)0L);
KEY33018:
	if (n & (1<<2)) goto KEY33023;
	local[2] = NIL;
KEY33023:
	if (n & (1<<3)) goto KEY33028;
	local[3] = NIL;
KEY33028:
	if (n & (1<<4)) goto KEY33033;
	local[4] = T;
KEY33033:
	if (n & (1<<5)) goto KEY33038;
	local[5] = NIL;
KEY33038:
	if (n & (1<<6)) goto KEY33043;
	local[6] = makeint((eusinteger_t)0L);
KEY33043:
	local[7]= NIL;
	local[8]= makeint((eusinteger_t)0L);
	local[9]= NIL;
	local[10]= argv[0];
	local[11]= fqv[117];
	local[12]= local[0];
	local[13]= fqv[124];
	local[14]= fqv[13];
	ctx->vsp=local+15;
	w=(pointer)F28917open(ctx,5,local+10); /*open*/
	local[7] = w;
	if (local[2]!=NIL) goto IF33081;
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(pointer)F28987file_size(ctx,1,local+10); /*file-size*/
	local[2] = w;
	local[10]= local[2];
	goto IF33082;
IF33081:
	local[10]= NIL;
IF33082:
	if (local[3]!=NIL) goto IF33100;
	local[10]= local[0];
	local[11]= fqv[125];
	ctx->vsp=local+12;
	w=(pointer)ASSQ(ctx,2,local+10); /*assq*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	local[10]= local[3];
	goto IF33101;
IF33100:
	local[10]= NIL;
IF33101:
	if (local[4]==NIL) goto IF33124;
	local[8] = makeint((eusinteger_t)1L);
	local[10]= local[8];
	goto IF33125;
IF33124:
	local[10]= NIL;
IF33125:
	if (local[5]==NIL) goto IF33136;
	local[8] = makeint((eusinteger_t)2L);
	local[10]= local[8];
	goto IF33137;
IF33136:
	local[10]= NIL;
IF33137:
	local[10]= local[6];
	local[11]= local[2];
	local[12]= local[3];
	local[13]= local[8];
	local[14]= local[7];
	local[15]= local[1];
	ctx->vsp=local+16;
	w=(*ftab[19])(ctx,6,local+10,&ftab[19],fqv[126]); /*unix:mmap*/
	local[9] = w;
	local[10]= local[7];
	ctx->vsp=local+11;
	w=(pointer)CLOSE(ctx,1,local+10); /*close*/
	w = local[9];
	local[0]= w;
BLK32996:
	ctx->vsp=local; return(local[0]);}

/*provide*/
static pointer F28995provide(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST33174:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[20])(ctx,1,local+1,&ftab[20],fqv[127]); /*keywordp*/
	if (w!=NIL) goto IF33186;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,1,local+1,&ftab[21],fqv[22]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[22])(ctx,1,local+1,&ftab[22],fqv[128]); /*string-upcase*/
	local[1]= w;
	local[2]= loadglobal(fqv[129]);
	ctx->vsp=local+3;
	w=(pointer)INTERN(ctx,2,local+1); /*intern*/
	argv[0] = w;
	local[1]= argv[0];
	goto IF33187;
IF33186:
	local[1]= NIL;
IF33187:
	local[1]= argv[0];
	local[2]= loadglobal(fqv[130]);
	ctx->vsp=local+3;
	w=(*ftab[23])(ctx,2,local+1,&ftab[23],fqv[131]); /*assoc*/
	if (w!=NIL) goto IF33216;
	local[1]= loadglobal(fqv[130]);
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST_STAR(ctx,2,local+2); /*list**/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)NCONC(ctx,2,local+1); /*nconc*/
	local[1]= w;
	storeglobal(fqv[130],w);
	goto IF33217;
IF33216:
	local[1]= NIL;
IF33217:
	w = argv[0];
	local[0]= w;
BLK33172:
	ctx->vsp=local; return(local[0]);}

/*require*/
static pointer F28997require(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST33249:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[20])(ctx,1,local+1,&ftab[20],fqv[127]); /*keywordp*/
	if (w!=NIL) goto IF33261;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,1,local+1,&ftab[21],fqv[22]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[22])(ctx,1,local+1,&ftab[22],fqv[128]); /*string-upcase*/
	local[1]= w;
	local[2]= loadglobal(fqv[129]);
	ctx->vsp=local+3;
	w=(pointer)INTERN(ctx,2,local+1); /*intern*/
	argv[0] = w;
	local[1]= argv[0];
	goto IF33262;
IF33261:
	local[1]= NIL;
IF33262:
	local[1]= argv[0];
	local[2]= loadglobal(fqv[130]);
	ctx->vsp=local+3;
	w=(*ftab[23])(ctx,2,local+1,&ftab[23],fqv[131]); /*assoc*/
	if (w!=NIL) goto IF33288;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (isstring(w)) goto IF33301;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[21])(ctx,1,local+1,&ftab[21],fqv[22]); /*string*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(*ftab[24])(ctx,1,local+1,&ftab[24],fqv[132]); /*string-downcase*/
	local[1]= w;
	w = local[0];
	ctx->vsp=local+2;
	local[0] = cons(ctx,local[1],w);
	local[1]= local[0];
	goto IF33302;
IF33301:
	local[1]= NIL;
IF33302:
	local[1]= (pointer)get_sym_func(fqv[107]);
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,2,local+1); /*apply*/
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)F28995provide(ctx,1,local+1); /*provide*/
	local[1]= w;
	goto IF33289;
IF33288:
	local[1]= NIL;
IF33289:
	w = local[1];
	local[0]= w;
BLK33247:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___loader(ctx,n,argv,env)
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
	local[0]= fqv[133];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= fqv[134];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF33349;
	local[0]= fqv[135];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[63],w);
	goto IF33350;
IF33349:
	local[0]= fqv[136];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF33350:
	local[0]= fqv[137];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[138],module,F28911file_write_date,fqv[139]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[140],module,F28914file_newer,fqv[141]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[25],module,F28917open,fqv[142]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[100],module,F29583,fqv[143]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[144],module,F28922probe_file,fqv[145]);
	local[0]= fqv[43];
	local[1]= fqv[146];
	local[2]= fqv[147];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33389;
	local[2]= makeint((eusinteger_t)7L);
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33389:
	local[2]= fqv[149];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33401;
	local[2]= makeint((eusinteger_t)127L);
	local[3]= makeint((eusinteger_t)69L);
	local[4]= makeint((eusinteger_t)76L);
	local[5]= makeint((eusinteger_t)70L);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33401:
	local[2]= fqv[150];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33412;
	local[2]= makeint((eusinteger_t)127L);
	local[3]= makeint((eusinteger_t)69L);
	local[4]= makeint((eusinteger_t)76L);
	local[5]= makeint((eusinteger_t)70L);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33412:
	local[2]= fqv[151];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33423;
	local[2]= makeint((eusinteger_t)98L);
	local[3]= makeint((eusinteger_t)1L);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33423:
	local[2]= fqv[152];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33434;
	local[2]= makeint((eusinteger_t)127L);
	local[3]= makeint((eusinteger_t)69L);
	local[4]= makeint((eusinteger_t)76L);
	local[5]= makeint((eusinteger_t)70L);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33434:
	local[2]= fqv[153];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33445;
	local[2]= fqv[154];
	local[3]= fqv[155];
	local[4]= fqv[156];
	local[5]= fqv[157];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33445:
	local[2]= fqv[158];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33464;
	local[2]= makeint((eusinteger_t)127L);
	local[3]= makeint((eusinteger_t)69L);
	local[4]= makeint((eusinteger_t)76L);
	local[5]= makeint((eusinteger_t)70L);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33464:
	local[2]= fqv[159];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33475;
	local[2]= makeint((eusinteger_t)77L);
	local[3]= makeint((eusinteger_t)90L);
	local[4]= makeint((eusinteger_t)144L);
	local[5]= makeint((eusinteger_t)0L);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33475:
	local[2]= fqv[160];
	local[3]= loadglobal(fqv[148]);
	ctx->vsp=local+4;
	w=(*ftab[16])(ctx,2,local+2,&ftab[16],fqv[87]); /*member*/
	if (w==NIL) goto CON33486;
	local[2]= makeint((eusinteger_t)131L);
	local[3]= makeint((eusinteger_t)1L);
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,3,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33486:
	local[2]= NIL;
	local[3]= NIL;
	local[4]= makeint((eusinteger_t)1L);
	local[5]= fqv[161];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,4,local+2); /*list*/
	local[2]= w;
	goto CON33387;
CON33497:
	local[2]= NIL;
CON33387:
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[162],module,F28926object_file_p,fqv[163]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[164],module,F28929path_list,fqv[165]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[166],module,F28932find_executable,fqv[167]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[168],module,F28935system__txtload,fqv[169]);
	local[0]= fqv[69];
	local[1]= fqv[170];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF33516;
	local[0]= fqv[69];
	local[1]= fqv[170];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[69];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF33539;
	local[0]= fqv[69];
	local[1]= fqv[171];
	local[2]= fqv[172];
	local[3]= loadglobal(fqv[173]);
	local[4]= NIL;
	local[5]= fqv[174];
	local[6]= loadglobal(fqv[173]);
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,3,local+4); /*format*/
	local[4]= w;
	local[5]= NIL;
	local[6]= fqv[175];
	local[7]= loadglobal(fqv[173]);
	ctx->vsp=local+8;
	w=(pointer)XFORMAT(ctx,3,local+5); /*format*/
	local[5]= w;
	local[6]= NIL;
	local[7]= fqv[176];
	local[8]= loadglobal(fqv[173]);
	ctx->vsp=local+9;
	w=(pointer)XFORMAT(ctx,3,local+6); /*format*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,5,local+2); /*list*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF33540;
IF33539:
	local[0]= NIL;
IF33540:
	local[0]= fqv[69];
	goto IF33517;
IF33516:
	local[0]= NIL;
IF33517:
	local[0]= fqv[68];
	local[1]= fqv[177];
	local[2]= fqv[178];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= fqv[62];
	local[1]= fqv[170];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF33582;
	local[0]= fqv[62];
	local[1]= fqv[170];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[62];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF33605;
	local[0]= fqv[62];
	local[1]= fqv[171];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF33606;
IF33605:
	local[0]= NIL;
IF33606:
	local[0]= fqv[62];
	goto IF33583;
IF33582:
	local[0]= NIL;
IF33583:
	local[0]= fqv[77];
	local[1]= fqv[170];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF33625;
	local[0]= fqv[77];
	local[1]= fqv[170];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[77];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF33648;
	local[0]= fqv[77];
	local[1]= fqv[171];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF33649;
IF33648:
	local[0]= NIL;
IF33649:
	local[0]= fqv[77];
	goto IF33626;
IF33625:
	local[0]= NIL;
IF33626:
	ctx->vsp=local+0;
	compfun(ctx,fqv[79],module,F28945load_module_file_name,fqv[179]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[180],module,F28948gencname_tail,fqv[181]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[107],module,F28951load,fqv[182]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[183],module,F28954load_files,fqv[184]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[185],module,F28957read_file,fqv[186]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[187],module,F28960read_strings,fqv[188]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[189],module,F28963read_lines,fqv[190]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[191],module,F28966read_lists,fqv[192]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[193],module,F28969read_binary_file,fqv[194]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[195],module,F28972read_lines_till_eof,fqv[196]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[197],module,F31834,fqv[198]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[199],module,F31982,fqv[200]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[201],module,F28977load_library,fqv[202]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[203],module,F28980dump_object,fqv[204]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[121],module,F28983dump_structure,fqv[205]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[206],module,F32783,fqv[207]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[208],module,F28987file_size,fqv[209]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[210],module,F28990directory_p,fqv[211]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[212],module,F28993map_file,fqv[213]);
	local[0]= fqv[130];
	local[1]= fqv[170];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
	local[1]= makeint((eusinteger_t)1L);
	ctx->vsp=local+2;
	w=(pointer)EQ(ctx,2,local+0); /*eql*/
	if (w==NIL) goto IF33706;
	local[0]= fqv[130];
	local[1]= fqv[170];
	local[2]= makeint((eusinteger_t)2L);
	ctx->vsp=local+3;
	w=(pointer)SEND(ctx,3,local+0); /*send*/
	local[0]= fqv[130];
	ctx->vsp=local+1;
	w=(pointer)BOUNDP(ctx,1,local+0); /*boundp*/
	if (w!=NIL) goto IF33729;
	local[0]= fqv[130];
	local[1]= fqv[171];
	local[2]= NIL;
	local[3]= NIL;
	ctx->vsp=local+4;
	w=(pointer)SEND(ctx,4,local+0); /*send*/
	local[0]= w;
	goto IF33730;
IF33729:
	local[0]= NIL;
IF33730:
	local[0]= fqv[130];
	goto IF33707;
IF33706:
	local[0]= NIL;
IF33707:
	ctx->vsp=local+0;
	compfun(ctx,fqv[214],module,F28995provide,fqv[215]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[216],module,F28997require,fqv[217]);
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<25; i++) ftab[i]=fcallx;
}
