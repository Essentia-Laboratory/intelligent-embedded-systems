/* ./common.c :  entry=common */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "common.h"
#pragma init (register_common)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___common();
extern pointer build_quote_vector();
static int register_common()
  { add_module_initializer("___common", ___common);}

static pointer F4125lisp_implementation_type();
static pointer F4127lisp_implementation_version();
static pointer F4131macroexpand();
static pointer F4160casebody();
static pointer F4163casehead();
static pointer F4166case1();
static pointer F4170classcasehead();
static pointer F4173classcase1();
static pointer F4176string();
static pointer F4180alias();
static pointer F4186caaar();
static pointer F4189caadr();
static pointer F4192cadar();
static pointer F4195cdaar();
static pointer F4198cdadr();
static pointer F4201cddar();
static pointer F4204cdddr();
static pointer F4210fourth();
static pointer F4213fifth();
static pointer F4216sixth();
static pointer F4219seventh();
static pointer F4222eighth();
static pointer F4225cddddr();
static pointer F4228cadddr();
static pointer F4231caaddr();
static pointer F4234cdaddr();
static pointer F4237caddddr();
static pointer F4240flatten();
static pointer F4243list_insert();
static pointer F4246list_delete();
static pointer F4249adjoin();
static pointer F4252union();
static pointer F4255intersection();
static pointer F4258set_difference();
static pointer F4261set_exclusive_or();
static pointer F4264rotate_list();
static pointer F4267last();
static pointer F4270copy_tree();
static pointer F4273copy_list();
static pointer F4276nreconc();
static pointer F4279rassoc();
static pointer F4282acons();
static pointer F4285member();
static pointer F4288assoc();
static pointer F4291subsetp();
static pointer F4294maplist();
static pointer F4297mapcon();
static pointer F4300find();
static pointer F4303find_if();
static pointer F4306find_if_not();
static pointer F4309position();
static pointer F4312position_if();
static pointer F4315position_if_not();
static pointer F4318count();
static pointer F4321count_if();
static pointer F4324count_if_not();
static pointer F4327member_if();
static pointer F4330member_if_not();
static pointer F4333collect_if();
static pointer F4336collect_instances();
static pointer F4339pairlis();
static pointer F4342transpose_list();
static pointer F4345make_list();
static pointer F4348make_sequence();
static pointer F4351fill();
static pointer F4354replace();
static pointer F4357remove();
static pointer F4360remove_if();
static pointer F4363remove_if_not();
static pointer F4366delete();
static pointer F4369delete_if();
static pointer F4372delete_if_not();
static pointer F4375substitute();
static pointer F4378substitute_if();
static pointer F4381substitute_if_not();
static pointer F4384nsubstitute();
static pointer F4387nsubstitute_if();
static pointer F4390nsubstitute_if_not();
static pointer F4393unique();
static pointer F4396remove_duplicates();
static pointer F4399extream();
static pointer F4408send_all();
static pointer F4411resend();
static pointer F4416make_instance();
static pointer F4420delete_method();
static pointer F4423make_class();
static pointer F4430readtablep();
static pointer F4433copy_readtable();
static pointer F4436set_syntax_from_char();
static pointer F4441keywordp();
static pointer F4444constantp();
static pointer F4447functionp();
static pointer F4450vector_class_p();
static pointer F4453compiled_function_p();
static pointer F4456input_stream_p();
static pointer F4459output_stream_p();
static pointer F4462io_stream_p();
static pointer F4465special_form_p();
static pointer F4468macro_function();
static pointer F4471zerop();
static pointer F4474plusp();
static pointer F4477minusp();
static pointer F4480oddp();
static pointer F4483evenp();
static pointer F4486logandc1();
static pointer F4489logandc2();
static pointer F4493every();
static pointer F4496some();
static pointer F4501reduce();
static pointer F4504merge_list();
static pointer F4507merge();
static pointer F4510expt();
static pointer F4513signum();
static pointer F4516rad2deg();
static pointer F4519deg2rad();
static pointer F4521setf_expand_1();
static pointer F4523setf_expand();

/*lisp-implementation-type*/
static pointer F4125lisp_implementation_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	w = fqv[0];
	local[0]= w;
BLK4667:
	ctx->vsp=local; return(local[0]);}

/*lisp-implementation-version*/
static pointer F4127lisp_implementation_version(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=0) maerror();
	local[0]= NIL;
	local[1]= fqv[1];
	w=loadglobal(fqv[2]);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= loadglobal(fqv[2]);
	ctx->vsp=local+4;
	w=(pointer)F4204cdddr(ctx,1,local+3); /*cdddr*/
	local[3]= w;
	local[4]= loadglobal(fqv[3]);
	w=loadglobal(fqv[2]);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=loadglobal(fqv[2]);
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)XFORMAT(ctx,7,local+0); /*format*/
	local[0]= w;
BLK4677:
	ctx->vsp=local; return(local[0]);}

/*macroexpand*/
static pointer F4131macroexpand(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)MACEXPAND2(ctx,1,local+0); /*macroexpand2*/
	local[0]= w;
WHL4741:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w==NIL) goto WHX4742;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)F4468macro_function(ctx,1,local+1); /*macro-function*/
	if (w==NIL) goto WHX4742;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)MACEXPAND2(ctx,1,local+1); /*macroexpand2*/
	local[0] = w;
	goto WHL4741;
WHX4742:
	local[1]= NIL;
BLK4743:
	w = local[0];
	local[0]= w;
BLK4718:
	ctx->vsp=local; return(local[0]);}

/*prog1*/
static pointer F4775(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST4778:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[4];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[5];
	local[3]= local[1];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	local[4]= fqv[6];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK4776:
	ctx->vsp=local; return(local[0]);}

/*loop*/
static pointer F4838(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST4841:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[7];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[8];
	local[3]= fqv[9];
	local[4]= fqv[10];
	local[5]= local[1];
	local[6]= local[0];
	local[7]= fqv[11];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	local[7]= w;
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
BLK4839:
	ctx->vsp=local; return(local[0]);}

/*unless*/
static pointer F4897(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST4900:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[12];
	local[2]= fqv[13];
	local[3]= argv[0];
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
BLK4898:
	ctx->vsp=local; return(local[0]);}

/*until*/
static pointer F4930(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST4933:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[14];
	local[2]= fqv[13];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= local[0];
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)APPEND(ctx,2,local+3); /*append*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK4931:
	ctx->vsp=local; return(local[0]);}

/*pop*/
static pointer F4964(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[15];
	local[1]= fqv[16];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	local[2]= fqv[17];
	local[3]= argv[0];
	local[4]= fqv[18];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK4965:
	ctx->vsp=local; return(local[0]);}

/*push*/
static pointer F5011(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[17];
	local[1]= argv[1];
	local[2]= fqv[19];
	local[3]= argv[0];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK5012:
	ctx->vsp=local; return(local[0]);}

/*pushnew*/
static pointer F5048(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[20], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY5062;
	local[0] = NIL;
KEY5062:
	if (n & (1<<1)) goto KEY5067;
	local[1] = NIL;
KEY5067:
	if (n & (1<<2)) goto KEY5072;
	local[2] = NIL;
KEY5072:
	local[3]= fqv[6];
	local[4]= fqv[21];
	local[5]= fqv[13];
	local[6]= fqv[22];
	local[7]= argv[0];
	local[8]= argv[1];
	local[9]= fqv[23];
	local[10]= local[0];
	local[11]= fqv[24];
	local[12]= local[1];
	local[13]= fqv[25];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[17];
	local[7]= argv[1];
	local[8]= fqv[19];
	local[9]= argv[0];
	local[10]= argv[1];
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
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[9];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	local[0]= w;
BLK5049:
	ctx->vsp=local; return(local[0]);}

/*inc*/
static pointer F5169(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT5173;}
	local[0]= NIL;
ENT5173:
ENT5172:
	if (n>2) maerror();
	if (local[0]==NIL) goto IF5187;
	local[1]= fqv[26];
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[0] = w;
	local[1]= local[0];
	goto IF5188;
IF5187:
	local[1]= fqv[27];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	local[0] = w;
	local[1]= local[0];
IF5188:
	local[1]= fqv[28];
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[0]= w;
BLK5170:
	ctx->vsp=local; return(local[0]);}

/*dec*/
static pointer F5223(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT5227;}
	local[0]= NIL;
ENT5227:
ENT5226:
	if (n>2) maerror();
	if (local[0]==NIL) goto IF5241;
	local[1]= fqv[29];
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[0] = w;
	local[1]= local[0];
	goto IF5242;
IF5241:
	local[1]= fqv[30];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	local[0] = w;
	local[1]= local[0];
IF5242:
	local[1]= fqv[28];
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[0]= w;
BLK5224:
	ctx->vsp=local; return(local[0]);}

/*incf*/
static pointer F5277(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT5281;}
	local[0]= NIL;
ENT5281:
ENT5280:
	if (n>2) maerror();
	if (local[0]==NIL) goto IF5295;
	local[1]= fqv[26];
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[0] = w;
	local[1]= local[0];
	goto IF5296;
IF5295:
	local[1]= fqv[27];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	local[0] = w;
	local[1]= local[0];
IF5296:
	local[1]= fqv[17];
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[0]= w;
BLK5278:
	ctx->vsp=local; return(local[0]);}

/*decf*/
static pointer F5331(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT5335;}
	local[0]= NIL;
ENT5335:
ENT5334:
	if (n>2) maerror();
	if (local[0]==NIL) goto IF5349;
	local[1]= fqv[29];
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[0] = w;
	local[1]= local[0];
	goto IF5350;
IF5349:
	local[1]= fqv[30];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	local[0] = w;
	local[1]= local[0];
IF5350:
	local[1]= fqv[17];
	local[2]= argv[0];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[0]= w;
BLK5332:
	ctx->vsp=local; return(local[0]);}

/*defvar*/
static pointer F5385(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT5390;}
	local[0]= NIL;
ENT5390:
	if (n>=3) { local[1]=(argv[2]); goto ENT5389;}
	local[1]= NIL;
ENT5389:
ENT5388:
	if (n>3) maerror();
	w = argv[0];
	if (issymbol(w)) goto IF5409;
	local[2]= makeint((eusinteger_t)20L);
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto IF5410;
IF5409:
	local[2]= NIL;
IF5410:
	local[2]= fqv[12];
	local[3]= fqv[31];
	local[4]= fqv[32];
	local[5]= fqv[33];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[34];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[35];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[32];
	local[5]= fqv[33];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[34];
	local[7]= fqv[36];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[21];
	local[6]= fqv[13];
	local[7]= fqv[37];
	local[8]= fqv[33];
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[32];
	local[8]= fqv[33];
	local[9]= argv[0];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[38];
	local[10]= local[0];
	local[11]= local[1];
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
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[33];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
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
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK5386:
	ctx->vsp=local; return(local[0]);}

/*deflocal*/
static pointer F5552(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT5557;}
	local[0]= NIL;
ENT5557:
	if (n>=3) { local[1]=(argv[2]); goto ENT5556;}
	local[1]= NIL;
ENT5556:
ENT5555:
	if (n>3) maerror();
	w = argv[0];
	if (issymbol(w)) goto IF5576;
	local[2]= makeint((eusinteger_t)20L);
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto IF5577;
IF5576:
	local[2]= NIL;
IF5577:
	local[2]= fqv[6];
	local[3]= fqv[32];
	local[4]= fqv[33];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[39];
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[33];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK5553:
	ctx->vsp=local; return(local[0]);}

/*defparameter*/
static pointer F5633(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5637;}
	local[0]= NIL;
ENT5637:
ENT5636:
	if (n>3) maerror();
	w = argv[0];
	if (issymbol(w)) goto IF5654;
	local[1]= makeint((eusinteger_t)20L);
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
	goto IF5655;
IF5654:
	local[1]= NIL;
IF5655:
	local[1]= fqv[32];
	local[2]= fqv[33];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[38];
	local[4]= argv[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK5634:
	ctx->vsp=local; return(local[0]);}

/*defconstant*/
static pointer F5695(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT5699;}
	local[0]= NIL;
ENT5699:
ENT5698:
	if (n>3) maerror();
	w = argv[0];
	if (issymbol(w)) goto IF5716;
	local[1]= makeint((eusinteger_t)20L);
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
	goto IF5717;
IF5716:
	local[1]= NIL;
IF5717:
	local[1]= fqv[32];
	local[2]= fqv[33];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[40];
	local[4]= argv[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK5696:
	ctx->vsp=local; return(local[0]);}

/*dotimes*/
static pointer F5757(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST5760:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[41];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[5];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= fqv[42];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= local[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[43];
	local[5]= fqv[44];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	local[7]= local[1];
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
	local[5]= fqv[14];
	local[6]= fqv[45];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= local[0];
	local[8]= fqv[28];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= fqv[27];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
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
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)APPEND(ctx,2,local+7); /*append*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK5758:
	ctx->vsp=local; return(local[0]);}

/*dolist*/
static pointer F5911(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST5914:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[46];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w = local[2];
	if (!iscons(w)) goto IF5945;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	if (fqv[43]!=local[3]) goto IF5945;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	local[3]= local[0];
	goto IF5946;
IF5945:
	local[2] = NIL;
	local[3]= local[2];
IF5946:
	local[3]= fqv[5];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	local[5]= fqv[9];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= local[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= local[2];
	local[6]= fqv[14];
	local[7]= local[1];
	local[8]= fqv[28];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	local[10]= fqv[47];
	local[11]= local[1];
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
	local[9]= local[0];
	local[10]= NIL;
	ctx->vsp=local+11;
	w=(pointer)APPEND(ctx,2,local+9); /*append*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
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
BLK5912:
	ctx->vsp=local; return(local[0]);}

/*do-symbols*/
static pointer F6068(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST6071:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[48];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car==NIL) goto IF6099;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	goto IF6100;
IF6099:
	local[3]= fqv[49];
IF6100:
	ctx->vsp=local+4;
	w=(pointer)GENSYM(ctx,0,local+4); /*gensym*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)GENSYM(ctx,0,local+5); /*gensym*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)GENSYM(ctx,0,local+6); /*gensym*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)GENSYM(ctx,0,local+7); /*gensym*/
	local[7]= w;
	local[8]= fqv[50];
	local[9]= local[2];
	local[10]= fqv[9];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= local[4];
	local[11]= fqv[51];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= local[5];
	local[12]= fqv[52];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= local[7];
	local[13]= local[4];
	w = fqv[53];
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= local[6];
	local[14]= fqv[54];
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
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
	local[10]= fqv[14];
	local[11]= fqv[45];
	local[12]= local[5];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[28];
	local[13]= local[2];
	local[14]= fqv[55];
	local[15]= local[7];
	local[16]= local[5];
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
	local[13]= fqv[56];
	local[14]= local[5];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[12];
	local[15]= fqv[57];
	local[16]= local[2];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	w = local[0];
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	local[0]= w;
BLK6069:
	ctx->vsp=local; return(local[0]);}

/*do-external-symbols*/
static pointer F6295(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST6298:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[58];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car==NIL) goto IF6326;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	goto IF6327;
IF6326:
	local[3]= fqv[49];
IF6327:
	ctx->vsp=local+4;
	w=(pointer)GENSYM(ctx,0,local+4); /*gensym*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)GENSYM(ctx,0,local+5); /*gensym*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)GENSYM(ctx,0,local+6); /*gensym*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)GENSYM(ctx,0,local+7); /*gensym*/
	local[7]= w;
	local[8]= fqv[50];
	local[9]= local[2];
	local[10]= fqv[9];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= local[4];
	local[11]= fqv[51];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= local[5];
	local[12]= fqv[59];
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= local[7];
	local[13]= local[4];
	w = fqv[60];
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= local[6];
	local[14]= fqv[54];
	local[15]= local[7];
	ctx->vsp=local+16;
	w=(pointer)LIST(ctx,1,local+15); /*list*/
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
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
	local[10]= fqv[14];
	local[11]= fqv[45];
	local[12]= local[5];
	local[13]= local[6];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	local[11]= cons(ctx,local[11],w);
	local[12]= fqv[28];
	local[13]= local[2];
	local[14]= fqv[55];
	local[15]= local[7];
	local[16]= local[5];
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
	local[13]= fqv[56];
	local[14]= local[5];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	local[14]= fqv[12];
	local[15]= fqv[57];
	local[16]= local[2];
	ctx->vsp=local+17;
	w=(pointer)LIST(ctx,1,local+16); /*list*/
	ctx->vsp=local+16;
	local[15]= cons(ctx,local[15],w);
	w = local[0];
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	local[14]= cons(ctx,local[14],w);
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
	ctx->vsp=local+13;
	w = cons(ctx,local[12],w);
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	ctx->vsp=local+12;
	w=(pointer)LIST(ctx,1,local+11); /*list*/
	ctx->vsp=local+11;
	w = cons(ctx,local[10],w);
	ctx->vsp=local+10;
	w = cons(ctx,local[9],w);
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	local[0]= w;
BLK6296:
	ctx->vsp=local; return(local[0]);}

/*do-all-symbols*/
static pointer F6522(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST6525:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[61];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[62];
	local[3]= local[1];
	local[4]= fqv[63];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[64];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	w = local[0];
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
BLK6523:
	ctx->vsp=local; return(local[0]);}

/*psetq*/
static pointer F6599(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST6602:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
WHL6623:
	if (local[0]==NIL) goto WHX6624;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	w = local[4];
	local[4]= w;
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	w = local[4];
	local[4]= w;
	w = local[2];
	ctx->vsp=local+5;
	local[2] = cons(ctx,local[4],w);
	local[4]= fqv[65];
	ctx->vsp=local+5;
	w=(pointer)GENSYM(ctx,1,local+4); /*gensym*/
	local[4]= w;
	w = local[3];
	ctx->vsp=local+5;
	local[3] = cons(ctx,local[4],w);
	goto WHL6623;
WHX6624:
	local[4]= NIL;
BLK6625:
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)NREVERSE(ctx,1,local+4); /*nreverse*/
	local[1] = w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)NREVERSE(ctx,1,local+4); /*nreverse*/
	local[2] = w;
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)NREVERSE(ctx,1,local+4); /*nreverse*/
	local[3] = w;
	local[4]= fqv[50];
	local[5]= (pointer)get_sym_func(fqv[66]);
	local[6]= local[3];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)MAPCAR(ctx,3,local+5); /*mapcar*/
	local[5]= w;
	local[6]= fqv[28];
	local[7]= (pointer)get_sym_func(fqv[66]);
	local[8]= local[1];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)MAPCAN(ctx,3,local+7); /*mapcan*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[9];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	local[0]= w;
BLK6600:
	ctx->vsp=local; return(local[0]);}

/*do*/
static pointer F6789(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST6792:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[67];
	ctx->vsp=local+3;
	w=(pointer)GENSYM(ctx,1,local+2); /*gensym*/
	local[2]= w;
	w = local[1];
	if (!iscons(w)) goto IF6825;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	if (fqv[43]!=local[3]) goto IF6825;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	local[3]= local[0];
	goto IF6826;
IF6825:
	local[1] = NIL;
	local[3]= local[1];
IF6826:
	local[3]= fqv[8];
	local[4]= fqv[9];
	local[5]= fqv[5];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO6869,env,argv,local);
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)MAPCAR(ctx,2,local+6); /*mapcar*/
	local[6]= w;
	local[7]= local[1];
	local[8]= fqv[10];
	local[9]= local[2];
	local[10]= fqv[21];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= fqv[68];
	local[13]= fqv[6];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= local[0];
	local[12]= fqv[69];
	ctx->vsp=local+13;
	local[13]= makeclosure(codevec,quotevec,CLO6920,env,argv,local);
	local[14]= argv[0];
	ctx->vsp=local+15;
	w=(pointer)MAPCAN(ctx,2,local+13); /*mapcan*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[11];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)APPEND(ctx,2,local+11); /*append*/
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
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	local[0]= w;
BLK6790:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO6869(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,2,local+0); /*list*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO6920(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.cdr==NIL) goto IF6988;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,2,local+0); /*list*/
	local[0]= w;
	goto IF6989;
