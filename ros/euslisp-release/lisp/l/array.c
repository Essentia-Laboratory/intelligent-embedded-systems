/* ./array.c :  entry=array */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "array.h"
#pragma init (register_array)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___array();
extern pointer build_quote_vector();
static int register_array()
  { add_module_initializer("___array", ___array);}

static pointer F57028fill_initial_contents();
static pointer F57031make_array();
static pointer F57034array_total_size();
static pointer F57037fill_pointer();
static pointer F57040array_rank();
static pointer F57043array_dimensions();
static pointer F57046array_dimension();
static pointer F57049array_vector();
static pointer F57052row_major_aref();
static pointer F57055list_dimensions();
static pointer F57058read_array();
static pointer F57061read_float_array();
static pointer F57064read_integer_array();
static pointer F57074float_vector_p();
static pointer F57077integer_vector_p();
static pointer F57080bit_vector_p();
static pointer F57083matrixp();
static pointer F57086make_matrix();
static pointer F57089matrix_row();
static pointer F57092matrix_column();
static pointer F57095set_matrix_row();
static pointer F57098set_matrix_column();
static pointer F57101replace_matrix();
static pointer F57104copy_matrix();
static pointer F57107scale_matrix();
static pointer F57110matrix();
static pointer F57113acos();
static pointer F57116asin();
static pointer F57119unit_matrix();
static pointer F57122m__();
static pointer F57125simultaneous_equation();
static pointer F57128inverse_matrix();
static pointer F57131vector_x();
static pointer F57134vector_y();
static pointer F57137vector_z();
static pointer F57140v_();
static pointer F57143euler_matrix();
static pointer F57146rpy_matrix();

/*:elmtype*/
static pointer M57230vectorclass_elmtype(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	w = argv[0]->c.obj.iv[8];
	local[0]= w;
BLK57231:
	ctx->vsp=local; return(local[0]);}

/*:element-type*/
static pointer M57246vectorclass_element_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[8];
	local[1]= fqv[0];
	ctx->vsp=local+2;
	w=(*ftab[0])(ctx,2,local+0,&ftab[0],fqv[1]); /*assoc*/
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w=(w)->c.cons.cdr;
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	local[0]= w;
BLK57247:
	ctx->vsp=local; return(local[0]);}

/*:elmtype*/
static pointer M57281vector_elmtype(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)GETCLASS(ctx,1,local+0); /*class*/
	local[0]= w;
	local[1]= fqv[2];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK57282:
	ctx->vsp=local; return(local[0]);}

/*:element-type*/
static pointer M57302vector_element_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)GETCLASS(ctx,1,local+0); /*class*/
	local[0]= w;
	local[1]= fqv[3];
	ctx->vsp=local+2;
	w=(pointer)SEND(ctx,2,local+0); /*send*/
	local[0]= w;
BLK57303:
	ctx->vsp=local; return(local[0]);}

/*:element-type*/
static pointer M57353array_element_type(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)F57074float_vector_p(ctx,1,local+0); /*float-vector-p*/
	if (w==NIL) goto CON57368;
	local[0]= fqv[4];
	goto CON57366;
CON57368:
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)F57077integer_vector_p(ctx,1,local+0); /*integer-vector-p*/
	if (w==NIL) goto CON57377;
	local[0]= fqv[5];
	goto CON57366;
CON57377:
	w = argv[0]->c.obj.iv[1];
	if (!isstring(w)) goto CON57386;
	local[0]= fqv[6];
	goto CON57366;
CON57386:
	local[0]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+1;
	w=(pointer)F57080bit_vector_p(ctx,1,local+0); /*bit-vector-p*/
	if (w==NIL) goto CON57393;
	local[0]= fqv[7];
	goto CON57366;
CON57393:
	local[0]= T;
	goto CON57366;
CON57402:
	local[0]= NIL;
CON57366:
	w = local[0];
	local[0]= w;
BLK57354:
	ctx->vsp=local; return(local[0]);}

/*fill-initial-contents*/
static pointer F57028fill_initial_contents(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=4) maerror();
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[0]= (w)->c.cons.car;
	w=argv[2];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	argv[2] = (w)->c.cons.cdr;
	w = local[0];
	local[0]= w;
	local[1]= makeint((eusinteger_t)0L);
	if (argv[2]==NIL) goto CON57475;
	local[2]= (pointer)get_sym_func(fqv[8]);
	local[3]= argv[2];
	ctx->vsp=local+4;
	w=(pointer)APPLY(ctx,2,local+2); /*apply*/
	local[1] = w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= local[0];
WHL57515:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX57516;
	local[4]= argv[0];
	local[5]= argv[1];
	local[6]= argv[2];
	local[7]= argv[3];
	local[8]= local[2];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)F57028fill_initial_contents(ctx,4,local+4); /*fill-initial-contents*/
	local[4]= argv[1];
	local[5]= local[1];
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	argv[1] = w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL57515;
WHX57516:
	local[4]= NIL;
BLK57517:
	w = NIL;
	local[2]= w;
	goto CON57473;
CON57475:
	local[2]= makeint((eusinteger_t)0L);
	local[3]= argv[3];
	ctx->vsp=local+4;
	w=(pointer)LENGTH(ctx,1,local+3); /*length*/
	local[3]= w;
WHL57586:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX57587;
	local[4]= argv[0];
	local[5]= argv[1];
	local[6]= argv[3];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)ELT(ctx,2,local+6); /*elt*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)ASET(ctx,3,local+4); /*aset*/
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	argv[1] = w;
	local[4]= local[1];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[1] = w;
	local[4]= local[1];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)GREATERP(ctx,2,local+4); /*>*/
	if (w==NIL) goto IF57625;
	local[4]= fqv[9];
	ctx->vsp=local+5;
	w=(pointer)SIGERROR(ctx,1,local+4); /*error*/
	local[4]= w;
	goto IF57626;
IF57625:
	local[4]= NIL;