IF6988:
	local[0]= NIL;
IF6989:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*do**/
static pointer F7018(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST7021:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[70];
	ctx->vsp=local+3;
	w=(pointer)GENSYM(ctx,1,local+2); /*gensym*/
	local[2]= w;
	w = local[1];
	if (!iscons(w)) goto IF7054;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	if (fqv[43]!=local[3]) goto IF7054;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	local[3]= local[0];
	goto IF7055;
IF7054:
	local[1] = NIL;
	local[3]= local[1];
IF7055:
	local[3]= fqv[8];
	local[4]= fqv[9];
	local[5]= fqv[50];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO7098,env,argv,local);
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)MAPCAR(ctx,2,local+6); /*mapcar*/
	local[6]= w;
	local[7]= local[1];
	local[8]= fqv[10];
	local[9]= local[2];
	local[10]= fqv[21];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[11]= (w)->c.cons.car;
	local[12]= fqv[68];
	local[13]= fqv[6];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)LIST(ctx,1,local+12); /*list*/
	ctx->vsp=local+12;
	w = cons(ctx,local[11],w);
	ctx->vsp=local+11;
	local[10]= cons(ctx,local[10],w);
	local[11]= local[0];
	local[12]= fqv[28];
	ctx->vsp=local+13;
	local[13]= makeclosure(codevec,quotevec,CLO7149,env,argv,local);
	local[14]= argv[0];
	ctx->vsp=local+15;
	w=(pointer)MAPCAN(ctx,2,local+13); /*mapcan*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[11];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)LIST(ctx,1,local+14); /*list*/
	ctx->vsp=local+14;
	local[13]= cons(ctx,local[13],w);
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	ctx->vsp=local+13;
	w=(pointer)APPEND(ctx,2,local+11); /*append*/
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
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	local[0]= w;
BLK7019:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO7098(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,2,local+0); /*list*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO7149(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.cdr==NIL) goto IF7217;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,2,local+0); /*list*/
	local[0]= w;
	goto IF7218;
IF7217:
	local[0]= NIL;
IF7218:
	w = local[0];
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*prog*/
static pointer F7247(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST7250:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[8];
	local[2]= fqv[9];
	local[3]= fqv[5];
	local[4]= argv[0];
	local[5]= fqv[10];
	local[6]= local[0];
	local[7]= NIL;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,2,local+6); /*append*/
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
BLK7248:
	ctx->vsp=local; return(local[0]);}

/*prog**/
static pointer F7292(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST7295:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[8];
	local[2]= fqv[9];
	local[3]= fqv[50];
	local[4]= argv[0];
	local[5]= fqv[10];
	local[6]= local[0];
	local[7]= NIL;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,2,local+6); /*append*/
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
BLK7293:
	ctx->vsp=local; return(local[0]);}

/*casebody*/
static pointer F4160casebody(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.cdr==NIL) goto IF7348;
	local[0]= fqv[6];
	w = argv[0];
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	goto IF7349;
IF7348:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
IF7349:
	w = local[0];
	local[0]= w;
BLK7338:
	ctx->vsp=local; return(local[0]);}

/*casehead*/
static pointer F4163casehead(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[1];
	if (!!iscons(w)) goto IF7383;
	local[0]= argv[1];
	w = fqv[71];
	if (memq(local[0],w)==NIL) goto IF7389;
	local[0]= T;
	goto IF7390;
IF7389:
	local[0]= fqv[72];
	local[1]= argv[0];
	local[2]= fqv[33];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,3,local+0); /*list*/
	local[0]= w;
IF7390:
	goto IF7384;
IF7383:
	local[0]= fqv[73];
	local[1]= argv[0];
	local[2]= fqv[33];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,2,local+2); /*list*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,3,local+0); /*list*/
	local[0]= w;
IF7384:
	w = local[0];
	local[0]= w;
BLK7371:
	ctx->vsp=local; return(local[0]);}

/*case1*/
static pointer F4166case1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[1];
	if (!!iscons(w)) goto IF7434;
	local[0]= NIL;
	goto IF7435;
IF7434:
	local[0]= fqv[21];
	local[1]= argv[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)F4163casehead(ctx,2,local+1); /*casehead*/
	local[1]= w;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	ctx->vsp=local+3;
	w=(pointer)F4160casebody(ctx,1,local+2); /*casebody*/
	local[2]= w;
	local[3]= argv[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
	ctx->vsp=local+5;
	w=(pointer)F4166case1(ctx,2,local+3); /*case1*/
	local[3]= w;
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,5,local+0); /*list*/
	local[0]= w;
IF7435:
	w = local[0];
	local[0]= w;
BLK7422:
	ctx->vsp=local; return(local[0]);}

/*case*/
static pointer F7473(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST7476:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[74];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= NIL;
	local[3]= fqv[5];
	local[4]= local[1];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,2,local+4); /*list*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	local[5]= local[1];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)F4166case1(ctx,2,local+5); /*case1*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,3,local+3); /*list*/
	local[0]= w;
BLK7474:
	ctx->vsp=local; return(local[0]);}

/*classcasehead*/
static pointer F4170classcasehead(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	w = fqv[75];
	if (memq(local[0],w)==NIL) goto IF7531;
	local[0]= T;
	goto IF7532;
IF7531:
	w = argv[1];
	if (!!iscons(w)) goto IF7542;
	local[0]= fqv[76];
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	goto IF7543;
IF7542:
	local[0]= fqv[77];
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO7563,env,argv,local);
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
IF7543:
IF7532:
	w = local[0];
	local[0]= w;
BLK7519:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO7563(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[76];
	local[1]= env->c.clo.env1[0];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*classcase1*/
static pointer F4173classcase1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[1];
	if (!!iscons(w)) goto IF7605;
	local[0]= NIL;
	goto IF7606;
IF7605:
	local[0]= fqv[21];
	local[1]= argv[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)F4170classcasehead(ctx,2,local+1); /*classcasehead*/
	local[1]= w;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	ctx->vsp=local+3;
	w=(pointer)F4160casebody(ctx,1,local+2); /*casebody*/
	local[2]= w;
	local[3]= argv[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
	ctx->vsp=local+5;
	w=(pointer)F4173classcase1(ctx,2,local+3); /*classcase1*/
	local[3]= w;
	local[4]= NIL;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,5,local+0); /*list*/
	local[0]= w;
IF7606:
	w = local[0];
	local[0]= w;
BLK7593:
	ctx->vsp=local; return(local[0]);}

/*classcase*/
static pointer F7644(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST7647:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[78];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
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
	local[4]= local[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F4173classcase1(ctx,2,local+4); /*classcase1*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[0]= w;
BLK7645:
	ctx->vsp=local; return(local[0]);}

/*string*/
static pointer F4176string(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!isstring(w)) goto IF7704;
	local[0]= argv[0];
	goto IF7705;
IF7704:
	w = argv[0];
	if (!issymbol(w)) goto IF7711;
	local[0]= *(ovafptr(argv[0],fqv[79]));
	ctx->vsp=local+1;
	w=(pointer)COPYSEQ(ctx,1,local+0); /*copy-seq*/
	local[0]= w;
	goto IF7712;
IF7711:
	w = argv[0];
	if (!isnum(w)) goto IF7721;
	local[0]= NIL;
	local[1]= fqv[80];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)XFORMAT(ctx,3,local+0); /*format*/
	local[0]= w;
	goto IF7722;
IF7721:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF7722:
IF7712:
IF7705:
	w = local[0];
	local[0]= w;
BLK7694:
	ctx->vsp=local; return(local[0]);}

/*alias*/
static pointer F4180alias(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)SYMFUNC(ctx,1,local+0); /*symbol-function*/
	local[0]= w;
	local[1]= w;
	w = argv[0];
	w->c.obj.iv[3] = local[1];
	w = local[0];
	local[0]= w;
BLK7736:
	ctx->vsp=local; return(local[0]);}

/*caaar*/
static pointer F4186caaar(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK7762:
	ctx->vsp=local; return(local[0]);}

/*caadr*/
static pointer F4189caadr(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK7786:
	ctx->vsp=local; return(local[0]);}

/*cadar*/
static pointer F4192cadar(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK7810:
	ctx->vsp=local; return(local[0]);}

/*cdaar*/
static pointer F4195cdaar(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	local[0]= w;
BLK7834:
	ctx->vsp=local; return(local[0]);}

/*cdadr*/
static pointer F4198cdadr(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	local[0]= w;
BLK7858:
	ctx->vsp=local; return(local[0]);}

/*cddar*/
static pointer F4201cddar(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	local[0]= w;
BLK7882:
	ctx->vsp=local; return(local[0]);}

/*cdddr*/
static pointer F4204cdddr(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	local[0]= w;
BLK7906:
	ctx->vsp=local; return(local[0]);}

/*fourth*/
static pointer F4210fourth(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK7936:
	ctx->vsp=local; return(local[0]);}

/*fifth*/
static pointer F4213fifth(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK7962:
	ctx->vsp=local; return(local[0]);}

/*sixth*/
static pointer F4216sixth(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F4204cdddr(ctx,1,local+0); /*cdddr*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK7990:
	ctx->vsp=local; return(local[0]);}

/*seventh*/
static pointer F4219seventh(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F4225cddddr(ctx,1,local+0); /*cddddr*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK8014:
	ctx->vsp=local; return(local[0]);}

/*eighth*/
static pointer F4222eighth(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F4225cddddr(ctx,1,local+0); /*cddddr*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)F4228cadddr(ctx,1,local+0); /*cadddr*/
	local[0]= w;
BLK8038:
	ctx->vsp=local; return(local[0]);}

/*cddddr*/
static pointer F4225cddddr(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	local[0]= w;
BLK8055:
	ctx->vsp=local; return(local[0]);}

/*cadddr*/
static pointer F4228cadddr(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK8081:
	ctx->vsp=local; return(local[0]);}

/*caaddr*/
static pointer F4231caaddr(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK8107:
	ctx->vsp=local; return(local[0]);}

/*cdaddr*/
static pointer F4234cdaddr(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	local[0]= w;
BLK8133:
	ctx->vsp=local; return(local[0]);}

/*caddddr*/
static pointer F4237caddddr(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F4204cdddr(ctx,1,local+0); /*cdddr*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK8159:
	ctx->vsp=local; return(local[0]);}

/*flatten*/
static pointer F4240flatten(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	if (n>=2) { local[0]=(argv[1]); goto ENT8184;}
	local[0]= NIL;
ENT8184:
ENT8183:
	if (n>2) maerror();
	if (argv[0]!=NIL) goto CON8200;
	local[1]= local[0];
	goto CON8198;
CON8200:
	w = argv[0];
	if (!!iscons(w)) goto CON8206;
	local[1]= argv[0];
	w = local[0];
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto CON8198;
CON8206:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)F4240flatten(ctx,2,local+2); /*flatten*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)F4240flatten(ctx,2,local+1); /*flatten*/
	local[1]= w;
	goto CON8198;
CON8216:
	local[1]= NIL;
CON8198:
	w = local[1];
	local[0]= w;
BLK8181:
	ctx->vsp=local; return(local[0]);}

/*list-insert*/
static pointer F4243list_insert(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	if (argv[2]!=NIL) goto CON8254;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto CON8252;
CON8254:
	local[0]= argv[1];
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)GREQP(ctx,2,local+0); /*>=*/
	if (w==NIL) goto CON8262;
	local[0]= argv[2];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	local[0]= w;
	goto CON8252;
CON8262:
	local[0]= argv[1];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	if (w==NIL) goto CON8276;
	local[0]= argv[0];
	w = argv[2];
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	goto CON8252;
CON8276:
	local[0]= argv[0];
	local[1]= argv[1];
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)NTHCDR(ctx,2,local+1); /*nthcdr*/
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)SUB1(ctx,1,local+1); /*1-*/
	local[1]= w;
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)NTHCDR(ctx,2,local+1); /*nthcdr*/
	local[1]= w;
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)RPLACD(ctx,2,local+1); /*rplacd*/
	w = argv[2];
	local[0]= w;
	goto CON8252;
CON8286:
	local[0]= NIL;
CON8252:
	w = local[0];
	local[0]= w;
BLK8238:
	ctx->vsp=local; return(local[0]);}

/*list-delete*/
static pointer F4246list_delete(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	if (w==NIL) goto IF8335;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	local[0]= argv[0];
	goto IF8336;
IF8335:
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)SUB1(ctx,1,local+0); /*1-*/
	local[0]= w;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)NTHCDR(ctx,2,local+0); /*nthcdr*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)ADD1(ctx,1,local+1); /*1+*/
	local[1]= w;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)NTHCDR(ctx,2,local+1); /*nthcdr*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)RPLACD(ctx,2,local+0); /*rplacd*/
	local[0]= w;
IF8336:
	w = argv[0];
	local[0]= w;
BLK8323:
	ctx->vsp=local; return(local[0]);}

/*adjoin*/
static pointer F4249adjoin(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[81], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY8383;
	local[0] = (pointer)get_sym_func(fqv[72]);
KEY8383:
	if (n & (1<<1)) goto KEY8390;
	local[1] = NIL;
KEY8390:
	if (n & (1<<2)) goto KEY8395;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY8395:
	local[3]= argv[0];
	local[4]= argv[1];
	local[5]= fqv[23];
	local[6]= local[0];
	local[7]= fqv[24];
	local[8]= local[1];
	local[9]= fqv[25];
	local[10]= local[2];
	ctx->vsp=local+11;
	w=(pointer)F4285member(ctx,8,local+3); /*member*/
	if (w==NIL) goto IF8406;
	local[3]= argv[1];
	goto IF8407;
IF8406:
	local[3]= argv[0];
	w = argv[1];
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
IF8407:
	w = local[3];
	local[0]= w;
BLK8370:
	ctx->vsp=local; return(local[0]);}

/*union*/
static pointer F4252union(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[83], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY8445;
	local[0] = (pointer)get_sym_func(fqv[72]);
KEY8445:
	if (n & (1<<1)) goto KEY8452;
	local[1] = NIL;
KEY8452:
	if (n & (1<<2)) goto KEY8457;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY8457:
	local[3]= NIL;
	local[4]= NIL;
	local[5]= argv[0];
WHL8494:
	if (local[5]==NIL) goto WHX8495;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[2];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,2,local+6); /*funcall*/
	local[6]= w;
	local[7]= local[3];
	local[8]= fqv[23];
	local[9]= local[0];
	local[10]= fqv[24];
	local[11]= local[1];
	local[12]= fqv[25];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)F4285member(ctx,8,local+6); /*member*/
	if (w!=NIL) goto IF8544;
	local[6]= local[4];
	w = local[3];
	ctx->vsp=local+7;
	local[3] = cons(ctx,local[6],w);
	local[6]= local[3];
	goto IF8545;
IF8544:
	local[6]= NIL;
IF8545:
	goto WHL8494;
WHX8495:
	local[6]= NIL;
BLK8496:
	w = NIL;
	local[4]= NIL;
	local[5]= argv[1];
WHL8599:
	if (local[5]==NIL) goto WHX8600;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[2];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,2,local+6); /*funcall*/
	local[6]= w;
	local[7]= local[3];
	local[8]= fqv[23];
	local[9]= local[0];
	local[10]= fqv[24];
	local[11]= local[1];
	local[12]= fqv[25];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)F4285member(ctx,8,local+6); /*member*/
	if (w!=NIL) goto IF8649;
	local[6]= local[4];
	w = local[3];
	ctx->vsp=local+7;
	local[3] = cons(ctx,local[6],w);
	local[6]= local[3];
	goto IF8650;
IF8649:
	local[6]= NIL;
IF8650:
	goto WHL8599;
WHX8600:
	local[6]= NIL;
BLK8601:
	w = NIL;
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)REVERSE(ctx,1,local+4); /*reverse*/
	local[0]= w;
BLK8432:
	ctx->vsp=local; return(local[0]);}

/*intersection*/
static pointer F4255intersection(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[84], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY8706;
	local[0] = (pointer)get_sym_func(fqv[72]);
KEY8706:
	if (n & (1<<1)) goto KEY8713;
	local[1] = NIL;
KEY8713:
	if (n & (1<<2)) goto KEY8718;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY8718:
	local[3]= NIL;
	local[4]= NIL;
	local[5]= argv[0];
WHL8755:
	if (local[5]==NIL) goto WHX8756;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[2];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,2,local+6); /*funcall*/
	local[6]= w;
	local[7]= argv[1];
	local[8]= fqv[23];
	local[9]= local[0];
	local[10]= fqv[24];
	local[11]= local[1];
	local[12]= fqv[25];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)F4285member(ctx,8,local+6); /*member*/
	if (w==NIL) goto IF8804;
	local[6]= local[4];
	w = local[3];
	ctx->vsp=local+7;
	local[3] = cons(ctx,local[6],w);
	local[6]= local[3];
	goto IF8805;
IF8804:
	local[6]= NIL;
IF8805:
	goto WHL8755;
WHX8756:
	local[6]= NIL;
BLK8757:
	w = NIL;
	w = local[3];
	local[0]= w;
BLK8693:
	ctx->vsp=local; return(local[0]);}

/*set-difference*/
static pointer F4258set_difference(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[85], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY8857;
	local[0] = (pointer)get_sym_func(fqv[72]);
KEY8857:
	if (n & (1<<1)) goto KEY8864;
	local[1] = NIL;
KEY8864:
	if (n & (1<<2)) goto KEY8869;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY8869:
	local[3]= NIL;
	local[4]= NIL;
	local[5]= argv[0];
WHL8906:
	if (local[5]==NIL) goto WHX8907;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[2];
	local[7]= local[4];
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,2,local+6); /*funcall*/
	local[6]= w;
	local[7]= argv[1];
	local[8]= fqv[23];
	local[9]= local[0];
	local[10]= fqv[24];
	local[11]= local[1];
	local[12]= fqv[25];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)F4285member(ctx,8,local+6); /*member*/
	if (w!=NIL) goto IF8956;
	local[6]= local[4];
	w = local[3];
	ctx->vsp=local+7;
	local[3] = cons(ctx,local[6],w);
	local[6]= local[3];
	goto IF8957;
IF8956:
	local[6]= NIL;
IF8957:
	goto WHL8906;
WHX8907:
	local[6]= NIL;
BLK8908:
	w = NIL;
	local[4]= local[3];
	ctx->vsp=local+5;
	w=(pointer)NREVERSE(ctx,1,local+4); /*nreverse*/
	local[0]= w;
BLK8844:
	ctx->vsp=local; return(local[0]);}