IF57626:
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL57586;
WHX57587:
	local[4]= NIL;
BLK57588:
	w = NIL;
	local[2]= w;
	goto CON57473;
CON57557:
	local[2]= NIL;
CON57473:
	w = argv[0];
	local[0]= w;
BLK57409:
	ctx->vsp=local; return(local[0]);}

/*make-array*/
static pointer F57031make_array(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<1) maerror();
	ctx->vsp=local+0;
	n=parsekeyparams(fqv[10], &argv[1], n-1, local+0, 0);
	if (n & (1<<0)) goto KEY57670;
	local[0] = loadglobal(fqv[11]);
KEY57670:
	if (n & (1<<1)) goto KEY57677;
	local[1] = NIL;
KEY57677:
	if (n & (1<<2)) goto KEY57682;
	local[2] = NIL;
KEY57682:
	if (n & (1<<3)) goto KEY57687;
	local[3] = makeint((eusinteger_t)0L);
KEY57687:
	if (n & (1<<4)) goto KEY57692;
	local[4] = NIL;
KEY57692:
	if (n & (1<<5)) goto KEY57697;
	local[5] = NIL;
KEY57697:
	if (n & (1<<6)) goto KEY57702;
	local[6] = NIL;
KEY57702:
	if (n & (1<<7)) goto KEY57707;
	local[7] = NIL;
KEY57707:
	if (n & (1<<8)) goto KEY57712;
	local[8] = NIL;
KEY57712:
	if (n & (1<<9)) goto KEY57717;
	local[9] = NIL;
KEY57717:
	local[10]= NIL;
	local[11]= NIL;
	local[12]= NIL;
	local[13]= local[0];
	ctx->vsp=local+14;
	w=(pointer)CLASSP(ctx,1,local+13); /*classp*/
	if (w!=NIL) goto IF57730;
	local[13]= local[0];
	local[14]= local[13];
	w = fqv[12];
	if (memq(local[14],w)==NIL) goto IF57756;
	local[14]= loadglobal(fqv[13]);
	goto IF57757;
IF57756:
	local[14]= local[13];
	w = fqv[14];
	if (memq(local[14],w)==NIL) goto IF57769;
	local[14]= loadglobal(fqv[15]);
	goto IF57770;
IF57769:
	local[14]= local[13];
	w = fqv[16];
	if (memq(local[14],w)==NIL) goto IF57782;
	local[14]= loadglobal(fqv[17]);
	goto IF57783;
IF57782:
	local[14]= local[13];
	w = fqv[18];
	if (memq(local[14],w)==NIL) goto IF57795;
	local[14]= loadglobal(fqv[19]);
	goto IF57796;
IF57795:
	if (T==NIL) goto IF57808;
	local[14]= loadglobal(fqv[11]);
	goto IF57809;
IF57808:
	local[14]= NIL;
IF57809:
IF57796:
IF57783:
IF57770:
IF57757:
	w = local[14];
	local[0] = w;
	local[13]= local[0];
	goto IF57731;
IF57730:
	local[13]= NIL;
IF57731:
	w = argv[0];
	if (!isint(w)) goto CON57821;
	local[13]= local[0];
	local[14]= argv[0];
	ctx->vsp=local+15;
	w=(pointer)INSTANTIATE(ctx,2,local+13); /*instantiate*/
	local[11] = w;
	local[12] = local[11];
	local[13]= argv[0];
	ctx->vsp=local+14;
	w=(pointer)LIST(ctx,1,local+13); /*list*/
	argv[0] = w;
	local[13]= argv[0];
	goto CON57819;
CON57821:
	local[13]= loadglobal(fqv[20]);
	ctx->vsp=local+14;
	w=(pointer)INSTANTIATE(ctx,1,local+13); /*instantiate*/
	local[12] = w;
	local[13]= makeint((eusinteger_t)0L);
	local[14]= argv[0];
	ctx->vsp=local+15;
	w=(pointer)LENGTH(ctx,1,local+14); /*length*/
	local[14]= w;
	local[15]= (pointer)get_sym_func(fqv[8]);
	local[16]= argv[0];
	ctx->vsp=local+17;
	w=(pointer)APPLY(ctx,2,local+15); /*apply*/
	local[15]= w;
	local[16]= local[14];
	local[17]= makeint((eusinteger_t)7L);
	ctx->vsp=local+18;
	w=(pointer)GREATERP(ctx,2,local+16); /*>*/
	if (w==NIL) goto IF57885;
	local[16]= fqv[21];
	ctx->vsp=local+17;
	w=(pointer)SIGERROR(ctx,1,local+16); /*error*/
	local[16]= w;
	goto IF57886;
IF57885:
	local[16]= NIL;
IF57886:
	local[16]= (pointer)get_sym_func(fqv[22]);
	local[17]= argv[0];
	ctx->vsp=local+18;
	w=(*ftab[1])(ctx,2,local+16,&ftab[1],fqv[23]); /*every*/
	if (w!=NIL) goto IF57895;
	local[16]= fqv[24];
	ctx->vsp=local+17;
	w=(pointer)SIGERROR(ctx,1,local+16); /*error*/
	local[16]= w;
	goto IF57896;
IF57895:
	local[16]= NIL;
IF57896:
	local[16]= local[2];
	ctx->vsp=local+17;
	w=(pointer)VECTORP(ctx,1,local+16); /*vectorp*/
	if (w==NIL) goto CON57916;
	local[16]= local[2];
	goto CON57914;
CON57916:
	local[16]= local[2];
	ctx->vsp=local+17;
	w=(pointer)ARRAYP(ctx,1,local+16); /*arrayp*/
	if (w==NIL) goto CON57924;
	local[16]= local[2]->c.obj.iv[1];
	goto CON57914;
CON57924:
	local[16]= local[0];
	local[17]= makeint((eusinteger_t)1L);
	local[18]= local[15];
	ctx->vsp=local+19;
	w=(pointer)MAX(ctx,2,local+17); /*max*/
	local[17]= w;
	ctx->vsp=local+18;
	w=(pointer)INSTANTIATE(ctx,2,local+16); /*instantiate*/
	local[16]= w;
	goto CON57914;
CON57936:
	local[16]= NIL;
CON57914:
	local[11] = local[16];
	local[16]= local[14];
	local[17]= local[16];
	*(ovafptr(local[12],fqv[25])) = local[17];
	local[16]= local[11];
	local[17]= local[16];
	w = local[12];
	w->c.obj.iv[1] = local[17];
	w = local[1];
	if (!isnum(w)) goto IF57965;
	local[16]= local[1];
	goto IF57966;
IF57965:
	if (local[1]==NIL) goto IF57972;
	local[16]= local[15];
	goto IF57973;
IF57972:
	local[16]= NIL;
IF57973:
IF57966:
	local[17]= local[16];
	w = local[12];
	w->c.obj.iv[3] = local[17];
	local[16]= local[3];
	local[17]= local[16];
	w = local[12];
	w->c.obj.iv[4] = local[17];
	local[16]= makeint((eusinteger_t)0L);
TAG58006:
	local[17]= local[16];
	local[18]= local[14];
	ctx->vsp=local+19;
	w=(pointer)GREQP(ctx,2,local+17); /*>=*/
	if (w==NIL) goto IF58011;
	w = NIL;
	ctx->vsp=local+17;
	local[16]=w;
	goto BLK57991;
	goto IF58012;
IF58011:
	local[17]= NIL;
IF58012:
	local[17]= local[12];
	local[18]= loadglobal(fqv[20]);
	local[19]= local[16];
	local[20]= makeint((eusinteger_t)5L);
	ctx->vsp=local+21;
	w=(pointer)PLUS(ctx,2,local+19); /*+*/
	local[19]= w;
	local[20]= argv[0];
	local[21]= local[16];
	ctx->vsp=local+22;
	w=(pointer)ELT(ctx,2,local+20); /*elt*/
	local[20]= w;
	ctx->vsp=local+21;
	w=(pointer)SETSLOT(ctx,4,local+17); /*setslot*/
	local[17]= local[16];
	ctx->vsp=local+18;
	w=(pointer)ADD1(ctx,1,local+17); /*1+*/
	local[17]= w;
	local[16] = local[17];
	w = NIL;
	ctx->vsp=local+17;
	goto TAG58006;
	w = NIL;
	local[16]= w;
BLK57991:
	w = local[16];
	local[13]= w;
	goto CON57819;
CON57851:
	local[13]= NIL;
CON57819:
	if (local[6]==NIL) goto IF58071;
	local[13]= local[11];
	local[14]= local[6];
	ctx->vsp=local+15;
	w=(*ftab[2])(ctx,2,local+13,&ftab[2],fqv[26]); /*fill*/
	local[13]= w;
	goto IF58072;
IF58071:
	local[13]= NIL;
IF58072:
	if (local[5]==NIL) goto IF58087;
	local[13]= local[11];
	local[14]= makeint((eusinteger_t)0L);
	local[15]= argv[0];
	local[16]= local[5];
	ctx->vsp=local+17;
	w=(pointer)F57028fill_initial_contents(ctx,4,local+13); /*fill-initial-contents*/
	local[13]= w;
	goto IF58088;
IF58087:
	local[13]= NIL;
IF58088:
	w = local[12];
	local[0]= w;
BLK57652:
	ctx->vsp=local; return(local[0]);}

/*array-total-size*/
static pointer F57034array_total_size(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= *(ovafptr(argv[0],fqv[25]));
	local[1]= makeint((eusinteger_t)1L);
	local[2]= makeint((eusinteger_t)0L);
	local[3]= local[0];
WHL58154:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX58155;
	local[4]= local[1];
	local[5]= argv[0];
	local[6]= loadglobal(fqv[20]);
	local[7]= makeint((eusinteger_t)5L);
	w = local[2];
#if sun4 || vax || mips || i386 || alpha || x86_64 || ARM
	w=(pointer)((eusinteger_t)w-2);
#endif
	local[7]= (pointer)((eusinteger_t)local[7] + (eusinteger_t)w);
	ctx->vsp=local+8;
	w=(pointer)SLOT(ctx,3,local+5); /*slot*/
	local[5]= w;
	ctx->vsp=local+6;
	w=(pointer)TIMES(ctx,2,local+4); /***/
	local[1] = w;
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL58154;
WHX58155:
	local[4]= NIL;
BLK58156:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK58106:
	ctx->vsp=local; return(local[0]);}

/*fill-pointer*/
static pointer F57037fill_pointer(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)ARRAYP(ctx,1,local+0); /*arrayp*/
	if (w==NIL) goto IF58211;
	local[0]= *(ovafptr(argv[0],fqv[27]));
	goto IF58212;
IF58211:
	local[0]= fqv[28];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF58212:
	w = local[0];
	local[0]= w;
BLK58201:
	ctx->vsp=local; return(local[0]);}

/*array-rank*/
static pointer F57040array_rank(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w = *(ovafptr(argv[0],fqv[25]));
	local[0]= w;
BLK58225:
	ctx->vsp=local; return(local[0]);}

/*array-dimensions*/
static pointer F57043array_dimensions(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= *(ovafptr(argv[0],fqv[25]));
	local[1]= NIL;
WHL58264:
	local[2]= local[0];
	local[3]= makeint((eusinteger_t)0L);
	ctx->vsp=local+4;
	w=(pointer)GREATERP(ctx,2,local+2); /*>*/
	if (w==NIL) goto WHX58265;
	local[2]= argv[0];
	local[3]= loadglobal(fqv[20]);
	local[4]= makeint((eusinteger_t)5L);
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)SUB1(ctx,1,local+5); /*1-*/
	local[0] = w;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)PLUS(ctx,2,local+4); /*+*/
	local[4]= w;
	ctx->vsp=local+5;
	w=(pointer)SLOT(ctx,3,local+2); /*slot*/
	local[2]= w;
	w = local[1];
	ctx->vsp=local+3;
	local[1] = cons(ctx,local[2],w);
	goto WHL58264;