/*set-exclusive-or*/
static pointer F4261set_exclusive_or(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[86], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY9014;
	local[0] = (pointer)get_sym_func(fqv[72]);
KEY9014:
	if (n & (1<<1)) goto KEY9021;
	local[1] = NIL;
KEY9021:
	if (n & (1<<2)) goto KEY9026;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY9026:
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= argv[0];
WHL9065:
	if (local[6]==NIL) goto WHX9066;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= local[2];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)FUNCALL(ctx,2,local+7); /*funcall*/
	local[5] = w;
	local[7]= local[5];
	local[8]= argv[1];
	local[9]= fqv[23];
	local[10]= local[0];
	local[11]= fqv[24];
	local[12]= local[1];
	local[13]= fqv[25];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)F4285member(ctx,8,local+7); /*member*/
	if (w!=NIL) goto IF9125;
	local[7]= local[5];
	w = local[3];
	ctx->vsp=local+8;
	local[3] = cons(ctx,local[7],w);
	local[7]= local[3];
	goto IF9126;
IF9125:
	local[7]= NIL;
IF9126:
	goto WHL9065;
WHX9066:
	local[7]= NIL;
BLK9067:
	w = NIL;
	local[5]= NIL;
	local[6]= argv[1];
WHL9178:
	if (local[6]==NIL) goto WHX9179;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[6];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	w = local[7];
	local[5] = w;
	local[7]= local[2];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)FUNCALL(ctx,2,local+7); /*funcall*/
	local[5] = w;
	local[7]= local[5];
	local[8]= argv[0];
	local[9]= fqv[23];
	local[10]= local[0];
	local[11]= fqv[24];
	local[12]= local[1];
	local[13]= fqv[25];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)F4285member(ctx,8,local+7); /*member*/
	if (w!=NIL) goto IF9238;
	local[7]= local[5];
	w = local[4];
	ctx->vsp=local+8;
	local[4] = cons(ctx,local[7],w);
	local[7]= local[4];
	goto IF9239;
IF9238:
	local[7]= NIL;
IF9239:
	goto WHL9178;
WHX9179:
	local[7]= NIL;
BLK9180:
	w = NIL;
	local[5]= local[3];
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)NCONC(ctx,2,local+5); /*nconc*/
	local[0]= w;
BLK9001:
	ctx->vsp=local; return(local[0]);}

/*rotate-list*/
static pointer F4264rotate_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)LIST(ctx,1,local+1); /*list*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)APPEND(ctx,2,local+0); /*append*/
	local[0]= w;
BLK9281:
	ctx->vsp=local; return(local[0]);}

/*last*/
static pointer F4267last(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
WHL9317:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	if (!iscons(w)) goto WHX9318;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	goto WHL9317;
WHX9318:
	local[0]= NIL;
BLK9319:
	w = argv[0];
	local[0]= w;
BLK9307:
	ctx->vsp=local; return(local[0]);}

/*copy-tree*/
static pointer F4270copy_tree(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= T;
	local[1]= T;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SUBST(ctx,3,local+0); /*subst*/
	local[0]= w;
BLK9344:
	ctx->vsp=local; return(local[0]);}

/*copy-list*/
static pointer F4273copy_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)REVERSE(ctx,1,local+0); /*reverse*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)NREVERSE(ctx,1,local+0); /*nreverse*/
	local[0]= w;
BLK9359:
	ctx->vsp=local; return(local[0]);}

/*nreconc*/
static pointer F4276nreconc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)NREVERSE(ctx,1,local+0); /*nreverse*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)NCONC(ctx,2,local+0); /*nconc*/
	local[0]= w;
BLK9376:
	ctx->vsp=local; return(local[0]);}

/*rassoc*/
static pointer F4279rassoc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[1];
WHL9425:
	if (local[1]==NIL) goto WHX9426;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1] = (w)->c.cons.cdr;
	w = local[2];
	local[0] = w;
	local[2]= argv[0];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	ctx->vsp=local+4;
	w=(pointer)EQUAL(ctx,2,local+2); /*equal*/
	if (w==NIL) goto IF9474;
	w = local[0];
	ctx->vsp=local+2;
	local[0]=w;
	goto BLK9396;
	goto IF9475;
IF9474:
	local[2]= NIL;
IF9475:
	goto WHL9425;
WHX9426:
	local[2]= NIL;
BLK9427:
	w = NIL;
	local[0]= w;
BLK9396:
	ctx->vsp=local; return(local[0]);}

/*acons*/
static pointer F4282acons(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	w = argv[1];
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	w = argv[2];
	ctx->vsp=local+1;
	w = cons(ctx,local[0],w);
	local[0]= w;
BLK9496:
	ctx->vsp=local; return(local[0]);}

/*member*/
static pointer F4285member(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[87], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY9535;
	local[0] = NIL;
KEY9535:
	if (n & (1<<1)) goto KEY9540;
	local[1] = NIL;
KEY9540:
	if (n & (1<<2)) goto KEY9545;
	local[2] = NIL;
KEY9545:
	local[3]= argv[0];
	local[4]= argv[1];
	local[5]= local[0];
	local[6]= local[1];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)SUPERMEMBER(ctx,5,local+3); /*supermember*/
	local[0]= w;
BLK9522:
	ctx->vsp=local; return(local[0]);}

/*assoc*/
static pointer F4288assoc(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[88], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY9576;
	local[0] = NIL;
KEY9576:
	if (n & (1<<1)) goto KEY9581;
	local[1] = NIL;
KEY9581:
	if (n & (1<<2)) goto KEY9586;
	local[2] = NIL;
KEY9586:
	local[3]= argv[0];
	local[4]= argv[1];
	local[5]= local[0];
	local[6]= local[1];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)SUPERASSOC(ctx,5,local+3); /*superassoc*/
	local[0]= w;
BLK9563:
	ctx->vsp=local; return(local[0]);}

/*subsetp*/
static pointer F4291subsetp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[89], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY9617;
	local[0] = NIL;
KEY9617:
	if (n & (1<<1)) goto KEY9622;
	local[1] = NIL;
KEY9622:
	if (n & (1<<2)) goto KEY9627;
	local[2] = NIL;
KEY9627:
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO9637,env,argv,local);
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)F4493every(ctx,2,local+3); /*every*/
	local[0]= w;
BLK9604:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO9637(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env1[1];
	local[2]= fqv[25];
	local[3]= env->c.clo.env2[0];
	local[4]= fqv[23];
	local[5]= env->c.clo.env2[1];
	local[6]= fqv[24];
	local[7]= env->c.clo.env2[2];
	ctx->vsp=local+8;
	w=(pointer)F4285member(ctx,8,local+0); /*member*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*maplist*/
static pointer F4294maplist(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST9669:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= NIL;
	local[2]= NIL;
	if (local[0]==NIL) goto IF9686;
	local[3]= NIL;
	local[4]= NIL;
WHL9703:
	if (argv[1]==NIL) goto WHX9704;
	local[3] = NIL;
	local[5]= argv[1];
	w = local[3];
	ctx->vsp=local+6;
	local[3] = cons(ctx,local[5],w);
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	local[4] = local[0];
WHL9747:
	if (local[4]==NIL) goto WHX9748;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w = local[3];
	ctx->vsp=local+6;
	local[3] = cons(ctx,local[5],w);
	local[5]= local[4];
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.cdr;
	ctx->vsp=local+7;
	w=(pointer)RPLACA2(ctx,2,local+5); /*rplaca2*/
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	goto WHL9747;
WHX9748:
	local[5]= NIL;
BLK9749:
	local[5]= argv[0];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)NREVERSE(ctx,1,local+6); /*nreverse*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)APPLY(ctx,2,local+5); /*apply*/
	local[5]= w;
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	goto WHL9703;
WHX9704:
	local[5]= NIL;
BLK9705:
	w = local[5];
	local[3]= w;
	goto IF9687;
IF9686:
WHL9811:
	if (argv[1]==NIL) goto WHX9812;
	local[3]= argv[0];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)FUNCALL(ctx,2,local+3); /*funcall*/
	local[3]= w;
	w = local[2];
	ctx->vsp=local+4;
	local[2] = cons(ctx,local[3],w);
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	goto WHL9811;
WHX9812:
	local[3]= NIL;
BLK9813:
IF9687:
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)NREVERSE(ctx,1,local+3); /*nreverse*/
	local[0]= w;
BLK9667:
	ctx->vsp=local; return(local[0]);}

/*mapcon*/
static pointer F4297mapcon(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST9852:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= NIL;
	local[2]= NIL;
	if (local[0]==NIL) goto IF9869;
	local[3]= NIL;
	local[4]= NIL;
WHL9886:
	if (argv[1]==NIL) goto WHX9887;
	local[3] = NIL;
	local[5]= argv[1];
	w = local[3];
	ctx->vsp=local+6;
	local[3] = cons(ctx,local[5],w);
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	local[4] = local[0];
WHL9930:
	if (local[4]==NIL) goto WHX9931;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w = local[3];
	ctx->vsp=local+6;
	local[3] = cons(ctx,local[5],w);
	local[5]= local[4];
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.car;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.cdr;
	ctx->vsp=local+7;
	w=(pointer)RPLACA2(ctx,2,local+5); /*rplaca2*/
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	goto WHL9930;
WHX9931:
	local[5]= NIL;
BLK9932:
	local[5]= argv[0];
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)NREVERSE(ctx,1,local+6); /*nreverse*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)APPLY(ctx,2,local+5); /*apply*/
	local[5]= w;
	local[6]= local[2];
	ctx->vsp=local+7;
	w=(pointer)NCONC(ctx,2,local+5); /*nconc*/
	local[2] = w;
	goto WHL9886;
WHX9887:
	local[5]= NIL;
BLK9888:
	w = local[5];
	local[3]= w;
	goto IF9870;
IF9869:
WHL9992:
	if (argv[1]==NIL) goto WHX9993;
	local[3]= argv[0];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)FUNCALL(ctx,2,local+3); /*funcall*/
	local[3]= w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)NCONC(ctx,2,local+3); /*nconc*/
	local[2] = w;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	goto WHL9992;
WHX9993:
	local[3]= NIL;
BLK9994:
IF9870:
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)NREVERSE(ctx,1,local+3); /*nreverse*/
	local[0]= w;
BLK9850:
	ctx->vsp=local; return(local[0]);}

/*find*/
static pointer F4300find(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[90], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10044;
	local[0] = makeint((eusinteger_t)0L);
KEY10044:
	if (n & (1<<1)) goto KEY10049;
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[1] = w;
KEY10049:
	if (n & (1<<2)) goto KEY10057;
	local[2] = (pointer)get_sym_func(fqv[72]);
KEY10057:
	if (n & (1<<3)) goto KEY10064;
	local[3] = NIL;
KEY10064:
	if (n & (1<<4)) goto KEY10069;
	local[4] = (pointer)get_sym_func(fqv[82]);
KEY10069:
	local[5]= argv[0];
	local[6]= argv[1];
	local[7]= local[2];
	local[8]= local[3];
	local[9]= local[4];
	local[10]= NIL;
	local[11]= NIL;
	local[12]= local[0];
	local[13]= local[1];
	ctx->vsp=local+14;
	w=(pointer)FIND(ctx,9,local+5); /*system::raw-find*/
	local[0]= w;
BLK10029:
	ctx->vsp=local; return(local[0]);}

/*find-if*/
static pointer F4303find_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[91], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10104;
	local[0] = makeint((eusinteger_t)0L);
KEY10104:
	if (n & (1<<1)) goto KEY10109;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[1] = w;
KEY10109:
	if (n & (1<<2)) goto KEY10117;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY10117:
	local[3]= NIL;
	local[4]= argv[1];
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[2];
	local[8]= argv[0];
	local[9]= NIL;
	local[10]= local[0];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)FIND(ctx,9,local+3); /*system::raw-find*/
	local[0]= w;
BLK10091:
	ctx->vsp=local; return(local[0]);}

/*find-if-not*/
static pointer F4306find_if_not(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[92], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10150;
	local[0] = makeint((eusinteger_t)0L);
KEY10150:
	if (n & (1<<1)) goto KEY10155;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[1] = w;
KEY10155:
	if (n & (1<<2)) goto KEY10163;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY10163:
	local[3]= NIL;
	local[4]= argv[1];
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[2];
	local[8]= NIL;
	local[9]= argv[0];
	local[10]= local[0];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)FIND(ctx,9,local+3); /*system::raw-find*/
	local[0]= w;
BLK10137:
	ctx->vsp=local; return(local[0]);}

/*position*/
static pointer F4309position(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[93], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10199;
	local[0] = makeint((eusinteger_t)0L);
KEY10199:
	if (n & (1<<1)) goto KEY10204;
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[1] = w;
KEY10204:
	if (n & (1<<2)) goto KEY10212;
	local[2] = makeint((eusinteger_t)1L);
KEY10212:
	if (n & (1<<3)) goto KEY10217;
	local[3] = (pointer)get_sym_func(fqv[72]);
KEY10217:
	if (n & (1<<4)) goto KEY10224;
	local[4] = NIL;
KEY10224:
	if (n & (1<<5)) goto KEY10229;
	local[5] = (pointer)get_sym_func(fqv[82]);
KEY10229:
	local[6]= argv[0];
	local[7]= argv[1];
	local[8]= local[3];
	local[9]= local[4];
	local[10]= local[5];
	local[11]= NIL;
	local[12]= NIL;
	local[13]= local[0];
	local[14]= local[1];
	local[15]= local[2];
	ctx->vsp=local+16;
	w=(pointer)POSITION(ctx,10,local+6); /*system::raw-position*/
	local[0]= w;
BLK10183:
	ctx->vsp=local; return(local[0]);}

/*position-if*/
static pointer F4312position_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[94], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10266;
	local[0] = makeint((eusinteger_t)0L);
KEY10266:
	if (n & (1<<1)) goto KEY10271;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY10271:
	if (n & (1<<2)) goto KEY10279;
	local[2] = makeint((eusinteger_t)1L);
KEY10279:
	if (n & (1<<3)) goto KEY10284;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY10284:
	local[4]= NIL;
	local[5]= argv[1];
	local[6]= NIL;
	local[7]= NIL;
	local[8]= local[3];
	local[9]= argv[0];
	local[10]= NIL;
	local[11]= local[0];
	local[12]= local[1];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)POSITION(ctx,10,local+4); /*system::raw-position*/
	local[0]= w;
BLK10252:
	ctx->vsp=local; return(local[0]);}

/*position-if-not*/
static pointer F4315position_if_not(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[95], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10319;
	local[0] = makeint((eusinteger_t)0L);
KEY10319:
	if (n & (1<<1)) goto KEY10324;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY10324:
	if (n & (1<<2)) goto KEY10332;
	local[2] = makeint((eusinteger_t)1L);
KEY10332:
	if (n & (1<<3)) goto KEY10337;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY10337:
	local[4]= NIL;
	local[5]= argv[1];
	local[6]= NIL;
	local[7]= NIL;
	local[8]= local[3];
	local[9]= NIL;
	local[10]= argv[0];
	local[11]= local[0];
	local[12]= local[1];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)POSITION(ctx,10,local+4); /*system::raw-position*/
	local[0]= w;
BLK10305:
	ctx->vsp=local; return(local[0]);}

/*count*/
static pointer F4318count(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[96], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10373;
	local[0] = makeint((eusinteger_t)0L);
KEY10373:
	if (n & (1<<1)) goto KEY10378;
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[1] = w;
KEY10378:
	if (n & (1<<2)) goto KEY10386;
	local[2] = (pointer)get_sym_func(fqv[72]);
KEY10386:
	if (n & (1<<3)) goto KEY10393;
	local[3] = NIL;
KEY10393:
	if (n & (1<<4)) goto KEY10398;
	local[4] = (pointer)get_sym_func(fqv[82]);
KEY10398:
	local[5]= argv[0];
	local[6]= argv[1];
	local[7]= local[2];
	local[8]= local[3];
	local[9]= local[4];
	local[10]= NIL;
	local[11]= NIL;
	local[12]= local[0];
	local[13]= local[1];
	ctx->vsp=local+14;
	w=(pointer)COUNT(ctx,9,local+5); /*system::raw-count*/
	local[0]= w;
BLK10358:
	ctx->vsp=local; return(local[0]);}

/*count-if*/
static pointer F4321count_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[97], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10433;
	local[0] = makeint((eusinteger_t)0L);
KEY10433:
	if (n & (1<<1)) goto KEY10438;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[1] = w;
KEY10438:
	if (n & (1<<2)) goto KEY10446;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY10446:
	local[3]= NIL;
	local[4]= argv[1];
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[2];
	local[8]= argv[0];
	local[9]= NIL;
	local[10]= local[0];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)COUNT(ctx,9,local+3); /*system::raw-count*/
	local[0]= w;
BLK10420:
	ctx->vsp=local; return(local[0]);}

/*count-if-not*/
static pointer F4324count_if_not(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[98], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10479;
	local[0] = makeint((eusinteger_t)0L);
KEY10479:
	if (n & (1<<1)) goto KEY10484;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[1] = w;
KEY10484:
	if (n & (1<<2)) goto KEY10492;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY10492:
	local[3]= NIL;
	local[4]= argv[1];
	local[5]= NIL;
	local[6]= NIL;
	local[7]= local[2];
	local[8]= NIL;
	local[9]= argv[0];
	local[10]= local[0];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)COUNT(ctx,9,local+3); /*system::raw-count*/
	local[0]= w;
BLK10466:
	ctx->vsp=local; return(local[0]);}

/*member-if*/
static pointer F4327member_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[99], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10523;
	local[0] = (pointer)get_sym_func(fqv[82]);
KEY10523:
WHL10534:
	if (argv[1]==NIL) goto WHX10535;
	local[1]= argv[0];
	local[2]= local[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)FUNCALL(ctx,2,local+2); /*funcall*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FUNCALL(ctx,2,local+1); /*funcall*/
	if (w==NIL) goto IF10542;
	w = argv[1];
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK10512;
	goto IF10543;
IF10542:
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	local[1]= argv[1];
IF10543:
	goto WHL10534;
WHX10535:
	local[1]= NIL;
BLK10536:
	w = local[1];
	local[0]= w;
BLK10512:
	ctx->vsp=local; return(local[0]);}

/*member-if-not*/
static pointer F4330member_if_not(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[100], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY10585;
	local[0] = (pointer)get_sym_func(fqv[82]);
KEY10585:
WHL10596:
	if (argv[1]==NIL) goto WHX10597;
	local[1]= argv[0];
	local[2]= local[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)FUNCALL(ctx,2,local+2); /*funcall*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FUNCALL(ctx,2,local+1); /*funcall*/
	if (w!=NIL) goto IF10604;
	w = argv[1];
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK10574;
	goto IF10605;
IF10604:
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	local[1]= argv[1];
IF10605:
	goto WHL10596;
WHX10597:
	local[1]= NIL;
BLK10598:
	w = local[1];
	local[0]= w;
BLK10574:
	ctx->vsp=local; return(local[0]);}

/*collect-if*/
static pointer F4333collect_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[1];
WHL10669:
	if (local[3]==NIL) goto WHX10670;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[3];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3] = (w)->c.cons.cdr;
	w = local[4];
	local[2] = w;
	local[4]= argv[0];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)FUNCALL(ctx,2,local+4); /*funcall*/
	if (w==NIL) goto IF10718;
	local[4]= local[2];
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	local[4]= local[1];
	goto IF10719;
IF10718:
	local[4]= NIL;
IF10719:
	goto WHL10669;
WHX10670:
	local[4]= NIL;
BLK10671:
	w = NIL;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)NREVERSE(ctx,1,local+2); /*nreverse*/
	local[0]= w;