WHX58265:
	local[2]= NIL;
BLK58266:
	w = local[1];
	local[0]= w;
BLK58240:
	ctx->vsp=local; return(local[0]);}

/*array-dimension*/
static pointer F57046array_dimension(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)ARRAYP(ctx,1,local+0); /*arrayp*/
	if (w==NIL) goto IF58317;
	local[0]= argv[0];
	local[1]= loadglobal(fqv[20]);
	local[2]= makeint((eusinteger_t)5L);
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)PLUS(ctx,2,local+2); /*+*/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SLOT(ctx,3,local+0); /*slot*/
	local[0]= w;
	goto IF58318;
IF58317:
	local[0]= NIL;
IF58318:
	w = local[0];
	local[0]= w;
BLK58305:
	ctx->vsp=local; return(local[0]);}

/*array-vector*/
static pointer F57049array_vector(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)VECTORP(ctx,1,local+0); /*vectorp*/
	if (w==NIL) goto CON58349;
	local[0]= argv[0];
	goto CON58347;
CON58349:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)ARRAYP(ctx,1,local+0); /*arrayp*/
	if (w==NIL) goto CON58357;
	local[0]= argv[0]->c.obj.iv[1];
	goto CON58347;
CON58357:
	local[0]= fqv[29];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
	goto CON58347;
CON58369:
	local[0]= NIL;
CON58347:
	w = local[0];
	local[0]= w;
BLK58337:
	ctx->vsp=local; return(local[0]);}

/*row-major-aref*/
static pointer F57052row_major_aref(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)AREF(ctx,2,local+0); /*aref*/
	local[0]= w;
BLK58377:
	ctx->vsp=local; return(local[0]);}

/*list-dimensions*/
static pointer F57055list_dimensions(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	w = (w)->c.cons.car;
	if (!iscons(w)) goto CON58411;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	w=argv[0];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[1]= (w)->c.cons.car;
	ctx->vsp=local+2;
	w=(pointer)F57055list_dimensions(ctx,1,local+1); /*list-dimensions*/
	ctx->vsp=local+1;
	local[0]= cons(ctx,local[0],w);
	goto CON58409;
CON58411:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)LENGTH(ctx,1,local+0); /*length*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)LIST(ctx,1,local+0); /*list*/
	local[0]= w;
	goto CON58409;
CON58432:
	local[0]= NIL;
CON58409:
	w = local[0];
	local[0]= w;
BLK58399:
	ctx->vsp=local; return(local[0]);}

/*read-array*/
static pointer F57058read_array(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= T;
	local[2]= T;
	local[3]= T;
	ctx->vsp=local+4;
	w=(pointer)READ(ctx,4,local+0); /*read*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F57055list_dimensions(ctx,1,local+1); /*list-dimensions*/
	local[1]= w;
	local[2]= fqv[30];
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)F57031make_array(ctx,3,local+1); /*make-array*/
	local[0]= w;
BLK58443:
	ctx->vsp=local; return(local[0]);}

/*read-float-array*/
static pointer F57061read_float_array(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= T;
	local[2]= T;
	local[3]= T;
	ctx->vsp=local+4;
	w=(pointer)READ(ctx,4,local+0); /*read*/
	local[0]= w;
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)NUMEQUAL(ctx,2,local+1); /*=*/
	if (w==NIL) goto IF58508;
	local[1]= fqv[17];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,2,local+1); /*apply*/
	local[1]= w;
	goto IF58509;
IF58508:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F57055list_dimensions(ctx,1,local+1); /*list-dimensions*/
	local[1]= w;
	local[2]= fqv[3];
	local[3]= fqv[4];
	local[4]= fqv[30];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F57031make_array(ctx,5,local+1); /*make-array*/
	local[1]= w;
IF58509:
	w = local[1];
	local[0]= w;
BLK58481:
	ctx->vsp=local; return(local[0]);}

/*read-integer-array*/
static pointer F57064read_integer_array(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= T;
	local[2]= T;
	local[3]= T;
	ctx->vsp=local+4;
	w=(pointer)READ(ctx,4,local+0); /*read*/
	local[0]= w;
	local[1]= argv[2];
	local[2]= makeint((eusinteger_t)0L);
	ctx->vsp=local+3;
	w=(pointer)NUMEQUAL(ctx,2,local+1); /*=*/
	if (w==NIL) goto IF58561;
	local[1]= fqv[19];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)APPLY(ctx,2,local+1); /*apply*/
	local[1]= w;
	goto IF58562;
IF58561:
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F57055list_dimensions(ctx,1,local+1); /*list-dimensions*/
	local[1]= w;
	local[2]= fqv[3];
	local[3]= fqv[5];
	local[4]= fqv[30];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F57031make_array(ctx,5,local+1); /*make-array*/
	local[1]= w;
IF58562:
	w = local[1];
	local[0]= w;
BLK58534:
	ctx->vsp=local; return(local[0]);}

/*float-vector-p*/
static pointer F57074float_vector_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[17]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK58597:
	ctx->vsp=local; return(local[0]);}

/*integer-vector-p*/
static pointer F57077integer_vector_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[19]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK58613:
	ctx->vsp=local; return(local[0]);}

/*bit-vector-p*/
static pointer F57080bit_vector_p(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[15]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
BLK58629:
	ctx->vsp=local; return(local[0]);}

/*matrixp*/
static pointer F57083matrixp(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= loadglobal(fqv[20]);
	ctx->vsp=local+2;
	w=(pointer)DERIVEDP(ctx,2,local+0); /*derivedp*/
	local[0]= w;
	if (w==NIL) goto AND58655;
	local[0]= *(ovafptr(argv[0],fqv[31]));
	ctx->vsp=local+1;
	w=(pointer)F57074float_vector_p(ctx,1,local+0); /*float-vector-p*/
	local[0]= w;
AND58655:
	w = local[0];
	local[0]= w;
BLK58645:
	ctx->vsp=local; return(local[0]);}

/*make-matrix*/
static pointer F57086make_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT58673;}
	local[0]= NIL;
ENT58673:
ENT58672:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)LIST(ctx,2,local+1); /*list*/
	local[1]= w;
	local[2]= fqv[3];
	local[3]= fqv[4];
	local[4]= fqv[30];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F57031make_array(ctx,5,local+1); /*make-array*/
	local[0]= w;
BLK58670:
	ctx->vsp=local; return(local[0]);}

/*matrix-row*/
static pointer F57089matrix_row(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F57040array_rank(ctx,1,local+0); /*array-rank*/
	local[0]= w;
	if (makeint((eusinteger_t)2L)!=local[0]) goto IF58717;
	local[0]= *(ovafptr(argv[0],fqv[31]));
	local[1]= *(ovafptr(argv[0],fqv[32]));
	local[2]= argv[1];
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[1]= w;
	local[2]= *(ovafptr(argv[0],fqv[32]));
	local[3]= argv[1];
	ctx->vsp=local+4;
	w=(pointer)ADD1(ctx,1,local+3); /*1+*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)TIMES(ctx,2,local+2); /***/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)SUBSEQ(ctx,3,local+0); /*subseq*/
	local[0]= w;
	goto IF58718;
IF58717:
	local[0]= NIL;
IF58718:
	w = local[0];
	local[0]= w;
BLK58704:
	ctx->vsp=local; return(local[0]);}

/*matrix-column*/
static pointer F57092matrix_column(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F57040array_rank(ctx,1,local+0); /*array-rank*/
	local[0]= w;
	if (makeint((eusinteger_t)2L)!=local[0]) goto IF58763;
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= argv[0]->c.obj.iv[6];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)GETCLASS(ctx,1,local+3); /*class*/
	local[3]= w;
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)INSTANTIATE(ctx,2,local+3); /*instantiate*/
	local[3]= w;
	local[4]= makeint((eusinteger_t)0L);
	local[5]= local[0];
WHL58836:
	local[6]= local[4];
	w = local[5];
	if ((eusinteger_t)local[6] >= (eusinteger_t)w) goto WHX58837;
	local[6]= local[3];
	local[7]= local[4];
	local[8]= local[2];
	local[9]= argv[1];
	local[10]= local[4];
	local[11]= local[1];
	ctx->vsp=local+12;
	w=(pointer)TIMES(ctx,2,local+10); /***/
	local[10]= w;
	ctx->vsp=local+11;
	w=(pointer)PLUS(ctx,2,local+9); /*+*/
	local[9]= w;
	ctx->vsp=local+10;
	w=(pointer)AREF(ctx,2,local+8); /*aref*/
	local[8]= w;
	ctx->vsp=local+9;
	w=(pointer)ASET(ctx,3,local+6); /*aset*/
	local[6]= local[4];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[4] = w;
	goto WHL58836;
WHX58837:
	local[6]= NIL;
BLK58838:
	w = NIL;
	w = local[3];
	local[0]= w;
	goto IF58764;
IF58763:
	local[0]= NIL;
IF58764:
	w = local[0];
	local[0]= w;
BLK58750:
	ctx->vsp=local; return(local[0]);}

/*set-matrix-row*/
static pointer F57095set_matrix_row(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F57040array_rank(ctx,1,local+0); /*array-rank*/
	local[0]= w;
	if (makeint((eusinteger_t)2L)!=local[0]) goto IF58898;
	local[0]= *(ovafptr(argv[0],fqv[31]));
	local[1]= argv[2];
	local[2]= fqv[33];
	local[3]= *(ovafptr(argv[0],fqv[32]));
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)TIMES(ctx,2,local+3); /***/
	local[3]= w;
	local[4]= fqv[34];
	local[5]= *(ovafptr(argv[0],fqv[32]));
	local[6]= argv[1];
	ctx->vsp=local+7;
	w=(pointer)ADD1(ctx,1,local+6); /*1+*/
	local[6]= w;
	ctx->vsp=local+7;
	w=(pointer)TIMES(ctx,2,local+5); /***/
	local[5]= w;
	ctx->vsp=local+6;
	w=(*ftab[3])(ctx,6,local+0,&ftab[3],fqv[35]); /*replace*/
	local[0]= w;
	goto IF58899;
IF58898:
	local[0]= NIL;
IF58899:
	w = argv[0];
	local[0]= w;
BLK58883:
	ctx->vsp=local; return(local[0]);}

/*set-matrix-column*/
static pointer F57098set_matrix_column(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(pointer)F57040array_rank(ctx,1,local+0); /*array-rank*/
	local[0]= w;
	if (makeint((eusinteger_t)2L)!=local[0]) goto IF58955;
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= argv[0]->c.obj.iv[6];
	local[2]= argv[0]->c.obj.iv[1];
	local[3]= makeint((eusinteger_t)0L);
	local[4]= local[0];
WHL59016:
	local[5]= local[3];
	w = local[4];
	if ((eusinteger_t)local[5] >= (eusinteger_t)w) goto WHX59017;
	local[5]= local[2];
	local[6]= argv[1];
	local[7]= local[3];
	local[8]= local[1];
	ctx->vsp=local+9;
	w=(pointer)TIMES(ctx,2,local+7); /***/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)PLUS(ctx,2,local+6); /*+*/
	local[6]= w;
	local[7]= argv[2];
	local[8]= local[3];
	ctx->vsp=local+9;
	w=(pointer)ELT(ctx,2,local+7); /*elt*/
	local[7]= w;
	ctx->vsp=local+8;
	w=(pointer)ASET(ctx,3,local+5); /*aset*/
	local[5]= local[3];
	ctx->vsp=local+6;
	w=(pointer)ADD1(ctx,1,local+5); /*1+*/
	local[3] = w;
	goto WHL59016;