BLK10636:
	ctx->vsp=local; return(local[0]);}

/*collect-instances*/
static pointer F4336collect_instances(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	ctx->vsp=local+0;
	local[0]= makeclosure(codevec,quotevec,CLO10760,env,argv,local);
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)F4240flatten(ctx,1,local+1); /*flatten*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)F4333collect_if(ctx,2,local+0); /*collect-if*/
	local[0]= w;
BLK10747:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO10760(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env1[0];
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*pairlis*/
static pointer F4339pairlis(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT10786;}
	local[0]= NIL;
ENT10786:
ENT10785:
	if (n>3) maerror();
	if (argv[0]==NIL) goto IF10802;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)F4339pairlis(ctx,3,local+2); /*pairlis*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto IF10803;
IF10802:
	local[1]= local[0];
IF10803:
	w = local[1];
	local[0]= w;
BLK10783:
	ctx->vsp=local; return(local[0]);}

/*transpose-list*/
static pointer F4342transpose_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= NIL;
	local[1]= makeint((eusinteger_t)0L);
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
WHL10887:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX10888;
	ctx->vsp=local+3;
	local[3]= makeclosure(codevec,quotevec,CLO10901,env,argv,local);
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,2,local+3); /*mapcar*/
	local[3]= w;
	w = local[0];
	ctx->vsp=local+4;
	local[0] = cons(ctx,local[3],w);
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL10887;
WHX10888:
	local[3]= NIL;
BLK10889:
	w = NIL;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)NREVERSE(ctx,1,local+1); /*nreverse*/
	local[0]= w;
BLK10839:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO10901(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= env->c.clo.env2[1];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)NTH(ctx,2,local+0); /*nth*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*make-list*/
static pointer F4345make_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[101], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY10954;
	local[0] = NIL;
KEY10954:
	local[1]= NIL;
	w = argv[0];
	if (isint(w)) goto IF10973;
	local[2]= fqv[102];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto IF10974;
IF10973:
	local[2]= NIL;
IF10974:
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[0];
WHL11008:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX11009;
	local[4]= local[0];
	w = local[1];
	ctx->vsp=local+5;
	local[1] = cons(ctx,local[4],w);
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL11008;
WHX11009:
	local[4]= NIL;
BLK11010:
	w = local[1];
	local[0]= w;
BLK10945:
	ctx->vsp=local; return(local[0]);}

/*make-sequence*/
static pointer F4348make_sequence(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[103], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11055;
	local[0] = NIL;
KEY11055:
	local[1]= argv[0];
	w = fqv[104];
	if (memq(local[1],w)!=NIL) goto OR11066;
	local[1]= argv[0];
	if (loadglobal(fqv[19])==local[1]) goto OR11066;
	goto IF11064;
OR11066:
	local[1]= argv[1];
	local[2]= fqv[105];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)F4345make_list(ctx,3,local+1); /*make-list*/
	local[1]= w;
	goto IF11065;
IF11064:
	local[1]= argv[1];
	local[2]= fqv[106];
	local[3]= argv[0];
	local[4]= fqv[105];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(*ftab[0])(ctx,5,local+1,&ftab[0],fqv[107]); /*make-array*/
	local[1]= w;
IF11065:
	w = local[1];
	local[0]= w;
BLK11044:
	ctx->vsp=local; return(local[0]);}

/*fill*/
static pointer F4351fill(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[108], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11112;
	local[0] = makeint((eusinteger_t)0L);
KEY11112:
	if (n & (1<<1)) goto KEY11117;
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[1] = w;
KEY11117:
	local[2]= argv[0];
	local[3]= argv[1];
	local[4]= local[0];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)FILL(ctx,4,local+2); /*system::raw-fill*/
	local[0]= w;
BLK11100:
	ctx->vsp=local; return(local[0]);}

/*replace*/
static pointer F4354replace(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[109], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11151;
	local[0] = makeint((eusinteger_t)0L);
KEY11151:
	if (n & (1<<1)) goto KEY11156;
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY11156:
	if (n & (1<<2)) goto KEY11164;
	local[2] = makeint((eusinteger_t)0L);
KEY11164:
	if (n & (1<<3)) goto KEY11169;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[3] = w;
KEY11169:
	local[4]= argv[0];
	local[5]= local[1];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[5]= w;
	local[6]= local[3];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)MINUS(ctx,2,local+6); /*-*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)MIN(ctx,2,local+5); /*min*/
	local[5]= w;
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LISTP(ctx,1,local+6); /*listp*/
	if (w==NIL) goto CON11211;
	local[6]= local[0];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)NTHCDR(ctx,2,local+6); /*nthcdr*/
	argv[0] = w;
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)LISTP(ctx,1,local+6); /*listp*/
	if (w==NIL) goto CON11231;
	local[6]= local[2];
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)NTHCDR(ctx,2,local+6); /*nthcdr*/
	argv[1] = w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[5];
WHL11272:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX11273;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	w = local[8];
	local[8]= w;
	local[9]= w;
	*(ovafptr(argv[0],fqv[16])) = local[9];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[8];
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL11272;
WHX11273:
	local[8]= NIL;
BLK11274:
	w = NIL;
	local[6]= w;
	goto CON11229;
CON11231:
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[5];
WHL11394:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX11395;
	local[8]= argv[1];
	local[9]= local[2];
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,2,local+8); /*aref*/
	local[8]= w;
	local[9]= w;
	*(ovafptr(argv[0],fqv[16])) = local[9];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[2] = w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[0] = (w)->c.cons.cdr;
	w = local[8];
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL11394;
WHX11395:
	local[8]= NIL;
BLK11396:
	w = NIL;
	local[6]= w;
	goto CON11229;
CON11367:
	local[6]= NIL;
CON11229:
	goto CON11209;
CON11211:
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)LISTP(ctx,1,local+6); /*listp*/
	if (w==NIL) goto CON11468;
	local[6]= local[2];
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)NTHCDR(ctx,2,local+6); /*nthcdr*/
	argv[1] = w;
	local[6]= makeint((eusinteger_t)0L);
	local[7]= local[5];
WHL11509:
	local[8]= local[6];
	w = local[7];
	if ((eusinteger_t)local[8] >= (eusinteger_t)w) goto WHX11510;
	local[8]= argv[0];
	local[9]= local[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	w = local[10];
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)ASET(ctx,3,local+8); /*aset*/
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[0] = w;
	local[8]= local[6];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[6] = w;
	goto WHL11509;
WHX11510:
	local[8]= NIL;
BLK11511:
	w = NIL;
	local[6]= w;
	goto CON11209;
CON11468:
	local[6]= argv[0];
	local[7]= argv[1];
	local[8]= local[0];
	local[9]= local[1];
	local[10]= local[2];
	local[11]= local[3];
	ctx->vsp=local+12;
	w=(pointer)VECREPLACE(ctx,6,local+6); /*system::vector-replace*/
	local[6]= w;
	goto CON11209;
CON11578:
	local[6]= NIL;
CON11209:
	w = local[4];
	local[0]= w;
BLK11137:
	ctx->vsp=local; return(local[0]);}

/*remove*/
static pointer F4357remove(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[110], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11612;
	local[0] = makeint((eusinteger_t)0L);
KEY11612:
	if (n & (1<<1)) goto KEY11617;
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[1] = w;
KEY11617:
	if (n & (1<<2)) goto KEY11625;
	local[2] = (pointer)get_sym_func(fqv[72]);
KEY11625:
	if (n & (1<<3)) goto KEY11632;
	local[3] = NIL;
KEY11632:
	if (n & (1<<4)) goto KEY11637;
	local[4] = makeint((eusinteger_t)1000000L);
KEY11637:
	if (n & (1<<5)) goto KEY11642;
	local[5] = (pointer)get_sym_func(fqv[82]);
KEY11642:
	local[6]= argv[0];
	local[7]= argv[1];
	local[8]= local[2];
	local[9]= local[3];
	local[10]= local[5];
	local[11]= NIL;
	local[12]= NIL;
	local[13]= local[0];
	local[14]= local[1];
	local[15]= local[4];
	ctx->vsp=local+16;
	w=(pointer)UNIREMOVE(ctx,10,local+6); /*system::universal-remove*/
	local[0]= w;
BLK11596:
	ctx->vsp=local; return(local[0]);}

/*remove-if*/
static pointer F4360remove_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[111], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11679;
	local[0] = makeint((eusinteger_t)0L);
KEY11679:
	if (n & (1<<1)) goto KEY11684;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY11684:
	if (n & (1<<2)) goto KEY11692;
	local[2] = makeint((eusinteger_t)1000000L);
KEY11692:
	if (n & (1<<3)) goto KEY11697;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY11697:
	local[4]= NIL;
	local[5]= argv[1];
	local[6]= NIL;
	local[7]= NIL;
	local[8]= local[3];
	local[9]= argv[0];
	local[10]= NIL;
	local[11]= local[0];
	local[12]= local[1];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)UNIREMOVE(ctx,10,local+4); /*system::universal-remove*/
	local[0]= w;
BLK11665:
	ctx->vsp=local; return(local[0]);}

/*remove-if-not*/
static pointer F4363remove_if_not(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[112], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11732;
	local[0] = makeint((eusinteger_t)0L);
KEY11732:
	if (n & (1<<1)) goto KEY11737;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY11737:
	if (n & (1<<2)) goto KEY11745;
	local[2] = makeint((eusinteger_t)1000000L);
KEY11745:
	if (n & (1<<3)) goto KEY11750;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY11750:
	local[4]= NIL;
	local[5]= argv[1];
	local[6]= NIL;
	local[7]= NIL;
	local[8]= local[3];
	local[9]= NIL;
	local[10]= argv[0];
	local[11]= local[0];
	local[12]= local[1];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)UNIREMOVE(ctx,10,local+4); /*system::universal-remove*/
	local[0]= w;
BLK11718:
	ctx->vsp=local; return(local[0]);}

/*delete*/
static pointer F4366delete(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[113], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11787;
	local[0] = makeint((eusinteger_t)0L);
KEY11787:
	if (n & (1<<1)) goto KEY11792;
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[1] = w;
KEY11792:
	if (n & (1<<2)) goto KEY11800;
	local[2] = (pointer)get_sym_func(fqv[72]);
KEY11800:
	if (n & (1<<3)) goto KEY11807;
	local[3] = NIL;
KEY11807:
	if (n & (1<<4)) goto KEY11812;
	local[4] = makeint((eusinteger_t)1000000L);
KEY11812:
	if (n & (1<<5)) goto KEY11817;
	local[5] = (pointer)get_sym_func(fqv[82]);
KEY11817:
	local[6]= argv[0];
	local[7]= argv[1];
	local[8]= local[2];
	local[9]= local[3];
	local[10]= local[5];
	local[11]= NIL;
	local[12]= NIL;
	local[13]= local[0];
	local[14]= local[1];
	local[15]= local[4];
	ctx->vsp=local+16;
	w=(pointer)DELETE(ctx,10,local+6); /*system::raw-delete*/
	local[0]= w;
BLK11771:
	ctx->vsp=local; return(local[0]);}

/*delete-if*/
static pointer F4369delete_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[114], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11854;
	local[0] = makeint((eusinteger_t)0L);
KEY11854:
	if (n & (1<<1)) goto KEY11859;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY11859:
	if (n & (1<<2)) goto KEY11867;
	local[2] = makeint((eusinteger_t)1000000L);
KEY11867:
	if (n & (1<<3)) goto KEY11872;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY11872:
	local[4]= NIL;
	local[5]= argv[1];
	local[6]= NIL;
	local[7]= NIL;
	local[8]= local[3];
	local[9]= argv[0];
	local[10]= NIL;
	local[11]= local[0];
	local[12]= local[1];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)DELETE(ctx,10,local+4); /*system::raw-delete*/
	local[0]= w;
BLK11840:
	ctx->vsp=local; return(local[0]);}

/*delete-if-not*/
static pointer F4372delete_if_not(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[115], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY11907;
	local[0] = makeint((eusinteger_t)0L);
KEY11907:
	if (n & (1<<1)) goto KEY11912;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY11912:
	if (n & (1<<2)) goto KEY11920;
	local[2] = makeint((eusinteger_t)1000000L);
KEY11920:
	if (n & (1<<3)) goto KEY11925;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY11925:
	local[4]= NIL;
	local[5]= argv[1];
	local[6]= NIL;
	local[7]= NIL;
	local[8]= local[3];
	local[9]= NIL;
	local[10]= argv[0];
	local[11]= local[0];
	local[12]= local[1];
	local[13]= local[2];
	ctx->vsp=local+14;
	w=(pointer)DELETE(ctx,10,local+4); /*system::raw-delete*/
	local[0]= w;
BLK11893:
	ctx->vsp=local; return(local[0]);}

/*substitute*/
static pointer F4375substitute(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[116], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY11964;
	local[0] = makeint((eusinteger_t)0L);
KEY11964:
	if (n & (1<<1)) goto KEY11969;
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[1] = w;
KEY11969:
	if (n & (1<<2)) goto KEY11977;
	local[2] = (pointer)get_sym_func(fqv[72]);
KEY11977:
	if (n & (1<<3)) goto KEY11984;
	local[3] = NIL;
KEY11984:
	if (n & (1<<4)) goto KEY11989;
	local[4] = makeint((eusinteger_t)1000000L);
KEY11989:
	if (n & (1<<5)) goto KEY11994;
	local[5] = (pointer)get_sym_func(fqv[82]);
KEY11994:
	local[6]= argv[0];
	local[7]= argv[1];
	local[8]= argv[2];
	local[9]= local[2];
	local[10]= local[3];
	local[11]= local[5];
	local[12]= NIL;
	local[13]= NIL;
	local[14]= local[0];
	local[15]= local[1];
	local[16]= local[4];
	ctx->vsp=local+17;
	w=(pointer)SUBSTITUTE(ctx,11,local+6); /*system::raw-substitute*/
	local[0]= w;
BLK11946:
	ctx->vsp=local; return(local[0]);}

/*substitute-if*/
static pointer F4378substitute_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[117], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY12034;
	local[0] = makeint((eusinteger_t)0L);
KEY12034:
	if (n & (1<<1)) goto KEY12039;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY12039:
	if (n & (1<<2)) goto KEY12047;
	local[2] = makeint((eusinteger_t)1000000L);
KEY12047:
	if (n & (1<<3)) goto KEY12052;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY12052:
	local[4]= argv[0];
	local[5]= NIL;
	local[6]= argv[2];
	local[7]= NIL;
	local[8]= NIL;
	local[9]= local[3];
	local[10]= argv[1];
	local[11]= NIL;
	local[12]= local[0];
	local[13]= local[1];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)SUBSTITUTE(ctx,11,local+4); /*system::raw-substitute*/
	local[0]= w;
BLK12018:
	ctx->vsp=local; return(local[0]);}

/*substitute-if-not*/
static pointer F4381substitute_if_not(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[118], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY12090;
	local[0] = makeint((eusinteger_t)0L);
KEY12090:
	if (n & (1<<1)) goto KEY12095;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY12095:
	if (n & (1<<2)) goto KEY12103;
	local[2] = makeint((eusinteger_t)1000000L);
KEY12103:
	if (n & (1<<3)) goto KEY12108;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY12108:
	local[4]= argv[0];
	local[5]= NIL;
	local[6]= argv[2];
	local[7]= NIL;
	local[8]= NIL;
	local[9]= local[3];
	local[10]= NIL;
	local[11]= argv[1];
	local[12]= local[0];
	local[13]= local[1];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)SUBSTITUTE(ctx,11,local+4); /*system::raw-substitute*/
	local[0]= w;
BLK12074:
	ctx->vsp=local; return(local[0]);}

/*nsubstitute*/
static pointer F4384nsubstitute(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[119], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY12148;
	local[0] = makeint((eusinteger_t)0L);
KEY12148:
	if (n & (1<<1)) goto KEY12153;
	local[6]= argv[2];
	ctx->vsp=local+7;
	w=(pointer)LENGTH(ctx,1,local+6); /*length*/
	local[1] = w;
KEY12153:
	if (n & (1<<2)) goto KEY12161;
	local[2] = (pointer)get_sym_func(fqv[72]);
KEY12161:
	if (n & (1<<3)) goto KEY12168;
	local[3] = NIL;
KEY12168:
	if (n & (1<<4)) goto KEY12173;
	local[4] = makeint((eusinteger_t)1000000L);
KEY12173:
	if (n & (1<<5)) goto KEY12178;
	local[5] = (pointer)get_sym_func(fqv[82]);
KEY12178:
	local[6]= argv[0];
	local[7]= argv[1];
	local[8]= argv[2];
	local[9]= local[2];
	local[10]= local[3];
	local[11]= local[5];
	local[12]= NIL;
	local[13]= NIL;
	local[14]= local[0];
	local[15]= local[1];
	local[16]= local[4];
	ctx->vsp=local+17;
	w=(pointer)NSUBSTITUTE(ctx,11,local+6); /*system::raw-nsubstitute*/
	local[0]= w;
BLK12130:
	ctx->vsp=local; return(local[0]);}

/*nsubstitute-if*/
static pointer F4387nsubstitute_if(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[120], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY12218;
	local[0] = makeint((eusinteger_t)0L);
KEY12218:
	if (n & (1<<1)) goto KEY12223;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY12223:
	if (n & (1<<2)) goto KEY12231;
	local[2] = makeint((eusinteger_t)1000000L);
KEY12231:
	if (n & (1<<3)) goto KEY12236;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY12236:
	local[4]= argv[0];
	local[5]= NIL;
	local[6]= argv[2];
	local[7]= NIL;
	local[8]= NIL;
	local[9]= local[3];
	local[10]= argv[1];
	local[11]= NIL;
	local[12]= local[0];
	local[13]= local[1];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)NSUBSTITUTE(ctx,11,local+4); /*system::raw-nsubstitute*/
	local[0]= w;
BLK12202:
	ctx->vsp=local; return(local[0]);}

/*nsubstitute-if-not*/
static pointer F4390nsubstitute_if_not(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<3) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[121], &argv[3], n-3, local+0, 0);
	if (n & (1<<0)) goto KEY12274;
	local[0] = makeint((eusinteger_t)0L);
KEY12274:
	if (n & (1<<1)) goto KEY12279;
	local[4]= argv[2];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY12279:
	if (n & (1<<2)) goto KEY12287;
	local[2] = makeint((eusinteger_t)1000000L);
KEY12287:
	if (n & (1<<3)) goto KEY12292;
	local[3] = (pointer)get_sym_func(fqv[82]);
KEY12292:
	local[4]= argv[0];
	local[5]= NIL;
	local[6]= argv[2];
	local[7]= NIL;
	local[8]= NIL;
	local[9]= local[3];
	local[10]= NIL;
	local[11]= argv[1];
	local[12]= local[0];
	local[13]= local[1];
	local[14]= local[2];
	ctx->vsp=local+15;
	w=(pointer)NSUBSTITUTE(ctx,11,local+4); /*system::raw-nsubstitute*/
	local[0]= w;
BLK12258:
	ctx->vsp=local; return(local[0]);}

/*unique*/
static pointer F4393unique(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	if (!!iscons(w)) goto CON12326;
	local[0]= argv[0];
	goto CON12324;
CON12326:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.cdr;
	if (memq(local[0],w)==NIL) goto CON12336;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	ctx->vsp=local+1;
	w=(pointer)F4393unique(ctx,1,local+0); /*unique*/
	local[0]= w;
	goto CON12324;
CON12336:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	ctx->vsp=local+2;
	w=(pointer)F4393unique(ctx,1,local+1); /*unique*/
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	goto CON12324;
CON12360:
	local[0]= NIL;
CON12324:
	w = local[0];
	local[0]= w;
BLK12314:
	ctx->vsp=local; return(local[0]);}

/*remove-duplicates*/
static pointer F4396remove_duplicates(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[122], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY12393;
	local[0] = (pointer)get_sym_func(fqv[72]);
KEY12393:
	if (n & (1<<1)) goto KEY12400;
	local[1] = NIL;
KEY12400:
	if (n & (1<<2)) goto KEY12405;
	local[2] = (pointer)get_sym_func(fqv[82]);
KEY12405:
	if (n & (1<<3)) goto KEY12412;
	local[3] = makeint((eusinteger_t)0L);
KEY12412:
	if (n & (1<<4)) goto KEY12417;
	local[4] = makeint((eusinteger_t)1000000L);
KEY12417:
	local[5]= argv[0];
	local[6]= local[0];
	local[7]= local[1];
	local[8]= local[2];
	local[9]= local[3];
	local[10]= local[4];
	ctx->vsp=local+11;
	w=(pointer)REMOVE_DUPLICATES(ctx,6,local+5); /*system::raw-remove-duplicates*/
	local[0]= w;
BLK12380:
	ctx->vsp=local; return(local[0]);}

/*extream*/
static pointer F4399extream(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT12439;}
	local[0]= (pointer)get_sym_func(fqv[82]);
ENT12439:
ENT12438:
	if (n>3) maerror();
	if (argv[0]!=NIL) goto IF12457;
	local[1]= NIL;
	goto IF12458;
IF12457:
	local[1]= argv[0];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)ELT(ctx,2,local+1); /*elt*/
	local[1]= w;
	local[2]= local[0];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)FUNCALL(ctx,2,local+2); /*funcall*/
	local[2]= w;
	local[3]= NIL;
	w = argv[0];
	if (!iscons(w)) goto IF12482;
	local[4]= NIL;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.cdr;
WHL12509:
	if (local[5]==NIL) goto WHX12510;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= argv[1];
	local[7]= local[0];
	local[8]= local[4];
	ctx->vsp=local+9;
	w=(pointer)FUNCALL(ctx,2,local+7); /*funcall*/
	local[7]= w;
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)FUNCALL(ctx,3,local+6); /*funcall*/
	if (w==NIL) goto IF12559;
	local[1] = local[4];
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,2,local+6); /*funcall*/
	local[2] = w;
	local[6]= local[2];
	goto IF12560;
IF12559:
	local[6]= NIL;
IF12560:
	goto WHL12509;
WHX12510:
	local[6]= NIL;
BLK12511:
	w = NIL;
	local[4]= w;
	goto IF12483;
IF12482:
	local[4]= makeint((eusinteger_t)0L);
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LENGTH(ctx,1,local+5); /*length*/
	local[5]= w;
WHL12615:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX12616;
	local[6]= argv[1];
	local[7]= local[0];
	local[8]= argv[0];
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,2,local+8); /*aref*/
	local[3] = w;
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)FUNCALL(ctx,2,local+7); /*funcall*/
	local[7]= w;
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)FUNCALL(ctx,3,local+6); /*funcall*/
	if (w==NIL) goto IF12625;
	local[1] = local[3];
	local[6]= local[0];
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,2,local+6); /*funcall*/
	local[2] = w;
	local[6]= local[2];
	goto IF12626;
IF12625:
	local[6]= NIL;
IF12626:
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL12615;
WHX12616:
	local[6]= NIL;
BLK12617:
	w = NIL;
	local[4]= w;
IF12483:
	w = local[1];
	local[1]= w;
IF12458:
	w = local[1];
	local[0]= w;
BLK12436:
	ctx->vsp=local; return(local[0]);}

/*send-super-lexpr*/
static pointer F12680(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST12683:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[123];
	local[2]= fqv[124];
	local[3]= fqv[125];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[126];
	local[4]= fqv[127];
	w = fqv[128];
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= argv[0];
	w = local[0];
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK12681:
	ctx->vsp=local; return(local[0]);}

/*send-super**/
static pointer F12740(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST12743:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[123];
	local[2]= fqv[124];
	local[3]= fqv[125];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[126];
	local[4]= fqv[127];
	w = fqv[128];
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	w = local[0];
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK12741:
	ctx->vsp=local; return(local[0]);}

/*send-lexpr*/
static pointer F12794(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST12797:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= fqv[123];
	local[2]= fqv[124];
	local[3]= fqv[32];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= argv[0];
	local[4]= argv[1];
	w = local[0];
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK12795:
	ctx->vsp=local; return(local[0]);}

/*send**/
static pointer F12838(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST12841:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[123];
	local[2]= fqv[124];
	local[3]= fqv[32];
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
BLK12839:
	ctx->vsp=local; return(local[0]);}

/*send-super*/
static pointer F12870(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST12873:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[125];
	local[2]= fqv[126];
	local[3]= fqv[127];
	w = fqv[128];
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= argv[0];
	local[5]= local[0];
	local[6]= NIL;
	ctx->vsp=local+7;
	w=(pointer)APPEND(ctx,2,local+5); /*append*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK12871:
	ctx->vsp=local; return(local[0]);}

/*send-all*/
static pointer F4408send_all(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST12922:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	ctx->vsp=local+1;
	local[1]= makeclosure(codevec,quotevec,CLO12934,env,argv,local);
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)MAPCAR(ctx,2,local+1); /*mapcar*/
	local[0]= w;
BLK12920:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO12934(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= fqv[32];
	local[1]= argv[0];
	local[2]= env->c.clo.env2[0];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,3,local+0); /*apply*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*resend*/
static pointer F4411resend(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= fqv[32];
	local[1]= argv[0];
	w = argv[1];
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	ctx->vsp=local+1;
	w=(pointer)EVAL(ctx,1,local+0); /*eval*/
	local[0]= w;
BLK12957:
	ctx->vsp=local; return(local[0]);}

/*instance*/
static pointer F12983(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST12986:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	if (local[0]==NIL) goto IF12997;
	local[1]= fqv[129];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[5];
	local[3]= local[1];
	local[4]= fqv[130];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	local[4]= fqv[32];
	local[5]= local[1];
	local[6]= local[0];
	local[7]= NIL;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,2,local+6); /*append*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[1]= w;
	goto IF12998;
IF12997:
	local[1]= fqv[130];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
IF12998:
	w = local[1];
	local[0]= w;
BLK12984:
	ctx->vsp=local; return(local[0]);}

/*instance**/
static pointer F13064(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST13067:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	if (local[0]==NIL) goto IF13078;
	local[1]= fqv[131];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= fqv[5];
	local[3]= local[1];
	local[4]= fqv[130];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	local[4]= fqv[132];
	local[5]= local[1];
	local[6]= local[0];
	local[7]= NIL;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,2,local+6); /*append*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	local[1]= w;
	goto IF13079;
IF13078:
	local[1]= fqv[130];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
IF13079:
	w = local[1];
	local[0]= w;
BLK13065:
	ctx->vsp=local; return(local[0]);}

/*make-instance*/
static pointer F4416make_instance(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST13147:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)INSTANTIATE(ctx,1,local+1); /*instantiate*/
	local[1]= w;
WHL13171:
	if (local[0]==NIL) goto WHX13172;
	local[2]= local[1];
	local[3]= argv[0];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	w = local[4];
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)F4176string(ctx,1,local+4); /*string*/
	local[4]= w;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0] = (w)->c.cons.cdr;
	w = local[5];
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)SETSLOT(ctx,4,local+2); /*setslot*/
	goto WHL13171;
WHX13172:
	local[2]= NIL;
BLK13173:
	w = local[1];
	local[0]= w;
BLK13145:
	ctx->vsp=local; return(local[0]);}

/*defclassmethod*/
static pointer F13261(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST13264:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[133];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)SYMVALUE(ctx,1,local+2); /*symbol-value*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)GETCLASS(ctx,1,local+2); /*class*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(*ftab[1])(ctx,1,local+2,&ftab[1],fqv[134]); /*metaclass-name*/
	local[2]= w;
	w = local[0];
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK13262:
	ctx->vsp=local; return(local[0]);}

/*delete-method*/
static pointer F4420delete_method(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[1];
	local[1]= argv[0]->c.obj.iv[7];
	local[2]= fqv[25];
	local[3]= (pointer)get_sym_func(fqv[16]);
	ctx->vsp=local+4;
	w=(pointer)F4366delete(ctx,4,local+0); /*delete*/
	local[0]= w;
	local[1]= w;
	w = argv[0];
	w->c.obj.iv[7] = local[1];
	local[0]= T;
	ctx->vsp=local+1;
	w=(pointer)METHCACHE(ctx,1,local+0); /*system::method-cache*/
	local[0]= w;
BLK13295:
	ctx->vsp=local; return(local[0]);}

/*make-class*/
static pointer F4423make_class(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[135], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY13348;
	local[0] = loadglobal(fqv[136]);
KEY13348:
	if (n & (1<<1)) goto KEY13355;
	local[1] = loadglobal(fqv[136]);
KEY13355:
	if (n & (1<<2)) goto KEY13361;
	local[2] = NIL;
KEY13361:
	if (n & (1<<3)) goto KEY13366;
	local[3] = NIL;
KEY13366:
	if (n & (1<<4)) goto KEY13371;
	local[4] = NIL;
KEY13371:
	if (n & (1<<5)) goto KEY13376;
	local[5] = NIL;
KEY13376:
	if (n & (1<<6)) goto KEY13381;
	local[6] = NIL;
KEY13381:
	if (n & (1<<7)) goto KEY13386;
	local[7] = NIL;
KEY13386:
	if (n & (1<<8)) goto KEY13391;
	local[8] = makeint((eusinteger_t)-1L);
KEY13391:
	if (n & (1<<9)) goto KEY13396;
	local[9] = NIL;
KEY13396:
	if (n & (1<<10)) goto KEY13401;
	local[10] = NIL;
KEY13401:
	w = local[0];
	if (!issymbol(w)) goto IF13410;
	local[11]= local[0];
	ctx->vsp=local+12;
	w=(pointer)SYMVALUE(ctx,1,local+11); /*symbol-value*/
	local[0] = w;
	local[11]= local[0];
	goto IF13411;
IF13410:
	local[11]= NIL;
IF13411:
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)BOUNDP(ctx,1,local+11); /*boundp*/
	if (w==NIL) goto IF13432;
	local[11]= argv[0];
	ctx->vsp=local+12;
	w=(pointer)SYMVALUE(ctx,1,local+11); /*symbol-value*/
	local[11]= w;
	goto IF13433;
IF13432:
	local[11]= NIL;
IF13433:
	local[12]= NIL;
	local[13]= NIL;
	local[14]= NIL;
	local[15]= NIL;
	local[16]= makeint((eusinteger_t)0L);
	local[17]= NIL;
	local[18]= NIL;
	local[19]= local[11];
	ctx->vsp=local+20;
	w=(pointer)CLASSP(ctx,1,local+19); /*classp*/
	if (w!=NIL) goto CON13469;
	local[19]= local[6];
	if (local[19]!=NIL) goto CON13477;
CON13479:
	local[19]= local[6];
	ctx->vsp=local+20;
	w=(pointer)CLASSP(ctx,1,local+19); /*classp*/
	local[19]= w;
	if (w!=NIL) goto CON13477;
CON13483:
	if (local[0]==NIL) goto CON13489;
	local[19]= local[0];
	ctx->vsp=local+20;
	w=(pointer)GETCLASS(ctx,1,local+19); /*class*/
	local[6] = w;
	local[19]= local[6];
	goto CON13477;
CON13489:
	local[19]= fqv[137];
	ctx->vsp=local+20;
	w=(pointer)SYMVALUE(ctx,1,local+19); /*symbol-value*/
	local[6] = w;
	local[19]= local[6];
	goto CON13477;
CON13502:
	local[19]= NIL;
CON13477:
	local[19]= local[6];
	ctx->vsp=local+20;
	w=(pointer)INSTANTIATE(ctx,1,local+19); /*instantiate*/
	local[11] = w;
	local[19]= local[11];
	goto CON13467;
CON13469:
	local[19]= local[11];
	ctx->vsp=local+20;
	w=(pointer)GETCLASS(ctx,1,local+19); /*class*/
	local[6] = w;
	local[19]= local[6];
	goto CON13467;
CON13523:
	local[19]= NIL;
CON13467:
	local[19]= *(ovafptr(local[0],fqv[138]));
	local[20]= loadglobal(fqv[19]);
	ctx->vsp=local+21;
	w=(pointer)COERCE(ctx,2,local+19); /*coerce*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)NREVERSE(ctx,1,local+19); /*nreverse*/
	local[12] = w;
	local[19]= *(ovafptr(local[0],fqv[139]));
	local[20]= loadglobal(fqv[19]);
	ctx->vsp=local+21;
	w=(pointer)COERCE(ctx,2,local+19); /*coerce*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)NREVERSE(ctx,1,local+19); /*nreverse*/
	local[13] = w;
	local[19]= *(ovafptr(local[0],fqv[140]));
	local[20]= loadglobal(fqv[19]);
	ctx->vsp=local+21;
	w=(pointer)COERCE(ctx,2,local+19); /*coerce*/
	local[19]= w;
	ctx->vsp=local+20;
	w=(pointer)NREVERSE(ctx,1,local+19); /*nreverse*/
	local[14] = w;
	local[19]= NIL;
	local[20]= local[9];
WHL13584:
	if (local[20]==NIL) goto WHX13585;
	w=local[20];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	w=local[20];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20] = (w)->c.cons.cdr;
	w = local[21];
	local[19] = w;
	w = local[19];
	if (!iscons(w)) goto CON13635;
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	local[22]= local[12];
	ctx->vsp=local+23;
	w=(pointer)F4285member(ctx,2,local+21); /*member*/
	if (w==NIL) goto IF13641;
	local[21]= fqv[141];
	ctx->vsp=local+22;
	w=(pointer)SIGERROR(ctx,1,local+21); /*error*/
	local[21]= w;
	goto IF13642;
IF13641:
	local[21]= NIL;
IF13642:
	w=local[19];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	w = local[12];
	ctx->vsp=local+22;
	local[12] = cons(ctx,local[21],w);
	local[21]= fqv[142];
	local[22]= local[19];
	ctx->vsp=local+23;
	w=(pointer)F4309position(ctx,2,local+21); /*position*/
	local[18] = w;
	if (local[18]==NIL) goto IF13688;
	local[21]= local[19];
	local[22]= local[18];
	ctx->vsp=local+23;
	w=(pointer)ADD1(ctx,1,local+22); /*1+*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)ELT(ctx,2,local+21); /*elt*/
	local[21]= w;
	goto IF13689;
IF13688:
	local[21]= T;
IF13689:
	w = local[13];
	ctx->vsp=local+22;
	local[13] = cons(ctx,local[21],w);
	local[21]= fqv[143];
	local[22]= local[19];
	ctx->vsp=local+23;
	w=(pointer)F4309position(ctx,2,local+21); /*position*/
	local[18] = w;
	if (local[18]==NIL) goto IF13722;
	local[21]= local[19];
	local[22]= local[18];
	ctx->vsp=local+23;
	w=(pointer)ADD1(ctx,1,local+22); /*1+*/
	local[22]= w;
	ctx->vsp=local+23;
	w=(pointer)ELT(ctx,2,local+21); /*elt*/
	local[21]= w;
	goto IF13723;
IF13722:
	local[21]= NIL;
IF13723:
	w = local[14];
	ctx->vsp=local+22;
	local[14] = cons(ctx,local[21],w);
	local[21]= local[14];
	goto CON13633;
CON13635:
	w = local[19];
	if (!issymbol(w)) goto CON13739;
	local[21]= local[19];
	local[22]= local[12];
	ctx->vsp=local+23;
	w=(pointer)F4285member(ctx,2,local+21); /*member*/
	if (w==NIL) goto IF13745;
	local[21]= fqv[144];
	ctx->vsp=local+22;
	w=(pointer)SIGERROR(ctx,1,local+21); /*error*/
	local[21]= w;
	goto IF13746;
IF13745:
	local[21]= NIL;
IF13746:
	local[21]= local[19];
	w = local[12];
	ctx->vsp=local+22;
	local[12] = cons(ctx,local[21],w);
	local[21]= T;
	w = local[13];
	ctx->vsp=local+22;
	local[13] = cons(ctx,local[21],w);
	local[21]= NIL;
	w = local[14];
	ctx->vsp=local+22;
	local[14] = cons(ctx,local[21],w);
	local[21]= local[14];
	goto CON13633;
CON13739:
	local[21]= fqv[145];
	ctx->vsp=local+22;
	w=(pointer)SIGERROR(ctx,1,local+21); /*error*/
	local[21]= w;
	goto CON13633;
CON13789:
	local[21]= NIL;
CON13633:
	goto WHL13584;
WHX13585:
	local[21]= NIL;
BLK13586:
	w = NIL;
	local[19]= local[12];
	ctx->vsp=local+20;
	w=(pointer)NREVERSE(ctx,1,local+19); /*nreverse*/
	local[19]= w;
	local[20]= loadglobal(fqv[146]);
	ctx->vsp=local+21;
	w=(pointer)COERCE(ctx,2,local+19); /*coerce*/
	local[12] = w;
	local[19]= local[13];
	ctx->vsp=local+20;
	w=(pointer)NREVERSE(ctx,1,local+19); /*nreverse*/
	local[19]= w;
	local[20]= loadglobal(fqv[146]);
	ctx->vsp=local+21;
	w=(pointer)COERCE(ctx,2,local+19); /*coerce*/
	local[13] = w;
	local[19]= local[14];
	ctx->vsp=local+20;
	w=(pointer)NREVERSE(ctx,1,local+19); /*nreverse*/
	local[19]= w;
	local[20]= loadglobal(fqv[146]);
	ctx->vsp=local+21;
	w=(pointer)COERCE(ctx,2,local+19); /*coerce*/
	local[14] = w;
	local[19]= local[7];
	local[20]= fqv[147];
	ctx->vsp=local+21;
	w=(pointer)ASSQ(ctx,2,local+19); /*assq*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[15] = (w)->c.cons.cdr;
	if (local[15]!=NIL) goto IF13843;
	local[19]= local[6];
	local[20]= loadglobal(fqv[148]);
	ctx->vsp=local+21;
	w=(pointer)SUBCLASSP(ctx,2,local+19); /*subclassp*/
	if (w==NIL) goto IF13851;
	local[19]= local[0]->c.obj.iv[8];
	goto IF13852;
IF13851:
	local[19]= makeint((eusinteger_t)0L);
IF13852:
	local[15] = local[19];
	local[19]= local[15];
	goto IF13844;
IF13843:
	local[19]= NIL;