WHX59017:
	local[5]= NIL;
BLK59018:
	w = NIL;
	local[0]= w;
	goto IF58956;
IF58955:
	local[0]= NIL;
IF58956:
	w = argv[0];
	local[0]= w;
BLK58940:
	ctx->vsp=local; return(local[0]);}

/*replace-matrix*/
static pointer F57101replace_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0]->c.obj.iv[1];
	local[1]= argv[1]->c.obj.iv[1];
	ctx->vsp=local+2;
	w=(*ftab[3])(ctx,2,local+0,&ftab[3],fqv[35]); /*replace*/
	w = argv[0];
	local[0]= w;
BLK59063:
	ctx->vsp=local; return(local[0]);}

/*copy-matrix*/
static pointer F57104copy_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0]->c.obj.iv[5];
	local[1]= argv[0]->c.obj.iv[6];
	ctx->vsp=local+2;
	w=(pointer)F57086make_matrix(ctx,2,local+0); /*make-matrix*/
	local[0]= w;
	local[1]= local[0]->c.obj.iv[1];
	local[2]= argv[0]->c.obj.iv[1];
	ctx->vsp=local+3;
	w=(*ftab[3])(ctx,2,local+1,&ftab[3],fqv[35]); /*replace*/
	w = local[0];
	local[0]= w;
BLK59092:
	ctx->vsp=local; return(local[0]);}

/*scale-matrix*/
static pointer F57107scale_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
	if (n>=3) { local[0]=(argv[2]); goto ENT59143;}
	local[0]= argv[1];
	ctx->vsp=local+1;
	w=(pointer)F57104copy_matrix(ctx,1,local+0); /*copy-matrix*/
	local[0]= w;
ENT59143:
ENT59142:
	if (n>3) maerror();
	local[1]= argv[0];
	local[2]= argv[1]->c.obj.iv[1];
	local[3]= local[0]->c.obj.iv[1];
	ctx->vsp=local+4;
	w=(pointer)SCALEVEC(ctx,3,local+1); /*scale*/
	w = local[0];
	local[0]= w;
BLK59140:
	ctx->vsp=local; return(local[0]);}

/*matrix*/
static pointer F57110matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
RST59182:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-0);
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)LENGTH(ctx,1,local+1); /*length*/
	local[1]= w;
	local[2]= (pointer)get_sym_func(fqv[36]);
	local[3]= (pointer)get_sym_func(fqv[37]);
	local[4]= local[0];
	ctx->vsp=local+5;
	w=(pointer)MAPCAR(ctx,2,local+3); /*mapcar*/
	local[3]= w;
	ctx->vsp=local+4;
	w=(pointer)APPLY(ctx,2,local+2); /*apply*/
	local[2]= w;
	local[3]= local[0];
	ctx->vsp=local+4;
	w=(pointer)F57086make_matrix(ctx,3,local+1); /*make-matrix*/
	local[0]= w;
BLK59180:
	ctx->vsp=local; return(local[0]);}

/*acos*/
static pointer F57113acos(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= makeflt(1.0000000000000000000000e+00);
	local[1]= argv[0];
	local[2]= argv[0];
	ctx->vsp=local+3;
	w=(pointer)TIMES(ctx,2,local+1); /***/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)MINUS(ctx,2,local+0); /*-*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)SQRT(ctx,1,local+0); /*sqrt*/
	local[0]= w;
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(pointer)ATAN(ctx,2,local+0); /*atan*/
	local[0]= w;
BLK59208:
	ctx->vsp=local; return(local[0]);}

/*asin*/
static pointer F57116asin(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeflt(1.0000000000000000000000e+00);
	local[2]= argv[0];
	local[3]= argv[0];
	ctx->vsp=local+4;
	w=(pointer)TIMES(ctx,2,local+2); /***/
	local[2]= w;
	ctx->vsp=local+3;
	w=(pointer)MINUS(ctx,2,local+1); /*-*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)SQRT(ctx,1,local+1); /*sqrt*/
	local[1]= w;
	ctx->vsp=local+2;
	w=(pointer)ATAN(ctx,2,local+0); /*atan*/
	local[0]= w;
BLK59236:
	ctx->vsp=local; return(local[0]);}

/*unit-matrix*/
static pointer F57119unit_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<0) maerror();
	if (n>=1) { local[0]=(argv[0]); goto ENT59267;}
	local[0]= makeint((eusinteger_t)3L);
ENT59267:
ENT59266:
	if (n>1) maerror();
	local[1]= local[0];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)F57086make_matrix(ctx,2,local+1); /*make-matrix*/
	local[1]= w;
	local[2]= makeint((eusinteger_t)0L);
	local[3]= local[0];
WHL59316:
	local[4]= local[2];
	w = local[3];
	if ((eusinteger_t)local[4] >= (eusinteger_t)w) goto WHX59317;
	local[4]= local[1];
	local[5]= local[2];
	local[6]= local[2];
	local[7]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+8;
	w=(pointer)ASET(ctx,4,local+4); /*aset*/
	local[4]= local[2];
	ctx->vsp=local+5;
	w=(pointer)ADD1(ctx,1,local+4); /*1+*/
	local[2] = w;
	goto WHL59316;
WHX59317:
	local[4]= NIL;
BLK59318:
	w = NIL;
	w = local[1];
	local[0]= w;
BLK59264:
	ctx->vsp=local; return(local[0]);}

/*m***/
static pointer F57122m__(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n<2) maerror();
RST59350:
	ctx->vsp=local+0;
	local[0]= minilist(ctx,&argv[n],n-2);
	local[1]= NIL;
	local[2]= NIL;
	local[3]= argv[0];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)MATTIMES(ctx,2,local+3); /*m**/
	local[2] = w;
	local[3]= NIL;
	local[4]= local[0];