IF13844:
	local[19]= argv[0];
	*(ovafptr(local[11],fqv[149])) = local[19];
	local[19]= local[12];
	*(ovafptr(local[11],fqv[138])) = local[19];
	local[19]= local[13];
	*(ovafptr(local[11],fqv[139])) = local[19];
	local[19]= local[14];
	*(ovafptr(local[11],fqv[140])) = local[19];
	local[19]= local[0];
	local[20]= local[19];
	*(ovafptr(local[11],fqv[128])) = local[20];
	local[19]= local[6];
	local[20]= loadglobal(fqv[148]);
	ctx->vsp=local+21;
	w=(pointer)SUBCLASSP(ctx,2,local+19); /*subclassp*/
	if (w==NIL) goto IF13887;
	local[19]= local[15];
	*(ovafptr(local[11],fqv[150])) = local[19];
	local[19]= local[8];
	local[20]= local[19];
	*(ovafptr(local[11],fqv[151])) = local[20];
	goto IF13888;
IF13887:
	local[19]= NIL;
IF13888:
	if (*(ovafptr(local[11],fqv[152]))!=NIL) goto IF13905;
	local[19]= local[11];
	ctx->vsp=local+20;
	w=(*ftab[2])(ctx,1,local+19,&ftab[2],fqv[153]); /*enter-class*/
	local[19]= w;
	goto IF13906;
IF13905:
	local[19]= NIL;
IF13906:
	local[19]= local[11];
	local[20]= local[10];
	local[21]= fqv[154];
	ctx->vsp=local+22;
	w=(pointer)PUTPROP(ctx,3,local+19); /*putprop*/
	local[19]= local[12];
	local[20]= loadglobal(fqv[19]);
	ctx->vsp=local+21;
	w=(pointer)COERCE(ctx,2,local+19); /*coerce*/
	local[12] = w;
	local[19]= NIL;
	local[20]= local[12];
WHL13951:
	if (local[20]==NIL) goto WHX13952;
	w=local[20];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[21]= (w)->c.cons.car;
	w=local[20];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[20] = (w)->c.cons.cdr;
	w = local[21];
	local[19] = w;
	local[21]= loadglobal(fqv[155]);
	local[22]= argv[0];
	ctx->vsp=local+23;
	w=(pointer)F4176string(ctx,1,local+22); /*string*/
	local[22]= w;
	local[23]= fqv[156];
	local[24]= local[19];
	ctx->vsp=local+25;
	w=(pointer)F4176string(ctx,1,local+24); /*string*/
	local[24]= w;
	ctx->vsp=local+25;
	w=(pointer)CONCATENATE(ctx,4,local+21); /*concatenate*/
	local[21]= w;
	ctx->vsp=local+22;
	w=(pointer)INTERN(ctx,1,local+21); /*intern*/
	local[17] = w;
	local[21]= local[17];
	local[22]= fqv[157];
	local[23]= fqv[158];
	ctx->vsp=local+24;
	w=(pointer)LIST(ctx,1,local+23); /*list*/
	local[23]= w;
	local[24]= fqv[66];
	local[25]= fqv[33];
	local[26]= fqv[159];
	ctx->vsp=local+27;
	w=(pointer)LIST(ctx,1,local+26); /*list*/
	ctx->vsp=local+26;
	local[25]= cons(ctx,local[25],w);
	local[26]= fqv[158];
	local[27]= fqv[33];
	local[28]= argv[0];
	ctx->vsp=local+29;
	w=(pointer)LIST(ctx,1,local+28); /*list*/
	ctx->vsp=local+28;
	local[27]= cons(ctx,local[27],w);
	local[28]= local[16];
	ctx->vsp=local+29;
	w=(pointer)LIST(ctx,1,local+28); /*list*/
	ctx->vsp=local+28;
	w = cons(ctx,local[27],w);
	ctx->vsp=local+27;
	w = cons(ctx,local[26],w);
	ctx->vsp=local+26;
	w = cons(ctx,local[25],w);
	ctx->vsp=local+25;
	local[24]= cons(ctx,local[24],w);
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	local[22]= cons(ctx,local[22],w);
	ctx->vsp=local+23;
	w=(pointer)SETFUNC(ctx,2,local+21); /*setfunc*/
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)ADD1(ctx,1,local+21); /*1+*/
	local[16] = w;
	goto WHL13951;
WHX13952:
	local[21]= NIL;
BLK13953:
	w = NIL;
	w = local[11];
	local[0]= w;
BLK13329:
	ctx->vsp=local; return(local[0]);}

/*defstruct*/
static pointer F14087(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST14090:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[6];
	local[2]= fqv[32];
	local[3]= fqv[33];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[38];
	local[5]= fqv[160];
	local[6]= fqv[33];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	local[7]= fqv[161];
	local[8]= fqv[33];
	local[9]= local[0];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
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
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[33];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK14088:
	ctx->vsp=local; return(local[0]);}

/*defclass*/
static pointer F14169(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[162], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY14185;
	local[0] = NIL;
KEY14185:
	if (n & (1<<1)) goto KEY14190;
	local[1] = fqv[136];
KEY14190:
	if (n & (1<<2)) goto KEY14197;
	local[2] = makeint((eusinteger_t)-1L);
KEY14197:
	if (n & (1<<3)) goto KEY14202;
	local[3] = NIL;
KEY14202:
	if (n & (1<<4)) goto KEY14207;
	local[4] = NIL;
KEY14207:
	if (n & (1<<5)) goto KEY14212;
	local[5] = NIL;
KEY14212:
	if (n & (1<<6)) goto KEY14217;
	local[6] = local[5];
KEY14217:
	local[7]= fqv[6];
	local[8]= fqv[32];
	local[9]= fqv[33];
	local[10]= argv[0];
	ctx->vsp=local+11;
	w=(pointer)LIST(ctx,1,local+10); /*list*/
	ctx->vsp=local+10;
	local[9]= cons(ctx,local[9],w);
	local[10]= fqv[38];
	local[11]= fqv[160];
	local[12]= fqv[33];
	local[13]= argv[0];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	ctx->vsp=local+13;
	local[12]= cons(ctx,local[12],w);
	local[13]= fqv[163];
	local[14]= local[1];
	local[15]= fqv[161];
	local[16]= fqv[33];
	local[17]= local[0];
	ctx->vsp=local+18;
	w=(pointer)LIST(ctx,1,local+17); /*list*/
	ctx->vsp=local+17;
	local[16]= cons(ctx,local[16],w);
	local[17]= fqv[164];
	local[18]= local[3];
	local[19]= fqv[106];
	local[20]= local[4];
	local[21]= fqv[165];
	local[22]= local[2];
	local[23]= fqv[166];
	local[24]= local[6];
	ctx->vsp=local+25;
	w=(pointer)LIST(ctx,1,local+24); /*list*/
	ctx->vsp=local+24;
	w = cons(ctx,local[23],w);
	ctx->vsp=local+23;
	w = cons(ctx,local[22],w);
	ctx->vsp=local+22;
	w = cons(ctx,local[21],w);
	ctx->vsp=local+21;
	w = cons(ctx,local[20],w);
	ctx->vsp=local+20;
	w = cons(ctx,local[19],w);
	ctx->vsp=local+19;
	w = cons(ctx,local[18],w);
	ctx->vsp=local+18;
	w = cons(ctx,local[17],w);
	ctx->vsp=local+17;
	w = cons(ctx,local[16],w);
	ctx->vsp=local+16;
	w = cons(ctx,local[15],w);
	ctx->vsp=local+15;
	w = cons(ctx,local[14],w);
	ctx->vsp=local+14;
	w = cons(ctx,local[13],w);
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
	local[8]= cons(ctx,local[8],w);
	local[9]= fqv[33];
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
	w = cons(ctx,local[7],w);
	local[0]= w;
BLK14170:
	ctx->vsp=local; return(local[0]);}

/*readtablep*/
static pointer F4430readtablep(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[167]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK14342:
	ctx->vsp=local; return(local[0]);}

/*copy-readtable*/
static pointer F4433copy_readtable(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT14363;}
	local[0]= loadglobal(fqv[168]);
ENT14363:
	if (n>=2) { local[1]=(argv[1]); goto ENT14362;}
	local[1]= NIL;
ENT14362:
ENT14361:
	if (n>2) maerror();
	if (local[0]!=NIL) goto IF14382;
	local[0] = loadglobal(fqv[169]);
	local[2]= local[0];
	goto IF14383;
IF14382:
	local[2]= NIL;
IF14383:
	if (local[1]!=NIL) goto IF14400;
	local[2]= loadglobal(fqv[167]);
	ctx->vsp=local+3;
	w=(pointer)INSTANTIATE(ctx,1,local+2); /*instantiate*/
	local[1] = w;
	local[2]= loadglobal(fqv[155]);
	local[3]= makeint((eusinteger_t)256L);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
	local[3]= w;
	w = local[1];
	w->c.obj.iv[1] = local[3];
	local[2]= loadglobal(fqv[146]);
	local[3]= makeint((eusinteger_t)256L);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
	local[3]= w;
	w = local[1];
	w->c.obj.iv[2] = local[3];
	local[2]= loadglobal(fqv[146]);
	local[3]= makeint((eusinteger_t)256L);
	ctx->vsp=local+4;
	w=(pointer)INSTANTIATE(ctx,2,local+2); /*instantiate*/
	local[2]= w;
	local[3]= w;
	w = local[1];
	w->c.obj.iv[3] = local[3];
	goto IF14401;
IF14400:
	local[2]= NIL;
IF14401:
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F4430readtablep(ctx,1,local+2); /*readtablep*/
	if (w==NIL) goto OR14448;
	local[2]= local[1];
	ctx->vsp=local+3;
	w=(pointer)F4430readtablep(ctx,1,local+2); /*readtablep*/
	if (w==NIL) goto OR14448;
	goto IF14446;
OR14448:
	local[2]= fqv[170];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,1,local+2); /*error*/
	local[2]= w;
	goto IF14447;
IF14446:
	local[2]= NIL;
IF14447:
	local[2]= local[1]->c.obj.iv[1];
	local[3]= local[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)F4354replace(ctx,2,local+2); /*replace*/
	local[2]= local[1]->c.obj.iv[2];
	local[3]= local[0]->c.obj.iv[2];
	ctx->vsp=local+4;
	w=(pointer)F4354replace(ctx,2,local+2); /*replace*/
	local[2]= local[1]->c.obj.iv[3];
	local[3]= local[0]->c.obj.iv[3];
	ctx->vsp=local+4;
	w=(pointer)F4354replace(ctx,2,local+2); /*replace*/
	local[2]= local[0]->c.obj.iv[4];
	local[3]= local[2];
	w = local[1];
	w->c.obj.iv[4] = local[3];
	w = local[1];
	local[0]= w;
BLK14359:
	ctx->vsp=local; return(local[0]);}

/*set-syntax-from-char*/
static pointer F4436set_syntax_from_char(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT14522;}
	local[0]= loadglobal(fqv[168]);
ENT14522:
	if (n>=4) { local[1]=(argv[3]); goto ENT14521;}
	local[1]= loadglobal(fqv[169]);
ENT14521:
ENT14520:
	if (n>4) maerror();
	local[2]= NIL;
	local[3]= local[1]->c.obj.iv[1];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)AREF(ctx,2,local+3); /*aref*/
	local[2] = w;
	local[3]= local[0]->c.obj.iv[1];
	local[4]= argv[0];
	local[5]= local[2];
	ctx->vsp=local+6;
	w=(pointer)ASET(ctx,3,local+3); /*aset*/
	local[3]= local[2];
	if (makeint((eusinteger_t)7L)==local[3]) goto OR14580;
	local[3]= local[2];
	if (makeint((eusinteger_t)8L)==local[3]) goto OR14580;
	goto IF14578;
OR14580:
	local[3]= local[0]->c.obj.iv[2];
	local[4]= argv[0];
	local[5]= local[1]->c.obj.iv[2];
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)AREF(ctx,2,local+5); /*aref*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)ASET(ctx,3,local+3); /*aset*/
	local[3]= w;
	goto IF14579;
IF14578:
	local[3]= NIL;
IF14579:
	w = local[2];
	local[0]= w;
BLK14518:
	ctx->vsp=local; return(local[0]);}

/*keywordp*/
static pointer F4441keywordp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	local[0]= (issymbol(w)?T:NIL);
	if (local[0]==NIL) goto AND14629;
	local[0]= argv[0]->c.obj.iv[5];
	local[0]= ((loadglobal(fqv[171]))==(local[0])?T:NIL);
AND14629:
	w = local[0];
	local[0]= w;
BLK14613:
	ctx->vsp=local; return(local[0]);}

/*constantp*/
static pointer F4444constantp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!issymbol(w)) goto IF14663;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F4441keywordp(ctx,1,local+0); /*keywordp*/
	if (w!=NIL) goto OR14671;
	local[0]= argv[0]->c.obj.iv[2];
	if (makeint((eusinteger_t)0L)==local[0]) goto OR14671;
	goto IF14669;
OR14671:
	local[0]= T;
	goto IF14670;
IF14669:
	local[0]= NIL;
IF14670:
	goto IF14664;
IF14663:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LISTP(ctx,1,local+0); /*listp*/
	if (w==NIL) goto IF14683;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	if (fqv[33]!=local[0]) goto IF14691;
	local[0]= T;
	goto IF14692;
IF14691:
	local[0]= NIL;
IF14692:
	goto IF14684;
IF14683:
	w = argv[0];
	if (!!iscons(w)) goto IF14703;
	local[0]= T;
	goto IF14704;
IF14703:
	local[0]= NIL;
IF14704:
IF14684:
IF14664:
	w = local[0];
	local[0]= w;
BLK14647:
	ctx->vsp=local; return(local[0]);}

/*functionp*/
static pointer F4447functionp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	if (!isnum(w)) goto CON14723;
	local[0]= NIL;
	goto CON14721;
CON14723:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LISTP(ctx,1,local+0); /*listp*/
	if (w==NIL) goto CON14728;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w = fqv[172];
	if (memq(local[0],w)!=NIL) goto OR14738;
	goto IF14736;
OR14738:
	local[0]= T;
	goto IF14737;
IF14736:
	local[0]= NIL;
IF14737:
	goto CON14721;
CON14728:
	local[0]= argv[0];
	local[1]= loadglobal(fqv[173]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	if (w==NIL) goto CON14752;
	local[0]= argv[0]->c.obj.iv[2];
	local[0]= ((makeint((eusinteger_t)0L))==(local[0])?T:NIL);
	goto CON14721;
CON14752:
	w = argv[0];
	if (!issymbol(w)) goto CON14769;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FBOUNDP(ctx,1,local+0); /*fboundp*/
	if (w==NIL) goto CON14769;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)SYMFUNC(ctx,1,local+0); /*symbol-function*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)F4447functionp(ctx,1,local+0); /*functionp*/
	local[0]= w;
	goto CON14721;
CON14769:
	local[0]= NIL;
	goto CON14721;
CON14785:
	local[0]= NIL;
CON14721:
	w = local[0];
	local[0]= w;
BLK14711:
	ctx->vsp=local; return(local[0]);}

/*vector-class-p*/
static pointer F4450vector_class_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[148]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK14791:
	ctx->vsp=local; return(local[0]);}

/*compiled-function-p*/
static pointer F4453compiled_function_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[173]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK14807:
	ctx->vsp=local; return(local[0]);}

/*input-stream-p*/
static pointer F4456input_stream_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[174]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
	if (w==NIL) goto AND14843;
	local[0]= argv[0]->c.obj.iv[1];
	local[0]= ((fqv[175])==(local[0])?T:NIL);
AND14843:
	if (local[0]!=NIL) goto OR14839;
	local[0]= argv[0];
	local[1]= loadglobal(fqv[176]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
OR14839:
	w = local[0];
	local[0]= w;
BLK14823:
	ctx->vsp=local; return(local[0]);}

/*output-stream-p*/
static pointer F4459output_stream_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[174]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
	if (w==NIL) goto AND14888;
	local[0]= argv[0]->c.obj.iv[1];
	local[0]= ((fqv[177])==(local[0])?T:NIL);
AND14888:
	if (local[0]!=NIL) goto OR14884;
	local[0]= argv[0];
	local[1]= loadglobal(fqv[176]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
OR14884:
	w = local[0];
	local[0]= w;
BLK14868:
	ctx->vsp=local; return(local[0]);}

/*io-stream-p*/
static pointer F4462io_stream_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[176]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK14911:
	ctx->vsp=local; return(local[0]);}

/*special-form-p*/
static pointer F4465special_form_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	local[0]= (issymbol(w)?T:NIL);
	if (local[0]==NIL) goto AND14937;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FBOUNDP(ctx,1,local+0); /*fboundp*/
	local[0]= w;
	if (w==NIL) goto AND14937;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)SYMFUNC(ctx,1,local+0); /*symbol-function*/
	argv[0] = w;
	local[0]= argv[0];
	if (local[0]==NIL) goto AND14937;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F4453compiled_function_p(ctx,1,local+0); /*compiled-function-p*/
	local[0]= w;
	if (w==NIL) goto AND14937;
	local[0]= *(ovafptr(argv[0],fqv[178]));
	local[0]= ((makeint((eusinteger_t)2L))==(local[0])?T:NIL);
AND14937:
	w = local[0];
	local[0]= w;
BLK14927:
	ctx->vsp=local; return(local[0]);}

/*macro-function*/
static pointer F4468macro_function(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = argv[0];
	local[0]= (issymbol(w)?T:NIL);
	if (local[0]==NIL) goto AND14983;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)FBOUNDP(ctx,1,local+0); /*fboundp*/
	local[0]= w;
	if (w==NIL) goto AND14983;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)SYMFUNC(ctx,1,local+0); /*symbol-function*/
	argv[0] = w;
	local[0]= argv[0];
	if (local[0]==NIL) goto AND14983;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F4453compiled_function_p(ctx,1,local+0); /*compiled-function-p*/
	if (w==NIL) goto IF15007;
	local[0]= *(ovafptr(argv[0],fqv[178]));
	if (makeint((eusinteger_t)1L)!=local[0]) goto IF15007;
	local[0]= argv[0];
	goto IF15008;
IF15007:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LISTP(ctx,1,local+0); /*listp*/
	if (w==NIL) goto IF15021;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	if (fqv[157]!=local[0]) goto IF15021;
	local[0]= argv[0];
	goto IF15022;
IF15021:
	local[0]= NIL;
IF15022:
IF15008:
AND14983:
	w = local[0];
	local[0]= w;
BLK14973:
	ctx->vsp=local; return(local[0]);}

/*zerop*/
static pointer F4471zerop(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)NUMEQUAL(ctx,2,local+0); /*=*/
	local[0]= w;
BLK15042:
	ctx->vsp=local; return(local[0]);}

/*plusp*/
static pointer F4474plusp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)GREATERP(ctx,2,local+0); /*>*/
	local[0]= w;
BLK15057:
	ctx->vsp=local; return(local[0]);}

/*minusp*/
static pointer F4477minusp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)LESSP(ctx,2,local+0); /*<*/
	local[0]= w;
BLK15072:
	ctx->vsp=local; return(local[0]);}

/*oddp*/
static pointer F4480oddp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LOGBITP(ctx,2,local+0); /*logbitp*/
	local[0]= w;
BLK15087:
	ctx->vsp=local; return(local[0]);}

/*evenp*/
static pointer F4483evenp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LOGBITP(ctx,2,local+0); /*logbitp*/
	w = ((w)==NIL?T:NIL);
	local[0]= w;
BLK15102:
	ctx->vsp=local; return(local[0]);}

/*logandc1*/
static pointer F4486logandc1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LOGNOT(ctx,1,local+0); /*lognot*/
	local[0]= w;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)LOGAND(ctx,2,local+0); /*logand*/
	local[0]= w;
BLK15121:
	ctx->vsp=local; return(local[0]);}

/*logandc2*/
static pointer F4489logandc2(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)LOGNOT(ctx,1,local+1); /*lognot*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)LOGAND(ctx,2,local+0); /*logand*/
	local[0]= w;
BLK15143:
	ctx->vsp=local; return(local[0]);}

/*ecase*/
static pointer F15165(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST15168:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= fqv[179];
	w = local[0];
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK15166:
	ctx->vsp=local; return(local[0]);}

/*every*/
static pointer F4493every(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST15188:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	if (local[0]!=NIL) goto CON15203;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w==NIL) goto CON15203;
WHL15215:
	if (argv[1]==NIL) goto WHX15216;
	local[1]= argv[0];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	w = local[2];
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)FUNCALL(ctx,2,local+1); /*funcall*/
	if (w!=NIL) goto IF15224;
	w = NIL;
	ctx->vsp=local+1;
	local[0]=w;
	goto BLK15186;
	goto IF15225;
IF15224:
	local[1]= NIL;
IF15225:
	goto WHL15215;
WHX15216:
	local[1]= NIL;
BLK15217:
	goto CON15201;
CON15203:
	local[1]= argv[1];
	w = local[0];
	ctx->vsp=local+2;
	argv[1] = cons(ctx,local[1],w);
	local[1]= makeint((eusinteger_t)0L);
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
WHL15316:
	local[3]= local[1];
	w = local[2];
	if ((eusinteger_t)local[3] >= (eusinteger_t)w) goto WHX15317;
	local[3]= argv[0];
	ctx->vsp=local+4;
	local[4]= makeclosure(codevec,quotevec,CLO15333,env,argv,local);
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(pointer)MAPCAR(ctx,2,local+4); /*mapcar*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)APPLY(ctx,2,local+3); /*apply*/
	if (w!=NIL) goto IF15326;
	w = NIL;
	ctx->vsp=local+3;
	local[0]=w;
	goto BLK15186;
	goto IF15327;
IF15326:
	local[3]= NIL;
IF15327:
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[1] = w;
	goto WHL15316;
WHX15317:
	local[3]= NIL;
BLK15318:
	w = NIL;
	local[1]= w;
	goto CON15201;
CON15272:
	local[1]= NIL;
CON15201:
	w = T;
	local[0]= w;
BLK15186:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO15333(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[1];
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*some*/
static pointer F4496some(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST15378:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[1];
	w = local[0];
	ctx->vsp=local+4;
	argv[1] = cons(ctx,local[3],w);
	local[3]= makeint((eusinteger_t)0L);
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[4]= w;
WHL15435:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX15436;
	local[5]= argv[0];
	ctx->vsp=local+6;
	local[6]= makeclosure(codevec,quotevec,CLO15453,env,argv,local);
	local[7]= argv[1];
	ctx->vsp=local+8;
	w=(pointer)MAPCAR(ctx,2,local+6); /*mapcar*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)APPLY(ctx,2,local+5); /*apply*/
	local[2] = w;
	if (local[2]==NIL) goto IF15444;
	w = local[2];
	ctx->vsp=local+5;
	local[0]=w;
	goto BLK15376;
	goto IF15445;
IF15444:
	local[5]= NIL;
IF15445:
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL15435;
WHX15436:
	local[5]= NIL;
BLK15437:
	w = NIL;
	w = NIL;
	local[0]= w;
BLK15376:
	ctx->vsp=local; return(local[0]);}

/*closure or cleaner*/
static pointer CLO15453(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= env->c.clo.env2[3];
	ctx->vsp=local+2;
	w=(pointer)ELT(ctx,2,local+0); /*elt*/
	local[0]= w;
	ctx->vsp=local; return(local[0]);}

/*reduce*/
static pointer F4501reduce(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[180], &argv[2], n-2, local+0, 0);
	if (n & (1<<0)) goto KEY15513;
	local[0] = makeint((eusinteger_t)0L);
KEY15513:
	if (n & (1<<1)) goto KEY15518;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LENGTH(ctx,1,local+4); /*length*/
	local[1] = w;
KEY15518:
	if (n & (1<<2)) goto KEY15526;
	local[2] = NIL;
KEY15526:
	if (n & (1<<3)) goto KEY15531;
	local[3] = NIL;
KEY15531:
	local[4]= local[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)MINUS(ctx,2,local+4); /*-*/
	local[4]= w;
	if (local[2]==NIL) goto IF15557;
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(pointer)REVERSE(ctx,1,local+5); /*reverse*/
	argv[1] = w;
	local[5]= argv[1];
	goto IF15558;
IF15557:
	local[5]= NIL;
IF15558:
	local[5]= local[4];
	local[6]= makeint((eusinteger_t)1L);
	ctx->vsp=local+7;
	w=(pointer)NUMEQUAL(ctx,2,local+5); /*=*/
	if (w==NIL) goto CON15577;
	if (local[3]!=NIL) goto CON15577;
	local[5]= argv[1];
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)ELT(ctx,2,local+5); /*elt*/
	local[5]= w;
	goto CON15575;
CON15577:
	local[5]= local[4];
	local[6]= makeint((eusinteger_t)0L);
	ctx->vsp=local+7;
	w=(pointer)NUMEQUAL(ctx,2,local+5); /*=*/
	if (w==NIL) goto CON15590;
	if (local[3]==NIL) goto IF15596;
	local[5]= local[3];
	goto IF15597;
IF15596:
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)FUNCALL(ctx,1,local+5); /*funcall*/
	local[5]= w;
IF15597:
	goto CON15575;
CON15590:
	if (local[3]!=NIL) goto IF15610;
	local[5]= argv[0];
	local[6]= argv[1];
	local[7]= local[0];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	local[7]= argv[1];
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)ADD1(ctx,1,local+8); /*1+*/
	local[0] = w;
	local[8]= local[0];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)FUNCALL(ctx,3,local+5); /*funcall*/
	local[3] = w;
	local[5]= local[4];
	local[6]= makeint((eusinteger_t)2L);
	ctx->vsp=local+7;
	w=(pointer)MINUS(ctx,2,local+5); /*-*/
	local[4] = w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[0] = w;
	local[5]= local[0];
	goto IF15611;
IF15610:
	local[5]= NIL;
IF15611:
	local[5]= makeint((eusinteger_t)0L);
	local[6]= local[4];
WHL15689:
	local[7]= local[5];
	w = local[6];
	if ((eusinteger_t)local[7] >= (eusinteger_t)w) goto WHX15690;
	local[7]= argv[0];
	local[8]= local[3];
	local[9]= argv[1];
	local[10]= local[0];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)PLUS(ctx,2,local+10); /*+*/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)ELT(ctx,2,local+9); /*elt*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,3,local+7); /*funcall*/
	local[3] = w;
	local[7]= local[5];
	ctx->vsp=local+8;
	w=(pointer)ADD1(ctx,1,local+7); /*1+*/
	local[5] = w;
	goto WHL15689;
WHX15690:
	local[7]= NIL;
BLK15691:
	w = NIL;
	local[5]= local[3];
	goto CON15575;
CON15605:
	local[5]= NIL;
CON15575:
	w = local[5];
	local[0]= w;
BLK15499:
	ctx->vsp=local; return(local[0]);}

/*merge-list*/
static pointer F4504merge_list(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	local[0]= NIL;
	local[1]= NIL;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= NIL;
	local[5]= NIL;
	local[6]= NIL;
WHL15763:
	if (argv[1]==NIL) goto WHX15764;
	local[7]= argv[2];
	local[8]= argv[3];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,2,local+8); /*funcall*/
	local[8]= w;
	local[9]= argv[3];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[10]= (w)->c.cons.car;
	ctx->vsp=local+11;
	w=(pointer)FUNCALL(ctx,2,local+9); /*funcall*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,3,local+7); /*funcall*/
	if (w!=NIL) goto WHX15764;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[1] = (w)->c.cons.cdr;
	w = local[7];
	local[7]= w;
	w = local[1];
	ctx->vsp=local+8;
	local[1] = cons(ctx,local[7],w);
	goto WHL15763;
WHX15764:
	local[7]= NIL;
BLK15765:
	local[7]= local[1];
	ctx->vsp=local+8;
	w=(pointer)NREVERSE(ctx,1,local+7); /*nreverse*/
	local[1] = w;
	local[2] = argv[0];
WHL15855:
	if (argv[1]==NIL) goto WHX15856;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.cdr==NIL) goto WHX15856;
	local[7]= argv[3];
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[8]= (w)->c.cons.car;
	ctx->vsp=local+9;
	w=(pointer)FUNCALL(ctx,2,local+7); /*funcall*/
	local[4] = w;
WHL15885:
	if (local[2]==NIL) goto WHX15886;
	local[7]= argv[2];
	local[8]= argv[3];
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[9]= (w)->c.cons.car;
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,2,local+8); /*funcall*/
	local[8]= w;
	local[9]= local[4];
	ctx->vsp=local+10;
	w=(pointer)FUNCALL(ctx,3,local+7); /*funcall*/
	if (w==NIL) goto WHX15886;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2] = (w)->c.cons.cdr;
	w = local[7];
	goto WHL15885;
WHX15886:
	local[7]= NIL;
BLK15887:
	if (local[2]==NIL) goto IF15947;
	w=local[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w=argv[1];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6] = (w)->c.cons.cdr;
	local[7]= local[2];
	local[8]= argv[1];
	ctx->vsp=local+9;
	w=(pointer)RPLACD2(ctx,2,local+7); /*rplacd2*/
	local[7]= argv[1];
	local[8]= local[5];
	ctx->vsp=local+9;
	w=(pointer)RPLACD2(ctx,2,local+7); /*rplacd2*/
	local[2] = argv[1];
	argv[1] = local[6];
	local[7]= argv[1];
	goto IF15948;
IF15947:
	local[7]= NIL;
IF15948:
	goto WHL15855;
WHX15856:
	local[7]= NIL;
BLK15857:
	local[7]= local[1];
	local[8]= argv[0];
	local[9]= argv[1];
	ctx->vsp=local+10;
	w=(pointer)NCONC(ctx,3,local+7); /*nconc*/
	local[0]= w;
BLK15733:
	ctx->vsp=local; return(local[0]);}

/*merge*/
static pointer F4507merge(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<4) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[181], &argv[4], n-4, local+0, 0);
	if (n & (1<<0)) goto KEY16028;
	local[0] = (pointer)get_sym_func(fqv[82]);
KEY16028:
	local[1]= argv[0];
	if (loadglobal(fqv[19])!=local[1]) goto IF16039;
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w==NIL) goto IF16039;
	local[1]= argv[2];
	ctx->vsp=local+2;
	w=(pointer)LISTP(ctx,1,local+1); /*listp*/
	if (w==NIL) goto IF16039;
	local[1]= argv[1];
	local[2]= argv[2];
	local[3]= argv[3];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)F4504merge_list(ctx,4,local+1); /*merge-list*/
	local[1]= w;
	goto IF16040;
IF16039:
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= argv[2];
	ctx->vsp=local+3;
	w=(pointer)LENGTH(ctx,1,local+2); /*length*/
	local[2]= w;
	local[3]= local[1];
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)PLUS(ctx,2,local+3); /*+*/
	local[3]= w;
	local[4]= argv[0];
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)F4348make_sequence(ctx,2,local+4); /*make-sequence*/
	local[4]= w;
	local[5]= makeint((eusinteger_t)0L);
	local[6]= makeint((eusinteger_t)0L);
	local[7]= makeint((eusinteger_t)0L);
	local[8]= NIL;
	local[9]= NIL;
	local[10]= NIL;
WHL16105:
	local[11]= local[7];
	local[12]= local[3];
	ctx->vsp=local+13;
	w=(pointer)LESSP(ctx,2,local+11); /*<*/
	if (w==NIL) goto WHX16106;
	local[11]= local[5];
	local[12]= local[1];
	ctx->vsp=local+13;
	w=(pointer)GREQP(ctx,2,local+11); /*>=*/
	if (w==NIL) goto CON16116;
	local[11]= argv[2];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[10] = w;
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[6] = w;
	local[11]= local[6];
	goto CON16114;
CON16116:
	local[11]= local[6];
	local[12]= local[2];
	ctx->vsp=local+13;
	w=(pointer)GREQP(ctx,2,local+11); /*>=*/
	if (w==NIL) goto CON16141;
	local[11]= argv[1];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[10] = w;
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[5] = w;
	local[11]= local[5];
	goto CON16114;
CON16141:
	local[11]= argv[1];
	local[12]= local[5];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[8] = w;
	local[11]= argv[2];
	local[12]= local[6];
	ctx->vsp=local+13;
	w=(pointer)ELT(ctx,2,local+11); /*elt*/
	local[9] = w;
	local[11]= argv[3];
	local[12]= local[0];
	local[13]= local[8];
	ctx->vsp=local+14;
	w=(pointer)FUNCALL(ctx,2,local+12); /*funcall*/
	local[12]= w;
	local[13]= local[0];
	local[14]= local[9];
	ctx->vsp=local+15;
	w=(pointer)FUNCALL(ctx,2,local+13); /*funcall*/
	local[13]= w;
	ctx->vsp=local+14;
	w=(pointer)FUNCALL(ctx,3,local+11); /*funcall*/
	if (w==NIL) goto IF16186;
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[5] = w;
	local[10] = local[8];
	local[11]= local[10];
	goto IF16187;
IF16186:
	local[11]= local[6];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[6] = w;
	local[10] = local[9];
	local[11]= local[10];
IF16187:
	goto CON16114;
CON16166:
	local[11]= NIL;
CON16114:
	local[11]= local[4];
	local[12]= local[7];
	local[13]= local[10];
	ctx->vsp=local+14;
	w=(pointer)SETELT(ctx,3,local+11); /*setelt*/
	local[11]= local[7];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[7] = w;
	goto WHL16105;
WHX16106:
	local[11]= NIL;
BLK16107:
	w = local[4];
	local[1]= w;
IF16040:
	w = local[1];
	local[0]= w;
BLK16013:
	ctx->vsp=local; return(local[0]);}

/*expt*/
static pointer F4510expt(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[1];
	if (!isint(w)) goto CON16277;
	local[0]= argv[1];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)GREQP(ctx,2,local+0); /*>=*/
	if (w==NIL) goto CON16277;
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)F4471zerop(ctx,1,local+0); /*zerop*/
	if (w==NIL) goto IF16287;
	local[0]= makeint((eusinteger_t)1L);
	goto IF16288;
IF16287:
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)1L);
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)SUB1(ctx,1,local+2); /*1-*/
	local[2]= w;
WHL16322:
	local[3]= local[2];
	w = makeint((eusinteger_t)0L);
	if ((eusinteger_t)local[3] <= (eusinteger_t)w) goto WHX16323;
	local[3]= local[2];
	w = local[1];
	if ((eusinteger_t)local[3] <= (eusinteger_t)w) goto CON16332;
	local[3]= local[0];
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)TIMES(ctx,2,local+3); /***/
	local[0] = w;
	local[3]= local[2];
	w = local[1];
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[2] = (pointer)((eusinteger_t)local[3] - (eusinteger_t)w);
	local[3]= local[1];
	local[4]= makeint((eusinteger_t)1L);
	ctx->vsp=local+5;
	w=(pointer)ASH(ctx,2,local+3); /*ash*/
	local[1] = w;
	local[3]= local[1];
	goto CON16330;
CON16332:
	local[3]= local[0];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)TIMES(ctx,2,local+3); /***/
	local[0] = w;
	local[3]= local[2];
	ctx->vsp=local+4;
	w=(pointer)SUB1(ctx,1,local+3); /*1-*/
	local[2] = w;
	local[3]= local[2];
	goto CON16330;
CON16364:
	local[3]= NIL;
CON16330:
	goto WHL16322;
WHX16323:
	local[3]= NIL;
BLK16324:
	w = local[0];
	local[0]= w;
IF16288:
	goto CON16275;
CON16277:
	local[0]= argv[1];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)LOG(ctx,1,local+1); /*log*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)EXP(ctx,1,local+0); /*exp*/
	local[0]= w;
	goto CON16275;
CON16387:
	local[0]= NIL;
CON16275:
	w = local[0];
	local[0]= w;
BLK16263:
	ctx->vsp=local; return(local[0]);}

/*signum*/
static pointer F4513signum(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F4471zerop(ctx,1,local+0); /*zerop*/
	if (w==NIL) goto IF16413;
	local[0]= argv[0];
	goto IF16414;
IF16413:
	local[0]= argv[0];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)ABS(ctx,1,local+1); /*abs*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)QUOTIENT(ctx,2,local+0); /*/*/
	local[0]= w;
IF16414:
	w = local[0];
	local[0]= w;
BLK16403:
	ctx->vsp=local; return(local[0]);}

/*rad2deg*/
static pointer F4516rad2deg(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeflt(3.6000000000000000000000e+02);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= makeflt(6.2831853071795862319959e+00);
	ctx->vsp=local+2;
	w=(pointer)QUOTIENT(ctx,2,local+0); /*/*/
	local[0]= w;
BLK16430:
	ctx->vsp=local; return(local[0]);}

/*deg2rad*/
static pointer F4519deg2rad(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeflt(6.2831853071795862319959e+00);
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)TIMES(ctx,2,local+0); /***/
	local[0]= w;
	local[1]= makeflt(3.6000000000000000000000e+02);
	ctx->vsp=local+2;
	w=(pointer)QUOTIENT(ctx,2,local+0); /*/*/
	local[0]= w;
BLK16450:
	ctx->vsp=local; return(local[0]);}

/*defsetf*/
static pointer F16469(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST16472:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	if ((w)->c.cons.car==NIL) goto CON16485;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (issymbol(w)) goto OR16494;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)F4447functionp(ctx,1,local+1); /*functionp*/
	if (w!=NIL) goto OR16494;
	goto CON16485;
OR16494:
	local[1]= fqv[6];
	local[2]= fqv[182];
	local[3]= fqv[33];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[33];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[33];
	local[6]= fqv[183];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[184];
	local[4]= fqv[33];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[33];
	local[6]= fqv[185];
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
	local[4]= fqv[184];
	local[5]= fqv[33];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[33];
	local[7]= fqv[186];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[182];
	local[6]= fqv[33];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.cdr;
	ctx->vsp=local+8;
	w=(pointer)ENDP(ctx,1,local+7); /*endp*/
	if (w!=NIL) goto IF16620;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (isstring(w)) goto IF16636;
	local[7]= fqv[187];
	ctx->vsp=local+8;
	w=(pointer)SIGERROR(ctx,1,local+7); /*error*/
	local[7]= w;
	goto IF16637;
IF16636:
	local[7]= NIL;
IF16637:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.cdr;
	ctx->vsp=local+8;
	w=(pointer)ENDP(ctx,1,local+7); /*endp*/
	if (w!=NIL) goto IF16655;
	local[7]= fqv[188];
	ctx->vsp=local+8;
	w=(pointer)SIGERROR(ctx,1,local+7); /*error*/
	local[7]= w;
	goto IF16656;
IF16655:
	local[7]= NIL;
IF16656:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[7]= (w)->c.cons.car;
	goto IF16621;
IF16620:
	local[7]= NIL;