WHL59394:
	if (local[4]==NIL) goto WHX59395;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[5]= (w)->c.cons.car;
	w=local[4];
	if (!iscons(w) && w!=NIL) error(E_NOLIST);
	local[4] = (w)->c.cons.cdr;
	w = local[5];
	local[3] = w;
	local[5]= local[2];
	local[6]= local[3];
	local[7]= local[2];
	ctx->vsp=local+8;
	w=(pointer)MATTIMES(ctx,3,local+5); /*m**/
	goto WHL59394;
WHX59395:
	local[5]= NIL;
BLK59396:
	w = NIL;
	w = local[2];
	local[0]= w;
BLK59348:
	ctx->vsp=local; return(local[0]);}

/*simultaneous-equation*/
static pointer F57125simultaneous_equation(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)F57046array_dimension(ctx,2,local+0); /*array-dimension*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(pointer)F57119unit_matrix(ctx,1,local+0); /*unit-matrix*/
	local[0]= w;
	local[1]= argv[0];
	local[2]= local[0];
	ctx->vsp=local+3;
	w=(pointer)LU_DECOMPOSE(ctx,2,local+1); /*lu-decompose*/
	local[1]= w;
	local[2]= local[0];
	local[3]= local[1];
	local[4]= argv[1];
	ctx->vsp=local+5;
	w=(pointer)LU_SOLVE(ctx,3,local+2); /*lu-solve*/
	local[0]= w;
BLK59456:
	ctx->vsp=local; return(local[0]);}

/*inverse-matrix*/
static pointer F57128inverse_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	local[1]= makeint((eusinteger_t)0L);
	ctx->vsp=local+2;
	w=(pointer)F57046array_dimension(ctx,2,local+0); /*array-dimension*/
	local[0]= w;
	local[1]= local[0];
	ctx->vsp=local+2;
	w=(pointer)F57119unit_matrix(ctx,1,local+1); /*unit-matrix*/
	local[1]= w;
	local[2]= argv[0];
	local[3]= local[1];
	ctx->vsp=local+4;
	w=(pointer)LU_DECOMPOSE(ctx,2,local+2); /*lu-decompose*/
	local[2]= w;
	local[3]= NIL;
	local[4]= local[0];
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)F57086make_matrix(ctx,2,local+4); /*make-matrix*/
	local[4]= w;
	local[5]= loadglobal(fqv[17]);
	local[6]= local[0];
	ctx->vsp=local+7;
	w=(pointer)INSTANTIATE(ctx,2,local+5); /*instantiate*/
	local[5]= w;
	local[6]= makeint((eusinteger_t)0L);
	if (local[2]!=NIL) goto IF59543;
	w = fqv[38];
	ctx->vsp=local+7;
	local[0]=w;
	goto BLK59495;
	goto IF59544;
IF59543:
	local[7]= NIL;
IF59544:
	local[7]= makeint((eusinteger_t)0L);
	local[8]= local[0];
WHL59578:
	local[9]= local[7];
	w = local[8];
	if ((eusinteger_t)local[9] >= (eusinteger_t)w) goto WHX59579;
	local[9]= local[5];
	local[10]= local[7];
	local[11]= makeflt(1.0000000000000000000000e+00);
	ctx->vsp=local+12;
	w=(pointer)ASET(ctx,3,local+9); /*aset*/
	local[9]= local[1];
	local[10]= local[2];
	local[11]= local[5];
	ctx->vsp=local+12;
	w=(pointer)LU_SOLVE(ctx,3,local+9); /*lu-solve*/
	local[3] = w;
	local[9]= makeint((eusinteger_t)0L);
	local[10]= local[0];
WHL59627:
	local[11]= local[9];
	w = local[10];
	if ((eusinteger_t)local[11] >= (eusinteger_t)w) goto WHX59628;
	local[11]= local[4];
	local[12]= local[9];
	local[13]= local[7];
	local[14]= local[3];
	local[15]= local[9];
	ctx->vsp=local+16;
	w=(pointer)AREF(ctx,2,local+14); /*aref*/
	local[14]= w;
	ctx->vsp=local+15;
	w=(pointer)ASET(ctx,4,local+11); /*aset*/
	local[11]= local[9];
	ctx->vsp=local+12;
	w=(pointer)ADD1(ctx,1,local+11); /*1+*/
	local[9] = w;
	goto WHL59627;
WHX59628:
	local[11]= NIL;
BLK59629:
	w = NIL;
	local[9]= local[5];
	local[10]= local[7];
	local[11]= makeflt(0.0000000000000000000000e+00);
	ctx->vsp=local+12;
	w=(pointer)ASET(ctx,3,local+9); /*aset*/
	local[9]= local[7];
	ctx->vsp=local+10;
	w=(pointer)ADD1(ctx,1,local+9); /*1+*/
	local[7] = w;
	goto WHL59578;
WHX59579:
	local[9]= NIL;
BLK59580:
	w = NIL;
	w = local[4];
	local[0]= w;
BLK59495:
	ctx->vsp=local; return(local[0]);}

/*vector-x*/
static pointer F57131vector_x(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	{ register eusinteger_t i=intval(makeint((eusinteger_t)0L));
	  w=makeflt(local[0]->c.fvec.fv[i]);}
	local[0]= w;
BLK59681:
	ctx->vsp=local; return(local[0]);}

/*vector-y*/
static pointer F57134vector_y(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	{ register eusinteger_t i=intval(makeint((eusinteger_t)1L));
	  w=makeflt(local[0]->c.fvec.fv[i]);}
	local[0]= w;
BLK59700:
	ctx->vsp=local; return(local[0]);}