IF16621:
	local[8]= fqv[33];
	local[9]= fqv[189];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	local[8]= cons(ctx,local[8],w);
	ctx->vsp=local+9;
	w=(pointer)LIST(ctx,1,local+8); /*list*/
	ctx->vsp=local+8;
	w = cons(ctx,local[7],w);
	ctx->vsp=local+7;
	w = cons(ctx,local[6],w);
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[33];
	local[7]= argv[0];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
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
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto CON16483;
CON16485:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,1,local+1,&ftab[3],fqv[190]); /*list-length*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)1L);
	ctx->vsp=local+3;
	w=(pointer)NUMEQUAL(ctx,2,local+1); /*=*/
	if (w!=NIL) goto IF16719;
	local[1]= fqv[191];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
	goto IF16720;
IF16719:
	local[1]= NIL;
IF16720:
	local[1]= fqv[6];
	local[2]= fqv[182];
	local[3]= fqv[33];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[33];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[33];
	local[6]= fqv[185];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[184];
	local[4]= fqv[33];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[33];
	local[6]= fqv[183];
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
	local[4]= fqv[184];
	local[5]= fqv[33];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[33];
	local[7]= fqv[186];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[33];
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
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto CON16483;
CON16714:
	local[1]= NIL;
CON16483:
	w = local[1];
	local[0]= w;
BLK16470:
	ctx->vsp=local; return(local[0]);}

/*define-setf-method*/
static pointer F16845(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
RST16848:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-1);
	local[1]= fqv[6];
	local[2]= fqv[182];
	local[3]= fqv[33];
	local[4]= argv[0];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	local[4]= fqv[124];
	local[5]= fqv[192];
	local[6]= local[0];
	local[7]= NIL;
	ctx->vsp=local+8;
	w=(pointer)APPEND(ctx,2,local+6); /*append*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[33];
	local[6]= fqv[186];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	local[3]= fqv[184];
	local[4]= fqv[33];
	local[5]= argv[0];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[33];
	local[6]= fqv[185];
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
	local[4]= fqv[184];
	local[5]= fqv[33];
	local[6]= argv[0];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	local[6]= fqv[33];
	local[7]= fqv[183];
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,1,local+7); /*list*/
	ctx->vsp=local+7;
	local[6]= cons(ctx,local[6],w);
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	local[5]= fqv[33];
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
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	w = cons(ctx,local[1],w);
	local[0]= w;
BLK16846:
	ctx->vsp=local; return(local[0]);}

/*setf-expand-1*/
static pointer F4521setf_expand_1(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= NIL;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)F4131macroexpand(ctx,1,local+1); /*macroexpand*/
	argv[0] = w;
	w = argv[0];
	if (!iscons(w)) goto CON17003;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	if (fqv[193]!=local[1]) goto CON17003;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[193];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	local[2]= cons(ctx,local[2],w);
	ctx->vsp=local+3;
	w=(pointer)F4521setf_expand_1(ctx,2,local+1); /*setf-expand-1*/
	local[1]= w;
	goto CON17001;
CON17003:
	w = argv[0];
	if (!issymbol(w)) goto CON17046;
	local[1]= fqv[28];
	local[2]= argv[0];
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto CON17001;
CON17046:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!issymbol(w)) goto CON17062;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[183];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[0] = w;
	if (local[0]==NIL) goto CON17062;
	local[1]= local[0];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.cdr;
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,1,local+3); /*list*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)APPEND(ctx,2,local+2); /*append*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto CON17001;
CON17062:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!issymbol(w)) goto CON17101;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[194];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[0] = w;
	if (local[0]==NIL) goto CON17101;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[185];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	if (w==NIL) goto CON17101;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	if (fqv[66]==local[1]) goto CON17101;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	if (fqv[146]==local[1]) goto CON17101;
	local[1]= fqv[195];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	local[3]= fqv[33];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.car;
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	ctx->vsp=local+4;
	local[3]= cons(ctx,local[3],w);
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4]= (w)->c.cons.cdr;
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	ctx->vsp=local+3;
	w = cons(ctx,local[2],w);
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto CON17001;
CON17101:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)F4468macro_function(ctx,1,local+1); /*macro-function*/
	if (w==NIL) goto CON17195;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)F4131macroexpand(ctx,1,local+1); /*macroexpand*/
	local[1]= w;
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)F4521setf_expand_1(ctx,2,local+1); /*setf-expand-1*/
	local[1]= w;
	goto CON17001;
CON17195:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	local[2]= fqv[185];
	ctx->vsp=local+3;
	w=(pointer)GETPROP(ctx,2,local+1); /*get*/
	local[0] = w;
	if (local[0]==NIL) goto CON17212;
	local[1]= fqv[196];
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.car;
	ctx->vsp=local+4;
	w=(pointer)APPEND(ctx,2,local+2); /*append*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,1,local+2); /*list*/
	local[2]= w;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	ctx->vsp=local+4;
	w=(pointer)APPEND(ctx,3,local+1); /*append*/
	local[1]= w;
	local[2]= argv[1];
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[3]= (w)->c.cons.cdr;
	ctx->vsp=local+4;
	w=(pointer)APPLY(ctx,3,local+1); /*apply*/
	local[1]= w;
	goto CON17001;
CON17212:
	local[1]= fqv[197];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,1,local+1); /*error*/
	local[1]= w;
	goto CON17001;
CON17265:
	local[1]= NIL;
CON17001:
	w = local[1];
	local[0]= w;
BLK16971:
	ctx->vsp=local; return(local[0]);}

/*setf-expand*/
static pointer F4523setf_expand(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)ENDP(ctx,1,local+0); /*endp*/
	if (w==NIL) goto CON17285;
	local[0]= NIL;
	goto CON17283;
CON17285:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.cdr;
	ctx->vsp=local+1;
	w=(pointer)ENDP(ctx,1,local+0); /*endp*/
	if (w==NIL) goto CON17292;
	local[0]= fqv[198];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)SIGERROR(ctx,2,local+0); /*error*/
	local[0]= w;
	goto CON17283;
CON17292:
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)F4521setf_expand_1(ctx,2,local+0); /*setf-expand-1*/
	local[0]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	ctx->vsp=local+2;
	w=(pointer)F4523setf_expand(ctx,1,local+1); /*setf-expand*/
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	goto CON17283;
CON17306:
	local[0]= NIL;
CON17283:
	w = local[0];
	local[0]= w;
BLK17273:
	ctx->vsp=local; return(local[0]);}

/*setf*/
static pointer F17336(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST17339:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)ENDP(ctx,1,local+1); /*endp*/
	if (w==NIL) goto CON17350;
	local[1]= NIL;
	goto CON17348;
CON17350:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	ctx->vsp=local+2;
	w=(pointer)ENDP(ctx,1,local+1); /*endp*/
	if (w==NIL) goto CON17357;
	local[1]= fqv[199];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)SIGERROR(ctx,2,local+1); /*error*/
	local[1]= w;
	goto CON17348;
CON17357:
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.cdr;
	ctx->vsp=local+2;
	w=(pointer)ENDP(ctx,1,local+1); /*endp*/
	if (w==NIL) goto CON17371;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	w=local[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[2]= (w)->c.cons.car;
	ctx->vsp=local+3;
	w=(pointer)F4521setf_expand_1(ctx,2,local+1); /*setf-expand-1*/
	local[1]= w;
	goto CON17348;
CON17371:
	local[1]= fqv[6];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F4523setf_expand(ctx,1,local+2); /*setf-expand*/
	ctx->vsp=local+2;
	local[1]= cons(ctx,local[1],w);
	goto CON17348;
CON17398:
	local[1]= NIL;
CON17348:
	w = local[1];
	local[0]= w;
BLK17337:
	ctx->vsp=local; return(local[0]);}

/*multiple-value-bind*/
static pointer F17410(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST17413:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= fqv[200];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= NIL;
	local[3]= makeint((eusinteger_t)0L);
	local[4]= NIL;
	local[5]= argv[0];
WHL17457:
	if (local[5]==NIL) goto WHX17458;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[6]= (w)->c.cons.car;
	w=local[5];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5] = (w)->c.cons.cdr;
	w = local[6];
	local[4] = w;
	local[6]= local[4];
	local[7]= fqv[55];
	local[8]= local[1];
	local[9]= local[3];
	ctx->vsp=local+10;
	w=(pointer)LIST(ctx,1,local+9); /*list*/
	ctx->vsp=local+9;
	w = cons(ctx,local[8],w);
	ctx->vsp=local+8;
	local[7]= cons(ctx,local[7],w);
	ctx->vsp=local+8;
	w=(pointer)LIST(ctx,2,local+6); /*list*/
	local[6]= w;
	w = local[2];
	ctx->vsp=local+7;
	local[2] = cons(ctx,local[6],w);
	local[6]= local[3];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[3] = w;
	goto WHL17457;
WHX17458:
	local[6]= NIL;
BLK17459:
	w = NIL;
	local[4]= fqv[50];
	local[5]= local[1];
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,1,local+6); /*list*/
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	w = local[2];
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	w = local[0];
	ctx->vsp=local+6;
	w = cons(ctx,local[5],w);
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	local[0]= w;
BLK17411:
	ctx->vsp=local; return(local[0]);}

/*multiple-value-setq*/
static pointer F17566(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= makeint((eusinteger_t)0L);
	local[1]= fqv[201];
	ctx->vsp=local+2;
	w=(pointer)GENSYM(ctx,1,local+1); /*gensym*/
	local[1]= w;
	local[2]= NIL;
	local[3]= NIL;
	local[4]= argv[0];
WHL17613:
	if (local[4]==NIL) goto WHX17614;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[0];
	local[6]= fqv[202];
	ctx->vsp=local+7;
	w=(pointer)F4288assoc(ctx,2,local+5); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	local[6]= local[1];
	ctx->vsp=local+7;
	w=(pointer)LIST(ctx,2,local+5); /*list*/
	local[5]= w;
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	local[5]= local[3];
	w = local[2];
	ctx->vsp=local+6;
	local[2] = cons(ctx,local[5],w);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[0] = w;
	goto WHL17613;
WHX17614:
	local[5]= NIL;
BLK17615:
	w = NIL;
	local[3]= fqv[5];
	local[4]= local[1];
	local[5]= argv[1];
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	local[4]= cons(ctx,local[4],w);
	ctx->vsp=local+5;
	w=(pointer)LIST(ctx,1,local+4); /*list*/
	local[4]= w;
	local[5]= fqv[28];
	w = local[2];
	ctx->vsp=local+6;
	local[5]= cons(ctx,local[5],w);
	ctx->vsp=local+6;
	w=(pointer)LIST(ctx,1,local+5); /*list*/
	ctx->vsp=local+5;
	w = cons(ctx,local[4],w);
	ctx->vsp=local+4;
	w = cons(ctx,local[3],w);
	local[0]= w;
BLK17567:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___common(ctx,n,argv,env)
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
	local[0]= fqv[203];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF17743;
	local[0]= fqv[204];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[49],w);
	goto IF17744;
IF17743:
	local[0]= fqv[205];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF17744:
	local[0]= fqv[206];
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= fqv[207];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[208];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[209];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[210];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[211];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[212];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[213];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	local[0]= fqv[214];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[215],module,F4125lisp_implementation_type,fqv[216]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[2],module,F4127lisp_implementation_version,fqv[217]);
	local[0]= NIL;
	storeglobal(fqv[218],local[0]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[219],module,F4131macroexpand,fqv[220]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[15],module,F4775,fqv[221]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[222],module,F4838,fqv[223]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[224],module,F4897,fqv[225]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[226],module,F4930,fqv[227]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[47],module,F4964,fqv[228]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[229],module,F5011,fqv[230]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[231],module,F5048,fqv[232]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[56],module,F5169,fqv[233]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[234],module,F5223,fqv[235]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[236],module,F5277,fqv[237]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[238],module,F5331,fqv[239]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[240],module,F5385,fqv[241]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[242],module,F5552,fqv[243]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[244],module,F5633,fqv[245]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[246],module,F5695,fqv[247]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[248],module,F5757,fqv[249]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[62],module,F5911,fqv[250]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[64],module,F6068,fqv[251]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[252],module,F6295,fqv[253]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[254],module,F6522,fqv[255]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[69],module,F6599,fqv[256]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[257],module,F6789,fqv[258]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[259],module,F7018,fqv[260]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[261],module,F7247,fqv[262]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[263],module,F7292,fqv[264]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[265],module,F4160casebody,fqv[266]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[267],module,F4163casehead,fqv[268]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[269],module,F4166case1,fqv[270]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[179],module,F7473,fqv[271]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[272],module,F4170classcasehead,fqv[273]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[274],module,F4173classcase1,fqv[275]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[276],module,F7644,fqv[277]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[155],module,F4176string,fqv[278]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[279],module,F4180alias,fqv[280]);
	local[0]= fqv[190];
	local[1]= fqv[54];
	ctx->vsp=local+2;
	w=(pointer)F4180alias(ctx,2,local+0); /*alias*/
	local[0]= fqv[281];
	local[1]= fqv[66];
	ctx->vsp=local+2;
	w=(pointer)F4180alias(ctx,2,local+0); /*alias*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[282],module,F4186caaar,fqv[283]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[284],module,F4189caadr,fqv[285]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[286],module,F4192cadar,fqv[287]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[288],module,F4195cdaar,fqv[289]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[290],module,F4198cdadr,fqv[291]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[292],module,F4201cddar,fqv[293]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[294],module,F4204cdddr,fqv[295]);
	local[0]= fqv[296];
	local[1]= fqv[16];
	ctx->vsp=local+2;
	w=(pointer)F4180alias(ctx,2,local+0); /*alias*/
	local[0]= fqv[297];
	local[1]= fqv[298];
	ctx->vsp=local+2;
	w=(pointer)F4180alias(ctx,2,local+0); /*alias*/
	local[0]= fqv[299];
	local[1]= fqv[300];
	ctx->vsp=local+2;
	w=(pointer)F4180alias(ctx,2,local+0); /*alias*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[301],module,F4210fourth,fqv[302]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[303],module,F4213fifth,fqv[304]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[305],module,F4216sixth,fqv[306]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[307],module,F4219seventh,fqv[308]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[309],module,F4222eighth,fqv[310]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[311],module,F4225cddddr,fqv[312]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[313],module,F4228cadddr,fqv[314]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[315],module,F4231caaddr,fqv[316]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[317],module,F4234cdaddr,fqv[318]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[319],module,F4237caddddr,fqv[320]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[321],module,F4240flatten,fqv[322]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[323],module,F4243list_insert,fqv[324]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[325],module,F4246list_delete,fqv[326]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[327],module,F4249adjoin,fqv[328]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[329],module,F4252union,fqv[330]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[331],module,F4255intersection,fqv[332]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[333],module,F4258set_difference,fqv[334]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[335],module,F4261set_exclusive_or,fqv[336]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[337],module,F4264rotate_list,fqv[338]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[339],module,F4267last,fqv[340]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[341],module,F4270copy_tree,fqv[342]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[343],module,F4273copy_list,fqv[344]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[345],module,F4276nreconc,fqv[346]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[347],module,F4279rassoc,fqv[348]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[349],module,F4282acons,fqv[350]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[22],module,F4285member,fqv[351]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[352],module,F4288assoc,fqv[353]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[354],module,F4291subsetp,fqv[355]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[356],module,F4294maplist,fqv[357]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[358],module,F4297mapcon,fqv[359]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[360],module,F4300find,fqv[361]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[362],module,F4303find_if,fqv[363]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[364],module,F4306find_if_not,fqv[365]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[366],module,F4309position,fqv[367]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[368],module,F4312position_if,fqv[369]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[370],module,F4315position_if_not,fqv[371]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[372],module,F4318count,fqv[373]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[374],module,F4321count_if,fqv[375]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[376],module,F4324count_if_not,fqv[377]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[378],module,F4327member_if,fqv[379]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[380],module,F4330member_if_not,fqv[381]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[382],module,F4333collect_if,fqv[383]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[384],module,F4336collect_instances,fqv[385]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[386],module,F4339pairlis,fqv[387]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[388],module,F4342transpose_list,fqv[389]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[390],module,F4345make_list,fqv[391]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[392],module,F4348make_sequence,fqv[393]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[394],module,F4351fill,fqv[395]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[396],module,F4354replace,fqv[397]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[398],module,F4357remove,fqv[399]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[400],module,F4360remove_if,fqv[401]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[402],module,F4363remove_if_not,fqv[403]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[404],module,F4366delete,fqv[405]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[406],module,F4369delete_if,fqv[407]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[408],module,F4372delete_if_not,fqv[409]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[410],module,F4375substitute,fqv[411]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[412],module,F4378substitute_if,fqv[413]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[414],module,F4381substitute_if_not,fqv[415]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[416],module,F4384nsubstitute,fqv[417]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[418],module,F4387nsubstitute_if,fqv[419]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[420],module,F4390nsubstitute_if_not,fqv[421]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[422],module,F4393unique,fqv[423]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[424],module,F4396remove_duplicates,fqv[425]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[426],module,F4399extream,fqv[427]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[428],module,F12680,fqv[429]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[430],module,F12740,fqv[431]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[432],module,F12794,fqv[433]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[132],module,F12838,fqv[434]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[435],module,F12870,fqv[436]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[437],module,F4408send_all,fqv[438]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[439],module,F4411resend,fqv[440]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[441],module,F12983,fqv[442]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[443],module,F13064,fqv[444]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[445],module,F4416make_instance,fqv[446]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[447],module,F13261,fqv[448]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[449],module,F4420delete_method,fqv[450]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[160],module,F4423make_class,fqv[451]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[452],module,F14087,fqv[453]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[454],module,F14169,fqv[455]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[456],module,F4430readtablep,fqv[457]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[458],module,F4433copy_readtable,fqv[459]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[460],module,F4436set_syntax_from_char,fqv[461]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[462],module,F4441keywordp,fqv[463]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[464],module,F4444constantp,fqv[465]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[466],module,F4447functionp,fqv[467]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[468],module,F4450vector_class_p,fqv[469]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[470],module,F4453compiled_function_p,fqv[471]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[472],module,F4456input_stream_p,fqv[473]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[474],module,F4459output_stream_p,fqv[475]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[476],module,F4462io_stream_p,fqv[477]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[478],module,F4465special_form_p,fqv[479]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[480],module,F4468macro_function,fqv[481]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[482],module,F4471zerop,fqv[483]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[484],module,F4474plusp,fqv[485]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[486],module,F4477minusp,fqv[487]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[488],module,F4480oddp,fqv[489]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[490],module,F4483evenp,fqv[491]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[492],module,F4486logandc1,fqv[493]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[494],module,F4489logandc2,fqv[495]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[496],module,F15165,fqv[497]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[498],module,F4493every,fqv[499]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[500],module,F4496some,fqv[501]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[502],module,F4501reduce,fqv[503]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[504],module,F4504merge_list,fqv[505]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[506],module,F4507merge,fqv[507]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[508],module,F4510expt,fqv[509]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[510],module,F4513signum,fqv[511]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[512],module,F4516rad2deg,fqv[513]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[514],module,F4519deg2rad,fqv[515]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[516],module,F16469,fqv[517]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[518],module,F16845,fqv[519]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[520],module,F4521setf_expand_1,fqv[521]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[522],module,F4523setf_expand,fqv[523]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[17],module,F17336,fqv[524]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[525],module,F17410,fqv[526]);
	ctx->vsp=local+0;
	compmacro(ctx,fqv[527],module,F17566,fqv[528]);
	local[0]= fqv[281];
	local[1]= fqv[66];
	ctx->vsp=local+2;
	w=(pointer)F4180alias(ctx,2,local+0); /*alias*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<4; i++) ftab[i]=fcallx;
}