/*vector-z*/
static pointer F57137vector_z(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	{ register eusinteger_t i=intval(makeint((eusinteger_t)2L));
	  w=makeflt(local[0]->c.fvec.fv[i]);}
	local[0]= w;
BLK59719:
	ctx->vsp=local; return(local[0]);}

/*v=*/
static pointer F57140v_(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(pointer)VDISTANCE(ctx,2,local+0); /*distance*/
	local[0]= w;
	ctx->vsp=local+1;
	w=(*ftab[4])(ctx,1,local+0,&ftab[4],fqv[39]); /*zerop*/
	local[0]= w;
BLK59738:
	ctx->vsp=local; return(local[0]);}

/*euler-matrix*/
static pointer F57143euler_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[0];
	local[1]= fqv[40];
	ctx->vsp=local+2;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+0); /*rotation-matrix*/
	local[0]= w;
	local[1]= local[0];
	local[2]= argv[1];
	local[3]= fqv[41];
	local[4]= NIL;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ROTMAT(ctx,5,local+1); /*rotate-matrix*/
	local[1]= local[0];
	local[2]= argv[2];
	local[3]= fqv[40];
	local[4]= NIL;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ROTMAT(ctx,5,local+1); /*rotate-matrix*/
	w = local[0];
	local[0]= w;
BLK59760:
	ctx->vsp=local; return(local[0]);}

/*rpy-matrix*/
static pointer F57146rpy_matrix(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=3) maerror();
	local[0]= argv[2];
	local[1]= fqv[42];
	ctx->vsp=local+2;
	w=(pointer)ROTATION_MATRIX(ctx,2,local+0); /*rotation-matrix*/
	local[0]= w;
	local[1]= local[0];
	local[2]= argv[1];
	local[3]= fqv[41];
	local[4]= T;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ROTMAT(ctx,5,local+1); /*rotate-matrix*/
	local[1]= local[0];
	local[2]= argv[0];
	local[3]= fqv[40];
	local[4]= T;
	local[5]= local[0];
	ctx->vsp=local+6;
	w=(pointer)ROTMAT(ctx,5,local+1); /*rotate-matrix*/
	w = local[0];
	local[0]= w;
BLK59811:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___array(ctx,n,argv,env)
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
	local[0]= fqv[43];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF59866;
	local[0]= fqv[44];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[45],w);
	goto IF59867;
IF59866:
	local[0]= fqv[46];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF59867:
	local[0]= fqv[47];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	addcmethod(ctx,module,M57230vectorclass_elmtype,fqv[2],fqv[48],fqv[49]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M57246vectorclass_element_type,fqv[3],fqv[48],fqv[50]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M57281vector_elmtype,fqv[2],fqv[11],fqv[51]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M57302vector_element_type,fqv[3],fqv[11],fqv[52]);
	ctx->vsp=local+0;
	addcmethod(ctx,module,M57353array_element_type,fqv[3],fqv[20],fqv[53]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[54],module,F57028fill_initial_contents,fqv[55]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[56],module,F57031make_array,fqv[57]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[58],module,F57034array_total_size,fqv[59]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[27],module,F57037fill_pointer,fqv[60]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[61],module,F57040array_rank,fqv[62]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[63],module,F57043array_dimensions,fqv[64]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[65],module,F57046array_dimension,fqv[66]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[67],module,F57049array_vector,fqv[68]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[69],module,F57052row_major_aref,fqv[70]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[71],module,F57055list_dimensions,fqv[72]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[73],module,F57058read_array,fqv[74]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[75],module,F57061read_float_array,fqv[76]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[77],module,F57064read_integer_array,fqv[78]);
	local[0]= makeint((eusinteger_t)35L);
	local[1]= makeint((eusinteger_t)65L);
	local[2]= fqv[73];
	ctx->vsp=local+3;
	w=(pointer)SETDISPMACRO(ctx,3,local+0); /*set-dispatch-macro-character*/
	local[0]= makeint((eusinteger_t)35L);
	local[1]= makeint((eusinteger_t)70L);
	local[2]= fqv[75];
	ctx->vsp=local+3;
	w=(pointer)SETDISPMACRO(ctx,3,local+0); /*set-dispatch-macro-character*/
	local[0]= makeint((eusinteger_t)35L);
	local[1]= makeint((eusinteger_t)73L);
	local[2]= fqv[77];
	ctx->vsp=local+3;
	w=(pointer)SETDISPMACRO(ctx,3,local+0); /*set-dispatch-macro-character*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[79],module,F57074float_vector_p,fqv[80]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[81],module,F57077integer_vector_p,fqv[82]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[83],module,F57080bit_vector_p,fqv[84]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[85],module,F57083matrixp,fqv[86]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[87],module,F57086make_matrix,fqv[88]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[89],module,F57089matrix_row,fqv[90]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[91],module,F57092matrix_column,fqv[92]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[93],module,F57095set_matrix_row,fqv[94]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[95],module,F57098set_matrix_column,fqv[96]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[97],module,F57101replace_matrix,fqv[98]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[99],module,F57104copy_matrix,fqv[100]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[101],module,F57107scale_matrix,fqv[102]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[103],module,F57110matrix,fqv[104]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[105],module,F57113acos,fqv[106]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[107],module,F57116asin,fqv[108]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[109],module,F57119unit_matrix,fqv[110]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[111],module,F57122m__,fqv[112]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[113],module,F57125simultaneous_equation,fqv[114]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[115],module,F57128inverse_matrix,fqv[116]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[117],module,F57131vector_x,fqv[118]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[119],module,F57134vector_y,fqv[120]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[121],module,F57137vector_z,fqv[122]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[123],module,F57140v_,fqv[124]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[125],module,F57143euler_matrix,fqv[126]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[127],module,F57146rpy_matrix,fqv[128]);
	local[0]= fqv[129];
	local[1]= fqv[130];
	ctx->vsp=local+2;
	w=(*ftab[5])(ctx,2,local+0,&ftab[5],fqv[131]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<6; i++) ftab[i]=fcallx;
}
